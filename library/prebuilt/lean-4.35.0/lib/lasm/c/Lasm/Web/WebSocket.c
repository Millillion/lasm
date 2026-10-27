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
lean_object* l_Lasm_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11_value;
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " (expected text or bytes)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_Web_Message_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_text_8_; lean_object* v___x_9_; 
v_text_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_text_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_text_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lasm_Web_Message_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim___redArg(lean_object* v_t_22_, lean_object* v_text_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_22_, v_text_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_text_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_text_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_26_, v_text_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim___redArg(lean_object* v_t_30_, lean_object* v_bytes_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_30_, v_bytes_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Message_bytes_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_bytes_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_Web_Message_ctorElim___redArg(v_t_34_, v_bytes_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSMessage___lam__0(lean_object* v_x_46_){
_start:
{
switch(lean_obj_tag(v_x_46_))
{
case 4:
{
lean_object* v_s_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_55_; 
v_s_47_ = lean_ctor_get(v_x_46_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_x_46_);
if (v_isSharedCheck_55_ == 0)
{
v___x_49_ = v_x_46_;
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_s_47_);
lean_dec(v_x_46_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
lean_ctor_set_tag(v___x_49_, 0);
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_s_47_);
v___x_52_ = v_reuseFailAlloc_54_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_53_; 
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
case 6:
{
lean_object* v_b_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_64_; 
v_b_56_ = lean_ctor_get(v_x_46_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v_x_46_);
if (v_isSharedCheck_64_ == 0)
{
v___x_58_ = v_x_46_;
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_b_56_);
lean_dec(v_x_46_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 1);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_b_56_);
v___x_61_ = v_reuseFailAlloc_63_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
}
default: 
{
lean_object* v___x_65_; 
lean_dec(v_x_46_);
v___x_65_ = ((lean_object*)(l_Lasm_Web_instFromJSMessage___lam__0___closed__1));
return v___x_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0(lean_object* v___x_76_, lean_object* v___x_77_, lean_object* v___x_78_, lean_object* v_d_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0));
v___x_81_ = l_Lasm_JS_readField___redArg(v___x_76_, v_d_79_, v___x_80_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_89_; 
lean_dec_ref(v___x_78_);
lean_dec_ref(v___x_77_);
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_89_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_a_82_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
else
{
lean_object* v_a_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v_a_90_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_90_);
lean_dec_ref_known(v___x_81_, 1);
v___x_91_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1));
v___x_92_ = l_Lasm_JS_readField___redArg(v___x_77_, v_d_79_, v___x_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
lean_dec(v_a_90_);
lean_dec_ref(v___x_78_);
v_a_93_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_92_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_92_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_a_101_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_92_, 1);
v___x_102_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2));
v___x_103_ = l_Lasm_JS_readField___redArg(v___x_78_, v_d_79_, v___x_102_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v_a_101_);
lean_dec(v_a_90_);
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_121_; 
v_a_112_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_121_ == 0)
{
v___x_114_ = v___x_103_;
v_isShared_115_ = v_isSharedCheck_121_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_103_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_121_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_119_; 
v___x_116_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_116_, 0, v_a_90_);
lean_ctor_set(v___x_116_, 1, v_a_101_);
v___x_117_ = lean_unbox(v_a_112_);
lean_dec(v_a_112_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*2, v___x_117_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_116_);
v___x_119_ = v___x_114_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_116_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSCloseInfo___lam__0___boxed(lean_object* v___x_122_, lean_object* v___x_123_, lean_object* v___x_124_, lean_object* v_d_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lasm_Web_instFromJSCloseInfo___lam__0(v___x_122_, v___x_123_, v___x_124_, v_d_125_);
lean_dec(v_d_125_);
return v_res_126_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo___closed__0(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___f_130_; 
v___x_127_ = l_Lasm_JS_instFromJSBool;
v___x_128_ = l_Lasm_JS_instFromJSString;
v___x_129_ = l_Lasm_JS_instFromJSNat;
v___f_130_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___boxed), 4, 3);
lean_closure_set(v___f_130_, 0, v___x_129_);
lean_closure_set(v___f_130_, 1, v___x_128_);
lean_closure_set(v___f_130_, 2, v___x_127_);
return v___f_130_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo___closed__2(void){
_start:
{
uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___f_134_; lean_object* v___x_135_; 
v___x_132_ = 0;
v___x_133_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___closed__1));
v___f_134_ = lean_obj_once(&l_Lasm_Web_instFromJSCloseInfo___closed__0, &l_Lasm_Web_instFromJSCloseInfo___closed__0_once, _init_l_Lasm_Web_instFromJSCloseInfo___closed__0);
v___x_135_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_135_, 0, v___f_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*2, v___x_132_);
return v___x_135_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSCloseInfo(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_obj_once(&l_Lasm_Web_instFromJSCloseInfo___closed__2, &l_Lasm_Web_instFromJSCloseInfo___closed__2_once, _init_l_Lasm_Web_instFromJSCloseInfo___closed__2);
return v___x_136_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(8u);
v___x_156_ = lean_nat_to_int(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(10u);
v___x_163_ = lean_nat_to_int(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(12u);
v___x_167_ = lean_nat_to_int(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__0));
v___x_170_ = lean_string_length(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__14);
v___x_172_ = lean_nat_to_int(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___redArg(lean_object* v_x_177_){
_start:
{
lean_object* v_code_178_; lean_object* v_reason_179_; uint8_t v_wasClean_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_code_178_ = lean_ctor_get(v_x_177_, 0);
lean_inc(v_code_178_);
v_reason_179_ = lean_ctor_get(v_x_177_, 1);
lean_inc_ref(v_reason_179_);
v_wasClean_180_ = lean_ctor_get_uint8(v_x_177_, sizeof(void*)*2);
lean_dec_ref(v_x_177_);
v___x_181_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__4));
v___x_182_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__5));
v___x_183_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__6);
v___x_184_ = l_Nat_reprFast(v_code_178_);
v___x_185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
v___x_186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_183_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = 0;
v___x_188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_187_);
v___x_189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_182_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__8));
v___x_191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_189_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
v___x_192_ = lean_box(1);
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__9));
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_181_);
v___x_197_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__10);
v___x_198_ = l_String_quote(v_reason_179_);
v___x_199_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
v___x_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_197_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set_uint8(v___x_201_, sizeof(void*)*1, v___x_187_);
v___x_202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_196_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_190_);
v___x_204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_192_);
v___x_205_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__11));
v___x_206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_181_);
v___x_208_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__12);
v___x_209_ = l_Bool_repr___redArg(v_wasClean_180_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_211_, sizeof(void*)*1, v___x_187_);
v___x_212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_207_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = lean_obj_once(&l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__15);
v___x_214_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__16));
v___x_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_212_);
v___x_216_ = ((lean_object*)(l_Lasm_Web_instReprCloseInfo_repr___redArg___closed__17));
v___x_217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_213_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_187_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr(lean_object* v_x_220_, lean_object* v_prec_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lasm_Web_instReprCloseInfo_repr___redArg(v_x_220_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprCloseInfo_repr___boxed(lean_object* v_x_223_, lean_object* v_prec_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_Web_instReprCloseInfo_repr(v_x_223_, v_prec_224_);
lean_dec(v_prec_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx(uint8_t v_x_228_){
_start:
{
switch(v_x_228_)
{
case 0:
{
lean_object* v___x_229_; 
v___x_229_ = lean_unsigned_to_nat(0u);
return v___x_229_;
}
case 1:
{
lean_object* v___x_230_; 
v___x_230_ = lean_unsigned_to_nat(1u);
return v___x_230_;
}
case 2:
{
lean_object* v___x_231_; 
v___x_231_ = lean_unsigned_to_nat(2u);
return v___x_231_;
}
default: 
{
lean_object* v___x_232_; 
v___x_232_ = lean_unsigned_to_nat(3u);
return v___x_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorIdx___boxed(lean_object* v_x_233_){
_start:
{
uint8_t v_x_boxed_234_; lean_object* v_res_235_; 
v_x_boxed_234_ = lean_unbox(v_x_233_);
v_res_235_ = l_Lasm_Web_ReadyState_ctorIdx(v_x_boxed_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg(lean_object* v_k_236_){
_start:
{
lean_inc(v_k_236_);
return v_k_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___redArg___boxed(lean_object* v_k_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lasm_Web_ReadyState_ctorElim___redArg(v_k_237_);
lean_dec(v_k_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim(lean_object* v_motive_239_, lean_object* v_ctorIdx_240_, uint8_t v_t_241_, lean_object* v_h_242_, lean_object* v_k_243_){
_start:
{
lean_inc(v_k_243_);
return v_k_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_ctorElim___boxed(lean_object* v_motive_244_, lean_object* v_ctorIdx_245_, lean_object* v_t_246_, lean_object* v_h_247_, lean_object* v_k_248_){
_start:
{
uint8_t v_t_boxed_249_; lean_object* v_res_250_; 
v_t_boxed_249_ = lean_unbox(v_t_246_);
v_res_250_ = l_Lasm_Web_ReadyState_ctorElim(v_motive_244_, v_ctorIdx_245_, v_t_boxed_249_, v_h_247_, v_k_248_);
lean_dec(v_k_248_);
lean_dec(v_ctorIdx_245_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg(lean_object* v_connecting_251_){
_start:
{
lean_inc(v_connecting_251_);
return v_connecting_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___redArg___boxed(lean_object* v_connecting_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lasm_Web_ReadyState_connecting_elim___redArg(v_connecting_252_);
lean_dec(v_connecting_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim(lean_object* v_motive_254_, uint8_t v_t_255_, lean_object* v_h_256_, lean_object* v_connecting_257_){
_start:
{
lean_inc(v_connecting_257_);
return v_connecting_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_connecting_elim___boxed(lean_object* v_motive_258_, lean_object* v_t_259_, lean_object* v_h_260_, lean_object* v_connecting_261_){
_start:
{
uint8_t v_t_boxed_262_; lean_object* v_res_263_; 
v_t_boxed_262_ = lean_unbox(v_t_259_);
v_res_263_ = l_Lasm_Web_ReadyState_connecting_elim(v_motive_258_, v_t_boxed_262_, v_h_260_, v_connecting_261_);
lean_dec(v_connecting_261_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg(lean_object* v_open_264_){
_start:
{
lean_inc(v_open_264_);
return v_open_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___redArg___boxed(lean_object* v_open_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lasm_Web_ReadyState_open_elim___redArg(v_open_265_);
lean_dec(v_open_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim(lean_object* v_motive_267_, uint8_t v_t_268_, lean_object* v_h_269_, lean_object* v_open_270_){
_start:
{
lean_inc(v_open_270_);
return v_open_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_open_elim___boxed(lean_object* v_motive_271_, lean_object* v_t_272_, lean_object* v_h_273_, lean_object* v_open_274_){
_start:
{
uint8_t v_t_boxed_275_; lean_object* v_res_276_; 
v_t_boxed_275_ = lean_unbox(v_t_272_);
v_res_276_ = l_Lasm_Web_ReadyState_open_elim(v_motive_271_, v_t_boxed_275_, v_h_273_, v_open_274_);
lean_dec(v_open_274_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg(lean_object* v_closing_277_){
_start:
{
lean_inc(v_closing_277_);
return v_closing_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___redArg___boxed(lean_object* v_closing_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lasm_Web_ReadyState_closing_elim___redArg(v_closing_278_);
lean_dec(v_closing_278_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim(lean_object* v_motive_280_, uint8_t v_t_281_, lean_object* v_h_282_, lean_object* v_closing_283_){
_start:
{
lean_inc(v_closing_283_);
return v_closing_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closing_elim___boxed(lean_object* v_motive_284_, lean_object* v_t_285_, lean_object* v_h_286_, lean_object* v_closing_287_){
_start:
{
uint8_t v_t_boxed_288_; lean_object* v_res_289_; 
v_t_boxed_288_ = lean_unbox(v_t_285_);
v_res_289_ = l_Lasm_Web_ReadyState_closing_elim(v_motive_284_, v_t_boxed_288_, v_h_286_, v_closing_287_);
lean_dec(v_closing_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg(lean_object* v_closed_290_){
_start:
{
lean_inc(v_closed_290_);
return v_closed_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___redArg___boxed(lean_object* v_closed_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lasm_Web_ReadyState_closed_elim___redArg(v_closed_291_);
lean_dec(v_closed_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim(lean_object* v_motive_293_, uint8_t v_t_294_, lean_object* v_h_295_, lean_object* v_closed_296_){
_start:
{
lean_inc(v_closed_296_);
return v_closed_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_ReadyState_closed_elim___boxed(lean_object* v_motive_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_closed_300_){
_start:
{
uint8_t v_t_boxed_301_; lean_object* v_res_302_; 
v_t_boxed_301_ = lean_unbox(v_t_298_);
v_res_302_ = l_Lasm_Web_ReadyState_closed_elim(v_motive_297_, v_t_boxed_301_, v_h_299_, v_closed_300_);
lean_dec(v_closed_300_);
return v_res_302_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Web_instBEqReadyState_beq(uint8_t v_x_303_, uint8_t v_y_304_){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_305_ = l_Lasm_Web_ReadyState_ctorIdx(v_x_303_);
v___x_306_ = l_Lasm_Web_ReadyState_ctorIdx(v_y_304_);
v___x_307_ = lean_nat_dec_eq(v___x_305_, v___x_306_);
lean_dec(v___x_306_);
lean_dec(v___x_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instBEqReadyState_beq___boxed(lean_object* v_x_308_, lean_object* v_y_309_){
_start:
{
uint8_t v_x_21__boxed_310_; uint8_t v_y_22__boxed_311_; uint8_t v_res_312_; lean_object* v_r_313_; 
v_x_21__boxed_310_ = lean_unbox(v_x_308_);
v_y_22__boxed_311_ = lean_unbox(v_y_309_);
v_res_312_ = l_Lasm_Web_instBEqReadyState_beq(v_x_21__boxed_310_, v_y_22__boxed_311_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
static uint8_t _init_l_Lasm_Web_instInhabitedReadyState_default(void){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = 0;
return v___x_316_;
}
}
static uint8_t _init_l_Lasm_Web_instInhabitedReadyState(void){
_start:
{
uint8_t v___x_317_; 
v___x_317_ = 0;
return v___x_317_;
}
}
static lean_object* _init_l_Lasm_Web_instReprReadyState_repr___closed__8(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = lean_nat_to_int(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Lasm_Web_instReprReadyState_repr___closed__9(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_to_int(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr(uint8_t v_x_334_, lean_object* v_prec_335_){
_start:
{
lean_object* v___y_337_; lean_object* v___y_344_; lean_object* v___y_351_; lean_object* v___y_358_; 
switch(v_x_334_)
{
case 0:
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(1024u);
v___x_365_ = lean_nat_dec_le(v___x_364_, v_prec_335_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_337_ = v___x_366_;
goto v___jp_336_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_337_ = v___x_367_;
goto v___jp_336_;
}
}
case 1:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(1024u);
v___x_369_ = lean_nat_dec_le(v___x_368_, v_prec_335_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_344_ = v___x_370_;
goto v___jp_343_;
}
else
{
lean_object* v___x_371_; 
v___x_371_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_344_ = v___x_371_;
goto v___jp_343_;
}
}
case 2:
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_unsigned_to_nat(1024u);
v___x_373_ = lean_nat_dec_le(v___x_372_, v_prec_335_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_351_ = v___x_374_;
goto v___jp_350_;
}
else
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_351_ = v___x_375_;
goto v___jp_350_;
}
}
default: 
{
lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_376_ = lean_unsigned_to_nat(1024u);
v___x_377_ = lean_nat_dec_le(v___x_376_, v_prec_335_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__8, &l_Lasm_Web_instReprReadyState_repr___closed__8_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__8);
v___y_358_ = v___x_378_;
goto v___jp_357_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Lasm_Web_instReprReadyState_repr___closed__9, &l_Lasm_Web_instReprReadyState_repr___closed__9_once, _init_l_Lasm_Web_instReprReadyState_repr___closed__9);
v___y_358_ = v___x_379_;
goto v___jp_357_;
}
}
}
v___jp_336_:
{
lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_338_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__1));
lean_inc(v___y_337_);
v___x_339_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_339_, 0, v___y_337_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
v___x_340_ = 0;
v___x_341_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_341_, 0, v___x_339_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*1, v___x_340_);
v___x_342_ = l_Repr_addAppParen(v___x_341_, v_prec_335_);
return v___x_342_;
}
v___jp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_345_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__3));
lean_inc(v___y_344_);
v___x_346_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_346_, 0, v___y_344_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = 0;
v___x_348_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_348_, 0, v___x_346_);
lean_ctor_set_uint8(v___x_348_, sizeof(void*)*1, v___x_347_);
v___x_349_ = l_Repr_addAppParen(v___x_348_, v_prec_335_);
return v___x_349_;
}
v___jp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_352_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__5));
lean_inc(v___y_351_);
v___x_353_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_353_, 0, v___y_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = 0;
v___x_355_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_355_, 0, v___x_353_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*1, v___x_354_);
v___x_356_ = l_Repr_addAppParen(v___x_355_, v_prec_335_);
return v___x_356_;
}
v___jp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_359_ = ((lean_object*)(l_Lasm_Web_instReprReadyState_repr___closed__7));
lean_inc(v___y_358_);
v___x_360_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_360_, 0, v___y_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = 0;
v___x_362_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set_uint8(v___x_362_, sizeof(void*)*1, v___x_361_);
v___x_363_ = l_Repr_addAppParen(v___x_362_, v_prec_335_);
return v___x_363_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprReadyState_repr___boxed(lean_object* v_x_380_, lean_object* v_prec_381_){
_start:
{
uint8_t v_x_225__boxed_382_; lean_object* v_res_383_; 
v_x_225__boxed_382_ = lean_unbox(v_x_380_);
v_res_383_ = l_Lasm_Web_instReprReadyState_repr(v_x_225__boxed_382_, v_prec_381_);
lean_dec(v_prec_381_);
return v_res_383_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_391_ = lean_string_utf8_byte_size(v___x_390_);
return v___x_391_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__4);
v___x_394_ = lean_nat_dec_eq(v___x_393_, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__9));
v___x_400_ = lean_unsigned_to_nat(46u);
v___x_401_ = lean_unsigned_to_nat(193u);
v___x_402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__8));
v___x_403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__7));
v___x_404_ = l_mkPanicMessageWithDecl(v___x_403_, v___x_402_, v___x_401_, v___x_400_, v___x_399_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(lean_object* v_context_406_, lean_object* v_d_407_){
_start:
{
lean_object* v___y_410_; lean_object* v___y_411_; 
if (lean_obj_tag(v_d_407_) == 9)
{
lean_object* v_value_415_; lean_object* v___x_416_; 
v_value_415_ = lean_ctor_get(v_d_407_, 0);
lean_inc(v_value_415_);
lean_dec_ref_known(v_d_407_, 2);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v_value_415_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v_received_419_; 
v___x_417_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
if (lean_obj_tag(v_d_407_) == 9)
{
lean_object* v_value_433_; lean_object* v_description_434_; uint8_t v___x_435_; 
v_value_433_ = lean_ctor_get(v_d_407_, 0);
v_description_434_ = lean_ctor_get(v_d_407_, 1);
v___x_435_ = lean_string_dec_eq(v_description_434_, v___x_417_);
if (v___x_435_ == 0)
{
goto v___jp_431_;
}
else
{
uint32_t v___x_436_; uint64_t v___x_437_; lean_object* v___x_438_; uint32_t v___x_439_; lean_object* v___x_440_; 
lean_inc_n(v_value_433_, 2);
lean_dec_ref_known(v_d_407_, 2);
v___x_436_ = 206;
v___x_437_ = 0ULL;
v___x_438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_438_, 0, v_value_433_);
lean_ctor_set(v___x_438_, 1, v___x_417_);
v___x_439_ = lasm_js_value_handle(v_value_433_);
lean_dec(v_value_433_);
v___x_440_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_436_, v___x_437_, v___x_438_, v___x_439_);
lean_dec_ref_known(v___x_438_, 2);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; uint8_t v___x_442_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = lean_string_validate_utf8(v_a_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_a_441_);
v___x_443_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10);
v___x_444_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_443_);
v_received_419_ = v___x_444_;
goto v___jp_418_;
}
else
{
lean_object* v___x_445_; 
v___x_445_ = lean_string_from_utf8_unchecked(v_a_441_);
v_received_419_ = v___x_445_;
goto v___jp_418_;
}
}
else
{
lean_object* v___x_446_; 
lean_dec_ref_known(v___x_440_, 1);
v___x_446_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11));
v_received_419_ = v___x_446_;
goto v___jp_418_;
}
}
}
else
{
goto v___jp_431_;
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_421_ = lean_string_append(v___x_420_, v_context_406_);
v___x_422_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_423_ = lean_string_append(v___x_421_, v___x_422_);
v___x_424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__2));
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
v___x_426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
v___x_428_ = lean_string_append(v___x_427_, v_received_419_);
lean_dec_ref(v_received_419_);
v___x_429_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__5);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; 
v___x_430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__6));
v___y_410_ = v___x_428_;
v___y_411_ = v___x_430_;
goto v___jp_409_;
}
else
{
v___y_410_ = v___x_428_;
v___y_411_ = v___x_417_;
goto v___jp_409_;
}
}
v___jp_431_:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_JS_Data_describe(v_d_407_);
v_received_419_ = v___x_432_;
goto v___jp_418_;
}
}
v___jp_409_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_string_append(v___y_410_, v___y_411_);
v___x_413_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___boxed(lean_object* v_context_447_, lean_object* v_d_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(v_context_447_, v_d_448_);
lean_dec_ref(v_context_447_);
return v_res_450_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1(void){
_start:
{
uint8_t v___x_452_; uint64_t v___x_453_; 
v___x_452_ = 1;
v___x_453_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(lean_object* v_b_454_, lean_object* v_args_455_, uint8_t v_await_456_){
_start:
{
uint64_t v___y_459_; uint64_t v___y_460_; uint64_t v___x_503_; uint64_t v___y_505_; 
v___x_503_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__1);
if (v_await_456_ == 0)
{
uint64_t v___x_510_; 
v___x_510_ = 0ULL;
v___y_505_ = v___x_510_;
goto v___jp_504_;
}
else
{
uint64_t v___x_511_; 
v___x_511_ = 2ULL;
v___y_505_ = v___x_511_;
goto v___jp_504_;
}
v___jp_458_:
{
uint64_t v_flags_461_; uint32_t v___x_462_; lean_object* v___x_463_; uint32_t v___x_464_; lean_object* v___x_465_; 
v_flags_461_ = lean_uint64_lor(v___y_459_, v___y_460_);
v___x_462_ = 214;
v___x_463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_454_, v_args_455_);
v___x_464_ = 0;
v___x_465_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_462_, v_flags_461_, v___x_463_, v___x_464_);
lean_dec(v___x_463_);
if (lean_obj_tag(v___x_465_) == 0)
{
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = l_Lasm_JS_Wire_decode(v_a_466_);
lean_dec(v_a_466_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v___x_469_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_454_);
v___x_470_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1(v___x_469_, v_a_468_);
lean_dec_ref(v___x_469_);
return v___x_470_;
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_a_471_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_467_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_467_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
v_a_479_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_465_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_465_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
lean_ctor_set_tag(v___x_481_, 1);
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_502_; 
v_a_487_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_502_ == 0)
{
v___x_489_ = v___x_465_;
v_isShared_490_ = v_isSharedCheck_502_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_465_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_502_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_492_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_454_);
v___x_493_ = lean_string_append(v___x_491_, v___x_492_);
lean_dec_ref(v___x_492_);
v___x_494_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
v___x_496_ = lean_io_error_to_string(v_a_487_);
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
lean_dec_ref(v___x_496_);
v___x_498_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_498_);
v___x_500_ = v___x_489_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
v___jp_504_:
{
uint8_t v_construct_506_; uint64_t v___x_507_; 
v_construct_506_ = lean_ctor_get_uint8(v_b_454_, sizeof(void*)*4);
v___x_507_ = lean_uint64_lor(v___x_503_, v___y_505_);
if (v_construct_506_ == 0)
{
uint64_t v___x_508_; 
v___x_508_ = 0ULL;
v___y_459_ = v___x_507_;
v___y_460_ = v___x_508_;
goto v___jp_458_;
}
else
{
uint64_t v___x_509_; 
v___x_509_ = 4ULL;
v___y_459_ = v___x_507_;
v___y_460_ = v___x_509_;
goto v___jp_458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___boxed(lean_object* v_b_512_, lean_object* v_args_513_, lean_object* v_await_514_, lean_object* v_a_515_){
_start:
{
uint8_t v_await_boxed_516_; lean_object* v_res_517_; 
v_await_boxed_516_ = lean_unbox(v_await_514_);
v_res_517_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(v_b_512_, v_args_513_, v_await_boxed_516_);
lean_dec_ref(v_b_512_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(size_t v_sz_518_, size_t v_i_519_, lean_object* v_bs_520_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = lean_usize_dec_lt(v_i_519_, v_sz_518_);
if (v___x_521_ == 0)
{
return v_bs_520_;
}
else
{
lean_object* v_v_522_; lean_object* v___x_523_; lean_object* v_bs_x27_524_; lean_object* v___x_525_; size_t v___x_526_; size_t v___x_527_; lean_object* v___x_528_; 
v_v_522_ = lean_array_uget(v_bs_520_, v_i_519_);
v___x_523_ = lean_unsigned_to_nat(0u);
v_bs_x27_524_ = lean_array_uset(v_bs_520_, v_i_519_, v___x_523_);
v___x_525_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_525_, 0, v_v_522_);
v___x_526_ = ((size_t)1ULL);
v___x_527_ = lean_usize_add(v_i_519_, v___x_526_);
v___x_528_ = lean_array_uset(v_bs_x27_524_, v_i_519_, v___x_525_);
v_i_519_ = v___x_527_;
v_bs_520_ = v___x_528_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0___boxed(lean_object* v_sz_530_, lean_object* v_i_531_, lean_object* v_bs_532_){
_start:
{
size_t v_sz_boxed_533_; size_t v_i_boxed_534_; lean_object* v_res_535_; 
v_sz_boxed_533_ = lean_unbox_usize(v_sz_530_);
lean_dec(v_sz_530_);
v_i_boxed_534_ = lean_unbox_usize(v_i_531_);
lean_dec(v_i_531_);
v_res_535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(v_sz_boxed_533_, v_i_boxed_534_, v_bs_532_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket(lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; size_t v_sz_553_; size_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___x_561_; 
v___x_549_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__2));
v___x_550_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_551_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_551_, 0, v_a_545_);
v___x_552_ = lean_array_push(v___x_550_, v___x_551_);
v_sz_553_ = lean_array_size(v_a_546_);
v___x_554_ = ((size_t)0ULL);
v___x_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_webSocket_spec__0(v_sz_553_, v___x_554_, v_a_546_);
v___x_556_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
v___x_557_ = lean_array_push(v___x_552_, v___x_556_);
v___x_558_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_558_, 0, v_a_547_);
v___x_559_ = lean_array_push(v___x_557_, v___x_558_);
v___x_560_ = 1;
v___x_561_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1(v___x_549_, v___x_559_, v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_webSocket___boxed(lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_Web_Raw_webSocket(v_a_562_, v_a_563_, v_a_564_);
return v_res_566_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = ((lean_object*)(l_Lasm_Web_instFromJSMessage___lam__0___closed__0));
v___x_568_ = lean_string_utf8_byte_size(v___x_567_);
return v___x_568_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__0);
v___x_571_ = lean_nat_dec_eq(v___x_570_, v___x_569_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(lean_object* v_context_573_, lean_object* v_d_574_){
_start:
{
lean_object* v___y_577_; lean_object* v___y_578_; 
switch(lean_obj_tag(v_d_574_))
{
case 4:
{
lean_object* v_s_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_590_; 
v_s_582_ = lean_ctor_get(v_d_574_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_d_574_);
if (v_isSharedCheck_590_ == 0)
{
v___x_584_ = v_d_574_;
v_isShared_585_ = v_isSharedCheck_590_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_s_582_);
lean_dec(v_d_574_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_590_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 0);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_s_582_);
v___x_587_ = v_reuseFailAlloc_589_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
}
}
case 6:
{
lean_object* v_b_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_599_; 
v_b_591_ = lean_ctor_get(v_d_574_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v_d_574_);
if (v_isSharedCheck_599_ == 0)
{
v___x_593_ = v_d_574_;
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_b_591_);
lean_dec(v_d_574_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_599_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set_tag(v___x_593_, 1);
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_b_591_);
v___x_596_ = v_reuseFailAlloc_598_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
return v___x_597_;
}
}
}
default: 
{
lean_object* v_received_601_; 
if (lean_obj_tag(v_d_574_) == 9)
{
lean_object* v_value_616_; lean_object* v_description_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v_value_616_ = lean_ctor_get(v_d_574_, 0);
v_description_617_ = lean_ctor_get(v_d_574_, 1);
v___x_618_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_619_ = lean_string_dec_eq(v_description_617_, v___x_618_);
if (v___x_619_ == 0)
{
goto v___jp_614_;
}
else
{
uint32_t v___x_620_; uint64_t v___x_621_; lean_object* v___x_622_; uint32_t v___x_623_; lean_object* v___x_624_; 
lean_inc_n(v_value_616_, 2);
lean_dec_ref_known(v_d_574_, 2);
v___x_620_ = 206;
v___x_621_ = 0ULL;
v___x_622_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_622_, 0, v_value_616_);
lean_ctor_set(v___x_622_, 1, v___x_618_);
v___x_623_ = lasm_js_value_handle(v_value_616_);
lean_dec(v_value_616_);
v___x_624_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_620_, v___x_621_, v___x_622_, v___x_623_);
lean_dec_ref_known(v___x_622_, 2);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; uint8_t v___x_626_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_624_, 1);
v___x_626_ = lean_string_validate_utf8(v_a_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec(v_a_625_);
v___x_627_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10);
v___x_628_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_627_);
v_received_601_ = v___x_628_;
goto v___jp_600_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = lean_string_from_utf8_unchecked(v_a_625_);
v_received_601_ = v___x_629_;
goto v___jp_600_;
}
}
else
{
lean_object* v___x_630_; 
lean_dec_ref_known(v___x_624_, 1);
v___x_630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11));
v_received_601_ = v___x_630_;
goto v___jp_600_;
}
}
}
else
{
goto v___jp_614_;
}
v___jp_600_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_602_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_603_ = lean_string_append(v___x_602_, v_context_573_);
v___x_604_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_605_ = lean_string_append(v___x_603_, v___x_604_);
v___x_606_ = ((lean_object*)(l_Lasm_Web_instFromJSMessage___closed__1));
v___x_607_ = lean_string_append(v___x_605_, v___x_606_);
v___x_608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_609_ = lean_string_append(v___x_607_, v___x_608_);
v___x_610_ = lean_string_append(v___x_609_, v_received_601_);
lean_dec_ref(v_received_601_);
v___x_611_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__1);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
v___x_612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___closed__2));
v___y_577_ = v___x_610_;
v___y_578_ = v___x_612_;
goto v___jp_576_;
}
else
{
lean_object* v___x_613_; 
v___x_613_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___y_577_ = v___x_610_;
v___y_578_ = v___x_613_;
goto v___jp_576_;
}
}
v___jp_614_:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lasm_JS_Data_describe(v_d_574_);
v_received_601_ = v___x_615_;
goto v___jp_600_;
}
}
}
v___jp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_579_ = lean_string_append(v___y_577_, v___y_578_);
v___x_580_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0___boxed(lean_object* v_context_631_, lean_object* v_d_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(v_context_631_, v_d_632_);
lean_dec_ref(v_context_631_);
return v_res_634_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0(void){
_start:
{
uint8_t v___x_635_; uint64_t v___x_636_; 
v___x_635_ = 0;
v___x_636_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(lean_object* v_b_637_, lean_object* v_args_638_, uint8_t v_await_639_){
_start:
{
uint64_t v___y_642_; uint64_t v___y_643_; uint64_t v___x_686_; uint64_t v___y_688_; 
v___x_686_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
if (v_await_639_ == 0)
{
uint64_t v___x_693_; 
v___x_693_ = 0ULL;
v___y_688_ = v___x_693_;
goto v___jp_687_;
}
else
{
uint64_t v___x_694_; 
v___x_694_ = 2ULL;
v___y_688_ = v___x_694_;
goto v___jp_687_;
}
v___jp_641_:
{
uint64_t v_flags_644_; uint32_t v___x_645_; lean_object* v___x_646_; uint32_t v___x_647_; lean_object* v___x_648_; 
v_flags_644_ = lean_uint64_lor(v___y_642_, v___y_643_);
v___x_645_ = 214;
v___x_646_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_637_, v_args_638_);
v___x_647_ = 0;
v___x_648_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_645_, v_flags_644_, v___x_646_, v___x_647_);
lean_dec(v___x_646_);
if (lean_obj_tag(v___x_648_) == 0)
{
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_650_; 
v_a_649_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v___x_648_, 1);
v___x_650_ = l_Lasm_JS_Wire_decode(v_a_649_);
lean_dec(v_a_649_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_650_, 1);
v___x_652_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_637_);
v___x_653_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0_spec__0(v___x_652_, v_a_651_);
lean_dec_ref(v___x_652_);
return v___x_653_;
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
v_a_654_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_650_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_650_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
v_a_662_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_648_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_648_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set_tag(v___x_664_, 1);
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
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_685_; 
v_a_670_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_685_ == 0)
{
v___x_672_ = v___x_648_;
v_isShared_673_ = v_isSharedCheck_685_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_648_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_685_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_675_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_637_);
v___x_676_ = lean_string_append(v___x_674_, v___x_675_);
lean_dec_ref(v___x_675_);
v___x_677_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_678_ = lean_string_append(v___x_676_, v___x_677_);
v___x_679_ = lean_io_error_to_string(v_a_670_);
v___x_680_ = lean_string_append(v___x_678_, v___x_679_);
lean_dec_ref(v___x_679_);
v___x_681_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_681_);
v___x_683_ = v___x_672_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
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
v___jp_687_:
{
uint8_t v_construct_689_; uint64_t v___x_690_; 
v_construct_689_ = lean_ctor_get_uint8(v_b_637_, sizeof(void*)*4);
v___x_690_ = lean_uint64_lor(v___x_686_, v___y_688_);
if (v_construct_689_ == 0)
{
uint64_t v___x_691_; 
v___x_691_ = 0ULL;
v___y_642_ = v___x_690_;
v___y_643_ = v___x_691_;
goto v___jp_641_;
}
else
{
uint64_t v___x_692_; 
v___x_692_ = 4ULL;
v___y_642_ = v___x_690_;
v___y_643_ = v___x_692_;
goto v___jp_641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___boxed(lean_object* v_b_695_, lean_object* v_args_696_, lean_object* v_await_697_, lean_object* v_a_698_){
_start:
{
uint8_t v_await_boxed_699_; lean_object* v_res_700_; 
v_await_boxed_699_ = lean_unbox(v_await_697_);
v_res_700_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(v_b_695_, v_args_696_, v_await_boxed_699_);
lean_dec_ref(v_b_695_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData(lean_object* v_a_707_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; lean_object* v___x_715_; 
v___x_709_ = ((lean_object*)(l_Lasm_Web_Raw_messageData___closed__1));
v___x_710_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_711_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_712_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_707_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_array_push(v___x_710_, v___x_712_);
v___x_714_ = 1;
v___x_715_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0(v___x_709_, v___x_713_, v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_messageData___boxed(lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lasm_Web_Raw_messageData(v_a_716_);
return v_res_718_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_unsigned_to_nat(0u);
v___x_726_ = lean_nat_to_int(v___x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(lean_object* v_d_732_, lean_object* v_key_733_){
_start:
{
if (lean_obj_tag(v_d_732_) == 8)
{
lean_object* v___x_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_777_; 
v___x_734_ = l_Lasm_JS_Data_field(v_d_732_, v_key_733_);
v_isSharedCheck_777_ = !lean_is_exclusive(v_d_732_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v_d_732_, 0);
lean_dec(v_unused_778_);
v___x_736_ = v_d_732_;
v_isShared_737_ = v_isSharedCheck_777_;
goto v_resetjp_735_;
}
else
{
lean_dec(v_d_732_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_777_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_a_739_; lean_object* v_a_765_; 
switch(lean_obj_tag(v___x_734_))
{
case 3:
{
double v_n_771_; lean_object* v___x_772_; 
v_n_771_ = lean_ctor_get_float(v___x_734_, 0);
v___x_772_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_771_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v___x_773_; 
v___x_773_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8));
v_a_739_ = v___x_773_;
goto v___jp_738_;
}
else
{
lean_object* v_val_774_; 
v_val_774_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_val_774_);
lean_dec_ref_known(v___x_772_, 1);
v_a_765_ = v_val_774_;
goto v___jp_764_;
}
}
case 5:
{
lean_object* v_i_775_; 
v_i_775_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_i_775_);
v_a_765_ = v_i_775_;
goto v___jp_764_;
}
default: 
{
lean_object* v___x_776_; 
v___x_776_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v_a_739_ = v___x_776_;
goto v___jp_738_;
}
}
v___jp_738_:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_740_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__0));
v___x_741_ = lean_string_append(v___x_740_, v_key_733_);
v___x_742_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__1));
v___x_743_ = lean_string_append(v___x_741_, v___x_742_);
v___x_744_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2));
v___x_745_ = lean_string_append(v___x_743_, v___x_744_);
v___x_746_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__3));
v___x_747_ = lean_string_append(v___x_745_, v___x_746_);
v___x_748_ = l_Lasm_JS_Data_describe(v___x_734_);
v___x_749_ = lean_string_append(v___x_747_, v___x_748_);
lean_dec_ref(v___x_748_);
v___x_750_ = lean_string_utf8_byte_size(v_a_739_);
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_nat_dec_eq(v___x_750_, v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_753_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_754_ = lean_string_append(v___x_753_, v_a_739_);
v___x_755_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_756_ = lean_string_append(v___x_754_, v___x_755_);
v___x_757_ = lean_string_append(v___x_749_, v___x_756_);
lean_dec_ref(v___x_756_);
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
lean_ctor_set(v___x_736_, 0, v___x_757_);
v___x_759_ = v___x_736_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
else
{
lean_object* v___x_762_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
lean_ctor_set(v___x_736_, 0, v___x_749_);
v___x_762_ = v___x_736_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_749_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
v___jp_764_:
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6);
v___x_767_ = lean_int_dec_le(v___x_766_, v_a_765_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; 
lean_dec(v_a_765_);
v___x_768_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7));
v_a_739_ = v___x_768_;
goto v___jp_738_;
}
else
{
lean_object* v___x_769_; lean_object* v___x_770_; 
lean_del_object(v___x_736_);
lean_dec(v___x_734_);
v___x_769_ = l_Int_toNat(v_a_765_);
lean_dec(v_a_765_);
v___x_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
}
else
{
lean_object* v___x_779_; 
lean_dec(v_d_732_);
v___x_779_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__10));
return v___x_779_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_d_780_, lean_object* v_key_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(v_d_780_, v_key_781_);
lean_dec_ref(v_key_781_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(lean_object* v_context_783_, lean_object* v_d_784_){
_start:
{
lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_793_; lean_object* v_received_794_; lean_object* v___y_813_; lean_object* v_a_816_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__0));
lean_inc(v_d_784_);
v___x_841_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1(v_d_784_, v___x_840_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v_a_816_ = v_a_842_;
goto v___jp_815_;
}
else
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_841_, 1);
v___x_844_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__1));
lean_inc(v_d_784_);
v___x_845_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__0(v_d_784_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; 
lean_dec(v_a_843_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
v_a_816_ = v_a_846_;
goto v___jp_815_;
}
else
{
lean_object* v_a_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_a_847_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_845_, 1);
v___x_848_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___lam__0___closed__2));
lean_inc(v_d_784_);
v___x_849_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_Web_Event_info_spec__0_spec__1(v_d_784_, v___x_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; 
lean_dec(v_a_847_);
lean_dec(v_a_843_);
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v_a_816_ = v_a_850_;
goto v___jp_815_;
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_860_; 
lean_dec(v_d_784_);
v_a_851_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_860_ == 0)
{
v___x_853_ = v___x_849_;
v_isShared_854_ = v_isSharedCheck_860_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_849_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_860_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; uint8_t v___x_856_; lean_object* v___x_858_; 
v___x_855_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_855_, 0, v_a_843_);
lean_ctor_set(v___x_855_, 1, v_a_847_);
v___x_856_ = lean_unbox(v_a_851_);
lean_dec(v_a_851_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*2, v___x_856_);
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 0);
lean_ctor_set(v___x_853_, 0, v___x_855_);
v___x_858_ = v___x_853_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_855_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
v___jp_786_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_789_ = lean_string_append(v___y_787_, v___y_788_);
lean_dec_ref(v___y_788_);
v___x_790_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
return v___x_791_;
}
v___jp_792_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_795_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_796_ = lean_string_append(v___x_795_, v_context_783_);
v___x_797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_798_ = lean_string_append(v___x_796_, v___x_797_);
v___x_799_ = ((lean_object*)(l_Lasm_Web_instFromJSCloseInfo___closed__1));
v___x_800_ = lean_string_append(v___x_798_, v___x_799_);
v___x_801_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_802_ = lean_string_append(v___x_800_, v___x_801_);
v___x_803_ = lean_string_append(v___x_802_, v_received_794_);
lean_dec_ref(v_received_794_);
v___x_804_ = lean_string_utf8_byte_size(v___y_793_);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_nat_dec_eq(v___x_804_, v___x_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_807_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_808_ = lean_string_append(v___x_807_, v___y_793_);
lean_dec_ref(v___y_793_);
v___x_809_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_810_ = lean_string_append(v___x_808_, v___x_809_);
v___y_787_ = v___x_803_;
v___y_788_ = v___x_810_;
goto v___jp_786_;
}
else
{
lean_object* v___x_811_; 
lean_dec_ref(v___y_793_);
v___x_811_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___y_787_ = v___x_803_;
v___y_788_ = v___x_811_;
goto v___jp_786_;
}
}
v___jp_812_:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lasm_JS_Data_describe(v_d_784_);
v___y_793_ = v___y_813_;
v_received_794_ = v___x_814_;
goto v___jp_792_;
}
v___jp_815_:
{
if (lean_obj_tag(v_d_784_) == 9)
{
lean_object* v_value_817_; lean_object* v_description_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v_value_817_ = lean_ctor_get(v_d_784_, 0);
v_description_818_ = lean_ctor_get(v_d_784_, 1);
v___x_819_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_820_ = lean_string_dec_eq(v_description_818_, v___x_819_);
if (v___x_820_ == 0)
{
v___y_813_ = v_a_816_;
goto v___jp_812_;
}
else
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_837_; 
lean_inc(v_value_817_);
v_isSharedCheck_837_ = !lean_is_exclusive(v_d_784_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; lean_object* v_unused_839_; 
v_unused_838_ = lean_ctor_get(v_d_784_, 1);
lean_dec(v_unused_838_);
v_unused_839_ = lean_ctor_get(v_d_784_, 0);
lean_dec(v_unused_839_);
v___x_822_ = v_d_784_;
v_isShared_823_ = v_isSharedCheck_837_;
goto v_resetjp_821_;
}
else
{
lean_dec(v_d_784_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_837_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
uint32_t v___x_824_; uint64_t v___x_825_; lean_object* v___x_827_; 
v___x_824_ = 206;
v___x_825_ = 0ULL;
lean_inc(v_value_817_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v___x_819_);
v___x_827_ = v___x_822_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_value_817_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_819_);
v___x_827_ = v_reuseFailAlloc_836_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
uint32_t v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lasm_js_value_handle(v_value_817_);
lean_dec(v_value_817_);
v___x_829_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_824_, v___x_825_, v___x_827_, v___x_828_);
lean_dec_ref(v___x_827_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; uint8_t v___x_831_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_829_, 1);
v___x_831_ = lean_string_validate_utf8(v_a_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; 
lean_dec(v_a_830_);
v___x_832_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10);
v___x_833_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_832_);
v___y_793_ = v_a_816_;
v_received_794_ = v___x_833_;
goto v___jp_792_;
}
else
{
lean_object* v___x_834_; 
v___x_834_ = lean_string_from_utf8_unchecked(v_a_830_);
v___y_793_ = v_a_816_;
v_received_794_ = v___x_834_;
goto v___jp_792_;
}
}
else
{
lean_object* v___x_835_; 
lean_dec_ref_known(v___x_829_, 1);
v___x_835_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11));
v___y_793_ = v_a_816_;
v_received_794_ = v___x_835_;
goto v___jp_792_;
}
}
}
}
}
else
{
v___y_813_ = v_a_816_;
goto v___jp_812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0___boxed(lean_object* v_context_861_, lean_object* v_d_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(v_context_861_, v_d_862_);
lean_dec_ref(v_context_861_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(lean_object* v_b_865_, lean_object* v_args_866_, uint8_t v_await_867_){
_start:
{
uint64_t v___y_870_; uint64_t v___y_871_; uint64_t v___x_914_; uint64_t v___y_916_; 
v___x_914_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
if (v_await_867_ == 0)
{
uint64_t v___x_921_; 
v___x_921_ = 0ULL;
v___y_916_ = v___x_921_;
goto v___jp_915_;
}
else
{
uint64_t v___x_922_; 
v___x_922_ = 2ULL;
v___y_916_ = v___x_922_;
goto v___jp_915_;
}
v___jp_869_:
{
uint64_t v_flags_872_; uint32_t v___x_873_; lean_object* v___x_874_; uint32_t v___x_875_; lean_object* v___x_876_; 
v_flags_872_ = lean_uint64_lor(v___y_870_, v___y_871_);
v___x_873_ = 214;
v___x_874_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_865_, v_args_866_);
v___x_875_ = 0;
v___x_876_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_873_, v_flags_872_, v___x_874_, v___x_875_);
lean_dec(v___x_874_);
if (lean_obj_tag(v___x_876_) == 0)
{
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = l_Lasm_JS_Wire_decode(v_a_877_);
lean_dec(v_a_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_865_);
v___x_881_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0(v___x_880_, v_a_879_);
lean_dec_ref(v___x_880_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_a_882_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_878_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_878_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
v_a_890_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_876_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_876_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 1);
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_913_; 
v_a_898_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_913_ == 0)
{
v___x_900_ = v___x_876_;
v_isShared_901_ = v_isSharedCheck_913_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_876_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_913_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_902_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_903_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_865_);
v___x_904_ = lean_string_append(v___x_902_, v___x_903_);
lean_dec_ref(v___x_903_);
v___x_905_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1___closed__0));
v___x_906_ = lean_string_append(v___x_904_, v___x_905_);
v___x_907_ = lean_io_error_to_string(v_a_898_);
v___x_908_ = lean_string_append(v___x_906_, v___x_907_);
lean_dec_ref(v___x_907_);
v___x_909_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_909_);
v___x_911_ = v___x_900_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
v___jp_915_:
{
uint8_t v_construct_917_; uint64_t v___x_918_; 
v_construct_917_ = lean_ctor_get_uint8(v_b_865_, sizeof(void*)*4);
v___x_918_ = lean_uint64_lor(v___x_914_, v___y_916_);
if (v_construct_917_ == 0)
{
uint64_t v___x_919_; 
v___x_919_ = 0ULL;
v___y_870_ = v___x_918_;
v___y_871_ = v___x_919_;
goto v___jp_869_;
}
else
{
uint64_t v___x_920_; 
v___x_920_ = 4ULL;
v___y_870_ = v___x_918_;
v___y_871_ = v___x_920_;
goto v___jp_869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0___boxed(lean_object* v_b_923_, lean_object* v_args_924_, lean_object* v_await_925_, lean_object* v_a_926_){
_start:
{
uint8_t v_await_boxed_927_; lean_object* v_res_928_; 
v_await_boxed_927_ = lean_unbox(v_await_925_);
v_res_928_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(v_b_923_, v_args_924_, v_await_boxed_927_);
lean_dec_ref(v_b_923_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo(lean_object* v_a_935_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; uint8_t v___x_942_; lean_object* v___x_943_; 
v___x_937_ = ((lean_object*)(l_Lasm_Web_Raw_closeInfo___closed__1));
v___x_938_ = ((lean_object*)(l_Lasm_Web_Raw_webSocket___closed__3));
v___x_939_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_940_, 0, v_a_935_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_array_push(v___x_938_, v___x_940_);
v___x_942_ = 1;
v___x_943_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0(v___x_937_, v___x_941_, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_closeInfo___boxed(lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lasm_Web_Raw_closeInfo(v_a_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect(lean_object* v_url_948_, lean_object* v_protocols_949_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = ((lean_object*)(l_Lasm_Web_WebSocket_connect___closed__0));
v___x_952_ = l_Lasm_Web_Raw_webSocket(v_url_948_, v_protocols_949_, v___x_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_connect___boxed(lean_object* v_url_953_, lean_object* v_protocols_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lasm_Web_WebSocket_connect(v_url_953_, v_protocols_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send(lean_object* v_ws_958_, lean_object* v_text_959_){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_961_ = ((lean_object*)(l_Lasm_Web_WebSocket_send___closed__0));
v___x_962_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_962_, 0, v_text_959_);
v___x_963_ = lean_unsigned_to_nat(1u);
v___x_964_ = lean_mk_empty_array_with_capacity(v___x_963_);
v___x_965_ = lean_array_push(v___x_964_, v___x_962_);
v___x_966_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_958_, v___x_961_, v___x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_send___boxed(lean_object* v_ws_967_, lean_object* v_text_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lasm_Web_WebSocket_send(v_ws_967_, v_text_968_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes(lean_object* v_ws_971_, lean_object* v_bytes_972_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_974_ = ((lean_object*)(l_Lasm_Web_WebSocket_send___closed__0));
v___x_975_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_975_, 0, v_bytes_972_);
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = lean_mk_empty_array_with_capacity(v___x_976_);
v___x_978_ = lean_array_push(v___x_977_, v___x_975_);
v___x_979_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_971_, v___x_974_, v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_sendBytes___boxed(lean_object* v_ws_980_, lean_object* v_bytes_981_, lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lasm_Web_WebSocket_sendBytes(v_ws_980_, v_bytes_981_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close(lean_object* v_ws_985_, lean_object* v_code_986_, lean_object* v_reason_987_){
_start:
{
lean_object* v___x_989_; lean_object* v___y_991_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_989_ = ((lean_object*)(l_Lasm_Web_WebSocket_close___closed__0));
v___x_998_ = lean_nat_to_int(v_code_986_);
v___x_999_ = lean_nat_abs(v___x_998_);
v___x_1000_ = lean_cstr_to_nat("9007199254740991");
v___x_1001_ = lean_nat_dec_le(v___x_999_, v___x_1000_);
lean_dec(v___x_999_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_998_);
v___y_991_ = v___x_1002_;
goto v___jp_990_;
}
else
{
double v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = l_Float_ofInt(v___x_998_);
lean_dec(v___x_998_);
v___x_1004_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1004_, 0, v___x_1003_);
v___y_991_ = v___x_1004_;
goto v___jp_990_;
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_992_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_992_, 0, v_reason_987_);
v___x_993_ = lean_unsigned_to_nat(2u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_array_push(v___x_994_, v___y_991_);
v___x_996_ = lean_array_push(v___x_995_, v___x_992_);
v___x_997_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_ws_985_, v___x_989_, v___x_996_);
return v___x_997_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_close___boxed(lean_object* v_ws_1005_, lean_object* v_code_1006_, lean_object* v_reason_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lasm_Web_WebSocket_close(v_ws_1005_, v_code_1006_, v_reason_1007_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(lean_object* v_context_1010_, lean_object* v_d_1011_){
_start:
{
lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1020_; lean_object* v_received_1021_; lean_object* v___y_1040_; lean_object* v_a_1043_; lean_object* v_a_1068_; 
switch(lean_obj_tag(v_d_1011_))
{
case 3:
{
double v_n_1074_; lean_object* v___x_1075_; 
v_n_1074_ = lean_ctor_get_float(v_d_1011_, 0);
v___x_1075_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1074_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v___x_1076_; 
v___x_1076_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__8));
v_a_1043_ = v___x_1076_;
goto v___jp_1042_;
}
else
{
lean_object* v_val_1077_; 
v_val_1077_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_val_1077_);
lean_dec_ref_known(v___x_1075_, 1);
v_a_1068_ = v_val_1077_;
goto v___jp_1067_;
}
}
case 5:
{
lean_object* v_i_1078_; 
v_i_1078_ = lean_ctor_get(v_d_1011_, 0);
lean_inc(v_i_1078_);
v_a_1068_ = v_i_1078_;
goto v___jp_1067_;
}
default: 
{
lean_object* v___x_1079_; 
v___x_1079_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v_a_1043_ = v___x_1079_;
goto v___jp_1042_;
}
}
v___jp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lean_string_append(v___y_1014_, v___y_1015_);
lean_dec_ref(v___y_1015_);
v___x_1017_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
v___jp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__0));
v___x_1023_ = lean_string_append(v___x_1022_, v_context_1010_);
v___x_1024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__1));
v___x_1025_ = lean_string_append(v___x_1023_, v___x_1024_);
v___x_1026_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__2));
v___x_1027_ = lean_string_append(v___x_1025_, v___x_1026_);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__3));
v___x_1029_ = lean_string_append(v___x_1027_, v___x_1028_);
v___x_1030_ = lean_string_append(v___x_1029_, v_received_1021_);
lean_dec_ref(v_received_1021_);
v___x_1031_ = lean_string_utf8_byte_size(v___y_1020_);
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = lean_nat_dec_eq(v___x_1031_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__4));
v___x_1035_ = lean_string_append(v___x_1034_, v___y_1020_);
v___x_1036_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__5));
v___x_1037_ = lean_string_append(v___x_1035_, v___x_1036_);
v___y_1014_ = v___x_1030_;
v___y_1015_ = v___x_1037_;
goto v___jp_1013_;
}
else
{
lean_object* v___x_1038_; 
v___x_1038_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___y_1014_ = v___x_1030_;
v___y_1015_ = v___x_1038_;
goto v___jp_1013_;
}
}
v___jp_1039_:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lasm_JS_Data_describe(v_d_1011_);
v___y_1020_ = v___y_1040_;
v_received_1021_ = v___x_1041_;
goto v___jp_1019_;
}
v___jp_1042_:
{
if (lean_obj_tag(v_d_1011_) == 9)
{
lean_object* v_value_1044_; lean_object* v_description_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_value_1044_ = lean_ctor_get(v_d_1011_, 0);
v_description_1045_ = lean_ctor_get(v_d_1011_, 1);
v___x_1046_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_1047_ = lean_string_dec_eq(v_description_1045_, v___x_1046_);
if (v___x_1047_ == 0)
{
v___y_1040_ = v_a_1043_;
goto v___jp_1039_;
}
else
{
lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1064_; 
lean_inc(v_value_1044_);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_d_1011_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; lean_object* v_unused_1066_; 
v_unused_1065_ = lean_ctor_get(v_d_1011_, 1);
lean_dec(v_unused_1065_);
v_unused_1066_ = lean_ctor_get(v_d_1011_, 0);
lean_dec(v_unused_1066_);
v___x_1049_ = v_d_1011_;
v_isShared_1050_ = v_isSharedCheck_1064_;
goto v_resetjp_1048_;
}
else
{
lean_dec(v_d_1011_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1064_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
uint32_t v___x_1051_; uint64_t v___x_1052_; lean_object* v___x_1054_; 
v___x_1051_ = 206;
v___x_1052_ = 0ULL;
lean_inc(v_value_1044_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1046_);
v___x_1054_ = v___x_1049_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_value_1044_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v___x_1046_);
v___x_1054_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
uint32_t v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lasm_js_value_handle(v_value_1044_);
lean_dec(v_value_1044_);
v___x_1056_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1051_, v___x_1052_, v___x_1054_, v___x_1055_);
lean_dec_ref(v___x_1054_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; uint8_t v___x_1058_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1058_ = lean_string_validate_utf8(v_a_1057_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec(v_a_1057_);
v___x_1059_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__10);
v___x_1060_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1059_);
v___y_1020_ = v_a_1043_;
v_received_1021_ = v___x_1060_;
goto v___jp_1019_;
}
else
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_string_from_utf8_unchecked(v_a_1057_);
v___y_1020_ = v_a_1043_;
v_received_1021_ = v___x_1061_;
goto v___jp_1019_;
}
}
else
{
lean_object* v___x_1062_; 
lean_dec_ref_known(v___x_1056_, 1);
v___x_1062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_webSocket_spec__1_spec__1___closed__11));
v___y_1020_ = v_a_1043_;
v_received_1021_ = v___x_1062_;
goto v___jp_1019_;
}
}
}
}
}
else
{
v___y_1040_ = v_a_1043_;
goto v___jp_1039_;
}
}
v___jp_1067_:
{
lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1069_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__6);
v___x_1070_ = lean_int_dec_le(v___x_1069_, v_a_1068_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; 
lean_dec(v_a_1068_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_closeInfo_spec__0_spec__0_spec__1___closed__7));
v_a_1043_ = v___x_1071_;
goto v___jp_1042_;
}
else
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec(v_d_1011_);
v___x_1072_ = l_Int_toNat(v_a_1068_);
lean_dec(v_a_1068_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1080_, lean_object* v_d_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(v_context_1080_, v_d_1081_);
lean_dec_ref(v_context_1080_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(lean_object* v_context_1084_, lean_object* v_bytes_1085_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lasm_JS_Wire_decode(v_bytes_1085_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0_spec__1(v_context_1084_, v_a_1088_);
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_a_1090_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1087_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1087_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0___boxed(lean_object* v_context_1098_, lean_object* v_bytes_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(v_context_1098_, v_bytes_1099_);
lean_dec_ref(v_bytes_1099_);
lean_dec_ref(v_context_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(lean_object* v_o_1103_, lean_object* v_key_1104_){
_start:
{
uint32_t v___x_1106_; uint32_t v___x_1107_; uint64_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1106_ = 203;
v___x_1107_ = lasm_js_value_handle(v_o_1103_);
v___x_1108_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_messageData_spec__0___closed__0);
lean_inc_ref(v_key_1104_);
v___x_1109_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1109_, 0, v_key_1104_);
v___x_1110_ = l_Lasm_JS_Wire_encode(v___x_1109_);
lean_dec_ref_known(v___x_1109_, 1);
v___x_1111_ = ((lean_object*)(l_Lasm_Web_instInhabitedMessage_default___closed__0));
v___x_1112_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1112_, 0, v_o_1103_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lasm_js_call(v___x_1106_, v___x_1107_, v___x_1108_, v___x_1110_, v___x_1112_);
lean_dec_ref_known(v___x_1112_, 2);
lean_dec_ref(v___x_1110_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v___x_1115_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___closed__0));
v___x_1116_ = l_String_quote(v_key_1104_);
v___x_1117_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
v___x_1118_ = lean_unsigned_to_nat(120u);
v___x_1119_ = lean_unsigned_to_nat(0u);
v___x_1120_ = l_Std_Format_pretty(v___x_1117_, v___x_1118_, v___x_1119_, v___x_1119_);
v___x_1121_ = lean_string_append(v___x_1115_, v___x_1120_);
lean_dec_ref(v___x_1120_);
v___x_1122_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0_spec__0(v___x_1121_, v_a_1114_);
lean_dec(v_a_1114_);
lean_dec_ref(v___x_1121_);
return v___x_1122_;
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec_ref(v_key_1104_);
v_a_1123_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1113_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1113_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0___boxed(lean_object* v_o_1131_, lean_object* v_key_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_o_1131_, v_key_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState(lean_object* v_ws_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l_Lasm_Web_WebSocket_readyState___closed__0));
v___x_1139_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_ws_1136_, v___x_1138_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1170_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1170_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1170_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = lean_unsigned_to_nat(0u);
v___x_1145_ = lean_nat_dec_eq(v_a_1140_, v___x_1144_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1146_ = lean_unsigned_to_nat(1u);
v___x_1147_ = lean_nat_dec_eq(v_a_1140_, v___x_1146_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = lean_unsigned_to_nat(2u);
v___x_1149_ = lean_nat_dec_eq(v_a_1140_, v___x_1148_);
lean_dec(v_a_1140_);
if (v___x_1149_ == 0)
{
uint8_t v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1150_ = 3;
v___x_1151_ = lean_box(v___x_1150_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1151_);
v___x_1153_ = v___x_1142_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
else
{
uint8_t v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = 2;
v___x_1156_ = lean_box(v___x_1155_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1156_);
v___x_1158_ = v___x_1142_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
else
{
uint8_t v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
lean_dec(v_a_1140_);
v___x_1160_ = 1;
v___x_1161_ = lean_box(v___x_1160_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1161_);
v___x_1163_ = v___x_1142_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
else
{
uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
lean_dec(v_a_1140_);
v___x_1165_ = 0;
v___x_1166_ = lean_box(v___x_1165_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1166_);
v___x_1168_ = v___x_1142_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
v_a_1171_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1139_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1139_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_readyState___boxed(lean_object* v_ws_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lasm_Web_WebSocket_readyState(v_ws_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount(lean_object* v_ws_1183_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = ((lean_object*)(l_Lasm_Web_WebSocket_bufferedAmount___closed__0));
v___x_1186_ = l_Lasm_JS_Value_get___at___00Lasm_Web_WebSocket_readyState_spec__0(v_ws_1183_, v___x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_bufferedAmount___boxed(lean_object* v_ws_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lasm_Web_WebSocket_bufferedAmount(v_ws_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol(lean_object* v_ws_1191_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(l_Lasm_Web_WebSocket_protocol___closed__0));
v___x_1194_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Event_type_spec__0(v_ws_1191_, v___x_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_protocol___boxed(lean_object* v_ws_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_Web_WebSocket_protocol(v_ws_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0(lean_object* v_f_1198_, lean_object* v_x_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_apply_1(v_f_1198_, lean_box(0));
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___lam__0___boxed(lean_object* v_f_1202_, lean_object* v_x_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lasm_Web_WebSocket_onOpen___lam__0(v_f_1202_, v_x_1203_);
lean_dec(v_x_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen(lean_object* v_ws_1209_, lean_object* v_f_1210_){
_start:
{
lean_object* v___f_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___f_1212_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onOpen___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1212_, 0, v_f_1210_);
v___x_1213_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__0));
v___x_1214_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1215_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1209_, v___x_1213_, v___f_1212_, v___x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onOpen___boxed(lean_object* v_ws_1216_, lean_object* v_f_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lasm_Web_WebSocket_onOpen(v_ws_1216_, v_f_1217_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0(lean_object* v_f_1220_, lean_object* v_e_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lasm_Web_Raw_messageData(v_e_1221_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1225_; 
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___x_1223_, 1);
v___x_1225_ = lean_apply_2(v_f_1220_, v_a_1224_, lean_box(0));
return v___x_1225_;
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec_ref(v_f_1220_);
v_a_1226_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1223_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1223_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___lam__0___boxed(lean_object* v_f_1234_, lean_object* v_e_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lasm_Web_WebSocket_onMessage___lam__0(v_f_1234_, v_e_1235_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage(lean_object* v_ws_1239_, lean_object* v_f_1240_){
_start:
{
lean_object* v___f_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___f_1242_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onMessage___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1242_, 0, v_f_1240_);
v___x_1243_ = ((lean_object*)(l_Lasm_Web_WebSocket_onMessage___closed__0));
v___x_1244_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1245_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1239_, v___x_1243_, v___f_1242_, v___x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onMessage___boxed(lean_object* v_ws_1246_, lean_object* v_f_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lasm_Web_WebSocket_onMessage(v_ws_1246_, v_f_1247_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0(lean_object* v_f_1250_, lean_object* v_e_1251_){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l_Lasm_Web_Raw_closeInfo(v_e_1251_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1255_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_a_1254_);
lean_dec_ref_known(v___x_1253_, 1);
v___x_1255_ = lean_apply_2(v_f_1250_, v_a_1254_, lean_box(0));
return v___x_1255_;
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec_ref(v_f_1250_);
v_a_1256_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1253_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1253_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
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
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___lam__0___boxed(lean_object* v_f_1264_, lean_object* v_e_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lasm_Web_WebSocket_onClose___lam__0(v_f_1264_, v_e_1265_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose(lean_object* v_ws_1268_, lean_object* v_f_1269_){
_start:
{
lean_object* v___f_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___f_1271_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onClose___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1271_, 0, v_f_1269_);
v___x_1272_ = ((lean_object*)(l_Lasm_Web_WebSocket_close___closed__0));
v___x_1273_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1274_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1268_, v___x_1272_, v___f_1271_, v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onClose___boxed(lean_object* v_ws_1275_, lean_object* v_f_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lasm_Web_WebSocket_onClose(v_ws_1275_, v_f_1276_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError(lean_object* v_ws_1280_, lean_object* v_f_1281_){
_start:
{
lean_object* v___f_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___f_1283_ = lean_alloc_closure((void*)(l_Lasm_Web_WebSocket_onOpen___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1283_, 0, v_f_1281_);
v___x_1284_ = ((lean_object*)(l_Lasm_Web_WebSocket_onError___closed__0));
v___x_1285_ = ((lean_object*)(l_Lasm_Web_WebSocket_onOpen___closed__1));
v___x_1286_ = l_Lasm_Web_EventTarget_addEventListener(v_ws_1280_, v___x_1284_, v___f_1283_, v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_WebSocket_onError___boxed(lean_object* v_ws_1287_, lean_object* v_f_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lasm_Web_WebSocket_onError(v_ws_1287_, v_f_1288_);
return v_res_1290_;
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
