// Lean compiler output
// Module: Lasm.JS.Web.Encoding
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
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextEncoder___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTextEncoder___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTextEncoder___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextEncoder = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextEncoder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.TextEncoder"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTextEncoder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTextEncoder = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextDecoder = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextDecoder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.TextDecoder"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextDecoder___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoder___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTextDecoder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTextDecoder___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoder___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTextDecoder = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoder___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextEncoderStream = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.TextEncoderStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextDecoderStream = (const lean_object*)&l_Lasm_JS_Web_instToJSTextEncoder___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.TextDecoderStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoder___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTextDecoderStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "written"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1;
static const lean_string_object l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.TextEncoderEncodeIntoResult"};
static const lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult;
static const lean_string_object l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fatal"};
static const lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ignoreBOM"};
static const lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stream"};
static const lean_object* l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTextDecodeOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTextDecoderOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSTextDecodeOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecodeOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTextDecodeOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSTextDecodeOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TextEncoder"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoder_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.TextEncoder.new"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_TextEncoder_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoder_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__2_value;
static const lean_array_object l_Lasm_JS_Web_TextEncoder_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Web_TextEncoder_new___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoder_encoding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "encoding"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_encoding___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_encoding___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoder_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "encode"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_encode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__10 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__10_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__10_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "encodeInto"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TextDecoder"};
static const lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoder_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.TextDecoder.new"};
static const lean_object* l_Lasm_JS_Web_TextDecoder_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoder_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextDecoder_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoder_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decode"};
static const lean_object* l_Lasm_JS_Web_TextDecoder_decode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_decode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TextEncoderStream"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.TextEncoderStream.new"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoderStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_readable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readable"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_readable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_readable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_writable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "writable"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_writable___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_writable___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TextDecoderStream"};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.TextDecoderStream.new"};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoderStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextEncoder___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoder___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSTextEncoder___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0(lean_object* v___x_45_, lean_object* v_d_46_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0));
lean_inc_ref(v___x_45_);
v___x_48_ = l_Lasm_JS_readField___redArg(v___x_45_, v_d_46_, v___x_47_);
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
lean_dec_ref(v___x_45_);
v_a_49_ = lean_ctor_get(v___x_48_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_48_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_48_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_48_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
else
{
lean_object* v_a_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_a_57_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_a_57_);
lean_dec_ref_known(v___x_48_, 1);
v___x_58_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1));
v___x_59_ = l_Lasm_JS_readField___redArg(v___x_45_, v_d_46_, v___x_58_);
if (lean_obj_tag(v___x_59_) == 0)
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_67_; 
lean_dec(v_a_57_);
v_a_60_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_67_ == 0)
{
v___x_62_ = v___x_59_;
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_59_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_76_; 
v_a_68_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_76_ == 0)
{
v___x_70_ = v___x_59_;
v_isShared_71_ = v_isSharedCheck_76_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_59_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_76_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v_a_57_);
lean_ctor_set(v___x_72_, 1, v_a_68_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_72_);
v___x_74_ = v___x_70_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___boxed(lean_object* v___x_77_, lean_object* v_d_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0(v___x_77_, v_d_78_);
lean_dec(v_d_78_);
return v_res_79_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = l_Lasm_JS_instFromJSNat;
v___x_81_ = l_Lasm_JS_instFromJSOption___redArg(v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1(void){
_start:
{
lean_object* v___x_82_; lean_object* v___f_83_; 
v___x_82_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0, &l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__0);
v___f_83_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___boxed), 2, 1);
lean_closure_set(v___f_83_, 0, v___x_82_);
return v___f_83_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3(void){
_start:
{
uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___f_87_; lean_object* v___x_88_; 
v___x_85_ = 0;
v___x_86_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2));
v___f_87_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1, &l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__1);
v___x_88_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_88_, 0, v___f_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*2, v___x_85_);
return v___x_88_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3, &l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__3);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0(lean_object* v___f_92_, lean_object* v_d_93_){
_start:
{
lean_object* v_fatal_94_; lean_object* v_ignoreBOM_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_112_; 
v_fatal_94_ = lean_ctor_get(v_d_93_, 0);
v_ignoreBOM_95_ = lean_ctor_get(v_d_93_, 1);
v_isSharedCheck_112_ = !lean_is_exclusive(v_d_93_);
if (v_isSharedCheck_112_ == 0)
{
v___x_97_ = v_d_93_;
v_isShared_98_ = v_isSharedCheck_112_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_ignoreBOM_95_);
lean_inc(v_fatal_94_);
lean_dec(v_d_93_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_112_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_99_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
lean_inc_ref(v___f_92_);
v___x_100_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_92_, v_fatal_94_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 1, v___x_100_);
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_102_ = v___x_97_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_111_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_104_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_92_, v_ignoreBOM_95_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_unsigned_to_nat(2u);
v___x_107_ = lean_mk_empty_array_with_capacity(v___x_106_);
v___x_108_ = lean_array_push(v___x_107_, v___x_102_);
v___x_109_ = lean_array_push(v___x_108_, v___x_105_);
v___x_110_ = l_Lasm_JS_Web_Support_fields(v___x_109_);
lean_dec_ref(v___x_109_);
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0(lean_object* v___f_118_, lean_object* v_d_119_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_120_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0));
v___x_121_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_118_, v_d_119_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_mk_empty_array_with_capacity(v___x_123_);
v___x_125_ = lean_array_push(v___x_124_, v___x_122_);
v___x_126_ = l_Lasm_JS_Web_Support_fields(v___x_125_);
lean_dec_ref(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0(lean_object* v___x_130_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_130_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0___boxed(lean_object* v___x_133_, lean_object* v___y_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lasm_JS_Web_TextEncoder_cast_x3f___lam__0(v___x_133_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f(lean_object* v_v_142_){
_start:
{
lean_object* v___f_144_; lean_object* v___x_145_; 
v___f_144_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_cast_x3f___closed__2));
lean_inc(v_v_142_);
v___x_145_ = l_Lasm_JS_Web_Support_isInstance(v___f_144_, v_v_142_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_159_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_159_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_159_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_159_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
uint8_t v___x_150_; 
v___x_150_ = lean_unbox(v_a_146_);
lean_dec(v_a_146_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_153_; 
lean_dec(v_v_142_);
v___x_151_ = lean_box(0);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_151_);
v___x_153_ = v___x_148_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v_v_142_);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_155_);
v___x_157_ = v___x_148_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec(v_v_142_);
v_a_160_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_145_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_145_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_cast_x3f___boxed(lean_object* v_v_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Web_TextEncoder_cast_x3f(v_v_168_);
return v_res_170_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_175_ = lean_string_utf8_byte_size(v___x_174_);
return v___x_175_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3);
v___x_178_ = lean_nat_dec_eq(v___x_177_, v___x_176_);
return v___x_178_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_183_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__8));
v___x_184_ = lean_unsigned_to_nat(46u);
v___x_185_ = lean_unsigned_to_nat(193u);
v___x_186_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v___x_187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6));
v___x_188_ = l_mkPanicMessageWithDecl(v___x_187_, v___x_186_, v___x_185_, v___x_184_, v___x_183_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(lean_object* v_context_190_, lean_object* v_d_191_){
_start:
{
lean_object* v___y_194_; lean_object* v___y_195_; 
if (lean_obj_tag(v_d_191_) == 9)
{
lean_object* v_value_199_; lean_object* v___x_200_; 
v_value_199_ = lean_ctor_get(v_d_191_, 0);
lean_inc(v_value_199_);
lean_dec_ref_known(v_d_191_, 2);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v_value_199_);
return v___x_200_;
}
else
{
lean_object* v___x_201_; lean_object* v_received_203_; 
v___x_201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_191_) == 9)
{
lean_object* v_value_217_; lean_object* v_description_218_; uint8_t v___x_219_; 
v_value_217_ = lean_ctor_get(v_d_191_, 0);
v_description_218_ = lean_ctor_get(v_d_191_, 1);
v___x_219_ = lean_string_dec_eq(v_description_218_, v___x_201_);
if (v___x_219_ == 0)
{
goto v___jp_215_;
}
else
{
uint32_t v___x_220_; uint64_t v___x_221_; lean_object* v___x_222_; uint32_t v___x_223_; lean_object* v___x_224_; 
lean_inc_n(v_value_217_, 2);
lean_dec_ref_known(v_d_191_, 2);
v___x_220_ = 206;
v___x_221_ = 0ULL;
v___x_222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_222_, 0, v_value_217_);
lean_ctor_set(v___x_222_, 1, v___x_201_);
v___x_223_ = lasm_js_value_handle(v_value_217_);
lean_dec(v_value_217_);
v___x_224_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_220_, v___x_221_, v___x_222_, v___x_223_);
lean_dec_ref_known(v___x_222_, 2);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; uint8_t v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = lean_string_validate_utf8(v_a_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v_a_225_);
v___x_227_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_228_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_227_);
v_received_203_ = v___x_228_;
goto v___jp_202_;
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_string_from_utf8_unchecked(v_a_225_);
v_received_203_ = v___x_229_;
goto v___jp_202_;
}
}
else
{
lean_object* v___x_230_; 
lean_dec_ref_known(v___x_224_, 1);
v___x_230_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_203_ = v___x_230_;
goto v___jp_202_;
}
}
}
else
{
goto v___jp_215_;
}
v___jp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_204_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_205_ = lean_string_append(v___x_204_, v_context_190_);
v___x_206_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
v___x_208_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoder___closed__1));
v___x_209_ = lean_string_append(v___x_207_, v___x_208_);
v___x_210_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_211_ = lean_string_append(v___x_209_, v___x_210_);
v___x_212_ = lean_string_append(v___x_211_, v_received_203_);
lean_dec_ref(v_received_203_);
v___x_213_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
v___x_214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_194_ = v___x_212_;
v___y_195_ = v___x_214_;
goto v___jp_193_;
}
else
{
v___y_194_ = v___x_212_;
v___y_195_ = v___x_201_;
goto v___jp_193_;
}
}
v___jp_215_:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lasm_JS_Data_describe(v_d_191_);
v_received_203_ = v___x_216_;
goto v___jp_202_;
}
}
v___jp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = lean_string_append(v___y_194_, v___y_195_);
v___x_197_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
v___x_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___boxed(lean_object* v_context_231_, lean_object* v_d_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v_context_231_, v_d_232_);
lean_dec_ref(v_context_231_);
return v_res_234_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_236_; uint64_t v___x_237_; 
v___x_236_ = 0;
v___x_237_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(lean_object* v_b_238_, lean_object* v_args_239_, uint8_t v_await_240_){
_start:
{
uint64_t v___y_243_; uint64_t v___y_244_; uint64_t v___x_287_; uint64_t v___y_289_; 
v___x_287_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_240_ == 0)
{
uint64_t v___x_294_; 
v___x_294_ = 0ULL;
v___y_289_ = v___x_294_;
goto v___jp_288_;
}
else
{
uint64_t v___x_295_; 
v___x_295_ = 2ULL;
v___y_289_ = v___x_295_;
goto v___jp_288_;
}
v___jp_242_:
{
uint64_t v_flags_245_; uint32_t v___x_246_; lean_object* v___x_247_; uint32_t v___x_248_; lean_object* v___x_249_; 
v_flags_245_ = lean_uint64_lor(v___y_243_, v___y_244_);
v___x_246_ = 214;
v___x_247_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_238_, v_args_239_);
v___x_248_ = 0;
v___x_249_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_246_, v_flags_245_, v___x_247_, v___x_248_);
lean_dec(v___x_247_);
if (lean_obj_tag(v___x_249_) == 0)
{
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_250_);
lean_dec(v_a_250_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_251_, 1);
v___x_253_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_238_);
v___x_254_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v___x_253_, v_a_252_);
lean_dec_ref(v___x_253_);
return v___x_254_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
v_a_255_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_251_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_251_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
v_a_263_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_249_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_249_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 1);
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_286_; 
v_a_271_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_286_ == 0)
{
v___x_273_ = v___x_249_;
v_isShared_274_ = v_isSharedCheck_286_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_249_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_286_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_276_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_238_);
v___x_277_ = lean_string_append(v___x_275_, v___x_276_);
lean_dec_ref(v___x_276_);
v___x_278_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
v___x_280_ = lean_io_error_to_string(v_a_271_);
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
lean_dec_ref(v___x_280_);
v___x_282_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_282_);
v___x_284_ = v___x_273_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
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
v___jp_288_:
{
uint8_t v_construct_290_; uint64_t v___x_291_; 
v_construct_290_ = lean_ctor_get_uint8(v_b_238_, sizeof(void*)*4);
v___x_291_ = lean_uint64_lor(v___x_287_, v___y_289_);
if (v_construct_290_ == 0)
{
uint64_t v___x_292_; 
v___x_292_ = 0ULL;
v___y_243_ = v___x_291_;
v___y_244_ = v___x_292_;
goto v___jp_242_;
}
else
{
uint64_t v___x_293_; 
v___x_293_ = 4ULL;
v___y_243_ = v___x_291_;
v___y_244_ = v___x_293_;
goto v___jp_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___boxed(lean_object* v_b_296_, lean_object* v_args_297_, lean_object* v_await_298_, lean_object* v_a_299_){
_start:
{
uint8_t v_await_boxed_300_; lean_object* v_res_301_; 
v_await_boxed_300_ = lean_unbox(v_await_298_);
v_res_301_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v_b_296_, v_args_297_, v_await_boxed_300_);
lean_dec_ref(v_b_296_);
return v_res_301_;
}
}
static lean_object* _init_l_Lasm_JS_Web_TextEncoder_new___closed__4(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__3));
v___x_313_ = l_Lasm_JS_Web_Support_args(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new(){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; 
v___x_315_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__2));
v___x_316_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__4, &l_Lasm_JS_Web_TextEncoder_new___closed__4_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__4);
v___x_317_ = 0;
v___x_318_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v___x_315_, v___x_316_, v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new___boxed(lean_object* v_a_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Web_TextEncoder_new();
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding(lean_object* v_self_322_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_325_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_322_, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding___boxed(lean_object* v_self_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_Web_TextEncoder_encoding(v_self_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(lean_object* v_context_329_, lean_object* v_bytes_330_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_330_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_329_, v_a_333_);
return v___x_334_;
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
v_a_335_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_332_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_332_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1___boxed(lean_object* v_context_343_, lean_object* v_bytes_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v_context_343_, v_bytes_344_);
lean_dec_ref(v_bytes_344_);
lean_dec_ref(v_context_343_);
return v_res_346_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(uint8_t v_await_347_, uint64_t v_extra_348_){
_start:
{
uint64_t v___x_349_; uint64_t v___y_351_; 
v___x_349_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_347_ == 0)
{
uint64_t v___x_354_; 
v___x_354_ = 0ULL;
v___y_351_ = v___x_354_;
goto v___jp_350_;
}
else
{
uint64_t v___x_355_; 
v___x_355_ = 2ULL;
v___y_351_ = v___x_355_;
goto v___jp_350_;
}
v___jp_350_:
{
uint64_t v___x_352_; uint64_t v___x_353_; 
v___x_352_ = lean_uint64_lor(v___x_349_, v___y_351_);
v___x_353_ = lean_uint64_lor(v___x_352_, v_extra_348_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0___boxed(lean_object* v_await_356_, lean_object* v_extra_357_){
_start:
{
uint8_t v_await_boxed_358_; uint64_t v_extra_boxed_359_; uint64_t v_res_360_; lean_object* v_r_361_; 
v_await_boxed_358_ = lean_unbox(v_await_356_);
v_extra_boxed_359_ = lean_unbox_uint64(v_extra_357_);
lean_dec_ref(v_extra_357_);
v_res_360_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v_await_boxed_358_, v_extra_boxed_359_);
v_r_361_ = lean_box_uint64(v_res_360_);
return v_r_361_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0(void){
_start:
{
uint64_t v___x_362_; uint8_t v___x_363_; uint64_t v___x_364_; 
v___x_362_ = 8ULL;
v___x_363_ = 0;
v___x_364_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v___x_363_, v___x_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(lean_object* v_o_366_, lean_object* v_name_367_, lean_object* v_args_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint64_t v___x_373_; lean_object* v___x_374_; 
v___x_370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_371_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_371_, 0, v_o_366_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
lean_inc_ref(v_name_367_);
v___x_372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_372_, 0, v_name_367_);
v___x_373_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0);
v___x_374_ = l_Lasm_JS_Value_invokeRaw(v___x_371_, v___x_372_, v_args_368_, v___x_373_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
v___x_376_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_377_ = lean_string_append(v___x_376_, v_name_367_);
lean_dec_ref(v_name_367_);
v___x_378_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v___x_377_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v___x_377_);
return v___x_378_;
}
else
{
lean_dec_ref(v_name_367_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___boxed(lean_object* v_o_379_, lean_object* v_name_380_, lean_object* v_args_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_o_379_, v_name_380_, v_args_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode(lean_object* v_self_385_, lean_object* v_input_386_){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_388_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encode___closed__0));
v___x_389_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_input_386_);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_mk_empty_array_with_capacity(v___x_390_);
v___x_392_ = lean_array_push(v___x_391_, v___x_389_);
v___x_393_ = l_Lasm_JS_Web_Support_args(v___x_392_);
v___x_394_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_self_385_, v___x_388_, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode___boxed(lean_object* v_self_395_, lean_object* v_input_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lasm_JS_Web_TextEncoder_encode(v_self_395_, v_input_396_);
return v_res_398_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = lean_nat_to_int(v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_414_, lean_object* v_key_415_){
_start:
{
if (lean_obj_tag(v_d_414_) == 8)
{
lean_object* v___x_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_462_; 
v___x_418_ = l_Lasm_JS_Data_field(v_d_414_, v_key_415_);
v_isSharedCheck_462_ = !lean_is_exclusive(v_d_414_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; 
v_unused_463_ = lean_ctor_get(v_d_414_, 0);
lean_dec(v_unused_463_);
v___x_420_ = v_d_414_;
v_isShared_421_ = v_isSharedCheck_462_;
goto v_resetjp_419_;
}
else
{
lean_dec(v_d_414_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_462_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v_a_423_; lean_object* v_a_449_; 
switch(lean_obj_tag(v___x_418_))
{
case 1:
{
lean_del_object(v___x_420_);
goto v___jp_416_;
}
case 0:
{
lean_del_object(v___x_420_);
goto v___jp_416_;
}
default: 
{
switch(lean_obj_tag(v___x_418_))
{
case 3:
{
double v_n_456_; lean_object* v___x_457_; 
v_n_456_ = lean_ctor_get_float(v___x_418_, 0);
v___x_457_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v___x_458_; 
v___x_458_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9));
v_a_423_ = v___x_458_;
goto v___jp_422_;
}
else
{
lean_object* v_val_459_; 
v_val_459_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_val_459_);
lean_dec_ref_known(v___x_457_, 1);
v_a_449_ = v_val_459_;
goto v___jp_448_;
}
}
case 5:
{
lean_object* v_i_460_; 
v_i_460_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_i_460_);
v_a_449_ = v_i_460_;
goto v___jp_448_;
}
default: 
{
lean_object* v___x_461_; 
v___x_461_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v_a_423_ = v___x_461_;
goto v___jp_422_;
}
}
}
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_424_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_425_ = lean_string_append(v___x_424_, v_key_415_);
v___x_426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_429_ = lean_string_append(v___x_427_, v___x_428_);
v___x_430_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_431_ = lean_string_append(v___x_429_, v___x_430_);
v___x_432_ = l_Lasm_JS_Data_describe(v___x_418_);
v___x_433_ = lean_string_append(v___x_431_, v___x_432_);
lean_dec_ref(v___x_432_);
v___x_434_ = lean_string_utf8_byte_size(v_a_423_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = lean_nat_dec_eq(v___x_434_, v___x_435_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_437_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_438_ = lean_string_append(v___x_437_, v_a_423_);
v___x_439_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_440_ = lean_string_append(v___x_438_, v___x_439_);
v___x_441_ = lean_string_append(v___x_433_, v___x_440_);
lean_dec_ref(v___x_440_);
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 0);
lean_ctor_set(v___x_420_, 0, v___x_441_);
v___x_443_ = v___x_420_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
else
{
lean_object* v___x_446_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 0);
lean_ctor_set(v___x_420_, 0, v___x_433_);
v___x_446_ = v___x_420_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_433_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
v___jp_448_:
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7);
v___x_451_ = lean_int_dec_le(v___x_450_, v_a_449_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; 
lean_dec(v_a_449_);
v___x_452_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8));
v_a_423_ = v___x_452_;
goto v___jp_422_;
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_del_object(v___x_420_);
lean_dec(v___x_418_);
v___x_453_ = l_Int_toNat(v_a_449_);
lean_dec(v_a_449_);
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
}
}
else
{
lean_object* v___x_464_; 
lean_dec(v_d_414_);
v___x_464_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11));
return v___x_464_;
}
v___jp_416_:
{
lean_object* v___x_417_; 
v___x_417_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_465_, lean_object* v_key_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_465_, v_key_466_);
lean_dec_ref(v_key_466_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(lean_object* v_context_468_, lean_object* v_d_469_){
_start:
{
lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_478_; lean_object* v_received_479_; lean_object* v___y_498_; lean_object* v_a_501_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0));
lean_inc(v_d_469_);
v___x_526_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_469_, v___x_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
v_a_501_ = v_a_527_;
goto v___jp_500_;
}
else
{
lean_object* v_a_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_a_528_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_526_, 1);
v___x_529_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1));
lean_inc(v_d_469_);
v___x_530_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_469_, v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; 
lean_dec(v_a_528_);
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v_a_501_ = v_a_531_;
goto v___jp_500_;
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_540_; 
lean_dec(v_d_469_);
v_a_532_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_540_ == 0)
{
v___x_534_ = v___x_530_;
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_530_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_a_528_);
lean_ctor_set(v___x_536_, 1, v_a_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
lean_ctor_set(v___x_534_, 0, v___x_536_);
v___x_538_ = v___x_534_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
v___jp_471_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = lean_string_append(v___y_472_, v___y_473_);
lean_dec_ref(v___y_473_);
v___x_475_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_481_ = lean_string_append(v___x_480_, v_context_468_);
v___x_482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_483_ = lean_string_append(v___x_481_, v___x_482_);
v___x_484_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2));
v___x_485_ = lean_string_append(v___x_483_, v___x_484_);
v___x_486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_487_ = lean_string_append(v___x_485_, v___x_486_);
v___x_488_ = lean_string_append(v___x_487_, v_received_479_);
lean_dec_ref(v_received_479_);
v___x_489_ = lean_string_utf8_byte_size(v___y_478_);
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_nat_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_492_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_493_ = lean_string_append(v___x_492_, v___y_478_);
lean_dec_ref(v___y_478_);
v___x_494_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
v___y_472_ = v___x_488_;
v___y_473_ = v___x_495_;
goto v___jp_471_;
}
else
{
lean_object* v___x_496_; 
lean_dec_ref(v___y_478_);
v___x_496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___y_472_ = v___x_488_;
v___y_473_ = v___x_496_;
goto v___jp_471_;
}
}
v___jp_497_:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lasm_JS_Data_describe(v_d_469_);
v___y_478_ = v___y_498_;
v_received_479_ = v___x_499_;
goto v___jp_477_;
}
v___jp_500_:
{
if (lean_obj_tag(v_d_469_) == 9)
{
lean_object* v_value_502_; lean_object* v_description_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v_value_502_ = lean_ctor_get(v_d_469_, 0);
v_description_503_ = lean_ctor_get(v_d_469_, 1);
v___x_504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_505_ = lean_string_dec_eq(v_description_503_, v___x_504_);
if (v___x_505_ == 0)
{
v___y_498_ = v_a_501_;
goto v___jp_497_;
}
else
{
lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_522_; 
lean_inc(v_value_502_);
v_isSharedCheck_522_ = !lean_is_exclusive(v_d_469_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; lean_object* v_unused_524_; 
v_unused_523_ = lean_ctor_get(v_d_469_, 1);
lean_dec(v_unused_523_);
v_unused_524_ = lean_ctor_get(v_d_469_, 0);
lean_dec(v_unused_524_);
v___x_507_ = v_d_469_;
v_isShared_508_ = v_isSharedCheck_522_;
goto v_resetjp_506_;
}
else
{
lean_dec(v_d_469_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_522_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
uint32_t v___x_509_; uint64_t v___x_510_; lean_object* v___x_512_; 
v___x_509_ = 206;
v___x_510_ = 0ULL;
lean_inc(v_value_502_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v___x_504_);
v___x_512_ = v___x_507_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_value_502_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_504_);
v___x_512_ = v_reuseFailAlloc_521_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
uint32_t v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lasm_js_value_handle(v_value_502_);
lean_dec(v_value_502_);
v___x_514_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_509_, v___x_510_, v___x_512_, v___x_513_);
lean_dec_ref(v___x_512_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; uint8_t v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_514_, 1);
v___x_516_ = lean_string_validate_utf8(v_a_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; 
lean_dec(v_a_515_);
v___x_517_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_518_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_517_);
v___y_478_ = v_a_501_;
v_received_479_ = v___x_518_;
goto v___jp_477_;
}
else
{
lean_object* v___x_519_; 
v___x_519_ = lean_string_from_utf8_unchecked(v_a_515_);
v___y_478_ = v_a_501_;
v_received_479_ = v___x_519_;
goto v___jp_477_;
}
}
else
{
lean_object* v___x_520_; 
lean_dec_ref_known(v___x_514_, 1);
v___x_520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v___y_478_ = v_a_501_;
v_received_479_ = v___x_520_;
goto v___jp_477_;
}
}
}
}
}
else
{
v___y_498_ = v_a_501_;
goto v___jp_497_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2___boxed(lean_object* v_context_541_, lean_object* v_d_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_541_, v_d_542_);
lean_dec_ref(v_context_541_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(lean_object* v_context_545_, lean_object* v_bytes_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_546_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_550_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_545_, v_a_549_);
return v___x_550_;
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_548_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_548_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1___boxed(lean_object* v_context_559_, lean_object* v_bytes_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v_context_559_, v_bytes_560_);
lean_dec_ref(v_bytes_560_);
lean_dec_ref(v_context_559_);
return v_res_562_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(uint8_t v_await_563_, uint64_t v_extra_564_){
_start:
{
uint64_t v___x_565_; uint64_t v___y_567_; 
v___x_565_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_563_ == 0)
{
uint64_t v___x_570_; 
v___x_570_ = 0ULL;
v___y_567_ = v___x_570_;
goto v___jp_566_;
}
else
{
uint64_t v___x_571_; 
v___x_571_ = 2ULL;
v___y_567_ = v___x_571_;
goto v___jp_566_;
}
v___jp_566_:
{
uint64_t v___x_568_; uint64_t v___x_569_; 
v___x_568_ = lean_uint64_lor(v___x_565_, v___y_567_);
v___x_569_ = lean_uint64_lor(v___x_568_, v_extra_564_);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0___boxed(lean_object* v_await_572_, lean_object* v_extra_573_){
_start:
{
uint8_t v_await_boxed_574_; uint64_t v_extra_boxed_575_; uint64_t v_res_576_; lean_object* v_r_577_; 
v_await_boxed_574_ = lean_unbox(v_await_572_);
v_extra_boxed_575_ = lean_unbox_uint64(v_extra_573_);
lean_dec_ref(v_extra_573_);
v_res_576_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v_await_boxed_574_, v_extra_boxed_575_);
v_r_577_ = lean_box_uint64(v_res_576_);
return v_r_577_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0(void){
_start:
{
uint64_t v___x_578_; uint8_t v___x_579_; uint64_t v___x_580_; 
v___x_578_ = 8ULL;
v___x_579_ = 0;
v___x_580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v___x_579_, v___x_578_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(lean_object* v_o_581_, lean_object* v_name_582_, lean_object* v_args_583_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; uint64_t v___x_588_; lean_object* v___x_589_; 
v___x_585_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_586_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_586_, 0, v_o_581_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
lean_inc_ref(v_name_582_);
v___x_587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_587_, 0, v_name_582_);
v___x_588_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0);
v___x_589_ = l_Lasm_JS_Value_invokeRaw(v___x_586_, v___x_587_, v_args_583_, v___x_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_592_ = lean_string_append(v___x_591_, v_name_582_);
lean_dec_ref(v_name_582_);
v___x_593_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v___x_592_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v___x_592_);
return v___x_593_;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v_name_582_);
v_a_594_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_589_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_589_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___boxed(lean_object* v_o_602_, lean_object* v_name_603_, lean_object* v_args_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_o_602_, v_name_603_, v_args_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto(lean_object* v_self_608_, lean_object* v_source_609_, lean_object* v_destination_610_){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_612_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0));
v___x_613_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_613_, 0, v_source_609_);
v___x_614_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_614_, 0, v_destination_610_);
v___x_615_ = lean_unsigned_to_nat(2u);
v___x_616_ = lean_mk_empty_array_with_capacity(v___x_615_);
v___x_617_ = lean_array_push(v___x_616_, v___x_613_);
v___x_618_ = lean_array_push(v___x_617_, v___x_614_);
v___x_619_ = l_Lasm_JS_Web_Support_args(v___x_618_);
v___x_620_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_self_608_, v___x_612_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto___boxed(lean_object* v_self_621_, lean_object* v_source_622_, lean_object* v_destination_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lasm_JS_Web_TextEncoder_encodeInto(v_self_621_, v_source_622_, v_destination_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f(lean_object* v_v_632_){
_start:
{
lean_object* v___f_634_; lean_object* v___x_635_; 
v___f_634_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_cast_x3f___closed__2));
lean_inc(v_v_632_);
v___x_635_ = l_Lasm_JS_Web_Support_isInstance(v___f_634_, v_v_632_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_649_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_649_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_649_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_649_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
uint8_t v___x_640_; 
v___x_640_ = lean_unbox(v_a_636_);
lean_dec(v_a_636_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_643_; 
lean_dec(v_v_632_);
v___x_641_ = lean_box(0);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_641_);
v___x_643_ = v___x_638_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
else
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v_v_632_);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_645_);
v___x_647_ = v___x_638_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec(v_v_632_);
v_a_650_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_635_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_635_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_cast_x3f___boxed(lean_object* v_v_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_JS_Web_TextDecoder_cast_x3f(v_v_658_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(lean_object* v_x_661_){
_start:
{
if (lean_obj_tag(v_x_661_) == 0)
{
lean_object* v___x_662_; 
v___x_662_ = lean_box(0);
return v___x_662_;
}
else
{
lean_object* v_val_663_; lean_object* v_fatal_664_; lean_object* v_ignoreBOM_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_682_; 
v_val_663_ = lean_ctor_get(v_x_661_, 0);
lean_inc(v_val_663_);
lean_dec_ref_known(v_x_661_, 1);
v_fatal_664_ = lean_ctor_get(v_val_663_, 0);
v_ignoreBOM_665_ = lean_ctor_get(v_val_663_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_val_663_);
if (v_isSharedCheck_682_ == 0)
{
v___x_667_ = v_val_663_;
v_isShared_668_ = v_isSharedCheck_682_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_ignoreBOM_665_);
lean_inc(v_fatal_664_);
lean_dec(v_val_663_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_682_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_670_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_fatal_664_);
lean_dec(v_fatal_664_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_670_);
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_672_ = v___x_667_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v___x_670_);
v___x_672_ = v_reuseFailAlloc_681_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_673_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_674_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ignoreBOM_665_);
lean_dec(v_ignoreBOM_665_);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_unsigned_to_nat(2u);
v___x_677_ = lean_mk_empty_array_with_capacity(v___x_676_);
v___x_678_ = lean_array_push(v___x_677_, v___x_672_);
v___x_679_ = lean_array_push(v___x_678_, v___x_675_);
v___x_680_ = l_Lasm_JS_Web_Support_fields(v___x_679_);
lean_dec_ref(v___x_679_);
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(lean_object* v_context_683_, lean_object* v_d_684_){
_start:
{
lean_object* v___y_687_; lean_object* v___y_688_; 
if (lean_obj_tag(v_d_684_) == 9)
{
lean_object* v_value_692_; lean_object* v___x_693_; 
v_value_692_ = lean_ctor_get(v_d_684_, 0);
lean_inc(v_value_692_);
lean_dec_ref_known(v_d_684_, 2);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v_value_692_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v_received_696_; 
v___x_694_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_684_) == 9)
{
lean_object* v_value_710_; lean_object* v_description_711_; uint8_t v___x_712_; 
v_value_710_ = lean_ctor_get(v_d_684_, 0);
v_description_711_ = lean_ctor_get(v_d_684_, 1);
v___x_712_ = lean_string_dec_eq(v_description_711_, v___x_694_);
if (v___x_712_ == 0)
{
goto v___jp_708_;
}
else
{
uint32_t v___x_713_; uint64_t v___x_714_; lean_object* v___x_715_; uint32_t v___x_716_; lean_object* v___x_717_; 
lean_inc_n(v_value_710_, 2);
lean_dec_ref_known(v_d_684_, 2);
v___x_713_ = 206;
v___x_714_ = 0ULL;
v___x_715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_715_, 0, v_value_710_);
lean_ctor_set(v___x_715_, 1, v___x_694_);
v___x_716_ = lasm_js_value_handle(v_value_710_);
lean_dec(v_value_710_);
v___x_717_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_713_, v___x_714_, v___x_715_, v___x_716_);
lean_dec_ref_known(v___x_715_, 2);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; uint8_t v___x_719_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref_known(v___x_717_, 1);
v___x_719_ = lean_string_validate_utf8(v_a_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v_a_718_);
v___x_720_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_721_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_720_);
v_received_696_ = v___x_721_;
goto v___jp_695_;
}
else
{
lean_object* v___x_722_; 
v___x_722_ = lean_string_from_utf8_unchecked(v_a_718_);
v_received_696_ = v___x_722_;
goto v___jp_695_;
}
}
else
{
lean_object* v___x_723_; 
lean_dec_ref_known(v___x_717_, 1);
v___x_723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_696_ = v___x_723_;
goto v___jp_695_;
}
}
}
else
{
goto v___jp_708_;
}
v___jp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_697_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_698_ = lean_string_append(v___x_697_, v_context_683_);
v___x_699_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_700_ = lean_string_append(v___x_698_, v___x_699_);
v___x_701_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoder___closed__0));
v___x_702_ = lean_string_append(v___x_700_, v___x_701_);
v___x_703_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
v___x_705_ = lean_string_append(v___x_704_, v_received_696_);
lean_dec_ref(v_received_696_);
v___x_706_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; 
v___x_707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_687_ = v___x_705_;
v___y_688_ = v___x_707_;
goto v___jp_686_;
}
else
{
v___y_687_ = v___x_705_;
v___y_688_ = v___x_694_;
goto v___jp_686_;
}
}
v___jp_708_:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lasm_JS_Data_describe(v_d_684_);
v_received_696_ = v___x_709_;
goto v___jp_695_;
}
}
v___jp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_string_append(v___y_687_, v___y_688_);
v___x_690_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
v___x_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1___boxed(lean_object* v_context_724_, lean_object* v_d_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v_context_724_, v_d_725_);
lean_dec_ref(v_context_724_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(lean_object* v_b_728_, lean_object* v_args_729_, uint8_t v_await_730_){
_start:
{
uint64_t v___y_733_; uint64_t v___y_734_; uint64_t v___x_777_; uint64_t v___y_779_; 
v___x_777_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_730_ == 0)
{
uint64_t v___x_784_; 
v___x_784_ = 0ULL;
v___y_779_ = v___x_784_;
goto v___jp_778_;
}
else
{
uint64_t v___x_785_; 
v___x_785_ = 2ULL;
v___y_779_ = v___x_785_;
goto v___jp_778_;
}
v___jp_732_:
{
uint64_t v_flags_735_; uint32_t v___x_736_; lean_object* v___x_737_; uint32_t v___x_738_; lean_object* v___x_739_; 
v_flags_735_ = lean_uint64_lor(v___y_733_, v___y_734_);
v___x_736_ = 214;
v___x_737_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_728_, v_args_729_);
v___x_738_ = 0;
v___x_739_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_736_, v_flags_735_, v___x_737_, v___x_738_);
lean_dec(v___x_737_);
if (lean_obj_tag(v___x_739_) == 0)
{
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_741_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_740_);
lean_dec(v_a_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_728_);
v___x_744_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v___x_743_, v_a_742_);
lean_dec_ref(v___x_743_);
return v___x_744_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_a_745_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_741_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_741_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
v_a_753_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_739_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_739_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 1);
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_776_; 
v_a_761_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_776_ == 0)
{
v___x_763_ = v___x_739_;
v_isShared_764_ = v_isSharedCheck_776_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_739_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_776_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_765_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_766_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_728_);
v___x_767_ = lean_string_append(v___x_765_, v___x_766_);
lean_dec_ref(v___x_766_);
v___x_768_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_769_ = lean_string_append(v___x_767_, v___x_768_);
v___x_770_ = lean_io_error_to_string(v_a_761_);
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
lean_dec_ref(v___x_770_);
v___x_772_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v___x_772_);
v___x_774_ = v___x_763_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
v___jp_778_:
{
uint8_t v_construct_780_; uint64_t v___x_781_; 
v_construct_780_ = lean_ctor_get_uint8(v_b_728_, sizeof(void*)*4);
v___x_781_ = lean_uint64_lor(v___x_777_, v___y_779_);
if (v_construct_780_ == 0)
{
uint64_t v___x_782_; 
v___x_782_ = 0ULL;
v___y_733_ = v___x_781_;
v___y_734_ = v___x_782_;
goto v___jp_732_;
}
else
{
uint64_t v___x_783_; 
v___x_783_ = 4ULL;
v___y_733_ = v___x_781_;
v___y_734_ = v___x_783_;
goto v___jp_732_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1___boxed(lean_object* v_b_786_, lean_object* v_args_787_, lean_object* v_await_788_, lean_object* v_a_789_){
_start:
{
uint8_t v_await_boxed_790_; lean_object* v_res_791_; 
v_await_boxed_790_ = lean_unbox(v_await_788_);
v_res_791_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v_b_786_, v_args_787_, v_await_boxed_790_);
lean_dec_ref(v_b_786_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new(lean_object* v_label_799_, lean_object* v_options_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; uint8_t v___x_810_; lean_object* v___x_811_; 
v___x_802_ = lean_unsigned_to_nat(2u);
v___x_803_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_new___closed__1));
v___x_804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_799_);
v___x_805_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_800_);
v___x_806_ = lean_mk_empty_array_with_capacity(v___x_802_);
v___x_807_ = lean_array_push(v___x_806_, v___x_804_);
v___x_808_ = lean_array_push(v___x_807_, v___x_805_);
v___x_809_ = l_Lasm_JS_Web_Support_args(v___x_808_);
v___x_810_ = 0;
v___x_811_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v___x_803_, v___x_809_, v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new___boxed(lean_object* v_label_812_, lean_object* v_options_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Web_TextDecoder_new(v_label_812_, v_options_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding(lean_object* v_self_816_){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_819_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_816_, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding___boxed(lean_object* v_self_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lasm_JS_Web_TextDecoder_encoding(v_self_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal(lean_object* v_self_823_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_826_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_823_, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal___boxed(lean_object* v_self_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_JS_Web_TextDecoder_fatal(v_self_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM(lean_object* v_self_830_){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_833_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_830_, v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM___boxed(lean_object* v_self_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lasm_JS_Web_TextDecoder_ignoreBOM(v_self_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(lean_object* v_x_837_){
_start:
{
if (lean_obj_tag(v_x_837_) == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_box(0);
return v___x_838_;
}
else
{
lean_object* v_val_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_val_839_ = lean_ctor_get(v_x_837_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_x_837_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v_x_837_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_val_839_);
lean_dec(v_x_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set_tag(v___x_841_, 6);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_val_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(uint8_t v_await_847_, uint64_t v_extra_848_){
_start:
{
uint64_t v___x_849_; uint64_t v___y_851_; 
v___x_849_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_847_ == 0)
{
uint64_t v___x_854_; 
v___x_854_ = 0ULL;
v___y_851_ = v___x_854_;
goto v___jp_850_;
}
else
{
uint64_t v___x_855_; 
v___x_855_ = 2ULL;
v___y_851_ = v___x_855_;
goto v___jp_850_;
}
v___jp_850_:
{
uint64_t v___x_852_; uint64_t v___x_853_; 
v___x_852_ = lean_uint64_lor(v___x_849_, v___y_851_);
v___x_853_ = lean_uint64_lor(v___x_852_, v_extra_848_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2___boxed(lean_object* v_await_856_, lean_object* v_extra_857_){
_start:
{
uint8_t v_await_boxed_858_; uint64_t v_extra_boxed_859_; uint64_t v_res_860_; lean_object* v_r_861_; 
v_await_boxed_858_ = lean_unbox(v_await_856_);
v_extra_boxed_859_ = lean_unbox_uint64(v_extra_857_);
lean_dec_ref(v_extra_857_);
v_res_860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v_await_boxed_858_, v_extra_boxed_859_);
v_r_861_ = lean_box_uint64(v_res_860_);
return v_r_861_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0(void){
_start:
{
uint64_t v___x_862_; uint8_t v___x_863_; uint64_t v___x_864_; 
v___x_862_ = 8ULL;
v___x_863_ = 0;
v___x_864_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v___x_863_, v___x_862_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(lean_object* v_o_865_, lean_object* v_name_866_, lean_object* v_args_867_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; uint64_t v___x_872_; lean_object* v___x_873_; 
v___x_869_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_870_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_870_, 0, v_o_865_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_inc_ref(v_name_866_);
v___x_871_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_871_, 0, v_name_866_);
v___x_872_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0);
v___x_873_ = l_Lasm_JS_Value_invokeRaw(v___x_870_, v___x_871_, v_args_867_, v___x_872_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_873_, 1);
v___x_875_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_876_ = lean_string_append(v___x_875_, v_name_866_);
lean_dec_ref(v_name_866_);
v___x_877_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_876_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v___x_876_);
return v___x_877_;
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec_ref(v_name_866_);
v_a_878_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_873_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_873_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___boxed(lean_object* v_o_886_, lean_object* v_name_887_, lean_object* v_args_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_o_886_, v_name_887_, v_args_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(lean_object* v_x_891_){
_start:
{
if (lean_obj_tag(v_x_891_) == 0)
{
lean_object* v___x_892_; 
v___x_892_ = lean_box(0);
return v___x_892_;
}
else
{
lean_object* v_val_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_val_893_ = lean_ctor_get(v_x_891_, 0);
v___x_894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0));
v___x_895_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_893_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = lean_unsigned_to_nat(1u);
v___x_898_ = lean_mk_empty_array_with_capacity(v___x_897_);
v___x_899_ = lean_array_push(v___x_898_, v___x_896_);
v___x_900_ = l_Lasm_JS_Web_Support_fields(v___x_899_);
lean_dec_ref(v___x_899_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1___boxed(lean_object* v_x_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_x_901_);
lean_dec(v_x_901_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode(lean_object* v_self_904_, lean_object* v_input_905_, lean_object* v_options_906_){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_908_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_decode___closed__0));
v___x_909_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(v_input_905_);
v___x_910_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_options_906_);
v___x_911_ = lean_unsigned_to_nat(2u);
v___x_912_ = lean_mk_empty_array_with_capacity(v___x_911_);
v___x_913_ = lean_array_push(v___x_912_, v___x_909_);
v___x_914_ = lean_array_push(v___x_913_, v___x_910_);
v___x_915_ = l_Lasm_JS_Web_Support_args(v___x_914_);
v___x_916_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_self_904_, v___x_908_, v___x_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode___boxed(lean_object* v_self_917_, lean_object* v_input_918_, lean_object* v_options_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lasm_JS_Web_TextDecoder_decode(v_self_917_, v_input_918_, v_options_919_);
lean_dec(v_options_919_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f(lean_object* v_v_928_){
_start:
{
lean_object* v___f_930_; lean_object* v___x_931_; 
v___f_930_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_cast_x3f___closed__2));
lean_inc(v_v_928_);
v___x_931_ = l_Lasm_JS_Web_Support_isInstance(v___f_930_, v_v_928_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_945_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_945_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_945_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_945_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
uint8_t v___x_936_; 
v___x_936_ = lean_unbox(v_a_932_);
lean_dec(v_a_932_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_939_; 
lean_dec(v_v_928_);
v___x_937_ = lean_box(0);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_937_);
v___x_939_ = v___x_934_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_943_; 
v___x_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_941_, 0, v_v_928_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_941_);
v___x_943_ = v___x_934_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_v_928_);
v_a_946_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_931_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_931_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_cast_x3f___boxed(lean_object* v_v_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lasm_JS_Web_TextEncoderStream_cast_x3f(v_v_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(lean_object* v_context_957_, lean_object* v_d_958_){
_start:
{
lean_object* v___y_961_; lean_object* v___y_962_; 
if (lean_obj_tag(v_d_958_) == 9)
{
lean_object* v_value_966_; lean_object* v___x_967_; 
v_value_966_ = lean_ctor_get(v_d_958_, 0);
lean_inc(v_value_966_);
lean_dec_ref_known(v_d_958_, 2);
v___x_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_967_, 0, v_value_966_);
return v___x_967_;
}
else
{
lean_object* v___x_968_; lean_object* v_received_970_; 
v___x_968_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_958_) == 9)
{
lean_object* v_value_984_; lean_object* v_description_985_; uint8_t v___x_986_; 
v_value_984_ = lean_ctor_get(v_d_958_, 0);
v_description_985_ = lean_ctor_get(v_d_958_, 1);
v___x_986_ = lean_string_dec_eq(v_description_985_, v___x_968_);
if (v___x_986_ == 0)
{
goto v___jp_982_;
}
else
{
uint32_t v___x_987_; uint64_t v___x_988_; lean_object* v___x_989_; uint32_t v___x_990_; lean_object* v___x_991_; 
lean_inc_n(v_value_984_, 2);
lean_dec_ref_known(v_d_958_, 2);
v___x_987_ = 206;
v___x_988_ = 0ULL;
v___x_989_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_989_, 0, v_value_984_);
lean_ctor_set(v___x_989_, 1, v___x_968_);
v___x_990_ = lasm_js_value_handle(v_value_984_);
lean_dec(v_value_984_);
v___x_991_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_987_, v___x_988_, v___x_989_, v___x_990_);
lean_dec_ref_known(v___x_989_, 2);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; uint8_t v___x_993_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = lean_string_validate_utf8(v_a_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v___x_995_; 
lean_dec(v_a_992_);
v___x_994_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_995_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_994_);
v_received_970_ = v___x_995_;
goto v___jp_969_;
}
else
{
lean_object* v___x_996_; 
v___x_996_ = lean_string_from_utf8_unchecked(v_a_992_);
v_received_970_ = v___x_996_;
goto v___jp_969_;
}
}
else
{
lean_object* v___x_997_; 
lean_dec_ref_known(v___x_991_, 1);
v___x_997_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_970_ = v___x_997_;
goto v___jp_969_;
}
}
}
else
{
goto v___jp_982_;
}
v___jp_969_:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_971_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_972_ = lean_string_append(v___x_971_, v_context_957_);
v___x_973_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_974_ = lean_string_append(v___x_972_, v___x_973_);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0));
v___x_976_ = lean_string_append(v___x_974_, v___x_975_);
v___x_977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_978_ = lean_string_append(v___x_976_, v___x_977_);
v___x_979_ = lean_string_append(v___x_978_, v_received_970_);
lean_dec_ref(v_received_970_);
v___x_980_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
v___x_981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_961_ = v___x_979_;
v___y_962_ = v___x_981_;
goto v___jp_960_;
}
else
{
v___y_961_ = v___x_979_;
v___y_962_ = v___x_968_;
goto v___jp_960_;
}
}
v___jp_982_:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lasm_JS_Data_describe(v_d_958_);
v_received_970_ = v___x_983_;
goto v___jp_969_;
}
}
v___jp_960_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = lean_string_append(v___y_961_, v___y_962_);
v___x_964_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
v___x_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_998_, lean_object* v_d_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v_context_998_, v_d_999_);
lean_dec_ref(v_context_998_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(lean_object* v_b_1002_, lean_object* v_args_1003_, uint8_t v_await_1004_){
_start:
{
uint64_t v___y_1007_; uint64_t v___y_1008_; uint64_t v___x_1051_; uint64_t v___y_1053_; 
v___x_1051_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_1004_ == 0)
{
uint64_t v___x_1058_; 
v___x_1058_ = 0ULL;
v___y_1053_ = v___x_1058_;
goto v___jp_1052_;
}
else
{
uint64_t v___x_1059_; 
v___x_1059_ = 2ULL;
v___y_1053_ = v___x_1059_;
goto v___jp_1052_;
}
v___jp_1006_:
{
uint64_t v_flags_1009_; uint32_t v___x_1010_; lean_object* v___x_1011_; uint32_t v___x_1012_; lean_object* v___x_1013_; 
v_flags_1009_ = lean_uint64_lor(v___y_1007_, v___y_1008_);
v___x_1010_ = 214;
v___x_1011_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1002_, v_args_1003_);
v___x_1012_ = 0;
v___x_1013_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1010_, v_flags_1009_, v___x_1011_, v___x_1012_);
lean_dec(v___x_1011_);
if (lean_obj_tag(v___x_1013_) == 0)
{
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1015_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_a_1014_);
lean_dec_ref_known(v___x_1013_, 1);
v___x_1015_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1014_);
lean_dec(v_a_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1017_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1002_);
v___x_1018_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v___x_1017_, v_a_1016_);
lean_dec_ref(v___x_1017_);
return v___x_1018_;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1015_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1015_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1013_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1013_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set_tag(v___x_1029_, 1);
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1050_; 
v_a_1035_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1037_ = v___x_1013_;
v_isShared_1038_ = v_isSharedCheck_1050_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1013_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1050_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1039_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1040_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1002_);
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
lean_dec_ref(v___x_1040_);
v___x_1042_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_1043_ = lean_string_append(v___x_1041_, v___x_1042_);
v___x_1044_ = lean_io_error_to_string(v_a_1035_);
v___x_1045_ = lean_string_append(v___x_1043_, v___x_1044_);
lean_dec_ref(v___x_1044_);
v___x_1046_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1046_);
v___x_1048_ = v___x_1037_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
v___jp_1052_:
{
uint8_t v_construct_1054_; uint64_t v___x_1055_; 
v_construct_1054_ = lean_ctor_get_uint8(v_b_1002_, sizeof(void*)*4);
v___x_1055_ = lean_uint64_lor(v___x_1051_, v___y_1053_);
if (v_construct_1054_ == 0)
{
uint64_t v___x_1056_; 
v___x_1056_ = 0ULL;
v___y_1007_ = v___x_1055_;
v___y_1008_ = v___x_1056_;
goto v___jp_1006_;
}
else
{
uint64_t v___x_1057_; 
v___x_1057_ = 4ULL;
v___y_1007_ = v___x_1055_;
v___y_1008_ = v___x_1057_;
goto v___jp_1006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0___boxed(lean_object* v_b_1060_, lean_object* v_args_1061_, lean_object* v_await_1062_, lean_object* v_a_1063_){
_start:
{
uint8_t v_await_boxed_1064_; lean_object* v_res_1065_; 
v_await_boxed_1064_ = lean_unbox(v_await_1062_);
v_res_1065_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v_b_1060_, v_args_1061_, v_await_boxed_1064_);
lean_dec_ref(v_b_1060_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new(){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; 
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_new___closed__1));
v___x_1075_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__4, &l_Lasm_JS_Web_TextEncoder_new___closed__4_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__4);
v___x_1076_ = 0;
v___x_1077_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v___x_1074_, v___x_1075_, v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new___boxed(lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Web_TextEncoderStream_new();
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding(lean_object* v_self_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_1083_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1080_, v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding___boxed(lean_object* v_self_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lasm_JS_Web_TextEncoderStream_encoding(v_self_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable(lean_object* v_self_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_1091_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1088_, v___x_1090_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1091_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1092_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
v_a_1100_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1091_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1091_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable___boxed(lean_object* v_self_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lasm_JS_Web_TextEncoderStream_readable(v_self_1108_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable(lean_object* v_self_1112_){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_1115_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1112_, v___x_1114_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_a_1124_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1115_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1115_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable___boxed(lean_object* v_self_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lasm_JS_Web_TextEncoderStream_writable(v_self_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f(lean_object* v_v_1141_){
_start:
{
lean_object* v___f_1143_; lean_object* v___x_1144_; 
v___f_1143_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoderStream_cast_x3f___closed__2));
lean_inc(v_v_1141_);
v___x_1144_ = l_Lasm_JS_Web_Support_isInstance(v___f_1143_, v_v_1141_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1158_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1158_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1158_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
uint8_t v___x_1149_; 
v___x_1149_ = lean_unbox(v_a_1145_);
lean_dec(v_a_1145_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
lean_dec(v_v_1141_);
v___x_1150_ = lean_box(0);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1150_);
v___x_1152_ = v___x_1147_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1156_; 
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_v_1141_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1154_);
v___x_1156_ = v___x_1147_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1154_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec(v_v_1141_);
v_a_1159_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1144_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1144_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_cast_x3f___boxed(lean_object* v_v_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lasm_JS_Web_TextDecoderStream_cast_x3f(v_v_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(lean_object* v_context_1170_, lean_object* v_d_1171_){
_start:
{
lean_object* v___y_1174_; lean_object* v___y_1175_; 
if (lean_obj_tag(v_d_1171_) == 9)
{
lean_object* v_value_1179_; lean_object* v___x_1180_; 
v_value_1179_ = lean_ctor_get(v_d_1171_, 0);
lean_inc(v_value_1179_);
lean_dec_ref_known(v_d_1171_, 2);
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v_value_1179_);
return v___x_1180_;
}
else
{
lean_object* v___x_1181_; lean_object* v_received_1183_; 
v___x_1181_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_1171_) == 9)
{
lean_object* v_value_1197_; lean_object* v_description_1198_; uint8_t v___x_1199_; 
v_value_1197_ = lean_ctor_get(v_d_1171_, 0);
v_description_1198_ = lean_ctor_get(v_d_1171_, 1);
v___x_1199_ = lean_string_dec_eq(v_description_1198_, v___x_1181_);
if (v___x_1199_ == 0)
{
goto v___jp_1195_;
}
else
{
uint32_t v___x_1200_; uint64_t v___x_1201_; lean_object* v___x_1202_; uint32_t v___x_1203_; lean_object* v___x_1204_; 
lean_inc_n(v_value_1197_, 2);
lean_dec_ref_known(v_d_1171_, 2);
v___x_1200_ = 206;
v___x_1201_ = 0ULL;
v___x_1202_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1202_, 0, v_value_1197_);
lean_ctor_set(v___x_1202_, 1, v___x_1181_);
v___x_1203_ = lasm_js_value_handle(v_value_1197_);
lean_dec(v_value_1197_);
v___x_1204_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1200_, v___x_1201_, v___x_1202_, v___x_1203_);
lean_dec_ref_known(v___x_1202_, 2);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; uint8_t v___x_1206_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = lean_string_validate_utf8(v_a_1205_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_dec(v_a_1205_);
v___x_1207_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_1208_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1207_);
v_received_1183_ = v___x_1208_;
goto v___jp_1182_;
}
else
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_string_from_utf8_unchecked(v_a_1205_);
v_received_1183_ = v___x_1209_;
goto v___jp_1182_;
}
}
else
{
lean_object* v___x_1210_; 
lean_dec_ref_known(v___x_1204_, 1);
v___x_1210_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_1183_ = v___x_1210_;
goto v___jp_1182_;
}
}
}
else
{
goto v___jp_1195_;
}
v___jp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1184_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1185_ = lean_string_append(v___x_1184_, v_context_1170_);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_1187_ = lean_string_append(v___x_1185_, v___x_1186_);
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0));
v___x_1189_ = lean_string_append(v___x_1187_, v___x_1188_);
v___x_1190_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_1191_ = lean_string_append(v___x_1189_, v___x_1190_);
v___x_1192_ = lean_string_append(v___x_1191_, v_received_1183_);
lean_dec_ref(v_received_1183_);
v___x_1193_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; 
v___x_1194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_1174_ = v___x_1192_;
v___y_1175_ = v___x_1194_;
goto v___jp_1173_;
}
else
{
v___y_1174_ = v___x_1192_;
v___y_1175_ = v___x_1181_;
goto v___jp_1173_;
}
}
v___jp_1195_:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lasm_JS_Data_describe(v_d_1171_);
v_received_1183_ = v___x_1196_;
goto v___jp_1182_;
}
}
v___jp_1173_:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = lean_string_append(v___y_1174_, v___y_1175_);
v___x_1177_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
v___x_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
return v___x_1178_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_1211_, lean_object* v_d_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v_context_1211_, v_d_1212_);
lean_dec_ref(v_context_1211_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(lean_object* v_b_1215_, lean_object* v_args_1216_, uint8_t v_await_1217_){
_start:
{
uint64_t v___y_1220_; uint64_t v___y_1221_; uint64_t v___x_1264_; uint64_t v___y_1266_; 
v___x_1264_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_1217_ == 0)
{
uint64_t v___x_1271_; 
v___x_1271_ = 0ULL;
v___y_1266_ = v___x_1271_;
goto v___jp_1265_;
}
else
{
uint64_t v___x_1272_; 
v___x_1272_ = 2ULL;
v___y_1266_ = v___x_1272_;
goto v___jp_1265_;
}
v___jp_1219_:
{
uint64_t v_flags_1222_; uint32_t v___x_1223_; lean_object* v___x_1224_; uint32_t v___x_1225_; lean_object* v___x_1226_; 
v_flags_1222_ = lean_uint64_lor(v___y_1220_, v___y_1221_);
v___x_1223_ = 214;
v___x_1224_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1215_, v_args_1216_);
v___x_1225_ = 0;
v___x_1226_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1223_, v_flags_1222_, v___x_1224_, v___x_1225_);
lean_dec(v___x_1224_);
if (lean_obj_tag(v___x_1226_) == 0)
{
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1228_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1227_);
lean_dec_ref_known(v___x_1226_, 1);
v___x_1228_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1227_);
lean_dec(v_a_1227_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v___x_1230_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1215_);
v___x_1231_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v___x_1230_, v_a_1229_);
lean_dec_ref(v___x_1230_);
return v___x_1231_;
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1228_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1228_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
v_a_1240_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1226_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1226_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set_tag(v___x_1242_, 1);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1263_; 
v_a_1248_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1250_ = v___x_1226_;
v_isShared_1251_ = v_isSharedCheck_1263_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1226_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1263_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1253_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1215_);
v___x_1254_ = lean_string_append(v___x_1252_, v___x_1253_);
lean_dec_ref(v___x_1253_);
v___x_1255_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_1256_ = lean_string_append(v___x_1254_, v___x_1255_);
v___x_1257_ = lean_io_error_to_string(v_a_1248_);
v___x_1258_ = lean_string_append(v___x_1256_, v___x_1257_);
lean_dec_ref(v___x_1257_);
v___x_1259_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1259_);
v___x_1261_ = v___x_1250_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
v___jp_1265_:
{
uint8_t v_construct_1267_; uint64_t v___x_1268_; 
v_construct_1267_ = lean_ctor_get_uint8(v_b_1215_, sizeof(void*)*4);
v___x_1268_ = lean_uint64_lor(v___x_1264_, v___y_1266_);
if (v_construct_1267_ == 0)
{
uint64_t v___x_1269_; 
v___x_1269_ = 0ULL;
v___y_1220_ = v___x_1268_;
v___y_1221_ = v___x_1269_;
goto v___jp_1219_;
}
else
{
uint64_t v___x_1270_; 
v___x_1270_ = 4ULL;
v___y_1220_ = v___x_1268_;
v___y_1221_ = v___x_1270_;
goto v___jp_1219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0___boxed(lean_object* v_b_1273_, lean_object* v_args_1274_, lean_object* v_await_1275_, lean_object* v_a_1276_){
_start:
{
uint8_t v_await_boxed_1277_; lean_object* v_res_1278_; 
v_await_boxed_1277_ = lean_unbox(v_await_1275_);
v_res_1278_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v_b_1273_, v_args_1274_, v_await_boxed_1277_);
lean_dec_ref(v_b_1273_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new(lean_object* v_label_1286_, lean_object* v_options_1287_){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; 
v___x_1289_ = lean_unsigned_to_nat(2u);
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoderStream_new___closed__1));
v___x_1291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_1286_);
v___x_1292_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_1287_);
v___x_1293_ = lean_mk_empty_array_with_capacity(v___x_1289_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1291_);
v___x_1295_ = lean_array_push(v___x_1294_, v___x_1292_);
v___x_1296_ = l_Lasm_JS_Web_Support_args(v___x_1295_);
v___x_1297_ = 0;
v___x_1298_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v___x_1290_, v___x_1296_, v___x_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new___boxed(lean_object* v_label_1299_, lean_object* v_options_1300_, lean_object* v_a_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lasm_JS_Web_TextDecoderStream_new(v_label_1299_, v_options_1300_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding(lean_object* v_self_1303_){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_1306_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1303_, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding___boxed(lean_object* v_self_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lasm_JS_Web_TextDecoderStream_encoding(v_self_1307_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal(lean_object* v_self_1310_){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_1313_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1310_, v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal___boxed(lean_object* v_self_1314_, lean_object* v_a_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_Lasm_JS_Web_TextDecoderStream_fatal(v_self_1314_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(lean_object* v_self_1317_){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_1320_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1317_, v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM___boxed(lean_object* v_self_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(v_self_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable(lean_object* v_self_1324_){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_1327_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1324_, v___x_1326_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1327_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1327_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
v_a_1336_ = lean_ctor_get(v___x_1327_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1327_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1327_);
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
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable___boxed(lean_object* v_self_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lasm_JS_Web_TextDecoderStream_readable(v_self_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable(lean_object* v_self_1347_){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_1350_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1347_, v___x_1349_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
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
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
v_a_1359_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1350_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1350_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable___boxed(lean_object* v_self_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lasm_JS_Web_TextDecoderStream_writable(v_self_1367_);
return v_res_1369_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Encoding(uint8_t builtin) {
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
l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult = _init_l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
