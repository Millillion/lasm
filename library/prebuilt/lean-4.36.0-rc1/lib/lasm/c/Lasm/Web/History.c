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
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
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
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
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
v___x_451_ = l_Lasm_JS_Wire_decode(v_bytes_449_);
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
uint32_t v___x_470_; uint32_t v___x_471_; uint64_t v___x_472_; size_t v_sz_473_; size_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_470_ = 203;
v___x_471_ = lasm_js_value_handle(v_o_467_);
v___x_472_ = 0ULL;
v_sz_473_ = lean_array_size(v_keys_468_);
v___x_474_ = ((size_t)0ULL);
v___x_475_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_classAdd_spec__0(v_sz_473_, v___x_474_, v_keys_468_);
v___x_476_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
v___x_477_ = l_Lasm_JS_Wire_encode(v___x_476_);
v___x_478_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_479_, 0, v_o_467_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = lasm_js_call(v___x_470_, v___x_471_, v___x_472_, v___x_477_, v___x_479_);
lean_dec_ref_known(v___x_479_, 2);
lean_dec_ref(v___x_477_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = ((lean_object*)(l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___closed__0));
v___x_483_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0(v___x_482_, v_a_481_);
lean_dec(v_a_481_);
return v___x_483_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_a_484_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_480_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_480_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0___boxed(lean_object* v_o_492_, lean_object* v_keys_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(v_o_492_, v_keys_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_location(){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref_known(v___x_517_, 1);
v___x_519_ = ((lean_object*)(l_Lasm_Web_location___closed__0));
v___x_520_ = l_Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0(v_a_518_, v___x_519_);
return v___x_520_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_517_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_517_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_location___boxed(lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lasm_Web_location();
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign(lean_object* v_url_532_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_534_, 1);
v___x_536_ = ((lean_object*)(l_Lasm_Web_Location_assign___closed__0));
v___x_537_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_537_, 0, v_url_532_);
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = lean_mk_empty_array_with_capacity(v___x_538_);
v___x_540_ = lean_array_push(v___x_539_, v___x_537_);
v___x_541_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_535_, v___x_536_, v___x_540_);
return v___x_541_;
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec_ref(v_url_532_);
v_a_542_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_534_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_534_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_assign___boxed(lean_object* v_url_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lasm_Web_Location_assign(v_url_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace(lean_object* v_url_554_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_556_, 1);
v___x_558_ = ((lean_object*)(l_Lasm_Web_Location_replace___closed__0));
v___x_559_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_559_, 0, v_url_554_);
v___x_560_ = lean_unsigned_to_nat(1u);
v___x_561_ = lean_mk_empty_array_with_capacity(v___x_560_);
v___x_562_ = lean_array_push(v___x_561_, v___x_559_);
v___x_563_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_557_, v___x_558_, v___x_562_);
return v___x_563_;
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec_ref(v_url_554_);
v_a_564_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_556_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_556_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_replace___boxed(lean_object* v_url_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lasm_Web_Location_replace(v_url_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload(){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = ((lean_object*)(l_Lasm_Web_Location_reload___closed__0));
v___x_580_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_581_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_578_, v___x_579_, v___x_580_);
return v___x_581_;
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
v_a_582_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_577_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_577_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_reload___boxed(lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_Web_Location_reload();
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(lean_object* v_o_592_, lean_object* v_key_593_, lean_object* v_x_594_){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v_payload_605_; uint32_t v___x_606_; uint32_t v___x_607_; uint64_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_596_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_596_, 0, v_key_593_);
v___x_597_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_597_, 0, v_x_594_);
v___x_598_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
lean_inc(v_o_592_);
v___x_599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_599_, 0, v_o_592_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_unsigned_to_nat(3u);
v___x_601_ = lean_mk_empty_array_with_capacity(v___x_600_);
lean_inc_ref(v___x_596_);
v___x_602_ = lean_array_push(v___x_601_, v___x_596_);
lean_inc_ref(v___x_597_);
v___x_603_ = lean_array_push(v___x_602_, v___x_597_);
v___x_604_ = lean_array_push(v___x_603_, v___x_599_);
v_payload_605_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_605_, 0, v___x_604_);
v___x_606_ = 204;
v___x_607_ = lasm_js_value_handle(v_o_592_);
lean_dec(v_o_592_);
v___x_608_ = 0ULL;
v___x_609_ = lean_unsigned_to_nat(2u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
v___x_611_ = lean_array_push(v___x_610_, v___x_596_);
v___x_612_ = lean_array_push(v___x_611_, v___x_597_);
v___x_613_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
v___x_614_ = l_Lasm_JS_Wire_encode(v___x_613_);
v___x_615_ = lean_box(0);
v___x_616_ = lasm_js_call(v___x_606_, v___x_607_, v___x_608_, v___x_614_, v_payload_605_);
lean_dec_ref_known(v_payload_605_, 1);
lean_dec_ref(v___x_614_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_623_ == 0)
{
lean_object* v_unused_624_; 
v_unused_624_ = lean_ctor_get(v___x_616_, 0);
lean_dec(v_unused_624_);
v___x_618_ = v___x_616_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_dec(v___x_616_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_615_);
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_615_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
v_a_625_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_616_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_616_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0___boxed(lean_object* v_o_633_, lean_object* v_key_634_, lean_object* v_x_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(v_o_633_, v_key_634_, v_x_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash(lean_object* v_hash_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lasm_Web_Raw_location();
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = ((lean_object*)(l_Lasm_Web_instFromJSLocation___lam__0___closed__8));
v___x_643_ = l_Lasm_JS_Value_set___at___00Lasm_Web_Location_setHash_spec__0(v_a_641_, v___x_642_, v_hash_638_);
return v___x_643_;
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec_ref(v_hash_638_);
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
}
LEAN_EXPORT lean_object* l_Lasm_Web_Location_setHash___boxed(lean_object* v_hash_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_Web_Location_setHash(v_hash_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState(lean_object* v_url_658_, lean_object* v_state_659_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v___x_661_, 1);
v___x_663_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__0));
v___x_664_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__1));
v___x_665_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_665_, 0, v_url_658_);
v___x_666_ = lean_unsigned_to_nat(3u);
v___x_667_ = lean_mk_empty_array_with_capacity(v___x_666_);
v___x_668_ = lean_array_push(v___x_667_, v_state_659_);
v___x_669_ = lean_array_push(v___x_668_, v___x_664_);
v___x_670_ = lean_array_push(v___x_669_, v___x_665_);
v___x_671_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_662_, v___x_663_, v___x_670_);
return v___x_671_;
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec(v_state_659_);
lean_dec_ref(v_url_658_);
v_a_672_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_661_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_661_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_pushState___boxed(lean_object* v_url_680_, lean_object* v_state_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_Web_History_pushState(v_url_680_, v_state_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState(lean_object* v_url_685_, lean_object* v_state_686_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_688_, 1);
v___x_690_ = ((lean_object*)(l_Lasm_Web_History_replaceState___closed__0));
v___x_691_ = ((lean_object*)(l_Lasm_Web_History_pushState___closed__1));
v___x_692_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_692_, 0, v_url_685_);
v___x_693_ = lean_unsigned_to_nat(3u);
v___x_694_ = lean_mk_empty_array_with_capacity(v___x_693_);
v___x_695_ = lean_array_push(v___x_694_, v_state_686_);
v___x_696_ = lean_array_push(v___x_695_, v___x_691_);
v___x_697_ = lean_array_push(v___x_696_, v___x_692_);
v___x_698_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_689_, v___x_690_, v___x_697_);
return v___x_698_;
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_dec(v_state_686_);
lean_dec_ref(v_url_685_);
v_a_699_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_688_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_688_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_replaceState___boxed(lean_object* v_url_707_, lean_object* v_state_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lasm_Web_History_replaceState(v_url_707_, v_state_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_back(){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref_known(v___x_713_, 1);
v___x_715_ = ((lean_object*)(l_Lasm_Web_History_back___closed__0));
v___x_716_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_717_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_714_, v___x_715_, v___x_716_);
return v___x_717_;
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
v_a_718_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_713_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_713_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_back___boxed(lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_Web_History_back();
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward(){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = ((lean_object*)(l_Lasm_Web_History_forward___closed__0));
v___x_733_ = ((lean_object*)(l_Lasm_Web_Raw_location___closed__3));
v___x_734_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_731_, v___x_732_, v___x_733_);
return v___x_734_;
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
v_a_735_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_730_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_730_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_forward___boxed(lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lasm_Web_History_forward();
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_go(lean_object* v_delta_746_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___y_752_; lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = ((lean_object*)(l_Lasm_Web_History_go___closed__0));
v___x_757_ = lean_nat_abs(v_delta_746_);
v___x_758_ = lean_cstr_to_nat("9007199254740991");
v___x_759_ = lean_nat_dec_le(v___x_757_, v___x_758_);
lean_dec(v___x_757_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_760_, 0, v_delta_746_);
v___y_752_ = v___x_760_;
goto v___jp_751_;
}
else
{
double v___x_761_; lean_object* v___x_762_; 
v___x_761_ = l_Float_ofInt(v_delta_746_);
lean_dec(v_delta_746_);
v___x_762_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_762_, 0, v___x_761_);
v___y_752_ = v___x_762_;
goto v___jp_751_;
}
v___jp_751_:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_mk_empty_array_with_capacity(v___x_753_);
v___x_755_ = lean_array_push(v___x_754_, v___y_752_);
v___x_756_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_749_, v___x_750_, v___x_755_);
return v___x_756_;
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_delta_746_);
v_a_763_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_748_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_748_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_go___boxed(lean_object* v_delta_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lasm_Web_History_go(v_delta_771_);
return v_res_773_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0(void){
_start:
{
uint8_t v___x_774_; uint64_t v___x_775_; 
v___x_774_ = 0;
v___x_775_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(lean_object* v_o_776_, lean_object* v_key_777_){
_start:
{
uint32_t v___x_779_; uint32_t v___x_780_; uint64_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_779_ = 203;
v___x_780_ = lasm_js_value_handle(v_o_776_);
v___x_781_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0);
v___x_782_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_782_, 0, v_key_777_);
v___x_783_ = l_Lasm_JS_Wire_encode(v___x_782_);
v___x_784_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_785_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_785_, 0, v_o_776_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = lasm_js_call(v___x_779_, v___x_780_, v___x_781_, v___x_783_, v___x_785_);
lean_dec_ref_known(v___x_785_, 2);
lean_dec_ref(v___x_783_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_788_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_786_, 1);
v___x_788_ = l_Lasm_JS_Wire_decode(v_a_787_);
lean_dec(v_a_787_);
return v___x_788_;
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
v_a_789_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_786_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_786_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___boxed(lean_object* v_o_797_, lean_object* v_key_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_o_797_, v_key_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_state(){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_803_, 1);
v___x_805_ = ((lean_object*)(l_Lasm_Web_History_state___closed__0));
v___x_806_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_a_804_, v___x_805_);
return v___x_806_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_803_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_803_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_state___boxed(lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_Web_History_state();
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg(lean_object* v_bytes_817_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_Lasm_JS_Wire_decode(v_bytes_817_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_820_, lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___redArg(v_bytes_820_);
lean_dec_ref(v_bytes_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0(lean_object* v_context_823_, lean_object* v_bytes_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lasm_JS_Wire_decode(v_bytes_824_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0___boxed(lean_object* v_context_827_, lean_object* v_bytes_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0_spec__0(v_context_827_, v_bytes_828_);
lean_dec_ref(v_bytes_828_);
lean_dec_ref(v_context_827_);
return v_res_830_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_nat_to_int(v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(lean_object* v_context_836_, lean_object* v_d_837_){
_start:
{
lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_846_; lean_object* v_received_847_; lean_object* v___y_866_; lean_object* v_a_869_; lean_object* v_a_894_; 
switch(lean_obj_tag(v_d_837_))
{
case 3:
{
double v_n_900_; lean_object* v___x_901_; 
v_n_900_ = lean_ctor_get_float(v_d_837_, 0);
v___x_901_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_902_; 
v___x_902_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__3));
v_a_869_ = v___x_902_;
goto v___jp_868_;
}
else
{
lean_object* v_val_903_; 
v_val_903_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_val_903_);
lean_dec_ref_known(v___x_901_, 1);
v_a_894_ = v_val_903_;
goto v___jp_893_;
}
}
case 5:
{
lean_object* v_i_904_; 
v_i_904_ = lean_ctor_get(v_d_837_, 0);
lean_inc(v_i_904_);
v_a_894_ = v_i_904_;
goto v___jp_893_;
}
default: 
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v_a_869_ = v___x_905_;
goto v___jp_868_;
}
}
v___jp_839_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_string_append(v___y_840_, v___y_841_);
lean_dec_ref(v___y_841_);
v___x_843_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
v___x_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
v___jp_845_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__0));
v___x_849_ = lean_string_append(v___x_848_, v_context_836_);
v___x_850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__1));
v___x_851_ = lean_string_append(v___x_849_, v___x_850_);
v___x_852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__0));
v___x_853_ = lean_string_append(v___x_851_, v___x_852_);
v___x_854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__2));
v___x_855_ = lean_string_append(v___x_853_, v___x_854_);
v___x_856_ = lean_string_append(v___x_855_, v_received_847_);
lean_dec_ref(v_received_847_);
v___x_857_ = lean_string_utf8_byte_size(v___y_846_);
v___x_858_ = lean_unsigned_to_nat(0u);
v___x_859_ = lean_nat_dec_eq(v___x_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_860_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__3));
v___x_861_ = lean_string_append(v___x_860_, v___y_846_);
v___x_862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__4));
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
v___y_840_ = v___x_856_;
v___y_841_ = v___x_863_;
goto v___jp_839_;
}
else
{
lean_object* v___x_864_; 
v___x_864_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___y_840_ = v___x_856_;
v___y_841_ = v___x_864_;
goto v___jp_839_;
}
}
v___jp_865_:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lasm_JS_Data_describe(v_d_837_);
v___y_846_ = v___y_866_;
v_received_847_ = v___x_867_;
goto v___jp_845_;
}
v___jp_868_:
{
if (lean_obj_tag(v_d_837_) == 9)
{
lean_object* v_value_870_; lean_object* v_description_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v_value_870_ = lean_ctor_get(v_d_837_, 0);
v_description_871_ = lean_ctor_get(v_d_837_, 1);
v___x_872_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_873_ = lean_string_dec_eq(v_description_871_, v___x_872_);
if (v___x_873_ == 0)
{
v___y_866_ = v_a_869_;
goto v___jp_865_;
}
else
{
lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_890_; 
lean_inc(v_value_870_);
v_isSharedCheck_890_ = !lean_is_exclusive(v_d_837_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; lean_object* v_unused_892_; 
v_unused_891_ = lean_ctor_get(v_d_837_, 1);
lean_dec(v_unused_891_);
v_unused_892_ = lean_ctor_get(v_d_837_, 0);
lean_dec(v_unused_892_);
v___x_875_ = v_d_837_;
v_isShared_876_ = v_isSharedCheck_890_;
goto v_resetjp_874_;
}
else
{
lean_dec(v_d_837_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_890_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
uint32_t v___x_877_; uint64_t v___x_878_; lean_object* v___x_880_; 
v___x_877_ = 206;
v___x_878_ = 0ULL;
lean_inc(v_value_870_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 1, v___x_872_);
v___x_880_ = v___x_875_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_value_870_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v___x_872_);
v___x_880_ = v_reuseFailAlloc_889_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
uint32_t v___x_881_; lean_object* v___x_882_; 
v___x_881_ = lasm_js_value_handle(v_value_870_);
lean_dec(v_value_870_);
v___x_882_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_877_, v___x_878_, v___x_880_, v___x_881_);
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
v___x_885_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__8);
v___x_886_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_885_);
v___y_846_ = v_a_869_;
v_received_847_ = v___x_886_;
goto v___jp_845_;
}
else
{
lean_object* v___x_887_; 
v___x_887_ = lean_string_from_utf8_unchecked(v_a_883_);
v___y_846_ = v_a_869_;
v_received_847_ = v___x_887_;
goto v___jp_845_;
}
}
else
{
lean_object* v___x_888_; 
lean_dec_ref_known(v___x_882_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Web_location_spec__0_spec__0_spec__1___closed__9));
v___y_846_ = v_a_869_;
v_received_847_ = v___x_888_;
goto v___jp_845_;
}
}
}
}
}
else
{
v___y_866_ = v_a_869_;
goto v___jp_865_;
}
}
v___jp_893_:
{
lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_895_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__1);
v___x_896_ = lean_int_dec_le(v___x_895_, v_a_894_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
lean_dec(v_a_894_);
v___x_897_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___closed__2));
v_a_869_ = v___x_897_;
goto v___jp_868_;
}
else
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec(v_d_837_);
v___x_898_ = l_Int_toNat(v_a_894_);
lean_dec(v_a_894_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1___boxed(lean_object* v_context_906_, lean_object* v_d_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(v_context_906_, v_d_907_);
lean_dec_ref(v_context_906_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(lean_object* v_context_910_, lean_object* v_bytes_911_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lasm_JS_Wire_decode(v_bytes_911_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_915_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_913_, 1);
v___x_915_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0_spec__1(v_context_910_, v_a_914_);
return v___x_915_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_913_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0___boxed(lean_object* v_context_924_, lean_object* v_bytes_925_, lean_object* v_a_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(v_context_924_, v_bytes_925_);
lean_dec_ref(v_bytes_925_);
lean_dec_ref(v_context_924_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(lean_object* v_o_929_, lean_object* v_key_930_){
_start:
{
uint32_t v___x_932_; uint32_t v___x_933_; uint64_t v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_932_ = 203;
v___x_933_ = lasm_js_value_handle(v_o_929_);
v___x_934_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0___closed__0);
lean_inc_ref(v_key_930_);
v___x_935_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_935_, 0, v_key_930_);
v___x_936_ = l_Lasm_JS_Wire_encode(v___x_935_);
v___x_937_ = ((lean_object*)(l_Lasm_Web_instInhabitedLocation_default___closed__0));
v___x_938_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_938_, 0, v_o_929_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = lasm_js_call(v___x_932_, v___x_933_, v___x_934_, v___x_936_, v___x_938_);
lean_dec_ref_known(v___x_938_, 2);
lean_dec_ref(v___x_936_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v___x_941_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___closed__0));
v___x_942_ = l_String_quote(v_key_930_);
v___x_943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
v___x_944_ = lean_unsigned_to_nat(120u);
v___x_945_ = lean_unsigned_to_nat(0u);
v___x_946_ = l_Std_Format_pretty(v___x_943_, v___x_944_, v___x_945_, v___x_945_);
v___x_947_ = lean_string_append(v___x_941_, v___x_946_);
lean_dec_ref(v___x_946_);
v___x_948_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0_spec__0(v___x_947_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v___x_947_);
return v___x_948_;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v_key_930_);
v_a_949_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_939_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_939_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0___boxed(lean_object* v_o_957_, lean_object* v_key_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(v_o_957_, v_key_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_length(){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_Lasm_Web_Raw_history();
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_963_, 1);
v___x_965_ = ((lean_object*)(l_Lasm_Web_History_length___closed__0));
v___x_966_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_length_spec__0(v_a_964_, v___x_965_);
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_963_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_963_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_History_length___boxed(lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_Web_History_length();
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0(lean_object* v_e_977_, lean_object* v_name_978_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_e_977_, v_name_978_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0___boxed(lean_object* v_e_981_, lean_object* v_name_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lasm_Web_Event_prop___at___00Lasm_Web_onPopState_spec__0(v_e_981_, v_name_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0(lean_object* v_f_985_, lean_object* v_e_986_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lasm_Web_History_state___closed__0));
v___x_989_ = l_Lasm_JS_Value_get___at___00Lasm_Web_History_state_spec__0(v_e_986_, v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = lean_apply_2(v_f_985_, v_a_990_, lean_box(0));
return v___x_991_;
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref(v_f_985_);
v_a_992_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_989_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_989_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___lam__0___boxed(lean_object* v_f_1000_, lean_object* v_e_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lasm_Web_onPopState___lam__0(v_f_1000_, v_e_1001_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState(lean_object* v_f_1007_){
_start:
{
lean_object* v___f_1009_; lean_object* v___x_1010_; 
v___f_1009_ = lean_alloc_closure((void*)(l_Lasm_Web_onPopState___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1009_, 0, v_f_1007_);
v___x_1010_ = l_Lasm_Web_window();
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__0));
v___x_1013_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__1));
v___x_1014_ = l_Lasm_Web_EventTarget_addEventListener(v_a_1011_, v___x_1012_, v___f_1009_, v___x_1013_);
return v___x_1014_;
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref(v___f_1009_);
v_a_1015_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1010_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1010_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onPopState___boxed(lean_object* v_f_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lasm_Web_onPopState(v_f_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0(lean_object* v_f_1026_, lean_object* v_x_1027_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = l_Lasm_Web_location();
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v_hash_1031_; lean_object* v___x_1032_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v_hash_1031_ = lean_ctor_get(v_a_1030_, 8);
lean_inc_ref(v_hash_1031_);
lean_dec(v_a_1030_);
v___x_1032_ = lean_apply_2(v_f_1026_, v_hash_1031_, lean_box(0));
return v___x_1032_;
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec_ref(v_f_1026_);
v_a_1033_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1029_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1029_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___lam__0___boxed(lean_object* v_f_1041_, lean_object* v_x_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lasm_Web_onHashChange___lam__0(v_f_1041_, v_x_1042_);
lean_dec(v_x_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange(lean_object* v_f_1046_){
_start:
{
lean_object* v___f_1048_; lean_object* v___x_1049_; 
v___f_1048_ = lean_alloc_closure((void*)(l_Lasm_Web_onHashChange___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1048_, 0, v_f_1046_);
v___x_1049_ = l_Lasm_Web_window();
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v___x_1051_ = ((lean_object*)(l_Lasm_Web_onHashChange___closed__0));
v___x_1052_ = ((lean_object*)(l_Lasm_Web_onPopState___closed__1));
v___x_1053_ = l_Lasm_Web_EventTarget_addEventListener(v_a_1050_, v___x_1051_, v___f_1048_, v___x_1052_);
return v___x_1053_;
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_dec_ref(v___f_1048_);
v_a_1054_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1049_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1049_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_onHashChange___boxed(lean_object* v_f_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lasm_Web_onHashChange(v_f_1062_);
return v_res_1064_;
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
