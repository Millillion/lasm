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
lean_object* lean_obj_tag_nat(lean_object*);
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
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6_value;
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value)}};
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value)}};
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__5_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___impl(uint8_t v_x_36_){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_box(v_x_36_);
v___x_38_ = lean_obj_tag_nat(v___x_37_);
lean_dec(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorIdx___impl___boxed(lean_object* v_x_39_){
_start:
{
uint8_t v_x_4__boxed_40_; lean_object* v_res_41_; 
v_x_4__boxed_40_ = lean_unbox(v_x_39_);
v_res_41_ = l_Lasm_JS_Web_KeyType_ctorIdx___impl(v_x_4__boxed_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg(lean_object* v_k_42_){
_start:
{
lean_inc(v_k_42_);
return v_k_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___redArg___boxed(lean_object* v_k_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lasm_JS_Web_KeyType_ctorElim___redArg(v_k_43_);
lean_dec(v_k_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, uint8_t v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_inc(v_k_49_);
return v_k_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_ctorElim___boxed(lean_object* v_motive_50_, lean_object* v_ctorIdx_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
uint8_t v_t_boxed_55_; lean_object* v_res_56_; 
v_t_boxed_55_ = lean_unbox(v_t_52_);
v_res_56_ = l_Lasm_JS_Web_KeyType_ctorElim(v_motive_50_, v_ctorIdx_51_, v_t_boxed_55_, v_h_53_, v_k_54_);
lean_dec(v_k_54_);
lean_dec(v_ctorIdx_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg(lean_object* v_public_57_){
_start:
{
lean_inc(v_public_57_);
return v_public_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___redArg___boxed(lean_object* v_public_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lasm_JS_Web_KeyType_public_elim___redArg(v_public_58_);
lean_dec(v_public_58_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim(lean_object* v_motive_60_, uint8_t v_t_61_, lean_object* v_h_62_, lean_object* v_public_63_){
_start:
{
lean_inc(v_public_63_);
return v_public_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_public_elim___boxed(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_public_67_){
_start:
{
uint8_t v_t_boxed_68_; lean_object* v_res_69_; 
v_t_boxed_68_ = lean_unbox(v_t_65_);
v_res_69_ = l_Lasm_JS_Web_KeyType_public_elim(v_motive_64_, v_t_boxed_68_, v_h_66_, v_public_67_);
lean_dec(v_public_67_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg(lean_object* v_private_70_){
_start:
{
lean_inc(v_private_70_);
return v_private_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___redArg___boxed(lean_object* v_private_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lasm_JS_Web_KeyType_private_elim___redArg(v_private_71_);
lean_dec(v_private_71_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim(lean_object* v_motive_73_, uint8_t v_t_74_, lean_object* v_h_75_, lean_object* v_private_76_){
_start:
{
lean_inc(v_private_76_);
return v_private_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_private_elim___boxed(lean_object* v_motive_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_private_80_){
_start:
{
uint8_t v_t_boxed_81_; lean_object* v_res_82_; 
v_t_boxed_81_ = lean_unbox(v_t_78_);
v_res_82_ = l_Lasm_JS_Web_KeyType_private_elim(v_motive_77_, v_t_boxed_81_, v_h_79_, v_private_80_);
lean_dec(v_private_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg(lean_object* v_secret_83_){
_start:
{
lean_inc(v_secret_83_);
return v_secret_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___redArg___boxed(lean_object* v_secret_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lasm_JS_Web_KeyType_secret_elim___redArg(v_secret_84_);
lean_dec(v_secret_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim(lean_object* v_motive_86_, uint8_t v_t_87_, lean_object* v_h_88_, lean_object* v_secret_89_){
_start:
{
lean_inc(v_secret_89_);
return v_secret_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyType_secret_elim___boxed(lean_object* v_motive_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_secret_93_){
_start:
{
uint8_t v_t_boxed_94_; lean_object* v_res_95_; 
v_t_boxed_94_ = lean_unbox(v_t_91_);
v_res_95_ = l_Lasm_JS_Web_KeyType_secret_elim(v_motive_90_, v_t_boxed_94_, v_h_92_, v_secret_93_);
lean_dec(v_secret_93_);
return v_res_95_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyType_beq(uint8_t v_x_96_, uint8_t v_y_97_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_98_ = lean_box(v_x_96_);
v___x_99_ = lean_obj_tag_nat(v___x_98_);
lean_dec(v___x_98_);
v___x_100_ = lean_box(v_y_97_);
v___x_101_ = lean_obj_tag_nat(v___x_100_);
lean_dec(v___x_100_);
v___x_102_ = lean_nat_dec_eq(v___x_99_, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyType_beq___boxed(lean_object* v_x_103_, lean_object* v_y_104_){
_start:
{
uint8_t v_x_24__boxed_105_; uint8_t v_y_25__boxed_106_; uint8_t v_res_107_; lean_object* v_r_108_; 
v_x_24__boxed_105_ = lean_unbox(v_x_103_);
v_y_25__boxed_106_ = lean_unbox(v_y_104_);
v_res_107_ = l_Lasm_JS_Web_instBEqKeyType_beq(v_x_24__boxed_105_, v_y_25__boxed_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_unsigned_to_nat(2u);
v___x_121_ = lean_nat_to_int(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(1u);
v___x_123_ = lean_nat_to_int(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr(uint8_t v_x_124_, lean_object* v_prec_125_){
_start:
{
lean_object* v___y_127_; lean_object* v___y_134_; lean_object* v___y_141_; 
switch(v_x_124_)
{
case 0:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1024u);
v___x_148_ = lean_nat_dec_le(v___x_147_, v_prec_125_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
v___x_149_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_127_ = v___x_149_;
goto v___jp_126_;
}
else
{
lean_object* v___x_150_; 
v___x_150_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_127_ = v___x_150_;
goto v___jp_126_;
}
}
case 1:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1024u);
v___x_152_ = lean_nat_dec_le(v___x_151_, v_prec_125_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_134_ = v___x_153_;
goto v___jp_133_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_134_ = v___x_154_;
goto v___jp_133_;
}
}
default: 
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1024u);
v___x_156_ = lean_nat_dec_le(v___x_155_, v_prec_125_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_141_ = v___x_157_;
goto v___jp_140_;
}
else
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_141_ = v___x_158_;
goto v___jp_140_;
}
}
}
v___jp_126_:
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__1));
lean_inc(v___y_127_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___y_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = 0;
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_130_);
v___x_132_ = l_Repr_addAppParen(v___x_131_, v_prec_125_);
return v___x_132_;
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_135_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__3));
lean_inc(v___y_134_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = 0;
v___x_138_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_138_, sizeof(void*)*1, v___x_137_);
v___x_139_ = l_Repr_addAppParen(v___x_138_, v_prec_125_);
return v___x_139_;
}
v___jp_140_:
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyType_repr___closed__5));
lean_inc(v___y_141_);
v___x_143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_143_, 0, v___y_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = 0;
v___x_145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_144_);
v___x_146_ = l_Repr_addAppParen(v___x_145_, v_prec_125_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyType_repr___boxed(lean_object* v_x_159_, lean_object* v_prec_160_){
_start:
{
uint8_t v_x_171__boxed_161_; lean_object* v_res_162_; 
v_x_171__boxed_161_ = lean_unbox(v_x_159_);
v_res_162_ = l_Lasm_JS_Web_instReprKeyType_repr(v_x_171__boxed_161_, v_prec_160_);
lean_dec(v_prec_160_);
return v_res_162_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyType_default(void){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyType(void){
_start:
{
uint8_t v___x_166_; 
v___x_166_ = 0;
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0(uint8_t v_x_176_){
_start:
{
switch(v_x_176_)
{
case 0:
{
lean_object* v___x_177_; 
v___x_177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__1));
return v___x_177_;
}
case 1:
{
lean_object* v___x_178_; 
v___x_178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__3));
return v___x_178_;
}
default: 
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__5));
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyType___lam__0___boxed(lean_object* v_x_180_){
_start:
{
uint8_t v_x_57__boxed_181_; lean_object* v_res_182_; 
v_x_57__boxed_181_ = lean_unbox(v_x_180_);
v_res_182_ = l_Lasm_JS_Web_instToJSKeyType___lam__0(v_x_57__boxed_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0(lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_197_) == 4)
{
lean_object* v_s_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_s_200_ = lean_ctor_get(v_x_197_, 0);
v___x_201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_202_ = lean_string_dec_eq(v_s_200_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_204_ = lean_string_dec_eq(v_s_200_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_206_ = lean_string_dec_eq(v_s_200_, v___x_205_);
if (v___x_206_ == 0)
{
goto v___jp_198_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__2));
return v___x_207_;
}
}
else
{
lean_object* v___x_208_; 
v___x_208_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__3));
return v___x_208_;
}
}
else
{
lean_object* v___x_209_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__4));
return v___x_209_;
}
}
else
{
goto v___jp_198_;
}
v___jp_198_:
{
lean_object* v___x_199_; 
v___x_199_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___lam__0___closed__1));
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyType___lam__0___boxed(lean_object* v_x_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_JS_Web_instFromJSKeyType___lam__0(v_x_210_);
lean_dec(v_x_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___impl(uint8_t v_x_219_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_box(v_x_219_);
v___x_221_ = lean_obj_tag_nat(v___x_220_);
lean_dec(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorIdx___impl___boxed(lean_object* v_x_222_){
_start:
{
uint8_t v_x_4__boxed_223_; lean_object* v_res_224_; 
v_x_4__boxed_223_ = lean_unbox(v_x_222_);
v_res_224_ = l_Lasm_JS_Web_KeyUsage_ctorIdx___impl(v_x_4__boxed_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg(lean_object* v_k_225_){
_start:
{
lean_inc(v_k_225_);
return v_k_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___redArg___boxed(lean_object* v_k_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lasm_JS_Web_KeyUsage_ctorElim___redArg(v_k_226_);
lean_dec(v_k_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim(lean_object* v_motive_228_, lean_object* v_ctorIdx_229_, uint8_t v_t_230_, lean_object* v_h_231_, lean_object* v_k_232_){
_start:
{
lean_inc(v_k_232_);
return v_k_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_ctorElim___boxed(lean_object* v_motive_233_, lean_object* v_ctorIdx_234_, lean_object* v_t_235_, lean_object* v_h_236_, lean_object* v_k_237_){
_start:
{
uint8_t v_t_boxed_238_; lean_object* v_res_239_; 
v_t_boxed_238_ = lean_unbox(v_t_235_);
v_res_239_ = l_Lasm_JS_Web_KeyUsage_ctorElim(v_motive_233_, v_ctorIdx_234_, v_t_boxed_238_, v_h_236_, v_k_237_);
lean_dec(v_k_237_);
lean_dec(v_ctorIdx_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg(lean_object* v_encrypt_240_){
_start:
{
lean_inc(v_encrypt_240_);
return v_encrypt_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg___boxed(lean_object* v_encrypt_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lasm_JS_Web_KeyUsage_encrypt_elim___redArg(v_encrypt_241_);
lean_dec(v_encrypt_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim(lean_object* v_motive_243_, uint8_t v_t_244_, lean_object* v_h_245_, lean_object* v_encrypt_246_){
_start:
{
lean_inc(v_encrypt_246_);
return v_encrypt_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encrypt_elim___boxed(lean_object* v_motive_247_, lean_object* v_t_248_, lean_object* v_h_249_, lean_object* v_encrypt_250_){
_start:
{
uint8_t v_t_boxed_251_; lean_object* v_res_252_; 
v_t_boxed_251_ = lean_unbox(v_t_248_);
v_res_252_ = l_Lasm_JS_Web_KeyUsage_encrypt_elim(v_motive_247_, v_t_boxed_251_, v_h_249_, v_encrypt_250_);
lean_dec(v_encrypt_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg(lean_object* v_decrypt_253_){
_start:
{
lean_inc(v_decrypt_253_);
return v_decrypt_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg___boxed(lean_object* v_decrypt_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lasm_JS_Web_KeyUsage_decrypt_elim___redArg(v_decrypt_254_);
lean_dec(v_decrypt_254_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim(lean_object* v_motive_256_, uint8_t v_t_257_, lean_object* v_h_258_, lean_object* v_decrypt_259_){
_start:
{
lean_inc(v_decrypt_259_);
return v_decrypt_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decrypt_elim___boxed(lean_object* v_motive_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_decrypt_263_){
_start:
{
uint8_t v_t_boxed_264_; lean_object* v_res_265_; 
v_t_boxed_264_ = lean_unbox(v_t_261_);
v_res_265_ = l_Lasm_JS_Web_KeyUsage_decrypt_elim(v_motive_260_, v_t_boxed_264_, v_h_262_, v_decrypt_263_);
lean_dec(v_decrypt_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg(lean_object* v_sign_266_){
_start:
{
lean_inc(v_sign_266_);
return v_sign_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___redArg___boxed(lean_object* v_sign_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Web_KeyUsage_sign_elim___redArg(v_sign_267_);
lean_dec(v_sign_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim(lean_object* v_motive_269_, uint8_t v_t_270_, lean_object* v_h_271_, lean_object* v_sign_272_){
_start:
{
lean_inc(v_sign_272_);
return v_sign_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_sign_elim___boxed(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_sign_276_){
_start:
{
uint8_t v_t_boxed_277_; lean_object* v_res_278_; 
v_t_boxed_277_ = lean_unbox(v_t_274_);
v_res_278_ = l_Lasm_JS_Web_KeyUsage_sign_elim(v_motive_273_, v_t_boxed_277_, v_h_275_, v_sign_276_);
lean_dec(v_sign_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg(lean_object* v_verify_279_){
_start:
{
lean_inc(v_verify_279_);
return v_verify_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___redArg___boxed(lean_object* v_verify_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lasm_JS_Web_KeyUsage_verify_elim___redArg(v_verify_280_);
lean_dec(v_verify_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim(lean_object* v_motive_282_, uint8_t v_t_283_, lean_object* v_h_284_, lean_object* v_verify_285_){
_start:
{
lean_inc(v_verify_285_);
return v_verify_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_verify_elim___boxed(lean_object* v_motive_286_, lean_object* v_t_287_, lean_object* v_h_288_, lean_object* v_verify_289_){
_start:
{
uint8_t v_t_boxed_290_; lean_object* v_res_291_; 
v_t_boxed_290_ = lean_unbox(v_t_287_);
v_res_291_ = l_Lasm_JS_Web_KeyUsage_verify_elim(v_motive_286_, v_t_boxed_290_, v_h_288_, v_verify_289_);
lean_dec(v_verify_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg(lean_object* v_deriveKey_292_){
_start:
{
lean_inc(v_deriveKey_292_);
return v_deriveKey_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg___boxed(lean_object* v_deriveKey_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lasm_JS_Web_KeyUsage_deriveKey_elim___redArg(v_deriveKey_293_);
lean_dec(v_deriveKey_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim(lean_object* v_motive_295_, uint8_t v_t_296_, lean_object* v_h_297_, lean_object* v_deriveKey_298_){
_start:
{
lean_inc(v_deriveKey_298_);
return v_deriveKey_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveKey_elim___boxed(lean_object* v_motive_299_, lean_object* v_t_300_, lean_object* v_h_301_, lean_object* v_deriveKey_302_){
_start:
{
uint8_t v_t_boxed_303_; lean_object* v_res_304_; 
v_t_boxed_303_ = lean_unbox(v_t_300_);
v_res_304_ = l_Lasm_JS_Web_KeyUsage_deriveKey_elim(v_motive_299_, v_t_boxed_303_, v_h_301_, v_deriveKey_302_);
lean_dec(v_deriveKey_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg(lean_object* v_deriveBits_305_){
_start:
{
lean_inc(v_deriveBits_305_);
return v_deriveBits_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg___boxed(lean_object* v_deriveBits_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lasm_JS_Web_KeyUsage_deriveBits_elim___redArg(v_deriveBits_306_);
lean_dec(v_deriveBits_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim(lean_object* v_motive_308_, uint8_t v_t_309_, lean_object* v_h_310_, lean_object* v_deriveBits_311_){
_start:
{
lean_inc(v_deriveBits_311_);
return v_deriveBits_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_deriveBits_elim___boxed(lean_object* v_motive_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_deriveBits_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l_Lasm_JS_Web_KeyUsage_deriveBits_elim(v_motive_312_, v_t_boxed_316_, v_h_314_, v_deriveBits_315_);
lean_dec(v_deriveBits_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg(lean_object* v_wrapKey_318_){
_start:
{
lean_inc(v_wrapKey_318_);
return v_wrapKey_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg___boxed(lean_object* v_wrapKey_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Web_KeyUsage_wrapKey_elim___redArg(v_wrapKey_319_);
lean_dec(v_wrapKey_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_wrapKey_324_){
_start:
{
lean_inc(v_wrapKey_324_);
return v_wrapKey_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_wrapKey_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_wrapKey_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l_Lasm_JS_Web_KeyUsage_wrapKey_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_wrapKey_328_);
lean_dec(v_wrapKey_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg(lean_object* v_unwrapKey_331_){
_start:
{
lean_inc(v_unwrapKey_331_);
return v_unwrapKey_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg___boxed(lean_object* v_unwrapKey_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___redArg(v_unwrapKey_332_);
lean_dec(v_unwrapKey_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim(lean_object* v_motive_334_, uint8_t v_t_335_, lean_object* v_h_336_, lean_object* v_unwrapKey_337_){
_start:
{
lean_inc(v_unwrapKey_337_);
return v_unwrapKey_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_unwrapKey_elim___boxed(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_unwrapKey_341_){
_start:
{
uint8_t v_t_boxed_342_; lean_object* v_res_343_; 
v_t_boxed_342_ = lean_unbox(v_t_339_);
v_res_343_ = l_Lasm_JS_Web_KeyUsage_unwrapKey_elim(v_motive_338_, v_t_boxed_342_, v_h_340_, v_unwrapKey_341_);
lean_dec(v_unwrapKey_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg(lean_object* v_encapsulateKey_344_){
_start:
{
lean_inc(v_encapsulateKey_344_);
return v_encapsulateKey_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg___boxed(lean_object* v_encapsulateKey_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___redArg(v_encapsulateKey_345_);
lean_dec(v_encapsulateKey_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim(lean_object* v_motive_347_, uint8_t v_t_348_, lean_object* v_h_349_, lean_object* v_encapsulateKey_350_){
_start:
{
lean_inc(v_encapsulateKey_350_);
return v_encapsulateKey_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim___boxed(lean_object* v_motive_351_, lean_object* v_t_352_, lean_object* v_h_353_, lean_object* v_encapsulateKey_354_){
_start:
{
uint8_t v_t_boxed_355_; lean_object* v_res_356_; 
v_t_boxed_355_ = lean_unbox(v_t_352_);
v_res_356_ = l_Lasm_JS_Web_KeyUsage_encapsulateKey_elim(v_motive_351_, v_t_boxed_355_, v_h_353_, v_encapsulateKey_354_);
lean_dec(v_encapsulateKey_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg(lean_object* v_encapsulateBits_357_){
_start:
{
lean_inc(v_encapsulateBits_357_);
return v_encapsulateBits_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg___boxed(lean_object* v_encapsulateBits_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___redArg(v_encapsulateBits_358_);
lean_dec(v_encapsulateBits_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim(lean_object* v_motive_360_, uint8_t v_t_361_, lean_object* v_h_362_, lean_object* v_encapsulateBits_363_){
_start:
{
lean_inc(v_encapsulateBits_363_);
return v_encapsulateBits_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim___boxed(lean_object* v_motive_364_, lean_object* v_t_365_, lean_object* v_h_366_, lean_object* v_encapsulateBits_367_){
_start:
{
uint8_t v_t_boxed_368_; lean_object* v_res_369_; 
v_t_boxed_368_ = lean_unbox(v_t_365_);
v_res_369_ = l_Lasm_JS_Web_KeyUsage_encapsulateBits_elim(v_motive_364_, v_t_boxed_368_, v_h_366_, v_encapsulateBits_367_);
lean_dec(v_encapsulateBits_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg(lean_object* v_decapsulateKey_370_){
_start:
{
lean_inc(v_decapsulateKey_370_);
return v_decapsulateKey_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg___boxed(lean_object* v_decapsulateKey_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___redArg(v_decapsulateKey_371_);
lean_dec(v_decapsulateKey_371_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim(lean_object* v_motive_373_, uint8_t v_t_374_, lean_object* v_h_375_, lean_object* v_decapsulateKey_376_){
_start:
{
lean_inc(v_decapsulateKey_376_);
return v_decapsulateKey_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim___boxed(lean_object* v_motive_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_decapsulateKey_380_){
_start:
{
uint8_t v_t_boxed_381_; lean_object* v_res_382_; 
v_t_boxed_381_ = lean_unbox(v_t_378_);
v_res_382_ = l_Lasm_JS_Web_KeyUsage_decapsulateKey_elim(v_motive_377_, v_t_boxed_381_, v_h_379_, v_decapsulateKey_380_);
lean_dec(v_decapsulateKey_380_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg(lean_object* v_decapsulateBits_383_){
_start:
{
lean_inc(v_decapsulateBits_383_);
return v_decapsulateBits_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg___boxed(lean_object* v_decapsulateBits_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___redArg(v_decapsulateBits_384_);
lean_dec(v_decapsulateBits_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim(lean_object* v_motive_386_, uint8_t v_t_387_, lean_object* v_h_388_, lean_object* v_decapsulateBits_389_){
_start:
{
lean_inc(v_decapsulateBits_389_);
return v_decapsulateBits_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim___boxed(lean_object* v_motive_390_, lean_object* v_t_391_, lean_object* v_h_392_, lean_object* v_decapsulateBits_393_){
_start:
{
uint8_t v_t_boxed_394_; lean_object* v_res_395_; 
v_t_boxed_394_ = lean_unbox(v_t_391_);
v_res_395_ = l_Lasm_JS_Web_KeyUsage_decapsulateBits_elim(v_motive_390_, v_t_boxed_394_, v_h_392_, v_decapsulateBits_393_);
lean_dec(v_decapsulateBits_393_);
return v_res_395_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyUsage_beq(uint8_t v_x_396_, uint8_t v_y_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; uint8_t v___x_402_; 
v___x_398_ = lean_box(v_x_396_);
v___x_399_ = lean_obj_tag_nat(v___x_398_);
lean_dec(v___x_398_);
v___x_400_ = lean_box(v_y_397_);
v___x_401_ = lean_obj_tag_nat(v___x_400_);
lean_dec(v___x_400_);
v___x_402_ = lean_nat_dec_eq(v___x_399_, v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyUsage_beq___boxed(lean_object* v_x_403_, lean_object* v_y_404_){
_start:
{
uint8_t v_x_24__boxed_405_; uint8_t v_y_25__boxed_406_; uint8_t v_res_407_; lean_object* v_r_408_; 
v_x_24__boxed_405_ = lean_unbox(v_x_403_);
v_y_25__boxed_406_ = lean_unbox(v_y_404_);
v_res_407_ = l_Lasm_JS_Web_instBEqKeyUsage_beq(v_x_24__boxed_405_, v_y_25__boxed_406_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr(uint8_t v_x_447_, lean_object* v_prec_448_){
_start:
{
lean_object* v___y_450_; lean_object* v___y_457_; lean_object* v___y_464_; lean_object* v___y_471_; lean_object* v___y_478_; lean_object* v___y_485_; lean_object* v___y_492_; lean_object* v___y_499_; lean_object* v___y_506_; lean_object* v___y_513_; lean_object* v___y_520_; lean_object* v___y_527_; 
switch(v_x_447_)
{
case 0:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(1024u);
v___x_534_ = lean_nat_dec_le(v___x_533_, v_prec_448_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
v___x_535_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_450_ = v___x_535_;
goto v___jp_449_;
}
else
{
lean_object* v___x_536_; 
v___x_536_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_450_ = v___x_536_;
goto v___jp_449_;
}
}
case 1:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1024u);
v___x_538_ = lean_nat_dec_le(v___x_537_, v_prec_448_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_457_ = v___x_539_;
goto v___jp_456_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_457_ = v___x_540_;
goto v___jp_456_;
}
}
case 2:
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(1024u);
v___x_542_ = lean_nat_dec_le(v___x_541_, v_prec_448_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_464_ = v___x_543_;
goto v___jp_463_;
}
else
{
lean_object* v___x_544_; 
v___x_544_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_464_ = v___x_544_;
goto v___jp_463_;
}
}
case 3:
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(1024u);
v___x_546_ = lean_nat_dec_le(v___x_545_, v_prec_448_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_471_ = v___x_547_;
goto v___jp_470_;
}
else
{
lean_object* v___x_548_; 
v___x_548_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_471_ = v___x_548_;
goto v___jp_470_;
}
}
case 4:
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(1024u);
v___x_550_ = lean_nat_dec_le(v___x_549_, v_prec_448_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_478_ = v___x_551_;
goto v___jp_477_;
}
else
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_478_ = v___x_552_;
goto v___jp_477_;
}
}
case 5:
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(1024u);
v___x_554_ = lean_nat_dec_le(v___x_553_, v_prec_448_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_485_ = v___x_555_;
goto v___jp_484_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_485_ = v___x_556_;
goto v___jp_484_;
}
}
case 6:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(1024u);
v___x_558_ = lean_nat_dec_le(v___x_557_, v_prec_448_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_492_ = v___x_559_;
goto v___jp_491_;
}
else
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_492_ = v___x_560_;
goto v___jp_491_;
}
}
case 7:
{
lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_562_ = lean_nat_dec_le(v___x_561_, v_prec_448_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_499_ = v___x_563_;
goto v___jp_498_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_499_ = v___x_564_;
goto v___jp_498_;
}
}
case 8:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(1024u);
v___x_566_ = lean_nat_dec_le(v___x_565_, v_prec_448_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_506_ = v___x_567_;
goto v___jp_505_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_506_ = v___x_568_;
goto v___jp_505_;
}
}
case 9:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_unsigned_to_nat(1024u);
v___x_570_ = lean_nat_dec_le(v___x_569_, v_prec_448_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_513_ = v___x_571_;
goto v___jp_512_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_513_ = v___x_572_;
goto v___jp_512_;
}
}
case 10:
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1024u);
v___x_574_ = lean_nat_dec_le(v___x_573_, v_prec_448_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_520_ = v___x_575_;
goto v___jp_519_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_520_ = v___x_576_;
goto v___jp_519_;
}
}
default: 
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(1024u);
v___x_578_ = lean_nat_dec_le(v___x_577_, v_prec_448_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_527_ = v___x_579_;
goto v___jp_526_;
}
else
{
lean_object* v___x_580_; 
v___x_580_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_527_ = v___x_580_;
goto v___jp_526_;
}
}
}
v___jp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_451_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__1));
lean_inc(v___y_450_);
v___x_452_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_452_, 0, v___y_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = 0;
v___x_454_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set_uint8(v___x_454_, sizeof(void*)*1, v___x_453_);
v___x_455_ = l_Repr_addAppParen(v___x_454_, v_prec_448_);
return v___x_455_;
}
v___jp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_458_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__3));
lean_inc(v___y_457_);
v___x_459_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_459_, 0, v___y_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = 0;
v___x_461_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set_uint8(v___x_461_, sizeof(void*)*1, v___x_460_);
v___x_462_ = l_Repr_addAppParen(v___x_461_, v_prec_448_);
return v___x_462_;
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_465_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__5));
lean_inc(v___y_464_);
v___x_466_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_466_, 0, v___y_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = 0;
v___x_468_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set_uint8(v___x_468_, sizeof(void*)*1, v___x_467_);
v___x_469_ = l_Repr_addAppParen(v___x_468_, v_prec_448_);
return v___x_469_;
}
v___jp_470_:
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__7));
lean_inc(v___y_471_);
v___x_473_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_473_, 0, v___y_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = 0;
v___x_475_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set_uint8(v___x_475_, sizeof(void*)*1, v___x_474_);
v___x_476_ = l_Repr_addAppParen(v___x_475_, v_prec_448_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__9));
lean_inc(v___y_478_);
v___x_480_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_480_, 0, v___y_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = 0;
v___x_482_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*1, v___x_481_);
v___x_483_ = l_Repr_addAppParen(v___x_482_, v_prec_448_);
return v___x_483_;
}
v___jp_484_:
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__11));
lean_inc(v___y_485_);
v___x_487_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_487_, 0, v___y_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*1, v___x_488_);
v___x_490_ = l_Repr_addAppParen(v___x_489_, v_prec_448_);
return v___x_490_;
}
v___jp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__13));
lean_inc(v___y_492_);
v___x_494_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_494_, 0, v___y_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = 0;
v___x_496_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*1, v___x_495_);
v___x_497_ = l_Repr_addAppParen(v___x_496_, v_prec_448_);
return v___x_497_;
}
v___jp_498_:
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__15));
lean_inc(v___y_499_);
v___x_501_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_501_, 0, v___y_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = 0;
v___x_503_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
v___x_504_ = l_Repr_addAppParen(v___x_503_, v_prec_448_);
return v___x_504_;
}
v___jp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_507_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__17));
lean_inc(v___y_506_);
v___x_508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_508_, 0, v___y_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = 0;
v___x_510_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set_uint8(v___x_510_, sizeof(void*)*1, v___x_509_);
v___x_511_ = l_Repr_addAppParen(v___x_510_, v_prec_448_);
return v___x_511_;
}
v___jp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__19));
lean_inc(v___y_513_);
v___x_515_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_515_, 0, v___y_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = 0;
v___x_517_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*1, v___x_516_);
v___x_518_ = l_Repr_addAppParen(v___x_517_, v_prec_448_);
return v___x_518_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_521_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__21));
lean_inc(v___y_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = l_Repr_addAppParen(v___x_524_, v_prec_448_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyUsage_repr___closed__23));
lean_inc(v___y_527_);
v___x_529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = 0;
v___x_531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set_uint8(v___x_531_, sizeof(void*)*1, v___x_530_);
v___x_532_ = l_Repr_addAppParen(v___x_531_, v_prec_448_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyUsage_repr___boxed(lean_object* v_x_581_, lean_object* v_prec_582_){
_start:
{
uint8_t v_x_653__boxed_583_; lean_object* v_res_584_; 
v_x_653__boxed_583_ = lean_unbox(v_x_581_);
v_res_584_ = l_Lasm_JS_Web_instReprKeyUsage_repr(v_x_653__boxed_583_, v_prec_582_);
lean_dec(v_prec_582_);
return v_res_584_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyUsage_default(void){
_start:
{
uint8_t v___x_587_; 
v___x_587_ = 0;
return v___x_587_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyUsage(void){
_start:
{
uint8_t v___x_588_; 
v___x_588_ = 0;
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0(uint8_t v_x_625_){
_start:
{
switch(v_x_625_)
{
case 0:
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
return v___x_626_;
}
case 1:
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
return v___x_627_;
}
case 2:
{
lean_object* v___x_628_; 
v___x_628_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
return v___x_628_;
}
case 3:
{
lean_object* v___x_629_; 
v___x_629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
return v___x_629_;
}
case 4:
{
lean_object* v___x_630_; 
v___x_630_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
return v___x_630_;
}
case 5:
{
lean_object* v___x_631_; 
v___x_631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
return v___x_631_;
}
case 6:
{
lean_object* v___x_632_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
return v___x_632_;
}
case 7:
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
return v___x_633_;
}
case 8:
{
lean_object* v___x_634_; 
v___x_634_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
return v___x_634_;
}
case 9:
{
lean_object* v___x_635_; 
v___x_635_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
return v___x_635_;
}
case 10:
{
lean_object* v___x_636_; 
v___x_636_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
return v___x_636_;
}
default: 
{
lean_object* v___x_637_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyUsage___lam__0___boxed(lean_object* v_x_638_){
_start:
{
uint8_t v_x_210__boxed_639_; lean_object* v_res_640_; 
v_x_210__boxed_639_ = lean_unbox(v_x_638_);
v_res_640_ = l_Lasm_JS_Web_instToJSKeyUsage___lam__0(v_x_210__boxed_639_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0(lean_object* v_x_681_){
_start:
{
if (lean_obj_tag(v_x_681_) == 4)
{
lean_object* v_s_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_s_684_ = lean_ctor_get(v_x_681_, 0);
v___x_685_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
v___x_686_ = lean_string_dec_eq(v_s_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
v___x_688_ = lean_string_dec_eq(v_s_684_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
v___x_690_ = lean_string_dec_eq(v_s_684_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
v___x_692_ = lean_string_dec_eq(v_s_684_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
v___x_694_ = lean_string_dec_eq(v_s_684_, v___x_693_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
v___x_696_ = lean_string_dec_eq(v_s_684_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_697_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
v___x_698_ = lean_string_dec_eq(v_s_684_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; uint8_t v___x_700_; 
v___x_699_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
v___x_700_ = lean_string_dec_eq(v_s_684_, v___x_699_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_701_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__16));
v___x_702_ = lean_string_dec_eq(v_s_684_, v___x_701_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__18));
v___x_704_ = lean_string_dec_eq(v_s_684_, v___x_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__20));
v___x_706_ = lean_string_dec_eq(v_s_684_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__22));
v___x_708_ = lean_string_dec_eq(v_s_684_, v___x_707_);
if (v___x_708_ == 0)
{
goto v___jp_682_;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__1));
return v___x_709_;
}
}
else
{
lean_object* v___x_710_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__2));
return v___x_710_;
}
}
else
{
lean_object* v___x_711_; 
v___x_711_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__3));
return v___x_711_;
}
}
else
{
lean_object* v___x_712_; 
v___x_712_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__4));
return v___x_712_;
}
}
else
{
lean_object* v___x_713_; 
v___x_713_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__5));
return v___x_713_;
}
}
else
{
lean_object* v___x_714_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__6));
return v___x_714_;
}
}
else
{
lean_object* v___x_715_; 
v___x_715_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__7));
return v___x_715_;
}
}
else
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__8));
return v___x_716_;
}
}
else
{
lean_object* v___x_717_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__9));
return v___x_717_;
}
}
else
{
lean_object* v___x_718_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__10));
return v___x_718_;
}
}
else
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__11));
return v___x_719_;
}
}
else
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__12));
return v___x_720_;
}
}
else
{
goto v___jp_682_;
}
v___jp_682_:
{
lean_object* v___x_683_; 
v___x_683_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___closed__0));
return v___x_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyUsage___lam__0___boxed(lean_object* v_x_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_JS_Web_instFromJSKeyUsage___lam__0(v_x_721_);
lean_dec(v_x_721_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___impl(uint8_t v_x_730_){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = lean_box(v_x_730_);
v___x_732_ = lean_obj_tag_nat(v___x_731_);
lean_dec(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorIdx___impl___boxed(lean_object* v_x_733_){
_start:
{
uint8_t v_x_4__boxed_734_; lean_object* v_res_735_; 
v_x_4__boxed_734_ = lean_unbox(v_x_733_);
v_res_735_ = l_Lasm_JS_Web_KeyFormat_ctorIdx___impl(v_x_4__boxed_734_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg(lean_object* v_k_736_){
_start:
{
lean_inc(v_k_736_);
return v_k_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___redArg___boxed(lean_object* v_k_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_JS_Web_KeyFormat_ctorElim___redArg(v_k_737_);
lean_dec(v_k_737_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim(lean_object* v_motive_739_, lean_object* v_ctorIdx_740_, uint8_t v_t_741_, lean_object* v_h_742_, lean_object* v_k_743_){
_start:
{
lean_inc(v_k_743_);
return v_k_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_ctorElim___boxed(lean_object* v_motive_744_, lean_object* v_ctorIdx_745_, lean_object* v_t_746_, lean_object* v_h_747_, lean_object* v_k_748_){
_start:
{
uint8_t v_t_boxed_749_; lean_object* v_res_750_; 
v_t_boxed_749_ = lean_unbox(v_t_746_);
v_res_750_ = l_Lasm_JS_Web_KeyFormat_ctorElim(v_motive_744_, v_ctorIdx_745_, v_t_boxed_749_, v_h_747_, v_k_748_);
lean_dec(v_k_748_);
lean_dec(v_ctorIdx_745_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg(lean_object* v_rawPublic_751_){
_start:
{
lean_inc(v_rawPublic_751_);
return v_rawPublic_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg___boxed(lean_object* v_rawPublic_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lasm_JS_Web_KeyFormat_rawPublic_elim___redArg(v_rawPublic_752_);
lean_dec(v_rawPublic_752_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim(lean_object* v_motive_754_, uint8_t v_t_755_, lean_object* v_h_756_, lean_object* v_rawPublic_757_){
_start:
{
lean_inc(v_rawPublic_757_);
return v_rawPublic_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPublic_elim___boxed(lean_object* v_motive_758_, lean_object* v_t_759_, lean_object* v_h_760_, lean_object* v_rawPublic_761_){
_start:
{
uint8_t v_t_boxed_762_; lean_object* v_res_763_; 
v_t_boxed_762_ = lean_unbox(v_t_759_);
v_res_763_ = l_Lasm_JS_Web_KeyFormat_rawPublic_elim(v_motive_758_, v_t_boxed_762_, v_h_760_, v_rawPublic_761_);
lean_dec(v_rawPublic_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg(lean_object* v_rawPrivate_764_){
_start:
{
lean_inc(v_rawPrivate_764_);
return v_rawPrivate_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg___boxed(lean_object* v_rawPrivate_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___redArg(v_rawPrivate_765_);
lean_dec(v_rawPrivate_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim(lean_object* v_motive_767_, uint8_t v_t_768_, lean_object* v_h_769_, lean_object* v_rawPrivate_770_){
_start:
{
lean_inc(v_rawPrivate_770_);
return v_rawPrivate_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawPrivate_elim___boxed(lean_object* v_motive_771_, lean_object* v_t_772_, lean_object* v_h_773_, lean_object* v_rawPrivate_774_){
_start:
{
uint8_t v_t_boxed_775_; lean_object* v_res_776_; 
v_t_boxed_775_ = lean_unbox(v_t_772_);
v_res_776_ = l_Lasm_JS_Web_KeyFormat_rawPrivate_elim(v_motive_771_, v_t_boxed_775_, v_h_773_, v_rawPrivate_774_);
lean_dec(v_rawPrivate_774_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg(lean_object* v_rawSeed_777_){
_start:
{
lean_inc(v_rawSeed_777_);
return v_rawSeed_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg___boxed(lean_object* v_rawSeed_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_JS_Web_KeyFormat_rawSeed_elim___redArg(v_rawSeed_778_);
lean_dec(v_rawSeed_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim(lean_object* v_motive_780_, uint8_t v_t_781_, lean_object* v_h_782_, lean_object* v_rawSeed_783_){
_start:
{
lean_inc(v_rawSeed_783_);
return v_rawSeed_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSeed_elim___boxed(lean_object* v_motive_784_, lean_object* v_t_785_, lean_object* v_h_786_, lean_object* v_rawSeed_787_){
_start:
{
uint8_t v_t_boxed_788_; lean_object* v_res_789_; 
v_t_boxed_788_ = lean_unbox(v_t_785_);
v_res_789_ = l_Lasm_JS_Web_KeyFormat_rawSeed_elim(v_motive_784_, v_t_boxed_788_, v_h_786_, v_rawSeed_787_);
lean_dec(v_rawSeed_787_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg(lean_object* v_rawSecret_790_){
_start:
{
lean_inc(v_rawSecret_790_);
return v_rawSecret_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg___boxed(lean_object* v_rawSecret_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lasm_JS_Web_KeyFormat_rawSecret_elim___redArg(v_rawSecret_791_);
lean_dec(v_rawSecret_791_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim(lean_object* v_motive_793_, uint8_t v_t_794_, lean_object* v_h_795_, lean_object* v_rawSecret_796_){
_start:
{
lean_inc(v_rawSecret_796_);
return v_rawSecret_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_rawSecret_elim___boxed(lean_object* v_motive_797_, lean_object* v_t_798_, lean_object* v_h_799_, lean_object* v_rawSecret_800_){
_start:
{
uint8_t v_t_boxed_801_; lean_object* v_res_802_; 
v_t_boxed_801_ = lean_unbox(v_t_798_);
v_res_802_ = l_Lasm_JS_Web_KeyFormat_rawSecret_elim(v_motive_797_, v_t_boxed_801_, v_h_799_, v_rawSecret_800_);
lean_dec(v_rawSecret_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg(lean_object* v_raw_803_){
_start:
{
lean_inc(v_raw_803_);
return v_raw_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___redArg___boxed(lean_object* v_raw_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lasm_JS_Web_KeyFormat_raw_elim___redArg(v_raw_804_);
lean_dec(v_raw_804_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim(lean_object* v_motive_806_, uint8_t v_t_807_, lean_object* v_h_808_, lean_object* v_raw_809_){
_start:
{
lean_inc(v_raw_809_);
return v_raw_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_raw_elim___boxed(lean_object* v_motive_810_, lean_object* v_t_811_, lean_object* v_h_812_, lean_object* v_raw_813_){
_start:
{
uint8_t v_t_boxed_814_; lean_object* v_res_815_; 
v_t_boxed_814_ = lean_unbox(v_t_811_);
v_res_815_ = l_Lasm_JS_Web_KeyFormat_raw_elim(v_motive_810_, v_t_boxed_814_, v_h_812_, v_raw_813_);
lean_dec(v_raw_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg(lean_object* v_spki_816_){
_start:
{
lean_inc(v_spki_816_);
return v_spki_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___redArg___boxed(lean_object* v_spki_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lasm_JS_Web_KeyFormat_spki_elim___redArg(v_spki_817_);
lean_dec(v_spki_817_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim(lean_object* v_motive_819_, uint8_t v_t_820_, lean_object* v_h_821_, lean_object* v_spki_822_){
_start:
{
lean_inc(v_spki_822_);
return v_spki_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_spki_elim___boxed(lean_object* v_motive_823_, lean_object* v_t_824_, lean_object* v_h_825_, lean_object* v_spki_826_){
_start:
{
uint8_t v_t_boxed_827_; lean_object* v_res_828_; 
v_t_boxed_827_ = lean_unbox(v_t_824_);
v_res_828_ = l_Lasm_JS_Web_KeyFormat_spki_elim(v_motive_823_, v_t_boxed_827_, v_h_825_, v_spki_826_);
lean_dec(v_spki_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg(lean_object* v_pkcs8_829_){
_start:
{
lean_inc(v_pkcs8_829_);
return v_pkcs8_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg___boxed(lean_object* v_pkcs8_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_JS_Web_KeyFormat_pkcs8_elim___redArg(v_pkcs8_830_);
lean_dec(v_pkcs8_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim(lean_object* v_motive_832_, uint8_t v_t_833_, lean_object* v_h_834_, lean_object* v_pkcs8_835_){
_start:
{
lean_inc(v_pkcs8_835_);
return v_pkcs8_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_pkcs8_elim___boxed(lean_object* v_motive_836_, lean_object* v_t_837_, lean_object* v_h_838_, lean_object* v_pkcs8_839_){
_start:
{
uint8_t v_t_boxed_840_; lean_object* v_res_841_; 
v_t_boxed_840_ = lean_unbox(v_t_837_);
v_res_841_ = l_Lasm_JS_Web_KeyFormat_pkcs8_elim(v_motive_836_, v_t_boxed_840_, v_h_838_, v_pkcs8_839_);
lean_dec(v_pkcs8_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg(lean_object* v_jwk_842_){
_start:
{
lean_inc(v_jwk_842_);
return v_jwk_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg___boxed(lean_object* v_jwk_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lasm_JS_Web_KeyFormat_jwk_elim___redArg(v_jwk_843_);
lean_dec(v_jwk_843_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim(lean_object* v_motive_845_, uint8_t v_t_846_, lean_object* v_h_847_, lean_object* v_jwk_848_){
_start:
{
lean_inc(v_jwk_848_);
return v_jwk_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyFormat_jwk_elim___boxed(lean_object* v_motive_849_, lean_object* v_t_850_, lean_object* v_h_851_, lean_object* v_jwk_852_){
_start:
{
uint8_t v_t_boxed_853_; lean_object* v_res_854_; 
v_t_boxed_853_ = lean_unbox(v_t_850_);
v_res_854_ = l_Lasm_JS_Web_KeyFormat_jwk_elim(v_motive_849_, v_t_boxed_853_, v_h_851_, v_jwk_852_);
lean_dec(v_jwk_852_);
return v_res_854_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqKeyFormat_beq(uint8_t v_x_855_, uint8_t v_y_856_){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_857_ = lean_box(v_x_855_);
v___x_858_ = lean_obj_tag_nat(v___x_857_);
lean_dec(v___x_857_);
v___x_859_ = lean_box(v_y_856_);
v___x_860_ = lean_obj_tag_nat(v___x_859_);
lean_dec(v___x_859_);
v___x_861_ = lean_nat_dec_eq(v___x_858_, v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqKeyFormat_beq___boxed(lean_object* v_x_862_, lean_object* v_y_863_){
_start:
{
uint8_t v_x_24__boxed_864_; uint8_t v_y_25__boxed_865_; uint8_t v_res_866_; lean_object* v_r_867_; 
v_x_24__boxed_864_ = lean_unbox(v_x_862_);
v_y_25__boxed_865_ = lean_unbox(v_y_863_);
v_res_866_ = l_Lasm_JS_Web_instBEqKeyFormat_beq(v_x_24__boxed_864_, v_y_25__boxed_865_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr(uint8_t v_x_894_, lean_object* v_prec_895_){
_start:
{
lean_object* v___y_897_; lean_object* v___y_904_; lean_object* v___y_911_; lean_object* v___y_918_; lean_object* v___y_925_; lean_object* v___y_932_; lean_object* v___y_939_; lean_object* v___y_946_; 
switch(v_x_894_)
{
case 0:
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(1024u);
v___x_953_ = lean_nat_dec_le(v___x_952_, v_prec_895_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_897_ = v___x_954_;
goto v___jp_896_;
}
else
{
lean_object* v___x_955_; 
v___x_955_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_897_ = v___x_955_;
goto v___jp_896_;
}
}
case 1:
{
lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = lean_unsigned_to_nat(1024u);
v___x_957_ = lean_nat_dec_le(v___x_956_, v_prec_895_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_904_ = v___x_958_;
goto v___jp_903_;
}
else
{
lean_object* v___x_959_; 
v___x_959_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_904_ = v___x_959_;
goto v___jp_903_;
}
}
case 2:
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(1024u);
v___x_961_ = lean_nat_dec_le(v___x_960_, v_prec_895_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_911_ = v___x_962_;
goto v___jp_910_;
}
else
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_911_ = v___x_963_;
goto v___jp_910_;
}
}
case 3:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_unsigned_to_nat(1024u);
v___x_965_ = lean_nat_dec_le(v___x_964_, v_prec_895_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_918_ = v___x_966_;
goto v___jp_917_;
}
else
{
lean_object* v___x_967_; 
v___x_967_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_918_ = v___x_967_;
goto v___jp_917_;
}
}
case 4:
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(1024u);
v___x_969_ = lean_nat_dec_le(v___x_968_, v_prec_895_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
v___x_970_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_925_ = v___x_970_;
goto v___jp_924_;
}
else
{
lean_object* v___x_971_; 
v___x_971_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_925_ = v___x_971_;
goto v___jp_924_;
}
}
case 5:
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1024u);
v___x_973_ = lean_nat_dec_le(v___x_972_, v_prec_895_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_932_ = v___x_974_;
goto v___jp_931_;
}
else
{
lean_object* v___x_975_; 
v___x_975_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_932_ = v___x_975_;
goto v___jp_931_;
}
}
case 6:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_unsigned_to_nat(1024u);
v___x_977_ = lean_nat_dec_le(v___x_976_, v_prec_895_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_939_ = v___x_978_;
goto v___jp_938_;
}
else
{
lean_object* v___x_979_; 
v___x_979_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_939_ = v___x_979_;
goto v___jp_938_;
}
}
default: 
{
lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_980_ = lean_unsigned_to_nat(1024u);
v___x_981_ = lean_nat_dec_le(v___x_980_, v_prec_895_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__6, &l_Lasm_JS_Web_instReprKeyType_repr___closed__6_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__6);
v___y_946_ = v___x_982_;
goto v___jp_945_;
}
else
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_Lasm_JS_Web_instReprKeyType_repr___closed__7, &l_Lasm_JS_Web_instReprKeyType_repr___closed__7_once, _init_l_Lasm_JS_Web_instReprKeyType_repr___closed__7);
v___y_946_ = v___x_983_;
goto v___jp_945_;
}
}
}
v___jp_896_:
{
lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_898_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__1));
lean_inc(v___y_897_);
v___x_899_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_899_, 0, v___y_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = 0;
v___x_901_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set_uint8(v___x_901_, sizeof(void*)*1, v___x_900_);
v___x_902_ = l_Repr_addAppParen(v___x_901_, v_prec_895_);
return v___x_902_;
}
v___jp_903_:
{
lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_905_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__3));
lean_inc(v___y_904_);
v___x_906_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_906_, 0, v___y_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = 0;
v___x_908_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set_uint8(v___x_908_, sizeof(void*)*1, v___x_907_);
v___x_909_ = l_Repr_addAppParen(v___x_908_, v_prec_895_);
return v___x_909_;
}
v___jp_910_:
{
lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_912_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__5));
lean_inc(v___y_911_);
v___x_913_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_913_, 0, v___y_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = 0;
v___x_915_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set_uint8(v___x_915_, sizeof(void*)*1, v___x_914_);
v___x_916_ = l_Repr_addAppParen(v___x_915_, v_prec_895_);
return v___x_916_;
}
v___jp_917_:
{
lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__7));
lean_inc(v___y_918_);
v___x_920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_920_, 0, v___y_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = 0;
v___x_922_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set_uint8(v___x_922_, sizeof(void*)*1, v___x_921_);
v___x_923_ = l_Repr_addAppParen(v___x_922_, v_prec_895_);
return v___x_923_;
}
v___jp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__9));
lean_inc(v___y_925_);
v___x_927_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_927_, 0, v___y_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = 0;
v___x_929_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_929_, 0, v___x_927_);
lean_ctor_set_uint8(v___x_929_, sizeof(void*)*1, v___x_928_);
v___x_930_ = l_Repr_addAppParen(v___x_929_, v_prec_895_);
return v___x_930_;
}
v___jp_931_:
{
lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_933_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__11));
lean_inc(v___y_932_);
v___x_934_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_934_, 0, v___y_932_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = 0;
v___x_936_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_936_, 0, v___x_934_);
lean_ctor_set_uint8(v___x_936_, sizeof(void*)*1, v___x_935_);
v___x_937_ = l_Repr_addAppParen(v___x_936_, v_prec_895_);
return v___x_937_;
}
v___jp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; uint8_t v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_940_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__13));
lean_inc(v___y_939_);
v___x_941_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_941_, 0, v___y_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = 0;
v___x_943_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_943_, 0, v___x_941_);
lean_ctor_set_uint8(v___x_943_, sizeof(void*)*1, v___x_942_);
v___x_944_ = l_Repr_addAppParen(v___x_943_, v_prec_895_);
return v___x_944_;
}
v___jp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_947_ = ((lean_object*)(l_Lasm_JS_Web_instReprKeyFormat_repr___closed__15));
lean_inc(v___y_946_);
v___x_948_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_948_, 0, v___y_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = 0;
v___x_950_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*1, v___x_949_);
v___x_951_ = l_Repr_addAppParen(v___x_950_, v_prec_895_);
return v___x_951_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprKeyFormat_repr___boxed(lean_object* v_x_984_, lean_object* v_prec_985_){
_start:
{
uint8_t v_x_437__boxed_986_; lean_object* v_res_987_; 
v_x_437__boxed_986_ = lean_unbox(v_x_984_);
v_res_987_ = l_Lasm_JS_Web_instReprKeyFormat_repr(v_x_437__boxed_986_, v_prec_985_);
lean_dec(v_prec_985_);
return v_res_987_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyFormat_default(void){
_start:
{
uint8_t v___x_990_; 
v___x_990_ = 0;
return v___x_990_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedKeyFormat(void){
_start:
{
uint8_t v___x_991_; 
v___x_991_ = 0;
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0(uint8_t v_x_1016_){
_start:
{
switch(v_x_1016_)
{
case 0:
{
lean_object* v___x_1017_; 
v___x_1017_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
return v___x_1017_;
}
case 1:
{
lean_object* v___x_1018_; 
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
return v___x_1018_;
}
case 2:
{
lean_object* v___x_1019_; 
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
return v___x_1019_;
}
case 3:
{
lean_object* v___x_1020_; 
v___x_1020_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
return v___x_1020_;
}
case 4:
{
lean_object* v___x_1021_; 
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
return v___x_1021_;
}
case 5:
{
lean_object* v___x_1022_; 
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
return v___x_1022_;
}
case 6:
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
return v___x_1023_;
}
default: 
{
lean_object* v___x_1024_; 
v___x_1024_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
return v___x_1024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyFormat___lam__0___boxed(lean_object* v_x_1025_){
_start:
{
uint8_t v_x_142__boxed_1026_; lean_object* v_res_1027_; 
v_x_142__boxed_1026_ = lean_unbox(v_x_1025_);
v_res_1027_ = l_Lasm_JS_Web_instToJSKeyFormat___lam__0(v_x_142__boxed_1026_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0(lean_object* v_x_1056_){
_start:
{
if (lean_obj_tag(v_x_1056_) == 4)
{
lean_object* v_s_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v_s_1059_ = lean_ctor_get(v_x_1056_, 0);
v___x_1060_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__0));
v___x_1061_ = lean_string_dec_eq(v_s_1059_, v___x_1060_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1062_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__2));
v___x_1063_ = lean_string_dec_eq(v_s_1059_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__4));
v___x_1065_ = lean_string_dec_eq(v_s_1059_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__6));
v___x_1067_ = lean_string_dec_eq(v_s_1059_, v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; uint8_t v___x_1069_; 
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__8));
v___x_1069_ = lean_string_dec_eq(v_s_1059_, v___x_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__10));
v___x_1071_ = lean_string_dec_eq(v_s_1059_, v___x_1070_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__12));
v___x_1073_ = lean_string_dec_eq(v_s_1059_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__14));
v___x_1075_ = lean_string_dec_eq(v_s_1059_, v___x_1074_);
if (v___x_1075_ == 0)
{
goto v___jp_1057_;
}
else
{
lean_object* v___x_1076_; 
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__1));
return v___x_1076_;
}
}
else
{
lean_object* v___x_1077_; 
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__2));
return v___x_1077_;
}
}
else
{
lean_object* v___x_1078_; 
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__3));
return v___x_1078_;
}
}
else
{
lean_object* v___x_1079_; 
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__4));
return v___x_1079_;
}
}
else
{
lean_object* v___x_1080_; 
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__5));
return v___x_1080_;
}
}
else
{
lean_object* v___x_1081_; 
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__6));
return v___x_1081_;
}
}
else
{
lean_object* v___x_1082_; 
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__7));
return v___x_1082_;
}
}
else
{
lean_object* v___x_1083_; 
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__8));
return v___x_1083_;
}
}
else
{
goto v___jp_1057_;
}
v___jp_1057_:
{
lean_object* v___x_1058_; 
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___closed__0));
return v___x_1058_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSKeyFormat___lam__0___boxed(lean_object* v_x_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_JS_Web_instFromJSKeyFormat___lam__0(v_x_1084_);
lean_dec(v_x_1084_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___impl(lean_object* v_x_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_obj_tag_nat(v_x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___impl___boxed(lean_object* v_x_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorIdx___impl(v_x_1095_);
lean_dec_ref(v_x_1095_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(lean_object* v_t_1097_, lean_object* v_k_1098_){
_start:
{
if (lean_obj_tag(v_t_1097_) == 0)
{
lean_object* v_value_1099_; lean_object* v___x_1100_; 
v_value_1099_ = lean_ctor_get(v_t_1097_, 0);
lean_inc(v_value_1099_);
lean_dec_ref_known(v_t_1097_, 1);
v___x_1100_ = lean_apply_1(v_k_1098_, v_value_1099_);
return v___x_1100_;
}
else
{
lean_object* v_value_1101_; lean_object* v___x_1102_; 
v_value_1101_ = lean_ctor_get(v_t_1097_, 0);
lean_inc_ref(v_value_1101_);
lean_dec_ref_known(v_t_1097_, 1);
v___x_1102_ = lean_apply_1(v_k_1098_, v_value_1101_);
return v___x_1102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim(lean_object* v_motive_1103_, lean_object* v_ctorIdx_1104_, lean_object* v_t_1105_, lean_object* v_h_1106_, lean_object* v_k_1107_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1105_, v_k_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___boxed(lean_object* v_motive_1109_, lean_object* v_ctorIdx_1110_, lean_object* v_t_1111_, lean_object* v_h_1112_, lean_object* v_k_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim(v_motive_1109_, v_ctorIdx_1110_, v_t_1111_, v_h_1112_, v_k_1113_);
lean_dec(v_ctorIdx_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim___redArg(lean_object* v_t_1115_, lean_object* v_object_1116_){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1115_, v_object_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_object_elim(lean_object* v_motive_1118_, lean_object* v_t_1119_, lean_object* v_h_1120_, lean_object* v_object_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1119_, v_object_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim___redArg(lean_object* v_t_1123_, lean_object* v_domString_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1123_, v_domString_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AlgorithmIdentifier_domString_elim(lean_object* v_motive_1126_, lean_object* v_t_1127_, lean_object* v_h_1128_, lean_object* v_domString_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lasm_JS_Web_AlgorithmIdentifier_ctorElim___redArg(v_t_1127_, v_domString_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithmIdentifier___lam__0(lean_object* v_x_1131_){
_start:
{
if (lean_obj_tag(v_x_1131_) == 0)
{
lean_object* v_value_1132_; 
v_value_1132_ = lean_ctor_get(v_x_1131_, 0);
lean_inc(v_value_1132_);
lean_dec_ref_known(v_x_1131_, 1);
return v_value_1132_;
}
else
{
lean_object* v_value_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v_value_1133_ = lean_ctor_get(v_x_1131_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_x_1131_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v_x_1131_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_value_1133_);
lean_dec(v_x_1131_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 4);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_value_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringAlgorithmIdentifier___lam__0(lean_object* v_value_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1144_, 0, v_value_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(lean_object* v___x_1149_, lean_object* v_d_1150_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v___x_1149_);
v___x_1152_ = l_Lasm_JS_readField___redArg(v___x_1149_, v_d_1150_, v___x_1151_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec_ref(v___x_1149_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_a_1161_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1161_);
lean_dec_ref_known(v___x_1152_, 1);
v___x_1162_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1163_ = l_Lasm_JS_readField___redArg(v___x_1149_, v_d_1150_, v___x_1162_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1161_);
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1163_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1163_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1180_; 
v_a_1172_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1174_ = v___x_1163_;
v_isShared_1175_ = v_isSharedCheck_1180_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1163_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1180_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v_a_1161_);
lean_ctor_set(v___x_1176_, 1, v_a_1172_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 0, v___x_1176_);
v___x_1178_ = v___x_1174_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed(lean_object* v___x_1181_, lean_object* v_d_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0(v___x_1181_, v_d_1182_);
lean_dec(v_d_1182_);
return v_res_1183_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKey));
v___x_1185_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1184_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___f_1187_; 
v___x_1186_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___f_1187_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1187_, 0, v___x_1186_);
return v___f_1187_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3(void){
_start:
{
uint8_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___f_1191_; lean_object* v___x_1192_; 
v___x_1189_ = 0;
v___x_1190_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__2));
v___f_1191_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__1);
v___x_1192_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1192_, 0, v___f_1191_);
lean_ctor_set(v___x_1192_, 1, v___x_1190_);
lean_ctor_set_uint8(v___x_1192_, sizeof(void*)*2, v___x_1189_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair(void){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__3);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___impl(lean_object* v_x_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_obj_tag_nat(v_x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___impl___boxed(lean_object* v_x_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorIdx___impl(v_x_1196_);
lean_dec_ref(v_x_1196_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(lean_object* v_t_1198_, lean_object* v_k_1199_){
_start:
{
if (lean_obj_tag(v_t_1198_) == 0)
{
lean_object* v_value_1200_; lean_object* v___x_1201_; 
v_value_1200_ = lean_ctor_get(v_t_1198_, 0);
lean_inc(v_value_1200_);
lean_dec_ref_known(v_t_1198_, 1);
v___x_1201_ = lean_apply_1(v_k_1199_, v_value_1200_);
return v___x_1201_;
}
else
{
lean_object* v_value_1202_; lean_object* v___x_1203_; 
v_value_1202_ = lean_ctor_get(v_t_1198_, 0);
lean_inc_ref(v_value_1202_);
lean_dec_ref_known(v_t_1198_, 1);
v___x_1203_ = lean_apply_1(v_k_1199_, v_value_1202_);
return v___x_1203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(lean_object* v_motive_1204_, lean_object* v_ctorIdx_1205_, lean_object* v_t_1206_, lean_object* v_h_1207_, lean_object* v_k_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1206_, v_k_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___boxed(lean_object* v_motive_1210_, lean_object* v_ctorIdx_1211_, lean_object* v_t_1212_, lean_object* v_h_1213_, lean_object* v_k_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim(v_motive_1210_, v_ctorIdx_1211_, v_t_1212_, v_h_1213_, v_k_1214_);
lean_dec(v_ctorIdx_1211_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim___redArg(lean_object* v_t_1216_, lean_object* v_cryptoKey_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1216_, v_cryptoKey_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKey_elim(lean_object* v_motive_1219_, lean_object* v_t_1220_, lean_object* v_h_1221_, lean_object* v_cryptoKey_1222_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1220_, v_cryptoKey_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim___redArg(lean_object* v_t_1224_, lean_object* v_cryptoKeyPair_1225_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1224_, v_cryptoKeyPair_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_cryptoKeyPair_elim(lean_object* v_motive_1227_, lean_object* v_t_1228_, lean_object* v_h_1229_, lean_object* v_cryptoKeyPair_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lasm_JS_Web_CryptoKeyOrCryptoKeyPair_ctorElim___redArg(v_t_1228_, v_cryptoKeyPair_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0(lean_object* v_x_1234_){
_start:
{
switch(lean_obj_tag(v_x_1234_))
{
case 9:
{
lean_object* v_value_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_value_1235_ = lean_ctor_get(v_x_1234_, 0);
lean_inc(v_value_1235_);
lean_dec_ref_known(v_x_1234_, 2);
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v_value_1235_);
v___x_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
return v___x_1237_;
}
case 8:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0, &l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0_once, _init_l_Lasm_JS_Web_instFromJSCryptoKeyPair___closed__0);
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
v___x_1240_ = l_Lasm_JS_readField___redArg(v___x_1238_, v_x_1234_, v___x_1239_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec_ref_known(v_x_1234_, 1);
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1240_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1240_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1275_; 
v_a_1249_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1250_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
v___x_1251_ = l_Lasm_JS_readField___redArg(v___x_1238_, v_x_1234_, v___x_1250_);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_x_1234_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v_x_1234_, 0);
lean_dec(v_unused_1276_);
v___x_1253_ = v_x_1234_;
v_isShared_1254_ = v_isSharedCheck_1275_;
goto v_resetjp_1252_;
}
else
{
lean_dec(v_x_1234_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1275_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_del_object(v___x_1253_);
lean_dec(v_a_1249_);
v_a_1255_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1251_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1251_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1274_; 
v_a_1263_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1265_ = v___x_1251_;
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1251_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_a_1249_);
lean_ctor_set(v___x_1267_, 1, v_a_1263_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set_tag(v___x_1253_, 1);
lean_ctor_set(v___x_1253_, 0, v___x_1267_);
v___x_1269_ = v___x_1253_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1271_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1269_);
v___x_1271_ = v___x_1265_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_1277_; 
lean_dec(v_x_1234_);
v___x_1277_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___lam__0___closed__0));
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0(lean_object* v___f_1288_, lean_object* v_d_1289_){
_start:
{
lean_object* v_r_1290_; lean_object* v_d_1291_; lean_object* v_t_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_r_1290_ = lean_ctor_get(v_d_1289_, 0);
lean_inc(v_r_1290_);
v_d_1291_ = lean_ctor_get(v_d_1289_, 1);
lean_inc(v_d_1291_);
v_t_1292_ = lean_ctor_get(v_d_1289_, 2);
lean_inc(v_t_1292_);
lean_dec_ref(v_d_1289_);
v___x_1293_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref_n(v___f_1288_, 2);
v___x_1294_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1288_, v_r_1290_);
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1297_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1288_, v_d_1291_);
v___x_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1296_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1300_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1288_, v_t_1292_);
v___x_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = lean_unsigned_to_nat(3u);
v___x_1303_ = lean_mk_empty_array_with_capacity(v___x_1302_);
v___x_1304_ = lean_array_push(v___x_1303_, v___x_1295_);
v___x_1305_ = lean_array_push(v___x_1304_, v___x_1298_);
v___x_1306_ = lean_array_push(v___x_1305_, v___x_1301_);
v___x_1307_ = l_Lasm_JS_Web_Support_fields(v___x_1306_);
lean_dec_ref(v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(lean_object* v___x_1312_, lean_object* v_d_1313_){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc_ref(v___x_1312_);
v___x_1315_ = l_Lasm_JS_readField___redArg(v___x_1312_, v_d_1313_, v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v___x_1312_);
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v_a_1324_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1315_, 1);
v___x_1325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1312_);
v___x_1326_ = l_Lasm_JS_readField___redArg(v___x_1312_, v_d_1313_, v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1312_);
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_a_1335_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1335_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_1337_ = l_Lasm_JS_readField___redArg(v___x_1312_, v_d_1313_, v___x_1336_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
lean_dec(v_a_1335_);
lean_dec(v_a_1324_);
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1354_; 
v_a_1346_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1348_ = v___x_1337_;
v_isShared_1349_ = v_isSharedCheck_1354_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1337_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1354_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1350_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1350_, 0, v_a_1324_);
lean_ctor_set(v___x_1350_, 1, v_a_1335_);
lean_ctor_set(v___x_1350_, 2, v_a_1346_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1350_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed(lean_object* v___x_1355_, lean_object* v_d_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0(v___x_1355_, v_d_1356_);
lean_dec(v_d_1356_);
return v_res_1357_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = l_Lasm_JS_instFromJSString;
v___x_1359_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1(void){
_start:
{
lean_object* v___x_1360_; lean_object* v___f_1361_; 
v___x_1360_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1361_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1361_, 0, v___x_1360_);
return v___f_1361_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3(void){
_start:
{
uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; 
v___x_1363_ = 0;
v___x_1364_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__2));
v___f_1365_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__1);
v___x_1366_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1366_, 0, v___f_1365_);
lean_ctor_set(v___x_1366_, 1, v___x_1364_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*2, v___x_1363_);
return v___x_1366_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo(void){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__3);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSJsonWebKey___lam__0(lean_object* v___f_1385_, lean_object* v___x_1386_, lean_object* v___f_1387_, lean_object* v___x_1388_, lean_object* v_d_1389_){
_start:
{
lean_object* v_kty_1390_; lean_object* v_use_1391_; lean_object* v_key__ops_1392_; lean_object* v_alg_1393_; lean_object* v_ext_1394_; lean_object* v_crv_1395_; lean_object* v_x_1396_; lean_object* v_y_1397_; lean_object* v_d_1398_; lean_object* v_n_1399_; lean_object* v_e_1400_; lean_object* v_p_1401_; lean_object* v_q_1402_; lean_object* v_dp_1403_; lean_object* v_dq_1404_; lean_object* v_qi_1405_; lean_object* v_oth_1406_; lean_object* v_k_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v_kty_1390_ = lean_ctor_get(v_d_1389_, 0);
lean_inc(v_kty_1390_);
v_use_1391_ = lean_ctor_get(v_d_1389_, 1);
lean_inc(v_use_1391_);
v_key__ops_1392_ = lean_ctor_get(v_d_1389_, 2);
lean_inc(v_key__ops_1392_);
v_alg_1393_ = lean_ctor_get(v_d_1389_, 3);
lean_inc(v_alg_1393_);
v_ext_1394_ = lean_ctor_get(v_d_1389_, 4);
lean_inc(v_ext_1394_);
v_crv_1395_ = lean_ctor_get(v_d_1389_, 5);
lean_inc(v_crv_1395_);
v_x_1396_ = lean_ctor_get(v_d_1389_, 6);
lean_inc(v_x_1396_);
v_y_1397_ = lean_ctor_get(v_d_1389_, 7);
lean_inc(v_y_1397_);
v_d_1398_ = lean_ctor_get(v_d_1389_, 8);
lean_inc(v_d_1398_);
v_n_1399_ = lean_ctor_get(v_d_1389_, 9);
lean_inc(v_n_1399_);
v_e_1400_ = lean_ctor_get(v_d_1389_, 10);
lean_inc(v_e_1400_);
v_p_1401_ = lean_ctor_get(v_d_1389_, 11);
lean_inc(v_p_1401_);
v_q_1402_ = lean_ctor_get(v_d_1389_, 12);
lean_inc(v_q_1402_);
v_dp_1403_ = lean_ctor_get(v_d_1389_, 13);
lean_inc(v_dp_1403_);
v_dq_1404_ = lean_ctor_get(v_d_1389_, 14);
lean_inc(v_dq_1404_);
v_qi_1405_ = lean_ctor_get(v_d_1389_, 15);
lean_inc(v_qi_1405_);
v_oth_1406_ = lean_ctor_get(v_d_1389_, 16);
lean_inc(v_oth_1406_);
v_k_1407_ = lean_ctor_get(v_d_1389_, 17);
lean_inc(v_k_1407_);
lean_dec_ref(v_d_1389_);
v___x_1408_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref_n(v___f_1385_, 14);
v___x_1409_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_kty_1390_);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1408_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1412_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_use_1391_);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1411_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1415_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1386_, v_key__ops_1392_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1418_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_alg_1393_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1421_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1387_, v_ext_1394_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1424_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_crv_1395_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1427_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_x_1396_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1430_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_y_1397_);
v___x_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1433_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_d_1398_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1436_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_n_1399_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1439_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_e_1400_);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1442_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_p_1401_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1445_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_q_1402_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_dp_1403_);
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_dq_1404_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_qi_1405_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1457_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1388_, v_oth_1406_);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1460_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1385_, v_k_1407_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = lean_unsigned_to_nat(18u);
v___x_1463_ = lean_mk_empty_array_with_capacity(v___x_1462_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1410_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1413_);
v___x_1466_ = lean_array_push(v___x_1465_, v___x_1416_);
v___x_1467_ = lean_array_push(v___x_1466_, v___x_1419_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1422_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1425_);
v___x_1470_ = lean_array_push(v___x_1469_, v___x_1428_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1431_);
v___x_1472_ = lean_array_push(v___x_1471_, v___x_1434_);
v___x_1473_ = lean_array_push(v___x_1472_, v___x_1437_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1440_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1443_);
v___x_1476_ = lean_array_push(v___x_1475_, v___x_1446_);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1449_);
v___x_1478_ = lean_array_push(v___x_1477_, v___x_1452_);
v___x_1479_ = lean_array_push(v___x_1478_, v___x_1455_);
v___x_1480_ = lean_array_push(v___x_1479_, v___x_1458_);
v___x_1481_ = lean_array_push(v___x_1480_, v___x_1461_);
v___x_1482_ = l_Lasm_JS_Web_Support_fields(v___x_1481_);
lean_dec_ref(v___x_1481_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___f_1483_; lean_object* v___x_1484_; 
v___f_1483_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1484_ = l_Lasm_JS_instToJSArray___redArg(v___f_1483_);
return v___x_1484_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1486_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo));
v___x_1487_ = l_Lasm_JS_instToJSArray___redArg(v___x_1486_);
return v___x_1487_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___f_1489_; lean_object* v___x_1490_; lean_object* v___f_1491_; lean_object* v___f_1492_; 
v___x_1488_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___f_1489_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1490_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___f_1492_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0), 5, 4);
lean_closure_set(v___f_1492_, 0, v___f_1491_);
lean_closure_set(v___f_1492_, 1, v___x_1490_);
lean_closure_set(v___f_1492_, 2, v___f_1489_);
lean_closure_set(v___f_1492_, 3, v___x_1488_);
return v___f_1492_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSJsonWebKey(void){
_start:
{
lean_object* v___f_1493_; 
v___f_1493_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__3);
return v___f_1493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(lean_object* v___x_1494_, lean_object* v___x_1495_, lean_object* v___x_1496_, lean_object* v___x_1497_, lean_object* v_d_1498_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc_ref(v___x_1494_);
v___x_1500_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1499_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1496_);
lean_dec_ref(v___x_1495_);
lean_dec_ref(v___x_1494_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_a_1509_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1500_, 1);
v___x_1510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc_ref(v___x_1494_);
v___x_1511_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1510_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1496_);
lean_dec_ref(v___x_1495_);
lean_dec_ref(v___x_1494_);
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1511_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1511_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v_a_1520_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1521_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1522_ = l_Lasm_JS_readField___redArg(v___x_1495_, v_d_1498_, v___x_1521_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1496_);
lean_dec_ref(v___x_1494_);
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc_ref(v___x_1494_);
v___x_1533_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1532_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1496_);
lean_dec_ref(v___x_1494_);
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1544_ = l_Lasm_JS_readField___redArg(v___x_1496_, v_d_1498_, v___x_1543_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1544_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v_a_1553_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1544_, 1);
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc_ref(v___x_1494_);
v___x_1555_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1554_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1555_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1555_);
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
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_a_1564_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1565_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc_ref(v___x_1494_);
v___x_1566_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1565_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1566_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1566_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v_a_1575_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1566_, 1);
v___x_1576_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc_ref(v___x_1494_);
v___x_1577_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1576_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1577_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1577_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_a_1586_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1577_, 1);
v___x_1587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc_ref(v___x_1494_);
v___x_1588_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1588_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1588_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_a_1597_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1597_);
lean_dec_ref_known(v___x_1588_, 1);
v___x_1598_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc_ref(v___x_1494_);
v___x_1599_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1598_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1609_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc_ref(v___x_1494_);
v___x_1610_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1609_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_a_1619_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1610_, 1);
v___x_1620_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc_ref(v___x_1494_);
v___x_1621_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1620_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1621_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1621_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v_a_1630_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc_ref(v___x_1494_);
v___x_1632_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1631_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1632_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1632_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_a_1641_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1632_, 1);
v___x_1642_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc_ref(v___x_1494_);
v___x_1643_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1642_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_dec(v_a_1641_);
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_a_1652_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1643_, 1);
v___x_1653_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc_ref(v___x_1494_);
v___x_1654_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_a_1652_);
lean_dec(v_a_1641_);
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1654_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1654_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v_a_1663_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1664_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc_ref(v___x_1494_);
v___x_1665_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1664_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec(v_a_1663_);
lean_dec(v_a_1652_);
lean_dec(v_a_1641_);
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1497_);
lean_dec_ref(v___x_1494_);
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v_a_1674_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1665_, 1);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1676_ = l_Lasm_JS_readField___redArg(v___x_1497_, v_d_1498_, v___x_1675_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
lean_dec(v_a_1674_);
lean_dec(v_a_1663_);
lean_dec(v_a_1652_);
lean_dec(v_a_1641_);
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
lean_dec_ref(v___x_1494_);
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1676_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1676_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v_a_1685_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1686_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1687_ = l_Lasm_JS_readField___redArg(v___x_1494_, v_d_1498_, v___x_1686_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_dec(v_a_1685_);
lean_dec(v_a_1674_);
lean_dec(v_a_1663_);
lean_dec(v_a_1652_);
lean_dec(v_a_1641_);
lean_dec(v_a_1630_);
lean_dec(v_a_1619_);
lean_dec(v_a_1608_);
lean_dec(v_a_1597_);
lean_dec(v_a_1586_);
lean_dec(v_a_1575_);
lean_dec(v_a_1564_);
lean_dec(v_a_1553_);
lean_dec(v_a_1542_);
lean_dec(v_a_1531_);
lean_dec(v_a_1520_);
lean_dec(v_a_1509_);
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1687_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1687_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1704_; 
v_a_1696_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1698_ = v___x_1687_;
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1687_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1700_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_1700_, 0, v_a_1509_);
lean_ctor_set(v___x_1700_, 1, v_a_1520_);
lean_ctor_set(v___x_1700_, 2, v_a_1531_);
lean_ctor_set(v___x_1700_, 3, v_a_1542_);
lean_ctor_set(v___x_1700_, 4, v_a_1553_);
lean_ctor_set(v___x_1700_, 5, v_a_1564_);
lean_ctor_set(v___x_1700_, 6, v_a_1575_);
lean_ctor_set(v___x_1700_, 7, v_a_1586_);
lean_ctor_set(v___x_1700_, 8, v_a_1597_);
lean_ctor_set(v___x_1700_, 9, v_a_1608_);
lean_ctor_set(v___x_1700_, 10, v_a_1619_);
lean_ctor_set(v___x_1700_, 11, v_a_1630_);
lean_ctor_set(v___x_1700_, 12, v_a_1641_);
lean_ctor_set(v___x_1700_, 13, v_a_1652_);
lean_ctor_set(v___x_1700_, 14, v_a_1663_);
lean_ctor_set(v___x_1700_, 15, v_a_1674_);
lean_ctor_set(v___x_1700_, 16, v_a_1685_);
lean_ctor_set(v___x_1700_, 17, v_a_1696_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 0, v___x_1700_);
v___x_1702_ = v___x_1698_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed(lean_object* v___x_1705_, lean_object* v___x_1706_, lean_object* v___x_1707_, lean_object* v___x_1708_, lean_object* v_d_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0(v___x_1705_, v___x_1706_, v___x_1707_, v___x_1708_, v_d_1709_);
lean_dec(v_d_1709_);
return v_res_1710_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = l_Lasm_JS_instFromJSString;
v___x_1712_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1711_);
return v___x_1712_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1(void){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__0);
v___x_1714_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1713_);
return v___x_1714_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = l_Lasm_JS_instFromJSBool;
v___x_1716_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1715_);
return v___x_1716_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo;
v___x_1718_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1717_);
return v___x_1718_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4(void){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__3);
v___x_1720_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1719_);
return v___x_1720_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___f_1725_; 
v___x_1721_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__4);
v___x_1722_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__2);
v___x_1723_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__1);
v___x_1724_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0, &l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0_once, _init_l_Lasm_JS_Web_instFromJSRsaOtherPrimesInfo___closed__0);
v___f_1725_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSJsonWebKey___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1725_, 0, v___x_1724_);
lean_closure_set(v___f_1725_, 1, v___x_1723_);
lean_closure_set(v___f_1725_, 2, v___x_1722_);
lean_closure_set(v___f_1725_, 3, v___x_1721_);
return v___f_1725_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7(void){
_start:
{
uint8_t v___x_1727_; lean_object* v___x_1728_; lean_object* v___f_1729_; lean_object* v___x_1730_; 
v___x_1727_ = 0;
v___x_1728_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___f_1729_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__5);
v___x_1730_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1730_, 0, v___f_1729_);
lean_ctor_set(v___x_1730_, 1, v___x_1728_);
lean_ctor_set_uint8(v___x_1730_, sizeof(void*)*2, v___x_1727_);
return v___x_1730_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSJsonWebKey(void){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7, &l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7_once, _init_l_Lasm_JS_Web_instFromJSJsonWebKey___closed__7);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___impl(lean_object* v_x_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_obj_tag_nat(v_x_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___impl___boxed(lean_object* v_x_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorIdx___impl(v_x_1734_);
lean_dec_ref(v_x_1734_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1736_, lean_object* v_k_1737_){
_start:
{
lean_object* v_value_1738_; lean_object* v___x_1739_; 
v_value_1738_ = lean_ctor_get(v_t_1736_, 0);
lean_inc_ref(v_value_1738_);
lean_dec_ref(v_t_1736_);
v___x_1739_ = lean_apply_1(v_k_1737_, v_value_1738_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(lean_object* v_motive_1740_, lean_object* v_ctorIdx_1741_, lean_object* v_t_1742_, lean_object* v_h_1743_, lean_object* v_k_1744_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1742_, v_k_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1746_, lean_object* v_ctorIdx_1747_, lean_object* v_t_1748_, lean_object* v_h_1749_, lean_object* v_k_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim(v_motive_1746_, v_ctorIdx_1747_, v_t_1748_, v_h_1749_, v_k_1750_);
lean_dec(v_ctorIdx_1747_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim___redArg(lean_object* v_t_1752_, lean_object* v_bufferSource_1753_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1752_, v_bufferSource_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_bufferSource_elim(lean_object* v_motive_1755_, lean_object* v_t_1756_, lean_object* v_h_1757_, lean_object* v_bufferSource_1758_){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1756_, v_bufferSource_1758_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1760_, lean_object* v_jsonWebKey_1761_){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1760_, v_jsonWebKey_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1763_, lean_object* v_t_1764_, lean_object* v_h_1765_, lean_object* v_jsonWebKey_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l_Lasm_JS_Web_BufferSourceOrJsonWebKey_ctorElim___redArg(v_t_1764_, v_jsonWebKey_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrJsonWebKey___lam__0(lean_object* v_x_1768_){
_start:
{
if (lean_obj_tag(v_x_1768_) == 0)
{
lean_object* v_value_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
v_value_1769_ = lean_ctor_get(v_x_1768_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v_x_1768_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v_x_1768_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_value_1769_);
lean_dec(v_x_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set_tag(v___x_1771_, 6);
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_value_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
else
{
lean_object* v_value_1777_; lean_object* v_kty_1778_; lean_object* v_use_1779_; lean_object* v_key__ops_1780_; lean_object* v_alg_1781_; lean_object* v_ext_1782_; lean_object* v_crv_1783_; lean_object* v_x_1784_; lean_object* v_y_1785_; lean_object* v_d_1786_; lean_object* v_n_1787_; lean_object* v_e_1788_; lean_object* v_p_1789_; lean_object* v_q_1790_; lean_object* v_dp_1791_; lean_object* v_dq_1792_; lean_object* v_qi_1793_; lean_object* v_oth_1794_; lean_object* v_k_1795_; lean_object* v___f_1796_; lean_object* v___x_1797_; lean_object* v___f_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_value_1777_ = lean_ctor_get(v_x_1768_, 0);
lean_inc_ref(v_value_1777_);
lean_dec_ref_known(v_x_1768_, 1);
v_kty_1778_ = lean_ctor_get(v_value_1777_, 0);
lean_inc(v_kty_1778_);
v_use_1779_ = lean_ctor_get(v_value_1777_, 1);
lean_inc(v_use_1779_);
v_key__ops_1780_ = lean_ctor_get(v_value_1777_, 2);
lean_inc(v_key__ops_1780_);
v_alg_1781_ = lean_ctor_get(v_value_1777_, 3);
lean_inc(v_alg_1781_);
v_ext_1782_ = lean_ctor_get(v_value_1777_, 4);
lean_inc(v_ext_1782_);
v_crv_1783_ = lean_ctor_get(v_value_1777_, 5);
lean_inc(v_crv_1783_);
v_x_1784_ = lean_ctor_get(v_value_1777_, 6);
lean_inc(v_x_1784_);
v_y_1785_ = lean_ctor_get(v_value_1777_, 7);
lean_inc(v_y_1785_);
v_d_1786_ = lean_ctor_get(v_value_1777_, 8);
lean_inc(v_d_1786_);
v_n_1787_ = lean_ctor_get(v_value_1777_, 9);
lean_inc(v_n_1787_);
v_e_1788_ = lean_ctor_get(v_value_1777_, 10);
lean_inc(v_e_1788_);
v_p_1789_ = lean_ctor_get(v_value_1777_, 11);
lean_inc(v_p_1789_);
v_q_1790_ = lean_ctor_get(v_value_1777_, 12);
lean_inc(v_q_1790_);
v_dp_1791_ = lean_ctor_get(v_value_1777_, 13);
lean_inc(v_dp_1791_);
v_dq_1792_ = lean_ctor_get(v_value_1777_, 14);
lean_inc(v_dq_1792_);
v_qi_1793_ = lean_ctor_get(v_value_1777_, 15);
lean_inc(v_qi_1793_);
v_oth_1794_ = lean_ctor_get(v_value_1777_, 16);
lean_inc(v_oth_1794_);
v_k_1795_ = lean_ctor_get(v_value_1777_, 17);
lean_inc(v_k_1795_);
lean_dec_ref(v_value_1777_);
v___f_1796_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___closed__0));
v___x_1797_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__0, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__0_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__0);
v___f_1798_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___closed__1));
v___x_1799_ = lean_obj_once(&l_Lasm_JS_Web_instToJSJsonWebKey___closed__2, &l_Lasm_JS_Web_instToJSJsonWebKey___closed__2_once, _init_l_Lasm_JS_Web_instToJSJsonWebKey___closed__2);
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_1801_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_kty_1778_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1800_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_1804_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_use_1779_);
v___x_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1803_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_1807_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1797_, v_key__ops_1780_);
v___x_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1806_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_1810_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_alg_1781_);
v___x_1811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1809_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_1813_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1798_, v_ext_1782_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_1816_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_crv_1783_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_1819_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_x_1784_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_1822_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_y_1785_);
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_1825_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_d_1786_);
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1824_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_1828_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_n_1787_);
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1827_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_1831_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_e_1788_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1830_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_1834_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_p_1789_);
v___x_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1833_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_1837_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_q_1790_);
v___x_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_1840_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_dp_1791_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_1843_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_dq_1792_);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_1846_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_qi_1793_);
v___x_1847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_1849_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1799_, v_oth_1794_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_1852_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1796_, v_k_1795_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1851_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = lean_unsigned_to_nat(18u);
v___x_1855_ = lean_mk_empty_array_with_capacity(v___x_1854_);
v___x_1856_ = lean_array_push(v___x_1855_, v___x_1802_);
v___x_1857_ = lean_array_push(v___x_1856_, v___x_1805_);
v___x_1858_ = lean_array_push(v___x_1857_, v___x_1808_);
v___x_1859_ = lean_array_push(v___x_1858_, v___x_1811_);
v___x_1860_ = lean_array_push(v___x_1859_, v___x_1814_);
v___x_1861_ = lean_array_push(v___x_1860_, v___x_1817_);
v___x_1862_ = lean_array_push(v___x_1861_, v___x_1820_);
v___x_1863_ = lean_array_push(v___x_1862_, v___x_1823_);
v___x_1864_ = lean_array_push(v___x_1863_, v___x_1826_);
v___x_1865_ = lean_array_push(v___x_1864_, v___x_1829_);
v___x_1866_ = lean_array_push(v___x_1865_, v___x_1832_);
v___x_1867_ = lean_array_push(v___x_1866_, v___x_1835_);
v___x_1868_ = lean_array_push(v___x_1867_, v___x_1838_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1841_);
v___x_1870_ = lean_array_push(v___x_1869_, v___x_1844_);
v___x_1871_ = lean_array_push(v___x_1870_, v___x_1847_);
v___x_1872_ = lean_array_push(v___x_1871_, v___x_1850_);
v___x_1873_ = lean_array_push(v___x_1872_, v___x_1853_);
v___x_1874_ = l_Lasm_JS_Web_Support_fields(v___x_1873_);
lean_dec_ref(v___x_1873_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrJsonWebKey___lam__0(lean_object* v_value_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1878_, 0, v_value_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJsonWebKeyBufferSourceOrJsonWebKey___lam__0(lean_object* v_value_1881_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_value_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___impl(lean_object* v_x_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = lean_obj_tag_nat(v_x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___impl___boxed(lean_object* v_x_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorIdx___impl(v_x_1887_);
lean_dec_ref(v_x_1887_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(lean_object* v_t_1889_, lean_object* v_k_1890_){
_start:
{
lean_object* v_value_1891_; lean_object* v___x_1892_; 
v_value_1891_ = lean_ctor_get(v_t_1889_, 0);
lean_inc_ref(v_value_1891_);
lean_dec_ref(v_t_1889_);
v___x_1892_ = lean_apply_1(v_k_1890_, v_value_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(lean_object* v_motive_1893_, lean_object* v_ctorIdx_1894_, lean_object* v_t_1895_, lean_object* v_h_1896_, lean_object* v_k_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1895_, v_k_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___boxed(lean_object* v_motive_1899_, lean_object* v_ctorIdx_1900_, lean_object* v_t_1901_, lean_object* v_h_1902_, lean_object* v_k_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim(v_motive_1899_, v_ctorIdx_1900_, v_t_1901_, v_h_1902_, v_k_1903_);
lean_dec(v_ctorIdx_1900_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim___redArg(lean_object* v_t_1905_, lean_object* v_arrayBuffer_1906_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1905_, v_arrayBuffer_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_arrayBuffer_elim(lean_object* v_motive_1908_, lean_object* v_t_1909_, lean_object* v_h_1910_, lean_object* v_arrayBuffer_1911_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1909_, v_arrayBuffer_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim___redArg(lean_object* v_t_1913_, lean_object* v_jsonWebKey_1914_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1913_, v_jsonWebKey_1914_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_jsonWebKey_elim(lean_object* v_motive_1916_, lean_object* v_t_1917_, lean_object* v_h_1918_, lean_object* v_jsonWebKey_1919_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_ctorElim___redArg(v_t_1917_, v_jsonWebKey_1919_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(lean_object* v_d_1930_, lean_object* v_key_1931_){
_start:
{
if (lean_obj_tag(v_d_1930_) == 8)
{
lean_object* v___x_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1957_; 
v___x_1934_ = l_Lasm_JS_Data_field(v_d_1930_, v_key_1931_);
v_isSharedCheck_1957_ = !lean_is_exclusive(v_d_1930_);
if (v_isSharedCheck_1957_ == 0)
{
lean_object* v_unused_1958_; 
v_unused_1958_ = lean_ctor_get(v_d_1930_, 0);
lean_dec(v_unused_1958_);
v___x_1936_ = v_d_1930_;
v_isShared_1937_ = v_isSharedCheck_1957_;
goto v_resetjp_1935_;
}
else
{
lean_dec(v_d_1930_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1957_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
switch(lean_obj_tag(v___x_1934_))
{
case 1:
{
lean_del_object(v___x_1936_);
goto v___jp_1932_;
}
case 0:
{
lean_del_object(v___x_1936_);
goto v___jp_1932_;
}
default: 
{
if (lean_obj_tag(v___x_1934_) == 2)
{
uint8_t v_b_1938_; lean_object* v___x_1939_; lean_object* v___x_1941_; 
v_b_1938_ = lean_ctor_get_uint8(v___x_1934_, 0);
lean_dec_ref_known(v___x_1934_, 0);
v___x_1939_ = lean_box(v_b_1938_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set_tag(v___x_1936_, 1);
lean_ctor_set(v___x_1936_, 0, v___x_1939_);
v___x_1941_ = v___x_1936_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
return v___x_1942_;
}
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_1945_ = lean_string_append(v___x_1944_, v_key_1931_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_1947_ = lean_string_append(v___x_1945_, v___x_1946_);
v___x_1948_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__3));
v___x_1949_ = lean_string_append(v___x_1947_, v___x_1948_);
v___x_1950_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_1951_ = lean_string_append(v___x_1949_, v___x_1950_);
v___x_1952_ = l_Lasm_JS_Data_describe(v___x_1934_);
v___x_1953_ = lean_string_append(v___x_1951_, v___x_1952_);
lean_dec_ref(v___x_1952_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set_tag(v___x_1936_, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1953_);
v___x_1955_ = v___x_1936_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
}
else
{
lean_object* v___x_1959_; 
lean_dec(v_d_1930_);
v___x_1959_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__6));
return v___x_1959_;
}
v___jp_1932_:
{
lean_object* v___x_1933_; 
v___x_1933_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__0));
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___boxed(lean_object* v_d_1960_, lean_object* v_key_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_1960_, v_key_1961_);
lean_dec_ref(v_key_1961_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(size_t v_sz_1965_, size_t v_i_1966_, lean_object* v_bs_1967_){
_start:
{
uint8_t v___x_1968_; 
v___x_1968_ = lean_usize_dec_lt(v_i_1966_, v_sz_1965_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1969_, 0, v_bs_1967_);
return v___x_1969_;
}
else
{
lean_object* v_v_1970_; 
v_v_1970_ = lean_array_uget_borrowed(v_bs_1967_, v_i_1966_);
if (lean_obj_tag(v_v_1970_) == 4)
{
lean_object* v_s_1971_; lean_object* v___x_1972_; lean_object* v_bs_x27_1973_; size_t v___x_1974_; size_t v___x_1975_; lean_object* v___x_1976_; 
v_s_1971_ = lean_ctor_get(v_v_1970_, 0);
lean_inc_ref(v_s_1971_);
v___x_1972_ = lean_unsigned_to_nat(0u);
v_bs_x27_1973_ = lean_array_uset(v_bs_1967_, v_i_1966_, v___x_1972_);
v___x_1974_ = ((size_t)1ULL);
v___x_1975_ = lean_usize_add(v_i_1966_, v___x_1974_);
v___x_1976_ = lean_array_uset(v_bs_x27_1973_, v_i_1966_, v_s_1971_);
v_i_1966_ = v___x_1975_;
v_bs_1967_ = v___x_1976_;
goto _start;
}
else
{
lean_object* v___x_1978_; 
lean_dec_ref(v_bs_1967_);
v___x_1978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___closed__0));
return v___x_1978_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_1979_, lean_object* v_i_1980_, lean_object* v_bs_1981_){
_start:
{
size_t v_sz_boxed_1982_; size_t v_i_boxed_1983_; lean_object* v_res_1984_; 
v_sz_boxed_1982_ = lean_unbox_usize(v_sz_1979_);
lean_dec(v_sz_1979_);
v_i_boxed_1983_ = lean_unbox_usize(v_i_1980_);
lean_dec(v_i_1980_);
v_res_1984_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_boxed_1982_, v_i_boxed_1983_, v_bs_1981_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(lean_object* v_d_1994_, lean_object* v_key_1995_){
_start:
{
if (lean_obj_tag(v_d_1994_) == 8)
{
lean_object* v___x_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2050_; 
v___x_1998_ = l_Lasm_JS_Data_field(v_d_1994_, v_key_1995_);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_d_1994_);
if (v_isSharedCheck_2050_ == 0)
{
lean_object* v_unused_2051_; 
v_unused_2051_ = lean_ctor_get(v_d_1994_, 0);
lean_dec(v_unused_2051_);
v___x_2000_ = v_d_1994_;
v_isShared_2001_ = v_isSharedCheck_2050_;
goto v_resetjp_1999_;
}
else
{
lean_dec(v_d_1994_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2050_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v_a_2003_; 
switch(lean_obj_tag(v___x_1998_))
{
case 1:
{
lean_del_object(v___x_2000_);
goto v___jp_1996_;
}
case 0:
{
lean_del_object(v___x_2000_);
goto v___jp_1996_;
}
default: 
{
if (lean_obj_tag(v___x_1998_) == 7)
{
lean_object* v_items_2028_; size_t v_sz_2029_; size_t v___x_2030_; lean_object* v___x_2031_; 
v_items_2028_ = lean_ctor_get(v___x_1998_, 0);
v_sz_2029_ = lean_array_size(v_items_2028_);
v___x_2030_ = ((size_t)0ULL);
lean_inc_ref(v_items_2028_);
v___x_2031_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1_spec__2(v_sz_2029_, v___x_2030_, v_items_2028_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2032_);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2033_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__4));
v___x_2034_ = lean_string_utf8_byte_size(v_a_2032_);
v___x_2035_ = lean_unsigned_to_nat(0u);
v___x_2036_ = lean_nat_dec_eq(v___x_2034_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2038_ = lean_string_append(v___x_2037_, v_a_2032_);
lean_dec(v_a_2032_);
v___x_2039_ = lean_string_append(v___x_2033_, v___x_2038_);
lean_dec_ref(v___x_2038_);
v_a_2003_ = v___x_2039_;
goto v___jp_2002_;
}
else
{
lean_dec(v_a_2032_);
v_a_2003_ = v___x_2033_;
goto v___jp_2002_;
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2048_; 
lean_dec_ref_known(v___x_1998_, 1);
lean_del_object(v___x_2000_);
v_a_2040_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2042_ = v___x_2031_;
v_isShared_2043_ = v_isSharedCheck_2048_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2031_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2048_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2044_; lean_object* v___x_2046_; 
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v_a_2040_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2044_);
v___x_2046_ = v___x_2042_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
else
{
lean_object* v___x_2049_; 
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2003_ = v___x_2049_;
goto v___jp_2002_;
}
}
}
v___jp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2004_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2005_ = lean_string_append(v___x_2004_, v_key_1995_);
v___x_2006_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2007_ = lean_string_append(v___x_2005_, v___x_2006_);
v___x_2008_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__1));
v___x_2009_ = lean_string_append(v___x_2007_, v___x_2008_);
v___x_2010_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2011_ = lean_string_append(v___x_2009_, v___x_2010_);
v___x_2012_ = l_Lasm_JS_Data_describe(v___x_1998_);
v___x_2013_ = lean_string_append(v___x_2011_, v___x_2012_);
lean_dec_ref(v___x_2012_);
v___x_2014_ = lean_string_utf8_byte_size(v_a_2003_);
v___x_2015_ = lean_unsigned_to_nat(0u);
v___x_2016_ = lean_nat_dec_eq(v___x_2014_, v___x_2015_);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2017_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2018_ = lean_string_append(v___x_2017_, v_a_2003_);
lean_dec_ref(v_a_2003_);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2020_ = lean_string_append(v___x_2018_, v___x_2019_);
v___x_2021_ = lean_string_append(v___x_2013_, v___x_2020_);
lean_dec_ref(v___x_2020_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 0);
lean_ctor_set(v___x_2000_, 0, v___x_2021_);
v___x_2023_ = v___x_2000_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
else
{
lean_object* v___x_2026_; 
lean_dec_ref(v_a_2003_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 0);
lean_ctor_set(v___x_2000_, 0, v___x_2013_);
v___x_2026_ = v___x_2000_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2013_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
else
{
lean_object* v___x_2052_; 
lean_dec(v_d_1994_);
v___x_2052_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__6));
return v___x_2052_;
}
v___jp_1996_:
{
lean_object* v___x_1997_; 
v___x_1997_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__0));
return v___x_1997_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___boxed(lean_object* v_d_2053_, lean_object* v_key_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2053_, v_key_2054_);
lean_dec_ref(v_key_2054_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(lean_object* v_d_2061_, lean_object* v_key_2062_){
_start:
{
if (lean_obj_tag(v_d_2061_) == 8)
{
lean_object* v___x_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2087_; 
v___x_2065_ = l_Lasm_JS_Data_field(v_d_2061_, v_key_2062_);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_d_2061_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v_d_2061_, 0);
lean_dec(v_unused_2088_);
v___x_2067_ = v_d_2061_;
v_isShared_2068_ = v_isSharedCheck_2087_;
goto v_resetjp_2066_;
}
else
{
lean_dec(v_d_2061_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2087_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
switch(lean_obj_tag(v___x_2065_))
{
case 1:
{
lean_del_object(v___x_2067_);
goto v___jp_2063_;
}
case 0:
{
lean_del_object(v___x_2067_);
goto v___jp_2063_;
}
default: 
{
if (lean_obj_tag(v___x_2065_) == 4)
{
lean_object* v_s_2069_; lean_object* v___x_2071_; 
v_s_2069_ = lean_ctor_get(v___x_2065_, 0);
lean_inc_ref(v_s_2069_);
lean_dec_ref_known(v___x_2065_, 1);
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 1);
lean_ctor_set(v___x_2067_, 0, v_s_2069_);
v___x_2071_ = v___x_2067_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_s_2069_);
v___x_2071_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
lean_object* v___x_2072_; 
v___x_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2074_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2075_ = lean_string_append(v___x_2074_, v_key_2062_);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__1));
v___x_2079_ = lean_string_append(v___x_2077_, v___x_2078_);
v___x_2080_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2081_ = lean_string_append(v___x_2079_, v___x_2080_);
v___x_2082_ = l_Lasm_JS_Data_describe(v___x_2065_);
v___x_2083_ = lean_string_append(v___x_2081_, v___x_2082_);
lean_dec_ref(v___x_2082_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2083_);
v___x_2085_ = v___x_2067_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2083_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
}
else
{
lean_object* v___x_2089_; 
lean_dec(v_d_2061_);
v___x_2089_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__2));
return v___x_2089_;
}
v___jp_2063_:
{
lean_object* v___x_2064_; 
v___x_2064_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___closed__0));
return v___x_2064_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0___boxed(lean_object* v_d_2090_, lean_object* v_key_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2090_, v_key_2091_);
lean_dec_ref(v_key_2091_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(size_t v_sz_2093_, size_t v_i_2094_, lean_object* v_bs_2095_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_lt(v_i_2094_, v_sz_2093_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_bs_2095_);
return v___x_2097_;
}
else
{
lean_object* v_v_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v_v_2098_ = lean_array_uget_borrowed(v_bs_2095_, v_i_2094_);
v___x_2099_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
lean_inc(v_v_2098_);
v___x_2100_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2098_, v___x_2099_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec_ref(v_bs_2095_);
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2100_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2100_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v_a_2109_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2110_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_v_2098_);
v___x_2111_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2098_, v___x_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
lean_dec(v_a_2109_);
lean_dec_ref(v_bs_2095_);
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2114_ = v___x_2111_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_dec(v___x_2111_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2112_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v_a_2120_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2120_);
lean_dec_ref_known(v___x_2111_, 1);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
lean_inc(v_v_2098_);
v___x_2122_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_v_2098_, v___x_2121_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
lean_dec(v_a_2120_);
lean_dec(v_a_2109_);
lean_dec_ref(v_bs_2095_);
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
lean_object* v_a_2131_; lean_object* v___x_2132_; lean_object* v_bs_x27_2133_; lean_object* v___x_2134_; size_t v___x_2135_; size_t v___x_2136_; lean_object* v___x_2137_; 
v_a_2131_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2122_, 1);
v___x_2132_ = lean_unsigned_to_nat(0u);
v_bs_x27_2133_ = lean_array_uset(v_bs_2095_, v_i_2094_, v___x_2132_);
v___x_2134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2134_, 0, v_a_2109_);
lean_ctor_set(v___x_2134_, 1, v_a_2120_);
lean_ctor_set(v___x_2134_, 2, v_a_2131_);
v___x_2135_ = ((size_t)1ULL);
v___x_2136_ = lean_usize_add(v_i_2094_, v___x_2135_);
v___x_2137_ = lean_array_uset(v_bs_x27_2133_, v_i_2094_, v___x_2134_);
v_i_2094_ = v___x_2136_;
v_bs_2095_ = v___x_2137_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5___boxed(lean_object* v_sz_2139_, lean_object* v_i_2140_, lean_object* v_bs_2141_){
_start:
{
size_t v_sz_boxed_2142_; size_t v_i_boxed_2143_; lean_object* v_res_2144_; 
v_sz_boxed_2142_ = lean_unbox_usize(v_sz_2139_);
lean_dec(v_sz_2139_);
v_i_boxed_2143_ = lean_unbox_usize(v_i_2140_);
lean_dec(v_i_2140_);
v_res_2144_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_boxed_2142_, v_i_boxed_2143_, v_bs_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(lean_object* v_d_2151_, lean_object* v_key_2152_){
_start:
{
if (lean_obj_tag(v_d_2151_) == 8)
{
lean_object* v___x_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2207_; 
v___x_2155_ = l_Lasm_JS_Data_field(v_d_2151_, v_key_2152_);
v_isSharedCheck_2207_ = !lean_is_exclusive(v_d_2151_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v_d_2151_, 0);
lean_dec(v_unused_2208_);
v___x_2157_ = v_d_2151_;
v_isShared_2158_ = v_isSharedCheck_2207_;
goto v_resetjp_2156_;
}
else
{
lean_dec(v_d_2151_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2207_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v_a_2160_; 
switch(lean_obj_tag(v___x_2155_))
{
case 1:
{
lean_del_object(v___x_2157_);
goto v___jp_2153_;
}
case 0:
{
lean_del_object(v___x_2157_);
goto v___jp_2153_;
}
default: 
{
if (lean_obj_tag(v___x_2155_) == 7)
{
lean_object* v_items_2185_; size_t v_sz_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v_items_2185_ = lean_ctor_get(v___x_2155_, 0);
v_sz_2186_ = lean_array_size(v_items_2185_);
v___x_2187_ = ((size_t)0ULL);
lean_inc_ref(v_items_2185_);
v___x_2188_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3_spec__5(v_sz_2186_, v___x_2187_, v_items_2185_);
if (lean_obj_tag(v___x_2188_) == 0)
{
lean_object* v_a_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; 
v_a_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2189_);
lean_dec_ref_known(v___x_2188_, 1);
v___x_2190_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__2));
v___x_2191_ = lean_string_utf8_byte_size(v_a_2189_);
v___x_2192_ = lean_unsigned_to_nat(0u);
v___x_2193_ = lean_nat_dec_eq(v___x_2191_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2194_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__5));
v___x_2195_ = lean_string_append(v___x_2194_, v_a_2189_);
lean_dec(v_a_2189_);
v___x_2196_ = lean_string_append(v___x_2190_, v___x_2195_);
lean_dec_ref(v___x_2195_);
v_a_2160_ = v___x_2196_;
goto v___jp_2159_;
}
else
{
lean_dec(v_a_2189_);
v_a_2160_ = v___x_2190_;
goto v___jp_2159_;
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2205_; 
lean_dec_ref_known(v___x_2155_, 1);
lean_del_object(v___x_2157_);
v_a_2197_ = lean_ctor_get(v___x_2188_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2199_ = v___x_2188_;
v_isShared_2200_ = v_isSharedCheck_2205_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2188_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2205_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
v___x_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2201_, 0, v_a_2197_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v___x_2201_);
v___x_2203_ = v___x_2199_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v___x_2206_; 
v___x_2206_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_2160_ = v___x_2206_;
goto v___jp_2159_;
}
}
}
v___jp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; uint8_t v___x_2173_; 
v___x_2161_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_2162_ = lean_string_append(v___x_2161_, v_key_2152_);
v___x_2163_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_2164_ = lean_string_append(v___x_2162_, v___x_2163_);
v___x_2165_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__1));
v___x_2166_ = lean_string_append(v___x_2164_, v___x_2165_);
v___x_2167_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_2168_ = lean_string_append(v___x_2166_, v___x_2167_);
v___x_2169_ = l_Lasm_JS_Data_describe(v___x_2155_);
v___x_2170_ = lean_string_append(v___x_2168_, v___x_2169_);
lean_dec_ref(v___x_2169_);
v___x_2171_ = lean_string_utf8_byte_size(v_a_2160_);
v___x_2172_ = lean_unsigned_to_nat(0u);
v___x_2173_ = lean_nat_dec_eq(v___x_2171_, v___x_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2180_; 
v___x_2174_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2175_ = lean_string_append(v___x_2174_, v_a_2160_);
lean_dec_ref(v_a_2160_);
v___x_2176_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2177_ = lean_string_append(v___x_2175_, v___x_2176_);
v___x_2178_ = lean_string_append(v___x_2170_, v___x_2177_);
lean_dec_ref(v___x_2177_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set_tag(v___x_2157_, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2178_);
v___x_2180_ = v___x_2157_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
else
{
lean_object* v___x_2183_; 
lean_dec_ref(v_a_2160_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set_tag(v___x_2157_, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2170_);
v___x_2183_ = v___x_2157_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2170_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
else
{
lean_object* v___x_2209_; 
lean_dec(v_d_2151_);
v___x_2209_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__3));
return v___x_2209_;
}
v___jp_2153_:
{
lean_object* v___x_2154_; 
v___x_2154_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___closed__0));
return v___x_2154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3___boxed(lean_object* v_d_2210_, lean_object* v_key_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2210_, v_key_2211_);
lean_dec_ref(v_key_2211_);
return v_res_2212_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6(void){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__5));
v___x_2220_ = lean_unsigned_to_nat(46u);
v___x_2221_ = lean_unsigned_to_nat(193u);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__4));
v___x_2223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__3));
v___x_2224_ = l_mkPanicMessageWithDecl(v___x_2223_, v___x_2222_, v___x_2221_, v___x_2220_, v___x_2219_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(lean_object* v_context_2226_, lean_object* v_d_2227_){
_start:
{
lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2236_; lean_object* v_received_2237_; lean_object* v___y_2256_; lean_object* v_a_2259_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
lean_inc(v_d_2227_);
v___x_2284_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2283_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
v_a_2259_ = v_a_2285_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v_a_2286_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2284_, 1);
v___x_2287_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
lean_inc(v_d_2227_);
v___x_2288_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2287_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; 
lean_dec(v_a_2286_);
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2288_, 1);
v_a_2259_ = v_a_2289_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_a_2290_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2288_, 1);
v___x_2291_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
lean_inc(v_d_2227_);
v___x_2292_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1(v_d_2227_, v___x_2291_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; 
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v_a_2259_ = v_a_2293_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v_a_2294_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2295_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
lean_inc(v_d_2227_);
v___x_2296_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2295_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; 
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2297_);
lean_dec_ref_known(v___x_2296_, 1);
v_a_2259_ = v_a_2297_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v_a_2298_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2298_);
lean_dec_ref_known(v___x_2296_, 1);
v___x_2299_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
lean_inc(v_d_2227_);
v___x_2300_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2(v_d_2227_, v___x_2299_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; 
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v_a_2259_ = v_a_2301_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v_a_2302_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2302_);
lean_dec_ref_known(v___x_2300_, 1);
v___x_2303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
lean_inc(v_d_2227_);
v___x_2304_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2303_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v_a_2305_; 
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_a_2305_);
lean_dec_ref_known(v___x_2304_, 1);
v_a_2259_ = v_a_2305_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v_a_2306_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2304_, 1);
v___x_2307_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
lean_inc(v_d_2227_);
v___x_2308_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2307_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; 
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v_a_2259_ = v_a_2309_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_a_2310_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2311_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
lean_inc(v_d_2227_);
v___x_2312_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; 
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v_a_2259_ = v_a_2313_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v_a_2314_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
lean_inc(v_d_2227_);
v___x_2316_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2315_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; 
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2316_, 1);
v_a_2259_ = v_a_2317_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v_a_2318_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2318_);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
lean_inc(v_d_2227_);
v___x_2320_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2319_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; 
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v_a_2259_ = v_a_2321_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_a_2322_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2320_, 1);
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
lean_inc(v_d_2227_);
v___x_2324_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2323_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; 
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v_a_2259_ = v_a_2325_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v_a_2326_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
lean_inc(v_d_2227_);
v___x_2328_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2327_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; 
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v_a_2259_ = v_a_2329_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_a_2330_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2330_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2331_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
lean_inc(v_d_2227_);
v___x_2332_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2331_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; 
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v_a_2259_ = v_a_2333_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v_a_2334_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2332_, 1);
v___x_2335_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
lean_inc(v_d_2227_);
v___x_2336_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2335_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; 
lean_dec(v_a_2334_);
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_a_2259_ = v_a_2337_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_a_2338_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2338_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
lean_inc(v_d_2227_);
v___x_2340_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2339_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; 
lean_dec(v_a_2338_);
lean_dec(v_a_2334_);
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v_a_2259_ = v_a_2341_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2343_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
lean_inc(v_d_2227_);
v___x_2344_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2343_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; 
lean_dec(v_a_2342_);
lean_dec(v_a_2338_);
lean_dec(v_a_2334_);
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v_a_2259_ = v_a_2345_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v_a_2346_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2344_, 1);
v___x_2347_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
lean_inc(v_d_2227_);
v___x_2348_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__3(v_d_2227_, v___x_2347_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; 
lean_dec(v_a_2346_);
lean_dec(v_a_2342_);
lean_dec(v_a_2338_);
lean_dec(v_a_2334_);
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref_known(v___x_2348_, 1);
v_a_2259_ = v_a_2349_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v_a_2350_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v___x_2348_, 1);
v___x_2351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
lean_inc(v_d_2227_);
v___x_2352_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__0(v_d_2227_, v___x_2351_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; 
lean_dec(v_a_2350_);
lean_dec(v_a_2346_);
lean_dec(v_a_2342_);
lean_dec(v_a_2338_);
lean_dec(v_a_2334_);
lean_dec(v_a_2330_);
lean_dec(v_a_2326_);
lean_dec(v_a_2322_);
lean_dec(v_a_2318_);
lean_dec(v_a_2314_);
lean_dec(v_a_2310_);
lean_dec(v_a_2306_);
lean_dec(v_a_2302_);
lean_dec(v_a_2298_);
lean_dec(v_a_2294_);
lean_dec(v_a_2290_);
lean_dec(v_a_2286_);
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v_a_2259_ = v_a_2353_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2362_; 
lean_dec(v_d_2227_);
v_a_2354_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2356_ = v___x_2352_;
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2352_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
v___x_2358_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2286_);
lean_ctor_set(v___x_2358_, 1, v_a_2290_);
lean_ctor_set(v___x_2358_, 2, v_a_2294_);
lean_ctor_set(v___x_2358_, 3, v_a_2298_);
lean_ctor_set(v___x_2358_, 4, v_a_2302_);
lean_ctor_set(v___x_2358_, 5, v_a_2306_);
lean_ctor_set(v___x_2358_, 6, v_a_2310_);
lean_ctor_set(v___x_2358_, 7, v_a_2314_);
lean_ctor_set(v___x_2358_, 8, v_a_2318_);
lean_ctor_set(v___x_2358_, 9, v_a_2322_);
lean_ctor_set(v___x_2358_, 10, v_a_2326_);
lean_ctor_set(v___x_2358_, 11, v_a_2330_);
lean_ctor_set(v___x_2358_, 12, v_a_2334_);
lean_ctor_set(v___x_2358_, 13, v_a_2338_);
lean_ctor_set(v___x_2358_, 14, v_a_2342_);
lean_ctor_set(v___x_2358_, 15, v_a_2346_);
lean_ctor_set(v___x_2358_, 16, v_a_2350_);
lean_ctor_set(v___x_2358_, 17, v_a_2354_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2358_);
v___x_2360_ = v___x_2356_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
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
v___jp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2232_ = lean_string_append(v___y_2230_, v___y_2231_);
lean_dec_ref(v___y_2231_);
v___x_2233_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
v___x_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
return v___x_2234_;
}
v___jp_2235_:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_2239_ = lean_string_append(v___x_2238_, v_context_2226_);
v___x_2240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_2241_ = lean_string_append(v___x_2239_, v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJsonWebKey___closed__6));
v___x_2243_ = lean_string_append(v___x_2241_, v___x_2242_);
v___x_2244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_2245_ = lean_string_append(v___x_2243_, v___x_2244_);
v___x_2246_ = lean_string_append(v___x_2245_, v_received_2237_);
lean_dec_ref(v_received_2237_);
v___x_2247_ = lean_string_utf8_byte_size(v___y_2236_);
v___x_2248_ = lean_unsigned_to_nat(0u);
v___x_2249_ = lean_nat_dec_eq(v___x_2247_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2250_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_2251_ = lean_string_append(v___x_2250_, v___y_2236_);
lean_dec_ref(v___y_2236_);
v___x_2252_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_2253_ = lean_string_append(v___x_2251_, v___x_2252_);
v___y_2230_ = v___x_2246_;
v___y_2231_ = v___x_2253_;
goto v___jp_2229_;
}
else
{
lean_object* v___x_2254_; 
lean_dec_ref(v___y_2236_);
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_2230_ = v___x_2246_;
v___y_2231_ = v___x_2254_;
goto v___jp_2229_;
}
}
v___jp_2255_:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_Lasm_JS_Data_describe(v_d_2227_);
v___y_2236_ = v___y_2256_;
v_received_2237_ = v___x_2257_;
goto v___jp_2235_;
}
v___jp_2258_:
{
if (lean_obj_tag(v_d_2227_) == 9)
{
lean_object* v_value_2260_; lean_object* v_description_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v_value_2260_ = lean_ctor_get(v_d_2227_, 0);
v_description_2261_ = lean_ctor_get(v_d_2227_, 1);
v___x_2262_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2263_ = lean_string_dec_eq(v_description_2261_, v___x_2262_);
if (v___x_2263_ == 0)
{
v___y_2256_ = v_a_2259_;
goto v___jp_2255_;
}
else
{
lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2280_; 
lean_inc(v_value_2260_);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_d_2227_);
if (v_isSharedCheck_2280_ == 0)
{
lean_object* v_unused_2281_; lean_object* v_unused_2282_; 
v_unused_2281_ = lean_ctor_get(v_d_2227_, 1);
lean_dec(v_unused_2281_);
v_unused_2282_ = lean_ctor_get(v_d_2227_, 0);
lean_dec(v_unused_2282_);
v___x_2265_ = v_d_2227_;
v_isShared_2266_ = v_isSharedCheck_2280_;
goto v_resetjp_2264_;
}
else
{
lean_dec(v_d_2227_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2280_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
uint32_t v___x_2267_; uint64_t v___x_2268_; lean_object* v___x_2270_; 
v___x_2267_ = 206;
v___x_2268_ = 0ULL;
lean_inc(v_value_2260_);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 1, v___x_2262_);
v___x_2270_ = v___x_2265_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_value_2260_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v___x_2262_);
v___x_2270_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
uint32_t v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = lasm_js_value_handle(v_value_2260_);
lean_dec(v_value_2260_);
v___x_2272_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2267_, v___x_2268_, v___x_2270_, v___x_2271_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; uint8_t v___x_2274_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
v___x_2274_ = lean_string_validate_utf8(v_a_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
lean_dec(v_a_2273_);
v___x_2275_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_2276_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2275_);
v___y_2236_ = v_a_2259_;
v_received_2237_ = v___x_2276_;
goto v___jp_2235_;
}
else
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_string_from_utf8_unchecked(v_a_2273_);
v___y_2236_ = v_a_2259_;
v_received_2237_ = v___x_2277_;
goto v___jp_2235_;
}
}
else
{
lean_object* v___x_2278_; 
lean_dec_ref_known(v___x_2272_, 1);
v___x_2278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_2236_ = v_a_2259_;
v_received_2237_ = v___x_2278_;
goto v___jp_2235_;
}
}
}
}
}
else
{
v___y_2256_ = v_a_2259_;
goto v___jp_2255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___boxed(lean_object* v_context_2363_, lean_object* v_d_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v_context_2363_, v_d_2364_);
lean_dec_ref(v_context_2363_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(lean_object* v_d_2369_){
_start:
{
switch(lean_obj_tag(v_d_2369_))
{
case 9:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2372_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2371_, v_d_2369_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2374_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
v___x_2374_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_2373_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2383_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2383_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2383_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2381_; 
v___x_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2379_, 0, v_a_2375_);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2379_);
v___x_2381_ = v___x_2377_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_a_2384_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2374_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2374_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
v_a_2392_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2372_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2372_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
case 8:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__0));
v___x_2401_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0(v___x_2400_, v_d_2369_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2410_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2410_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2401_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2410_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2406_; lean_object* v___x_2408_; 
v___x_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_a_2402_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 0, v___x_2406_);
v___x_2408_ = v___x_2404_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2406_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
v_a_2411_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2401_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2401_);
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
default: 
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2419_ = ((lean_object*)(l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___closed__1));
v___x_2420_ = l_Lasm_JS_Data_describe(v_d_2369_);
v___x_2421_ = lean_string_append(v___x_2419_, v___x_2420_);
lean_dec_ref(v___x_2420_);
v___x_2422_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2421_);
v___x_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode___boxed(lean_object* v_d_2424_, lean_object* v_a_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_d_2424_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAlgorithm___lam__0(lean_object* v_d_2428_){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2430_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2430_, 0, v_d_2428_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_unsigned_to_nat(1u);
v___x_2433_ = lean_mk_empty_array_with_capacity(v___x_2432_);
v___x_2434_ = lean_array_push(v___x_2433_, v___x_2431_);
v___x_2435_ = l_Lasm_JS_Web_Support_fields(v___x_2434_);
lean_dec_ref(v___x_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0(lean_object* v_d_2441_){
_start:
{
lean_object* v_name_2442_; lean_object* v_modulusLength_2443_; lean_object* v_publicExponent_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___y_2450_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; uint8_t v___x_2464_; 
v_name_2442_ = lean_ctor_get(v_d_2441_, 0);
lean_inc_ref(v_name_2442_);
v_modulusLength_2443_ = lean_ctor_get(v_d_2441_, 1);
lean_inc(v_modulusLength_2443_);
v_publicExponent_2444_ = lean_ctor_get(v_d_2441_, 2);
lean_inc_ref(v_publicExponent_2444_);
lean_dec_ref(v_d_2441_);
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2446_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_name_2442_);
v___x_2447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2445_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2461_ = lean_nat_to_int(v_modulusLength_2443_);
v___x_2462_ = lean_nat_abs(v___x_2461_);
v___x_2463_ = lean_cstr_to_nat("9007199254740991");
v___x_2464_ = lean_nat_dec_le(v___x_2462_, v___x_2463_);
lean_dec(v___x_2462_);
if (v___x_2464_ == 0)
{
lean_object* v___x_2465_; 
v___x_2465_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2461_);
v___y_2450_ = v___x_2465_;
goto v___jp_2449_;
}
else
{
double v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = l_Float_ofInt(v___x_2461_);
lean_dec(v___x_2461_);
v___x_2467_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2467_, 0, v___x_2466_);
v___y_2450_ = v___x_2467_;
goto v___jp_2449_;
}
v___jp_2449_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2448_);
lean_ctor_set(v___x_2451_, 1, v___y_2450_);
v___x_2452_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2453_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2453_, 0, v_publicExponent_2444_);
v___x_2454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2452_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = lean_unsigned_to_nat(3u);
v___x_2456_ = lean_mk_empty_array_with_capacity(v___x_2455_);
v___x_2457_ = lean_array_push(v___x_2456_, v___x_2447_);
v___x_2458_ = lean_array_push(v___x_2457_, v___x_2451_);
v___x_2459_ = lean_array_push(v___x_2458_, v___x_2454_);
v___x_2460_ = l_Lasm_JS_Web_Support_fields(v___x_2459_);
lean_dec_ref(v___x_2459_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0(lean_object* v_d_2471_){
_start:
{
lean_object* v_name_2472_; lean_object* v_modulusLength_2473_; lean_object* v_publicExponent_2474_; lean_object* v_hash_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___x_2492_; lean_object* v___y_2494_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; 
v_name_2472_ = lean_ctor_get(v_d_2471_, 0);
lean_inc_ref(v_name_2472_);
v_modulusLength_2473_ = lean_ctor_get(v_d_2471_, 1);
lean_inc(v_modulusLength_2473_);
v_publicExponent_2474_ = lean_ctor_get(v_d_2471_, 2);
lean_inc_ref(v_publicExponent_2474_);
v_hash_2475_ = lean_ctor_get(v_d_2471_, 3);
lean_inc_ref(v_hash_2475_);
lean_dec_ref(v_d_2471_);
v___x_2476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2477_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_name_2472_);
v___x_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2476_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2492_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2509_ = lean_nat_to_int(v_modulusLength_2473_);
v___x_2510_ = lean_nat_abs(v___x_2509_);
v___x_2511_ = lean_cstr_to_nat("9007199254740991");
v___x_2512_ = lean_nat_dec_le(v___x_2510_, v___x_2511_);
lean_dec(v___x_2510_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2509_);
v___y_2494_ = v___x_2513_;
goto v___jp_2493_;
}
else
{
double v___x_2514_; lean_object* v___x_2515_; 
v___x_2514_ = l_Float_ofInt(v___x_2509_);
lean_dec(v___x_2509_);
v___x_2515_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2515_, 0, v___x_2514_);
v___y_2494_ = v___x_2515_;
goto v___jp_2493_;
}
v___jp_2479_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
lean_inc_ref(v___y_2481_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___y_2481_);
lean_ctor_set(v___x_2484_, 1, v___y_2483_);
v___x_2485_ = lean_unsigned_to_nat(4u);
v___x_2486_ = lean_mk_empty_array_with_capacity(v___x_2485_);
v___x_2487_ = lean_array_push(v___x_2486_, v___x_2478_);
v___x_2488_ = lean_array_push(v___x_2487_, v___y_2480_);
v___x_2489_ = lean_array_push(v___x_2488_, v___y_2482_);
v___x_2490_ = lean_array_push(v___x_2489_, v___x_2484_);
v___x_2491_ = l_Lasm_JS_Web_Support_fields(v___x_2490_);
lean_dec_ref(v___x_2490_);
return v___x_2491_;
}
v___jp_2493_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2492_);
lean_ctor_set(v___x_2495_, 1, v___y_2494_);
v___x_2496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2497_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2497_, 0, v_publicExponent_2474_);
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2475_) == 0)
{
lean_object* v_value_2500_; 
v_value_2500_ = lean_ctor_get(v_hash_2475_, 0);
lean_inc(v_value_2500_);
lean_dec_ref_known(v_hash_2475_, 1);
v___y_2480_ = v___x_2495_;
v___y_2481_ = v___x_2499_;
v___y_2482_ = v___x_2498_;
v___y_2483_ = v_value_2500_;
goto v___jp_2479_;
}
else
{
lean_object* v_value_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
v_value_2501_ = lean_ctor_get(v_hash_2475_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_hash_2475_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v_hash_2475_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_value_2501_);
lean_dec(v_hash_2475_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
lean_ctor_set_tag(v___x_2503_, 4);
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_value_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
v___y_2480_ = v___x_2495_;
v___y_2481_ = v___x_2499_;
v___y_2482_ = v___x_2498_;
v___y_2483_ = v___x_2506_;
goto v___jp_2479_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaKeyAlgorithm___lam__0(lean_object* v_d_2518_){
_start:
{
lean_object* v_name_2519_; lean_object* v_modulusLength_2520_; lean_object* v_publicExponent_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___y_2527_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v_name_2519_ = lean_ctor_get(v_d_2518_, 0);
lean_inc_ref(v_name_2519_);
v_modulusLength_2520_ = lean_ctor_get(v_d_2518_, 1);
lean_inc(v_modulusLength_2520_);
v_publicExponent_2521_ = lean_ctor_get(v_d_2518_, 2);
lean_inc_ref(v_publicExponent_2521_);
lean_dec_ref(v_d_2518_);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2523_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2523_, 0, v_name_2519_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2538_ = lean_nat_to_int(v_modulusLength_2520_);
v___x_2539_ = lean_nat_abs(v___x_2538_);
v___x_2540_ = lean_cstr_to_nat("9007199254740991");
v___x_2541_ = lean_nat_dec_le(v___x_2539_, v___x_2540_);
lean_dec(v___x_2539_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; 
v___x_2542_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2538_);
v___y_2527_ = v___x_2542_;
goto v___jp_2526_;
}
else
{
double v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = l_Float_ofInt(v___x_2538_);
lean_dec(v___x_2538_);
v___x_2544_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2544_, 0, v___x_2543_);
v___y_2527_ = v___x_2544_;
goto v___jp_2526_;
}
v___jp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2525_);
lean_ctor_set(v___x_2528_, 1, v___y_2527_);
v___x_2529_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2530_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_publicExponent_2521_);
v___x_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2529_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
v___x_2532_ = lean_unsigned_to_nat(3u);
v___x_2533_ = lean_mk_empty_array_with_capacity(v___x_2532_);
v___x_2534_ = lean_array_push(v___x_2533_, v___x_2524_);
v___x_2535_ = lean_array_push(v___x_2534_, v___x_2528_);
v___x_2536_ = lean_array_push(v___x_2535_, v___x_2531_);
v___x_2537_ = l_Lasm_JS_Web_Support_fields(v___x_2536_);
lean_dec_ref(v___x_2536_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedKeyAlgorithm___lam__0(lean_object* v_d_2547_){
_start:
{
lean_object* v_name_2548_; lean_object* v_modulusLength_2549_; lean_object* v_publicExponent_2550_; lean_object* v_hash_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___y_2557_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v_name_2548_ = lean_ctor_get(v_d_2547_, 0);
lean_inc_ref(v_name_2548_);
v_modulusLength_2549_ = lean_ctor_get(v_d_2547_, 1);
lean_inc(v_modulusLength_2549_);
v_publicExponent_2550_ = lean_ctor_get(v_d_2547_, 2);
lean_inc_ref(v_publicExponent_2550_);
v_hash_2551_ = lean_ctor_get(v_d_2547_, 3);
lean_inc_ref(v_hash_2551_);
lean_dec_ref(v_d_2547_);
v___x_2552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2553_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2553_, 0, v_name_2548_);
v___x_2554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set(v___x_2554_, 1, v___x_2553_);
v___x_2555_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__0));
v___x_2577_ = lean_nat_to_int(v_modulusLength_2549_);
v___x_2578_ = lean_nat_abs(v___x_2577_);
v___x_2579_ = lean_cstr_to_nat("9007199254740991");
v___x_2580_ = lean_nat_dec_le(v___x_2578_, v___x_2579_);
lean_dec(v___x_2578_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2577_);
v___y_2557_ = v___x_2581_;
goto v___jp_2556_;
}
else
{
double v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = l_Float_ofInt(v___x_2577_);
lean_dec(v___x_2577_);
v___x_2583_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2583_, 0, v___x_2582_);
v___y_2557_ = v___x_2583_;
goto v___jp_2556_;
}
v___jp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2555_);
lean_ctor_set(v___x_2558_, 1, v___y_2557_);
v___x_2559_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaKeyGenParams___lam__0___closed__1));
v___x_2560_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2560_, 0, v_publicExponent_2550_);
v___x_2561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2559_);
lean_ctor_set(v___x_2561_, 1, v___x_2560_);
v___x_2562_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_2563_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2563_, 0, v_hash_2551_);
v___x_2564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2552_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
v___x_2565_ = lean_unsigned_to_nat(1u);
v___x_2566_ = lean_mk_empty_array_with_capacity(v___x_2565_);
v___x_2567_ = lean_array_push(v___x_2566_, v___x_2564_);
v___x_2568_ = l_Lasm_JS_Web_Support_fields(v___x_2567_);
lean_dec_ref(v___x_2567_);
v___x_2569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2562_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = lean_unsigned_to_nat(4u);
v___x_2571_ = lean_mk_empty_array_with_capacity(v___x_2570_);
v___x_2572_ = lean_array_push(v___x_2571_, v___x_2554_);
v___x_2573_ = lean_array_push(v___x_2572_, v___x_2558_);
v___x_2574_ = lean_array_push(v___x_2573_, v___x_2561_);
v___x_2575_ = lean_array_push(v___x_2574_, v___x_2569_);
v___x_2576_ = l_Lasm_JS_Web_Support_fields(v___x_2575_);
lean_dec_ref(v___x_2575_);
return v___x_2576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaHashedImportParams___lam__0(lean_object* v_d_2586_){
_start:
{
lean_object* v_name_2587_; lean_object* v_hash_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2615_; 
v_name_2587_ = lean_ctor_get(v_d_2586_, 0);
v_hash_2588_ = lean_ctor_get(v_d_2586_, 1);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_d_2586_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2590_ = v_d_2586_;
v_isShared_2591_ = v_isSharedCheck_2615_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_hash_2588_);
lean_inc(v_name_2587_);
lean_dec(v_d_2586_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2615_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2593_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2593_, 0, v_name_2587_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set(v___x_2590_, 1, v___x_2593_);
lean_ctor_set(v___x_2590_, 0, v___x_2592_);
v___x_2595_ = v___x_2590_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2592_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; lean_object* v___y_2598_; 
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2588_) == 0)
{
lean_object* v_value_2605_; 
v_value_2605_ = lean_ctor_get(v_hash_2588_, 0);
lean_inc(v_value_2605_);
lean_dec_ref_known(v_hash_2588_, 1);
v___y_2598_ = v_value_2605_;
goto v___jp_2597_;
}
else
{
lean_object* v_value_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
v_value_2606_ = lean_ctor_get(v_hash_2588_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_hash_2588_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v_hash_2588_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_value_2606_);
lean_dec(v_hash_2588_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set_tag(v___x_2608_, 4);
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_value_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
v___y_2598_ = v___x_2611_;
goto v___jp_2597_;
}
}
}
v___jp_2597_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2596_);
lean_ctor_set(v___x_2599_, 1, v___y_2598_);
v___x_2600_ = lean_unsigned_to_nat(2u);
v___x_2601_ = lean_mk_empty_array_with_capacity(v___x_2600_);
v___x_2602_ = lean_array_push(v___x_2601_, v___x_2595_);
v___x_2603_ = lean_array_push(v___x_2602_, v___x_2599_);
v___x_2604_ = l_Lasm_JS_Web_Support_fields(v___x_2603_);
lean_dec_ref(v___x_2603_);
return v___x_2604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaPssParams___lam__0(lean_object* v_d_2619_){
_start:
{
lean_object* v_name_2620_; lean_object* v_saltLength_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2646_; 
v_name_2620_ = lean_ctor_get(v_d_2619_, 0);
v_saltLength_2621_ = lean_ctor_get(v_d_2619_, 1);
v_isSharedCheck_2646_ = !lean_is_exclusive(v_d_2619_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2623_ = v_d_2619_;
v_isShared_2624_ = v_isSharedCheck_2646_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_saltLength_2621_);
lean_inc(v_name_2620_);
lean_dec(v_d_2619_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2646_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
v___x_2625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2626_, 0, v_name_2620_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 1, v___x_2626_);
lean_ctor_set(v___x_2623_, 0, v___x_2625_);
v___x_2628_ = v___x_2623_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2625_);
lean_ctor_set(v_reuseFailAlloc_2645_, 1, v___x_2626_);
v___x_2628_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
lean_object* v___x_2629_; lean_object* v___y_2631_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; 
v___x_2629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaPssParams___lam__0___closed__0));
v___x_2638_ = lean_nat_to_int(v_saltLength_2621_);
v___x_2639_ = lean_nat_abs(v___x_2638_);
v___x_2640_ = lean_cstr_to_nat("9007199254740991");
v___x_2641_ = lean_nat_dec_le(v___x_2639_, v___x_2640_);
lean_dec(v___x_2639_);
if (v___x_2641_ == 0)
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2638_);
v___y_2631_ = v___x_2642_;
goto v___jp_2630_;
}
else
{
double v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = l_Float_ofInt(v___x_2638_);
lean_dec(v___x_2638_);
v___x_2644_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2644_, 0, v___x_2643_);
v___y_2631_ = v___x_2644_;
goto v___jp_2630_;
}
v___jp_2630_:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2629_);
lean_ctor_set(v___x_2632_, 1, v___y_2631_);
v___x_2633_ = lean_unsigned_to_nat(2u);
v___x_2634_ = lean_mk_empty_array_with_capacity(v___x_2633_);
v___x_2635_ = lean_array_push(v___x_2634_, v___x_2628_);
v___x_2636_ = lean_array_push(v___x_2635_, v___x_2632_);
v___x_2637_ = l_Lasm_JS_Web_Support_fields(v___x_2636_);
lean_dec_ref(v___x_2636_);
return v___x_2637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0(lean_object* v___f_2650_, lean_object* v_d_2651_){
_start:
{
lean_object* v_name_2652_; lean_object* v_label_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2670_; 
v_name_2652_ = lean_ctor_get(v_d_2651_, 0);
v_label_2653_ = lean_ctor_get(v_d_2651_, 1);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_d_2651_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2655_ = v_d_2651_;
v_isShared_2656_ = v_isSharedCheck_2670_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_label_2653_);
lean_inc(v_name_2652_);
lean_dec(v_d_2651_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2670_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2657_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2658_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2658_, 0, v_name_2652_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 1, v___x_2658_);
lean_ctor_set(v___x_2655_, 0, v___x_2657_);
v___x_2660_ = v___x_2655_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2657_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v___x_2658_);
v___x_2660_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2661_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOaepParams___lam__0___closed__0));
v___x_2662_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2650_, v_label_2653_);
v___x_2663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2661_);
lean_ctor_set(v___x_2663_, 1, v___x_2662_);
v___x_2664_ = lean_unsigned_to_nat(2u);
v___x_2665_ = lean_mk_empty_array_with_capacity(v___x_2664_);
v___x_2666_ = lean_array_push(v___x_2665_, v___x_2660_);
v___x_2667_ = lean_array_push(v___x_2666_, v___x_2663_);
v___x_2668_ = l_Lasm_JS_Web_Support_fields(v___x_2667_);
lean_dec_ref(v___x_2667_);
return v___x_2668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdsaParams___lam__0(lean_object* v_d_2675_){
_start:
{
lean_object* v_name_2676_; lean_object* v_hash_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2704_; 
v_name_2676_ = lean_ctor_get(v_d_2675_, 0);
v_hash_2677_ = lean_ctor_get(v_d_2675_, 1);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_d_2675_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2679_ = v_d_2675_;
v_isShared_2680_ = v_isSharedCheck_2704_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_hash_2677_);
lean_inc(v_name_2676_);
lean_dec(v_d_2675_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2704_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2684_; 
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2682_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2682_, 0, v_name_2676_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v___x_2682_);
lean_ctor_set(v___x_2679_, 0, v___x_2681_);
v___x_2684_ = v___x_2679_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2703_, 1, v___x_2682_);
v___x_2684_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
lean_object* v___x_2685_; lean_object* v___y_2687_; 
v___x_2685_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2677_) == 0)
{
lean_object* v_value_2694_; 
v_value_2694_ = lean_ctor_get(v_hash_2677_, 0);
lean_inc(v_value_2694_);
lean_dec_ref_known(v_hash_2677_, 1);
v___y_2687_ = v_value_2694_;
goto v___jp_2686_;
}
else
{
lean_object* v_value_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
v_value_2695_ = lean_ctor_get(v_hash_2677_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_hash_2677_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v_hash_2677_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_value_2695_);
lean_dec(v_hash_2677_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
lean_ctor_set_tag(v___x_2697_, 4);
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_value_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
v___y_2687_ = v___x_2700_;
goto v___jp_2686_;
}
}
}
v___jp_2686_:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2685_);
lean_ctor_set(v___x_2688_, 1, v___y_2687_);
v___x_2689_ = lean_unsigned_to_nat(2u);
v___x_2690_ = lean_mk_empty_array_with_capacity(v___x_2689_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2684_);
v___x_2692_ = lean_array_push(v___x_2691_, v___x_2688_);
v___x_2693_ = l_Lasm_JS_Web_Support_fields(v___x_2692_);
lean_dec_ref(v___x_2692_);
return v___x_2693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0(lean_object* v_d_2708_){
_start:
{
lean_object* v_name_2709_; lean_object* v_namedCurve_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2727_; 
v_name_2709_ = lean_ctor_get(v_d_2708_, 0);
v_namedCurve_2710_ = lean_ctor_get(v_d_2708_, 1);
v_isSharedCheck_2727_ = !lean_is_exclusive(v_d_2708_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2712_ = v_d_2708_;
v_isShared_2713_ = v_isSharedCheck_2727_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_namedCurve_2710_);
lean_inc(v_name_2709_);
lean_dec(v_d_2708_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2727_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2715_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2715_, 0, v_name_2709_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 1, v___x_2715_);
lean_ctor_set(v___x_2712_, 0, v___x_2714_);
v___x_2717_ = v___x_2712_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v___x_2714_);
lean_ctor_set(v_reuseFailAlloc_2726_, 1, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2718_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2719_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_namedCurve_2710_);
v___x_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2718_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
v___x_2721_ = lean_unsigned_to_nat(2u);
v___x_2722_ = lean_mk_empty_array_with_capacity(v___x_2721_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2717_);
v___x_2724_ = lean_array_push(v___x_2723_, v___x_2720_);
v___x_2725_ = l_Lasm_JS_Web_Support_fields(v___x_2724_);
lean_dec_ref(v___x_2724_);
return v___x_2725_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyAlgorithm___lam__0(lean_object* v_d_2730_){
_start:
{
lean_object* v_name_2731_; lean_object* v_namedCurve_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2749_; 
v_name_2731_ = lean_ctor_get(v_d_2730_, 0);
v_namedCurve_2732_ = lean_ctor_get(v_d_2730_, 1);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_d_2730_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2734_ = v_d_2730_;
v_isShared_2735_ = v_isSharedCheck_2749_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_namedCurve_2732_);
lean_inc(v_name_2731_);
lean_dec(v_d_2730_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2749_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2736_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2737_, 0, v_name_2731_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 1, v___x_2737_);
lean_ctor_set(v___x_2734_, 0, v___x_2736_);
v___x_2739_ = v___x_2734_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2736_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2741_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_namedCurve_2732_);
v___x_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = lean_unsigned_to_nat(2u);
v___x_2744_ = lean_mk_empty_array_with_capacity(v___x_2743_);
v___x_2745_ = lean_array_push(v___x_2744_, v___x_2739_);
v___x_2746_ = lean_array_push(v___x_2745_, v___x_2742_);
v___x_2747_ = l_Lasm_JS_Web_Support_fields(v___x_2746_);
lean_dec_ref(v___x_2746_);
return v___x_2747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcKeyImportParams___lam__0(lean_object* v_d_2752_){
_start:
{
lean_object* v_name_2753_; lean_object* v_namedCurve_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2771_; 
v_name_2753_ = lean_ctor_get(v_d_2752_, 0);
v_namedCurve_2754_ = lean_ctor_get(v_d_2752_, 1);
v_isSharedCheck_2771_ = !lean_is_exclusive(v_d_2752_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2756_ = v_d_2752_;
v_isShared_2757_ = v_isSharedCheck_2771_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_namedCurve_2754_);
lean_inc(v_name_2753_);
lean_dec(v_d_2752_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2771_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2758_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2759_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2759_, 0, v_name_2753_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 1, v___x_2759_);
lean_ctor_set(v___x_2756_, 0, v___x_2758_);
v___x_2761_ = v___x_2756_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v___x_2758_);
lean_ctor_set(v_reuseFailAlloc_2770_, 1, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2762_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEcKeyGenParams___lam__0___closed__0));
v___x_2763_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_namedCurve_2754_);
v___x_2764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2762_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = lean_unsigned_to_nat(2u);
v___x_2766_ = lean_mk_empty_array_with_capacity(v___x_2765_);
v___x_2767_ = lean_array_push(v___x_2766_, v___x_2761_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2764_);
v___x_2769_ = l_Lasm_JS_Web_Support_fields(v___x_2768_);
lean_dec_ref(v___x_2768_);
return v___x_2769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEcdhKeyDeriveParams___lam__0(lean_object* v_d_2774_){
_start:
{
lean_object* v_name_2775_; lean_object* v_public_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2794_; 
v_name_2775_ = lean_ctor_get(v_d_2774_, 0);
v_public_2776_ = lean_ctor_get(v_d_2774_, 1);
v_isSharedCheck_2794_ = !lean_is_exclusive(v_d_2774_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2778_ = v_d_2774_;
v_isShared_2779_ = v_isSharedCheck_2794_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_public_2776_);
lean_inc(v_name_2775_);
lean_dec(v_d_2774_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2794_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2780_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2781_, 0, v_name_2775_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 1, v___x_2781_);
lean_ctor_set(v___x_2778_, 0, v___x_2780_);
v___x_2783_ = v___x_2778_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2784_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_2785_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_2786_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_public_2776_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2784_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = lean_unsigned_to_nat(2u);
v___x_2789_ = lean_mk_empty_array_with_capacity(v___x_2788_);
v___x_2790_ = lean_array_push(v___x_2789_, v___x_2783_);
v___x_2791_ = lean_array_push(v___x_2790_, v___x_2787_);
v___x_2792_ = l_Lasm_JS_Web_Support_fields(v___x_2791_);
lean_dec_ref(v___x_2791_);
return v___x_2792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCtrParams___lam__0(lean_object* v_d_2799_){
_start:
{
lean_object* v_name_2800_; lean_object* v_counter_2801_; lean_object* v_length_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___y_2811_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
v_name_2800_ = lean_ctor_get(v_d_2799_, 0);
lean_inc_ref(v_name_2800_);
v_counter_2801_ = lean_ctor_get(v_d_2799_, 1);
lean_inc_ref(v_counter_2801_);
v_length_2802_ = lean_ctor_get(v_d_2799_, 2);
lean_inc(v_length_2802_);
lean_dec_ref(v_d_2799_);
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2804_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2804_, 0, v_name_2800_);
v___x_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__0));
v___x_2807_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2807_, 0, v_counter_2801_);
v___x_2808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2806_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2819_ = lean_nat_to_int(v_length_2802_);
v___x_2820_ = lean_nat_abs(v___x_2819_);
v___x_2821_ = lean_cstr_to_nat("9007199254740991");
v___x_2822_ = lean_nat_dec_le(v___x_2820_, v___x_2821_);
lean_dec(v___x_2820_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2819_);
v___y_2811_ = v___x_2823_;
goto v___jp_2810_;
}
else
{
double v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = l_Float_ofInt(v___x_2819_);
lean_dec(v___x_2819_);
v___x_2825_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2825_, 0, v___x_2824_);
v___y_2811_ = v___x_2825_;
goto v___jp_2810_;
}
v___jp_2810_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2809_);
lean_ctor_set(v___x_2812_, 1, v___y_2811_);
v___x_2813_ = lean_unsigned_to_nat(3u);
v___x_2814_ = lean_mk_empty_array_with_capacity(v___x_2813_);
v___x_2815_ = lean_array_push(v___x_2814_, v___x_2805_);
v___x_2816_ = lean_array_push(v___x_2815_, v___x_2808_);
v___x_2817_ = lean_array_push(v___x_2816_, v___x_2812_);
v___x_2818_ = l_Lasm_JS_Web_Support_fields(v___x_2817_);
lean_dec_ref(v___x_2817_);
return v___x_2818_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyAlgorithm___lam__0(lean_object* v_d_2828_){
_start:
{
lean_object* v_name_2829_; lean_object* v_length_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2855_; 
v_name_2829_ = lean_ctor_get(v_d_2828_, 0);
v_length_2830_ = lean_ctor_get(v_d_2828_, 1);
v_isSharedCheck_2855_ = !lean_is_exclusive(v_d_2828_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2832_ = v_d_2828_;
v_isShared_2833_ = v_isSharedCheck_2855_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_length_2830_);
lean_inc(v_name_2829_);
lean_dec(v_d_2828_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2855_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
v___x_2834_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2835_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2835_, 0, v_name_2829_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 1, v___x_2835_);
lean_ctor_set(v___x_2832_, 0, v___x_2834_);
v___x_2837_ = v___x_2832_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v___x_2834_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v___x_2835_);
v___x_2837_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; lean_object* v___y_2840_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v___x_2838_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2847_ = lean_nat_to_int(v_length_2830_);
v___x_2848_ = lean_nat_abs(v___x_2847_);
v___x_2849_ = lean_cstr_to_nat("9007199254740991");
v___x_2850_ = lean_nat_dec_le(v___x_2848_, v___x_2849_);
lean_dec(v___x_2848_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2847_);
v___y_2840_ = v___x_2851_;
goto v___jp_2839_;
}
else
{
double v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = l_Float_ofInt(v___x_2847_);
lean_dec(v___x_2847_);
v___x_2853_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2853_, 0, v___x_2852_);
v___y_2840_ = v___x_2853_;
goto v___jp_2839_;
}
v___jp_2839_:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2838_);
lean_ctor_set(v___x_2841_, 1, v___y_2840_);
v___x_2842_ = lean_unsigned_to_nat(2u);
v___x_2843_ = lean_mk_empty_array_with_capacity(v___x_2842_);
v___x_2844_ = lean_array_push(v___x_2843_, v___x_2837_);
v___x_2845_ = lean_array_push(v___x_2844_, v___x_2841_);
v___x_2846_ = l_Lasm_JS_Web_Support_fields(v___x_2845_);
lean_dec_ref(v___x_2845_);
return v___x_2846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesKeyGenParams___lam__0(lean_object* v_d_2858_){
_start:
{
lean_object* v_name_2859_; lean_object* v_length_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2885_; 
v_name_2859_ = lean_ctor_get(v_d_2858_, 0);
v_length_2860_ = lean_ctor_get(v_d_2858_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_d_2858_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2862_ = v_d_2858_;
v_isShared_2863_ = v_isSharedCheck_2885_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_length_2860_);
lean_inc(v_name_2859_);
lean_dec(v_d_2858_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2885_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2864_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2865_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2865_, 0, v_name_2859_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 1, v___x_2865_);
lean_ctor_set(v___x_2862_, 0, v___x_2864_);
v___x_2867_ = v___x_2862_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2864_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
lean_object* v___x_2868_; lean_object* v___y_2870_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; uint8_t v___x_2880_; 
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2877_ = lean_nat_to_int(v_length_2860_);
v___x_2878_ = lean_nat_abs(v___x_2877_);
v___x_2879_ = lean_cstr_to_nat("9007199254740991");
v___x_2880_ = lean_nat_dec_le(v___x_2878_, v___x_2879_);
lean_dec(v___x_2878_);
if (v___x_2880_ == 0)
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2877_);
v___y_2870_ = v___x_2881_;
goto v___jp_2869_;
}
else
{
double v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = l_Float_ofInt(v___x_2877_);
lean_dec(v___x_2877_);
v___x_2883_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2883_, 0, v___x_2882_);
v___y_2870_ = v___x_2883_;
goto v___jp_2869_;
}
v___jp_2869_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2868_);
lean_ctor_set(v___x_2871_, 1, v___y_2870_);
v___x_2872_ = lean_unsigned_to_nat(2u);
v___x_2873_ = lean_mk_empty_array_with_capacity(v___x_2872_);
v___x_2874_ = lean_array_push(v___x_2873_, v___x_2867_);
v___x_2875_ = lean_array_push(v___x_2874_, v___x_2871_);
v___x_2876_ = l_Lasm_JS_Web_Support_fields(v___x_2875_);
lean_dec_ref(v___x_2875_);
return v___x_2876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesDerivedKeyParams___lam__0(lean_object* v_d_2888_){
_start:
{
lean_object* v_name_2889_; lean_object* v_length_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2915_; 
v_name_2889_ = lean_ctor_get(v_d_2888_, 0);
v_length_2890_ = lean_ctor_get(v_d_2888_, 1);
v_isSharedCheck_2915_ = !lean_is_exclusive(v_d_2888_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2892_ = v_d_2888_;
v_isShared_2893_ = v_isSharedCheck_2915_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_length_2890_);
lean_inc(v_name_2889_);
lean_dec(v_d_2888_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2915_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2897_; 
v___x_2894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2895_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2895_, 0, v_name_2889_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 1, v___x_2895_);
lean_ctor_set(v___x_2892_, 0, v___x_2894_);
v___x_2897_ = v___x_2892_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2894_);
lean_ctor_set(v_reuseFailAlloc_2914_, 1, v___x_2895_);
v___x_2897_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
lean_object* v___x_2898_; lean_object* v___y_2900_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; uint8_t v___x_2910_; 
v___x_2898_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2907_ = lean_nat_to_int(v_length_2890_);
v___x_2908_ = lean_nat_abs(v___x_2907_);
v___x_2909_ = lean_cstr_to_nat("9007199254740991");
v___x_2910_ = lean_nat_dec_le(v___x_2908_, v___x_2909_);
lean_dec(v___x_2908_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2907_);
v___y_2900_ = v___x_2911_;
goto v___jp_2899_;
}
else
{
double v___x_2912_; lean_object* v___x_2913_; 
v___x_2912_ = l_Float_ofInt(v___x_2907_);
lean_dec(v___x_2907_);
v___x_2913_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2913_, 0, v___x_2912_);
v___y_2900_ = v___x_2913_;
goto v___jp_2899_;
}
v___jp_2899_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2898_);
lean_ctor_set(v___x_2901_, 1, v___y_2900_);
v___x_2902_ = lean_unsigned_to_nat(2u);
v___x_2903_ = lean_mk_empty_array_with_capacity(v___x_2902_);
v___x_2904_ = lean_array_push(v___x_2903_, v___x_2897_);
v___x_2905_ = lean_array_push(v___x_2904_, v___x_2901_);
v___x_2906_ = l_Lasm_JS_Web_Support_fields(v___x_2905_);
lean_dec_ref(v___x_2905_);
return v___x_2906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesCbcParams___lam__0(lean_object* v_d_2919_){
_start:
{
lean_object* v_name_2920_; lean_object* v_iv_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2938_; 
v_name_2920_ = lean_ctor_get(v_d_2919_, 0);
v_iv_2921_ = lean_ctor_get(v_d_2919_, 1);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_d_2919_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2923_ = v_d_2919_;
v_isShared_2924_ = v_isSharedCheck_2938_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_iv_2921_);
lean_inc(v_name_2920_);
lean_dec(v_d_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2938_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2925_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2926_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_name_2920_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2926_);
lean_ctor_set(v___x_2923_, 0, v___x_2925_);
v___x_2928_ = v___x_2923_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2925_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2930_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_iv_2921_);
v___x_2931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2929_);
lean_ctor_set(v___x_2931_, 1, v___x_2930_);
v___x_2932_ = lean_unsigned_to_nat(2u);
v___x_2933_ = lean_mk_empty_array_with_capacity(v___x_2932_);
v___x_2934_ = lean_array_push(v___x_2933_, v___x_2928_);
v___x_2935_ = lean_array_push(v___x_2934_, v___x_2931_);
v___x_2936_ = l_Lasm_JS_Web_Support_fields(v___x_2935_);
lean_dec_ref(v___x_2935_);
return v___x_2936_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAesGcmParams___lam__0(lean_object* v___f_2943_, lean_object* v___f_2944_, lean_object* v_d_2945_){
_start:
{
lean_object* v_name_2946_; lean_object* v_iv_2947_; lean_object* v_additionalData_2948_; lean_object* v_tagLength_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v_name_2946_ = lean_ctor_get(v_d_2945_, 0);
lean_inc_ref(v_name_2946_);
v_iv_2947_ = lean_ctor_get(v_d_2945_, 1);
lean_inc_ref(v_iv_2947_);
v_additionalData_2948_ = lean_ctor_get(v_d_2945_, 2);
lean_inc(v_additionalData_2948_);
v_tagLength_2949_ = lean_ctor_get(v_d_2945_, 3);
lean_inc(v_tagLength_2949_);
lean_dec_ref(v_d_2945_);
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2951_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2951_, 0, v_name_2946_);
v___x_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2950_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCbcParams___lam__0___closed__0));
v___x_2954_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2954_, 0, v_iv_2947_);
v___x_2955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2953_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__0));
v___x_2957_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2943_, v_additionalData_2948_);
v___x_2958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2956_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
v___x_2959_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesGcmParams___lam__0___closed__1));
v___x_2960_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2944_, v_tagLength_2949_);
v___x_2961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2959_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = lean_unsigned_to_nat(4u);
v___x_2963_ = lean_mk_empty_array_with_capacity(v___x_2962_);
v___x_2964_ = lean_array_push(v___x_2963_, v___x_2952_);
v___x_2965_ = lean_array_push(v___x_2964_, v___x_2955_);
v___x_2966_ = lean_array_push(v___x_2965_, v___x_2958_);
v___x_2967_ = lean_array_push(v___x_2966_, v___x_2961_);
v___x_2968_ = l_Lasm_JS_Web_Support_fields(v___x_2967_);
lean_dec_ref(v___x_2967_);
return v___x_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacImportParams___lam__0(lean_object* v___f_2974_, lean_object* v_d_2975_){
_start:
{
lean_object* v_name_2976_; lean_object* v_hash_2977_; lean_object* v_length_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___y_2984_; 
v_name_2976_ = lean_ctor_get(v_d_2975_, 0);
lean_inc_ref(v_name_2976_);
v_hash_2977_ = lean_ctor_get(v_d_2975_, 1);
lean_inc_ref(v_hash_2977_);
v_length_2978_ = lean_ctor_get(v_d_2975_, 2);
lean_inc(v_length_2978_);
lean_dec_ref(v_d_2975_);
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_2980_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_name_2976_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2979_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_2977_) == 0)
{
lean_object* v_value_2995_; 
v_value_2995_ = lean_ctor_get(v_hash_2977_, 0);
lean_inc(v_value_2995_);
lean_dec_ref_known(v_hash_2977_, 1);
v___y_2984_ = v_value_2995_;
goto v___jp_2983_;
}
else
{
lean_object* v_value_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
v_value_2996_ = lean_ctor_get(v_hash_2977_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v_hash_2977_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v_hash_2977_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_value_2996_);
lean_dec(v_hash_2977_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
lean_ctor_set_tag(v___x_2998_, 4);
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_value_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
v___y_2984_ = v___x_3001_;
goto v___jp_2983_;
}
}
}
v___jp_2983_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2982_);
lean_ctor_set(v___x_2985_, 1, v___y_2984_);
v___x_2986_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_2987_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2974_, v_length_2978_);
v___x_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2986_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
v___x_2989_ = lean_unsigned_to_nat(3u);
v___x_2990_ = lean_mk_empty_array_with_capacity(v___x_2989_);
v___x_2991_ = lean_array_push(v___x_2990_, v___x_2981_);
v___x_2992_ = lean_array_push(v___x_2991_, v___x_2985_);
v___x_2993_ = lean_array_push(v___x_2992_, v___x_2988_);
v___x_2994_ = l_Lasm_JS_Web_Support_fields(v___x_2993_);
lean_dec_ref(v___x_2993_);
return v___x_2994_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyAlgorithm___lam__0(lean_object* v_d_3007_){
_start:
{
lean_object* v_name_3008_; lean_object* v_hash_3009_; lean_object* v_length_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___y_3024_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; 
v_name_3008_ = lean_ctor_get(v_d_3007_, 0);
lean_inc_ref(v_name_3008_);
v_hash_3009_ = lean_ctor_get(v_d_3007_, 1);
lean_inc_ref(v_hash_3009_);
v_length_3010_ = lean_ctor_get(v_d_3007_, 2);
lean_inc(v_length_3010_);
lean_dec_ref(v_d_3007_);
v___x_3011_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3012_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3012_, 0, v_name_3008_);
v___x_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
v___x_3015_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_hash_3009_);
v___x_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3011_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = lean_unsigned_to_nat(1u);
v___x_3018_ = lean_mk_empty_array_with_capacity(v___x_3017_);
v___x_3019_ = lean_array_push(v___x_3018_, v___x_3016_);
v___x_3020_ = l_Lasm_JS_Web_Support_fields(v___x_3019_);
lean_dec_ref(v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3014_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3032_ = lean_nat_to_int(v_length_3010_);
v___x_3033_ = lean_nat_abs(v___x_3032_);
v___x_3034_ = lean_cstr_to_nat("9007199254740991");
v___x_3035_ = lean_nat_dec_le(v___x_3033_, v___x_3034_);
lean_dec(v___x_3033_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3032_);
v___y_3024_ = v___x_3036_;
goto v___jp_3023_;
}
else
{
double v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = l_Float_ofInt(v___x_3032_);
lean_dec(v___x_3032_);
v___x_3038_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3038_, 0, v___x_3037_);
v___y_3024_ = v___x_3038_;
goto v___jp_3023_;
}
v___jp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3022_);
lean_ctor_set(v___x_3025_, 1, v___y_3024_);
v___x_3026_ = lean_unsigned_to_nat(3u);
v___x_3027_ = lean_mk_empty_array_with_capacity(v___x_3026_);
v___x_3028_ = lean_array_push(v___x_3027_, v___x_3013_);
v___x_3029_ = lean_array_push(v___x_3028_, v___x_3021_);
v___x_3030_ = lean_array_push(v___x_3029_, v___x_3025_);
v___x_3031_ = l_Lasm_JS_Web_Support_fields(v___x_3030_);
lean_dec_ref(v___x_3030_);
return v___x_3031_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHmacKeyGenParams___lam__0(lean_object* v___f_3041_, lean_object* v_d_3042_){
_start:
{
lean_object* v_name_3043_; lean_object* v_hash_3044_; lean_object* v_length_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___y_3051_; 
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
if (lean_obj_tag(v_hash_3044_) == 0)
{
lean_object* v_value_3062_; 
v_value_3062_ = lean_ctor_get(v_hash_3044_, 0);
lean_inc(v_value_3062_);
lean_dec_ref_known(v_hash_3044_, 1);
v___y_3051_ = v_value_3062_;
goto v___jp_3050_;
}
else
{
lean_object* v_value_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
v_value_3063_ = lean_ctor_get(v_hash_3044_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v_hash_3044_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3065_ = v_hash_3044_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_value_3063_);
lean_dec(v_hash_3044_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
lean_ctor_set_tag(v___x_3065_, 4);
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_value_3063_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
v___y_3051_ = v___x_3068_;
goto v___jp_3050_;
}
}
}
v___jp_3050_:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3049_);
lean_ctor_set(v___x_3052_, 1, v___y_3051_);
v___x_3053_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAesCtrParams___lam__0___closed__1));
v___x_3054_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_3041_, v_length_3045_);
v___x_3055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3053_);
lean_ctor_set(v___x_3055_, 1, v___x_3054_);
v___x_3056_ = lean_unsigned_to_nat(3u);
v___x_3057_ = lean_mk_empty_array_with_capacity(v___x_3056_);
v___x_3058_ = lean_array_push(v___x_3057_, v___x_3048_);
v___x_3059_ = lean_array_push(v___x_3058_, v___x_3052_);
v___x_3060_ = lean_array_push(v___x_3059_, v___x_3055_);
v___x_3061_ = l_Lasm_JS_Web_Support_fields(v___x_3060_);
lean_dec_ref(v___x_3060_);
return v___x_3061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHkdfParams___lam__0(lean_object* v_d_3076_){
_start:
{
lean_object* v_name_3077_; lean_object* v_hash_3078_; lean_object* v_salt_3079_; lean_object* v_info_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___y_3086_; 
v_name_3077_ = lean_ctor_get(v_d_3076_, 0);
lean_inc_ref(v_name_3077_);
v_hash_3078_ = lean_ctor_get(v_d_3076_, 1);
lean_inc_ref(v_hash_3078_);
v_salt_3079_ = lean_ctor_get(v_d_3076_, 2);
lean_inc_ref(v_salt_3079_);
v_info_3080_ = lean_ctor_get(v_d_3076_, 3);
lean_inc_ref(v_info_3080_);
lean_dec_ref(v_d_3076_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3082_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_name_3077_);
v___x_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3081_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3078_) == 0)
{
lean_object* v_value_3101_; 
v_value_3101_ = lean_ctor_get(v_hash_3078_, 0);
lean_inc(v_value_3101_);
lean_dec_ref_known(v_hash_3078_, 1);
v___y_3086_ = v_value_3101_;
goto v___jp_3085_;
}
else
{
lean_object* v_value_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
v_value_3102_ = lean_ctor_get(v_hash_3078_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_hash_3078_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v_hash_3078_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_value_3102_);
lean_dec(v_hash_3078_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
lean_ctor_set_tag(v___x_3104_, 4);
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_value_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
v___y_3086_ = v___x_3107_;
goto v___jp_3085_;
}
}
}
v___jp_3085_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3084_);
lean_ctor_set(v___x_3087_, 1, v___y_3086_);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3089_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_salt_3079_);
v___x_3090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__1));
v___x_3092_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3092_, 0, v_info_3080_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = lean_unsigned_to_nat(4u);
v___x_3095_ = lean_mk_empty_array_with_capacity(v___x_3094_);
v___x_3096_ = lean_array_push(v___x_3095_, v___x_3083_);
v___x_3097_ = lean_array_push(v___x_3096_, v___x_3087_);
v___x_3098_ = lean_array_push(v___x_3097_, v___x_3090_);
v___x_3099_ = lean_array_push(v___x_3098_, v___x_3093_);
v___x_3100_ = l_Lasm_JS_Web_Support_fields(v___x_3099_);
lean_dec_ref(v___x_3099_);
return v___x_3100_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0(lean_object* v_d_3113_){
_start:
{
lean_object* v_name_3114_; lean_object* v_salt_3115_; lean_object* v_iterations_3116_; lean_object* v_hash_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___x_3136_; lean_object* v___y_3138_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; uint8_t v___x_3153_; 
v_name_3114_ = lean_ctor_get(v_d_3113_, 0);
lean_inc_ref(v_name_3114_);
v_salt_3115_ = lean_ctor_get(v_d_3113_, 1);
lean_inc_ref(v_salt_3115_);
v_iterations_3116_ = lean_ctor_get(v_d_3113_, 2);
lean_inc(v_iterations_3116_);
v_hash_3117_ = lean_ctor_get(v_d_3113_, 3);
lean_inc_ref(v_hash_3117_);
lean_dec_ref(v_d_3113_);
v___x_3118_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAlgorithm___lam__0___closed__0));
v___x_3119_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3119_, 0, v_name_3114_);
v___x_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3118_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHkdfParams___lam__0___closed__0));
v___x_3122_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3122_, 0, v_salt_3115_);
v___x_3123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPbkdf2Params___lam__0___closed__0));
v___x_3150_ = lean_nat_to_int(v_iterations_3116_);
v___x_3151_ = lean_nat_abs(v___x_3150_);
v___x_3152_ = lean_cstr_to_nat("9007199254740991");
v___x_3153_ = lean_nat_dec_le(v___x_3151_, v___x_3152_);
lean_dec(v___x_3151_);
if (v___x_3153_ == 0)
{
lean_object* v___x_3154_; 
v___x_3154_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3150_);
v___y_3138_ = v___x_3154_;
goto v___jp_3137_;
}
else
{
double v___x_3155_; lean_object* v___x_3156_; 
v___x_3155_ = l_Float_ofInt(v___x_3150_);
lean_dec(v___x_3150_);
v___x_3156_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3156_, 0, v___x_3155_);
v___y_3138_ = v___x_3156_;
goto v___jp_3137_;
}
v___jp_3124_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
lean_inc_ref(v___y_3125_);
v___x_3128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___y_3125_);
lean_ctor_set(v___x_3128_, 1, v___y_3127_);
v___x_3129_ = lean_unsigned_to_nat(4u);
v___x_3130_ = lean_mk_empty_array_with_capacity(v___x_3129_);
v___x_3131_ = lean_array_push(v___x_3130_, v___x_3120_);
v___x_3132_ = lean_array_push(v___x_3131_, v___x_3123_);
v___x_3133_ = lean_array_push(v___x_3132_, v___y_3126_);
v___x_3134_ = lean_array_push(v___x_3133_, v___x_3128_);
v___x_3135_ = l_Lasm_JS_Web_Support_fields(v___x_3134_);
lean_dec_ref(v___x_3134_);
return v___x_3135_;
}
v___jp_3137_:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3136_);
lean_ctor_set(v___x_3139_, 1, v___y_3138_);
v___x_3140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaHashedKeyGenParams___lam__0___closed__0));
if (lean_obj_tag(v_hash_3117_) == 0)
{
lean_object* v_value_3141_; 
v_value_3141_ = lean_ctor_get(v_hash_3117_, 0);
lean_inc(v_value_3141_);
lean_dec_ref_known(v_hash_3117_, 1);
v___y_3125_ = v___x_3140_;
v___y_3126_ = v___x_3139_;
v___y_3127_ = v_value_3141_;
goto v___jp_3124_;
}
else
{
lean_object* v_value_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
v_value_3142_ = lean_ctor_get(v_hash_3117_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_hash_3117_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3144_ = v_hash_3117_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_value_3142_);
lean_dec(v_hash_3117_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
lean_ctor_set_tag(v___x_3144_, 4);
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_value_3142_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
v___y_3125_ = v___x_3140_;
v___y_3126_ = v___x_3139_;
v___y_3127_ = v___x_3147_;
goto v___jp_3124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle(lean_object* v_self_3160_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_subtle___closed__0));
v___x_3163_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3160_, v___x_3162_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3171_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3166_ = v___x_3163_;
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3163_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3169_; 
if (v_isShared_3167_ == 0)
{
v___x_3169_ = v___x_3166_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3164_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
v_a_3172_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3163_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3163_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_subtle___boxed(lean_object* v_self_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lasm_JS_Web_Crypto_subtle(v_self_3180_);
return v_res_3182_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3183_; uint64_t v___x_3184_; 
v___x_3183_ = 0;
v___x_3184_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(uint8_t v_await_3185_, uint64_t v_extra_3186_){
_start:
{
uint64_t v___x_3187_; uint64_t v___y_3189_; 
v___x_3187_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_3185_ == 0)
{
uint64_t v___x_3192_; 
v___x_3192_ = 0ULL;
v___y_3189_ = v___x_3192_;
goto v___jp_3188_;
}
else
{
uint64_t v___x_3193_; 
v___x_3193_ = 2ULL;
v___y_3189_ = v___x_3193_;
goto v___jp_3188_;
}
v___jp_3188_:
{
uint64_t v___x_3190_; uint64_t v___x_3191_; 
v___x_3190_ = lean_uint64_lor(v___x_3187_, v___y_3189_);
v___x_3191_ = lean_uint64_lor(v___x_3190_, v_extra_3186_);
return v___x_3191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___boxed(lean_object* v_await_3194_, lean_object* v_extra_3195_){
_start:
{
uint8_t v_await_boxed_3196_; uint64_t v_extra_boxed_3197_; uint64_t v_res_3198_; lean_object* v_r_3199_; 
v_await_boxed_3196_ = lean_unbox(v_await_3194_);
v_extra_boxed_3197_ = lean_unbox_uint64(v_extra_3195_);
lean_dec_ref(v_extra_3195_);
v_res_3198_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v_await_boxed_3196_, v_extra_boxed_3197_);
v_r_3199_ = lean_box_uint64(v_res_3198_);
return v_r_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(lean_object* v_bytes_3200_){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3200_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3202_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3202_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
else
{
return v___x_3202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_3211_, lean_object* v_a_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3211_);
lean_dec_ref(v_bytes_3211_);
return v_res_3213_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3214_; uint8_t v___x_3215_; uint64_t v___x_3216_; 
v___x_3214_ = 8ULL;
v___x_3215_ = 0;
v___x_3216_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0(v___x_3215_, v___x_3214_);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(lean_object* v_o_3217_, lean_object* v_name_3218_, lean_object* v_args_3219_){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint64_t v___x_3224_; lean_object* v___x_3225_; 
v___x_3221_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3222_, 0, v_o_3217_);
lean_ctor_set(v___x_3222_, 1, v___x_3221_);
v___x_3223_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3223_, 0, v_name_3218_);
v___x_3224_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_3225_ = l_Lasm_JS_Value_invokeRaw(v___x_3222_, v___x_3223_, v_args_3219_, v___x_3224_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3227_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3226_);
lean_dec(v_a_3226_);
return v___x_3227_;
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
v_a_3228_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3225_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3225_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___boxed(lean_object* v_o_3236_, lean_object* v_name_3237_, lean_object* v_args_3238_, lean_object* v_a_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_o_3236_, v_name_3237_, v_args_3238_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues(lean_object* v_self_3242_, lean_object* v_array_3243_){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3245_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_getRandomValues___closed__0));
v___x_3246_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3246_, 0, v_array_3243_);
v___x_3247_ = lean_unsigned_to_nat(1u);
v___x_3248_ = lean_mk_empty_array_with_capacity(v___x_3247_);
v___x_3249_ = lean_array_push(v___x_3248_, v___x_3246_);
v___x_3250_ = l_Lasm_JS_Web_Support_args(v___x_3249_);
v___x_3251_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0(v_self_3242_, v___x_3245_, v___x_3250_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3253_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = l_Lasm_JS_Web_Support_viewBytes(v_a_3252_);
return v___x_3253_;
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
v_a_3254_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3251_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3251_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_getRandomValues___boxed(lean_object* v_self_3262_, lean_object* v_array_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l_Lasm_JS_Web_Crypto_getRandomValues(v_self_3262_, v_array_3263_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(lean_object* v_d_3266_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v_d_3266_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_d_3269_, lean_object* v_a_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___redArg(v_d_3269_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(lean_object* v_context_3272_, lean_object* v_d_3273_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v_d_3273_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3276_, lean_object* v_d_3277_, lean_object* v_a_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1_spec__2(v_context_3276_, v_d_3277_);
lean_dec_ref(v_context_3276_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(lean_object* v_context_3280_, lean_object* v_bytes_3281_){
_start:
{
lean_object* v___x_3283_; 
v___x_3283_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_bytes_3281_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___boxed(lean_object* v_context_3284_, lean_object* v_bytes_3285_, lean_object* v_a_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1(v_context_3284_, v_bytes_3285_);
lean_dec_ref(v_bytes_3285_);
lean_dec_ref(v_context_3284_);
return v_res_3287_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(uint8_t v_await_3288_, uint64_t v_extra_3289_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0___boxed(lean_object* v_await_3297_, lean_object* v_extra_3298_){
_start:
{
uint8_t v_await_boxed_3299_; uint64_t v_extra_boxed_3300_; uint64_t v_res_3301_; lean_object* v_r_3302_; 
v_await_boxed_3299_ = lean_unbox(v_await_3297_);
v_extra_boxed_3300_ = lean_unbox_uint64(v_extra_3298_);
lean_dec_ref(v_extra_3298_);
v_res_3301_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v_await_boxed_3299_, v_extra_boxed_3300_);
v_r_3302_ = lean_box_uint64(v_res_3301_);
return v_r_3302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(lean_object* v_context_3304_, lean_object* v_d_3305_){
_start:
{
lean_object* v_received_3308_; 
if (lean_obj_tag(v_d_3305_) == 4)
{
lean_object* v_s_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
v_s_3322_ = lean_ctor_get(v_d_3305_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_d_3305_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v_d_3305_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_s_3322_);
lean_dec(v_d_3305_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 0);
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_s_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
else
{
if (lean_obj_tag(v_d_3305_) == 9)
{
lean_object* v_value_3330_; lean_object* v_description_3331_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v_value_3330_ = lean_ctor_get(v_d_3305_, 0);
v_description_3331_ = lean_ctor_get(v_d_3305_, 1);
v___x_3332_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3333_ = lean_string_dec_eq(v_description_3331_, v___x_3332_);
if (v___x_3333_ == 0)
{
goto v___jp_3320_;
}
else
{
uint32_t v___x_3334_; uint64_t v___x_3335_; lean_object* v___x_3336_; uint32_t v___x_3337_; lean_object* v___x_3338_; 
lean_inc_n(v_value_3330_, 2);
lean_dec_ref_known(v_d_3305_, 2);
v___x_3334_ = 206;
v___x_3335_ = 0ULL;
v___x_3336_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3336_, 0, v_value_3330_);
lean_ctor_set(v___x_3336_, 1, v___x_3332_);
v___x_3337_ = lasm_js_value_handle(v_value_3330_);
lean_dec(v_value_3330_);
v___x_3338_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3334_, v___x_3335_, v___x_3336_, v___x_3337_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; uint8_t v___x_3340_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
v___x_3340_ = lean_string_validate_utf8(v_a_3339_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
lean_dec(v_a_3339_);
v___x_3341_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3342_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3341_);
v_received_3308_ = v___x_3342_;
goto v___jp_3307_;
}
else
{
lean_object* v___x_3343_; 
v___x_3343_ = lean_string_from_utf8_unchecked(v_a_3339_);
v_received_3308_ = v___x_3343_;
goto v___jp_3307_;
}
}
else
{
lean_object* v___x_3344_; 
lean_dec_ref_known(v___x_3338_, 1);
v___x_3344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3308_ = v___x_3344_;
goto v___jp_3307_;
}
}
}
else
{
goto v___jp_3320_;
}
}
v___jp_3307_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3310_ = lean_string_append(v___x_3309_, v_context_3304_);
v___x_3311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3312_ = lean_string_append(v___x_3310_, v___x_3311_);
v___x_3313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___closed__0));
v___x_3314_ = lean_string_append(v___x_3312_, v___x_3313_);
v___x_3315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3316_ = lean_string_append(v___x_3314_, v___x_3315_);
v___x_3317_ = lean_string_append(v___x_3316_, v_received_3308_);
lean_dec_ref(v_received_3308_);
v___x_3318_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
v___x_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
return v___x_3319_;
}
v___jp_3320_:
{
lean_object* v___x_3321_; 
v___x_3321_ = l_Lasm_JS_Data_describe(v_d_3305_);
v_received_3308_ = v___x_3321_;
goto v___jp_3307_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3345_, lean_object* v_d_3346_, lean_object* v_a_3347_){
_start:
{
lean_object* v_res_3348_; 
v_res_3348_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3345_, v_d_3346_);
lean_dec_ref(v_context_3345_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(lean_object* v_context_3349_, lean_object* v_bytes_3350_){
_start:
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3350_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3354_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v___x_3352_, 1);
v___x_3354_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1_spec__2(v_context_3349_, v_a_3353_);
return v___x_3354_;
}
else
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3362_; 
v_a_3355_ = lean_ctor_get(v___x_3352_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3357_ = v___x_3352_;
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3352_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3360_; 
if (v_isShared_3358_ == 0)
{
v___x_3360_ = v___x_3357_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3355_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1___boxed(lean_object* v_context_3363_, lean_object* v_bytes_3364_, lean_object* v_a_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v_context_3363_, v_bytes_3364_);
lean_dec_ref(v_bytes_3364_);
lean_dec_ref(v_context_3363_);
return v_res_3366_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3367_; uint8_t v___x_3368_; uint64_t v___x_3369_; 
v___x_3367_ = 8ULL;
v___x_3368_ = 0;
v___x_3369_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__0(v___x_3368_, v___x_3367_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(lean_object* v_o_3371_, lean_object* v_name_3372_, lean_object* v_args_3373_){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; uint64_t v___x_3378_; lean_object* v___x_3379_; 
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3376_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3376_, 0, v_o_3371_);
lean_ctor_set(v___x_3376_, 1, v___x_3375_);
lean_inc_ref(v_name_3372_);
v___x_3377_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3377_, 0, v_name_3372_);
v___x_3378_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__0);
v___x_3379_ = l_Lasm_JS_Value_invokeRaw(v___x_3376_, v___x_3377_, v_args_3373_, v___x_3378_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_3382_ = lean_string_append(v___x_3381_, v_name_3372_);
lean_dec_ref(v_name_3372_);
v___x_3383_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0_spec__1(v___x_3382_, v_a_3380_);
lean_dec(v_a_3380_);
lean_dec_ref(v___x_3382_);
return v___x_3383_;
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3391_; 
lean_dec_ref(v_name_3372_);
v_a_3384_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3386_ = v___x_3379_;
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3379_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3389_; 
if (v_isShared_3387_ == 0)
{
v___x_3389_ = v___x_3386_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3384_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___boxed(lean_object* v_o_3392_, lean_object* v_name_3393_, lean_object* v_args_3394_, lean_object* v_a_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_o_3392_, v_name_3393_, v_args_3394_);
return v_res_3396_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2(void){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__1));
v___x_3401_ = l_Lasm_JS_Web_Support_args(v___x_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID(lean_object* v_self_3402_){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = ((lean_object*)(l_Lasm_JS_Web_Crypto_randomUUID___closed__0));
v___x_3405_ = lean_obj_once(&l_Lasm_JS_Web_Crypto_randomUUID___closed__2, &l_Lasm_JS_Web_Crypto_randomUUID___closed__2_once, _init_l_Lasm_JS_Web_Crypto_randomUUID___closed__2);
v___x_3406_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0(v_self_3402_, v___x_3404_, v___x_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Crypto_randomUUID___boxed(lean_object* v_self_3407_, lean_object* v_a_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lasm_JS_Web_Crypto_randomUUID(v_self_3407_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(lean_object* v_context_3411_, lean_object* v_d_3412_){
_start:
{
lean_object* v_received_3415_; 
if (lean_obj_tag(v_d_3412_) == 4)
{
lean_object* v_s_3455_; lean_object* v___x_3456_; uint8_t v___x_3457_; 
v_s_3455_ = lean_ctor_get(v_d_3412_, 0);
v___x_3456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__0));
v___x_3457_ = lean_string_dec_eq(v_s_3455_, v___x_3456_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__2));
v___x_3459_ = lean_string_dec_eq(v_s_3455_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; uint8_t v___x_3461_; 
v___x_3460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyType___lam__0___closed__4));
v___x_3461_ = lean_string_dec_eq(v_s_3455_, v___x_3460_);
if (v___x_3461_ == 0)
{
goto v___jp_3431_;
}
else
{
uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
lean_dec_ref_known(v_d_3412_, 1);
v___x_3462_ = 2;
v___x_3463_ = lean_box(v___x_3462_);
v___x_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
return v___x_3464_;
}
}
else
{
uint8_t v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
lean_dec_ref_known(v_d_3412_, 1);
v___x_3465_ = 1;
v___x_3466_ = lean_box(v___x_3465_);
v___x_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3466_);
return v___x_3467_;
}
}
else
{
uint8_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
lean_dec_ref_known(v_d_3412_, 1);
v___x_3468_ = 0;
v___x_3469_ = lean_box(v___x_3468_);
v___x_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3469_);
return v___x_3470_;
}
}
else
{
goto v___jp_3431_;
}
v___jp_3414_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3417_ = lean_string_append(v___x_3416_, v_context_3411_);
v___x_3418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3419_ = lean_string_append(v___x_3417_, v___x_3418_);
v___x_3420_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyType___closed__1));
v___x_3421_ = lean_string_append(v___x_3419_, v___x_3420_);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3423_ = lean_string_append(v___x_3421_, v___x_3422_);
v___x_3424_ = lean_string_append(v___x_3423_, v_received_3415_);
lean_dec_ref(v_received_3415_);
v___x_3425_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___closed__0));
v___x_3426_ = lean_string_append(v___x_3424_, v___x_3425_);
v___x_3427_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3426_);
v___x_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
return v___x_3428_;
}
v___jp_3429_:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Lasm_JS_Data_describe(v_d_3412_);
v_received_3415_ = v___x_3430_;
goto v___jp_3414_;
}
v___jp_3431_:
{
if (lean_obj_tag(v_d_3412_) == 9)
{
lean_object* v_value_3432_; lean_object* v_description_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; 
v_value_3432_ = lean_ctor_get(v_d_3412_, 0);
v_description_3433_ = lean_ctor_get(v_d_3412_, 1);
v___x_3434_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3435_ = lean_string_dec_eq(v_description_3433_, v___x_3434_);
if (v___x_3435_ == 0)
{
goto v___jp_3429_;
}
else
{
lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3452_; 
lean_inc(v_value_3432_);
v_isSharedCheck_3452_ = !lean_is_exclusive(v_d_3412_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; lean_object* v_unused_3454_; 
v_unused_3453_ = lean_ctor_get(v_d_3412_, 1);
lean_dec(v_unused_3453_);
v_unused_3454_ = lean_ctor_get(v_d_3412_, 0);
lean_dec(v_unused_3454_);
v___x_3437_ = v_d_3412_;
v_isShared_3438_ = v_isSharedCheck_3452_;
goto v_resetjp_3436_;
}
else
{
lean_dec(v_d_3412_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3452_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
uint32_t v___x_3439_; uint64_t v___x_3440_; lean_object* v___x_3442_; 
v___x_3439_ = 206;
v___x_3440_ = 0ULL;
lean_inc(v_value_3432_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 1, v___x_3434_);
v___x_3442_ = v___x_3437_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_value_3432_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v___x_3434_);
v___x_3442_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
uint32_t v___x_3443_; lean_object* v___x_3444_; 
v___x_3443_ = lasm_js_value_handle(v_value_3432_);
lean_dec(v_value_3432_);
v___x_3444_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3439_, v___x_3440_, v___x_3442_, v___x_3443_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; uint8_t v___x_3446_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3444_, 1);
v___x_3446_ = lean_string_validate_utf8(v_a_3445_);
if (v___x_3446_ == 0)
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_dec(v_a_3445_);
v___x_3447_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3448_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3447_);
v_received_3415_ = v___x_3448_;
goto v___jp_3414_;
}
else
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_string_from_utf8_unchecked(v_a_3445_);
v_received_3415_ = v___x_3449_;
goto v___jp_3414_;
}
}
else
{
lean_object* v___x_3450_; 
lean_dec_ref_known(v___x_3444_, 1);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3415_ = v___x_3450_;
goto v___jp_3414_;
}
}
}
}
}
else
{
goto v___jp_3429_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3471_, lean_object* v_d_3472_, lean_object* v_a_3473_){
_start:
{
lean_object* v_res_3474_; 
v_res_3474_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3471_, v_d_3472_);
lean_dec_ref(v_context_3471_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(lean_object* v_context_3475_, lean_object* v_bytes_3476_){
_start:
{
lean_object* v___x_3478_; 
v___x_3478_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3476_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3480_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0_spec__1(v_context_3475_, v_a_3479_);
return v___x_3480_;
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3488_; 
v_a_3481_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3483_ = v___x_3478_;
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3478_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0___boxed(lean_object* v_context_3489_, lean_object* v_bytes_3490_, lean_object* v_a_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v_context_3489_, v_bytes_3490_);
lean_dec_ref(v_bytes_3490_);
lean_dec_ref(v_context_3489_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(lean_object* v_o_3494_, lean_object* v_key_3495_){
_start:
{
lean_object* v_k_3497_; lean_object* v___x_3498_; 
v_k_3497_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3497_, 0, v_key_3495_);
lean_inc_ref(v_k_3497_);
v___x_3498_ = l_Lasm_JS_Wire_encodeIO(v_k_3497_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; uint32_t v___x_3500_; uint32_t v___x_3501_; uint64_t v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
v___x_3500_ = 203;
v___x_3501_ = lasm_js_value_handle(v_o_3494_);
v___x_3502_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3503_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3504_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3504_, 0, v_o_3494_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = lean_unsigned_to_nat(2u);
v___x_3506_ = lean_mk_empty_array_with_capacity(v___x_3505_);
lean_inc_ref(v_k_3497_);
v___x_3507_ = lean_array_push(v___x_3506_, v_k_3497_);
v___x_3508_ = lean_array_push(v___x_3507_, v___x_3504_);
v___x_3509_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
v___x_3510_ = lasm_js_call(v___x_3500_, v___x_3501_, v___x_3502_, v_a_3499_, v___x_3509_);
lean_dec_ref_known(v___x_3509_, 1);
lean_dec(v_a_3499_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___x_3512_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3497_);
v___x_3514_ = lean_string_append(v___x_3512_, v___x_3513_);
lean_dec_ref(v___x_3513_);
v___x_3515_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0_spec__0(v___x_3514_, v_a_3511_);
lean_dec(v_a_3511_);
lean_dec_ref(v___x_3514_);
return v___x_3515_;
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec_ref_known(v_k_3497_, 1);
v_a_3516_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3510_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3510_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
lean_dec_ref_known(v_k_3497_, 1);
lean_dec(v_o_3494_);
v_a_3524_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3498_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3498_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___boxed(lean_object* v_o_3532_, lean_object* v_key_3533_, lean_object* v_a_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_o_3532_, v_key_3533_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type(lean_object* v_self_3537_){
_start:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_type___closed__0));
v___x_3540_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0(v_self_3537_, v___x_3539_);
return v___x_3540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_type___boxed(lean_object* v_self_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lasm_JS_Web_CryptoKey_type(v_self_3541_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(lean_object* v_context_3545_, lean_object* v_d_3546_){
_start:
{
lean_object* v_received_3549_; 
if (lean_obj_tag(v_d_3546_) == 2)
{
uint8_t v_b_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v_b_3563_ = lean_ctor_get_uint8(v_d_3546_, 0);
lean_dec_ref_known(v_d_3546_, 0);
v___x_3564_ = lean_box(v_b_3563_);
v___x_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
return v___x_3565_;
}
else
{
if (lean_obj_tag(v_d_3546_) == 9)
{
lean_object* v_value_3566_; lean_object* v_description_3567_; lean_object* v___x_3568_; uint8_t v___x_3569_; 
v_value_3566_ = lean_ctor_get(v_d_3546_, 0);
v_description_3567_ = lean_ctor_get(v_d_3546_, 1);
v___x_3568_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3569_ = lean_string_dec_eq(v_description_3567_, v___x_3568_);
if (v___x_3569_ == 0)
{
goto v___jp_3561_;
}
else
{
uint32_t v___x_3570_; uint64_t v___x_3571_; lean_object* v___x_3572_; uint32_t v___x_3573_; lean_object* v___x_3574_; 
lean_inc_n(v_value_3566_, 2);
lean_dec_ref_known(v_d_3546_, 2);
v___x_3570_ = 206;
v___x_3571_ = 0ULL;
v___x_3572_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3572_, 0, v_value_3566_);
lean_ctor_set(v___x_3572_, 1, v___x_3568_);
v___x_3573_ = lasm_js_value_handle(v_value_3566_);
lean_dec(v_value_3566_);
v___x_3574_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3570_, v___x_3571_, v___x_3572_, v___x_3573_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; uint8_t v___x_3576_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v___x_3576_ = lean_string_validate_utf8(v_a_3575_);
if (v___x_3576_ == 0)
{
lean_object* v___x_3577_; lean_object* v___x_3578_; 
lean_dec(v_a_3575_);
v___x_3577_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_3578_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3577_);
v_received_3549_ = v___x_3578_;
goto v___jp_3548_;
}
else
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_string_from_utf8_unchecked(v_a_3575_);
v_received_3549_ = v___x_3579_;
goto v___jp_3548_;
}
}
else
{
lean_object* v___x_3580_; 
lean_dec_ref_known(v___x_3574_, 1);
v___x_3580_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v_received_3549_ = v___x_3580_;
goto v___jp_3548_;
}
}
}
else
{
goto v___jp_3561_;
}
}
v___jp_3548_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3550_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_3551_ = lean_string_append(v___x_3550_, v_context_3545_);
v___x_3552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_3553_ = lean_string_append(v___x_3551_, v___x_3552_);
v___x_3554_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___closed__0));
v___x_3555_ = lean_string_append(v___x_3553_, v___x_3554_);
v___x_3556_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_3557_ = lean_string_append(v___x_3555_, v___x_3556_);
v___x_3558_ = lean_string_append(v___x_3557_, v_received_3549_);
lean_dec_ref(v_received_3549_);
v___x_3559_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
v___x_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
return v___x_3560_;
}
v___jp_3561_:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_Lasm_JS_Data_describe(v_d_3546_);
v_received_3549_ = v___x_3562_;
goto v___jp_3548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3581_, lean_object* v_d_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3581_, v_d_3582_);
lean_dec_ref(v_context_3581_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(lean_object* v_context_3585_, lean_object* v_bytes_3586_){
_start:
{
lean_object* v___x_3588_; 
v___x_3588_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3586_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_a_3589_; lean_object* v___x_3590_; 
v_a_3589_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3588_, 1);
v___x_3590_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_3585_, v_a_3589_);
return v___x_3590_;
}
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
v_a_3591_ = lean_ctor_get(v___x_3588_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3588_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3588_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0___boxed(lean_object* v_context_3599_, lean_object* v_bytes_3600_, lean_object* v_a_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v_context_3599_, v_bytes_3600_);
lean_dec_ref(v_bytes_3600_);
lean_dec_ref(v_context_3599_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(lean_object* v_o_3603_, lean_object* v_key_3604_){
_start:
{
lean_object* v_k_3606_; lean_object* v___x_3607_; 
v_k_3606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3606_, 0, v_key_3604_);
lean_inc_ref(v_k_3606_);
v___x_3607_ = l_Lasm_JS_Wire_encodeIO(v_k_3606_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; uint32_t v___x_3609_; uint32_t v___x_3610_; uint64_t v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v___x_3609_ = 203;
v___x_3610_ = lasm_js_value_handle(v_o_3603_);
v___x_3611_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3612_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3613_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3613_, 0, v_o_3603_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = lean_unsigned_to_nat(2u);
v___x_3615_ = lean_mk_empty_array_with_capacity(v___x_3614_);
lean_inc_ref(v_k_3606_);
v___x_3616_ = lean_array_push(v___x_3615_, v_k_3606_);
v___x_3617_ = lean_array_push(v___x_3616_, v___x_3613_);
v___x_3618_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
v___x_3619_ = lasm_js_call(v___x_3609_, v___x_3610_, v___x_3611_, v_a_3608_, v___x_3618_);
lean_dec_ref_known(v___x_3618_, 1);
lean_dec(v_a_3608_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_a_3620_);
lean_dec_ref_known(v___x_3619_, 1);
v___x_3621_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_type_spec__0___closed__0));
v___x_3622_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3606_);
v___x_3623_ = lean_string_append(v___x_3621_, v___x_3622_);
lean_dec_ref(v___x_3622_);
v___x_3624_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0(v___x_3623_, v_a_3620_);
lean_dec(v_a_3620_);
lean_dec_ref(v___x_3623_);
return v___x_3624_;
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
lean_dec_ref_known(v_k_3606_, 1);
v_a_3625_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3619_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3619_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec_ref_known(v_k_3606_, 1);
lean_dec(v_o_3603_);
v_a_3633_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3607_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3607_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0___boxed(lean_object* v_o_3641_, lean_object* v_key_3642_, lean_object* v_a_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_o_3641_, v_key_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable(lean_object* v_self_3646_){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_extractable___closed__0));
v___x_3649_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0(v_self_3646_, v___x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_extractable___boxed(lean_object* v_self_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l_Lasm_JS_Web_CryptoKey_extractable(v_self_3650_);
return v_res_3652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(lean_object* v_o_3653_, lean_object* v_key_3654_){
_start:
{
lean_object* v_k_3656_; lean_object* v___x_3657_; 
v_k_3656_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3656_, 0, v_key_3654_);
lean_inc_ref(v_k_3656_);
v___x_3657_ = l_Lasm_JS_Wire_encodeIO(v_k_3656_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; uint32_t v___x_3659_; uint32_t v___x_3660_; uint64_t v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v___x_3657_, 1);
v___x_3659_ = 203;
v___x_3660_ = lasm_js_value_handle(v_o_3653_);
v___x_3661_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
v___x_3662_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_3663_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3663_, 0, v_o_3653_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
v___x_3664_ = lean_unsigned_to_nat(2u);
v___x_3665_ = lean_mk_empty_array_with_capacity(v___x_3664_);
v___x_3666_ = lean_array_push(v___x_3665_, v_k_3656_);
v___x_3667_ = lean_array_push(v___x_3666_, v___x_3663_);
v___x_3668_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
v___x_3669_ = lasm_js_call(v___x_3659_, v___x_3660_, v___x_3661_, v_a_3658_, v___x_3668_);
lean_dec_ref_known(v___x_3668_, 1);
lean_dec(v_a_3658_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; lean_object* v___x_3671_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_a_3670_);
lean_dec_ref_known(v___x_3669_, 1);
v___x_3671_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__1___redArg(v_a_3670_);
lean_dec(v_a_3670_);
return v___x_3671_;
}
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_a_3672_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3669_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3669_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
lean_dec_ref_known(v_k_3656_, 1);
lean_dec(v_o_3653_);
v_a_3680_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3657_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3657_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0___boxed(lean_object* v_o_3688_, lean_object* v_key_3689_, lean_object* v_a_3690_){
_start:
{
lean_object* v_res_3691_; 
v_res_3691_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_o_3688_, v_key_3689_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm(lean_object* v_self_3693_){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3695_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_algorithm___closed__0));
v___x_3696_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3693_, v___x_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_algorithm___boxed(lean_object* v_self_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Lasm_JS_Web_CryptoKey_algorithm(v_self_3697_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages(lean_object* v_self_3701_){
_start:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = ((lean_object*)(l_Lasm_JS_Web_CryptoKey_usages___closed__0));
v___x_3704_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_algorithm_spec__0(v_self_3701_, v___x_3703_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CryptoKey_usages___boxed(lean_object* v_self_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lasm_JS_Web_CryptoKey_usages(v_self_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(lean_object* v_x_3708_){
_start:
{
lean_object* v_val_3711_; 
if (lean_obj_tag(v_x_3708_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3721_; 
v_a_3713_ = lean_ctor_get(v_x_3708_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v_x_3708_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3715_ = v_x_3708_;
v_isShared_3716_ = v_isSharedCheck_3721_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v_x_3708_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3721_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
lean_object* v___x_3719_; 
v___x_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
return v___x_3719_;
}
}
}
else
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3735_; 
v_a_3722_ = lean_ctor_get(v_x_3708_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v_x_3708_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3724_ = v_x_3708_;
v_isShared_3725_ = v_isSharedCheck_3735_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v_x_3708_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3735_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___x_3726_; 
v___x_3726_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3722_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3729_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 0, v_a_3727_);
v___x_3729_ = v___x_3724_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_a_3727_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
v_val_3711_ = v___x_3729_;
goto v___jp_3710_;
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; 
v_a_3731_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3731_);
lean_dec_ref_known(v___x_3726_, 1);
if (v_isShared_3725_ == 0)
{
lean_ctor_set_tag(v___x_3724_, 0);
lean_ctor_set(v___x_3724_, 0, v_a_3731_);
v___x_3733_ = v___x_3724_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3731_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
v_val_3711_ = v___x_3733_;
goto v___jp_3710_;
}
}
}
}
v___jp_3710_:
{
lean_object* v___x_3712_; 
v___x_3712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3712_, 0, v_val_3711_);
return v___x_3712_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0___boxed(lean_object* v_x_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lasm_JS_Web_SubtleCrypto_encrypt___lam__0(v_x_3736_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(lean_object* v___f_3739_, lean_object* v_x_3740_){
_start:
{
if (lean_obj_tag(v_x_3740_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3750_; 
lean_dec_ref(v___f_3739_);
v_a_3742_ = lean_ctor_get(v_x_3740_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v_x_3740_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3744_ = v_x_3740_;
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v_x_3740_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3750_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
lean_object* v___x_3748_; 
v___x_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
return v___x_3748_;
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3752_; 
v_a_3751_ = lean_ctor_get(v_x_3740_, 0);
lean_inc(v_a_3751_);
lean_dec_ref_known(v_x_3740_, 1);
v___x_3752_ = lean_apply_2(v___f_3739_, v_a_3751_, lean_box(0));
return v___x_3752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3753_, lean_object* v_x_3754_, lean_object* v___y_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2(v___f_3753_, v_x_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(lean_object* v___f_3757_, lean_object* v_a_3758_, uint32_t v_op_3759_, uint64_t v_flags_3760_, lean_object* v_payload_3761_, lean_object* v_x_3762_){
_start:
{
if (lean_obj_tag(v_x_3762_) == 0)
{
lean_object* v___x_3764_; 
lean_dec_ref(v___f_3757_);
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v_x_3762_);
return v___x_3764_;
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3785_; 
v_a_3765_ = lean_ctor_get(v_x_3762_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v_x_3762_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3767_ = v_x_3762_;
v_isShared_3768_ = v_isSharedCheck_3785_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v_x_3762_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3785_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
uint32_t v___x_3769_; lean_object* v___x_3770_; uint8_t v___x_3771_; lean_object* v_val_3773_; lean_object* v___x_3776_; 
v___x_3769_ = 0;
v___x_3770_ = lean_unsigned_to_nat(0u);
v___x_3771_ = 0;
v___x_3776_ = lasm_js_call_into(v_a_3758_, v_op_3759_, v___x_3769_, v_flags_3760_, v_a_3765_, v_payload_3761_);
lean_dec(v_a_3765_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3779_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref_known(v___x_3776_, 1);
if (v_isShared_3768_ == 0)
{
lean_ctor_set(v___x_3767_, 0, v_a_3777_);
v___x_3779_ = v___x_3767_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3777_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
v_val_3773_ = v___x_3779_;
goto v___jp_3772_;
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; 
v_a_3781_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3781_);
lean_dec_ref_known(v___x_3776_, 1);
if (v_isShared_3768_ == 0)
{
lean_ctor_set_tag(v___x_3767_, 0);
lean_ctor_set(v___x_3767_, 0, v_a_3781_);
v___x_3783_ = v___x_3767_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
v_val_3773_ = v___x_3783_;
goto v___jp_3772_;
}
}
v___jp_3772_:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3774_, 0, v_val_3773_);
v___x_3775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3770_, v___x_3771_, v___x_3774_, v___f_3757_);
return v___x_3775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed(lean_object* v___f_3786_, lean_object* v_a_3787_, lean_object* v_op_3788_, lean_object* v_flags_3789_, lean_object* v_payload_3790_, lean_object* v_x_3791_, lean_object* v___y_3792_){
_start:
{
uint32_t v_op_boxed_3793_; uint64_t v_flags_boxed_3794_; lean_object* v_res_3795_; 
v_op_boxed_3793_ = lean_unbox_uint32(v_op_3788_);
lean_dec(v_op_3788_);
v_flags_boxed_3794_ = lean_unbox_uint64(v_flags_3789_);
lean_dec_ref(v_flags_3789_);
v_res_3795_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7(v___f_3786_, v_a_3787_, v_op_boxed_3793_, v_flags_boxed_3794_, v_payload_3790_, v_x_3791_);
lean_dec(v_payload_3790_);
lean_dec(v_a_3787_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(lean_object* v___x_3796_, uint8_t v___x_3797_, lean_object* v___f_3798_, lean_object* v_a_3799_, uint32_t v_op_3800_, uint64_t v_flags_3801_, lean_object* v_payload_3802_, lean_object* v_x_3803_){
_start:
{
lean_object* v_val_3806_; 
if (lean_obj_tag(v_x_3803_) == 0)
{
lean_object* v___x_3809_; 
lean_dec_ref(v___f_3798_);
lean_dec(v___x_3796_);
v___x_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3809_, 0, v_x_3803_);
return v___x_3809_;
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3824_; 
v_a_3810_ = lean_ctor_get(v_x_3803_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v_x_3803_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3812_ = v_x_3803_;
v_isShared_3813_ = v_isSharedCheck_3824_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v_x_3803_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3824_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
uint32_t v___x_3814_; lean_object* v___x_3815_; 
v___x_3814_ = 0;
v___x_3815_ = lasm_js_call_into(v_a_3799_, v_op_3800_, v___x_3814_, v_flags_3801_, v_a_3810_, v_payload_3802_);
lean_dec(v_a_3810_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v_a_3816_; lean_object* v___x_3818_; 
v_a_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_a_3816_);
lean_dec_ref_known(v___x_3815_, 1);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 0, v_a_3816_);
v___x_3818_ = v___x_3812_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3816_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
v_val_3806_ = v___x_3818_;
goto v___jp_3805_;
}
}
else
{
lean_object* v_a_3820_; lean_object* v___x_3822_; 
v_a_3820_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_a_3820_);
lean_dec_ref_known(v___x_3815_, 1);
if (v_isShared_3813_ == 0)
{
lean_ctor_set_tag(v___x_3812_, 0);
lean_ctor_set(v___x_3812_, 0, v_a_3820_);
v___x_3822_ = v___x_3812_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
v_val_3806_ = v___x_3822_;
goto v___jp_3805_;
}
}
}
}
v___jp_3805_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3807_, 0, v_val_3806_);
v___x_3808_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3796_, v___x_3797_, v___x_3807_, v___f_3798_);
return v___x_3808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed(lean_object* v___x_3825_, lean_object* v___x_3826_, lean_object* v___f_3827_, lean_object* v_a_3828_, lean_object* v_op_3829_, lean_object* v_flags_3830_, lean_object* v_payload_3831_, lean_object* v_x_3832_, lean_object* v___y_3833_){
_start:
{
uint8_t v___x_1154__boxed_3834_; uint32_t v_op_boxed_3835_; uint64_t v_flags_boxed_3836_; lean_object* v_res_3837_; 
v___x_1154__boxed_3834_ = lean_unbox(v___x_3826_);
v_op_boxed_3835_ = lean_unbox_uint32(v_op_3829_);
lean_dec(v_op_3829_);
v_flags_boxed_3836_ = lean_unbox_uint64(v_flags_3830_);
lean_dec_ref(v_flags_3830_);
v_res_3837_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5(v___x_3825_, v___x_1154__boxed_3834_, v___f_3827_, v_a_3828_, v_op_boxed_3835_, v_flags_boxed_3836_, v_payload_3831_, v_x_3832_);
lean_dec(v_payload_3831_);
lean_dec(v_a_3828_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(lean_object* v_a_3838_, lean_object* v_x_3839_){
_start:
{
if (lean_obj_tag(v_x_3839_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
v_a_3841_ = lean_ctor_get(v_x_3839_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_x_3839_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3843_ = v_x_3839_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v_x_3839_);
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
lean_object* v___x_3850_; 
lean_dec_ref_known(v_x_3839_, 1);
v___x_3850_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3838_);
return v___x_3850_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed(lean_object* v_a_3851_, lean_object* v_x_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3(v_a_3851_, v_x_3852_);
lean_dec(v_a_3851_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_3855_, uint32_t v_op_3856_, uint64_t v_flags_3857_, lean_object* v_payload_3858_, lean_object* v___f_3859_, lean_object* v___f_3860_, lean_object* v___f_3861_, lean_object* v_x_3862_){
_start:
{
if (lean_obj_tag(v_x_3862_) == 0)
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3872_; 
lean_dec_ref(v___f_3861_);
lean_dec_ref(v___f_3860_);
lean_dec_ref(v___f_3859_);
lean_dec(v_payload_3858_);
v_a_3864_ = lean_ctor_get(v_x_3862_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_x_3862_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3866_ = v_x_3862_;
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v_x_3862_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3870_; 
v___x_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
return v___x_3870_;
}
}
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3919_; 
v_a_3873_ = lean_ctor_get(v_x_3862_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v_x_3862_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3875_ = v_x_3862_;
v_isShared_3876_ = v_isSharedCheck_3919_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v_x_3862_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3919_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; uint8_t v___x_3879_; 
v___x_3877_ = lean_string_utf8_byte_size(v_failurePrefix_3855_);
v___x_3878_ = lean_unsigned_to_nat(0u);
v___x_3879_ = lean_nat_dec_eq(v___x_3877_, v___x_3878_);
if (v___x_3879_ == 0)
{
lean_object* v___f_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___f_3884_; lean_object* v_val_3886_; lean_object* v___x_3891_; 
lean_dec_ref(v___f_3861_);
lean_inc(v_a_3873_);
v___f_3880_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3880_, 0, v_a_3873_);
v___x_3881_ = lean_box(v___x_3879_);
v___x_3882_ = lean_box_uint32(v_op_3856_);
v___x_3883_ = lean_box_uint64(v_flags_3857_);
lean_inc(v_payload_3858_);
v___f_3884_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3884_, 0, v___x_3878_);
lean_closure_set(v___f_3884_, 1, v___x_3881_);
lean_closure_set(v___f_3884_, 2, v___f_3880_);
lean_closure_set(v___f_3884_, 3, v_a_3873_);
lean_closure_set(v___f_3884_, 4, v___x_3882_);
lean_closure_set(v___f_3884_, 5, v___x_3883_);
lean_closure_set(v___f_3884_, 6, v_payload_3858_);
v___x_3891_ = l_Lasm_JS_Wire_encodeIO(v_payload_3858_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v___x_3894_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v_a_3892_);
v___x_3894_ = v___x_3875_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3892_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
v_val_3886_ = v___x_3894_;
goto v___jp_3885_;
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; 
v_a_3896_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3896_);
lean_dec_ref_known(v___x_3891_, 1);
if (v_isShared_3876_ == 0)
{
lean_ctor_set_tag(v___x_3875_, 0);
lean_ctor_set(v___x_3875_, 0, v_a_3896_);
v___x_3898_ = v___x_3875_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_a_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
v_val_3886_ = v___x_3898_;
goto v___jp_3885_;
}
}
v___jp_3885_:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3887_, 0, v_val_3886_);
v___x_3888_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3878_, v___x_3879_, v___x_3887_, v___f_3884_);
v___x_3889_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3878_, v___x_3879_, v___x_3888_, v___f_3859_);
v___x_3890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3878_, v___x_3879_, v___x_3889_, v___f_3860_);
return v___x_3890_;
}
}
else
{
lean_object* v___f_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___f_3903_; uint8_t v___x_3904_; lean_object* v_val_3906_; lean_object* v___x_3910_; 
lean_dec_ref(v___f_3860_);
lean_dec_ref(v___f_3859_);
lean_inc(v_a_3873_);
v___f_3900_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3900_, 0, v_a_3873_);
v___x_3901_ = lean_box_uint32(v_op_3856_);
v___x_3902_ = lean_box_uint64(v_flags_3857_);
lean_inc(v_payload_3858_);
v___f_3903_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3903_, 0, v___f_3900_);
lean_closure_set(v___f_3903_, 1, v_a_3873_);
lean_closure_set(v___f_3903_, 2, v___x_3901_);
lean_closure_set(v___f_3903_, 3, v___x_3902_);
lean_closure_set(v___f_3903_, 4, v_payload_3858_);
v___x_3904_ = 0;
v___x_3910_ = l_Lasm_JS_Wire_encodeIO(v_payload_3858_);
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_object* v_a_3911_; lean_object* v___x_3913_; 
v_a_3911_ = lean_ctor_get(v___x_3910_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v___x_3910_, 1);
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v_a_3911_);
v___x_3913_ = v___x_3875_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
v_val_3906_ = v___x_3913_;
goto v___jp_3905_;
}
}
else
{
lean_object* v_a_3915_; lean_object* v___x_3917_; 
v_a_3915_ = lean_ctor_get(v___x_3910_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3910_, 1);
if (v_isShared_3876_ == 0)
{
lean_ctor_set_tag(v___x_3875_, 0);
lean_ctor_set(v___x_3875_, 0, v_a_3915_);
v___x_3917_ = v___x_3875_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3915_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
v_val_3906_ = v___x_3917_;
goto v___jp_3905_;
}
}
v___jp_3905_:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3907_, 0, v_val_3906_);
v___x_3908_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3878_, v___x_3904_, v___x_3907_, v___f_3903_);
v___x_3909_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3878_, v___x_3904_, v___x_3908_, v___f_3861_);
return v___x_3909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_3920_, lean_object* v_op_3921_, lean_object* v_flags_3922_, lean_object* v_payload_3923_, lean_object* v___f_3924_, lean_object* v___f_3925_, lean_object* v___f_3926_, lean_object* v_x_3927_, lean_object* v___y_3928_){
_start:
{
uint32_t v_op_boxed_3929_; uint64_t v_flags_boxed_3930_; lean_object* v_res_3931_; 
v_op_boxed_3929_ = lean_unbox_uint32(v_op_3921_);
lean_dec(v_op_3921_);
v_flags_boxed_3930_ = lean_unbox_uint64(v_flags_3922_);
lean_dec_ref(v_flags_3922_);
v_res_3931_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6(v_failurePrefix_3920_, v_op_boxed_3929_, v_flags_boxed_3930_, v_payload_3923_, v___f_3924_, v___f_3925_, v___f_3926_, v_x_3927_);
lean_dec_ref(v_failurePrefix_3920_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_3932_, lean_object* v_x_3933_){
_start:
{
if (lean_obj_tag(v_x_3933_) == 0)
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3946_; 
v_a_3935_ = lean_ctor_get(v_x_3933_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v_x_3933_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3937_ = v_x_3933_;
v_isShared_3938_ = v_isSharedCheck_3946_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v_x_3933_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3946_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3943_; 
v___x_3939_ = lean_io_error_to_string(v_a_3935_);
v___x_3940_ = lean_string_append(v_failurePrefix_3932_, v___x_3939_);
lean_dec_ref(v___x_3939_);
v___x_3941_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_3941_);
v___x_3943_ = v___x_3937_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3941_);
v___x_3943_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
return v___x_3944_;
}
}
}
else
{
lean_object* v___x_3947_; 
lean_dec_ref(v_failurePrefix_3932_);
v___x_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3947_, 0, v_x_3933_);
return v___x_3947_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_3948_, lean_object* v_x_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4(v_failurePrefix_3948_, v_x_3949_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(lean_object* v___f_3952_, lean_object* v_bytes_3953_){
_start:
{
lean_object* v___x_3955_; uint8_t v___x_3956_; lean_object* v_val_3958_; lean_object* v___x_3961_; 
v___x_3955_ = lean_unsigned_to_nat(0u);
v___x_3956_ = 0;
v___x_3961_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3953_);
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3969_; 
v_a_3962_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3964_ = v___x_3961_;
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v___x_3961_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
lean_ctor_set_tag(v___x_3964_, 1);
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
v_val_3958_ = v___x_3967_;
goto v___jp_3957_;
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_a_3970_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3961_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3961_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
lean_ctor_set_tag(v___x_3972_, 0);
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
v_val_3958_ = v___x_3975_;
goto v___jp_3957_;
}
}
}
v___jp_3957_:
{
lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3959_, 0, v_val_3958_);
v___x_3960_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3955_, v___x_3956_, v___x_3959_, v___f_3952_);
return v___x_3960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3978_, lean_object* v_bytes_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1(v___f_3978_, v_bytes_3979_);
lean_dec_ref(v_bytes_3979_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(lean_object* v___f_3982_, lean_object* v_x_3983_){
_start:
{
if (lean_obj_tag(v_x_3983_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3993_; 
lean_dec_ref(v___f_3982_);
v_a_3985_ = lean_ctor_get(v_x_3983_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3987_ = v_x_3983_;
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v_x_3983_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
lean_object* v___x_3991_; 
v___x_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3990_);
return v___x_3991_;
}
}
}
else
{
lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4005_; 
v_isSharedCheck_4005_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v_x_3983_, 0);
lean_dec(v_unused_4006_);
v___x_3995_ = v_x_3983_;
v_isShared_3996_ = v_isSharedCheck_4005_;
goto v_resetjp_3994_;
}
else
{
lean_dec(v_x_3983_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4005_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3997_; uint8_t v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4001_; 
v___x_3997_ = lean_unsigned_to_nat(0u);
v___x_3998_ = 0;
v___x_3999_ = lean_io_promise_new();
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 0, v___x_3999_);
v___x_4001_ = v___x_3995_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v___x_3999_);
v___x_4001_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; 
v___x_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4002_, 0, v___x_4001_);
v___x_4003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3997_, v___x_3998_, v___x_4002_, v___f_3982_);
return v___x_4003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed(lean_object* v___f_4007_, lean_object* v_x_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8(v___f_4007_, v_x_4008_);
return v_res_4010_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(lean_object* v_context_4011_, lean_object* v_x_4012_){
_start:
{
lean_object* v_val_4015_; 
if (lean_obj_tag(v_x_4012_) == 0)
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4025_; 
v_a_4017_ = lean_ctor_get(v_x_4012_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_x_4012_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4019_ = v_x_4012_;
v_isShared_4020_ = v_isSharedCheck_4025_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v_x_4012_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4025_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
lean_object* v___x_4023_; 
v___x_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
return v___x_4023_;
}
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4039_; 
v_a_4026_ = lean_ctor_get(v_x_4012_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v_x_4012_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4028_ = v_x_4012_;
v_isShared_4029_ = v_isSharedCheck_4039_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v_x_4012_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4039_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4030_; 
v___x_4030_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4011_, v_a_4026_);
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v_a_4031_; lean_object* v___x_4033_; 
v_a_4031_ = lean_ctor_get(v___x_4030_, 0);
lean_inc(v_a_4031_);
lean_dec_ref_known(v___x_4030_, 1);
if (v_isShared_4029_ == 0)
{
lean_ctor_set(v___x_4028_, 0, v_a_4031_);
v___x_4033_ = v___x_4028_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4031_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
v_val_4015_ = v___x_4033_;
goto v___jp_4014_;
}
}
else
{
lean_object* v_a_4035_; lean_object* v___x_4037_; 
v_a_4035_ = lean_ctor_get(v___x_4030_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v___x_4030_, 1);
if (v_isShared_4029_ == 0)
{
lean_ctor_set_tag(v___x_4028_, 0);
lean_ctor_set(v___x_4028_, 0, v_a_4035_);
v___x_4037_ = v___x_4028_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_a_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
v_val_4015_ = v___x_4037_;
goto v___jp_4014_;
}
}
}
}
v___jp_4014_:
{
lean_object* v___x_4016_; 
v___x_4016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4016_, 0, v_val_4015_);
return v___x_4016_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4040_, lean_object* v_x_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0(v_context_4040_, v_x_4041_);
lean_dec_ref(v_context_4040_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(lean_object* v_context_4044_, uint32_t v_op_4045_, uint64_t v_flags_4046_, lean_object* v_payload_4047_, lean_object* v_failurePrefix_4048_){
_start:
{
lean_object* v___f_4050_; lean_object* v___f_4051_; lean_object* v___f_4052_; lean_object* v___f_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___f_4056_; lean_object* v___f_4057_; lean_object* v___x_4058_; uint8_t v___x_4059_; lean_object* v_val_4061_; lean_object* v___x_4064_; 
v___f_4050_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4050_, 0, v_context_4044_);
v___f_4051_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4051_, 0, v___f_4050_);
v___f_4052_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4052_, 0, v___f_4051_);
lean_inc_ref(v_failurePrefix_4048_);
v___f_4053_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4053_, 0, v_failurePrefix_4048_);
v___x_4054_ = lean_box_uint32(v_op_4045_);
v___x_4055_ = lean_box_uint64(v_flags_4046_);
lean_inc_ref(v___f_4052_);
v___f_4056_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4056_, 0, v_failurePrefix_4048_);
lean_closure_set(v___f_4056_, 1, v___x_4054_);
lean_closure_set(v___f_4056_, 2, v___x_4055_);
lean_closure_set(v___f_4056_, 3, v_payload_4047_);
lean_closure_set(v___f_4056_, 4, v___f_4053_);
lean_closure_set(v___f_4056_, 5, v___f_4052_);
lean_closure_set(v___f_4056_, 6, v___f_4052_);
v___f_4057_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4057_, 0, v___f_4056_);
v___x_4058_ = lean_unsigned_to_nat(0u);
v___x_4059_ = 0;
v___x_4064_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4064_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4064_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
lean_ctor_set_tag(v___x_4067_, 1);
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
v_val_4061_ = v___x_4070_;
goto v___jp_4060_;
}
}
}
else
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4080_; 
v_a_4073_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4075_ = v___x_4064_;
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4064_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4078_; 
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
v___x_4078_ = v___x_4075_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_a_4073_);
v___x_4078_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
v_val_4061_ = v___x_4078_;
goto v___jp_4060_;
}
}
}
v___jp_4060_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v_val_4061_);
v___x_4063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4058_, v___x_4059_, v___x_4062_, v___f_4057_);
return v___x_4063_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___boxed(lean_object* v_context_4081_, lean_object* v_op_4082_, lean_object* v_flags_4083_, lean_object* v_payload_4084_, lean_object* v_failurePrefix_4085_, lean_object* v_a_4086_){
_start:
{
uint32_t v_op_boxed_4087_; uint64_t v_flags_boxed_4088_; lean_object* v_res_4089_; 
v_op_boxed_4087_ = lean_unbox_uint32(v_op_4082_);
lean_dec(v_op_4082_);
v_flags_boxed_4088_ = lean_unbox_uint64(v_flags_4083_);
lean_dec_ref(v_flags_4083_);
v_res_4089_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v_context_4081_, v_op_boxed_4087_, v_flags_boxed_4088_, v_payload_4084_, v_failurePrefix_4085_);
return v_res_4089_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_4090_; uint64_t v___x_4091_; 
v___x_4090_ = 1;
v___x_4091_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(uint8_t v_await_4092_, uint64_t v_extra_4093_){
_start:
{
uint64_t v___x_4094_; uint64_t v___y_4096_; 
v___x_4094_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___closed__0);
if (v_await_4092_ == 0)
{
uint64_t v___x_4099_; 
v___x_4099_ = 0ULL;
v___y_4096_ = v___x_4099_;
goto v___jp_4095_;
}
else
{
uint64_t v___x_4100_; 
v___x_4100_ = 2ULL;
v___y_4096_ = v___x_4100_;
goto v___jp_4095_;
}
v___jp_4095_:
{
uint64_t v___x_4097_; uint64_t v___x_4098_; 
v___x_4097_ = lean_uint64_lor(v___x_4094_, v___y_4096_);
v___x_4098_ = lean_uint64_lor(v___x_4097_, v_extra_4093_);
return v___x_4098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0___boxed(lean_object* v_await_4101_, lean_object* v_extra_4102_){
_start:
{
uint8_t v_await_boxed_4103_; uint64_t v_extra_boxed_4104_; uint64_t v_res_4105_; lean_object* v_r_4106_; 
v_await_boxed_4103_ = lean_unbox(v_await_4101_);
v_extra_boxed_4104_ = lean_unbox_uint64(v_extra_4102_);
lean_dec_ref(v_extra_4102_);
v_res_4105_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v_await_boxed_4103_, v_extra_boxed_4104_);
v_r_4106_ = lean_box_uint64(v_res_4105_);
return v_r_4106_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4107_; uint8_t v___x_4108_; uint64_t v___x_4109_; 
v___x_4107_ = 8ULL;
v___x_4108_ = 0;
v___x_4109_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__0(v___x_4108_, v___x_4107_);
return v___x_4109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(lean_object* v_o_4110_, lean_object* v_name_4111_, lean_object* v_args_4112_){
_start:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; uint32_t v___x_4119_; uint64_t v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4115_, 0, v_o_4110_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
lean_inc_ref(v_name_4111_);
v___x_4116_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4116_, 0, v_name_4111_);
v___x_4117_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4118_ = lean_string_append(v___x_4117_, v_name_4111_);
lean_dec_ref(v_name_4111_);
v___x_4119_ = 205;
v___x_4120_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___closed__0);
v___x_4121_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4121_, 0, v_args_4112_);
v___x_4122_ = lean_unsigned_to_nat(3u);
v___x_4123_ = lean_mk_empty_array_with_capacity(v___x_4122_);
v___x_4124_ = lean_array_push(v___x_4123_, v___x_4115_);
v___x_4125_ = lean_array_push(v___x_4124_, v___x_4116_);
v___x_4126_ = lean_array_push(v___x_4125_, v___x_4121_);
v___x_4127_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
v___x_4128_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1(v___x_4118_, v___x_4119_, v___x_4120_, v___x_4127_, v___x_4114_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0___boxed(lean_object* v_o_4129_, lean_object* v_name_4130_, lean_object* v_args_4131_, lean_object* v___y_4132_){
_start:
{
lean_object* v_res_4133_; 
v_res_4133_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_o_4129_, v_name_4130_, v_args_4131_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt(lean_object* v_self_4135_, lean_object* v_algorithm_4136_, lean_object* v_key_4137_, lean_object* v_data_4138_){
_start:
{
lean_object* v___f_4140_; lean_object* v___x_4141_; lean_object* v___y_4143_; 
v___f_4140_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__0));
if (lean_obj_tag(v_algorithm_4136_) == 0)
{
lean_object* v_value_4157_; 
v_value_4157_ = lean_ctor_get(v_algorithm_4136_, 0);
lean_inc(v_value_4157_);
lean_dec_ref_known(v_algorithm_4136_, 1);
v___y_4143_ = v_value_4157_;
goto v___jp_4142_;
}
else
{
lean_object* v_value_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
v_value_4158_ = lean_ctor_get(v_algorithm_4136_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_algorithm_4136_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v_algorithm_4136_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_value_4158_);
lean_dec(v_algorithm_4136_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
lean_ctor_set_tag(v___x_4160_, 4);
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_value_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
v___y_4143_ = v___x_4163_;
goto v___jp_4142_;
}
}
}
v___jp_4142_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; uint8_t v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4145_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4145_, 0, v_key_4137_);
lean_ctor_set(v___x_4145_, 1, v___x_4144_);
v___x_4146_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4146_, 0, v_data_4138_);
v___x_4147_ = lean_unsigned_to_nat(3u);
v___x_4148_ = lean_mk_empty_array_with_capacity(v___x_4147_);
v___x_4149_ = lean_array_push(v___x_4148_, v___y_4143_);
v___x_4150_ = lean_array_push(v___x_4149_, v___x_4145_);
v___x_4151_ = lean_array_push(v___x_4150_, v___x_4146_);
v___x_4152_ = l_Lasm_JS_Web_Support_args(v___x_4151_);
v___x_4153_ = lean_unsigned_to_nat(0u);
v___x_4154_ = 0;
v___x_4155_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4135_, v___x_4141_, v___x_4152_);
v___x_4156_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4153_, v___x_4154_, v___x_4155_, v___f_4140_);
return v___x_4156_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_encrypt___boxed(lean_object* v_self_4166_, lean_object* v_algorithm_4167_, lean_object* v_key_4168_, lean_object* v_data_4169_, lean_object* v_a_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lasm_JS_Web_SubtleCrypto_encrypt(v_self_4166_, v_algorithm_4167_, v_key_4168_, v_data_4169_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt(lean_object* v_self_4172_, lean_object* v_algorithm_4173_, lean_object* v_key_4174_, lean_object* v_data_4175_){
_start:
{
lean_object* v___f_4177_; lean_object* v___x_4178_; lean_object* v___y_4180_; 
v___f_4177_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4178_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__2));
if (lean_obj_tag(v_algorithm_4173_) == 0)
{
lean_object* v_value_4194_; 
v_value_4194_ = lean_ctor_get(v_algorithm_4173_, 0);
lean_inc(v_value_4194_);
lean_dec_ref_known(v_algorithm_4173_, 1);
v___y_4180_ = v_value_4194_;
goto v___jp_4179_;
}
else
{
lean_object* v_value_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
v_value_4195_ = lean_ctor_get(v_algorithm_4173_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v_algorithm_4173_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v_algorithm_4173_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_value_4195_);
lean_dec(v_algorithm_4173_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
lean_ctor_set_tag(v___x_4197_, 4);
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_value_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
v___y_4180_ = v___x_4200_;
goto v___jp_4179_;
}
}
}
v___jp_4179_:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4181_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4182_, 0, v_key_4174_);
lean_ctor_set(v___x_4182_, 1, v___x_4181_);
v___x_4183_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_data_4175_);
v___x_4184_ = lean_unsigned_to_nat(3u);
v___x_4185_ = lean_mk_empty_array_with_capacity(v___x_4184_);
v___x_4186_ = lean_array_push(v___x_4185_, v___y_4180_);
v___x_4187_ = lean_array_push(v___x_4186_, v___x_4182_);
v___x_4188_ = lean_array_push(v___x_4187_, v___x_4183_);
v___x_4189_ = l_Lasm_JS_Web_Support_args(v___x_4188_);
v___x_4190_ = lean_unsigned_to_nat(0u);
v___x_4191_ = 0;
v___x_4192_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4172_, v___x_4178_, v___x_4189_);
v___x_4193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4190_, v___x_4191_, v___x_4192_, v___f_4177_);
return v___x_4193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_decrypt___boxed(lean_object* v_self_4203_, lean_object* v_algorithm_4204_, lean_object* v_key_4205_, lean_object* v_data_4206_, lean_object* v_a_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Lasm_JS_Web_SubtleCrypto_decrypt(v_self_4203_, v_algorithm_4204_, v_key_4205_, v_data_4206_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign(lean_object* v_self_4209_, lean_object* v_algorithm_4210_, lean_object* v_key_4211_, lean_object* v_data_4212_){
_start:
{
lean_object* v___f_4214_; lean_object* v___x_4215_; lean_object* v___y_4217_; 
v___f_4214_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4215_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__4));
if (lean_obj_tag(v_algorithm_4210_) == 0)
{
lean_object* v_value_4231_; 
v_value_4231_ = lean_ctor_get(v_algorithm_4210_, 0);
lean_inc(v_value_4231_);
lean_dec_ref_known(v_algorithm_4210_, 1);
v___y_4217_ = v_value_4231_;
goto v___jp_4216_;
}
else
{
lean_object* v_value_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4239_; 
v_value_4232_ = lean_ctor_get(v_algorithm_4210_, 0);
v_isSharedCheck_4239_ = !lean_is_exclusive(v_algorithm_4210_);
if (v_isSharedCheck_4239_ == 0)
{
v___x_4234_ = v_algorithm_4210_;
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_value_4232_);
lean_dec(v_algorithm_4210_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4237_; 
if (v_isShared_4235_ == 0)
{
lean_ctor_set_tag(v___x_4234_, 4);
v___x_4237_ = v___x_4234_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v_value_4232_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
v___y_4217_ = v___x_4237_;
goto v___jp_4216_;
}
}
}
v___jp_4216_:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; uint8_t v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4218_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4219_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4219_, 0, v_key_4211_);
lean_ctor_set(v___x_4219_, 1, v___x_4218_);
v___x_4220_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4220_, 0, v_data_4212_);
v___x_4221_ = lean_unsigned_to_nat(3u);
v___x_4222_ = lean_mk_empty_array_with_capacity(v___x_4221_);
v___x_4223_ = lean_array_push(v___x_4222_, v___y_4217_);
v___x_4224_ = lean_array_push(v___x_4223_, v___x_4219_);
v___x_4225_ = lean_array_push(v___x_4224_, v___x_4220_);
v___x_4226_ = l_Lasm_JS_Web_Support_args(v___x_4225_);
v___x_4227_ = lean_unsigned_to_nat(0u);
v___x_4228_ = 0;
v___x_4229_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4209_, v___x_4215_, v___x_4226_);
v___x_4230_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4227_, v___x_4228_, v___x_4229_, v___f_4214_);
return v___x_4230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_sign___boxed(lean_object* v_self_4240_, lean_object* v_algorithm_4241_, lean_object* v_key_4242_, lean_object* v_data_4243_, lean_object* v_a_4244_){
_start:
{
lean_object* v_res_4245_; 
v_res_4245_ = l_Lasm_JS_Web_SubtleCrypto_sign(v_self_4240_, v_algorithm_4241_, v_key_4242_, v_data_4243_);
return v_res_4245_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(uint8_t v_await_4246_, uint64_t v_extra_4247_){
_start:
{
uint64_t v___x_4248_; uint64_t v___y_4250_; 
v___x_4248_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_4246_ == 0)
{
uint64_t v___x_4253_; 
v___x_4253_ = 0ULL;
v___y_4250_ = v___x_4253_;
goto v___jp_4249_;
}
else
{
uint64_t v___x_4254_; 
v___x_4254_ = 2ULL;
v___y_4250_ = v___x_4254_;
goto v___jp_4249_;
}
v___jp_4249_:
{
uint64_t v___x_4251_; uint64_t v___x_4252_; 
v___x_4251_ = lean_uint64_lor(v___x_4248_, v___y_4250_);
v___x_4252_ = lean_uint64_lor(v___x_4251_, v_extra_4247_);
return v___x_4252_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0___boxed(lean_object* v_await_4255_, lean_object* v_extra_4256_){
_start:
{
uint8_t v_await_boxed_4257_; uint64_t v_extra_boxed_4258_; uint64_t v_res_4259_; lean_object* v_r_4260_; 
v_await_boxed_4257_ = lean_unbox(v_await_4255_);
v_extra_boxed_4258_ = lean_unbox_uint64(v_extra_4256_);
lean_dec_ref(v_extra_4256_);
v_res_4259_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v_await_boxed_4257_, v_extra_boxed_4258_);
v_r_4260_ = lean_box_uint64(v_res_4259_);
return v_r_4260_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4261_, uint32_t v_op_4262_, uint64_t v_flags_4263_, lean_object* v_payload_4264_, lean_object* v___f_4265_, lean_object* v___f_4266_, lean_object* v___f_4267_, lean_object* v_x_4268_){
_start:
{
if (lean_obj_tag(v_x_4268_) == 0)
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4278_; 
lean_dec_ref(v___f_4267_);
lean_dec_ref(v___f_4266_);
lean_dec_ref(v___f_4265_);
lean_dec(v_payload_4264_);
v_a_4270_ = lean_ctor_get(v_x_4268_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v_x_4268_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4272_ = v_x_4268_;
v_isShared_4273_ = v_isSharedCheck_4278_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v_x_4268_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4278_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4275_; 
if (v_isShared_4273_ == 0)
{
v___x_4275_ = v___x_4272_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4270_);
v___x_4275_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
lean_object* v___x_4276_; 
v___x_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4275_);
return v___x_4276_;
}
}
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4325_; 
v_a_4279_ = lean_ctor_get(v_x_4268_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v_x_4268_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4281_ = v_x_4268_;
v_isShared_4282_ = v_isSharedCheck_4325_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v_x_4268_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4325_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4283_; lean_object* v___x_4284_; uint8_t v___x_4285_; 
v___x_4283_ = lean_string_utf8_byte_size(v_failurePrefix_4261_);
v___x_4284_ = lean_unsigned_to_nat(0u);
v___x_4285_ = lean_nat_dec_eq(v___x_4283_, v___x_4284_);
if (v___x_4285_ == 0)
{
lean_object* v___f_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___f_4290_; lean_object* v_val_4292_; lean_object* v___x_4297_; 
lean_dec_ref(v___f_4267_);
lean_inc(v_a_4279_);
v___f_4286_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4286_, 0, v_a_4279_);
v___x_4287_ = lean_box(v___x_4285_);
v___x_4288_ = lean_box_uint32(v_op_4262_);
v___x_4289_ = lean_box_uint64(v_flags_4263_);
lean_inc(v_payload_4264_);
v___f_4290_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4290_, 0, v___x_4284_);
lean_closure_set(v___f_4290_, 1, v___x_4287_);
lean_closure_set(v___f_4290_, 2, v___f_4286_);
lean_closure_set(v___f_4290_, 3, v_a_4279_);
lean_closure_set(v___f_4290_, 4, v___x_4288_);
lean_closure_set(v___f_4290_, 5, v___x_4289_);
lean_closure_set(v___f_4290_, 6, v_payload_4264_);
v___x_4297_ = l_Lasm_JS_Wire_encodeIO(v_payload_4264_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4300_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 0, v_a_4298_);
v___x_4300_ = v___x_4281_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v_a_4298_);
v___x_4300_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
v_val_4292_ = v___x_4300_;
goto v___jp_4291_;
}
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4304_; 
v_a_4302_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v___x_4297_, 1);
if (v_isShared_4282_ == 0)
{
lean_ctor_set_tag(v___x_4281_, 0);
lean_ctor_set(v___x_4281_, 0, v_a_4302_);
v___x_4304_ = v___x_4281_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v_a_4302_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
v_val_4292_ = v___x_4304_;
goto v___jp_4291_;
}
}
v___jp_4291_:
{
lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v_val_4292_);
v___x_4294_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4285_, v___x_4293_, v___f_4290_);
v___x_4295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4285_, v___x_4294_, v___f_4265_);
v___x_4296_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4285_, v___x_4295_, v___f_4266_);
return v___x_4296_;
}
}
else
{
lean_object* v___f_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___f_4309_; uint8_t v___x_4310_; lean_object* v_val_4312_; lean_object* v___x_4316_; 
lean_dec_ref(v___f_4266_);
lean_dec_ref(v___f_4265_);
lean_inc(v_a_4279_);
v___f_4306_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4306_, 0, v_a_4279_);
v___x_4307_ = lean_box_uint32(v_op_4262_);
v___x_4308_ = lean_box_uint64(v_flags_4263_);
lean_inc(v_payload_4264_);
v___f_4309_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4309_, 0, v___f_4306_);
lean_closure_set(v___f_4309_, 1, v_a_4279_);
lean_closure_set(v___f_4309_, 2, v___x_4307_);
lean_closure_set(v___f_4309_, 3, v___x_4308_);
lean_closure_set(v___f_4309_, 4, v_payload_4264_);
v___x_4310_ = 0;
v___x_4316_ = l_Lasm_JS_Wire_encodeIO(v_payload_4264_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4317_);
lean_dec_ref_known(v___x_4316_, 1);
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 0, v_a_4317_);
v___x_4319_ = v___x_4281_;
goto v_reusejp_4318_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v_a_4317_);
v___x_4319_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4318_;
}
v_reusejp_4318_:
{
v_val_4312_ = v___x_4319_;
goto v___jp_4311_;
}
}
else
{
lean_object* v_a_4321_; lean_object* v___x_4323_; 
v_a_4321_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4321_);
lean_dec_ref_known(v___x_4316_, 1);
if (v_isShared_4282_ == 0)
{
lean_ctor_set_tag(v___x_4281_, 0);
lean_ctor_set(v___x_4281_, 0, v_a_4321_);
v___x_4323_ = v___x_4281_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4321_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
v_val_4312_ = v___x_4323_;
goto v___jp_4311_;
}
}
v___jp_4311_:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v_val_4312_);
v___x_4314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4310_, v___x_4313_, v___f_4309_);
v___x_4315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4284_, v___x_4310_, v___x_4314_, v___f_4267_);
return v___x_4315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4326_, lean_object* v_op_4327_, lean_object* v_flags_4328_, lean_object* v_payload_4329_, lean_object* v___f_4330_, lean_object* v___f_4331_, lean_object* v___f_4332_, lean_object* v_x_4333_, lean_object* v___y_4334_){
_start:
{
uint32_t v_op_boxed_4335_; uint64_t v_flags_boxed_4336_; lean_object* v_res_4337_; 
v_op_boxed_4335_ = lean_unbox_uint32(v_op_4327_);
lean_dec(v_op_4327_);
v_flags_boxed_4336_ = lean_unbox_uint64(v_flags_4328_);
lean_dec_ref(v_flags_4328_);
v_res_4337_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9(v_failurePrefix_4326_, v_op_boxed_4335_, v_flags_boxed_4336_, v_payload_4329_, v___f_4330_, v___f_4331_, v___f_4332_, v_x_4333_);
lean_dec_ref(v_failurePrefix_4326_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(lean_object* v___f_4338_, lean_object* v_x_4339_){
_start:
{
if (lean_obj_tag(v_x_4339_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4349_; 
lean_dec_ref(v___f_4338_);
v_a_4341_ = lean_ctor_get(v_x_4339_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v_x_4339_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4343_ = v_x_4339_;
v_isShared_4344_ = v_isSharedCheck_4349_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v_x_4339_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4349_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v___x_4346_; 
if (v_isShared_4344_ == 0)
{
v___x_4346_ = v___x_4343_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4341_);
v___x_4346_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
lean_object* v___x_4347_; 
v___x_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4347_, 0, v___x_4346_);
return v___x_4347_;
}
}
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4351_; 
v_a_4350_ = lean_ctor_get(v_x_4339_, 0);
lean_inc(v_a_4350_);
lean_dec_ref_known(v_x_4339_, 1);
v___x_4351_ = lean_apply_2(v___f_4338_, v_a_4350_, lean_box(0));
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4352_, lean_object* v_x_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2(v___f_4352_, v_x_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(lean_object* v___f_4356_, lean_object* v_bytes_4357_){
_start:
{
lean_object* v___x_4359_; uint8_t v___x_4360_; lean_object* v_val_4362_; lean_object* v___x_4365_; 
v___x_4359_ = lean_unsigned_to_nat(0u);
v___x_4360_ = 0;
v___x_4365_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4357_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4373_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4373_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4373_ == 0)
{
v___x_4368_ = v___x_4365_;
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4365_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4371_; 
if (v_isShared_4369_ == 0)
{
lean_ctor_set_tag(v___x_4368_, 1);
v___x_4371_ = v___x_4368_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_a_4366_);
v___x_4371_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
v_val_4362_ = v___x_4371_;
goto v___jp_4361_;
}
}
}
else
{
lean_object* v_a_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4381_; 
v_a_4374_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4376_ = v___x_4365_;
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_a_4374_);
lean_dec(v___x_4365_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4379_; 
if (v_isShared_4377_ == 0)
{
lean_ctor_set_tag(v___x_4376_, 0);
v___x_4379_ = v___x_4376_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_a_4374_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
v_val_4362_ = v___x_4379_;
goto v___jp_4361_;
}
}
}
v___jp_4361_:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v_val_4362_);
v___x_4364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4359_, v___x_4360_, v___x_4363_, v___f_4356_);
return v___x_4364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4382_, lean_object* v_bytes_4383_, lean_object* v___y_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1(v___f_4382_, v_bytes_4383_);
lean_dec_ref(v_bytes_4383_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(lean_object* v___f_4386_, lean_object* v_x_4387_){
_start:
{
if (lean_obj_tag(v_x_4387_) == 0)
{
lean_object* v_a_4389_; lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4397_; 
lean_dec_ref(v___f_4386_);
v_a_4389_ = lean_ctor_get(v_x_4387_, 0);
v_isSharedCheck_4397_ = !lean_is_exclusive(v_x_4387_);
if (v_isSharedCheck_4397_ == 0)
{
v___x_4391_ = v_x_4387_;
v_isShared_4392_ = v_isSharedCheck_4397_;
goto v_resetjp_4390_;
}
else
{
lean_inc(v_a_4389_);
lean_dec(v_x_4387_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4397_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4394_; 
if (v_isShared_4392_ == 0)
{
v___x_4394_ = v___x_4391_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v_a_4389_);
v___x_4394_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
lean_object* v___x_4395_; 
v___x_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4395_, 0, v___x_4394_);
return v___x_4395_;
}
}
}
else
{
lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4409_; 
v_isSharedCheck_4409_ = !lean_is_exclusive(v_x_4387_);
if (v_isSharedCheck_4409_ == 0)
{
lean_object* v_unused_4410_; 
v_unused_4410_ = lean_ctor_get(v_x_4387_, 0);
lean_dec(v_unused_4410_);
v___x_4399_ = v_x_4387_;
v_isShared_4400_ = v_isSharedCheck_4409_;
goto v_resetjp_4398_;
}
else
{
lean_dec(v_x_4387_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4409_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4401_; uint8_t v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4405_; 
v___x_4401_ = lean_unsigned_to_nat(0u);
v___x_4402_ = 0;
v___x_4403_ = lean_io_promise_new();
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 0, v___x_4403_);
v___x_4405_ = v___x_4399_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v___x_4403_);
v___x_4405_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4405_);
v___x_4407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4401_, v___x_4402_, v___x_4406_, v___f_4386_);
return v___x_4407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4411_, lean_object* v_x_4412_, lean_object* v___y_4413_){
_start:
{
lean_object* v_res_4414_; 
v_res_4414_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3(v___f_4411_, v_x_4412_);
return v_res_4414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(lean_object* v_context_4415_, lean_object* v_x_4416_){
_start:
{
lean_object* v_val_4419_; 
if (lean_obj_tag(v_x_4416_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4429_; 
v_a_4421_ = lean_ctor_get(v_x_4416_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v_x_4416_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4423_ = v_x_4416_;
v_isShared_4424_ = v_isSharedCheck_4429_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v_x_4416_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4429_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4426_; 
if (v_isShared_4424_ == 0)
{
v___x_4426_ = v___x_4423_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4421_);
v___x_4426_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
lean_object* v___x_4427_; 
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
return v___x_4427_;
}
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4443_; 
v_a_4430_ = lean_ctor_get(v_x_4416_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v_x_4416_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4432_ = v_x_4416_;
v_isShared_4433_ = v_isSharedCheck_4443_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v_x_4416_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4443_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4434_; 
v___x_4434_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CryptoKey_extractable_spec__0_spec__0_spec__1(v_context_4415_, v_a_4430_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4437_; 
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
lean_inc(v_a_4435_);
lean_dec_ref_known(v___x_4434_, 1);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v_a_4435_);
v___x_4437_ = v___x_4432_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_a_4435_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
v_val_4419_ = v___x_4437_;
goto v___jp_4418_;
}
}
else
{
lean_object* v_a_4439_; lean_object* v___x_4441_; 
v_a_4439_ = lean_ctor_get(v___x_4434_, 0);
lean_inc(v_a_4439_);
lean_dec_ref_known(v___x_4434_, 1);
if (v_isShared_4433_ == 0)
{
lean_ctor_set_tag(v___x_4432_, 0);
lean_ctor_set(v___x_4432_, 0, v_a_4439_);
v___x_4441_ = v___x_4432_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_a_4439_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
v_val_4419_ = v___x_4441_;
goto v___jp_4418_;
}
}
}
}
v___jp_4418_:
{
lean_object* v___x_4420_; 
v___x_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4420_, 0, v_val_4419_);
return v___x_4420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4444_, lean_object* v_x_4445_, lean_object* v___y_4446_){
_start:
{
lean_object* v_res_4447_; 
v_res_4447_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0(v_context_4444_, v_x_4445_);
lean_dec_ref(v_context_4444_);
return v_res_4447_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(lean_object* v_context_4448_, uint32_t v_op_4449_, uint64_t v_flags_4450_, lean_object* v_payload_4451_, lean_object* v_failurePrefix_4452_){
_start:
{
lean_object* v___f_4454_; lean_object* v___f_4455_; lean_object* v___f_4456_; lean_object* v___f_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___f_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; uint8_t v___x_4463_; lean_object* v_val_4465_; lean_object* v___x_4468_; 
v___f_4454_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4454_, 0, v_context_4448_);
v___f_4455_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4455_, 0, v___f_4454_);
v___f_4456_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4456_, 0, v___f_4455_);
lean_inc_ref(v_failurePrefix_4452_);
v___f_4457_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4457_, 0, v_failurePrefix_4452_);
v___x_4458_ = lean_box_uint32(v_op_4449_);
v___x_4459_ = lean_box_uint64(v_flags_4450_);
lean_inc_ref(v___f_4456_);
v___f_4460_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4460_, 0, v_failurePrefix_4452_);
lean_closure_set(v___f_4460_, 1, v___x_4458_);
lean_closure_set(v___f_4460_, 2, v___x_4459_);
lean_closure_set(v___f_4460_, 3, v_payload_4451_);
lean_closure_set(v___f_4460_, 4, v___f_4457_);
lean_closure_set(v___f_4460_, 5, v___f_4456_);
lean_closure_set(v___f_4460_, 6, v___f_4456_);
v___f_4461_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4461_, 0, v___f_4460_);
v___x_4462_ = lean_unsigned_to_nat(0u);
v___x_4463_ = 0;
v___x_4468_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v___x_4468_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4468_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
lean_ctor_set_tag(v___x_4471_, 1);
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
v_val_4465_ = v___x_4474_;
goto v___jp_4464_;
}
}
}
else
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4484_; 
v_a_4477_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4479_ = v___x_4468_;
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4468_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
lean_ctor_set_tag(v___x_4479_, 0);
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
v_val_4465_ = v___x_4482_;
goto v___jp_4464_;
}
}
}
v___jp_4464_:
{
lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4466_, 0, v_val_4465_);
v___x_4467_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4462_, v___x_4463_, v___x_4466_, v___f_4461_);
return v___x_4467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1___boxed(lean_object* v_context_4485_, lean_object* v_op_4486_, lean_object* v_flags_4487_, lean_object* v_payload_4488_, lean_object* v_failurePrefix_4489_, lean_object* v_a_4490_){
_start:
{
uint32_t v_op_boxed_4491_; uint64_t v_flags_boxed_4492_; lean_object* v_res_4493_; 
v_op_boxed_4491_ = lean_unbox_uint32(v_op_4486_);
lean_dec(v_op_4486_);
v_flags_boxed_4492_ = lean_unbox_uint64(v_flags_4487_);
lean_dec_ref(v_flags_4487_);
v_res_4493_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v_context_4485_, v_op_boxed_4491_, v_flags_boxed_4492_, v_payload_4488_, v_failurePrefix_4489_);
return v_res_4493_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4494_; uint8_t v___x_4495_; uint64_t v___x_4496_; 
v___x_4494_ = 8ULL;
v___x_4495_ = 0;
v___x_4496_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__0(v___x_4495_, v___x_4494_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(lean_object* v_o_4497_, lean_object* v_name_4498_, lean_object* v_args_4499_){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; uint32_t v___x_4506_; uint64_t v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4501_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4502_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4502_, 0, v_o_4497_);
lean_ctor_set(v___x_4502_, 1, v___x_4501_);
lean_inc_ref(v_name_4498_);
v___x_4503_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4503_, 0, v_name_4498_);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4505_ = lean_string_append(v___x_4504_, v_name_4498_);
lean_dec_ref(v_name_4498_);
v___x_4506_ = 205;
v___x_4507_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___closed__0);
v___x_4508_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4508_, 0, v_args_4499_);
v___x_4509_ = lean_unsigned_to_nat(3u);
v___x_4510_ = lean_mk_empty_array_with_capacity(v___x_4509_);
v___x_4511_ = lean_array_push(v___x_4510_, v___x_4502_);
v___x_4512_ = lean_array_push(v___x_4511_, v___x_4503_);
v___x_4513_ = lean_array_push(v___x_4512_, v___x_4508_);
v___x_4514_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
v___x_4515_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0_spec__1(v___x_4505_, v___x_4506_, v___x_4507_, v___x_4514_, v___x_4501_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0___boxed(lean_object* v_o_4516_, lean_object* v_name_4517_, lean_object* v_args_4518_, lean_object* v___y_4519_){
_start:
{
lean_object* v_res_4520_; 
v_res_4520_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_o_4516_, v_name_4517_, v_args_4518_);
return v_res_4520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify(lean_object* v_self_4521_, lean_object* v_algorithm_4522_, lean_object* v_key_4523_, lean_object* v_signature_4524_, lean_object* v_data_4525_){
_start:
{
lean_object* v___x_4527_; lean_object* v___y_4529_; 
v___x_4527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__6));
if (lean_obj_tag(v_algorithm_4522_) == 0)
{
lean_object* v_value_4542_; 
v_value_4542_ = lean_ctor_get(v_algorithm_4522_, 0);
lean_inc(v_value_4542_);
lean_dec_ref_known(v_algorithm_4522_, 1);
v___y_4529_ = v_value_4542_;
goto v___jp_4528_;
}
else
{
lean_object* v_value_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_value_4543_ = lean_ctor_get(v_algorithm_4522_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v_algorithm_4522_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v_algorithm_4522_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_value_4543_);
lean_dec(v_algorithm_4522_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
lean_ctor_set_tag(v___x_4545_, 4);
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_value_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
v___y_4529_ = v___x_4548_;
goto v___jp_4528_;
}
}
}
v___jp_4528_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4530_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4531_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4531_, 0, v_key_4523_);
lean_ctor_set(v___x_4531_, 1, v___x_4530_);
v___x_4532_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4532_, 0, v_signature_4524_);
v___x_4533_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4533_, 0, v_data_4525_);
v___x_4534_ = lean_unsigned_to_nat(4u);
v___x_4535_ = lean_mk_empty_array_with_capacity(v___x_4534_);
v___x_4536_ = lean_array_push(v___x_4535_, v___y_4529_);
v___x_4537_ = lean_array_push(v___x_4536_, v___x_4531_);
v___x_4538_ = lean_array_push(v___x_4537_, v___x_4532_);
v___x_4539_ = lean_array_push(v___x_4538_, v___x_4533_);
v___x_4540_ = l_Lasm_JS_Web_Support_args(v___x_4539_);
v___x_4541_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_verify_spec__0(v_self_4521_, v___x_4527_, v___x_4540_);
return v___x_4541_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_verify___boxed(lean_object* v_self_4551_, lean_object* v_algorithm_4552_, lean_object* v_key_4553_, lean_object* v_signature_4554_, lean_object* v_data_4555_, lean_object* v_a_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l_Lasm_JS_Web_SubtleCrypto_verify(v_self_4551_, v_algorithm_4552_, v_key_4553_, v_signature_4554_, v_data_4555_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest(lean_object* v_self_4559_, lean_object* v_algorithm_4560_, lean_object* v_data_4561_){
_start:
{
lean_object* v___f_4563_; lean_object* v___x_4564_; lean_object* v___y_4566_; 
v___f_4563_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_4564_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_digest___closed__0));
if (lean_obj_tag(v_algorithm_4560_) == 0)
{
lean_object* v_value_4577_; 
v_value_4577_ = lean_ctor_get(v_algorithm_4560_, 0);
lean_inc(v_value_4577_);
lean_dec_ref_known(v_algorithm_4560_, 1);
v___y_4566_ = v_value_4577_;
goto v___jp_4565_;
}
else
{
lean_object* v_value_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4585_; 
v_value_4578_ = lean_ctor_get(v_algorithm_4560_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v_algorithm_4560_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4580_ = v_algorithm_4560_;
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_value_4578_);
lean_dec(v_algorithm_4560_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
lean_object* v___x_4583_; 
if (v_isShared_4581_ == 0)
{
lean_ctor_set_tag(v___x_4580_, 4);
v___x_4583_ = v___x_4580_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_value_4578_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
v___y_4566_ = v___x_4583_;
goto v___jp_4565_;
}
}
}
v___jp_4565_:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; uint8_t v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4567_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4567_, 0, v_data_4561_);
v___x_4568_ = lean_unsigned_to_nat(2u);
v___x_4569_ = lean_mk_empty_array_with_capacity(v___x_4568_);
v___x_4570_ = lean_array_push(v___x_4569_, v___y_4566_);
v___x_4571_ = lean_array_push(v___x_4570_, v___x_4567_);
v___x_4572_ = l_Lasm_JS_Web_Support_args(v___x_4571_);
v___x_4573_ = lean_unsigned_to_nat(0u);
v___x_4574_ = 0;
v___x_4575_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_4559_, v___x_4564_, v___x_4572_);
v___x_4576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4573_, v___x_4574_, v___x_4575_, v___f_4563_);
return v___x_4576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_digest___boxed(lean_object* v_self_4586_, lean_object* v_algorithm_4587_, lean_object* v_data_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_Lasm_JS_Web_SubtleCrypto_digest(v_self_4586_, v_algorithm_4587_, v_data_4588_);
return v_res_4590_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(uint8_t v_await_4591_, uint64_t v_extra_4592_){
_start:
{
uint64_t v___x_4593_; uint64_t v___y_4595_; 
v___x_4593_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0_spec__0___closed__0);
if (v_await_4591_ == 0)
{
uint64_t v___x_4598_; 
v___x_4598_ = 0ULL;
v___y_4595_ = v___x_4598_;
goto v___jp_4594_;
}
else
{
uint64_t v___x_4599_; 
v___x_4599_ = 2ULL;
v___y_4595_ = v___x_4599_;
goto v___jp_4594_;
}
v___jp_4594_:
{
uint64_t v___x_4596_; uint64_t v___x_4597_; 
v___x_4596_ = lean_uint64_lor(v___x_4593_, v___y_4595_);
v___x_4597_ = lean_uint64_lor(v___x_4596_, v_extra_4592_);
return v___x_4597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1___boxed(lean_object* v_await_4600_, lean_object* v_extra_4601_){
_start:
{
uint8_t v_await_boxed_4602_; uint64_t v_extra_boxed_4603_; uint64_t v_res_4604_; lean_object* v_r_4605_; 
v_await_boxed_4602_ = lean_unbox(v_await_4600_);
v_extra_boxed_4603_ = lean_unbox_uint64(v_extra_4601_);
lean_dec_ref(v_extra_4601_);
v_res_4604_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v_await_boxed_4602_, v_extra_boxed_4603_);
v_r_4605_ = lean_box_uint64(v_res_4604_);
return v_r_4605_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(lean_object* v___f_4606_, lean_object* v_bytes_4607_){
_start:
{
lean_object* v___x_4609_; uint8_t v___x_4610_; lean_object* v_val_4612_; lean_object* v___x_4615_; 
v___x_4609_ = lean_unsigned_to_nat(0u);
v___x_4610_ = 0;
v___x_4615_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4607_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4623_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4623_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4623_ == 0)
{
v___x_4618_ = v___x_4615_;
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4615_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
lean_ctor_set_tag(v___x_4618_, 1);
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
v_val_4612_ = v___x_4621_;
goto v___jp_4611_;
}
}
}
else
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
v_a_4624_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4615_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4615_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
lean_ctor_set_tag(v___x_4626_, 0);
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
v_val_4612_ = v___x_4629_;
goto v___jp_4611_;
}
}
}
v___jp_4611_:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_val_4612_);
v___x_4614_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4609_, v___x_4610_, v___x_4613_, v___f_4606_);
return v___x_4614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4632_, lean_object* v_bytes_4633_, lean_object* v___y_4634_){
_start:
{
lean_object* v_res_4635_; 
v_res_4635_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1(v___f_4632_, v_bytes_4633_);
lean_dec_ref(v_bytes_4633_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(lean_object* v___f_4636_, lean_object* v_x_4637_){
_start:
{
if (lean_obj_tag(v_x_4637_) == 0)
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4647_; 
lean_dec_ref(v___f_4636_);
v_a_4639_ = lean_ctor_get(v_x_4637_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v_x_4637_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4641_ = v_x_4637_;
v_isShared_4642_ = v_isSharedCheck_4647_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v_x_4637_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4647_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4644_; 
if (v_isShared_4642_ == 0)
{
v___x_4644_ = v___x_4641_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4639_);
v___x_4644_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
lean_object* v___x_4645_; 
v___x_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
return v___x_4645_;
}
}
}
else
{
lean_object* v_a_4648_; lean_object* v___x_4649_; 
v_a_4648_ = lean_ctor_get(v_x_4637_, 0);
lean_inc(v_a_4648_);
lean_dec_ref_known(v_x_4637_, 1);
v___x_4649_ = lean_apply_2(v___f_4636_, v_a_4648_, lean_box(0));
return v___x_4649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4650_, lean_object* v_x_4651_, lean_object* v___y_4652_){
_start:
{
lean_object* v_res_4653_; 
v_res_4653_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2(v___f_4650_, v_x_4651_);
return v_res_4653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(lean_object* v___f_4654_, lean_object* v_x_4655_){
_start:
{
if (lean_obj_tag(v_x_4655_) == 0)
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4665_; 
lean_dec_ref(v___f_4654_);
v_a_4657_ = lean_ctor_get(v_x_4655_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_x_4655_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4659_ = v_x_4655_;
v_isShared_4660_ = v_isSharedCheck_4665_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v_x_4655_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4665_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
lean_object* v___x_4663_; 
v___x_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4662_);
return v___x_4663_;
}
}
}
else
{
lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4677_; 
v_isSharedCheck_4677_ = !lean_is_exclusive(v_x_4655_);
if (v_isSharedCheck_4677_ == 0)
{
lean_object* v_unused_4678_; 
v_unused_4678_ = lean_ctor_get(v_x_4655_, 0);
lean_dec(v_unused_4678_);
v___x_4667_ = v_x_4655_;
v_isShared_4668_ = v_isSharedCheck_4677_;
goto v_resetjp_4666_;
}
else
{
lean_dec(v_x_4655_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4677_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4669_; uint8_t v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4673_; 
v___x_4669_ = lean_unsigned_to_nat(0u);
v___x_4670_ = 0;
v___x_4671_ = lean_io_promise_new();
if (v_isShared_4668_ == 0)
{
lean_ctor_set(v___x_4667_, 0, v___x_4671_);
v___x_4673_ = v___x_4667_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v___x_4671_);
v___x_4673_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4674_, 0, v___x_4673_);
v___x_4675_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4669_, v___x_4670_, v___x_4674_, v___f_4654_);
return v___x_4675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4679_, lean_object* v_x_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3(v___f_4679_, v_x_4680_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4683_, uint32_t v_op_4684_, uint64_t v_flags_4685_, lean_object* v_payload_4686_, lean_object* v___f_4687_, lean_object* v___f_4688_, lean_object* v___f_4689_, lean_object* v_x_4690_){
_start:
{
if (lean_obj_tag(v_x_4690_) == 0)
{
lean_object* v_a_4692_; lean_object* v___x_4694_; uint8_t v_isShared_4695_; uint8_t v_isSharedCheck_4700_; 
lean_dec_ref(v___f_4689_);
lean_dec_ref(v___f_4688_);
lean_dec_ref(v___f_4687_);
lean_dec(v_payload_4686_);
v_a_4692_ = lean_ctor_get(v_x_4690_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v_x_4690_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4694_ = v_x_4690_;
v_isShared_4695_ = v_isSharedCheck_4700_;
goto v_resetjp_4693_;
}
else
{
lean_inc(v_a_4692_);
lean_dec(v_x_4690_);
v___x_4694_ = lean_box(0);
v_isShared_4695_ = v_isSharedCheck_4700_;
goto v_resetjp_4693_;
}
v_resetjp_4693_:
{
lean_object* v___x_4697_; 
if (v_isShared_4695_ == 0)
{
v___x_4697_ = v___x_4694_;
goto v_reusejp_4696_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4692_);
v___x_4697_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4696_;
}
v_reusejp_4696_:
{
lean_object* v___x_4698_; 
v___x_4698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4697_);
return v___x_4698_;
}
}
}
else
{
lean_object* v_a_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4747_; 
v_a_4701_ = lean_ctor_get(v_x_4690_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v_x_4690_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4703_ = v_x_4690_;
v_isShared_4704_ = v_isSharedCheck_4747_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_a_4701_);
lean_dec(v_x_4690_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4747_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; uint8_t v___x_4707_; 
v___x_4705_ = lean_string_utf8_byte_size(v_failurePrefix_4683_);
v___x_4706_ = lean_unsigned_to_nat(0u);
v___x_4707_ = lean_nat_dec_eq(v___x_4705_, v___x_4706_);
if (v___x_4707_ == 0)
{
lean_object* v___f_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___f_4712_; lean_object* v_val_4714_; lean_object* v___x_4719_; 
lean_dec_ref(v___f_4689_);
lean_inc(v_a_4701_);
v___f_4708_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4708_, 0, v_a_4701_);
v___x_4709_ = lean_box(v___x_4707_);
v___x_4710_ = lean_box_uint32(v_op_4684_);
v___x_4711_ = lean_box_uint64(v_flags_4685_);
lean_inc(v_payload_4686_);
v___f_4712_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4712_, 0, v___x_4706_);
lean_closure_set(v___f_4712_, 1, v___x_4709_);
lean_closure_set(v___f_4712_, 2, v___f_4708_);
lean_closure_set(v___f_4712_, 3, v_a_4701_);
lean_closure_set(v___f_4712_, 4, v___x_4710_);
lean_closure_set(v___f_4712_, 5, v___x_4711_);
lean_closure_set(v___f_4712_, 6, v_payload_4686_);
v___x_4719_ = l_Lasm_JS_Wire_encodeIO(v_payload_4686_);
if (lean_obj_tag(v___x_4719_) == 0)
{
lean_object* v_a_4720_; lean_object* v___x_4722_; 
v_a_4720_ = lean_ctor_get(v___x_4719_, 0);
lean_inc(v_a_4720_);
lean_dec_ref_known(v___x_4719_, 1);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 0, v_a_4720_);
v___x_4722_ = v___x_4703_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4723_; 
v_reuseFailAlloc_4723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4723_, 0, v_a_4720_);
v___x_4722_ = v_reuseFailAlloc_4723_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
v_val_4714_ = v___x_4722_;
goto v___jp_4713_;
}
}
else
{
lean_object* v_a_4724_; lean_object* v___x_4726_; 
v_a_4724_ = lean_ctor_get(v___x_4719_, 0);
lean_inc(v_a_4724_);
lean_dec_ref_known(v___x_4719_, 1);
if (v_isShared_4704_ == 0)
{
lean_ctor_set_tag(v___x_4703_, 0);
lean_ctor_set(v___x_4703_, 0, v_a_4724_);
v___x_4726_ = v___x_4703_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4724_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
v_val_4714_ = v___x_4726_;
goto v___jp_4713_;
}
}
v___jp_4713_:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; 
v___x_4715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4715_, 0, v_val_4714_);
v___x_4716_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4706_, v___x_4707_, v___x_4715_, v___f_4712_);
v___x_4717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4706_, v___x_4707_, v___x_4716_, v___f_4687_);
v___x_4718_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4706_, v___x_4707_, v___x_4717_, v___f_4688_);
return v___x_4718_;
}
}
else
{
lean_object* v___f_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___f_4731_; uint8_t v___x_4732_; lean_object* v_val_4734_; lean_object* v___x_4738_; 
lean_dec_ref(v___f_4688_);
lean_dec_ref(v___f_4687_);
lean_inc(v_a_4701_);
v___f_4728_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4728_, 0, v_a_4701_);
v___x_4729_ = lean_box_uint32(v_op_4684_);
v___x_4730_ = lean_box_uint64(v_flags_4685_);
lean_inc(v_payload_4686_);
v___f_4731_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4731_, 0, v___f_4728_);
lean_closure_set(v___f_4731_, 1, v_a_4701_);
lean_closure_set(v___f_4731_, 2, v___x_4729_);
lean_closure_set(v___f_4731_, 3, v___x_4730_);
lean_closure_set(v___f_4731_, 4, v_payload_4686_);
v___x_4732_ = 0;
v___x_4738_ = l_Lasm_JS_Wire_encodeIO(v_payload_4686_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4741_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4739_);
lean_dec_ref_known(v___x_4738_, 1);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 0, v_a_4739_);
v___x_4741_ = v___x_4703_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4739_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
v_val_4734_ = v___x_4741_;
goto v___jp_4733_;
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; 
v_a_4743_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4738_, 1);
if (v_isShared_4704_ == 0)
{
lean_ctor_set_tag(v___x_4703_, 0);
lean_ctor_set(v___x_4703_, 0, v_a_4743_);
v___x_4745_ = v___x_4703_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_a_4743_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
v_val_4734_ = v___x_4745_;
goto v___jp_4733_;
}
}
v___jp_4733_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; 
v___x_4735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4735_, 0, v_val_4734_);
v___x_4736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4706_, v___x_4732_, v___x_4735_, v___f_4731_);
v___x_4737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4706_, v___x_4732_, v___x_4736_, v___f_4689_);
return v___x_4737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4748_, lean_object* v_op_4749_, lean_object* v_flags_4750_, lean_object* v_payload_4751_, lean_object* v___f_4752_, lean_object* v___f_4753_, lean_object* v___f_4754_, lean_object* v_x_4755_, lean_object* v___y_4756_){
_start:
{
uint32_t v_op_boxed_4757_; uint64_t v_flags_boxed_4758_; lean_object* v_res_4759_; 
v_op_boxed_4757_ = lean_unbox_uint32(v_op_4749_);
lean_dec(v_op_4749_);
v_flags_boxed_4758_ = lean_unbox_uint64(v_flags_4750_);
lean_dec_ref(v_flags_4750_);
v_res_4759_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9(v_failurePrefix_4748_, v_op_boxed_4757_, v_flags_boxed_4758_, v_payload_4751_, v___f_4752_, v___f_4753_, v___f_4754_, v_x_4755_);
lean_dec_ref(v_failurePrefix_4748_);
return v_res_4759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4765_, lean_object* v_key_4766_){
_start:
{
if (lean_obj_tag(v_d_4765_) == 8)
{
lean_object* v___x_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4791_; 
v___x_4769_ = l_Lasm_JS_Data_field(v_d_4765_, v_key_4766_);
v_isSharedCheck_4791_ = !lean_is_exclusive(v_d_4765_);
if (v_isSharedCheck_4791_ == 0)
{
lean_object* v_unused_4792_; 
v_unused_4792_ = lean_ctor_get(v_d_4765_, 0);
lean_dec(v_unused_4792_);
v___x_4771_ = v_d_4765_;
v_isShared_4772_ = v_isSharedCheck_4791_;
goto v_resetjp_4770_;
}
else
{
lean_dec(v_d_4765_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4791_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
switch(lean_obj_tag(v___x_4769_))
{
case 1:
{
lean_del_object(v___x_4771_);
goto v___jp_4767_;
}
case 0:
{
lean_del_object(v___x_4771_);
goto v___jp_4767_;
}
default: 
{
if (lean_obj_tag(v___x_4769_) == 9)
{
lean_object* v_value_4773_; lean_object* v___x_4775_; 
v_value_4773_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_value_4773_);
lean_dec_ref_known(v___x_4769_, 2);
if (v_isShared_4772_ == 0)
{
lean_ctor_set_tag(v___x_4771_, 1);
lean_ctor_set(v___x_4771_, 0, v_value_4773_);
v___x_4775_ = v___x_4771_;
goto v_reusejp_4774_;
}
else
{
lean_object* v_reuseFailAlloc_4777_; 
v_reuseFailAlloc_4777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4777_, 0, v_value_4773_);
v___x_4775_ = v_reuseFailAlloc_4777_;
goto v_reusejp_4774_;
}
v_reusejp_4774_:
{
lean_object* v___x_4776_; 
v___x_4776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4775_);
return v___x_4776_;
}
}
else
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4789_; 
v___x_4778_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__1));
v___x_4779_ = lean_string_append(v___x_4778_, v_key_4766_);
v___x_4780_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__2));
v___x_4781_ = lean_string_append(v___x_4779_, v___x_4780_);
v___x_4782_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4783_ = lean_string_append(v___x_4781_, v___x_4782_);
v___x_4784_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__2___closed__4));
v___x_4785_ = lean_string_append(v___x_4783_, v___x_4784_);
v___x_4786_ = l_Lasm_JS_Data_describe(v___x_4769_);
v___x_4787_ = lean_string_append(v___x_4785_, v___x_4786_);
lean_dec_ref(v___x_4786_);
if (v_isShared_4772_ == 0)
{
lean_ctor_set_tag(v___x_4771_, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4787_);
v___x_4789_ = v___x_4771_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v___x_4787_);
v___x_4789_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
return v___x_4789_;
}
}
}
}
}
}
else
{
lean_object* v___x_4793_; 
lean_dec(v_d_4765_);
v___x_4793_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__2));
return v___x_4793_;
}
v___jp_4767_:
{
lean_object* v___x_4768_; 
v___x_4768_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_4768_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4794_, lean_object* v_key_4795_){
_start:
{
lean_object* v_res_4796_; 
v_res_4796_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4794_, v_key_4795_);
lean_dec_ref(v_key_4795_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(lean_object* v_context_4797_, lean_object* v_d_4798_){
_start:
{
lean_object* v___y_4801_; lean_object* v___y_4802_; lean_object* v___y_4807_; lean_object* v_received_4808_; lean_object* v___y_4827_; lean_object* v_a_4830_; 
switch(lean_obj_tag(v_d_4798_))
{
case 9:
{
lean_object* v_value_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; 
v_value_4854_ = lean_ctor_get(v_d_4798_, 0);
lean_inc(v_value_4854_);
lean_dec_ref_known(v_d_4798_, 2);
v___x_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4855_, 0, v_value_4854_);
v___x_4856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4856_, 0, v___x_4855_);
return v___x_4856_;
}
case 8:
{
lean_object* v___x_4857_; lean_object* v___x_4858_; 
v___x_4857_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__0));
lean_inc_ref(v_d_4798_);
v___x_4858_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4798_, v___x_4857_);
if (lean_obj_tag(v___x_4858_) == 0)
{
lean_object* v_a_4859_; 
v_a_4859_ = lean_ctor_get(v___x_4858_, 0);
lean_inc(v_a_4859_);
lean_dec_ref_known(v___x_4858_, 1);
v_a_4830_ = v_a_4859_;
goto v___jp_4829_;
}
else
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4879_; 
v_a_4860_ = lean_ctor_get(v___x_4858_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4858_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4862_ = v___x_4858_;
v_isShared_4863_ = v_isSharedCheck_4879_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4858_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4879_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4864_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyPair___lam__0___closed__1));
lean_inc_ref(v_d_4798_);
v___x_4865_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3_spec__4(v_d_4798_, v___x_4864_);
if (lean_obj_tag(v___x_4865_) == 0)
{
lean_object* v_a_4866_; 
lean_del_object(v___x_4862_);
lean_dec(v_a_4860_);
v_a_4866_ = lean_ctor_get(v___x_4865_, 0);
lean_inc(v_a_4866_);
lean_dec_ref_known(v___x_4865_, 1);
v_a_4830_ = v_a_4866_;
goto v___jp_4829_;
}
else
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4878_; 
lean_dec_ref_known(v_d_4798_, 1);
v_a_4867_ = lean_ctor_get(v___x_4865_, 0);
v_isSharedCheck_4878_ = !lean_is_exclusive(v___x_4865_);
if (v_isSharedCheck_4878_ == 0)
{
v___x_4869_ = v___x_4865_;
v_isShared_4870_ = v_isSharedCheck_4878_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4865_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4878_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v___x_4871_; lean_object* v___x_4873_; 
v___x_4871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4871_, 0, v_a_4860_);
lean_ctor_set(v___x_4871_, 1, v_a_4867_);
if (v_isShared_4870_ == 0)
{
lean_ctor_set(v___x_4869_, 0, v___x_4871_);
v___x_4873_ = v___x_4869_;
goto v_reusejp_4872_;
}
else
{
lean_object* v_reuseFailAlloc_4877_; 
v_reuseFailAlloc_4877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4877_, 0, v___x_4871_);
v___x_4873_ = v_reuseFailAlloc_4877_;
goto v_reusejp_4872_;
}
v_reusejp_4872_:
{
lean_object* v___x_4875_; 
if (v_isShared_4863_ == 0)
{
lean_ctor_set_tag(v___x_4862_, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4873_);
v___x_4875_ = v___x_4862_;
goto v_reusejp_4874_;
}
else
{
lean_object* v_reuseFailAlloc_4876_; 
v_reuseFailAlloc_4876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4876_, 0, v___x_4873_);
v___x_4875_ = v_reuseFailAlloc_4876_;
goto v_reusejp_4874_;
}
v_reusejp_4874_:
{
return v___x_4875_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_4880_; 
v___x_4880_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v_a_4830_ = v___x_4880_;
goto v___jp_4829_;
}
}
v___jp_4800_:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4803_ = lean_string_append(v___y_4801_, v___y_4802_);
lean_dec_ref(v___y_4802_);
v___x_4804_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4803_);
v___x_4805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4804_);
return v___x_4805_;
}
v___jp_4806_:
{
lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; uint8_t v___x_4820_; 
v___x_4809_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__0));
v___x_4810_ = lean_string_append(v___x_4809_, v_context_4797_);
v___x_4811_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__1));
v___x_4812_ = lean_string_append(v___x_4810_, v___x_4811_);
v___x_4813_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCryptoKeyOrCryptoKeyPair___closed__1));
v___x_4814_ = lean_string_append(v___x_4812_, v___x_4813_);
v___x_4815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__2));
v___x_4816_ = lean_string_append(v___x_4814_, v___x_4815_);
v___x_4817_ = lean_string_append(v___x_4816_, v_received_4808_);
lean_dec_ref(v_received_4808_);
v___x_4818_ = lean_string_utf8_byte_size(v___y_4807_);
v___x_4819_ = lean_unsigned_to_nat(0u);
v___x_4820_ = lean_nat_dec_eq(v___x_4818_, v___x_4819_);
if (v___x_4820_ == 0)
{
lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; 
v___x_4821_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__2));
v___x_4822_ = lean_string_append(v___x_4821_, v___y_4807_);
lean_dec_ref(v___y_4807_);
v___x_4823_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0_spec__1___closed__3));
v___x_4824_ = lean_string_append(v___x_4822_, v___x_4823_);
v___y_4801_ = v___x_4817_;
v___y_4802_ = v___x_4824_;
goto v___jp_4800_;
}
else
{
lean_object* v___x_4825_; 
lean_dec_ref(v___y_4807_);
v___x_4825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___y_4801_ = v___x_4817_;
v___y_4802_ = v___x_4825_;
goto v___jp_4800_;
}
}
v___jp_4826_:
{
lean_object* v___x_4828_; 
v___x_4828_ = l_Lasm_JS_Data_describe(v_d_4798_);
v___y_4807_ = v___y_4827_;
v_received_4808_ = v___x_4828_;
goto v___jp_4806_;
}
v___jp_4829_:
{
if (lean_obj_tag(v_d_4798_) == 9)
{
lean_object* v_value_4831_; lean_object* v_description_4832_; lean_object* v___x_4833_; uint8_t v___x_4834_; 
v_value_4831_ = lean_ctor_get(v_d_4798_, 0);
v_description_4832_ = lean_ctor_get(v_d_4798_, 1);
v___x_4833_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4834_ = lean_string_dec_eq(v_description_4832_, v___x_4833_);
if (v___x_4834_ == 0)
{
v___y_4827_ = v_a_4830_;
goto v___jp_4826_;
}
else
{
lean_object* v___x_4836_; uint8_t v_isShared_4837_; uint8_t v_isSharedCheck_4851_; 
lean_inc(v_value_4831_);
v_isSharedCheck_4851_ = !lean_is_exclusive(v_d_4798_);
if (v_isSharedCheck_4851_ == 0)
{
lean_object* v_unused_4852_; lean_object* v_unused_4853_; 
v_unused_4852_ = lean_ctor_get(v_d_4798_, 1);
lean_dec(v_unused_4852_);
v_unused_4853_ = lean_ctor_get(v_d_4798_, 0);
lean_dec(v_unused_4853_);
v___x_4836_ = v_d_4798_;
v_isShared_4837_ = v_isSharedCheck_4851_;
goto v_resetjp_4835_;
}
else
{
lean_dec(v_d_4798_);
v___x_4836_ = lean_box(0);
v_isShared_4837_ = v_isSharedCheck_4851_;
goto v_resetjp_4835_;
}
v_resetjp_4835_:
{
uint32_t v___x_4838_; uint64_t v___x_4839_; lean_object* v___x_4841_; 
v___x_4838_ = 206;
v___x_4839_ = 0ULL;
lean_inc(v_value_4831_);
if (v_isShared_4837_ == 0)
{
lean_ctor_set(v___x_4836_, 1, v___x_4833_);
v___x_4841_ = v___x_4836_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_value_4831_);
lean_ctor_set(v_reuseFailAlloc_4850_, 1, v___x_4833_);
v___x_4841_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
uint32_t v___x_4842_; lean_object* v___x_4843_; 
v___x_4842_ = lasm_js_value_handle(v_value_4831_);
lean_dec(v_value_4831_);
v___x_4843_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4838_, v___x_4839_, v___x_4841_, v___x_4842_);
if (lean_obj_tag(v___x_4843_) == 0)
{
lean_object* v_a_4844_; uint8_t v___x_4845_; 
v_a_4844_ = lean_ctor_get(v___x_4843_, 0);
lean_inc(v_a_4844_);
lean_dec_ref_known(v___x_4843_, 1);
v___x_4845_ = lean_string_validate_utf8(v_a_4844_);
if (v___x_4845_ == 0)
{
lean_object* v___x_4846_; lean_object* v___x_4847_; 
lean_dec(v_a_4844_);
v___x_4846_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__6);
v___x_4847_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4846_);
v___y_4807_ = v_a_4830_;
v_received_4808_ = v___x_4847_;
goto v___jp_4806_;
}
else
{
lean_object* v___x_4848_; 
v___x_4848_ = lean_string_from_utf8_unchecked(v_a_4844_);
v___y_4807_ = v_a_4830_;
v_received_4808_ = v___x_4848_;
goto v___jp_4806_;
}
}
else
{
lean_object* v___x_4849_; 
lean_dec_ref_known(v___x_4843_, 1);
v___x_4849_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode_spec__0___closed__7));
v___y_4807_ = v_a_4830_;
v_received_4808_ = v___x_4849_;
goto v___jp_4806_;
}
}
}
}
}
else
{
v___y_4827_ = v_a_4830_;
goto v___jp_4826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3___boxed(lean_object* v_context_4881_, lean_object* v_d_4882_, lean_object* v_a_4883_){
_start:
{
lean_object* v_res_4884_; 
v_res_4884_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_4881_, v_d_4882_);
lean_dec_ref(v_context_4881_);
return v_res_4884_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(lean_object* v_context_4885_, lean_object* v_x_4886_){
_start:
{
lean_object* v_val_4889_; 
if (lean_obj_tag(v_x_4886_) == 0)
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4899_; 
v_a_4891_ = lean_ctor_get(v_x_4886_, 0);
v_isSharedCheck_4899_ = !lean_is_exclusive(v_x_4886_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4893_ = v_x_4886_;
v_isShared_4894_ = v_isSharedCheck_4899_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v_x_4886_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4899_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
lean_object* v___x_4897_; 
v___x_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4896_);
return v___x_4897_;
}
}
}
else
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4913_; 
v_a_4900_ = lean_ctor_get(v_x_4886_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v_x_4886_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4902_ = v_x_4886_;
v_isShared_4903_ = v_isSharedCheck_4913_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v_x_4886_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4913_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2_spec__3(v_context_4885_, v_a_4900_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v___x_4907_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
lean_inc(v_a_4905_);
lean_dec_ref_known(v___x_4904_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set(v___x_4902_, 0, v_a_4905_);
v___x_4907_ = v___x_4902_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v_a_4905_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
v_val_4889_ = v___x_4907_;
goto v___jp_4888_;
}
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; 
v_a_4909_ = lean_ctor_get(v___x_4904_, 0);
lean_inc(v_a_4909_);
lean_dec_ref_known(v___x_4904_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 0);
lean_ctor_set(v___x_4902_, 0, v_a_4909_);
v___x_4911_ = v___x_4902_;
goto v_reusejp_4910_;
}
else
{
lean_object* v_reuseFailAlloc_4912_; 
v_reuseFailAlloc_4912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4912_, 0, v_a_4909_);
v___x_4911_ = v_reuseFailAlloc_4912_;
goto v_reusejp_4910_;
}
v_reusejp_4910_:
{
v_val_4889_ = v___x_4911_;
goto v___jp_4888_;
}
}
}
}
v___jp_4888_:
{
lean_object* v___x_4890_; 
v___x_4890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4890_, 0, v_val_4889_);
return v___x_4890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed(lean_object* v_context_4914_, lean_object* v_x_4915_, lean_object* v___y_4916_){
_start:
{
lean_object* v_res_4917_; 
v_res_4917_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0(v_context_4914_, v_x_4915_);
lean_dec_ref(v_context_4914_);
return v_res_4917_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(lean_object* v_context_4918_, uint32_t v_op_4919_, uint64_t v_flags_4920_, lean_object* v_payload_4921_, lean_object* v_failurePrefix_4922_){
_start:
{
lean_object* v___f_4924_; lean_object* v___f_4925_; lean_object* v___f_4926_; lean_object* v___f_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___f_4930_; lean_object* v___f_4931_; lean_object* v___x_4932_; uint8_t v___x_4933_; lean_object* v_val_4935_; lean_object* v___x_4938_; 
v___f_4924_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4924_, 0, v_context_4918_);
v___f_4925_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4925_, 0, v___f_4924_);
v___f_4926_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4926_, 0, v___f_4925_);
lean_inc_ref(v_failurePrefix_4922_);
v___f_4927_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4927_, 0, v_failurePrefix_4922_);
v___x_4928_ = lean_box_uint32(v_op_4919_);
v___x_4929_ = lean_box_uint64(v_flags_4920_);
lean_inc_ref(v___f_4926_);
v___f_4930_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4930_, 0, v_failurePrefix_4922_);
lean_closure_set(v___f_4930_, 1, v___x_4928_);
lean_closure_set(v___f_4930_, 2, v___x_4929_);
lean_closure_set(v___f_4930_, 3, v_payload_4921_);
lean_closure_set(v___f_4930_, 4, v___f_4927_);
lean_closure_set(v___f_4930_, 5, v___f_4926_);
lean_closure_set(v___f_4930_, 6, v___f_4926_);
v___f_4931_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4931_, 0, v___f_4930_);
v___x_4932_ = lean_unsigned_to_nat(0u);
v___x_4933_ = 0;
v___x_4938_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4938_) == 0)
{
lean_object* v_a_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4946_; 
v_a_4939_ = lean_ctor_get(v___x_4938_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4938_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4941_ = v___x_4938_;
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_a_4939_);
lean_dec(v___x_4938_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
lean_ctor_set_tag(v___x_4941_, 1);
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_a_4939_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
v_val_4935_ = v___x_4944_;
goto v___jp_4934_;
}
}
}
else
{
lean_object* v_a_4947_; lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4954_; 
v_a_4947_ = lean_ctor_get(v___x_4938_, 0);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4938_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4949_ = v___x_4938_;
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
else
{
lean_inc(v_a_4947_);
lean_dec(v___x_4938_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
lean_ctor_set_tag(v___x_4949_, 0);
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_a_4947_);
v___x_4952_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
v_val_4935_ = v___x_4952_;
goto v___jp_4934_;
}
}
}
v___jp_4934_:
{
lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4936_, 0, v_val_4935_);
v___x_4937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4932_, v___x_4933_, v___x_4936_, v___f_4931_);
return v___x_4937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2___boxed(lean_object* v_context_4955_, lean_object* v_op_4956_, lean_object* v_flags_4957_, lean_object* v_payload_4958_, lean_object* v_failurePrefix_4959_, lean_object* v_a_4960_){
_start:
{
uint32_t v_op_boxed_4961_; uint64_t v_flags_boxed_4962_; lean_object* v_res_4963_; 
v_op_boxed_4961_ = lean_unbox_uint32(v_op_4956_);
lean_dec(v_op_4956_);
v_flags_boxed_4962_ = lean_unbox_uint64(v_flags_4957_);
lean_dec_ref(v_flags_4957_);
v_res_4963_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v_context_4955_, v_op_boxed_4961_, v_flags_boxed_4962_, v_payload_4958_, v_failurePrefix_4959_);
return v_res_4963_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4964_; uint8_t v___x_4965_; uint64_t v___x_4966_; 
v___x_4964_ = 8ULL;
v___x_4965_ = 0;
v___x_4966_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__1(v___x_4965_, v___x_4964_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(lean_object* v_o_4967_, lean_object* v_name_4968_, lean_object* v_args_4969_){
_start:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; uint32_t v___x_4976_; uint64_t v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4971_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_4972_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4972_, 0, v_o_4967_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
lean_inc_ref(v_name_4968_);
v___x_4973_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4973_, 0, v_name_4968_);
v___x_4974_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_randomUUID_spec__0___closed__1));
v___x_4975_ = lean_string_append(v___x_4974_, v_name_4968_);
lean_dec_ref(v_name_4968_);
v___x_4976_ = 205;
v___x_4977_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___closed__0);
v___x_4978_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4978_, 0, v_args_4969_);
v___x_4979_ = lean_unsigned_to_nat(3u);
v___x_4980_ = lean_mk_empty_array_with_capacity(v___x_4979_);
v___x_4981_ = lean_array_push(v___x_4980_, v___x_4972_);
v___x_4982_ = lean_array_push(v___x_4981_, v___x_4973_);
v___x_4983_ = lean_array_push(v___x_4982_, v___x_4978_);
v___x_4984_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4984_, 0, v___x_4983_);
v___x_4985_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1_spec__2(v___x_4975_, v___x_4976_, v___x_4977_, v___x_4984_, v___x_4971_);
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1___boxed(lean_object* v_o_4986_, lean_object* v_name_4987_, lean_object* v_args_4988_, lean_object* v___y_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_o_4986_, v_name_4987_, v_args_4988_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(size_t v_sz_4991_, size_t v_i_4992_, lean_object* v_bs_4993_){
_start:
{
uint8_t v___x_4994_; 
v___x_4994_ = lean_usize_dec_lt(v_i_4992_, v_sz_4991_);
if (v___x_4994_ == 0)
{
return v_bs_4993_;
}
else
{
lean_object* v_v_4995_; lean_object* v___x_4996_; lean_object* v_bs_x27_4997_; lean_object* v___y_4999_; uint8_t v___x_5004_; 
v_v_4995_ = lean_array_uget(v_bs_4993_, v_i_4992_);
v___x_4996_ = lean_unsigned_to_nat(0u);
v_bs_x27_4997_ = lean_array_uset(v_bs_4993_, v_i_4992_, v___x_4996_);
v___x_5004_ = lean_unbox(v_v_4995_);
lean_dec(v_v_4995_);
switch(v___x_5004_)
{
case 0:
{
lean_object* v___x_5005_; 
v___x_5005_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__1));
v___y_4999_ = v___x_5005_;
goto v___jp_4998_;
}
case 1:
{
lean_object* v___x_5006_; 
v___x_5006_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__3));
v___y_4999_ = v___x_5006_;
goto v___jp_4998_;
}
case 2:
{
lean_object* v___x_5007_; 
v___x_5007_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__5));
v___y_4999_ = v___x_5007_;
goto v___jp_4998_;
}
case 3:
{
lean_object* v___x_5008_; 
v___x_5008_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__7));
v___y_4999_ = v___x_5008_;
goto v___jp_4998_;
}
case 4:
{
lean_object* v___x_5009_; 
v___x_5009_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__9));
v___y_4999_ = v___x_5009_;
goto v___jp_4998_;
}
case 5:
{
lean_object* v___x_5010_; 
v___x_5010_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__11));
v___y_4999_ = v___x_5010_;
goto v___jp_4998_;
}
case 6:
{
lean_object* v___x_5011_; 
v___x_5011_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__13));
v___y_4999_ = v___x_5011_;
goto v___jp_4998_;
}
case 7:
{
lean_object* v___x_5012_; 
v___x_5012_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__15));
v___y_4999_ = v___x_5012_;
goto v___jp_4998_;
}
case 8:
{
lean_object* v___x_5013_; 
v___x_5013_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__17));
v___y_4999_ = v___x_5013_;
goto v___jp_4998_;
}
case 9:
{
lean_object* v___x_5014_; 
v___x_5014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__19));
v___y_4999_ = v___x_5014_;
goto v___jp_4998_;
}
case 10:
{
lean_object* v___x_5015_; 
v___x_5015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__21));
v___y_4999_ = v___x_5015_;
goto v___jp_4998_;
}
default: 
{
lean_object* v___x_5016_; 
v___x_5016_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__23));
v___y_4999_ = v___x_5016_;
goto v___jp_4998_;
}
}
v___jp_4998_:
{
size_t v___x_5000_; size_t v___x_5001_; lean_object* v___x_5002_; 
v___x_5000_ = ((size_t)1ULL);
v___x_5001_ = lean_usize_add(v_i_4992_, v___x_5000_);
lean_inc(v___y_4999_);
v___x_5002_ = lean_array_uset(v_bs_x27_4997_, v_i_4992_, v___y_4999_);
v_i_4992_ = v___x_5001_;
v_bs_4993_ = v___x_5002_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0___boxed(lean_object* v_sz_5017_, lean_object* v_i_5018_, lean_object* v_bs_5019_){
_start:
{
size_t v_sz_boxed_5020_; size_t v_i_boxed_5021_; lean_object* v_res_5022_; 
v_sz_boxed_5020_ = lean_unbox_usize(v_sz_5017_);
lean_dec(v_sz_5017_);
v_i_boxed_5021_ = lean_unbox_usize(v_i_5018_);
lean_dec(v_i_5018_);
v_res_5022_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_boxed_5020_, v_i_boxed_5021_, v_bs_5019_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey(lean_object* v_self_5024_, lean_object* v_algorithm_5025_, uint8_t v_extractable_5026_, lean_object* v_keyUsages_5027_){
_start:
{
lean_object* v___x_5029_; lean_object* v___y_5031_; 
v___x_5029_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_generateKey___closed__0));
if (lean_obj_tag(v_algorithm_5025_) == 0)
{
lean_object* v_value_5044_; 
v_value_5044_ = lean_ctor_get(v_algorithm_5025_, 0);
lean_inc(v_value_5044_);
lean_dec_ref_known(v_algorithm_5025_, 1);
v___y_5031_ = v_value_5044_;
goto v___jp_5030_;
}
else
{
lean_object* v_value_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5052_; 
v_value_5045_ = lean_ctor_get(v_algorithm_5025_, 0);
v_isSharedCheck_5052_ = !lean_is_exclusive(v_algorithm_5025_);
if (v_isSharedCheck_5052_ == 0)
{
v___x_5047_ = v_algorithm_5025_;
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_value_5045_);
lean_dec(v_algorithm_5025_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5050_; 
if (v_isShared_5048_ == 0)
{
lean_ctor_set_tag(v___x_5047_, 4);
v___x_5050_ = v___x_5047_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v_value_5045_);
v___x_5050_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
v___y_5031_ = v___x_5050_;
goto v___jp_5030_;
}
}
}
v___jp_5030_:
{
lean_object* v___x_5032_; size_t v_sz_5033_; size_t v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
v___x_5032_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5032_, 0, v_extractable_5026_);
v_sz_5033_ = lean_array_size(v_keyUsages_5027_);
v___x_5034_ = ((size_t)0ULL);
v___x_5035_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5033_, v___x_5034_, v_keyUsages_5027_);
v___x_5036_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
v___x_5037_ = lean_unsigned_to_nat(3u);
v___x_5038_ = lean_mk_empty_array_with_capacity(v___x_5037_);
v___x_5039_ = lean_array_push(v___x_5038_, v___y_5031_);
v___x_5040_ = lean_array_push(v___x_5039_, v___x_5032_);
v___x_5041_ = lean_array_push(v___x_5040_, v___x_5036_);
v___x_5042_ = l_Lasm_JS_Web_Support_args(v___x_5041_);
v___x_5043_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__1(v_self_5024_, v___x_5029_, v___x_5042_);
return v___x_5043_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_generateKey___boxed(lean_object* v_self_5053_, lean_object* v_algorithm_5054_, lean_object* v_extractable_5055_, lean_object* v_keyUsages_5056_, lean_object* v_a_5057_){
_start:
{
uint8_t v_extractable_boxed_5058_; lean_object* v_res_5059_; 
v_extractable_boxed_5058_ = lean_unbox(v_extractable_5055_);
v_res_5059_ = l_Lasm_JS_Web_SubtleCrypto_generateKey(v_self_5053_, v_algorithm_5054_, v_extractable_boxed_5058_, v_keyUsages_5056_);
return v_res_5059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(lean_object* v_x_5060_){
_start:
{
if (lean_obj_tag(v_x_5060_) == 0)
{
lean_object* v_a_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5070_; 
v_a_5062_ = lean_ctor_get(v_x_5060_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v_x_5060_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5064_ = v_x_5060_;
v_isShared_5065_ = v_isSharedCheck_5070_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_a_5062_);
lean_dec(v_x_5060_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5070_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
lean_object* v___x_5067_; 
if (v_isShared_5065_ == 0)
{
v___x_5067_ = v___x_5064_;
goto v_reusejp_5066_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5062_);
v___x_5067_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5066_;
}
v_reusejp_5066_:
{
lean_object* v___x_5068_; 
v___x_5068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5067_);
return v___x_5068_;
}
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5079_; 
v_a_5071_ = lean_ctor_get(v_x_5060_, 0);
v_isSharedCheck_5079_ = !lean_is_exclusive(v_x_5060_);
if (v_isSharedCheck_5079_ == 0)
{
v___x_5073_ = v_x_5060_;
v_isShared_5074_ = v_isSharedCheck_5079_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v_x_5060_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5079_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5078_; 
v_reuseFailAlloc_5078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5078_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5078_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
lean_object* v___x_5077_; 
v___x_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5076_);
return v___x_5077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0___boxed(lean_object* v_x_5080_, lean_object* v___y_5081_){
_start:
{
lean_object* v_res_5082_; 
v_res_5082_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey___lam__0(v_x_5080_);
return v_res_5082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey(lean_object* v_self_5084_, lean_object* v_algorithm_5085_, lean_object* v_baseKey_5086_, lean_object* v_derivedKeyType_5087_, uint8_t v_extractable_5088_, lean_object* v_keyUsages_5089_){
_start:
{
lean_object* v___f_5091_; lean_object* v___x_5092_; lean_object* v___y_5094_; lean_object* v___y_5095_; lean_object* v___y_5096_; lean_object* v___y_5115_; 
v___f_5091_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5092_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__8));
if (lean_obj_tag(v_algorithm_5085_) == 0)
{
lean_object* v_value_5127_; 
v_value_5127_ = lean_ctor_get(v_algorithm_5085_, 0);
lean_inc(v_value_5127_);
lean_dec_ref_known(v_algorithm_5085_, 1);
v___y_5115_ = v_value_5127_;
goto v___jp_5114_;
}
else
{
lean_object* v_value_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5135_; 
v_value_5128_ = lean_ctor_get(v_algorithm_5085_, 0);
v_isSharedCheck_5135_ = !lean_is_exclusive(v_algorithm_5085_);
if (v_isSharedCheck_5135_ == 0)
{
v___x_5130_ = v_algorithm_5085_;
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
else
{
lean_inc(v_value_5128_);
lean_dec(v_algorithm_5085_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v___x_5133_; 
if (v_isShared_5131_ == 0)
{
lean_ctor_set_tag(v___x_5130_, 4);
v___x_5133_ = v___x_5130_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v_value_5128_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
v___y_5115_ = v___x_5133_;
goto v___jp_5114_;
}
}
}
v___jp_5093_:
{
lean_object* v___x_5097_; size_t v_sz_5098_; size_t v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; uint8_t v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5097_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5097_, 0, v_extractable_5088_);
v_sz_5098_ = lean_array_size(v_keyUsages_5089_);
v___x_5099_ = ((size_t)0ULL);
v___x_5100_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5098_, v___x_5099_, v_keyUsages_5089_);
v___x_5101_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5101_, 0, v___x_5100_);
v___x_5102_ = lean_unsigned_to_nat(5u);
v___x_5103_ = lean_mk_empty_array_with_capacity(v___x_5102_);
v___x_5104_ = lean_array_push(v___x_5103_, v___y_5094_);
v___x_5105_ = lean_array_push(v___x_5104_, v___y_5095_);
v___x_5106_ = lean_array_push(v___x_5105_, v___y_5096_);
v___x_5107_ = lean_array_push(v___x_5106_, v___x_5097_);
v___x_5108_ = lean_array_push(v___x_5107_, v___x_5101_);
v___x_5109_ = l_Lasm_JS_Web_Support_args(v___x_5108_);
v___x_5110_ = lean_unsigned_to_nat(0u);
v___x_5111_ = 0;
v___x_5112_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5084_, v___x_5092_, v___x_5109_);
v___x_5113_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5110_, v___x_5111_, v___x_5112_, v___f_5091_);
return v___x_5113_;
}
v___jp_5114_:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5117_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5117_, 0, v_baseKey_5086_);
lean_ctor_set(v___x_5117_, 1, v___x_5116_);
if (lean_obj_tag(v_derivedKeyType_5087_) == 0)
{
lean_object* v_value_5118_; 
v_value_5118_ = lean_ctor_get(v_derivedKeyType_5087_, 0);
lean_inc(v_value_5118_);
lean_dec_ref_known(v_derivedKeyType_5087_, 1);
v___y_5094_ = v___y_5115_;
v___y_5095_ = v___x_5117_;
v___y_5096_ = v_value_5118_;
goto v___jp_5093_;
}
else
{
lean_object* v_value_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5126_; 
v_value_5119_ = lean_ctor_get(v_derivedKeyType_5087_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v_derivedKeyType_5087_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5121_ = v_derivedKeyType_5087_;
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_value_5119_);
lean_dec(v_derivedKeyType_5087_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5124_; 
if (v_isShared_5122_ == 0)
{
lean_ctor_set_tag(v___x_5121_, 4);
v___x_5124_ = v___x_5121_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v_value_5119_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
v___y_5094_ = v___y_5115_;
v___y_5095_ = v___x_5117_;
v___y_5096_ = v___x_5124_;
goto v___jp_5093_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveKey___boxed(lean_object* v_self_5136_, lean_object* v_algorithm_5137_, lean_object* v_baseKey_5138_, lean_object* v_derivedKeyType_5139_, lean_object* v_extractable_5140_, lean_object* v_keyUsages_5141_, lean_object* v_a_5142_){
_start:
{
uint8_t v_extractable_boxed_5143_; lean_object* v_res_5144_; 
v_extractable_boxed_5143_ = lean_unbox(v_extractable_5140_);
v_res_5144_ = l_Lasm_JS_Web_SubtleCrypto_deriveKey(v_self_5136_, v_algorithm_5137_, v_baseKey_5138_, v_derivedKeyType_5139_, v_extractable_boxed_5143_, v_keyUsages_5141_);
return v_res_5144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(lean_object* v_x_5145_){
_start:
{
if (lean_obj_tag(v_x_5145_) == 0)
{
lean_object* v___x_5146_; 
v___x_5146_ = lean_box(0);
return v___x_5146_;
}
else
{
lean_object* v_val_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5160_; 
v_val_5147_ = lean_ctor_get(v_x_5145_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v_x_5145_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5149_ = v_x_5145_;
v_isShared_5150_ = v_isSharedCheck_5160_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_val_5147_);
lean_dec(v_x_5145_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5160_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; uint8_t v___x_5154_; 
v___x_5151_ = lean_nat_to_int(v_val_5147_);
v___x_5152_ = lean_nat_abs(v___x_5151_);
v___x_5153_ = lean_cstr_to_nat("9007199254740991");
v___x_5154_ = lean_nat_dec_le(v___x_5152_, v___x_5153_);
lean_dec(v___x_5152_);
if (v___x_5154_ == 0)
{
lean_object* v___x_5156_; 
if (v_isShared_5150_ == 0)
{
lean_ctor_set_tag(v___x_5149_, 5);
lean_ctor_set(v___x_5149_, 0, v___x_5151_);
v___x_5156_ = v___x_5149_;
goto v_reusejp_5155_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v___x_5151_);
v___x_5156_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5155_;
}
v_reusejp_5155_:
{
return v___x_5156_;
}
}
else
{
double v___x_5158_; lean_object* v___x_5159_; 
lean_del_object(v___x_5149_);
v___x_5158_ = l_Float_ofInt(v___x_5151_);
lean_dec(v___x_5151_);
v___x_5159_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5159_, 0, v___x_5158_);
return v___x_5159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits(lean_object* v_self_5161_, lean_object* v_algorithm_5162_, lean_object* v_baseKey_5163_, lean_object* v_length_5164_){
_start:
{
lean_object* v___f_5166_; lean_object* v___x_5167_; lean_object* v___y_5169_; 
v___f_5166_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5167_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__10));
if (lean_obj_tag(v_algorithm_5162_) == 0)
{
lean_object* v_value_5183_; 
v_value_5183_ = lean_ctor_get(v_algorithm_5162_, 0);
lean_inc(v_value_5183_);
lean_dec_ref_known(v_algorithm_5162_, 1);
v___y_5169_ = v_value_5183_;
goto v___jp_5168_;
}
else
{
lean_object* v_value_5184_; lean_object* v___x_5186_; uint8_t v_isShared_5187_; uint8_t v_isSharedCheck_5191_; 
v_value_5184_ = lean_ctor_get(v_algorithm_5162_, 0);
v_isSharedCheck_5191_ = !lean_is_exclusive(v_algorithm_5162_);
if (v_isSharedCheck_5191_ == 0)
{
v___x_5186_ = v_algorithm_5162_;
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
else
{
lean_inc(v_value_5184_);
lean_dec(v_algorithm_5162_);
v___x_5186_ = lean_box(0);
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
v_resetjp_5185_:
{
lean_object* v___x_5189_; 
if (v_isShared_5187_ == 0)
{
lean_ctor_set_tag(v___x_5186_, 4);
v___x_5189_ = v___x_5186_;
goto v_reusejp_5188_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_value_5184_);
v___x_5189_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5188_;
}
v_reusejp_5188_:
{
v___y_5169_ = v___x_5189_;
goto v___jp_5168_;
}
}
}
v___jp_5168_:
{
lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; uint8_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; 
v___x_5170_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5171_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5171_, 0, v_baseKey_5163_);
lean_ctor_set(v___x_5171_, 1, v___x_5170_);
v___x_5172_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_deriveBits_spec__0(v_length_5164_);
v___x_5173_ = lean_unsigned_to_nat(3u);
v___x_5174_ = lean_mk_empty_array_with_capacity(v___x_5173_);
v___x_5175_ = lean_array_push(v___x_5174_, v___y_5169_);
v___x_5176_ = lean_array_push(v___x_5175_, v___x_5171_);
v___x_5177_ = lean_array_push(v___x_5176_, v___x_5172_);
v___x_5178_ = l_Lasm_JS_Web_Support_args(v___x_5177_);
v___x_5179_ = lean_unsigned_to_nat(0u);
v___x_5180_ = 0;
v___x_5181_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5161_, v___x_5167_, v___x_5178_);
v___x_5182_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5179_, v___x_5180_, v___x_5181_, v___f_5166_);
return v___x_5182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_deriveBits___boxed(lean_object* v_self_5192_, lean_object* v_algorithm_5193_, lean_object* v_baseKey_5194_, lean_object* v_length_5195_, lean_object* v_a_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l_Lasm_JS_Web_SubtleCrypto_deriveBits(v_self_5192_, v_algorithm_5193_, v_baseKey_5194_, v_length_5195_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(lean_object* v_x_5198_){
_start:
{
if (lean_obj_tag(v_x_5198_) == 0)
{
lean_object* v___x_5199_; 
v___x_5199_ = lean_box(0);
return v___x_5199_;
}
else
{
lean_object* v_val_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
v_val_5200_ = lean_ctor_get(v_x_5198_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_x_5198_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v_x_5198_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_val_5200_);
lean_dec(v_x_5198_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 4);
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_val_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(lean_object* v_x_5208_){
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
lean_object* v_val_5210_; lean_object* v___x_5211_; uint8_t v___x_5212_; 
v_val_5210_ = lean_ctor_get(v_x_5208_, 0);
v___x_5211_ = lean_alloc_ctor(2, 0, 1);
v___x_5212_ = lean_unbox(v_val_5210_);
lean_ctor_set_uint8(v___x_5211_, 0, v___x_5212_);
return v___x_5211_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2___boxed(lean_object* v_x_5213_){
_start:
{
lean_object* v_res_5214_; 
v_res_5214_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_x_5213_);
lean_dec(v_x_5213_);
return v_res_5214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(size_t v_sz_5215_, size_t v_i_5216_, lean_object* v_bs_5217_){
_start:
{
uint8_t v___x_5218_; 
v___x_5218_ = lean_usize_dec_lt(v_i_5216_, v_sz_5215_);
if (v___x_5218_ == 0)
{
return v_bs_5217_;
}
else
{
lean_object* v_v_5219_; lean_object* v___x_5220_; lean_object* v_bs_x27_5221_; lean_object* v___x_5222_; size_t v___x_5223_; size_t v___x_5224_; lean_object* v___x_5225_; 
v_v_5219_ = lean_array_uget(v_bs_5217_, v_i_5216_);
v___x_5220_ = lean_unsigned_to_nat(0u);
v_bs_x27_5221_ = lean_array_uset(v_bs_5217_, v_i_5216_, v___x_5220_);
v___x_5222_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5222_, 0, v_v_5219_);
v___x_5223_ = ((size_t)1ULL);
v___x_5224_ = lean_usize_add(v_i_5216_, v___x_5223_);
v___x_5225_ = lean_array_uset(v_bs_x27_5221_, v_i_5216_, v___x_5222_);
v_i_5216_ = v___x_5224_;
v_bs_5217_ = v___x_5225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1___boxed(lean_object* v_sz_5227_, lean_object* v_i_5228_, lean_object* v_bs_5229_){
_start:
{
size_t v_sz_boxed_5230_; size_t v_i_boxed_5231_; lean_object* v_res_5232_; 
v_sz_boxed_5230_ = lean_unbox_usize(v_sz_5227_);
lean_dec(v_sz_5227_);
v_i_boxed_5231_ = lean_unbox_usize(v_i_5228_);
lean_dec(v_i_5228_);
v_res_5232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_boxed_5230_, v_i_boxed_5231_, v_bs_5229_);
return v_res_5232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(lean_object* v_x_5233_){
_start:
{
if (lean_obj_tag(v_x_5233_) == 0)
{
lean_object* v___x_5234_; 
v___x_5234_ = lean_box(0);
return v___x_5234_;
}
else
{
lean_object* v_val_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5245_; 
v_val_5235_ = lean_ctor_get(v_x_5233_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v_x_5233_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5237_ = v_x_5233_;
v_isShared_5238_ = v_isSharedCheck_5245_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_val_5235_);
lean_dec(v_x_5233_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5245_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
size_t v_sz_5239_; size_t v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5243_; 
v_sz_5239_ = lean_array_size(v_val_5235_);
v___x_5240_ = ((size_t)0ULL);
v___x_5241_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1_spec__1(v_sz_5239_, v___x_5240_, v_val_5235_);
if (v_isShared_5238_ == 0)
{
lean_ctor_set_tag(v___x_5237_, 7);
lean_ctor_set(v___x_5237_, 0, v___x_5241_);
v___x_5243_ = v___x_5237_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5241_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
return v___x_5243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(size_t v_sz_5246_, size_t v_i_5247_, lean_object* v_bs_5248_){
_start:
{
uint8_t v___x_5249_; 
v___x_5249_ = lean_usize_dec_lt(v_i_5247_, v_sz_5246_);
if (v___x_5249_ == 0)
{
return v_bs_5248_;
}
else
{
lean_object* v_v_5250_; lean_object* v_r_5251_; lean_object* v_d_5252_; lean_object* v_t_5253_; lean_object* v___x_5254_; lean_object* v_bs_x27_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; size_t v___x_5271_; size_t v___x_5272_; lean_object* v___x_5273_; 
v_v_5250_ = lean_array_uget_borrowed(v_bs_5248_, v_i_5247_);
v_r_5251_ = lean_ctor_get(v_v_5250_, 0);
lean_inc(v_r_5251_);
v_d_5252_ = lean_ctor_get(v_v_5250_, 1);
lean_inc(v_d_5252_);
v_t_5253_ = lean_ctor_get(v_v_5250_, 2);
lean_inc(v_t_5253_);
v___x_5254_ = lean_unsigned_to_nat(0u);
v_bs_x27_5255_ = lean_array_uset(v_bs_5248_, v_i_5247_, v___x_5254_);
v___x_5256_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__0));
v___x_5257_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_r_5251_);
v___x_5258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5258_, 0, v___x_5256_);
lean_ctor_set(v___x_5258_, 1, v___x_5257_);
v___x_5259_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5260_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5252_);
v___x_5261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5261_, 0, v___x_5259_);
lean_ctor_set(v___x_5261_, 1, v___x_5260_);
v___x_5262_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__2));
v___x_5263_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_t_5253_);
v___x_5264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5264_, 0, v___x_5262_);
lean_ctor_set(v___x_5264_, 1, v___x_5263_);
v___x_5265_ = lean_unsigned_to_nat(3u);
v___x_5266_ = lean_mk_empty_array_with_capacity(v___x_5265_);
v___x_5267_ = lean_array_push(v___x_5266_, v___x_5258_);
v___x_5268_ = lean_array_push(v___x_5267_, v___x_5261_);
v___x_5269_ = lean_array_push(v___x_5268_, v___x_5264_);
v___x_5270_ = l_Lasm_JS_Web_Support_fields(v___x_5269_);
lean_dec_ref(v___x_5269_);
v___x_5271_ = ((size_t)1ULL);
v___x_5272_ = lean_usize_add(v_i_5247_, v___x_5271_);
v___x_5273_ = lean_array_uset(v_bs_x27_5255_, v_i_5247_, v___x_5270_);
v_i_5247_ = v___x_5272_;
v_bs_5248_ = v___x_5273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4___boxed(lean_object* v_sz_5275_, lean_object* v_i_5276_, lean_object* v_bs_5277_){
_start:
{
size_t v_sz_boxed_5278_; size_t v_i_boxed_5279_; lean_object* v_res_5280_; 
v_sz_boxed_5278_ = lean_unbox_usize(v_sz_5275_);
lean_dec(v_sz_5275_);
v_i_boxed_5279_ = lean_unbox_usize(v_i_5276_);
lean_dec(v_i_5276_);
v_res_5280_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_boxed_5278_, v_i_boxed_5279_, v_bs_5277_);
return v_res_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(lean_object* v_x_5281_){
_start:
{
if (lean_obj_tag(v_x_5281_) == 0)
{
lean_object* v___x_5282_; 
v___x_5282_ = lean_box(0);
return v___x_5282_;
}
else
{
lean_object* v_val_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5293_; 
v_val_5283_ = lean_ctor_get(v_x_5281_, 0);
v_isSharedCheck_5293_ = !lean_is_exclusive(v_x_5281_);
if (v_isSharedCheck_5293_ == 0)
{
v___x_5285_ = v_x_5281_;
v_isShared_5286_ = v_isSharedCheck_5293_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_val_5283_);
lean_dec(v_x_5281_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5293_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
size_t v_sz_5287_; size_t v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5291_; 
v_sz_5287_ = lean_array_size(v_val_5283_);
v___x_5288_ = ((size_t)0ULL);
v___x_5289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3_spec__4(v_sz_5287_, v___x_5288_, v_val_5283_);
if (v_isShared_5286_ == 0)
{
lean_ctor_set_tag(v___x_5285_, 7);
lean_ctor_set(v___x_5285_, 0, v___x_5289_);
v___x_5291_ = v___x_5285_;
goto v_reusejp_5290_;
}
else
{
lean_object* v_reuseFailAlloc_5292_; 
v_reuseFailAlloc_5292_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5292_, 0, v___x_5289_);
v___x_5291_ = v_reuseFailAlloc_5292_;
goto v_reusejp_5290_;
}
v_reusejp_5290_:
{
return v___x_5291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey(lean_object* v_self_5295_, uint8_t v_format_5296_, lean_object* v_keyData_5297_, lean_object* v_algorithm_5298_, uint8_t v_extractable_5299_, lean_object* v_keyUsages_5300_){
_start:
{
lean_object* v___f_5302_; lean_object* v___x_5303_; lean_object* v___y_5305_; lean_object* v___y_5306_; lean_object* v___y_5307_; lean_object* v___y_5326_; lean_object* v___y_5327_; lean_object* v___y_5338_; 
v___f_5302_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5303_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_importKey___closed__0));
switch(v_format_5296_)
{
case 0:
{
lean_object* v___x_5441_; 
v___x_5441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5338_ = v___x_5441_;
goto v___jp_5337_;
}
case 1:
{
lean_object* v___x_5442_; 
v___x_5442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5338_ = v___x_5442_;
goto v___jp_5337_;
}
case 2:
{
lean_object* v___x_5443_; 
v___x_5443_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5338_ = v___x_5443_;
goto v___jp_5337_;
}
case 3:
{
lean_object* v___x_5444_; 
v___x_5444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5338_ = v___x_5444_;
goto v___jp_5337_;
}
case 4:
{
lean_object* v___x_5445_; 
v___x_5445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5338_ = v___x_5445_;
goto v___jp_5337_;
}
case 5:
{
lean_object* v___x_5446_; 
v___x_5446_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5338_ = v___x_5446_;
goto v___jp_5337_;
}
case 6:
{
lean_object* v___x_5447_; 
v___x_5447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5338_ = v___x_5447_;
goto v___jp_5337_;
}
default: 
{
lean_object* v___x_5448_; 
v___x_5448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5338_ = v___x_5448_;
goto v___jp_5337_;
}
}
v___jp_5304_:
{
lean_object* v___x_5308_; size_t v_sz_5309_; size_t v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; uint8_t v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5308_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5308_, 0, v_extractable_5299_);
v_sz_5309_ = lean_array_size(v_keyUsages_5300_);
v___x_5310_ = ((size_t)0ULL);
v___x_5311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5309_, v___x_5310_, v_keyUsages_5300_);
v___x_5312_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5312_, 0, v___x_5311_);
v___x_5313_ = lean_unsigned_to_nat(5u);
v___x_5314_ = lean_mk_empty_array_with_capacity(v___x_5313_);
lean_inc(v___y_5305_);
v___x_5315_ = lean_array_push(v___x_5314_, v___y_5305_);
v___x_5316_ = lean_array_push(v___x_5315_, v___y_5306_);
v___x_5317_ = lean_array_push(v___x_5316_, v___y_5307_);
v___x_5318_ = lean_array_push(v___x_5317_, v___x_5308_);
v___x_5319_ = lean_array_push(v___x_5318_, v___x_5312_);
v___x_5320_ = l_Lasm_JS_Web_Support_args(v___x_5319_);
v___x_5321_ = lean_unsigned_to_nat(0u);
v___x_5322_ = 0;
v___x_5323_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5295_, v___x_5303_, v___x_5320_);
v___x_5324_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5321_, v___x_5322_, v___x_5323_, v___f_5302_);
return v___x_5324_;
}
v___jp_5325_:
{
if (lean_obj_tag(v_algorithm_5298_) == 0)
{
lean_object* v_value_5328_; 
v_value_5328_ = lean_ctor_get(v_algorithm_5298_, 0);
lean_inc(v_value_5328_);
lean_dec_ref_known(v_algorithm_5298_, 1);
v___y_5305_ = v___y_5326_;
v___y_5306_ = v___y_5327_;
v___y_5307_ = v_value_5328_;
goto v___jp_5304_;
}
else
{
lean_object* v_value_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5336_; 
v_value_5329_ = lean_ctor_get(v_algorithm_5298_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v_algorithm_5298_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5331_ = v_algorithm_5298_;
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_value_5329_);
lean_dec(v_algorithm_5298_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v___x_5334_; 
if (v_isShared_5332_ == 0)
{
lean_ctor_set_tag(v___x_5331_, 4);
v___x_5334_ = v___x_5331_;
goto v_reusejp_5333_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_value_5329_);
v___x_5334_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5333_;
}
v_reusejp_5333_:
{
v___y_5305_ = v___y_5326_;
v___y_5306_ = v___y_5327_;
v___y_5307_ = v___x_5334_;
goto v___jp_5304_;
}
}
}
}
v___jp_5337_:
{
if (lean_obj_tag(v_keyData_5297_) == 0)
{
lean_object* v_value_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5346_; 
v_value_5339_ = lean_ctor_get(v_keyData_5297_, 0);
v_isSharedCheck_5346_ = !lean_is_exclusive(v_keyData_5297_);
if (v_isSharedCheck_5346_ == 0)
{
v___x_5341_ = v_keyData_5297_;
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_value_5339_);
lean_dec(v_keyData_5297_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
lean_ctor_set_tag(v___x_5341_, 6);
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_value_5339_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
v___y_5326_ = v___y_5338_;
v___y_5327_ = v___x_5344_;
goto v___jp_5325_;
}
}
}
else
{
lean_object* v_value_5347_; lean_object* v_kty_5348_; lean_object* v_use_5349_; lean_object* v_key__ops_5350_; lean_object* v_alg_5351_; lean_object* v_ext_5352_; lean_object* v_crv_5353_; lean_object* v_x_5354_; lean_object* v_y_5355_; lean_object* v_d_5356_; lean_object* v_n_5357_; lean_object* v_e_5358_; lean_object* v_p_5359_; lean_object* v_q_5360_; lean_object* v_dp_5361_; lean_object* v_dq_5362_; lean_object* v_qi_5363_; lean_object* v_oth_5364_; lean_object* v_k_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; 
v_value_5347_ = lean_ctor_get(v_keyData_5297_, 0);
lean_inc_ref(v_value_5347_);
lean_dec_ref_known(v_keyData_5297_, 1);
v_kty_5348_ = lean_ctor_get(v_value_5347_, 0);
lean_inc(v_kty_5348_);
v_use_5349_ = lean_ctor_get(v_value_5347_, 1);
lean_inc(v_use_5349_);
v_key__ops_5350_ = lean_ctor_get(v_value_5347_, 2);
lean_inc(v_key__ops_5350_);
v_alg_5351_ = lean_ctor_get(v_value_5347_, 3);
lean_inc(v_alg_5351_);
v_ext_5352_ = lean_ctor_get(v_value_5347_, 4);
lean_inc(v_ext_5352_);
v_crv_5353_ = lean_ctor_get(v_value_5347_, 5);
lean_inc(v_crv_5353_);
v_x_5354_ = lean_ctor_get(v_value_5347_, 6);
lean_inc(v_x_5354_);
v_y_5355_ = lean_ctor_get(v_value_5347_, 7);
lean_inc(v_y_5355_);
v_d_5356_ = lean_ctor_get(v_value_5347_, 8);
lean_inc(v_d_5356_);
v_n_5357_ = lean_ctor_get(v_value_5347_, 9);
lean_inc(v_n_5357_);
v_e_5358_ = lean_ctor_get(v_value_5347_, 10);
lean_inc(v_e_5358_);
v_p_5359_ = lean_ctor_get(v_value_5347_, 11);
lean_inc(v_p_5359_);
v_q_5360_ = lean_ctor_get(v_value_5347_, 12);
lean_inc(v_q_5360_);
v_dp_5361_ = lean_ctor_get(v_value_5347_, 13);
lean_inc(v_dp_5361_);
v_dq_5362_ = lean_ctor_get(v_value_5347_, 14);
lean_inc(v_dq_5362_);
v_qi_5363_ = lean_ctor_get(v_value_5347_, 15);
lean_inc(v_qi_5363_);
v_oth_5364_ = lean_ctor_get(v_value_5347_, 16);
lean_inc(v_oth_5364_);
v_k_5365_ = lean_ctor_get(v_value_5347_, 17);
lean_inc(v_k_5365_);
lean_dec_ref(v_value_5347_);
v___x_5366_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__0));
v___x_5367_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_kty_5348_);
v___x_5368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5368_, 0, v___x_5366_);
lean_ctor_set(v___x_5368_, 1, v___x_5367_);
v___x_5369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__1));
v___x_5370_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_use_5349_);
v___x_5371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5369_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
v___x_5372_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__2));
v___x_5373_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__1(v_key__ops_5350_);
v___x_5374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5374_, 0, v___x_5372_);
lean_ctor_set(v___x_5374_, 1, v___x_5373_);
v___x_5375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__3));
v___x_5376_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_alg_5351_);
v___x_5377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5377_, 0, v___x_5375_);
lean_ctor_set(v___x_5377_, 1, v___x_5376_);
v___x_5378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__4));
v___x_5379_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__2(v_ext_5352_);
lean_dec(v_ext_5352_);
v___x_5380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5380_, 0, v___x_5378_);
lean_ctor_set(v___x_5380_, 1, v___x_5379_);
v___x_5381_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__5));
v___x_5382_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_crv_5353_);
v___x_5383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5383_, 0, v___x_5381_);
lean_ctor_set(v___x_5383_, 1, v___x_5382_);
v___x_5384_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__6));
v___x_5385_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_x_5354_);
v___x_5386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5386_, 0, v___x_5384_);
lean_ctor_set(v___x_5386_, 1, v___x_5385_);
v___x_5387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__7));
v___x_5388_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_y_5355_);
v___x_5389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5389_, 0, v___x_5387_);
lean_ctor_set(v___x_5389_, 1, v___x_5388_);
v___x_5390_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRsaOtherPrimesInfo___lam__0___closed__1));
v___x_5391_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_d_5356_);
v___x_5392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5392_, 0, v___x_5390_);
lean_ctor_set(v___x_5392_, 1, v___x_5391_);
v___x_5393_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__8));
v___x_5394_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_n_5357_);
v___x_5395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5395_, 0, v___x_5393_);
lean_ctor_set(v___x_5395_, 1, v___x_5394_);
v___x_5396_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__9));
v___x_5397_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_e_5358_);
v___x_5398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5398_, 0, v___x_5396_);
lean_ctor_set(v___x_5398_, 1, v___x_5397_);
v___x_5399_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__10));
v___x_5400_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_p_5359_);
v___x_5401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5401_, 0, v___x_5399_);
lean_ctor_set(v___x_5401_, 1, v___x_5400_);
v___x_5402_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__11));
v___x_5403_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_q_5360_);
v___x_5404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5402_);
lean_ctor_set(v___x_5404_, 1, v___x_5403_);
v___x_5405_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__12));
v___x_5406_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dp_5361_);
v___x_5407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5405_);
lean_ctor_set(v___x_5407_, 1, v___x_5406_);
v___x_5408_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__13));
v___x_5409_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_dq_5362_);
v___x_5410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5410_, 0, v___x_5408_);
lean_ctor_set(v___x_5410_, 1, v___x_5409_);
v___x_5411_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__14));
v___x_5412_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_qi_5363_);
v___x_5413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5413_, 0, v___x_5411_);
lean_ctor_set(v___x_5413_, 1, v___x_5412_);
v___x_5414_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__15));
v___x_5415_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__3(v_oth_5364_);
v___x_5416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5416_, 0, v___x_5414_);
lean_ctor_set(v___x_5416_, 1, v___x_5415_);
v___x_5417_ = ((lean_object*)(l_Lasm_JS_Web_instToJSJsonWebKey___lam__0___closed__16));
v___x_5418_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubtleCrypto_importKey_spec__0(v_k_5365_);
v___x_5419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5419_, 0, v___x_5417_);
lean_ctor_set(v___x_5419_, 1, v___x_5418_);
v___x_5420_ = lean_unsigned_to_nat(18u);
v___x_5421_ = lean_mk_empty_array_with_capacity(v___x_5420_);
v___x_5422_ = lean_array_push(v___x_5421_, v___x_5368_);
v___x_5423_ = lean_array_push(v___x_5422_, v___x_5371_);
v___x_5424_ = lean_array_push(v___x_5423_, v___x_5374_);
v___x_5425_ = lean_array_push(v___x_5424_, v___x_5377_);
v___x_5426_ = lean_array_push(v___x_5425_, v___x_5380_);
v___x_5427_ = lean_array_push(v___x_5426_, v___x_5383_);
v___x_5428_ = lean_array_push(v___x_5427_, v___x_5386_);
v___x_5429_ = lean_array_push(v___x_5428_, v___x_5389_);
v___x_5430_ = lean_array_push(v___x_5429_, v___x_5392_);
v___x_5431_ = lean_array_push(v___x_5430_, v___x_5395_);
v___x_5432_ = lean_array_push(v___x_5431_, v___x_5398_);
v___x_5433_ = lean_array_push(v___x_5432_, v___x_5401_);
v___x_5434_ = lean_array_push(v___x_5433_, v___x_5404_);
v___x_5435_ = lean_array_push(v___x_5434_, v___x_5407_);
v___x_5436_ = lean_array_push(v___x_5435_, v___x_5410_);
v___x_5437_ = lean_array_push(v___x_5436_, v___x_5413_);
v___x_5438_ = lean_array_push(v___x_5437_, v___x_5416_);
v___x_5439_ = lean_array_push(v___x_5438_, v___x_5419_);
v___x_5440_ = l_Lasm_JS_Web_Support_fields(v___x_5439_);
lean_dec_ref(v___x_5439_);
v___y_5326_ = v___y_5338_;
v___y_5327_ = v___x_5440_;
goto v___jp_5325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_importKey___boxed(lean_object* v_self_5449_, lean_object* v_format_5450_, lean_object* v_keyData_5451_, lean_object* v_algorithm_5452_, lean_object* v_extractable_5453_, lean_object* v_keyUsages_5454_, lean_object* v_a_5455_){
_start:
{
uint8_t v_format_boxed_5456_; uint8_t v_extractable_boxed_5457_; lean_object* v_res_5458_; 
v_format_boxed_5456_ = lean_unbox(v_format_5450_);
v_extractable_boxed_5457_ = lean_unbox(v_extractable_5453_);
v_res_5458_ = l_Lasm_JS_Web_SubtleCrypto_importKey(v_self_5449_, v_format_boxed_5456_, v_keyData_5451_, v_algorithm_5452_, v_extractable_boxed_5457_, v_keyUsages_5454_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(lean_object* v_x_5459_){
_start:
{
lean_object* v_val_5462_; 
if (lean_obj_tag(v_x_5459_) == 0)
{
lean_object* v_a_5464_; lean_object* v___x_5466_; uint8_t v_isShared_5467_; uint8_t v_isSharedCheck_5472_; 
v_a_5464_ = lean_ctor_get(v_x_5459_, 0);
v_isSharedCheck_5472_ = !lean_is_exclusive(v_x_5459_);
if (v_isSharedCheck_5472_ == 0)
{
v___x_5466_ = v_x_5459_;
v_isShared_5467_ = v_isSharedCheck_5472_;
goto v_resetjp_5465_;
}
else
{
lean_inc(v_a_5464_);
lean_dec(v_x_5459_);
v___x_5466_ = lean_box(0);
v_isShared_5467_ = v_isSharedCheck_5472_;
goto v_resetjp_5465_;
}
v_resetjp_5465_:
{
lean_object* v___x_5469_; 
if (v_isShared_5467_ == 0)
{
v___x_5469_ = v___x_5466_;
goto v_reusejp_5468_;
}
else
{
lean_object* v_reuseFailAlloc_5471_; 
v_reuseFailAlloc_5471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5471_, 0, v_a_5464_);
v___x_5469_ = v_reuseFailAlloc_5471_;
goto v_reusejp_5468_;
}
v_reusejp_5468_:
{
lean_object* v___x_5470_; 
v___x_5470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5470_, 0, v___x_5469_);
return v___x_5470_;
}
}
}
else
{
lean_object* v_a_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5486_; 
v_a_5473_ = lean_ctor_get(v_x_5459_, 0);
v_isSharedCheck_5486_ = !lean_is_exclusive(v_x_5459_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5475_ = v_x_5459_;
v_isShared_5476_ = v_isSharedCheck_5486_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_a_5473_);
lean_dec(v_x_5459_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5486_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5477_; 
v___x_5477_ = l_Lasm_JS_Web_ArrayBufferOrJsonWebKey_decode(v_a_5473_);
if (lean_obj_tag(v___x_5477_) == 0)
{
lean_object* v_a_5478_; lean_object* v___x_5480_; 
v_a_5478_ = lean_ctor_get(v___x_5477_, 0);
lean_inc(v_a_5478_);
lean_dec_ref_known(v___x_5477_, 1);
if (v_isShared_5476_ == 0)
{
lean_ctor_set(v___x_5475_, 0, v_a_5478_);
v___x_5480_ = v___x_5475_;
goto v_reusejp_5479_;
}
else
{
lean_object* v_reuseFailAlloc_5481_; 
v_reuseFailAlloc_5481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5481_, 0, v_a_5478_);
v___x_5480_ = v_reuseFailAlloc_5481_;
goto v_reusejp_5479_;
}
v_reusejp_5479_:
{
v_val_5462_ = v___x_5480_;
goto v___jp_5461_;
}
}
else
{
lean_object* v_a_5482_; lean_object* v___x_5484_; 
v_a_5482_ = lean_ctor_get(v___x_5477_, 0);
lean_inc(v_a_5482_);
lean_dec_ref_known(v___x_5477_, 1);
if (v_isShared_5476_ == 0)
{
lean_ctor_set_tag(v___x_5475_, 0);
lean_ctor_set(v___x_5475_, 0, v_a_5482_);
v___x_5484_ = v___x_5475_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_a_5482_);
v___x_5484_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
v_val_5462_ = v___x_5484_;
goto v___jp_5461_;
}
}
}
}
v___jp_5461_:
{
lean_object* v___x_5463_; 
v___x_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5463_, 0, v_val_5462_);
return v___x_5463_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0___boxed(lean_object* v_x_5487_, lean_object* v___y_5488_){
_start:
{
lean_object* v_res_5489_; 
v_res_5489_ = l_Lasm_JS_Web_SubtleCrypto_exportKey___lam__0(v_x_5487_);
return v_res_5489_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(lean_object* v_failurePrefix_5490_, uint32_t v_op_5491_, uint64_t v_flags_5492_, lean_object* v_payload_5493_, lean_object* v___f_5494_, lean_object* v___f_5495_, lean_object* v___f_5496_, lean_object* v_x_5497_){
_start:
{
if (lean_obj_tag(v_x_5497_) == 0)
{
lean_object* v_a_5499_; lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5507_; 
lean_dec_ref(v___f_5496_);
lean_dec_ref(v___f_5495_);
lean_dec_ref(v___f_5494_);
lean_dec(v_payload_5493_);
v_a_5499_ = lean_ctor_get(v_x_5497_, 0);
v_isSharedCheck_5507_ = !lean_is_exclusive(v_x_5497_);
if (v_isSharedCheck_5507_ == 0)
{
v___x_5501_ = v_x_5497_;
v_isShared_5502_ = v_isSharedCheck_5507_;
goto v_resetjp_5500_;
}
else
{
lean_inc(v_a_5499_);
lean_dec(v_x_5497_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5507_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v___x_5504_; 
if (v_isShared_5502_ == 0)
{
v___x_5504_ = v___x_5501_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5506_; 
v_reuseFailAlloc_5506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5506_, 0, v_a_5499_);
v___x_5504_ = v_reuseFailAlloc_5506_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
lean_object* v___x_5505_; 
v___x_5505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5505_, 0, v___x_5504_);
return v___x_5505_;
}
}
}
else
{
lean_object* v_a_5508_; lean_object* v___x_5510_; uint8_t v_isShared_5511_; uint8_t v_isSharedCheck_5554_; 
v_a_5508_ = lean_ctor_get(v_x_5497_, 0);
v_isSharedCheck_5554_ = !lean_is_exclusive(v_x_5497_);
if (v_isSharedCheck_5554_ == 0)
{
v___x_5510_ = v_x_5497_;
v_isShared_5511_ = v_isSharedCheck_5554_;
goto v_resetjp_5509_;
}
else
{
lean_inc(v_a_5508_);
lean_dec(v_x_5497_);
v___x_5510_ = lean_box(0);
v_isShared_5511_ = v_isSharedCheck_5554_;
goto v_resetjp_5509_;
}
v_resetjp_5509_:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; uint8_t v___x_5514_; 
v___x_5512_ = lean_string_utf8_byte_size(v_failurePrefix_5490_);
v___x_5513_ = lean_unsigned_to_nat(0u);
v___x_5514_ = lean_nat_dec_eq(v___x_5512_, v___x_5513_);
if (v___x_5514_ == 0)
{
lean_object* v___f_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___f_5519_; lean_object* v_val_5521_; lean_object* v___x_5526_; 
lean_dec_ref(v___f_5496_);
lean_inc(v_a_5508_);
v___f_5515_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5515_, 0, v_a_5508_);
v___x_5516_ = lean_box(v___x_5514_);
v___x_5517_ = lean_box_uint32(v_op_5491_);
v___x_5518_ = lean_box_uint64(v_flags_5492_);
lean_inc(v_payload_5493_);
v___f_5519_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5519_, 0, v___x_5513_);
lean_closure_set(v___f_5519_, 1, v___x_5516_);
lean_closure_set(v___f_5519_, 2, v___f_5515_);
lean_closure_set(v___f_5519_, 3, v_a_5508_);
lean_closure_set(v___f_5519_, 4, v___x_5517_);
lean_closure_set(v___f_5519_, 5, v___x_5518_);
lean_closure_set(v___f_5519_, 6, v_payload_5493_);
v___x_5526_ = l_Lasm_JS_Wire_encodeIO(v_payload_5493_);
if (lean_obj_tag(v___x_5526_) == 0)
{
lean_object* v_a_5527_; lean_object* v___x_5529_; 
v_a_5527_ = lean_ctor_get(v___x_5526_, 0);
lean_inc(v_a_5527_);
lean_dec_ref_known(v___x_5526_, 1);
if (v_isShared_5511_ == 0)
{
lean_ctor_set(v___x_5510_, 0, v_a_5527_);
v___x_5529_ = v___x_5510_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_a_5527_);
v___x_5529_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
v_val_5521_ = v___x_5529_;
goto v___jp_5520_;
}
}
else
{
lean_object* v_a_5531_; lean_object* v___x_5533_; 
v_a_5531_ = lean_ctor_get(v___x_5526_, 0);
lean_inc(v_a_5531_);
lean_dec_ref_known(v___x_5526_, 1);
if (v_isShared_5511_ == 0)
{
lean_ctor_set_tag(v___x_5510_, 0);
lean_ctor_set(v___x_5510_, 0, v_a_5531_);
v___x_5533_ = v___x_5510_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_a_5531_);
v___x_5533_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
v_val_5521_ = v___x_5533_;
goto v___jp_5520_;
}
}
v___jp_5520_:
{
lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; 
v___x_5522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5522_, 0, v_val_5521_);
v___x_5523_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5513_, v___x_5514_, v___x_5522_, v___f_5519_);
v___x_5524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5513_, v___x_5514_, v___x_5523_, v___f_5494_);
v___x_5525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5513_, v___x_5514_, v___x_5524_, v___f_5495_);
return v___x_5525_;
}
}
else
{
lean_object* v___f_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___f_5538_; uint8_t v___x_5539_; lean_object* v_val_5541_; lean_object* v___x_5545_; 
lean_dec_ref(v___f_5495_);
lean_dec_ref(v___f_5494_);
lean_inc(v_a_5508_);
v___f_5535_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5535_, 0, v_a_5508_);
v___x_5536_ = lean_box_uint32(v_op_5491_);
v___x_5537_ = lean_box_uint64(v_flags_5492_);
lean_inc(v_payload_5493_);
v___f_5538_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5538_, 0, v___f_5535_);
lean_closure_set(v___f_5538_, 1, v_a_5508_);
lean_closure_set(v___f_5538_, 2, v___x_5536_);
lean_closure_set(v___f_5538_, 3, v___x_5537_);
lean_closure_set(v___f_5538_, 4, v_payload_5493_);
v___x_5539_ = 0;
v___x_5545_ = l_Lasm_JS_Wire_encodeIO(v_payload_5493_);
if (lean_obj_tag(v___x_5545_) == 0)
{
lean_object* v_a_5546_; lean_object* v___x_5548_; 
v_a_5546_ = lean_ctor_get(v___x_5545_, 0);
lean_inc(v_a_5546_);
lean_dec_ref_known(v___x_5545_, 1);
if (v_isShared_5511_ == 0)
{
lean_ctor_set(v___x_5510_, 0, v_a_5546_);
v___x_5548_ = v___x_5510_;
goto v_reusejp_5547_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v_a_5546_);
v___x_5548_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5547_;
}
v_reusejp_5547_:
{
v_val_5541_ = v___x_5548_;
goto v___jp_5540_;
}
}
else
{
lean_object* v_a_5550_; lean_object* v___x_5552_; 
v_a_5550_ = lean_ctor_get(v___x_5545_, 0);
lean_inc(v_a_5550_);
lean_dec_ref_known(v___x_5545_, 1);
if (v_isShared_5511_ == 0)
{
lean_ctor_set_tag(v___x_5510_, 0);
lean_ctor_set(v___x_5510_, 0, v_a_5550_);
v___x_5552_ = v___x_5510_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v_a_5550_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
v_val_5541_ = v___x_5552_;
goto v___jp_5540_;
}
}
v___jp_5540_:
{
lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; 
v___x_5542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5542_, 0, v_val_5541_);
v___x_5543_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5513_, v___x_5539_, v___x_5542_, v___f_5538_);
v___x_5544_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5513_, v___x_5539_, v___x_5543_, v___f_5496_);
return v___x_5544_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed(lean_object* v_failurePrefix_5555_, lean_object* v_op_5556_, lean_object* v_flags_5557_, lean_object* v_payload_5558_, lean_object* v___f_5559_, lean_object* v___f_5560_, lean_object* v___f_5561_, lean_object* v_x_5562_, lean_object* v___y_5563_){
_start:
{
uint32_t v_op_boxed_5564_; uint64_t v_flags_boxed_5565_; lean_object* v_res_5566_; 
v_op_boxed_5564_ = lean_unbox_uint32(v_op_5556_);
lean_dec(v_op_5556_);
v_flags_boxed_5565_ = lean_unbox_uint64(v_flags_5557_);
lean_dec_ref(v_flags_5557_);
v_res_5566_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9(v_failurePrefix_5555_, v_op_boxed_5564_, v_flags_boxed_5565_, v_payload_5558_, v___f_5559_, v___f_5560_, v___f_5561_, v_x_5562_);
lean_dec_ref(v_failurePrefix_5555_);
return v_res_5566_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(lean_object* v___f_5567_, lean_object* v_x_5568_){
_start:
{
if (lean_obj_tag(v_x_5568_) == 0)
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5578_; 
lean_dec_ref(v___f_5567_);
v_a_5570_ = lean_ctor_get(v_x_5568_, 0);
v_isSharedCheck_5578_ = !lean_is_exclusive(v_x_5568_);
if (v_isSharedCheck_5578_ == 0)
{
v___x_5572_ = v_x_5568_;
v_isShared_5573_ = v_isSharedCheck_5578_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v_x_5568_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5578_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5577_; 
v_reuseFailAlloc_5577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5577_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5577_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
lean_object* v___x_5576_; 
v___x_5576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5576_, 0, v___x_5575_);
return v___x_5576_;
}
}
}
else
{
lean_object* v_a_5579_; lean_object* v___x_5580_; 
v_a_5579_ = lean_ctor_get(v_x_5568_, 0);
lean_inc(v_a_5579_);
lean_dec_ref_known(v_x_5568_, 1);
v___x_5580_ = lean_apply_2(v___f_5567_, v_a_5579_, lean_box(0));
return v___x_5580_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_5581_, lean_object* v_x_5582_, lean_object* v___y_5583_){
_start:
{
lean_object* v_res_5584_; 
v_res_5584_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__2(v___f_5581_, v_x_5582_);
return v_res_5584_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(lean_object* v___f_5585_, lean_object* v_bytes_5586_){
_start:
{
lean_object* v___x_5588_; uint8_t v___x_5589_; lean_object* v_val_5591_; lean_object* v___x_5594_; 
v___x_5588_ = lean_unsigned_to_nat(0u);
v___x_5589_ = 0;
v___x_5594_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5586_);
if (lean_obj_tag(v___x_5594_) == 0)
{
lean_object* v_a_5595_; lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5602_; 
v_a_5595_ = lean_ctor_get(v___x_5594_, 0);
v_isSharedCheck_5602_ = !lean_is_exclusive(v___x_5594_);
if (v_isSharedCheck_5602_ == 0)
{
v___x_5597_ = v___x_5594_;
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
else
{
lean_inc(v_a_5595_);
lean_dec(v___x_5594_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v___x_5600_; 
if (v_isShared_5598_ == 0)
{
lean_ctor_set_tag(v___x_5597_, 1);
v___x_5600_ = v___x_5597_;
goto v_reusejp_5599_;
}
else
{
lean_object* v_reuseFailAlloc_5601_; 
v_reuseFailAlloc_5601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5601_, 0, v_a_5595_);
v___x_5600_ = v_reuseFailAlloc_5601_;
goto v_reusejp_5599_;
}
v_reusejp_5599_:
{
v_val_5591_ = v___x_5600_;
goto v___jp_5590_;
}
}
}
else
{
lean_object* v_a_5603_; lean_object* v___x_5605_; uint8_t v_isShared_5606_; uint8_t v_isSharedCheck_5610_; 
v_a_5603_ = lean_ctor_get(v___x_5594_, 0);
v_isSharedCheck_5610_ = !lean_is_exclusive(v___x_5594_);
if (v_isSharedCheck_5610_ == 0)
{
v___x_5605_ = v___x_5594_;
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
else
{
lean_inc(v_a_5603_);
lean_dec(v___x_5594_);
v___x_5605_ = lean_box(0);
v_isShared_5606_ = v_isSharedCheck_5610_;
goto v_resetjp_5604_;
}
v_resetjp_5604_:
{
lean_object* v___x_5608_; 
if (v_isShared_5606_ == 0)
{
lean_ctor_set_tag(v___x_5605_, 0);
v___x_5608_ = v___x_5605_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5609_; 
v_reuseFailAlloc_5609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5609_, 0, v_a_5603_);
v___x_5608_ = v_reuseFailAlloc_5609_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
v_val_5591_ = v___x_5608_;
goto v___jp_5590_;
}
}
}
v___jp_5590_:
{
lean_object* v___x_5592_; lean_object* v___x_5593_; 
v___x_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5592_, 0, v_val_5591_);
v___x_5593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5588_, v___x_5589_, v___x_5592_, v___f_5585_);
return v___x_5593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_5611_, lean_object* v_bytes_5612_, lean_object* v___y_5613_){
_start:
{
lean_object* v_res_5614_; 
v_res_5614_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__1(v___f_5611_, v_bytes_5612_);
lean_dec_ref(v_bytes_5612_);
return v_res_5614_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(lean_object* v___f_5615_, lean_object* v_x_5616_){
_start:
{
if (lean_obj_tag(v_x_5616_) == 0)
{
lean_object* v_a_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5626_; 
lean_dec_ref(v___f_5615_);
v_a_5618_ = lean_ctor_get(v_x_5616_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v_x_5616_);
if (v_isSharedCheck_5626_ == 0)
{
v___x_5620_ = v_x_5616_;
v_isShared_5621_ = v_isSharedCheck_5626_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_a_5618_);
lean_dec(v_x_5616_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5626_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5623_; 
if (v_isShared_5621_ == 0)
{
v___x_5623_ = v___x_5620_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_a_5618_);
v___x_5623_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
lean_object* v___x_5624_; 
v___x_5624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5624_, 0, v___x_5623_);
return v___x_5624_;
}
}
}
else
{
lean_object* v___x_5628_; uint8_t v_isShared_5629_; uint8_t v_isSharedCheck_5638_; 
v_isSharedCheck_5638_ = !lean_is_exclusive(v_x_5616_);
if (v_isSharedCheck_5638_ == 0)
{
lean_object* v_unused_5639_; 
v_unused_5639_ = lean_ctor_get(v_x_5616_, 0);
lean_dec(v_unused_5639_);
v___x_5628_ = v_x_5616_;
v_isShared_5629_ = v_isSharedCheck_5638_;
goto v_resetjp_5627_;
}
else
{
lean_dec(v_x_5616_);
v___x_5628_ = lean_box(0);
v_isShared_5629_ = v_isSharedCheck_5638_;
goto v_resetjp_5627_;
}
v_resetjp_5627_:
{
lean_object* v___x_5630_; uint8_t v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5634_; 
v___x_5630_ = lean_unsigned_to_nat(0u);
v___x_5631_ = 0;
v___x_5632_ = lean_io_promise_new();
if (v_isShared_5629_ == 0)
{
lean_ctor_set(v___x_5628_, 0, v___x_5632_);
v___x_5634_ = v___x_5628_;
goto v_reusejp_5633_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v___x_5632_);
v___x_5634_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5633_;
}
v_reusejp_5633_:
{
lean_object* v___x_5635_; lean_object* v___x_5636_; 
v___x_5635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5635_, 0, v___x_5634_);
v___x_5636_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5630_, v___x_5631_, v___x_5635_, v___f_5615_);
return v___x_5636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_5640_, lean_object* v_x_5641_, lean_object* v___y_5642_){
_start:
{
lean_object* v_res_5643_; 
v_res_5643_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3(v___f_5640_, v_x_5641_);
return v_res_5643_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(lean_object* v_x_5644_){
_start:
{
lean_object* v___x_5646_; 
v___x_5646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5646_, 0, v_x_5644_);
return v___x_5646_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_5647_, lean_object* v___y_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__0(v_x_5647_);
return v_res_5649_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(uint32_t v_op_5655_, uint64_t v_flags_5656_, lean_object* v_payload_5657_, lean_object* v_failurePrefix_5658_){
_start:
{
lean_object* v___f_5660_; lean_object* v___f_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___f_5664_; lean_object* v___f_5665_; lean_object* v___x_5666_; uint8_t v___x_5667_; lean_object* v_val_5669_; lean_object* v___x_5672_; 
v___f_5660_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_5658_);
v___f_5661_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5661_, 0, v_failurePrefix_5658_);
v___x_5662_ = lean_box_uint32(v_op_5655_);
v___x_5663_ = lean_box_uint64(v_flags_5656_);
v___f_5664_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5664_, 0, v_failurePrefix_5658_);
lean_closure_set(v___f_5664_, 1, v___x_5662_);
lean_closure_set(v___f_5664_, 2, v___x_5663_);
lean_closure_set(v___f_5664_, 3, v_payload_5657_);
lean_closure_set(v___f_5664_, 4, v___f_5661_);
lean_closure_set(v___f_5664_, 5, v___f_5660_);
lean_closure_set(v___f_5664_, 6, v___f_5660_);
v___f_5665_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5665_, 0, v___f_5664_);
v___x_5666_ = lean_unsigned_to_nat(0u);
v___x_5667_ = 0;
v___x_5672_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5672_) == 0)
{
lean_object* v_a_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5680_; 
v_a_5673_ = lean_ctor_get(v___x_5672_, 0);
v_isSharedCheck_5680_ = !lean_is_exclusive(v___x_5672_);
if (v_isSharedCheck_5680_ == 0)
{
v___x_5675_ = v___x_5672_;
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_a_5673_);
lean_dec(v___x_5672_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5678_; 
if (v_isShared_5676_ == 0)
{
lean_ctor_set_tag(v___x_5675_, 1);
v___x_5678_ = v___x_5675_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v_a_5673_);
v___x_5678_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
v_val_5669_ = v___x_5678_;
goto v___jp_5668_;
}
}
}
else
{
lean_object* v_a_5681_; lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5688_; 
v_a_5681_ = lean_ctor_get(v___x_5672_, 0);
v_isSharedCheck_5688_ = !lean_is_exclusive(v___x_5672_);
if (v_isSharedCheck_5688_ == 0)
{
v___x_5683_ = v___x_5672_;
v_isShared_5684_ = v_isSharedCheck_5688_;
goto v_resetjp_5682_;
}
else
{
lean_inc(v_a_5681_);
lean_dec(v___x_5672_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5688_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
lean_object* v___x_5686_; 
if (v_isShared_5684_ == 0)
{
lean_ctor_set_tag(v___x_5683_, 0);
v___x_5686_ = v___x_5683_;
goto v_reusejp_5685_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v_a_5681_);
v___x_5686_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5685_;
}
v_reusejp_5685_:
{
v_val_5669_ = v___x_5686_;
goto v___jp_5668_;
}
}
}
v___jp_5668_:
{
lean_object* v___x_5670_; lean_object* v___x_5671_; 
v___x_5670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5670_, 0, v_val_5669_);
v___x_5671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5666_, v___x_5667_, v___x_5670_, v___f_5665_);
return v___x_5671_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg___boxed(lean_object* v_op_5689_, lean_object* v_flags_5690_, lean_object* v_payload_5691_, lean_object* v_failurePrefix_5692_, lean_object* v_a_5693_){
_start:
{
uint32_t v_op_boxed_5694_; uint64_t v_flags_boxed_5695_; lean_object* v_res_5696_; 
v_op_boxed_5694_ = lean_unbox_uint32(v_op_5689_);
lean_dec(v_op_5689_);
v_flags_boxed_5695_ = lean_unbox_uint64(v_flags_5690_);
lean_dec_ref(v_flags_5690_);
v_res_5696_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_boxed_5694_, v_flags_boxed_5695_, v_payload_5691_, v_failurePrefix_5692_);
return v_res_5696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(lean_object* v_o_5697_, lean_object* v_name_5698_, lean_object* v_args_5699_){
_start:
{
lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; uint32_t v___x_5704_; uint64_t v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
v___x_5701_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5702_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5702_, 0, v_o_5697_);
lean_ctor_set(v___x_5702_, 1, v___x_5701_);
v___x_5703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5703_, 0, v_name_5698_);
v___x_5704_ = 205;
v___x_5705_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Crypto_getRandomValues_spec__0___closed__0);
v___x_5706_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5706_, 0, v_args_5699_);
v___x_5707_ = lean_unsigned_to_nat(3u);
v___x_5708_ = lean_mk_empty_array_with_capacity(v___x_5707_);
v___x_5709_ = lean_array_push(v___x_5708_, v___x_5702_);
v___x_5710_ = lean_array_push(v___x_5709_, v___x_5703_);
v___x_5711_ = lean_array_push(v___x_5710_, v___x_5706_);
v___x_5712_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5712_, 0, v___x_5711_);
v___x_5713_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v___x_5704_, v___x_5705_, v___x_5712_, v___x_5701_);
return v___x_5713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0___boxed(lean_object* v_o_5714_, lean_object* v_name_5715_, lean_object* v_args_5716_, lean_object* v___y_5717_){
_start:
{
lean_object* v_res_5718_; 
v_res_5718_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_o_5714_, v_name_5715_, v_args_5716_);
return v_res_5718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey(lean_object* v_self_5721_, uint8_t v_format_5722_, lean_object* v_key_5723_){
_start:
{
lean_object* v___f_5725_; lean_object* v___x_5726_; lean_object* v___y_5728_; 
v___f_5725_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__0));
v___x_5726_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_exportKey___closed__1));
switch(v_format_5722_)
{
case 0:
{
lean_object* v___x_5740_; 
v___x_5740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5728_ = v___x_5740_;
goto v___jp_5727_;
}
case 1:
{
lean_object* v___x_5741_; 
v___x_5741_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5728_ = v___x_5741_;
goto v___jp_5727_;
}
case 2:
{
lean_object* v___x_5742_; 
v___x_5742_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5728_ = v___x_5742_;
goto v___jp_5727_;
}
case 3:
{
lean_object* v___x_5743_; 
v___x_5743_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5728_ = v___x_5743_;
goto v___jp_5727_;
}
case 4:
{
lean_object* v___x_5744_; 
v___x_5744_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5728_ = v___x_5744_;
goto v___jp_5727_;
}
case 5:
{
lean_object* v___x_5745_; 
v___x_5745_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5728_ = v___x_5745_;
goto v___jp_5727_;
}
case 6:
{
lean_object* v___x_5746_; 
v___x_5746_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5728_ = v___x_5746_;
goto v___jp_5727_;
}
default: 
{
lean_object* v___x_5747_; 
v___x_5747_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5728_ = v___x_5747_;
goto v___jp_5727_;
}
}
v___jp_5727_:
{
lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; uint8_t v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; 
v___x_5729_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5730_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5730_, 0, v_key_5723_);
lean_ctor_set(v___x_5730_, 1, v___x_5729_);
v___x_5731_ = lean_unsigned_to_nat(2u);
v___x_5732_ = lean_mk_empty_array_with_capacity(v___x_5731_);
lean_inc(v___y_5728_);
v___x_5733_ = lean_array_push(v___x_5732_, v___y_5728_);
v___x_5734_ = lean_array_push(v___x_5733_, v___x_5730_);
v___x_5735_ = l_Lasm_JS_Web_Support_args(v___x_5734_);
v___x_5736_ = lean_unsigned_to_nat(0u);
v___x_5737_ = 0;
v___x_5738_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0(v_self_5721_, v___x_5726_, v___x_5735_);
v___x_5739_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5736_, v___x_5737_, v___x_5738_, v___f_5725_);
return v___x_5739_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_exportKey___boxed(lean_object* v_self_5748_, lean_object* v_format_5749_, lean_object* v_key_5750_, lean_object* v_a_5751_){
_start:
{
uint8_t v_format_boxed_5752_; lean_object* v_res_5753_; 
v_format_boxed_5752_ = lean_unbox(v_format_5749_);
v_res_5753_ = l_Lasm_JS_Web_SubtleCrypto_exportKey(v_self_5748_, v_format_boxed_5752_, v_key_5750_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(lean_object* v_context_5754_, uint32_t v_op_5755_, uint64_t v_flags_5756_, lean_object* v_payload_5757_, lean_object* v_failurePrefix_5758_){
_start:
{
lean_object* v___x_5760_; 
v___x_5760_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___redArg(v_op_5755_, v_flags_5756_, v_payload_5757_, v_failurePrefix_5758_);
return v___x_5760_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0___boxed(lean_object* v_context_5761_, lean_object* v_op_5762_, lean_object* v_flags_5763_, lean_object* v_payload_5764_, lean_object* v_failurePrefix_5765_, lean_object* v_a_5766_){
_start:
{
uint32_t v_op_boxed_5767_; uint64_t v_flags_boxed_5768_; lean_object* v_res_5769_; 
v_op_boxed_5767_ = lean_unbox_uint32(v_op_5762_);
lean_dec(v_op_5762_);
v_flags_boxed_5768_ = lean_unbox_uint64(v_flags_5763_);
lean_dec_ref(v_flags_5763_);
v_res_5769_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_exportKey_spec__0_spec__0(v_context_5761_, v_op_boxed_5767_, v_flags_boxed_5768_, v_payload_5764_, v_failurePrefix_5765_);
lean_dec_ref(v_context_5761_);
return v_res_5769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey(lean_object* v_self_5770_, uint8_t v_format_5771_, lean_object* v_key_5772_, lean_object* v_wrappingKey_5773_, lean_object* v_wrapAlgorithm_5774_){
_start:
{
lean_object* v___f_5776_; lean_object* v___x_5777_; lean_object* v___y_5779_; lean_object* v___y_5780_; lean_object* v___y_5781_; lean_object* v___y_5782_; lean_object* v___y_5795_; 
v___f_5776_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_encrypt___closed__0));
v___x_5777_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__12));
switch(v_format_5771_)
{
case 0:
{
lean_object* v___x_5808_; 
v___x_5808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5795_ = v___x_5808_;
goto v___jp_5794_;
}
case 1:
{
lean_object* v___x_5809_; 
v___x_5809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5795_ = v___x_5809_;
goto v___jp_5794_;
}
case 2:
{
lean_object* v___x_5810_; 
v___x_5810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5795_ = v___x_5810_;
goto v___jp_5794_;
}
case 3:
{
lean_object* v___x_5811_; 
v___x_5811_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5795_ = v___x_5811_;
goto v___jp_5794_;
}
case 4:
{
lean_object* v___x_5812_; 
v___x_5812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5795_ = v___x_5812_;
goto v___jp_5794_;
}
case 5:
{
lean_object* v___x_5813_; 
v___x_5813_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5795_ = v___x_5813_;
goto v___jp_5794_;
}
case 6:
{
lean_object* v___x_5814_; 
v___x_5814_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5795_ = v___x_5814_;
goto v___jp_5794_;
}
default: 
{
lean_object* v___x_5815_; 
v___x_5815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5795_ = v___x_5815_;
goto v___jp_5794_;
}
}
v___jp_5778_:
{
lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; uint8_t v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; 
v___x_5783_ = lean_unsigned_to_nat(4u);
v___x_5784_ = lean_mk_empty_array_with_capacity(v___x_5783_);
lean_inc(v___y_5780_);
v___x_5785_ = lean_array_push(v___x_5784_, v___y_5780_);
v___x_5786_ = lean_array_push(v___x_5785_, v___y_5781_);
v___x_5787_ = lean_array_push(v___x_5786_, v___y_5779_);
v___x_5788_ = lean_array_push(v___x_5787_, v___y_5782_);
v___x_5789_ = l_Lasm_JS_Web_Support_args(v___x_5788_);
v___x_5790_ = lean_unsigned_to_nat(0u);
v___x_5791_ = 0;
v___x_5792_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5770_, v___x_5777_, v___x_5789_);
v___x_5793_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5790_, v___x_5791_, v___x_5792_, v___f_5776_);
return v___x_5793_;
}
v___jp_5794_:
{
lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; 
v___x_5796_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5797_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5797_, 0, v_key_5772_);
lean_ctor_set(v___x_5797_, 1, v___x_5796_);
v___x_5798_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5798_, 0, v_wrappingKey_5773_);
lean_ctor_set(v___x_5798_, 1, v___x_5796_);
if (lean_obj_tag(v_wrapAlgorithm_5774_) == 0)
{
lean_object* v_value_5799_; 
v_value_5799_ = lean_ctor_get(v_wrapAlgorithm_5774_, 0);
lean_inc(v_value_5799_);
lean_dec_ref_known(v_wrapAlgorithm_5774_, 1);
v___y_5779_ = v___x_5798_;
v___y_5780_ = v___y_5795_;
v___y_5781_ = v___x_5797_;
v___y_5782_ = v_value_5799_;
goto v___jp_5778_;
}
else
{
lean_object* v_value_5800_; lean_object* v___x_5802_; uint8_t v_isShared_5803_; uint8_t v_isSharedCheck_5807_; 
v_value_5800_ = lean_ctor_get(v_wrapAlgorithm_5774_, 0);
v_isSharedCheck_5807_ = !lean_is_exclusive(v_wrapAlgorithm_5774_);
if (v_isSharedCheck_5807_ == 0)
{
v___x_5802_ = v_wrapAlgorithm_5774_;
v_isShared_5803_ = v_isSharedCheck_5807_;
goto v_resetjp_5801_;
}
else
{
lean_inc(v_value_5800_);
lean_dec(v_wrapAlgorithm_5774_);
v___x_5802_ = lean_box(0);
v_isShared_5803_ = v_isSharedCheck_5807_;
goto v_resetjp_5801_;
}
v_resetjp_5801_:
{
lean_object* v___x_5805_; 
if (v_isShared_5803_ == 0)
{
lean_ctor_set_tag(v___x_5802_, 4);
v___x_5805_ = v___x_5802_;
goto v_reusejp_5804_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v_value_5800_);
v___x_5805_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5804_;
}
v_reusejp_5804_:
{
v___y_5779_ = v___x_5798_;
v___y_5780_ = v___y_5795_;
v___y_5781_ = v___x_5797_;
v___y_5782_ = v___x_5805_;
goto v___jp_5778_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_wrapKey___boxed(lean_object* v_self_5816_, lean_object* v_format_5817_, lean_object* v_key_5818_, lean_object* v_wrappingKey_5819_, lean_object* v_wrapAlgorithm_5820_, lean_object* v_a_5821_){
_start:
{
uint8_t v_format_boxed_5822_; lean_object* v_res_5823_; 
v_format_boxed_5822_ = lean_unbox(v_format_5817_);
v_res_5823_ = l_Lasm_JS_Web_SubtleCrypto_wrapKey(v_self_5816_, v_format_boxed_5822_, v_key_5818_, v_wrappingKey_5819_, v_wrapAlgorithm_5820_);
return v_res_5823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey(lean_object* v_self_5824_, uint8_t v_format_5825_, lean_object* v_wrappedKey_5826_, lean_object* v_unwrappingKey_5827_, lean_object* v_unwrapAlgorithm_5828_, lean_object* v_unwrappedKeyAlgorithm_5829_, uint8_t v_extractable_5830_, lean_object* v_keyUsages_5831_){
_start:
{
lean_object* v___f_5833_; lean_object* v___x_5834_; lean_object* v___y_5836_; lean_object* v___y_5837_; lean_object* v___y_5838_; lean_object* v___y_5839_; lean_object* v___y_5840_; lean_object* v___y_5861_; lean_object* v___y_5862_; lean_object* v___y_5863_; lean_object* v___y_5864_; lean_object* v___y_5875_; 
v___f_5833_ = ((lean_object*)(l_Lasm_JS_Web_SubtleCrypto_deriveKey___closed__0));
v___x_5834_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyUsage___lam__0___closed__14));
switch(v_format_5825_)
{
case 0:
{
lean_object* v___x_5888_; 
v___x_5888_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__1));
v___y_5875_ = v___x_5888_;
goto v___jp_5874_;
}
case 1:
{
lean_object* v___x_5889_; 
v___x_5889_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__3));
v___y_5875_ = v___x_5889_;
goto v___jp_5874_;
}
case 2:
{
lean_object* v___x_5890_; 
v___x_5890_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__5));
v___y_5875_ = v___x_5890_;
goto v___jp_5874_;
}
case 3:
{
lean_object* v___x_5891_; 
v___x_5891_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__7));
v___y_5875_ = v___x_5891_;
goto v___jp_5874_;
}
case 4:
{
lean_object* v___x_5892_; 
v___x_5892_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__9));
v___y_5875_ = v___x_5892_;
goto v___jp_5874_;
}
case 5:
{
lean_object* v___x_5893_; 
v___x_5893_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__11));
v___y_5875_ = v___x_5893_;
goto v___jp_5874_;
}
case 6:
{
lean_object* v___x_5894_; 
v___x_5894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__13));
v___y_5875_ = v___x_5894_;
goto v___jp_5874_;
}
default: 
{
lean_object* v___x_5895_; 
v___x_5895_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyFormat___lam__0___closed__15));
v___y_5875_ = v___x_5895_;
goto v___jp_5874_;
}
}
v___jp_5835_:
{
lean_object* v___x_5841_; size_t v_sz_5842_; size_t v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; uint8_t v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5841_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_5841_, 0, v_extractable_5830_);
v_sz_5842_ = lean_array_size(v_keyUsages_5831_);
v___x_5843_ = ((size_t)0ULL);
v___x_5844_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_SubtleCrypto_generateKey_spec__0(v_sz_5842_, v___x_5843_, v_keyUsages_5831_);
v___x_5845_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5845_, 0, v___x_5844_);
v___x_5846_ = lean_unsigned_to_nat(7u);
v___x_5847_ = lean_mk_empty_array_with_capacity(v___x_5846_);
lean_inc(v___y_5836_);
v___x_5848_ = lean_array_push(v___x_5847_, v___y_5836_);
v___x_5849_ = lean_array_push(v___x_5848_, v___y_5837_);
v___x_5850_ = lean_array_push(v___x_5849_, v___y_5839_);
v___x_5851_ = lean_array_push(v___x_5850_, v___y_5838_);
v___x_5852_ = lean_array_push(v___x_5851_, v___y_5840_);
v___x_5853_ = lean_array_push(v___x_5852_, v___x_5841_);
v___x_5854_ = lean_array_push(v___x_5853_, v___x_5845_);
v___x_5855_ = l_Lasm_JS_Web_Support_args(v___x_5854_);
v___x_5856_ = lean_unsigned_to_nat(0u);
v___x_5857_ = 0;
v___x_5858_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_SubtleCrypto_encrypt_spec__0(v_self_5824_, v___x_5834_, v___x_5855_);
v___x_5859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5856_, v___x_5857_, v___x_5858_, v___f_5833_);
return v___x_5859_;
}
v___jp_5860_:
{
if (lean_obj_tag(v_unwrappedKeyAlgorithm_5829_) == 0)
{
lean_object* v_value_5865_; 
v_value_5865_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5829_, 0);
lean_inc(v_value_5865_);
lean_dec_ref_known(v_unwrappedKeyAlgorithm_5829_, 1);
v___y_5836_ = v___y_5861_;
v___y_5837_ = v___y_5862_;
v___y_5838_ = v___y_5864_;
v___y_5839_ = v___y_5863_;
v___y_5840_ = v_value_5865_;
goto v___jp_5835_;
}
else
{
lean_object* v_value_5866_; lean_object* v___x_5868_; uint8_t v_isShared_5869_; uint8_t v_isSharedCheck_5873_; 
v_value_5866_ = lean_ctor_get(v_unwrappedKeyAlgorithm_5829_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v_unwrappedKeyAlgorithm_5829_);
if (v_isSharedCheck_5873_ == 0)
{
v___x_5868_ = v_unwrappedKeyAlgorithm_5829_;
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
else
{
lean_inc(v_value_5866_);
lean_dec(v_unwrappedKeyAlgorithm_5829_);
v___x_5868_ = lean_box(0);
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
v_resetjp_5867_:
{
lean_object* v___x_5871_; 
if (v_isShared_5869_ == 0)
{
lean_ctor_set_tag(v___x_5868_, 4);
v___x_5871_ = v___x_5868_;
goto v_reusejp_5870_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_value_5866_);
v___x_5871_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5870_;
}
v_reusejp_5870_:
{
v___y_5836_ = v___y_5861_;
v___y_5837_ = v___y_5862_;
v___y_5838_ = v___y_5864_;
v___y_5839_ = v___y_5863_;
v___y_5840_ = v___x_5871_;
goto v___jp_5835_;
}
}
}
}
v___jp_5874_:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
v___x_5876_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5876_, 0, v_wrappedKey_5826_);
v___x_5877_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCrypto___lam__0___closed__0));
v___x_5878_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5878_, 0, v_unwrappingKey_5827_);
lean_ctor_set(v___x_5878_, 1, v___x_5877_);
if (lean_obj_tag(v_unwrapAlgorithm_5828_) == 0)
{
lean_object* v_value_5879_; 
v_value_5879_ = lean_ctor_get(v_unwrapAlgorithm_5828_, 0);
lean_inc(v_value_5879_);
lean_dec_ref_known(v_unwrapAlgorithm_5828_, 1);
v___y_5861_ = v___y_5875_;
v___y_5862_ = v___x_5876_;
v___y_5863_ = v___x_5878_;
v___y_5864_ = v_value_5879_;
goto v___jp_5860_;
}
else
{
lean_object* v_value_5880_; lean_object* v___x_5882_; uint8_t v_isShared_5883_; uint8_t v_isSharedCheck_5887_; 
v_value_5880_ = lean_ctor_get(v_unwrapAlgorithm_5828_, 0);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_unwrapAlgorithm_5828_);
if (v_isSharedCheck_5887_ == 0)
{
v___x_5882_ = v_unwrapAlgorithm_5828_;
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
else
{
lean_inc(v_value_5880_);
lean_dec(v_unwrapAlgorithm_5828_);
v___x_5882_ = lean_box(0);
v_isShared_5883_ = v_isSharedCheck_5887_;
goto v_resetjp_5881_;
}
v_resetjp_5881_:
{
lean_object* v___x_5885_; 
if (v_isShared_5883_ == 0)
{
lean_ctor_set_tag(v___x_5882_, 4);
v___x_5885_ = v___x_5882_;
goto v_reusejp_5884_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v_value_5880_);
v___x_5885_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5884_;
}
v_reusejp_5884_:
{
v___y_5861_ = v___y_5875_;
v___y_5862_ = v___x_5876_;
v___y_5863_ = v___x_5878_;
v___y_5864_ = v___x_5885_;
goto v___jp_5860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubtleCrypto_unwrapKey___boxed(lean_object* v_self_5896_, lean_object* v_format_5897_, lean_object* v_wrappedKey_5898_, lean_object* v_unwrappingKey_5899_, lean_object* v_unwrapAlgorithm_5900_, lean_object* v_unwrappedKeyAlgorithm_5901_, lean_object* v_extractable_5902_, lean_object* v_keyUsages_5903_, lean_object* v_a_5904_){
_start:
{
uint8_t v_format_boxed_5905_; uint8_t v_extractable_boxed_5906_; lean_object* v_res_5907_; 
v_format_boxed_5905_ = lean_unbox(v_format_5897_);
v_extractable_boxed_5906_ = lean_unbox(v_extractable_5902_);
v_res_5907_ = l_Lasm_JS_Web_SubtleCrypto_unwrapKey(v_self_5896_, v_format_boxed_5905_, v_wrappedKey_5898_, v_unwrappingKey_5899_, v_unwrapAlgorithm_5900_, v_unwrappedKeyAlgorithm_5901_, v_extractable_boxed_5906_, v_keyUsages_5903_);
return v_res_5907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(lean_object* v_o_5911_, lean_object* v_a_5912_){
_start:
{
if (lean_obj_tag(v_a_5912_) == 0)
{
lean_object* v___x_5914_; lean_object* v___x_5915_; 
lean_dec(v_o_5911_);
v___x_5914_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___closed__1));
v___x_5915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5915_, 0, v___x_5914_);
return v___x_5915_;
}
else
{
lean_object* v_tail_5916_; 
v_tail_5916_ = lean_ctor_get(v_a_5912_, 1);
if (lean_obj_tag(v_tail_5916_) == 0)
{
lean_object* v_head_5917_; lean_object* v___x_5918_; 
v_head_5917_ = lean_ctor_get(v_a_5912_, 0);
lean_inc(v_head_5917_);
lean_dec_ref_known(v_a_5912_, 2);
v___x_5918_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_5911_, v_head_5917_);
return v___x_5918_;
}
else
{
lean_object* v_head_5919_; lean_object* v___x_5920_; 
lean_inc(v_tail_5916_);
v_head_5919_ = lean_ctor_get(v_a_5912_, 0);
lean_inc(v_head_5919_);
lean_dec_ref_known(v_a_5912_, 2);
v___x_5920_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_5911_, v_head_5919_);
if (lean_obj_tag(v___x_5920_) == 0)
{
lean_object* v_a_5921_; 
v_a_5921_ = lean_ctor_get(v___x_5920_, 0);
lean_inc(v_a_5921_);
lean_dec_ref_known(v___x_5920_, 1);
v_o_5911_ = v_a_5921_;
v_a_5912_ = v_tail_5916_;
goto _start;
}
else
{
lean_dec(v_tail_5916_);
return v___x_5920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0___boxed(lean_object* v_o_5923_, lean_object* v_a_5924_, lean_object* v_a_5925_){
_start:
{
lean_object* v_res_5926_; 
v_res_5926_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_o_5923_, v_a_5924_);
return v_res_5926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(lean_object* v_path_5927_){
_start:
{
lean_object* v___x_5929_; 
v___x_5929_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5929_) == 0)
{
lean_object* v_a_5930_; lean_object* v___x_5931_; 
v_a_5930_ = lean_ctor_get(v___x_5929_, 0);
lean_inc(v_a_5930_);
lean_dec_ref_known(v___x_5929_, 1);
v___x_5931_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0_spec__0(v_a_5930_, v_path_5927_);
return v___x_5931_;
}
else
{
lean_dec(v_path_5927_);
return v___x_5929_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0___boxed(lean_object* v_path_5932_, lean_object* v_a_5933_){
_start:
{
lean_object* v_res_5934_; 
v_res_5934_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v_path_5932_);
return v_res_5934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto(){
_start:
{
lean_object* v___x_5940_; lean_object* v___x_5941_; 
v___x_5940_ = ((lean_object*)(l_Lasm_JS_Web_crypto___closed__1));
v___x_5941_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_crypto_spec__0(v___x_5940_);
if (lean_obj_tag(v___x_5941_) == 0)
{
lean_object* v_a_5942_; lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5949_; 
v_a_5942_ = lean_ctor_get(v___x_5941_, 0);
v_isSharedCheck_5949_ = !lean_is_exclusive(v___x_5941_);
if (v_isSharedCheck_5949_ == 0)
{
v___x_5944_ = v___x_5941_;
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
else
{
lean_inc(v_a_5942_);
lean_dec(v___x_5941_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v___x_5947_; 
if (v_isShared_5945_ == 0)
{
v___x_5947_ = v___x_5944_;
goto v_reusejp_5946_;
}
else
{
lean_object* v_reuseFailAlloc_5948_; 
v_reuseFailAlloc_5948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5948_, 0, v_a_5942_);
v___x_5947_ = v_reuseFailAlloc_5948_;
goto v_reusejp_5946_;
}
v_reusejp_5946_:
{
return v___x_5947_;
}
}
}
else
{
lean_object* v_a_5950_; lean_object* v___x_5952_; uint8_t v_isShared_5953_; uint8_t v_isSharedCheck_5957_; 
v_a_5950_ = lean_ctor_get(v___x_5941_, 0);
v_isSharedCheck_5957_ = !lean_is_exclusive(v___x_5941_);
if (v_isSharedCheck_5957_ == 0)
{
v___x_5952_ = v___x_5941_;
v_isShared_5953_ = v_isSharedCheck_5957_;
goto v_resetjp_5951_;
}
else
{
lean_inc(v_a_5950_);
lean_dec(v___x_5941_);
v___x_5952_ = lean_box(0);
v_isShared_5953_ = v_isSharedCheck_5957_;
goto v_resetjp_5951_;
}
v_resetjp_5951_:
{
lean_object* v___x_5955_; 
if (v_isShared_5953_ == 0)
{
v___x_5955_ = v___x_5952_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5956_; 
v_reuseFailAlloc_5956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5956_, 0, v_a_5950_);
v___x_5955_ = v_reuseFailAlloc_5956_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
return v___x_5955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_crypto___boxed(lean_object* v_a_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l_Lasm_JS_Web_crypto();
return v_res_5959_;
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
