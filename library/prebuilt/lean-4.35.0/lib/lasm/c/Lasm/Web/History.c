// Lean compiler output
// Module: Lasm.Web.History
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types public import Lasm.Web.Events public import Lasm.Web.Dom
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
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_Web_window();
lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
static const lean_string_object l_Lasm_Web_Raw_location___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lasm_Web_Raw_location___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_location___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_location___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_location___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_location___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_location___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_location___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_location___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_location___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_location___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_location___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_location___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_location___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_location___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_location();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_location___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_Raw_history___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "history"};
static const lean_object* l_Lasm_Web_Raw_history___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_history___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_history___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_history___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_location___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_history___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_history___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_history___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_history();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_history___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "origin"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__3_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__4_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__5 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__5_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pathname"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__6 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__6_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "search"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__7 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__7_value;
static const lean_string_object l_Lasm_Web_instFromJSLocation___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hash"};
static const lean_object* l_Lasm_Web_instFromJSLocation___lam__0___closed__8 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSLocation___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSLocation___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSLocation___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSLocation___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSLocation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Location"};
static const lean_object* l_Lasm_Web_instFromJSLocation___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSLocation___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSLocation___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSLocation___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSLocation;
static const lean_string_object l_Lasm_Web_instInhabitedLocation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Web_instInhabitedLocation_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedLocation_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value)}};
static const lean_object* l_Lasm_Web_instInhabitedLocation_default___closed__1 = (const lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedLocation_default = (const lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedLocation = (const lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__1_value;
static const lean_string_object l_Lasm_Web_instReprLocation_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprLocation_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprLocation_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprLocation_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprLocation_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_Web_instReprLocation_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__12;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__5_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__15 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__15_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__18_value;
static const lean_string_object l_Lasm_Web_instReprLocation_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__19_value;
static lean_once_cell_t l_Lasm_Web_instReprLocation_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__20;
static lean_once_cell_t l_Lasm_Web_instReprLocation_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__21;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lasm_Web_instReprLocation_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__19_value)}};
static const lean_object* l_Lasm_Web_instReprLocation_repr___redArg___closed__23 = (const lean_object*)&l_Lasm_Web_instReprLocation_repr___redArg___closed__23_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprLocation_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprLocation___closed__0 = (const lean_object*)&l_Lasm_Web_instReprLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprLocation = (const lean_object*)&l_Lasm_Web_instReprLocation___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getFields"};
static const lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_Web_location___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*9, .m_other = 0, .m_tag = 246}, .m_size = 9, .m_capacity = 9, .m_data = {((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__0_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__1_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__2_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__3_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__4_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__5_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__6_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__7_value),((lean_object*)&l_Lasm_Web_instFromJSLocation___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_Web_location___closed__0 = (const lean_object*)&l_Lasm_Web_location___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_location();
LEAN_EXPORT lean_object* l_Lasm_Web_location___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_Location_assign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assign"};
static const lean_object* l_Lasm_Web_Location_assign___closed__0 = (const lean_object*)&l_Lasm_Web_Location_assign___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Location_replace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "replace"};
static const lean_object* l_Lasm_Web_Location_replace___closed__0 = (const lean_object*)&l_Lasm_Web_Location_replace___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Location_reload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reload"};
static const lean_object* l_Lasm_Web_Location_reload___closed__0 = (const lean_object*)&l_Lasm_Web_Location_reload___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload();
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_History_pushState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "pushState"};
static const lean_object* l_Lasm_Web_History_pushState___closed__0 = (const lean_object*)&l_Lasm_Web_History_pushState___closed__0_value;
static const lean_ctor_object l_Lasm_Web_History_pushState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instInhabitedLocation_default___closed__0_value)}};
static const lean_object* l_Lasm_Web_History_pushState___closed__1 = (const lean_object*)&l_Lasm_Web_History_pushState___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_History_replaceState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "replaceState"};
static const lean_object* l_Lasm_Web_History_replaceState___closed__0 = (const lean_object*)&l_Lasm_Web_History_replaceState___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_History_back___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "back"};
static const lean_object* l_Lasm_Web_History_back___closed__0 = (const lean_object*)&l_Lasm_Web_History_back___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_back();
LEAN_EXPORT lean_object* l_Lasm_Web_History_back___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_History_forward___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forward"};
static const lean_object* l_Lasm_Web_History_forward___closed__0 = (const lean_object*)&l_Lasm_Web_History_forward___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward();
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_History_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "go"};
static const lean_object* l_Lasm_Web_History_go___closed__0 = (const lean_object*)&l_Lasm_Web_History_go___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_go(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_History_go___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_History_state___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "state"};
static const lean_object* l_Lasm_Web_History_state___closed__0 = (const lean_object*)&l_Lasm_Web_History_state___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_state();
LEAN_EXPORT lean_object* l_Lasm_Web_History_state___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_History_length___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_Web_History_length___closed__0 = (const lean_object*)&l_Lasm_Web_History_length___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_History_length();
LEAN_EXPORT lean_object* l_Lasm_Web_History_length___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_onPopState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "popstate"};
static const lean_object* l_Lasm_Web_onPopState___closed__0 = (const lean_object*)&l_Lasm_Web_onPopState___closed__0_value;
static const lean_ctor_object l_Lasm_Web_onPopState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_onPopState___closed__1 = (const lean_object*)&l_Lasm_Web_onPopState___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_onHashChange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hashchange"};
static const lean_object* l_Lasm_Web_onHashChange___closed__0 = (const lean_object*)&l_Lasm_Web_onHashChange___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_location(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; uint8_t v___x_13_; lean_object* v___x_14_; 
v___x_11_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__2));
v___x_12_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_13_ = 1;
v___x_14_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v___x_11_, v___x_12_, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_location___boxed(lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lasm_Web_Raw_location();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_history(){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; 
v___x_24_ = ((lean_object*)(l_Lasm_Web_Raw_history___closed__1));
v___x_25_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_26_ = 1;
v___x_27_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_getPropValue_spec__0(v___x_24_, v___x_25_, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_history___boxed(lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_Web_Raw_history();
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSLocation___lam__0(lean_object* v___x_39_, lean_object* v_d_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__0));
lean_inc_ref(v___x_39_);
v___x_42_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_41_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_50_; 
lean_dec_ref(v___x_39_);
v_a_43_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_50_ == 0)
{
v___x_45_ = v___x_42_;
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_a_43_);
lean_dec(v___x_42_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_48_; 
if (v_isShared_46_ == 0)
{
v___x_48_ = v___x_45_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_a_43_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
else
{
lean_object* v_a_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_a_51_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_51_);
lean_dec_ref_known(v___x_42_, 1);
v___x_52_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__1));
lean_inc_ref(v___x_39_);
v___x_53_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_52_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_54_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_53_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_53_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_a_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_a_62_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_a_62_);
lean_dec_ref_known(v___x_53_, 1);
v___x_63_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__2));
lean_inc_ref(v___x_39_);
v___x_64_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_63_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v_a_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_a_73_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_64_, 1);
v___x_74_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__3));
lean_inc_ref(v___x_39_);
v___x_75_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_a_84_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_84_);
lean_dec_ref_known(v___x_75_, 1);
v___x_85_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__4));
lean_inc_ref(v___x_39_);
v___x_86_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_85_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_94_; 
lean_dec(v_a_84_);
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_87_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_94_ == 0)
{
v___x_89_ = v___x_86_;
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
else
{
lean_object* v_a_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_a_95_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_95_);
lean_dec_ref_known(v___x_86_, 1);
v___x_96_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__5));
lean_inc_ref(v___x_39_);
v___x_97_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_96_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
lean_dec(v_a_95_);
lean_dec(v_a_84_);
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
else
{
lean_object* v_a_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_a_106_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_97_, 1);
v___x_107_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__6));
lean_inc_ref(v___x_39_);
v___x_108_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec(v_a_106_);
lean_dec(v_a_95_);
lean_dec(v_a_84_);
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_a_117_ = lean_ctor_get(v___x_108_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_108_, 1);
v___x_118_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__7));
lean_inc_ref(v___x_39_);
v___x_119_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_118_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
lean_dec(v_a_117_);
lean_dec(v_a_106_);
lean_dec(v_a_95_);
lean_dec(v_a_84_);
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
lean_dec_ref(v___x_39_);
v_a_120_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_119_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_119_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_a_128_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_119_, 1);
v___x_129_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__8));
v___x_130_ = l_Lasm_JS_readField___redArg(v___x_39_, v_d_40_, v___x_129_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec(v_a_128_);
lean_dec(v_a_117_);
lean_dec(v_a_106_);
lean_dec(v_a_95_);
lean_dec(v_a_84_);
lean_dec(v_a_73_);
lean_dec(v_a_62_);
lean_dec(v_a_51_);
v_a_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_147_; 
v_a_139_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_147_ == 0)
{
v___x_141_ = v___x_130_;
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_130_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_147_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_143_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_143_, 0, v_a_51_);
lean_ctor_set(v___x_143_, 1, v_a_62_);
lean_ctor_set(v___x_143_, 2, v_a_73_);
lean_ctor_set(v___x_143_, 3, v_a_84_);
lean_ctor_set(v___x_143_, 4, v_a_95_);
lean_ctor_set(v___x_143_, 5, v_a_106_);
lean_ctor_set(v___x_143_, 6, v_a_117_);
lean_ctor_set(v___x_143_, 7, v_a_128_);
lean_ctor_set(v___x_143_, 8, v_a_139_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 0, v___x_143_);
v___x_145_ = v___x_141_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSLocation___lam__0___boxed(lean_object* v___x_148_, lean_object* v_d_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lasm_Web_instFromJSLocation___lam__0(v___x_148_, v_d_149_);
lean_dec(v_d_149_);
return v_res_150_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSLocation___closed__0(void){
_start:
{
lean_object* v___x_151_; lean_object* v___f_152_; 
v___x_151_ = l_Lasm_JS_instFromJSString;
v___f_152_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSLocation___lam__0___boxed), 2, 1);
lean_closure_set(v___f_152_, 0, v___x_151_);
return v___f_152_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSLocation___closed__2(void){
_start:
{
uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___f_156_; lean_object* v___x_157_; 
v___x_154_ = 0;
v___x_155_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___closed__1));
v___f_156_ = lean_obj_once(&l_Lasm_Web_instFromJSLocation___closed__0, &l_Lasm_Web_instFromJSLocation___closed__0_once, _init_l_Lasm_Web_instFromJSLocation___closed__0);
v___x_157_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_157_, 0, v___f_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*2, v___x_154_);
return v___x_157_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSLocation(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lasm_Web_instFromJSLocation___closed__2, &l_Lasm_Web_instFromJSLocation___closed__2_once, _init_l_Lasm_Web_instFromJSLocation___closed__2);
return v___x_158_;
}
}
static lean_object* _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(8u);
v___x_177_ = lean_nat_to_int(v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_unsigned_to_nat(10u);
v___x_184_ = lean_nat_to_int(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(12u);
v___x_188_ = lean_nat_to_int(v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__0));
v___x_203_ = lean_string_length(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_obj_once(&l_Lasm_Web_instReprLocation_repr___redArg___closed__20, &l_Lasm_Web_instReprLocation_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__20);
v___x_205_ = lean_nat_to_int(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr___redArg(lean_object* v_x_210_){
_start:
{
lean_object* v_href_211_; lean_object* v_origin_212_; lean_object* v_protocol_213_; lean_object* v_host_214_; lean_object* v_hostname_215_; lean_object* v_port_216_; lean_object* v_pathname_217_; lean_object* v_search_218_; lean_object* v_hash_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_href_211_ = lean_ctor_get(v_x_210_, 0);
lean_inc_ref(v_href_211_);
v_origin_212_ = lean_ctor_get(v_x_210_, 1);
lean_inc_ref(v_origin_212_);
v_protocol_213_ = lean_ctor_get(v_x_210_, 2);
lean_inc_ref(v_protocol_213_);
v_host_214_ = lean_ctor_get(v_x_210_, 3);
lean_inc_ref(v_host_214_);
v_hostname_215_ = lean_ctor_get(v_x_210_, 4);
lean_inc_ref(v_hostname_215_);
v_port_216_ = lean_ctor_get(v_x_210_, 5);
lean_inc_ref(v_port_216_);
v_pathname_217_ = lean_ctor_get(v_x_210_, 6);
lean_inc_ref(v_pathname_217_);
v_search_218_ = lean_ctor_get(v_x_210_, 7);
lean_inc_ref(v_search_218_);
v_hash_219_ = lean_ctor_get(v_x_210_, 8);
lean_inc_ref(v_hash_219_);
lean_dec_ref(v_x_210_);
v___x_220_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__4));
v___x_221_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__5));
v___x_222_ = lean_obj_once(&l_Lasm_Web_instReprLocation_repr___redArg___closed__6, &l_Lasm_Web_instReprLocation_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__6);
v___x_223_ = l_String_quote(v_href_211_);
v___x_224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
v___x_225_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_222_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = 0;
v___x_227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_227_, 0, v___x_225_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*1, v___x_226_);
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_221_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__8));
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_box(1);
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__9));
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_220_);
v___x_236_ = lean_obj_once(&l_Lasm_Web_instReprLocation_repr___redArg___closed__10, &l_Lasm_Web_instReprLocation_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__10);
v___x_237_ = l_String_quote(v_origin_212_);
v___x_238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
v___x_239_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_236_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_226_);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_235_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_229_);
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v___x_231_);
v___x_244_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__11));
v___x_245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_220_);
v___x_247_ = lean_obj_once(&l_Lasm_Web_instReprLocation_repr___redArg___closed__12, &l_Lasm_Web_instReprLocation_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__12);
v___x_248_ = l_String_quote(v_protocol_213_);
v___x_249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
v___x_250_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_247_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set_uint8(v___x_251_, sizeof(void*)*1, v___x_226_);
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_246_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___x_229_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_231_);
v___x_255_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__13));
v___x_256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_220_);
v___x_258_ = l_String_quote(v_host_214_);
v___x_259_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
v___x_260_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_222_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set_uint8(v___x_261_, sizeof(void*)*1, v___x_226_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_257_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_229_);
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___x_231_);
v___x_265_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__14));
v___x_266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v___x_220_);
v___x_268_ = l_String_quote(v_hostname_215_);
v___x_269_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_247_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set_uint8(v___x_271_, sizeof(void*)*1, v___x_226_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_267_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_229_);
v___x_274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v___x_231_);
v___x_275_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__15));
v___x_276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_220_);
v___x_278_ = l_String_quote(v_port_216_);
v___x_279_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
v___x_280_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_222_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*1, v___x_226_);
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_277_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_229_);
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___x_231_);
v___x_285_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__16));
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_220_);
v___x_288_ = l_String_quote(v_pathname_217_);
v___x_289_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
v___x_290_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_247_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set_uint8(v___x_291_, sizeof(void*)*1, v___x_226_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_287_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_229_);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_231_);
v___x_295_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__17));
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_220_);
v___x_298_ = l_String_quote(v_search_218_);
v___x_299_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
v___x_300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_236_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set_uint8(v___x_301_, sizeof(void*)*1, v___x_226_);
v___x_302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_297_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set(v___x_303_, 1, v___x_229_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_231_);
v___x_305_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__18));
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_304_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_220_);
v___x_308_ = l_String_quote(v_hash_219_);
v___x_309_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_222_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*1, v___x_226_);
v___x_312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_307_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = lean_obj_once(&l_Lasm_Web_instReprLocation_repr___redArg___closed__21, &l_Lasm_Web_instReprLocation_repr___redArg___closed__21_once, _init_l_Lasm_Web_instReprLocation_repr___redArg___closed__21);
v___x_314_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__22));
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v___x_312_);
v___x_316_ = ((lean_object*)(l_Lasm_Web_instReprLocation_repr___redArg___closed__23));
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_313_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set_uint8(v___x_319_, sizeof(void*)*1, v___x_226_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr(lean_object* v_x_320_, lean_object* v_prec_321_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lasm_Web_instReprLocation_repr___redArg(v_x_320_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprLocation_repr___boxed(lean_object* v_x_323_, lean_object* v_prec_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lasm_Web_instReprLocation_repr(v_x_323_, v_prec_324_);
lean_dec(v_prec_324_);
return v_res_325_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__7));
v___x_337_ = lean_unsigned_to_nat(46u);
v___x_338_ = lean_unsigned_to_nat(193u);
v___x_339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__6));
v___x_340_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__5));
v___x_341_ = l_mkPanicMessageWithDecl(v___x_340_, v___x_339_, v___x_338_, v___x_337_, v___x_336_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1(lean_object* v_context_343_, lean_object* v_d_344_){
_start:
{
lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_353_; lean_object* v_received_354_; lean_object* v___y_373_; lean_object* v_a_376_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__0));
lean_inc(v_d_344_);
v___x_401_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___x_401_, 1);
v_a_376_ = v_a_402_;
goto v___jp_375_;
}
else
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v_a_403_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_401_, 1);
v___x_404_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__1));
lean_inc(v_d_344_);
v___x_405_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; 
lean_dec(v_a_403_);
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
v_a_376_ = v_a_406_;
goto v___jp_375_;
}
else
{
lean_object* v_a_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v_a_407_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_405_, 1);
v___x_408_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__2));
lean_inc(v_d_344_);
v___x_409_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; 
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v_a_376_ = v_a_410_;
goto v___jp_375_;
}
else
{
lean_object* v_a_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_a_411_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_409_, 1);
v___x_412_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__3));
lean_inc(v_d_344_);
v___x_413_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; 
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v_a_376_ = v_a_414_;
goto v___jp_375_;
}
else
{
lean_object* v_a_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_a_415_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_413_, 1);
v___x_416_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__4));
lean_inc(v_d_344_);
v___x_417_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; 
lean_dec(v_a_415_);
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v_a_376_ = v_a_418_;
goto v___jp_375_;
}
else
{
lean_object* v_a_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v_a_419_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_417_, 1);
v___x_420_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__5));
lean_inc(v_d_344_);
v___x_421_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_420_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; 
lean_dec(v_a_419_);
lean_dec(v_a_415_);
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_421_, 1);
v_a_376_ = v_a_422_;
goto v___jp_375_;
}
else
{
lean_object* v_a_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_a_423_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_421_, 1);
v___x_424_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__6));
lean_inc(v_d_344_);
v___x_425_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; 
lean_dec(v_a_423_);
lean_dec(v_a_419_);
lean_dec(v_a_415_);
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v_a_376_ = v_a_426_;
goto v___jp_375_;
}
else
{
lean_object* v_a_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_a_427_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_425_, 1);
v___x_428_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__7));
lean_inc(v_d_344_);
v___x_429_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; 
lean_dec(v_a_427_);
lean_dec(v_a_423_);
lean_dec(v_a_419_);
lean_dec(v_a_415_);
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v_a_376_ = v_a_430_;
goto v___jp_375_;
}
else
{
lean_object* v_a_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_a_431_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_429_, 1);
v___x_432_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__8));
lean_inc(v_d_344_);
v___x_433_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_344_, v___x_432_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; 
lean_dec(v_a_431_);
lean_dec(v_a_427_);
lean_dec(v_a_423_);
lean_dec(v_a_419_);
lean_dec(v_a_415_);
lean_dec(v_a_411_);
lean_dec(v_a_407_);
lean_dec(v_a_403_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
v_a_376_ = v_a_434_;
goto v___jp_375_;
}
else
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
lean_dec(v_d_344_);
v_a_435_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_443_ == 0)
{
v___x_437_ = v___x_433_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_433_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_439_, 0, v_a_403_);
lean_ctor_set(v___x_439_, 1, v_a_407_);
lean_ctor_set(v___x_439_, 2, v_a_411_);
lean_ctor_set(v___x_439_, 3, v_a_415_);
lean_ctor_set(v___x_439_, 4, v_a_419_);
lean_ctor_set(v___x_439_, 5, v_a_423_);
lean_ctor_set(v___x_439_, 6, v_a_427_);
lean_ctor_set(v___x_439_, 7, v_a_431_);
lean_ctor_set(v___x_439_, 8, v_a_435_);
if (v_isShared_438_ == 0)
{
lean_ctor_set_tag(v___x_437_, 0);
lean_ctor_set(v___x_437_, 0, v___x_439_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
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
v___jp_346_:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_string_append(v___y_347_, v___y_348_);
lean_dec_ref(v___y_348_);
v___x_350_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
v___jp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_355_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0));
v___x_356_ = lean_string_append(v___x_355_, v_context_343_);
v___x_357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1));
v___x_358_ = lean_string_append(v___x_356_, v___x_357_);
v___x_359_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___closed__1));
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
v___x_361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2));
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
v___x_363_ = lean_string_append(v___x_362_, v_received_354_);
lean_dec_ref(v_received_354_);
v___x_364_ = lean_string_utf8_byte_size(v___y_353_);
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_nat_dec_eq(v___x_364_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_367_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3));
v___x_368_ = lean_string_append(v___x_367_, v___y_353_);
lean_dec_ref(v___y_353_);
v___x_369_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4));
v___x_370_ = lean_string_append(v___x_368_, v___x_369_);
v___y_347_ = v___x_363_;
v___y_348_ = v___x_370_;
goto v___jp_346_;
}
else
{
lean_object* v___x_371_; 
lean_dec_ref(v___y_353_);
v___x_371_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___y_347_ = v___x_363_;
v___y_348_ = v___x_371_;
goto v___jp_346_;
}
}
v___jp_372_:
{
lean_object* v___x_374_; 
v___x_374_ = l_Lasm_JS_Data_describe(v_d_344_);
v___y_353_ = v___y_373_;
v_received_354_ = v___x_374_;
goto v___jp_352_;
}
v___jp_375_:
{
if (lean_obj_tag(v_d_344_) == 9)
{
lean_object* v_value_377_; lean_object* v_description_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v_value_377_ = lean_ctor_get(v_d_344_, 0);
v_description_378_ = lean_ctor_get(v_d_344_, 1);
v___x_379_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_380_ = lean_string_dec_eq(v_description_378_, v___x_379_);
if (v___x_380_ == 0)
{
v___y_373_ = v_a_376_;
goto v___jp_372_;
}
else
{
lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_397_; 
lean_inc(v_value_377_);
v_isSharedCheck_397_ = !lean_is_exclusive(v_d_344_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; lean_object* v_unused_399_; 
v_unused_398_ = lean_ctor_get(v_d_344_, 1);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_d_344_, 0);
lean_dec(v_unused_399_);
v___x_382_ = v_d_344_;
v_isShared_383_ = v_isSharedCheck_397_;
goto v_resetjp_381_;
}
else
{
lean_dec(v_d_344_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_397_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
uint32_t v___x_384_; uint64_t v___x_385_; lean_object* v___x_387_; 
v___x_384_ = 206;
v___x_385_ = 0ULL;
lean_inc(v_value_377_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v___x_379_);
v___x_387_ = v___x_382_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_value_377_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_379_);
v___x_387_ = v_reuseFailAlloc_396_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
uint32_t v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lasm_js_value_handle(v_value_377_);
lean_dec(v_value_377_);
v___x_389_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_384_, v___x_385_, v___x_387_, v___x_388_);
lean_dec_ref(v___x_387_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; uint8_t v___x_391_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_389_, 1);
v___x_391_ = lean_string_validate_utf8(v_a_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec(v_a_390_);
v___x_392_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8);
v___x_393_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_392_);
v___y_353_ = v_a_376_;
v_received_354_ = v___x_393_;
goto v___jp_352_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = lean_string_from_utf8_unchecked(v_a_390_);
v___y_353_ = v_a_376_;
v_received_354_ = v___x_394_;
goto v___jp_352_;
}
}
else
{
lean_object* v___x_395_; 
lean_dec_ref_known(v___x_389_, 1);
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9));
v___y_353_ = v_a_376_;
v_received_354_ = v___x_395_;
goto v___jp_352_;
}
}
}
}
}
else
{
v___y_373_ = v_a_376_;
goto v___jp_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___boxed(lean_object* v_context_444_, lean_object* v_d_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1(v_context_444_, v_d_445_);
lean_dec_ref(v_context_444_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0(lean_object* v_context_448_, lean_object* v_bytes_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_449_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v___x_453_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc(v_a_452_);
lean_dec_ref_known(v___x_451_, 1);
v___x_453_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1(v_context_448_, v_a_452_);
return v___x_453_;
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
v_a_454_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_451_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_451_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0___boxed(lean_object* v_context_462_, lean_object* v_bytes_463_, lean_object* v_a_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0(v_context_462_, v_bytes_463_);
lean_dec_ref(v_bytes_463_);
lean_dec_ref(v_context_462_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(lean_object* v_o_467_, lean_object* v_keys_468_){
_start:
{
size_t v_sz_470_; size_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_sz_470_ = lean_array_size(v_keys_468_);
v___x_471_ = ((size_t)0ULL);
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_470_, v___x_471_, v_keys_468_);
v___x_473_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
v___x_474_ = l_Lasm_JS_Wire_encodeIO(v___x_473_);
lean_dec_ref_known(v___x_473_, 1);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; uint32_t v___x_476_; uint32_t v___x_477_; uint64_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = 203;
v___x_477_ = lasm_js_value_handle(v_o_467_);
v___x_478_ = 0ULL;
v___x_479_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_480_, 0, v_o_467_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = lasm_js_call(v___x_476_, v___x_477_, v___x_478_, v_a_475_, v___x_480_);
lean_dec_ref_known(v___x_480_, 2);
lean_dec(v_a_475_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 1);
v___x_483_ = ((lean_object*)(l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___closed__0));
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0(v___x_483_, v_a_482_);
lean_dec(v_a_482_);
return v___x_484_;
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
v_a_485_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_481_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_481_);
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
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_dec(v_o_467_);
v_a_493_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_474_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_474_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___boxed(lean_object* v_o_501_, lean_object* v_keys_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(v_o_501_, v_keys_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_location(){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
v___x_528_ = ((lean_object*)(l_Lasm_Web_location___closed__0));
v___x_529_ = l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(v_a_527_, v___x_528_);
return v___x_529_;
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
v_a_530_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_526_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_526_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_location___boxed(lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lasm_Web_location();
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign(lean_object* v_url_541_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
v___x_545_ = ((lean_object*)(l_Lasm_Web_Location_assign___closed__0));
v___x_546_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_546_, 0, v_url_541_);
v___x_547_ = lean_unsigned_to_nat(1u);
v___x_548_ = lean_mk_empty_array_with_capacity(v___x_547_);
v___x_549_ = lean_array_push(v___x_548_, v___x_546_);
v___x_550_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_544_, v___x_545_, v___x_549_);
return v___x_550_;
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_dec_ref(v_url_541_);
v_a_551_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_543_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_543_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign___boxed(lean_object* v_url_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lasm_Web_Location_assign(v_url_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace(lean_object* v_url_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_565_, 1);
v___x_567_ = ((lean_object*)(l_Lasm_Web_Location_replace___closed__0));
v___x_568_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_568_, 0, v_url_563_);
v___x_569_ = lean_unsigned_to_nat(1u);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_569_);
v___x_571_ = lean_array_push(v___x_570_, v___x_568_);
v___x_572_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_566_, v___x_567_, v___x_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec_ref(v_url_563_);
v_a_573_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_565_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_565_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace___boxed(lean_object* v_url_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lasm_Web_Location_replace(v_url_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload(){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = ((lean_object*)(l_Lasm_Web_Location_reload___closed__0));
v___x_589_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_590_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_587_, v___x_588_, v___x_589_);
return v___x_590_;
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
v_a_591_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_586_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_586_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload___boxed(lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_Web_Location_reload();
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(lean_object* v_o_601_, lean_object* v_key_602_, lean_object* v_x_603_){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v_payload_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_605_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_605_, 0, v_key_602_);
v___x_606_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_606_, 0, v_x_603_);
v___x_607_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
lean_inc(v_o_601_);
v___x_608_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_608_, 0, v_o_601_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = lean_unsigned_to_nat(3u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
lean_inc_ref(v___x_605_);
v___x_611_ = lean_array_push(v___x_610_, v___x_605_);
lean_inc_ref(v___x_606_);
v___x_612_ = lean_array_push(v___x_611_, v___x_606_);
v___x_613_ = lean_array_push(v___x_612_, v___x_608_);
v_payload_614_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_614_, 0, v___x_613_);
v___x_615_ = lean_unsigned_to_nat(2u);
v___x_616_ = lean_mk_empty_array_with_capacity(v___x_615_);
v___x_617_ = lean_array_push(v___x_616_, v___x_605_);
v___x_618_ = lean_array_push(v___x_617_, v___x_606_);
v___x_619_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
v___x_620_ = l_Lasm_JS_Wire_encodeIO(v___x_619_);
lean_dec_ref_known(v___x_619_, 1);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; uint32_t v___x_622_; uint32_t v___x_623_; uint64_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = 204;
v___x_623_ = lasm_js_value_handle(v_o_601_);
lean_dec(v_o_601_);
v___x_624_ = 0ULL;
v___x_625_ = lean_box(0);
v___x_626_ = lasm_js_call(v___x_622_, v___x_623_, v___x_624_, v_a_621_, v_payload_614_);
lean_dec_ref_known(v_payload_614_, 1);
lean_dec(v_a_621_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v___x_626_, 0);
lean_dec(v_unused_634_);
v___x_628_ = v___x_626_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_dec(v___x_626_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_625_);
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_625_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_626_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_626_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec_ref_known(v_payload_614_, 1);
lean_dec(v_o_601_);
v_a_643_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_620_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_620_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0___boxed(lean_object* v_o_651_, lean_object* v_key_652_, lean_object* v_x_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(v_o_651_, v_key_652_, v_x_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash(lean_object* v_hash_656_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__8));
v___x_661_ = l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(v_a_659_, v___x_660_, v_hash_656_);
return v___x_661_;
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v_hash_656_);
v_a_662_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_658_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_658_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash___boxed(lean_object* v_hash_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_Web_Location_setHash(v_hash_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState(lean_object* v_url_676_, lean_object* v_state_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
lean_dec_ref_known(v___x_679_, 1);
v___x_681_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__0));
v___x_682_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__1));
v___x_683_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_683_, 0, v_url_676_);
v___x_684_ = lean_unsigned_to_nat(3u);
v___x_685_ = lean_mk_empty_array_with_capacity(v___x_684_);
v___x_686_ = lean_array_push(v___x_685_, v_state_677_);
v___x_687_ = lean_array_push(v___x_686_, v___x_682_);
v___x_688_ = lean_array_push(v___x_687_, v___x_683_);
v___x_689_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_680_, v___x_681_, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec(v_state_677_);
lean_dec_ref(v_url_676_);
v_a_690_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_679_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_679_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState___boxed(lean_object* v_url_698_, lean_object* v_state_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lasm_Web_History_pushState(v_url_698_, v_state_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState(lean_object* v_url_703_, lean_object* v_state_704_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_706_, 1);
v___x_708_ = ((lean_object*)(l_Lasm_Web_History_replaceState___closed__0));
v___x_709_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__1));
v___x_710_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_710_, 0, v_url_703_);
v___x_711_ = lean_unsigned_to_nat(3u);
v___x_712_ = lean_mk_empty_array_with_capacity(v___x_711_);
v___x_713_ = lean_array_push(v___x_712_, v_state_704_);
v___x_714_ = lean_array_push(v___x_713_, v___x_709_);
v___x_715_ = lean_array_push(v___x_714_, v___x_710_);
v___x_716_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_707_, v___x_708_, v___x_715_);
return v___x_716_;
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec(v_state_704_);
lean_dec_ref(v_url_703_);
v_a_717_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_706_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_706_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState___boxed(lean_object* v_url_725_, lean_object* v_state_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lasm_Web_History_replaceState(v_url_725_, v_state_726_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_back(){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = ((lean_object*)(l_Lasm_Web_History_back___closed__0));
v___x_734_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_735_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_732_, v___x_733_, v___x_734_);
return v___x_735_;
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
v_a_736_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_731_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_731_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_back___boxed(lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lasm_Web_History_back();
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward(){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = ((lean_object*)(l_Lasm_Web_History_forward___closed__0));
v___x_751_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_752_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_749_, v___x_750_, v___x_751_);
return v___x_752_;
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
v_a_753_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_748_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_748_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
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
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward___boxed(lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lasm_Web_History_forward();
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_go(lean_object* v_delta_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___y_770_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = ((lean_object*)(l_Lasm_Web_History_go___closed__0));
v___x_775_ = lean_nat_abs(v_delta_764_);
v___x_776_ = lean_cstr_to_nat("9007199254740991");
v___x_777_ = lean_nat_dec_le(v___x_775_, v___x_776_);
lean_dec(v___x_775_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; 
v___x_778_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_778_, 0, v_delta_764_);
v___y_770_ = v___x_778_;
goto v___jp_769_;
}
else
{
double v___x_779_; lean_object* v___x_780_; 
v___x_779_ = l_Float_ofInt(v_delta_764_);
lean_dec(v_delta_764_);
v___x_780_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_780_, 0, v___x_779_);
v___y_770_ = v___x_780_;
goto v___jp_769_;
}
v___jp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_mk_empty_array_with_capacity(v___x_771_);
v___x_773_ = lean_array_push(v___x_772_, v___y_770_);
v___x_774_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_767_, v___x_768_, v___x_773_);
return v___x_774_;
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec(v_delta_764_);
v_a_781_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_766_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_766_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_go___boxed(lean_object* v_delta_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_Web_History_go(v_delta_789_);
return v_res_791_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0(void){
_start:
{
uint8_t v___x_792_; uint64_t v___x_793_; 
v___x_792_ = 0;
v___x_793_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(lean_object* v_o_794_, lean_object* v_key_795_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_797_, 0, v_key_795_);
v___x_798_ = l_Lasm_JS_Wire_encodeIO(v___x_797_);
lean_dec_ref_known(v___x_797_, 1);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; uint32_t v___x_800_; uint32_t v___x_801_; uint64_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_798_, 1);
v___x_800_ = 203;
v___x_801_ = lasm_js_value_handle(v_o_794_);
v___x_802_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0);
v___x_803_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_804_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_804_, 0, v_o_794_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = lasm_js_call(v___x_800_, v___x_801_, v___x_802_, v_a_799_, v___x_804_);
lean_dec_ref_known(v___x_804_, 2);
lean_dec(v_a_799_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_807_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_805_, 1);
v___x_807_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_806_);
lean_dec(v_a_806_);
return v___x_807_;
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_a_808_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_805_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_805_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec(v_o_794_);
v_a_816_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_798_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_798_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___boxed(lean_object* v_o_824_, lean_object* v_key_825_, lean_object* v_a_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_o_824_, v_key_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_state(){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
v___x_832_ = ((lean_object*)(l_Lasm_Web_History_state___closed__0));
v___x_833_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_a_831_, v___x_832_);
return v___x_833_;
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
v_a_834_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_830_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_830_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_state___boxed(lean_object* v_a_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lasm_Web_History_state();
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg(lean_object* v_bytes_844_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_844_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg(v_bytes_847_);
lean_dec_ref(v_bytes_847_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0(lean_object* v_context_850_, lean_object* v_bytes_851_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_851_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___boxed(lean_object* v_context_854_, lean_object* v_bytes_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0(v_context_854_, v_bytes_855_);
lean_dec_ref(v_bytes_855_);
lean_dec_ref(v_context_854_);
return v_res_857_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_unsigned_to_nat(0u);
v___x_860_ = lean_nat_to_int(v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(lean_object* v_context_863_, lean_object* v_d_864_){
_start:
{
lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_873_; lean_object* v_received_874_; lean_object* v___y_893_; lean_object* v_a_896_; lean_object* v_a_921_; 
switch(lean_obj_tag(v_d_864_))
{
case 3:
{
double v_n_927_; lean_object* v___x_928_; 
v_n_927_ = lean_ctor_get_float(v_d_864_, 0);
v___x_928_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v___x_929_; 
v___x_929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__3));
v_a_896_ = v___x_929_;
goto v___jp_895_;
}
else
{
lean_object* v_val_930_; 
v_val_930_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_val_930_);
lean_dec_ref_known(v___x_928_, 1);
v_a_921_ = v_val_930_;
goto v___jp_920_;
}
}
case 5:
{
lean_object* v_i_931_; 
v_i_931_ = lean_ctor_get(v_d_864_, 0);
lean_inc(v_i_931_);
v_a_921_ = v_i_931_;
goto v___jp_920_;
}
default: 
{
lean_object* v___x_932_; 
v___x_932_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v_a_896_ = v___x_932_;
goto v___jp_895_;
}
}
v___jp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = lean_string_append(v___y_867_, v___y_868_);
lean_dec_ref(v___y_868_);
v___x_870_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
v___jp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0));
v___x_876_ = lean_string_append(v___x_875_, v_context_863_);
v___x_877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___x_879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__0));
v___x_880_ = lean_string_append(v___x_878_, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2));
v___x_882_ = lean_string_append(v___x_880_, v___x_881_);
v___x_883_ = lean_string_append(v___x_882_, v_received_874_);
lean_dec_ref(v_received_874_);
v___x_884_ = lean_string_utf8_byte_size(v___y_873_);
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_nat_dec_eq(v___x_884_, v___x_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3));
v___x_888_ = lean_string_append(v___x_887_, v___y_873_);
v___x_889_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4));
v___x_890_ = lean_string_append(v___x_888_, v___x_889_);
v___y_867_ = v___x_883_;
v___y_868_ = v___x_890_;
goto v___jp_866_;
}
else
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___y_867_ = v___x_883_;
v___y_868_ = v___x_891_;
goto v___jp_866_;
}
}
v___jp_892_:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lasm_JS_Data_describe(v_d_864_);
v___y_873_ = v___y_893_;
v_received_874_ = v___x_894_;
goto v___jp_872_;
}
v___jp_895_:
{
if (lean_obj_tag(v_d_864_) == 9)
{
lean_object* v_value_897_; lean_object* v_description_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v_value_897_ = lean_ctor_get(v_d_864_, 0);
v_description_898_ = lean_ctor_get(v_d_864_, 1);
v___x_899_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_900_ = lean_string_dec_eq(v_description_898_, v___x_899_);
if (v___x_900_ == 0)
{
v___y_893_ = v_a_896_;
goto v___jp_892_;
}
else
{
lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_917_; 
lean_inc(v_value_897_);
v_isSharedCheck_917_ = !lean_is_exclusive(v_d_864_);
if (v_isSharedCheck_917_ == 0)
{
lean_object* v_unused_918_; lean_object* v_unused_919_; 
v_unused_918_ = lean_ctor_get(v_d_864_, 1);
lean_dec(v_unused_918_);
v_unused_919_ = lean_ctor_get(v_d_864_, 0);
lean_dec(v_unused_919_);
v___x_902_ = v_d_864_;
v_isShared_903_ = v_isSharedCheck_917_;
goto v_resetjp_901_;
}
else
{
lean_dec(v_d_864_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_917_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
uint32_t v___x_904_; uint64_t v___x_905_; lean_object* v___x_907_; 
v___x_904_ = 206;
v___x_905_ = 0ULL;
lean_inc(v_value_897_);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 1, v___x_899_);
v___x_907_ = v___x_902_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_value_897_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_899_);
v___x_907_ = v_reuseFailAlloc_916_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
uint32_t v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lasm_js_value_handle(v_value_897_);
lean_dec(v_value_897_);
v___x_909_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_904_, v___x_905_, v___x_907_, v___x_908_);
lean_dec_ref(v___x_907_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; uint8_t v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = lean_string_validate_utf8(v_a_910_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; lean_object* v___x_913_; 
lean_dec(v_a_910_);
v___x_912_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8);
v___x_913_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_912_);
v___y_873_ = v_a_896_;
v_received_874_ = v___x_913_;
goto v___jp_872_;
}
else
{
lean_object* v___x_914_; 
v___x_914_ = lean_string_from_utf8_unchecked(v_a_910_);
v___y_873_ = v_a_896_;
v_received_874_ = v___x_914_;
goto v___jp_872_;
}
}
else
{
lean_object* v___x_915_; 
lean_dec_ref_known(v___x_909_, 1);
v___x_915_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9));
v___y_873_ = v_a_896_;
v_received_874_ = v___x_915_;
goto v___jp_872_;
}
}
}
}
}
else
{
v___y_893_ = v_a_896_;
goto v___jp_892_;
}
}
v___jp_920_:
{
lean_object* v___x_922_; uint8_t v___x_923_; 
v___x_922_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1);
v___x_923_ = lean_int_dec_le(v___x_922_, v_a_921_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
lean_dec(v_a_921_);
v___x_924_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__2));
v_a_896_ = v___x_924_;
goto v___jp_895_;
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v_d_864_);
v___x_925_ = l_Int_toNat(v_a_921_);
lean_dec(v_a_921_);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___boxed(lean_object* v_context_933_, lean_object* v_d_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(v_context_933_, v_d_934_);
lean_dec_ref(v_context_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(lean_object* v_context_937_, lean_object* v_bytes_938_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_938_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_942_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(v_context_937_, v_a_941_);
return v___x_942_;
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_940_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_940_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0___boxed(lean_object* v_context_951_, lean_object* v_bytes_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(v_context_951_, v_bytes_952_);
lean_dec_ref(v_bytes_952_);
lean_dec_ref(v_context_951_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(lean_object* v_o_956_, lean_object* v_key_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_inc_ref(v_key_957_);
v___x_959_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_959_, 0, v_key_957_);
v___x_960_ = l_Lasm_JS_Wire_encodeIO(v___x_959_);
lean_dec_ref_known(v___x_959_, 1);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; uint32_t v___x_962_; uint32_t v___x_963_; uint64_t v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v___x_962_ = 203;
v___x_963_ = lasm_js_value_handle(v_o_956_);
v___x_964_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0);
v___x_965_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_966_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_966_, 0, v_o_956_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lasm_js_call(v___x_962_, v___x_963_, v___x_964_, v_a_961_, v___x_966_);
lean_dec_ref_known(v___x_966_, 2);
lean_dec(v_a_961_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___closed__0));
v___x_970_ = l_String_quote(v_key_957_);
v___x_971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
v___x_972_ = lean_unsigned_to_nat(120u);
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = l_Std_Format_pretty(v___x_971_, v___x_972_, v___x_973_, v___x_973_);
v___x_975_ = lean_string_append(v___x_969_, v___x_974_);
lean_dec_ref(v___x_974_);
v___x_976_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(v___x_975_, v_a_968_);
lean_dec(v_a_968_);
lean_dec_ref(v___x_975_);
return v___x_976_;
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec_ref(v_key_957_);
v_a_977_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_967_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_967_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec_ref(v_key_957_);
lean_dec(v_o_956_);
v_a_985_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_960_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_960_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___boxed(lean_object* v_o_993_, lean_object* v_key_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(v_o_993_, v_key_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_length(){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = ((lean_object*)(l_Lasm_Web_History_length___closed__0));
v___x_1002_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(v_a_1000_, v___x_1001_);
return v___x_1002_;
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
v_a_1003_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_999_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_999_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_length___boxed(lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lasm_Web_History_length();
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0(lean_object* v_e_1013_, lean_object* v_name_1014_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_e_1013_, v_name_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0___boxed(lean_object* v_e_1017_, lean_object* v_name_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0(v_e_1017_, v_name_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0(lean_object* v_f_1021_, lean_object* v_e_1022_){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lasm_Web_History_state___closed__0));
v___x_1025_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_e_1022_, v___x_1024_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
v___x_1027_ = lean_apply_2(v_f_1021_, v_a_1026_, lean_box(0));
return v___x_1027_;
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec_ref(v_f_1021_);
v_a_1028_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1025_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1025_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0___boxed(lean_object* v_f_1036_, lean_object* v_e_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_Web_onPopState___lam__0(v_f_1036_, v_e_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState(lean_object* v_f_1043_){
_start:
{
lean_object* v___f_1045_; lean_object* v___x_1046_; 
v___f_1045_ = lean_alloc_closure((void*)(l_Lasm_Web_onPopState___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1045_, 0, v_f_1043_);
v___x_1046_ = l_Lasm_Web_window();
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref_known(v___x_1046_, 1);
v___x_1048_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__0));
v___x_1049_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__1));
v___x_1050_ = l_Lasm_Web_EventTarget_addEventListener(v_a_1047_, v___x_1048_, v___f_1045_, v___x_1049_);
return v___x_1050_;
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec_ref(v___f_1045_);
v_a_1051_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1046_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1046_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
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
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___boxed(lean_object* v_f_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lasm_Web_onPopState(v_f_1059_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0(lean_object* v_f_1062_, lean_object* v_x_1063_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lasm_Web_location();
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v_hash_1067_; lean_object* v___x_1068_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v_hash_1067_ = lean_ctor_get(v_a_1066_, 8);
lean_inc_ref(v_hash_1067_);
lean_dec(v_a_1066_);
v___x_1068_ = lean_apply_2(v_f_1062_, v_hash_1067_, lean_box(0));
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v_f_1062_);
v_a_1069_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1065_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1065_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0___boxed(lean_object* v_f_1077_, lean_object* v_x_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lasm_Web_onHashChange___lam__0(v_f_1077_, v_x_1078_);
lean_dec(v_x_1078_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange(lean_object* v_f_1082_){
_start:
{
lean_object* v___f_1084_; lean_object* v___x_1085_; 
v___f_1084_ = lean_alloc_closure((void*)(l_Lasm_Web_onHashChange___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1084_, 0, v_f_1082_);
v___x_1085_ = l_Lasm_Web_window();
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = ((lean_object*)(l_Lasm_Web_onHashChange___closed__0));
v___x_1088_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__1));
v___x_1089_ = l_Lasm_Web_EventTarget_addEventListener(v_a_1086_, v___x_1087_, v___f_1084_, v___x_1088_);
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v___f_1084_);
v_a_1090_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1085_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1085_);
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
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___boxed(lean_object* v_f_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lasm_Web_onHashChange(v_f_1098_);
return v_res_1100_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
lean_object* initialize_Lasm_Web_Events(uint8_t builtin);
lean_object* initialize_Lasm_Web_Dom(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_History(uint8_t builtin) {
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
res = initialize_Lasm_Web_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Web_instFromJSLocation = _init_l_Lasm_Web_instFromJSLocation();
lean_mark_persistent(l_Lasm_Web_instFromJSLocation);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
