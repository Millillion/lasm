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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(uint8_t, uint64_t);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Crypto_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Crypto"};
static const lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Crypto_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Crypto_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Crypto_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Crypto_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_Crypto_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Crypto_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Crypto_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Crypto_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "CryptoKey"};
static const lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Crypto_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "SubtleCrypto"};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Crypto_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0(lean_object* v_o_3197_, lean_object* v_a_3198_){
_start:
{
if (lean_obj_tag(v_a_3198_) == 0)
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
lean_dec(v_o_3197_);
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___closed__1));
v___x_3201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
return v___x_3201_;
}
else
{
lean_object* v_tail_3202_; 
v_tail_3202_ = lean_ctor_get(v_a_3198_, 1);
if (lean_obj_tag(v_tail_3202_) == 0)
{
lean_object* v_head_3203_; lean_object* v___x_3204_; 
v_head_3203_ = lean_ctor_get(v_a_3198_, 0);
lean_inc(v_head_3203_);
lean_dec_ref_known(v_a_3198_, 2);
v___x_3204_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3197_, v_head_3203_);
return v___x_3204_;
}
else
{
lean_object* v_head_3205_; lean_object* v___x_3206_; 
lean_inc(v_tail_3202_);
v_head_3205_ = lean_ctor_get(v_a_3198_, 0);
lean_inc(v_head_3205_);
lean_dec_ref_known(v_a_3198_, 2);
v___x_3206_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3197_, v_head_3205_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v_o_3197_ = v_a_3207_;
v_a_3198_ = v_tail_3202_;
goto _start;
}
else
{
lean_dec(v_tail_3202_);
return v___x_3206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0___boxed(lean_object* v_o_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0(v_o_3209_, v_a_3210_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0(lean_object* v_path_3213_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
v___x_3217_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0_spec__0(v_a_3216_, v_path_3213_);
return v___x_3217_;
}
else
{
lean_dec(v_path_3213_);
return v___x_3215_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0___boxed(lean_object* v_path_3218_, lean_object* v_a_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0(v_path_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___lam__0(lean_object* v___x_3221_){
_start:
{
lean_object* v___x_3223_; 
v___x_3223_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0(v___x_3221_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___lam__0___boxed(lean_object* v___x_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lasm_JS_Web_Crypto_cast_x3f___lam__0(v___x_3224_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f(lean_object* v_v_3233_){
_start:
{
lean_object* v___f_3235_; lean_object* v___x_3236_; 
v___f_3235_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_cast_x3f___closed__2));
lean_inc(v_v_3233_);
v___x_3236_ = l_Lasm_JS_Web_Support_isInstance(v___f_3235_, v_v_3233_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3250_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3239_ = v___x_3236_;
v_isShared_3240_ = v_isSharedCheck_3250_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3236_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3250_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
uint8_t v___x_3241_; 
v___x_3241_ = lean_unbox(v_a_3237_);
lean_dec(v_a_3237_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
lean_dec(v_v_3233_);
v___x_3242_ = lean_box(0);
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v___x_3242_);
v___x_3244_ = v___x_3239_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
else
{
lean_object* v___x_3246_; lean_object* v___x_3248_; 
v___x_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3246_, 0, v_v_3233_);
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v___x_3246_);
v___x_3248_ = v___x_3239_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3246_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec(v_v_3233_);
v_a_3251_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3236_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3236_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_cast_x3f___boxed(lean_object* v_v_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lasm_JS_Web_Crypto_cast_x3f(v_v_3259_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object* v_self_3263_){
_start:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3265_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_subtle___closed__0));
v___x_3266_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3263_, v___x_3265_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3274_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3274_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3269_ = v___x_3266_;
v_isShared_3270_ = v_isSharedCheck_3274_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_dec(v___x_3266_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3274_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3272_; 
if (v_isShared_3270_ == 0)
{
v___x_3272_ = v___x_3269_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v_a_3267_);
v___x_3272_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
return v___x_3272_;
}
}
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
v_a_3275_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3266_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3266_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object* v_self_3283_, lean_object* v_a_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l_Lasm_JS_Web_Crypto_subtle(v_self_3283_);
return v_res_3285_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3286_; uint64_t v___x_3287_; 
v___x_3286_ = 0;
v___x_3287_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3286_);
return v___x_3287_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t v_await_3288_, uint64_t v_extra_3289_){
_start:
{
uint64_t v___x_3290_; uint64_t v___y_3292_; 
v___x_3290_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_3288_ == 0)
{
uint64_t v___x_3295_; 
v___x_3295_ = 0ULL;
v___y_3292_ = v___x_3295_;
goto v___jp_3291_;
}
else
{
uint64_t v___x_3296_; 
v___x_3296_ = 2ULL;
v___y_3292_ = v___x_3296_;
goto v___jp_3291_;
}
v___jp_3291_:
{
uint64_t v___x_3293_; uint64_t v___x_3294_; 
v___x_3293_ = lean_uint64_lor(v___x_3290_, v___y_3292_);
v___x_3294_ = lean_uint64_lor(v___x_3293_, v_extra_3289_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object* v_await_3297_, lean_object* v_extra_3298_){
_start:
{
uint8_t v_await_boxed_3299_; uint64_t v_extra_boxed_3300_; uint64_t v_res_3301_; lean_object* v_r_3302_; 
v_await_boxed_3299_ = lean_unbox(v_await_3297_);
v_extra_boxed_3300_ = lean_unbox_uint64(v_extra_3298_);
lean_dec_ref(v_extra_3298_);
v_res_3301_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v_await_boxed_3299_, v_extra_boxed_3300_);
v_r_3302_ = lean_box_uint64(v_res_3301_);
return v_r_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(lean_object* v_bytes_3303_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3303_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
v_a_3306_ = lean_ctor_get(v___x_3305_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3308_ = v___x_3305_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3305_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
else
{
return v___x_3305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_3314_, lean_object* v_a_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3314_);
lean_dec_ref(v_bytes_3314_);
return v_res_3316_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3317_; uint8_t v___x_3318_; uint64_t v___x_3319_; 
v___x_3317_ = 8ULL;
v___x_3318_ = 0;
v___x_3319_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v___x_3318_, v___x_3317_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object* v_o_3320_, lean_object* v_name_3321_, lean_object* v_args_3322_){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; uint64_t v___x_3327_; lean_object* v___x_3328_; 
v___x_3324_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3325_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3325_, 0, v_o_3320_);
lean_ctor_set(v___x_3325_, 1, v___x_3324_);
v___x_3326_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3326_, 0, v_name_3321_);
v___x_3327_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_3328_ = l_Lasm_JS_Value_invokeRaw(v___x_3325_, v___x_3326_, v_args_3322_, v___x_3327_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3330_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v___x_3330_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3329_);
lean_dec(v_a_3329_);
return v___x_3330_;
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
v_a_3331_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3328_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3328_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object* v_o_3339_, lean_object* v_name_3340_, lean_object* v_args_3341_, lean_object* v_a_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_o_3339_, v_name_3340_, v_args_3341_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object* v_self_3345_, lean_object* v_array_3346_){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3348_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_getRandomValues___closed__0));
v___x_3349_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3349_, 0, v_array_3346_);
v___x_3350_ = lean_unsigned_to_nat(1u);
v___x_3351_ = lean_mk_empty_array_with_capacity(v___x_3350_);
v___x_3352_ = lean_array_push(v___x_3351_, v___x_3349_);
v___x_3353_ = l_Lasm_JS_Web_Support_args(v___x_3352_);
v___x_3354_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_self_3345_, v___x_3348_, v___x_3353_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3356_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_a_3355_);
lean_dec_ref_known(v___x_3354_, 1);
v___x_3356_ = l_Lasm_JS_Web_Support_viewBytes(v_a_3355_);
return v___x_3356_;
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
v_a_3357_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3354_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3354_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object* v_self_3365_, lean_object* v_array_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lasm_JS_Web_Crypto_getRandomValues(v_self_3365_, v_array_3366_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(lean_object* v_d_3369_){
_start:
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_d_3369_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_d_3372_, lean_object* v_a_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(v_d_3372_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(lean_object* v_context_3375_, lean_object* v_d_3376_){
_start:
{
lean_object* v___x_3378_; 
v___x_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3378_, 0, v_d_3376_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3379_, lean_object* v_d_3380_, lean_object* v_a_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(v_context_3379_, v_d_3380_);
lean_dec_ref(v_context_3379_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object* v_context_3383_, lean_object* v_bytes_3384_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3384_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object* v_context_3387_, lean_object* v_bytes_3388_, lean_object* v_a_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(v_context_3387_, v_bytes_3388_);
lean_dec_ref(v_bytes_3388_);
lean_dec_ref(v_context_3387_);
return v_res_3390_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(uint8_t v_await_3391_, uint64_t v_extra_3392_){
_start:
{
uint64_t v___x_3393_; uint64_t v___y_3395_; 
v___x_3393_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_3391_ == 0)
{
uint64_t v___x_3398_; 
v___x_3398_ = 0ULL;
v___y_3395_ = v___x_3398_;
goto v___jp_3394_;
}
else
{
uint64_t v___x_3399_; 
v___x_3399_ = 2ULL;
v___y_3395_ = v___x_3399_;
goto v___jp_3394_;
}
v___jp_3394_:
{
uint64_t v___x_3396_; uint64_t v___x_3397_; 
v___x_3396_ = lean_uint64_lor(v___x_3393_, v___y_3395_);
v___x_3397_ = lean_uint64_lor(v___x_3396_, v_extra_3392_);
return v___x_3397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0___boxed(lean_object* v_await_3400_, lean_object* v_extra_3401_){
_start:
{
uint8_t v_await_boxed_3402_; uint64_t v_extra_boxed_3403_; uint64_t v_res_3404_; lean_object* v_r_3405_; 
v_await_boxed_3402_ = lean_unbox(v_await_3400_);
v_extra_boxed_3403_ = lean_unbox_uint64(v_extra_3401_);
lean_dec_ref(v_extra_3401_);
v_res_3404_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v_await_boxed_3402_, v_extra_boxed_3403_);
v_r_3405_ = lean_box_uint64(v_res_3404_);
return v_r_3405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(lean_object* v_context_3407_, lean_object* v_d_3408_){
_start:
{
lean_object* v___y_3411_; lean_object* v___y_3412_; 
if (lean_obj_tag(v_d_3408_) == 4)
{
lean_object* v_s_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3423_; 
v_s_3416_ = lean_ctor_get(v_d_3408_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_d_3408_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3418_ = v_d_3408_;
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_s_3416_);
lean_dec(v_d_3408_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3423_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
lean_ctor_set_tag(v___x_3418_, 0);
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_s_3416_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
}
else
{
lean_object* v___x_3424_; lean_object* v_received_3426_; 
v___x_3424_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
if (lean_obj_tag(v_d_3408_) == 9)
{
lean_object* v_value_3440_; lean_object* v_description_3441_; uint8_t v___x_3442_; 
v_value_3440_ = lean_ctor_get(v_d_3408_, 0);
v_description_3441_ = lean_ctor_get(v_d_3408_, 1);
v___x_3442_ = lean_string_dec_eq(v_description_3441_, v___x_3424_);
if (v___x_3442_ == 0)
{
goto v___jp_3438_;
}
else
{
uint32_t v___x_3443_; uint64_t v___x_3444_; lean_object* v___x_3445_; uint32_t v___x_3446_; lean_object* v___x_3447_; 
lean_inc_n(v_value_3440_, 2);
lean_dec_ref_known(v_d_3408_, 2);
v___x_3443_ = 206;
v___x_3444_ = 0ULL;
v___x_3445_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3445_, 0, v_value_3440_);
lean_ctor_set(v___x_3445_, 1, v___x_3424_);
v___x_3446_ = lasm_js_value_handle(v_value_3440_);
lean_dec(v_value_3440_);
v___x_3447_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3443_, v___x_3444_, v___x_3445_, v___x_3446_);
lean_dec_ref_known(v___x_3445_, 2);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; uint8_t v___x_3449_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3447_, 1);
v___x_3449_ = lean_string_validate_utf8(v_a_3448_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; lean_object* v___x_3451_; 
lean_dec(v_a_3448_);
v___x_3450_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3451_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3450_);
v_received_3426_ = v___x_3451_;
goto v___jp_3425_;
}
else
{
lean_object* v___x_3452_; 
v___x_3452_ = lean_string_from_utf8_unchecked(v_a_3448_);
v_received_3426_ = v___x_3452_;
goto v___jp_3425_;
}
}
else
{
lean_object* v___x_3453_; 
lean_dec_ref_known(v___x_3447_, 1);
v___x_3453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3426_ = v___x_3453_;
goto v___jp_3425_;
}
}
}
else
{
goto v___jp_3438_;
}
v___jp_3425_:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_3427_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3428_ = lean_string_append(v___x_3427_, v_context_3407_);
v___x_3429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3430_ = lean_string_append(v___x_3428_, v___x_3429_);
v___x_3431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0));
v___x_3432_ = lean_string_append(v___x_3430_, v___x_3431_);
v___x_3433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3434_ = lean_string_append(v___x_3432_, v___x_3433_);
v___x_3435_ = lean_string_append(v___x_3434_, v_received_3426_);
lean_dec_ref(v_received_3426_);
v___x_3436_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_3436_ == 0)
{
lean_object* v___x_3437_; 
v___x_3437_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___y_3411_ = v___x_3435_;
v___y_3412_ = v___x_3437_;
goto v___jp_3410_;
}
else
{
v___y_3411_ = v___x_3435_;
v___y_3412_ = v___x_3424_;
goto v___jp_3410_;
}
}
v___jp_3438_:
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Lasm_JS_Data_describe(v_d_3408_);
v_received_3426_ = v___x_3439_;
goto v___jp_3425_;
}
}
v___jp_3410_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3413_ = lean_string_append(v___y_3411_, v___y_3412_);
v___x_3414_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
v___x_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3454_, lean_object* v_d_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3454_, v_d_3455_);
lean_dec_ref(v_context_3454_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(lean_object* v_context_3458_, lean_object* v_bytes_3459_){
_start:
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3459_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3463_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3463_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3458_, v_a_3462_);
return v___x_3463_;
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
v_a_3464_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3461_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3461_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1___boxed(lean_object* v_context_3472_, lean_object* v_bytes_3473_, lean_object* v_a_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v_context_3472_, v_bytes_3473_);
lean_dec_ref(v_bytes_3473_);
lean_dec_ref(v_context_3472_);
return v_res_3475_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3476_; uint8_t v___x_3477_; uint64_t v___x_3478_; 
v___x_3476_ = 8ULL;
v___x_3477_ = 0;
v___x_3478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v___x_3477_, v___x_3476_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(lean_object* v_o_3480_, lean_object* v_name_3481_, lean_object* v_args_3482_){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; uint64_t v___x_3487_; lean_object* v___x_3488_; 
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3485_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_o_3480_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
lean_inc_ref(v_name_3481_);
v___x_3486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3486_, 0, v_name_3481_);
v___x_3487_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0);
v___x_3488_ = l_Lasm_JS_Value_invokeRaw(v___x_3485_, v___x_3486_, v_args_3482_, v___x_3487_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_a_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
lean_dec_ref_known(v___x_3488_, 1);
v___x_3490_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_3491_ = lean_string_append(v___x_3490_, v_name_3481_);
lean_dec_ref(v_name_3481_);
v___x_3492_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v___x_3491_, v_a_3489_);
lean_dec(v_a_3489_);
lean_dec_ref(v___x_3491_);
return v___x_3492_;
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec_ref(v_name_3481_);
v_a_3493_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3488_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3488_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___boxed(lean_object* v_o_3501_, lean_object* v_name_3502_, lean_object* v_args_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_o_3501_, v_name_3502_, v_args_3503_);
return v_res_3505_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2(void){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__1));
v___x_3510_ = l_Lasm_JS_Web_Support_args(v___x_3509_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID(lean_object* v_self_3511_){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3513_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__0));
v___x_3514_ = lean_obj_once(&l_Lasm_JS_Web_Crypto_randomUUID___closed__2, &l_Lasm_JS_Web_Crypto_randomUUID___closed__2_once, _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2);
v___x_3515_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_self_3511_, v___x_3513_, v___x_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID___boxed(lean_object* v_self_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lasm_JS_Web_Crypto_randomUUID(v_self_3516_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f(lean_object* v_v_3525_){
_start:
{
lean_object* v___f_3527_; lean_object* v___x_3528_; 
v___f_3527_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_cast_x3f___closed__2));
lean_inc(v_v_3525_);
v___x_3528_ = l_Lasm_JS_Web_Support_isInstance(v___f_3527_, v_v_3525_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3542_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3531_ = v___x_3528_;
v_isShared_3532_ = v_isSharedCheck_3542_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3528_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3542_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
uint8_t v___x_3533_; 
v___x_3533_ = lean_unbox(v_a_3529_);
lean_dec(v_a_3529_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; lean_object* v___x_3536_; 
lean_dec(v_v_3525_);
v___x_3534_ = lean_box(0);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v___x_3534_);
v___x_3536_ = v___x_3531_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
else
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3538_, 0, v_v_3525_);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v___x_3538_);
v___x_3540_ = v___x_3531_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec(v_v_3525_);
v_a_3543_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3528_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3528_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_cast_x3f___boxed(lean_object* v_v_3551_, lean_object* v_a_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Lasm_JS_Web_CryptoKey_cast_x3f(v_v_3551_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(lean_object* v_context_3555_, lean_object* v_d_3556_){
_start:
{
lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3565_; lean_object* v_received_3566_; lean_object* v___y_3582_; 
if (lean_obj_tag(v_d_3556_) == 4)
{
lean_object* v_s_3609_; lean_object* v___x_3610_; uint8_t v___x_3611_; 
v_s_3609_ = lean_ctor_get(v_d_3556_, 0);
v___x_3610_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_3611_ = lean_string_dec_eq(v_s_3609_, v___x_3610_);
if (v___x_3611_ == 0)
{
lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3612_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_3613_ = lean_string_dec_eq(v_s_3609_, v___x_3612_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; uint8_t v___x_3615_; 
v___x_3614_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_3615_ = lean_string_dec_eq(v_s_3609_, v___x_3614_);
if (v___x_3615_ == 0)
{
goto v___jp_3584_;
}
else
{
uint8_t v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
lean_dec_ref_known(v_d_3556_, 1);
v___x_3616_ = 2;
v___x_3617_ = lean_box(v___x_3616_);
v___x_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
return v___x_3618_;
}
}
else
{
uint8_t v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
lean_dec_ref_known(v_d_3556_, 1);
v___x_3619_ = 1;
v___x_3620_ = lean_box(v___x_3619_);
v___x_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
return v___x_3621_;
}
}
else
{
uint8_t v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
lean_dec_ref_known(v_d_3556_, 1);
v___x_3622_ = 0;
v___x_3623_ = lean_box(v___x_3622_);
v___x_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
return v___x_3624_;
}
}
else
{
goto v___jp_3584_;
}
v___jp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3561_ = lean_string_append(v___y_3559_, v___y_3560_);
v___x_3562_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
v___x_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
return v___x_3563_;
}
v___jp_3564_:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v___x_3567_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3568_ = lean_string_append(v___x_3567_, v_context_3555_);
v___x_3569_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3570_ = lean_string_append(v___x_3568_, v___x_3569_);
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___closed__1));
v___x_3572_ = lean_string_append(v___x_3570_, v___x_3571_);
v___x_3573_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3574_ = lean_string_append(v___x_3572_, v___x_3573_);
v___x_3575_ = lean_string_append(v___x_3574_, v_received_3566_);
lean_dec_ref(v_received_3566_);
v___x_3576_ = lean_string_utf8_byte_size(v___y_3565_);
v___x_3577_ = lean_unsigned_to_nat(0u);
v___x_3578_ = lean_nat_dec_eq(v___x_3576_, v___x_3577_);
if (v___x_3578_ == 0)
{
lean_object* v___x_3579_; 
v___x_3579_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0));
v___y_3559_ = v___x_3575_;
v___y_3560_ = v___x_3579_;
goto v___jp_3558_;
}
else
{
lean_object* v___x_3580_; 
v___x_3580_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_3559_ = v___x_3575_;
v___y_3560_ = v___x_3580_;
goto v___jp_3558_;
}
}
v___jp_3581_:
{
lean_object* v___x_3583_; 
v___x_3583_ = l_Lasm_JS_Data_describe(v_d_3556_);
v___y_3565_ = v___y_3582_;
v_received_3566_ = v___x_3583_;
goto v___jp_3564_;
}
v___jp_3584_:
{
lean_object* v___x_3585_; 
v___x_3585_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__0));
if (lean_obj_tag(v_d_3556_) == 9)
{
lean_object* v_value_3586_; lean_object* v_description_3587_; lean_object* v___x_3588_; uint8_t v___x_3589_; 
v_value_3586_ = lean_ctor_get(v_d_3556_, 0);
v_description_3587_ = lean_ctor_get(v_d_3556_, 1);
v___x_3588_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3589_ = lean_string_dec_eq(v_description_3587_, v___x_3588_);
if (v___x_3589_ == 0)
{
v___y_3582_ = v___x_3585_;
goto v___jp_3581_;
}
else
{
lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3606_; 
lean_inc(v_value_3586_);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_d_3556_);
if (v_isSharedCheck_3606_ == 0)
{
lean_object* v_unused_3607_; lean_object* v_unused_3608_; 
v_unused_3607_ = lean_ctor_get(v_d_3556_, 1);
lean_dec(v_unused_3607_);
v_unused_3608_ = lean_ctor_get(v_d_3556_, 0);
lean_dec(v_unused_3608_);
v___x_3591_ = v_d_3556_;
v_isShared_3592_ = v_isSharedCheck_3606_;
goto v_resetjp_3590_;
}
else
{
lean_dec(v_d_3556_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3606_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
uint32_t v___x_3593_; uint64_t v___x_3594_; lean_object* v___x_3596_; 
v___x_3593_ = 206;
v___x_3594_ = 0ULL;
lean_inc(v_value_3586_);
if (v_isShared_3592_ == 0)
{
lean_ctor_set(v___x_3591_, 1, v___x_3588_);
v___x_3596_ = v___x_3591_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_value_3586_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v___x_3588_);
v___x_3596_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
uint32_t v___x_3597_; lean_object* v___x_3598_; 
v___x_3597_ = lasm_js_value_handle(v_value_3586_);
lean_dec(v_value_3586_);
v___x_3598_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3593_, v___x_3594_, v___x_3596_, v___x_3597_);
lean_dec_ref(v___x_3596_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; uint8_t v___x_3600_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
v___x_3600_ = lean_string_validate_utf8(v_a_3599_);
if (v___x_3600_ == 0)
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_dec(v_a_3599_);
v___x_3601_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3602_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3601_);
v___y_3565_ = v___x_3585_;
v_received_3566_ = v___x_3602_;
goto v___jp_3564_;
}
else
{
lean_object* v___x_3603_; 
v___x_3603_ = lean_string_from_utf8_unchecked(v_a_3599_);
v___y_3565_ = v___x_3585_;
v_received_3566_ = v___x_3603_;
goto v___jp_3564_;
}
}
else
{
lean_object* v___x_3604_; 
lean_dec_ref_known(v___x_3598_, 1);
v___x_3604_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_3565_ = v___x_3585_;
v_received_3566_ = v___x_3604_;
goto v___jp_3564_;
}
}
}
}
}
else
{
v___y_3582_ = v___x_3585_;
goto v___jp_3581_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3625_, lean_object* v_d_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3625_, v_d_3626_);
lean_dec_ref(v_context_3625_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(lean_object* v_context_3629_, lean_object* v_bytes_3630_){
_start:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3630_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3634_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref_known(v___x_3632_, 1);
v___x_3634_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3629_, v_a_3633_);
return v___x_3634_;
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
v_a_3635_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3632_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3632_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0___boxed(lean_object* v_context_3643_, lean_object* v_bytes_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v_context_3643_, v_bytes_3644_);
lean_dec_ref(v_bytes_3644_);
lean_dec_ref(v_context_3643_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(lean_object* v_o_3648_, lean_object* v_key_3649_){
_start:
{
lean_object* v_k_3651_; lean_object* v___x_3652_; 
v_k_3651_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3651_, 0, v_key_3649_);
v___x_3652_ = l_Lasm_JS_Wire_encodeIO(v_k_3651_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; uint32_t v___x_3654_; uint32_t v___x_3655_; uint64_t v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3653_);
lean_dec_ref_known(v___x_3652_, 1);
v___x_3654_ = 203;
v___x_3655_ = lasm_js_value_handle(v_o_3648_);
v___x_3656_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3657_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3658_, 0, v_o_3648_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = lean_unsigned_to_nat(2u);
v___x_3660_ = lean_mk_empty_array_with_capacity(v___x_3659_);
lean_inc_ref(v_k_3651_);
v___x_3661_ = lean_array_push(v___x_3660_, v_k_3651_);
v___x_3662_ = lean_array_push(v___x_3661_, v___x_3658_);
v___x_3663_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
v___x_3664_ = lasm_js_call(v___x_3654_, v___x_3655_, v___x_3656_, v_a_3653_, v___x_3663_);
lean_dec_ref_known(v___x_3663_, 1);
lean_dec(v_a_3653_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
v___x_3666_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3667_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3651_);
v___x_3668_ = lean_string_append(v___x_3666_, v___x_3667_);
lean_dec_ref(v___x_3667_);
v___x_3669_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v___x_3668_, v_a_3665_);
lean_dec(v_a_3665_);
lean_dec_ref(v___x_3668_);
return v___x_3669_;
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
lean_dec_ref_known(v_k_3651_, 1);
v_a_3670_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3664_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3664_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3685_; 
lean_dec_ref_known(v_k_3651_, 1);
lean_dec(v_o_3648_);
v_a_3678_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3680_ = v___x_3652_;
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3652_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3683_; 
if (v_isShared_3681_ == 0)
{
v___x_3683_ = v___x_3680_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_a_3678_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___boxed(lean_object* v_o_3686_, lean_object* v_key_3687_, lean_object* v_a_3688_){
_start:
{
lean_object* v_res_3689_; 
v_res_3689_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_o_3686_, v_key_3687_);
return v_res_3689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type(lean_object* v_self_3691_){
_start:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3693_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_type___closed__0));
v___x_3694_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_self_3691_, v___x_3693_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type___boxed(lean_object* v_self_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lasm_JS_Web_CryptoKey_type(v_self_3695_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(lean_object* v_o_3698_, lean_object* v_key_3699_){
_start:
{
lean_object* v_k_3701_; lean_object* v___x_3702_; 
v_k_3701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3701_, 0, v_key_3699_);
v___x_3702_ = l_Lasm_JS_Wire_encodeIO(v_k_3701_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; uint32_t v___x_3704_; uint32_t v___x_3705_; uint64_t v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
lean_inc(v_a_3703_);
lean_dec_ref_known(v___x_3702_, 1);
v___x_3704_ = 203;
v___x_3705_ = lasm_js_value_handle(v_o_3698_);
v___x_3706_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3708_, 0, v_o_3698_);
lean_ctor_set(v___x_3708_, 1, v___x_3707_);
v___x_3709_ = lean_unsigned_to_nat(2u);
v___x_3710_ = lean_mk_empty_array_with_capacity(v___x_3709_);
lean_inc_ref(v_k_3701_);
v___x_3711_ = lean_array_push(v___x_3710_, v_k_3701_);
v___x_3712_ = lean_array_push(v___x_3711_, v___x_3708_);
v___x_3713_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
v___x_3714_ = lasm_js_call(v___x_3704_, v___x_3705_, v___x_3706_, v_a_3703_, v___x_3713_);
lean_dec_ref_known(v___x_3713_, 1);
lean_dec(v_a_3703_);
if (lean_obj_tag(v___x_3714_) == 0)
{
lean_object* v_a_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
lean_inc(v_a_3715_);
lean_dec_ref_known(v___x_3714_, 1);
v___x_3716_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3701_);
v___x_3718_ = lean_string_append(v___x_3716_, v___x_3717_);
lean_dec_ref(v___x_3717_);
v___x_3719_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(v___x_3718_, v_a_3715_);
lean_dec(v_a_3715_);
lean_dec_ref(v___x_3718_);
return v___x_3719_;
}
else
{
lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3727_; 
lean_dec_ref_known(v_k_3701_, 1);
v_a_3720_ = lean_ctor_get(v___x_3714_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3714_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3722_ = v___x_3714_;
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_dec(v___x_3714_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3720_);
v___x_3725_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
return v___x_3725_;
}
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
lean_dec_ref_known(v_k_3701_, 1);
lean_dec(v_o_3698_);
v_a_3728_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___x_3702_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3702_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0___boxed(lean_object* v_o_3736_, lean_object* v_key_3737_, lean_object* v_a_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_o_3736_, v_key_3737_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable(lean_object* v_self_3741_){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3743_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_extractable___closed__0));
v___x_3744_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_self_3741_, v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable___boxed(lean_object* v_self_3745_, lean_object* v_a_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lasm_JS_Web_CryptoKey_extractable(v_self_3745_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object* v_o_3748_, lean_object* v_key_3749_){
_start:
{
lean_object* v_k_3751_; lean_object* v___x_3752_; 
v_k_3751_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3751_, 0, v_key_3749_);
v___x_3752_ = l_Lasm_JS_Wire_encodeIO(v_k_3751_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; uint32_t v___x_3754_; uint32_t v___x_3755_; uint64_t v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_a_3753_);
lean_dec_ref_known(v___x_3752_, 1);
v___x_3754_ = 203;
v___x_3755_ = lasm_js_value_handle(v_o_3748_);
v___x_3756_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3757_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3758_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3758_, 0, v_o_3748_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lean_unsigned_to_nat(2u);
v___x_3760_ = lean_mk_empty_array_with_capacity(v___x_3759_);
v___x_3761_ = lean_array_push(v___x_3760_, v_k_3751_);
v___x_3762_ = lean_array_push(v___x_3761_, v___x_3758_);
v___x_3763_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
v___x_3764_ = lasm_js_call(v___x_3754_, v___x_3755_, v___x_3756_, v_a_3753_, v___x_3763_);
lean_dec_ref_known(v___x_3763_, 1);
lean_dec(v_a_3753_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3766_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
lean_inc(v_a_3765_);
lean_dec_ref_known(v___x_3764_, 1);
v___x_3766_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3765_);
lean_dec(v_a_3765_);
return v___x_3766_;
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
v_a_3767_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3764_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3764_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec_ref_known(v_k_3751_, 1);
lean_dec(v_o_3748_);
v_a_3775_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3752_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3752_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object* v_o_3783_, lean_object* v_key_3784_, lean_object* v_a_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_o_3783_, v_key_3784_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object* v_self_3788_){
_start:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_algorithm___closed__0));
v___x_3791_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3788_, v___x_3790_);
return v___x_3791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object* v_self_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l_Lasm_JS_Web_CryptoKey_algorithm(v_self_3792_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages(lean_object* v_self_3796_){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_usages___closed__0));
v___x_3799_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3796_, v___x_3798_);
return v___x_3799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages___boxed(lean_object* v_self_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lasm_JS_Web_CryptoKey_usages(v_self_3800_);
return v_res_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f(lean_object* v_v_3809_){
_start:
{
lean_object* v___f_3811_; lean_object* v___x_3812_; 
v___f_3811_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_cast_x3f___closed__2));
lean_inc(v_v_3809_);
v___x_3812_ = l_Lasm_JS_Web_Support_isInstance(v___f_3811_, v_v_3809_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3826_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3815_ = v___x_3812_;
v_isShared_3816_ = v_isSharedCheck_3826_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3812_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3826_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
uint8_t v___x_3817_; 
v___x_3817_ = lean_unbox(v_a_3813_);
lean_dec(v_a_3813_);
if (v___x_3817_ == 0)
{
lean_object* v___x_3818_; lean_object* v___x_3820_; 
lean_dec(v_v_3809_);
v___x_3818_ = lean_box(0);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3818_);
v___x_3820_ = v___x_3815_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3818_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
else
{
lean_object* v___x_3822_; lean_object* v___x_3824_; 
v___x_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3822_, 0, v_v_3809_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3822_);
v___x_3824_ = v___x_3815_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v___x_3822_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
lean_dec(v_v_3809_);
v_a_3827_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3812_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3812_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_cast_x3f___boxed(lean_object* v_v_3835_, lean_object* v_a_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Lasm_JS_Web_SubtleCrypto_cast_x3f(v_v_3835_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(lean_object* v_x_3838_){
_start:
{
lean_object* v_val_3841_; 
if (lean_obj_tag(v_x_3838_) == 0)
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3851_; 
v_a_3843_ = lean_ctor_get(v_x_3838_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v_x_3838_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3845_ = v_x_3838_;
v_isShared_3846_ = v_isSharedCheck_3851_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v_x_3838_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3851_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
lean_object* v___x_3849_; 
v___x_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3865_; 
v_a_3852_ = lean_ctor_get(v_x_3838_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v_x_3838_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3854_ = v_x_3838_;
v_isShared_3855_ = v_isSharedCheck_3865_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v_x_3838_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3865_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3856_; 
v___x_3856_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3852_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; 
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_a_3857_);
lean_dec_ref_known(v___x_3856_, 1);
if (v_isShared_3855_ == 0)
{
lean_ctor_set(v___x_3854_, 0, v_a_3857_);
v___x_3859_ = v___x_3854_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3857_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
v_val_3841_ = v___x_3859_;
goto v___jp_3840_;
}
}
else
{
lean_object* v_a_3861_; lean_object* v___x_3863_; 
v_a_3861_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_a_3861_);
lean_dec_ref_known(v___x_3856_, 1);
if (v_isShared_3855_ == 0)
{
lean_ctor_set_tag(v___x_3854_, 0);
lean_ctor_set(v___x_3854_, 0, v_a_3861_);
v___x_3863_ = v___x_3854_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
v_val_3841_ = v___x_3863_;
goto v___jp_3840_;
}
}
}
}
v___jp_3840_:
{
lean_object* v___x_3842_; 
v___x_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3842_, 0, v_val_3841_);
return v___x_3842_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed(lean_object* v_x_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(v_x_3866_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(lean_object* v___f_3869_, lean_object* v_x_3870_){
_start:
{
if (lean_obj_tag(v_x_3870_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3880_; 
lean_dec_ref(v___f_3869_);
v_a_3872_ = lean_ctor_get(v_x_3870_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_x_3870_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3874_ = v_x_3870_;
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v_x_3870_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3878_; 
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
return v___x_3878_;
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3882_; 
v_a_3881_ = lean_ctor_get(v_x_3870_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v_x_3870_, 1);
v___x_3882_ = lean_apply_2(v___f_3869_, v_a_3881_, lean_box(0));
return v___x_3882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3883_, lean_object* v_x_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(v___f_3883_, v_x_3884_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(lean_object* v___f_3887_, lean_object* v_a_3888_, uint32_t v_op_3889_, uint64_t v_flags_3890_, lean_object* v_payload_3891_, lean_object* v_x_3892_){
_start:
{
if (lean_obj_tag(v_x_3892_) == 0)
{
lean_object* v___x_3894_; 
lean_dec_ref(v___f_3887_);
v___x_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3894_, 0, v_x_3892_);
return v___x_3894_;
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3915_; 
v_a_3895_ = lean_ctor_get(v_x_3892_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_x_3892_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3897_ = v_x_3892_;
v_isShared_3898_ = v_isSharedCheck_3915_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v_x_3892_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3915_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
uint32_t v___x_3899_; lean_object* v___x_3900_; uint8_t v___x_3901_; lean_object* v_val_3903_; lean_object* v___x_3906_; 
v___x_3899_ = 0;
v___x_3900_ = lean_unsigned_to_nat(0u);
v___x_3901_ = 0;
v___x_3906_ = lasm_js_call_into(v_a_3888_, v_op_3889_, v___x_3899_, v_flags_3890_, v_a_3895_, v_payload_3891_);
lean_dec(v_a_3895_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v___x_3909_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3907_);
lean_dec_ref_known(v___x_3906_, 1);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 0, v_a_3907_);
v___x_3909_ = v___x_3897_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3907_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
v_val_3903_ = v___x_3909_;
goto v___jp_3902_;
}
}
else
{
lean_object* v_a_3911_; lean_object* v___x_3913_; 
v_a_3911_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v___x_3906_, 1);
if (v_isShared_3898_ == 0)
{
lean_ctor_set_tag(v___x_3897_, 0);
lean_ctor_set(v___x_3897_, 0, v_a_3911_);
v___x_3913_ = v___x_3897_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
v_val_3903_ = v___x_3913_;
goto v___jp_3902_;
}
}
v___jp_3902_:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3904_, 0, v_val_3903_);
v___x_3905_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3900_, v___x_3901_, v___x_3904_, v___f_3887_);
return v___x_3905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed(lean_object* v___f_3916_, lean_object* v_a_3917_, lean_object* v_op_3918_, lean_object* v_flags_3919_, lean_object* v_payload_3920_, lean_object* v_x_3921_, lean_object* v___y_3922_){
_start:
{
uint32_t v_op_boxed_3923_; uint64_t v_flags_boxed_3924_; lean_object* v_res_3925_; 
v_op_boxed_3923_ = lean_unbox_uint32(v_op_3918_);
lean_dec(v_op_3918_);
v_flags_boxed_3924_ = lean_unbox_uint64(v_flags_3919_);
lean_dec_ref(v_flags_3919_);
v_res_3925_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(v___f_3916_, v_a_3917_, v_op_boxed_3923_, v_flags_boxed_3924_, v_payload_3920_, v_x_3921_);
lean_dec(v_payload_3920_);
lean_dec(v_a_3917_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(lean_object* v___x_3926_, uint8_t v___x_3927_, lean_object* v___f_3928_, lean_object* v_a_3929_, uint32_t v_op_3930_, uint64_t v_flags_3931_, lean_object* v_payload_3932_, lean_object* v_x_3933_){
_start:
{
lean_object* v_val_3936_; 
if (lean_obj_tag(v_x_3933_) == 0)
{
lean_object* v___x_3939_; 
lean_dec_ref(v___f_3928_);
lean_dec(v___x_3926_);
v___x_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3939_, 0, v_x_3933_);
return v___x_3939_;
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3954_; 
v_a_3940_ = lean_ctor_get(v_x_3933_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v_x_3933_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3942_ = v_x_3933_;
v_isShared_3943_ = v_isSharedCheck_3954_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v_x_3933_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3954_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
uint32_t v___x_3944_; lean_object* v___x_3945_; 
v___x_3944_ = 0;
v___x_3945_ = lasm_js_call_into(v_a_3929_, v_op_3930_, v___x_3944_, v_flags_3931_, v_a_3940_, v_payload_3932_);
lean_dec(v_a_3940_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; lean_object* v___x_3948_; 
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref_known(v___x_3945_, 1);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 0, v_a_3946_);
v___x_3948_ = v___x_3942_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3946_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
v_val_3936_ = v___x_3948_;
goto v___jp_3935_;
}
}
else
{
lean_object* v_a_3950_; lean_object* v___x_3952_; 
v_a_3950_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3945_, 1);
if (v_isShared_3943_ == 0)
{
lean_ctor_set_tag(v___x_3942_, 0);
lean_ctor_set(v___x_3942_, 0, v_a_3950_);
v___x_3952_ = v___x_3942_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3950_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
v_val_3936_ = v___x_3952_;
goto v___jp_3935_;
}
}
}
}
v___jp_3935_:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3937_, 0, v_val_3936_);
v___x_3938_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3926_, v___x_3927_, v___x_3937_, v___f_3928_);
return v___x_3938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed(lean_object* v___x_3955_, lean_object* v___x_3956_, lean_object* v___f_3957_, lean_object* v_a_3958_, lean_object* v_op_3959_, lean_object* v_flags_3960_, lean_object* v_payload_3961_, lean_object* v_x_3962_, lean_object* v___y_3963_){
_start:
{
uint8_t v___x_1154__boxed_3964_; uint32_t v_op_boxed_3965_; uint64_t v_flags_boxed_3966_; lean_object* v_res_3967_; 
v___x_1154__boxed_3964_ = lean_unbox(v___x_3956_);
v_op_boxed_3965_ = lean_unbox_uint32(v_op_3959_);
lean_dec(v_op_3959_);
v_flags_boxed_3966_ = lean_unbox_uint64(v_flags_3960_);
lean_dec_ref(v_flags_3960_);
v_res_3967_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(v___x_3955_, v___x_1154__boxed_3964_, v___f_3957_, v_a_3958_, v_op_boxed_3965_, v_flags_boxed_3966_, v_payload_3961_, v_x_3962_);
lean_dec(v_payload_3961_);
lean_dec(v_a_3958_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(lean_object* v_a_3968_, lean_object* v_x_3969_){
_start:
{
if (lean_obj_tag(v_x_3969_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3979_; 
v_a_3971_ = lean_ctor_get(v_x_3969_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v_x_3969_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3973_ = v_x_3969_;
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v_x_3969_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
return v___x_3977_;
}
}
}
else
{
lean_object* v___x_3980_; 
lean_dec_ref_known(v_x_3969_, 1);
v___x_3980_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3968_);
return v___x_3980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed(lean_object* v_a_3981_, lean_object* v_x_3982_, lean_object* v___y_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(v_a_3981_, v_x_3982_);
lean_dec(v_a_3981_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_3985_, uint32_t v_op_3986_, uint64_t v_flags_3987_, lean_object* v_payload_3988_, lean_object* v___f_3989_, lean_object* v___f_3990_, lean_object* v___f_3991_, lean_object* v_x_3992_){
_start:
{
if (lean_obj_tag(v_x_3992_) == 0)
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4002_; 
lean_dec_ref(v___f_3991_);
lean_dec_ref(v___f_3990_);
lean_dec_ref(v___f_3989_);
lean_dec(v_payload_3988_);
v_a_3994_ = lean_ctor_get(v_x_3992_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v_x_3992_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3996_ = v_x_3992_;
v_isShared_3997_ = v_isSharedCheck_4002_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v_x_3992_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4002_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
lean_object* v___x_4000_; 
v___x_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3999_);
return v___x_4000_;
}
}
}
else
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4049_; 
v_a_4003_ = lean_ctor_get(v_x_3992_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v_x_3992_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4005_ = v_x_3992_;
v_isShared_4006_ = v_isSharedCheck_4049_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v_x_3992_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4049_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; uint8_t v___x_4009_; 
v___x_4007_ = lean_string_utf8_byte_size(v_failurePrefix_3985_);
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_nat_dec_eq(v___x_4007_, v___x_4008_);
if (v___x_4009_ == 0)
{
lean_object* v___f_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___f_4014_; lean_object* v_val_4016_; lean_object* v___x_4021_; 
lean_dec_ref(v___f_3991_);
lean_inc(v_a_4003_);
v___f_4010_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4010_, 0, v_a_4003_);
v___x_4011_ = lean_box(v___x_4009_);
v___x_4012_ = lean_box_uint32(v_op_3986_);
v___x_4013_ = lean_box_uint64(v_flags_3987_);
lean_inc(v_payload_3988_);
v___f_4014_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4014_, 0, v___x_4008_);
lean_closure_set(v___f_4014_, 1, v___x_4011_);
lean_closure_set(v___f_4014_, 2, v___f_4010_);
lean_closure_set(v___f_4014_, 3, v_a_4003_);
lean_closure_set(v___f_4014_, 4, v___x_4012_);
lean_closure_set(v___f_4014_, 5, v___x_4013_);
lean_closure_set(v___f_4014_, 6, v_payload_3988_);
v___x_4021_ = l_Lasm_JS_Wire_encodeIO(v_payload_3988_);
lean_dec(v_payload_3988_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4024_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 0, v_a_4022_);
v___x_4024_ = v___x_4005_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_a_4022_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
v_val_4016_ = v___x_4024_;
goto v___jp_4015_;
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; 
v_a_4026_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4026_);
lean_dec_ref_known(v___x_4021_, 1);
if (v_isShared_4006_ == 0)
{
lean_ctor_set_tag(v___x_4005_, 0);
lean_ctor_set(v___x_4005_, 0, v_a_4026_);
v___x_4028_ = v___x_4005_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_a_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
v_val_4016_ = v___x_4028_;
goto v___jp_4015_;
}
}
v___jp_4015_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v_val_4016_);
v___x_4018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4009_, v___x_4017_, v___f_4014_);
v___x_4019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4009_, v___x_4018_, v___f_3989_);
v___x_4020_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4009_, v___x_4019_, v___f_3990_);
return v___x_4020_;
}
}
else
{
lean_object* v___f_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___f_4033_; uint8_t v___x_4034_; lean_object* v_val_4036_; lean_object* v___x_4040_; 
lean_dec_ref(v___f_3990_);
lean_dec_ref(v___f_3989_);
lean_inc(v_a_4003_);
v___f_4030_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4030_, 0, v_a_4003_);
v___x_4031_ = lean_box_uint32(v_op_3986_);
v___x_4032_ = lean_box_uint64(v_flags_3987_);
lean_inc(v_payload_3988_);
v___f_4033_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4033_, 0, v___f_4030_);
lean_closure_set(v___f_4033_, 1, v_a_4003_);
lean_closure_set(v___f_4033_, 2, v___x_4031_);
lean_closure_set(v___f_4033_, 3, v___x_4032_);
lean_closure_set(v___f_4033_, 4, v_payload_3988_);
v___x_4034_ = 0;
v___x_4040_ = l_Lasm_JS_Wire_encodeIO(v_payload_3988_);
lean_dec(v_payload_3988_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4043_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 0, v_a_4041_);
v___x_4043_ = v___x_4005_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
v_val_4036_ = v___x_4043_;
goto v___jp_4035_;
}
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4047_; 
v_a_4045_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4040_, 1);
if (v_isShared_4006_ == 0)
{
lean_ctor_set_tag(v___x_4005_, 0);
lean_ctor_set(v___x_4005_, 0, v_a_4045_);
v___x_4047_ = v___x_4005_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4045_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
v_val_4036_ = v___x_4047_;
goto v___jp_4035_;
}
}
v___jp_4035_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v_val_4036_);
v___x_4038_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4034_, v___x_4037_, v___f_4033_);
v___x_4039_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4008_, v___x_4034_, v___x_4038_, v___f_3991_);
return v___x_4039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_4050_, lean_object* v_op_4051_, lean_object* v_flags_4052_, lean_object* v_payload_4053_, lean_object* v___f_4054_, lean_object* v___f_4055_, lean_object* v___f_4056_, lean_object* v_x_4057_, lean_object* v___y_4058_){
_start:
{
uint32_t v_op_boxed_4059_; uint64_t v_flags_boxed_4060_; lean_object* v_res_4061_; 
v_op_boxed_4059_ = lean_unbox_uint32(v_op_4051_);
lean_dec(v_op_4051_);
v_flags_boxed_4060_ = lean_unbox_uint64(v_flags_4052_);
lean_dec_ref(v_flags_4052_);
v_res_4061_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(v_failurePrefix_4050_, v_op_boxed_4059_, v_flags_boxed_4060_, v_payload_4053_, v___f_4054_, v___f_4055_, v___f_4056_, v_x_4057_);
lean_dec_ref(v_failurePrefix_4050_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_4062_, lean_object* v_x_4063_){
_start:
{
if (lean_obj_tag(v_x_4063_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4076_; 
v_a_4065_ = lean_ctor_get(v_x_4063_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_x_4063_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4067_ = v_x_4063_;
v_isShared_4068_ = v_isSharedCheck_4076_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v_x_4063_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4076_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4073_; 
v___x_4069_ = lean_io_error_to_string(v_a_4065_);
v___x_4070_ = lean_string_append(v_failurePrefix_4062_, v___x_4069_);
lean_dec_ref(v___x_4069_);
v___x_4071_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4070_);
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 0, v___x_4071_);
v___x_4073_ = v___x_4067_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v___x_4071_);
v___x_4073_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4074_; 
v___x_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
return v___x_4074_;
}
}
}
else
{
lean_object* v___x_4077_; 
lean_dec_ref(v_failurePrefix_4062_);
v___x_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4077_, 0, v_x_4063_);
return v___x_4077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_4078_, lean_object* v_x_4079_, lean_object* v___y_4080_){
_start:
{
lean_object* v_res_4081_; 
v_res_4081_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(v_failurePrefix_4078_, v_x_4079_);
return v_res_4081_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(lean_object* v___f_4082_, lean_object* v_bytes_4083_){
_start:
{
lean_object* v___x_4085_; uint8_t v___x_4086_; lean_object* v_val_4088_; lean_object* v___x_4091_; 
v___x_4085_ = lean_unsigned_to_nat(0u);
v___x_4086_ = 0;
v___x_4091_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4083_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
lean_ctor_set_tag(v___x_4094_, 1);
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
v_val_4088_ = v___x_4097_;
goto v___jp_4087_;
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
v_a_4100_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4091_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4091_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
lean_ctor_set_tag(v___x_4102_, 0);
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
v_val_4088_ = v___x_4105_;
goto v___jp_4087_;
}
}
}
v___jp_4087_:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4089_, 0, v_val_4088_);
v___x_4090_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4085_, v___x_4086_, v___x_4089_, v___f_4082_);
return v___x_4090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4108_, lean_object* v_bytes_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(v___f_4108_, v_bytes_4109_);
lean_dec_ref(v_bytes_4109_);
return v_res_4111_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(lean_object* v___f_4112_, lean_object* v_x_4113_){
_start:
{
if (lean_obj_tag(v_x_4113_) == 0)
{
lean_object* v_a_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4123_; 
lean_dec_ref(v___f_4112_);
v_a_4115_ = lean_ctor_get(v_x_4113_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v_x_4113_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4117_ = v_x_4113_;
v_isShared_4118_ = v_isSharedCheck_4123_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_a_4115_);
lean_dec(v_x_4113_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4123_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v___x_4120_; 
if (v_isShared_4118_ == 0)
{
v___x_4120_ = v___x_4117_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4115_);
v___x_4120_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4121_; 
v___x_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4120_);
return v___x_4121_;
}
}
}
else
{
lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4135_; 
v_isSharedCheck_4135_ = !lean_is_exclusive(v_x_4113_);
if (v_isSharedCheck_4135_ == 0)
{
lean_object* v_unused_4136_; 
v_unused_4136_ = lean_ctor_get(v_x_4113_, 0);
lean_dec(v_unused_4136_);
v___x_4125_ = v_x_4113_;
v_isShared_4126_ = v_isSharedCheck_4135_;
goto v_resetjp_4124_;
}
else
{
lean_dec(v_x_4113_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4135_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4131_; 
v___x_4127_ = lean_unsigned_to_nat(0u);
v___x_4128_ = 0;
v___x_4129_ = lean_io_promise_new();
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 0, v___x_4129_);
v___x_4131_ = v___x_4125_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v___x_4129_);
v___x_4131_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; 
v___x_4132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4132_, 0, v___x_4131_);
v___x_4133_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4127_, v___x_4128_, v___x_4132_, v___f_4112_);
return v___x_4133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed(lean_object* v___f_4137_, lean_object* v_x_4138_, lean_object* v___y_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(v___f_4137_, v_x_4138_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(lean_object* v_context_4141_, lean_object* v_x_4142_){
_start:
{
lean_object* v_val_4145_; 
if (lean_obj_tag(v_x_4142_) == 0)
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4155_; 
v_a_4147_ = lean_ctor_get(v_x_4142_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4149_ = v_x_4142_;
v_isShared_4150_ = v_isSharedCheck_4155_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v_x_4142_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4155_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
lean_object* v___x_4153_; 
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
return v___x_4153_;
}
}
}
else
{
lean_object* v_a_4156_; lean_object* v___x_4158_; uint8_t v_isShared_4159_; uint8_t v_isSharedCheck_4169_; 
v_a_4156_ = lean_ctor_get(v_x_4142_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_x_4142_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4158_ = v_x_4142_;
v_isShared_4159_ = v_isSharedCheck_4169_;
goto v_resetjp_4157_;
}
else
{
lean_inc(v_a_4156_);
lean_dec(v_x_4142_);
v___x_4158_ = lean_box(0);
v_isShared_4159_ = v_isSharedCheck_4169_;
goto v_resetjp_4157_;
}
v_resetjp_4157_:
{
lean_object* v___x_4160_; 
v___x_4160_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4141_, v_a_4156_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
lean_inc(v_a_4161_);
lean_dec_ref_known(v___x_4160_, 1);
if (v_isShared_4159_ == 0)
{
lean_ctor_set(v___x_4158_, 0, v_a_4161_);
v___x_4163_ = v___x_4158_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
v_val_4145_ = v___x_4163_;
goto v___jp_4144_;
}
}
else
{
lean_object* v_a_4165_; lean_object* v___x_4167_; 
v_a_4165_ = lean_ctor_get(v___x_4160_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4160_, 1);
if (v_isShared_4159_ == 0)
{
lean_ctor_set_tag(v___x_4158_, 0);
lean_ctor_set(v___x_4158_, 0, v_a_4165_);
v___x_4167_ = v___x_4158_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4165_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
v_val_4145_ = v___x_4167_;
goto v___jp_4144_;
}
}
}
}
v___jp_4144_:
{
lean_object* v___x_4146_; 
v___x_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4146_, 0, v_val_4145_);
return v___x_4146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4170_, lean_object* v_x_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(v_context_4170_, v_x_4171_);
lean_dec_ref(v_context_4170_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(lean_object* v_context_4174_, uint32_t v_op_4175_, uint64_t v_flags_4176_, lean_object* v_payload_4177_, lean_object* v_failurePrefix_4178_){
_start:
{
lean_object* v___f_4180_; lean_object* v___f_4181_; lean_object* v___f_4182_; lean_object* v___f_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___f_4186_; lean_object* v___f_4187_; lean_object* v___x_4188_; uint8_t v___x_4189_; lean_object* v_val_4191_; lean_object* v___x_4194_; 
v___f_4180_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4180_, 0, v_context_4174_);
v___f_4181_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4181_, 0, v___f_4180_);
v___f_4182_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4182_, 0, v___f_4181_);
lean_inc_ref(v_failurePrefix_4178_);
v___f_4183_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4183_, 0, v_failurePrefix_4178_);
v___x_4184_ = lean_box_uint32(v_op_4175_);
v___x_4185_ = lean_box_uint64(v_flags_4176_);
lean_inc_ref(v___f_4182_);
v___f_4186_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4186_, 0, v_failurePrefix_4178_);
lean_closure_set(v___f_4186_, 1, v___x_4184_);
lean_closure_set(v___f_4186_, 2, v___x_4185_);
lean_closure_set(v___f_4186_, 3, v_payload_4177_);
lean_closure_set(v___f_4186_, 4, v___f_4183_);
lean_closure_set(v___f_4186_, 5, v___f_4182_);
lean_closure_set(v___f_4186_, 6, v___f_4182_);
v___f_4187_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4187_, 0, v___f_4186_);
v___x_4188_ = lean_unsigned_to_nat(0u);
v___x_4189_ = 0;
v___x_4194_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
v_a_4195_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4194_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4194_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
lean_ctor_set_tag(v___x_4197_, 1);
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
v_val_4191_ = v___x_4200_;
goto v___jp_4190_;
}
}
}
else
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4210_; 
v_a_4203_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4205_ = v___x_4194_;
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v___x_4194_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
lean_ctor_set_tag(v___x_4205_, 0);
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4203_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
v_val_4191_ = v___x_4208_;
goto v___jp_4190_;
}
}
}
v___jp_4190_:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4192_, 0, v_val_4191_);
v___x_4193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4188_, v___x_4189_, v___x_4192_, v___f_4187_);
return v___x_4193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___boxed(lean_object* v_context_4211_, lean_object* v_op_4212_, lean_object* v_flags_4213_, lean_object* v_payload_4214_, lean_object* v_failurePrefix_4215_, lean_object* v_a_4216_){
_start:
{
uint32_t v_op_boxed_4217_; uint64_t v_flags_boxed_4218_; lean_object* v_res_4219_; 
v_op_boxed_4217_ = lean_unbox_uint32(v_op_4212_);
lean_dec(v_op_4212_);
v_flags_boxed_4218_ = lean_unbox_uint64(v_flags_4213_);
lean_dec_ref(v_flags_4213_);
v_res_4219_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v_context_4211_, v_op_boxed_4217_, v_flags_boxed_4218_, v_payload_4214_, v_failurePrefix_4215_);
return v_res_4219_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_4220_; uint64_t v___x_4221_; 
v___x_4220_ = 1;
v___x_4221_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_4220_);
return v___x_4221_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(uint8_t v_await_4222_, uint64_t v_extra_4223_){
_start:
{
uint64_t v___x_4224_; uint64_t v___y_4226_; 
v___x_4224_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0);
if (v_await_4222_ == 0)
{
uint64_t v___x_4229_; 
v___x_4229_ = 0ULL;
v___y_4226_ = v___x_4229_;
goto v___jp_4225_;
}
else
{
uint64_t v___x_4230_; 
v___x_4230_ = 2ULL;
v___y_4226_ = v___x_4230_;
goto v___jp_4225_;
}
v___jp_4225_:
{
uint64_t v___x_4227_; uint64_t v___x_4228_; 
v___x_4227_ = lean_uint64_lor(v___x_4224_, v___y_4226_);
v___x_4228_ = lean_uint64_lor(v___x_4227_, v_extra_4223_);
return v___x_4228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___boxed(lean_object* v_await_4231_, lean_object* v_extra_4232_){
_start:
{
uint8_t v_await_boxed_4233_; uint64_t v_extra_boxed_4234_; uint64_t v_res_4235_; lean_object* v_r_4236_; 
v_await_boxed_4233_ = lean_unbox(v_await_4231_);
v_extra_boxed_4234_ = lean_unbox_uint64(v_extra_4232_);
lean_dec_ref(v_extra_4232_);
v_res_4235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v_await_boxed_4233_, v_extra_boxed_4234_);
v_r_4236_ = lean_box_uint64(v_res_4235_);
return v_r_4236_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4237_; uint8_t v___x_4238_; uint64_t v___x_4239_; 
v___x_4237_ = 8ULL;
v___x_4238_ = 0;
v___x_4239_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v___x_4238_, v___x_4237_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(lean_object* v_o_4240_, lean_object* v_name_4241_, lean_object* v_args_4242_){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; uint32_t v___x_4249_; uint64_t v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4244_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4245_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4245_, 0, v_o_4240_);
lean_ctor_set(v___x_4245_, 1, v___x_4244_);
lean_inc_ref(v_name_4241_);
v___x_4246_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4246_, 0, v_name_4241_);
v___x_4247_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4248_ = lean_string_append(v___x_4247_, v_name_4241_);
lean_dec_ref(v_name_4241_);
v___x_4249_ = 205;
v___x_4250_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0);
v___x_4251_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4251_, 0, v_args_4242_);
v___x_4252_ = lean_unsigned_to_nat(3u);
v___x_4253_ = lean_mk_empty_array_with_capacity(v___x_4252_);
v___x_4254_ = lean_array_push(v___x_4253_, v___x_4245_);
v___x_4255_ = lean_array_push(v___x_4254_, v___x_4246_);
v___x_4256_ = lean_array_push(v___x_4255_, v___x_4251_);
v___x_4257_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4256_);
v___x_4258_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v___x_4248_, v___x_4249_, v___x_4250_, v___x_4257_, v___x_4244_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___boxed(lean_object* v_o_4259_, lean_object* v_name_4260_, lean_object* v_args_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_o_4259_, v_name_4260_, v_args_4261_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt(lean_object* v_self_4265_, lean_object* v_algorithm_4266_, lean_object* v_key_4267_, lean_object* v_data_4268_){
_start:
{
lean_object* v___f_4270_; lean_object* v___x_4271_; lean_object* v___y_4273_; 
v___f_4270_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4271_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
if (lean_obj_tag(v_algorithm_4266_) == 0)
{
lean_object* v_value_4287_; 
v_value_4287_ = lean_ctor_get(v_algorithm_4266_, 0);
lean_inc(v_value_4287_);
lean_dec_ref_known(v_algorithm_4266_, 1);
v___y_4273_ = v_value_4287_;
goto v___jp_4272_;
}
else
{
lean_object* v_value_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
v_value_4288_ = lean_ctor_get(v_algorithm_4266_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v_algorithm_4266_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v_algorithm_4266_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_value_4288_);
lean_dec(v_algorithm_4266_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
lean_ctor_set_tag(v___x_4290_, 4);
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_value_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
v___y_4273_ = v___x_4293_;
goto v___jp_4272_;
}
}
}
v___jp_4272_:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; uint8_t v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; 
v___x_4274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4275_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4275_, 0, v_key_4267_);
lean_ctor_set(v___x_4275_, 1, v___x_4274_);
v___x_4276_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4276_, 0, v_data_4268_);
v___x_4277_ = lean_unsigned_to_nat(3u);
v___x_4278_ = lean_mk_empty_array_with_capacity(v___x_4277_);
v___x_4279_ = lean_array_push(v___x_4278_, v___y_4273_);
v___x_4280_ = lean_array_push(v___x_4279_, v___x_4275_);
v___x_4281_ = lean_array_push(v___x_4280_, v___x_4276_);
v___x_4282_ = l_Lasm_JS_Web_Support_args(v___x_4281_);
v___x_4283_ = lean_unsigned_to_nat(0u);
v___x_4284_ = 0;
v___x_4285_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4265_, v___x_4271_, v___x_4282_);
v___x_4286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4283_, v___x_4284_, v___x_4285_, v___f_4270_);
return v___x_4286_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___boxed(lean_object* v_self_4296_, lean_object* v_algorithm_4297_, lean_object* v_key_4298_, lean_object* v_data_4299_, lean_object* v_a_4300_){
_start:
{
lean_object* v_res_4301_; 
v_res_4301_ = l_Lasm_JS_Web_SubtleCrypto_encrypt(v_self_4296_, v_algorithm_4297_, v_key_4298_, v_data_4299_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt(lean_object* v_self_4302_, lean_object* v_algorithm_4303_, lean_object* v_key_4304_, lean_object* v_data_4305_){
_start:
{
lean_object* v___f_4307_; lean_object* v___x_4308_; lean_object* v___y_4310_; 
v___f_4307_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4308_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
if (lean_obj_tag(v_algorithm_4303_) == 0)
{
lean_object* v_value_4324_; 
v_value_4324_ = lean_ctor_get(v_algorithm_4303_, 0);
lean_inc(v_value_4324_);
lean_dec_ref_known(v_algorithm_4303_, 1);
v___y_4310_ = v_value_4324_;
goto v___jp_4309_;
}
else
{
lean_object* v_value_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
v_value_4325_ = lean_ctor_get(v_algorithm_4303_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v_algorithm_4303_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v_algorithm_4303_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_value_4325_);
lean_dec(v_algorithm_4303_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
lean_ctor_set_tag(v___x_4327_, 4);
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_value_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
v___y_4310_ = v___x_4330_;
goto v___jp_4309_;
}
}
}
v___jp_4309_:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; uint8_t v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4311_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4312_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4312_, 0, v_key_4304_);
lean_ctor_set(v___x_4312_, 1, v___x_4311_);
v___x_4313_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4313_, 0, v_data_4305_);
v___x_4314_ = lean_unsigned_to_nat(3u);
v___x_4315_ = lean_mk_empty_array_with_capacity(v___x_4314_);
v___x_4316_ = lean_array_push(v___x_4315_, v___y_4310_);
v___x_4317_ = lean_array_push(v___x_4316_, v___x_4312_);
v___x_4318_ = lean_array_push(v___x_4317_, v___x_4313_);
v___x_4319_ = l_Lasm_JS_Web_Support_args(v___x_4318_);
v___x_4320_ = lean_unsigned_to_nat(0u);
v___x_4321_ = 0;
v___x_4322_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4302_, v___x_4308_, v___x_4319_);
v___x_4323_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4320_, v___x_4321_, v___x_4322_, v___f_4307_);
return v___x_4323_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt___boxed(lean_object* v_self_4333_, lean_object* v_algorithm_4334_, lean_object* v_key_4335_, lean_object* v_data_4336_, lean_object* v_a_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Lasm_JS_Web_SubtleCrypto_decrypt(v_self_4333_, v_algorithm_4334_, v_key_4335_, v_data_4336_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign(lean_object* v_self_4339_, lean_object* v_algorithm_4340_, lean_object* v_key_4341_, lean_object* v_data_4342_){
_start:
{
lean_object* v___f_4344_; lean_object* v___x_4345_; lean_object* v___y_4347_; 
v___f_4344_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4345_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
if (lean_obj_tag(v_algorithm_4340_) == 0)
{
lean_object* v_value_4361_; 
v_value_4361_ = lean_ctor_get(v_algorithm_4340_, 0);
lean_inc(v_value_4361_);
lean_dec_ref_known(v_algorithm_4340_, 1);
v___y_4347_ = v_value_4361_;
goto v___jp_4346_;
}
else
{
lean_object* v_value_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4369_; 
v_value_4362_ = lean_ctor_get(v_algorithm_4340_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v_algorithm_4340_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4364_ = v_algorithm_4340_;
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_value_4362_);
lean_dec(v_algorithm_4340_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4367_; 
if (v_isShared_4365_ == 0)
{
lean_ctor_set_tag(v___x_4364_, 4);
v___x_4367_ = v___x_4364_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_value_4362_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
v___y_4347_ = v___x_4367_;
goto v___jp_4346_;
}
}
}
v___jp_4346_:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; uint8_t v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4348_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4349_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4349_, 0, v_key_4341_);
lean_ctor_set(v___x_4349_, 1, v___x_4348_);
v___x_4350_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4350_, 0, v_data_4342_);
v___x_4351_ = lean_unsigned_to_nat(3u);
v___x_4352_ = lean_mk_empty_array_with_capacity(v___x_4351_);
v___x_4353_ = lean_array_push(v___x_4352_, v___y_4347_);
v___x_4354_ = lean_array_push(v___x_4353_, v___x_4349_);
v___x_4355_ = lean_array_push(v___x_4354_, v___x_4350_);
v___x_4356_ = l_Lasm_JS_Web_Support_args(v___x_4355_);
v___x_4357_ = lean_unsigned_to_nat(0u);
v___x_4358_ = 0;
v___x_4359_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4339_, v___x_4345_, v___x_4356_);
v___x_4360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4357_, v___x_4358_, v___x_4359_, v___f_4344_);
return v___x_4360_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign___boxed(lean_object* v_self_4370_, lean_object* v_algorithm_4371_, lean_object* v_key_4372_, lean_object* v_data_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v_res_4375_; 
v_res_4375_ = l_Lasm_JS_Web_SubtleCrypto_sign(v_self_4370_, v_algorithm_4371_, v_key_4372_, v_data_4373_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3(lean_object* v___f_4376_, lean_object* v_x_4377_){
_start:
{
if (lean_obj_tag(v_x_4377_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4387_; 
lean_dec_ref(v___f_4376_);
v_a_4379_ = lean_ctor_get(v_x_4377_, 0);
v_isSharedCheck_4387_ = !lean_is_exclusive(v_x_4377_);
if (v_isSharedCheck_4387_ == 0)
{
v___x_4381_ = v_x_4377_;
v_isShared_4382_ = v_isSharedCheck_4387_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v_x_4377_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4387_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4386_; 
v_reuseFailAlloc_4386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4386_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4386_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
lean_object* v___x_4385_; 
v___x_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4384_);
return v___x_4385_;
}
}
}
else
{
lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4399_; 
v_isSharedCheck_4399_ = !lean_is_exclusive(v_x_4377_);
if (v_isSharedCheck_4399_ == 0)
{
lean_object* v_unused_4400_; 
v_unused_4400_ = lean_ctor_get(v_x_4377_, 0);
lean_dec(v_unused_4400_);
v___x_4389_ = v_x_4377_;
v_isShared_4390_ = v_isSharedCheck_4399_;
goto v_resetjp_4388_;
}
else
{
lean_dec(v_x_4377_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4399_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4391_; uint8_t v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4395_; 
v___x_4391_ = lean_unsigned_to_nat(0u);
v___x_4392_ = 0;
v___x_4393_ = lean_io_promise_new();
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 0, v___x_4393_);
v___x_4395_ = v___x_4389_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v___x_4393_);
v___x_4395_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
lean_object* v___x_4396_; lean_object* v___x_4397_; 
v___x_4396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4395_);
v___x_4397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4391_, v___x_4392_, v___x_4396_, v___f_4376_);
return v___x_4397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3___boxed(lean_object* v___f_4401_, lean_object* v_x_4402_, lean_object* v___y_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3(v___f_4401_, v_x_4402_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0(lean_object* v_context_4405_, lean_object* v_x_4406_){
_start:
{
lean_object* v_val_4409_; 
if (lean_obj_tag(v_x_4406_) == 0)
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4419_; 
v_a_4411_ = lean_ctor_get(v_x_4406_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v_x_4406_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4413_ = v_x_4406_;
v_isShared_4414_ = v_isSharedCheck_4419_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v_x_4406_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4419_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
return v___x_4417_;
}
}
}
else
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4433_; 
v_a_4420_ = lean_ctor_get(v_x_4406_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v_x_4406_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4422_ = v_x_4406_;
v_isShared_4423_ = v_isSharedCheck_4433_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v_x_4406_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4433_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4424_; 
v___x_4424_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v_context_4405_, v_a_4420_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v_a_4425_; lean_object* v___x_4427_; 
v_a_4425_ = lean_ctor_get(v___x_4424_, 0);
lean_inc(v_a_4425_);
lean_dec_ref_known(v___x_4424_, 1);
if (v_isShared_4423_ == 0)
{
lean_ctor_set(v___x_4422_, 0, v_a_4425_);
v___x_4427_ = v___x_4422_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4425_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
v_val_4409_ = v___x_4427_;
goto v___jp_4408_;
}
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; 
v_a_4429_ = lean_ctor_get(v___x_4424_, 0);
lean_inc(v_a_4429_);
lean_dec_ref_known(v___x_4424_, 1);
if (v_isShared_4423_ == 0)
{
lean_ctor_set_tag(v___x_4422_, 0);
lean_ctor_set(v___x_4422_, 0, v_a_4429_);
v___x_4431_ = v___x_4422_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4429_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
v_val_4409_ = v___x_4431_;
goto v___jp_4408_;
}
}
}
}
v___jp_4408_:
{
lean_object* v___x_4410_; 
v___x_4410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4410_, 0, v_val_4409_);
return v___x_4410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0___boxed(lean_object* v_context_4434_, lean_object* v_x_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0(v_context_4434_, v_x_4435_);
lean_dec_ref(v_context_4434_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1(lean_object* v___f_4438_, lean_object* v_bytes_4439_){
_start:
{
lean_object* v___x_4441_; uint8_t v___x_4442_; lean_object* v_val_4444_; lean_object* v___x_4447_; 
v___x_4441_ = lean_unsigned_to_nat(0u);
v___x_4442_ = 0;
v___x_4447_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4439_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4447_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4447_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
lean_ctor_set_tag(v___x_4450_, 1);
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
v_val_4444_ = v___x_4453_;
goto v___jp_4443_;
}
}
}
else
{
lean_object* v_a_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
v_a_4456_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4458_ = v___x_4447_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_a_4456_);
lean_dec(v___x_4447_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
lean_object* v___x_4461_; 
if (v_isShared_4459_ == 0)
{
lean_ctor_set_tag(v___x_4458_, 0);
v___x_4461_ = v___x_4458_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_a_4456_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
v_val_4444_ = v___x_4461_;
goto v___jp_4443_;
}
}
}
v___jp_4443_:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4445_, 0, v_val_4444_);
v___x_4446_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4441_, v___x_4442_, v___x_4445_, v___f_4438_);
return v___x_4446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1___boxed(lean_object* v___f_4464_, lean_object* v_bytes_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v_res_4467_; 
v_res_4467_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1(v___f_4464_, v_bytes_4465_);
lean_dec_ref(v_bytes_4465_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_4468_, uint32_t v_op_4469_, uint64_t v_flags_4470_, lean_object* v_payload_4471_, lean_object* v___f_4472_, lean_object* v___f_4473_, lean_object* v___f_4474_, lean_object* v_x_4475_){
_start:
{
if (lean_obj_tag(v_x_4475_) == 0)
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4485_; 
lean_dec_ref(v___f_4474_);
lean_dec_ref(v___f_4473_);
lean_dec_ref(v___f_4472_);
lean_dec(v_payload_4471_);
v_a_4477_ = lean_ctor_get(v_x_4475_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v_x_4475_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4479_ = v_x_4475_;
v_isShared_4480_ = v_isSharedCheck_4485_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v_x_4475_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4485_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
lean_object* v___x_4483_; 
v___x_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4482_);
return v___x_4483_;
}
}
}
else
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4532_; 
v_a_4486_ = lean_ctor_get(v_x_4475_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v_x_4475_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4488_ = v_x_4475_;
v_isShared_4489_ = v_isSharedCheck_4532_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v_x_4475_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4532_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; uint8_t v___x_4492_; 
v___x_4490_ = lean_string_utf8_byte_size(v_failurePrefix_4468_);
v___x_4491_ = lean_unsigned_to_nat(0u);
v___x_4492_ = lean_nat_dec_eq(v___x_4490_, v___x_4491_);
if (v___x_4492_ == 0)
{
lean_object* v___f_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___f_4497_; lean_object* v_val_4499_; lean_object* v___x_4504_; 
lean_dec_ref(v___f_4474_);
lean_inc(v_a_4486_);
v___f_4493_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4493_, 0, v_a_4486_);
v___x_4494_ = lean_box(v___x_4492_);
v___x_4495_ = lean_box_uint32(v_op_4469_);
v___x_4496_ = lean_box_uint64(v_flags_4470_);
lean_inc(v_payload_4471_);
v___f_4497_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4497_, 0, v___x_4491_);
lean_closure_set(v___f_4497_, 1, v___x_4494_);
lean_closure_set(v___f_4497_, 2, v___f_4493_);
lean_closure_set(v___f_4497_, 3, v_a_4486_);
lean_closure_set(v___f_4497_, 4, v___x_4495_);
lean_closure_set(v___f_4497_, 5, v___x_4496_);
lean_closure_set(v___f_4497_, 6, v_payload_4471_);
v___x_4504_ = l_Lasm_JS_Wire_encodeIO(v_payload_4471_);
lean_dec(v_payload_4471_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4507_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref_known(v___x_4504_, 1);
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 0, v_a_4505_);
v___x_4507_ = v___x_4488_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4505_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
v_val_4499_ = v___x_4507_;
goto v___jp_4498_;
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; 
v_a_4509_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4509_);
lean_dec_ref_known(v___x_4504_, 1);
if (v_isShared_4489_ == 0)
{
lean_ctor_set_tag(v___x_4488_, 0);
lean_ctor_set(v___x_4488_, 0, v_a_4509_);
v___x_4511_ = v___x_4488_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4509_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
v_val_4499_ = v___x_4511_;
goto v___jp_4498_;
}
}
v___jp_4498_:
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4500_, 0, v_val_4499_);
v___x_4501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4492_, v___x_4500_, v___f_4497_);
v___x_4502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4492_, v___x_4501_, v___f_4472_);
v___x_4503_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4492_, v___x_4502_, v___f_4473_);
return v___x_4503_;
}
}
else
{
lean_object* v___f_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___f_4516_; uint8_t v___x_4517_; lean_object* v_val_4519_; lean_object* v___x_4523_; 
lean_dec_ref(v___f_4473_);
lean_dec_ref(v___f_4472_);
lean_inc(v_a_4486_);
v___f_4513_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4513_, 0, v_a_4486_);
v___x_4514_ = lean_box_uint32(v_op_4469_);
v___x_4515_ = lean_box_uint64(v_flags_4470_);
lean_inc(v_payload_4471_);
v___f_4516_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4516_, 0, v___f_4513_);
lean_closure_set(v___f_4516_, 1, v_a_4486_);
lean_closure_set(v___f_4516_, 2, v___x_4514_);
lean_closure_set(v___f_4516_, 3, v___x_4515_);
lean_closure_set(v___f_4516_, 4, v_payload_4471_);
v___x_4517_ = 0;
v___x_4523_ = l_Lasm_JS_Wire_encodeIO(v_payload_4471_);
lean_dec(v_payload_4471_);
if (lean_obj_tag(v___x_4523_) == 0)
{
lean_object* v_a_4524_; lean_object* v___x_4526_; 
v_a_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_a_4524_);
lean_dec_ref_known(v___x_4523_, 1);
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 0, v_a_4524_);
v___x_4526_ = v___x_4488_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4524_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
v_val_4519_ = v___x_4526_;
goto v___jp_4518_;
}
}
else
{
lean_object* v_a_4528_; lean_object* v___x_4530_; 
v_a_4528_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_a_4528_);
lean_dec_ref_known(v___x_4523_, 1);
if (v_isShared_4489_ == 0)
{
lean_ctor_set_tag(v___x_4488_, 0);
lean_ctor_set(v___x_4488_, 0, v_a_4528_);
v___x_4530_ = v___x_4488_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4528_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
v_val_4519_ = v___x_4530_;
goto v___jp_4518_;
}
}
v___jp_4518_:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4520_, 0, v_val_4519_);
v___x_4521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4517_, v___x_4520_, v___f_4516_);
v___x_4522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4491_, v___x_4517_, v___x_4521_, v___f_4474_);
return v___x_4522_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_4533_, lean_object* v_op_4534_, lean_object* v_flags_4535_, lean_object* v_payload_4536_, lean_object* v___f_4537_, lean_object* v___f_4538_, lean_object* v___f_4539_, lean_object* v_x_4540_, lean_object* v___y_4541_){
_start:
{
uint32_t v_op_boxed_4542_; uint64_t v_flags_boxed_4543_; lean_object* v_res_4544_; 
v_op_boxed_4542_ = lean_unbox_uint32(v_op_4534_);
lean_dec(v_op_4534_);
v_flags_boxed_4543_ = lean_unbox_uint64(v_flags_4535_);
lean_dec_ref(v_flags_4535_);
v_res_4544_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9(v_failurePrefix_4533_, v_op_boxed_4542_, v_flags_boxed_4543_, v_payload_4536_, v___f_4537_, v___f_4538_, v___f_4539_, v_x_4540_);
lean_dec_ref(v_failurePrefix_4533_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2(lean_object* v___f_4545_, lean_object* v_x_4546_){
_start:
{
if (lean_obj_tag(v_x_4546_) == 0)
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4556_; 
lean_dec_ref(v___f_4545_);
v_a_4548_ = lean_ctor_get(v_x_4546_, 0);
v_isSharedCheck_4556_ = !lean_is_exclusive(v_x_4546_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4550_ = v_x_4546_;
v_isShared_4551_ = v_isSharedCheck_4556_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v_x_4546_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4556_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
lean_object* v___x_4554_; 
v___x_4554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4553_);
return v___x_4554_;
}
}
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4558_; 
v_a_4557_ = lean_ctor_get(v_x_4546_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v_x_4546_, 1);
v___x_4558_ = lean_apply_2(v___f_4545_, v_a_4557_, lean_box(0));
return v___x_4558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2___boxed(lean_object* v___f_4559_, lean_object* v_x_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2(v___f_4559_, v_x_4560_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(lean_object* v_context_4563_, uint32_t v_op_4564_, uint64_t v_flags_4565_, lean_object* v_payload_4566_, lean_object* v_failurePrefix_4567_){
_start:
{
lean_object* v___f_4569_; lean_object* v___f_4570_; lean_object* v___f_4571_; lean_object* v___f_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___f_4575_; lean_object* v___f_4576_; lean_object* v___x_4577_; uint8_t v___x_4578_; lean_object* v_val_4580_; lean_object* v___x_4583_; 
v___f_4569_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4569_, 0, v_context_4563_);
v___f_4570_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4570_, 0, v___f_4569_);
v___f_4571_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4571_, 0, v___f_4570_);
lean_inc_ref(v_failurePrefix_4567_);
v___f_4572_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4572_, 0, v_failurePrefix_4567_);
v___x_4573_ = lean_box_uint32(v_op_4564_);
v___x_4574_ = lean_box_uint64(v_flags_4565_);
lean_inc_ref(v___f_4571_);
v___f_4575_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4575_, 0, v_failurePrefix_4567_);
lean_closure_set(v___f_4575_, 1, v___x_4573_);
lean_closure_set(v___f_4575_, 2, v___x_4574_);
lean_closure_set(v___f_4575_, 3, v_payload_4566_);
lean_closure_set(v___f_4575_, 4, v___f_4572_);
lean_closure_set(v___f_4575_, 5, v___f_4571_);
lean_closure_set(v___f_4575_, 6, v___f_4571_);
v___f_4576_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4576_, 0, v___f_4575_);
v___x_4577_ = lean_unsigned_to_nat(0u);
v___x_4578_ = 0;
v___x_4583_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4591_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4591_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4591_ == 0)
{
v___x_4586_ = v___x_4583_;
v_isShared_4587_ = v_isSharedCheck_4591_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_a_4584_);
lean_dec(v___x_4583_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4591_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4589_; 
if (v_isShared_4587_ == 0)
{
lean_ctor_set_tag(v___x_4586_, 1);
v___x_4589_ = v___x_4586_;
goto v_reusejp_4588_;
}
else
{
lean_object* v_reuseFailAlloc_4590_; 
v_reuseFailAlloc_4590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4590_, 0, v_a_4584_);
v___x_4589_ = v_reuseFailAlloc_4590_;
goto v_reusejp_4588_;
}
v_reusejp_4588_:
{
v_val_4580_ = v___x_4589_;
goto v___jp_4579_;
}
}
}
else
{
lean_object* v_a_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4599_; 
v_a_4592_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4599_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4599_ == 0)
{
v___x_4594_ = v___x_4583_;
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_a_4592_);
lean_dec(v___x_4583_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4597_; 
if (v_isShared_4595_ == 0)
{
lean_ctor_set_tag(v___x_4594_, 0);
v___x_4597_ = v___x_4594_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v_a_4592_);
v___x_4597_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
v_val_4580_ = v___x_4597_;
goto v___jp_4579_;
}
}
}
v___jp_4579_:
{
lean_object* v___x_4581_; lean_object* v___x_4582_; 
v___x_4581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4581_, 0, v_val_4580_);
v___x_4582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4577_, v___x_4578_, v___x_4581_, v___f_4576_);
return v___x_4582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object* v_context_4600_, lean_object* v_op_4601_, lean_object* v_flags_4602_, lean_object* v_payload_4603_, lean_object* v_failurePrefix_4604_, lean_object* v_a_4605_){
_start:
{
uint32_t v_op_boxed_4606_; uint64_t v_flags_boxed_4607_; lean_object* v_res_4608_; 
v_op_boxed_4606_ = lean_unbox_uint32(v_op_4601_);
lean_dec(v_op_4601_);
v_flags_boxed_4607_ = lean_unbox_uint64(v_flags_4602_);
lean_dec_ref(v_flags_4602_);
v_res_4608_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v_context_4600_, v_op_boxed_4606_, v_flags_boxed_4607_, v_payload_4603_, v_failurePrefix_4604_);
return v_res_4608_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4609_; uint8_t v___x_4610_; uint64_t v___x_4611_; 
v___x_4609_ = 8ULL;
v___x_4610_ = 0;
v___x_4611_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(v___x_4610_, v___x_4609_);
return v___x_4611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(lean_object* v_o_4612_, lean_object* v_name_4613_, lean_object* v_args_4614_){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; uint32_t v___x_4621_; uint64_t v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; 
v___x_4616_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4617_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4617_, 0, v_o_4612_);
lean_ctor_set(v___x_4617_, 1, v___x_4616_);
lean_inc_ref(v_name_4613_);
v___x_4618_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4618_, 0, v_name_4613_);
v___x_4619_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4620_ = lean_string_append(v___x_4619_, v_name_4613_);
lean_dec_ref(v_name_4613_);
v___x_4621_ = 205;
v___x_4622_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0);
v___x_4623_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4623_, 0, v_args_4614_);
v___x_4624_ = lean_unsigned_to_nat(3u);
v___x_4625_ = lean_mk_empty_array_with_capacity(v___x_4624_);
v___x_4626_ = lean_array_push(v___x_4625_, v___x_4617_);
v___x_4627_ = lean_array_push(v___x_4626_, v___x_4618_);
v___x_4628_ = lean_array_push(v___x_4627_, v___x_4623_);
v___x_4629_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4628_);
v___x_4630_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v___x_4620_, v___x_4621_, v___x_4622_, v___x_4629_, v___x_4616_);
return v___x_4630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___boxed(lean_object* v_o_4631_, lean_object* v_name_4632_, lean_object* v_args_4633_, lean_object* v___y_4634_){
_start:
{
lean_object* v_res_4635_; 
v_res_4635_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_o_4631_, v_name_4632_, v_args_4633_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify(lean_object* v_self_4636_, lean_object* v_algorithm_4637_, lean_object* v_key_4638_, lean_object* v_signature_4639_, lean_object* v_data_4640_){
_start:
{
lean_object* v___x_4642_; lean_object* v___y_4644_; 
v___x_4642_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
if (lean_obj_tag(v_algorithm_4637_) == 0)
{
lean_object* v_value_4657_; 
v_value_4657_ = lean_ctor_get(v_algorithm_4637_, 0);
lean_inc(v_value_4657_);
lean_dec_ref_known(v_algorithm_4637_, 1);
v___y_4644_ = v_value_4657_;
goto v___jp_4643_;
}
else
{
lean_object* v_value_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4665_; 
v_value_4658_ = lean_ctor_get(v_algorithm_4637_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_algorithm_4637_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4660_ = v_algorithm_4637_;
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_value_4658_);
lean_dec(v_algorithm_4637_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4663_; 
if (v_isShared_4661_ == 0)
{
lean_ctor_set_tag(v___x_4660_, 4);
v___x_4663_ = v___x_4660_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_value_4658_);
v___x_4663_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
v___y_4644_ = v___x_4663_;
goto v___jp_4643_;
}
}
}
v___jp_4643_:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4645_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4646_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4646_, 0, v_key_4638_);
lean_ctor_set(v___x_4646_, 1, v___x_4645_);
v___x_4647_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4647_, 0, v_signature_4639_);
v___x_4648_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4648_, 0, v_data_4640_);
v___x_4649_ = lean_unsigned_to_nat(4u);
v___x_4650_ = lean_mk_empty_array_with_capacity(v___x_4649_);
v___x_4651_ = lean_array_push(v___x_4650_, v___y_4644_);
v___x_4652_ = lean_array_push(v___x_4651_, v___x_4646_);
v___x_4653_ = lean_array_push(v___x_4652_, v___x_4647_);
v___x_4654_ = lean_array_push(v___x_4653_, v___x_4648_);
v___x_4655_ = l_Lasm_JS_Web_Support_args(v___x_4654_);
v___x_4656_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_self_4636_, v___x_4642_, v___x_4655_);
return v___x_4656_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify___boxed(lean_object* v_self_4666_, lean_object* v_algorithm_4667_, lean_object* v_key_4668_, lean_object* v_signature_4669_, lean_object* v_data_4670_, lean_object* v_a_4671_){
_start:
{
lean_object* v_res_4672_; 
v_res_4672_ = l_Lasm_JS_Web_SubtleCrypto_verify(v_self_4666_, v_algorithm_4667_, v_key_4668_, v_signature_4669_, v_data_4670_);
return v_res_4672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest(lean_object* v_self_4674_, lean_object* v_algorithm_4675_, lean_object* v_data_4676_){
_start:
{
lean_object* v___f_4678_; lean_object* v___x_4679_; lean_object* v___y_4681_; 
v___f_4678_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4679_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_digest___closed__0));
if (lean_obj_tag(v_algorithm_4675_) == 0)
{
lean_object* v_value_4692_; 
v_value_4692_ = lean_ctor_get(v_algorithm_4675_, 0);
lean_inc(v_value_4692_);
lean_dec_ref_known(v_algorithm_4675_, 1);
v___y_4681_ = v_value_4692_;
goto v___jp_4680_;
}
else
{
lean_object* v_value_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
v_value_4693_ = lean_ctor_get(v_algorithm_4675_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v_algorithm_4675_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4695_ = v_algorithm_4675_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_value_4693_);
lean_dec(v_algorithm_4675_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
lean_ctor_set_tag(v___x_4695_, 4);
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_value_4693_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
v___y_4681_ = v___x_4698_;
goto v___jp_4680_;
}
}
}
v___jp_4680_:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; uint8_t v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4682_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4682_, 0, v_data_4676_);
v___x_4683_ = lean_unsigned_to_nat(2u);
v___x_4684_ = lean_mk_empty_array_with_capacity(v___x_4683_);
v___x_4685_ = lean_array_push(v___x_4684_, v___y_4681_);
v___x_4686_ = lean_array_push(v___x_4685_, v___x_4682_);
v___x_4687_ = l_Lasm_JS_Web_Support_args(v___x_4686_);
v___x_4688_ = lean_unsigned_to_nat(0u);
v___x_4689_ = 0;
v___x_4690_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4674_, v___x_4679_, v___x_4687_);
v___x_4691_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4688_, v___x_4689_, v___x_4690_, v___f_4678_);
return v___x_4691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___boxed(lean_object* v_self_4701_, lean_object* v_algorithm_4702_, lean_object* v_data_4703_, lean_object* v_a_4704_){
_start:
{
lean_object* v_res_4705_; 
v_res_4705_ = l_Lasm_JS_Web_SubtleCrypto_digest(v_self_4701_, v_algorithm_4702_, v_data_4703_);
return v_res_4705_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(uint8_t v_await_4706_, uint64_t v_extra_4707_){
_start:
{
uint64_t v___x_4708_; uint64_t v___y_4710_; 
v___x_4708_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_4706_ == 0)
{
uint64_t v___x_4713_; 
v___x_4713_ = 0ULL;
v___y_4710_ = v___x_4713_;
goto v___jp_4709_;
}
else
{
uint64_t v___x_4714_; 
v___x_4714_ = 2ULL;
v___y_4710_ = v___x_4714_;
goto v___jp_4709_;
}
v___jp_4709_:
{
uint64_t v___x_4711_; uint64_t v___x_4712_; 
v___x_4711_ = lean_uint64_lor(v___x_4708_, v___y_4710_);
v___x_4712_ = lean_uint64_lor(v___x_4711_, v_extra_4707_);
return v___x_4712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1___boxed(lean_object* v_await_4715_, lean_object* v_extra_4716_){
_start:
{
uint8_t v_await_boxed_4717_; uint64_t v_extra_boxed_4718_; uint64_t v_res_4719_; lean_object* v_r_4720_; 
v_await_boxed_4717_ = lean_unbox(v_await_4715_);
v_extra_boxed_4718_ = lean_unbox_uint64(v_extra_4716_);
lean_dec_ref(v_extra_4716_);
v_res_4719_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v_await_boxed_4717_, v_extra_boxed_4718_);
v_r_4720_ = lean_box_uint64(v_res_4719_);
return v_r_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(lean_object* v___f_4721_, lean_object* v_bytes_4722_){
_start:
{
lean_object* v___x_4724_; uint8_t v___x_4725_; lean_object* v_val_4727_; lean_object* v___x_4730_; 
v___x_4724_ = lean_unsigned_to_nat(0u);
v___x_4725_ = 0;
v___x_4730_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4722_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4738_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4738_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4738_ == 0)
{
v___x_4733_ = v___x_4730_;
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v___x_4730_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4736_; 
if (v_isShared_4734_ == 0)
{
lean_ctor_set_tag(v___x_4733_, 1);
v___x_4736_ = v___x_4733_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4737_; 
v_reuseFailAlloc_4737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4737_, 0, v_a_4731_);
v___x_4736_ = v_reuseFailAlloc_4737_;
goto v_reusejp_4735_;
}
v_reusejp_4735_:
{
v_val_4727_ = v___x_4736_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4746_; 
v_a_4739_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4741_ = v___x_4730_;
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4730_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
lean_ctor_set_tag(v___x_4741_, 0);
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
v_val_4727_ = v___x_4744_;
goto v___jp_4726_;
}
}
}
v___jp_4726_:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v_val_4727_);
v___x_4729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4724_, v___x_4725_, v___x_4728_, v___f_4721_);
return v___x_4729_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4747_, lean_object* v_bytes_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(v___f_4747_, v_bytes_4748_);
lean_dec_ref(v_bytes_4748_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(lean_object* v___f_4751_, lean_object* v_x_4752_){
_start:
{
if (lean_obj_tag(v_x_4752_) == 0)
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4762_; 
lean_dec_ref(v___f_4751_);
v_a_4754_ = lean_ctor_get(v_x_4752_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v_x_4752_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4756_ = v_x_4752_;
v_isShared_4757_ = v_isSharedCheck_4762_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v_x_4752_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4762_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
lean_object* v___x_4760_; 
v___x_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
return v___x_4760_;
}
}
}
else
{
lean_object* v_a_4763_; lean_object* v___x_4764_; 
v_a_4763_ = lean_ctor_get(v_x_4752_, 0);
lean_inc(v_a_4763_);
lean_dec_ref_known(v_x_4752_, 1);
v___x_4764_ = lean_apply_2(v___f_4751_, v_a_4763_, lean_box(0));
return v___x_4764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4765_, lean_object* v_x_4766_, lean_object* v___y_4767_){
_start:
{
lean_object* v_res_4768_; 
v_res_4768_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(v___f_4765_, v_x_4766_);
return v_res_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(lean_object* v___f_4769_, lean_object* v_x_4770_){
_start:
{
if (lean_obj_tag(v_x_4770_) == 0)
{
lean_object* v_a_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4780_; 
lean_dec_ref(v___f_4769_);
v_a_4772_ = lean_ctor_get(v_x_4770_, 0);
v_isSharedCheck_4780_ = !lean_is_exclusive(v_x_4770_);
if (v_isSharedCheck_4780_ == 0)
{
v___x_4774_ = v_x_4770_;
v_isShared_4775_ = v_isSharedCheck_4780_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_a_4772_);
lean_dec(v_x_4770_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4780_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
lean_object* v___x_4777_; 
if (v_isShared_4775_ == 0)
{
v___x_4777_ = v___x_4774_;
goto v_reusejp_4776_;
}
else
{
lean_object* v_reuseFailAlloc_4779_; 
v_reuseFailAlloc_4779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4779_, 0, v_a_4772_);
v___x_4777_ = v_reuseFailAlloc_4779_;
goto v_reusejp_4776_;
}
v_reusejp_4776_:
{
lean_object* v___x_4778_; 
v___x_4778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4777_);
return v___x_4778_;
}
}
}
else
{
lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4792_; 
v_isSharedCheck_4792_ = !lean_is_exclusive(v_x_4770_);
if (v_isSharedCheck_4792_ == 0)
{
lean_object* v_unused_4793_; 
v_unused_4793_ = lean_ctor_get(v_x_4770_, 0);
lean_dec(v_unused_4793_);
v___x_4782_ = v_x_4770_;
v_isShared_4783_ = v_isSharedCheck_4792_;
goto v_resetjp_4781_;
}
else
{
lean_dec(v_x_4770_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4792_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4784_; uint8_t v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4788_; 
v___x_4784_ = lean_unsigned_to_nat(0u);
v___x_4785_ = 0;
v___x_4786_ = lean_io_promise_new();
if (v_isShared_4783_ == 0)
{
lean_ctor_set(v___x_4782_, 0, v___x_4786_);
v___x_4788_ = v___x_4782_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4791_; 
v_reuseFailAlloc_4791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4791_, 0, v___x_4786_);
v___x_4788_ = v_reuseFailAlloc_4791_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4788_);
v___x_4790_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4784_, v___x_4785_, v___x_4789_, v___f_4769_);
return v___x_4790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4794_, lean_object* v_x_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v_res_4797_; 
v_res_4797_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(v___f_4794_, v_x_4795_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4798_, uint32_t v_op_4799_, uint64_t v_flags_4800_, lean_object* v_payload_4801_, lean_object* v___f_4802_, lean_object* v___f_4803_, lean_object* v___f_4804_, lean_object* v_x_4805_){
_start:
{
if (lean_obj_tag(v_x_4805_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4815_; 
lean_dec_ref(v___f_4804_);
lean_dec_ref(v___f_4803_);
lean_dec_ref(v___f_4802_);
lean_dec(v_payload_4801_);
v_a_4807_ = lean_ctor_get(v_x_4805_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v_x_4805_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4809_ = v_x_4805_;
v_isShared_4810_ = v_isSharedCheck_4815_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v_x_4805_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4815_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4812_; 
if (v_isShared_4810_ == 0)
{
v___x_4812_ = v___x_4809_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4807_);
v___x_4812_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
lean_object* v___x_4813_; 
v___x_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4813_, 0, v___x_4812_);
return v___x_4813_;
}
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4862_; 
v_a_4816_ = lean_ctor_get(v_x_4805_, 0);
v_isSharedCheck_4862_ = !lean_is_exclusive(v_x_4805_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4818_ = v_x_4805_;
v_isShared_4819_ = v_isSharedCheck_4862_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v_x_4805_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4862_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; uint8_t v___x_4822_; 
v___x_4820_ = lean_string_utf8_byte_size(v_failurePrefix_4798_);
v___x_4821_ = lean_unsigned_to_nat(0u);
v___x_4822_ = lean_nat_dec_eq(v___x_4820_, v___x_4821_);
if (v___x_4822_ == 0)
{
lean_object* v___f_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___f_4827_; lean_object* v_val_4829_; lean_object* v___x_4834_; 
lean_dec_ref(v___f_4804_);
lean_inc(v_a_4816_);
v___f_4823_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4823_, 0, v_a_4816_);
v___x_4824_ = lean_box(v___x_4822_);
v___x_4825_ = lean_box_uint32(v_op_4799_);
v___x_4826_ = lean_box_uint64(v_flags_4800_);
lean_inc(v_payload_4801_);
v___f_4827_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4827_, 0, v___x_4821_);
lean_closure_set(v___f_4827_, 1, v___x_4824_);
lean_closure_set(v___f_4827_, 2, v___f_4823_);
lean_closure_set(v___f_4827_, 3, v_a_4816_);
lean_closure_set(v___f_4827_, 4, v___x_4825_);
lean_closure_set(v___f_4827_, 5, v___x_4826_);
lean_closure_set(v___f_4827_, 6, v_payload_4801_);
v___x_4834_ = l_Lasm_JS_Wire_encodeIO(v_payload_4801_);
lean_dec(v_payload_4801_);
if (lean_obj_tag(v___x_4834_) == 0)
{
lean_object* v_a_4835_; lean_object* v___x_4837_; 
v_a_4835_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_a_4835_);
lean_dec_ref_known(v___x_4834_, 1);
if (v_isShared_4819_ == 0)
{
lean_ctor_set(v___x_4818_, 0, v_a_4835_);
v___x_4837_ = v___x_4818_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_a_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
v_val_4829_ = v___x_4837_;
goto v___jp_4828_;
}
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; 
v_a_4839_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_a_4839_);
lean_dec_ref_known(v___x_4834_, 1);
if (v_isShared_4819_ == 0)
{
lean_ctor_set_tag(v___x_4818_, 0);
lean_ctor_set(v___x_4818_, 0, v_a_4839_);
v___x_4841_ = v___x_4818_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4839_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
v_val_4829_ = v___x_4841_;
goto v___jp_4828_;
}
}
v___jp_4828_:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; 
v___x_4830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4830_, 0, v_val_4829_);
v___x_4831_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4821_, v___x_4822_, v___x_4830_, v___f_4827_);
v___x_4832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4821_, v___x_4822_, v___x_4831_, v___f_4802_);
v___x_4833_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4821_, v___x_4822_, v___x_4832_, v___f_4803_);
return v___x_4833_;
}
}
else
{
lean_object* v___f_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___f_4846_; uint8_t v___x_4847_; lean_object* v_val_4849_; lean_object* v___x_4853_; 
lean_dec_ref(v___f_4803_);
lean_dec_ref(v___f_4802_);
lean_inc(v_a_4816_);
v___f_4843_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4843_, 0, v_a_4816_);
v___x_4844_ = lean_box_uint32(v_op_4799_);
v___x_4845_ = lean_box_uint64(v_flags_4800_);
lean_inc(v_payload_4801_);
v___f_4846_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4846_, 0, v___f_4843_);
lean_closure_set(v___f_4846_, 1, v_a_4816_);
lean_closure_set(v___f_4846_, 2, v___x_4844_);
lean_closure_set(v___f_4846_, 3, v___x_4845_);
lean_closure_set(v___f_4846_, 4, v_payload_4801_);
v___x_4847_ = 0;
v___x_4853_ = l_Lasm_JS_Wire_encodeIO(v_payload_4801_);
lean_dec(v_payload_4801_);
if (lean_obj_tag(v___x_4853_) == 0)
{
lean_object* v_a_4854_; lean_object* v___x_4856_; 
v_a_4854_ = lean_ctor_get(v___x_4853_, 0);
lean_inc(v_a_4854_);
lean_dec_ref_known(v___x_4853_, 1);
if (v_isShared_4819_ == 0)
{
lean_ctor_set(v___x_4818_, 0, v_a_4854_);
v___x_4856_ = v___x_4818_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4854_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
v_val_4849_ = v___x_4856_;
goto v___jp_4848_;
}
}
else
{
lean_object* v_a_4858_; lean_object* v___x_4860_; 
v_a_4858_ = lean_ctor_get(v___x_4853_, 0);
lean_inc(v_a_4858_);
lean_dec_ref_known(v___x_4853_, 1);
if (v_isShared_4819_ == 0)
{
lean_ctor_set_tag(v___x_4818_, 0);
lean_ctor_set(v___x_4818_, 0, v_a_4858_);
v___x_4860_ = v___x_4818_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v_a_4858_);
v___x_4860_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
v_val_4849_ = v___x_4860_;
goto v___jp_4848_;
}
}
v___jp_4848_:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4850_, 0, v_val_4849_);
v___x_4851_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4821_, v___x_4847_, v___x_4850_, v___f_4846_);
v___x_4852_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4821_, v___x_4847_, v___x_4851_, v___f_4804_);
return v___x_4852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4863_, lean_object* v_op_4864_, lean_object* v_flags_4865_, lean_object* v_payload_4866_, lean_object* v___f_4867_, lean_object* v___f_4868_, lean_object* v___f_4869_, lean_object* v_x_4870_, lean_object* v___y_4871_){
_start:
{
uint32_t v_op_boxed_4872_; uint64_t v_flags_boxed_4873_; lean_object* v_res_4874_; 
v_op_boxed_4872_ = lean_unbox_uint32(v_op_4864_);
lean_dec(v_op_4864_);
v_flags_boxed_4873_ = lean_unbox_uint64(v_flags_4865_);
lean_dec_ref(v_flags_4865_);
v_res_4874_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(v_failurePrefix_4863_, v_op_boxed_4872_, v_flags_boxed_4873_, v_payload_4866_, v___f_4867_, v___f_4868_, v___f_4869_, v_x_4870_);
lean_dec_ref(v_failurePrefix_4863_);
return v_res_4874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4880_, lean_object* v_key_4881_){
_start:
{
if (lean_obj_tag(v_d_4880_) == 8)
{
lean_object* v___x_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4912_; 
v___x_4884_ = l_Lasm_JS_Data_field(v_d_4880_, v_key_4881_);
v_isSharedCheck_4912_ = !lean_is_exclusive(v_d_4880_);
if (v_isSharedCheck_4912_ == 0)
{
lean_object* v_unused_4913_; 
v_unused_4913_ = lean_ctor_get(v_d_4880_, 0);
lean_dec(v_unused_4913_);
v___x_4886_ = v_d_4880_;
v_isShared_4887_ = v_isSharedCheck_4912_;
goto v_resetjp_4885_;
}
else
{
lean_dec(v_d_4880_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4912_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
switch(lean_obj_tag(v___x_4884_))
{
case 1:
{
lean_del_object(v___x_4886_);
goto v___jp_4882_;
}
case 0:
{
lean_del_object(v___x_4886_);
goto v___jp_4882_;
}
default: 
{
if (lean_obj_tag(v___x_4884_) == 9)
{
lean_object* v_value_4888_; lean_object* v___x_4890_; 
v_value_4888_ = lean_ctor_get(v___x_4884_, 0);
lean_inc(v_value_4888_);
lean_dec_ref_known(v___x_4884_, 2);
if (v_isShared_4887_ == 0)
{
lean_ctor_set_tag(v___x_4886_, 1);
lean_ctor_set(v___x_4886_, 0, v_value_4888_);
v___x_4890_ = v___x_4886_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_value_4888_);
v___x_4890_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
lean_object* v___x_4891_; 
v___x_4891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4890_);
return v___x_4891_;
}
}
else
{
lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; uint8_t v___x_4903_; 
v___x_4893_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_4894_ = lean_string_append(v___x_4893_, v_key_4881_);
v___x_4895_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_4896_ = lean_string_append(v___x_4894_, v___x_4895_);
v___x_4897_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4898_ = lean_string_append(v___x_4896_, v___x_4897_);
v___x_4899_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_4900_ = lean_string_append(v___x_4898_, v___x_4899_);
v___x_4901_ = l_Lasm_JS_Data_describe(v___x_4884_);
v___x_4902_ = lean_string_append(v___x_4900_, v___x_4901_);
lean_dec_ref(v___x_4901_);
v___x_4903_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6);
if (v___x_4903_ == 0)
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4907_; 
v___x_4904_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__7));
v___x_4905_ = lean_string_append(v___x_4902_, v___x_4904_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set_tag(v___x_4886_, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4905_);
v___x_4907_ = v___x_4886_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v___x_4905_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
return v___x_4907_;
}
}
else
{
lean_object* v___x_4910_; 
if (v_isShared_4887_ == 0)
{
lean_ctor_set_tag(v___x_4886_, 0);
lean_ctor_set(v___x_4886_, 0, v___x_4902_);
v___x_4910_ = v___x_4886_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v___x_4902_);
v___x_4910_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
return v___x_4910_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4914_; 
lean_dec(v_d_4880_);
v___x_4914_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2));
return v___x_4914_;
}
v___jp_4882_:
{
lean_object* v___x_4883_; 
v___x_4883_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_4883_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4915_, lean_object* v_key_4916_){
_start:
{
lean_object* v_res_4917_; 
v_res_4917_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4915_, v_key_4916_);
lean_dec_ref(v_key_4916_);
return v_res_4917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(lean_object* v_context_4918_, lean_object* v_d_4919_){
_start:
{
lean_object* v___y_4922_; lean_object* v___y_4923_; lean_object* v___y_4928_; lean_object* v_received_4929_; lean_object* v___y_4948_; lean_object* v_a_4951_; 
switch(lean_obj_tag(v_d_4919_))
{
case 9:
{
lean_object* v_value_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; 
v_value_4975_ = lean_ctor_get(v_d_4919_, 0);
lean_inc(v_value_4975_);
lean_dec_ref_known(v_d_4919_, 2);
v___x_4976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4976_, 0, v_value_4975_);
v___x_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
return v___x_4977_;
}
case 8:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4978_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v_d_4919_);
v___x_4979_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4919_, v___x_4978_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
lean_inc(v_a_4980_);
lean_dec_ref_known(v___x_4979_, 1);
v_a_4951_ = v_a_4980_;
goto v___jp_4950_;
}
else
{
lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_5000_; 
v_a_4981_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_5000_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5000_ == 0)
{
v___x_4983_ = v___x_4979_;
v_isShared_4984_ = v_isSharedCheck_5000_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_dec(v___x_4979_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_5000_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4985_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
lean_inc_ref(v_d_4919_);
v___x_4986_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4919_, v___x_4985_);
if (lean_obj_tag(v___x_4986_) == 0)
{
lean_object* v_a_4987_; 
lean_del_object(v___x_4983_);
lean_dec(v_a_4981_);
v_a_4987_ = lean_ctor_get(v___x_4986_, 0);
lean_inc(v_a_4987_);
lean_dec_ref_known(v___x_4986_, 1);
v_a_4951_ = v_a_4987_;
goto v___jp_4950_;
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4999_; 
lean_dec_ref_known(v_d_4919_, 1);
v_a_4988_ = lean_ctor_get(v___x_4986_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4986_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4990_ = v___x_4986_;
v_isShared_4991_ = v_isSharedCheck_4999_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4986_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4999_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4992_; lean_object* v___x_4994_; 
v___x_4992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4992_, 0, v_a_4981_);
lean_ctor_set(v___x_4992_, 1, v_a_4988_);
if (v_isShared_4991_ == 0)
{
lean_ctor_set(v___x_4990_, 0, v___x_4992_);
v___x_4994_ = v___x_4990_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v___x_4992_);
v___x_4994_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
lean_object* v___x_4996_; 
if (v_isShared_4984_ == 0)
{
lean_ctor_set_tag(v___x_4983_, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4994_);
v___x_4996_ = v___x_4983_;
goto v_reusejp_4995_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v___x_4994_);
v___x_4996_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4995_;
}
v_reusejp_4995_:
{
return v___x_4996_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_5001_; 
v___x_5001_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_4951_ = v___x_5001_;
goto v___jp_4950_;
}
}
v___jp_4921_:
{
lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4924_ = lean_string_append(v___y_4922_, v___y_4923_);
lean_dec_ref(v___y_4923_);
v___x_4925_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4925_, 0, v___x_4924_);
v___x_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4925_);
return v___x_4926_;
}
v___jp_4927_:
{
lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; uint8_t v___x_4941_; 
v___x_4930_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_4931_ = lean_string_append(v___x_4930_, v_context_4918_);
v___x_4932_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_4933_ = lean_string_append(v___x_4931_, v___x_4932_);
v___x_4934_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1));
v___x_4935_ = lean_string_append(v___x_4933_, v___x_4934_);
v___x_4936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_4937_ = lean_string_append(v___x_4935_, v___x_4936_);
v___x_4938_ = lean_string_append(v___x_4937_, v_received_4929_);
lean_dec_ref(v_received_4929_);
v___x_4939_ = lean_string_utf8_byte_size(v___y_4928_);
v___x_4940_ = lean_unsigned_to_nat(0u);
v___x_4941_ = lean_nat_dec_eq(v___x_4939_, v___x_4940_);
if (v___x_4941_ == 0)
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4942_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_4943_ = lean_string_append(v___x_4942_, v___y_4928_);
lean_dec_ref(v___y_4928_);
v___x_4944_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_4945_ = lean_string_append(v___x_4943_, v___x_4944_);
v___y_4922_ = v___x_4938_;
v___y_4923_ = v___x_4945_;
goto v___jp_4921_;
}
else
{
lean_object* v___x_4946_; 
lean_dec_ref(v___y_4928_);
v___x_4946_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_4922_ = v___x_4938_;
v___y_4923_ = v___x_4946_;
goto v___jp_4921_;
}
}
v___jp_4947_:
{
lean_object* v___x_4949_; 
v___x_4949_ = l_Lasm_JS_Data_describe(v_d_4919_);
v___y_4928_ = v___y_4948_;
v_received_4929_ = v___x_4949_;
goto v___jp_4927_;
}
v___jp_4950_:
{
if (lean_obj_tag(v_d_4919_) == 9)
{
lean_object* v_value_4952_; lean_object* v_description_4953_; lean_object* v___x_4954_; uint8_t v___x_4955_; 
v_value_4952_ = lean_ctor_get(v_d_4919_, 0);
v_description_4953_ = lean_ctor_get(v_d_4919_, 1);
v___x_4954_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4955_ = lean_string_dec_eq(v_description_4953_, v___x_4954_);
if (v___x_4955_ == 0)
{
v___y_4948_ = v_a_4951_;
goto v___jp_4947_;
}
else
{
lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4972_; 
lean_inc(v_value_4952_);
v_isSharedCheck_4972_ = !lean_is_exclusive(v_d_4919_);
if (v_isSharedCheck_4972_ == 0)
{
lean_object* v_unused_4973_; lean_object* v_unused_4974_; 
v_unused_4973_ = lean_ctor_get(v_d_4919_, 1);
lean_dec(v_unused_4973_);
v_unused_4974_ = lean_ctor_get(v_d_4919_, 0);
lean_dec(v_unused_4974_);
v___x_4957_ = v_d_4919_;
v_isShared_4958_ = v_isSharedCheck_4972_;
goto v_resetjp_4956_;
}
else
{
lean_dec(v_d_4919_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4972_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
uint32_t v___x_4959_; uint64_t v___x_4960_; lean_object* v___x_4962_; 
v___x_4959_ = 206;
v___x_4960_ = 0ULL;
lean_inc(v_value_4952_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_4954_);
v___x_4962_ = v___x_4957_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v_value_4952_);
lean_ctor_set(v_reuseFailAlloc_4971_, 1, v___x_4954_);
v___x_4962_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
uint32_t v___x_4963_; lean_object* v___x_4964_; 
v___x_4963_ = lasm_js_value_handle(v_value_4952_);
lean_dec(v_value_4952_);
v___x_4964_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4959_, v___x_4960_, v___x_4962_, v___x_4963_);
lean_dec_ref(v___x_4962_);
if (lean_obj_tag(v___x_4964_) == 0)
{
lean_object* v_a_4965_; uint8_t v___x_4966_; 
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
lean_inc(v_a_4965_);
lean_dec_ref_known(v___x_4964_, 1);
v___x_4966_ = lean_string_validate_utf8(v_a_4965_);
if (v___x_4966_ == 0)
{
lean_object* v___x_4967_; lean_object* v___x_4968_; 
lean_dec(v_a_4965_);
v___x_4967_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_4968_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4967_);
v___y_4928_ = v_a_4951_;
v_received_4929_ = v___x_4968_;
goto v___jp_4927_;
}
else
{
lean_object* v___x_4969_; 
v___x_4969_ = lean_string_from_utf8_unchecked(v_a_4965_);
v___y_4928_ = v_a_4951_;
v_received_4929_ = v___x_4969_;
goto v___jp_4927_;
}
}
else
{
lean_object* v___x_4970_; 
lean_dec_ref_known(v___x_4964_, 1);
v___x_4970_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_4928_ = v_a_4951_;
v_received_4929_ = v___x_4970_;
goto v___jp_4927_;
}
}
}
}
}
else
{
v___y_4948_ = v_a_4951_;
goto v___jp_4947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5002_, lean_object* v_d_5003_, lean_object* v_a_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_5002_, v_d_5003_);
lean_dec_ref(v_context_5002_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(lean_object* v_context_5006_, lean_object* v_x_5007_){
_start:
{
lean_object* v_val_5010_; 
if (lean_obj_tag(v_x_5007_) == 0)
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5020_; 
v_a_5012_ = lean_ctor_get(v_x_5007_, 0);
v_isSharedCheck_5020_ = !lean_is_exclusive(v_x_5007_);
if (v_isSharedCheck_5020_ == 0)
{
v___x_5014_ = v_x_5007_;
v_isShared_5015_ = v_isSharedCheck_5020_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v_x_5007_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5020_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v___x_5017_; 
if (v_isShared_5015_ == 0)
{
v___x_5017_ = v___x_5014_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v_a_5012_);
v___x_5017_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
lean_object* v___x_5018_; 
v___x_5018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5017_);
return v___x_5018_;
}
}
}
else
{
lean_object* v_a_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5034_; 
v_a_5021_ = lean_ctor_get(v_x_5007_, 0);
v_isSharedCheck_5034_ = !lean_is_exclusive(v_x_5007_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5023_ = v_x_5007_;
v_isShared_5024_ = v_isSharedCheck_5034_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_a_5021_);
lean_dec(v_x_5007_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5034_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5025_; 
v___x_5025_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_5006_, v_a_5021_);
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v_a_5026_; lean_object* v___x_5028_; 
v_a_5026_ = lean_ctor_get(v___x_5025_, 0);
lean_inc(v_a_5026_);
lean_dec_ref_known(v___x_5025_, 1);
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 0, v_a_5026_);
v___x_5028_ = v___x_5023_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_a_5026_);
v___x_5028_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
v_val_5010_ = v___x_5028_;
goto v___jp_5009_;
}
}
else
{
lean_object* v_a_5030_; lean_object* v___x_5032_; 
v_a_5030_ = lean_ctor_get(v___x_5025_, 0);
lean_inc(v_a_5030_);
lean_dec_ref_known(v___x_5025_, 1);
if (v_isShared_5024_ == 0)
{
lean_ctor_set_tag(v___x_5023_, 0);
lean_ctor_set(v___x_5023_, 0, v_a_5030_);
v___x_5032_ = v___x_5023_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_a_5030_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
v_val_5010_ = v___x_5032_;
goto v___jp_5009_;
}
}
}
}
v___jp_5009_:
{
lean_object* v___x_5011_; 
v___x_5011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5011_, 0, v_val_5010_);
return v___x_5011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5035_, lean_object* v_x_5036_, lean_object* v___y_5037_){
_start:
{
lean_object* v_res_5038_; 
v_res_5038_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(v_context_5035_, v_x_5036_);
lean_dec_ref(v_context_5035_);
return v_res_5038_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(lean_object* v_context_5039_, uint32_t v_op_5040_, uint64_t v_flags_5041_, lean_object* v_payload_5042_, lean_object* v_failurePrefix_5043_){
_start:
{
lean_object* v___f_5045_; lean_object* v___f_5046_; lean_object* v___f_5047_; lean_object* v___f_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___f_5051_; lean_object* v___f_5052_; lean_object* v___x_5053_; uint8_t v___x_5054_; lean_object* v_val_5056_; lean_object* v___x_5059_; 
v___f_5045_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5045_, 0, v_context_5039_);
v___f_5046_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5046_, 0, v___f_5045_);
v___f_5047_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5047_, 0, v___f_5046_);
lean_inc_ref(v_failurePrefix_5043_);
v___f_5048_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5048_, 0, v_failurePrefix_5043_);
v___x_5049_ = lean_box_uint32(v_op_5040_);
v___x_5050_ = lean_box_uint64(v_flags_5041_);
lean_inc_ref(v___f_5047_);
v___f_5051_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5051_, 0, v_failurePrefix_5043_);
lean_closure_set(v___f_5051_, 1, v___x_5049_);
lean_closure_set(v___f_5051_, 2, v___x_5050_);
lean_closure_set(v___f_5051_, 3, v_payload_5042_);
lean_closure_set(v___f_5051_, 4, v___f_5048_);
lean_closure_set(v___f_5051_, 5, v___f_5047_);
lean_closure_set(v___f_5051_, 6, v___f_5047_);
v___f_5052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5052_, 0, v___f_5051_);
v___x_5053_ = lean_unsigned_to_nat(0u);
v___x_5054_ = 0;
v___x_5059_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5067_; 
v_a_5060_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5067_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5067_ == 0)
{
v___x_5062_ = v___x_5059_;
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5059_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v___x_5065_; 
if (v_isShared_5063_ == 0)
{
lean_ctor_set_tag(v___x_5062_, 1);
v___x_5065_ = v___x_5062_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_a_5060_);
v___x_5065_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
v_val_5056_ = v___x_5065_;
goto v___jp_5055_;
}
}
}
else
{
lean_object* v_a_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5075_; 
v_a_5068_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5075_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5075_ == 0)
{
v___x_5070_ = v___x_5059_;
v_isShared_5071_ = v_isSharedCheck_5075_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_a_5068_);
lean_dec(v___x_5059_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5075_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
lean_object* v___x_5073_; 
if (v_isShared_5071_ == 0)
{
lean_ctor_set_tag(v___x_5070_, 0);
v___x_5073_ = v___x_5070_;
goto v_reusejp_5072_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v_a_5068_);
v___x_5073_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5072_;
}
v_reusejp_5072_:
{
v_val_5056_ = v___x_5073_;
goto v___jp_5055_;
}
}
}
v___jp_5055_:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; 
v___x_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5057_, 0, v_val_5056_);
v___x_5058_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5053_, v___x_5054_, v___x_5057_, v___f_5052_);
return v___x_5058_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___boxed(lean_object* v_context_5076_, lean_object* v_op_5077_, lean_object* v_flags_5078_, lean_object* v_payload_5079_, lean_object* v_failurePrefix_5080_, lean_object* v_a_5081_){
_start:
{
uint32_t v_op_boxed_5082_; uint64_t v_flags_boxed_5083_; lean_object* v_res_5084_; 
v_op_boxed_5082_ = lean_unbox_uint32(v_op_5077_);
lean_dec(v_op_5077_);
v_flags_boxed_5083_ = lean_unbox_uint64(v_flags_5078_);
lean_dec_ref(v_flags_5078_);
v_res_5084_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v_context_5076_, v_op_boxed_5082_, v_flags_boxed_5083_, v_payload_5079_, v_failurePrefix_5080_);
return v_res_5084_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5085_; uint8_t v___x_5086_; uint64_t v___x_5087_; 
v___x_5085_ = 8ULL;
v___x_5086_ = 0;
v___x_5087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v___x_5086_, v___x_5085_);
return v___x_5087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(lean_object* v_o_5088_, lean_object* v_name_5089_, lean_object* v_args_5090_){
_start:
{
lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; uint32_t v___x_5097_; uint64_t v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5092_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5093_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5093_, 0, v_o_5088_);
lean_ctor_set(v___x_5093_, 1, v___x_5092_);
lean_inc_ref(v_name_5089_);
v___x_5094_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5094_, 0, v_name_5089_);
v___x_5095_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_5096_ = lean_string_append(v___x_5095_, v_name_5089_);
lean_dec_ref(v_name_5089_);
v___x_5097_ = 205;
v___x_5098_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0);
v___x_5099_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5099_, 0, v_args_5090_);
v___x_5100_ = lean_unsigned_to_nat(3u);
v___x_5101_ = lean_mk_empty_array_with_capacity(v___x_5100_);
v___x_5102_ = lean_array_push(v___x_5101_, v___x_5093_);
v___x_5103_ = lean_array_push(v___x_5102_, v___x_5094_);
v___x_5104_ = lean_array_push(v___x_5103_, v___x_5099_);
v___x_5105_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5105_, 0, v___x_5104_);
v___x_5106_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v___x_5096_, v___x_5097_, v___x_5098_, v___x_5105_, v___x_5092_);
return v___x_5106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___boxed(lean_object* v_o_5107_, lean_object* v_name_5108_, lean_object* v_args_5109_, lean_object* v___y_5110_){
_start:
{
lean_object* v_res_5111_; 
v_res_5111_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_o_5107_, v_name_5108_, v_args_5109_);
return v_res_5111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(size_t v_sz_5112_, size_t v_i_5113_, lean_object* v_bs_5114_){
_start:
{
uint8_t v___x_5115_; 
v___x_5115_ = lean_usize_dec_lt(v_i_5113_, v_sz_5112_);
if (v___x_5115_ == 0)
{
return v_bs_5114_;
}
else
{
lean_object* v_v_5116_; lean_object* v___x_5117_; lean_object* v_bs_x27_5118_; lean_object* v___y_5120_; uint8_t v___x_5125_; 
v_v_5116_ = lean_array_uget(v_bs_5114_, v_i_5113_);
v___x_5117_ = lean_unsigned_to_nat(0u);
v_bs_x27_5118_ = lean_array_uset(v_bs_5114_, v_i_5113_, v___x_5117_);
v___x_5125_ = lean_unbox(v_v_5116_);
lean_dec(v_v_5116_);
switch(v___x_5125_)
{
case 0:
{
lean_object* v___x_5126_; 
v___x_5126_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
v___y_5120_ = v___x_5126_;
goto v___jp_5119_;
}
case 1:
{
lean_object* v___x_5127_; 
v___x_5127_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
v___y_5120_ = v___x_5127_;
goto v___jp_5119_;
}
case 2:
{
lean_object* v___x_5128_; 
v___x_5128_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
v___y_5120_ = v___x_5128_;
goto v___jp_5119_;
}
case 3:
{
lean_object* v___x_5129_; 
v___x_5129_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
v___y_5120_ = v___x_5129_;
goto v___jp_5119_;
}
case 4:
{
lean_object* v___x_5130_; 
v___x_5130_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
v___y_5120_ = v___x_5130_;
goto v___jp_5119_;
}
case 5:
{
lean_object* v___x_5131_; 
v___x_5131_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
v___y_5120_ = v___x_5131_;
goto v___jp_5119_;
}
case 6:
{
lean_object* v___x_5132_; 
v___x_5132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
v___y_5120_ = v___x_5132_;
goto v___jp_5119_;
}
case 7:
{
lean_object* v___x_5133_; 
v___x_5133_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
v___y_5120_ = v___x_5133_;
goto v___jp_5119_;
}
case 8:
{
lean_object* v___x_5134_; 
v___x_5134_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
v___y_5120_ = v___x_5134_;
goto v___jp_5119_;
}
case 9:
{
lean_object* v___x_5135_; 
v___x_5135_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
v___y_5120_ = v___x_5135_;
goto v___jp_5119_;
}
case 10:
{
lean_object* v___x_5136_; 
v___x_5136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
v___y_5120_ = v___x_5136_;
goto v___jp_5119_;
}
default: 
{
lean_object* v___x_5137_; 
v___x_5137_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
v___y_5120_ = v___x_5137_;
goto v___jp_5119_;
}
}
v___jp_5119_:
{
size_t v___x_5121_; size_t v___x_5122_; lean_object* v___x_5123_; 
v___x_5121_ = ((size_t)1ULL);
v___x_5122_ = lean_usize_add(v_i_5113_, v___x_5121_);
lean_inc(v___y_5120_);
v___x_5123_ = lean_array_uset(v_bs_x27_5118_, v_i_5113_, v___y_5120_);
v_i_5113_ = v___x_5122_;
v_bs_5114_ = v___x_5123_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0___boxed(lean_object* v_sz_5138_, lean_object* v_i_5139_, lean_object* v_bs_5140_){
_start:
{
size_t v_sz_boxed_5141_; size_t v_i_boxed_5142_; lean_object* v_res_5143_; 
v_sz_boxed_5141_ = lean_unbox_usize(v_sz_5138_);
lean_dec(v_sz_5138_);
v_i_boxed_5142_ = lean_unbox_usize(v_i_5139_);
lean_dec(v_i_5139_);
v_res_5143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_boxed_5141_, v_i_boxed_5142_, v_bs_5140_);
return v_res_5143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey(lean_object* v_self_5145_, lean_object* v_algorithm_5146_, uint8_t v_extractable_5147_, lean_object* v_keyUsages_5148_){
_start:
{
lean_object* v___x_5150_; lean_object* v___y_5152_; 
v___x_5150_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0));
if (lean_obj_tag(v_algorithm_5146_) == 0)
{
lean_object* v_value_5165_; 
v_value_5165_ = lean_ctor_get(v_algorithm_5146_, 0);
lean_inc(v_value_5165_);
lean_dec_ref_known(v_algorithm_5146_, 1);
v___y_5152_ = v_value_5165_;
goto v___jp_5151_;
}
else
{
lean_object* v_value_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5173_; 
v_value_5166_ = lean_ctor_get(v_algorithm_5146_, 0);
v_isSharedCheck_5173_ = !lean_is_exclusive(v_algorithm_5146_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5168_ = v_algorithm_5146_;
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_value_5166_);
lean_dec(v_algorithm_5146_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
lean_object* v___x_5171_; 
if (v_isShared_5169_ == 0)
{
lean_ctor_set_tag(v___x_5168_, 4);
v___x_5171_ = v___x_5168_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_value_5166_);
v___x_5171_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
v___y_5152_ = v___x_5171_;
goto v___jp_5151_;
}
}
}
v___jp_5151_:
{
lean_object* v___x_5153_; size_t v_sz_5154_; size_t v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; 
v___x_5153_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5153_, 0, v_extractable_5147_);
v_sz_5154_ = lean_array_size(v_keyUsages_5148_);
v___x_5155_ = ((size_t)0ULL);
v___x_5156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5154_, v___x_5155_, v_keyUsages_5148_);
v___x_5157_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5157_, 0, v___x_5156_);
v___x_5158_ = lean_unsigned_to_nat(3u);
v___x_5159_ = lean_mk_empty_array_with_capacity(v___x_5158_);
v___x_5160_ = lean_array_push(v___x_5159_, v___y_5152_);
v___x_5161_ = lean_array_push(v___x_5160_, v___x_5153_);
v___x_5162_ = lean_array_push(v___x_5161_, v___x_5157_);
v___x_5163_ = l_Lasm_JS_Web_Support_args(v___x_5162_);
v___x_5164_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_self_5145_, v___x_5150_, v___x_5163_);
return v___x_5164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___boxed(lean_object* v_self_5174_, lean_object* v_algorithm_5175_, lean_object* v_extractable_5176_, lean_object* v_keyUsages_5177_, lean_object* v_a_5178_){
_start:
{
uint8_t v_extractable_boxed_5179_; lean_object* v_res_5180_; 
v_extractable_boxed_5179_ = lean_unbox(v_extractable_5176_);
v_res_5180_ = l_Lasm_JS_Web_SubtleCrypto_generateKey(v_self_5174_, v_algorithm_5175_, v_extractable_boxed_5179_, v_keyUsages_5177_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(lean_object* v_x_5181_){
_start:
{
if (lean_obj_tag(v_x_5181_) == 0)
{
lean_object* v_a_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5191_; 
v_a_5183_ = lean_ctor_get(v_x_5181_, 0);
v_isSharedCheck_5191_ = !lean_is_exclusive(v_x_5181_);
if (v_isSharedCheck_5191_ == 0)
{
v___x_5185_ = v_x_5181_;
v_isShared_5186_ = v_isSharedCheck_5191_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_a_5183_);
lean_dec(v_x_5181_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5191_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
lean_object* v___x_5188_; 
if (v_isShared_5186_ == 0)
{
v___x_5188_ = v___x_5185_;
goto v_reusejp_5187_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_a_5183_);
v___x_5188_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5187_;
}
v_reusejp_5187_:
{
lean_object* v___x_5189_; 
v___x_5189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5189_, 0, v___x_5188_);
return v___x_5189_;
}
}
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5200_; 
v_a_5192_ = lean_ctor_get(v_x_5181_, 0);
v_isSharedCheck_5200_ = !lean_is_exclusive(v_x_5181_);
if (v_isSharedCheck_5200_ == 0)
{
v___x_5194_ = v_x_5181_;
v_isShared_5195_ = v_isSharedCheck_5200_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v_x_5181_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5200_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5197_; 
if (v_isShared_5195_ == 0)
{
v___x_5197_ = v___x_5194_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5199_; 
v_reuseFailAlloc_5199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5199_, 0, v_a_5192_);
v___x_5197_ = v_reuseFailAlloc_5199_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5198_; 
v___x_5198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
return v___x_5198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0___boxed(lean_object* v_x_5201_, lean_object* v___y_5202_){
_start:
{
lean_object* v_res_5203_; 
v_res_5203_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(v_x_5201_);
return v_res_5203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey(lean_object* v_self_5205_, lean_object* v_algorithm_5206_, lean_object* v_baseKey_5207_, lean_object* v_derivedKeyType_5208_, uint8_t v_extractable_5209_, lean_object* v_keyUsages_5210_){
_start:
{
lean_object* v___f_5212_; lean_object* v___x_5213_; lean_object* v___y_5215_; lean_object* v___y_5216_; lean_object* v___y_5217_; lean_object* v___y_5236_; 
v___f_5212_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5213_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
if (lean_obj_tag(v_algorithm_5206_) == 0)
{
lean_object* v_value_5248_; 
v_value_5248_ = lean_ctor_get(v_algorithm_5206_, 0);
lean_inc(v_value_5248_);
lean_dec_ref_known(v_algorithm_5206_, 1);
v___y_5236_ = v_value_5248_;
goto v___jp_5235_;
}
else
{
lean_object* v_value_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
v_value_5249_ = lean_ctor_get(v_algorithm_5206_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v_algorithm_5206_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v_algorithm_5206_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_value_5249_);
lean_dec(v_algorithm_5206_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
lean_ctor_set_tag(v___x_5251_, 4);
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_value_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
v___y_5236_ = v___x_5254_;
goto v___jp_5235_;
}
}
}
v___jp_5214_:
{
lean_object* v___x_5218_; size_t v_sz_5219_; size_t v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; uint8_t v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5218_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5218_, 0, v_extractable_5209_);
v_sz_5219_ = lean_array_size(v_keyUsages_5210_);
v___x_5220_ = ((size_t)0ULL);
v___x_5221_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5219_, v___x_5220_, v_keyUsages_5210_);
v___x_5222_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5222_, 0, v___x_5221_);
v___x_5223_ = lean_unsigned_to_nat(5u);
v___x_5224_ = lean_mk_empty_array_with_capacity(v___x_5223_);
v___x_5225_ = lean_array_push(v___x_5224_, v___y_5216_);
v___x_5226_ = lean_array_push(v___x_5225_, v___y_5215_);
v___x_5227_ = lean_array_push(v___x_5226_, v___y_5217_);
v___x_5228_ = lean_array_push(v___x_5227_, v___x_5218_);
v___x_5229_ = lean_array_push(v___x_5228_, v___x_5222_);
v___x_5230_ = l_Lasm_JS_Web_Support_args(v___x_5229_);
v___x_5231_ = lean_unsigned_to_nat(0u);
v___x_5232_ = 0;
v___x_5233_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5205_, v___x_5213_, v___x_5230_);
v___x_5234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5231_, v___x_5232_, v___x_5233_, v___f_5212_);
return v___x_5234_;
}
v___jp_5235_:
{
lean_object* v___x_5237_; lean_object* v___x_5238_; 
v___x_5237_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5238_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5238_, 0, v_baseKey_5207_);
lean_ctor_set(v___x_5238_, 1, v___x_5237_);
if (lean_obj_tag(v_derivedKeyType_5208_) == 0)
{
lean_object* v_value_5239_; 
v_value_5239_ = lean_ctor_get(v_derivedKeyType_5208_, 0);
lean_inc(v_value_5239_);
lean_dec_ref_known(v_derivedKeyType_5208_, 1);
v___y_5215_ = v___x_5238_;
v___y_5216_ = v___y_5236_;
v___y_5217_ = v_value_5239_;
goto v___jp_5214_;
}
else
{
lean_object* v_value_5240_; lean_object* v___x_5242_; uint8_t v_isShared_5243_; uint8_t v_isSharedCheck_5247_; 
v_value_5240_ = lean_ctor_get(v_derivedKeyType_5208_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v_derivedKeyType_5208_);
if (v_isSharedCheck_5247_ == 0)
{
v___x_5242_ = v_derivedKeyType_5208_;
v_isShared_5243_ = v_isSharedCheck_5247_;
goto v_resetjp_5241_;
}
else
{
lean_inc(v_value_5240_);
lean_dec(v_derivedKeyType_5208_);
v___x_5242_ = lean_box(0);
v_isShared_5243_ = v_isSharedCheck_5247_;
goto v_resetjp_5241_;
}
v_resetjp_5241_:
{
lean_object* v___x_5245_; 
if (v_isShared_5243_ == 0)
{
lean_ctor_set_tag(v___x_5242_, 4);
v___x_5245_ = v___x_5242_;
goto v_reusejp_5244_;
}
else
{
lean_object* v_reuseFailAlloc_5246_; 
v_reuseFailAlloc_5246_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5246_, 0, v_value_5240_);
v___x_5245_ = v_reuseFailAlloc_5246_;
goto v_reusejp_5244_;
}
v_reusejp_5244_:
{
v___y_5215_ = v___x_5238_;
v___y_5216_ = v___y_5236_;
v___y_5217_ = v___x_5245_;
goto v___jp_5214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___boxed(lean_object* v_self_5257_, lean_object* v_algorithm_5258_, lean_object* v_baseKey_5259_, lean_object* v_derivedKeyType_5260_, lean_object* v_extractable_5261_, lean_object* v_keyUsages_5262_, lean_object* v_a_5263_){
_start:
{
uint8_t v_extractable_boxed_5264_; lean_object* v_res_5265_; 
v_extractable_boxed_5264_ = lean_unbox(v_extractable_5261_);
v_res_5265_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey(v_self_5257_, v_algorithm_5258_, v_baseKey_5259_, v_derivedKeyType_5260_, v_extractable_boxed_5264_, v_keyUsages_5262_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(lean_object* v_x_5266_){
_start:
{
if (lean_obj_tag(v_x_5266_) == 0)
{
lean_object* v___x_5267_; 
v___x_5267_ = lean_box(0);
return v___x_5267_;
}
else
{
lean_object* v_val_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5281_; 
v_val_5268_ = lean_ctor_get(v_x_5266_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v_x_5266_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5270_ = v_x_5266_;
v_isShared_5271_ = v_isSharedCheck_5281_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_val_5268_);
lean_dec(v_x_5266_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5281_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; uint8_t v___x_5275_; 
v___x_5272_ = lean_nat_to_int(v_val_5268_);
v___x_5273_ = lean_nat_abs(v___x_5272_);
v___x_5274_ = lean_cstr_to_nat("9007199254740991");
v___x_5275_ = lean_nat_dec_le(v___x_5273_, v___x_5274_);
lean_dec(v___x_5273_);
if (v___x_5275_ == 0)
{
lean_object* v___x_5277_; 
if (v_isShared_5271_ == 0)
{
lean_ctor_set_tag(v___x_5270_, 5);
lean_ctor_set(v___x_5270_, 0, v___x_5272_);
v___x_5277_ = v___x_5270_;
goto v_reusejp_5276_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5272_);
v___x_5277_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5276_;
}
v_reusejp_5276_:
{
return v___x_5277_;
}
}
else
{
double v___x_5279_; lean_object* v___x_5280_; 
lean_del_object(v___x_5270_);
v___x_5279_ = l_Float_ofInt(v___x_5272_);
lean_dec(v___x_5272_);
v___x_5280_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5280_, 0, v___x_5279_);
return v___x_5280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits(lean_object* v_self_5282_, lean_object* v_algorithm_5283_, lean_object* v_baseKey_5284_, lean_object* v_length_5285_){
_start:
{
lean_object* v___f_5287_; lean_object* v___x_5288_; lean_object* v___y_5290_; 
v___f_5287_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5288_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
if (lean_obj_tag(v_algorithm_5283_) == 0)
{
lean_object* v_value_5304_; 
v_value_5304_ = lean_ctor_get(v_algorithm_5283_, 0);
lean_inc(v_value_5304_);
lean_dec_ref_known(v_algorithm_5283_, 1);
v___y_5290_ = v_value_5304_;
goto v___jp_5289_;
}
else
{
lean_object* v_value_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5312_; 
v_value_5305_ = lean_ctor_get(v_algorithm_5283_, 0);
v_isSharedCheck_5312_ = !lean_is_exclusive(v_algorithm_5283_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5307_ = v_algorithm_5283_;
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_value_5305_);
lean_dec(v_algorithm_5283_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v___x_5310_; 
if (v_isShared_5308_ == 0)
{
lean_ctor_set_tag(v___x_5307_, 4);
v___x_5310_ = v___x_5307_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v_value_5305_);
v___x_5310_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
v___y_5290_ = v___x_5310_;
goto v___jp_5289_;
}
}
}
v___jp_5289_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; uint8_t v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5291_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5292_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5292_, 0, v_baseKey_5284_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
v___x_5293_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(v_length_5285_);
v___x_5294_ = lean_unsigned_to_nat(3u);
v___x_5295_ = lean_mk_empty_array_with_capacity(v___x_5294_);
v___x_5296_ = lean_array_push(v___x_5295_, v___y_5290_);
v___x_5297_ = lean_array_push(v___x_5296_, v___x_5292_);
v___x_5298_ = lean_array_push(v___x_5297_, v___x_5293_);
v___x_5299_ = l_Lasm_JS_Web_Support_args(v___x_5298_);
v___x_5300_ = lean_unsigned_to_nat(0u);
v___x_5301_ = 0;
v___x_5302_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5282_, v___x_5288_, v___x_5299_);
v___x_5303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5300_, v___x_5301_, v___x_5302_, v___f_5287_);
return v___x_5303_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits___boxed(lean_object* v_self_5313_, lean_object* v_algorithm_5314_, lean_object* v_baseKey_5315_, lean_object* v_length_5316_, lean_object* v_a_5317_){
_start:
{
lean_object* v_res_5318_; 
v_res_5318_ = l_Lasm_JS_Web_SubtleCrypto_deriveBits(v_self_5313_, v_algorithm_5314_, v_baseKey_5315_, v_length_5316_);
return v_res_5318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(lean_object* v_x_5319_){
_start:
{
if (lean_obj_tag(v_x_5319_) == 0)
{
lean_object* v___x_5320_; 
v___x_5320_ = lean_box(0);
return v___x_5320_;
}
else
{
lean_object* v_val_5321_; lean_object* v___x_5323_; uint8_t v_isShared_5324_; uint8_t v_isSharedCheck_5328_; 
v_val_5321_ = lean_ctor_get(v_x_5319_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v_x_5319_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5323_ = v_x_5319_;
v_isShared_5324_ = v_isSharedCheck_5328_;
goto v_resetjp_5322_;
}
else
{
lean_inc(v_val_5321_);
lean_dec(v_x_5319_);
v___x_5323_ = lean_box(0);
v_isShared_5324_ = v_isSharedCheck_5328_;
goto v_resetjp_5322_;
}
v_resetjp_5322_:
{
lean_object* v___x_5326_; 
if (v_isShared_5324_ == 0)
{
lean_ctor_set_tag(v___x_5323_, 4);
v___x_5326_ = v___x_5323_;
goto v_reusejp_5325_;
}
else
{
lean_object* v_reuseFailAlloc_5327_; 
v_reuseFailAlloc_5327_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5327_, 0, v_val_5321_);
v___x_5326_ = v_reuseFailAlloc_5327_;
goto v_reusejp_5325_;
}
v_reusejp_5325_:
{
return v___x_5326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(lean_object* v_x_5329_){
_start:
{
if (lean_obj_tag(v_x_5329_) == 0)
{
lean_object* v___x_5330_; 
v___x_5330_ = lean_box(0);
return v___x_5330_;
}
else
{
lean_object* v_val_5331_; lean_object* v___x_5332_; uint8_t v___x_5333_; 
v_val_5331_ = lean_ctor_get(v_x_5329_, 0);
v___x_5332_ = lean_alloc_ctor(2, 0, 1);
v___x_5333_ = lean_unbox(v_val_5331_);
lean_ctor_set_uint8(v___x_5332_, 0, v___x_5333_);
return v___x_5332_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2___boxed(lean_object* v_x_5334_){
_start:
{
lean_object* v_res_5335_; 
v_res_5335_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_x_5334_);
lean_dec(v_x_5334_);
return v_res_5335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(size_t v_sz_5336_, size_t v_i_5337_, lean_object* v_bs_5338_){
_start:
{
uint8_t v___x_5339_; 
v___x_5339_ = lean_usize_dec_lt(v_i_5337_, v_sz_5336_);
if (v___x_5339_ == 0)
{
return v_bs_5338_;
}
else
{
lean_object* v_v_5340_; lean_object* v___x_5341_; lean_object* v_bs_x27_5342_; lean_object* v___x_5343_; size_t v___x_5344_; size_t v___x_5345_; lean_object* v___x_5346_; 
v_v_5340_ = lean_array_uget(v_bs_5338_, v_i_5337_);
v___x_5341_ = lean_unsigned_to_nat(0u);
v_bs_x27_5342_ = lean_array_uset(v_bs_5338_, v_i_5337_, v___x_5341_);
v___x_5343_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5343_, 0, v_v_5340_);
v___x_5344_ = ((size_t)1ULL);
v___x_5345_ = lean_usize_add(v_i_5337_, v___x_5344_);
v___x_5346_ = lean_array_uset(v_bs_x27_5342_, v_i_5337_, v___x_5343_);
v_i_5337_ = v___x_5345_;
v_bs_5338_ = v___x_5346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1___boxed(lean_object* v_sz_5348_, lean_object* v_i_5349_, lean_object* v_bs_5350_){
_start:
{
size_t v_sz_boxed_5351_; size_t v_i_boxed_5352_; lean_object* v_res_5353_; 
v_sz_boxed_5351_ = lean_unbox_usize(v_sz_5348_);
lean_dec(v_sz_5348_);
v_i_boxed_5352_ = lean_unbox_usize(v_i_5349_);
lean_dec(v_i_5349_);
v_res_5353_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_boxed_5351_, v_i_boxed_5352_, v_bs_5350_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(lean_object* v_x_5354_){
_start:
{
if (lean_obj_tag(v_x_5354_) == 0)
{
lean_object* v___x_5355_; 
v___x_5355_ = lean_box(0);
return v___x_5355_;
}
else
{
lean_object* v_val_5356_; lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5366_; 
v_val_5356_ = lean_ctor_get(v_x_5354_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v_x_5354_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5358_ = v_x_5354_;
v_isShared_5359_ = v_isSharedCheck_5366_;
goto v_resetjp_5357_;
}
else
{
lean_inc(v_val_5356_);
lean_dec(v_x_5354_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5366_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
size_t v_sz_5360_; size_t v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5364_; 
v_sz_5360_ = lean_array_size(v_val_5356_);
v___x_5361_ = ((size_t)0ULL);
v___x_5362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_5360_, v___x_5361_, v_val_5356_);
if (v_isShared_5359_ == 0)
{
lean_ctor_set_tag(v___x_5358_, 7);
lean_ctor_set(v___x_5358_, 0, v___x_5362_);
v___x_5364_ = v___x_5358_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v___x_5362_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(size_t v_sz_5367_, size_t v_i_5368_, lean_object* v_bs_5369_){
_start:
{
uint8_t v___x_5370_; 
v___x_5370_ = lean_usize_dec_lt(v_i_5368_, v_sz_5367_);
if (v___x_5370_ == 0)
{
return v_bs_5369_;
}
else
{
lean_object* v_v_5371_; lean_object* v_r_5372_; lean_object* v_d_5373_; lean_object* v_t_5374_; lean_object* v___x_5375_; lean_object* v_bs_x27_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; size_t v___x_5392_; size_t v___x_5393_; lean_object* v___x_5394_; 
v_v_5371_ = lean_array_uget_borrowed(v_bs_5369_, v_i_5368_);
v_r_5372_ = lean_ctor_get(v_v_5371_, 0);
lean_inc(v_r_5372_);
v_d_5373_ = lean_ctor_get(v_v_5371_, 1);
lean_inc(v_d_5373_);
v_t_5374_ = lean_ctor_get(v_v_5371_, 2);
lean_inc(v_t_5374_);
v___x_5375_ = lean_unsigned_to_nat(0u);
v_bs_x27_5376_ = lean_array_uset(v_bs_5369_, v_i_5368_, v___x_5375_);
v___x_5377_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
v___x_5378_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_r_5372_);
v___x_5379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5379_, 0, v___x_5377_);
lean_ctor_set(v___x_5379_, 1, v___x_5378_);
v___x_5380_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5381_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5373_);
v___x_5382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5382_, 0, v___x_5380_);
lean_ctor_set(v___x_5382_, 1, v___x_5381_);
v___x_5383_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_5384_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_t_5374_);
v___x_5385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5385_, 0, v___x_5383_);
lean_ctor_set(v___x_5385_, 1, v___x_5384_);
v___x_5386_ = lean_unsigned_to_nat(3u);
v___x_5387_ = lean_mk_empty_array_with_capacity(v___x_5386_);
v___x_5388_ = lean_array_push(v___x_5387_, v___x_5379_);
v___x_5389_ = lean_array_push(v___x_5388_, v___x_5382_);
v___x_5390_ = lean_array_push(v___x_5389_, v___x_5385_);
v___x_5391_ = l_Lasm_JS_Web_Support_fields(v___x_5390_);
lean_dec_ref(v___x_5390_);
v___x_5392_ = ((size_t)1ULL);
v___x_5393_ = lean_usize_add(v_i_5368_, v___x_5392_);
v___x_5394_ = lean_array_uset(v_bs_x27_5376_, v_i_5368_, v___x_5391_);
v_i_5368_ = v___x_5393_;
v_bs_5369_ = v___x_5394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4___boxed(lean_object* v_sz_5396_, lean_object* v_i_5397_, lean_object* v_bs_5398_){
_start:
{
size_t v_sz_boxed_5399_; size_t v_i_boxed_5400_; lean_object* v_res_5401_; 
v_sz_boxed_5399_ = lean_unbox_usize(v_sz_5396_);
lean_dec(v_sz_5396_);
v_i_boxed_5400_ = lean_unbox_usize(v_i_5397_);
lean_dec(v_i_5397_);
v_res_5401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_boxed_5399_, v_i_boxed_5400_, v_bs_5398_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(lean_object* v_x_5402_){
_start:
{
if (lean_obj_tag(v_x_5402_) == 0)
{
lean_object* v___x_5403_; 
v___x_5403_ = lean_box(0);
return v___x_5403_;
}
else
{
lean_object* v_val_5404_; lean_object* v___x_5406_; uint8_t v_isShared_5407_; uint8_t v_isSharedCheck_5414_; 
v_val_5404_ = lean_ctor_get(v_x_5402_, 0);
v_isSharedCheck_5414_ = !lean_is_exclusive(v_x_5402_);
if (v_isSharedCheck_5414_ == 0)
{
v___x_5406_ = v_x_5402_;
v_isShared_5407_ = v_isSharedCheck_5414_;
goto v_resetjp_5405_;
}
else
{
lean_inc(v_val_5404_);
lean_dec(v_x_5402_);
v___x_5406_ = lean_box(0);
v_isShared_5407_ = v_isSharedCheck_5414_;
goto v_resetjp_5405_;
}
v_resetjp_5405_:
{
size_t v_sz_5408_; size_t v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5412_; 
v_sz_5408_ = lean_array_size(v_val_5404_);
v___x_5409_ = ((size_t)0ULL);
v___x_5410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_5408_, v___x_5409_, v_val_5404_);
if (v_isShared_5407_ == 0)
{
lean_ctor_set_tag(v___x_5406_, 7);
lean_ctor_set(v___x_5406_, 0, v___x_5410_);
v___x_5412_ = v___x_5406_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5413_; 
v_reuseFailAlloc_5413_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5413_, 0, v___x_5410_);
v___x_5412_ = v_reuseFailAlloc_5413_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
return v___x_5412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey(lean_object* v_self_5416_, uint8_t v_format_5417_, lean_object* v_keyData_5418_, lean_object* v_algorithm_5419_, uint8_t v_extractable_5420_, lean_object* v_keyUsages_5421_){
_start:
{
lean_object* v___f_5423_; lean_object* v___x_5424_; lean_object* v___y_5426_; lean_object* v___y_5427_; lean_object* v___y_5428_; lean_object* v___y_5447_; lean_object* v___y_5448_; lean_object* v___y_5459_; 
v___f_5423_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5424_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0));
switch(v_format_5417_)
{
case 0:
{
lean_object* v___x_5562_; 
v___x_5562_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5459_ = v___x_5562_;
goto v___jp_5458_;
}
case 1:
{
lean_object* v___x_5563_; 
v___x_5563_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5459_ = v___x_5563_;
goto v___jp_5458_;
}
case 2:
{
lean_object* v___x_5564_; 
v___x_5564_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5459_ = v___x_5564_;
goto v___jp_5458_;
}
case 3:
{
lean_object* v___x_5565_; 
v___x_5565_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5459_ = v___x_5565_;
goto v___jp_5458_;
}
case 4:
{
lean_object* v___x_5566_; 
v___x_5566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5459_ = v___x_5566_;
goto v___jp_5458_;
}
case 5:
{
lean_object* v___x_5567_; 
v___x_5567_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5459_ = v___x_5567_;
goto v___jp_5458_;
}
case 6:
{
lean_object* v___x_5568_; 
v___x_5568_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5459_ = v___x_5568_;
goto v___jp_5458_;
}
default: 
{
lean_object* v___x_5569_; 
v___x_5569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5459_ = v___x_5569_;
goto v___jp_5458_;
}
}
v___jp_5425_:
{
lean_object* v___x_5429_; size_t v_sz_5430_; size_t v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; uint8_t v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; 
v___x_5429_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5429_, 0, v_extractable_5420_);
v_sz_5430_ = lean_array_size(v_keyUsages_5421_);
v___x_5431_ = ((size_t)0ULL);
v___x_5432_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5430_, v___x_5431_, v_keyUsages_5421_);
v___x_5433_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5432_);
v___x_5434_ = lean_unsigned_to_nat(5u);
v___x_5435_ = lean_mk_empty_array_with_capacity(v___x_5434_);
lean_inc(v___y_5427_);
v___x_5436_ = lean_array_push(v___x_5435_, v___y_5427_);
v___x_5437_ = lean_array_push(v___x_5436_, v___y_5426_);
v___x_5438_ = lean_array_push(v___x_5437_, v___y_5428_);
v___x_5439_ = lean_array_push(v___x_5438_, v___x_5429_);
v___x_5440_ = lean_array_push(v___x_5439_, v___x_5433_);
v___x_5441_ = l_Lasm_JS_Web_Support_args(v___x_5440_);
v___x_5442_ = lean_unsigned_to_nat(0u);
v___x_5443_ = 0;
v___x_5444_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5416_, v___x_5424_, v___x_5441_);
v___x_5445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5442_, v___x_5443_, v___x_5444_, v___f_5423_);
return v___x_5445_;
}
v___jp_5446_:
{
if (lean_obj_tag(v_algorithm_5419_) == 0)
{
lean_object* v_value_5449_; 
v_value_5449_ = lean_ctor_get(v_algorithm_5419_, 0);
lean_inc(v_value_5449_);
lean_dec_ref_known(v_algorithm_5419_, 1);
v___y_5426_ = v___y_5448_;
v___y_5427_ = v___y_5447_;
v___y_5428_ = v_value_5449_;
goto v___jp_5425_;
}
else
{
lean_object* v_value_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
v_value_5450_ = lean_ctor_get(v_algorithm_5419_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v_algorithm_5419_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5452_ = v_algorithm_5419_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_value_5450_);
lean_dec(v_algorithm_5419_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
lean_ctor_set_tag(v___x_5452_, 4);
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_value_5450_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
v___y_5426_ = v___y_5448_;
v___y_5427_ = v___y_5447_;
v___y_5428_ = v___x_5455_;
goto v___jp_5425_;
}
}
}
}
v___jp_5458_:
{
if (lean_obj_tag(v_keyData_5418_) == 0)
{
lean_object* v_value_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5467_; 
v_value_5460_ = lean_ctor_get(v_keyData_5418_, 0);
v_isSharedCheck_5467_ = !lean_is_exclusive(v_keyData_5418_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5462_ = v_keyData_5418_;
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_value_5460_);
lean_dec(v_keyData_5418_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5467_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5465_; 
if (v_isShared_5463_ == 0)
{
lean_ctor_set_tag(v___x_5462_, 6);
v___x_5465_ = v___x_5462_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v_value_5460_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
v___y_5447_ = v___y_5459_;
v___y_5448_ = v___x_5465_;
goto v___jp_5446_;
}
}
}
else
{
lean_object* v_value_5468_; lean_object* v_kty_5469_; lean_object* v_use_5470_; lean_object* v_key__ops_5471_; lean_object* v_alg_5472_; lean_object* v_ext_5473_; lean_object* v_crv_5474_; lean_object* v_x_5475_; lean_object* v_y_5476_; lean_object* v_d_5477_; lean_object* v_n_5478_; lean_object* v_e_5479_; lean_object* v_p_5480_; lean_object* v_q_5481_; lean_object* v_dp_5482_; lean_object* v_dq_5483_; lean_object* v_qi_5484_; lean_object* v_oth_5485_; lean_object* v_k_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; 
v_value_5468_ = lean_ctor_get(v_keyData_5418_, 0);
lean_inc_ref(v_value_5468_);
lean_dec_ref_known(v_keyData_5418_, 1);
v_kty_5469_ = lean_ctor_get(v_value_5468_, 0);
lean_inc(v_kty_5469_);
v_use_5470_ = lean_ctor_get(v_value_5468_, 1);
lean_inc(v_use_5470_);
v_key__ops_5471_ = lean_ctor_get(v_value_5468_, 2);
lean_inc(v_key__ops_5471_);
v_alg_5472_ = lean_ctor_get(v_value_5468_, 3);
lean_inc(v_alg_5472_);
v_ext_5473_ = lean_ctor_get(v_value_5468_, 4);
lean_inc(v_ext_5473_);
v_crv_5474_ = lean_ctor_get(v_value_5468_, 5);
lean_inc(v_crv_5474_);
v_x_5475_ = lean_ctor_get(v_value_5468_, 6);
lean_inc(v_x_5475_);
v_y_5476_ = lean_ctor_get(v_value_5468_, 7);
lean_inc(v_y_5476_);
v_d_5477_ = lean_ctor_get(v_value_5468_, 8);
lean_inc(v_d_5477_);
v_n_5478_ = lean_ctor_get(v_value_5468_, 9);
lean_inc(v_n_5478_);
v_e_5479_ = lean_ctor_get(v_value_5468_, 10);
lean_inc(v_e_5479_);
v_p_5480_ = lean_ctor_get(v_value_5468_, 11);
lean_inc(v_p_5480_);
v_q_5481_ = lean_ctor_get(v_value_5468_, 12);
lean_inc(v_q_5481_);
v_dp_5482_ = lean_ctor_get(v_value_5468_, 13);
lean_inc(v_dp_5482_);
v_dq_5483_ = lean_ctor_get(v_value_5468_, 14);
lean_inc(v_dq_5483_);
v_qi_5484_ = lean_ctor_get(v_value_5468_, 15);
lean_inc(v_qi_5484_);
v_oth_5485_ = lean_ctor_get(v_value_5468_, 16);
lean_inc(v_oth_5485_);
v_k_5486_ = lean_ctor_get(v_value_5468_, 17);
lean_inc(v_k_5486_);
lean_dec_ref(v_value_5468_);
v___x_5487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_5488_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_kty_5469_);
v___x_5489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5489_, 0, v___x_5487_);
lean_ctor_set(v___x_5489_, 1, v___x_5488_);
v___x_5490_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_5491_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_use_5470_);
v___x_5492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5492_, 0, v___x_5490_);
lean_ctor_set(v___x_5492_, 1, v___x_5491_);
v___x_5493_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_5494_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(v_key__ops_5471_);
v___x_5495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5495_, 0, v___x_5493_);
lean_ctor_set(v___x_5495_, 1, v___x_5494_);
v___x_5496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_5497_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_alg_5472_);
v___x_5498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5496_);
lean_ctor_set(v___x_5498_, 1, v___x_5497_);
v___x_5499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_5500_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_ext_5473_);
lean_dec(v_ext_5473_);
v___x_5501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5501_, 0, v___x_5499_);
lean_ctor_set(v___x_5501_, 1, v___x_5500_);
v___x_5502_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_5503_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_crv_5474_);
v___x_5504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5504_, 0, v___x_5502_);
lean_ctor_set(v___x_5504_, 1, v___x_5503_);
v___x_5505_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_5506_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_x_5475_);
v___x_5507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5507_, 0, v___x_5505_);
lean_ctor_set(v___x_5507_, 1, v___x_5506_);
v___x_5508_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_5509_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_y_5476_);
v___x_5510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5510_, 0, v___x_5508_);
lean_ctor_set(v___x_5510_, 1, v___x_5509_);
v___x_5511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5512_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5477_);
v___x_5513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5513_, 0, v___x_5511_);
lean_ctor_set(v___x_5513_, 1, v___x_5512_);
v___x_5514_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_5515_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_n_5478_);
v___x_5516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5516_, 0, v___x_5514_);
lean_ctor_set(v___x_5516_, 1, v___x_5515_);
v___x_5517_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_5518_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_e_5479_);
v___x_5519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5519_, 0, v___x_5517_);
lean_ctor_set(v___x_5519_, 1, v___x_5518_);
v___x_5520_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_5521_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_p_5480_);
v___x_5522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5522_, 0, v___x_5520_);
lean_ctor_set(v___x_5522_, 1, v___x_5521_);
v___x_5523_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_5524_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_q_5481_);
v___x_5525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5525_, 0, v___x_5523_);
lean_ctor_set(v___x_5525_, 1, v___x_5524_);
v___x_5526_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_5527_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dp_5482_);
v___x_5528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5528_, 0, v___x_5526_);
lean_ctor_set(v___x_5528_, 1, v___x_5527_);
v___x_5529_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_5530_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dq_5483_);
v___x_5531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5529_);
lean_ctor_set(v___x_5531_, 1, v___x_5530_);
v___x_5532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_5533_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_qi_5484_);
v___x_5534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5534_, 0, v___x_5532_);
lean_ctor_set(v___x_5534_, 1, v___x_5533_);
v___x_5535_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_5536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(v_oth_5485_);
v___x_5537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5537_, 0, v___x_5535_);
lean_ctor_set(v___x_5537_, 1, v___x_5536_);
v___x_5538_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_5539_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_k_5486_);
v___x_5540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5540_, 0, v___x_5538_);
lean_ctor_set(v___x_5540_, 1, v___x_5539_);
v___x_5541_ = lean_unsigned_to_nat(18u);
v___x_5542_ = lean_mk_empty_array_with_capacity(v___x_5541_);
v___x_5543_ = lean_array_push(v___x_5542_, v___x_5489_);
v___x_5544_ = lean_array_push(v___x_5543_, v___x_5492_);
v___x_5545_ = lean_array_push(v___x_5544_, v___x_5495_);
v___x_5546_ = lean_array_push(v___x_5545_, v___x_5498_);
v___x_5547_ = lean_array_push(v___x_5546_, v___x_5501_);
v___x_5548_ = lean_array_push(v___x_5547_, v___x_5504_);
v___x_5549_ = lean_array_push(v___x_5548_, v___x_5507_);
v___x_5550_ = lean_array_push(v___x_5549_, v___x_5510_);
v___x_5551_ = lean_array_push(v___x_5550_, v___x_5513_);
v___x_5552_ = lean_array_push(v___x_5551_, v___x_5516_);
v___x_5553_ = lean_array_push(v___x_5552_, v___x_5519_);
v___x_5554_ = lean_array_push(v___x_5553_, v___x_5522_);
v___x_5555_ = lean_array_push(v___x_5554_, v___x_5525_);
v___x_5556_ = lean_array_push(v___x_5555_, v___x_5528_);
v___x_5557_ = lean_array_push(v___x_5556_, v___x_5531_);
v___x_5558_ = lean_array_push(v___x_5557_, v___x_5534_);
v___x_5559_ = lean_array_push(v___x_5558_, v___x_5537_);
v___x_5560_ = lean_array_push(v___x_5559_, v___x_5540_);
v___x_5561_ = l_Lasm_JS_Web_Support_fields(v___x_5560_);
lean_dec_ref(v___x_5560_);
v___y_5447_ = v___y_5459_;
v___y_5448_ = v___x_5561_;
goto v___jp_5446_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___boxed(lean_object* v_self_5570_, lean_object* v_format_5571_, lean_object* v_keyData_5572_, lean_object* v_algorithm_5573_, lean_object* v_extractable_5574_, lean_object* v_keyUsages_5575_, lean_object* v_a_5576_){
_start:
{
uint8_t v_format_boxed_5577_; uint8_t v_extractable_boxed_5578_; lean_object* v_res_5579_; 
v_format_boxed_5577_ = lean_unbox(v_format_5571_);
v_extractable_boxed_5578_ = lean_unbox(v_extractable_5574_);
v_res_5579_ = l_Lasm_JS_Web_SubtleCrypto_importKey(v_self_5570_, v_format_boxed_5577_, v_keyData_5572_, v_algorithm_5573_, v_extractable_boxed_5578_, v_keyUsages_5575_);
return v_res_5579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(lean_object* v_x_5580_){
_start:
{
lean_object* v_val_5583_; 
if (lean_obj_tag(v_x_5580_) == 0)
{
lean_object* v_a_5585_; lean_object* v___x_5587_; uint8_t v_isShared_5588_; uint8_t v_isSharedCheck_5593_; 
v_a_5585_ = lean_ctor_get(v_x_5580_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v_x_5580_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5587_ = v_x_5580_;
v_isShared_5588_ = v_isSharedCheck_5593_;
goto v_resetjp_5586_;
}
else
{
lean_inc(v_a_5585_);
lean_dec(v_x_5580_);
v___x_5587_ = lean_box(0);
v_isShared_5588_ = v_isSharedCheck_5593_;
goto v_resetjp_5586_;
}
v_resetjp_5586_:
{
lean_object* v___x_5590_; 
if (v_isShared_5588_ == 0)
{
v___x_5590_ = v___x_5587_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5585_);
v___x_5590_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
lean_object* v___x_5591_; 
v___x_5591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5590_);
return v___x_5591_;
}
}
}
else
{
lean_object* v_a_5594_; lean_object* v___x_5596_; uint8_t v_isShared_5597_; uint8_t v_isSharedCheck_5607_; 
v_a_5594_ = lean_ctor_get(v_x_5580_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v_x_5580_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5596_ = v_x_5580_;
v_isShared_5597_ = v_isSharedCheck_5607_;
goto v_resetjp_5595_;
}
else
{
lean_inc(v_a_5594_);
lean_dec(v_x_5580_);
v___x_5596_ = lean_box(0);
v_isShared_5597_ = v_isSharedCheck_5607_;
goto v_resetjp_5595_;
}
v_resetjp_5595_:
{
lean_object* v___x_5598_; 
v___x_5598_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_a_5594_);
if (lean_obj_tag(v___x_5598_) == 0)
{
lean_object* v_a_5599_; lean_object* v___x_5601_; 
v_a_5599_ = lean_ctor_get(v___x_5598_, 0);
lean_inc(v_a_5599_);
lean_dec_ref_known(v___x_5598_, 1);
if (v_isShared_5597_ == 0)
{
lean_ctor_set(v___x_5596_, 0, v_a_5599_);
v___x_5601_ = v___x_5596_;
goto v_reusejp_5600_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v_a_5599_);
v___x_5601_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5600_;
}
v_reusejp_5600_:
{
v_val_5583_ = v___x_5601_;
goto v___jp_5582_;
}
}
else
{
lean_object* v_a_5603_; lean_object* v___x_5605_; 
v_a_5603_ = lean_ctor_get(v___x_5598_, 0);
lean_inc(v_a_5603_);
lean_dec_ref_known(v___x_5598_, 1);
if (v_isShared_5597_ == 0)
{
lean_ctor_set_tag(v___x_5596_, 0);
lean_ctor_set(v___x_5596_, 0, v_a_5603_);
v___x_5605_ = v___x_5596_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_a_5603_);
v___x_5605_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
v_val_5583_ = v___x_5605_;
goto v___jp_5582_;
}
}
}
}
v___jp_5582_:
{
lean_object* v___x_5584_; 
v___x_5584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5584_, 0, v_val_5583_);
return v___x_5584_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed(lean_object* v_x_5608_, lean_object* v___y_5609_){
_start:
{
lean_object* v_res_5610_; 
v_res_5610_ = l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(v_x_5608_);
return v_res_5610_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(lean_object* v_failurePrefix_5611_, uint32_t v_op_5612_, uint64_t v_flags_5613_, lean_object* v_payload_5614_, lean_object* v___f_5615_, lean_object* v___f_5616_, lean_object* v___f_5617_, lean_object* v_x_5618_){
_start:
{
if (lean_obj_tag(v_x_5618_) == 0)
{
lean_object* v_a_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5628_; 
lean_dec_ref(v___f_5617_);
lean_dec_ref(v___f_5616_);
lean_dec_ref(v___f_5615_);
lean_dec(v_payload_5614_);
v_a_5620_ = lean_ctor_get(v_x_5618_, 0);
v_isSharedCheck_5628_ = !lean_is_exclusive(v_x_5618_);
if (v_isSharedCheck_5628_ == 0)
{
v___x_5622_ = v_x_5618_;
v_isShared_5623_ = v_isSharedCheck_5628_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_a_5620_);
lean_dec(v_x_5618_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5628_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v___x_5625_; 
if (v_isShared_5623_ == 0)
{
v___x_5625_ = v___x_5622_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5627_; 
v_reuseFailAlloc_5627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5627_, 0, v_a_5620_);
v___x_5625_ = v_reuseFailAlloc_5627_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
lean_object* v___x_5626_; 
v___x_5626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5626_, 0, v___x_5625_);
return v___x_5626_;
}
}
}
else
{
lean_object* v_a_5629_; lean_object* v___x_5631_; uint8_t v_isShared_5632_; uint8_t v_isSharedCheck_5675_; 
v_a_5629_ = lean_ctor_get(v_x_5618_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v_x_5618_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5631_ = v_x_5618_;
v_isShared_5632_ = v_isSharedCheck_5675_;
goto v_resetjp_5630_;
}
else
{
lean_inc(v_a_5629_);
lean_dec(v_x_5618_);
v___x_5631_ = lean_box(0);
v_isShared_5632_ = v_isSharedCheck_5675_;
goto v_resetjp_5630_;
}
v_resetjp_5630_:
{
lean_object* v___x_5633_; lean_object* v___x_5634_; uint8_t v___x_5635_; 
v___x_5633_ = lean_string_utf8_byte_size(v_failurePrefix_5611_);
v___x_5634_ = lean_unsigned_to_nat(0u);
v___x_5635_ = lean_nat_dec_eq(v___x_5633_, v___x_5634_);
if (v___x_5635_ == 0)
{
lean_object* v___f_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___f_5640_; lean_object* v_val_5642_; lean_object* v___x_5647_; 
lean_dec_ref(v___f_5617_);
lean_inc(v_a_5629_);
v___f_5636_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5636_, 0, v_a_5629_);
v___x_5637_ = lean_box(v___x_5635_);
v___x_5638_ = lean_box_uint32(v_op_5612_);
v___x_5639_ = lean_box_uint64(v_flags_5613_);
lean_inc(v_payload_5614_);
v___f_5640_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5640_, 0, v___x_5634_);
lean_closure_set(v___f_5640_, 1, v___x_5637_);
lean_closure_set(v___f_5640_, 2, v___f_5636_);
lean_closure_set(v___f_5640_, 3, v_a_5629_);
lean_closure_set(v___f_5640_, 4, v___x_5638_);
lean_closure_set(v___f_5640_, 5, v___x_5639_);
lean_closure_set(v___f_5640_, 6, v_payload_5614_);
v___x_5647_ = l_Lasm_JS_Wire_encodeIO(v_payload_5614_);
lean_dec(v_payload_5614_);
if (lean_obj_tag(v___x_5647_) == 0)
{
lean_object* v_a_5648_; lean_object* v___x_5650_; 
v_a_5648_ = lean_ctor_get(v___x_5647_, 0);
lean_inc(v_a_5648_);
lean_dec_ref_known(v___x_5647_, 1);
if (v_isShared_5632_ == 0)
{
lean_ctor_set(v___x_5631_, 0, v_a_5648_);
v___x_5650_ = v___x_5631_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v_a_5648_);
v___x_5650_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
v_val_5642_ = v___x_5650_;
goto v___jp_5641_;
}
}
else
{
lean_object* v_a_5652_; lean_object* v___x_5654_; 
v_a_5652_ = lean_ctor_get(v___x_5647_, 0);
lean_inc(v_a_5652_);
lean_dec_ref_known(v___x_5647_, 1);
if (v_isShared_5632_ == 0)
{
lean_ctor_set_tag(v___x_5631_, 0);
lean_ctor_set(v___x_5631_, 0, v_a_5652_);
v___x_5654_ = v___x_5631_;
goto v_reusejp_5653_;
}
else
{
lean_object* v_reuseFailAlloc_5655_; 
v_reuseFailAlloc_5655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5655_, 0, v_a_5652_);
v___x_5654_ = v_reuseFailAlloc_5655_;
goto v_reusejp_5653_;
}
v_reusejp_5653_:
{
v_val_5642_ = v___x_5654_;
goto v___jp_5641_;
}
}
v___jp_5641_:
{
lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; 
v___x_5643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5643_, 0, v_val_5642_);
v___x_5644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5634_, v___x_5635_, v___x_5643_, v___f_5640_);
v___x_5645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5634_, v___x_5635_, v___x_5644_, v___f_5615_);
v___x_5646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5634_, v___x_5635_, v___x_5645_, v___f_5616_);
return v___x_5646_;
}
}
else
{
lean_object* v___f_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___f_5659_; uint8_t v___x_5660_; lean_object* v_val_5662_; lean_object* v___x_5666_; 
lean_dec_ref(v___f_5616_);
lean_dec_ref(v___f_5615_);
lean_inc(v_a_5629_);
v___f_5656_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5656_, 0, v_a_5629_);
v___x_5657_ = lean_box_uint32(v_op_5612_);
v___x_5658_ = lean_box_uint64(v_flags_5613_);
lean_inc(v_payload_5614_);
v___f_5659_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5659_, 0, v___f_5656_);
lean_closure_set(v___f_5659_, 1, v_a_5629_);
lean_closure_set(v___f_5659_, 2, v___x_5657_);
lean_closure_set(v___f_5659_, 3, v___x_5658_);
lean_closure_set(v___f_5659_, 4, v_payload_5614_);
v___x_5660_ = 0;
v___x_5666_ = l_Lasm_JS_Wire_encodeIO(v_payload_5614_);
lean_dec(v_payload_5614_);
if (lean_obj_tag(v___x_5666_) == 0)
{
lean_object* v_a_5667_; lean_object* v___x_5669_; 
v_a_5667_ = lean_ctor_get(v___x_5666_, 0);
lean_inc(v_a_5667_);
lean_dec_ref_known(v___x_5666_, 1);
if (v_isShared_5632_ == 0)
{
lean_ctor_set(v___x_5631_, 0, v_a_5667_);
v___x_5669_ = v___x_5631_;
goto v_reusejp_5668_;
}
else
{
lean_object* v_reuseFailAlloc_5670_; 
v_reuseFailAlloc_5670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5670_, 0, v_a_5667_);
v___x_5669_ = v_reuseFailAlloc_5670_;
goto v_reusejp_5668_;
}
v_reusejp_5668_:
{
v_val_5662_ = v___x_5669_;
goto v___jp_5661_;
}
}
else
{
lean_object* v_a_5671_; lean_object* v___x_5673_; 
v_a_5671_ = lean_ctor_get(v___x_5666_, 0);
lean_inc(v_a_5671_);
lean_dec_ref_known(v___x_5666_, 1);
if (v_isShared_5632_ == 0)
{
lean_ctor_set_tag(v___x_5631_, 0);
lean_ctor_set(v___x_5631_, 0, v_a_5671_);
v___x_5673_ = v___x_5631_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5671_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
v_val_5662_ = v___x_5673_;
goto v___jp_5661_;
}
}
v___jp_5661_:
{
lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; 
v___x_5663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5663_, 0, v_val_5662_);
v___x_5664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5634_, v___x_5660_, v___x_5663_, v___f_5659_);
v___x_5665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5634_, v___x_5660_, v___x_5664_, v___f_5617_);
return v___x_5665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed(lean_object* v_failurePrefix_5676_, lean_object* v_op_5677_, lean_object* v_flags_5678_, lean_object* v_payload_5679_, lean_object* v___f_5680_, lean_object* v___f_5681_, lean_object* v___f_5682_, lean_object* v_x_5683_, lean_object* v___y_5684_){
_start:
{
uint32_t v_op_boxed_5685_; uint64_t v_flags_boxed_5686_; lean_object* v_res_5687_; 
v_op_boxed_5685_ = lean_unbox_uint32(v_op_5677_);
lean_dec(v_op_5677_);
v_flags_boxed_5686_ = lean_unbox_uint64(v_flags_5678_);
lean_dec_ref(v_flags_5678_);
v_res_5687_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(v_failurePrefix_5676_, v_op_boxed_5685_, v_flags_boxed_5686_, v_payload_5679_, v___f_5680_, v___f_5681_, v___f_5682_, v_x_5683_);
lean_dec_ref(v_failurePrefix_5676_);
return v_res_5687_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(lean_object* v___f_5688_, lean_object* v_x_5689_){
_start:
{
if (lean_obj_tag(v_x_5689_) == 0)
{
lean_object* v_a_5691_; lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5699_; 
lean_dec_ref(v___f_5688_);
v_a_5691_ = lean_ctor_get(v_x_5689_, 0);
v_isSharedCheck_5699_ = !lean_is_exclusive(v_x_5689_);
if (v_isSharedCheck_5699_ == 0)
{
v___x_5693_ = v_x_5689_;
v_isShared_5694_ = v_isSharedCheck_5699_;
goto v_resetjp_5692_;
}
else
{
lean_inc(v_a_5691_);
lean_dec(v_x_5689_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5699_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
lean_object* v___x_5696_; 
if (v_isShared_5694_ == 0)
{
v___x_5696_ = v___x_5693_;
goto v_reusejp_5695_;
}
else
{
lean_object* v_reuseFailAlloc_5698_; 
v_reuseFailAlloc_5698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5698_, 0, v_a_5691_);
v___x_5696_ = v_reuseFailAlloc_5698_;
goto v_reusejp_5695_;
}
v_reusejp_5695_:
{
lean_object* v___x_5697_; 
v___x_5697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5697_, 0, v___x_5696_);
return v___x_5697_;
}
}
}
else
{
lean_object* v_a_5700_; lean_object* v___x_5701_; 
v_a_5700_ = lean_ctor_get(v_x_5689_, 0);
lean_inc(v_a_5700_);
lean_dec_ref_known(v_x_5689_, 1);
v___x_5701_ = lean_apply_2(v___f_5688_, v_a_5700_, lean_box(0));
return v___x_5701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_5702_, lean_object* v_x_5703_, lean_object* v___y_5704_){
_start:
{
lean_object* v_res_5705_; 
v_res_5705_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(v___f_5702_, v_x_5703_);
return v_res_5705_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(lean_object* v___f_5706_, lean_object* v_bytes_5707_){
_start:
{
lean_object* v___x_5709_; uint8_t v___x_5710_; lean_object* v_val_5712_; lean_object* v___x_5715_; 
v___x_5709_ = lean_unsigned_to_nat(0u);
v___x_5710_ = 0;
v___x_5715_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5707_);
if (lean_obj_tag(v___x_5715_) == 0)
{
lean_object* v_a_5716_; lean_object* v___x_5718_; uint8_t v_isShared_5719_; uint8_t v_isSharedCheck_5723_; 
v_a_5716_ = lean_ctor_get(v___x_5715_, 0);
v_isSharedCheck_5723_ = !lean_is_exclusive(v___x_5715_);
if (v_isSharedCheck_5723_ == 0)
{
v___x_5718_ = v___x_5715_;
v_isShared_5719_ = v_isSharedCheck_5723_;
goto v_resetjp_5717_;
}
else
{
lean_inc(v_a_5716_);
lean_dec(v___x_5715_);
v___x_5718_ = lean_box(0);
v_isShared_5719_ = v_isSharedCheck_5723_;
goto v_resetjp_5717_;
}
v_resetjp_5717_:
{
lean_object* v___x_5721_; 
if (v_isShared_5719_ == 0)
{
lean_ctor_set_tag(v___x_5718_, 1);
v___x_5721_ = v___x_5718_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5722_; 
v_reuseFailAlloc_5722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5722_, 0, v_a_5716_);
v___x_5721_ = v_reuseFailAlloc_5722_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
v_val_5712_ = v___x_5721_;
goto v___jp_5711_;
}
}
}
else
{
lean_object* v_a_5724_; lean_object* v___x_5726_; uint8_t v_isShared_5727_; uint8_t v_isSharedCheck_5731_; 
v_a_5724_ = lean_ctor_get(v___x_5715_, 0);
v_isSharedCheck_5731_ = !lean_is_exclusive(v___x_5715_);
if (v_isSharedCheck_5731_ == 0)
{
v___x_5726_ = v___x_5715_;
v_isShared_5727_ = v_isSharedCheck_5731_;
goto v_resetjp_5725_;
}
else
{
lean_inc(v_a_5724_);
lean_dec(v___x_5715_);
v___x_5726_ = lean_box(0);
v_isShared_5727_ = v_isSharedCheck_5731_;
goto v_resetjp_5725_;
}
v_resetjp_5725_:
{
lean_object* v___x_5729_; 
if (v_isShared_5727_ == 0)
{
lean_ctor_set_tag(v___x_5726_, 0);
v___x_5729_ = v___x_5726_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_a_5724_);
v___x_5729_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
v_val_5712_ = v___x_5729_;
goto v___jp_5711_;
}
}
}
v___jp_5711_:
{
lean_object* v___x_5713_; lean_object* v___x_5714_; 
v___x_5713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5713_, 0, v_val_5712_);
v___x_5714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5709_, v___x_5710_, v___x_5713_, v___f_5706_);
return v___x_5714_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_5732_, lean_object* v_bytes_5733_, lean_object* v___y_5734_){
_start:
{
lean_object* v_res_5735_; 
v_res_5735_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(v___f_5732_, v_bytes_5733_);
lean_dec_ref(v_bytes_5733_);
return v_res_5735_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(lean_object* v___f_5736_, lean_object* v_x_5737_){
_start:
{
if (lean_obj_tag(v_x_5737_) == 0)
{
lean_object* v_a_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5747_; 
lean_dec_ref(v___f_5736_);
v_a_5739_ = lean_ctor_get(v_x_5737_, 0);
v_isSharedCheck_5747_ = !lean_is_exclusive(v_x_5737_);
if (v_isSharedCheck_5747_ == 0)
{
v___x_5741_ = v_x_5737_;
v_isShared_5742_ = v_isSharedCheck_5747_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_a_5739_);
lean_dec(v_x_5737_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5747_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v___x_5744_; 
if (v_isShared_5742_ == 0)
{
v___x_5744_ = v___x_5741_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5746_; 
v_reuseFailAlloc_5746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5746_, 0, v_a_5739_);
v___x_5744_ = v_reuseFailAlloc_5746_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
lean_object* v___x_5745_; 
v___x_5745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5744_);
return v___x_5745_;
}
}
}
else
{
lean_object* v___x_5749_; uint8_t v_isShared_5750_; uint8_t v_isSharedCheck_5759_; 
v_isSharedCheck_5759_ = !lean_is_exclusive(v_x_5737_);
if (v_isSharedCheck_5759_ == 0)
{
lean_object* v_unused_5760_; 
v_unused_5760_ = lean_ctor_get(v_x_5737_, 0);
lean_dec(v_unused_5760_);
v___x_5749_ = v_x_5737_;
v_isShared_5750_ = v_isSharedCheck_5759_;
goto v_resetjp_5748_;
}
else
{
lean_dec(v_x_5737_);
v___x_5749_ = lean_box(0);
v_isShared_5750_ = v_isSharedCheck_5759_;
goto v_resetjp_5748_;
}
v_resetjp_5748_:
{
lean_object* v___x_5751_; uint8_t v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5755_; 
v___x_5751_ = lean_unsigned_to_nat(0u);
v___x_5752_ = 0;
v___x_5753_ = lean_io_promise_new();
if (v_isShared_5750_ == 0)
{
lean_ctor_set(v___x_5749_, 0, v___x_5753_);
v___x_5755_ = v___x_5749_;
goto v_reusejp_5754_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v___x_5753_);
v___x_5755_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5754_;
}
v_reusejp_5754_:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; 
v___x_5756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5756_, 0, v___x_5755_);
v___x_5757_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5751_, v___x_5752_, v___x_5756_, v___f_5736_);
return v___x_5757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_5761_, lean_object* v_x_5762_, lean_object* v___y_5763_){
_start:
{
lean_object* v_res_5764_; 
v_res_5764_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(v___f_5761_, v_x_5762_);
return v_res_5764_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(lean_object* v_x_5765_){
_start:
{
lean_object* v___x_5767_; 
v___x_5767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5767_, 0, v_x_5765_);
return v___x_5767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_5768_, lean_object* v___y_5769_){
_start:
{
lean_object* v_res_5770_; 
v_res_5770_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(v_x_5768_);
return v_res_5770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(uint32_t v_op_5776_, uint64_t v_flags_5777_, lean_object* v_payload_5778_, lean_object* v_failurePrefix_5779_){
_start:
{
lean_object* v___f_5781_; lean_object* v___f_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___f_5785_; lean_object* v___f_5786_; lean_object* v___x_5787_; uint8_t v___x_5788_; lean_object* v_val_5790_; lean_object* v___x_5793_; 
v___f_5781_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_5779_);
v___f_5782_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5782_, 0, v_failurePrefix_5779_);
v___x_5783_ = lean_box_uint32(v_op_5776_);
v___x_5784_ = lean_box_uint64(v_flags_5777_);
v___f_5785_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5785_, 0, v_failurePrefix_5779_);
lean_closure_set(v___f_5785_, 1, v___x_5783_);
lean_closure_set(v___f_5785_, 2, v___x_5784_);
lean_closure_set(v___f_5785_, 3, v_payload_5778_);
lean_closure_set(v___f_5785_, 4, v___f_5782_);
lean_closure_set(v___f_5785_, 5, v___f_5781_);
lean_closure_set(v___f_5785_, 6, v___f_5781_);
v___f_5786_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5786_, 0, v___f_5785_);
v___x_5787_ = lean_unsigned_to_nat(0u);
v___x_5788_ = 0;
v___x_5793_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v_a_5794_; lean_object* v___x_5796_; uint8_t v_isShared_5797_; uint8_t v_isSharedCheck_5801_; 
v_a_5794_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5801_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5801_ == 0)
{
v___x_5796_ = v___x_5793_;
v_isShared_5797_ = v_isSharedCheck_5801_;
goto v_resetjp_5795_;
}
else
{
lean_inc(v_a_5794_);
lean_dec(v___x_5793_);
v___x_5796_ = lean_box(0);
v_isShared_5797_ = v_isSharedCheck_5801_;
goto v_resetjp_5795_;
}
v_resetjp_5795_:
{
lean_object* v___x_5799_; 
if (v_isShared_5797_ == 0)
{
lean_ctor_set_tag(v___x_5796_, 1);
v___x_5799_ = v___x_5796_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v_a_5794_);
v___x_5799_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
v_val_5790_ = v___x_5799_;
goto v___jp_5789_;
}
}
}
else
{
lean_object* v_a_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5809_; 
v_a_5802_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5809_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5809_ == 0)
{
v___x_5804_ = v___x_5793_;
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_a_5802_);
lean_dec(v___x_5793_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v___x_5807_; 
if (v_isShared_5805_ == 0)
{
lean_ctor_set_tag(v___x_5804_, 0);
v___x_5807_ = v___x_5804_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v_a_5802_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
v_val_5790_ = v___x_5807_;
goto v___jp_5789_;
}
}
}
v___jp_5789_:
{
lean_object* v___x_5791_; lean_object* v___x_5792_; 
v___x_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5791_, 0, v_val_5790_);
v___x_5792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5787_, v___x_5788_, v___x_5791_, v___f_5786_);
return v___x_5792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___boxed(lean_object* v_op_5810_, lean_object* v_flags_5811_, lean_object* v_payload_5812_, lean_object* v_failurePrefix_5813_, lean_object* v_a_5814_){
_start:
{
uint32_t v_op_boxed_5815_; uint64_t v_flags_boxed_5816_; lean_object* v_res_5817_; 
v_op_boxed_5815_ = lean_unbox_uint32(v_op_5810_);
lean_dec(v_op_5810_);
v_flags_boxed_5816_ = lean_unbox_uint64(v_flags_5811_);
lean_dec_ref(v_flags_5811_);
v_res_5817_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_boxed_5815_, v_flags_boxed_5816_, v_payload_5812_, v_failurePrefix_5813_);
return v_res_5817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object* v_o_5818_, lean_object* v_name_5819_, lean_object* v_args_5820_){
_start:
{
lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; uint32_t v___x_5825_; uint64_t v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5822_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5823_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5823_, 0, v_o_5818_);
lean_ctor_set(v___x_5823_, 1, v___x_5822_);
v___x_5824_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5824_, 0, v_name_5819_);
v___x_5825_ = 205;
v___x_5826_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_5827_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5827_, 0, v_args_5820_);
v___x_5828_ = lean_unsigned_to_nat(3u);
v___x_5829_ = lean_mk_empty_array_with_capacity(v___x_5828_);
v___x_5830_ = lean_array_push(v___x_5829_, v___x_5823_);
v___x_5831_ = lean_array_push(v___x_5830_, v___x_5824_);
v___x_5832_ = lean_array_push(v___x_5831_, v___x_5827_);
v___x_5833_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5833_, 0, v___x_5832_);
v___x_5834_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v___x_5825_, v___x_5826_, v___x_5833_, v___x_5822_);
return v___x_5834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object* v_o_5835_, lean_object* v_name_5836_, lean_object* v_args_5837_, lean_object* v___y_5838_){
_start:
{
lean_object* v_res_5839_; 
v_res_5839_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_o_5835_, v_name_5836_, v_args_5837_);
return v_res_5839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object* v_self_5842_, uint8_t v_format_5843_, lean_object* v_key_5844_){
_start:
{
lean_object* v___f_5846_; lean_object* v___x_5847_; lean_object* v___y_5849_; 
v___f_5846_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0));
v___x_5847_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1));
switch(v_format_5843_)
{
case 0:
{
lean_object* v___x_5861_; 
v___x_5861_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5849_ = v___x_5861_;
goto v___jp_5848_;
}
case 1:
{
lean_object* v___x_5862_; 
v___x_5862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5849_ = v___x_5862_;
goto v___jp_5848_;
}
case 2:
{
lean_object* v___x_5863_; 
v___x_5863_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5849_ = v___x_5863_;
goto v___jp_5848_;
}
case 3:
{
lean_object* v___x_5864_; 
v___x_5864_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5849_ = v___x_5864_;
goto v___jp_5848_;
}
case 4:
{
lean_object* v___x_5865_; 
v___x_5865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5849_ = v___x_5865_;
goto v___jp_5848_;
}
case 5:
{
lean_object* v___x_5866_; 
v___x_5866_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5849_ = v___x_5866_;
goto v___jp_5848_;
}
case 6:
{
lean_object* v___x_5867_; 
v___x_5867_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5849_ = v___x_5867_;
goto v___jp_5848_;
}
default: 
{
lean_object* v___x_5868_; 
v___x_5868_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5849_ = v___x_5868_;
goto v___jp_5848_;
}
}
v___jp_5848_:
{
lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; uint8_t v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; 
v___x_5850_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5851_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5851_, 0, v_key_5844_);
lean_ctor_set(v___x_5851_, 1, v___x_5850_);
v___x_5852_ = lean_unsigned_to_nat(2u);
v___x_5853_ = lean_mk_empty_array_with_capacity(v___x_5852_);
lean_inc(v___y_5849_);
v___x_5854_ = lean_array_push(v___x_5853_, v___y_5849_);
v___x_5855_ = lean_array_push(v___x_5854_, v___x_5851_);
v___x_5856_ = l_Lasm_JS_Web_Support_args(v___x_5855_);
v___x_5857_ = lean_unsigned_to_nat(0u);
v___x_5858_ = 0;
v___x_5859_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_self_5842_, v___x_5847_, v___x_5856_);
v___x_5860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5857_, v___x_5858_, v___x_5859_, v___f_5846_);
return v___x_5860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object* v_self_5869_, lean_object* v_format_5870_, lean_object* v_key_5871_, lean_object* v_a_5872_){
_start:
{
uint8_t v_format_boxed_5873_; lean_object* v_res_5874_; 
v_format_boxed_5873_ = lean_unbox(v_format_5870_);
v_res_5874_ = l_Lasm_JS_Web_SubtleCrypto_exportKey(v_self_5869_, v_format_boxed_5873_, v_key_5871_);
return v_res_5874_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(lean_object* v_context_5875_, uint32_t v_op_5876_, uint64_t v_flags_5877_, lean_object* v_payload_5878_, lean_object* v_failurePrefix_5879_){
_start:
{
lean_object* v___x_5881_; 
v___x_5881_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_5876_, v_flags_5877_, v_payload_5878_, v_failurePrefix_5879_);
return v___x_5881_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object* v_context_5882_, lean_object* v_op_5883_, lean_object* v_flags_5884_, lean_object* v_payload_5885_, lean_object* v_failurePrefix_5886_, lean_object* v_a_5887_){
_start:
{
uint32_t v_op_boxed_5888_; uint64_t v_flags_boxed_5889_; lean_object* v_res_5890_; 
v_op_boxed_5888_ = lean_unbox_uint32(v_op_5883_);
lean_dec(v_op_5883_);
v_flags_boxed_5889_ = lean_unbox_uint64(v_flags_5884_);
lean_dec_ref(v_flags_5884_);
v_res_5890_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(v_context_5882_, v_op_boxed_5888_, v_flags_boxed_5889_, v_payload_5885_, v_failurePrefix_5886_);
lean_dec_ref(v_context_5882_);
return v_res_5890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object* v_self_5891_, uint8_t v_format_5892_, lean_object* v_key_5893_, lean_object* v_wrappingKey_5894_, lean_object* v_wrapAlgorithm_5895_){
_start:
{
lean_object* v___f_5897_; lean_object* v___x_5898_; lean_object* v___y_5900_; lean_object* v___y_5901_; lean_object* v___y_5902_; lean_object* v___y_5903_; lean_object* v___y_5916_; 
v___f_5897_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5898_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
switch(v_format_5892_)
{
case 0:
{
lean_object* v___x_5929_; 
v___x_5929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5916_ = v___x_5929_;
goto v___jp_5915_;
}
case 1:
{
lean_object* v___x_5930_; 
v___x_5930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5916_ = v___x_5930_;
goto v___jp_5915_;
}
case 2:
{
lean_object* v___x_5931_; 
v___x_5931_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5916_ = v___x_5931_;
goto v___jp_5915_;
}
case 3:
{
lean_object* v___x_5932_; 
v___x_5932_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5916_ = v___x_5932_;
goto v___jp_5915_;
}
case 4:
{
lean_object* v___x_5933_; 
v___x_5933_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5916_ = v___x_5933_;
goto v___jp_5915_;
}
case 5:
{
lean_object* v___x_5934_; 
v___x_5934_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5916_ = v___x_5934_;
goto v___jp_5915_;
}
case 6:
{
lean_object* v___x_5935_; 
v___x_5935_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5916_ = v___x_5935_;
goto v___jp_5915_;
}
default: 
{
lean_object* v___x_5936_; 
v___x_5936_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5916_ = v___x_5936_;
goto v___jp_5915_;
}
}
v___jp_5899_:
{
lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; uint8_t v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; 
v___x_5904_ = lean_unsigned_to_nat(4u);
v___x_5905_ = lean_mk_empty_array_with_capacity(v___x_5904_);
lean_inc(v___y_5901_);
v___x_5906_ = lean_array_push(v___x_5905_, v___y_5901_);
v___x_5907_ = lean_array_push(v___x_5906_, v___y_5902_);
v___x_5908_ = lean_array_push(v___x_5907_, v___y_5900_);
v___x_5909_ = lean_array_push(v___x_5908_, v___y_5903_);
v___x_5910_ = l_Lasm_JS_Web_Support_args(v___x_5909_);
v___x_5911_ = lean_unsigned_to_nat(0u);
v___x_5912_ = 0;
v___x_5913_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5891_, v___x_5898_, v___x_5910_);
v___x_5914_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5911_, v___x_5912_, v___x_5913_, v___f_5897_);
return v___x_5914_;
}
v___jp_5915_:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5917_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5918_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5918_, 0, v_key_5893_);
lean_ctor_set(v___x_5918_, 1, v___x_5917_);
v___x_5919_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5919_, 0, v_wrappingKey_5894_);
lean_ctor_set(v___x_5919_, 1, v___x_5917_);
if (lean_obj_tag(v_wrapAlgorithm_5895_) == 0)
{
lean_object* v_value_5920_; 
v_value_5920_ = lean_ctor_get(v_wrapAlgorithm_5895_, 0);
lean_inc(v_value_5920_);
lean_dec_ref_known(v_wrapAlgorithm_5895_, 1);
v___y_5900_ = v___x_5919_;
v___y_5901_ = v___y_5916_;
v___y_5902_ = v___x_5918_;
v___y_5903_ = v_value_5920_;
goto v___jp_5899_;
}
else
{
lean_object* v_value_5921_; lean_object* v___x_5923_; uint8_t v_isShared_5924_; uint8_t v_isSharedCheck_5928_; 
v_value_5921_ = lean_ctor_get(v_wrapAlgorithm_5895_, 0);
v_isSharedCheck_5928_ = !lean_is_exclusive(v_wrapAlgorithm_5895_);
if (v_isSharedCheck_5928_ == 0)
{
v___x_5923_ = v_wrapAlgorithm_5895_;
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
else
{
lean_inc(v_value_5921_);
lean_dec(v_wrapAlgorithm_5895_);
v___x_5923_ = lean_box(0);
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
v_resetjp_5922_:
{
lean_object* v___x_5926_; 
if (v_isShared_5924_ == 0)
{
lean_ctor_set_tag(v___x_5923_, 4);
v___x_5926_ = v___x_5923_;
goto v_reusejp_5925_;
}
else
{
lean_object* v_reuseFailAlloc_5927_; 
v_reuseFailAlloc_5927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5927_, 0, v_value_5921_);
v___x_5926_ = v_reuseFailAlloc_5927_;
goto v_reusejp_5925_;
}
v_reusejp_5925_:
{
v___y_5900_ = v___x_5919_;
v___y_5901_ = v___y_5916_;
v___y_5902_ = v___x_5918_;
v___y_5903_ = v___x_5926_;
goto v___jp_5899_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object* v_self_5937_, lean_object* v_format_5938_, lean_object* v_key_5939_, lean_object* v_wrappingKey_5940_, lean_object* v_wrapAlgorithm_5941_, lean_object* v_a_5942_){
_start:
{
uint8_t v_format_boxed_5943_; lean_object* v_res_5944_; 
v_format_boxed_5943_ = lean_unbox(v_format_5938_);
v_res_5944_ = l_Lasm_JS_Web_SubtleCrypto_wrapKey(v_self_5937_, v_format_boxed_5943_, v_key_5939_, v_wrappingKey_5940_, v_wrapAlgorithm_5941_);
return v_res_5944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object* v_self_5945_, uint8_t v_format_5946_, lean_object* v_wrappedKey_5947_, lean_object* v_unwrappingKey_5948_, lean_object* v_unwrapAlgorithm_5949_, lean_object* v_unwrappedKeyAlgorithm_5950_, uint8_t v_extractable_5951_, lean_object* v_keyUsages_5952_){
_start:
{
lean_object* v___f_5954_; lean_object* v___x_5955_; lean_object* v___y_5957_; lean_object* v___y_5958_; lean_object* v___y_5959_; lean_object* v___y_5960_; lean_object* v___y_5961_; lean_object* v___y_5982_; lean_object* v___y_5983_; lean_object* v___y_5984_; lean_object* v___y_5985_; lean_object* v___y_5996_; 
v___f_5954_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5955_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
switch(v_format_5946_)
{
case 0:
{
lean_object* v___x_6009_; 
v___x_6009_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5996_ = v___x_6009_;
goto v___jp_5995_;
}
case 1:
{
lean_object* v___x_6010_; 
v___x_6010_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5996_ = v___x_6010_;
goto v___jp_5995_;
}
case 2:
{
lean_object* v___x_6011_; 
v___x_6011_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5996_ = v___x_6011_;
goto v___jp_5995_;
}
case 3:
{
lean_object* v___x_6012_; 
v___x_6012_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5996_ = v___x_6012_;
goto v___jp_5995_;
}
case 4:
{
lean_object* v___x_6013_; 
v___x_6013_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5996_ = v___x_6013_;
goto v___jp_5995_;
}
case 5:
{
lean_object* v___x_6014_; 
v___x_6014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5996_ = v___x_6014_;
goto v___jp_5995_;
}
case 6:
{
lean_object* v___x_6015_; 
v___x_6015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5996_ = v___x_6015_;
goto v___jp_5995_;
}
default: 
{
lean_object* v___x_6016_; 
v___x_6016_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5996_ = v___x_6016_;
goto v___jp_5995_;
}
}
v___jp_5956_:
{
lean_object* v___x_5962_; size_t v_sz_5963_; size_t v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; uint8_t v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; 
v___x_5962_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5962_, 0, v_extractable_5951_);
v_sz_5963_ = lean_array_size(v_keyUsages_5952_);
v___x_5964_ = ((size_t)0ULL);
v___x_5965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5963_, v___x_5964_, v_keyUsages_5952_);
v___x_5966_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
v___x_5967_ = lean_unsigned_to_nat(7u);
v___x_5968_ = lean_mk_empty_array_with_capacity(v___x_5967_);
lean_inc(v___y_5958_);
v___x_5969_ = lean_array_push(v___x_5968_, v___y_5958_);
v___x_5970_ = lean_array_push(v___x_5969_, v___y_5960_);
v___x_5971_ = lean_array_push(v___x_5970_, v___y_5959_);
v___x_5972_ = lean_array_push(v___x_5971_, v___y_5957_);
v___x_5973_ = lean_array_push(v___x_5972_, v___y_5961_);
v___x_5974_ = lean_array_push(v___x_5973_, v___x_5962_);
v___x_5975_ = lean_array_push(v___x_5974_, v___x_5966_);
v___x_5976_ = l_Lasm_JS_Web_Support_args(v___x_5975_);
v___x_5977_ = lean_unsigned_to_nat(0u);
v___x_5978_ = 0;
v___x_5979_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5945_, v___x_5955_, v___x_5976_);
v___x_5980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5977_, v___x_5978_, v___x_5979_, v___f_5954_);
return v___x_5980_;
}
v___jp_5981_:
{
if (lean_obj_tag(v_unwrappedKeyAlgorithm_5950_) == 0)
{
lean_object* v_value_5986_; 
v_value_5986_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5950_, 0);
lean_inc(v_value_5986_);
lean_dec_ref_known(v_unwrappedKeyAlgorithm_5950_, 1);
v___y_5957_ = v___y_5985_;
v___y_5958_ = v___y_5982_;
v___y_5959_ = v___y_5983_;
v___y_5960_ = v___y_5984_;
v___y_5961_ = v_value_5986_;
goto v___jp_5956_;
}
else
{
lean_object* v_value_5987_; lean_object* v___x_5989_; uint8_t v_isShared_5990_; uint8_t v_isSharedCheck_5994_; 
v_value_5987_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5950_, 0);
v_isSharedCheck_5994_ = !lean_is_exclusive(v_unwrappedKeyAlgorithm_5950_);
if (v_isSharedCheck_5994_ == 0)
{
v___x_5989_ = v_unwrappedKeyAlgorithm_5950_;
v_isShared_5990_ = v_isSharedCheck_5994_;
goto v_resetjp_5988_;
}
else
{
lean_inc(v_value_5987_);
lean_dec(v_unwrappedKeyAlgorithm_5950_);
v___x_5989_ = lean_box(0);
v_isShared_5990_ = v_isSharedCheck_5994_;
goto v_resetjp_5988_;
}
v_resetjp_5988_:
{
lean_object* v___x_5992_; 
if (v_isShared_5990_ == 0)
{
lean_ctor_set_tag(v___x_5989_, 4);
v___x_5992_ = v___x_5989_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5993_; 
v_reuseFailAlloc_5993_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5993_, 0, v_value_5987_);
v___x_5992_ = v_reuseFailAlloc_5993_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
v___y_5957_ = v___y_5985_;
v___y_5958_ = v___y_5982_;
v___y_5959_ = v___y_5983_;
v___y_5960_ = v___y_5984_;
v___y_5961_ = v___x_5992_;
goto v___jp_5956_;
}
}
}
}
v___jp_5995_:
{
lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___x_5997_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5997_, 0, v_wrappedKey_5947_);
v___x_5998_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5999_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5999_, 0, v_unwrappingKey_5948_);
lean_ctor_set(v___x_5999_, 1, v___x_5998_);
if (lean_obj_tag(v_unwrapAlgorithm_5949_) == 0)
{
lean_object* v_value_6000_; 
v_value_6000_ = lean_ctor_get(v_unwrapAlgorithm_5949_, 0);
lean_inc(v_value_6000_);
lean_dec_ref_known(v_unwrapAlgorithm_5949_, 1);
v___y_5982_ = v___y_5996_;
v___y_5983_ = v___x_5999_;
v___y_5984_ = v___x_5997_;
v___y_5985_ = v_value_6000_;
goto v___jp_5981_;
}
else
{
lean_object* v_value_6001_; lean_object* v___x_6003_; uint8_t v_isShared_6004_; uint8_t v_isSharedCheck_6008_; 
v_value_6001_ = lean_ctor_get(v_unwrapAlgorithm_5949_, 0);
v_isSharedCheck_6008_ = !lean_is_exclusive(v_unwrapAlgorithm_5949_);
if (v_isSharedCheck_6008_ == 0)
{
v___x_6003_ = v_unwrapAlgorithm_5949_;
v_isShared_6004_ = v_isSharedCheck_6008_;
goto v_resetjp_6002_;
}
else
{
lean_inc(v_value_6001_);
lean_dec(v_unwrapAlgorithm_5949_);
v___x_6003_ = lean_box(0);
v_isShared_6004_ = v_isSharedCheck_6008_;
goto v_resetjp_6002_;
}
v_resetjp_6002_:
{
lean_object* v___x_6006_; 
if (v_isShared_6004_ == 0)
{
lean_ctor_set_tag(v___x_6003_, 4);
v___x_6006_ = v___x_6003_;
goto v_reusejp_6005_;
}
else
{
lean_object* v_reuseFailAlloc_6007_; 
v_reuseFailAlloc_6007_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6007_, 0, v_value_6001_);
v___x_6006_ = v_reuseFailAlloc_6007_;
goto v_reusejp_6005_;
}
v_reusejp_6005_:
{
v___y_5982_ = v___y_5996_;
v___y_5983_ = v___x_5999_;
v___y_5984_ = v___x_5997_;
v___y_5985_ = v___x_6006_;
goto v___jp_5981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object* v_self_6017_, lean_object* v_format_6018_, lean_object* v_wrappedKey_6019_, lean_object* v_unwrappingKey_6020_, lean_object* v_unwrapAlgorithm_6021_, lean_object* v_unwrappedKeyAlgorithm_6022_, lean_object* v_extractable_6023_, lean_object* v_keyUsages_6024_, lean_object* v_a_6025_){
_start:
{
uint8_t v_format_boxed_6026_; uint8_t v_extractable_boxed_6027_; lean_object* v_res_6028_; 
v_format_boxed_6026_ = lean_unbox(v_format_6018_);
v_extractable_boxed_6027_ = lean_unbox(v_extractable_6023_);
v_res_6028_ = l_Lasm_JS_Web_SubtleCrypto_unwrapKey(v_self_6017_, v_format_boxed_6026_, v_wrappedKey_6019_, v_unwrappingKey_6020_, v_unwrapAlgorithm_6021_, v_unwrappedKeyAlgorithm_6022_, v_extractable_boxed_6027_, v_keyUsages_6024_);
return v_res_6028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto(){
_start:
{
lean_object* v___x_6034_; lean_object* v___x_6035_; 
v___x_6034_ = ((lean_object*)(l_Lasm_JS_Web_crypto___closed__1));
v___x_6035_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_Crypto_cast_x3f_spec__0(v___x_6034_);
if (lean_obj_tag(v___x_6035_) == 0)
{
lean_object* v_a_6036_; lean_object* v___x_6038_; uint8_t v_isShared_6039_; uint8_t v_isSharedCheck_6043_; 
v_a_6036_ = lean_ctor_get(v___x_6035_, 0);
v_isSharedCheck_6043_ = !lean_is_exclusive(v___x_6035_);
if (v_isSharedCheck_6043_ == 0)
{
v___x_6038_ = v___x_6035_;
v_isShared_6039_ = v_isSharedCheck_6043_;
goto v_resetjp_6037_;
}
else
{
lean_inc(v_a_6036_);
lean_dec(v___x_6035_);
v___x_6038_ = lean_box(0);
v_isShared_6039_ = v_isSharedCheck_6043_;
goto v_resetjp_6037_;
}
v_resetjp_6037_:
{
lean_object* v___x_6041_; 
if (v_isShared_6039_ == 0)
{
v___x_6041_ = v___x_6038_;
goto v_reusejp_6040_;
}
else
{
lean_object* v_reuseFailAlloc_6042_; 
v_reuseFailAlloc_6042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6042_, 0, v_a_6036_);
v___x_6041_ = v_reuseFailAlloc_6042_;
goto v_reusejp_6040_;
}
v_reusejp_6040_:
{
return v___x_6041_;
}
}
}
else
{
lean_object* v_a_6044_; lean_object* v___x_6046_; uint8_t v_isShared_6047_; uint8_t v_isSharedCheck_6051_; 
v_a_6044_ = lean_ctor_get(v___x_6035_, 0);
v_isSharedCheck_6051_ = !lean_is_exclusive(v___x_6035_);
if (v_isSharedCheck_6051_ == 0)
{
v___x_6046_ = v___x_6035_;
v_isShared_6047_ = v_isSharedCheck_6051_;
goto v_resetjp_6045_;
}
else
{
lean_inc(v_a_6044_);
lean_dec(v___x_6035_);
v___x_6046_ = lean_box(0);
v_isShared_6047_ = v_isSharedCheck_6051_;
goto v_resetjp_6045_;
}
v_resetjp_6045_:
{
lean_object* v___x_6049_; 
if (v_isShared_6047_ == 0)
{
v___x_6049_ = v___x_6046_;
goto v_reusejp_6048_;
}
else
{
lean_object* v_reuseFailAlloc_6050_; 
v_reuseFailAlloc_6050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6050_, 0, v_a_6044_);
v___x_6049_ = v_reuseFailAlloc_6050_;
goto v_reusejp_6048_;
}
v_reusejp_6048_:
{
return v___x_6049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto___boxed(lean_object* v_a_6052_){
_start:
{
lean_object* v_res_6053_; 
v_res_6053_ = l_Lasm_JS_Web_crypto();
return v_res_6053_;
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
