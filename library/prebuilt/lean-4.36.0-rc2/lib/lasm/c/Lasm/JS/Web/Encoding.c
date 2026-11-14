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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7_value;
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
static const lean_string_object l_Lasm_JS_Web_TextEncoder_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TextEncoder"};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoder_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__3_value;
static const lean_array_object l_Lasm_JS_Web_TextEncoder_new___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__4 = (const lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Web_TextEncoder_new___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_TextEncoder_new___closed__5;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoder_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.TextDecoder.new"};
static const lean_object* l_Lasm_JS_Web_TextDecoder_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_TextDecoder_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "TextDecoder"};
static const lean_object* l_Lasm_JS_Web_TextDecoder_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoder_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextDecoder_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextDecoder_new___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.TextEncoderStream.new"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_TextEncoderStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TextEncoderStream"};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_TextEncoderStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextEncoderStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextEncoderStream_new___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Web.TextDecoderStream.new"};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_TextDecoderStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "TextDecoderStream"};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_TextDecoderStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_TextEncoder_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TextDecoderStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TextDecoderStream_new___closed__2_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___x_137_ = lean_unsigned_to_nat(46u);
v___x_138_ = lean_unsigned_to_nat(193u);
v___x_139_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4));
v___x_140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3));
v___x_141_ = l_mkPanicMessageWithDecl(v___x_140_, v___x_139_, v___x_138_, v___x_137_, v___x_136_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(lean_object* v_context_143_, lean_object* v_d_144_){
_start:
{
lean_object* v_received_147_; 
if (lean_obj_tag(v_d_144_) == 9)
{
lean_object* v_value_161_; lean_object* v___x_162_; 
v_value_161_ = lean_ctor_get(v_d_144_, 0);
lean_inc(v_value_161_);
lean_dec_ref_known(v_d_144_, 2);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v_value_161_);
return v___x_162_;
}
else
{
if (lean_obj_tag(v_d_144_) == 9)
{
lean_object* v_value_163_; lean_object* v_description_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_value_163_ = lean_ctor_get(v_d_144_, 0);
v_description_164_ = lean_ctor_get(v_d_144_, 1);
v___x_165_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_166_ = lean_string_dec_eq(v_description_164_, v___x_165_);
if (v___x_166_ == 0)
{
goto v___jp_159_;
}
else
{
uint32_t v___x_167_; uint64_t v___x_168_; lean_object* v___x_169_; uint32_t v___x_170_; lean_object* v___x_171_; 
lean_inc_n(v_value_163_, 2);
lean_dec_ref_known(v_d_144_, 2);
v___x_167_ = 206;
v___x_168_ = 0ULL;
v___x_169_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_169_, 0, v_value_163_);
lean_ctor_set(v___x_169_, 1, v___x_165_);
v___x_170_ = lasm_js_value_handle(v_value_163_);
lean_dec(v_value_163_);
v___x_171_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_167_, v___x_168_, v___x_169_, v___x_170_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; uint8_t v___x_173_; 
v_a_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_a_172_);
lean_dec_ref_known(v___x_171_, 1);
v___x_173_ = lean_string_validate_utf8(v_a_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v_a_172_);
v___x_174_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6);
v___x_175_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_174_);
v_received_147_ = v___x_175_;
goto v___jp_146_;
}
else
{
lean_object* v___x_176_; 
v___x_176_ = lean_string_from_utf8_unchecked(v_a_172_);
v_received_147_ = v___x_176_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_177_; 
lean_dec_ref_known(v___x_171_, 1);
v___x_177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v_received_147_ = v___x_177_;
goto v___jp_146_;
}
}
}
else
{
goto v___jp_159_;
}
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_149_ = lean_string_append(v___x_148_, v_context_143_);
v___x_150_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
v___x_152_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoder___closed__1));
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
v___x_154_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
v___x_156_ = lean_string_append(v___x_155_, v_received_147_);
lean_dec_ref(v_received_147_);
v___x_157_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
v___jp_159_:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lasm_JS_Data_describe(v_d_144_);
v_received_147_ = v___x_160_;
goto v___jp_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___boxed(lean_object* v_context_178_, lean_object* v_d_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v_context_178_, v_d_179_);
lean_dec_ref(v_context_178_);
return v_res_181_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_183_; uint64_t v___x_184_; 
v___x_183_ = 0;
v___x_184_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(lean_object* v_b_185_, lean_object* v_args_186_, uint8_t v_await_187_){
_start:
{
uint64_t v___y_190_; uint64_t v___y_191_; uint64_t v___x_226_; uint64_t v___y_228_; 
v___x_226_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_187_ == 0)
{
uint64_t v___x_233_; 
v___x_233_ = 0ULL;
v___y_228_ = v___x_233_;
goto v___jp_227_;
}
else
{
uint64_t v___x_234_; 
v___x_234_ = 2ULL;
v___y_228_ = v___x_234_;
goto v___jp_227_;
}
v___jp_189_:
{
uint64_t v_flags_192_; uint32_t v___x_193_; lean_object* v___x_194_; uint32_t v___x_195_; lean_object* v___x_196_; 
v_flags_192_ = lean_uint64_lor(v___y_190_, v___y_191_);
v___x_193_ = 214;
v___x_194_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_185_, v_args_186_);
v___x_195_ = 0;
v___x_196_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_193_, v_flags_192_, v___x_194_, v___x_195_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_197_);
lean_dec(v_a_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_199_);
lean_dec_ref_known(v___x_198_, 1);
v___x_200_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_185_);
v___x_201_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v___x_200_, v_a_199_);
lean_dec_ref(v___x_200_);
return v___x_201_;
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
v_a_202_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_198_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_198_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_225_; 
v_a_210_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_225_ == 0)
{
v___x_212_ = v___x_196_;
v_isShared_213_ = v_isSharedCheck_225_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_196_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_225_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_215_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_185_);
v___x_216_ = lean_string_append(v___x_214_, v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_218_ = lean_string_append(v___x_216_, v___x_217_);
v___x_219_ = lean_io_error_to_string(v_a_210_);
v___x_220_ = lean_string_append(v___x_218_, v___x_219_);
lean_dec_ref(v___x_219_);
v___x_221_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_221_);
v___x_223_ = v___x_212_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_221_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
v___jp_227_:
{
uint8_t v_construct_229_; uint64_t v___x_230_; 
v_construct_229_ = lean_ctor_get_uint8(v_b_185_, sizeof(void*)*4);
v___x_230_ = lean_uint64_lor(v___x_226_, v___y_228_);
if (v_construct_229_ == 0)
{
uint64_t v___x_231_; 
v___x_231_ = 0ULL;
v___y_190_ = v___x_230_;
v___y_191_ = v___x_231_;
goto v___jp_189_;
}
else
{
uint64_t v___x_232_; 
v___x_232_ = 4ULL;
v___y_190_ = v___x_230_;
v___y_191_ = v___x_232_;
goto v___jp_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___boxed(lean_object* v_b_235_, lean_object* v_args_236_, lean_object* v_await_237_, lean_object* v_a_238_){
_start:
{
uint8_t v_await_boxed_239_; lean_object* v_res_240_; 
v_await_boxed_239_ = lean_unbox(v_await_237_);
v_res_240_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v_b_235_, v_args_236_, v_await_boxed_239_);
lean_dec_ref(v_b_235_);
return v_res_240_;
}
}
static lean_object* _init_l_Lasm_JS_Web_TextEncoder_new___closed__5(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__4));
v___x_253_ = l_Lasm_JS_Web_Support_args(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new(){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; lean_object* v___x_258_; 
v___x_255_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__3));
v___x_256_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__5, &l_Lasm_JS_Web_TextEncoder_new___closed__5_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__5);
v___x_257_ = 0;
v___x_258_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v___x_255_, v___x_256_, v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new___boxed(lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lasm_JS_Web_TextEncoder_new();
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding(lean_object* v_self_262_){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_265_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_262_, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding___boxed(lean_object* v_self_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Web_TextEncoder_encoding(v_self_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(lean_object* v_context_269_, lean_object* v_bytes_270_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_270_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_274_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_a_273_);
lean_dec_ref_known(v___x_272_, 1);
v___x_274_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_269_, v_a_273_);
return v___x_274_;
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
v_a_275_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_272_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_272_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1___boxed(lean_object* v_context_283_, lean_object* v_bytes_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v_context_283_, v_bytes_284_);
lean_dec_ref(v_bytes_284_);
lean_dec_ref(v_context_283_);
return v_res_286_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(uint8_t v_await_287_, uint64_t v_extra_288_){
_start:
{
uint64_t v___x_289_; uint64_t v___y_291_; 
v___x_289_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_287_ == 0)
{
uint64_t v___x_294_; 
v___x_294_ = 0ULL;
v___y_291_ = v___x_294_;
goto v___jp_290_;
}
else
{
uint64_t v___x_295_; 
v___x_295_ = 2ULL;
v___y_291_ = v___x_295_;
goto v___jp_290_;
}
v___jp_290_:
{
uint64_t v___x_292_; uint64_t v___x_293_; 
v___x_292_ = lean_uint64_lor(v___x_289_, v___y_291_);
v___x_293_ = lean_uint64_lor(v___x_292_, v_extra_288_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0___boxed(lean_object* v_await_296_, lean_object* v_extra_297_){
_start:
{
uint8_t v_await_boxed_298_; uint64_t v_extra_boxed_299_; uint64_t v_res_300_; lean_object* v_r_301_; 
v_await_boxed_298_ = lean_unbox(v_await_296_);
v_extra_boxed_299_ = lean_unbox_uint64(v_extra_297_);
lean_dec_ref(v_extra_297_);
v_res_300_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v_await_boxed_298_, v_extra_boxed_299_);
v_r_301_ = lean_box_uint64(v_res_300_);
return v_r_301_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0(void){
_start:
{
uint64_t v___x_302_; uint8_t v___x_303_; uint64_t v___x_304_; 
v___x_302_ = 8ULL;
v___x_303_ = 0;
v___x_304_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v___x_303_, v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(lean_object* v_o_306_, lean_object* v_name_307_, lean_object* v_args_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint64_t v___x_313_; lean_object* v___x_314_; 
v___x_310_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_311_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_311_, 0, v_o_306_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
lean_inc_ref(v_name_307_);
v___x_312_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_312_, 0, v_name_307_);
v___x_313_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0);
v___x_314_ = l_Lasm_JS_Value_invokeRaw(v___x_311_, v___x_312_, v_args_308_, v___x_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_315_);
lean_dec_ref_known(v___x_314_, 1);
v___x_316_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_317_ = lean_string_append(v___x_316_, v_name_307_);
lean_dec_ref(v_name_307_);
v___x_318_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v___x_317_, v_a_315_);
lean_dec(v_a_315_);
lean_dec_ref(v___x_317_);
return v___x_318_;
}
else
{
lean_dec_ref(v_name_307_);
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___boxed(lean_object* v_o_319_, lean_object* v_name_320_, lean_object* v_args_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_o_319_, v_name_320_, v_args_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode(lean_object* v_self_325_, lean_object* v_input_326_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_328_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encode___closed__0));
v___x_329_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_input_326_);
v___x_330_ = lean_unsigned_to_nat(1u);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_330_);
v___x_332_ = lean_array_push(v___x_331_, v___x_329_);
v___x_333_ = l_Lasm_JS_Web_Support_args(v___x_332_);
v___x_334_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_self_325_, v___x_328_, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode___boxed(lean_object* v_self_335_, lean_object* v_input_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lasm_JS_Web_TextEncoder_encode(v_self_335_, v_input_336_);
return v_res_338_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_nat_to_int(v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_354_, lean_object* v_key_355_){
_start:
{
if (lean_obj_tag(v_d_354_) == 8)
{
lean_object* v___x_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_402_; 
v___x_358_ = l_Lasm_JS_Data_field(v_d_354_, v_key_355_);
v_isSharedCheck_402_ = !lean_is_exclusive(v_d_354_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v_d_354_, 0);
lean_dec(v_unused_403_);
v___x_360_ = v_d_354_;
v_isShared_361_ = v_isSharedCheck_402_;
goto v_resetjp_359_;
}
else
{
lean_dec(v_d_354_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_402_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v_a_363_; lean_object* v_a_389_; 
switch(lean_obj_tag(v___x_358_))
{
case 1:
{
lean_del_object(v___x_360_);
goto v___jp_356_;
}
case 0:
{
lean_del_object(v___x_360_);
goto v___jp_356_;
}
default: 
{
switch(lean_obj_tag(v___x_358_))
{
case 3:
{
double v_n_396_; lean_object* v___x_397_; 
v_n_396_ = lean_ctor_get_float(v___x_358_, 0);
v___x_397_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v___x_398_; 
v___x_398_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9));
v_a_363_ = v___x_398_;
goto v___jp_362_;
}
else
{
lean_object* v_val_399_; 
v_val_399_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_val_399_);
lean_dec_ref_known(v___x_397_, 1);
v_a_389_ = v_val_399_;
goto v___jp_388_;
}
}
case 5:
{
lean_object* v_i_400_; 
v_i_400_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_i_400_);
v_a_389_ = v_i_400_;
goto v___jp_388_;
}
default: 
{
lean_object* v___x_401_; 
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v_a_363_ = v___x_401_;
goto v___jp_362_;
}
}
}
}
v___jp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_365_ = lean_string_append(v___x_364_, v_key_355_);
v___x_366_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
v___x_368_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_369_ = lean_string_append(v___x_367_, v___x_368_);
v___x_370_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_371_ = lean_string_append(v___x_369_, v___x_370_);
v___x_372_ = l_Lasm_JS_Data_describe(v___x_358_);
v___x_373_ = lean_string_append(v___x_371_, v___x_372_);
lean_dec_ref(v___x_372_);
v___x_374_ = lean_string_utf8_byte_size(v_a_363_);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_nat_dec_eq(v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_377_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_378_ = lean_string_append(v___x_377_, v_a_363_);
v___x_379_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_380_ = lean_string_append(v___x_378_, v___x_379_);
v___x_381_ = lean_string_append(v___x_373_, v___x_380_);
lean_dec_ref(v___x_380_);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
lean_ctor_set(v___x_360_, 0, v___x_381_);
v___x_383_ = v___x_360_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
else
{
lean_object* v___x_386_; 
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
lean_ctor_set(v___x_360_, 0, v___x_373_);
v___x_386_ = v___x_360_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_373_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
v___jp_388_:
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7);
v___x_391_ = lean_int_dec_le(v___x_390_, v_a_389_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
lean_dec(v_a_389_);
v___x_392_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8));
v_a_363_ = v___x_392_;
goto v___jp_362_;
}
else
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_del_object(v___x_360_);
lean_dec(v___x_358_);
v___x_393_ = l_Int_toNat(v_a_389_);
lean_dec(v_a_389_);
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
}
}
else
{
lean_object* v___x_404_; 
lean_dec(v_d_354_);
v___x_404_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11));
return v___x_404_;
}
v___jp_356_:
{
lean_object* v___x_357_; 
v___x_357_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_405_, lean_object* v_key_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_405_, v_key_406_);
lean_dec_ref(v_key_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(lean_object* v_context_408_, lean_object* v_d_409_){
_start:
{
lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_418_; lean_object* v_received_419_; lean_object* v___y_438_; lean_object* v_a_441_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0));
lean_inc(v_d_409_);
v___x_466_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_409_, v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v_a_441_ = v_a_467_;
goto v___jp_440_;
}
else
{
lean_object* v_a_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_a_468_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_466_, 1);
v___x_469_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1));
lean_inc(v_d_409_);
v___x_470_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_409_, v___x_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; 
lean_dec(v_a_468_);
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v_a_441_ = v_a_471_;
goto v___jp_440_;
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_480_; 
lean_dec(v_d_409_);
v_a_472_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_480_ == 0)
{
v___x_474_ = v___x_470_;
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_470_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_480_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v_a_468_);
lean_ctor_set(v___x_476_, 1, v_a_472_);
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 0);
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
v___jp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_string_append(v___y_412_, v___y_413_);
lean_dec_ref(v___y_413_);
v___x_415_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
v___jp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_421_ = lean_string_append(v___x_420_, v_context_408_);
v___x_422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_423_ = lean_string_append(v___x_421_, v___x_422_);
v___x_424_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2));
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
v___x_426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = lean_string_append(v___x_427_, v_received_419_);
lean_dec_ref(v_received_419_);
v___x_429_ = lean_string_utf8_byte_size(v___y_418_);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_nat_dec_eq(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_432_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_433_ = lean_string_append(v___x_432_, v___y_418_);
lean_dec_ref(v___y_418_);
v___x_434_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_435_ = lean_string_append(v___x_433_, v___x_434_);
v___y_412_ = v___x_428_;
v___y_413_ = v___x_435_;
goto v___jp_411_;
}
else
{
lean_object* v___x_436_; 
lean_dec_ref(v___y_418_);
v___x_436_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___y_412_ = v___x_428_;
v___y_413_ = v___x_436_;
goto v___jp_411_;
}
}
v___jp_437_:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lasm_JS_Data_describe(v_d_409_);
v___y_418_ = v___y_438_;
v_received_419_ = v___x_439_;
goto v___jp_417_;
}
v___jp_440_:
{
if (lean_obj_tag(v_d_409_) == 9)
{
lean_object* v_value_442_; lean_object* v_description_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v_value_442_ = lean_ctor_get(v_d_409_, 0);
v_description_443_ = lean_ctor_get(v_d_409_, 1);
v___x_444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_445_ = lean_string_dec_eq(v_description_443_, v___x_444_);
if (v___x_445_ == 0)
{
v___y_438_ = v_a_441_;
goto v___jp_437_;
}
else
{
lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_462_; 
lean_inc(v_value_442_);
v_isSharedCheck_462_ = !lean_is_exclusive(v_d_409_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; lean_object* v_unused_464_; 
v_unused_463_ = lean_ctor_get(v_d_409_, 1);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_d_409_, 0);
lean_dec(v_unused_464_);
v___x_447_ = v_d_409_;
v_isShared_448_ = v_isSharedCheck_462_;
goto v_resetjp_446_;
}
else
{
lean_dec(v_d_409_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_462_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
uint32_t v___x_449_; uint64_t v___x_450_; lean_object* v___x_452_; 
v___x_449_ = 206;
v___x_450_ = 0ULL;
lean_inc(v_value_442_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v___x_444_);
v___x_452_ = v___x_447_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_value_442_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_444_);
v___x_452_ = v_reuseFailAlloc_461_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
uint32_t v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lasm_js_value_handle(v_value_442_);
lean_dec(v_value_442_);
v___x_454_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_449_, v___x_450_, v___x_452_, v___x_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; uint8_t v___x_456_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v___x_456_ = lean_string_validate_utf8(v_a_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec(v_a_455_);
v___x_457_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6);
v___x_458_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_457_);
v___y_418_ = v_a_441_;
v_received_419_ = v___x_458_;
goto v___jp_417_;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = lean_string_from_utf8_unchecked(v_a_455_);
v___y_418_ = v_a_441_;
v_received_419_ = v___x_459_;
goto v___jp_417_;
}
}
else
{
lean_object* v___x_460_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v___y_418_ = v_a_441_;
v_received_419_ = v___x_460_;
goto v___jp_417_;
}
}
}
}
}
else
{
v___y_438_ = v_a_441_;
goto v___jp_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2___boxed(lean_object* v_context_481_, lean_object* v_d_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_481_, v_d_482_);
lean_dec_ref(v_context_481_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(lean_object* v_context_485_, lean_object* v_bytes_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_486_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_490_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_485_, v_a_489_);
return v___x_490_;
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
v_a_491_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_488_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_488_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1___boxed(lean_object* v_context_499_, lean_object* v_bytes_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v_context_499_, v_bytes_500_);
lean_dec_ref(v_bytes_500_);
lean_dec_ref(v_context_499_);
return v_res_502_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(uint8_t v_await_503_, uint64_t v_extra_504_){
_start:
{
uint64_t v___x_505_; uint64_t v___y_507_; 
v___x_505_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_503_ == 0)
{
uint64_t v___x_510_; 
v___x_510_ = 0ULL;
v___y_507_ = v___x_510_;
goto v___jp_506_;
}
else
{
uint64_t v___x_511_; 
v___x_511_ = 2ULL;
v___y_507_ = v___x_511_;
goto v___jp_506_;
}
v___jp_506_:
{
uint64_t v___x_508_; uint64_t v___x_509_; 
v___x_508_ = lean_uint64_lor(v___x_505_, v___y_507_);
v___x_509_ = lean_uint64_lor(v___x_508_, v_extra_504_);
return v___x_509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0___boxed(lean_object* v_await_512_, lean_object* v_extra_513_){
_start:
{
uint8_t v_await_boxed_514_; uint64_t v_extra_boxed_515_; uint64_t v_res_516_; lean_object* v_r_517_; 
v_await_boxed_514_ = lean_unbox(v_await_512_);
v_extra_boxed_515_ = lean_unbox_uint64(v_extra_513_);
lean_dec_ref(v_extra_513_);
v_res_516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v_await_boxed_514_, v_extra_boxed_515_);
v_r_517_ = lean_box_uint64(v_res_516_);
return v_r_517_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0(void){
_start:
{
uint64_t v___x_518_; uint8_t v___x_519_; uint64_t v___x_520_; 
v___x_518_ = 8ULL;
v___x_519_ = 0;
v___x_520_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v___x_519_, v___x_518_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(lean_object* v_o_521_, lean_object* v_name_522_, lean_object* v_args_523_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint64_t v___x_528_; lean_object* v___x_529_; 
v___x_525_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_526_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_526_, 0, v_o_521_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
lean_inc_ref(v_name_522_);
v___x_527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_527_, 0, v_name_522_);
v___x_528_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0);
v___x_529_ = l_Lasm_JS_Value_invokeRaw(v___x_526_, v___x_527_, v_args_523_, v___x_528_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_532_ = lean_string_append(v___x_531_, v_name_522_);
lean_dec_ref(v_name_522_);
v___x_533_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v___x_532_, v_a_530_);
lean_dec(v_a_530_);
lean_dec_ref(v___x_532_);
return v___x_533_;
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec_ref(v_name_522_);
v_a_534_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_529_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_529_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___boxed(lean_object* v_o_542_, lean_object* v_name_543_, lean_object* v_args_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_o_542_, v_name_543_, v_args_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto(lean_object* v_self_548_, lean_object* v_source_549_, lean_object* v_destination_550_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0));
v___x_553_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_553_, 0, v_source_549_);
v___x_554_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_554_, 0, v_destination_550_);
v___x_555_ = lean_unsigned_to_nat(2u);
v___x_556_ = lean_mk_empty_array_with_capacity(v___x_555_);
v___x_557_ = lean_array_push(v___x_556_, v___x_553_);
v___x_558_ = lean_array_push(v___x_557_, v___x_554_);
v___x_559_ = l_Lasm_JS_Web_Support_args(v___x_558_);
v___x_560_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_self_548_, v___x_552_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto___boxed(lean_object* v_self_561_, lean_object* v_source_562_, lean_object* v_destination_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lasm_JS_Web_TextEncoder_encodeInto(v_self_561_, v_source_562_, v_destination_563_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(lean_object* v_x_566_){
_start:
{
if (lean_obj_tag(v_x_566_) == 0)
{
lean_object* v___x_567_; 
v___x_567_ = lean_box(0);
return v___x_567_;
}
else
{
lean_object* v_val_568_; lean_object* v_fatal_569_; lean_object* v_ignoreBOM_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_587_; 
v_val_568_ = lean_ctor_get(v_x_566_, 0);
lean_inc(v_val_568_);
lean_dec_ref_known(v_x_566_, 1);
v_fatal_569_ = lean_ctor_get(v_val_568_, 0);
v_ignoreBOM_570_ = lean_ctor_get(v_val_568_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_val_568_);
if (v_isSharedCheck_587_ == 0)
{
v___x_572_ = v_val_568_;
v_isShared_573_ = v_isSharedCheck_587_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_ignoreBOM_570_);
lean_inc(v_fatal_569_);
lean_dec(v_val_568_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_587_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_577_; 
v___x_574_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_575_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_fatal_569_);
lean_dec(v_fatal_569_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 1, v___x_575_);
lean_ctor_set(v___x_572_, 0, v___x_574_);
v___x_577_ = v___x_572_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v___x_575_);
v___x_577_ = v_reuseFailAlloc_586_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_579_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ignoreBOM_570_);
lean_dec(v_ignoreBOM_570_);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_unsigned_to_nat(2u);
v___x_582_ = lean_mk_empty_array_with_capacity(v___x_581_);
v___x_583_ = lean_array_push(v___x_582_, v___x_577_);
v___x_584_ = lean_array_push(v___x_583_, v___x_580_);
v___x_585_ = l_Lasm_JS_Web_Support_fields(v___x_584_);
lean_dec_ref(v___x_584_);
return v___x_585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(lean_object* v_context_588_, lean_object* v_d_589_){
_start:
{
lean_object* v_received_592_; 
if (lean_obj_tag(v_d_589_) == 9)
{
lean_object* v_value_606_; lean_object* v___x_607_; 
v_value_606_ = lean_ctor_get(v_d_589_, 0);
lean_inc(v_value_606_);
lean_dec_ref_known(v_d_589_, 2);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v_value_606_);
return v___x_607_;
}
else
{
if (lean_obj_tag(v_d_589_) == 9)
{
lean_object* v_value_608_; lean_object* v_description_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_value_608_ = lean_ctor_get(v_d_589_, 0);
v_description_609_ = lean_ctor_get(v_d_589_, 1);
v___x_610_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_611_ = lean_string_dec_eq(v_description_609_, v___x_610_);
if (v___x_611_ == 0)
{
goto v___jp_604_;
}
else
{
uint32_t v___x_612_; uint64_t v___x_613_; lean_object* v___x_614_; uint32_t v___x_615_; lean_object* v___x_616_; 
lean_inc_n(v_value_608_, 2);
lean_dec_ref_known(v_d_589_, 2);
v___x_612_ = 206;
v___x_613_ = 0ULL;
v___x_614_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_614_, 0, v_value_608_);
lean_ctor_set(v___x_614_, 1, v___x_610_);
v___x_615_ = lasm_js_value_handle(v_value_608_);
lean_dec(v_value_608_);
v___x_616_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_612_, v___x_613_, v___x_614_, v___x_615_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; uint8_t v___x_618_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v___x_618_ = lean_string_validate_utf8(v_a_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; 
lean_dec(v_a_617_);
v___x_619_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6);
v___x_620_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_619_);
v_received_592_ = v___x_620_;
goto v___jp_591_;
}
else
{
lean_object* v___x_621_; 
v___x_621_ = lean_string_from_utf8_unchecked(v_a_617_);
v_received_592_ = v___x_621_;
goto v___jp_591_;
}
}
else
{
lean_object* v___x_622_; 
lean_dec_ref_known(v___x_616_, 1);
v___x_622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v_received_592_ = v___x_622_;
goto v___jp_591_;
}
}
}
else
{
goto v___jp_604_;
}
}
v___jp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_593_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_594_ = lean_string_append(v___x_593_, v_context_588_);
v___x_595_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoder___closed__0));
v___x_598_ = lean_string_append(v___x_596_, v___x_597_);
v___x_599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_600_ = lean_string_append(v___x_598_, v___x_599_);
v___x_601_ = lean_string_append(v___x_600_, v_received_592_);
lean_dec_ref(v_received_592_);
v___x_602_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
v___jp_604_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_JS_Data_describe(v_d_589_);
v_received_592_ = v___x_605_;
goto v___jp_591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1___boxed(lean_object* v_context_623_, lean_object* v_d_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v_context_623_, v_d_624_);
lean_dec_ref(v_context_623_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(lean_object* v_b_627_, lean_object* v_args_628_, uint8_t v_await_629_){
_start:
{
uint64_t v___y_632_; uint64_t v___y_633_; uint64_t v___x_668_; uint64_t v___y_670_; 
v___x_668_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_629_ == 0)
{
uint64_t v___x_675_; 
v___x_675_ = 0ULL;
v___y_670_ = v___x_675_;
goto v___jp_669_;
}
else
{
uint64_t v___x_676_; 
v___x_676_ = 2ULL;
v___y_670_ = v___x_676_;
goto v___jp_669_;
}
v___jp_631_:
{
uint64_t v_flags_634_; uint32_t v___x_635_; lean_object* v___x_636_; uint32_t v___x_637_; lean_object* v___x_638_; 
v_flags_634_ = lean_uint64_lor(v___y_632_, v___y_633_);
v___x_635_ = 214;
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_627_, v_args_628_);
v___x_637_ = 0;
v___x_638_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_635_, v_flags_634_, v___x_636_, v___x_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_640_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_638_, 1);
v___x_640_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_639_);
lean_dec(v_a_639_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_627_);
v___x_643_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v___x_642_, v_a_641_);
lean_dec_ref(v___x_642_);
return v___x_643_;
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_a_644_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_640_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_640_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_667_; 
v_a_652_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_667_ == 0)
{
v___x_654_ = v___x_638_;
v_isShared_655_ = v_isSharedCheck_667_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_638_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_667_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_656_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_657_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_627_);
v___x_658_ = lean_string_append(v___x_656_, v___x_657_);
lean_dec_ref(v___x_657_);
v___x_659_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
v___x_661_ = lean_io_error_to_string(v_a_652_);
v___x_662_ = lean_string_append(v___x_660_, v___x_661_);
lean_dec_ref(v___x_661_);
v___x_663_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_663_);
v___x_665_ = v___x_654_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
v___jp_669_:
{
uint8_t v_construct_671_; uint64_t v___x_672_; 
v_construct_671_ = lean_ctor_get_uint8(v_b_627_, sizeof(void*)*4);
v___x_672_ = lean_uint64_lor(v___x_668_, v___y_670_);
if (v_construct_671_ == 0)
{
uint64_t v___x_673_; 
v___x_673_ = 0ULL;
v___y_632_ = v___x_672_;
v___y_633_ = v___x_673_;
goto v___jp_631_;
}
else
{
uint64_t v___x_674_; 
v___x_674_ = 4ULL;
v___y_632_ = v___x_672_;
v___y_633_ = v___x_674_;
goto v___jp_631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1___boxed(lean_object* v_b_677_, lean_object* v_args_678_, lean_object* v_await_679_, lean_object* v_a_680_){
_start:
{
uint8_t v_await_boxed_681_; lean_object* v_res_682_; 
v_await_boxed_681_ = lean_unbox(v_await_679_);
v_res_682_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v_b_677_, v_args_678_, v_await_boxed_681_);
lean_dec_ref(v_b_677_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new(lean_object* v_label_691_, lean_object* v_options_692_){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; lean_object* v___x_703_; 
v___x_694_ = lean_unsigned_to_nat(2u);
v___x_695_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_new___closed__2));
v___x_696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_691_);
v___x_697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_692_);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_694_);
v___x_699_ = lean_array_push(v___x_698_, v___x_696_);
v___x_700_ = lean_array_push(v___x_699_, v___x_697_);
v___x_701_ = l_Lasm_JS_Web_Support_args(v___x_700_);
v___x_702_ = 0;
v___x_703_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v___x_695_, v___x_701_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new___boxed(lean_object* v_label_704_, lean_object* v_options_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lasm_JS_Web_TextDecoder_new(v_label_704_, v_options_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding(lean_object* v_self_708_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_711_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_708_, v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding___boxed(lean_object* v_self_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lasm_JS_Web_TextDecoder_encoding(v_self_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal(lean_object* v_self_715_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_718_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_715_, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal___boxed(lean_object* v_self_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lasm_JS_Web_TextDecoder_fatal(v_self_719_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM(lean_object* v_self_722_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_725_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_722_, v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM___boxed(lean_object* v_self_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lasm_JS_Web_TextDecoder_ignoreBOM(v_self_726_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(lean_object* v_x_729_){
_start:
{
if (lean_obj_tag(v_x_729_) == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_box(0);
return v___x_730_;
}
else
{
lean_object* v_val_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_val_731_ = lean_ctor_get(v_x_729_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_x_729_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v_x_729_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_val_731_);
lean_dec(v_x_729_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set_tag(v___x_733_, 6);
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_val_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(uint8_t v_await_739_, uint64_t v_extra_740_){
_start:
{
uint64_t v___x_741_; uint64_t v___y_743_; 
v___x_741_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_739_ == 0)
{
uint64_t v___x_746_; 
v___x_746_ = 0ULL;
v___y_743_ = v___x_746_;
goto v___jp_742_;
}
else
{
uint64_t v___x_747_; 
v___x_747_ = 2ULL;
v___y_743_ = v___x_747_;
goto v___jp_742_;
}
v___jp_742_:
{
uint64_t v___x_744_; uint64_t v___x_745_; 
v___x_744_ = lean_uint64_lor(v___x_741_, v___y_743_);
v___x_745_ = lean_uint64_lor(v___x_744_, v_extra_740_);
return v___x_745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2___boxed(lean_object* v_await_748_, lean_object* v_extra_749_){
_start:
{
uint8_t v_await_boxed_750_; uint64_t v_extra_boxed_751_; uint64_t v_res_752_; lean_object* v_r_753_; 
v_await_boxed_750_ = lean_unbox(v_await_748_);
v_extra_boxed_751_ = lean_unbox_uint64(v_extra_749_);
lean_dec_ref(v_extra_749_);
v_res_752_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v_await_boxed_750_, v_extra_boxed_751_);
v_r_753_ = lean_box_uint64(v_res_752_);
return v_r_753_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0(void){
_start:
{
uint64_t v___x_754_; uint8_t v___x_755_; uint64_t v___x_756_; 
v___x_754_ = 8ULL;
v___x_755_ = 0;
v___x_756_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v___x_755_, v___x_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(lean_object* v_o_757_, lean_object* v_name_758_, lean_object* v_args_759_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint64_t v___x_764_; lean_object* v___x_765_; 
v___x_761_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_762_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_762_, 0, v_o_757_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
lean_inc_ref(v_name_758_);
v___x_763_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_763_, 0, v_name_758_);
v___x_764_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0);
v___x_765_ = l_Lasm_JS_Value_invokeRaw(v___x_762_, v___x_763_, v_args_759_, v___x_764_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_768_ = lean_string_append(v___x_767_, v_name_758_);
lean_dec_ref(v_name_758_);
v___x_769_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_768_, v_a_766_);
lean_dec(v_a_766_);
lean_dec_ref(v___x_768_);
return v___x_769_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_name_758_);
v_a_770_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_765_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_765_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___boxed(lean_object* v_o_778_, lean_object* v_name_779_, lean_object* v_args_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_o_778_, v_name_779_, v_args_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(lean_object* v_x_783_){
_start:
{
if (lean_obj_tag(v_x_783_) == 0)
{
lean_object* v___x_784_; 
v___x_784_ = lean_box(0);
return v___x_784_;
}
else
{
lean_object* v_val_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v_val_785_ = lean_ctor_get(v_x_783_, 0);
v___x_786_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0));
v___x_787_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_785_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_mk_empty_array_with_capacity(v___x_789_);
v___x_791_ = lean_array_push(v___x_790_, v___x_788_);
v___x_792_ = l_Lasm_JS_Web_Support_fields(v___x_791_);
lean_dec_ref(v___x_791_);
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1___boxed(lean_object* v_x_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_x_793_);
lean_dec(v_x_793_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode(lean_object* v_self_796_, lean_object* v_input_797_, lean_object* v_options_798_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_800_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_decode___closed__0));
v___x_801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(v_input_797_);
v___x_802_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_options_798_);
v___x_803_ = lean_unsigned_to_nat(2u);
v___x_804_ = lean_mk_empty_array_with_capacity(v___x_803_);
v___x_805_ = lean_array_push(v___x_804_, v___x_801_);
v___x_806_ = lean_array_push(v___x_805_, v___x_802_);
v___x_807_ = l_Lasm_JS_Web_Support_args(v___x_806_);
v___x_808_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_self_796_, v___x_800_, v___x_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode___boxed(lean_object* v_self_809_, lean_object* v_input_810_, lean_object* v_options_811_, lean_object* v_a_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lasm_JS_Web_TextDecoder_decode(v_self_809_, v_input_810_, v_options_811_);
lean_dec(v_options_811_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(lean_object* v_context_814_, lean_object* v_d_815_){
_start:
{
lean_object* v_received_818_; 
if (lean_obj_tag(v_d_815_) == 9)
{
lean_object* v_value_832_; lean_object* v___x_833_; 
v_value_832_ = lean_ctor_get(v_d_815_, 0);
lean_inc(v_value_832_);
lean_dec_ref_known(v_d_815_, 2);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v_value_832_);
return v___x_833_;
}
else
{
if (lean_obj_tag(v_d_815_) == 9)
{
lean_object* v_value_834_; lean_object* v_description_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_value_834_ = lean_ctor_get(v_d_815_, 0);
v_description_835_ = lean_ctor_get(v_d_815_, 1);
v___x_836_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_837_ = lean_string_dec_eq(v_description_835_, v___x_836_);
if (v___x_837_ == 0)
{
goto v___jp_830_;
}
else
{
uint32_t v___x_838_; uint64_t v___x_839_; lean_object* v___x_840_; uint32_t v___x_841_; lean_object* v___x_842_; 
lean_inc_n(v_value_834_, 2);
lean_dec_ref_known(v_d_815_, 2);
v___x_838_ = 206;
v___x_839_ = 0ULL;
v___x_840_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_840_, 0, v_value_834_);
lean_ctor_set(v___x_840_, 1, v___x_836_);
v___x_841_ = lasm_js_value_handle(v_value_834_);
lean_dec(v_value_834_);
v___x_842_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_838_, v___x_839_, v___x_840_, v___x_841_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; uint8_t v___x_844_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = lean_string_validate_utf8(v_a_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec(v_a_843_);
v___x_845_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6);
v___x_846_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_845_);
v_received_818_ = v___x_846_;
goto v___jp_817_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = lean_string_from_utf8_unchecked(v_a_843_);
v_received_818_ = v___x_847_;
goto v___jp_817_;
}
}
else
{
lean_object* v___x_848_; 
lean_dec_ref_known(v___x_842_, 1);
v___x_848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v_received_818_ = v___x_848_;
goto v___jp_817_;
}
}
}
else
{
goto v___jp_830_;
}
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_820_ = lean_string_append(v___x_819_, v_context_814_);
v___x_821_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_822_ = lean_string_append(v___x_820_, v___x_821_);
v___x_823_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0));
v___x_824_ = lean_string_append(v___x_822_, v___x_823_);
v___x_825_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_826_ = lean_string_append(v___x_824_, v___x_825_);
v___x_827_ = lean_string_append(v___x_826_, v_received_818_);
lean_dec_ref(v_received_818_);
v___x_828_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
return v___x_829_;
}
v___jp_830_:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lasm_JS_Data_describe(v_d_815_);
v_received_818_ = v___x_831_;
goto v___jp_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_849_, lean_object* v_d_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v_context_849_, v_d_850_);
lean_dec_ref(v_context_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(lean_object* v_b_853_, lean_object* v_args_854_, uint8_t v_await_855_){
_start:
{
uint64_t v___y_858_; uint64_t v___y_859_; uint64_t v___x_894_; uint64_t v___y_896_; 
v___x_894_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_855_ == 0)
{
uint64_t v___x_901_; 
v___x_901_ = 0ULL;
v___y_896_ = v___x_901_;
goto v___jp_895_;
}
else
{
uint64_t v___x_902_; 
v___x_902_ = 2ULL;
v___y_896_ = v___x_902_;
goto v___jp_895_;
}
v___jp_857_:
{
uint64_t v_flags_860_; uint32_t v___x_861_; lean_object* v___x_862_; uint32_t v___x_863_; lean_object* v___x_864_; 
v_flags_860_ = lean_uint64_lor(v___y_858_, v___y_859_);
v___x_861_ = 214;
v___x_862_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_853_, v_args_854_);
v___x_863_ = 0;
v___x_864_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_861_, v_flags_860_, v___x_862_, v___x_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_865_);
lean_dec(v_a_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_853_);
v___x_869_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v___x_868_, v_a_867_);
lean_dec_ref(v___x_868_);
return v___x_869_;
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
v_a_870_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_866_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_866_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_893_; 
v_a_878_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_893_ == 0)
{
v___x_880_ = v___x_864_;
v_isShared_881_ = v_isSharedCheck_893_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_864_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_893_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_883_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_853_);
v___x_884_ = lean_string_append(v___x_882_, v___x_883_);
lean_dec_ref(v___x_883_);
v___x_885_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_886_ = lean_string_append(v___x_884_, v___x_885_);
v___x_887_ = lean_io_error_to_string(v_a_878_);
v___x_888_ = lean_string_append(v___x_886_, v___x_887_);
lean_dec_ref(v___x_887_);
v___x_889_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_889_);
v___x_891_ = v___x_880_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
v___jp_895_:
{
uint8_t v_construct_897_; uint64_t v___x_898_; 
v_construct_897_ = lean_ctor_get_uint8(v_b_853_, sizeof(void*)*4);
v___x_898_ = lean_uint64_lor(v___x_894_, v___y_896_);
if (v_construct_897_ == 0)
{
uint64_t v___x_899_; 
v___x_899_ = 0ULL;
v___y_858_ = v___x_898_;
v___y_859_ = v___x_899_;
goto v___jp_857_;
}
else
{
uint64_t v___x_900_; 
v___x_900_ = 4ULL;
v___y_858_ = v___x_898_;
v___y_859_ = v___x_900_;
goto v___jp_857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0___boxed(lean_object* v_b_903_, lean_object* v_args_904_, lean_object* v_await_905_, lean_object* v_a_906_){
_start:
{
uint8_t v_await_boxed_907_; lean_object* v_res_908_; 
v_await_boxed_907_ = lean_unbox(v_await_905_);
v_res_908_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v_b_903_, v_args_904_, v_await_boxed_907_);
lean_dec_ref(v_b_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new(){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; 
v___x_918_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_new___closed__2));
v___x_919_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__5, &l_Lasm_JS_Web_TextEncoder_new___closed__5_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__5);
v___x_920_ = 0;
v___x_921_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v___x_918_, v___x_919_, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new___boxed(lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lasm_JS_Web_TextEncoderStream_new();
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding(lean_object* v_self_924_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_927_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_924_, v___x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding___boxed(lean_object* v_self_928_, lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lasm_JS_Web_TextEncoderStream_encoding(v_self_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable(lean_object* v_self_932_){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_935_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_932_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_a_944_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_935_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_935_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable___boxed(lean_object* v_self_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lasm_JS_Web_TextEncoderStream_readable(v_self_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable(lean_object* v_self_956_){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_959_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_956_, v___x_958_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
v_a_968_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_959_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_959_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable___boxed(lean_object* v_self_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_JS_Web_TextEncoderStream_writable(v_self_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(lean_object* v_context_979_, lean_object* v_d_980_){
_start:
{
lean_object* v_received_983_; 
if (lean_obj_tag(v_d_980_) == 9)
{
lean_object* v_value_997_; lean_object* v___x_998_; 
v_value_997_ = lean_ctor_get(v_d_980_, 0);
lean_inc(v_value_997_);
lean_dec_ref_known(v_d_980_, 2);
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v_value_997_);
return v___x_998_;
}
else
{
if (lean_obj_tag(v_d_980_) == 9)
{
lean_object* v_value_999_; lean_object* v_description_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v_value_999_ = lean_ctor_get(v_d_980_, 0);
v_description_1000_ = lean_ctor_get(v_d_980_, 1);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_1002_ = lean_string_dec_eq(v_description_1000_, v___x_1001_);
if (v___x_1002_ == 0)
{
goto v___jp_995_;
}
else
{
uint32_t v___x_1003_; uint64_t v___x_1004_; lean_object* v___x_1005_; uint32_t v___x_1006_; lean_object* v___x_1007_; 
lean_inc_n(v_value_999_, 2);
lean_dec_ref_known(v_d_980_, 2);
v___x_1003_ = 206;
v___x_1004_ = 0ULL;
v___x_1005_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1005_, 0, v_value_999_);
lean_ctor_set(v___x_1005_, 1, v___x_1001_);
v___x_1006_ = lasm_js_value_handle(v_value_999_);
lean_dec(v_value_999_);
v___x_1007_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1003_, v___x_1004_, v___x_1005_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; uint8_t v___x_1009_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = lean_string_validate_utf8(v_a_1008_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec(v_a_1008_);
v___x_1010_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6);
v___x_1011_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1010_);
v_received_983_ = v___x_1011_;
goto v___jp_982_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_string_from_utf8_unchecked(v_a_1008_);
v_received_983_ = v___x_1012_;
goto v___jp_982_;
}
}
else
{
lean_object* v___x_1013_; 
lean_dec_ref_known(v___x_1007_, 1);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v_received_983_ = v___x_1013_;
goto v___jp_982_;
}
}
}
else
{
goto v___jp_995_;
}
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_984_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_985_ = lean_string_append(v___x_984_, v_context_979_);
v___x_986_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_987_ = lean_string_append(v___x_985_, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0));
v___x_989_ = lean_string_append(v___x_987_, v___x_988_);
v___x_990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_991_ = lean_string_append(v___x_989_, v___x_990_);
v___x_992_ = lean_string_append(v___x_991_, v_received_983_);
lean_dec_ref(v_received_983_);
v___x_993_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
v___x_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
return v___x_994_;
}
v___jp_995_:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lasm_JS_Data_describe(v_d_980_);
v_received_983_ = v___x_996_;
goto v___jp_982_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_1014_, lean_object* v_d_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v_context_1014_, v_d_1015_);
lean_dec_ref(v_context_1014_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(lean_object* v_b_1018_, lean_object* v_args_1019_, uint8_t v_await_1020_){
_start:
{
uint64_t v___y_1023_; uint64_t v___y_1024_; uint64_t v___x_1059_; uint64_t v___y_1061_; 
v___x_1059_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_1020_ == 0)
{
uint64_t v___x_1066_; 
v___x_1066_ = 0ULL;
v___y_1061_ = v___x_1066_;
goto v___jp_1060_;
}
else
{
uint64_t v___x_1067_; 
v___x_1067_ = 2ULL;
v___y_1061_ = v___x_1067_;
goto v___jp_1060_;
}
v___jp_1022_:
{
uint64_t v_flags_1025_; uint32_t v___x_1026_; lean_object* v___x_1027_; uint32_t v___x_1028_; lean_object* v___x_1029_; 
v_flags_1025_ = lean_uint64_lor(v___y_1023_, v___y_1024_);
v___x_1026_ = 214;
v___x_1027_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1018_, v_args_1019_);
v___x_1028_ = 0;
v___x_1029_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1026_, v_flags_1025_, v___x_1027_, v___x_1028_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1031_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v___x_1031_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1030_);
lean_dec(v_a_1030_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1018_);
v___x_1034_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v___x_1033_, v_a_1032_);
lean_dec_ref(v___x_1033_);
return v___x_1034_;
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1031_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1031_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1058_; 
v_a_1043_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1045_ = v___x_1029_;
v_isShared_1046_ = v_isSharedCheck_1058_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1029_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1058_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1056_; 
v___x_1047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1048_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1018_);
v___x_1049_ = lean_string_append(v___x_1047_, v___x_1048_);
lean_dec_ref(v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_1051_ = lean_string_append(v___x_1049_, v___x_1050_);
v___x_1052_ = lean_io_error_to_string(v_a_1043_);
v___x_1053_ = lean_string_append(v___x_1051_, v___x_1052_);
lean_dec_ref(v___x_1052_);
v___x_1054_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 0, v___x_1054_);
v___x_1056_ = v___x_1045_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
v___jp_1060_:
{
uint8_t v_construct_1062_; uint64_t v___x_1063_; 
v_construct_1062_ = lean_ctor_get_uint8(v_b_1018_, sizeof(void*)*4);
v___x_1063_ = lean_uint64_lor(v___x_1059_, v___y_1061_);
if (v_construct_1062_ == 0)
{
uint64_t v___x_1064_; 
v___x_1064_ = 0ULL;
v___y_1023_ = v___x_1063_;
v___y_1024_ = v___x_1064_;
goto v___jp_1022_;
}
else
{
uint64_t v___x_1065_; 
v___x_1065_ = 4ULL;
v___y_1023_ = v___x_1063_;
v___y_1024_ = v___x_1065_;
goto v___jp_1022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0___boxed(lean_object* v_b_1068_, lean_object* v_args_1069_, lean_object* v_await_1070_, lean_object* v_a_1071_){
_start:
{
uint8_t v_await_boxed_1072_; lean_object* v_res_1073_; 
v_await_boxed_1072_ = lean_unbox(v_await_1070_);
v_res_1073_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v_b_1068_, v_args_1069_, v_await_boxed_1072_);
lean_dec_ref(v_b_1068_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new(lean_object* v_label_1082_, lean_object* v_options_1083_){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; lean_object* v___x_1094_; 
v___x_1085_ = lean_unsigned_to_nat(2u);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoderStream_new___closed__2));
v___x_1087_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_1082_);
v___x_1088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_1083_);
v___x_1089_ = lean_mk_empty_array_with_capacity(v___x_1085_);
v___x_1090_ = lean_array_push(v___x_1089_, v___x_1087_);
v___x_1091_ = lean_array_push(v___x_1090_, v___x_1088_);
v___x_1092_ = l_Lasm_JS_Web_Support_args(v___x_1091_);
v___x_1093_ = 0;
v___x_1094_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v___x_1086_, v___x_1092_, v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new___boxed(lean_object* v_label_1095_, lean_object* v_options_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_JS_Web_TextDecoderStream_new(v_label_1095_, v_options_1096_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding(lean_object* v_self_1099_){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_1102_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1099_, v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding___boxed(lean_object* v_self_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lasm_JS_Web_TextDecoderStream_encoding(v_self_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal(lean_object* v_self_1106_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_1109_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1106_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal___boxed(lean_object* v_self_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lasm_JS_Web_TextDecoderStream_fatal(v_self_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(lean_object* v_self_1113_){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_1116_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1113_, v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM___boxed(lean_object* v_self_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(v_self_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable(lean_object* v_self_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_1123_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1120_, v___x_1122_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1123_);
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
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
v_a_1132_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1123_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1123_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable___boxed(lean_object* v_self_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lasm_JS_Web_TextDecoderStream_readable(v_self_1140_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable(lean_object* v_self_1143_){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_1146_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1143_, v___x_1145_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
v_a_1155_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v___x_1146_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1146_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
v___x_1160_ = v___x_1157_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1155_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable___boxed(lean_object* v_self_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lasm_JS_Web_TextDecoderStream_writable(v_self_1163_);
return v_res_1165_;
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
