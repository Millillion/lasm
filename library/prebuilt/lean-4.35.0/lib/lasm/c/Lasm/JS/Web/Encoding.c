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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_134_ = lean_string_utf8_byte_size(v___x_133_);
return v___x_134_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__3);
v___x_137_ = lean_nat_dec_eq(v___x_136_, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__8));
v___x_143_ = lean_unsigned_to_nat(46u);
v___x_144_ = lean_unsigned_to_nat(193u);
v___x_145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__7));
v___x_146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__6));
v___x_147_ = l_mkPanicMessageWithDecl(v___x_146_, v___x_145_, v___x_144_, v___x_143_, v___x_142_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(lean_object* v_context_149_, lean_object* v_d_150_){
_start:
{
lean_object* v___y_153_; lean_object* v___y_154_; 
if (lean_obj_tag(v_d_150_) == 9)
{
lean_object* v_value_158_; lean_object* v___x_159_; 
v_value_158_ = lean_ctor_get(v_d_150_, 0);
lean_inc(v_value_158_);
lean_dec_ref_known(v_d_150_, 2);
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v_value_158_);
return v___x_159_;
}
else
{
lean_object* v___x_160_; lean_object* v_received_162_; 
v___x_160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_150_) == 9)
{
lean_object* v_value_176_; lean_object* v_description_177_; uint8_t v___x_178_; 
v_value_176_ = lean_ctor_get(v_d_150_, 0);
v_description_177_ = lean_ctor_get(v_d_150_, 1);
v___x_178_ = lean_string_dec_eq(v_description_177_, v___x_160_);
if (v___x_178_ == 0)
{
goto v___jp_174_;
}
else
{
uint32_t v___x_179_; uint64_t v___x_180_; lean_object* v___x_181_; uint32_t v___x_182_; lean_object* v___x_183_; 
lean_inc_n(v_value_176_, 2);
lean_dec_ref_known(v_d_150_, 2);
v___x_179_ = 206;
v___x_180_ = 0ULL;
v___x_181_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_181_, 0, v_value_176_);
lean_ctor_set(v___x_181_, 1, v___x_160_);
v___x_182_ = lasm_js_value_handle(v_value_176_);
lean_dec(v_value_176_);
v___x_183_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_179_, v___x_180_, v___x_181_, v___x_182_);
lean_dec_ref_known(v___x_181_, 2);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; uint8_t v___x_185_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v___x_185_ = lean_string_validate_utf8(v_a_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec(v_a_184_);
v___x_186_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_187_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_186_);
v_received_162_ = v___x_187_;
goto v___jp_161_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_string_from_utf8_unchecked(v_a_184_);
v_received_162_ = v___x_188_;
goto v___jp_161_;
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref_known(v___x_183_, 1);
v___x_189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_162_ = v___x_189_;
goto v___jp_161_;
}
}
}
else
{
goto v___jp_174_;
}
v___jp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_163_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_164_ = lean_string_append(v___x_163_, v_context_149_);
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_166_ = lean_string_append(v___x_164_, v___x_165_);
v___x_167_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoder___closed__1));
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
v___x_169_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
v___x_171_ = lean_string_append(v___x_170_, v_received_162_);
lean_dec_ref(v_received_162_);
v___x_172_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_153_ = v___x_171_;
v___y_154_ = v___x_173_;
goto v___jp_152_;
}
else
{
v___y_153_ = v___x_171_;
v___y_154_ = v___x_160_;
goto v___jp_152_;
}
}
v___jp_174_:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lasm_JS_Data_describe(v_d_150_);
v_received_162_ = v___x_175_;
goto v___jp_161_;
}
}
v___jp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_string_append(v___y_153_, v___y_154_);
v___x_156_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
v___x_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___boxed(lean_object* v_context_190_, lean_object* v_d_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v_context_190_, v_d_191_);
lean_dec_ref(v_context_190_);
return v_res_193_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_195_; uint64_t v___x_196_; 
v___x_195_ = 0;
v___x_196_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(lean_object* v_b_197_, lean_object* v_args_198_, uint8_t v_await_199_){
_start:
{
uint64_t v___y_202_; uint64_t v___y_203_; uint64_t v___x_246_; uint64_t v___y_248_; 
v___x_246_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_199_ == 0)
{
uint64_t v___x_253_; 
v___x_253_ = 0ULL;
v___y_248_ = v___x_253_;
goto v___jp_247_;
}
else
{
uint64_t v___x_254_; 
v___x_254_ = 2ULL;
v___y_248_ = v___x_254_;
goto v___jp_247_;
}
v___jp_201_:
{
uint64_t v_flags_204_; uint32_t v___x_205_; lean_object* v___x_206_; uint32_t v___x_207_; lean_object* v___x_208_; 
v_flags_204_ = lean_uint64_lor(v___y_202_, v___y_203_);
v___x_205_ = 214;
v___x_206_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_197_, v_args_198_);
v___x_207_ = 0;
v___x_208_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_205_, v_flags_204_, v___x_206_, v___x_207_);
lean_dec(v___x_206_);
if (lean_obj_tag(v___x_208_) == 0)
{
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_210_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_208_, 1);
v___x_210_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_209_);
lean_dec(v_a_209_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
v___x_212_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_197_);
v___x_213_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0(v___x_212_, v_a_211_);
lean_dec_ref(v___x_212_);
return v___x_213_;
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
v_a_214_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_210_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_210_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_a_222_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_208_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_208_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 1);
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_245_; 
v_a_230_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_245_ == 0)
{
v___x_232_ = v___x_208_;
v_isShared_233_ = v_isSharedCheck_245_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_208_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_245_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_197_);
v___x_236_ = lean_string_append(v___x_234_, v___x_235_);
lean_dec_ref(v___x_235_);
v___x_237_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_238_ = lean_string_append(v___x_236_, v___x_237_);
v___x_239_ = lean_io_error_to_string(v_a_230_);
v___x_240_ = lean_string_append(v___x_238_, v___x_239_);
lean_dec_ref(v___x_239_);
v___x_241_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v___x_241_);
v___x_243_ = v___x_232_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
v___jp_247_:
{
uint8_t v_construct_249_; uint64_t v___x_250_; 
v_construct_249_ = lean_ctor_get_uint8(v_b_197_, sizeof(void*)*4);
v___x_250_ = lean_uint64_lor(v___x_246_, v___y_248_);
if (v_construct_249_ == 0)
{
uint64_t v___x_251_; 
v___x_251_ = 0ULL;
v___y_202_ = v___x_250_;
v___y_203_ = v___x_251_;
goto v___jp_201_;
}
else
{
uint64_t v___x_252_; 
v___x_252_ = 4ULL;
v___y_202_ = v___x_250_;
v___y_203_ = v___x_252_;
goto v___jp_201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___boxed(lean_object* v_b_255_, lean_object* v_args_256_, lean_object* v_await_257_, lean_object* v_a_258_){
_start:
{
uint8_t v_await_boxed_259_; lean_object* v_res_260_; 
v_await_boxed_259_ = lean_unbox(v_await_257_);
v_res_260_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v_b_255_, v_args_256_, v_await_boxed_259_);
lean_dec_ref(v_b_255_);
return v_res_260_;
}
}
static lean_object* _init_l_Lasm_JS_Web_TextEncoder_new___closed__5(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__4));
v___x_273_ = l_Lasm_JS_Web_Support_args(v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new(){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; uint8_t v___x_277_; lean_object* v___x_278_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_new___closed__3));
v___x_276_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__5, &l_Lasm_JS_Web_TextEncoder_new___closed__5_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__5);
v___x_277_ = 0;
v___x_278_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0(v___x_275_, v___x_276_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_new___boxed(lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lasm_JS_Web_TextEncoder_new();
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding(lean_object* v_self_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_285_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_282_, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encoding___boxed(lean_object* v_self_286_, lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lasm_JS_Web_TextEncoder_encoding(v_self_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(lean_object* v_context_289_, lean_object* v_bytes_290_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_290_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_289_, v_a_293_);
return v___x_294_;
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
v_a_295_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_292_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_292_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1___boxed(lean_object* v_context_303_, lean_object* v_bytes_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v_context_303_, v_bytes_304_);
lean_dec_ref(v_bytes_304_);
lean_dec_ref(v_context_303_);
return v_res_306_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(uint8_t v_await_307_, uint64_t v_extra_308_){
_start:
{
uint64_t v___x_309_; uint64_t v___y_311_; 
v___x_309_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_307_ == 0)
{
uint64_t v___x_314_; 
v___x_314_ = 0ULL;
v___y_311_ = v___x_314_;
goto v___jp_310_;
}
else
{
uint64_t v___x_315_; 
v___x_315_ = 2ULL;
v___y_311_ = v___x_315_;
goto v___jp_310_;
}
v___jp_310_:
{
uint64_t v___x_312_; uint64_t v___x_313_; 
v___x_312_ = lean_uint64_lor(v___x_309_, v___y_311_);
v___x_313_ = lean_uint64_lor(v___x_312_, v_extra_308_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0___boxed(lean_object* v_await_316_, lean_object* v_extra_317_){
_start:
{
uint8_t v_await_boxed_318_; uint64_t v_extra_boxed_319_; uint64_t v_res_320_; lean_object* v_r_321_; 
v_await_boxed_318_ = lean_unbox(v_await_316_);
v_extra_boxed_319_ = lean_unbox_uint64(v_extra_317_);
lean_dec_ref(v_extra_317_);
v_res_320_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v_await_boxed_318_, v_extra_boxed_319_);
v_r_321_ = lean_box_uint64(v_res_320_);
return v_r_321_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0(void){
_start:
{
uint64_t v___x_322_; uint8_t v___x_323_; uint64_t v___x_324_; 
v___x_322_ = 8ULL;
v___x_323_ = 0;
v___x_324_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__0(v___x_323_, v___x_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(lean_object* v_o_326_, lean_object* v_name_327_, lean_object* v_args_328_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint64_t v___x_333_; lean_object* v___x_334_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_331_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_331_, 0, v_o_326_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
lean_inc_ref(v_name_327_);
v___x_332_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_332_, 0, v_name_327_);
v___x_333_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__0);
v___x_334_ = l_Lasm_JS_Value_invokeRaw(v___x_331_, v___x_332_, v_args_328_, v___x_333_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_337_ = lean_string_append(v___x_336_, v_name_327_);
lean_dec_ref(v_name_327_);
v___x_338_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0_spec__1(v___x_337_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v___x_337_);
return v___x_338_;
}
else
{
lean_dec_ref(v_name_327_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___boxed(lean_object* v_o_339_, lean_object* v_name_340_, lean_object* v_args_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_o_339_, v_name_340_, v_args_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode(lean_object* v_self_345_, lean_object* v_input_346_){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_348_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encode___closed__0));
v___x_349_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_input_346_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_mk_empty_array_with_capacity(v___x_350_);
v___x_352_ = lean_array_push(v___x_351_, v___x_349_);
v___x_353_ = l_Lasm_JS_Web_Support_args(v___x_352_);
v___x_354_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0(v_self_345_, v___x_348_, v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encode___boxed(lean_object* v_self_355_, lean_object* v_input_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lasm_JS_Web_TextEncoder_encode(v_self_355_, v_input_356_);
return v_res_358_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_nat_to_int(v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_374_, lean_object* v_key_375_){
_start:
{
if (lean_obj_tag(v_d_374_) == 8)
{
lean_object* v___x_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_422_; 
v___x_378_ = l_Lasm_JS_Data_field(v_d_374_, v_key_375_);
v_isSharedCheck_422_ = !lean_is_exclusive(v_d_374_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v_d_374_, 0);
lean_dec(v_unused_423_);
v___x_380_ = v_d_374_;
v_isShared_381_ = v_isSharedCheck_422_;
goto v_resetjp_379_;
}
else
{
lean_dec(v_d_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_422_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v_a_383_; lean_object* v_a_409_; 
switch(lean_obj_tag(v___x_378_))
{
case 1:
{
lean_del_object(v___x_380_);
goto v___jp_376_;
}
case 0:
{
lean_del_object(v___x_380_);
goto v___jp_376_;
}
default: 
{
switch(lean_obj_tag(v___x_378_))
{
case 3:
{
double v_n_416_; lean_object* v___x_417_; 
v_n_416_ = lean_ctor_get_float(v___x_378_, 0);
v___x_417_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v___x_418_; 
v___x_418_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__9));
v_a_383_ = v___x_418_;
goto v___jp_382_;
}
else
{
lean_object* v_val_419_; 
v_val_419_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_val_419_);
lean_dec_ref_known(v___x_417_, 1);
v_a_409_ = v_val_419_;
goto v___jp_408_;
}
}
case 5:
{
lean_object* v_i_420_; 
v_i_420_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_i_420_);
v_a_409_ = v_i_420_;
goto v___jp_408_;
}
default: 
{
lean_object* v___x_421_; 
v___x_421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v_a_383_ = v___x_421_;
goto v___jp_382_;
}
}
}
}
v___jp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_384_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_385_ = lean_string_append(v___x_384_, v_key_375_);
v___x_386_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_387_ = lean_string_append(v___x_385_, v___x_386_);
v___x_388_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_389_ = lean_string_append(v___x_387_, v___x_388_);
v___x_390_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_391_ = lean_string_append(v___x_389_, v___x_390_);
v___x_392_ = l_Lasm_JS_Data_describe(v___x_378_);
v___x_393_ = lean_string_append(v___x_391_, v___x_392_);
lean_dec_ref(v___x_392_);
v___x_394_ = lean_string_utf8_byte_size(v_a_383_);
v___x_395_ = lean_unsigned_to_nat(0u);
v___x_396_ = lean_nat_dec_eq(v___x_394_, v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_397_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_398_ = lean_string_append(v___x_397_, v_a_383_);
v___x_399_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
v___x_401_ = lean_string_append(v___x_393_, v___x_400_);
lean_dec_ref(v___x_400_);
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 0);
lean_ctor_set(v___x_380_, 0, v___x_401_);
v___x_403_ = v___x_380_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
else
{
lean_object* v___x_406_; 
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 0);
lean_ctor_set(v___x_380_, 0, v___x_393_);
v___x_406_ = v___x_380_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_393_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
v___jp_408_:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__7);
v___x_411_ = lean_int_dec_le(v___x_410_, v_a_409_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; 
lean_dec(v_a_409_);
v___x_412_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__8));
v_a_383_ = v___x_412_;
goto v___jp_382_;
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
lean_del_object(v___x_380_);
lean_dec(v___x_378_);
v___x_413_ = l_Int_toNat(v_a_409_);
lean_dec(v_a_409_);
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
v___x_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
}
}
}
else
{
lean_object* v___x_424_; 
lean_dec(v_d_374_);
v___x_424_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__11));
return v___x_424_;
}
v___jp_376_:
{
lean_object* v___x_377_; 
v___x_377_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_377_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_425_, lean_object* v_key_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_425_, v_key_426_);
lean_dec_ref(v_key_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(lean_object* v_context_428_, lean_object* v_d_429_){
_start:
{
lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_438_; lean_object* v_received_439_; lean_object* v___y_458_; lean_object* v_a_461_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__0));
lean_inc(v_d_429_);
v___x_486_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_429_, v___x_485_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v_a_461_ = v_a_487_;
goto v___jp_460_;
}
else
{
lean_object* v_a_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_a_488_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_486_, 1);
v___x_489_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___lam__0___closed__1));
lean_inc(v_d_429_);
v___x_490_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3(v_d_429_, v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; 
lean_dec(v_a_488_);
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v_a_461_ = v_a_491_;
goto v___jp_460_;
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
lean_dec(v_d_429_);
v_a_492_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v_a_488_);
lean_ctor_set(v___x_496_, 1, v_a_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 0);
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
v___jp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_string_append(v___y_432_, v___y_433_);
lean_dec_ref(v___y_433_);
v___x_435_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
v___x_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
return v___x_436_;
}
v___jp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_441_ = lean_string_append(v___x_440_, v_context_428_);
v___x_442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
v___x_444_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderEncodeIntoResult___closed__2));
v___x_445_ = lean_string_append(v___x_443_, v___x_444_);
v___x_446_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_447_ = lean_string_append(v___x_445_, v___x_446_);
v___x_448_ = lean_string_append(v___x_447_, v_received_439_);
lean_dec_ref(v_received_439_);
v___x_449_ = lean_string_utf8_byte_size(v___y_438_);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_nat_dec_eq(v___x_449_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_453_ = lean_string_append(v___x_452_, v___y_438_);
lean_dec_ref(v___y_438_);
v___x_454_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_455_ = lean_string_append(v___x_453_, v___x_454_);
v___y_432_ = v___x_448_;
v___y_433_ = v___x_455_;
goto v___jp_431_;
}
else
{
lean_object* v___x_456_; 
lean_dec_ref(v___y_438_);
v___x_456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___y_432_ = v___x_448_;
v___y_433_ = v___x_456_;
goto v___jp_431_;
}
}
v___jp_457_:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lasm_JS_Data_describe(v_d_429_);
v___y_438_ = v___y_458_;
v_received_439_ = v___x_459_;
goto v___jp_437_;
}
v___jp_460_:
{
if (lean_obj_tag(v_d_429_) == 9)
{
lean_object* v_value_462_; lean_object* v_description_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_value_462_ = lean_ctor_get(v_d_429_, 0);
v_description_463_ = lean_ctor_get(v_d_429_, 1);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_465_ = lean_string_dec_eq(v_description_463_, v___x_464_);
if (v___x_465_ == 0)
{
v___y_458_ = v_a_461_;
goto v___jp_457_;
}
else
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_482_; 
lean_inc(v_value_462_);
v_isSharedCheck_482_ = !lean_is_exclusive(v_d_429_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; lean_object* v_unused_484_; 
v_unused_483_ = lean_ctor_get(v_d_429_, 1);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_d_429_, 0);
lean_dec(v_unused_484_);
v___x_467_ = v_d_429_;
v_isShared_468_ = v_isSharedCheck_482_;
goto v_resetjp_466_;
}
else
{
lean_dec(v_d_429_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_482_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
uint32_t v___x_469_; uint64_t v___x_470_; lean_object* v___x_472_; 
v___x_469_ = 206;
v___x_470_ = 0ULL;
lean_inc(v_value_462_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 1, v___x_464_);
v___x_472_ = v___x_467_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_value_462_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_464_);
v___x_472_ = v_reuseFailAlloc_481_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
uint32_t v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lasm_js_value_handle(v_value_462_);
lean_dec(v_value_462_);
v___x_474_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_469_, v___x_470_, v___x_472_, v___x_473_);
lean_dec_ref(v___x_472_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; uint8_t v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = lean_string_validate_utf8(v_a_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec(v_a_475_);
v___x_477_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_478_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_477_);
v___y_438_ = v_a_461_;
v_received_439_ = v___x_478_;
goto v___jp_437_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_string_from_utf8_unchecked(v_a_475_);
v___y_438_ = v_a_461_;
v_received_439_ = v___x_479_;
goto v___jp_437_;
}
}
else
{
lean_object* v___x_480_; 
lean_dec_ref_known(v___x_474_, 1);
v___x_480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v___y_438_ = v_a_461_;
v_received_439_ = v___x_480_;
goto v___jp_437_;
}
}
}
}
}
else
{
v___y_458_ = v_a_461_;
goto v___jp_457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2___boxed(lean_object* v_context_501_, lean_object* v_d_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_501_, v_d_502_);
lean_dec_ref(v_context_501_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(lean_object* v_context_505_, lean_object* v_bytes_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_506_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_510_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
v___x_510_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1_spec__2(v_context_505_, v_a_509_);
return v___x_510_;
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
v_a_511_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_508_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_508_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1___boxed(lean_object* v_context_519_, lean_object* v_bytes_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v_context_519_, v_bytes_520_);
lean_dec_ref(v_bytes_520_);
lean_dec_ref(v_context_519_);
return v_res_522_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(uint8_t v_await_523_, uint64_t v_extra_524_){
_start:
{
uint64_t v___x_525_; uint64_t v___y_527_; 
v___x_525_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_523_ == 0)
{
uint64_t v___x_530_; 
v___x_530_ = 0ULL;
v___y_527_ = v___x_530_;
goto v___jp_526_;
}
else
{
uint64_t v___x_531_; 
v___x_531_ = 2ULL;
v___y_527_ = v___x_531_;
goto v___jp_526_;
}
v___jp_526_:
{
uint64_t v___x_528_; uint64_t v___x_529_; 
v___x_528_ = lean_uint64_lor(v___x_525_, v___y_527_);
v___x_529_ = lean_uint64_lor(v___x_528_, v_extra_524_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0___boxed(lean_object* v_await_532_, lean_object* v_extra_533_){
_start:
{
uint8_t v_await_boxed_534_; uint64_t v_extra_boxed_535_; uint64_t v_res_536_; lean_object* v_r_537_; 
v_await_boxed_534_ = lean_unbox(v_await_532_);
v_extra_boxed_535_ = lean_unbox_uint64(v_extra_533_);
lean_dec_ref(v_extra_533_);
v_res_536_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v_await_boxed_534_, v_extra_boxed_535_);
v_r_537_ = lean_box_uint64(v_res_536_);
return v_r_537_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0(void){
_start:
{
uint64_t v___x_538_; uint8_t v___x_539_; uint64_t v___x_540_; 
v___x_538_ = 8ULL;
v___x_539_ = 0;
v___x_540_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__0(v___x_539_, v___x_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(lean_object* v_o_541_, lean_object* v_name_542_, lean_object* v_args_543_){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint64_t v___x_548_; lean_object* v___x_549_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_546_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_546_, 0, v_o_541_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
lean_inc_ref(v_name_542_);
v___x_547_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_547_, 0, v_name_542_);
v___x_548_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___closed__0);
v___x_549_ = l_Lasm_JS_Value_invokeRaw(v___x_546_, v___x_547_, v_args_543_, v___x_548_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_549_, 1);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_552_ = lean_string_append(v___x_551_, v_name_542_);
lean_dec_ref(v_name_542_);
v___x_553_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0_spec__1(v___x_552_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v___x_552_);
return v___x_553_;
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_name_542_);
v_a_554_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_549_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_549_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0___boxed(lean_object* v_o_562_, lean_object* v_name_563_, lean_object* v_args_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_o_562_, v_name_563_, v_args_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto(lean_object* v_self_568_, lean_object* v_source_569_, lean_object* v_destination_570_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_572_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encodeInto___closed__0));
v___x_573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_573_, 0, v_source_569_);
v___x_574_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_574_, 0, v_destination_570_);
v___x_575_ = lean_unsigned_to_nat(2u);
v___x_576_ = lean_mk_empty_array_with_capacity(v___x_575_);
v___x_577_ = lean_array_push(v___x_576_, v___x_573_);
v___x_578_ = lean_array_push(v___x_577_, v___x_574_);
v___x_579_ = l_Lasm_JS_Web_Support_args(v___x_578_);
v___x_580_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encodeInto_spec__0(v_self_568_, v___x_572_, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoder_encodeInto___boxed(lean_object* v_self_581_, lean_object* v_source_582_, lean_object* v_destination_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lasm_JS_Web_TextEncoder_encodeInto(v_self_581_, v_source_582_, v_destination_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(lean_object* v_x_586_){
_start:
{
if (lean_obj_tag(v_x_586_) == 0)
{
lean_object* v___x_587_; 
v___x_587_ = lean_box(0);
return v___x_587_;
}
else
{
lean_object* v_val_588_; lean_object* v_fatal_589_; lean_object* v_ignoreBOM_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_607_; 
v_val_588_ = lean_ctor_get(v_x_586_, 0);
lean_inc(v_val_588_);
lean_dec_ref_known(v_x_586_, 1);
v_fatal_589_ = lean_ctor_get(v_val_588_, 0);
v_ignoreBOM_590_ = lean_ctor_get(v_val_588_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_val_588_);
if (v_isSharedCheck_607_ == 0)
{
v___x_592_ = v_val_588_;
v_isShared_593_ = v_isSharedCheck_607_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_ignoreBOM_590_);
lean_inc(v_fatal_589_);
lean_dec(v_val_588_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_607_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_594_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_595_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_fatal_589_);
lean_dec(v_fatal_589_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_595_);
lean_ctor_set(v___x_592_, 0, v___x_594_);
v___x_597_ = v___x_592_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___x_595_);
v___x_597_ = v_reuseFailAlloc_606_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_598_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_599_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ignoreBOM_590_);
lean_dec(v_ignoreBOM_590_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_unsigned_to_nat(2u);
v___x_602_ = lean_mk_empty_array_with_capacity(v___x_601_);
v___x_603_ = lean_array_push(v___x_602_, v___x_597_);
v___x_604_ = lean_array_push(v___x_603_, v___x_600_);
v___x_605_ = l_Lasm_JS_Web_Support_fields(v___x_604_);
lean_dec_ref(v___x_604_);
return v___x_605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(lean_object* v_context_608_, lean_object* v_d_609_){
_start:
{
lean_object* v___y_612_; lean_object* v___y_613_; 
if (lean_obj_tag(v_d_609_) == 9)
{
lean_object* v_value_617_; lean_object* v___x_618_; 
v_value_617_ = lean_ctor_get(v_d_609_, 0);
lean_inc(v_value_617_);
lean_dec_ref_known(v_d_609_, 2);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_value_617_);
return v___x_618_;
}
else
{
lean_object* v___x_619_; lean_object* v_received_621_; 
v___x_619_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_609_) == 9)
{
lean_object* v_value_635_; lean_object* v_description_636_; uint8_t v___x_637_; 
v_value_635_ = lean_ctor_get(v_d_609_, 0);
v_description_636_ = lean_ctor_get(v_d_609_, 1);
v___x_637_ = lean_string_dec_eq(v_description_636_, v___x_619_);
if (v___x_637_ == 0)
{
goto v___jp_633_;
}
else
{
uint32_t v___x_638_; uint64_t v___x_639_; lean_object* v___x_640_; uint32_t v___x_641_; lean_object* v___x_642_; 
lean_inc_n(v_value_635_, 2);
lean_dec_ref_known(v_d_609_, 2);
v___x_638_ = 206;
v___x_639_ = 0ULL;
v___x_640_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_640_, 0, v_value_635_);
lean_ctor_set(v___x_640_, 1, v___x_619_);
v___x_641_ = lasm_js_value_handle(v_value_635_);
lean_dec(v_value_635_);
v___x_642_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_638_, v___x_639_, v___x_640_, v___x_641_);
lean_dec_ref_known(v___x_640_, 2);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; uint8_t v___x_644_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v___x_644_ = lean_string_validate_utf8(v_a_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec(v_a_643_);
v___x_645_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_646_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_645_);
v_received_621_ = v___x_646_;
goto v___jp_620_;
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_string_from_utf8_unchecked(v_a_643_);
v_received_621_ = v___x_647_;
goto v___jp_620_;
}
}
else
{
lean_object* v___x_648_; 
lean_dec_ref_known(v___x_642_, 1);
v___x_648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_621_ = v___x_648_;
goto v___jp_620_;
}
}
}
else
{
goto v___jp_633_;
}
v___jp_620_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_623_ = lean_string_append(v___x_622_, v_context_608_);
v___x_624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_625_ = lean_string_append(v___x_623_, v___x_624_);
v___x_626_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoder___closed__0));
v___x_627_ = lean_string_append(v___x_625_, v___x_626_);
v___x_628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_629_ = lean_string_append(v___x_627_, v___x_628_);
v___x_630_ = lean_string_append(v___x_629_, v_received_621_);
lean_dec_ref(v_received_621_);
v___x_631_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_612_ = v___x_630_;
v___y_613_ = v___x_632_;
goto v___jp_611_;
}
else
{
v___y_612_ = v___x_630_;
v___y_613_ = v___x_619_;
goto v___jp_611_;
}
}
v___jp_633_:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lasm_JS_Data_describe(v_d_609_);
v_received_621_ = v___x_634_;
goto v___jp_620_;
}
}
v___jp_611_:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_614_ = lean_string_append(v___y_612_, v___y_613_);
v___x_615_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
v___x_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1___boxed(lean_object* v_context_649_, lean_object* v_d_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v_context_649_, v_d_650_);
lean_dec_ref(v_context_649_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(lean_object* v_b_653_, lean_object* v_args_654_, uint8_t v_await_655_){
_start:
{
uint64_t v___y_658_; uint64_t v___y_659_; uint64_t v___x_702_; uint64_t v___y_704_; 
v___x_702_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_655_ == 0)
{
uint64_t v___x_709_; 
v___x_709_ = 0ULL;
v___y_704_ = v___x_709_;
goto v___jp_703_;
}
else
{
uint64_t v___x_710_; 
v___x_710_ = 2ULL;
v___y_704_ = v___x_710_;
goto v___jp_703_;
}
v___jp_657_:
{
uint64_t v_flags_660_; uint32_t v___x_661_; lean_object* v___x_662_; uint32_t v___x_663_; lean_object* v___x_664_; 
v_flags_660_ = lean_uint64_lor(v___y_658_, v___y_659_);
v___x_661_ = 214;
v___x_662_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_653_, v_args_654_);
v___x_663_ = 0;
v___x_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_661_, v_flags_660_, v___x_662_, v___x_663_);
lean_dec(v___x_662_);
if (lean_obj_tag(v___x_664_) == 0)
{
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_665_);
lean_dec(v_a_665_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v___x_668_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_653_);
v___x_669_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1_spec__1(v___x_668_, v_a_667_);
lean_dec_ref(v___x_668_);
return v___x_669_;
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
v_a_670_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_666_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_666_);
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
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_a_678_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_664_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_664_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set_tag(v___x_680_, 1);
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
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_701_; 
v_a_686_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_701_ == 0)
{
v___x_688_ = v___x_664_;
v_isShared_689_ = v_isSharedCheck_701_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_664_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_701_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_691_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_653_);
v___x_692_ = lean_string_append(v___x_690_, v___x_691_);
lean_dec_ref(v___x_691_);
v___x_693_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_694_ = lean_string_append(v___x_692_, v___x_693_);
v___x_695_ = lean_io_error_to_string(v_a_686_);
v___x_696_ = lean_string_append(v___x_694_, v___x_695_);
lean_dec_ref(v___x_695_);
v___x_697_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_697_);
v___x_699_ = v___x_688_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
v___jp_703_:
{
uint8_t v_construct_705_; uint64_t v___x_706_; 
v_construct_705_ = lean_ctor_get_uint8(v_b_653_, sizeof(void*)*4);
v___x_706_ = lean_uint64_lor(v___x_702_, v___y_704_);
if (v_construct_705_ == 0)
{
uint64_t v___x_707_; 
v___x_707_ = 0ULL;
v___y_658_ = v___x_706_;
v___y_659_ = v___x_707_;
goto v___jp_657_;
}
else
{
uint64_t v___x_708_; 
v___x_708_ = 4ULL;
v___y_658_ = v___x_706_;
v___y_659_ = v___x_708_;
goto v___jp_657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1___boxed(lean_object* v_b_711_, lean_object* v_args_712_, lean_object* v_await_713_, lean_object* v_a_714_){
_start:
{
uint8_t v_await_boxed_715_; lean_object* v_res_716_; 
v_await_boxed_715_ = lean_unbox(v_await_713_);
v_res_716_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v_b_711_, v_args_712_, v_await_boxed_715_);
lean_dec_ref(v_b_711_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new(lean_object* v_label_725_, lean_object* v_options_726_){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; lean_object* v___x_737_; 
v___x_728_ = lean_unsigned_to_nat(2u);
v___x_729_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_new___closed__2));
v___x_730_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_725_);
v___x_731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_726_);
v___x_732_ = lean_mk_empty_array_with_capacity(v___x_728_);
v___x_733_ = lean_array_push(v___x_732_, v___x_730_);
v___x_734_ = lean_array_push(v___x_733_, v___x_731_);
v___x_735_ = l_Lasm_JS_Web_Support_args(v___x_734_);
v___x_736_ = 0;
v___x_737_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoder_new_spec__1(v___x_729_, v___x_735_, v___x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_new___boxed(lean_object* v_label_738_, lean_object* v_options_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_JS_Web_TextDecoder_new(v_label_738_, v_options_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding(lean_object* v_self_742_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_745_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_742_, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_encoding___boxed(lean_object* v_self_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lasm_JS_Web_TextDecoder_encoding(v_self_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal(lean_object* v_self_749_){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_752_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_749_, v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_fatal___boxed(lean_object* v_self_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lasm_JS_Web_TextDecoder_fatal(v_self_753_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM(lean_object* v_self_756_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_759_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_756_, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_ignoreBOM___boxed(lean_object* v_self_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lasm_JS_Web_TextDecoder_ignoreBOM(v_self_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(lean_object* v_x_763_){
_start:
{
if (lean_obj_tag(v_x_763_) == 0)
{
lean_object* v___x_764_; 
v___x_764_ = lean_box(0);
return v___x_764_;
}
else
{
lean_object* v_val_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_val_765_ = lean_ctor_get(v_x_763_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_763_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v_x_763_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_val_765_);
lean_dec(v_x_763_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 6);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_val_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(uint8_t v_await_773_, uint64_t v_extra_774_){
_start:
{
uint64_t v___x_775_; uint64_t v___y_777_; 
v___x_775_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_773_ == 0)
{
uint64_t v___x_780_; 
v___x_780_ = 0ULL;
v___y_777_ = v___x_780_;
goto v___jp_776_;
}
else
{
uint64_t v___x_781_; 
v___x_781_ = 2ULL;
v___y_777_ = v___x_781_;
goto v___jp_776_;
}
v___jp_776_:
{
uint64_t v___x_778_; uint64_t v___x_779_; 
v___x_778_ = lean_uint64_lor(v___x_775_, v___y_777_);
v___x_779_ = lean_uint64_lor(v___x_778_, v_extra_774_);
return v___x_779_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2___boxed(lean_object* v_await_782_, lean_object* v_extra_783_){
_start:
{
uint8_t v_await_boxed_784_; uint64_t v_extra_boxed_785_; uint64_t v_res_786_; lean_object* v_r_787_; 
v_await_boxed_784_ = lean_unbox(v_await_782_);
v_extra_boxed_785_ = lean_unbox_uint64(v_extra_783_);
lean_dec_ref(v_extra_783_);
v_res_786_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v_await_boxed_784_, v_extra_boxed_785_);
v_r_787_ = lean_box_uint64(v_res_786_);
return v_r_787_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0(void){
_start:
{
uint64_t v___x_788_; uint8_t v___x_789_; uint64_t v___x_790_; 
v___x_788_ = 8ULL;
v___x_789_ = 0;
v___x_790_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2_spec__2(v___x_789_, v___x_788_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(lean_object* v_o_791_, lean_object* v_name_792_, lean_object* v_args_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint64_t v___x_798_; lean_object* v___x_799_; 
v___x_795_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
v___x_796_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_796_, 0, v_o_791_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
lean_inc_ref(v_name_792_);
v___x_797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_797_, 0, v_name_792_);
v___x_798_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___closed__0);
v___x_799_ = l_Lasm_JS_Value_invokeRaw(v___x_796_, v___x_797_, v_args_793_, v___x_798_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_799_, 1);
v___x_801_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextEncoder_encode_spec__0___closed__1));
v___x_802_ = lean_string_append(v___x_801_, v_name_792_);
lean_dec_ref(v_name_792_);
v___x_803_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_802_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v___x_802_);
return v___x_803_;
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec_ref(v_name_792_);
v_a_804_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_799_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_799_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2___boxed(lean_object* v_o_812_, lean_object* v_name_813_, lean_object* v_args_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_o_812_, v_name_813_, v_args_814_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v___x_818_; 
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
lean_object* v_val_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_val_819_ = lean_ctor_get(v_x_817_, 0);
v___x_820_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecodeOptions___lam__0___closed__0));
v___x_821_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_819_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = lean_unsigned_to_nat(1u);
v___x_824_ = lean_mk_empty_array_with_capacity(v___x_823_);
v___x_825_ = lean_array_push(v___x_824_, v___x_822_);
v___x_826_ = l_Lasm_JS_Web_Support_fields(v___x_825_);
lean_dec_ref(v___x_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1___boxed(lean_object* v_x_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_x_827_);
lean_dec(v_x_827_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode(lean_object* v_self_830_, lean_object* v_input_831_, lean_object* v_options_832_){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_834_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoder_decode___closed__0));
v___x_835_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__0(v_input_831_);
v___x_836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_decode_spec__1(v_options_832_);
v___x_837_ = lean_unsigned_to_nat(2u);
v___x_838_ = lean_mk_empty_array_with_capacity(v___x_837_);
v___x_839_ = lean_array_push(v___x_838_, v___x_835_);
v___x_840_ = lean_array_push(v___x_839_, v___x_836_);
v___x_841_ = l_Lasm_JS_Web_Support_args(v___x_840_);
v___x_842_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_TextDecoder_decode_spec__2(v_self_830_, v___x_834_, v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoder_decode___boxed(lean_object* v_self_843_, lean_object* v_input_844_, lean_object* v_options_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lasm_JS_Web_TextDecoder_decode(v_self_843_, v_input_844_, v_options_845_);
lean_dec(v_options_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(lean_object* v_context_848_, lean_object* v_d_849_){
_start:
{
lean_object* v___y_852_; lean_object* v___y_853_; 
if (lean_obj_tag(v_d_849_) == 9)
{
lean_object* v_value_857_; lean_object* v___x_858_; 
v_value_857_ = lean_ctor_get(v_d_849_, 0);
lean_inc(v_value_857_);
lean_dec_ref_known(v_d_849_, 2);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v_value_857_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; lean_object* v_received_861_; 
v___x_859_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_849_) == 9)
{
lean_object* v_value_875_; lean_object* v_description_876_; uint8_t v___x_877_; 
v_value_875_ = lean_ctor_get(v_d_849_, 0);
v_description_876_ = lean_ctor_get(v_d_849_, 1);
v___x_877_ = lean_string_dec_eq(v_description_876_, v___x_859_);
if (v___x_877_ == 0)
{
goto v___jp_873_;
}
else
{
uint32_t v___x_878_; uint64_t v___x_879_; lean_object* v___x_880_; uint32_t v___x_881_; lean_object* v___x_882_; 
lean_inc_n(v_value_875_, 2);
lean_dec_ref_known(v_d_849_, 2);
v___x_878_ = 206;
v___x_879_ = 0ULL;
v___x_880_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_880_, 0, v_value_875_);
lean_ctor_set(v___x_880_, 1, v___x_859_);
v___x_881_ = lasm_js_value_handle(v_value_875_);
lean_dec(v_value_875_);
v___x_882_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_878_, v___x_879_, v___x_880_, v___x_881_);
lean_dec_ref_known(v___x_880_, 2);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; uint8_t v___x_884_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = lean_string_validate_utf8(v_a_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; lean_object* v___x_886_; 
lean_dec(v_a_883_);
v___x_885_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_886_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_885_);
v_received_861_ = v___x_886_;
goto v___jp_860_;
}
else
{
lean_object* v___x_887_; 
v___x_887_ = lean_string_from_utf8_unchecked(v_a_883_);
v_received_861_ = v___x_887_;
goto v___jp_860_;
}
}
else
{
lean_object* v___x_888_; 
lean_dec_ref_known(v___x_882_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_861_ = v___x_888_;
goto v___jp_860_;
}
}
}
else
{
goto v___jp_873_;
}
v___jp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_863_ = lean_string_append(v___x_862_, v_context_848_);
v___x_864_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextEncoderStream___closed__0));
v___x_867_ = lean_string_append(v___x_865_, v___x_866_);
v___x_868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_869_ = lean_string_append(v___x_867_, v___x_868_);
v___x_870_ = lean_string_append(v___x_869_, v_received_861_);
lean_dec_ref(v_received_861_);
v___x_871_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_852_ = v___x_870_;
v___y_853_ = v___x_872_;
goto v___jp_851_;
}
else
{
v___y_852_ = v___x_870_;
v___y_853_ = v___x_859_;
goto v___jp_851_;
}
}
v___jp_873_:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lasm_JS_Data_describe(v_d_849_);
v_received_861_ = v___x_874_;
goto v___jp_860_;
}
}
v___jp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_string_append(v___y_852_, v___y_853_);
v___x_855_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
v___x_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_889_, lean_object* v_d_890_, lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v_context_889_, v_d_890_);
lean_dec_ref(v_context_889_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(lean_object* v_b_893_, lean_object* v_args_894_, uint8_t v_await_895_){
_start:
{
uint64_t v___y_898_; uint64_t v___y_899_; uint64_t v___x_942_; uint64_t v___y_944_; 
v___x_942_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_895_ == 0)
{
uint64_t v___x_949_; 
v___x_949_ = 0ULL;
v___y_944_ = v___x_949_;
goto v___jp_943_;
}
else
{
uint64_t v___x_950_; 
v___x_950_ = 2ULL;
v___y_944_ = v___x_950_;
goto v___jp_943_;
}
v___jp_897_:
{
uint64_t v_flags_900_; uint32_t v___x_901_; lean_object* v___x_902_; uint32_t v___x_903_; lean_object* v___x_904_; 
v_flags_900_ = lean_uint64_lor(v___y_898_, v___y_899_);
v___x_901_ = 214;
v___x_902_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_893_, v_args_894_);
v___x_903_ = 0;
v___x_904_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_901_, v_flags_900_, v___x_902_, v___x_903_);
lean_dec(v___x_902_);
if (lean_obj_tag(v___x_904_) == 0)
{
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_905_);
lean_dec(v_a_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_893_);
v___x_909_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0_spec__0(v___x_908_, v_a_907_);
lean_dec_ref(v___x_908_);
return v___x_909_;
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
v_a_910_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_906_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_906_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
v_a_918_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_904_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_904_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 1);
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_941_; 
v_a_926_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_941_ == 0)
{
v___x_928_ = v___x_904_;
v_isShared_929_ = v_isSharedCheck_941_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_904_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_941_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_930_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_931_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_893_);
v___x_932_ = lean_string_append(v___x_930_, v___x_931_);
lean_dec_ref(v___x_931_);
v___x_933_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_934_ = lean_string_append(v___x_932_, v___x_933_);
v___x_935_ = lean_io_error_to_string(v_a_926_);
v___x_936_ = lean_string_append(v___x_934_, v___x_935_);
lean_dec_ref(v___x_935_);
v___x_937_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_937_);
v___x_939_ = v___x_928_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
v___jp_943_:
{
uint8_t v_construct_945_; uint64_t v___x_946_; 
v_construct_945_ = lean_ctor_get_uint8(v_b_893_, sizeof(void*)*4);
v___x_946_ = lean_uint64_lor(v___x_942_, v___y_944_);
if (v_construct_945_ == 0)
{
uint64_t v___x_947_; 
v___x_947_ = 0ULL;
v___y_898_ = v___x_946_;
v___y_899_ = v___x_947_;
goto v___jp_897_;
}
else
{
uint64_t v___x_948_; 
v___x_948_ = 4ULL;
v___y_898_ = v___x_946_;
v___y_899_ = v___x_948_;
goto v___jp_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0___boxed(lean_object* v_b_951_, lean_object* v_args_952_, lean_object* v_await_953_, lean_object* v_a_954_){
_start:
{
uint8_t v_await_boxed_955_; lean_object* v_res_956_; 
v_await_boxed_955_ = lean_unbox(v_await_953_);
v_res_956_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v_b_951_, v_args_952_, v_await_boxed_955_);
lean_dec_ref(v_b_951_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new(){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; 
v___x_966_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_new___closed__2));
v___x_967_ = lean_obj_once(&l_Lasm_JS_Web_TextEncoder_new___closed__5, &l_Lasm_JS_Web_TextEncoder_new___closed__5_once, _init_l_Lasm_JS_Web_TextEncoder_new___closed__5);
v___x_968_ = 0;
v___x_969_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoderStream_new_spec__0(v___x_966_, v___x_967_, v___x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_new___boxed(lean_object* v_a_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lasm_JS_Web_TextEncoderStream_new();
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding(lean_object* v_self_972_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_975_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_972_, v___x_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_encoding___boxed(lean_object* v_self_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_JS_Web_TextEncoderStream_encoding(v_self_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable(lean_object* v_self_980_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_983_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_980_, v___x_982_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_a_992_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_983_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_983_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_readable___boxed(lean_object* v_self_1000_, lean_object* v_a_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lasm_JS_Web_TextEncoderStream_readable(v_self_1000_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable(lean_object* v_self_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_1007_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1004_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1007_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1007_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextEncoderStream_writable___boxed(lean_object* v_self_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lasm_JS_Web_TextEncoderStream_writable(v_self_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(lean_object* v_context_1027_, lean_object* v_d_1028_){
_start:
{
lean_object* v___y_1031_; lean_object* v___y_1032_; 
if (lean_obj_tag(v_d_1028_) == 9)
{
lean_object* v_value_1036_; lean_object* v___x_1037_; 
v_value_1036_ = lean_ctor_get(v_d_1028_, 0);
lean_inc(v_value_1036_);
lean_dec_ref_known(v_d_1028_, 2);
v___x_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1037_, 0, v_value_1036_);
return v___x_1037_;
}
else
{
lean_object* v___x_1038_; lean_object* v_received_1040_; 
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextEncoder___lam__0___closed__0));
if (lean_obj_tag(v_d_1028_) == 9)
{
lean_object* v_value_1054_; lean_object* v_description_1055_; uint8_t v___x_1056_; 
v_value_1054_ = lean_ctor_get(v_d_1028_, 0);
v_description_1055_ = lean_ctor_get(v_d_1028_, 1);
v___x_1056_ = lean_string_dec_eq(v_description_1055_, v___x_1038_);
if (v___x_1056_ == 0)
{
goto v___jp_1052_;
}
else
{
uint32_t v___x_1057_; uint64_t v___x_1058_; lean_object* v___x_1059_; uint32_t v___x_1060_; lean_object* v___x_1061_; 
lean_inc_n(v_value_1054_, 2);
lean_dec_ref_known(v_d_1028_, 2);
v___x_1057_ = 206;
v___x_1058_ = 0ULL;
v___x_1059_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1059_, 0, v_value_1054_);
lean_ctor_set(v___x_1059_, 1, v___x_1038_);
v___x_1060_ = lasm_js_value_handle(v_value_1054_);
lean_dec(v_value_1054_);
v___x_1061_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1057_, v___x_1058_, v___x_1059_, v___x_1060_);
lean_dec_ref_known(v___x_1059_, 2);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; uint8_t v___x_1063_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1063_ = lean_string_validate_utf8(v_a_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_dec(v_a_1062_);
v___x_1064_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__9);
v___x_1065_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1064_);
v_received_1040_ = v___x_1065_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_string_from_utf8_unchecked(v_a_1062_);
v_received_1040_ = v___x_1066_;
goto v___jp_1039_;
}
}
else
{
lean_object* v___x_1067_; 
lean_dec_ref_known(v___x_1061_, 1);
v___x_1067_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__10));
v_received_1040_ = v___x_1067_;
goto v___jp_1039_;
}
}
}
else
{
goto v___jp_1052_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; 
v___x_1041_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1042_ = lean_string_append(v___x_1041_, v_context_1027_);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__1));
v___x_1044_ = lean_string_append(v___x_1042_, v___x_1043_);
v___x_1045_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTextDecoderStream___closed__0));
v___x_1046_ = lean_string_append(v___x_1044_, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__2));
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
v___x_1049_ = lean_string_append(v___x_1048_, v_received_1040_);
lean_dec_ref(v_received_1040_);
v___x_1050_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__4);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__5));
v___y_1031_ = v___x_1049_;
v___y_1032_ = v___x_1051_;
goto v___jp_1030_;
}
else
{
v___y_1031_ = v___x_1049_;
v___y_1032_ = v___x_1038_;
goto v___jp_1030_;
}
}
v___jp_1052_:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lasm_JS_Data_describe(v_d_1028_);
v_received_1040_ = v___x_1053_;
goto v___jp_1039_;
}
}
v___jp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = lean_string_append(v___y_1031_, v___y_1032_);
v___x_1034_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0___boxed(lean_object* v_context_1068_, lean_object* v_d_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v_context_1068_, v_d_1069_);
lean_dec_ref(v_context_1068_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(lean_object* v_b_1072_, lean_object* v_args_1073_, uint8_t v_await_1074_){
_start:
{
uint64_t v___y_1077_; uint64_t v___y_1078_; uint64_t v___x_1121_; uint64_t v___y_1123_; 
v___x_1121_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__1);
if (v_await_1074_ == 0)
{
uint64_t v___x_1128_; 
v___x_1128_ = 0ULL;
v___y_1123_ = v___x_1128_;
goto v___jp_1122_;
}
else
{
uint64_t v___x_1129_; 
v___x_1129_ = 2ULL;
v___y_1123_ = v___x_1129_;
goto v___jp_1122_;
}
v___jp_1076_:
{
uint64_t v_flags_1079_; uint32_t v___x_1080_; lean_object* v___x_1081_; uint32_t v___x_1082_; lean_object* v___x_1083_; 
v_flags_1079_ = lean_uint64_lor(v___y_1077_, v___y_1078_);
v___x_1080_ = 214;
v___x_1081_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1072_, v_args_1073_);
v___x_1082_ = 0;
v___x_1083_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1080_, v_flags_1079_, v___x_1081_, v___x_1082_);
lean_dec(v___x_1081_);
if (lean_obj_tag(v___x_1083_) == 0)
{
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1084_);
lean_dec(v_a_1084_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1072_);
v___x_1088_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0_spec__0(v___x_1087_, v_a_1086_);
lean_dec_ref(v___x_1087_);
return v___x_1088_;
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1085_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1085_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
v_a_1097_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1083_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1083_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set_tag(v___x_1099_, 1);
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1120_; 
v_a_1105_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1107_ = v___x_1083_;
v_isShared_1108_ = v_isSharedCheck_1120_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1083_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1120_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1109_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0_spec__0___closed__0));
v___x_1110_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1072_);
v___x_1111_ = lean_string_append(v___x_1109_, v___x_1110_);
lean_dec_ref(v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextEncoder_new_spec__0___closed__0));
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
v___x_1114_ = lean_io_error_to_string(v_a_1105_);
v___x_1115_ = lean_string_append(v___x_1113_, v___x_1114_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1116_);
v___x_1118_ = v___x_1107_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
v___jp_1122_:
{
uint8_t v_construct_1124_; uint64_t v___x_1125_; 
v_construct_1124_ = lean_ctor_get_uint8(v_b_1072_, sizeof(void*)*4);
v___x_1125_ = lean_uint64_lor(v___x_1121_, v___y_1123_);
if (v_construct_1124_ == 0)
{
uint64_t v___x_1126_; 
v___x_1126_ = 0ULL;
v___y_1077_ = v___x_1125_;
v___y_1078_ = v___x_1126_;
goto v___jp_1076_;
}
else
{
uint64_t v___x_1127_; 
v___x_1127_ = 4ULL;
v___y_1077_ = v___x_1125_;
v___y_1078_ = v___x_1127_;
goto v___jp_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0___boxed(lean_object* v_b_1130_, lean_object* v_args_1131_, lean_object* v_await_1132_, lean_object* v_a_1133_){
_start:
{
uint8_t v_await_boxed_1134_; lean_object* v_res_1135_; 
v_await_boxed_1134_ = lean_unbox(v_await_1132_);
v_res_1135_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v_b_1130_, v_args_1131_, v_await_boxed_1134_);
lean_dec_ref(v_b_1130_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new(lean_object* v_label_1144_, lean_object* v_options_1145_){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; lean_object* v___x_1156_; 
v___x_1147_ = lean_unsigned_to_nat(2u);
v___x_1148_ = ((lean_object*)(l_Lasm_JS_Web_TextDecoderStream_new___closed__2));
v___x_1149_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_label_1144_);
v___x_1150_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_TextDecoder_new_spec__0(v_options_1145_);
v___x_1151_ = lean_mk_empty_array_with_capacity(v___x_1147_);
v___x_1152_ = lean_array_push(v___x_1151_, v___x_1149_);
v___x_1153_ = lean_array_push(v___x_1152_, v___x_1150_);
v___x_1154_ = l_Lasm_JS_Web_Support_args(v___x_1153_);
v___x_1155_ = 0;
v___x_1156_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TextDecoderStream_new_spec__0(v___x_1148_, v___x_1154_, v___x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_new___boxed(lean_object* v_label_1157_, lean_object* v_options_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lasm_JS_Web_TextDecoderStream_new(v_label_1157_, v_options_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding(lean_object* v_self_1161_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoder_encoding___closed__0));
v___x_1164_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1161_, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_encoding___boxed(lean_object* v_self_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lasm_JS_Web_TextDecoderStream_encoding(v_self_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal(lean_object* v_self_1168_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__0));
v___x_1171_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1168_, v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_fatal___boxed(lean_object* v_self_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lasm_JS_Web_TextDecoderStream_fatal(v_self_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(lean_object* v_self_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTextDecoderOptions___lam__0___closed__1));
v___x_1178_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1175_, v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_ignoreBOM___boxed(lean_object* v_self_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lasm_JS_Web_TextDecoderStream_ignoreBOM(v_self_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable(lean_object* v_self_1182_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_readable___closed__0));
v___x_1185_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1182_, v___x_1184_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1185_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1185_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_readable___boxed(lean_object* v_self_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_JS_Web_TextDecoderStream_readable(v_self_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable(lean_object* v_self_1205_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Web_TextEncoderStream_writable___closed__0));
v___x_1208_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1205_, v___x_1207_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1208_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1208_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TextDecoderStream_writable___boxed(lean_object* v_self_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lasm_JS_Web_TextDecoderStream_writable(v_self_1225_);
return v_res_1227_;
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
