// Lean compiler output
// Module: Lasm.Web.WebSocket
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types public import Lasm.Web.Events
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instInhabitedMessage_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Web_instInhabitedMessage_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedMessage_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__0_value)}};
static const lean_object* l_Lasm_Web_instInhabitedMessage_default___closed__1 = (const lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedMessage_default = (const lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedMessage = (const lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSMessage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expected text or bytes"};
static const lean_object* l_Lasm_Web_instFromJSMessage___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSMessage___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instFromJSMessage___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSMessage___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instFromJSMessage___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSMessage___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSMessage___lam__0(lean_object*);
static const lean_closure_object l_Lasm_Web_instFromJSMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instFromJSMessage___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instFromJSMessage___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSMessage___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Message"};
static const lean_object* l_Lasm_Web_instFromJSMessage___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSMessage___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instFromJSMessage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSMessage___closed__0_value),((lean_object*)&l_Lasm_Web_instFromJSMessage___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instFromJSMessage___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSMessage___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instFromJSMessage = (const lean_object*)&l_Lasm_Web_instFromJSMessage___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reason"};
static const lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "wasClean"};
static const lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSCloseInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSCloseInfo___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSCloseInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.CloseInfo"};
static const lean_object* l_Lasm_Web_instFromJSCloseInfo___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSCloseInfo___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSCloseInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSCloseInfo___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo;
static const lean_ctor_object l_Lasm_Web_instInhabitedCloseInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instInhabitedMessage_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instInhabitedCloseInfo_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedCloseInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedCloseInfo_default = (const lean_object*)&l_Lasm_Web_instInhabitedCloseInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedCloseInfo = (const lean_object*)&l_Lasm_Web_instInhabitedCloseInfo_default___closed__0_value;
static const lean_string_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12;
static const lean_string_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__13_value;
static lean_once_cell_t l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14;
static lean_once_cell_t l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprCloseInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprCloseInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprCloseInfo___closed__0 = (const lean_object*)&l_Lasm_Web_instReprCloseInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprCloseInfo = (const lean_object*)&l_Lasm_Web_instReprCloseInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_Web_instBEqReadyState_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_instBEqReadyState_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instBEqReadyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instBEqReadyState_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instBEqReadyState___closed__0 = (const lean_object*)&l_Lasm_Web_instBEqReadyState___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instBEqReadyState = (const lean_object*)&l_Lasm_Web_instBEqReadyState___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_Web_instInhabitedReadyState_default;
LEAN_EXPORT uint8_t l_Lasm_Web_instInhabitedReadyState;
static const lean_string_object l_Lasm_Web_instReprReadyState_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.Web.ReadyState.connecting"};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__0 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprReadyState_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__1 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__1_value;
static const lean_string_object l_Lasm_Web_instReprReadyState_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.Web.ReadyState.open"};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__2 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__2_value;
static const lean_ctor_object l_Lasm_Web_instReprReadyState_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__3 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__3_value;
static const lean_string_object l_Lasm_Web_instReprReadyState_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.Web.ReadyState.closing"};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__4 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprReadyState_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__5 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__5_value;
static const lean_string_object l_Lasm_Web_instReprReadyState_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.Web.ReadyState.closed"};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__6 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__6_value;
static const lean_ctor_object l_Lasm_Web_instReprReadyState_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__6_value)}};
static const lean_object* l_Lasm_Web_instReprReadyState_repr___closed__7 = (const lean_object*)&l_Lasm_Web_instReprReadyState_repr___closed__7_value;
static lean_once_cell_t l_Lasm_Web_instReprReadyState_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprReadyState_repr___closed__8;
static lean_once_cell_t l_Lasm_Web_instReprReadyState_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprReadyState_repr___closed__9;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprReadyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprReadyState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprReadyState___closed__0 = (const lean_object*)&l_Lasm_Web_instReprReadyState___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprReadyState = (const lean_object*)&l_Lasm_Web_instReprReadyState___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.WebSocket"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_webSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "webSocket"};
static const lean_object* l_Lasm_Web_Raw_webSocket___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_webSocket___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_webSocket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_webSocket___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_webSocket___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_webSocket___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_webSocket___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_webSocket___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_webSocket___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_webSocket___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_webSocket___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_webSocket___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_webSocket___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_webSocket___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " (expected text or bytes)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_messageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "messageData"};
static const lean_object* l_Lasm_Web_Raw_messageData___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_messageData___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_messageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_messageData___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_webSocket___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_messageData___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_messageData___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_messageData___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__9_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__9_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__10 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_closeInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "closeInfo"};
static const lean_object* l_Lasm_Web_Raw_closeInfo___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_closeInfo___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_closeInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_closeInfo___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_webSocket___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_closeInfo___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_closeInfo___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_closeInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_connect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arraybuffer"};
static const lean_object* l_Lasm_Web_WebSocket_connect___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_connect___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_Web_WebSocket_send___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_send___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_Web_WebSocket_close___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_close___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_readyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "readyState"};
static const lean_object* l_Lasm_Web_WebSocket_readyState___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_readyState___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_bufferedAmount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "bufferedAmount"};
static const lean_object* l_Lasm_Web_WebSocket_bufferedAmount___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_bufferedAmount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_protocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_Web_WebSocket_protocol___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_protocol___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_onOpen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lasm_Web_WebSocket_onOpen___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_onOpen___closed__0_value;
static const lean_ctor_object l_Lasm_Web_WebSocket_onOpen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_WebSocket_onOpen___closed__1 = (const lean_object*)&l_Lasm_Web_WebSocket_onOpen___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_onMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_Web_WebSocket_onMessage___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_onMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_WebSocket_onError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_Web_WebSocket_onError___closed__0 = (const lean_object*)&l_Lasm_Web_WebSocket_onError___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_Web_Message_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_text_7_; lean_object* v___x_8_; 
v_text_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_text_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_text_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lasm_Web_Message_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim___redArg(lean_object* v_t_21_, lean_object* v_text_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_21_, v_text_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_text_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_25_, v_text_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim___redArg(lean_object* v_t_29_, lean_object* v_bytes_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_29_, v_bytes_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_bytes_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_33_, v_bytes_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSMessage___lam__0(lean_object* v_x_45_){
_start:
{
switch(lean_obj_tag(v_x_45_))
{
case 4:
{
lean_object* v_s_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_54_; 
v_s_46_ = lean_ctor_get(v_x_45_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v_x_45_);
if (v_isSharedCheck_54_ == 0)
{
v___x_48_ = v_x_45_;
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_s_46_);
lean_dec(v_x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set_tag(v___x_48_, 0);
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_s_46_);
v___x_51_ = v_reuseFailAlloc_53_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; 
v___x_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
}
case 6:
{
lean_object* v_b_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_63_; 
v_b_55_ = lean_ctor_get(v_x_45_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_45_);
if (v_isSharedCheck_63_ == 0)
{
v___x_57_ = v_x_45_;
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_b_55_);
lean_dec(v_x_45_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_63_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
lean_ctor_set_tag(v___x_57_, 1);
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_b_55_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
}
default: 
{
lean_object* v___x_64_; 
lean_dec(v_x_45_);
v___x_64_ = ((lean_object*)(l_Lasm_Web_instFromJSMessage___lam__0___closed__1));
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0(lean_object* v___x_75_, lean_object* v___x_76_, lean_object* v___x_77_, lean_object* v_d_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0));
v___x_80_ = l_Lasm_JS_readField___redArg(v___x_75_, v_d_78_, v___x_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec_ref(v___x_77_);
lean_dec_ref(v___x_76_);
v_a_81_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_80_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_80_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
else
{
lean_object* v_a_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_a_89_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_89_);
lean_dec_ref_known(v___x_80_, 1);
v___x_90_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1));
v___x_91_ = l_Lasm_JS_readField___redArg(v___x_76_, v_d_78_, v___x_90_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_a_89_);
lean_dec_ref(v___x_77_);
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
else
{
lean_object* v_a_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_a_100_ = lean_ctor_get(v___x_91_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_91_, 1);
v___x_101_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2));
v___x_102_ = l_Lasm_JS_readField___redArg(v___x_77_, v_d_78_, v___x_101_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
lean_dec(v_a_100_);
lean_dec(v_a_89_);
v_a_103_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_110_ == 0)
{
v___x_105_ = v___x_102_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_102_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_120_; 
v_a_111_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_120_ == 0)
{
v___x_113_ = v___x_102_;
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_102_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_120_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; uint8_t v___x_116_; lean_object* v___x_118_; 
v___x_115_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_115_, 0, v_a_89_);
lean_ctor_set(v___x_115_, 1, v_a_100_);
v___x_116_ = lean_unbox(v_a_111_);
lean_dec(v_a_111_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*2, v___x_116_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_115_);
v___x_118_ = v___x_113_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_115_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___boxed(lean_object* v___x_121_, lean_object* v___x_122_, lean_object* v___x_123_, lean_object* v_d_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lasm_Web_instFromJSCloseInfo___lam__0(v___x_121_, v___x_122_, v___x_123_, v_d_124_);
lean_dec(v_d_124_);
return v_res_125_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo___closed__0(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___f_129_; 
v___x_126_ = l_Lasm_JS_instFromJSBool;
v___x_127_ = l_Lasm_JS_instFromJSString;
v___x_128_ = l_Lasm_JS_instFromJSNat;
v___f_129_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___boxed), 4, 3);
lean_closure_set(v___f_129_, 0, v___x_128_);
lean_closure_set(v___f_129_, 1, v___x_127_);
lean_closure_set(v___f_129_, 2, v___x_126_);
return v___f_129_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo___closed__2(void){
_start:
{
uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___f_133_; lean_object* v___x_134_; 
v___x_131_ = 0;
v___x_132_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___closed__1));
v___f_133_ = lean_obj_once(&l_Lasm_Web_instFromJSCloseInfo___closed__0, &l_Lasm_Web_instFromJSCloseInfo___closed__0_once, _init_l_Lasm_Web_instFromJSCloseInfo___closed__0);
v___x_134_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_134_, 0, v___f_133_);
lean_ctor_set(v___x_134_, 1, v___x_132_);
lean_ctor_set_uint8(v___x_134_, sizeof(void*)*2, v___x_131_);
return v___x_134_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lasm_Web_instFromJSCloseInfo___closed__2, &l_Lasm_Web_instFromJSCloseInfo___closed__2_once, _init_l_Lasm_Web_instFromJSCloseInfo___closed__2);
return v___x_135_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(8u);
v___x_155_ = lean_nat_to_int(v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(10u);
v___x_162_ = lean_nat_to_int(v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(12u);
v___x_166_ = lean_nat_to_int(v___x_165_);
return v___x_166_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0));
v___x_169_ = lean_string_length(v___x_168_);
return v___x_169_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14);
v___x_171_ = lean_nat_to_int(v___x_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg(lean_object* v_x_176_){
_start:
{
lean_object* v_code_177_; lean_object* v_reason_178_; uint8_t v_wasClean_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v_code_177_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_code_177_);
v_reason_178_ = lean_ctor_get(v_x_176_, 1);
lean_inc_ref(v_reason_178_);
v_wasClean_179_ = lean_ctor_get_uint8(v_x_176_, sizeof(void*)*2);
lean_dec_ref(v_x_176_);
v___x_180_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4));
v___x_181_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__5));
v___x_182_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6);
v___x_183_ = l_Nat_reprFast(v_code_177_);
v___x_184_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
v___x_185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_182_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = 0;
v___x_187_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set_uint8(v___x_187_, sizeof(void*)*1, v___x_186_);
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_181_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__8));
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_box(1);
v___x_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__9));
v___x_194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v___x_180_);
v___x_196_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10);
v___x_197_ = l_String_quote(v_reason_178_);
v___x_198_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
v___x_199_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_196_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set_uint8(v___x_200_, sizeof(void*)*1, v___x_186_);
v___x_201_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_195_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___x_189_);
v___x_203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_191_);
v___x_204_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__11));
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_180_);
v___x_207_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12);
v___x_208_ = l_Bool_repr___redArg(v_wasClean_179_);
v___x_209_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set_uint8(v___x_210_, sizeof(void*)*1, v___x_186_);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_206_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15);
v___x_213_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__16));
v___x_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_211_);
v___x_215_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__17));
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_212_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*1, v___x_186_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr(lean_object* v_x_219_, lean_object* v_prec_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lasm_Web_instReprCloseInfo_repr___redArg(v_x_219_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___boxed(lean_object* v_x_222_, lean_object* v_prec_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lasm_Web_instReprCloseInfo_repr(v_x_222_, v_prec_223_);
lean_dec(v_prec_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___impl(uint8_t v_x_227_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(v_x_227_);
v___x_229_ = lean_obj_tag_nat(v___x_228_);
lean_dec(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___impl___boxed(lean_object* v_x_230_){
_start:
{
uint8_t v_x_4__boxed_231_; lean_object* v_res_232_; 
v_x_4__boxed_231_ = lean_unbox(v_x_230_);
v_res_232_ = l_Lasm_Web_ReadyState_ctorIdx___impl(v_x_4__boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg(lean_object* v_k_233_){
_start:
{
lean_inc(v_k_233_);
return v_k_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg___boxed(lean_object* v_k_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lasm_Web_ReadyState_ctorElim___redArg(v_k_234_);
lean_dec(v_k_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim(lean_object* v_motive_236_, lean_object* v_ctorIdx_237_, uint8_t v_t_238_, lean_object* v_h_239_, lean_object* v_k_240_){
_start:
{
lean_inc(v_k_240_);
return v_k_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___boxed(lean_object* v_motive_241_, lean_object* v_ctorIdx_242_, lean_object* v_t_243_, lean_object* v_h_244_, lean_object* v_k_245_){
_start:
{
uint8_t v_t_boxed_246_; lean_object* v_res_247_; 
v_t_boxed_246_ = lean_unbox(v_t_243_);
v_res_247_ = l_Lasm_Web_ReadyState_ctorElim(v_motive_241_, v_ctorIdx_242_, v_t_boxed_246_, v_h_244_, v_k_245_);
lean_dec(v_k_245_);
lean_dec(v_ctorIdx_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg(lean_object* v_connecting_248_){
_start:
{
lean_inc(v_connecting_248_);
return v_connecting_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg___boxed(lean_object* v_connecting_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lasm_Web_ReadyState_connecting_elim___redArg(v_connecting_249_);
lean_dec(v_connecting_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim(lean_object* v_motive_251_, uint8_t v_t_252_, lean_object* v_h_253_, lean_object* v_connecting_254_){
_start:
{
lean_inc(v_connecting_254_);
return v_connecting_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___boxed(lean_object* v_motive_255_, lean_object* v_t_256_, lean_object* v_h_257_, lean_object* v_connecting_258_){
_start:
{
uint8_t v_t_boxed_259_; lean_object* v_res_260_; 
v_t_boxed_259_ = lean_unbox(v_t_256_);
v_res_260_ = l_Lasm_Web_ReadyState_connecting_elim(v_motive_255_, v_t_boxed_259_, v_h_257_, v_connecting_258_);
lean_dec(v_connecting_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg(lean_object* v_open_261_){
_start:
{
lean_inc(v_open_261_);
return v_open_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg___boxed(lean_object* v_open_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lasm_Web_ReadyState_open_elim___redArg(v_open_262_);
lean_dec(v_open_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim(lean_object* v_motive_264_, uint8_t v_t_265_, lean_object* v_h_266_, lean_object* v_open_267_){
_start:
{
lean_inc(v_open_267_);
return v_open_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___boxed(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_open_271_){
_start:
{
uint8_t v_t_boxed_272_; lean_object* v_res_273_; 
v_t_boxed_272_ = lean_unbox(v_t_269_);
v_res_273_ = l_Lasm_Web_ReadyState_open_elim(v_motive_268_, v_t_boxed_272_, v_h_270_, v_open_271_);
lean_dec(v_open_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg(lean_object* v_closing_274_){
_start:
{
lean_inc(v_closing_274_);
return v_closing_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg___boxed(lean_object* v_closing_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lasm_Web_ReadyState_closing_elim___redArg(v_closing_275_);
lean_dec(v_closing_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim(lean_object* v_motive_277_, uint8_t v_t_278_, lean_object* v_h_279_, lean_object* v_closing_280_){
_start:
{
lean_inc(v_closing_280_);
return v_closing_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___boxed(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_closing_284_){
_start:
{
uint8_t v_t_boxed_285_; lean_object* v_res_286_; 
v_t_boxed_285_ = lean_unbox(v_t_282_);
v_res_286_ = l_Lasm_Web_ReadyState_closing_elim(v_motive_281_, v_t_boxed_285_, v_h_283_, v_closing_284_);
lean_dec(v_closing_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg(lean_object* v_closed_287_){
_start:
{
lean_inc(v_closed_287_);
return v_closed_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg___boxed(lean_object* v_closed_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lasm_Web_ReadyState_closed_elim___redArg(v_closed_288_);
lean_dec(v_closed_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim(lean_object* v_motive_290_, uint8_t v_t_291_, lean_object* v_h_292_, lean_object* v_closed_293_){
_start:
{
lean_inc(v_closed_293_);
return v_closed_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___boxed(lean_object* v_motive_294_, lean_object* v_t_295_, lean_object* v_h_296_, lean_object* v_closed_297_){
_start:
{
uint8_t v_t_boxed_298_; lean_object* v_res_299_; 
v_t_boxed_298_ = lean_unbox(v_t_295_);
v_res_299_ = l_Lasm_Web_ReadyState_closed_elim(v_motive_294_, v_t_boxed_298_, v_h_296_, v_closed_297_);
lean_dec(v_closed_297_);
return v_res_299_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Web_instBEqReadyState_beq(uint8_t v_x_300_, uint8_t v_y_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_302_ = lean_box(v_x_300_);
v___x_303_ = lean_obj_tag_nat(v___x_302_);
lean_dec(v___x_302_);
v___x_304_ = lean_box(v_y_301_);
v___x_305_ = lean_obj_tag_nat(v___x_304_);
lean_dec(v___x_304_);
v___x_306_ = lean_nat_dec_eq(v___x_303_, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instBEqReadyState_beq___boxed(lean_object* v_x_307_, lean_object* v_y_308_){
_start:
{
uint8_t v_x_24__boxed_309_; uint8_t v_y_25__boxed_310_; uint8_t v_res_311_; lean_object* v_r_312_; 
v_x_24__boxed_309_ = lean_unbox(v_x_307_);
v_y_25__boxed_310_ = lean_unbox(v_y_308_);
v_res_311_ = l_Lasm_Web_instBEqReadyState_beq(v_x_24__boxed_309_, v_y_25__boxed_310_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
static uint8_t _init_l_Lasm_Web_instInhabitedReadyState_default(void){
_start:
{
uint8_t v___x_315_; 
v___x_315_ = 0;
return v___x_315_;
}
}
static uint8_t _init_l_Lasm_Web_instInhabitedReadyState(void){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = 0;
return v___x_316_;
}
}
static lean_object* _init_l_Lasm_Web_instReprReadyState_repr___closed__8(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = lean_nat_to_int(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l_Lasm_Web_instReprReadyState_repr___closed__9(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_nat_to_int(v___x_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr(uint8_t v_x_333_, lean_object* v_prec_334_){
_start:
{
lean_object* v___y_336_; lean_object* v___y_343_; lean_object* v___y_350_; lean_object* v___y_357_; 
switch(v_x_333_)
{
case 0:
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = lean_unsigned_to_nat(1024u);
v___x_364_ = lean_nat_dec_le(v___x_363_, v_prec_334_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
v___x_365_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_336_ = v___x_365_;
goto v___jp_335_;
}
else
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_336_ = v___x_366_;
goto v___jp_335_;
}
}
case 1:
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(1024u);
v___x_368_ = lean_nat_dec_le(v___x_367_, v_prec_334_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
v___x_369_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_343_ = v___x_369_;
goto v___jp_342_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_343_ = v___x_370_;
goto v___jp_342_;
}
}
case 2:
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(1024u);
v___x_372_ = lean_nat_dec_le(v___x_371_, v_prec_334_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
v___x_373_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_350_ = v___x_373_;
goto v___jp_349_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_350_ = v___x_374_;
goto v___jp_349_;
}
}
default: 
{
lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(1024u);
v___x_376_ = lean_nat_dec_le(v___x_375_, v_prec_334_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; 
v___x_377_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_357_ = v___x_377_;
goto v___jp_356_;
}
else
{
lean_object* v___x_378_; 
v___x_378_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_357_ = v___x_378_;
goto v___jp_356_;
}
}
}
v___jp_335_:
{
lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_337_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__1));
lean_inc(v___y_336_);
v___x_338_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_338_, 0, v___y_336_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = 0;
v___x_340_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_340_, 0, v___x_338_);
lean_ctor_set_uint8(v___x_340_, sizeof(void*)*1, v___x_339_);
v___x_341_ = l_Repr_addAppParen(v___x_340_, v_prec_334_);
return v___x_341_;
}
v___jp_342_:
{
lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_344_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__3));
lean_inc(v___y_343_);
v___x_345_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_345_, 0, v___y_343_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = 0;
v___x_347_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_347_, 0, v___x_345_);
lean_ctor_set_uint8(v___x_347_, sizeof(void*)*1, v___x_346_);
v___x_348_ = l_Repr_addAppParen(v___x_347_, v_prec_334_);
return v___x_348_;
}
v___jp_349_:
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_351_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__5));
lean_inc(v___y_350_);
v___x_352_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_352_, 0, v___y_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = 0;
v___x_354_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*1, v___x_353_);
v___x_355_ = l_Repr_addAppParen(v___x_354_, v_prec_334_);
return v___x_355_;
}
v___jp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_358_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__7));
lean_inc(v___y_357_);
v___x_359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_359_, 0, v___y_357_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = 0;
v___x_361_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*1, v___x_360_);
v___x_362_ = l_Repr_addAppParen(v___x_361_, v_prec_334_);
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr___boxed(lean_object* v_x_379_, lean_object* v_prec_380_){
_start:
{
uint8_t v_x_225__boxed_381_; lean_object* v_res_382_; 
v_x_225__boxed_381_ = lean_unbox(v_x_379_);
v_res_382_ = l_Lasm_Web_instReprReadyState_repr(v_x_225__boxed_381_, v_prec_380_);
lean_dec(v_prec_380_);
return v_res_382_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6));
v___x_393_ = lean_unsigned_to_nat(46u);
v___x_394_ = lean_unsigned_to_nat(193u);
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5));
v___x_396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4));
v___x_397_ = l_mkPanicMessageWithDecl(v___x_396_, v___x_395_, v___x_394_, v___x_393_, v___x_392_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(lean_object* v_context_399_, lean_object* v_d_400_){
_start:
{
lean_object* v_received_403_; 
if (lean_obj_tag(v_d_400_) == 9)
{
lean_object* v_value_417_; lean_object* v___x_418_; 
v_value_417_ = lean_ctor_get(v_d_400_, 0);
lean_inc(v_value_417_);
lean_dec_ref_known(v_d_400_, 2);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v_value_417_);
return v___x_418_;
}
else
{
if (lean_obj_tag(v_d_400_) == 9)
{
lean_object* v_value_419_; lean_object* v_description_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v_value_419_ = lean_ctor_get(v_d_400_, 0);
v_description_420_ = lean_ctor_get(v_d_400_, 1);
v___x_421_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_422_ = lean_string_dec_eq(v_description_420_, v___x_421_);
if (v___x_422_ == 0)
{
goto v___jp_415_;
}
else
{
uint32_t v___x_423_; uint64_t v___x_424_; lean_object* v___x_425_; uint32_t v___x_426_; lean_object* v___x_427_; 
lean_inc_n(v_value_419_, 2);
lean_dec_ref_known(v_d_400_, 2);
v___x_423_ = 206;
v___x_424_ = 0ULL;
v___x_425_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_425_, 0, v_value_419_);
lean_ctor_set(v___x_425_, 1, v___x_421_);
v___x_426_ = lasm_js_value_handle(v_value_419_);
lean_dec(v_value_419_);
v___x_427_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_423_, v___x_424_, v___x_425_, v___x_426_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; uint8_t v___x_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
v___x_429_ = lean_string_validate_utf8(v_a_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec(v_a_428_);
v___x_430_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7);
v___x_431_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_430_);
v_received_403_ = v___x_431_;
goto v___jp_402_;
}
else
{
lean_object* v___x_432_; 
v___x_432_ = lean_string_from_utf8_unchecked(v_a_428_);
v_received_403_ = v___x_432_;
goto v___jp_402_;
}
}
else
{
lean_object* v___x_433_; 
lean_dec_ref_known(v___x_427_, 1);
v___x_433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8));
v_received_403_ = v___x_433_;
goto v___jp_402_;
}
}
}
else
{
goto v___jp_415_;
}
}
v___jp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_404_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_405_ = lean_string_append(v___x_404_, v_context_399_);
v___x_406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_407_ = lean_string_append(v___x_405_, v___x_406_);
v___x_408_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__2));
v___x_409_ = lean_string_append(v___x_407_, v___x_408_);
v___x_410_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_411_ = lean_string_append(v___x_409_, v___x_410_);
v___x_412_ = lean_string_append(v___x_411_, v_received_403_);
lean_dec_ref(v_received_403_);
v___x_413_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
v___jp_415_:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lasm_JS_Data_describe(v_d_400_);
v_received_403_ = v___x_416_;
goto v___jp_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___boxed(lean_object* v_context_434_, lean_object* v_d_435_, lean_object* v_a_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(v_context_434_, v_d_435_);
lean_dec_ref(v_context_434_);
return v_res_437_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1(void){
_start:
{
uint8_t v___x_439_; uint64_t v___x_440_; 
v___x_439_ = 1;
v___x_440_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(lean_object* v_b_441_, lean_object* v_args_442_, uint8_t v_await_443_){
_start:
{
uint64_t v___y_446_; uint64_t v___y_447_; uint64_t v___x_482_; uint64_t v___y_484_; 
v___x_482_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1);
if (v_await_443_ == 0)
{
uint64_t v___x_489_; 
v___x_489_ = 0ULL;
v___y_484_ = v___x_489_;
goto v___jp_483_;
}
else
{
uint64_t v___x_490_; 
v___x_490_ = 2ULL;
v___y_484_ = v___x_490_;
goto v___jp_483_;
}
v___jp_445_:
{
uint64_t v_flags_448_; uint32_t v___x_449_; lean_object* v___x_450_; uint32_t v___x_451_; lean_object* v___x_452_; 
v_flags_448_ = lean_uint64_lor(v___y_446_, v___y_447_);
v___x_449_ = 214;
v___x_450_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_441_, v_args_442_);
v___x_451_ = 0;
v___x_452_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_449_, v_flags_448_, v___x_450_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_454_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_452_, 1);
v___x_454_ = l_Lasm_JS_Wire_decode(v_a_453_);
lean_dec(v_a_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v___x_456_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_441_);
v___x_457_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(v___x_456_, v_a_455_);
lean_dec_ref(v___x_456_);
return v___x_457_;
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_458_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_454_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_454_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_481_; 
v_a_466_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_481_ == 0)
{
v___x_468_ = v___x_452_;
v_isShared_469_ = v_isSharedCheck_481_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_452_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_481_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_441_);
v___x_472_ = lean_string_append(v___x_470_, v___x_471_);
lean_dec_ref(v___x_471_);
v___x_473_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_474_ = lean_string_append(v___x_472_, v___x_473_);
v___x_475_ = lean_io_error_to_string(v_a_466_);
v___x_476_ = lean_string_append(v___x_474_, v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_477_);
v___x_479_ = v___x_468_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
v___jp_483_:
{
uint8_t v_construct_485_; uint64_t v___x_486_; 
v_construct_485_ = lean_ctor_get_uint8(v_b_441_, sizeof(void*)*4);
v___x_486_ = lean_uint64_lor(v___x_482_, v___y_484_);
if (v_construct_485_ == 0)
{
uint64_t v___x_487_; 
v___x_487_ = 0ULL;
v___y_446_ = v___x_486_;
v___y_447_ = v___x_487_;
goto v___jp_445_;
}
else
{
uint64_t v___x_488_; 
v___x_488_ = 4ULL;
v___y_446_ = v___x_486_;
v___y_447_ = v___x_488_;
goto v___jp_445_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___boxed(lean_object* v_b_491_, lean_object* v_args_492_, lean_object* v_await_493_, lean_object* v_a_494_){
_start:
{
uint8_t v_await_boxed_495_; lean_object* v_res_496_; 
v_await_boxed_495_ = lean_unbox(v_await_493_);
v_res_496_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(v_b_491_, v_args_492_, v_await_boxed_495_);
lean_dec_ref(v_b_491_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(size_t v_sz_497_, size_t v_i_498_, lean_object* v_bs_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = lean_usize_dec_lt(v_i_498_, v_sz_497_);
if (v___x_500_ == 0)
{
return v_bs_499_;
}
else
{
lean_object* v_v_501_; lean_object* v___x_502_; lean_object* v_bs_x27_503_; lean_object* v___x_504_; size_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; 
v_v_501_ = lean_array_uget(v_bs_499_, v_i_498_);
v___x_502_ = lean_unsigned_to_nat(0u);
v_bs_x27_503_ = lean_array_uset(v_bs_499_, v_i_498_, v___x_502_);
v___x_504_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_504_, 0, v_v_501_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_498_, v___x_505_);
v___x_507_ = lean_array_uset(v_bs_x27_503_, v_i_498_, v___x_504_);
v_i_498_ = v___x_506_;
v_bs_499_ = v___x_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0___boxed(lean_object* v_sz_509_, lean_object* v_i_510_, lean_object* v_bs_511_){
_start:
{
size_t v_sz_boxed_512_; size_t v_i_boxed_513_; lean_object* v_res_514_; 
v_sz_boxed_512_ = lean_unbox_usize(v_sz_509_);
lean_dec(v_sz_509_);
v_i_boxed_513_ = lean_unbox_usize(v_i_510_);
lean_dec(v_i_510_);
v_res_514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(v_sz_boxed_512_, v_i_boxed_513_, v_bs_511_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket(lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; size_t v_sz_532_; size_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; lean_object* v___x_540_; 
v___x_528_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__2));
v___x_529_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_530_, 0, v_a_524_);
v___x_531_ = lean_array_push(v___x_529_, v___x_530_);
v_sz_532_ = lean_array_size(v_a_525_);
v___x_533_ = ((size_t)0ULL);
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(v_sz_532_, v___x_533_, v_a_525_);
v___x_535_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
v___x_536_ = lean_array_push(v___x_531_, v___x_535_);
v___x_537_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_537_, 0, v_a_526_);
v___x_538_ = lean_array_push(v___x_536_, v___x_537_);
v___x_539_ = 1;
v___x_540_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(v___x_528_, v___x_538_, v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket___boxed(lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lasm_Web_Raw_webSocket(v_a_541_, v_a_542_, v_a_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(lean_object* v_context_547_, lean_object* v_d_548_){
_start:
{
lean_object* v_received_551_; 
switch(lean_obj_tag(v_d_548_))
{
case 4:
{
lean_object* v_s_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_s_567_ = lean_ctor_get(v_d_548_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v_d_548_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v_d_548_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_s_567_);
lean_dec(v_d_548_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 0);
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_s_567_);
v___x_572_ = v_reuseFailAlloc_574_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_573_; 
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
}
}
case 6:
{
lean_object* v_b_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_b_576_ = lean_ctor_get(v_d_548_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_d_548_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v_d_548_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_b_576_);
lean_dec(v_d_548_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_b_576_);
v___x_581_ = v_reuseFailAlloc_583_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
lean_object* v___x_582_; 
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
default: 
{
if (lean_obj_tag(v_d_548_) == 9)
{
lean_object* v_value_585_; lean_object* v_description_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
v_value_585_ = lean_ctor_get(v_d_548_, 0);
v_description_586_ = lean_ctor_get(v_d_548_, 1);
v___x_587_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_588_ = lean_string_dec_eq(v_description_586_, v___x_587_);
if (v___x_588_ == 0)
{
goto v___jp_565_;
}
else
{
uint32_t v___x_589_; uint64_t v___x_590_; lean_object* v___x_591_; uint32_t v___x_592_; lean_object* v___x_593_; 
lean_inc_n(v_value_585_, 2);
lean_dec_ref_known(v_d_548_, 2);
v___x_589_ = 206;
v___x_590_ = 0ULL;
v___x_591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_591_, 0, v_value_585_);
lean_ctor_set(v___x_591_, 1, v___x_587_);
v___x_592_ = lasm_js_value_handle(v_value_585_);
lean_dec(v_value_585_);
v___x_593_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_589_, v___x_590_, v___x_591_, v___x_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; uint8_t v___x_595_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
v___x_595_ = lean_string_validate_utf8(v_a_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v_a_594_);
v___x_596_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7);
v___x_597_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_596_);
v_received_551_ = v___x_597_;
goto v___jp_550_;
}
else
{
lean_object* v___x_598_; 
v___x_598_ = lean_string_from_utf8_unchecked(v_a_594_);
v_received_551_ = v___x_598_;
goto v___jp_550_;
}
}
else
{
lean_object* v___x_599_; 
lean_dec_ref_known(v___x_593_, 1);
v___x_599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8));
v_received_551_ = v___x_599_;
goto v___jp_550_;
}
}
}
else
{
goto v___jp_565_;
}
}
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_553_ = lean_string_append(v___x_552_, v_context_547_);
v___x_554_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_555_ = lean_string_append(v___x_553_, v___x_554_);
v___x_556_ = ((lean_object*)(l_Lasm_Web_instFromJSMessage___closed__1));
v___x_557_ = lean_string_append(v___x_555_, v___x_556_);
v___x_558_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_559_ = lean_string_append(v___x_557_, v___x_558_);
v___x_560_ = lean_string_append(v___x_559_, v_received_551_);
lean_dec_ref(v_received_551_);
v___x_561_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___x_563_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
v___jp_565_:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lasm_JS_Data_describe(v_d_548_);
v_received_551_ = v___x_566_;
goto v___jp_550_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___boxed(lean_object* v_context_600_, lean_object* v_d_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(v_context_600_, v_d_601_);
lean_dec_ref(v_context_600_);
return v_res_603_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0(void){
_start:
{
uint8_t v___x_604_; uint64_t v___x_605_; 
v___x_604_ = 0;
v___x_605_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(lean_object* v_b_606_, lean_object* v_args_607_, uint8_t v_await_608_){
_start:
{
uint64_t v___y_611_; uint64_t v___y_612_; uint64_t v___x_647_; uint64_t v___y_649_; 
v___x_647_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
if (v_await_608_ == 0)
{
uint64_t v___x_654_; 
v___x_654_ = 0ULL;
v___y_649_ = v___x_654_;
goto v___jp_648_;
}
else
{
uint64_t v___x_655_; 
v___x_655_ = 2ULL;
v___y_649_ = v___x_655_;
goto v___jp_648_;
}
v___jp_610_:
{
uint64_t v_flags_613_; uint32_t v___x_614_; lean_object* v___x_615_; uint32_t v___x_616_; lean_object* v___x_617_; 
v_flags_613_ = lean_uint64_lor(v___y_611_, v___y_612_);
v___x_614_ = 214;
v___x_615_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_606_, v_args_607_);
v___x_616_ = 0;
v___x_617_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_614_, v_flags_613_, v___x_615_, v___x_616_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_619_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v___x_619_ = l_Lasm_JS_Wire_decode(v_a_618_);
lean_dec(v_a_618_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_619_, 1);
v___x_621_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_606_);
v___x_622_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(v___x_621_, v_a_620_);
lean_dec_ref(v___x_621_);
return v___x_622_;
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
v_a_623_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_619_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_619_);
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
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_646_; 
v_a_631_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_646_ == 0)
{
v___x_633_ = v___x_617_;
v_isShared_634_ = v_isSharedCheck_646_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_617_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_646_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_606_);
v___x_637_ = lean_string_append(v___x_635_, v___x_636_);
lean_dec_ref(v___x_636_);
v___x_638_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
v___x_640_ = lean_io_error_to_string(v_a_631_);
v___x_641_ = lean_string_append(v___x_639_, v___x_640_);
lean_dec_ref(v___x_640_);
v___x_642_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_642_);
v___x_644_ = v___x_633_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
v___jp_648_:
{
uint8_t v_construct_650_; uint64_t v___x_651_; 
v_construct_650_ = lean_ctor_get_uint8(v_b_606_, sizeof(void*)*4);
v___x_651_ = lean_uint64_lor(v___x_647_, v___y_649_);
if (v_construct_650_ == 0)
{
uint64_t v___x_652_; 
v___x_652_ = 0ULL;
v___y_611_ = v___x_651_;
v___y_612_ = v___x_652_;
goto v___jp_610_;
}
else
{
uint64_t v___x_653_; 
v___x_653_ = 4ULL;
v___y_611_ = v___x_651_;
v___y_612_ = v___x_653_;
goto v___jp_610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___boxed(lean_object* v_b_656_, lean_object* v_args_657_, lean_object* v_await_658_, lean_object* v_a_659_){
_start:
{
uint8_t v_await_boxed_660_; lean_object* v_res_661_; 
v_await_boxed_660_ = lean_unbox(v_await_658_);
v_res_661_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(v_b_656_, v_args_657_, v_await_boxed_660_);
lean_dec_ref(v_b_656_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData(lean_object* v_a_668_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; lean_object* v___x_676_; 
v___x_670_ = ((lean_object*)(l_Lasm_Web_Raw_messageData___closed__1));
v___x_671_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_672_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_673_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_673_, 0, v_a_668_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = lean_array_push(v___x_671_, v___x_673_);
v___x_675_ = 1;
v___x_676_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(v___x_670_, v___x_674_, v___x_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData___boxed(lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lasm_Web_Raw_messageData(v_a_677_);
return v_res_679_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_nat_to_int(v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(lean_object* v_d_693_, lean_object* v_key_694_){
_start:
{
if (lean_obj_tag(v_d_693_) == 8)
{
lean_object* v___x_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_738_; 
v___x_695_ = l_Lasm_JS_Data_field(v_d_693_, v_key_694_);
v_isSharedCheck_738_ = !lean_is_exclusive(v_d_693_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v_d_693_, 0);
lean_dec(v_unused_739_);
v___x_697_ = v_d_693_;
v_isShared_698_ = v_isSharedCheck_738_;
goto v_resetjp_696_;
}
else
{
lean_dec(v_d_693_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_738_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_a_700_; lean_object* v_a_726_; 
switch(lean_obj_tag(v___x_695_))
{
case 3:
{
double v_n_732_; lean_object* v___x_733_; 
v_n_732_ = lean_ctor_get_float(v___x_695_, 0);
v___x_733_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_732_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8));
v_a_700_ = v___x_734_;
goto v___jp_699_;
}
else
{
lean_object* v_val_735_; 
v_val_735_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_val_735_);
lean_dec_ref_known(v___x_733_, 1);
v_a_726_ = v_val_735_;
goto v___jp_725_;
}
}
case 5:
{
lean_object* v_i_736_; 
v_i_736_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_i_736_);
v_a_726_ = v_i_736_;
goto v___jp_725_;
}
default: 
{
lean_object* v___x_737_; 
v___x_737_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v_a_700_ = v___x_737_;
goto v___jp_699_;
}
}
v___jp_699_:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_701_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__0));
v___x_702_ = lean_string_append(v___x_701_, v_key_694_);
v___x_703_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__1));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
v___x_705_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2));
v___x_706_ = lean_string_append(v___x_704_, v___x_705_);
v___x_707_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__3));
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
v___x_709_ = l_Lasm_JS_Data_describe(v___x_695_);
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
lean_dec_ref(v___x_709_);
v___x_711_ = lean_string_utf8_byte_size(v_a_700_);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_nat_dec_eq(v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_715_ = lean_string_append(v___x_714_, v_a_700_);
v___x_716_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_717_ = lean_string_append(v___x_715_, v___x_716_);
v___x_718_ = lean_string_append(v___x_710_, v___x_717_);
lean_dec_ref(v___x_717_);
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 0);
lean_ctor_set(v___x_697_, 0, v___x_718_);
v___x_720_ = v___x_697_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
else
{
lean_object* v___x_723_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 0);
lean_ctor_set(v___x_697_, 0, v___x_710_);
v___x_723_ = v___x_697_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_710_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
v___jp_725_:
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6);
v___x_728_ = lean_int_dec_le(v___x_727_, v_a_726_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v_a_726_);
v___x_729_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7));
v_a_700_ = v___x_729_;
goto v___jp_699_;
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_del_object(v___x_697_);
lean_dec(v___x_695_);
v___x_730_ = l_Int_toNat(v_a_726_);
lean_dec(v_a_726_);
v___x_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
}
else
{
lean_object* v___x_740_; 
lean_dec(v_d_693_);
v___x_740_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__10));
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_d_741_, lean_object* v_key_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(v_d_741_, v_key_742_);
lean_dec_ref(v_key_742_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(lean_object* v_context_744_, lean_object* v_d_745_){
_start:
{
lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_754_; lean_object* v_received_755_; lean_object* v___y_774_; lean_object* v_a_777_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0));
lean_inc(v_d_745_);
v___x_802_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(v_d_745_, v___x_801_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
v_a_777_ = v_a_803_;
goto v___jp_776_;
}
else
{
lean_object* v_a_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_804_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_802_, 1);
v___x_805_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1));
lean_inc(v_d_745_);
v___x_806_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_745_, v___x_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; 
lean_dec(v_a_804_);
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_806_, 1);
v_a_777_ = v_a_807_;
goto v___jp_776_;
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_808_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_806_, 1);
v___x_809_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2));
lean_inc(v_d_745_);
v___x_810_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_745_, v___x_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; 
lean_dec(v_a_808_);
lean_dec(v_a_804_);
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v_a_777_ = v_a_811_;
goto v___jp_776_;
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_d_745_);
v_a_812_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_821_ == 0)
{
v___x_814_ = v___x_810_;
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_810_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_821_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_819_; 
v___x_816_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_816_, 0, v_a_804_);
lean_ctor_set(v___x_816_, 1, v_a_808_);
v___x_817_ = lean_unbox(v_a_812_);
lean_dec(v_a_812_);
lean_ctor_set_uint8(v___x_816_, sizeof(void*)*2, v___x_817_);
if (v_isShared_815_ == 0)
{
lean_ctor_set_tag(v___x_814_, 0);
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_819_ = v___x_814_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_816_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
v___jp_747_:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_string_append(v___y_748_, v___y_749_);
lean_dec_ref(v___y_749_);
v___x_751_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
v___x_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
v___jp_753_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_756_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_757_ = lean_string_append(v___x_756_, v_context_744_);
v___x_758_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_759_ = lean_string_append(v___x_757_, v___x_758_);
v___x_760_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___closed__1));
v___x_761_ = lean_string_append(v___x_759_, v___x_760_);
v___x_762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_763_ = lean_string_append(v___x_761_, v___x_762_);
v___x_764_ = lean_string_append(v___x_763_, v_received_755_);
lean_dec_ref(v_received_755_);
v___x_765_ = lean_string_utf8_byte_size(v___y_754_);
v___x_766_ = lean_unsigned_to_nat(0u);
v___x_767_ = lean_nat_dec_eq(v___x_765_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_768_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_769_ = lean_string_append(v___x_768_, v___y_754_);
lean_dec_ref(v___y_754_);
v___x_770_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
v___y_748_ = v___x_764_;
v___y_749_ = v___x_771_;
goto v___jp_747_;
}
else
{
lean_object* v___x_772_; 
lean_dec_ref(v___y_754_);
v___x_772_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___y_748_ = v___x_764_;
v___y_749_ = v___x_772_;
goto v___jp_747_;
}
}
v___jp_773_:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lasm_JS_Data_describe(v_d_745_);
v___y_754_ = v___y_774_;
v_received_755_ = v___x_775_;
goto v___jp_753_;
}
v___jp_776_:
{
if (lean_obj_tag(v_d_745_) == 9)
{
lean_object* v_value_778_; lean_object* v_description_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v_value_778_ = lean_ctor_get(v_d_745_, 0);
v_description_779_ = lean_ctor_get(v_d_745_, 1);
v___x_780_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_781_ = lean_string_dec_eq(v_description_779_, v___x_780_);
if (v___x_781_ == 0)
{
v___y_774_ = v_a_777_;
goto v___jp_773_;
}
else
{
lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_798_; 
lean_inc(v_value_778_);
v_isSharedCheck_798_ = !lean_is_exclusive(v_d_745_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; lean_object* v_unused_800_; 
v_unused_799_ = lean_ctor_get(v_d_745_, 1);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_d_745_, 0);
lean_dec(v_unused_800_);
v___x_783_ = v_d_745_;
v_isShared_784_ = v_isSharedCheck_798_;
goto v_resetjp_782_;
}
else
{
lean_dec(v_d_745_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_798_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
uint32_t v___x_785_; uint64_t v___x_786_; lean_object* v___x_788_; 
v___x_785_ = 206;
v___x_786_ = 0ULL;
lean_inc(v_value_778_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v___x_780_);
v___x_788_ = v___x_783_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_value_778_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_780_);
v___x_788_ = v_reuseFailAlloc_797_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
uint32_t v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lasm_js_value_handle(v_value_778_);
lean_dec(v_value_778_);
v___x_790_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_785_, v___x_786_, v___x_788_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; uint8_t v___x_792_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_790_, 1);
v___x_792_ = lean_string_validate_utf8(v_a_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec(v_a_791_);
v___x_793_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7);
v___x_794_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_793_);
v___y_754_ = v_a_777_;
v_received_755_ = v___x_794_;
goto v___jp_753_;
}
else
{
lean_object* v___x_795_; 
v___x_795_ = lean_string_from_utf8_unchecked(v_a_791_);
v___y_754_ = v_a_777_;
v_received_755_ = v___x_795_;
goto v___jp_753_;
}
}
else
{
lean_object* v___x_796_; 
lean_dec_ref_known(v___x_790_, 1);
v___x_796_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8));
v___y_754_ = v_a_777_;
v_received_755_ = v___x_796_;
goto v___jp_753_;
}
}
}
}
}
else
{
v___y_774_ = v_a_777_;
goto v___jp_773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0___boxed(lean_object* v_context_822_, lean_object* v_d_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(v_context_822_, v_d_823_);
lean_dec_ref(v_context_822_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(lean_object* v_b_826_, lean_object* v_args_827_, uint8_t v_await_828_){
_start:
{
uint64_t v___y_831_; uint64_t v___y_832_; uint64_t v___x_867_; uint64_t v___y_869_; 
v___x_867_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
if (v_await_828_ == 0)
{
uint64_t v___x_874_; 
v___x_874_ = 0ULL;
v___y_869_ = v___x_874_;
goto v___jp_868_;
}
else
{
uint64_t v___x_875_; 
v___x_875_ = 2ULL;
v___y_869_ = v___x_875_;
goto v___jp_868_;
}
v___jp_830_:
{
uint64_t v_flags_833_; uint32_t v___x_834_; lean_object* v___x_835_; uint32_t v___x_836_; lean_object* v___x_837_; 
v_flags_833_ = lean_uint64_lor(v___y_831_, v___y_832_);
v___x_834_ = 214;
v___x_835_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_826_, v_args_827_);
v___x_836_ = 0;
v___x_837_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_834_, v_flags_833_, v___x_835_, v___x_836_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
v___x_839_ = l_Lasm_JS_Wire_decode(v_a_838_);
lean_dec(v_a_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_840_);
lean_dec_ref_known(v___x_839_, 1);
v___x_841_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_826_);
v___x_842_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(v___x_841_, v_a_840_);
lean_dec_ref(v___x_841_);
return v___x_842_;
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_839_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_839_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_866_; 
v_a_851_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_866_ == 0)
{
v___x_853_ = v___x_837_;
v_isShared_854_ = v_isSharedCheck_866_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_837_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_866_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_855_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_856_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_826_);
v___x_857_ = lean_string_append(v___x_855_, v___x_856_);
lean_dec_ref(v___x_856_);
v___x_858_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
v___x_860_ = lean_io_error_to_string(v_a_851_);
v___x_861_ = lean_string_append(v___x_859_, v___x_860_);
lean_dec_ref(v___x_860_);
v___x_862_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_862_);
v___x_864_ = v___x_853_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
v___jp_868_:
{
uint8_t v_construct_870_; uint64_t v___x_871_; 
v_construct_870_ = lean_ctor_get_uint8(v_b_826_, sizeof(void*)*4);
v___x_871_ = lean_uint64_lor(v___x_867_, v___y_869_);
if (v_construct_870_ == 0)
{
uint64_t v___x_872_; 
v___x_872_ = 0ULL;
v___y_831_ = v___x_871_;
v___y_832_ = v___x_872_;
goto v___jp_830_;
}
else
{
uint64_t v___x_873_; 
v___x_873_ = 4ULL;
v___y_831_ = v___x_871_;
v___y_832_ = v___x_873_;
goto v___jp_830_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0___boxed(lean_object* v_b_876_, lean_object* v_args_877_, lean_object* v_await_878_, lean_object* v_a_879_){
_start:
{
uint8_t v_await_boxed_880_; lean_object* v_res_881_; 
v_await_boxed_880_ = lean_unbox(v_await_878_);
v_res_881_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(v_b_876_, v_args_877_, v_await_boxed_880_);
lean_dec_ref(v_b_876_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo(lean_object* v_a_888_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; lean_object* v___x_896_; 
v___x_890_ = ((lean_object*)(l_Lasm_Web_Raw_closeInfo___closed__1));
v___x_891_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_892_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_893_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_893_, 0, v_a_888_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = lean_array_push(v___x_891_, v___x_893_);
v___x_895_ = 1;
v___x_896_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(v___x_890_, v___x_894_, v___x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo___boxed(lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lasm_Web_Raw_closeInfo(v_a_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect(lean_object* v_url_901_, lean_object* v_protocols_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = ((lean_object*)(l_Lasm_Web_WebSocket_connect___closed__0));
v___x_905_ = l_Lasm_Web_Raw_webSocket(v_url_901_, v_protocols_902_, v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect___boxed(lean_object* v_url_906_, lean_object* v_protocols_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lasm_Web_WebSocket_connect(v_url_906_, v_protocols_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send(lean_object* v_ws_911_, lean_object* v_text_912_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_914_ = ((lean_object*)(l_Lasm_Web_WebSocket_send___closed__0));
v___x_915_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_915_, 0, v_text_912_);
v___x_916_ = lean_unsigned_to_nat(1u);
v___x_917_ = lean_mk_empty_array_with_capacity(v___x_916_);
v___x_918_ = lean_array_push(v___x_917_, v___x_915_);
v___x_919_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_911_, v___x_914_, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send___boxed(lean_object* v_ws_920_, lean_object* v_text_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lasm_Web_WebSocket_send(v_ws_920_, v_text_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes(lean_object* v_ws_924_, lean_object* v_bytes_925_){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_927_ = ((lean_object*)(l_Lasm_Web_WebSocket_send___closed__0));
v___x_928_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_928_, 0, v_bytes_925_);
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = lean_mk_empty_array_with_capacity(v___x_929_);
v___x_931_ = lean_array_push(v___x_930_, v___x_928_);
v___x_932_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_924_, v___x_927_, v___x_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes___boxed(lean_object* v_ws_933_, lean_object* v_bytes_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lasm_Web_WebSocket_sendBytes(v_ws_933_, v_bytes_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close(lean_object* v_ws_938_, lean_object* v_code_939_, lean_object* v_reason_940_){
_start:
{
lean_object* v___x_942_; lean_object* v___y_944_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_942_ = ((lean_object*)(l_Lasm_Web_WebSocket_close___closed__0));
v___x_951_ = lean_nat_to_int(v_code_939_);
v___x_952_ = lean_nat_abs(v___x_951_);
v___x_953_ = lean_cstr_to_nat("9007199254740991");
v___x_954_ = lean_nat_dec_le(v___x_952_, v___x_953_);
lean_dec(v___x_952_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; 
v___x_955_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_951_);
v___y_944_ = v___x_955_;
goto v___jp_943_;
}
else
{
double v___x_956_; lean_object* v___x_957_; 
v___x_956_ = l_Float_ofInt(v___x_951_);
lean_dec(v___x_951_);
v___x_957_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_957_, 0, v___x_956_);
v___y_944_ = v___x_957_;
goto v___jp_943_;
}
v___jp_943_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_945_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_945_, 0, v_reason_940_);
v___x_946_ = lean_unsigned_to_nat(2u);
v___x_947_ = lean_mk_empty_array_with_capacity(v___x_946_);
v___x_948_ = lean_array_push(v___x_947_, v___y_944_);
v___x_949_ = lean_array_push(v___x_948_, v___x_945_);
v___x_950_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_938_, v___x_942_, v___x_949_);
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close___boxed(lean_object* v_ws_958_, lean_object* v_code_959_, lean_object* v_reason_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lasm_Web_WebSocket_close(v_ws_958_, v_code_959_, v_reason_960_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(lean_object* v_context_963_, lean_object* v_d_964_){
_start:
{
lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_973_; lean_object* v_received_974_; lean_object* v___y_993_; lean_object* v_a_996_; lean_object* v_a_1021_; 
switch(lean_obj_tag(v_d_964_))
{
case 3:
{
double v_n_1027_; lean_object* v___x_1028_; 
v_n_1027_ = lean_ctor_get_float(v_d_964_, 0);
v___x_1028_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1027_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v___x_1029_; 
v___x_1029_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8));
v_a_996_ = v___x_1029_;
goto v___jp_995_;
}
else
{
lean_object* v_val_1030_; 
v_val_1030_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v___x_1028_, 1);
v_a_1021_ = v_val_1030_;
goto v___jp_1020_;
}
}
case 5:
{
lean_object* v_i_1031_; 
v_i_1031_ = lean_ctor_get(v_d_964_, 0);
lean_inc(v_i_1031_);
v_a_1021_ = v_i_1031_;
goto v___jp_1020_;
}
default: 
{
lean_object* v___x_1032_; 
v___x_1032_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v_a_996_ = v___x_1032_;
goto v___jp_995_;
}
}
v___jp_966_:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_969_ = lean_string_append(v___y_967_, v___y_968_);
lean_dec_ref(v___y_968_);
v___x_970_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
v___jp_972_:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_976_ = lean_string_append(v___x_975_, v_context_963_);
v___x_977_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_978_ = lean_string_append(v___x_976_, v___x_977_);
v___x_979_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2));
v___x_980_ = lean_string_append(v___x_978_, v___x_979_);
v___x_981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_982_ = lean_string_append(v___x_980_, v___x_981_);
v___x_983_ = lean_string_append(v___x_982_, v_received_974_);
lean_dec_ref(v_received_974_);
v___x_984_ = lean_string_utf8_byte_size(v___y_973_);
v___x_985_ = lean_unsigned_to_nat(0u);
v___x_986_ = lean_nat_dec_eq(v___x_984_, v___x_985_);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_987_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_988_ = lean_string_append(v___x_987_, v___y_973_);
v___x_989_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_990_ = lean_string_append(v___x_988_, v___x_989_);
v___y_967_ = v___x_983_;
v___y_968_ = v___x_990_;
goto v___jp_966_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___y_967_ = v___x_983_;
v___y_968_ = v___x_991_;
goto v___jp_966_;
}
}
v___jp_992_:
{
lean_object* v___x_994_; 
v___x_994_ = l_Lasm_JS_Data_describe(v_d_964_);
v___y_973_ = v___y_993_;
v_received_974_ = v___x_994_;
goto v___jp_972_;
}
v___jp_995_:
{
if (lean_obj_tag(v_d_964_) == 9)
{
lean_object* v_value_997_; lean_object* v_description_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v_value_997_ = lean_ctor_get(v_d_964_, 0);
v_description_998_ = lean_ctor_get(v_d_964_, 1);
v___x_999_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_1000_ = lean_string_dec_eq(v_description_998_, v___x_999_);
if (v___x_1000_ == 0)
{
v___y_993_ = v_a_996_;
goto v___jp_992_;
}
else
{
lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1017_; 
lean_inc(v_value_997_);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_d_964_);
if (v_isSharedCheck_1017_ == 0)
{
lean_object* v_unused_1018_; lean_object* v_unused_1019_; 
v_unused_1018_ = lean_ctor_get(v_d_964_, 1);
lean_dec(v_unused_1018_);
v_unused_1019_ = lean_ctor_get(v_d_964_, 0);
lean_dec(v_unused_1019_);
v___x_1002_ = v_d_964_;
v_isShared_1003_ = v_isSharedCheck_1017_;
goto v_resetjp_1001_;
}
else
{
lean_dec(v_d_964_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1017_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
uint32_t v___x_1004_; uint64_t v___x_1005_; lean_object* v___x_1007_; 
v___x_1004_ = 206;
v___x_1005_ = 0ULL;
lean_inc(v_value_997_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v___x_999_);
v___x_1007_ = v___x_1002_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_value_997_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_999_);
v___x_1007_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
uint32_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lasm_js_value_handle(v_value_997_);
lean_dec(v_value_997_);
v___x_1009_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1004_, v___x_1005_, v___x_1007_, v___x_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; uint8_t v___x_1011_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = lean_string_validate_utf8(v_a_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
lean_dec(v_a_1010_);
v___x_1012_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7);
v___x_1013_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1012_);
v___y_973_ = v_a_996_;
v_received_974_ = v___x_1013_;
goto v___jp_972_;
}
else
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_string_from_utf8_unchecked(v_a_1010_);
v___y_973_ = v_a_996_;
v_received_974_ = v___x_1014_;
goto v___jp_972_;
}
}
else
{
lean_object* v___x_1015_; 
lean_dec_ref_known(v___x_1009_, 1);
v___x_1015_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8));
v___y_973_ = v_a_996_;
v_received_974_ = v___x_1015_;
goto v___jp_972_;
}
}
}
}
}
else
{
v___y_993_ = v_a_996_;
goto v___jp_992_;
}
}
v___jp_1020_:
{
lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6);
v___x_1023_ = lean_int_dec_le(v___x_1022_, v_a_1021_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; 
lean_dec(v_a_1021_);
v___x_1024_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7));
v_a_996_ = v___x_1024_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
lean_dec(v_d_964_);
v___x_1025_ = l_Int_toNat(v_a_1021_);
lean_dec(v_a_1021_);
v___x_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1033_, lean_object* v_d_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(v_context_1033_, v_d_1034_);
lean_dec_ref(v_context_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(lean_object* v_context_1037_, lean_object* v_bytes_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lasm_JS_Wire_decode(v_bytes_1038_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(v_context_1037_, v_a_1041_);
return v___x_1042_;
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1040_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1040_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0___boxed(lean_object* v_context_1051_, lean_object* v_bytes_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(v_context_1051_, v_bytes_1052_);
lean_dec_ref(v_bytes_1052_);
lean_dec_ref(v_context_1051_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(lean_object* v_o_1056_, lean_object* v_key_1057_){
_start:
{
uint32_t v___x_1059_; uint32_t v___x_1060_; uint64_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1059_ = 203;
v___x_1060_ = lasm_js_value_handle(v_o_1056_);
v___x_1061_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
lean_inc_ref(v_key_1057_);
v___x_1062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_key_1057_);
v___x_1063_ = l_Lasm_JS_Wire_encode(v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_1065_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1065_, 0, v_o_1056_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = lasm_js_call(v___x_1059_, v___x_1060_, v___x_1061_, v___x_1063_, v___x_1065_);
lean_dec_ref_known(v___x_1065_, 2);
lean_dec_ref(v___x_1063_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___closed__0));
v___x_1069_ = l_String_quote(v_key_1057_);
v___x_1070_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
v___x_1071_ = lean_unsigned_to_nat(120u);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = l_Std_Format_pretty(v___x_1070_, v___x_1071_, v___x_1072_, v___x_1072_);
v___x_1074_ = lean_string_append(v___x_1068_, v___x_1073_);
lean_dec_ref(v___x_1073_);
v___x_1075_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(v___x_1074_, v_a_1067_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1074_);
return v___x_1075_;
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec_ref(v_key_1057_);
v_a_1076_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1066_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1066_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___boxed(lean_object* v_o_1084_, lean_object* v_key_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_o_1084_, v_key_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState(lean_object* v_ws_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = ((lean_object*)(l_Lasm_Web_WebSocket_readyState___closed__0));
v___x_1092_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_ws_1089_, v___x_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1123_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1095_ = v___x_1092_;
v_isShared_1096_ = v_isSharedCheck_1123_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1123_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; uint8_t v___x_1098_; 
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = lean_nat_dec_eq(v_a_1093_, v___x_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_dec_eq(v_a_1093_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = lean_unsigned_to_nat(2u);
v___x_1102_ = lean_nat_dec_eq(v_a_1093_, v___x_1101_);
lean_dec(v_a_1093_);
if (v___x_1102_ == 0)
{
uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1103_ = 3;
v___x_1104_ = lean_box(v___x_1103_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1104_);
v___x_1106_ = v___x_1095_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
else
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1108_ = 2;
v___x_1109_ = lean_box(v___x_1108_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1109_);
v___x_1111_ = v___x_1095_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
else
{
uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
lean_dec(v_a_1093_);
v___x_1113_ = 1;
v___x_1114_ = lean_box(v___x_1113_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1114_);
v___x_1116_ = v___x_1095_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
uint8_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
lean_dec(v_a_1093_);
v___x_1118_ = 0;
v___x_1119_ = lean_box(v___x_1118_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1119_);
v___x_1121_ = v___x_1095_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_a_1124_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1092_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1092_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState___boxed(lean_object* v_ws_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lasm_Web_WebSocket_readyState(v_ws_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount(lean_object* v_ws_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lasm_Web_WebSocket_bufferedAmount___closed__0));
v___x_1139_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_ws_1136_, v___x_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount___boxed(lean_object* v_ws_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lasm_Web_WebSocket_bufferedAmount(v_ws_1140_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol(lean_object* v_ws_1144_){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = ((lean_object*)(l_Lasm_Web_WebSocket_protocol___closed__0));
v___x_1147_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_ws_1144_, v___x_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol___boxed(lean_object* v_ws_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lasm_Web_WebSocket_protocol(v_ws_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0(lean_object* v_f_1151_, lean_object* v_x_1152_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_apply_1(v_f_1151_, lean_box(0));
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0___boxed(lean_object* v_f_1155_, lean_object* v_x_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lasm_Web_WebSocket_onOpen___lam__0(v_f_1155_, v_x_1156_);
lean_dec(v_x_1156_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen(lean_object* v_ws_1162_, lean_object* v_f_1163_){
_start:
{
lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___f_1165_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onOpen___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1165_, 0, v_f_1163_);
v___x_1166_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__0));
v___x_1167_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1168_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1162_, v___x_1166_, v___f_1165_, v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___boxed(lean_object* v_ws_1169_, lean_object* v_f_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lasm_Web_WebSocket_onOpen(v_ws_1169_, v_f_1170_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0(lean_object* v_f_1173_, lean_object* v_e_1174_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lasm_Web_Raw_messageData(v_e_1174_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1178_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v___x_1178_ = lean_apply_2(v_f_1173_, v_a_1177_, lean_box(0));
return v___x_1178_;
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_f_1173_);
v_a_1179_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1176_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1176_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0___boxed(lean_object* v_f_1187_, lean_object* v_e_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lasm_Web_WebSocket_onMessage___lam__0(v_f_1187_, v_e_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage(lean_object* v_ws_1192_, lean_object* v_f_1193_){
_start:
{
lean_object* v___f_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___f_1195_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onMessage___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1195_, 0, v_f_1193_);
v___x_1196_ = ((lean_object*)(l_Lasm_Web_WebSocket_onMessage___closed__0));
v___x_1197_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1198_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1192_, v___x_1196_, v___f_1195_, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___boxed(lean_object* v_ws_1199_, lean_object* v_f_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lasm_Web_WebSocket_onMessage(v_ws_1199_, v_f_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0(lean_object* v_f_1203_, lean_object* v_e_1204_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lasm_Web_Raw_closeInfo(v_e_1204_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1206_, 1);
v___x_1208_ = lean_apply_2(v_f_1203_, v_a_1207_, lean_box(0));
return v___x_1208_;
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec_ref(v_f_1203_);
v_a_1209_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1206_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1206_);
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
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0___boxed(lean_object* v_f_1217_, lean_object* v_e_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lasm_Web_WebSocket_onClose___lam__0(v_f_1217_, v_e_1218_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose(lean_object* v_ws_1221_, lean_object* v_f_1222_){
_start:
{
lean_object* v___f_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___f_1224_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onClose___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1224_, 0, v_f_1222_);
v___x_1225_ = ((lean_object*)(l_Lasm_Web_WebSocket_close___closed__0));
v___x_1226_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1227_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1221_, v___x_1225_, v___f_1224_, v___x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___boxed(lean_object* v_ws_1228_, lean_object* v_f_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_Web_WebSocket_onClose(v_ws_1228_, v_f_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError(lean_object* v_ws_1233_, lean_object* v_f_1234_){
_start:
{
lean_object* v___f_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___f_1236_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onOpen___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1236_, 0, v_f_1234_);
v___x_1237_ = ((lean_object*)(l_Lasm_Web_WebSocket_onError___closed__0));
v___x_1238_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1239_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1233_, v___x_1237_, v___f_1236_, v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError___boxed(lean_object* v_ws_1240_, lean_object* v_f_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l_Lasm_Web_WebSocket_onError(v_ws_1240_, v_f_1241_);
return v_res_1243_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
lean_object* initialize_Lasm_Web_Events(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_WebSocket(uint8_t builtin) {
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
l_Lasm_Web_instFromJSCloseInfo = _init_l_Lasm_Web_instFromJSCloseInfo();
lean_mark_persistent(l_Lasm_Web_instFromJSCloseInfo);
l_Lasm_Web_instInhabitedReadyState_default = _init_l_Lasm_Web_instInhabitedReadyState_default();
l_Lasm_Web_instInhabitedReadyState = _init_l_Lasm_Web_instInhabitedReadyState();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
