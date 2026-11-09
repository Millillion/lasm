// Lean compiler output
// Module: Lasm.JS.Web.Compression
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Streams
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCompressionStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCompressionStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCompressionStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCompressionStream = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSCompressionStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCompressionStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.CompressionStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCompressionStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDecompressionStream = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.DecompressionStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDecompressionStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDecompressionStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDecompressionStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSDecompressionStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSDecompressionStream___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqCompressionFormat_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqCompressionFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqCompressionFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqCompressionFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqCompressionFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqCompressionFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqCompressionFormat = (const lean_object*)&l_Lasm_JS_Web_instBEqCompressionFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.CompressionFormat.brotli"};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.CompressionFormat.deflate"};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.CompressionFormat.deflateRaw"};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.CompressionFormat.gzip"};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8;
static lean_once_cell_t l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprCompressionFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprCompressionFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprCompressionFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprCompressionFormat = (const lean_object*)&l_Lasm_JS_Web_instReprCompressionFormat___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedCompressionFormat_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedCompressionFormat;
static const lean_string_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "brotli"};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "deflate"};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "deflate-raw"};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "gzip"};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCompressionFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCompressionFormat = (const lean_object*)&l_Lasm_JS_Web_instToJSCompressionFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSCompressionFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCompressionFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.CompressionFormat"};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompressionFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompressionFormat___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompressionStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.CompressionStream.new"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_CompressionStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_CompressionStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CompressionStream"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_CompressionStream_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CompressionStream_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompressionStream_readable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readable"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_readable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_readable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompressionStream_writable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "writable"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_writable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_writable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DecompressionStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.DecompressionStream.new"};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DecompressionStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "DecompressionStream"};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_DecompressionStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionStream___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionStream___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSCompressionStream___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx(uint8_t v_x_29_){
_start:
{
switch(v_x_29_)
{
case 0:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(0u);
return v___x_30_;
}
case 1:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(1u);
return v___x_31_;
}
case 2:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(2u);
return v___x_32_;
}
default: 
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(3u);
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___boxed(lean_object* v_x_34_){
_start:
{
uint8_t v_x_boxed_35_; lean_object* v_res_36_; 
v_x_boxed_35_ = lean_unbox(v_x_34_);
v_res_36_ = l_Lasm_JS_Web_CompressionFormat_ctorIdx(v_x_boxed_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg(lean_object* v_k_37_){
_start:
{
lean_inc(v_k_37_);
return v_k_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg___boxed(lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg(v_k_38_);
lean_dec(v_k_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim(lean_object* v_motive_40_, lean_object* v_ctorIdx_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_k_44_){
_start:
{
lean_inc(v_k_44_);
return v_k_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___boxed(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
uint8_t v_t_boxed_50_; lean_object* v_res_51_; 
v_t_boxed_50_ = lean_unbox(v_t_47_);
v_res_51_ = l_Lasm_JS_Web_CompressionFormat_ctorElim(v_motive_45_, v_ctorIdx_46_, v_t_boxed_50_, v_h_48_, v_k_49_);
lean_dec(v_k_49_);
lean_dec(v_ctorIdx_46_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg(lean_object* v_brotli_52_){
_start:
{
lean_inc(v_brotli_52_);
return v_brotli_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg___boxed(lean_object* v_brotli_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg(v_brotli_53_);
lean_dec(v_brotli_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim(lean_object* v_motive_55_, uint8_t v_t_56_, lean_object* v_h_57_, lean_object* v_brotli_58_){
_start:
{
lean_inc(v_brotli_58_);
return v_brotli_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___boxed(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_brotli_62_){
_start:
{
uint8_t v_t_boxed_63_; lean_object* v_res_64_; 
v_t_boxed_63_ = lean_unbox(v_t_60_);
v_res_64_ = l_Lasm_JS_Web_CompressionFormat_brotli_elim(v_motive_59_, v_t_boxed_63_, v_h_61_, v_brotli_62_);
lean_dec(v_brotli_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg(lean_object* v_deflate_65_){
_start:
{
lean_inc(v_deflate_65_);
return v_deflate_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg___boxed(lean_object* v_deflate_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg(v_deflate_66_);
lean_dec(v_deflate_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim(lean_object* v_motive_68_, uint8_t v_t_69_, lean_object* v_h_70_, lean_object* v_deflate_71_){
_start:
{
lean_inc(v_deflate_71_);
return v_deflate_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___boxed(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_deflate_75_){
_start:
{
uint8_t v_t_boxed_76_; lean_object* v_res_77_; 
v_t_boxed_76_ = lean_unbox(v_t_73_);
v_res_77_ = l_Lasm_JS_Web_CompressionFormat_deflate_elim(v_motive_72_, v_t_boxed_76_, v_h_74_, v_deflate_75_);
lean_dec(v_deflate_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg(lean_object* v_deflateRaw_78_){
_start:
{
lean_inc(v_deflateRaw_78_);
return v_deflateRaw_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg___boxed(lean_object* v_deflateRaw_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg(v_deflateRaw_79_);
lean_dec(v_deflateRaw_79_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim(lean_object* v_motive_81_, uint8_t v_t_82_, lean_object* v_h_83_, lean_object* v_deflateRaw_84_){
_start:
{
lean_inc(v_deflateRaw_84_);
return v_deflateRaw_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___boxed(lean_object* v_motive_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_deflateRaw_88_){
_start:
{
uint8_t v_t_boxed_89_; lean_object* v_res_90_; 
v_t_boxed_89_ = lean_unbox(v_t_86_);
v_res_90_ = l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim(v_motive_85_, v_t_boxed_89_, v_h_87_, v_deflateRaw_88_);
lean_dec(v_deflateRaw_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg(lean_object* v_gzip_91_){
_start:
{
lean_inc(v_gzip_91_);
return v_gzip_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg___boxed(lean_object* v_gzip_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg(v_gzip_92_);
lean_dec(v_gzip_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim(lean_object* v_motive_94_, uint8_t v_t_95_, lean_object* v_h_96_, lean_object* v_gzip_97_){
_start:
{
lean_inc(v_gzip_97_);
return v_gzip_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___boxed(lean_object* v_motive_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_gzip_101_){
_start:
{
uint8_t v_t_boxed_102_; lean_object* v_res_103_; 
v_t_boxed_102_ = lean_unbox(v_t_99_);
v_res_103_ = l_Lasm_JS_Web_CompressionFormat_gzip_elim(v_motive_98_, v_t_boxed_102_, v_h_100_, v_gzip_101_);
lean_dec(v_gzip_101_);
return v_res_103_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqCompressionFormat_beq(uint8_t v_x_104_, uint8_t v_y_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = l_Lasm_JS_Web_CompressionFormat_ctorIdx(v_x_104_);
v___x_107_ = l_Lasm_JS_Web_CompressionFormat_ctorIdx(v_y_105_);
v___x_108_ = lean_nat_dec_eq(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqCompressionFormat_beq___boxed(lean_object* v_x_109_, lean_object* v_y_110_){
_start:
{
uint8_t v_x_21__boxed_111_; uint8_t v_y_22__boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_21__boxed_111_ = lean_unbox(v_x_109_);
v_y_22__boxed_112_ = lean_unbox(v_y_110_);
v_res_113_ = l_Lasm_JS_Web_instBEqCompressionFormat_beq(v_x_21__boxed_111_, v_y_22__boxed_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(2u);
v___x_130_ = lean_nat_to_int(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_to_int(v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr(uint8_t v_x_133_, lean_object* v_prec_134_){
_start:
{
lean_object* v___y_136_; lean_object* v___y_143_; lean_object* v___y_150_; lean_object* v___y_157_; 
switch(v_x_133_)
{
case 0:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = lean_nat_dec_le(v___x_163_, v_prec_134_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8);
v___y_136_ = v___x_165_;
goto v___jp_135_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9);
v___y_136_ = v___x_166_;
goto v___jp_135_;
}
}
case 1:
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1024u);
v___x_168_ = lean_nat_dec_le(v___x_167_, v_prec_134_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8);
v___y_143_ = v___x_169_;
goto v___jp_142_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9);
v___y_143_ = v___x_170_;
goto v___jp_142_;
}
}
case 2:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_134_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8);
v___y_150_ = v___x_173_;
goto v___jp_149_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9);
v___y_150_ = v___x_174_;
goto v___jp_149_;
}
}
default: 
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1024u);
v___x_176_ = lean_nat_dec_le(v___x_175_, v_prec_134_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__8);
v___y_157_ = v___x_177_;
goto v___jp_156_;
}
else
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9, &l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9_once, _init_l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__9);
v___y_157_ = v___x_178_;
goto v___jp_156_;
}
}
}
v___jp_135_:
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__1));
lean_inc(v___y_136_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_134_);
return v___x_141_;
}
v___jp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_144_ = ((lean_object*)(l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__3));
lean_inc(v___y_143_);
v___x_145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_145_, 0, v___y_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = 0;
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_146_);
v___x_148_ = l_Repr_addAppParen(v___x_147_, v_prec_134_);
return v___x_148_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_151_ = ((lean_object*)(l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__5));
lean_inc(v___y_150_);
v___x_152_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_152_, 0, v___y_150_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = 0;
v___x_154_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*1, v___x_153_);
v___x_155_ = l_Repr_addAppParen(v___x_154_, v_prec_134_);
return v___x_155_;
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_158_ = ((lean_object*)(l_Lasm_JS_Web_instReprCompressionFormat_repr___closed__7));
lean_inc(v___y_157_);
v___x_159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_159_, 0, v___y_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = 0;
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
v___x_162_ = l_Repr_addAppParen(v___x_161_, v_prec_134_);
return v___x_162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprCompressionFormat_repr___boxed(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
uint8_t v_x_225__boxed_181_; lean_object* v_res_182_; 
v_x_225__boxed_181_ = lean_unbox(v_x_179_);
v_res_182_ = l_Lasm_JS_Web_instReprCompressionFormat_repr(v_x_225__boxed_181_, v_prec_180_);
lean_dec(v_prec_180_);
return v_res_182_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedCompressionFormat_default(void){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = 0;
return v___x_185_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedCompressionFormat(void){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = 0;
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0(uint8_t v_x_199_){
_start:
{
switch(v_x_199_)
{
case 0:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
return v___x_200_;
}
case 1:
{
lean_object* v___x_201_; 
v___x_201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
return v___x_201_;
}
case 2:
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
return v___x_202_;
}
default: 
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___boxed(lean_object* v_x_204_){
_start:
{
uint8_t v_x_74__boxed_205_; lean_object* v_res_206_; 
v_x_74__boxed_205_ = lean_unbox(v_x_204_);
v_res_206_ = l_Lasm_JS_Web_instToJSCompressionFormat___lam__0(v_x_74__boxed_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0(lean_object* v_x_224_){
_start:
{
if (lean_obj_tag(v_x_224_) == 4)
{
lean_object* v_s_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_s_227_ = lean_ctor_get(v_x_224_, 0);
v___x_228_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__0));
v___x_229_ = lean_string_dec_eq(v_s_227_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__2));
v___x_231_ = lean_string_dec_eq(v_s_227_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__4));
v___x_233_ = lean_string_dec_eq(v_s_227_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__6));
v___x_235_ = lean_string_dec_eq(v_s_227_, v___x_234_);
if (v___x_235_ == 0)
{
goto v___jp_225_;
}
else
{
lean_object* v___x_236_; 
v___x_236_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__2));
return v___x_236_;
}
}
else
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__3));
return v___x_237_;
}
}
else
{
lean_object* v___x_238_; 
v___x_238_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__4));
return v___x_238_;
}
}
else
{
lean_object* v___x_239_; 
v___x_239_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__5));
return v___x_239_;
}
}
else
{
goto v___jp_225_;
}
v___jp_225_:
{
lean_object* v___x_226_; 
v___x_226_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___closed__1));
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0___boxed(lean_object* v_x_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lasm_JS_Web_instFromJSCompressionFormat___lam__0(v_x_240_);
lean_dec(v_x_240_);
return v_res_241_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
v___x_253_ = lean_string_utf8_byte_size(v___x_252_);
return v___x_253_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3);
v___x_256_ = lean_nat_dec_eq(v___x_255_, v___x_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_261_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__8));
v___x_262_ = lean_unsigned_to_nat(46u);
v___x_263_ = lean_unsigned_to_nat(193u);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7));
v___x_265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6));
v___x_266_ = l_mkPanicMessageWithDecl(v___x_265_, v___x_264_, v___x_263_, v___x_262_, v___x_261_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(lean_object* v_context_268_, lean_object* v_d_269_){
_start:
{
lean_object* v___y_272_; lean_object* v___y_273_; 
if (lean_obj_tag(v_d_269_) == 9)
{
lean_object* v_value_277_; lean_object* v___x_278_; 
v_value_277_ = lean_ctor_get(v_d_269_, 0);
lean_inc(v_value_277_);
lean_dec_ref_known(v_d_269_, 2);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v_value_277_);
return v___x_278_;
}
else
{
lean_object* v___x_279_; lean_object* v_received_281_; 
v___x_279_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
if (lean_obj_tag(v_d_269_) == 9)
{
lean_object* v_value_295_; lean_object* v_description_296_; uint8_t v___x_297_; 
v_value_295_ = lean_ctor_get(v_d_269_, 0);
v_description_296_ = lean_ctor_get(v_d_269_, 1);
v___x_297_ = lean_string_dec_eq(v_description_296_, v___x_279_);
if (v___x_297_ == 0)
{
goto v___jp_293_;
}
else
{
uint32_t v___x_298_; uint64_t v___x_299_; lean_object* v___x_300_; uint32_t v___x_301_; lean_object* v___x_302_; 
lean_inc_n(v_value_295_, 2);
lean_dec_ref_known(v_d_269_, 2);
v___x_298_ = 206;
v___x_299_ = 0ULL;
v___x_300_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_300_, 0, v_value_295_);
lean_ctor_set(v___x_300_, 1, v___x_279_);
v___x_301_ = lasm_js_value_handle(v_value_295_);
lean_dec(v_value_295_);
v___x_302_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_298_, v___x_299_, v___x_300_, v___x_301_);
lean_dec_ref_known(v___x_300_, 2);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; uint8_t v___x_304_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_303_);
lean_dec_ref_known(v___x_302_, 1);
v___x_304_ = lean_string_validate_utf8(v_a_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec(v_a_303_);
v___x_305_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9);
v___x_306_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_305_);
v_received_281_ = v___x_306_;
goto v___jp_280_;
}
else
{
lean_object* v___x_307_; 
v___x_307_ = lean_string_from_utf8_unchecked(v_a_303_);
v_received_281_ = v___x_307_;
goto v___jp_280_;
}
}
else
{
lean_object* v___x_308_; 
lean_dec_ref_known(v___x_302_, 1);
v___x_308_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10));
v_received_281_ = v___x_308_;
goto v___jp_280_;
}
}
}
else
{
goto v___jp_293_;
}
v___jp_280_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_282_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_283_ = lean_string_append(v___x_282_, v_context_268_);
v___x_284_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_285_ = lean_string_append(v___x_283_, v___x_284_);
v___x_286_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionStream___closed__1));
v___x_287_ = lean_string_append(v___x_285_, v___x_286_);
v___x_288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
v___x_290_ = lean_string_append(v___x_289_, v_received_281_);
lean_dec_ref(v_received_281_);
v___x_291_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5));
v___y_272_ = v___x_290_;
v___y_273_ = v___x_292_;
goto v___jp_271_;
}
else
{
v___y_272_ = v___x_290_;
v___y_273_ = v___x_279_;
goto v___jp_271_;
}
}
v___jp_293_:
{
lean_object* v___x_294_; 
v___x_294_ = l_Lasm_JS_Data_describe(v_d_269_);
v_received_281_ = v___x_294_;
goto v___jp_280_;
}
}
v___jp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_string_append(v___y_272_, v___y_273_);
v___x_275_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
v___x_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_309_, lean_object* v_d_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v_context_309_, v_d_310_);
lean_dec_ref(v_context_309_);
return v_res_312_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_314_; uint64_t v___x_315_; 
v___x_314_ = 0;
v___x_315_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(lean_object* v_b_316_, lean_object* v_args_317_, uint8_t v_await_318_){
_start:
{
uint64_t v___y_321_; uint64_t v___y_322_; uint64_t v___x_365_; uint64_t v___y_367_; 
v___x_365_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_318_ == 0)
{
uint64_t v___x_372_; 
v___x_372_ = 0ULL;
v___y_367_ = v___x_372_;
goto v___jp_366_;
}
else
{
uint64_t v___x_373_; 
v___x_373_ = 2ULL;
v___y_367_ = v___x_373_;
goto v___jp_366_;
}
v___jp_320_:
{
uint64_t v_flags_323_; uint32_t v___x_324_; lean_object* v___x_325_; uint32_t v___x_326_; lean_object* v___x_327_; 
v_flags_323_ = lean_uint64_lor(v___y_321_, v___y_322_);
v___x_324_ = 214;
v___x_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_316_, v_args_317_);
v___x_326_ = 0;
v___x_327_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_324_, v_flags_323_, v___x_325_, v___x_326_);
lean_dec(v___x_325_);
if (lean_obj_tag(v___x_327_) == 0)
{
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_327_, 1);
v___x_329_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_328_);
lean_dec(v_a_328_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_316_);
v___x_332_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v___x_331_, v_a_330_);
lean_dec_ref(v___x_331_);
return v___x_332_;
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
v_a_333_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_329_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_329_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_a_341_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_327_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_327_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 1);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_364_; 
v_a_349_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_364_ == 0)
{
v___x_351_ = v___x_327_;
v_isShared_352_ = v_isSharedCheck_364_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_327_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_364_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_316_);
v___x_355_ = lean_string_append(v___x_353_, v___x_354_);
lean_dec_ref(v___x_354_);
v___x_356_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
v___x_358_ = lean_io_error_to_string(v_a_349_);
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
lean_dec_ref(v___x_358_);
v___x_360_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 0, v___x_360_);
v___x_362_ = v___x_351_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
v___jp_366_:
{
uint8_t v_construct_368_; uint64_t v___x_369_; 
v_construct_368_ = lean_ctor_get_uint8(v_b_316_, sizeof(void*)*4);
v___x_369_ = lean_uint64_lor(v___x_365_, v___y_367_);
if (v_construct_368_ == 0)
{
uint64_t v___x_370_; 
v___x_370_ = 0ULL;
v___y_321_ = v___x_369_;
v___y_322_ = v___x_370_;
goto v___jp_320_;
}
else
{
uint64_t v___x_371_; 
v___x_371_ = 4ULL;
v___y_321_ = v___x_369_;
v___y_322_ = v___x_371_;
goto v___jp_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___boxed(lean_object* v_b_374_, lean_object* v_args_375_, lean_object* v_await_376_, lean_object* v_a_377_){
_start:
{
uint8_t v_await_boxed_378_; lean_object* v_res_379_; 
v_await_boxed_378_ = lean_unbox(v_await_376_);
v_res_379_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v_b_374_, v_args_375_, v_await_boxed_378_);
lean_dec_ref(v_b_374_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new(uint8_t v_format_389_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___y_394_; 
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_new___closed__3));
switch(v_format_389_)
{
case 0:
{
lean_object* v___x_400_; 
v___x_400_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_394_ = v___x_400_;
goto v___jp_393_;
}
case 1:
{
lean_object* v___x_401_; 
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_394_ = v___x_401_;
goto v___jp_393_;
}
case 2:
{
lean_object* v___x_402_; 
v___x_402_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_394_ = v___x_402_;
goto v___jp_393_;
}
default: 
{
lean_object* v___x_403_; 
v___x_403_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_394_ = v___x_403_;
goto v___jp_393_;
}
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; lean_object* v___x_399_; 
v___x_395_ = lean_mk_empty_array_with_capacity(v___x_391_);
lean_inc(v___y_394_);
v___x_396_ = lean_array_push(v___x_395_, v___y_394_);
v___x_397_ = l_Lasm_JS_Web_Support_args(v___x_396_);
v___x_398_ = 0;
v___x_399_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v___x_392_, v___x_397_, v___x_398_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new___boxed(lean_object* v_format_404_, lean_object* v_a_405_){
_start:
{
uint8_t v_format_boxed_406_; lean_object* v_res_407_; 
v_format_boxed_406_ = lean_unbox(v_format_404_);
v_res_407_ = l_Lasm_JS_Web_CompressionStream_new(v_format_boxed_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable(lean_object* v_self_409_){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_412_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(v_self_409_, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable___boxed(lean_object* v_self_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lasm_JS_Web_CompressionStream_readable(v_self_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable(lean_object* v_self_417_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_420_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(v_self_417_, v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable___boxed(lean_object* v_self_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lasm_JS_Web_CompressionStream_writable(v_self_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(lean_object* v_context_424_, lean_object* v_d_425_){
_start:
{
lean_object* v___y_428_; lean_object* v___y_429_; 
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_433_; lean_object* v___x_434_; 
v_value_433_ = lean_ctor_get(v_d_425_, 0);
lean_inc(v_value_433_);
lean_dec_ref_known(v_d_425_, 2);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_value_433_);
return v___x_434_;
}
else
{
lean_object* v___x_435_; lean_object* v_received_437_; 
v___x_435_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_451_; lean_object* v_description_452_; uint8_t v___x_453_; 
v_value_451_ = lean_ctor_get(v_d_425_, 0);
v_description_452_ = lean_ctor_get(v_d_425_, 1);
v___x_453_ = lean_string_dec_eq(v_description_452_, v___x_435_);
if (v___x_453_ == 0)
{
goto v___jp_449_;
}
else
{
uint32_t v___x_454_; uint64_t v___x_455_; lean_object* v___x_456_; uint32_t v___x_457_; lean_object* v___x_458_; 
lean_inc_n(v_value_451_, 2);
lean_dec_ref_known(v_d_425_, 2);
v___x_454_ = 206;
v___x_455_ = 0ULL;
v___x_456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_456_, 0, v_value_451_);
lean_ctor_set(v___x_456_, 1, v___x_435_);
v___x_457_ = lasm_js_value_handle(v_value_451_);
lean_dec(v_value_451_);
v___x_458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_454_, v___x_455_, v___x_456_, v___x_457_);
lean_dec_ref_known(v___x_456_, 2);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; uint8_t v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = lean_string_validate_utf8(v_a_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec(v_a_459_);
v___x_461_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9);
v___x_462_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_461_);
v_received_437_ = v___x_462_;
goto v___jp_436_;
}
else
{
lean_object* v___x_463_; 
v___x_463_ = lean_string_from_utf8_unchecked(v_a_459_);
v_received_437_ = v___x_463_;
goto v___jp_436_;
}
}
else
{
lean_object* v___x_464_; 
lean_dec_ref_known(v___x_458_, 1);
v___x_464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10));
v_received_437_ = v___x_464_;
goto v___jp_436_;
}
}
}
else
{
goto v___jp_449_;
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_439_ = lean_string_append(v___x_438_, v_context_424_);
v___x_440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
v___x_442_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0));
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_445_ = lean_string_append(v___x_443_, v___x_444_);
v___x_446_ = lean_string_append(v___x_445_, v_received_437_);
lean_dec_ref(v_received_437_);
v___x_447_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
v___x_448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5));
v___y_428_ = v___x_446_;
v___y_429_ = v___x_448_;
goto v___jp_427_;
}
else
{
v___y_428_ = v___x_446_;
v___y_429_ = v___x_435_;
goto v___jp_427_;
}
}
v___jp_449_:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_JS_Data_describe(v_d_425_);
v_received_437_ = v___x_450_;
goto v___jp_436_;
}
}
v___jp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_string_append(v___y_428_, v___y_429_);
v___x_431_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_465_, lean_object* v_d_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v_context_465_, v_d_466_);
lean_dec_ref(v_context_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(lean_object* v_b_469_, lean_object* v_args_470_, uint8_t v_await_471_){
_start:
{
uint64_t v___y_474_; uint64_t v___y_475_; uint64_t v___x_518_; uint64_t v___y_520_; 
v___x_518_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_471_ == 0)
{
uint64_t v___x_525_; 
v___x_525_ = 0ULL;
v___y_520_ = v___x_525_;
goto v___jp_519_;
}
else
{
uint64_t v___x_526_; 
v___x_526_ = 2ULL;
v___y_520_ = v___x_526_;
goto v___jp_519_;
}
v___jp_473_:
{
uint64_t v_flags_476_; uint32_t v___x_477_; lean_object* v___x_478_; uint32_t v___x_479_; lean_object* v___x_480_; 
v_flags_476_ = lean_uint64_lor(v___y_474_, v___y_475_);
v___x_477_ = 214;
v___x_478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_469_, v_args_470_);
v___x_479_ = 0;
v___x_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_477_, v_flags_476_, v___x_478_, v___x_479_);
lean_dec(v___x_478_);
if (lean_obj_tag(v___x_480_) == 0)
{
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_481_);
lean_dec(v_a_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_469_);
v___x_485_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v___x_484_, v_a_483_);
lean_dec_ref(v___x_484_);
return v___x_485_;
}
else
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_a_486_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_482_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_482_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_a_494_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_480_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_480_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set_tag(v___x_496_, 1);
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_517_; 
v_a_502_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_517_ == 0)
{
v___x_504_ = v___x_480_;
v_isShared_505_ = v_isSharedCheck_517_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_480_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_517_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_506_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_507_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_469_);
v___x_508_ = lean_string_append(v___x_506_, v___x_507_);
lean_dec_ref(v___x_507_);
v___x_509_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_510_ = lean_string_append(v___x_508_, v___x_509_);
v___x_511_ = lean_io_error_to_string(v_a_502_);
v___x_512_ = lean_string_append(v___x_510_, v___x_511_);
lean_dec_ref(v___x_511_);
v___x_513_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_513_);
v___x_515_ = v___x_504_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
v___jp_519_:
{
uint8_t v_construct_521_; uint64_t v___x_522_; 
v_construct_521_ = lean_ctor_get_uint8(v_b_469_, sizeof(void*)*4);
v___x_522_ = lean_uint64_lor(v___x_518_, v___y_520_);
if (v_construct_521_ == 0)
{
uint64_t v___x_523_; 
v___x_523_ = 0ULL;
v___y_474_ = v___x_522_;
v___y_475_ = v___x_523_;
goto v___jp_473_;
}
else
{
uint64_t v___x_524_; 
v___x_524_ = 4ULL;
v___y_474_ = v___x_522_;
v___y_475_ = v___x_524_;
goto v___jp_473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0___boxed(lean_object* v_b_527_, lean_object* v_args_528_, lean_object* v_await_529_, lean_object* v_a_530_){
_start:
{
uint8_t v_await_boxed_531_; lean_object* v_res_532_; 
v_await_boxed_531_ = lean_unbox(v_await_529_);
v_res_532_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v_b_527_, v_args_528_, v_await_boxed_531_);
lean_dec_ref(v_b_527_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new(uint8_t v_format_541_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___y_546_; 
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = ((lean_object*)(l_Lasm_JS_Web_DecompressionStream_new___closed__2));
switch(v_format_541_)
{
case 0:
{
lean_object* v___x_552_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_546_ = v___x_552_;
goto v___jp_545_;
}
case 1:
{
lean_object* v___x_553_; 
v___x_553_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_546_ = v___x_553_;
goto v___jp_545_;
}
case 2:
{
lean_object* v___x_554_; 
v___x_554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_546_ = v___x_554_;
goto v___jp_545_;
}
default: 
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_546_ = v___x_555_;
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; lean_object* v___x_551_; 
v___x_547_ = lean_mk_empty_array_with_capacity(v___x_543_);
lean_inc(v___y_546_);
v___x_548_ = lean_array_push(v___x_547_, v___y_546_);
v___x_549_ = l_Lasm_JS_Web_Support_args(v___x_548_);
v___x_550_ = 0;
v___x_551_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v___x_544_, v___x_549_, v___x_550_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new___boxed(lean_object* v_format_556_, lean_object* v_a_557_){
_start:
{
uint8_t v_format_boxed_558_; lean_object* v_res_559_; 
v_format_boxed_558_ = lean_unbox(v_format_556_);
v_res_559_ = l_Lasm_JS_Web_DecompressionStream_new(v_format_boxed_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable(lean_object* v_self_560_){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_563_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(v_self_560_, v___x_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable___boxed(lean_object* v_self_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Web_DecompressionStream_readable(v_self_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable(lean_object* v_self_567_){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_570_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(v_self_567_, v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable___boxed(lean_object* v_self_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_JS_Web_DecompressionStream_writable(v_self_571_);
return v_res_573_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Compression(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instInhabitedCompressionFormat_default = _init_l_Lasm_JS_Web_instInhabitedCompressionFormat_default();
l_Lasm_JS_Web_instInhabitedCompressionFormat = _init_l_Lasm_JS_Web_instInhabitedCompressionFormat();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
