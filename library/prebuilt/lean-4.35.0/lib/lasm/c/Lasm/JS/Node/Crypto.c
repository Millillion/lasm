// Lean compiler output
// Module: Lasm.JS.Node.Crypto
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Types.Webcrypto public import Lasm.JS.Web.Webidl public import Lasm.JS.Node.Stream public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Net public import Lasm.JS.Node.Process public import Lasm.JS.Node.Fs
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
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCertificate___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSCertificate_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSCertificate = (const lean_object*)&l_Lasm_JS_Node_instToJSCertificate_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCertificate___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCertificate;
static const lean_closure_object l_Lasm_JS_Node_instToJSCipheriv_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSCipheriv = (const lean_object*)&l_Lasm_JS_Node_instToJSCipheriv_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCipheriv;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeCipherivStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeCipherivStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instCoeCipherivStreamTransform_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSDecipheriv_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDecipheriv = (const lean_object*)&l_Lasm_JS_Node_instToJSDecipheriv_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDecipheriv;
static const lean_closure_object l_Lasm_JS_Node_instCoeDecipherivStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeDecipherivStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instCoeDecipherivStreamTransform_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSDiffieHellman_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDiffieHellman = (const lean_object*)&l_Lasm_JS_Node_instToJSDiffieHellman_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDiffieHellman;
static const lean_closure_object l_Lasm_JS_Node_instToJSDiffieHellmanGroup_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDiffieHellmanGroup = (const lean_object*)&l_Lasm_JS_Node_instToJSDiffieHellmanGroup_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDiffieHellmanGroup;
static const lean_closure_object l_Lasm_JS_Node_instToJSECDH_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSECDH = (const lean_object*)&l_Lasm_JS_Node_instToJSECDH_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSECDH;
static const lean_closure_object l_Lasm_JS_Node_instToJSHash_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSHash = (const lean_object*)&l_Lasm_JS_Node_instToJSHash_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSHash;
static const lean_closure_object l_Lasm_JS_Node_instCoeHashStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeHashStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instCoeHashStreamTransform_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSHmac_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSHmac = (const lean_object*)&l_Lasm_JS_Node_instToJSHmac_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSHmac;
static const lean_closure_object l_Lasm_JS_Node_instCoeHmacStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeHmacStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instCoeHmacStreamTransform_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSKeyObject = (const lean_object*)&l_Lasm_JS_Node_instToJSKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSKeyObject;
static const lean_closure_object l_Lasm_JS_Node_instToJSMac_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSMac = (const lean_object*)&l_Lasm_JS_Node_instToJSMac_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSMac;
static const lean_closure_object l_Lasm_JS_Node_instCoeMacStreamTransform_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeMacStreamTransform = (const lean_object*)&l_Lasm_JS_Node_instCoeMacStreamTransform_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSSign_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSSign = (const lean_object*)&l_Lasm_JS_Node_instToJSSign_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSSign;
static const lean_closure_object l_Lasm_JS_Node_instCoeSignStreamWritable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeSignStreamWritable = (const lean_object*)&l_Lasm_JS_Node_instCoeSignStreamWritable_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSVerify_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSVerify = (const lean_object*)&l_Lasm_JS_Node_instToJSVerify_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSVerify;
static const lean_closure_object l_Lasm_JS_Node_instCoeVerifyStreamWritable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeVerifyStreamWritable = (const lean_object*)&l_Lasm_JS_Node_instCoeVerifyStreamWritable_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSX509Certificate_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCertificate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSX509Certificate = (const lean_object*)&l_Lasm_JS_Node_instToJSX509Certificate_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSX509Certificate;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCipherivSetAADOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCipherivSetAADOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDecipherivSetAADOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDecipherivSetAADOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2Parameters___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2Parameters;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSUint8ArrayOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSUint8ArrayOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrBigint = (const lean_object*)&l_Lasm_JS_Node_instToJSUint8ArrayOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint = (const lean_object*)&l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCheckPrimeSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_keyObject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_keyObject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_cryptoKey_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_cryptoKey_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey = (const lean_object*)&l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey = (const lean_object*)&l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHashOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHashOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_keyObject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateMacOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateMacOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_keyObject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_keyObject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL = (const lean_object*)&l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL = (const lean_object*)&l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_keyObject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeySyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_decode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_hashOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_hashOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_keyObject_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject = (const lean_object*)&l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCertificate___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCertificate___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSCertificate___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSCertificate(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.Certificate", 24, 24);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSCipheriv(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.Cipheriv", 21, 21);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0(lean_object* v_self_21_){
_start:
{
lean_inc(v_self_21_);
return v_self_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0___boxed(lean_object* v_self_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lasm_JS_Node_instCoeCipherivStreamTransform___lam__0(v_self_22_);
lean_dec(v_self_22_);
return v_res_23_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDecipheriv(void){
_start:
{
lean_object* v___f_26_; lean_object* v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___f_26_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_27_ = lean_mk_string_unchecked("Lasm.JS.Node.Decipheriv", 23, 23);
v___x_28_ = 0;
v___x_29_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_29_, 0, v___f_26_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*2, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDiffieHellman(void){
_start:
{
lean_object* v___f_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; 
v___f_32_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_33_ = lean_mk_string_unchecked("Lasm.JS.Node.DiffieHellman", 26, 26);
v___x_34_ = 0;
v___x_35_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_35_, 0, v___f_32_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set_uint8(v___x_35_, sizeof(void*)*2, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDiffieHellmanGroup(void){
_start:
{
lean_object* v___f_37_; lean_object* v___x_38_; uint8_t v___x_39_; lean_object* v___x_40_; 
v___f_37_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_38_ = lean_mk_string_unchecked("Lasm.JS.Node.DiffieHellmanGroup", 31, 31);
v___x_39_ = 0;
v___x_40_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_40_, 0, v___f_37_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set_uint8(v___x_40_, sizeof(void*)*2, v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSECDH(void){
_start:
{
lean_object* v___f_42_; lean_object* v___x_43_; uint8_t v___x_44_; lean_object* v___x_45_; 
v___f_42_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_43_ = lean_mk_string_unchecked("Lasm.JS.Node.ECDH", 17, 17);
v___x_44_ = 0;
v___x_45_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_45_, 0, v___f_42_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set_uint8(v___x_45_, sizeof(void*)*2, v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSHash(void){
_start:
{
lean_object* v___f_47_; lean_object* v___x_48_; uint8_t v___x_49_; lean_object* v___x_50_; 
v___f_47_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_48_ = lean_mk_string_unchecked("Lasm.JS.Node.Hash", 17, 17);
v___x_49_ = 0;
v___x_50_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_50_, 0, v___f_47_);
lean_ctor_set(v___x_50_, 1, v___x_48_);
lean_ctor_set_uint8(v___x_50_, sizeof(void*)*2, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSHmac(void){
_start:
{
lean_object* v___f_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; 
v___f_53_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_54_ = lean_mk_string_unchecked("Lasm.JS.Node.Hmac", 17, 17);
v___x_55_ = 0;
v___x_56_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_56_, 0, v___f_53_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*2, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSKeyObject(void){
_start:
{
lean_object* v___f_59_; lean_object* v___x_60_; uint8_t v___x_61_; lean_object* v___x_62_; 
v___f_59_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_60_ = lean_mk_string_unchecked("Lasm.JS.Node.KeyObject", 22, 22);
v___x_61_ = 0;
v___x_62_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_62_, 0, v___f_59_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*2, v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSMac(void){
_start:
{
lean_object* v___f_64_; lean_object* v___x_65_; uint8_t v___x_66_; lean_object* v___x_67_; 
v___f_64_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_65_ = lean_mk_string_unchecked("Lasm.JS.Node.Mac", 16, 16);
v___x_66_ = 0;
v___x_67_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_67_, 0, v___f_64_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*2, v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSSign(void){
_start:
{
lean_object* v___f_70_; lean_object* v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; 
v___f_70_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_71_ = lean_mk_string_unchecked("Lasm.JS.Node.Sign", 17, 17);
v___x_72_ = 0;
v___x_73_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_73_, 0, v___f_70_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set_uint8(v___x_73_, sizeof(void*)*2, v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSVerify(void){
_start:
{
lean_object* v___f_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; 
v___f_76_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_77_ = lean_mk_string_unchecked("Lasm.JS.Node.Verify", 19, 19);
v___x_78_ = 0;
v___x_79_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_79_, 0, v___f_76_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set_uint8(v___x_79_, sizeof(void*)*2, v___x_78_);
return v___x_79_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSX509Certificate(void){
_start:
{
lean_object* v___f_82_; lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; 
v___f_82_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSCertificate___lam__0___boxed), 1, 0);
v___x_83_ = lean_mk_string_unchecked("Lasm.JS.Node.X509Certificate", 28, 28);
v___x_84_ = 0;
v___x_85_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_85_, 0, v___f_82_);
lean_ctor_set(v___x_85_, 1, v___x_83_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*2, v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCipherivSetAADOptions___lam__0(lean_object* v___f_86_, lean_object* v___f_87_, lean_object* v_d_88_){
_start:
{
lean_object* v_plaintextLength_89_; lean_object* v_encoding_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_107_; 
v_plaintextLength_89_ = lean_ctor_get(v_d_88_, 0);
v_encoding_90_ = lean_ctor_get(v_d_88_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_d_88_);
if (v_isSharedCheck_107_ == 0)
{
v___x_92_ = v_d_88_;
v_isShared_93_ = v_isSharedCheck_107_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_encoding_90_);
lean_inc(v_plaintextLength_89_);
lean_dec(v_d_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_107_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_94_ = lean_mk_string_unchecked("plaintextLength", 15, 15);
v___x_95_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_86_, v_plaintextLength_89_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 1, v___x_95_);
lean_ctor_set(v___x_92_, 0, v___x_94_);
v___x_97_ = v___x_92_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_94_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v___x_95_);
v___x_97_ = v_reuseFailAlloc_106_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_98_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_99_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_87_, v_encoding_90_);
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_mk_empty_array_with_capacity(v___x_101_);
v___x_103_ = lean_array_push(v___x_102_, v___x_97_);
v___x_104_ = lean_array_push(v___x_103_, v___x_100_);
v___x_105_ = l_Lasm_JS_Web_Internal_fields(v___x_104_);
lean_dec_ref(v___x_104_);
return v___x_105_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCipherivSetAADOptions(void){
_start:
{
lean_object* v___f_108_; lean_object* v___f_109_; lean_object* v___f_110_; 
v___f_108_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_109_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_110_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCipherivSetAADOptions___lam__0), 3, 2);
lean_closure_set(v___f_110_, 0, v___f_108_);
lean_closure_set(v___f_110_, 1, v___f_109_);
return v___f_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDecipherivSetAADOptions___lam__0(lean_object* v___f_111_, lean_object* v___f_112_, lean_object* v_d_113_){
_start:
{
lean_object* v_plaintextLength_114_; lean_object* v_encoding_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_132_; 
v_plaintextLength_114_ = lean_ctor_get(v_d_113_, 0);
v_encoding_115_ = lean_ctor_get(v_d_113_, 1);
v_isSharedCheck_132_ = !lean_is_exclusive(v_d_113_);
if (v_isSharedCheck_132_ == 0)
{
v___x_117_ = v_d_113_;
v_isShared_118_ = v_isSharedCheck_132_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_encoding_115_);
lean_inc(v_plaintextLength_114_);
lean_dec(v_d_113_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_132_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_mk_string_unchecked("plaintextLength", 15, 15);
v___x_120_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_111_, v_plaintextLength_114_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_120_);
lean_ctor_set(v___x_117_, 0, v___x_119_);
v___x_122_ = v___x_117_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_131_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_123_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_124_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_112_, v_encoding_115_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_unsigned_to_nat(2u);
v___x_127_ = lean_mk_empty_array_with_capacity(v___x_126_);
v___x_128_ = lean_array_push(v___x_127_, v___x_122_);
v___x_129_ = lean_array_push(v___x_128_, v___x_125_);
v___x_130_ = l_Lasm_JS_Web_Internal_fields(v___x_129_);
lean_dec_ref(v___x_129_);
return v___x_130_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSDecipherivSetAADOptions(void){
_start:
{
lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___f_135_; 
v___f_133_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_134_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_135_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDecipherivSetAADOptions___lam__0), 3, 2);
lean_closure_set(v___f_135_, 0, v___f_133_);
lean_closure_set(v___f_135_, 1, v___f_134_);
return v___f_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions___lam__0(lean_object* v___f_136_, lean_object* v_d_137_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_138_ = lean_mk_string_unchecked("subject", 7, 7);
v___x_139_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_136_, v_d_137_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_mk_empty_array_with_capacity(v___x_141_);
v___x_143_ = lean_array_push(v___x_142_, v___x_140_);
v___x_144_ = l_Lasm_JS_Web_Internal_fields(v___x_143_);
lean_dec_ref(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions(void){
_start:
{
lean_object* v___f_145_; lean_object* v___f_146_; 
v___f_145_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_146_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions___lam__0), 2, 1);
lean_closure_set(v___f_146_, 0, v___f_145_);
return v___f_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions___lam__0(lean_object* v___f_147_, lean_object* v___f_148_, lean_object* v_d_149_){
_start:
{
lean_object* v_subject_150_; lean_object* v_wildcards_151_; lean_object* v_partialWildcards_152_; lean_object* v_multiLabelWildcards_153_; lean_object* v_singleLabelSubdomains_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_subject_150_ = lean_ctor_get(v_d_149_, 0);
lean_inc(v_subject_150_);
v_wildcards_151_ = lean_ctor_get(v_d_149_, 1);
lean_inc(v_wildcards_151_);
v_partialWildcards_152_ = lean_ctor_get(v_d_149_, 2);
lean_inc(v_partialWildcards_152_);
v_multiLabelWildcards_153_ = lean_ctor_get(v_d_149_, 3);
lean_inc(v_multiLabelWildcards_153_);
v_singleLabelSubdomains_154_ = lean_ctor_get(v_d_149_, 4);
lean_inc(v_singleLabelSubdomains_154_);
lean_dec_ref(v_d_149_);
v___x_155_ = lean_mk_string_unchecked("subject", 7, 7);
v___x_156_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_147_, v_subject_150_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_mk_string_unchecked("wildcards", 9, 9);
lean_inc_ref_n(v___f_148_, 3);
v___x_159_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_148_, v_wildcards_151_);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_mk_string_unchecked("partialWildcards", 16, 16);
v___x_162_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_148_, v_partialWildcards_152_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = lean_mk_string_unchecked("multiLabelWildcards", 19, 19);
v___x_165_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_148_, v_multiLabelWildcards_153_);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = lean_mk_string_unchecked("singleLabelSubdomains", 21, 21);
v___x_168_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_148_, v_singleLabelSubdomains_154_);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_unsigned_to_nat(5u);
v___x_171_ = lean_mk_empty_array_with_capacity(v___x_170_);
v___x_172_ = lean_array_push(v___x_171_, v___x_157_);
v___x_173_ = lean_array_push(v___x_172_, v___x_160_);
v___x_174_ = lean_array_push(v___x_173_, v___x_163_);
v___x_175_ = lean_array_push(v___x_174_, v___x_166_);
v___x_176_ = lean_array_push(v___x_175_, v___x_169_);
v___x_177_ = l_Lasm_JS_Web_Internal_fields(v___x_176_);
lean_dec_ref(v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions(void){
_start:
{
lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___f_180_; 
v___f_178_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_179_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_180_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions___lam__0), 3, 2);
lean_closure_set(v___f_180_, 0, v___f_178_);
lean_closure_set(v___f_180_, 1, v___f_179_);
return v___f_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2Parameters___lam__0(lean_object* v___f_181_, lean_object* v___f_182_, lean_object* v_d_183_){
_start:
{
lean_object* v_message_184_; lean_object* v_nonce_185_; lean_object* v_parallelism_186_; lean_object* v_tagLength_187_; lean_object* v_memory_188_; lean_object* v_passes_189_; lean_object* v_secret_190_; lean_object* v_associatedData_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_message_184_ = lean_ctor_get(v_d_183_, 0);
lean_inc(v_message_184_);
v_nonce_185_ = lean_ctor_get(v_d_183_, 1);
lean_inc(v_nonce_185_);
v_parallelism_186_ = lean_ctor_get(v_d_183_, 2);
lean_inc(v_parallelism_186_);
v_tagLength_187_ = lean_ctor_get(v_d_183_, 3);
lean_inc(v_tagLength_187_);
v_memory_188_ = lean_ctor_get(v_d_183_, 4);
lean_inc(v_memory_188_);
v_passes_189_ = lean_ctor_get(v_d_183_, 5);
lean_inc(v_passes_189_);
v_secret_190_ = lean_ctor_get(v_d_183_, 6);
lean_inc(v_secret_190_);
v_associatedData_191_ = lean_ctor_get(v_d_183_, 7);
lean_inc(v_associatedData_191_);
lean_dec_ref(v_d_183_);
v___x_192_ = lean_mk_string_unchecked("message", 7, 7);
lean_inc_ref_n(v___f_181_, 3);
v___x_193_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_181_, v_message_184_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_mk_string_unchecked("nonce", 5, 5);
v___x_196_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_181_, v_nonce_185_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = lean_mk_string_unchecked("parallelism", 11, 11);
lean_inc_ref_n(v___f_182_, 3);
v___x_199_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_182_, v_parallelism_186_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_mk_string_unchecked("tagLength", 9, 9);
v___x_202_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_182_, v_tagLength_187_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = lean_mk_string_unchecked("memory", 6, 6);
v___x_205_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_182_, v_memory_188_);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_mk_string_unchecked("passes", 6, 6);
v___x_208_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_182_, v_passes_189_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_mk_string_unchecked("secret", 6, 6);
v___x_211_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_181_, v_secret_190_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = lean_mk_string_unchecked("associatedData", 14, 14);
v___x_214_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_181_, v_associatedData_191_);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_unsigned_to_nat(8u);
v___x_217_ = lean_mk_empty_array_with_capacity(v___x_216_);
v___x_218_ = lean_array_push(v___x_217_, v___x_194_);
v___x_219_ = lean_array_push(v___x_218_, v___x_197_);
v___x_220_ = lean_array_push(v___x_219_, v___x_200_);
v___x_221_ = lean_array_push(v___x_220_, v___x_203_);
v___x_222_ = lean_array_push(v___x_221_, v___x_206_);
v___x_223_ = lean_array_push(v___x_222_, v___x_209_);
v___x_224_ = lean_array_push(v___x_223_, v___x_212_);
v___x_225_ = lean_array_push(v___x_224_, v___x_215_);
v___x_226_ = l_Lasm_JS_Web_Internal_fields(v___x_225_);
lean_dec_ref(v___x_225_);
return v___x_226_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoArgon2Parameters(void){
_start:
{
lean_object* v___f_227_; lean_object* v___f_228_; lean_object* v___f_229_; 
v___f_227_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_228_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_229_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoArgon2Parameters___lam__0), 3, 2);
lean_closure_set(v___f_229_, 0, v___f_227_);
lean_closure_set(v___f_229_, 1, v___f_228_);
return v___f_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters___lam__0(lean_object* v___f_230_, lean_object* v___f_231_, lean_object* v_d_232_){
_start:
{
lean_object* v_message_233_; lean_object* v_nonce_234_; lean_object* v_parallelism_235_; lean_object* v_tagLength_236_; lean_object* v_memory_237_; lean_object* v_passes_238_; lean_object* v_secret_239_; lean_object* v_associatedData_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_message_233_ = lean_ctor_get(v_d_232_, 0);
lean_inc(v_message_233_);
v_nonce_234_ = lean_ctor_get(v_d_232_, 1);
lean_inc(v_nonce_234_);
v_parallelism_235_ = lean_ctor_get(v_d_232_, 2);
lean_inc(v_parallelism_235_);
v_tagLength_236_ = lean_ctor_get(v_d_232_, 3);
lean_inc(v_tagLength_236_);
v_memory_237_ = lean_ctor_get(v_d_232_, 4);
lean_inc(v_memory_237_);
v_passes_238_ = lean_ctor_get(v_d_232_, 5);
lean_inc(v_passes_238_);
v_secret_239_ = lean_ctor_get(v_d_232_, 6);
lean_inc(v_secret_239_);
v_associatedData_240_ = lean_ctor_get(v_d_232_, 7);
lean_inc(v_associatedData_240_);
lean_dec_ref(v_d_232_);
v___x_241_ = lean_mk_string_unchecked("message", 7, 7);
lean_inc_ref_n(v___f_230_, 3);
v___x_242_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_230_, v_message_233_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_mk_string_unchecked("nonce", 5, 5);
v___x_245_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_230_, v_nonce_234_);
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_mk_string_unchecked("parallelism", 11, 11);
lean_inc_ref_n(v___f_231_, 3);
v___x_248_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_231_, v_parallelism_235_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_mk_string_unchecked("tagLength", 9, 9);
v___x_251_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_231_, v_tagLength_236_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_mk_string_unchecked("memory", 6, 6);
v___x_254_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_231_, v_memory_237_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_mk_string_unchecked("passes", 6, 6);
v___x_257_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_231_, v_passes_238_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_mk_string_unchecked("secret", 6, 6);
v___x_260_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_230_, v_secret_239_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_mk_string_unchecked("associatedData", 14, 14);
v___x_263_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_230_, v_associatedData_240_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_unsigned_to_nat(8u);
v___x_266_ = lean_mk_empty_array_with_capacity(v___x_265_);
v___x_267_ = lean_array_push(v___x_266_, v___x_243_);
v___x_268_ = lean_array_push(v___x_267_, v___x_246_);
v___x_269_ = lean_array_push(v___x_268_, v___x_249_);
v___x_270_ = lean_array_push(v___x_269_, v___x_252_);
v___x_271_ = lean_array_push(v___x_270_, v___x_255_);
v___x_272_ = lean_array_push(v___x_271_, v___x_258_);
v___x_273_ = lean_array_push(v___x_272_, v___x_261_);
v___x_274_ = lean_array_push(v___x_273_, v___x_264_);
v___x_275_ = l_Lasm_JS_Web_Internal_fields(v___x_274_);
lean_dec_ref(v___x_274_);
return v___x_275_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters(void){
_start:
{
lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___f_278_; 
v___f_276_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_277_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_278_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters___lam__0), 3, 2);
lean_closure_set(v___f_278_, 0, v___f_276_);
lean_closure_set(v___f_278_, 1, v___f_277_);
return v___f_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorIdx(lean_object* v_x_279_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v___x_280_; 
v___x_280_ = lean_unsigned_to_nat(0u);
return v___x_280_;
}
else
{
lean_object* v___x_281_; 
v___x_281_ = lean_unsigned_to_nat(1u);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorIdx___boxed(lean_object* v_x_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorIdx(v_x_282_);
lean_dec_ref(v_x_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(lean_object* v_t_284_, lean_object* v_k_285_){
_start:
{
if (lean_obj_tag(v_t_284_) == 0)
{
lean_object* v_value_286_; lean_object* v___x_287_; 
v_value_286_ = lean_ctor_get(v_t_284_, 0);
lean_inc_ref(v_value_286_);
lean_dec_ref_known(v_t_284_, 1);
v___x_287_ = lean_apply_1(v_k_285_, v_value_286_);
return v___x_287_;
}
else
{
lean_object* v_value_288_; lean_object* v___x_289_; 
v_value_288_ = lean_ctor_get(v_t_284_, 0);
lean_inc(v_value_288_);
lean_dec_ref_known(v_t_284_, 1);
v___x_289_ = lean_apply_1(v_k_285_, v_value_288_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim(lean_object* v_motive_290_, lean_object* v_ctorIdx_291_, lean_object* v_t_292_, lean_object* v_h_293_, lean_object* v_k_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(v_t_292_, v_k_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___boxed(lean_object* v_motive_296_, lean_object* v_ctorIdx_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_k_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim(v_motive_296_, v_ctorIdx_297_, v_t_298_, v_h_299_, v_k_300_);
lean_dec(v_ctorIdx_297_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_uint8Array_elim___redArg(lean_object* v_t_302_, lean_object* v_uint8Array_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(v_t_302_, v_uint8Array_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_uint8Array_elim(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_uint8Array_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(v_t_306_, v_uint8Array_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_bigint_elim___redArg(lean_object* v_t_310_, lean_object* v_bigint_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(v_t_310_, v_bigint_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrBigint_bigint_elim(lean_object* v_motive_313_, lean_object* v_t_314_, lean_object* v_h_315_, lean_object* v_bigint_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lasm_JS_Node_Uint8ArrayOrBigint_ctorElim___redArg(v_t_314_, v_bigint_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrBigint___lam__0(lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v_value_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_value_319_ = lean_ctor_get(v_x_318_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v_x_318_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_value_319_);
lean_dec(v_x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 6);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_value_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v_value_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_339_; 
v_value_327_ = lean_ctor_get(v_x_318_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_339_ == 0)
{
v___x_329_ = v_x_318_;
v_isShared_330_ = v_isSharedCheck_339_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_value_327_);
lean_dec(v_x_318_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_339_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_nat_abs(v_value_327_);
v___x_332_ = lean_cstr_to_nat("9007199254740991");
v___x_333_ = lean_nat_dec_le(v___x_331_, v___x_332_);
lean_dec(v___x_331_);
if (v___x_333_ == 0)
{
lean_object* v___x_335_; 
if (v_isShared_330_ == 0)
{
lean_ctor_set_tag(v___x_329_, 5);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_value_327_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
else
{
double v___x_337_; lean_object* v___x_338_; 
lean_del_object(v___x_329_);
v___x_337_ = l_Float_ofInt(v_value_327_);
lean_dec(v_value_327_);
v___x_338_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrBigint___lam__0(lean_object* v_value_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v_value_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntUint8ArrayOrBigint___lam__0(lean_object* v_value_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v_value_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions___lam__0(lean_object* v___f_347_, lean_object* v_d_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_349_ = lean_mk_string_unchecked("checks", 6, 6);
v___x_350_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_347_, v_d_348_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_unsigned_to_nat(1u);
v___x_353_ = lean_mk_empty_array_with_capacity(v___x_352_);
v___x_354_ = lean_array_push(v___x_353_, v___x_351_);
v___x_355_ = l_Lasm_JS_Web_Internal_fields(v___x_354_);
lean_dec_ref(v___x_354_);
return v___x_355_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions(void){
_start:
{
lean_object* v___f_356_; lean_object* v___f_357_; 
v___f_356_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_357_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions___lam__0), 2, 1);
lean_closure_set(v___f_357_, 0, v___f_356_);
return v___f_357_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCheckPrimeSyncOptions(void){
_start:
{
lean_object* v___f_358_; lean_object* v___f_359_; 
v___f_358_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_359_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions___lam__0), 2, 1);
lean_closure_set(v___f_359_, 0, v___f_358_);
return v___f_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorIdx(lean_object* v_x_360_){
_start:
{
switch(lean_obj_tag(v_x_360_))
{
case 0:
{
lean_object* v___x_361_; 
v___x_361_ = lean_unsigned_to_nat(0u);
return v___x_361_;
}
case 1:
{
lean_object* v___x_362_; 
v___x_362_ = lean_unsigned_to_nat(1u);
return v___x_362_;
}
case 2:
{
lean_object* v___x_363_; 
v___x_363_ = lean_unsigned_to_nat(2u);
return v___x_363_;
}
default: 
{
lean_object* v___x_364_; 
v___x_364_ = lean_unsigned_to_nat(3u);
return v___x_364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorIdx___boxed(lean_object* v_x_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorIdx(v_x_365_);
lean_dec_ref(v_x_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(lean_object* v_t_367_, lean_object* v_k_368_){
_start:
{
switch(lean_obj_tag(v_t_367_))
{
case 2:
{
lean_object* v_value_369_; lean_object* v___x_370_; 
v_value_369_ = lean_ctor_get(v_t_367_, 0);
lean_inc(v_value_369_);
lean_dec_ref_known(v_t_367_, 1);
v___x_370_ = lean_apply_1(v_k_368_, v_value_369_);
return v___x_370_;
}
case 3:
{
lean_object* v_value_371_; lean_object* v___x_372_; 
v_value_371_ = lean_ctor_get(v_t_367_, 0);
lean_inc(v_value_371_);
lean_dec_ref_known(v_t_367_, 1);
v___x_372_ = lean_apply_1(v_k_368_, v_value_371_);
return v___x_372_;
}
default: 
{
lean_object* v_value_373_; lean_object* v___x_374_; 
v_value_373_ = lean_ctor_get(v_t_367_, 0);
lean_inc_ref(v_value_373_);
lean_dec_ref(v_t_367_);
v___x_374_ = lean_apply_1(v_k_368_, v_value_373_);
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim(lean_object* v_motive_375_, lean_object* v_ctorIdx_376_, lean_object* v_t_377_, lean_object* v_h_378_, lean_object* v_k_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_377_, v_k_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___boxed(lean_object* v_motive_381_, lean_object* v_ctorIdx_382_, lean_object* v_t_383_, lean_object* v_h_384_, lean_object* v_k_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim(v_motive_381_, v_ctorIdx_382_, v_t_383_, v_h_384_, v_k_385_);
lean_dec(v_ctorIdx_382_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_domString_elim___redArg(lean_object* v_t_387_, lean_object* v_domString_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_387_, v_domString_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_domString_elim(lean_object* v_motive_390_, lean_object* v_t_391_, lean_object* v_h_392_, lean_object* v_domString_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_391_, v_domString_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_uint8Array_elim___redArg(lean_object* v_t_395_, lean_object* v_uint8Array_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_395_, v_uint8Array_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_uint8Array_elim(lean_object* v_motive_398_, lean_object* v_t_399_, lean_object* v_h_400_, lean_object* v_uint8Array_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_399_, v_uint8Array_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_keyObject_elim___redArg(lean_object* v_t_403_, lean_object* v_keyObject_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_403_, v_keyObject_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_keyObject_elim(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_keyObject_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_407_, v_keyObject_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_cryptoKey_elim___redArg(lean_object* v_t_411_, lean_object* v_cryptoKey_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_411_, v_cryptoKey_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_cryptoKey_elim(lean_object* v_motive_414_, lean_object* v_t_415_, lean_object* v_h_416_, lean_object* v_cryptoKey_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObjectOrCryptoKey_ctorElim___redArg(v_t_415_, v_cryptoKey_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object* v_x_419_){
_start:
{
switch(lean_obj_tag(v_x_419_))
{
case 0:
{
lean_object* v_value_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_value_420_ = lean_ctor_get(v_x_419_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_419_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v_x_419_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_value_420_);
lean_dec(v_x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set_tag(v___x_422_, 4);
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_value_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
case 1:
{
lean_object* v_value_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
v_value_428_ = lean_ctor_get(v_x_419_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_419_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v_x_419_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_value_428_);
lean_dec(v_x_419_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set_tag(v___x_430_, 6);
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_value_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
default: 
{
lean_object* v_value_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_value_436_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_value_436_);
lean_dec_ref(v_x_419_);
v___x_437_ = lean_mk_string_unchecked("", 0, 0);
v___x_438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_438_, 0, v_value_436_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
return v___x_438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object* v_value_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_441_, 0, v_value_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object* v_value_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_444_, 0, v_value_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object* v_value_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_447_, 0, v_value_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCryptoKeyDOMStringOrUint8ArrayOrKeyObjectOrCryptoKey___lam__0(lean_object* v_value_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_450_, 0, v_value_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions___lam__0(lean_object* v___f_452_, lean_object* v___f_453_, lean_object* v_d_454_){
_start:
{
lean_object* v_authTagLength_455_; lean_object* v_ctsMode_456_; lean_object* v_encoding_457_; lean_object* v_xtsStandard_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_authTagLength_455_ = lean_ctor_get(v_d_454_, 0);
lean_inc(v_authTagLength_455_);
v_ctsMode_456_ = lean_ctor_get(v_d_454_, 1);
lean_inc(v_ctsMode_456_);
v_encoding_457_ = lean_ctor_get(v_d_454_, 2);
lean_inc(v_encoding_457_);
v_xtsStandard_458_ = lean_ctor_get(v_d_454_, 3);
lean_inc(v_xtsStandard_458_);
lean_dec_ref(v_d_454_);
v___x_459_ = lean_mk_string_unchecked("authTagLength", 13, 13);
v___x_460_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_452_, v_authTagLength_455_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = lean_mk_string_unchecked("ctsMode", 7, 7);
lean_inc_ref_n(v___f_453_, 2);
v___x_463_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_453_, v_ctsMode_456_);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_466_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_453_, v_encoding_457_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = lean_mk_string_unchecked("xtsStandard", 11, 11);
v___x_469_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_453_, v_xtsStandard_458_);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = lean_unsigned_to_nat(4u);
v___x_472_ = lean_mk_empty_array_with_capacity(v___x_471_);
v___x_473_ = lean_array_push(v___x_472_, v___x_461_);
v___x_474_ = lean_array_push(v___x_473_, v___x_464_);
v___x_475_ = lean_array_push(v___x_474_, v___x_467_);
v___x_476_ = lean_array_push(v___x_475_, v___x_470_);
v___x_477_ = l_Lasm_JS_Web_Internal_fields(v___x_476_);
lean_dec_ref(v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions(void){
_start:
{
lean_object* v___f_478_; lean_object* v___f_479_; lean_object* v___f_480_; 
v___f_478_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_479_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_480_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions___lam__0), 3, 2);
lean_closure_set(v___f_480_, 0, v___f_478_);
lean_closure_set(v___f_480_, 1, v___f_479_);
return v___f_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions___lam__0(lean_object* v___f_481_, lean_object* v___f_482_, lean_object* v_d_483_){
_start:
{
lean_object* v_authTagLength_484_; lean_object* v_ctsMode_485_; lean_object* v_encoding_486_; lean_object* v_xtsStandard_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_authTagLength_484_ = lean_ctor_get(v_d_483_, 0);
lean_inc(v_authTagLength_484_);
v_ctsMode_485_ = lean_ctor_get(v_d_483_, 1);
lean_inc(v_ctsMode_485_);
v_encoding_486_ = lean_ctor_get(v_d_483_, 2);
lean_inc(v_encoding_486_);
v_xtsStandard_487_ = lean_ctor_get(v_d_483_, 3);
lean_inc(v_xtsStandard_487_);
lean_dec_ref(v_d_483_);
v___x_488_ = lean_mk_string_unchecked("authTagLength", 13, 13);
v___x_489_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_481_, v_authTagLength_484_);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = lean_mk_string_unchecked("ctsMode", 7, 7);
lean_inc_ref_n(v___f_482_, 2);
v___x_492_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_482_, v_ctsMode_485_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_495_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_482_, v_encoding_486_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = lean_mk_string_unchecked("xtsStandard", 11, 11);
v___x_498_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_482_, v_xtsStandard_487_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_unsigned_to_nat(4u);
v___x_501_ = lean_mk_empty_array_with_capacity(v___x_500_);
v___x_502_ = lean_array_push(v___x_501_, v___x_490_);
v___x_503_ = lean_array_push(v___x_502_, v___x_493_);
v___x_504_ = lean_array_push(v___x_503_, v___x_496_);
v___x_505_ = lean_array_push(v___x_504_, v___x_499_);
v___x_506_ = l_Lasm_JS_Web_Internal_fields(v___x_505_);
lean_dec_ref(v___x_505_);
return v___x_506_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions(void){
_start:
{
lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___f_509_; 
v___f_507_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_508_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_509_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions___lam__0), 3, 2);
lean_closure_set(v___f_509_, 0, v___f_507_);
lean_closure_set(v___f_509_, 1, v___f_508_);
return v___f_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorIdx(lean_object* v_x_510_){
_start:
{
switch(lean_obj_tag(v_x_510_))
{
case 0:
{
lean_object* v___x_511_; 
v___x_511_ = lean_unsigned_to_nat(0u);
return v___x_511_;
}
case 1:
{
lean_object* v___x_512_; 
v___x_512_ = lean_unsigned_to_nat(1u);
return v___x_512_;
}
default: 
{
lean_object* v___x_513_; 
v___x_513_ = lean_unsigned_to_nat(2u);
return v___x_513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorIdx___boxed(lean_object* v_x_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorIdx(v_x_514_);
lean_dec_ref(v_x_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(lean_object* v_t_516_, lean_object* v_k_517_){
_start:
{
if (lean_obj_tag(v_t_516_) == 0)
{
double v_value_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_value_518_ = lean_ctor_get_float(v_t_516_, 0);
lean_dec_ref_known(v_t_516_, 0);
v___x_519_ = lean_box_float(v_value_518_);
v___x_520_ = lean_apply_1(v_k_517_, v___x_519_);
return v___x_520_;
}
else
{
lean_object* v_value_521_; lean_object* v___x_522_; 
v_value_521_ = lean_ctor_get(v_t_516_, 0);
lean_inc_ref(v_value_521_);
lean_dec_ref(v_t_516_);
v___x_522_ = lean_apply_1(v_k_517_, v_value_521_);
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim(lean_object* v_motive_523_, lean_object* v_ctorIdx_524_, lean_object* v_t_525_, lean_object* v_h_526_, lean_object* v_k_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_525_, v_k_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___boxed(lean_object* v_motive_529_, lean_object* v_ctorIdx_530_, lean_object* v_t_531_, lean_object* v_h_532_, lean_object* v_k_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim(v_motive_529_, v_ctorIdx_530_, v_t_531_, v_h_532_, v_k_533_);
lean_dec(v_ctorIdx_530_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_double_elim___redArg(lean_object* v_t_535_, lean_object* v_double_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_535_, v_double_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_double_elim(lean_object* v_motive_538_, lean_object* v_t_539_, lean_object* v_h_540_, lean_object* v_double_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_539_, v_double_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_domString_elim___redArg(lean_object* v_t_543_, lean_object* v_domString_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_543_, v_domString_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_domString_elim(lean_object* v_motive_546_, lean_object* v_t_547_, lean_object* v_h_548_, lean_object* v_domString_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_547_, v_domString_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_551_, lean_object* v_uint8Array_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_551_, v_uint8Array_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_uint8Array_elim(lean_object* v_motive_554_, lean_object* v_t_555_, lean_object* v_h_556_, lean_object* v_uint8Array_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lasm_JS_Node_DoubleOrDOMStringOrUint8Array_ctorElim___redArg(v_t_555_, v_uint8Array_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDoubleOrDOMStringOrUint8Array___lam__0(lean_object* v_x_559_){
_start:
{
switch(lean_obj_tag(v_x_559_))
{
case 0:
{
double v_value_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_value_560_ = lean_ctor_get_float(v_x_559_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v_x_559_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_dec(v_x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set_tag(v___x_562_, 3);
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_566_, 0, v_value_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
case 1:
{
lean_object* v_value_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
v_value_568_ = lean_ctor_get(v_x_559_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v_x_559_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_value_568_);
lean_dec(v_x_559_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
lean_ctor_set_tag(v___x_570_, 4);
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_value_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
default: 
{
lean_object* v_value_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_value_576_ = lean_ctor_get(v_x_559_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v_x_559_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_value_576_);
lean_dec(v_x_559_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 6);
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_value_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0(double v_value_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_586_, 0, v_value_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0___boxed(lean_object* v_value_587_){
_start:
{
double v_value_boxed_588_; lean_object* v_res_589_; 
v_value_boxed_588_ = lean_unbox_float(v_value_587_);
lean_dec_ref(v_value_587_);
v_res_589_ = l_Lasm_JS_Node_instCoeFloatDoubleOrDOMStringOrUint8Array___lam__0(v_value_boxed_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDoubleOrDOMStringOrUint8Array___lam__0(lean_object* v_value_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v_value_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDoubleOrDOMStringOrUint8Array___lam__0(lean_object* v_value_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_595_, 0, v_value_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHashOptions___lam__0(lean_object* v___f_597_, lean_object* v___f_598_, lean_object* v_d_599_){
_start:
{
lean_object* v_customization_600_; lean_object* v_functionName_601_; lean_object* v_outputLength_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_customization_600_ = lean_ctor_get(v_d_599_, 0);
lean_inc(v_customization_600_);
v_functionName_601_ = lean_ctor_get(v_d_599_, 1);
lean_inc(v_functionName_601_);
v_outputLength_602_ = lean_ctor_get(v_d_599_, 2);
lean_inc(v_outputLength_602_);
lean_dec_ref(v_d_599_);
v___x_603_ = lean_mk_string_unchecked("customization", 13, 13);
lean_inc_ref(v___f_597_);
v___x_604_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_597_, v_customization_600_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_mk_string_unchecked("functionName", 12, 12);
v___x_607_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_597_, v_functionName_601_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = lean_mk_string_unchecked("outputLength", 12, 12);
v___x_610_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_598_, v_outputLength_602_);
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_unsigned_to_nat(3u);
v___x_613_ = lean_mk_empty_array_with_capacity(v___x_612_);
v___x_614_ = lean_array_push(v___x_613_, v___x_605_);
v___x_615_ = lean_array_push(v___x_614_, v___x_608_);
v___x_616_ = lean_array_push(v___x_615_, v___x_611_);
v___x_617_ = l_Lasm_JS_Web_Internal_fields(v___x_616_);
lean_dec_ref(v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCreateHashOptions(void){
_start:
{
lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; 
v___f_618_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_619_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_620_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCreateHashOptions___lam__0), 3, 2);
lean_closure_set(v___f_620_, 0, v___f_618_);
lean_closure_set(v___f_620_, 1, v___f_619_);
return v___f_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions___lam__0(lean_object* v___f_621_, lean_object* v_d_622_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_623_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_624_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_621_, v_d_622_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
v___x_628_ = lean_array_push(v___x_627_, v___x_625_);
v___x_629_ = l_Lasm_JS_Web_Internal_fields(v___x_628_);
lean_dec_ref(v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions(void){
_start:
{
lean_object* v___f_630_; lean_object* v___f_631_; 
v___f_630_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_631_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions___lam__0), 2, 1);
lean_closure_set(v___f_631_, 0, v___f_630_);
return v___f_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorIdx(lean_object* v_x_632_){
_start:
{
if (lean_obj_tag(v_x_632_) == 0)
{
lean_object* v___x_633_; 
v___x_633_ = lean_unsigned_to_nat(0u);
return v___x_633_;
}
else
{
lean_object* v___x_634_; 
v___x_634_ = lean_unsigned_to_nat(1u);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorIdx___boxed(lean_object* v_x_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorIdx(v_x_635_);
lean_dec_ref(v_x_635_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(lean_object* v_t_637_, lean_object* v_k_638_){
_start:
{
if (lean_obj_tag(v_t_637_) == 0)
{
lean_object* v_value_639_; lean_object* v___x_640_; 
v_value_639_ = lean_ctor_get(v_t_637_, 0);
lean_inc_ref(v_value_639_);
lean_dec_ref_known(v_t_637_, 1);
v___x_640_ = lean_apply_1(v_k_638_, v_value_639_);
return v___x_640_;
}
else
{
lean_object* v_value_641_; lean_object* v___x_642_; 
v_value_641_ = lean_ctor_get(v_t_637_, 0);
lean_inc(v_value_641_);
lean_dec_ref_known(v_t_637_, 1);
v___x_642_ = lean_apply_1(v_k_638_, v_value_641_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim(lean_object* v_motive_643_, lean_object* v_ctorIdx_644_, lean_object* v_t_645_, lean_object* v_h_646_, lean_object* v_k_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(v_t_645_, v_k_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___boxed(lean_object* v_motive_649_, lean_object* v_ctorIdx_650_, lean_object* v_t_651_, lean_object* v_h_652_, lean_object* v_k_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim(v_motive_649_, v_ctorIdx_650_, v_t_651_, v_h_652_, v_k_653_);
lean_dec(v_ctorIdx_650_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object* v_t_655_, lean_object* v_uint8Array_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(v_t_655_, v_uint8Array_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_uint8Array_elim(lean_object* v_motive_658_, lean_object* v_t_659_, lean_object* v_h_660_, lean_object* v_uint8Array_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(v_t_659_, v_uint8Array_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object* v_t_663_, lean_object* v_keyObject_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(v_t_663_, v_keyObject_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Uint8ArrayOrKeyObject_keyObject_elim(lean_object* v_motive_666_, lean_object* v_t_667_, lean_object* v_h_668_, lean_object* v_keyObject_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Lasm_JS_Node_Uint8ArrayOrKeyObject_ctorElim___redArg(v_t_667_, v_keyObject_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUint8ArrayOrKeyObject___lam__0(lean_object* v_x_671_){
_start:
{
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v_value_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
v_value_672_ = lean_ctor_get(v_x_671_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_671_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v_x_671_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_value_672_);
lean_dec(v_x_671_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 6);
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_value_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
lean_object* v_value_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v_value_680_ = lean_ctor_get(v_x_671_, 0);
lean_inc(v_value_680_);
lean_dec_ref_known(v_x_671_, 1);
v___x_681_ = lean_mk_string_unchecked("", 0, 0);
v___x_682_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_682_, 0, v_value_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayUint8ArrayOrKeyObject___lam__0(lean_object* v_value_684_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v_value_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectUint8ArrayOrKeyObject___lam__0(lean_object* v_value_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_688_, 0, v_value_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoCreateMacOptions___lam__0(lean_object* v___f_690_, lean_object* v___f_691_, lean_object* v___f_692_, lean_object* v_d_693_){
_start:
{
lean_object* v_digest_694_; lean_object* v_cipher_695_; lean_object* v_iv_696_; lean_object* v_customization_697_; lean_object* v_salt_698_; lean_object* v_outputLength_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_digest_694_ = lean_ctor_get(v_d_693_, 0);
lean_inc(v_digest_694_);
v_cipher_695_ = lean_ctor_get(v_d_693_, 1);
lean_inc(v_cipher_695_);
v_iv_696_ = lean_ctor_get(v_d_693_, 2);
lean_inc(v_iv_696_);
v_customization_697_ = lean_ctor_get(v_d_693_, 3);
lean_inc(v_customization_697_);
v_salt_698_ = lean_ctor_get(v_d_693_, 4);
lean_inc(v_salt_698_);
v_outputLength_699_ = lean_ctor_get(v_d_693_, 5);
lean_inc(v_outputLength_699_);
lean_dec_ref(v_d_693_);
v___x_700_ = lean_mk_string_unchecked("digest", 6, 6);
lean_inc_ref(v___f_690_);
v___x_701_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_690_, v_digest_694_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_mk_string_unchecked("cipher", 6, 6);
v___x_704_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_690_, v_cipher_695_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = lean_mk_string_unchecked("iv", 2, 2);
lean_inc_ref_n(v___f_691_, 2);
v___x_707_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_691_, v_iv_696_);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_mk_string_unchecked("customization", 13, 13);
v___x_710_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_691_, v_customization_697_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_mk_string_unchecked("salt", 4, 4);
v___x_713_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_691_, v_salt_698_);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = lean_mk_string_unchecked("outputLength", 12, 12);
v___x_716_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_692_, v_outputLength_699_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_unsigned_to_nat(6u);
v___x_719_ = lean_mk_empty_array_with_capacity(v___x_718_);
v___x_720_ = lean_array_push(v___x_719_, v___x_702_);
v___x_721_ = lean_array_push(v___x_720_, v___x_705_);
v___x_722_ = lean_array_push(v___x_721_, v___x_708_);
v___x_723_ = lean_array_push(v___x_722_, v___x_711_);
v___x_724_ = lean_array_push(v___x_723_, v___x_714_);
v___x_725_ = lean_array_push(v___x_724_, v___x_717_);
v___x_726_ = l_Lasm_JS_Web_Internal_fields(v___x_725_);
lean_dec_ref(v___x_725_);
return v___x_726_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoCreateMacOptions(void){
_start:
{
lean_object* v___f_727_; lean_object* v___f_728_; lean_object* v___f_729_; lean_object* v___f_730_; 
v___f_727_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_728_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_729_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_730_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoCreateMacOptions___lam__0), 4, 3);
lean_closure_set(v___f_730_, 0, v___f_727_);
lean_closure_set(v___f_730_, 1, v___f_728_);
lean_closure_set(v___f_730_, 2, v___f_729_);
return v___f_730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorIdx(lean_object* v_x_731_){
_start:
{
switch(lean_obj_tag(v_x_731_))
{
case 0:
{
lean_object* v___x_732_; 
v___x_732_ = lean_unsigned_to_nat(0u);
return v___x_732_;
}
case 1:
{
lean_object* v___x_733_; 
v___x_733_ = lean_unsigned_to_nat(1u);
return v___x_733_;
}
case 2:
{
lean_object* v___x_734_; 
v___x_734_ = lean_unsigned_to_nat(2u);
return v___x_734_;
}
case 3:
{
lean_object* v___x_735_; 
v___x_735_ = lean_unsigned_to_nat(3u);
return v___x_735_;
}
default: 
{
lean_object* v___x_736_; 
v___x_736_ = lean_unsigned_to_nat(4u);
return v___x_736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorIdx___boxed(lean_object* v_x_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorIdx(v_x_737_);
lean_dec_ref(v_x_737_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(lean_object* v_t_739_, lean_object* v_k_740_){
_start:
{
switch(lean_obj_tag(v_t_739_))
{
case 1:
{
lean_object* v_value_741_; lean_object* v___x_742_; 
v_value_741_ = lean_ctor_get(v_t_739_, 0);
lean_inc_ref(v_value_741_);
lean_dec_ref_known(v_t_739_, 1);
v___x_742_ = lean_apply_1(v_k_740_, v_value_741_);
return v___x_742_;
}
case 2:
{
lean_object* v_value_743_; lean_object* v___x_744_; 
v_value_743_ = lean_ctor_get(v_t_739_, 0);
lean_inc_ref(v_value_743_);
lean_dec_ref_known(v_t_739_, 1);
v___x_744_ = lean_apply_1(v_k_740_, v_value_743_);
return v___x_744_;
}
default: 
{
lean_object* v_value_745_; lean_object* v___x_746_; 
v_value_745_ = lean_ctor_get(v_t_739_, 0);
lean_inc(v_value_745_);
lean_dec_ref(v_t_739_);
v___x_746_ = lean_apply_1(v_k_740_, v_value_745_);
return v___x_746_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim(lean_object* v_motive_747_, lean_object* v_ctorIdx_748_, lean_object* v_t_749_, lean_object* v_h_750_, lean_object* v_k_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_749_, v_k_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___boxed(lean_object* v_motive_753_, lean_object* v_ctorIdx_754_, lean_object* v_t_755_, lean_object* v_h_756_, lean_object* v_k_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim(v_motive_753_, v_ctorIdx_754_, v_t_755_, v_h_756_, v_k_757_);
lean_dec(v_ctorIdx_754_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_object_elim___redArg(lean_object* v_t_759_, lean_object* v_object_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_759_, v_object_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_object_elim(lean_object* v_motive_762_, lean_object* v_t_763_, lean_object* v_h_764_, lean_object* v_object_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_763_, v_object_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_domString_elim___redArg(lean_object* v_t_767_, lean_object* v_domString_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_767_, v_domString_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_domString_elim(lean_object* v_motive_770_, lean_object* v_t_771_, lean_object* v_h_772_, lean_object* v_domString_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_771_, v_domString_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_uint8Array_elim___redArg(lean_object* v_t_775_, lean_object* v_uint8Array_776_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_775_, v_uint8Array_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_uint8Array_elim(lean_object* v_motive_778_, lean_object* v_t_779_, lean_object* v_h_780_, lean_object* v_uint8Array_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_779_, v_uint8Array_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_keyObject_elim___redArg(lean_object* v_t_783_, lean_object* v_keyObject_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_783_, v_keyObject_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_keyObject_elim(lean_object* v_motive_786_, lean_object* v_t_787_, lean_object* v_h_788_, lean_object* v_keyObject_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_787_, v_keyObject_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_url_elim___redArg(lean_object* v_t_791_, lean_object* v_url_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_791_, v_url_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_url_elim(lean_object* v_motive_794_, lean_object* v_t_795_, lean_object* v_h_796_, lean_object* v_url_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL_ctorElim___redArg(v_t_795_, v_url_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object* v_x_799_){
_start:
{
switch(lean_obj_tag(v_x_799_))
{
case 0:
{
lean_object* v_value_800_; 
v_value_800_ = lean_ctor_get(v_x_799_, 0);
lean_inc(v_value_800_);
lean_dec_ref_known(v_x_799_, 1);
return v_value_800_;
}
case 1:
{
lean_object* v_value_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v_value_801_ = lean_ctor_get(v_x_799_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v_x_799_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_value_801_);
lean_dec(v_x_799_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set_tag(v___x_803_, 4);
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_value_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
case 2:
{
lean_object* v_value_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_value_809_ = lean_ctor_get(v_x_799_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v_x_799_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_value_809_);
lean_dec(v_x_799_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
lean_ctor_set_tag(v___x_811_, 6);
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_value_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
default: 
{
lean_object* v_value_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_value_817_ = lean_ctor_get(v_x_799_, 0);
lean_inc(v_value_817_);
lean_dec_ref(v_x_799_);
v___x_818_ = lean_mk_string_unchecked("", 0, 0);
v___x_819_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_819_, 0, v_value_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
return v___x_819_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object* v_value_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v_value_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object* v_value_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_825_, 0, v_value_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object* v_value_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v_value_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0(lean_object* v_value_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_831_, 0, v_value_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorIdx(lean_object* v_x_833_){
_start:
{
switch(lean_obj_tag(v_x_833_))
{
case 0:
{
lean_object* v___x_834_; 
v___x_834_ = lean_unsigned_to_nat(0u);
return v___x_834_;
}
case 1:
{
lean_object* v___x_835_; 
v___x_835_ = lean_unsigned_to_nat(1u);
return v___x_835_;
}
case 2:
{
lean_object* v___x_836_; 
v___x_836_ = lean_unsigned_to_nat(2u);
return v___x_836_;
}
default: 
{
lean_object* v___x_837_; 
v___x_837_ = lean_unsigned_to_nat(3u);
return v___x_837_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorIdx___boxed(lean_object* v_x_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorIdx(v_x_838_);
lean_dec_ref(v_x_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(lean_object* v_t_840_, lean_object* v_k_841_){
_start:
{
switch(lean_obj_tag(v_t_840_))
{
case 1:
{
lean_object* v_value_842_; lean_object* v___x_843_; 
v_value_842_ = lean_ctor_get(v_t_840_, 0);
lean_inc_ref(v_value_842_);
lean_dec_ref_known(v_t_840_, 1);
v___x_843_ = lean_apply_1(v_k_841_, v_value_842_);
return v___x_843_;
}
case 2:
{
lean_object* v_value_844_; lean_object* v___x_845_; 
v_value_844_ = lean_ctor_get(v_t_840_, 0);
lean_inc_ref(v_value_844_);
lean_dec_ref_known(v_t_840_, 1);
v___x_845_ = lean_apply_1(v_k_841_, v_value_844_);
return v___x_845_;
}
default: 
{
lean_object* v_value_846_; lean_object* v___x_847_; 
v_value_846_ = lean_ctor_get(v_t_840_, 0);
lean_inc(v_value_846_);
lean_dec_ref(v_t_840_);
v___x_847_ = lean_apply_1(v_k_841_, v_value_846_);
return v___x_847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim(lean_object* v_motive_848_, lean_object* v_ctorIdx_849_, lean_object* v_t_850_, lean_object* v_h_851_, lean_object* v_k_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_850_, v_k_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___boxed(lean_object* v_motive_854_, lean_object* v_ctorIdx_855_, lean_object* v_t_856_, lean_object* v_h_857_, lean_object* v_k_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim(v_motive_854_, v_ctorIdx_855_, v_t_856_, v_h_857_, v_k_858_);
lean_dec(v_ctorIdx_855_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_object_elim___redArg(lean_object* v_t_860_, lean_object* v_object_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_860_, v_object_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_object_elim(lean_object* v_motive_863_, lean_object* v_t_864_, lean_object* v_h_865_, lean_object* v_object_866_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_864_, v_object_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_domString_elim___redArg(lean_object* v_t_868_, lean_object* v_domString_869_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_868_, v_domString_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_domString_elim(lean_object* v_motive_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_domString_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_872_, v_domString_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object* v_t_876_, lean_object* v_uint8Array_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_876_, v_uint8Array_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_uint8Array_elim(lean_object* v_motive_879_, lean_object* v_t_880_, lean_object* v_h_881_, lean_object* v_uint8Array_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_880_, v_uint8Array_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object* v_t_884_, lean_object* v_keyObject_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_884_, v_keyObject_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_keyObject_elim(lean_object* v_motive_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_keyObject_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lasm_JS_Node_ObjectOrDOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_888_, v_keyObject_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_x_892_){
_start:
{
switch(lean_obj_tag(v_x_892_))
{
case 0:
{
lean_object* v_value_893_; 
v_value_893_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_value_893_);
lean_dec_ref_known(v_x_892_, 1);
return v_value_893_;
}
case 1:
{
lean_object* v_value_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
v_value_894_ = lean_ctor_get(v_x_892_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v_x_892_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v_x_892_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_value_894_);
lean_dec(v_x_892_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 4);
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_value_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
case 2:
{
lean_object* v_value_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_value_902_ = lean_ctor_get(v_x_892_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v_x_892_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v_x_892_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_value_902_);
lean_dec(v_x_892_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 6);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_value_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
default: 
{
lean_object* v_value_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_value_910_ = lean_ctor_get(v_x_892_, 0);
lean_inc(v_value_910_);
lean_dec_ref_known(v_x_892_, 1);
v___x_911_ = lean_mk_string_unchecked("", 0, 0);
v___x_912_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_912_, 0, v_value_910_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_915_, 0, v_value_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_918_, 0, v_value_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_921_, 0, v_value_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions___lam__0(lean_object* v___f_923_, lean_object* v___f_924_, lean_object* v_d_925_){
_start:
{
lean_object* v_privateKey_926_; lean_object* v_publicKey_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_944_; 
v_privateKey_926_ = lean_ctor_get(v_d_925_, 0);
v_publicKey_927_ = lean_ctor_get(v_d_925_, 1);
v_isSharedCheck_944_ = !lean_is_exclusive(v_d_925_);
if (v_isSharedCheck_944_ == 0)
{
v___x_929_ = v_d_925_;
v_isShared_930_ = v_isSharedCheck_944_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_publicKey_927_);
lean_inc(v_privateKey_926_);
lean_dec(v_d_925_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_944_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_931_ = lean_mk_string_unchecked("privateKey", 10, 10);
v___x_932_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_923_, v_privateKey_926_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 1, v___x_932_);
lean_ctor_set(v___x_929_, 0, v___x_931_);
v___x_934_ = v___x_929_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_932_);
v___x_934_ = v_reuseFailAlloc_943_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_935_ = lean_mk_string_unchecked("publicKey", 9, 9);
v___x_936_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_924_, v_publicKey_927_);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_935_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
v___x_938_ = lean_unsigned_to_nat(2u);
v___x_939_ = lean_mk_empty_array_with_capacity(v___x_938_);
v___x_940_ = lean_array_push(v___x_939_, v___x_934_);
v___x_941_ = lean_array_push(v___x_940_, v___x_937_);
v___x_942_ = l_Lasm_JS_Web_Internal_fields(v___x_941_);
lean_dec_ref(v___x_941_);
return v___x_942_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions(void){
_start:
{
lean_object* v___f_945_; lean_object* v___f_946_; lean_object* v___f_947_; 
v___f_945_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObjectOrURL___lam__0), 1, 0);
v___f_946_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSObjectOrDOMStringOrUint8ArrayOrKeyObject___lam__0), 1, 0);
v___f_947_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions___lam__0), 3, 2);
lean_closure_set(v___f_947_, 0, v___f_945_);
lean_closure_set(v___f_947_, 1, v___f_946_);
return v___f_947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions___lam__0(lean_object* v___f_948_, lean_object* v_d_949_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_950_ = lean_mk_string_unchecked("length", 6, 6);
v___x_951_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_948_, v_d_949_);
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_unsigned_to_nat(1u);
v___x_954_ = lean_mk_empty_array_with_capacity(v___x_953_);
v___x_955_ = lean_array_push(v___x_954_, v___x_952_);
v___x_956_ = l_Lasm_JS_Web_Internal_fields(v___x_955_);
lean_dec_ref(v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions(void){
_start:
{
lean_object* v___f_957_; lean_object* v___f_958_; 
v___f_957_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_958_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions___lam__0), 2, 1);
lean_closure_set(v___f_958_, 0, v___f_957_);
return v___f_958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions___lam__0(lean_object* v___f_959_, lean_object* v___f_960_, lean_object* v___f_961_, lean_object* v_d_962_){
_start:
{
lean_object* v_modulusLength_963_; lean_object* v_publicExponent_964_; lean_object* v_hashAlgorithm_965_; lean_object* v_mgf1HashAlgorithm_966_; lean_object* v_saltLength_967_; lean_object* v_divisorLength_968_; lean_object* v_namedCurve_969_; lean_object* v_prime_970_; lean_object* v_primeLength_971_; lean_object* v_generator_972_; lean_object* v_groupName_973_; lean_object* v_paramEncoding_974_; lean_object* v_publicKeyEncoding_975_; lean_object* v_privateKeyEncoding_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v_modulusLength_963_ = lean_ctor_get(v_d_962_, 0);
lean_inc(v_modulusLength_963_);
v_publicExponent_964_ = lean_ctor_get(v_d_962_, 1);
lean_inc(v_publicExponent_964_);
v_hashAlgorithm_965_ = lean_ctor_get(v_d_962_, 2);
lean_inc(v_hashAlgorithm_965_);
v_mgf1HashAlgorithm_966_ = lean_ctor_get(v_d_962_, 3);
lean_inc(v_mgf1HashAlgorithm_966_);
v_saltLength_967_ = lean_ctor_get(v_d_962_, 4);
lean_inc(v_saltLength_967_);
v_divisorLength_968_ = lean_ctor_get(v_d_962_, 5);
lean_inc(v_divisorLength_968_);
v_namedCurve_969_ = lean_ctor_get(v_d_962_, 6);
lean_inc(v_namedCurve_969_);
v_prime_970_ = lean_ctor_get(v_d_962_, 7);
lean_inc(v_prime_970_);
v_primeLength_971_ = lean_ctor_get(v_d_962_, 8);
lean_inc(v_primeLength_971_);
v_generator_972_ = lean_ctor_get(v_d_962_, 9);
lean_inc(v_generator_972_);
v_groupName_973_ = lean_ctor_get(v_d_962_, 10);
lean_inc(v_groupName_973_);
v_paramEncoding_974_ = lean_ctor_get(v_d_962_, 11);
lean_inc(v_paramEncoding_974_);
v_publicKeyEncoding_975_ = lean_ctor_get(v_d_962_, 12);
lean_inc(v_publicKeyEncoding_975_);
v_privateKeyEncoding_976_ = lean_ctor_get(v_d_962_, 13);
lean_inc(v_privateKeyEncoding_976_);
lean_dec_ref(v_d_962_);
v___x_977_ = lean_mk_string_unchecked("modulusLength", 13, 13);
lean_inc_ref_n(v___f_959_, 5);
v___x_978_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_modulusLength_963_);
v___x_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = lean_mk_string_unchecked("publicExponent", 14, 14);
v___x_981_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_publicExponent_964_);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_mk_string_unchecked("hashAlgorithm", 13, 13);
lean_inc_ref_n(v___f_960_, 4);
v___x_984_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_960_, v_hashAlgorithm_965_);
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_mk_string_unchecked("mgf1HashAlgorithm", 17, 17);
v___x_987_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_960_, v_mgf1HashAlgorithm_966_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_mk_string_unchecked("saltLength", 10, 10);
v___x_990_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_saltLength_967_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_mk_string_unchecked("divisorLength", 13, 13);
v___x_993_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_divisorLength_968_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_mk_string_unchecked("namedCurve", 10, 10);
v___x_996_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_960_, v_namedCurve_969_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_mk_string_unchecked("prime", 5, 5);
v___x_999_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_961_, v_prime_970_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_mk_string_unchecked("primeLength", 11, 11);
v___x_1002_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_primeLength_971_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_mk_string_unchecked("generator", 9, 9);
v___x_1005_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_959_, v_generator_972_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_mk_string_unchecked("groupName", 9, 9);
v___x_1008_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_960_, v_groupName_973_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_mk_string_unchecked("paramEncoding", 13, 13);
v___x_1011_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_960_, v_paramEncoding_974_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = lean_mk_string_unchecked("publicKeyEncoding", 17, 17);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v_publicKeyEncoding_975_);
v___x_1015_ = lean_mk_string_unchecked("privateKeyEncoding", 18, 18);
v___x_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v_privateKeyEncoding_976_);
v___x_1017_ = lean_unsigned_to_nat(14u);
v___x_1018_ = lean_mk_empty_array_with_capacity(v___x_1017_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_979_);
v___x_1020_ = lean_array_push(v___x_1019_, v___x_982_);
v___x_1021_ = lean_array_push(v___x_1020_, v___x_985_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_988_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_991_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_994_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_997_);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1000_);
v___x_1027_ = lean_array_push(v___x_1026_, v___x_1003_);
v___x_1028_ = lean_array_push(v___x_1027_, v___x_1006_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1009_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1012_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1014_);
v___x_1032_ = lean_array_push(v___x_1031_, v___x_1016_);
v___x_1033_ = l_Lasm_JS_Web_Internal_fields(v___x_1032_);
lean_dec_ref(v___x_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions(void){
_start:
{
lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; 
v___f_1034_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1035_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1036_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_1037_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions___lam__0), 4, 3);
lean_closure_set(v___f_1037_, 0, v___f_1034_);
lean_closure_set(v___f_1037_, 1, v___f_1035_);
lean_closure_set(v___f_1037_, 2, v___f_1036_);
return v___f_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions___lam__0(lean_object* v___f_1038_, lean_object* v___f_1039_, lean_object* v___f_1040_, lean_object* v_d_1041_){
_start:
{
lean_object* v_modulusLength_1042_; lean_object* v_publicExponent_1043_; lean_object* v_hashAlgorithm_1044_; lean_object* v_mgf1HashAlgorithm_1045_; lean_object* v_saltLength_1046_; lean_object* v_divisorLength_1047_; lean_object* v_namedCurve_1048_; lean_object* v_prime_1049_; lean_object* v_primeLength_1050_; lean_object* v_generator_1051_; lean_object* v_groupName_1052_; lean_object* v_paramEncoding_1053_; lean_object* v_publicKeyEncoding_1054_; lean_object* v_privateKeyEncoding_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_modulusLength_1042_ = lean_ctor_get(v_d_1041_, 0);
lean_inc(v_modulusLength_1042_);
v_publicExponent_1043_ = lean_ctor_get(v_d_1041_, 1);
lean_inc(v_publicExponent_1043_);
v_hashAlgorithm_1044_ = lean_ctor_get(v_d_1041_, 2);
lean_inc(v_hashAlgorithm_1044_);
v_mgf1HashAlgorithm_1045_ = lean_ctor_get(v_d_1041_, 3);
lean_inc(v_mgf1HashAlgorithm_1045_);
v_saltLength_1046_ = lean_ctor_get(v_d_1041_, 4);
lean_inc(v_saltLength_1046_);
v_divisorLength_1047_ = lean_ctor_get(v_d_1041_, 5);
lean_inc(v_divisorLength_1047_);
v_namedCurve_1048_ = lean_ctor_get(v_d_1041_, 6);
lean_inc(v_namedCurve_1048_);
v_prime_1049_ = lean_ctor_get(v_d_1041_, 7);
lean_inc(v_prime_1049_);
v_primeLength_1050_ = lean_ctor_get(v_d_1041_, 8);
lean_inc(v_primeLength_1050_);
v_generator_1051_ = lean_ctor_get(v_d_1041_, 9);
lean_inc(v_generator_1051_);
v_groupName_1052_ = lean_ctor_get(v_d_1041_, 10);
lean_inc(v_groupName_1052_);
v_paramEncoding_1053_ = lean_ctor_get(v_d_1041_, 11);
lean_inc(v_paramEncoding_1053_);
v_publicKeyEncoding_1054_ = lean_ctor_get(v_d_1041_, 12);
lean_inc(v_publicKeyEncoding_1054_);
v_privateKeyEncoding_1055_ = lean_ctor_get(v_d_1041_, 13);
lean_inc(v_privateKeyEncoding_1055_);
lean_dec_ref(v_d_1041_);
v___x_1056_ = lean_mk_string_unchecked("modulusLength", 13, 13);
lean_inc_ref_n(v___f_1038_, 5);
v___x_1057_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_modulusLength_1042_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = lean_mk_string_unchecked("publicExponent", 14, 14);
v___x_1060_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_publicExponent_1043_);
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = lean_mk_string_unchecked("hashAlgorithm", 13, 13);
lean_inc_ref_n(v___f_1039_, 4);
v___x_1063_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1039_, v_hashAlgorithm_1044_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_mk_string_unchecked("mgf1HashAlgorithm", 17, 17);
v___x_1066_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1039_, v_mgf1HashAlgorithm_1045_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_mk_string_unchecked("saltLength", 10, 10);
v___x_1069_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_saltLength_1046_);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_mk_string_unchecked("divisorLength", 13, 13);
v___x_1072_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_divisorLength_1047_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = lean_mk_string_unchecked("namedCurve", 10, 10);
v___x_1075_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1039_, v_namedCurve_1048_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = lean_mk_string_unchecked("prime", 5, 5);
v___x_1078_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1040_, v_prime_1049_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = lean_mk_string_unchecked("primeLength", 11, 11);
v___x_1081_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_primeLength_1050_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_mk_string_unchecked("generator", 9, 9);
v___x_1084_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1038_, v_generator_1051_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_mk_string_unchecked("groupName", 9, 9);
v___x_1087_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1039_, v_groupName_1052_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_mk_string_unchecked("paramEncoding", 13, 13);
v___x_1090_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1039_, v_paramEncoding_1053_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_mk_string_unchecked("publicKeyEncoding", 17, 17);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
lean_ctor_set(v___x_1093_, 1, v_publicKeyEncoding_1054_);
v___x_1094_ = lean_mk_string_unchecked("privateKeyEncoding", 18, 18);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v_privateKeyEncoding_1055_);
v___x_1096_ = lean_unsigned_to_nat(14u);
v___x_1097_ = lean_mk_empty_array_with_capacity(v___x_1096_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1058_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1061_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1064_);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1067_);
v___x_1102_ = lean_array_push(v___x_1101_, v___x_1070_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1073_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1076_);
v___x_1105_ = lean_array_push(v___x_1104_, v___x_1079_);
v___x_1106_ = lean_array_push(v___x_1105_, v___x_1082_);
v___x_1107_ = lean_array_push(v___x_1106_, v___x_1085_);
v___x_1108_ = lean_array_push(v___x_1107_, v___x_1088_);
v___x_1109_ = lean_array_push(v___x_1108_, v___x_1091_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1093_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1095_);
v___x_1112_ = l_Lasm_JS_Web_Internal_fields(v___x_1111_);
lean_dec_ref(v___x_1111_);
return v___x_1112_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions(void){
_start:
{
lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___f_1115_; lean_object* v___f_1116_; 
v___f_1113_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1114_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1115_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSByteArray___lam__0), 1, 0);
v___f_1116_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions___lam__0), 4, 3);
lean_closure_set(v___f_1116_, 0, v___f_1113_);
lean_closure_set(v___f_1116_, 1, v___f_1114_);
lean_closure_set(v___f_1116_, 2, v___f_1115_);
return v___f_1116_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeySyncOptions(void){
_start:
{
lean_object* v___f_1117_; lean_object* v___f_1118_; 
v___f_1117_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1118_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions___lam__0), 2, 1);
lean_closure_set(v___f_1118_, 0, v___f_1117_);
return v___f_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions___lam__0(lean_object* v___f_1119_, lean_object* v___f_1120_, lean_object* v_d_1121_){
_start:
{
lean_object* v_add_1122_; lean_object* v_rem_1123_; lean_object* v_safe_1124_; lean_object* v_bigint_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_add_1122_ = lean_ctor_get(v_d_1121_, 0);
lean_inc(v_add_1122_);
v_rem_1123_ = lean_ctor_get(v_d_1121_, 1);
lean_inc(v_rem_1123_);
v_safe_1124_ = lean_ctor_get(v_d_1121_, 2);
lean_inc(v_safe_1124_);
v_bigint_1125_ = lean_ctor_get(v_d_1121_, 3);
lean_inc(v_bigint_1125_);
lean_dec_ref(v_d_1121_);
v___x_1126_ = lean_mk_string_unchecked("add", 3, 3);
lean_inc_ref(v___f_1119_);
v___x_1127_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1119_, v_add_1122_);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_mk_string_unchecked("rem", 3, 3);
v___x_1130_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1119_, v_rem_1123_);
v___x_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set(v___x_1131_, 1, v___x_1130_);
v___x_1132_ = lean_mk_string_unchecked("safe", 4, 4);
lean_inc_ref(v___f_1120_);
v___x_1133_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1120_, v_safe_1124_);
v___x_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_1136_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1120_, v_bigint_1125_);
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_unsigned_to_nat(4u);
v___x_1139_ = lean_mk_empty_array_with_capacity(v___x_1138_);
v___x_1140_ = lean_array_push(v___x_1139_, v___x_1128_);
v___x_1141_ = lean_array_push(v___x_1140_, v___x_1131_);
v___x_1142_ = lean_array_push(v___x_1141_, v___x_1134_);
v___x_1143_ = lean_array_push(v___x_1142_, v___x_1137_);
v___x_1144_ = l_Lasm_JS_Web_Internal_fields(v___x_1143_);
lean_dec_ref(v___x_1143_);
return v___x_1144_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions(void){
_start:
{
lean_object* v___f_1145_; lean_object* v___f_1146_; lean_object* v___f_1147_; 
v___f_1145_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrBigint___lam__0), 1, 0);
v___f_1146_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1147_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions___lam__0), 3, 2);
lean_closure_set(v___f_1147_, 0, v___f_1145_);
lean_closure_set(v___f_1147_, 1, v___f_1146_);
return v___f_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorIdx(lean_object* v_x_1148_){
_start:
{
if (lean_obj_tag(v_x_1148_) == 0)
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_unsigned_to_nat(0u);
return v___x_1149_;
}
else
{
lean_object* v___x_1150_; 
v___x_1150_ = lean_unsigned_to_nat(1u);
return v___x_1150_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorIdx___boxed(lean_object* v_x_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorIdx(v_x_1151_);
lean_dec_ref(v_x_1151_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(lean_object* v_t_1153_, lean_object* v_k_1154_){
_start:
{
if (lean_obj_tag(v_t_1153_) == 0)
{
lean_object* v_value_1155_; lean_object* v___x_1156_; 
v_value_1155_ = lean_ctor_get(v_t_1153_, 0);
lean_inc_ref(v_value_1155_);
lean_dec_ref_known(v_t_1153_, 1);
v___x_1156_ = lean_apply_1(v_k_1154_, v_value_1155_);
return v___x_1156_;
}
else
{
lean_object* v_value_1157_; lean_object* v___x_1158_; 
v_value_1157_ = lean_ctor_get(v_t_1153_, 0);
lean_inc(v_value_1157_);
lean_dec_ref_known(v_t_1153_, 1);
v___x_1158_ = lean_apply_1(v_k_1154_, v_value_1157_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim(lean_object* v_motive_1159_, lean_object* v_ctorIdx_1160_, lean_object* v_t_1161_, lean_object* v_h_1162_, lean_object* v_k_1163_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(v_t_1161_, v_k_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___boxed(lean_object* v_motive_1165_, lean_object* v_ctorIdx_1166_, lean_object* v_t_1167_, lean_object* v_h_1168_, lean_object* v_k_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim(v_motive_1165_, v_ctorIdx_1166_, v_t_1167_, v_h_1168_, v_k_1169_);
lean_dec(v_ctorIdx_1166_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_arrayBuffer_elim___redArg(lean_object* v_t_1171_, lean_object* v_arrayBuffer_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(v_t_1171_, v_arrayBuffer_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_arrayBuffer_elim(lean_object* v_motive_1174_, lean_object* v_t_1175_, lean_object* v_h_1176_, lean_object* v_arrayBuffer_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(v_t_1175_, v_arrayBuffer_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_bigint_elim___redArg(lean_object* v_t_1179_, lean_object* v_bigint_1180_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(v_t_1179_, v_bigint_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_bigint_elim(lean_object* v_motive_1182_, lean_object* v_t_1183_, lean_object* v_h_1184_, lean_object* v_bigint_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lasm_JS_Node_ArrayBufferOrBigint_ctorElim___redArg(v_t_1183_, v_bigint_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_decode(lean_object* v_d_1187_){
_start:
{
switch(lean_obj_tag(v_d_1187_))
{
case 9:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_mk_string_unchecked("ArrayBufferOrBigint", 19, 19);
v___x_1190_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_1189_, v_d_1187_);
lean_dec_ref(v___x_1189_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v___x_1192_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref_known(v___x_1190_, 1);
v___x_1192_ = l_Lasm_JS_Web_Internal_arrayBufferBytes(v_a_1191_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1201_; 
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1195_ = v___x_1192_;
v_isShared_1196_ = v_isSharedCheck_1201_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1192_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1201_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1197_; lean_object* v___x_1199_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_a_1193_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v___x_1197_);
v___x_1199_ = v___x_1195_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
v_a_1202_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1192_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1192_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
v_a_1210_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1190_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1190_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
case 5:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_mk_string_unchecked("ArrayBufferOrBigint", 19, 19);
v___x_1219_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_fs_ReadStream_OpenListener_ofFn_spec__0_spec__0(v___x_1218_, v_d_1187_);
lean_dec_ref(v___x_1218_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1228_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1224_, 0, v_a_1220_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1224_);
v___x_1226_ = v___x_1222_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1219_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1219_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
default: 
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1237_ = lean_mk_string_unchecked("Lasm.JS.Node: expected a ArrayBufferOrBigint, received JavaScript ", 66, 66);
v___x_1238_ = l_Lasm_JS_Data_describe(v_d_1187_);
v___x_1239_ = lean_string_append(v___x_1237_, v___x_1238_);
lean_dec_ref(v___x_1238_);
v___x_1240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
v___x_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
return v___x_1241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ArrayBufferOrBigint_decode___boxed(lean_object* v_d_1242_, lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lasm_JS_Node_ArrayBufferOrBigint_decode(v_d_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions___lam__0(lean_object* v___f_1245_, lean_object* v___f_1246_, lean_object* v_d_1247_){
_start:
{
lean_object* v_add_1248_; lean_object* v_rem_1249_; lean_object* v_safe_1250_; lean_object* v_bigint_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v_add_1248_ = lean_ctor_get(v_d_1247_, 0);
lean_inc(v_add_1248_);
v_rem_1249_ = lean_ctor_get(v_d_1247_, 1);
lean_inc(v_rem_1249_);
v_safe_1250_ = lean_ctor_get(v_d_1247_, 2);
lean_inc(v_safe_1250_);
v_bigint_1251_ = lean_ctor_get(v_d_1247_, 3);
lean_inc(v_bigint_1251_);
lean_dec_ref(v_d_1247_);
v___x_1252_ = lean_mk_string_unchecked("add", 3, 3);
lean_inc_ref(v___f_1245_);
v___x_1253_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1245_, v_add_1248_);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = lean_mk_string_unchecked("rem", 3, 3);
v___x_1256_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1245_, v_rem_1249_);
v___x_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = lean_mk_string_unchecked("safe", 4, 4);
lean_inc_ref(v___f_1246_);
v___x_1259_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1246_, v_safe_1250_);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = lean_mk_string_unchecked("bigint", 6, 6);
v___x_1262_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1246_, v_bigint_1251_);
v___x_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1261_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = lean_unsigned_to_nat(4u);
v___x_1265_ = lean_mk_empty_array_with_capacity(v___x_1264_);
v___x_1266_ = lean_array_push(v___x_1265_, v___x_1254_);
v___x_1267_ = lean_array_push(v___x_1266_, v___x_1257_);
v___x_1268_ = lean_array_push(v___x_1267_, v___x_1260_);
v___x_1269_ = lean_array_push(v___x_1268_, v___x_1263_);
v___x_1270_ = l_Lasm_JS_Web_Internal_fields(v___x_1269_);
lean_dec_ref(v___x_1269_);
return v___x_1270_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions(void){
_start:
{
lean_object* v___f_1271_; lean_object* v___f_1272_; lean_object* v___f_1273_; 
v___f_1271_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUint8ArrayOrBigint___lam__0), 1, 0);
v___f_1272_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1273_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_1273_, 0, v___f_1271_);
lean_closure_set(v___f_1273_, 1, v___f_1272_);
return v___f_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions___lam__0(lean_object* v___f_1274_, lean_object* v_d_1275_){
_start:
{
lean_object* v_keyLength_1276_; lean_object* v_ivLength_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1294_; 
v_keyLength_1276_ = lean_ctor_get(v_d_1275_, 0);
v_ivLength_1277_ = lean_ctor_get(v_d_1275_, 1);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_d_1275_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1279_ = v_d_1275_;
v_isShared_1280_ = v_isSharedCheck_1294_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_ivLength_1277_);
lean_inc(v_keyLength_1276_);
lean_dec(v_d_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1294_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = lean_mk_string_unchecked("keyLength", 9, 9);
lean_inc_ref(v___f_1274_);
v___x_1282_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1274_, v_keyLength_1276_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v___x_1282_);
lean_ctor_set(v___x_1279_, 0, v___x_1281_);
v___x_1284_ = v___x_1279_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1285_ = lean_mk_string_unchecked("ivLength", 8, 8);
v___x_1286_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1274_, v_ivLength_1277_);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_unsigned_to_nat(2u);
v___x_1289_ = lean_mk_empty_array_with_capacity(v___x_1288_);
v___x_1290_ = lean_array_push(v___x_1289_, v___x_1284_);
v___x_1291_ = lean_array_push(v___x_1290_, v___x_1287_);
v___x_1292_ = l_Lasm_JS_Web_Internal_fields(v___x_1291_);
lean_dec_ref(v___x_1291_);
return v___x_1292_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions(void){
_start:
{
lean_object* v___f_1295_; lean_object* v___f_1296_; 
v___f_1295_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1296_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions___lam__0), 2, 1);
lean_closure_set(v___f_1296_, 0, v___f_1295_);
return v___f_1296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptions___lam__0(lean_object* v___f_1297_, lean_object* v___f_1298_, lean_object* v___f_1299_, lean_object* v_d_1300_){
_start:
{
lean_object* v_customization_1301_; lean_object* v_functionName_1302_; lean_object* v_outputEncoding_1303_; lean_object* v_outputLength_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v_customization_1301_ = lean_ctor_get(v_d_1300_, 0);
lean_inc(v_customization_1301_);
v_functionName_1302_ = lean_ctor_get(v_d_1300_, 1);
lean_inc(v_functionName_1302_);
v_outputEncoding_1303_ = lean_ctor_get(v_d_1300_, 2);
lean_inc(v_outputEncoding_1303_);
v_outputLength_1304_ = lean_ctor_get(v_d_1300_, 3);
lean_inc(v_outputLength_1304_);
lean_dec_ref(v_d_1300_);
v___x_1305_ = lean_mk_string_unchecked("customization", 13, 13);
lean_inc_ref(v___f_1297_);
v___x_1306_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1297_, v_customization_1301_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = lean_mk_string_unchecked("functionName", 12, 12);
v___x_1309_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1297_, v_functionName_1302_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_mk_string_unchecked("outputEncoding", 14, 14);
v___x_1312_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1298_, v_outputEncoding_1303_);
v___x_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_mk_string_unchecked("outputLength", 12, 12);
v___x_1315_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1299_, v_outputLength_1304_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_unsigned_to_nat(4u);
v___x_1318_ = lean_mk_empty_array_with_capacity(v___x_1317_);
v___x_1319_ = lean_array_push(v___x_1318_, v___x_1307_);
v___x_1320_ = lean_array_push(v___x_1319_, v___x_1310_);
v___x_1321_ = lean_array_push(v___x_1320_, v___x_1313_);
v___x_1322_ = lean_array_push(v___x_1321_, v___x_1316_);
v___x_1323_ = l_Lasm_JS_Web_Internal_fields(v___x_1322_);
lean_dec_ref(v___x_1322_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoHashOptions(void){
_start:
{
lean_object* v___f_1324_; lean_object* v___f_1325_; lean_object* v___f_1326_; lean_object* v___f_1327_; 
v___f_1324_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_1325_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1326_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1327_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoHashOptions___lam__0), 4, 3);
lean_closure_set(v___f_1327_, 0, v___f_1324_);
lean_closure_set(v___f_1327_, 1, v___f_1325_);
lean_closure_set(v___f_1327_, 2, v___f_1326_);
return v___f_1327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorIdx(lean_object* v_x_1328_){
_start:
{
if (lean_obj_tag(v_x_1328_) == 0)
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_unsigned_to_nat(0u);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_unsigned_to_nat(1u);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorIdx___boxed(lean_object* v_x_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorIdx(v_x_1331_);
lean_dec_ref(v_x_1331_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(lean_object* v_t_1333_, lean_object* v_k_1334_){
_start:
{
lean_object* v_value_1335_; lean_object* v___x_1336_; 
v_value_1335_ = lean_ctor_get(v_t_1333_, 0);
lean_inc_ref(v_value_1335_);
lean_dec_ref(v_t_1333_);
v___x_1336_ = lean_apply_1(v_k_1334_, v_value_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim(lean_object* v_motive_1337_, lean_object* v_ctorIdx_1338_, lean_object* v_t_1339_, lean_object* v_h_1340_, lean_object* v_k_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(v_t_1339_, v_k_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___boxed(lean_object* v_motive_1343_, lean_object* v_ctorIdx_1344_, lean_object* v_t_1345_, lean_object* v_h_1346_, lean_object* v_k_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim(v_motive_1343_, v_ctorIdx_1344_, v_t_1345_, v_h_1346_, v_k_1347_);
lean_dec(v_ctorIdx_1344_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_hashOptions_elim___redArg(lean_object* v_t_1349_, lean_object* v_hashOptions_1350_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(v_t_1349_, v_hashOptions_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_hashOptions_elim(lean_object* v_motive_1352_, lean_object* v_t_1353_, lean_object* v_h_1354_, lean_object* v_hashOptions_1355_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(v_t_1353_, v_hashOptions_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_domString_elim___redArg(lean_object* v_t_1357_, lean_object* v_domString_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(v_t_1357_, v_domString_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_domString_elim(lean_object* v_motive_1360_, lean_object* v_t_1361_, lean_object* v_h_1362_, lean_object* v_domString_1363_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = l_Lasm_JS_Node_crypto_HashOptionsOrDOMString_ctorElim___redArg(v_t_1361_, v_domString_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoHashOptionsOrDOMString___lam__0(lean_object* v_x_1365_){
_start:
{
if (lean_obj_tag(v_x_1365_) == 0)
{
lean_object* v_value_1366_; lean_object* v_customization_1367_; lean_object* v_functionName_1368_; lean_object* v_outputEncoding_1369_; lean_object* v_outputLength_1370_; lean_object* v___f_1371_; lean_object* v___f_1372_; lean_object* v___f_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v_value_1366_ = lean_ctor_get(v_x_1365_, 0);
lean_inc_ref(v_value_1366_);
lean_dec_ref_known(v_x_1365_, 1);
v_customization_1367_ = lean_ctor_get(v_value_1366_, 0);
lean_inc(v_customization_1367_);
v_functionName_1368_ = lean_ctor_get(v_value_1366_, 1);
lean_inc(v_functionName_1368_);
v_outputEncoding_1369_ = lean_ctor_get(v_value_1366_, 2);
lean_inc(v_outputEncoding_1369_);
v_outputLength_1370_ = lean_ctor_get(v_value_1366_, 3);
lean_inc(v_outputLength_1370_);
lean_dec_ref(v_value_1366_);
v___f_1371_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_1372_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1373_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___x_1374_ = lean_mk_string_unchecked("customization", 13, 13);
lean_inc_ref(v___f_1371_);
v___x_1375_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1371_, v_customization_1367_);
v___x_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = lean_mk_string_unchecked("functionName", 12, 12);
v___x_1378_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1371_, v_functionName_1368_);
v___x_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1377_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = lean_mk_string_unchecked("outputEncoding", 14, 14);
v___x_1381_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1372_, v_outputEncoding_1369_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1380_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_mk_string_unchecked("outputLength", 12, 12);
v___x_1384_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1373_, v_outputLength_1370_);
v___x_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_unsigned_to_nat(4u);
v___x_1387_ = lean_mk_empty_array_with_capacity(v___x_1386_);
v___x_1388_ = lean_array_push(v___x_1387_, v___x_1376_);
v___x_1389_ = lean_array_push(v___x_1388_, v___x_1379_);
v___x_1390_ = lean_array_push(v___x_1389_, v___x_1382_);
v___x_1391_ = lean_array_push(v___x_1390_, v___x_1385_);
v___x_1392_ = l_Lasm_JS_Web_Internal_fields(v___x_1391_);
lean_dec_ref(v___x_1391_);
return v___x_1392_;
}
else
{
lean_object* v_value_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
v_value_1393_ = lean_ctor_get(v_x_1365_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_x_1365_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v_x_1365_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_value_1393_);
lean_dec(v_x_1365_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set_tag(v___x_1395_, 4);
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_value_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeCryptoHashOptionsCryptoHashOptionsOrDOMString___lam__0(lean_object* v_value_1402_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_value_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringCryptoHashOptionsOrDOMString___lam__0(lean_object* v_value_1405_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1406_, 0, v_value_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorIdx(lean_object* v_x_1408_){
_start:
{
switch(lean_obj_tag(v_x_1408_))
{
case 0:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_unsigned_to_nat(0u);
return v___x_1409_;
}
case 1:
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_unsigned_to_nat(1u);
return v___x_1410_;
}
default: 
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_unsigned_to_nat(2u);
return v___x_1411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorIdx___boxed(lean_object* v_x_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorIdx(v_x_1412_);
lean_dec_ref(v_x_1412_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(lean_object* v_t_1414_, lean_object* v_k_1415_){
_start:
{
if (lean_obj_tag(v_t_1414_) == 2)
{
lean_object* v_value_1416_; lean_object* v___x_1417_; 
v_value_1416_ = lean_ctor_get(v_t_1414_, 0);
lean_inc(v_value_1416_);
lean_dec_ref_known(v_t_1414_, 1);
v___x_1417_ = lean_apply_1(v_k_1415_, v_value_1416_);
return v___x_1417_;
}
else
{
lean_object* v_value_1418_; lean_object* v___x_1419_; 
v_value_1418_ = lean_ctor_get(v_t_1414_, 0);
lean_inc_ref(v_value_1418_);
lean_dec_ref(v_t_1414_);
v___x_1419_ = lean_apply_1(v_k_1415_, v_value_1418_);
return v___x_1419_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim(lean_object* v_motive_1420_, lean_object* v_ctorIdx_1421_, lean_object* v_t_1422_, lean_object* v_h_1423_, lean_object* v_k_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1422_, v_k_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___boxed(lean_object* v_motive_1426_, lean_object* v_ctorIdx_1427_, lean_object* v_t_1428_, lean_object* v_h_1429_, lean_object* v_k_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim(v_motive_1426_, v_ctorIdx_1427_, v_t_1428_, v_h_1429_, v_k_1430_);
lean_dec(v_ctorIdx_1427_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_domString_elim___redArg(lean_object* v_t_1432_, lean_object* v_domString_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1432_, v_domString_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_domString_elim(lean_object* v_motive_1435_, lean_object* v_t_1436_, lean_object* v_h_1437_, lean_object* v_domString_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1436_, v_domString_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_uint8Array_elim___redArg(lean_object* v_t_1440_, lean_object* v_uint8Array_1441_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1440_, v_uint8Array_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_uint8Array_elim(lean_object* v_motive_1443_, lean_object* v_t_1444_, lean_object* v_h_1445_, lean_object* v_uint8Array_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1444_, v_uint8Array_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_keyObject_elim___redArg(lean_object* v_t_1448_, lean_object* v_keyObject_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1448_, v_keyObject_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_keyObject_elim(lean_object* v_motive_1451_, lean_object* v_t_1452_, lean_object* v_h_1453_, lean_object* v_keyObject_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrKeyObject_ctorElim___redArg(v_t_1452_, v_keyObject_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_x_1456_){
_start:
{
switch(lean_obj_tag(v_x_1456_))
{
case 0:
{
lean_object* v_value_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_value_1457_ = lean_ctor_get(v_x_1456_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1456_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v_x_1456_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_value_1457_);
lean_dec(v_x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 4);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_value_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
case 1:
{
lean_object* v_value_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
v_value_1465_ = lean_ctor_get(v_x_1456_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_x_1456_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v_x_1456_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_value_1465_);
lean_dec(v_x_1456_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set_tag(v___x_1467_, 6);
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_value_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
default: 
{
lean_object* v_value_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v_value_1473_ = lean_ctor_get(v_x_1456_, 0);
lean_inc(v_value_1473_);
lean_dec_ref_known(v_x_1456_, 1);
v___x_1474_ = lean_mk_string_unchecked("", 0, 0);
v___x_1475_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_value_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
return v___x_1475_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_value_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_value_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeKeyObjectDOMStringOrUint8ArrayOrKeyObject___lam__0(lean_object* v_value_1483_){
_start:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1484_, 0, v_value_1483_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options___lam__0(lean_object* v___f_1486_, lean_object* v_d_1487_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1488_ = lean_mk_string_unchecked("passphrase", 10, 10);
v___x_1489_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1486_, v_d_1487_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1488_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = lean_mk_empty_array_with_capacity(v___x_1491_);
v___x_1493_ = lean_array_push(v___x_1492_, v___x_1490_);
v___x_1494_ = l_Lasm_JS_Web_Internal_fields(v___x_1493_);
lean_dec_ref(v___x_1493_);
return v___x_1494_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options(void){
_start:
{
lean_object* v___f_1495_; lean_object* v___f_1496_; 
v___f_1495_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0), 1, 0);
v___f_1496_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options___lam__0), 2, 1);
lean_closure_set(v___f_1496_, 0, v___f_1495_);
return v___f_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options___lam__0(lean_object* v___f_1497_, lean_object* v_d_1498_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1499_ = lean_mk_string_unchecked("disableEntropyCache", 19, 19);
v___x_1500_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1497_, v_d_1498_);
v___x_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1499_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
v___x_1502_ = lean_unsigned_to_nat(1u);
v___x_1503_ = lean_mk_empty_array_with_capacity(v___x_1502_);
v___x_1504_ = lean_array_push(v___x_1503_, v___x_1501_);
v___x_1505_ = l_Lasm_JS_Web_Internal_fields(v___x_1504_);
lean_dec_ref(v___x_1504_);
return v___x_1505_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options(void){
_start:
{
lean_object* v___f_1506_; lean_object* v___f_1507_; 
v___f_1506_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1507_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options___lam__0), 2, 1);
lean_closure_set(v___f_1507_, 0, v___f_1506_);
return v___f_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptOptions___lam__0(lean_object* v___f_1508_, lean_object* v_d_1509_){
_start:
{
lean_object* v_cost_1510_; lean_object* v_blockSize_1511_; lean_object* v_parallelization_1512_; lean_object* v_N_1513_; lean_object* v_r_1514_; lean_object* v_p_1515_; lean_object* v_maxmem_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_cost_1510_ = lean_ctor_get(v_d_1509_, 0);
lean_inc(v_cost_1510_);
v_blockSize_1511_ = lean_ctor_get(v_d_1509_, 1);
lean_inc(v_blockSize_1511_);
v_parallelization_1512_ = lean_ctor_get(v_d_1509_, 2);
lean_inc(v_parallelization_1512_);
v_N_1513_ = lean_ctor_get(v_d_1509_, 3);
lean_inc(v_N_1513_);
v_r_1514_ = lean_ctor_get(v_d_1509_, 4);
lean_inc(v_r_1514_);
v_p_1515_ = lean_ctor_get(v_d_1509_, 5);
lean_inc(v_p_1515_);
v_maxmem_1516_ = lean_ctor_get(v_d_1509_, 6);
lean_inc(v_maxmem_1516_);
lean_dec_ref(v_d_1509_);
v___x_1517_ = lean_mk_string_unchecked("cost", 4, 4);
lean_inc_ref_n(v___f_1508_, 6);
v___x_1518_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_cost_1510_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_mk_string_unchecked("blockSize", 9, 9);
v___x_1521_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_blockSize_1511_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = lean_mk_string_unchecked("parallelization", 15, 15);
v___x_1524_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_parallelization_1512_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = lean_mk_string_unchecked("N", 1, 1);
v___x_1527_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_N_1513_);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = lean_mk_string_unchecked("r", 1, 1);
v___x_1530_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_r_1514_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
v___x_1532_ = lean_mk_string_unchecked("p", 1, 1);
v___x_1533_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_p_1515_);
v___x_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
v___x_1535_ = lean_mk_string_unchecked("maxmem", 6, 6);
v___x_1536_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1508_, v_maxmem_1516_);
v___x_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1535_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v___x_1538_ = lean_unsigned_to_nat(7u);
v___x_1539_ = lean_mk_empty_array_with_capacity(v___x_1538_);
v___x_1540_ = lean_array_push(v___x_1539_, v___x_1519_);
v___x_1541_ = lean_array_push(v___x_1540_, v___x_1522_);
v___x_1542_ = lean_array_push(v___x_1541_, v___x_1525_);
v___x_1543_ = lean_array_push(v___x_1542_, v___x_1528_);
v___x_1544_ = lean_array_push(v___x_1543_, v___x_1531_);
v___x_1545_ = lean_array_push(v___x_1544_, v___x_1534_);
v___x_1546_ = lean_array_push(v___x_1545_, v___x_1537_);
v___x_1547_ = l_Lasm_JS_Web_Internal_fields(v___x_1546_);
lean_dec_ref(v___x_1546_);
return v___x_1547_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoScryptOptions(void){
_start:
{
lean_object* v___f_1548_; lean_object* v___f_1549_; 
v___f_1548_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1549_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoScryptOptions___lam__0), 2, 1);
lean_closure_set(v___f_1549_, 0, v___f_1548_);
return v___f_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions___lam__0(lean_object* v___f_1550_, lean_object* v___f_1551_, lean_object* v_d_1552_){
_start:
{
lean_object* v_cost_1553_; lean_object* v_blockSize_1554_; lean_object* v_parallelization_1555_; lean_object* v_N_1556_; lean_object* v_r_1557_; lean_object* v_p_1558_; lean_object* v_maxmem_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_cost_1553_ = lean_ctor_get(v_d_1552_, 0);
lean_inc(v_cost_1553_);
v_blockSize_1554_ = lean_ctor_get(v_d_1552_, 1);
lean_inc(v_blockSize_1554_);
v_parallelization_1555_ = lean_ctor_get(v_d_1552_, 2);
lean_inc(v_parallelization_1555_);
v_N_1556_ = lean_ctor_get(v_d_1552_, 3);
lean_inc(v_N_1556_);
v_r_1557_ = lean_ctor_get(v_d_1552_, 4);
lean_inc(v_r_1557_);
v_p_1558_ = lean_ctor_get(v_d_1552_, 5);
lean_inc(v_p_1558_);
v_maxmem_1559_ = lean_ctor_get(v_d_1552_, 6);
lean_inc(v_maxmem_1559_);
lean_dec_ref(v_d_1552_);
v___x_1560_ = lean_mk_string_unchecked("cost", 4, 4);
lean_inc_ref_n(v___f_1550_, 3);
v___x_1561_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1550_, v_cost_1553_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1560_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = lean_mk_string_unchecked("blockSize", 9, 9);
v___x_1564_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1550_, v_blockSize_1554_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = lean_mk_string_unchecked("parallelization", 15, 15);
v___x_1567_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1550_, v_parallelization_1555_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = lean_mk_string_unchecked("N", 1, 1);
lean_inc_ref_n(v___f_1551_, 2);
v___x_1570_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1551_, v_N_1556_);
v___x_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = lean_mk_string_unchecked("r", 1, 1);
v___x_1573_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1551_, v_r_1557_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = lean_mk_string_unchecked("p", 1, 1);
v___x_1576_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1551_, v_p_1558_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = lean_mk_string_unchecked("maxmem", 6, 6);
v___x_1579_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1550_, v_maxmem_1559_);
v___x_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1578_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = lean_unsigned_to_nat(7u);
v___x_1582_ = lean_mk_empty_array_with_capacity(v___x_1581_);
v___x_1583_ = lean_array_push(v___x_1582_, v___x_1562_);
v___x_1584_ = lean_array_push(v___x_1583_, v___x_1565_);
v___x_1585_ = lean_array_push(v___x_1584_, v___x_1568_);
v___x_1586_ = lean_array_push(v___x_1585_, v___x_1571_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1574_);
v___x_1588_ = lean_array_push(v___x_1587_, v___x_1577_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1580_);
v___x_1590_ = l_Lasm_JS_Web_Internal_fields(v___x_1589_);
lean_dec_ref(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions(void){
_start:
{
lean_object* v___f_1591_; lean_object* v___f_1592_; lean_object* v___f_1593_; 
v___f_1591_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1592_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_1593_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions___lam__0), 3, 2);
lean_closure_set(v___f_1593_, 0, v___f_1591_);
lean_closure_set(v___f_1593_, 1, v___f_1592_);
return v___f_1593_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Webcrypto(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Net(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Fs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Crypto(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Webcrypto(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSCertificate = _init_l_Lasm_JS_Node_instFromJSCertificate();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSCertificate);
l_Lasm_JS_Node_instFromJSCipheriv = _init_l_Lasm_JS_Node_instFromJSCipheriv();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSCipheriv);
l_Lasm_JS_Node_instFromJSDecipheriv = _init_l_Lasm_JS_Node_instFromJSDecipheriv();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDecipheriv);
l_Lasm_JS_Node_instFromJSDiffieHellman = _init_l_Lasm_JS_Node_instFromJSDiffieHellman();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDiffieHellman);
l_Lasm_JS_Node_instFromJSDiffieHellmanGroup = _init_l_Lasm_JS_Node_instFromJSDiffieHellmanGroup();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDiffieHellmanGroup);
l_Lasm_JS_Node_instFromJSECDH = _init_l_Lasm_JS_Node_instFromJSECDH();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSECDH);
l_Lasm_JS_Node_instFromJSHash = _init_l_Lasm_JS_Node_instFromJSHash();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSHash);
l_Lasm_JS_Node_instFromJSHmac = _init_l_Lasm_JS_Node_instFromJSHmac();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSHmac);
l_Lasm_JS_Node_instFromJSKeyObject = _init_l_Lasm_JS_Node_instFromJSKeyObject();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSKeyObject);
l_Lasm_JS_Node_instFromJSMac = _init_l_Lasm_JS_Node_instFromJSMac();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSMac);
l_Lasm_JS_Node_instFromJSSign = _init_l_Lasm_JS_Node_instFromJSSign();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSSign);
l_Lasm_JS_Node_instFromJSVerify = _init_l_Lasm_JS_Node_instFromJSVerify();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSVerify);
l_Lasm_JS_Node_instFromJSX509Certificate = _init_l_Lasm_JS_Node_instFromJSX509Certificate();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSX509Certificate);
l_Lasm_JS_Node_instToJSCipherivSetAADOptions = _init_l_Lasm_JS_Node_instToJSCipherivSetAADOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCipherivSetAADOptions);
l_Lasm_JS_Node_instToJSDecipherivSetAADOptions = _init_l_Lasm_JS_Node_instToJSDecipherivSetAADOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSDecipherivSetAADOptions);
l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions = _init_l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSX509CertificateCheckEmailOptions);
l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions = _init_l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSX509CertificateCheckHostOptions);
l_Lasm_JS_Node_instToJSCryptoArgon2Parameters = _init_l_Lasm_JS_Node_instToJSCryptoArgon2Parameters();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoArgon2Parameters);
l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters = _init_l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoArgon2SyncParameters);
l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions = _init_l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCheckPrimeOptions);
l_Lasm_JS_Node_instToJSCryptoCheckPrimeSyncOptions = _init_l_Lasm_JS_Node_instToJSCryptoCheckPrimeSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCheckPrimeSyncOptions);
l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions = _init_l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCreateCipherivOptions);
l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions = _init_l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCreateDecipherivOptions);
l_Lasm_JS_Node_instToJSCryptoCreateHashOptions = _init_l_Lasm_JS_Node_instToJSCryptoCreateHashOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCreateHashOptions);
l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions = _init_l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCreateHmacOptions);
l_Lasm_JS_Node_instToJSCryptoCreateMacOptions = _init_l_Lasm_JS_Node_instToJSCryptoCreateMacOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoCreateMacOptions);
l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions = _init_l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoDiffieHellmanOptions);
l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions = _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGenerateKeyOptions);
l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions = _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairOptions);
l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions = _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGenerateKeyPairSyncOptions);
l_Lasm_JS_Node_instToJSCryptoGenerateKeySyncOptions = _init_l_Lasm_JS_Node_instToJSCryptoGenerateKeySyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGenerateKeySyncOptions);
l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions = _init_l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGeneratePrimeOptions);
l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions = _init_l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGeneratePrimeSyncOptions);
l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions = _init_l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoGetCipherInfoOptions);
l_Lasm_JS_Node_instToJSCryptoHashOptions = _init_l_Lasm_JS_Node_instToJSCryptoHashOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoHashOptions);
l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options = _init_l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoParsePKCS12Options);
l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options = _init_l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoRandomUUIDv7Options);
l_Lasm_JS_Node_instToJSCryptoScryptOptions = _init_l_Lasm_JS_Node_instToJSCryptoScryptOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoScryptOptions);
l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions = _init_l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSCryptoScryptSyncOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
