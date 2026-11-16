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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CompressionStream"};
static const lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_CompressionStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CompressionStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "DecompressionStream"};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DecompressionStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Web.DecompressionStream.new"};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_DecompressionStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_CompressionStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DecompressionStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DecompressionStream_new___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0(lean_object* v___x_249_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_249_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0___boxed(lean_object* v___x_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Lasm_JS_Web_CompressionStream_cast_x3f___lam__0(v___x_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f(lean_object* v_v_261_){
_start:
{
lean_object* v___f_263_; lean_object* v___x_264_; 
v___f_263_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_cast_x3f___closed__2));
lean_inc(v_v_261_);
v___x_264_ = l_Lasm_JS_Web_Support_isInstance(v___f_263_, v_v_261_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_278_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_278_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_278_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_278_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
uint8_t v___x_269_; 
v___x_269_ = lean_unbox(v_a_265_);
lean_dec(v_a_265_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_272_; 
lean_dec(v_v_261_);
v___x_270_ = lean_box(0);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_270_);
v___x_272_ = v___x_267_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
else
{
lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v_v_261_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_274_);
v___x_276_ = v___x_267_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_v_261_);
v_a_279_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_264_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_264_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_cast_x3f___boxed(lean_object* v_v_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lasm_JS_Web_CompressionStream_cast_x3f(v_v_287_);
return v_res_289_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
v___x_294_ = lean_string_utf8_byte_size(v___x_293_);
return v___x_294_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3);
v___x_297_ = lean_nat_dec_eq(v___x_296_, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_302_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__8));
v___x_303_ = lean_unsigned_to_nat(46u);
v___x_304_ = lean_unsigned_to_nat(193u);
v___x_305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7));
v___x_306_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6));
v___x_307_ = l_mkPanicMessageWithDecl(v___x_306_, v___x_305_, v___x_304_, v___x_303_, v___x_302_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(lean_object* v_context_309_, lean_object* v_d_310_){
_start:
{
lean_object* v___y_313_; lean_object* v___y_314_; 
if (lean_obj_tag(v_d_310_) == 9)
{
lean_object* v_value_318_; lean_object* v___x_319_; 
v_value_318_ = lean_ctor_get(v_d_310_, 0);
lean_inc(v_value_318_);
lean_dec_ref_known(v_d_310_, 2);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v_value_318_);
return v___x_319_;
}
else
{
lean_object* v___x_320_; lean_object* v_received_322_; 
v___x_320_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
if (lean_obj_tag(v_d_310_) == 9)
{
lean_object* v_value_336_; lean_object* v_description_337_; uint8_t v___x_338_; 
v_value_336_ = lean_ctor_get(v_d_310_, 0);
v_description_337_ = lean_ctor_get(v_d_310_, 1);
v___x_338_ = lean_string_dec_eq(v_description_337_, v___x_320_);
if (v___x_338_ == 0)
{
goto v___jp_334_;
}
else
{
uint32_t v___x_339_; uint64_t v___x_340_; lean_object* v___x_341_; uint32_t v___x_342_; lean_object* v___x_343_; 
lean_inc_n(v_value_336_, 2);
lean_dec_ref_known(v_d_310_, 2);
v___x_339_ = 206;
v___x_340_ = 0ULL;
v___x_341_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_341_, 0, v_value_336_);
lean_ctor_set(v___x_341_, 1, v___x_320_);
v___x_342_ = lasm_js_value_handle(v_value_336_);
lean_dec(v_value_336_);
v___x_343_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_339_, v___x_340_, v___x_341_, v___x_342_);
lean_dec_ref_known(v___x_341_, 2);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; uint8_t v___x_345_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = lean_string_validate_utf8(v_a_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec(v_a_344_);
v___x_346_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9);
v___x_347_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_346_);
v_received_322_ = v___x_347_;
goto v___jp_321_;
}
else
{
lean_object* v___x_348_; 
v___x_348_ = lean_string_from_utf8_unchecked(v_a_344_);
v_received_322_ = v___x_348_;
goto v___jp_321_;
}
}
else
{
lean_object* v___x_349_; 
lean_dec_ref_known(v___x_343_, 1);
v___x_349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10));
v_received_322_ = v___x_349_;
goto v___jp_321_;
}
}
}
else
{
goto v___jp_334_;
}
v___jp_321_:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_323_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_324_ = lean_string_append(v___x_323_, v_context_309_);
v___x_325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_326_ = lean_string_append(v___x_324_, v___x_325_);
v___x_327_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionStream___closed__1));
v___x_328_ = lean_string_append(v___x_326_, v___x_327_);
v___x_329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_330_ = lean_string_append(v___x_328_, v___x_329_);
v___x_331_ = lean_string_append(v___x_330_, v_received_322_);
lean_dec_ref(v_received_322_);
v___x_332_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
v___x_333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5));
v___y_313_ = v___x_331_;
v___y_314_ = v___x_333_;
goto v___jp_312_;
}
else
{
v___y_313_ = v___x_331_;
v___y_314_ = v___x_320_;
goto v___jp_312_;
}
}
v___jp_334_:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lasm_JS_Data_describe(v_d_310_);
v_received_322_ = v___x_335_;
goto v___jp_321_;
}
}
v___jp_312_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_315_ = lean_string_append(v___y_313_, v___y_314_);
v___x_316_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
v___x_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_350_, lean_object* v_d_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v_context_350_, v_d_351_);
lean_dec_ref(v_context_350_);
return v_res_353_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_355_; uint64_t v___x_356_; 
v___x_355_ = 0;
v___x_356_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(lean_object* v_b_357_, lean_object* v_args_358_, uint8_t v_await_359_){
_start:
{
uint64_t v___y_362_; uint64_t v___y_363_; uint64_t v___x_406_; uint64_t v___y_408_; 
v___x_406_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_359_ == 0)
{
uint64_t v___x_413_; 
v___x_413_ = 0ULL;
v___y_408_ = v___x_413_;
goto v___jp_407_;
}
else
{
uint64_t v___x_414_; 
v___x_414_ = 2ULL;
v___y_408_ = v___x_414_;
goto v___jp_407_;
}
v___jp_361_:
{
uint64_t v_flags_364_; uint32_t v___x_365_; lean_object* v___x_366_; uint32_t v___x_367_; lean_object* v___x_368_; 
v_flags_364_ = lean_uint64_lor(v___y_362_, v___y_363_);
v___x_365_ = 214;
v___x_366_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_357_, v_args_358_);
v___x_367_ = 0;
v___x_368_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_365_, v_flags_364_, v___x_366_, v___x_367_);
lean_dec(v___x_366_);
if (lean_obj_tag(v___x_368_) == 0)
{
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_370_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
v___x_370_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_369_);
lean_dec(v_a_369_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_357_);
v___x_373_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v___x_372_, v_a_371_);
lean_dec_ref(v___x_372_);
return v___x_373_;
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
v_a_374_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_370_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_370_);
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
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
v_a_382_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_368_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_368_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 1);
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_405_; 
v_a_390_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_405_ == 0)
{
v___x_392_ = v___x_368_;
v_isShared_393_ = v_isSharedCheck_405_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_368_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_405_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_395_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_357_);
v___x_396_ = lean_string_append(v___x_394_, v___x_395_);
lean_dec_ref(v___x_395_);
v___x_397_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___x_399_ = lean_io_error_to_string(v_a_390_);
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
lean_dec_ref(v___x_399_);
v___x_401_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_401_);
v___x_403_ = v___x_392_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
v___jp_407_:
{
uint8_t v_construct_409_; uint64_t v___x_410_; 
v_construct_409_ = lean_ctor_get_uint8(v_b_357_, sizeof(void*)*4);
v___x_410_ = lean_uint64_lor(v___x_406_, v___y_408_);
if (v_construct_409_ == 0)
{
uint64_t v___x_411_; 
v___x_411_ = 0ULL;
v___y_362_ = v___x_410_;
v___y_363_ = v___x_411_;
goto v___jp_361_;
}
else
{
uint64_t v___x_412_; 
v___x_412_ = 4ULL;
v___y_362_ = v___x_410_;
v___y_363_ = v___x_412_;
goto v___jp_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___boxed(lean_object* v_b_415_, lean_object* v_args_416_, lean_object* v_await_417_, lean_object* v_a_418_){
_start:
{
uint8_t v_await_boxed_419_; lean_object* v_res_420_; 
v_await_boxed_419_ = lean_unbox(v_await_417_);
v_res_420_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v_b_415_, v_args_416_, v_await_boxed_419_);
lean_dec_ref(v_b_415_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new(uint8_t v_format_429_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___y_434_; 
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_new___closed__2));
switch(v_format_429_)
{
case 0:
{
lean_object* v___x_440_; 
v___x_440_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_434_ = v___x_440_;
goto v___jp_433_;
}
case 1:
{
lean_object* v___x_441_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_434_ = v___x_441_;
goto v___jp_433_;
}
case 2:
{
lean_object* v___x_442_; 
v___x_442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_434_ = v___x_442_;
goto v___jp_433_;
}
default: 
{
lean_object* v___x_443_; 
v___x_443_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_434_ = v___x_443_;
goto v___jp_433_;
}
}
v___jp_433_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; 
v___x_435_ = lean_mk_empty_array_with_capacity(v___x_431_);
lean_inc(v___y_434_);
v___x_436_ = lean_array_push(v___x_435_, v___y_434_);
v___x_437_ = l_Lasm_JS_Web_Support_args(v___x_436_);
v___x_438_ = 0;
v___x_439_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v___x_432_, v___x_437_, v___x_438_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new___boxed(lean_object* v_format_444_, lean_object* v_a_445_){
_start:
{
uint8_t v_format_boxed_446_; lean_object* v_res_447_; 
v_format_boxed_446_ = lean_unbox(v_format_444_);
v_res_447_ = l_Lasm_JS_Web_CompressionStream_new(v_format_boxed_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable(lean_object* v_self_449_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_452_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_449_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_452_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_452_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_452_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_452_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable___boxed(lean_object* v_self_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lasm_JS_Web_CompressionStream_readable(v_self_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable(lean_object* v_self_473_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_476_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_473_, v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
v_a_485_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_476_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_476_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable___boxed(lean_object* v_self_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lasm_JS_Web_CompressionStream_writable(v_self_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f(lean_object* v_v_502_){
_start:
{
lean_object* v___f_504_; lean_object* v___x_505_; 
v___f_504_ = ((lean_object*)(l_Lasm_JS_Web_DecompressionStream_cast_x3f___closed__2));
lean_inc(v_v_502_);
v___x_505_ = l_Lasm_JS_Web_Support_isInstance(v___f_504_, v_v_502_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_519_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_519_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_519_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_519_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
uint8_t v___x_510_; 
v___x_510_ = lean_unbox(v_a_506_);
lean_dec(v_a_506_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; lean_object* v___x_513_; 
lean_dec(v_v_502_);
v___x_511_ = lean_box(0);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_511_);
v___x_513_ = v___x_508_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
else
{
lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v_v_502_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_515_);
v___x_517_ = v___x_508_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v_v_502_);
v_a_520_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_505_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_505_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_cast_x3f___boxed(lean_object* v_v_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lasm_JS_Web_DecompressionStream_cast_x3f(v_v_528_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(lean_object* v_context_531_, lean_object* v_d_532_){
_start:
{
lean_object* v___y_535_; lean_object* v___y_536_; 
if (lean_obj_tag(v_d_532_) == 9)
{
lean_object* v_value_540_; lean_object* v___x_541_; 
v_value_540_ = lean_ctor_get(v_d_532_, 0);
lean_inc(v_value_540_);
lean_dec_ref_known(v_d_532_, 2);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v_value_540_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v_received_544_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
if (lean_obj_tag(v_d_532_) == 9)
{
lean_object* v_value_558_; lean_object* v_description_559_; uint8_t v___x_560_; 
v_value_558_ = lean_ctor_get(v_d_532_, 0);
v_description_559_ = lean_ctor_get(v_d_532_, 1);
v___x_560_ = lean_string_dec_eq(v_description_559_, v___x_542_);
if (v___x_560_ == 0)
{
goto v___jp_556_;
}
else
{
uint32_t v___x_561_; uint64_t v___x_562_; lean_object* v___x_563_; uint32_t v___x_564_; lean_object* v___x_565_; 
lean_inc_n(v_value_558_, 2);
lean_dec_ref_known(v_d_532_, 2);
v___x_561_ = 206;
v___x_562_ = 0ULL;
v___x_563_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_563_, 0, v_value_558_);
lean_ctor_set(v___x_563_, 1, v___x_542_);
v___x_564_ = lasm_js_value_handle(v_value_558_);
lean_dec(v_value_558_);
v___x_565_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_561_, v___x_562_, v___x_563_, v___x_564_);
lean_dec_ref_known(v___x_563_, 2);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; uint8_t v___x_567_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_565_, 1);
v___x_567_ = lean_string_validate_utf8(v_a_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; 
lean_dec(v_a_566_);
v___x_568_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__9);
v___x_569_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_568_);
v_received_544_ = v___x_569_;
goto v___jp_543_;
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_string_from_utf8_unchecked(v_a_566_);
v_received_544_ = v___x_570_;
goto v___jp_543_;
}
}
else
{
lean_object* v___x_571_; 
lean_dec_ref_known(v___x_565_, 1);
v___x_571_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__10));
v_received_544_ = v___x_571_;
goto v___jp_543_;
}
}
}
else
{
goto v___jp_556_;
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_546_ = lean_string_append(v___x_545_, v_context_531_);
v___x_547_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_548_ = lean_string_append(v___x_546_, v___x_547_);
v___x_549_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0));
v___x_550_ = lean_string_append(v___x_548_, v___x_549_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = lean_string_append(v___x_552_, v_received_544_);
lean_dec_ref(v_received_544_);
v___x_554_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5));
v___y_535_ = v___x_553_;
v___y_536_ = v___x_555_;
goto v___jp_534_;
}
else
{
v___y_535_ = v___x_553_;
v___y_536_ = v___x_542_;
goto v___jp_534_;
}
}
v___jp_556_:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lasm_JS_Data_describe(v_d_532_);
v_received_544_ = v___x_557_;
goto v___jp_543_;
}
}
v___jp_534_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_string_append(v___y_535_, v___y_536_);
v___x_538_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_572_, lean_object* v_d_573_, lean_object* v_a_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v_context_572_, v_d_573_);
lean_dec_ref(v_context_572_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(lean_object* v_b_576_, lean_object* v_args_577_, uint8_t v_await_578_){
_start:
{
uint64_t v___y_581_; uint64_t v___y_582_; uint64_t v___x_625_; uint64_t v___y_627_; 
v___x_625_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_578_ == 0)
{
uint64_t v___x_632_; 
v___x_632_ = 0ULL;
v___y_627_ = v___x_632_;
goto v___jp_626_;
}
else
{
uint64_t v___x_633_; 
v___x_633_ = 2ULL;
v___y_627_ = v___x_633_;
goto v___jp_626_;
}
v___jp_580_:
{
uint64_t v_flags_583_; uint32_t v___x_584_; lean_object* v___x_585_; uint32_t v___x_586_; lean_object* v___x_587_; 
v_flags_583_ = lean_uint64_lor(v___y_581_, v___y_582_);
v___x_584_ = 214;
v___x_585_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_576_, v_args_577_);
v___x_586_ = 0;
v___x_587_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_584_, v_flags_583_, v___x_585_, v___x_586_);
lean_dec(v___x_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_588_);
lean_dec(v_a_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_576_);
v___x_592_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v___x_591_, v_a_590_);
lean_dec_ref(v___x_591_);
return v___x_592_;
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
v_a_593_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_589_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_589_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_587_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_587_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
lean_ctor_set_tag(v___x_603_, 1);
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_624_; 
v_a_609_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_624_ == 0)
{
v___x_611_ = v___x_587_;
v_isShared_612_ = v_isSharedCheck_624_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_587_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_624_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_613_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_614_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_576_);
v___x_615_ = lean_string_append(v___x_613_, v___x_614_);
lean_dec_ref(v___x_614_);
v___x_616_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_617_ = lean_string_append(v___x_615_, v___x_616_);
v___x_618_ = lean_io_error_to_string(v_a_609_);
v___x_619_ = lean_string_append(v___x_617_, v___x_618_);
lean_dec_ref(v___x_618_);
v___x_620_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_620_);
v___x_622_ = v___x_611_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
v___jp_626_:
{
uint8_t v_construct_628_; uint64_t v___x_629_; 
v_construct_628_ = lean_ctor_get_uint8(v_b_576_, sizeof(void*)*4);
v___x_629_ = lean_uint64_lor(v___x_625_, v___y_627_);
if (v_construct_628_ == 0)
{
uint64_t v___x_630_; 
v___x_630_ = 0ULL;
v___y_581_ = v___x_629_;
v___y_582_ = v___x_630_;
goto v___jp_580_;
}
else
{
uint64_t v___x_631_; 
v___x_631_ = 4ULL;
v___y_581_ = v___x_629_;
v___y_582_ = v___x_631_;
goto v___jp_580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0___boxed(lean_object* v_b_634_, lean_object* v_args_635_, lean_object* v_await_636_, lean_object* v_a_637_){
_start:
{
uint8_t v_await_boxed_638_; lean_object* v_res_639_; 
v_await_boxed_638_ = lean_unbox(v_await_636_);
v_res_639_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v_b_634_, v_args_635_, v_await_boxed_638_);
lean_dec_ref(v_b_634_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new(uint8_t v_format_647_){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___y_652_; 
v___x_649_ = lean_unsigned_to_nat(1u);
v___x_650_ = ((lean_object*)(l_Lasm_JS_Web_DecompressionStream_new___closed__1));
switch(v_format_647_)
{
case 0:
{
lean_object* v___x_658_; 
v___x_658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_652_ = v___x_658_;
goto v___jp_651_;
}
case 1:
{
lean_object* v___x_659_; 
v___x_659_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_652_ = v___x_659_;
goto v___jp_651_;
}
case 2:
{
lean_object* v___x_660_; 
v___x_660_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_652_ = v___x_660_;
goto v___jp_651_;
}
default: 
{
lean_object* v___x_661_; 
v___x_661_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_652_ = v___x_661_;
goto v___jp_651_;
}
}
v___jp_651_:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; lean_object* v___x_657_; 
v___x_653_ = lean_mk_empty_array_with_capacity(v___x_649_);
lean_inc(v___y_652_);
v___x_654_ = lean_array_push(v___x_653_, v___y_652_);
v___x_655_ = l_Lasm_JS_Web_Support_args(v___x_654_);
v___x_656_ = 0;
v___x_657_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v___x_650_, v___x_655_, v___x_656_);
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new___boxed(lean_object* v_format_662_, lean_object* v_a_663_){
_start:
{
uint8_t v_format_boxed_664_; lean_object* v_res_665_; 
v_format_boxed_664_ = lean_unbox(v_format_662_);
v_res_665_ = l_Lasm_JS_Web_DecompressionStream_new(v_format_boxed_664_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable(lean_object* v_self_666_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_669_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_666_, v___x_668_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_a_678_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_669_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_669_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable___boxed(lean_object* v_self_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lasm_JS_Web_DecompressionStream_readable(v_self_686_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable(lean_object* v_self_689_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_692_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_689_, v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
v_a_701_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_692_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_692_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable___boxed(lean_object* v_self_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lasm_JS_Web_DecompressionStream_writable(v_self_709_);
return v_res_711_;
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
