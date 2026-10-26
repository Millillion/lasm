// Lean compiler output
// Module: Lasm.Web.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_Web_callback(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
double lean_uint64_to_float(uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "capture"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "passive"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSListenerOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSListenerOptions___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSListenerOptions___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSListenerOptions = (const lean_object*)&l_Lasm_Web_instToJSListenerOptions___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instInhabitedListenerOptions_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedListenerOptions_default = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedListenerOptions = (const lean_object*)&l_Lasm_Web_instInhabitedListenerOptions_default___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Listener"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_listen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_Web_Raw_listen___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_listen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_listen___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_listen___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__0_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_listen___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_listen___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_listen___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_listen___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_unlisten___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unlisten"};
static const lean_object* l_Lasm_Web_Raw_unlisten___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_unlisten___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_unlisten___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_unlisten___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_unlisten___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_dispatchEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dispatchEvent"};
static const lean_object* l_Lasm_Web_Raw_dispatchEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_dispatchEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_dispatchEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_dispatchEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.Web.Event"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_createEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "createEvent"};
static const lean_object* l_Lasm_Web_Raw_createEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_createEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_createEvent___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_createEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_createEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_createCustomEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "createCustomEvent"};
static const lean_object* l_Lasm_Web_Raw_createCustomEvent___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_createCustomEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__0_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_createCustomEvent___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_createCustomEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_eventInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eventInfo"};
static const lean_object* l_Lasm_Web_Raw_eventInfo___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_eventInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_eventInfo___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_eventInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_targetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "targetValue"};
static const lean_object* l_Lasm_Web_Raw_targetValue___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_targetValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_targetValue___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_targetValue___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_targetValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_targetChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "targetChecked"};
static const lean_object* l_Lasm_Web_Raw_targetChecked___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_targetChecked___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_listen___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_targetChecked___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_targetChecked___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyRepeat"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "altKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctrlKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metaKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shiftKey"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "button"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "buttons"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaX"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaY"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timeStamp"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSEventInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEventInfo___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSEventInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.EventInfo"};
static const lean_object* l_Lasm_Web_instFromJSEventInfo___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSEventInfo___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSEventInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEventInfo___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo;
static lean_once_cell_t l_Lasm_Web_instInhabitedEventInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Web_instInhabitedEventInfo_default___closed__0;
static lean_once_cell_t l_Lasm_Web_instInhabitedEventInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instInhabitedEventInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedEventInfo_default;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedEventInfo;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34_value;
static const lean_string_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36;
static lean_once_cell_t l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__35_value)}};
static const lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39 = (const lean_object*)&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprEventInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprEventInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprEventInfo___closed__0 = (const lean_object*)&l_Lasm_Web_instReprEventInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprEventInfo = (const lean_object*)&l_Lasm_Web_instReprEventInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " event"};
static const lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_info___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Event.info"};
static const lean_object* l_Lasm_Web_Event_info___closed__0 = (const lean_object*)&l_Lasm_Web_Event_info___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Option (Lasm.Web.EventTarget)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_target___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_Web_Event_target___closed__0 = (const lean_object*)&l_Lasm_Web_Event_target___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_currentTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "currentTarget"};
static const lean_object* l_Lasm_Web_Event_currentTarget___closed__0 = (const lean_object*)&l_Lasm_Web_Event_currentTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Option (Lasm.Web.Element)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_preventDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "preventDefault"};
static const lean_object* l_Lasm_Web_Event_preventDefault___closed__0 = (const lean_object*)&l_Lasm_Web_Event_preventDefault___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_stopPropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stopPropagation"};
static const lean_object* l_Lasm_Web_Event_stopPropagation___closed__0 = (const lean_object*)&l_Lasm_Web_Event_stopPropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_stopImmediatePropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "stopImmediatePropagation"};
static const lean_object* l_Lasm_Web_Event_stopImmediatePropagation___closed__0 = (const lean_object*)&l_Lasm_Web_Event_stopImmediatePropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_defaultPrevented___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "defaultPrevented"};
static const lean_object* l_Lasm_Web_Event_defaultPrevented___closed__0 = (const lean_object*)&l_Lasm_Web_Event_defaultPrevented___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Event_detail___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* l_Lasm_Web_Event_detail___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_Event_detail___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0(lean_object* v_x_4_){
_start:
{
uint8_t v_capture_5_; uint8_t v_passive_6_; uint8_t v_once_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_capture_5_ = lean_ctor_get_uint8(v_x_4_, 0);
v_passive_6_ = lean_ctor_get_uint8(v_x_4_, 1);
v_once_7_ = lean_ctor_get_uint8(v_x_4_, 2);
v___x_8_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0));
v___x_9_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_9_, 0, v_capture_5_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1));
v___x_12_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_12_, 0, v_passive_6_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2));
v___x_15_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_15_, 0, v_once_7_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_unsigned_to_nat(3u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = lean_array_push(v___x_18_, v___x_10_);
v___x_20_ = lean_array_push(v___x_19_, v___x_13_);
v___x_21_ = lean_array_push(v___x_20_, v___x_16_);
v___x_22_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSListenerOptions___lam__0___boxed(lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_Web_instToJSListenerOptions___lam__0(v_x_23_);
lean_dec_ref(v_x_23_);
return v_res_24_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_37_ = lean_string_utf8_byte_size(v___x_36_);
return v___x_37_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__5);
v___x_40_ = lean_nat_dec_eq(v___x_39_, v___x_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_45_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__10));
v___x_46_ = lean_unsigned_to_nat(46u);
v___x_47_ = lean_unsigned_to_nat(193u);
v___x_48_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__9));
v___x_49_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__8));
v___x_50_ = l_mkPanicMessageWithDecl(v___x_49_, v___x_48_, v___x_47_, v___x_46_, v___x_45_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(lean_object* v_context_52_, lean_object* v_d_53_){
_start:
{
lean_object* v___y_56_; lean_object* v___y_57_; 
if (lean_obj_tag(v_d_53_) == 9)
{
lean_object* v_value_61_; lean_object* v___x_62_; 
v_value_61_ = lean_ctor_get(v_d_53_, 0);
lean_inc(v_value_61_);
lean_dec_ref_known(v_d_53_, 2);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v_value_61_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v_received_65_; 
v___x_63_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_53_) == 9)
{
lean_object* v_value_79_; lean_object* v_description_80_; uint8_t v___x_81_; 
v_value_79_ = lean_ctor_get(v_d_53_, 0);
v_description_80_ = lean_ctor_get(v_d_53_, 1);
v___x_81_ = lean_string_dec_eq(v_description_80_, v___x_63_);
if (v___x_81_ == 0)
{
goto v___jp_77_;
}
else
{
uint32_t v___x_82_; uint64_t v___x_83_; lean_object* v___x_84_; uint32_t v___x_85_; lean_object* v___x_86_; 
lean_inc_n(v_value_79_, 2);
lean_dec_ref_known(v_d_53_, 2);
v___x_82_ = 206;
v___x_83_ = 0ULL;
v___x_84_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_84_, 0, v_value_79_);
lean_ctor_set(v___x_84_, 1, v___x_63_);
v___x_85_ = lasm_js_value_handle(v_value_79_);
lean_dec(v_value_79_);
v___x_86_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_82_, v___x_83_, v___x_84_, v___x_85_);
lean_dec_ref_known(v___x_84_, 2);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; uint8_t v___x_88_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = lean_string_validate_utf8(v_a_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_dec(v_a_87_);
v___x_89_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_90_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_89_);
v_received_65_ = v___x_90_;
goto v___jp_64_;
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_string_from_utf8_unchecked(v_a_87_);
v_received_65_ = v___x_91_;
goto v___jp_64_;
}
}
else
{
lean_object* v___x_92_; 
lean_dec_ref_known(v___x_86_, 1);
v___x_92_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_65_ = v___x_92_;
goto v___jp_64_;
}
}
}
else
{
goto v___jp_77_;
}
v___jp_64_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_66_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_67_ = lean_string_append(v___x_66_, v_context_52_);
v___x_68_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_69_ = lean_string_append(v___x_67_, v___x_68_);
v___x_70_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__3));
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
v___x_72_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
v___x_74_ = lean_string_append(v___x_73_, v_received_65_);
lean_dec_ref(v_received_65_);
v___x_75_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
v___x_76_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_56_ = v___x_74_;
v___y_57_ = v___x_76_;
goto v___jp_55_;
}
else
{
v___y_56_ = v___x_74_;
v___y_57_ = v___x_63_;
goto v___jp_55_;
}
}
v___jp_77_:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lasm_JS_Data_describe(v_d_53_);
v_received_65_ = v___x_78_;
goto v___jp_64_;
}
}
v___jp_55_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_string_append(v___y_56_, v___y_57_);
v___x_59_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___boxed(lean_object* v_context_93_, lean_object* v_d_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v_context_93_, v_d_94_);
lean_dec_ref(v_context_93_);
return v_res_96_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1(void){
_start:
{
uint8_t v___x_98_; uint64_t v___x_99_; 
v___x_98_ = 1;
v___x_99_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(lean_object* v_b_100_, lean_object* v_args_101_, uint8_t v_await_102_){
_start:
{
uint64_t v___y_105_; uint64_t v___y_106_; uint64_t v___x_149_; uint64_t v___y_151_; 
v___x_149_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_102_ == 0)
{
uint64_t v___x_156_; 
v___x_156_ = 0ULL;
v___y_151_ = v___x_156_;
goto v___jp_150_;
}
else
{
uint64_t v___x_157_; 
v___x_157_ = 2ULL;
v___y_151_ = v___x_157_;
goto v___jp_150_;
}
v___jp_104_:
{
uint64_t v_flags_107_; uint32_t v___x_108_; lean_object* v___x_109_; uint32_t v___x_110_; lean_object* v___x_111_; 
v_flags_107_ = lean_uint64_lor(v___y_105_, v___y_106_);
v___x_108_ = 214;
v___x_109_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_100_, v_args_101_);
v___x_110_ = 0;
v___x_111_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_108_, v_flags_107_, v___x_109_, v___x_110_);
lean_dec(v___x_109_);
if (lean_obj_tag(v___x_111_) == 0)
{
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_113_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
lean_inc(v_a_112_);
lean_dec_ref_known(v___x_111_, 1);
v___x_113_ = l_Lasm_JS_Wire_decode(v_a_112_);
lean_dec(v_a_112_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_100_);
v___x_116_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0(v___x_115_, v_a_114_);
lean_dec_ref(v___x_115_);
return v___x_116_;
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_117_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_113_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_113_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_a_125_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_111_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_111_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 1);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_148_; 
v_a_133_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_148_ == 0)
{
v___x_135_ = v___x_111_;
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_111_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_138_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_100_);
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
lean_dec_ref(v___x_138_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
v___x_142_ = lean_io_error_to_string(v_a_133_);
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
lean_dec_ref(v___x_142_);
v___x_144_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_144_);
v___x_146_ = v___x_135_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
v___jp_150_:
{
uint8_t v_construct_152_; uint64_t v___x_153_; 
v_construct_152_ = lean_ctor_get_uint8(v_b_100_, sizeof(void*)*4);
v___x_153_ = lean_uint64_lor(v___x_149_, v___y_151_);
if (v_construct_152_ == 0)
{
uint64_t v___x_154_; 
v___x_154_ = 0ULL;
v___y_105_ = v___x_153_;
v___y_106_ = v___x_154_;
goto v___jp_104_;
}
else
{
uint64_t v___x_155_; 
v___x_155_ = 4ULL;
v___y_105_ = v___x_153_;
v___y_106_ = v___x_155_;
goto v___jp_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___boxed(lean_object* v_b_158_, lean_object* v_args_159_, lean_object* v_await_160_, lean_object* v_a_161_){
_start:
{
uint8_t v_await_boxed_162_; lean_object* v_res_163_; 
v_await_boxed_162_ = lean_unbox(v_await_160_);
v_res_163_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v_b_158_, v_args_159_, v_await_boxed_162_);
lean_dec_ref(v_b_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen(lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_178_; uint8_t v_capture_179_; uint8_t v_passive_180_; uint8_t v_once_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; 
v___x_178_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__2));
v_capture_179_ = lean_ctor_get_uint8(v_a_176_, 0);
v_passive_180_ = lean_ctor_get_uint8(v_a_176_, 1);
v_once_181_ = lean_ctor_get_uint8(v_a_176_, 2);
v___x_182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_183_, 0, v_a_173_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_185_ = lean_array_push(v___x_184_, v___x_183_);
v___x_186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_186_, 0, v_a_174_);
v___x_187_ = lean_array_push(v___x_185_, v___x_186_);
v___x_188_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_188_, 0, v_a_175_);
lean_ctor_set(v___x_188_, 1, v___x_182_);
v___x_189_ = lean_array_push(v___x_187_, v___x_188_);
v___x_190_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__0));
v___x_191_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_191_, 0, v_capture_179_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__1));
v___x_194_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_194_, 0, v_passive_180_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = ((lean_object*)(l_Lasm_Web_instToJSListenerOptions___lam__0___closed__2));
v___x_197_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_197_, 0, v_once_181_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_unsigned_to_nat(3u);
v___x_200_ = lean_mk_empty_array_with_capacity(v___x_199_);
v___x_201_ = lean_array_push(v___x_200_, v___x_192_);
v___x_202_ = lean_array_push(v___x_201_, v___x_195_);
v___x_203_ = lean_array_push(v___x_202_, v___x_198_);
v___x_204_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___x_205_ = lean_array_push(v___x_189_, v___x_204_);
v___x_206_ = 1;
v___x_207_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0(v___x_178_, v___x_205_, v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_listen___boxed(lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lasm_Web_Raw_listen(v_a_208_, v_a_209_, v_a_210_, v_a_211_);
lean_dec_ref(v_a_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_box(0);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg___boxed(lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg();
return v_res_218_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0(void){
_start:
{
uint8_t v___x_219_; uint64_t v___x_220_; 
v___x_219_ = 0;
v___x_220_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(lean_object* v_b_221_, lean_object* v_args_222_, uint8_t v_await_223_){
_start:
{
uint64_t v___y_226_; uint64_t v___y_227_; uint64_t v___x_268_; uint64_t v___y_270_; 
v___x_268_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_223_ == 0)
{
uint64_t v___x_275_; 
v___x_275_ = 0ULL;
v___y_270_ = v___x_275_;
goto v___jp_269_;
}
else
{
uint64_t v___x_276_; 
v___x_276_ = 2ULL;
v___y_270_ = v___x_276_;
goto v___jp_269_;
}
v___jp_225_:
{
uint64_t v_flags_228_; uint32_t v___x_229_; lean_object* v___x_230_; uint32_t v___x_231_; lean_object* v___x_232_; 
v_flags_228_ = lean_uint64_lor(v___y_226_, v___y_227_);
v___x_229_ = 214;
v___x_230_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_221_, v_args_222_);
v___x_231_ = 0;
v___x_232_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_229_, v_flags_228_, v___x_230_, v___x_231_);
lean_dec(v___x_230_);
if (lean_obj_tag(v___x_232_) == 0)
{
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
v___x_234_ = l_Lasm_JS_Wire_decode(v_a_233_);
lean_dec(v_a_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; 
lean_dec_ref_known(v___x_234_, 1);
v___x_235_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg();
return v___x_235_;
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_a_236_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_234_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_234_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
v_a_244_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_232_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_232_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
lean_ctor_set_tag(v___x_246_, 1);
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_267_; 
v_a_252_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_267_ == 0)
{
v___x_254_ = v___x_232_;
v_isShared_255_ = v_isSharedCheck_267_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_232_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_267_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_256_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_257_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_221_);
v___x_258_ = lean_string_append(v___x_256_, v___x_257_);
lean_dec_ref(v___x_257_);
v___x_259_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_260_ = lean_string_append(v___x_258_, v___x_259_);
v___x_261_ = lean_io_error_to_string(v_a_252_);
v___x_262_ = lean_string_append(v___x_260_, v___x_261_);
lean_dec_ref(v___x_261_);
v___x_263_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_263_);
v___x_265_ = v___x_254_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
v___jp_269_:
{
uint8_t v_construct_271_; uint64_t v___x_272_; 
v_construct_271_ = lean_ctor_get_uint8(v_b_221_, sizeof(void*)*4);
v___x_272_ = lean_uint64_lor(v___x_268_, v___y_270_);
if (v_construct_271_ == 0)
{
uint64_t v___x_273_; 
v___x_273_ = 0ULL;
v___y_226_ = v___x_272_;
v___y_227_ = v___x_273_;
goto v___jp_225_;
}
else
{
uint64_t v___x_274_; 
v___x_274_ = 4ULL;
v___y_226_ = v___x_272_;
v___y_227_ = v___x_274_;
goto v___jp_225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___boxed(lean_object* v_b_277_, lean_object* v_args_278_, lean_object* v_await_279_, lean_object* v_a_280_){
_start:
{
uint8_t v_await_boxed_281_; lean_object* v_res_282_; 
v_await_boxed_281_ = lean_unbox(v_await_279_);
v_res_282_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v_b_277_, v_args_278_, v_await_boxed_281_);
lean_dec_ref(v_b_277_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten(lean_object* v_a_289_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; lean_object* v___x_297_; 
v___x_291_ = ((lean_object*)(l_Lasm_Web_Raw_unlisten___closed__1));
v___x_292_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_294_, 0, v_a_289_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_array_push(v___x_292_, v___x_294_);
v___x_296_ = 1;
v___x_297_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0(v___x_291_, v___x_295_, v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_unlisten___boxed(lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lasm_Web_Raw_unlisten(v_a_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0(lean_object* v_context_301_, lean_object* v_d_302_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg();
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___boxed(lean_object* v_context_305_, lean_object* v_d_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0(v_context_305_, v_d_306_);
lean_dec(v_d_306_);
lean_dec_ref(v_context_305_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(lean_object* v_context_310_, lean_object* v_d_311_){
_start:
{
lean_object* v___y_314_; lean_object* v___y_315_; 
if (lean_obj_tag(v_d_311_) == 2)
{
uint8_t v_b_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_b_319_ = lean_ctor_get_uint8(v_d_311_, 0);
lean_dec_ref_known(v_d_311_, 0);
v___x_320_ = lean_box(v_b_319_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
else
{
lean_object* v___x_322_; lean_object* v_received_324_; 
v___x_322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_311_) == 9)
{
lean_object* v_value_338_; lean_object* v_description_339_; uint8_t v___x_340_; 
v_value_338_ = lean_ctor_get(v_d_311_, 0);
v_description_339_ = lean_ctor_get(v_d_311_, 1);
v___x_340_ = lean_string_dec_eq(v_description_339_, v___x_322_);
if (v___x_340_ == 0)
{
goto v___jp_336_;
}
else
{
uint32_t v___x_341_; uint64_t v___x_342_; lean_object* v___x_343_; uint32_t v___x_344_; lean_object* v___x_345_; 
lean_inc_n(v_value_338_, 2);
lean_dec_ref_known(v_d_311_, 2);
v___x_341_ = 206;
v___x_342_ = 0ULL;
v___x_343_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_343_, 0, v_value_338_);
lean_ctor_set(v___x_343_, 1, v___x_322_);
v___x_344_ = lasm_js_value_handle(v_value_338_);
lean_dec(v_value_338_);
v___x_345_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_341_, v___x_342_, v___x_343_, v___x_344_);
lean_dec_ref_known(v___x_343_, 2);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; uint8_t v___x_347_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v___x_347_ = lean_string_validate_utf8(v_a_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; lean_object* v___x_349_; 
lean_dec(v_a_346_);
v___x_348_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_349_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_348_);
v_received_324_ = v___x_349_;
goto v___jp_323_;
}
else
{
lean_object* v___x_350_; 
v___x_350_ = lean_string_from_utf8_unchecked(v_a_346_);
v_received_324_ = v___x_350_;
goto v___jp_323_;
}
}
else
{
lean_object* v___x_351_; 
lean_dec_ref_known(v___x_345_, 1);
v___x_351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_324_ = v___x_351_;
goto v___jp_323_;
}
}
}
else
{
goto v___jp_336_;
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_326_ = lean_string_append(v___x_325_, v_context_310_);
v___x_327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_328_ = lean_string_append(v___x_326_, v___x_327_);
v___x_329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_330_ = lean_string_append(v___x_328_, v___x_329_);
v___x_331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_332_ = lean_string_append(v___x_330_, v___x_331_);
v___x_333_ = lean_string_append(v___x_332_, v_received_324_);
lean_dec_ref(v_received_324_);
v___x_334_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
v___x_335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_314_ = v___x_333_;
v___y_315_ = v___x_335_;
goto v___jp_313_;
}
else
{
v___y_314_ = v___x_333_;
v___y_315_ = v___x_322_;
goto v___jp_313_;
}
}
v___jp_336_:
{
lean_object* v___x_337_; 
v___x_337_ = l_Lasm_JS_Data_describe(v_d_311_);
v_received_324_ = v___x_337_;
goto v___jp_323_;
}
}
v___jp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = lean_string_append(v___y_314_, v___y_315_);
v___x_317_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___boxed(lean_object* v_context_352_, lean_object* v_d_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_352_, v_d_353_);
lean_dec_ref(v_context_352_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(lean_object* v_b_356_, lean_object* v_args_357_, uint8_t v_await_358_){
_start:
{
uint64_t v___y_361_; uint64_t v___y_362_; uint64_t v___x_405_; uint64_t v___y_407_; 
v___x_405_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_358_ == 0)
{
uint64_t v___x_412_; 
v___x_412_ = 0ULL;
v___y_407_ = v___x_412_;
goto v___jp_406_;
}
else
{
uint64_t v___x_413_; 
v___x_413_ = 2ULL;
v___y_407_ = v___x_413_;
goto v___jp_406_;
}
v___jp_360_:
{
uint64_t v_flags_363_; uint32_t v___x_364_; lean_object* v___x_365_; uint32_t v___x_366_; lean_object* v___x_367_; 
v_flags_363_ = lean_uint64_lor(v___y_361_, v___y_362_);
v___x_364_ = 214;
v___x_365_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_356_, v_args_357_);
v___x_366_ = 0;
v___x_367_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_364_, v_flags_363_, v___x_365_, v___x_366_);
lean_dec(v___x_365_);
if (lean_obj_tag(v___x_367_) == 0)
{
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_369_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_367_, 1);
v___x_369_ = l_Lasm_JS_Wire_decode(v_a_368_);
lean_dec(v_a_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 1);
v___x_371_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_356_);
v___x_372_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v___x_371_, v_a_370_);
lean_dec_ref(v___x_371_);
return v___x_372_;
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_369_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_a_381_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_367_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_367_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set_tag(v___x_383_, 1);
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_404_; 
v_a_389_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_404_ == 0)
{
v___x_391_ = v___x_367_;
v_isShared_392_ = v_isSharedCheck_404_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_367_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_404_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_394_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_356_);
v___x_395_ = lean_string_append(v___x_393_, v___x_394_);
lean_dec_ref(v___x_394_);
v___x_396_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
v___x_398_ = lean_io_error_to_string(v_a_389_);
v___x_399_ = lean_string_append(v___x_397_, v___x_398_);
lean_dec_ref(v___x_398_);
v___x_400_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 0, v___x_400_);
v___x_402_ = v___x_391_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
v___jp_406_:
{
uint8_t v_construct_408_; uint64_t v___x_409_; 
v_construct_408_ = lean_ctor_get_uint8(v_b_356_, sizeof(void*)*4);
v___x_409_ = lean_uint64_lor(v___x_405_, v___y_407_);
if (v_construct_408_ == 0)
{
uint64_t v___x_410_; 
v___x_410_ = 0ULL;
v___y_361_ = v___x_409_;
v___y_362_ = v___x_410_;
goto v___jp_360_;
}
else
{
uint64_t v___x_411_; 
v___x_411_ = 4ULL;
v___y_361_ = v___x_409_;
v___y_362_ = v___x_411_;
goto v___jp_360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0___boxed(lean_object* v_b_414_, lean_object* v_args_415_, lean_object* v_await_416_, lean_object* v_a_417_){
_start:
{
uint8_t v_await_boxed_418_; lean_object* v_res_419_; 
v_await_boxed_418_ = lean_unbox(v_await_416_);
v_res_419_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v_b_414_, v_args_415_, v_await_boxed_418_);
lean_dec_ref(v_b_414_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent(lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; 
v___x_429_ = ((lean_object*)(l_Lasm_Web_Raw_dispatchEvent___closed__1));
v___x_430_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_432_, 0, v_a_426_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_array_push(v___x_430_, v___x_432_);
v___x_434_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_434_, 0, v_a_427_);
lean_ctor_set(v___x_434_, 1, v___x_431_);
v___x_435_ = lean_array_push(v___x_433_, v___x_434_);
v___x_436_ = 1;
v___x_437_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_429_, v___x_435_, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_dispatchEvent___boxed(lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lasm_Web_Raw_dispatchEvent(v_a_438_, v_a_439_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(lean_object* v_context_443_, lean_object* v_d_444_){
_start:
{
lean_object* v___y_447_; lean_object* v___y_448_; 
if (lean_obj_tag(v_d_444_) == 9)
{
lean_object* v_value_452_; lean_object* v___x_453_; 
v_value_452_ = lean_ctor_get(v_d_444_, 0);
lean_inc(v_value_452_);
lean_dec_ref_known(v_d_444_, 2);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v_value_452_);
return v___x_453_;
}
else
{
lean_object* v___x_454_; lean_object* v_received_456_; 
v___x_454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_444_) == 9)
{
lean_object* v_value_470_; lean_object* v_description_471_; uint8_t v___x_472_; 
v_value_470_ = lean_ctor_get(v_d_444_, 0);
v_description_471_ = lean_ctor_get(v_d_444_, 1);
v___x_472_ = lean_string_dec_eq(v_description_471_, v___x_454_);
if (v___x_472_ == 0)
{
goto v___jp_468_;
}
else
{
uint32_t v___x_473_; uint64_t v___x_474_; lean_object* v___x_475_; uint32_t v___x_476_; lean_object* v___x_477_; 
lean_inc_n(v_value_470_, 2);
lean_dec_ref_known(v_d_444_, 2);
v___x_473_ = 206;
v___x_474_ = 0ULL;
v___x_475_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_475_, 0, v_value_470_);
lean_ctor_set(v___x_475_, 1, v___x_454_);
v___x_476_ = lasm_js_value_handle(v_value_470_);
lean_dec(v_value_470_);
v___x_477_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_473_, v___x_474_, v___x_475_, v___x_476_);
lean_dec_ref_known(v___x_475_, 2);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; uint8_t v___x_479_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v___x_479_ = lean_string_validate_utf8(v_a_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; 
lean_dec(v_a_478_);
v___x_480_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_481_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_480_);
v_received_456_ = v___x_481_;
goto v___jp_455_;
}
else
{
lean_object* v___x_482_; 
v___x_482_ = lean_string_from_utf8_unchecked(v_a_478_);
v_received_456_ = v___x_482_;
goto v___jp_455_;
}
}
else
{
lean_object* v___x_483_; 
lean_dec_ref_known(v___x_477_, 1);
v___x_483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_456_ = v___x_483_;
goto v___jp_455_;
}
}
}
else
{
goto v___jp_468_;
}
v___jp_455_:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_458_ = lean_string_append(v___x_457_, v_context_443_);
v___x_459_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_460_ = lean_string_append(v___x_458_, v___x_459_);
v___x_461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___closed__0));
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
v___x_463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
v___x_465_ = lean_string_append(v___x_464_, v_received_456_);
lean_dec_ref(v_received_456_);
v___x_466_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; 
v___x_467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_447_ = v___x_465_;
v___y_448_ = v___x_467_;
goto v___jp_446_;
}
else
{
v___y_447_ = v___x_465_;
v___y_448_ = v___x_454_;
goto v___jp_446_;
}
}
v___jp_468_:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lasm_JS_Data_describe(v_d_444_);
v_received_456_ = v___x_469_;
goto v___jp_455_;
}
}
v___jp_446_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_string_append(v___y_447_, v___y_448_);
v___x_450_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0___boxed(lean_object* v_context_484_, lean_object* v_d_485_, lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_484_, v_d_485_);
lean_dec_ref(v_context_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(lean_object* v_b_488_, lean_object* v_args_489_, uint8_t v_await_490_){
_start:
{
uint64_t v___y_493_; uint64_t v___y_494_; uint64_t v___x_537_; uint64_t v___y_539_; 
v___x_537_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
if (v_await_490_ == 0)
{
uint64_t v___x_544_; 
v___x_544_ = 0ULL;
v___y_539_ = v___x_544_;
goto v___jp_538_;
}
else
{
uint64_t v___x_545_; 
v___x_545_ = 2ULL;
v___y_539_ = v___x_545_;
goto v___jp_538_;
}
v___jp_492_:
{
uint64_t v_flags_495_; uint32_t v___x_496_; lean_object* v___x_497_; uint32_t v___x_498_; lean_object* v___x_499_; 
v_flags_495_ = lean_uint64_lor(v___y_493_, v___y_494_);
v___x_496_ = 214;
v___x_497_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_488_, v_args_489_);
v___x_498_ = 0;
v___x_499_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_496_, v_flags_495_, v___x_497_, v___x_498_);
lean_dec(v___x_497_);
if (lean_obj_tag(v___x_499_) == 0)
{
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_501_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
v___x_501_ = l_Lasm_JS_Wire_decode(v_a_500_);
lean_dec(v_a_500_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v___x_503_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_488_);
v___x_504_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v___x_503_, v_a_502_);
lean_dec_ref(v___x_503_);
return v___x_504_;
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
v_a_505_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_501_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
v_a_513_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v___x_499_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_499_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 1);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_536_; 
v_a_521_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_536_ == 0)
{
v___x_523_ = v___x_499_;
v_isShared_524_ = v_isSharedCheck_536_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_499_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_536_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_525_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_526_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_488_);
v___x_527_ = lean_string_append(v___x_525_, v___x_526_);
lean_dec_ref(v___x_526_);
v___x_528_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
v___x_530_ = lean_io_error_to_string(v_a_521_);
v___x_531_ = lean_string_append(v___x_529_, v___x_530_);
lean_dec_ref(v___x_530_);
v___x_532_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_532_);
v___x_534_ = v___x_523_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
v___jp_538_:
{
uint8_t v_construct_540_; uint64_t v___x_541_; 
v_construct_540_ = lean_ctor_get_uint8(v_b_488_, sizeof(void*)*4);
v___x_541_ = lean_uint64_lor(v___x_537_, v___y_539_);
if (v_construct_540_ == 0)
{
uint64_t v___x_542_; 
v___x_542_ = 0ULL;
v___y_493_ = v___x_541_;
v___y_494_ = v___x_542_;
goto v___jp_492_;
}
else
{
uint64_t v___x_543_; 
v___x_543_ = 4ULL;
v___y_493_ = v___x_541_;
v___y_494_ = v___x_543_;
goto v___jp_492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0___boxed(lean_object* v_b_546_, lean_object* v_args_547_, lean_object* v_await_548_, lean_object* v_a_549_){
_start:
{
uint8_t v_await_boxed_550_; lean_object* v_res_551_; 
v_await_boxed_550_ = lean_unbox(v_await_548_);
v_res_551_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v_b_546_, v_args_547_, v_await_boxed_550_);
lean_dec_ref(v_b_546_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent(lean_object* v_a_558_, uint8_t v_a_559_, uint8_t v_a_560_){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; 
v___x_562_ = ((lean_object*)(l_Lasm_Web_Raw_createEvent___closed__1));
v___x_563_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_564_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_564_, 0, v_a_558_);
v___x_565_ = lean_array_push(v___x_563_, v___x_564_);
v___x_566_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_566_, 0, v_a_559_);
v___x_567_ = lean_array_push(v___x_565_, v___x_566_);
v___x_568_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_568_, 0, v_a_560_);
v___x_569_ = lean_array_push(v___x_567_, v___x_568_);
v___x_570_ = 1;
v___x_571_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_562_, v___x_569_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createEvent___boxed(lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
uint8_t v_a_784__boxed_576_; uint8_t v_a_785__boxed_577_; lean_object* v_res_578_; 
v_a_784__boxed_576_ = lean_unbox(v_a_573_);
v_a_785__boxed_577_ = lean_unbox(v_a_574_);
v_res_578_ = l_Lasm_Web_Raw_createEvent(v_a_572_, v_a_784__boxed_576_, v_a_785__boxed_577_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent(lean_object* v_a_585_, lean_object* v_a_586_, uint8_t v_a_587_, uint8_t v_a_588_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; lean_object* v___x_600_; 
v___x_590_ = ((lean_object*)(l_Lasm_Web_Raw_createCustomEvent___closed__1));
v___x_591_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_592_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_592_, 0, v_a_585_);
v___x_593_ = lean_array_push(v___x_591_, v___x_592_);
v___x_594_ = lean_array_push(v___x_593_, v_a_586_);
v___x_595_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_595_, 0, v_a_587_);
v___x_596_ = lean_array_push(v___x_594_, v___x_595_);
v___x_597_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_597_, 0, v_a_588_);
v___x_598_ = lean_array_push(v___x_596_, v___x_597_);
v___x_599_ = 1;
v___x_600_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0(v___x_590_, v___x_598_, v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_createCustomEvent___boxed(lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
uint8_t v_a_233__boxed_606_; uint8_t v_a_234__boxed_607_; lean_object* v_res_608_; 
v_a_233__boxed_606_ = lean_unbox(v_a_603_);
v_a_234__boxed_607_ = lean_unbox(v_a_604_);
v_res_608_ = l_Lasm_Web_Raw_createCustomEvent(v_a_601_, v_a_602_, v_a_233__boxed_606_, v_a_234__boxed_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(lean_object* v_b_609_, lean_object* v_args_610_, uint8_t v_await_611_){
_start:
{
uint64_t v___y_614_; uint64_t v___y_615_; uint64_t v___x_655_; uint64_t v___y_657_; 
v___x_655_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_611_ == 0)
{
uint64_t v___x_662_; 
v___x_662_ = 0ULL;
v___y_657_ = v___x_662_;
goto v___jp_656_;
}
else
{
uint64_t v___x_663_; 
v___x_663_ = 2ULL;
v___y_657_ = v___x_663_;
goto v___jp_656_;
}
v___jp_613_:
{
uint64_t v_flags_616_; uint32_t v___x_617_; lean_object* v___x_618_; uint32_t v___x_619_; lean_object* v___x_620_; 
v_flags_616_ = lean_uint64_lor(v___y_614_, v___y_615_);
v___x_617_ = 214;
v___x_618_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_609_, v_args_610_);
v___x_619_ = 0;
v___x_620_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_617_, v_flags_616_, v___x_618_, v___x_619_);
lean_dec(v___x_618_);
if (lean_obj_tag(v___x_620_) == 0)
{
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = l_Lasm_JS_Wire_decode(v_a_621_);
lean_dec(v_a_621_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
else
{
return v___x_622_;
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_a_631_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_620_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_620_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 1);
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_654_; 
v_a_639_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_654_ == 0)
{
v___x_641_ = v___x_620_;
v_isShared_642_ = v_isSharedCheck_654_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_620_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_654_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_644_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_609_);
v___x_645_ = lean_string_append(v___x_643_, v___x_644_);
lean_dec_ref(v___x_644_);
v___x_646_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_647_ = lean_string_append(v___x_645_, v___x_646_);
v___x_648_ = lean_io_error_to_string(v_a_639_);
v___x_649_ = lean_string_append(v___x_647_, v___x_648_);
lean_dec_ref(v___x_648_);
v___x_650_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_650_);
v___x_652_ = v___x_641_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
v___jp_656_:
{
uint8_t v_construct_658_; uint64_t v___x_659_; 
v_construct_658_ = lean_ctor_get_uint8(v_b_609_, sizeof(void*)*4);
v___x_659_ = lean_uint64_lor(v___x_655_, v___y_657_);
if (v_construct_658_ == 0)
{
uint64_t v___x_660_; 
v___x_660_ = 0ULL;
v___y_614_ = v___x_659_;
v___y_615_ = v___x_660_;
goto v___jp_613_;
}
else
{
uint64_t v___x_661_; 
v___x_661_ = 4ULL;
v___y_614_ = v___x_659_;
v___y_615_ = v___x_661_;
goto v___jp_613_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0___boxed(lean_object* v_b_664_, lean_object* v_args_665_, lean_object* v_await_666_, lean_object* v_a_667_){
_start:
{
uint8_t v_await_boxed_668_; lean_object* v_res_669_; 
v_await_boxed_668_ = lean_unbox(v_await_666_);
v_res_669_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v_b_664_, v_args_665_, v_await_boxed_668_);
lean_dec_ref(v_b_664_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo(lean_object* v_a_676_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; lean_object* v___x_684_; 
v___x_678_ = ((lean_object*)(l_Lasm_Web_Raw_eventInfo___closed__1));
v___x_679_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_680_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_681_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_681_, 0, v_a_676_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = lean_array_push(v___x_679_, v___x_681_);
v___x_683_ = 1;
v___x_684_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0(v___x_678_, v___x_682_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_eventInfo___boxed(lean_object* v_a_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lasm_Web_Raw_eventInfo(v_a_685_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(lean_object* v_d_688_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v_d_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg___boxed(lean_object* v_d_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___redArg(v_d_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(lean_object* v_context_694_, lean_object* v_d_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_d_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0___boxed(lean_object* v_context_698_, lean_object* v_d_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_eventInfo_spec__0_spec__0(v_context_698_, v_d_699_);
lean_dec_ref(v_context_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(lean_object* v_context_703_, lean_object* v_d_704_){
_start:
{
lean_object* v___y_707_; lean_object* v___y_708_; 
if (lean_obj_tag(v_d_704_) == 4)
{
lean_object* v_s_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_s_712_ = lean_ctor_get(v_d_704_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_d_704_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v_d_704_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_s_712_);
lean_dec(v_d_704_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_s_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
else
{
lean_object* v___x_720_; lean_object* v_received_722_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_704_) == 9)
{
lean_object* v_value_736_; lean_object* v_description_737_; uint8_t v___x_738_; 
v_value_736_ = lean_ctor_get(v_d_704_, 0);
v_description_737_ = lean_ctor_get(v_d_704_, 1);
v___x_738_ = lean_string_dec_eq(v_description_737_, v___x_720_);
if (v___x_738_ == 0)
{
goto v___jp_734_;
}
else
{
uint32_t v___x_739_; uint64_t v___x_740_; lean_object* v___x_741_; uint32_t v___x_742_; lean_object* v___x_743_; 
lean_inc_n(v_value_736_, 2);
lean_dec_ref_known(v_d_704_, 2);
v___x_739_ = 206;
v___x_740_ = 0ULL;
v___x_741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_741_, 0, v_value_736_);
lean_ctor_set(v___x_741_, 1, v___x_720_);
v___x_742_ = lasm_js_value_handle(v_value_736_);
lean_dec(v_value_736_);
v___x_743_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_739_, v___x_740_, v___x_741_, v___x_742_);
lean_dec_ref_known(v___x_741_, 2);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; uint8_t v___x_745_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = lean_string_validate_utf8(v_a_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec(v_a_744_);
v___x_746_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_747_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_746_);
v_received_722_ = v___x_747_;
goto v___jp_721_;
}
else
{
lean_object* v___x_748_; 
v___x_748_ = lean_string_from_utf8_unchecked(v_a_744_);
v_received_722_ = v___x_748_;
goto v___jp_721_;
}
}
else
{
lean_object* v___x_749_; 
lean_dec_ref_known(v___x_743_, 1);
v___x_749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_722_ = v___x_749_;
goto v___jp_721_;
}
}
}
else
{
goto v___jp_734_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_724_ = lean_string_append(v___x_723_, v_context_703_);
v___x_725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_726_ = lean_string_append(v___x_724_, v___x_725_);
v___x_727_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_728_ = lean_string_append(v___x_726_, v___x_727_);
v___x_729_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_730_ = lean_string_append(v___x_728_, v___x_729_);
v___x_731_ = lean_string_append(v___x_730_, v_received_722_);
lean_dec_ref(v_received_722_);
v___x_732_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_732_ == 0)
{
lean_object* v___x_733_; 
v___x_733_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_707_ = v___x_731_;
v___y_708_ = v___x_733_;
goto v___jp_706_;
}
else
{
v___y_707_ = v___x_731_;
v___y_708_ = v___x_720_;
goto v___jp_706_;
}
}
v___jp_734_:
{
lean_object* v___x_735_; 
v___x_735_ = l_Lasm_JS_Data_describe(v_d_704_);
v_received_722_ = v___x_735_;
goto v___jp_721_;
}
}
v___jp_706_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_709_ = lean_string_append(v___y_707_, v___y_708_);
v___x_710_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
v___x_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
return v___x_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___boxed(lean_object* v_context_750_, lean_object* v_d_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_750_, v_d_751_);
lean_dec_ref(v_context_750_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(lean_object* v_b_754_, lean_object* v_args_755_, uint8_t v_await_756_){
_start:
{
uint64_t v___y_759_; uint64_t v___y_760_; uint64_t v___x_803_; uint64_t v___y_805_; 
v___x_803_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_756_ == 0)
{
uint64_t v___x_810_; 
v___x_810_ = 0ULL;
v___y_805_ = v___x_810_;
goto v___jp_804_;
}
else
{
uint64_t v___x_811_; 
v___x_811_ = 2ULL;
v___y_805_ = v___x_811_;
goto v___jp_804_;
}
v___jp_758_:
{
uint64_t v_flags_761_; uint32_t v___x_762_; lean_object* v___x_763_; uint32_t v___x_764_; lean_object* v___x_765_; 
v_flags_761_ = lean_uint64_lor(v___y_759_, v___y_760_);
v___x_762_ = 214;
v___x_763_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_754_, v_args_755_);
v___x_764_ = 0;
v___x_765_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_762_, v_flags_761_, v___x_763_, v___x_764_);
lean_dec(v___x_763_);
if (lean_obj_tag(v___x_765_) == 0)
{
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_767_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = l_Lasm_JS_Wire_decode(v_a_766_);
lean_dec(v_a_766_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v___x_769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_754_);
v___x_770_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v___x_769_, v_a_768_);
lean_dec_ref(v___x_769_);
return v___x_770_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_a_771_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_767_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_767_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_765_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_765_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 1);
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_802_; 
v_a_787_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_802_ == 0)
{
v___x_789_ = v___x_765_;
v_isShared_790_ = v_isSharedCheck_802_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_765_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_802_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_791_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_792_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_754_);
v___x_793_ = lean_string_append(v___x_791_, v___x_792_);
lean_dec_ref(v___x_792_);
v___x_794_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__0));
v___x_795_ = lean_string_append(v___x_793_, v___x_794_);
v___x_796_ = lean_io_error_to_string(v_a_787_);
v___x_797_ = lean_string_append(v___x_795_, v___x_796_);
lean_dec_ref(v___x_796_);
v___x_798_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_798_);
v___x_800_ = v___x_789_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
v___jp_804_:
{
uint8_t v_construct_806_; uint64_t v___x_807_; 
v_construct_806_ = lean_ctor_get_uint8(v_b_754_, sizeof(void*)*4);
v___x_807_ = lean_uint64_lor(v___x_803_, v___y_805_);
if (v_construct_806_ == 0)
{
uint64_t v___x_808_; 
v___x_808_ = 0ULL;
v___y_759_ = v___x_807_;
v___y_760_ = v___x_808_;
goto v___jp_758_;
}
else
{
uint64_t v___x_809_; 
v___x_809_ = 4ULL;
v___y_759_ = v___x_807_;
v___y_760_ = v___x_809_;
goto v___jp_758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0___boxed(lean_object* v_b_812_, lean_object* v_args_813_, lean_object* v_await_814_, lean_object* v_a_815_){
_start:
{
uint8_t v_await_boxed_816_; lean_object* v_res_817_; 
v_await_boxed_816_ = lean_unbox(v_await_814_);
v_res_817_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v_b_812_, v_args_813_, v_await_boxed_816_);
lean_dec_ref(v_b_812_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue(lean_object* v_a_824_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; 
v___x_826_ = ((lean_object*)(l_Lasm_Web_Raw_targetValue___closed__1));
v___x_827_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_828_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_829_, 0, v_a_824_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = lean_array_push(v___x_827_, v___x_829_);
v___x_831_ = 1;
v___x_832_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0(v___x_826_, v___x_830_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetValue___boxed(lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lasm_Web_Raw_targetValue(v_a_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked(lean_object* v_a_842_){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v___x_850_; 
v___x_844_ = ((lean_object*)(l_Lasm_Web_Raw_targetChecked___closed__1));
v___x_845_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_847_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_847_, 0, v_a_842_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = lean_array_push(v___x_845_, v___x_847_);
v___x_849_ = 1;
v___x_850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0(v___x_844_, v___x_848_, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_targetChecked___boxed(lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_Web_Raw_targetChecked(v_a_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0(lean_object* v___x_875_, lean_object* v___x_876_, lean_object* v___x_877_, lean_object* v_d_878_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc_ref(v___x_875_);
v___x_880_ = l_Lasm_JS_readField___redArg(v___x_875_, v_d_878_, v___x_879_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_a_889_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_880_, 1);
v___x_890_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc_ref(v___x_875_);
v___x_891_ = l_Lasm_JS_readField___redArg(v___x_875_, v_d_878_, v___x_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_900_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_891_, 1);
v___x_901_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc_ref(v___x_875_);
v___x_902_ = l_Lasm_JS_readField___redArg(v___x_875_, v_d_878_, v___x_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_903_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_902_, 1);
v___x_912_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc_ref(v___x_876_);
v___x_913_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_922_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_913_, 1);
v___x_923_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc_ref(v___x_876_);
v___x_924_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_923_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_925_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_924_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_924_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v_a_933_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_924_, 1);
v___x_934_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc_ref(v___x_876_);
v___x_935_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
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
lean_object* v_a_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v_a_944_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_935_, 1);
v___x_945_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc_ref(v___x_876_);
v___x_946_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_945_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v_a_955_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_946_, 1);
v___x_956_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc_ref(v___x_876_);
v___x_957_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_a_966_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_966_);
lean_dec_ref_known(v___x_957_, 1);
v___x_967_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc_ref(v___x_877_);
v___x_968_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_a_977_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_968_, 1);
v___x_978_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc_ref(v___x_877_);
v___x_979_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_a_988_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_979_, 1);
v___x_989_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc_ref(v___x_877_);
v___x_990_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_989_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v_a_999_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_990_, 1);
v___x_1000_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc_ref(v___x_877_);
v___x_1001_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1000_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_a_1010_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1001_, 1);
v___x_1011_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc_ref(v___x_877_);
v___x_1012_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_a_1021_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1022_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc_ref(v___x_877_);
v___x_1023_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1022_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1033_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc_ref(v___x_877_);
v___x_1034_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
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
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1043_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1044_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc_ref(v___x_877_);
v___x_1045_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1044_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_a_1054_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1045_, 1);
v___x_1055_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc_ref(v___x_877_);
v___x_1056_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v_a_1054_);
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_a_1065_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1066_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc_ref(v___x_877_);
v___x_1067_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v_a_1065_);
lean_dec(v_a_1054_);
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
lean_dec_ref(v___x_875_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1077_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
v___x_1078_ = l_Lasm_JS_readField___redArg(v___x_875_, v_d_878_, v___x_1077_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_a_1076_);
lean_dec(v_a_1065_);
lean_dec(v_a_1054_);
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v___x_876_);
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_a_1087_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1078_, 1);
v___x_1088_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
v___x_1089_ = l_Lasm_JS_readField___redArg(v___x_876_, v_d_878_, v___x_1088_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec(v_a_1087_);
lean_dec(v_a_1076_);
lean_dec(v_a_1065_);
lean_dec(v_a_1054_);
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_877_);
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_a_1098_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1099_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
v___x_1100_ = l_Lasm_JS_readField___redArg(v___x_877_, v_d_878_, v___x_1099_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec(v_a_1098_);
lean_dec(v_a_1087_);
lean_dec(v_a_1076_);
lean_dec(v_a_1065_);
lean_dec(v_a_1054_);
lean_dec(v_a_1043_);
lean_dec(v_a_1032_);
lean_dec(v_a_1021_);
lean_dec(v_a_1010_);
lean_dec(v_a_999_);
lean_dec(v_a_988_);
lean_dec(v_a_977_);
lean_dec(v_a_966_);
lean_dec(v_a_955_);
lean_dec(v_a_944_);
lean_dec(v_a_933_);
lean_dec(v_a_922_);
lean_dec(v_a_911_);
lean_dec(v_a_900_);
lean_dec(v_a_889_);
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1100_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1100_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1134_; 
v_a_1109_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1111_ = v___x_1100_;
v_isShared_1112_ = v_isSharedCheck_1134_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1100_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1134_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; uint8_t v___x_1114_; uint8_t v___x_1115_; uint8_t v___x_1116_; uint8_t v___x_1117_; uint8_t v___x_1118_; double v___x_1119_; double v___x_1120_; double v___x_1121_; double v___x_1122_; double v___x_1123_; double v___x_1124_; double v___x_1125_; double v___x_1126_; double v___x_1127_; double v___x_1128_; uint8_t v___x_1129_; double v___x_1130_; lean_object* v___x_1132_; 
v___x_1113_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1113_, 0, v_a_889_);
lean_ctor_set(v___x_1113_, 1, v_a_900_);
lean_ctor_set(v___x_1113_, 2, v_a_911_);
lean_ctor_set(v___x_1113_, 3, v_a_1087_);
v___x_1114_ = lean_unbox(v_a_922_);
lean_dec(v_a_922_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 88, v___x_1114_);
v___x_1115_ = lean_unbox(v_a_933_);
lean_dec(v_a_933_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 89, v___x_1115_);
v___x_1116_ = lean_unbox(v_a_944_);
lean_dec(v_a_944_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 90, v___x_1116_);
v___x_1117_ = lean_unbox(v_a_955_);
lean_dec(v_a_955_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 91, v___x_1117_);
v___x_1118_ = lean_unbox(v_a_966_);
lean_dec(v_a_966_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 92, v___x_1118_);
v___x_1119_ = lean_unbox_float(v_a_977_);
lean_dec(v_a_977_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4, v___x_1119_);
v___x_1120_ = lean_unbox_float(v_a_988_);
lean_dec(v_a_988_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 8, v___x_1120_);
v___x_1121_ = lean_unbox_float(v_a_999_);
lean_dec(v_a_999_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 16, v___x_1121_);
v___x_1122_ = lean_unbox_float(v_a_1010_);
lean_dec(v_a_1010_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 24, v___x_1122_);
v___x_1123_ = lean_unbox_float(v_a_1021_);
lean_dec(v_a_1021_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 32, v___x_1123_);
v___x_1124_ = lean_unbox_float(v_a_1032_);
lean_dec(v_a_1032_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 40, v___x_1124_);
v___x_1125_ = lean_unbox_float(v_a_1043_);
lean_dec(v_a_1043_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 48, v___x_1125_);
v___x_1126_ = lean_unbox_float(v_a_1054_);
lean_dec(v_a_1054_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 56, v___x_1126_);
v___x_1127_ = lean_unbox_float(v_a_1065_);
lean_dec(v_a_1065_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 64, v___x_1127_);
v___x_1128_ = lean_unbox_float(v_a_1076_);
lean_dec(v_a_1076_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 72, v___x_1128_);
v___x_1129_ = lean_unbox(v_a_1098_);
lean_dec(v_a_1098_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*4 + 93, v___x_1129_);
v___x_1130_ = lean_unbox_float(v_a_1109_);
lean_dec(v_a_1109_);
lean_ctor_set_float(v___x_1113_, sizeof(void*)*4 + 80, v___x_1130_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1113_);
v___x_1132_ = v___x_1111_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1113_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventInfo___lam__0___boxed(lean_object* v___x_1135_, lean_object* v___x_1136_, lean_object* v___x_1137_, lean_object* v_d_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lasm_Web_instFromJSEventInfo___lam__0(v___x_1135_, v___x_1136_, v___x_1137_, v_d_1138_);
lean_dec(v_d_1138_);
return v_res_1139_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__0(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___f_1143_; 
v___x_1140_ = l_Lasm_JS_instFromJSFloat;
v___x_1141_ = l_Lasm_JS_instFromJSBool;
v___x_1142_ = l_Lasm_JS_instFromJSString;
v___f_1143_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSEventInfo___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1143_, 0, v___x_1142_);
lean_closure_set(v___f_1143_, 1, v___x_1141_);
lean_closure_set(v___f_1143_, 2, v___x_1140_);
return v___f_1143_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo___closed__2(void){
_start:
{
uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___f_1147_; lean_object* v___x_1148_; 
v___x_1145_ = 0;
v___x_1146_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___f_1147_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__0, &l_Lasm_Web_instFromJSEventInfo___closed__0_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__0);
v___x_1148_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1148_, 0, v___f_1147_);
lean_ctor_set(v___x_1148_, 1, v___x_1146_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*2, v___x_1145_);
return v___x_1148_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventInfo(void){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_obj_once(&l_Lasm_Web_instFromJSEventInfo___closed__2, &l_Lasm_Web_instFromJSEventInfo___closed__2_once, _init_l_Lasm_Web_instFromJSEventInfo___closed__2);
return v___x_1149_;
}
}
static double _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0(void){
_start:
{
uint64_t v___x_1150_; double v___x_1151_; 
v___x_1150_ = 0ULL;
v___x_1151_ = lean_uint64_to_float(v___x_1150_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1(void){
_start:
{
double v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1152_ = lean_float_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__0, &l_Lasm_Web_instInhabitedEventInfo_default___closed__0_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__0);
v___x_1153_ = 0;
v___x_1154_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1155_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
lean_ctor_set(v___x_1155_, 2, v___x_1154_);
lean_ctor_set(v___x_1155_, 3, v___x_1154_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 88, v___x_1153_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 89, v___x_1153_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 90, v___x_1153_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 91, v___x_1153_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 92, v___x_1153_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 8, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 16, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 24, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 32, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 40, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 48, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 56, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 64, v___x_1152_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 72, v___x_1152_);
lean_ctor_set_uint8(v___x_1155_, sizeof(void*)*4 + 93, v___x_1153_);
lean_ctor_set_float(v___x_1155_, sizeof(void*)*4 + 80, v___x_1152_);
return v___x_1155_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo_default(void){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_obj_once(&l_Lasm_Web_instInhabitedEventInfo_default___closed__1, &l_Lasm_Web_instInhabitedEventInfo_default___closed__1_once, _init_l_Lasm_Web_instInhabitedEventInfo_default___closed__1);
return v___x_1156_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedEventInfo(void){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lasm_Web_instInhabitedEventInfo_default;
return v___x_1157_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_unsigned_to_nat(8u);
v___x_1171_ = lean_nat_to_int(v___x_1170_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_unsigned_to_nat(7u);
v___x_1178_ = lean_nat_to_int(v___x_1177_);
return v___x_1178_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_unsigned_to_nat(13u);
v___x_1184_ = lean_nat_to_int(v___x_1183_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_unsigned_to_nat(10u);
v___x_1188_ = lean_nat_to_int(v___x_1187_);
return v___x_1188_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_unsigned_to_nat(11u);
v___x_1192_ = lean_nat_to_int(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_unsigned_to_nat(12u);
v___x_1198_ = lean_nat_to_int(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(9u);
v___x_1206_ = lean_nat_to_int(v___x_1205_);
return v___x_1206_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__0));
v___x_1229_ = lean_string_length(v___x_1228_);
return v___x_1229_;
}
}
static lean_object* _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__36);
v___x_1231_ = lean_nat_to_int(v___x_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___redArg(lean_object* v_x_1236_){
_start:
{
lean_object* v_type_1237_; lean_object* v_key_1238_; lean_object* v_code_1239_; uint8_t v_keyRepeat_1240_; uint8_t v_altKey_1241_; uint8_t v_ctrlKey_1242_; uint8_t v_metaKey_1243_; uint8_t v_shiftKey_1244_; double v_clientX_1245_; double v_clientY_1246_; double v_pageX_1247_; double v_pageY_1248_; double v_offsetX_1249_; double v_offsetY_1250_; double v_button_1251_; double v_buttons_1252_; double v_deltaX_1253_; double v_deltaY_1254_; lean_object* v_value_1255_; uint8_t v_checked_1256_; double v_timeStamp_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_type_1237_ = lean_ctor_get(v_x_1236_, 0);
lean_inc_ref(v_type_1237_);
v_key_1238_ = lean_ctor_get(v_x_1236_, 1);
lean_inc_ref(v_key_1238_);
v_code_1239_ = lean_ctor_get(v_x_1236_, 2);
lean_inc_ref(v_code_1239_);
v_keyRepeat_1240_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 88);
v_altKey_1241_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 89);
v_ctrlKey_1242_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 90);
v_metaKey_1243_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 91);
v_shiftKey_1244_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 92);
v_clientX_1245_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4);
v_clientY_1246_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 8);
v_pageX_1247_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 16);
v_pageY_1248_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 24);
v_offsetX_1249_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 32);
v_offsetY_1250_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 40);
v_button_1251_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 48);
v_buttons_1252_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 56);
v_deltaX_1253_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 64);
v_deltaY_1254_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 72);
v_value_1255_ = lean_ctor_get(v_x_1236_, 3);
lean_inc_ref(v_value_1255_);
v_checked_1256_ = lean_ctor_get_uint8(v_x_1236_, sizeof(void*)*4 + 93);
v_timeStamp_1257_ = lean_ctor_get_float(v_x_1236_, sizeof(void*)*4 + 80);
lean_dec_ref(v_x_1236_);
v___x_1258_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__4));
v___x_1259_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__5));
v___x_1260_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__6);
v___x_1261_ = l_String_quote(v_type_1237_);
v___x_1262_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
v___x_1263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1260_);
lean_ctor_set(v___x_1263_, 1, v___x_1262_);
v___x_1264_ = 0;
v___x_1265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*1, v___x_1264_);
v___x_1266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1259_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__8));
v___x_1268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1266_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
v___x_1269_ = lean_box(1);
v___x_1270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__9));
v___x_1272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1258_);
v___x_1274_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__10);
v___x_1275_ = l_String_quote(v_key_1238_);
v___x_1276_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
v___x_1277_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1274_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*1, v___x_1264_);
v___x_1279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1273_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v___x_1267_);
v___x_1281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v___x_1269_);
v___x_1282_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__11));
v___x_1283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
lean_ctor_set(v___x_1284_, 1, v___x_1258_);
v___x_1285_ = l_String_quote(v_code_1239_);
v___x_1286_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1260_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set_uint8(v___x_1288_, sizeof(void*)*1, v___x_1264_);
v___x_1289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1284_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___x_1267_);
v___x_1291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v___x_1269_);
v___x_1292_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__12));
v___x_1293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1291_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___x_1258_);
v___x_1295_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__13);
v___x_1296_ = lean_unsigned_to_nat(0u);
v___x_1297_ = l_Bool_repr___redArg(v_keyRepeat_1240_);
v___x_1298_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1295_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*1, v___x_1264_);
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1294_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v___x_1267_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1269_);
v___x_1303_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__14));
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1258_);
v___x_1306_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__15);
v___x_1307_ = l_Bool_repr___redArg(v_altKey_1241_);
v___x_1308_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
lean_ctor_set_uint8(v___x_1309_, sizeof(void*)*1, v___x_1264_);
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1305_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1267_);
v___x_1312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set(v___x_1312_, 1, v___x_1269_);
v___x_1313_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__16));
v___x_1314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set(v___x_1315_, 1, v___x_1258_);
v___x_1316_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__17);
v___x_1317_ = l_Bool_repr___redArg(v_ctrlKey_1242_);
v___x_1318_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set_uint8(v___x_1319_, sizeof(void*)*1, v___x_1264_);
v___x_1320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1315_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___x_1267_);
v___x_1322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v___x_1269_);
v___x_1323_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__18));
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1322_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
lean_ctor_set(v___x_1325_, 1, v___x_1258_);
v___x_1326_ = l_Bool_repr___redArg(v_metaKey_1243_);
v___x_1327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1316_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*1, v___x_1264_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1325_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
lean_ctor_set(v___x_1330_, 1, v___x_1267_);
v___x_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v___x_1269_);
v___x_1332_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__19));
v___x_1333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v___x_1258_);
v___x_1335_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__20);
v___x_1336_ = l_Bool_repr___redArg(v_shiftKey_1244_);
v___x_1337_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*1, v___x_1264_);
v___x_1339_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1334_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1267_);
v___x_1341_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v___x_1269_);
v___x_1342_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__21));
v___x_1343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
lean_ctor_set(v___x_1344_, 1, v___x_1258_);
v___x_1345_ = l_Float_repr(v_clientX_1245_, v___x_1296_);
v___x_1346_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1316_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set_uint8(v___x_1347_, sizeof(void*)*1, v___x_1264_);
v___x_1348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1344_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
v___x_1349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
lean_ctor_set(v___x_1349_, 1, v___x_1267_);
v___x_1350_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set(v___x_1350_, 1, v___x_1269_);
v___x_1351_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__22));
v___x_1352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set(v___x_1353_, 1, v___x_1258_);
v___x_1354_ = l_Float_repr(v_clientY_1246_, v___x_1296_);
v___x_1355_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1316_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
lean_ctor_set_uint8(v___x_1356_, sizeof(void*)*1, v___x_1264_);
v___x_1357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1353_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
lean_ctor_set(v___x_1358_, 1, v___x_1267_);
v___x_1359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v___x_1269_);
v___x_1360_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__23));
v___x_1361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
lean_ctor_set(v___x_1362_, 1, v___x_1258_);
v___x_1363_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__24);
v___x_1364_ = l_Float_repr(v_pageX_1247_, v___x_1296_);
v___x_1365_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1363_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set_uint8(v___x_1366_, sizeof(void*)*1, v___x_1264_);
v___x_1367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1362_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
lean_ctor_set(v___x_1368_, 1, v___x_1267_);
v___x_1369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
lean_ctor_set(v___x_1369_, 1, v___x_1269_);
v___x_1370_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__25));
v___x_1371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1369_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
v___x_1372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
lean_ctor_set(v___x_1372_, 1, v___x_1258_);
v___x_1373_ = l_Float_repr(v_pageY_1248_, v___x_1296_);
v___x_1374_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1363_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
lean_ctor_set_uint8(v___x_1375_, sizeof(void*)*1, v___x_1264_);
v___x_1376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1372_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
lean_ctor_set(v___x_1377_, 1, v___x_1267_);
v___x_1378_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
lean_ctor_set(v___x_1378_, 1, v___x_1269_);
v___x_1379_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__26));
v___x_1380_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1378_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
v___x_1381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
lean_ctor_set(v___x_1381_, 1, v___x_1258_);
v___x_1382_ = l_Float_repr(v_offsetX_1249_, v___x_1296_);
v___x_1383_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1316_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
v___x_1384_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*1, v___x_1264_);
v___x_1385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1381_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
lean_ctor_set(v___x_1386_, 1, v___x_1267_);
v___x_1387_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
lean_ctor_set(v___x_1387_, 1, v___x_1269_);
v___x_1388_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__27));
v___x_1389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1387_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
v___x_1390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v___x_1258_);
v___x_1391_ = l_Float_repr(v_offsetY_1250_, v___x_1296_);
v___x_1392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1316_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
v___x_1393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
lean_ctor_set_uint8(v___x_1393_, sizeof(void*)*1, v___x_1264_);
v___x_1394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1390_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v___x_1267_);
v___x_1396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v___x_1269_);
v___x_1397_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__28));
v___x_1398_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1396_);
lean_ctor_set(v___x_1398_, 1, v___x_1397_);
v___x_1399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v___x_1258_);
v___x_1400_ = l_Float_repr(v_button_1251_, v___x_1296_);
v___x_1401_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1306_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
lean_ctor_set_uint8(v___x_1402_, sizeof(void*)*1, v___x_1264_);
v___x_1403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1399_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
v___x_1404_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
lean_ctor_set(v___x_1404_, 1, v___x_1267_);
v___x_1405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
lean_ctor_set(v___x_1405_, 1, v___x_1269_);
v___x_1406_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__29));
v___x_1407_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1405_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
lean_ctor_set(v___x_1408_, 1, v___x_1258_);
v___x_1409_ = l_Float_repr(v_buttons_1252_, v___x_1296_);
v___x_1410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1316_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
lean_ctor_set_uint8(v___x_1411_, sizeof(void*)*1, v___x_1264_);
v___x_1412_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1408_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
v___x_1413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___x_1267_);
v___x_1414_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
lean_ctor_set(v___x_1414_, 1, v___x_1269_);
v___x_1415_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__30));
v___x_1416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
lean_ctor_set(v___x_1417_, 1, v___x_1258_);
v___x_1418_ = l_Float_repr(v_deltaX_1253_, v___x_1296_);
v___x_1419_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1306_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set_uint8(v___x_1420_, sizeof(void*)*1, v___x_1264_);
v___x_1421_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1417_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1267_);
v___x_1423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v___x_1269_);
v___x_1424_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__31));
v___x_1425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set(v___x_1426_, 1, v___x_1258_);
v___x_1427_ = l_Float_repr(v_deltaY_1254_, v___x_1296_);
v___x_1428_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1306_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set_uint8(v___x_1429_, sizeof(void*)*1, v___x_1264_);
v___x_1430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1426_);
lean_ctor_set(v___x_1430_, 1, v___x_1429_);
v___x_1431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
lean_ctor_set(v___x_1431_, 1, v___x_1267_);
v___x_1432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___x_1269_);
v___x_1433_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__32));
v___x_1434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
lean_ctor_set(v___x_1435_, 1, v___x_1258_);
v___x_1436_ = l_String_quote(v_value_1255_);
v___x_1437_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1363_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*1, v___x_1264_);
v___x_1440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1435_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
lean_ctor_set(v___x_1441_, 1, v___x_1267_);
v___x_1442_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
lean_ctor_set(v___x_1442_, 1, v___x_1269_);
v___x_1443_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__33));
v___x_1444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
lean_ctor_set(v___x_1445_, 1, v___x_1258_);
v___x_1446_ = l_Bool_repr___redArg(v_checked_1256_);
v___x_1447_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1316_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
v___x_1448_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
lean_ctor_set_uint8(v___x_1448_, sizeof(void*)*1, v___x_1264_);
v___x_1449_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1445_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
lean_ctor_set(v___x_1450_, 1, v___x_1267_);
v___x_1451_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
lean_ctor_set(v___x_1451_, 1, v___x_1269_);
v___x_1452_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__34));
v___x_1453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
v___x_1454_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
lean_ctor_set(v___x_1454_, 1, v___x_1258_);
v___x_1455_ = l_Float_repr(v_timeStamp_1257_, v___x_1296_);
v___x_1456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1295_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1457_, 0, v___x_1456_);
lean_ctor_set_uint8(v___x_1457_, sizeof(void*)*1, v___x_1264_);
v___x_1458_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1454_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_obj_once(&l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37, &l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37_once, _init_l_Lasm_Web_instReprEventInfo_repr___redArg___closed__37);
v___x_1460_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__38));
v___x_1461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
lean_ctor_set(v___x_1461_, 1, v___x_1458_);
v___x_1462_ = ((lean_object*)(l_Lasm_Web_instReprEventInfo_repr___redArg___closed__39));
v___x_1463_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1459_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
lean_ctor_set_uint8(v___x_1465_, sizeof(void*)*1, v___x_1264_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr(lean_object* v_x_1466_, lean_object* v_prec_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lasm_Web_instReprEventInfo_repr___redArg(v_x_1466_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprEventInfo_repr___boxed(lean_object* v_x_1469_, lean_object* v_prec_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_Web_instReprEventInfo_repr(v_x_1469_, v_prec_1470_);
lean_dec(v_prec_1470_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(lean_object* v_context_1474_, lean_object* v_args_1475_){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; uint8_t v___x_1479_; 
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = lean_array_get_size(v_args_1475_);
v___x_1479_ = lean_nat_dec_lt(v___x_1477_, v___x_1478_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = lean_box(0);
v___x_1481_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1474_, v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_array_fget_borrowed(v_args_1475_, v___x_1477_);
lean_inc(v___x_1482_);
v___x_1483_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_createEvent_spec__0_spec__0(v_context_1474_, v___x_1482_);
return v___x_1483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0___boxed(lean_object* v_context_1484_, lean_object* v_args_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v_context_1484_, v_args_1485_);
lean_dec_ref(v_args_1485_);
lean_dec_ref(v_context_1484_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0(lean_object* v_type_1489_, lean_object* v_handler_1490_, lean_object* v_args_1491_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = ((lean_object*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___closed__0));
v___x_1494_ = lean_string_append(v_type_1489_, v___x_1493_);
v___x_1495_ = l_Lasm_Web_argument___at___00Lasm_Web_EventTarget_addEventListener_spec__0(v___x_1494_, v_args_1491_);
lean_dec_ref(v___x_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = lean_apply_2(v_handler_1490_, v_a_1496_, lean_box(0));
return v___x_1497_;
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec_ref(v_handler_1490_);
v_a_1498_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1495_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1495_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed(lean_object* v_type_1506_, lean_object* v_handler_1507_, lean_object* v_args_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lasm_Web_EventTarget_addEventListener___lam__0(v_type_1506_, v_handler_1507_, v_args_1508_);
lean_dec_ref(v_args_1508_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object* v_target_1511_, lean_object* v_type_1512_, lean_object* v_handler_1513_, lean_object* v_options_1514_){
_start:
{
lean_object* v___f_1516_; lean_object* v___x_1517_; 
lean_inc_ref(v_type_1512_);
v___f_1516_ = lean_alloc_closure((void*)(l_Lasm_Web_EventTarget_addEventListener___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1516_, 0, v_type_1512_);
lean_closure_set(v___f_1516_, 1, v_handler_1513_);
v___x_1517_ = l_Lasm_Web_callback(v___f_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1519_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = l_Lasm_Web_Raw_listen(v_target_1511_, v_type_1512_, v_a_1518_, v_options_1514_);
return v___x_1519_;
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec_ref(v_type_1512_);
lean_dec(v_target_1511_);
v_a_1520_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1517_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1517_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_addEventListener___boxed(lean_object* v_target_1528_, lean_object* v_type_1529_, lean_object* v_handler_1530_, lean_object* v_options_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1528_, v_type_1529_, v_handler_1530_, v_options_1531_);
lean_dec_ref(v_options_1531_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on(lean_object* v_target_1534_, lean_object* v_type_1535_, lean_object* v_handler_1536_, lean_object* v_options_1537_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lasm_Web_EventTarget_addEventListener(v_target_1534_, v_type_1535_, v_handler_1536_, v_options_1537_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_on___boxed(lean_object* v_target_1540_, lean_object* v_type_1541_, lean_object* v_handler_1542_, lean_object* v_options_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lasm_Web_EventTarget_on(v_target_1540_, v_type_1541_, v_handler_1542_, v_options_1543_);
lean_dec_ref(v_options_1543_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent(lean_object* v_target_1546_, lean_object* v_event_1547_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l_Lasm_Web_Raw_dispatchEvent(v_target_1546_, v_event_1547_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_EventTarget_dispatchEvent___boxed(lean_object* v_target_1550_, lean_object* v_event_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lasm_Web_EventTarget_dispatchEvent(v_target_1550_, v_event_1551_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove(lean_object* v_l_1554_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lasm_Web_Raw_unlisten(v_l_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Listener_remove___boxed(lean_object* v_l_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lasm_Web_Listener_remove(v_l_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create(lean_object* v_type_1560_, uint8_t v_bubbles_1561_, uint8_t v_cancelable_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lasm_Web_Raw_createEvent(v_type_1560_, v_bubbles_1561_, v_cancelable_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_create___boxed(lean_object* v_type_1565_, lean_object* v_bubbles_1566_, lean_object* v_cancelable_1567_, lean_object* v_a_1568_){
_start:
{
uint8_t v_bubbles_boxed_1569_; uint8_t v_cancelable_boxed_1570_; lean_object* v_res_1571_; 
v_bubbles_boxed_1569_ = lean_unbox(v_bubbles_1566_);
v_cancelable_boxed_1570_ = lean_unbox(v_cancelable_1567_);
v_res_1571_ = l_Lasm_Web_Event_create(v_type_1565_, v_bubbles_boxed_1569_, v_cancelable_boxed_1570_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom(lean_object* v_type_1572_, lean_object* v_detail_1573_, uint8_t v_bubbles_1574_, uint8_t v_cancelable_1575_){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = l_Lasm_Web_Raw_createCustomEvent(v_type_1572_, v_detail_1573_, v_bubbles_1574_, v_cancelable_1575_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_custom___boxed(lean_object* v_type_1578_, lean_object* v_detail_1579_, lean_object* v_bubbles_1580_, lean_object* v_cancelable_1581_, lean_object* v_a_1582_){
_start:
{
uint8_t v_bubbles_boxed_1583_; uint8_t v_cancelable_boxed_1584_; lean_object* v_res_1585_; 
v_bubbles_boxed_1583_ = lean_unbox(v_bubbles_1580_);
v_cancelable_boxed_1584_ = lean_unbox(v_cancelable_1581_);
v_res_1585_ = l_Lasm_Web_Event_custom(v_type_1578_, v_detail_1579_, v_bubbles_boxed_1583_, v_cancelable_boxed_1584_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object* v_d_1592_, lean_object* v_key_1593_){
_start:
{
if (lean_obj_tag(v_d_1592_) == 8)
{
lean_object* v___x_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1622_; 
v___x_1594_ = l_Lasm_JS_Data_field(v_d_1592_, v_key_1593_);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_d_1592_);
if (v_isSharedCheck_1622_ == 0)
{
lean_object* v_unused_1623_; 
v_unused_1623_ = lean_ctor_get(v_d_1592_, 0);
lean_dec(v_unused_1623_);
v___x_1596_ = v_d_1592_;
v_isShared_1597_ = v_isSharedCheck_1622_;
goto v_resetjp_1595_;
}
else
{
lean_dec(v_d_1592_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1622_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
if (lean_obj_tag(v___x_1594_) == 2)
{
uint8_t v_b_1598_; lean_object* v___x_1599_; lean_object* v___x_1601_; 
v_b_1598_ = lean_ctor_get_uint8(v___x_1594_, 0);
lean_dec_ref_known(v___x_1594_, 0);
v___x_1599_ = lean_box(v_b_1598_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set_tag(v___x_1596_, 1);
lean_ctor_set(v___x_1596_, 0, v___x_1599_);
v___x_1601_ = v___x_1596_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
else
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1603_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1604_ = lean_string_append(v___x_1603_, v_key_1593_);
v___x_1605_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
v___x_1607_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0___closed__0));
v___x_1608_ = lean_string_append(v___x_1606_, v___x_1607_);
v___x_1609_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1610_ = lean_string_append(v___x_1608_, v___x_1609_);
v___x_1611_ = l_Lasm_JS_Data_describe(v___x_1594_);
v___x_1612_ = lean_string_append(v___x_1610_, v___x_1611_);
lean_dec_ref(v___x_1611_);
v___x_1613_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1614_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1615_ = lean_string_append(v___x_1612_, v___x_1614_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set_tag(v___x_1596_, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1615_);
v___x_1617_ = v___x_1596_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
else
{
lean_object* v___x_1620_; 
if (v_isShared_1597_ == 0)
{
lean_ctor_set_tag(v___x_1596_, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1612_);
v___x_1620_ = v___x_1596_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1612_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
}
else
{
lean_object* v___x_1624_; 
lean_dec(v_d_1592_);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__4));
return v___x_1624_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___boxed(lean_object* v_d_1625_, lean_object* v_key_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1625_, v_key_1626_);
lean_dec_ref(v_key_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(lean_object* v_d_1631_, lean_object* v_key_1632_){
_start:
{
if (lean_obj_tag(v_d_1631_) == 8)
{
lean_object* v___x_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1661_; 
v___x_1633_ = l_Lasm_JS_Data_field(v_d_1631_, v_key_1632_);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_d_1631_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; 
v_unused_1662_ = lean_ctor_get(v_d_1631_, 0);
lean_dec(v_unused_1662_);
v___x_1635_ = v_d_1631_;
v_isShared_1636_ = v_isSharedCheck_1661_;
goto v_resetjp_1634_;
}
else
{
lean_dec(v_d_1631_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1661_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
if (lean_obj_tag(v___x_1633_) == 3)
{
double v_n_1637_; lean_object* v___x_1638_; lean_object* v___x_1640_; 
v_n_1637_ = lean_ctor_get_float(v___x_1633_, 0);
lean_dec_ref_known(v___x_1633_, 0);
v___x_1638_ = lean_box_float(v_n_1637_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 1);
lean_ctor_set(v___x_1635_, 0, v___x_1638_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
else
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1642_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1643_ = lean_string_append(v___x_1642_, v_key_1632_);
v___x_1644_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1645_ = lean_string_append(v___x_1643_, v___x_1644_);
v___x_1646_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__0));
v___x_1647_ = lean_string_append(v___x_1645_, v___x_1646_);
v___x_1648_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1649_ = lean_string_append(v___x_1647_, v___x_1648_);
v___x_1650_ = l_Lasm_JS_Data_describe(v___x_1633_);
v___x_1651_ = lean_string_append(v___x_1649_, v___x_1650_);
lean_dec_ref(v___x_1650_);
v___x_1652_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1656_; 
v___x_1653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1654_ = lean_string_append(v___x_1651_, v___x_1653_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1654_);
v___x_1656_ = v___x_1635_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
else
{
lean_object* v___x_1659_; 
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1651_);
v___x_1659_ = v___x_1635_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1651_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
else
{
lean_object* v___x_1663_; 
lean_dec(v_d_1631_);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___closed__1));
return v___x_1663_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2___boxed(lean_object* v_d_1664_, lean_object* v_key_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1664_, v_key_1665_);
lean_dec_ref(v_key_1665_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object* v_d_1669_, lean_object* v_key_1670_){
_start:
{
if (lean_obj_tag(v_d_1669_) == 8)
{
lean_object* v___x_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1702_; 
v___x_1671_ = l_Lasm_JS_Data_field(v_d_1669_, v_key_1670_);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_d_1669_);
if (v_isSharedCheck_1702_ == 0)
{
lean_object* v_unused_1703_; 
v_unused_1703_ = lean_ctor_get(v_d_1669_, 0);
lean_dec(v_unused_1703_);
v___x_1673_ = v_d_1669_;
v_isShared_1674_ = v_isSharedCheck_1702_;
goto v_resetjp_1672_;
}
else
{
lean_dec(v_d_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1702_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
if (lean_obj_tag(v___x_1671_) == 4)
{
lean_object* v_s_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_del_object(v___x_1673_);
v_s_1675_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1671_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_s_1675_);
lean_dec(v___x_1671_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
lean_ctor_set_tag(v___x_1677_, 1);
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_s_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1683_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__0));
v___x_1684_ = lean_string_append(v___x_1683_, v_key_1670_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__1));
v___x_1686_ = lean_string_append(v___x_1684_, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0___closed__0));
v___x_1688_ = lean_string_append(v___x_1686_, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1___closed__2));
v___x_1690_ = lean_string_append(v___x_1688_, v___x_1689_);
v___x_1691_ = l_Lasm_JS_Data_describe(v___x_1671_);
v___x_1692_ = lean_string_append(v___x_1690_, v___x_1691_);
lean_dec_ref(v___x_1691_);
v___x_1693_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___x_1695_ = lean_string_append(v___x_1692_, v___x_1694_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set_tag(v___x_1673_, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1695_);
v___x_1697_ = v___x_1673_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
else
{
lean_object* v___x_1700_; 
if (v_isShared_1674_ == 0)
{
lean_ctor_set_tag(v___x_1673_, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1692_);
v___x_1700_ = v___x_1673_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1692_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
}
else
{
lean_object* v___x_1704_; 
lean_dec(v_d_1669_);
v___x_1704_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___closed__0));
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0___boxed(lean_object* v_d_1705_, lean_object* v_key_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1705_, v_key_1706_);
lean_dec_ref(v_key_1706_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(lean_object* v_context_1710_, lean_object* v_d_1711_){
_start:
{
lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1720_; lean_object* v_received_1721_; lean_object* v___y_1740_; lean_object* v_a_1743_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
lean_inc(v_d_1711_);
v___x_1768_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1711_, v___x_1767_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v_a_1743_ = v_a_1769_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_a_1770_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1771_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
lean_inc(v_d_1711_);
v___x_1772_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1711_, v___x_1771_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; 
lean_dec(v_a_1770_);
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
v_a_1743_ = v_a_1773_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_a_1774_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1775_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__2));
lean_inc(v_d_1711_);
v___x_1776_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1711_, v___x_1775_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; 
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1777_);
lean_dec_ref_known(v___x_1776_, 1);
v_a_1743_ = v_a_1777_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_a_1778_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1776_, 1);
v___x_1779_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__3));
lean_inc(v_d_1711_);
v___x_1780_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1779_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; 
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v_a_1743_ = v_a_1781_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v_a_1782_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1782_);
lean_dec_ref_known(v___x_1780_, 1);
v___x_1783_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__4));
lean_inc(v_d_1711_);
v___x_1784_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1783_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; 
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v_a_1743_ = v_a_1785_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_a_1786_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1784_, 1);
v___x_1787_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__5));
lean_inc(v_d_1711_);
v___x_1788_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1787_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; 
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
v_a_1743_ = v_a_1789_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v_a_1790_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1788_, 1);
v___x_1791_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__6));
lean_inc(v_d_1711_);
v___x_1792_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1791_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; 
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v_a_1743_ = v_a_1793_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_a_1794_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1795_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__7));
lean_inc(v_d_1711_);
v___x_1796_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1795_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; 
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
v_a_1743_ = v_a_1797_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v_a_1798_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v___x_1796_, 1);
v___x_1799_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__8));
lean_inc(v_d_1711_);
v___x_1800_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1799_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; 
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
v_a_1743_ = v_a_1801_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v_a_1802_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1800_, 1);
v___x_1803_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__9));
lean_inc(v_d_1711_);
v___x_1804_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1803_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; 
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v___x_1804_, 1);
v_a_1743_ = v_a_1805_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v_a_1806_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1804_, 1);
v___x_1807_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__10));
lean_inc(v_d_1711_);
v___x_1808_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1807_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; 
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1808_, 1);
v_a_1743_ = v_a_1809_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v_a_1810_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1808_, 1);
v___x_1811_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__11));
lean_inc(v_d_1711_);
v___x_1812_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1811_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; 
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1812_, 1);
v_a_1743_ = v_a_1813_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v_a_1814_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1812_, 1);
v___x_1815_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__12));
lean_inc(v_d_1711_);
v___x_1816_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1815_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; 
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
v_a_1743_ = v_a_1817_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v_a_1818_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1818_);
lean_dec_ref_known(v___x_1816_, 1);
v___x_1819_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__13));
lean_inc(v_d_1711_);
v___x_1820_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1819_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; 
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
v_a_1743_ = v_a_1821_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v_a_1822_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1820_, 1);
v___x_1823_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__14));
lean_inc(v_d_1711_);
v___x_1824_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1823_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; 
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 1);
v_a_1743_ = v_a_1825_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1824_, 1);
v___x_1827_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__15));
lean_inc(v_d_1711_);
v___x_1828_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1827_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; 
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v_a_1743_ = v_a_1829_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v_a_1830_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1830_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1831_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__16));
lean_inc(v_d_1711_);
v___x_1832_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1831_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; 
lean_dec(v_a_1830_);
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1833_);
lean_dec_ref_known(v___x_1832_, 1);
v_a_1743_ = v_a_1833_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v_a_1834_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1832_, 1);
v___x_1835_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__17));
lean_inc(v_d_1711_);
v___x_1836_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1835_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; 
lean_dec(v_a_1834_);
lean_dec(v_a_1830_);
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v_a_1743_ = v_a_1837_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v_a_1838_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1839_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__18));
lean_inc(v_d_1711_);
v___x_1840_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_1711_, v___x_1839_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; 
lean_dec(v_a_1838_);
lean_dec(v_a_1834_);
lean_dec(v_a_1830_);
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
v_a_1743_ = v_a_1841_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_a_1842_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1840_, 1);
v___x_1843_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__19));
lean_inc(v_d_1711_);
v___x_1844_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_1711_, v___x_1843_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_object* v_a_1845_; 
lean_dec(v_a_1842_);
lean_dec(v_a_1838_);
lean_dec(v_a_1834_);
lean_dec(v_a_1830_);
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1845_);
lean_dec_ref_known(v___x_1844_, 1);
v_a_1743_ = v_a_1845_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v_a_1846_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1846_);
lean_dec_ref_known(v___x_1844_, 1);
v___x_1847_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__20));
lean_inc(v_d_1711_);
v___x_1848_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__2(v_d_1711_, v___x_1847_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; 
lean_dec(v_a_1846_);
lean_dec(v_a_1842_);
lean_dec(v_a_1838_);
lean_dec(v_a_1834_);
lean_dec(v_a_1830_);
lean_dec(v_a_1826_);
lean_dec(v_a_1822_);
lean_dec(v_a_1818_);
lean_dec(v_a_1814_);
lean_dec(v_a_1810_);
lean_dec(v_a_1806_);
lean_dec(v_a_1802_);
lean_dec(v_a_1798_);
lean_dec(v_a_1794_);
lean_dec(v_a_1790_);
lean_dec(v_a_1786_);
lean_dec(v_a_1782_);
lean_dec(v_a_1778_);
lean_dec(v_a_1774_);
lean_dec(v_a_1770_);
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v_a_1743_ = v_a_1849_;
goto v___jp_1742_;
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_d_1711_);
v_a_1850_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1852_ = v___x_1848_;
v_isShared_1853_ = v_isSharedCheck_1875_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1848_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1875_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1854_; uint8_t v___x_1855_; uint8_t v___x_1856_; uint8_t v___x_1857_; uint8_t v___x_1858_; uint8_t v___x_1859_; double v___x_1860_; double v___x_1861_; double v___x_1862_; double v___x_1863_; double v___x_1864_; double v___x_1865_; double v___x_1866_; double v___x_1867_; double v___x_1868_; double v___x_1869_; uint8_t v___x_1870_; double v___x_1871_; lean_object* v___x_1873_; 
v___x_1854_ = lean_alloc_ctor(0, 4, 94);
lean_ctor_set(v___x_1854_, 0, v_a_1770_);
lean_ctor_set(v___x_1854_, 1, v_a_1774_);
lean_ctor_set(v___x_1854_, 2, v_a_1778_);
lean_ctor_set(v___x_1854_, 3, v_a_1842_);
v___x_1855_ = lean_unbox(v_a_1782_);
lean_dec(v_a_1782_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 88, v___x_1855_);
v___x_1856_ = lean_unbox(v_a_1786_);
lean_dec(v_a_1786_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 89, v___x_1856_);
v___x_1857_ = lean_unbox(v_a_1790_);
lean_dec(v_a_1790_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 90, v___x_1857_);
v___x_1858_ = lean_unbox(v_a_1794_);
lean_dec(v_a_1794_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 91, v___x_1858_);
v___x_1859_ = lean_unbox(v_a_1798_);
lean_dec(v_a_1798_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 92, v___x_1859_);
v___x_1860_ = lean_unbox_float(v_a_1802_);
lean_dec(v_a_1802_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4, v___x_1860_);
v___x_1861_ = lean_unbox_float(v_a_1806_);
lean_dec(v_a_1806_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 8, v___x_1861_);
v___x_1862_ = lean_unbox_float(v_a_1810_);
lean_dec(v_a_1810_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 16, v___x_1862_);
v___x_1863_ = lean_unbox_float(v_a_1814_);
lean_dec(v_a_1814_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 24, v___x_1863_);
v___x_1864_ = lean_unbox_float(v_a_1818_);
lean_dec(v_a_1818_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 32, v___x_1864_);
v___x_1865_ = lean_unbox_float(v_a_1822_);
lean_dec(v_a_1822_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 40, v___x_1865_);
v___x_1866_ = lean_unbox_float(v_a_1826_);
lean_dec(v_a_1826_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 48, v___x_1866_);
v___x_1867_ = lean_unbox_float(v_a_1830_);
lean_dec(v_a_1830_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 56, v___x_1867_);
v___x_1868_ = lean_unbox_float(v_a_1834_);
lean_dec(v_a_1834_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 64, v___x_1868_);
v___x_1869_ = lean_unbox_float(v_a_1838_);
lean_dec(v_a_1838_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 72, v___x_1869_);
v___x_1870_ = lean_unbox(v_a_1846_);
lean_dec(v_a_1846_);
lean_ctor_set_uint8(v___x_1854_, sizeof(void*)*4 + 93, v___x_1870_);
v___x_1871_ = lean_unbox_float(v_a_1850_);
lean_dec(v_a_1850_);
lean_ctor_set_float(v___x_1854_, sizeof(void*)*4 + 80, v___x_1871_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set_tag(v___x_1852_, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1854_);
v___x_1873_ = v___x_1852_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1854_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
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
}
v___jp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = lean_string_append(v___y_1714_, v___y_1715_);
lean_dec_ref(v___y_1715_);
v___x_1717_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
v___jp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; uint8_t v___x_1733_; 
v___x_1722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1723_ = lean_string_append(v___x_1722_, v_context_1710_);
v___x_1724_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_1725_ = lean_string_append(v___x_1723_, v___x_1724_);
v___x_1726_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___closed__1));
v___x_1727_ = lean_string_append(v___x_1725_, v___x_1726_);
v___x_1728_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1729_ = lean_string_append(v___x_1727_, v___x_1728_);
v___x_1730_ = lean_string_append(v___x_1729_, v_received_1721_);
lean_dec_ref(v_received_1721_);
v___x_1731_ = lean_string_utf8_byte_size(v___y_1720_);
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = lean_nat_dec_eq(v___x_1731_, v___x_1732_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1734_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__0));
v___x_1735_ = lean_string_append(v___x_1734_, v___y_1720_);
lean_dec_ref(v___y_1720_);
v___x_1736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___closed__1));
v___x_1737_ = lean_string_append(v___x_1735_, v___x_1736_);
v___y_1714_ = v___x_1730_;
v___y_1715_ = v___x_1737_;
goto v___jp_1713_;
}
else
{
lean_object* v___x_1738_; 
lean_dec_ref(v___y_1720_);
v___x_1738_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___y_1714_ = v___x_1730_;
v___y_1715_ = v___x_1738_;
goto v___jp_1713_;
}
}
v___jp_1739_:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Lasm_JS_Data_describe(v_d_1711_);
v___y_1720_ = v___y_1740_;
v_received_1721_ = v___x_1741_;
goto v___jp_1719_;
}
v___jp_1742_:
{
if (lean_obj_tag(v_d_1711_) == 9)
{
lean_object* v_value_1744_; lean_object* v_description_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v_value_1744_ = lean_ctor_get(v_d_1711_, 0);
v_description_1745_ = lean_ctor_get(v_d_1711_, 1);
v___x_1746_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1747_ = lean_string_dec_eq(v_description_1745_, v___x_1746_);
if (v___x_1747_ == 0)
{
v___y_1740_ = v_a_1743_;
goto v___jp_1739_;
}
else
{
lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1764_; 
lean_inc(v_value_1744_);
v_isSharedCheck_1764_ = !lean_is_exclusive(v_d_1711_);
if (v_isSharedCheck_1764_ == 0)
{
lean_object* v_unused_1765_; lean_object* v_unused_1766_; 
v_unused_1765_ = lean_ctor_get(v_d_1711_, 1);
lean_dec(v_unused_1765_);
v_unused_1766_ = lean_ctor_get(v_d_1711_, 0);
lean_dec(v_unused_1766_);
v___x_1749_ = v_d_1711_;
v_isShared_1750_ = v_isSharedCheck_1764_;
goto v_resetjp_1748_;
}
else
{
lean_dec(v_d_1711_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1764_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
uint32_t v___x_1751_; uint64_t v___x_1752_; lean_object* v___x_1754_; 
v___x_1751_ = 206;
v___x_1752_ = 0ULL;
lean_inc(v_value_1744_);
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 1, v___x_1746_);
v___x_1754_ = v___x_1749_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_value_1744_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v___x_1746_);
v___x_1754_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
uint32_t v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lasm_js_value_handle(v_value_1744_);
lean_dec(v_value_1744_);
v___x_1756_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1751_, v___x_1752_, v___x_1754_, v___x_1755_);
lean_dec_ref(v___x_1754_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; uint8_t v___x_1758_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 1);
v___x_1758_ = lean_string_validate_utf8(v_a_1757_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
lean_dec(v_a_1757_);
v___x_1759_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_1760_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1759_);
v___y_1720_ = v_a_1743_;
v_received_1721_ = v___x_1760_;
goto v___jp_1719_;
}
else
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_string_from_utf8_unchecked(v_a_1757_);
v___y_1720_ = v_a_1743_;
v_received_1721_ = v___x_1761_;
goto v___jp_1719_;
}
}
else
{
lean_object* v___x_1762_; 
lean_dec_ref_known(v___x_1756_, 1);
v___x_1762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v___y_1720_ = v_a_1743_;
v_received_1721_ = v___x_1762_;
goto v___jp_1719_;
}
}
}
}
}
else
{
v___y_1740_ = v_a_1743_;
goto v___jp_1739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0___boxed(lean_object* v_context_1876_, lean_object* v_d_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v_context_1876_, v_d_1877_);
lean_dec_ref(v_context_1876_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info(lean_object* v_e_1881_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Lasm_Web_Raw_eventInfo(v_e_1881_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = ((lean_object*)(l_Lasm_Web_Event_info___closed__0));
v___x_1886_ = l_Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0(v___x_1885_, v_a_1884_);
return v___x_1886_;
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
v_a_1887_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1883_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1883_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_info___boxed(lean_object* v_e_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lasm_Web_Event_info(v_e_1895_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(lean_object* v_context_1898_, lean_object* v_bytes_1899_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lasm_JS_Wire_decode(v_bytes_1899_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_targetValue_spec__0_spec__0(v_context_1898_, v_a_1902_);
return v___x_1903_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
v_a_1904_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1901_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1901_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0___boxed(lean_object* v_context_1912_, lean_object* v_bytes_1913_, lean_object* v_a_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v_context_1912_, v_bytes_1913_);
lean_dec_ref(v_bytes_1913_);
lean_dec_ref(v_context_1912_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object* v_o_1917_, lean_object* v_key_1918_){
_start:
{
uint32_t v___x_1920_; uint32_t v___x_1921_; uint64_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1920_ = 203;
v___x_1921_ = lasm_js_value_handle(v_o_1917_);
v___x_1922_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_1918_);
v___x_1923_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1923_, 0, v_key_1918_);
v___x_1924_ = l_Lasm_JS_Wire_encode(v___x_1923_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_1926_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_o_1917_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lasm_js_call(v___x_1920_, v___x_1921_, v___x_1922_, v___x_1924_, v___x_1926_);
lean_dec_ref_known(v___x_1926_, 2);
lean_dec_ref(v___x_1924_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_1930_ = l_String_quote(v_key_1918_);
v___x_1931_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
v___x_1932_ = lean_unsigned_to_nat(120u);
v___x_1933_ = lean_unsigned_to_nat(0u);
v___x_1934_ = l_Std_Format_pretty(v___x_1931_, v___x_1932_, v___x_1933_, v___x_1933_);
v___x_1935_ = lean_string_append(v___x_1929_, v___x_1934_);
lean_dec_ref(v___x_1934_);
v___x_1936_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0_spec__0(v___x_1935_, v_a_1928_);
lean_dec(v_a_1928_);
lean_dec_ref(v___x_1935_);
return v___x_1936_;
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec_ref(v_key_1918_);
v_a_1937_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1927_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1927_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___boxed(lean_object* v_o_1945_, lean_object* v_key_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_o_1945_, v_key_1946_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type(lean_object* v_e_1949_){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__0));
v___x_1952_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_e_1949_, v___x_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_type___boxed(lean_object* v_e_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lasm_Web_Event_type(v_e_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(lean_object* v_context_1957_, lean_object* v_d_1958_){
_start:
{
lean_object* v___y_1964_; lean_object* v___y_1965_; 
switch(lean_obj_tag(v_d_1958_))
{
case 1:
{
goto v___jp_1960_;
}
case 0:
{
goto v___jp_1960_;
}
default: 
{
if (lean_obj_tag(v_d_1958_) == 4)
{
lean_object* v_s_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_s_1969_ = lean_ctor_get(v_d_1958_, 0);
lean_inc_ref(v_s_1969_);
lean_dec_ref_known(v_d_1958_, 1);
v___x_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1970_, 0, v_s_1969_);
v___x_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
return v___x_1971_;
}
else
{
lean_object* v___x_1972_; lean_object* v_received_1974_; 
v___x_1972_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_1958_) == 9)
{
lean_object* v_value_1988_; lean_object* v_description_1989_; uint8_t v___x_1990_; 
v_value_1988_ = lean_ctor_get(v_d_1958_, 0);
v_description_1989_ = lean_ctor_get(v_d_1958_, 1);
v___x_1990_ = lean_string_dec_eq(v_description_1989_, v___x_1972_);
if (v___x_1990_ == 0)
{
goto v___jp_1986_;
}
else
{
uint32_t v___x_1991_; uint64_t v___x_1992_; lean_object* v___x_1993_; uint32_t v___x_1994_; lean_object* v___x_1995_; 
lean_inc_n(v_value_1988_, 2);
lean_dec_ref_known(v_d_1958_, 2);
v___x_1991_ = 206;
v___x_1992_ = 0ULL;
v___x_1993_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1993_, 0, v_value_1988_);
lean_ctor_set(v___x_1993_, 1, v___x_1972_);
v___x_1994_ = lasm_js_value_handle(v_value_1988_);
lean_dec(v_value_1988_);
v___x_1995_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1991_, v___x_1992_, v___x_1993_, v___x_1994_);
lean_dec_ref_known(v___x_1993_, 2);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; uint8_t v___x_1997_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1995_, 1);
v___x_1997_ = lean_string_validate_utf8(v_a_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
lean_dec(v_a_1996_);
v___x_1998_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_1999_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1998_);
v_received_1974_ = v___x_1999_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2000_; 
v___x_2000_ = lean_string_from_utf8_unchecked(v_a_1996_);
v_received_1974_ = v___x_2000_;
goto v___jp_1973_;
}
}
else
{
lean_object* v___x_2001_; 
lean_dec_ref_known(v___x_1995_, 1);
v___x_2001_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_1974_ = v___x_2001_;
goto v___jp_1973_;
}
}
}
else
{
goto v___jp_1986_;
}
v___jp_1973_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; 
v___x_1975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_1976_ = lean_string_append(v___x_1975_, v_context_1957_);
v___x_1977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_1978_ = lean_string_append(v___x_1976_, v___x_1977_);
v___x_1979_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___closed__0));
v___x_1980_ = lean_string_append(v___x_1978_, v___x_1979_);
v___x_1981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_1982_ = lean_string_append(v___x_1980_, v___x_1981_);
v___x_1983_ = lean_string_append(v___x_1982_, v_received_1974_);
lean_dec_ref(v_received_1974_);
v___x_1984_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_1964_ = v___x_1983_;
v___y_1965_ = v___x_1985_;
goto v___jp_1963_;
}
else
{
v___y_1964_ = v___x_1983_;
v___y_1965_ = v___x_1972_;
goto v___jp_1963_;
}
}
v___jp_1986_:
{
lean_object* v___x_1987_; 
v___x_1987_ = l_Lasm_JS_Data_describe(v_d_1958_);
v_received_1974_ = v___x_1987_;
goto v___jp_1973_;
}
}
}
}
v___jp_1960_:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1961_ = lean_box(0);
v___x_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
return v___x_1962_;
}
v___jp_1963_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1966_ = lean_string_append(v___y_1964_, v___y_1965_);
v___x_1967_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2002_, lean_object* v_d_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_2002_, v_d_2003_);
lean_dec_ref(v_context_2002_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(lean_object* v_context_2006_, lean_object* v_bytes_2007_){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = l_Lasm_JS_Wire_decode(v_bytes_2007_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2011_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
v___x_2011_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0_spec__1(v_context_2006_, v_a_2010_);
return v___x_2011_;
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
v_a_2012_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_2009_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_2009_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0___boxed(lean_object* v_context_2020_, lean_object* v_bytes_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v_context_2020_, v_bytes_2021_);
lean_dec_ref(v_bytes_2021_);
lean_dec_ref(v_context_2020_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(lean_object* v_o_2024_, lean_object* v_key_2025_){
_start:
{
uint32_t v___x_2027_; uint32_t v___x_2028_; uint64_t v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2027_ = 203;
v___x_2028_ = lasm_js_value_handle(v_o_2024_);
v___x_2029_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_2025_);
v___x_2030_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2030_, 0, v_key_2025_);
v___x_2031_ = l_Lasm_JS_Wire_encode(v___x_2030_);
lean_dec_ref_known(v___x_2030_, 1);
v___x_2032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2033_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2033_, 0, v_o_2024_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = lasm_js_call(v___x_2027_, v___x_2028_, v___x_2029_, v___x_2031_, v___x_2033_);
lean_dec_ref_known(v___x_2033_, 2);
lean_dec_ref(v___x_2031_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2037_ = l_String_quote(v_key_2025_);
v___x_2038_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
v___x_2039_ = lean_unsigned_to_nat(120u);
v___x_2040_ = lean_unsigned_to_nat(0u);
v___x_2041_ = l_Std_Format_pretty(v___x_2038_, v___x_2039_, v___x_2040_, v___x_2040_);
v___x_2042_ = lean_string_append(v___x_2036_, v___x_2041_);
lean_dec_ref(v___x_2041_);
v___x_2043_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0_spec__0(v___x_2042_, v_a_2035_);
lean_dec(v_a_2035_);
lean_dec_ref(v___x_2042_);
return v___x_2043_;
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
lean_dec_ref(v_key_2025_);
v_a_2044_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2034_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2034_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0___boxed(lean_object* v_o_2052_, lean_object* v_key_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_o_2052_, v_key_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key(lean_object* v_e_2056_){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = ((lean_object*)(l_Lasm_Web_instFromJSEventInfo___lam__0___closed__1));
v___x_2059_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_key_spec__0(v_e_2056_, v___x_2058_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2072_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2072_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2072_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
if (lean_obj_tag(v_a_2060_) == 0)
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2064_);
v___x_2066_ = v___x_2062_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
else
{
lean_object* v_val_2068_; lean_object* v___x_2070_; 
v_val_2068_ = lean_ctor_get(v_a_2060_, 0);
lean_inc(v_val_2068_);
lean_dec_ref_known(v_a_2060_, 1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v_val_2068_);
v___x_2070_ = v___x_2062_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_val_2068_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
v_a_2073_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2059_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2059_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_key___boxed(lean_object* v_e_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lasm_Web_Event_key(v_e_2081_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue(lean_object* v_e_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lasm_Web_Raw_targetValue(v_e_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetValue___boxed(lean_object* v_e_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lasm_Web_Event_targetValue(v_e_2087_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked(lean_object* v_e_2090_){
_start:
{
lean_object* v___x_2092_; 
v___x_2092_ = l_Lasm_Web_Raw_targetChecked(v_e_2090_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetChecked___boxed(lean_object* v_e_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lasm_Web_Event_targetChecked(v_e_2093_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(lean_object* v_context_2097_, lean_object* v_d_2098_){
_start:
{
lean_object* v___y_2104_; lean_object* v___y_2105_; 
switch(lean_obj_tag(v_d_2098_))
{
case 1:
{
goto v___jp_2100_;
}
case 0:
{
goto v___jp_2100_;
}
default: 
{
if (lean_obj_tag(v_d_2098_) == 9)
{
lean_object* v_value_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v_value_2109_ = lean_ctor_get(v_d_2098_, 0);
lean_inc(v_value_2109_);
lean_dec_ref_known(v_d_2098_, 2);
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_value_2109_);
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
return v___x_2111_;
}
else
{
lean_object* v___x_2112_; lean_object* v_received_2114_; 
v___x_2112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2098_) == 9)
{
lean_object* v_value_2128_; lean_object* v_description_2129_; uint8_t v___x_2130_; 
v_value_2128_ = lean_ctor_get(v_d_2098_, 0);
v_description_2129_ = lean_ctor_get(v_d_2098_, 1);
v___x_2130_ = lean_string_dec_eq(v_description_2129_, v___x_2112_);
if (v___x_2130_ == 0)
{
goto v___jp_2126_;
}
else
{
uint32_t v___x_2131_; uint64_t v___x_2132_; lean_object* v___x_2133_; uint32_t v___x_2134_; lean_object* v___x_2135_; 
lean_inc_n(v_value_2128_, 2);
lean_dec_ref_known(v_d_2098_, 2);
v___x_2131_ = 206;
v___x_2132_ = 0ULL;
v___x_2133_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2133_, 0, v_value_2128_);
lean_ctor_set(v___x_2133_, 1, v___x_2112_);
v___x_2134_ = lasm_js_value_handle(v_value_2128_);
lean_dec(v_value_2128_);
v___x_2135_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2131_, v___x_2132_, v___x_2133_, v___x_2134_);
lean_dec_ref_known(v___x_2133_, 2);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; uint8_t v___x_2137_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2135_, 1);
v___x_2137_ = lean_string_validate_utf8(v_a_2136_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
lean_dec(v_a_2136_);
v___x_2138_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_2139_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2138_);
v_received_2114_ = v___x_2139_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_string_from_utf8_unchecked(v_a_2136_);
v_received_2114_ = v___x_2140_;
goto v___jp_2113_;
}
}
else
{
lean_object* v___x_2141_; 
lean_dec_ref_known(v___x_2135_, 1);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_2114_ = v___x_2141_;
goto v___jp_2113_;
}
}
}
else
{
goto v___jp_2126_;
}
v___jp_2113_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2115_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_2116_ = lean_string_append(v___x_2115_, v_context_2097_);
v___x_2117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_2118_ = lean_string_append(v___x_2116_, v___x_2117_);
v___x_2119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___closed__0));
v___x_2120_ = lean_string_append(v___x_2118_, v___x_2119_);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2122_ = lean_string_append(v___x_2120_, v___x_2121_);
v___x_2123_ = lean_string_append(v___x_2122_, v_received_2114_);
lean_dec_ref(v_received_2114_);
v___x_2124_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_2124_ == 0)
{
lean_object* v___x_2125_; 
v___x_2125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_2104_ = v___x_2123_;
v___y_2105_ = v___x_2125_;
goto v___jp_2103_;
}
else
{
v___y_2104_ = v___x_2123_;
v___y_2105_ = v___x_2112_;
goto v___jp_2103_;
}
}
v___jp_2126_:
{
lean_object* v___x_2127_; 
v___x_2127_ = l_Lasm_JS_Data_describe(v_d_2098_);
v_received_2114_ = v___x_2127_;
goto v___jp_2113_;
}
}
}
}
v___jp_2100_:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = lean_box(0);
v___x_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
return v___x_2102_;
}
v___jp_2103_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2106_ = lean_string_append(v___y_2104_, v___y_2105_);
v___x_2107_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
v___x_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2142_, lean_object* v_d_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2142_, v_d_2143_);
lean_dec_ref(v_context_2142_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(lean_object* v_context_2146_, lean_object* v_bytes_2147_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Lasm_JS_Wire_decode(v_bytes_2147_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2151_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v___x_2151_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0_spec__1(v_context_2146_, v_a_2150_);
return v___x_2151_;
}
else
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
v_a_2152_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2149_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2149_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0___boxed(lean_object* v_context_2160_, lean_object* v_bytes_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v_context_2160_, v_bytes_2161_);
lean_dec_ref(v_bytes_2161_);
lean_dec_ref(v_context_2160_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(lean_object* v_o_2164_, lean_object* v_key_2165_){
_start:
{
uint32_t v___x_2167_; uint32_t v___x_2168_; uint64_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2167_ = 203;
v___x_2168_ = lasm_js_value_handle(v_o_2164_);
v___x_2169_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2165_);
v___x_2170_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2170_, 0, v_key_2165_);
v___x_2171_ = l_Lasm_JS_Wire_encode(v___x_2170_);
lean_dec_ref_known(v___x_2170_, 1);
v___x_2172_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2173_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_o_2164_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = lasm_js_call(v___x_2167_, v___x_2168_, v___x_2169_, v___x_2171_, v___x_2173_);
lean_dec_ref_known(v___x_2173_, 2);
lean_dec_ref(v___x_2171_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2176_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2177_ = l_String_quote(v_key_2165_);
v___x_2178_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
v___x_2179_ = lean_unsigned_to_nat(120u);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = l_Std_Format_pretty(v___x_2178_, v___x_2179_, v___x_2180_, v___x_2180_);
v___x_2182_ = lean_string_append(v___x_2176_, v___x_2181_);
lean_dec_ref(v___x_2181_);
v___x_2183_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0_spec__0(v___x_2182_, v_a_2175_);
lean_dec(v_a_2175_);
lean_dec_ref(v___x_2182_);
return v___x_2183_;
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec_ref(v_key_2165_);
v_a_2184_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2174_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2174_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0___boxed(lean_object* v_o_2192_, lean_object* v_key_2193_, lean_object* v_a_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_o_2192_, v_key_2193_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target(lean_object* v_e_2197_){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2199_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2200_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2197_, v___x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_target___boxed(lean_object* v_e_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lasm_Web_Event_target(v_e_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget(lean_object* v_e_2205_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = ((lean_object*)(l_Lasm_Web_Event_currentTarget___closed__0));
v___x_2208_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_target_spec__0(v_e_2205_, v___x_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_currentTarget___boxed(lean_object* v_e_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_Web_Event_currentTarget(v_e_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(lean_object* v_context_2213_, lean_object* v_d_2214_){
_start:
{
lean_object* v___y_2220_; lean_object* v___y_2221_; 
switch(lean_obj_tag(v_d_2214_))
{
case 1:
{
goto v___jp_2216_;
}
case 0:
{
goto v___jp_2216_;
}
default: 
{
if (lean_obj_tag(v_d_2214_) == 9)
{
lean_object* v_value_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v_value_2225_ = lean_ctor_get(v_d_2214_, 0);
lean_inc(v_value_2225_);
lean_dec_ref_known(v_d_2214_, 2);
v___x_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2226_, 0, v_value_2225_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
else
{
lean_object* v___x_2228_; lean_object* v_received_2230_; 
v___x_2228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_2214_) == 9)
{
lean_object* v_value_2244_; lean_object* v_description_2245_; uint8_t v___x_2246_; 
v_value_2244_ = lean_ctor_get(v_d_2214_, 0);
v_description_2245_ = lean_ctor_get(v_d_2214_, 1);
v___x_2246_ = lean_string_dec_eq(v_description_2245_, v___x_2228_);
if (v___x_2246_ == 0)
{
goto v___jp_2242_;
}
else
{
uint32_t v___x_2247_; uint64_t v___x_2248_; lean_object* v___x_2249_; uint32_t v___x_2250_; lean_object* v___x_2251_; 
lean_inc_n(v_value_2244_, 2);
lean_dec_ref_known(v_d_2214_, 2);
v___x_2247_ = 206;
v___x_2248_ = 0ULL;
v___x_2249_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2249_, 0, v_value_2244_);
lean_ctor_set(v___x_2249_, 1, v___x_2228_);
v___x_2250_ = lasm_js_value_handle(v_value_2244_);
lean_dec(v_value_2244_);
v___x_2251_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2247_, v___x_2248_, v___x_2249_, v___x_2250_);
lean_dec_ref_known(v___x_2249_, 2);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; uint8_t v___x_2253_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
v___x_2253_ = lean_string_validate_utf8(v_a_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec(v_a_2252_);
v___x_2254_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__11);
v___x_2255_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2254_);
v_received_2230_ = v___x_2255_;
goto v___jp_2229_;
}
else
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_string_from_utf8_unchecked(v_a_2252_);
v_received_2230_ = v___x_2256_;
goto v___jp_2229_;
}
}
else
{
lean_object* v___x_2257_; 
lean_dec_ref_known(v___x_2251_, 1);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__12));
v_received_2230_ = v___x_2257_;
goto v___jp_2229_;
}
}
}
else
{
goto v___jp_2242_;
}
v___jp_2229_:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__1));
v___x_2232_ = lean_string_append(v___x_2231_, v_context_2213_);
v___x_2233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__2));
v___x_2234_ = lean_string_append(v___x_2232_, v___x_2233_);
v___x_2235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___closed__0));
v___x_2236_ = lean_string_append(v___x_2234_, v___x_2235_);
v___x_2237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__4));
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
v___x_2239_ = lean_string_append(v___x_2238_, v_received_2230_);
lean_dec_ref(v_received_2230_);
v___x_2240_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__6);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__7));
v___y_2220_ = v___x_2239_;
v___y_2221_ = v___x_2241_;
goto v___jp_2219_;
}
else
{
v___y_2220_ = v___x_2239_;
v___y_2221_ = v___x_2228_;
goto v___jp_2219_;
}
}
v___jp_2242_:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Lasm_JS_Data_describe(v_d_2214_);
v_received_2230_ = v___x_2243_;
goto v___jp_2229_;
}
}
}
}
v___jp_2216_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = lean_box(0);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
return v___x_2218_;
}
v___jp_2219_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_string_append(v___y_2220_, v___y_2221_);
v___x_2223_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
v___x_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
return v___x_2224_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2258_, lean_object* v_d_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2258_, v_d_2259_);
lean_dec_ref(v_context_2258_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(lean_object* v_context_2262_, lean_object* v_bytes_2263_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lasm_JS_Wire_decode(v_bytes_2263_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2267_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2267_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0_spec__1(v_context_2262_, v_a_2266_);
return v___x_2267_;
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
v_a_2268_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2265_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2265_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0___boxed(lean_object* v_context_2276_, lean_object* v_bytes_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v_context_2276_, v_bytes_2277_);
lean_dec_ref(v_bytes_2277_);
lean_dec_ref(v_context_2276_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(lean_object* v_o_2280_, lean_object* v_key_2281_){
_start:
{
uint32_t v___x_2283_; uint32_t v___x_2284_; uint64_t v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2283_ = 203;
v___x_2284_ = lasm_js_value_handle(v_o_2280_);
v___x_2285_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0___closed__1);
lean_inc_ref(v_key_2281_);
v___x_2286_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_key_2281_);
v___x_2287_ = l_Lasm_JS_Wire_encode(v___x_2286_);
lean_dec_ref_known(v___x_2286_, 1);
v___x_2288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2289_, 0, v_o_2280_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = lasm_js_call(v___x_2283_, v___x_2284_, v___x_2285_, v___x_2287_, v___x_2289_);
lean_dec_ref_known(v___x_2289_, 2);
lean_dec_ref(v___x_2287_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v___x_2290_, 1);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2293_ = l_String_quote(v_key_2281_);
v___x_2294_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
v___x_2295_ = lean_unsigned_to_nat(120u);
v___x_2296_ = lean_unsigned_to_nat(0u);
v___x_2297_ = l_Std_Format_pretty(v___x_2294_, v___x_2295_, v___x_2296_, v___x_2296_);
v___x_2298_ = lean_string_append(v___x_2292_, v___x_2297_);
lean_dec_ref(v___x_2297_);
v___x_2299_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0_spec__0(v___x_2298_, v_a_2291_);
lean_dec(v_a_2291_);
lean_dec_ref(v___x_2298_);
return v___x_2299_;
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec_ref(v_key_2281_);
v_a_2300_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2290_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2290_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0___boxed(lean_object* v_o_2308_, lean_object* v_key_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_o_2308_, v_key_2309_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement(lean_object* v_e_2312_){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lasm_Web_Event_target___closed__0));
v___x_2315_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_targetElement_spec__0(v_e_2312_, v___x_2314_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_targetElement___boxed(lean_object* v_e_2316_, lean_object* v_a_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lasm_Web_Event_targetElement(v_e_2316_);
return v_res_2318_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0(uint8_t v_await_2319_, uint64_t v_extra_2320_){
_start:
{
uint64_t v___x_2321_; uint64_t v___y_2323_; 
v___x_2321_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
if (v_await_2319_ == 0)
{
uint64_t v___x_2326_; 
v___x_2326_ = 0ULL;
v___y_2323_ = v___x_2326_;
goto v___jp_2322_;
}
else
{
uint64_t v___x_2327_; 
v___x_2327_ = 2ULL;
v___y_2323_ = v___x_2327_;
goto v___jp_2322_;
}
v___jp_2322_:
{
uint64_t v___x_2324_; uint64_t v___x_2325_; 
v___x_2324_ = lean_uint64_lor(v___x_2321_, v___y_2323_);
v___x_2325_ = lean_uint64_lor(v___x_2324_, v_extra_2320_);
return v___x_2325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0___boxed(lean_object* v_await_2328_, lean_object* v_extra_2329_){
_start:
{
uint8_t v_await_boxed_2330_; uint64_t v_extra_boxed_2331_; uint64_t v_res_2332_; lean_object* v_r_2333_; 
v_await_boxed_2330_ = lean_unbox(v_await_2328_);
v_extra_boxed_2331_ = lean_unbox_uint64(v_extra_2329_);
lean_dec_ref(v_extra_2329_);
v_res_2332_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0(v_await_boxed_2330_, v_extra_boxed_2331_);
v_r_2333_ = lean_box_uint64(v_res_2332_);
return v_r_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg(lean_object* v_bytes_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_Lasm_JS_Wire_decode(v_bytes_2334_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v___x_2337_; 
lean_dec_ref_known(v___x_2336_, 1);
v___x_2337_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0_spec__0___redArg();
return v___x_2337_;
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
v_a_2338_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2336_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2336_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_2346_, lean_object* v_a_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg(v_bytes_2346_);
lean_dec_ref(v_bytes_2346_);
return v_res_2348_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2349_; uint8_t v___x_2350_; uint64_t v___x_2351_; 
v___x_2349_ = 8ULL;
v___x_2350_ = 0;
v___x_2351_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__0(v___x_2350_, v___x_2349_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(lean_object* v_o_2352_, lean_object* v_name_2353_, lean_object* v_args_2354_){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; uint64_t v___x_2359_; lean_object* v___x_2360_; 
v___x_2356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_o_2352_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
v___x_2358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2358_, 0, v_name_2353_);
v___x_2359_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___closed__0);
v___x_2360_ = l_Lasm_JS_Value_invokeRaw(v___x_2357_, v___x_2358_, v_args_2354_, v___x_2359_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2362_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2360_, 1);
v___x_2362_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg(v_a_2361_);
lean_dec(v_a_2361_);
return v___x_2362_;
}
else
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
v_a_2363_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2360_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2360_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0___boxed(lean_object* v_o_2371_, lean_object* v_name_2372_, lean_object* v_args_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(v_o_2371_, v_name_2372_, v_args_2373_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault(lean_object* v_e_2377_){
_start:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2379_ = ((lean_object*)(l_Lasm_Web_Event_preventDefault___closed__0));
v___x_2380_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2381_ = lean_box(0);
v___x_2382_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(v_e_2377_, v___x_2379_, v___x_2380_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v___x_2382_, 0);
lean_dec(v_unused_2390_);
v___x_2384_ = v___x_2382_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_dec(v___x_2382_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2381_);
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2381_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
else
{
return v___x_2382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_preventDefault___boxed(lean_object* v_e_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Lasm_Web_Event_preventDefault(v_e_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1(lean_object* v_context_2394_, lean_object* v_bytes_2395_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___redArg(v_bytes_2395_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1___boxed(lean_object* v_context_2398_, lean_object* v_bytes_2399_, lean_object* v_a_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0_spec__1(v_context_2398_, v_bytes_2399_);
lean_dec_ref(v_bytes_2399_);
lean_dec_ref(v_context_2398_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation(lean_object* v_e_2403_){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2405_ = ((lean_object*)(l_Lasm_Web_Event_stopPropagation___closed__0));
v___x_2406_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2407_ = lean_box(0);
v___x_2408_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(v_e_2403_, v___x_2405_, v___x_2406_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v___x_2408_, 0);
lean_dec(v_unused_2416_);
v___x_2410_ = v___x_2408_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_dec(v___x_2408_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 0, v___x_2407_);
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2407_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
else
{
return v___x_2408_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopPropagation___boxed(lean_object* v_e_2417_, lean_object* v_a_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lasm_Web_Event_stopPropagation(v_e_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation(lean_object* v_e_2421_){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2423_ = ((lean_object*)(l_Lasm_Web_Event_stopImmediatePropagation___closed__0));
v___x_2424_ = ((lean_object*)(l_Lasm_Web_Raw_listen___closed__3));
v___x_2425_ = lean_box(0);
v___x_2426_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Event_preventDefault_spec__0(v_e_2421_, v___x_2423_, v___x_2424_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2433_ == 0)
{
lean_object* v_unused_2434_; 
v_unused_2434_ = lean_ctor_get(v___x_2426_, 0);
lean_dec(v_unused_2434_);
v___x_2428_ = v___x_2426_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_dec(v___x_2426_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2425_);
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2425_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
else
{
return v___x_2426_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_stopImmediatePropagation___boxed(lean_object* v_e_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lasm_Web_Event_stopImmediatePropagation(v_e_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(lean_object* v_context_2438_, lean_object* v_bytes_2439_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lasm_JS_Wire_decode(v_bytes_2439_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2443_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
lean_inc(v_a_2442_);
lean_dec_ref_known(v___x_2441_, 1);
v___x_2443_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_dispatchEvent_spec__0_spec__0(v_context_2438_, v_a_2442_);
return v___x_2443_;
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
v_a_2444_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2441_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2441_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0___boxed(lean_object* v_context_2452_, lean_object* v_bytes_2453_, lean_object* v_a_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v_context_2452_, v_bytes_2453_);
lean_dec_ref(v_bytes_2453_);
lean_dec_ref(v_context_2452_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(lean_object* v_o_2456_, lean_object* v_key_2457_){
_start:
{
uint32_t v___x_2459_; uint32_t v___x_2460_; uint64_t v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2459_ = 203;
v___x_2460_ = lasm_js_value_handle(v_o_2456_);
v___x_2461_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_unlisten_spec__0___closed__0);
lean_inc_ref(v_key_2457_);
v___x_2462_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2462_, 0, v_key_2457_);
v___x_2463_ = l_Lasm_JS_Wire_encode(v___x_2462_);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_listen_spec__0_spec__0___closed__0));
v___x_2465_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2465_, 0, v_o_2456_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = lasm_js_call(v___x_2459_, v___x_2460_, v___x_2461_, v___x_2463_, v___x_2465_);
lean_dec_ref_known(v___x_2465_, 2);
lean_dec_ref(v___x_2463_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v_a_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2466_, 1);
v___x_2468_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0___closed__0));
v___x_2469_ = l_String_quote(v_key_2457_);
v___x_2470_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
v___x_2471_ = lean_unsigned_to_nat(120u);
v___x_2472_ = lean_unsigned_to_nat(0u);
v___x_2473_ = l_Std_Format_pretty(v___x_2470_, v___x_2471_, v___x_2472_, v___x_2472_);
v___x_2474_ = lean_string_append(v___x_2468_, v___x_2473_);
lean_dec_ref(v___x_2473_);
v___x_2475_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0_spec__0(v___x_2474_, v_a_2467_);
lean_dec(v_a_2467_);
lean_dec_ref(v___x_2474_);
return v___x_2475_;
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
lean_dec_ref(v_key_2457_);
v_a_2476_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2466_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2466_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0___boxed(lean_object* v_o_2484_, lean_object* v_key_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_o_2484_, v_key_2485_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented(lean_object* v_e_2489_){
_start:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2491_ = ((lean_object*)(l_Lasm_Web_Event_defaultPrevented___closed__0));
v___x_2492_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_defaultPrevented_spec__0(v_e_2489_, v___x_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_defaultPrevented___boxed(lean_object* v_e_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lasm_Web_Event_defaultPrevented(v_e_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg(lean_object* v_e_2497_, lean_object* v_inst_2498_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_Lasm_Web_Event_detail___redArg___closed__0));
v___x_2501_ = l_Lasm_JS_Value_get___redArg(v_e_2497_, v___x_2500_, v_inst_2498_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___redArg___boxed(lean_object* v_e_2502_, lean_object* v_inst_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lasm_Web_Event_detail___redArg(v_e_2502_, v_inst_2503_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail(lean_object* v_e_2506_, lean_object* v_00_u03b1_2507_, lean_object* v_inst_2508_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lasm_Web_Event_detail___redArg(v_e_2506_, v_inst_2508_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_detail___boxed(lean_object* v_e_2511_, lean_object* v_00_u03b1_2512_, lean_object* v_inst_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lasm_Web_Event_detail(v_e_2511_, v_00_u03b1_2512_, v_inst_2513_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg(lean_object* v_e_2516_, lean_object* v_name_2517_, lean_object* v_inst_2518_){
_start:
{
lean_object* v___x_2520_; 
v___x_2520_ = l_Lasm_JS_Value_get___redArg(v_e_2516_, v_name_2517_, v_inst_2518_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___redArg___boxed(lean_object* v_e_2521_, lean_object* v_name_2522_, lean_object* v_inst_2523_, lean_object* v_a_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lasm_Web_Event_prop___redArg(v_e_2521_, v_name_2522_, v_inst_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop(lean_object* v_e_2526_, lean_object* v_name_2527_, lean_object* v_00_u03b1_2528_, lean_object* v_inst_2529_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Lasm_JS_Value_get___redArg(v_e_2526_, v_name_2527_, v_inst_2529_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___boxed(lean_object* v_e_2532_, lean_object* v_name_2533_, lean_object* v_00_u03b1_2534_, lean_object* v_inst_2535_, lean_object* v_a_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lasm_Web_Event_prop(v_e_2532_, v_name_2533_, v_00_u03b1_2534_, v_inst_2535_);
return v_res_2537_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Events(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Web_instFromJSEventInfo = _init_l_Lasm_Web_instFromJSEventInfo();
lean_mark_persistent(l_Lasm_Web_instFromJSEventInfo);
l_Lasm_Web_instInhabitedEventInfo_default = _init_l_Lasm_Web_instInhabitedEventInfo_default();
lean_mark_persistent(l_Lasm_Web_instInhabitedEventInfo_default);
l_Lasm_Web_instInhabitedEventInfo = _init_l_Lasm_Web_instInhabitedEventInfo();
lean_mark_persistent(l_Lasm_Web_instInhabitedEventInfo);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
