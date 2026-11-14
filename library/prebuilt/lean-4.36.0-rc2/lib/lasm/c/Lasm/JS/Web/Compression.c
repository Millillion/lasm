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
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___impl(uint8_t v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_box(v_x_29_);
v___x_31_ = lean_obj_tag_nat(v___x_30_);
lean_dec(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorIdx___impl___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_x_4__boxed_33_; lean_object* v_res_34_; 
v_x_4__boxed_33_ = lean_unbox(v_x_32_);
v_res_34_ = l_Lasm_JS_Web_CompressionFormat_ctorIdx___impl(v_x_4__boxed_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg(lean_object* v_k_35_){
_start:
{
lean_inc(v_k_35_);
return v_k_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg___boxed(lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_JS_Web_CompressionFormat_ctorElim___redArg(v_k_36_);
lean_dec(v_k_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_inc(v_k_42_);
return v_k_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_ctorElim___boxed(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
uint8_t v_t_boxed_48_; lean_object* v_res_49_; 
v_t_boxed_48_ = lean_unbox(v_t_45_);
v_res_49_ = l_Lasm_JS_Web_CompressionFormat_ctorElim(v_motive_43_, v_ctorIdx_44_, v_t_boxed_48_, v_h_46_, v_k_47_);
lean_dec(v_k_47_);
lean_dec(v_ctorIdx_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg(lean_object* v_brotli_50_){
_start:
{
lean_inc(v_brotli_50_);
return v_brotli_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg___boxed(lean_object* v_brotli_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lasm_JS_Web_CompressionFormat_brotli_elim___redArg(v_brotli_51_);
lean_dec(v_brotli_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim(lean_object* v_motive_53_, uint8_t v_t_54_, lean_object* v_h_55_, lean_object* v_brotli_56_){
_start:
{
lean_inc(v_brotli_56_);
return v_brotli_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_brotli_elim___boxed(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_brotli_60_){
_start:
{
uint8_t v_t_boxed_61_; lean_object* v_res_62_; 
v_t_boxed_61_ = lean_unbox(v_t_58_);
v_res_62_ = l_Lasm_JS_Web_CompressionFormat_brotli_elim(v_motive_57_, v_t_boxed_61_, v_h_59_, v_brotli_60_);
lean_dec(v_brotli_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg(lean_object* v_deflate_63_){
_start:
{
lean_inc(v_deflate_63_);
return v_deflate_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg___boxed(lean_object* v_deflate_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Web_CompressionFormat_deflate_elim___redArg(v_deflate_64_);
lean_dec(v_deflate_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim(lean_object* v_motive_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_deflate_69_){
_start:
{
lean_inc(v_deflate_69_);
return v_deflate_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflate_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_deflate_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lasm_JS_Web_CompressionFormat_deflate_elim(v_motive_70_, v_t_boxed_74_, v_h_72_, v_deflate_73_);
lean_dec(v_deflate_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg(lean_object* v_deflateRaw_76_){
_start:
{
lean_inc(v_deflateRaw_76_);
return v_deflateRaw_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg___boxed(lean_object* v_deflateRaw_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___redArg(v_deflateRaw_77_);
lean_dec(v_deflateRaw_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim(lean_object* v_motive_79_, uint8_t v_t_80_, lean_object* v_h_81_, lean_object* v_deflateRaw_82_){
_start:
{
lean_inc(v_deflateRaw_82_);
return v_deflateRaw_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim___boxed(lean_object* v_motive_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_deflateRaw_86_){
_start:
{
uint8_t v_t_boxed_87_; lean_object* v_res_88_; 
v_t_boxed_87_ = lean_unbox(v_t_84_);
v_res_88_ = l_Lasm_JS_Web_CompressionFormat_deflateRaw_elim(v_motive_83_, v_t_boxed_87_, v_h_85_, v_deflateRaw_86_);
lean_dec(v_deflateRaw_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg(lean_object* v_gzip_89_){
_start:
{
lean_inc(v_gzip_89_);
return v_gzip_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg___boxed(lean_object* v_gzip_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lasm_JS_Web_CompressionFormat_gzip_elim___redArg(v_gzip_90_);
lean_dec(v_gzip_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim(lean_object* v_motive_92_, uint8_t v_t_93_, lean_object* v_h_94_, lean_object* v_gzip_95_){
_start:
{
lean_inc(v_gzip_95_);
return v_gzip_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionFormat_gzip_elim___boxed(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_gzip_99_){
_start:
{
uint8_t v_t_boxed_100_; lean_object* v_res_101_; 
v_t_boxed_100_ = lean_unbox(v_t_97_);
v_res_101_ = l_Lasm_JS_Web_CompressionFormat_gzip_elim(v_motive_96_, v_t_boxed_100_, v_h_98_, v_gzip_99_);
lean_dec(v_gzip_99_);
return v_res_101_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqCompressionFormat_beq(uint8_t v_x_102_, uint8_t v_y_103_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_104_ = lean_box(v_x_102_);
v___x_105_ = lean_obj_tag_nat(v___x_104_);
lean_dec(v___x_104_);
v___x_106_ = lean_box(v_y_103_);
v___x_107_ = lean_obj_tag_nat(v___x_106_);
lean_dec(v___x_106_);
v___x_108_ = lean_nat_dec_eq(v___x_105_, v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqCompressionFormat_beq___boxed(lean_object* v_x_109_, lean_object* v_y_110_){
_start:
{
uint8_t v_x_24__boxed_111_; uint8_t v_y_25__boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_24__boxed_111_ = lean_unbox(v_x_109_);
v_y_25__boxed_112_ = lean_unbox(v_y_110_);
v_res_113_ = l_Lasm_JS_Web_instBEqCompressionFormat_beq(v_x_24__boxed_111_, v_y_25__boxed_112_);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__5));
v___x_256_ = lean_unsigned_to_nat(46u);
v___x_257_ = lean_unsigned_to_nat(193u);
v___x_258_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__4));
v___x_259_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__3));
v___x_260_ = l_mkPanicMessageWithDecl(v___x_259_, v___x_258_, v___x_257_, v___x_256_, v___x_255_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(lean_object* v_context_262_, lean_object* v_d_263_){
_start:
{
lean_object* v_received_266_; 
if (lean_obj_tag(v_d_263_) == 9)
{
lean_object* v_value_280_; lean_object* v___x_281_; 
v_value_280_ = lean_ctor_get(v_d_263_, 0);
lean_inc(v_value_280_);
lean_dec_ref_known(v_d_263_, 2);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v_value_280_);
return v___x_281_;
}
else
{
if (lean_obj_tag(v_d_263_) == 9)
{
lean_object* v_value_282_; lean_object* v_description_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_value_282_ = lean_ctor_get(v_d_263_, 0);
v_description_283_ = lean_ctor_get(v_d_263_, 1);
v___x_284_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
v___x_285_ = lean_string_dec_eq(v_description_283_, v___x_284_);
if (v___x_285_ == 0)
{
goto v___jp_278_;
}
else
{
uint32_t v___x_286_; uint64_t v___x_287_; lean_object* v___x_288_; uint32_t v___x_289_; lean_object* v___x_290_; 
lean_inc_n(v_value_282_, 2);
lean_dec_ref_known(v_d_263_, 2);
v___x_286_ = 206;
v___x_287_ = 0ULL;
v___x_288_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_288_, 0, v_value_282_);
lean_ctor_set(v___x_288_, 1, v___x_284_);
v___x_289_ = lasm_js_value_handle(v_value_282_);
lean_dec(v_value_282_);
v___x_290_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_286_, v___x_287_, v___x_288_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; uint8_t v___x_292_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = lean_string_validate_utf8(v_a_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v_a_291_);
v___x_293_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6);
v___x_294_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_293_);
v_received_266_ = v___x_294_;
goto v___jp_265_;
}
else
{
lean_object* v___x_295_; 
v___x_295_ = lean_string_from_utf8_unchecked(v_a_291_);
v_received_266_ = v___x_295_;
goto v___jp_265_;
}
}
else
{
lean_object* v___x_296_; 
lean_dec_ref_known(v___x_290_, 1);
v___x_296_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7));
v_received_266_ = v___x_296_;
goto v___jp_265_;
}
}
}
else
{
goto v___jp_278_;
}
}
v___jp_265_:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_267_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_268_ = lean_string_append(v___x_267_, v_context_262_);
v___x_269_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_270_ = lean_string_append(v___x_268_, v___x_269_);
v___x_271_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompressionStream___closed__1));
v___x_272_ = lean_string_append(v___x_270_, v___x_271_);
v___x_273_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_274_ = lean_string_append(v___x_272_, v___x_273_);
v___x_275_ = lean_string_append(v___x_274_, v_received_266_);
lean_dec_ref(v_received_266_);
v___x_276_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
v___jp_278_:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lasm_JS_Data_describe(v_d_263_);
v_received_266_ = v___x_279_;
goto v___jp_265_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_297_, lean_object* v_d_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v_context_297_, v_d_298_);
lean_dec_ref(v_context_297_);
return v_res_300_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_302_; uint64_t v___x_303_; 
v___x_302_ = 0;
v___x_303_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(lean_object* v_b_304_, lean_object* v_args_305_, uint8_t v_await_306_){
_start:
{
uint64_t v___y_309_; uint64_t v___y_310_; uint64_t v___x_345_; uint64_t v___y_347_; 
v___x_345_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_306_ == 0)
{
uint64_t v___x_352_; 
v___x_352_ = 0ULL;
v___y_347_ = v___x_352_;
goto v___jp_346_;
}
else
{
uint64_t v___x_353_; 
v___x_353_ = 2ULL;
v___y_347_ = v___x_353_;
goto v___jp_346_;
}
v___jp_308_:
{
uint64_t v_flags_311_; uint32_t v___x_312_; lean_object* v___x_313_; uint32_t v___x_314_; lean_object* v___x_315_; 
v_flags_311_ = lean_uint64_lor(v___y_309_, v___y_310_);
v___x_312_ = 214;
v___x_313_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_304_, v_args_305_);
v___x_314_ = 0;
v___x_315_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_312_, v_flags_311_, v___x_313_, v___x_314_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_317_; 
v_a_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_315_, 1);
v___x_317_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_316_);
lean_dec(v_a_316_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_a_318_);
lean_dec_ref_known(v___x_317_, 1);
v___x_319_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_304_);
v___x_320_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0(v___x_319_, v_a_318_);
lean_dec_ref(v___x_319_);
return v___x_320_;
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
v_a_321_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_317_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_317_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_344_; 
v_a_329_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_344_ == 0)
{
v___x_331_ = v___x_315_;
v_isShared_332_ = v_isSharedCheck_344_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_315_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_344_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_334_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_304_);
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
lean_dec_ref(v___x_334_);
v___x_336_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_337_ = lean_string_append(v___x_335_, v___x_336_);
v___x_338_ = lean_io_error_to_string(v_a_329_);
v___x_339_ = lean_string_append(v___x_337_, v___x_338_);
lean_dec_ref(v___x_338_);
v___x_340_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_340_);
v___x_342_ = v___x_331_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
v___jp_346_:
{
uint8_t v_construct_348_; uint64_t v___x_349_; 
v_construct_348_ = lean_ctor_get_uint8(v_b_304_, sizeof(void*)*4);
v___x_349_ = lean_uint64_lor(v___x_345_, v___y_347_);
if (v_construct_348_ == 0)
{
uint64_t v___x_350_; 
v___x_350_ = 0ULL;
v___y_309_ = v___x_349_;
v___y_310_ = v___x_350_;
goto v___jp_308_;
}
else
{
uint64_t v___x_351_; 
v___x_351_ = 4ULL;
v___y_309_ = v___x_349_;
v___y_310_ = v___x_351_;
goto v___jp_308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___boxed(lean_object* v_b_354_, lean_object* v_args_355_, lean_object* v_await_356_, lean_object* v_a_357_){
_start:
{
uint8_t v_await_boxed_358_; lean_object* v_res_359_; 
v_await_boxed_358_ = lean_unbox(v_await_356_);
v_res_359_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v_b_354_, v_args_355_, v_await_boxed_358_);
lean_dec_ref(v_b_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new(uint8_t v_format_369_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___y_374_; 
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_new___closed__3));
switch(v_format_369_)
{
case 0:
{
lean_object* v___x_380_; 
v___x_380_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_374_ = v___x_380_;
goto v___jp_373_;
}
case 1:
{
lean_object* v___x_381_; 
v___x_381_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_374_ = v___x_381_;
goto v___jp_373_;
}
case 2:
{
lean_object* v___x_382_; 
v___x_382_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_374_ = v___x_382_;
goto v___jp_373_;
}
default: 
{
lean_object* v___x_383_; 
v___x_383_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_374_ = v___x_383_;
goto v___jp_373_;
}
}
v___jp_373_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; lean_object* v___x_379_; 
v___x_375_ = lean_mk_empty_array_with_capacity(v___x_371_);
lean_inc(v___y_374_);
v___x_376_ = lean_array_push(v___x_375_, v___y_374_);
v___x_377_ = l_Lasm_JS_Web_Support_args(v___x_376_);
v___x_378_ = 0;
v___x_379_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0(v___x_372_, v___x_377_, v___x_378_);
return v___x_379_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_new___boxed(lean_object* v_format_384_, lean_object* v_a_385_){
_start:
{
uint8_t v_format_boxed_386_; lean_object* v_res_387_; 
v_format_boxed_386_ = lean_unbox(v_format_384_);
v_res_387_ = l_Lasm_JS_Web_CompressionStream_new(v_format_boxed_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable(lean_object* v_self_389_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_392_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_389_, v___x_391_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_392_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_401_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_392_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_392_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_readable___boxed(lean_object* v_self_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_JS_Web_CompressionStream_readable(v_self_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable(lean_object* v_self_413_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_416_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_413_, v___x_415_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
v_a_425_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_416_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_416_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompressionStream_writable___boxed(lean_object* v_self_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lasm_JS_Web_CompressionStream_writable(v_self_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(lean_object* v_context_436_, lean_object* v_d_437_){
_start:
{
lean_object* v_received_440_; 
if (lean_obj_tag(v_d_437_) == 9)
{
lean_object* v_value_454_; lean_object* v___x_455_; 
v_value_454_ = lean_ctor_get(v_d_437_, 0);
lean_inc(v_value_454_);
lean_dec_ref_known(v_d_437_, 2);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v_value_454_);
return v___x_455_;
}
else
{
if (lean_obj_tag(v_d_437_) == 9)
{
lean_object* v_value_456_; lean_object* v_description_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v_value_456_ = lean_ctor_get(v_d_437_, 0);
v_description_457_ = lean_ctor_get(v_d_437_, 1);
v___x_458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionStream___lam__0___closed__0));
v___x_459_ = lean_string_dec_eq(v_description_457_, v___x_458_);
if (v___x_459_ == 0)
{
goto v___jp_452_;
}
else
{
uint32_t v___x_460_; uint64_t v___x_461_; lean_object* v___x_462_; uint32_t v___x_463_; lean_object* v___x_464_; 
lean_inc_n(v_value_456_, 2);
lean_dec_ref_known(v_d_437_, 2);
v___x_460_ = 206;
v___x_461_ = 0ULL;
v___x_462_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_462_, 0, v_value_456_);
lean_ctor_set(v___x_462_, 1, v___x_458_);
v___x_463_ = lasm_js_value_handle(v_value_456_);
lean_dec(v_value_456_);
v___x_464_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_460_, v___x_461_, v___x_462_, v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; uint8_t v___x_466_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = lean_string_validate_utf8(v_a_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v_a_465_);
v___x_467_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__6);
v___x_468_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_467_);
v_received_440_ = v___x_468_;
goto v___jp_439_;
}
else
{
lean_object* v___x_469_; 
v___x_469_ = lean_string_from_utf8_unchecked(v_a_465_);
v_received_440_ = v___x_469_;
goto v___jp_439_;
}
}
else
{
lean_object* v___x_470_; 
lean_dec_ref_known(v___x_464_, 1);
v___x_470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__7));
v_received_440_ = v___x_470_;
goto v___jp_439_;
}
}
}
else
{
goto v___jp_452_;
}
}
v___jp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_442_ = lean_string_append(v___x_441_, v_context_436_);
v___x_443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__1));
v___x_444_ = lean_string_append(v___x_442_, v___x_443_);
v___x_445_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDecompressionStream___closed__0));
v___x_446_ = lean_string_append(v___x_444_, v___x_445_);
v___x_447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__2));
v___x_448_ = lean_string_append(v___x_446_, v___x_447_);
v___x_449_ = lean_string_append(v___x_448_, v_received_440_);
lean_dec_ref(v_received_440_);
v___x_450_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
v___jp_452_:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lasm_JS_Data_describe(v_d_437_);
v_received_440_ = v___x_453_;
goto v___jp_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0___boxed(lean_object* v_context_471_, lean_object* v_d_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v_context_471_, v_d_472_);
lean_dec_ref(v_context_471_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(lean_object* v_b_475_, lean_object* v_args_476_, uint8_t v_await_477_){
_start:
{
uint64_t v___y_480_; uint64_t v___y_481_; uint64_t v___x_516_; uint64_t v___y_518_; 
v___x_516_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__1);
if (v_await_477_ == 0)
{
uint64_t v___x_523_; 
v___x_523_ = 0ULL;
v___y_518_ = v___x_523_;
goto v___jp_517_;
}
else
{
uint64_t v___x_524_; 
v___x_524_ = 2ULL;
v___y_518_ = v___x_524_;
goto v___jp_517_;
}
v___jp_479_:
{
uint64_t v_flags_482_; uint32_t v___x_483_; lean_object* v___x_484_; uint32_t v___x_485_; lean_object* v___x_486_; 
v_flags_482_ = lean_uint64_lor(v___y_480_, v___y_481_);
v___x_483_ = 214;
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_475_, v_args_476_);
v___x_485_ = 0;
v___x_486_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_483_, v_flags_482_, v___x_484_, v___x_485_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_488_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v___x_488_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_487_);
lean_dec(v_a_487_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_475_);
v___x_491_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0_spec__0(v___x_490_, v_a_489_);
lean_dec_ref(v___x_490_);
return v___x_491_;
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_a_492_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_488_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_488_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_515_; 
v_a_500_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_515_ == 0)
{
v___x_502_ = v___x_486_;
v_isShared_503_ = v_isSharedCheck_515_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_486_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_515_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0_spec__0___closed__0));
v___x_505_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_475_);
v___x_506_ = lean_string_append(v___x_504_, v___x_505_);
lean_dec_ref(v___x_505_);
v___x_507_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompressionStream_new_spec__0___closed__0));
v___x_508_ = lean_string_append(v___x_506_, v___x_507_);
v___x_509_ = lean_io_error_to_string(v_a_500_);
v___x_510_ = lean_string_append(v___x_508_, v___x_509_);
lean_dec_ref(v___x_509_);
v___x_511_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_511_);
v___x_513_ = v___x_502_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
v___jp_517_:
{
uint8_t v_construct_519_; uint64_t v___x_520_; 
v_construct_519_ = lean_ctor_get_uint8(v_b_475_, sizeof(void*)*4);
v___x_520_ = lean_uint64_lor(v___x_516_, v___y_518_);
if (v_construct_519_ == 0)
{
uint64_t v___x_521_; 
v___x_521_ = 0ULL;
v___y_480_ = v___x_520_;
v___y_481_ = v___x_521_;
goto v___jp_479_;
}
else
{
uint64_t v___x_522_; 
v___x_522_ = 4ULL;
v___y_480_ = v___x_520_;
v___y_481_ = v___x_522_;
goto v___jp_479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0___boxed(lean_object* v_b_525_, lean_object* v_args_526_, lean_object* v_await_527_, lean_object* v_a_528_){
_start:
{
uint8_t v_await_boxed_529_; lean_object* v_res_530_; 
v_await_boxed_529_ = lean_unbox(v_await_527_);
v_res_530_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v_b_525_, v_args_526_, v_await_boxed_529_);
lean_dec_ref(v_b_525_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new(uint8_t v_format_539_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___y_544_; 
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = ((lean_object*)(l_Lasm_JS_Web_DecompressionStream_new___closed__2));
switch(v_format_539_)
{
case 0:
{
lean_object* v___x_550_; 
v___x_550_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__1));
v___y_544_ = v___x_550_;
goto v___jp_543_;
}
case 1:
{
lean_object* v___x_551_; 
v___x_551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__3));
v___y_544_ = v___x_551_;
goto v___jp_543_;
}
case 2:
{
lean_object* v___x_552_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__5));
v___y_544_ = v___x_552_;
goto v___jp_543_;
}
default: 
{
lean_object* v___x_553_; 
v___x_553_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCompressionFormat___lam__0___closed__7));
v___y_544_ = v___x_553_;
goto v___jp_543_;
}
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; lean_object* v___x_549_; 
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_541_);
lean_inc(v___y_544_);
v___x_546_ = lean_array_push(v___x_545_, v___y_544_);
v___x_547_ = l_Lasm_JS_Web_Support_args(v___x_546_);
v___x_548_ = 0;
v___x_549_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DecompressionStream_new_spec__0(v___x_542_, v___x_547_, v___x_548_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_new___boxed(lean_object* v_format_554_, lean_object* v_a_555_){
_start:
{
uint8_t v_format_boxed_556_; lean_object* v_res_557_; 
v_format_boxed_556_ = lean_unbox(v_format_554_);
v_res_557_ = l_Lasm_JS_Web_DecompressionStream_new(v_format_boxed_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable(lean_object* v_self_558_){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_readable___closed__0));
v___x_561_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_558_, v___x_560_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
v_a_570_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_561_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_561_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_readable___boxed(lean_object* v_self_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Lasm_JS_Web_DecompressionStream_readable(v_self_578_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable(lean_object* v_self_581_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = ((lean_object*)(l_Lasm_JS_Web_CompressionStream_writable___closed__0));
v___x_584_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_581_, v___x_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_584_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
v_a_593_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_584_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_584_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DecompressionStream_writable___boxed(lean_object* v_self_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lasm_JS_Web_DecompressionStream_writable(v_self_601_);
return v_res_603_;
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
