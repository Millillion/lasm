// Lean compiler output
// Module: Lasm.JS.Web.WebSocket
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.File
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWebSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSWebSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSWebSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSWebSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWebSocket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWebSocket = (const lean_object*)&l_Lasm_JS_Web_instToJSWebSocket___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWebSocket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWebSocket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebSocket___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebSocket___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSWebSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSWebSocket___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSWebSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWebSocket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.WebSocket"};
static const lean_object* l_Lasm_JS_Web_instFromJSWebSocket___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWebSocket___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWebSocket___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWebSocket = (const lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeWebSocketEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeWebSocketEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget = (const lean_object*)&l_Lasm_JS_Web_instCoeWebSocketEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCloseEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCloseEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.CloseEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSCloseEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCloseEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCloseEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCloseEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCloseEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCloseEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCloseEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSCloseEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeCloseEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeWebSocketEventTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqBinaryType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqBinaryType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqBinaryType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqBinaryType = (const lean_object*)&l_Lasm_JS_Web_instBEqBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprBinaryType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.BinaryType.blob"};
static const lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprBinaryType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprBinaryType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.BinaryType.arraybuffer"};
static const lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprBinaryType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType_repr___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprBinaryType_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__4;
static lean_once_cell_t l_Lasm_JS_Web_instReprBinaryType_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprBinaryType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprBinaryType = (const lean_object*)&l_Lasm_JS_Web_instReprBinaryType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedBinaryType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedBinaryType;
static const lean_string_object l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "blob"};
static const lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arraybuffer"};
static const lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBinaryType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBinaryType = (const lean_object*)&l_Lasm_JS_Web_instToJSBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSBinaryType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSBinaryType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.BinaryType"};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBinaryType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSBinaryType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSBinaryType = (const lean_object*)&l_Lasm_JS_Web_instFromJSBinaryType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bubbles"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cancelable"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "composed"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "wasClean"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reason"};
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCloseEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSCloseEventInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSCloseEventInit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSCloseEventInit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCloseEventInit___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__2_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCloseEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSCloseEventInit___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.WebSocket.new"};
static const lean_object* l_Lasm_JS_Web_WebSocket_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WebSocket_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_WebSocket_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_WebSocket_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "WebSocket"};
static const lean_object* l_Lasm_JS_Web_WebSocket_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_WebSocket_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebSocket_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CONNECTING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_OPEN;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CLOSING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CLOSED;
static const lean_string_object l_Lasm_JS_Web_WebSocket_url___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Web_WebSocket_url___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_url___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_readyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "readyState"};
static const lean_object* l_Lasm_JS_Web_WebSocket_readyState___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_readyState___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "bufferedAmount"};
static const lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_extensions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "extensions"};
static const lean_object* l_Lasm_JS_Web_WebSocket_extensions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_extensions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_protocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_JS_Web_WebSocket_protocol___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_protocol___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_binaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binaryType"};
static const lean_object* l_Lasm_JS_Web_WebSocket_binaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_binaryType___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Web_WebSocket_close___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_close___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_JS_Web_WebSocket_send___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_send___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_CloseEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.CloseEvent.new"};
static const lean_object* l_Lasm_JS_Web_CloseEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_CloseEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CloseEvent"};
static const lean_object* l_Lasm_JS_Web_CloseEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_CloseEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CloseEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWebSocket___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebSocket___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebSocket___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSWebSocket___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSWebSocket___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0(lean_object* v_self_22_){
_start:
{
lean_inc(v_self_22_);
return v_self_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0___boxed(lean_object* v_self_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Web_instCoeWebSocketEventTarget___lam__0(v_self_23_);
lean_dec(v_self_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___impl(uint8_t v_x_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_box(v_x_35_);
v___x_37_ = lean_obj_tag_nat(v___x_36_);
lean_dec(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___impl___boxed(lean_object* v_x_38_){
_start:
{
uint8_t v_x_4__boxed_39_; lean_object* v_res_40_; 
v_x_4__boxed_39_ = lean_unbox(v_x_38_);
v_res_40_ = l_Lasm_JS_Web_BinaryType_ctorIdx___impl(v_x_4__boxed_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___redArg(lean_object* v_k_41_){
_start:
{
lean_inc(v_k_41_);
return v_k_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___redArg___boxed(lean_object* v_k_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lasm_JS_Web_BinaryType_ctorElim___redArg(v_k_42_);
lean_dec(v_k_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim(lean_object* v_motive_44_, lean_object* v_ctorIdx_45_, uint8_t v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_inc(v_k_48_);
return v_k_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorElim___boxed(lean_object* v_motive_49_, lean_object* v_ctorIdx_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_k_53_){
_start:
{
uint8_t v_t_boxed_54_; lean_object* v_res_55_; 
v_t_boxed_54_ = lean_unbox(v_t_51_);
v_res_55_ = l_Lasm_JS_Web_BinaryType_ctorElim(v_motive_49_, v_ctorIdx_50_, v_t_boxed_54_, v_h_52_, v_k_53_);
lean_dec(v_k_53_);
lean_dec(v_ctorIdx_50_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___redArg(lean_object* v_blob_56_){
_start:
{
lean_inc(v_blob_56_);
return v_blob_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___redArg___boxed(lean_object* v_blob_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lasm_JS_Web_BinaryType_blob_elim___redArg(v_blob_57_);
lean_dec(v_blob_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim(lean_object* v_motive_59_, uint8_t v_t_60_, lean_object* v_h_61_, lean_object* v_blob_62_){
_start:
{
lean_inc(v_blob_62_);
return v_blob_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_blob_elim___boxed(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_blob_66_){
_start:
{
uint8_t v_t_boxed_67_; lean_object* v_res_68_; 
v_t_boxed_67_ = lean_unbox(v_t_64_);
v_res_68_ = l_Lasm_JS_Web_BinaryType_blob_elim(v_motive_63_, v_t_boxed_67_, v_h_65_, v_blob_66_);
lean_dec(v_blob_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___redArg(lean_object* v_arraybuffer_69_){
_start:
{
lean_inc(v_arraybuffer_69_);
return v_arraybuffer_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___redArg___boxed(lean_object* v_arraybuffer_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lasm_JS_Web_BinaryType_arraybuffer_elim___redArg(v_arraybuffer_70_);
lean_dec(v_arraybuffer_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim(lean_object* v_motive_72_, uint8_t v_t_73_, lean_object* v_h_74_, lean_object* v_arraybuffer_75_){
_start:
{
lean_inc(v_arraybuffer_75_);
return v_arraybuffer_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_arraybuffer_elim___boxed(lean_object* v_motive_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_arraybuffer_79_){
_start:
{
uint8_t v_t_boxed_80_; lean_object* v_res_81_; 
v_t_boxed_80_ = lean_unbox(v_t_77_);
v_res_81_ = l_Lasm_JS_Web_BinaryType_arraybuffer_elim(v_motive_76_, v_t_boxed_80_, v_h_78_, v_arraybuffer_79_);
lean_dec(v_arraybuffer_79_);
return v_res_81_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqBinaryType_beq(uint8_t v_x_82_, uint8_t v_y_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_84_ = lean_box(v_x_82_);
v___x_85_ = lean_obj_tag_nat(v___x_84_);
lean_dec(v___x_84_);
v___x_86_ = lean_box(v_y_83_);
v___x_87_ = lean_obj_tag_nat(v___x_86_);
lean_dec(v___x_86_);
v___x_88_ = lean_nat_dec_eq(v___x_85_, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqBinaryType_beq___boxed(lean_object* v_x_89_, lean_object* v_y_90_){
_start:
{
uint8_t v_x_24__boxed_91_; uint8_t v_y_25__boxed_92_; uint8_t v_res_93_; lean_object* v_r_94_; 
v_x_24__boxed_91_ = lean_unbox(v_x_89_);
v_y_25__boxed_92_ = lean_unbox(v_y_90_);
v_res_93_ = l_Lasm_JS_Web_instBEqBinaryType_beq(v_x_24__boxed_91_, v_y_25__boxed_92_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(2u);
v___x_104_ = lean_nat_to_int(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_unsigned_to_nat(1u);
v___x_106_ = lean_nat_to_int(v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr(uint8_t v_x_107_, lean_object* v_prec_108_){
_start:
{
lean_object* v___y_110_; lean_object* v___y_117_; 
if (v_x_107_ == 0)
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1024u);
v___x_124_ = lean_nat_dec_le(v___x_123_, v_prec_108_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__4, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4);
v___y_110_ = v___x_125_;
goto v___jp_109_;
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__5, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5);
v___y_110_ = v___x_126_;
goto v___jp_109_;
}
}
else
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_108_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__4, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4);
v___y_117_ = v___x_129_;
goto v___jp_116_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__5, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5);
v___y_117_ = v___x_130_;
goto v___jp_116_;
}
}
v___jp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_111_ = ((lean_object*)(l_Lasm_JS_Web_instReprBinaryType_repr___closed__1));
lean_inc(v___y_110_);
v___x_112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_112_, 0, v___y_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = 0;
v___x_114_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set_uint8(v___x_114_, sizeof(void*)*1, v___x_113_);
v___x_115_ = l_Repr_addAppParen(v___x_114_, v_prec_108_);
return v___x_115_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_118_ = ((lean_object*)(l_Lasm_JS_Web_instReprBinaryType_repr___closed__3));
lean_inc(v___y_117_);
v___x_119_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_119_, 0, v___y_117_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = 0;
v___x_121_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*1, v___x_120_);
v___x_122_ = l_Repr_addAppParen(v___x_121_, v_prec_108_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___boxed(lean_object* v_x_131_, lean_object* v_prec_132_){
_start:
{
uint8_t v_x_117__boxed_133_; lean_object* v_res_134_; 
v_x_117__boxed_133_ = lean_unbox(v_x_131_);
v_res_134_ = l_Lasm_JS_Web_instReprBinaryType_repr(v_x_117__boxed_133_, v_prec_132_);
lean_dec(v_prec_132_);
return v_res_134_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedBinaryType_default(void){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = 0;
return v___x_137_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedBinaryType(void){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = 0;
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0(uint8_t v_x_145_){
_start:
{
if (v_x_145_ == 0)
{
lean_object* v___x_146_; 
v___x_146_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1));
return v___x_146_;
}
else
{
lean_object* v___x_147_; 
v___x_147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3));
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_x_40__boxed_149_; lean_object* v_res_150_; 
v_x_40__boxed_149_ = lean_unbox(v_x_148_);
v_res_150_ = l_Lasm_JS_Web_instToJSBinaryType___lam__0(v_x_40__boxed_149_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0(lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 4)
{
lean_object* v_s_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v_s_165_ = lean_ctor_get(v_x_162_, 0);
v___x_166_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0));
v___x_167_ = lean_string_dec_eq(v_s_165_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2));
v___x_169_ = lean_string_dec_eq(v_s_165_, v___x_168_);
if (v___x_169_ == 0)
{
goto v___jp_163_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__2));
return v___x_170_;
}
}
else
{
lean_object* v___x_171_; 
v___x_171_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__3));
return v___x_171_;
}
}
else
{
goto v___jp_163_;
}
v___jp_163_:
{
lean_object* v___x_164_; 
v___x_164_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__1));
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___boxed(lean_object* v_x_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lasm_JS_Web_instFromJSBinaryType___lam__0(v_x_172_);
lean_dec(v_x_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___impl(lean_object* v_x_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_obj_tag_nat(v_x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___impl___boxed(lean_object* v_x_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___impl(v_x_183_);
lean_dec_ref(v_x_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_185_, lean_object* v_k_186_){
_start:
{
lean_object* v_value_187_; lean_object* v___x_188_; 
v_value_187_ = lean_ctor_get(v_t_185_, 0);
lean_inc_ref(v_value_187_);
lean_dec_ref(v_t_185_);
v___x_188_ = lean_apply_1(v_k_186_, v_value_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_189_, lean_object* v_ctorIdx_190_, lean_object* v_t_191_, lean_object* v_h_192_, lean_object* v_k_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_191_, v_k_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_195_, lean_object* v_ctorIdx_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_k_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_195_, v_ctorIdx_196_, v_t_197_, v_h_198_, v_k_199_);
lean_dec(v_ctorIdx_196_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_201_, lean_object* v_domString_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_201_, v_domString_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_domString_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_205_, v_domString_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_209_, lean_object* v_sequence_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_209_, v_sequence_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_212_, lean_object* v_t_213_, lean_object* v_h_214_, lean_object* v_sequence_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_213_, v_sequence_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_218_, 0, v_x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_238_, lean_object* v_x_239_){
_start:
{
if (lean_obj_tag(v_x_239_) == 0)
{
lean_object* v_value_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec_ref(v___f_238_);
v_value_240_ = lean_ctor_get(v_x_239_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_239_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v_x_239_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_value_240_);
lean_dec(v_x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
lean_ctor_set_tag(v___x_242_, 4);
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_value_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
else
{
lean_object* v_value_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_259_; 
v_value_248_ = lean_ctor_get(v_x_239_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_239_);
if (v_isSharedCheck_259_ == 0)
{
v___x_250_ = v_x_239_;
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_value_248_);
lean_dec(v_x_239_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; size_t v_sz_253_; size_t v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_252_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_253_ = lean_array_size(v_value_248_);
v___x_254_ = ((size_t)0ULL);
v___x_255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_252_, v___f_238_, v_sz_253_, v___x_254_, v_value_248_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 7);
lean_ctor_set(v___x_250_, 0, v___x_255_);
v___x_257_ = v___x_250_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v_value_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v_value_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___impl(lean_object* v_x_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_tag_nat(v_x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___impl___boxed(lean_object* v_x_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___impl(v_x_274_);
lean_dec_ref(v_x_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(lean_object* v_t_276_, lean_object* v_k_277_){
_start:
{
if (lean_obj_tag(v_t_276_) == 1)
{
lean_object* v_value_278_; lean_object* v___x_279_; 
v_value_278_ = lean_ctor_get(v_t_276_, 0);
lean_inc(v_value_278_);
lean_dec_ref_known(v_t_276_, 1);
v___x_279_ = lean_apply_1(v_k_277_, v_value_278_);
return v___x_279_;
}
else
{
lean_object* v_value_280_; lean_object* v___x_281_; 
v_value_280_ = lean_ctor_get(v_t_276_, 0);
lean_inc_ref(v_value_280_);
lean_dec_ref(v_t_276_);
v___x_281_ = lean_apply_1(v_k_277_, v_value_280_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(lean_object* v_motive_282_, lean_object* v_ctorIdx_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_k_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_284_, v_k_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___boxed(lean_object* v_motive_288_, lean_object* v_ctorIdx_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_k_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(v_motive_288_, v_ctorIdx_289_, v_t_290_, v_h_291_, v_k_292_);
lean_dec(v_ctorIdx_289_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim___redArg(lean_object* v_t_294_, lean_object* v_bufferSource_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_294_, v_bufferSource_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim(lean_object* v_motive_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_bufferSource_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_298_, v_bufferSource_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim___redArg(lean_object* v_t_302_, lean_object* v_blob_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_302_, v_blob_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_blob_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_306_, v_blob_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim___redArg(lean_object* v_t_310_, lean_object* v_usvString_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_310_, v_usvString_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim(lean_object* v_motive_313_, lean_object* v_t_314_, lean_object* v_h_315_, lean_object* v_usvString_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_314_, v_usvString_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_x_318_){
_start:
{
switch(lean_obj_tag(v_x_318_))
{
case 0:
{
lean_object* v_value_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_value_319_ = lean_ctor_get(v_x_318_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v_x_318_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_value_319_);
lean_dec(v_x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 6);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_value_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
case 1:
{
lean_object* v_value_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_value_327_ = lean_ctor_get(v_x_318_, 0);
lean_inc(v_value_327_);
lean_dec_ref_known(v_x_318_, 1);
v___x_328_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_329_, 0, v_value_327_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
return v___x_329_;
}
default: 
{
lean_object* v_value_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
v_value_330_ = lean_ctor_get(v_x_318_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v_x_318_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_value_330_);
lean_dec(v_x_318_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 4);
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_value_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v_value_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v_value_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_349_, 0, v_value_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0(lean_object* v___f_358_, lean_object* v___f_359_, lean_object* v___f_360_, lean_object* v_d_361_){
_start:
{
lean_object* v_bubbles_362_; lean_object* v_cancelable_363_; lean_object* v_composed_364_; lean_object* v_wasClean_365_; lean_object* v_code_366_; lean_object* v_reason_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_bubbles_362_ = lean_ctor_get(v_d_361_, 0);
lean_inc(v_bubbles_362_);
v_cancelable_363_ = lean_ctor_get(v_d_361_, 1);
lean_inc(v_cancelable_363_);
v_composed_364_ = lean_ctor_get(v_d_361_, 2);
lean_inc(v_composed_364_);
v_wasClean_365_ = lean_ctor_get(v_d_361_, 3);
lean_inc(v_wasClean_365_);
v_code_366_ = lean_ctor_get(v_d_361_, 4);
lean_inc(v_code_366_);
v_reason_367_ = lean_ctor_get(v_d_361_, 5);
lean_inc(v_reason_367_);
lean_dec_ref(v_d_361_);
v___x_368_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_358_, 3);
v___x_369_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_358_, v_bubbles_362_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_368_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1));
v___x_372_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_358_, v_cancelable_363_);
v___x_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_371_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
v___x_374_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2));
v___x_375_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_358_, v_composed_364_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_378_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_358_, v_wasClean_365_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_381_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_359_, v_code_366_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_380_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_384_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_360_, v_reason_367_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_383_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_unsigned_to_nat(6u);
v___x_387_ = lean_mk_empty_array_with_capacity(v___x_386_);
v___x_388_ = lean_array_push(v___x_387_, v___x_370_);
v___x_389_ = lean_array_push(v___x_388_, v___x_373_);
v___x_390_ = lean_array_push(v___x_389_, v___x_376_);
v___x_391_ = lean_array_push(v___x_390_, v___x_379_);
v___x_392_ = lean_array_push(v___x_391_, v___x_382_);
v___x_393_ = lean_array_push(v___x_392_, v___x_385_);
v___x_394_ = l_Lasm_JS_Web_Support_fields(v___x_393_);
lean_dec_ref(v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(size_t v_sz_403_, size_t v_i_404_, lean_object* v_bs_405_){
_start:
{
uint8_t v___x_406_; 
v___x_406_ = lean_usize_dec_lt(v_i_404_, v_sz_403_);
if (v___x_406_ == 0)
{
return v_bs_405_;
}
else
{
lean_object* v_v_407_; lean_object* v___x_408_; lean_object* v_bs_x27_409_; lean_object* v___x_410_; size_t v___x_411_; size_t v___x_412_; lean_object* v___x_413_; 
v_v_407_ = lean_array_uget(v_bs_405_, v_i_404_);
v___x_408_ = lean_unsigned_to_nat(0u);
v_bs_x27_409_ = lean_array_uset(v_bs_405_, v_i_404_, v___x_408_);
v___x_410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_410_, 0, v_v_407_);
v___x_411_ = ((size_t)1ULL);
v___x_412_ = lean_usize_add(v_i_404_, v___x_411_);
v___x_413_ = lean_array_uset(v_bs_x27_409_, v_i_404_, v___x_410_);
v_i_404_ = v___x_412_;
v_bs_405_ = v___x_413_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0___boxed(lean_object* v_sz_415_, lean_object* v_i_416_, lean_object* v_bs_417_){
_start:
{
size_t v_sz_boxed_418_; size_t v_i_boxed_419_; lean_object* v_res_420_; 
v_sz_boxed_418_ = lean_unbox_usize(v_sz_415_);
lean_dec(v_sz_415_);
v_i_boxed_419_ = lean_unbox_usize(v_i_416_);
lean_dec(v_i_416_);
v_res_420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_boxed_418_, v_i_boxed_419_, v_bs_417_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(lean_object* v_x_421_){
_start:
{
if (lean_obj_tag(v_x_421_) == 0)
{
lean_object* v___x_422_; 
v___x_422_ = lean_box(0);
return v___x_422_;
}
else
{
lean_object* v_val_423_; 
v_val_423_ = lean_ctor_get(v_x_421_, 0);
lean_inc(v_val_423_);
lean_dec_ref_known(v_x_421_, 1);
if (lean_obj_tag(v_val_423_) == 0)
{
lean_object* v_value_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
v_value_424_ = lean_ctor_get(v_val_423_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v_val_423_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v_val_423_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_value_424_);
lean_dec(v_val_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 4);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_value_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_value_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_442_; 
v_value_432_ = lean_ctor_get(v_val_423_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v_val_423_);
if (v_isSharedCheck_442_ == 0)
{
v___x_434_ = v_val_423_;
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_value_432_);
lean_dec(v_val_423_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
size_t v_sz_436_; size_t v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v_sz_436_ = lean_array_size(v_value_432_);
v___x_437_ = ((size_t)0ULL);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_436_, v___x_437_, v_value_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 7);
lean_ctor_set(v___x_434_, 0, v___x_438_);
v___x_440_ = v___x_434_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5));
v___x_450_ = lean_unsigned_to_nat(46u);
v___x_451_ = lean_unsigned_to_nat(193u);
v___x_452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4));
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3));
v___x_454_ = l_mkPanicMessageWithDecl(v___x_453_, v___x_452_, v___x_451_, v___x_450_, v___x_449_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(lean_object* v_context_456_, lean_object* v_d_457_){
_start:
{
lean_object* v_received_460_; 
if (lean_obj_tag(v_d_457_) == 9)
{
lean_object* v_value_474_; lean_object* v___x_475_; 
v_value_474_ = lean_ctor_get(v_d_457_, 0);
lean_inc(v_value_474_);
lean_dec_ref_known(v_d_457_, 2);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v_value_474_);
return v___x_475_;
}
else
{
if (lean_obj_tag(v_d_457_) == 9)
{
lean_object* v_value_476_; lean_object* v_description_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_value_476_ = lean_ctor_get(v_d_457_, 0);
v_description_477_ = lean_ctor_get(v_d_457_, 1);
v___x_478_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_479_ = lean_string_dec_eq(v_description_477_, v___x_478_);
if (v___x_479_ == 0)
{
goto v___jp_472_;
}
else
{
uint32_t v___x_480_; uint64_t v___x_481_; lean_object* v___x_482_; uint32_t v___x_483_; lean_object* v___x_484_; 
lean_inc_n(v_value_476_, 2);
lean_dec_ref_known(v_d_457_, 2);
v___x_480_ = 206;
v___x_481_ = 0ULL;
v___x_482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_482_, 0, v_value_476_);
lean_ctor_set(v___x_482_, 1, v___x_478_);
v___x_483_ = lasm_js_value_handle(v_value_476_);
lean_dec(v_value_476_);
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_480_, v___x_481_, v___x_482_, v___x_483_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; uint8_t v___x_486_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v___x_486_ = lean_string_validate_utf8(v_a_485_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec(v_a_485_);
v___x_487_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6);
v___x_488_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_487_);
v_received_460_ = v___x_488_;
goto v___jp_459_;
}
else
{
lean_object* v___x_489_; 
v___x_489_ = lean_string_from_utf8_unchecked(v_a_485_);
v_received_460_ = v___x_489_;
goto v___jp_459_;
}
}
else
{
lean_object* v___x_490_; 
lean_dec_ref_known(v___x_484_, 1);
v___x_490_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7));
v_received_460_ = v___x_490_;
goto v___jp_459_;
}
}
}
else
{
goto v___jp_472_;
}
}
v___jp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_462_ = lean_string_append(v___x_461_, v_context_456_);
v___x_463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
v___x_465_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebSocket___closed__1));
v___x_466_ = lean_string_append(v___x_464_, v___x_465_);
v___x_467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_468_ = lean_string_append(v___x_466_, v___x_467_);
v___x_469_ = lean_string_append(v___x_468_, v_received_460_);
lean_dec_ref(v_received_460_);
v___x_470_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
v___jp_472_:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lasm_JS_Data_describe(v_d_457_);
v_received_460_ = v___x_473_;
goto v___jp_459_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___boxed(lean_object* v_context_491_, lean_object* v_d_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v_context_491_, v_d_492_);
lean_dec_ref(v_context_491_);
return v_res_494_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_496_; uint64_t v___x_497_; 
v___x_496_ = 0;
v___x_497_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(lean_object* v_b_498_, lean_object* v_args_499_, uint8_t v_await_500_){
_start:
{
uint64_t v___y_503_; uint64_t v___y_504_; uint64_t v___x_539_; uint64_t v___y_541_; 
v___x_539_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_500_ == 0)
{
uint64_t v___x_546_; 
v___x_546_ = 0ULL;
v___y_541_ = v___x_546_;
goto v___jp_540_;
}
else
{
uint64_t v___x_547_; 
v___x_547_ = 2ULL;
v___y_541_ = v___x_547_;
goto v___jp_540_;
}
v___jp_502_:
{
uint64_t v_flags_505_; uint32_t v___x_506_; lean_object* v___x_507_; uint32_t v___x_508_; lean_object* v___x_509_; 
v_flags_505_ = lean_uint64_lor(v___y_503_, v___y_504_);
v___x_506_ = 214;
v___x_507_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_498_, v_args_499_);
v___x_508_ = 0;
v___x_509_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_506_, v_flags_505_, v___x_507_, v___x_508_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_511_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_509_, 1);
v___x_511_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_510_);
lean_dec(v_a_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_498_);
v___x_514_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v___x_513_, v_a_512_);
lean_dec_ref(v___x_513_);
return v___x_514_;
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
v_a_515_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_511_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_511_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_538_; 
v_a_523_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_538_ == 0)
{
v___x_525_ = v___x_509_;
v_isShared_526_ = v_isSharedCheck_538_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_509_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_538_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_528_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_498_);
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
lean_dec_ref(v___x_528_);
v___x_530_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_531_ = lean_string_append(v___x_529_, v___x_530_);
v___x_532_ = lean_io_error_to_string(v_a_523_);
v___x_533_ = lean_string_append(v___x_531_, v___x_532_);
lean_dec_ref(v___x_532_);
v___x_534_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_534_);
v___x_536_ = v___x_525_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
v___jp_540_:
{
uint8_t v_construct_542_; uint64_t v___x_543_; 
v_construct_542_ = lean_ctor_get_uint8(v_b_498_, sizeof(void*)*4);
v___x_543_ = lean_uint64_lor(v___x_539_, v___y_541_);
if (v_construct_542_ == 0)
{
uint64_t v___x_544_; 
v___x_544_ = 0ULL;
v___y_503_ = v___x_543_;
v___y_504_ = v___x_544_;
goto v___jp_502_;
}
else
{
uint64_t v___x_545_; 
v___x_545_ = 4ULL;
v___y_503_ = v___x_543_;
v___y_504_ = v___x_545_;
goto v___jp_502_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___boxed(lean_object* v_b_548_, lean_object* v_args_549_, lean_object* v_await_550_, lean_object* v_a_551_){
_start:
{
uint8_t v_await_boxed_552_; lean_object* v_res_553_; 
v_await_boxed_552_ = lean_unbox(v_await_550_);
v_res_553_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v_b_548_, v_args_549_, v_await_boxed_552_);
lean_dec_ref(v_b_548_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new(lean_object* v_url_563_, lean_object* v_protocols_564_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; lean_object* v___x_575_; 
v___x_566_ = lean_unsigned_to_nat(2u);
v___x_567_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_new___closed__3));
v___x_568_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_568_, 0, v_url_563_);
v___x_569_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(v_protocols_564_);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_566_);
v___x_571_ = lean_array_push(v___x_570_, v___x_568_);
v___x_572_ = lean_array_push(v___x_571_, v___x_569_);
v___x_573_ = l_Lasm_JS_Web_Support_args(v___x_572_);
v___x_574_ = 0;
v___x_575_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v___x_567_, v___x_573_, v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new___boxed(lean_object* v_url_576_, lean_object* v_protocols_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lasm_JS_Web_WebSocket_new(v_url_576_, v_protocols_577_);
return v_res_579_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CONNECTING(void){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lean_unsigned_to_nat(0u);
return v___x_580_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_OPEN(void){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_unsigned_to_nat(1u);
return v___x_581_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSING(void){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = lean_unsigned_to_nat(2u);
return v___x_582_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSED(void){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = lean_unsigned_to_nat(3u);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url(lean_object* v_self_585_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_url___closed__0));
v___x_588_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_585_, v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url___boxed(lean_object* v_self_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_JS_Web_WebSocket_url(v_self_589_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState(lean_object* v_self_593_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_readyState___closed__0));
v___x_596_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_593_, v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState___boxed(lean_object* v_self_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lasm_JS_Web_WebSocket_readyState(v_self_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount(lean_object* v_self_601_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0));
v___x_604_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_601_, v___x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount___boxed(lean_object* v_self_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lasm_JS_Web_WebSocket_bufferedAmount(v_self_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions(lean_object* v_self_609_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_extensions___closed__0));
v___x_612_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_609_, v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions___boxed(lean_object* v_self_613_, lean_object* v_a_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lasm_JS_Web_WebSocket_extensions(v_self_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol(lean_object* v_self_617_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_protocol___closed__0));
v___x_620_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_617_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol___boxed(lean_object* v_self_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lasm_JS_Web_WebSocket_protocol(v_self_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(lean_object* v_context_625_, lean_object* v_d_626_){
_start:
{
lean_object* v_received_629_; 
if (lean_obj_tag(v_d_626_) == 4)
{
lean_object* v_s_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_s_669_ = lean_ctor_get(v_d_626_, 0);
v___x_670_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0));
v___x_671_ = lean_string_dec_eq(v_s_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2));
v___x_673_ = lean_string_dec_eq(v_s_669_, v___x_672_);
if (v___x_673_ == 0)
{
goto v___jp_645_;
}
else
{
uint8_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
lean_dec_ref_known(v_d_626_, 1);
v___x_674_ = 1;
v___x_675_ = lean_box(v___x_674_);
v___x_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
return v___x_676_;
}
}
else
{
uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec_ref_known(v_d_626_, 1);
v___x_677_ = 0;
v___x_678_ = lean_box(v___x_677_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
else
{
goto v___jp_645_;
}
v___jp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_631_ = lean_string_append(v___x_630_, v_context_625_);
v___x_632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_633_ = lean_string_append(v___x_631_, v___x_632_);
v___x_634_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___closed__1));
v___x_635_ = lean_string_append(v___x_633_, v___x_634_);
v___x_636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_637_ = lean_string_append(v___x_635_, v___x_636_);
v___x_638_ = lean_string_append(v___x_637_, v_received_629_);
lean_dec_ref(v_received_629_);
v___x_639_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0));
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
v___x_641_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
v___jp_643_:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lasm_JS_Data_describe(v_d_626_);
v_received_629_ = v___x_644_;
goto v___jp_628_;
}
v___jp_645_:
{
if (lean_obj_tag(v_d_626_) == 9)
{
lean_object* v_value_646_; lean_object* v_description_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v_value_646_ = lean_ctor_get(v_d_626_, 0);
v_description_647_ = lean_ctor_get(v_d_626_, 1);
v___x_648_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_649_ = lean_string_dec_eq(v_description_647_, v___x_648_);
if (v___x_649_ == 0)
{
goto v___jp_643_;
}
else
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_666_; 
lean_inc(v_value_646_);
v_isSharedCheck_666_ = !lean_is_exclusive(v_d_626_);
if (v_isSharedCheck_666_ == 0)
{
lean_object* v_unused_667_; lean_object* v_unused_668_; 
v_unused_667_ = lean_ctor_get(v_d_626_, 1);
lean_dec(v_unused_667_);
v_unused_668_ = lean_ctor_get(v_d_626_, 0);
lean_dec(v_unused_668_);
v___x_651_ = v_d_626_;
v_isShared_652_ = v_isSharedCheck_666_;
goto v_resetjp_650_;
}
else
{
lean_dec(v_d_626_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_666_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
uint32_t v___x_653_; uint64_t v___x_654_; lean_object* v___x_656_; 
v___x_653_ = 206;
v___x_654_ = 0ULL;
lean_inc(v_value_646_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_648_);
v___x_656_ = v___x_651_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_value_646_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v___x_648_);
v___x_656_ = v_reuseFailAlloc_665_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
uint32_t v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lasm_js_value_handle(v_value_646_);
lean_dec(v_value_646_);
v___x_658_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_653_, v___x_654_, v___x_656_, v___x_657_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; uint8_t v___x_660_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = lean_string_validate_utf8(v_a_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec(v_a_659_);
v___x_661_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6);
v___x_662_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_661_);
v_received_629_ = v___x_662_;
goto v___jp_628_;
}
else
{
lean_object* v___x_663_; 
v___x_663_ = lean_string_from_utf8_unchecked(v_a_659_);
v_received_629_ = v___x_663_;
goto v___jp_628_;
}
}
else
{
lean_object* v___x_664_; 
lean_dec_ref_known(v___x_658_, 1);
v___x_664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7));
v_received_629_ = v___x_664_;
goto v___jp_628_;
}
}
}
}
}
else
{
goto v___jp_643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object* v_context_680_, lean_object* v_d_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_680_, v_d_681_);
lean_dec_ref(v_context_680_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(lean_object* v_context_684_, lean_object* v_bytes_685_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_685_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_689_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_684_, v_a_688_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
v_a_690_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_687_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_687_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0___boxed(lean_object* v_context_698_, lean_object* v_bytes_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v_context_698_, v_bytes_699_);
lean_dec_ref(v_bytes_699_);
lean_dec_ref(v_context_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(lean_object* v_o_703_, lean_object* v_key_704_){
_start:
{
lean_object* v_k_706_; lean_object* v___x_707_; 
v_k_706_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_706_, 0, v_key_704_);
lean_inc_ref(v_k_706_);
v___x_707_ = l_Lasm_JS_Wire_encodeIO(v_k_706_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; uint32_t v___x_709_; uint32_t v___x_710_; uint64_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = 203;
v___x_710_ = lasm_js_value_handle(v_o_703_);
v___x_711_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
v___x_712_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_713_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_713_, 0, v_o_703_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = lean_unsigned_to_nat(2u);
v___x_715_ = lean_mk_empty_array_with_capacity(v___x_714_);
lean_inc_ref(v_k_706_);
v___x_716_ = lean_array_push(v___x_715_, v_k_706_);
v___x_717_ = lean_array_push(v___x_716_, v___x_713_);
v___x_718_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
v___x_719_ = lasm_js_call(v___x_709_, v___x_710_, v___x_711_, v_a_708_, v___x_718_);
lean_dec_ref_known(v___x_718_, 1);
lean_dec(v_a_708_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0));
v___x_722_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_706_);
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
lean_dec_ref(v___x_722_);
v___x_724_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v___x_723_, v_a_720_);
lean_dec(v_a_720_);
lean_dec_ref(v___x_723_);
return v___x_724_;
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec_ref_known(v_k_706_, 1);
v_a_725_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_719_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_719_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref_known(v_k_706_, 1);
lean_dec(v_o_703_);
v_a_733_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_707_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_707_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___boxed(lean_object* v_o_741_, lean_object* v_key_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_o_741_, v_key_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType(lean_object* v_self_746_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
v___x_749_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_self_746_, v___x_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType___boxed(lean_object* v_self_750_, lean_object* v_a_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lasm_JS_Web_WebSocket_binaryType(v_self_750_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType(lean_object* v_self_753_, uint8_t v_value_754_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
if (v_value_754_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1));
v___x_758_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_753_, v___x_756_, v___x_757_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3));
v___x_760_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_753_, v___x_756_, v___x_759_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType___boxed(lean_object* v_self_761_, lean_object* v_value_762_, lean_object* v_a_763_){
_start:
{
uint8_t v_value_boxed_764_; lean_object* v_res_765_; 
v_value_boxed_764_ = lean_unbox(v_value_762_);
v_res_765_ = l_Lasm_JS_Web_WebSocket_setBinaryType(v_self_761_, v_value_boxed_764_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close(lean_object* v_self_767_, lean_object* v_code_768_, lean_object* v_reason_769_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_771_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_close___closed__0));
v___x_772_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_768_);
v___x_773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_769_);
v___x_774_ = lean_unsigned_to_nat(2u);
v___x_775_ = lean_mk_empty_array_with_capacity(v___x_774_);
v___x_776_ = lean_array_push(v___x_775_, v___x_772_);
v___x_777_ = lean_array_push(v___x_776_, v___x_773_);
v___x_778_ = l_Lasm_JS_Web_Support_args(v___x_777_);
v___x_779_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_767_, v___x_771_, v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close___boxed(lean_object* v_self_780_, lean_object* v_code_781_, lean_object* v_reason_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lasm_JS_Web_WebSocket_close(v_self_780_, v_code_781_, v_reason_782_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send(lean_object* v_self_786_, lean_object* v_data_787_){
_start:
{
lean_object* v___x_789_; lean_object* v___y_791_; 
v___x_789_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_send___closed__0));
switch(lean_obj_tag(v_data_787_))
{
case 0:
{
lean_object* v_value_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
v_value_797_ = lean_ctor_get(v_data_787_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_data_787_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v_data_787_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_value_797_);
lean_dec(v_data_787_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
lean_ctor_set_tag(v___x_799_, 6);
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_value_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
v___y_791_ = v___x_802_;
goto v___jp_790_;
}
}
}
case 1:
{
lean_object* v_value_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v_value_805_ = lean_ctor_get(v_data_787_, 0);
lean_inc(v_value_805_);
lean_dec_ref_known(v_data_787_, 1);
v___x_806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_807_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_807_, 0, v_value_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___y_791_ = v___x_807_;
goto v___jp_790_;
}
default: 
{
lean_object* v_value_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_value_808_ = lean_ctor_get(v_data_787_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v_data_787_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v_data_787_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_value_808_);
lean_dec(v_data_787_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set_tag(v___x_810_, 4);
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_value_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
v___y_791_ = v___x_813_;
goto v___jp_790_;
}
}
}
}
v___jp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_792_ = lean_unsigned_to_nat(1u);
v___x_793_ = lean_mk_empty_array_with_capacity(v___x_792_);
v___x_794_ = lean_array_push(v___x_793_, v___y_791_);
v___x_795_ = l_Lasm_JS_Web_Support_args(v___x_794_);
v___x_796_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_786_, v___x_789_, v___x_795_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send___boxed(lean_object* v_self_816_, lean_object* v_data_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lasm_JS_Web_WebSocket_send(v_self_816_, v_data_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(lean_object* v_context_820_, lean_object* v_d_821_){
_start:
{
lean_object* v_received_824_; 
if (lean_obj_tag(v_d_821_) == 9)
{
lean_object* v_value_838_; lean_object* v___x_839_; 
v_value_838_ = lean_ctor_get(v_d_821_, 0);
lean_inc(v_value_838_);
lean_dec_ref_known(v_d_821_, 2);
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v_value_838_);
return v___x_839_;
}
else
{
if (lean_obj_tag(v_d_821_) == 9)
{
lean_object* v_value_840_; lean_object* v_description_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v_value_840_ = lean_ctor_get(v_d_821_, 0);
v_description_841_ = lean_ctor_get(v_d_821_, 1);
v___x_842_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_843_ = lean_string_dec_eq(v_description_841_, v___x_842_);
if (v___x_843_ == 0)
{
goto v___jp_836_;
}
else
{
uint32_t v___x_844_; uint64_t v___x_845_; lean_object* v___x_846_; uint32_t v___x_847_; lean_object* v___x_848_; 
lean_inc_n(v_value_840_, 2);
lean_dec_ref_known(v_d_821_, 2);
v___x_844_ = 206;
v___x_845_ = 0ULL;
v___x_846_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_846_, 0, v_value_840_);
lean_ctor_set(v___x_846_, 1, v___x_842_);
v___x_847_ = lasm_js_value_handle(v_value_840_);
lean_dec(v_value_840_);
v___x_848_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_844_, v___x_845_, v___x_846_, v___x_847_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; uint8_t v___x_850_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref_known(v___x_848_, 1);
v___x_850_ = lean_string_validate_utf8(v_a_849_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v_a_849_);
v___x_851_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6);
v___x_852_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_851_);
v_received_824_ = v___x_852_;
goto v___jp_823_;
}
else
{
lean_object* v___x_853_; 
v___x_853_ = lean_string_from_utf8_unchecked(v_a_849_);
v_received_824_ = v___x_853_;
goto v___jp_823_;
}
}
else
{
lean_object* v___x_854_; 
lean_dec_ref_known(v___x_848_, 1);
v___x_854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7));
v_received_824_ = v___x_854_;
goto v___jp_823_;
}
}
}
else
{
goto v___jp_836_;
}
}
v___jp_823_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_825_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_826_ = lean_string_append(v___x_825_, v_context_820_);
v___x_827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_828_ = lean_string_append(v___x_826_, v___x_827_);
v___x_829_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCloseEvent___closed__0));
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
v___x_831_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_832_ = lean_string_append(v___x_830_, v___x_831_);
v___x_833_ = lean_string_append(v___x_832_, v_received_824_);
lean_dec_ref(v_received_824_);
v___x_834_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
v___x_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
v___jp_836_:
{
lean_object* v___x_837_; 
v___x_837_ = l_Lasm_JS_Data_describe(v_d_821_);
v_received_824_ = v___x_837_;
goto v___jp_823_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1___boxed(lean_object* v_context_855_, lean_object* v_d_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v_context_855_, v_d_856_);
lean_dec_ref(v_context_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(lean_object* v_b_859_, lean_object* v_args_860_, uint8_t v_await_861_){
_start:
{
uint64_t v___y_864_; uint64_t v___y_865_; uint64_t v___x_900_; uint64_t v___y_902_; 
v___x_900_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_861_ == 0)
{
uint64_t v___x_907_; 
v___x_907_ = 0ULL;
v___y_902_ = v___x_907_;
goto v___jp_901_;
}
else
{
uint64_t v___x_908_; 
v___x_908_ = 2ULL;
v___y_902_ = v___x_908_;
goto v___jp_901_;
}
v___jp_863_:
{
uint64_t v_flags_866_; uint32_t v___x_867_; lean_object* v___x_868_; uint32_t v___x_869_; lean_object* v___x_870_; 
v_flags_866_ = lean_uint64_lor(v___y_864_, v___y_865_);
v___x_867_ = 214;
v___x_868_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_859_, v_args_860_);
v___x_869_ = 0;
v___x_870_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_867_, v_flags_866_, v___x_868_, v___x_869_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_871_);
lean_dec(v_a_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
v___x_874_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_859_);
v___x_875_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v___x_874_, v_a_873_);
lean_dec_ref(v___x_874_);
return v___x_875_;
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_a_876_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_872_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_872_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_899_; 
v_a_884_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_899_ == 0)
{
v___x_886_ = v___x_870_;
v_isShared_887_ = v_isSharedCheck_899_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_870_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_899_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_888_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_889_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_859_);
v___x_890_ = lean_string_append(v___x_888_, v___x_889_);
lean_dec_ref(v___x_889_);
v___x_891_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_892_ = lean_string_append(v___x_890_, v___x_891_);
v___x_893_ = lean_io_error_to_string(v_a_884_);
v___x_894_ = lean_string_append(v___x_892_, v___x_893_);
lean_dec_ref(v___x_893_);
v___x_895_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v___x_895_);
v___x_897_ = v___x_886_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
v___jp_901_:
{
uint8_t v_construct_903_; uint64_t v___x_904_; 
v_construct_903_ = lean_ctor_get_uint8(v_b_859_, sizeof(void*)*4);
v___x_904_ = lean_uint64_lor(v___x_900_, v___y_902_);
if (v_construct_903_ == 0)
{
uint64_t v___x_905_; 
v___x_905_ = 0ULL;
v___y_864_ = v___x_904_;
v___y_865_ = v___x_905_;
goto v___jp_863_;
}
else
{
uint64_t v___x_906_; 
v___x_906_ = 4ULL;
v___y_864_ = v___x_904_;
v___y_865_ = v___x_906_;
goto v___jp_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1___boxed(lean_object* v_b_909_, lean_object* v_args_910_, lean_object* v_await_911_, lean_object* v_a_912_){
_start:
{
uint8_t v_await_boxed_913_; lean_object* v_res_914_; 
v_await_boxed_913_ = lean_unbox(v_await_911_);
v_res_914_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v_b_909_, v_args_910_, v_await_boxed_913_);
lean_dec_ref(v_b_909_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(lean_object* v_x_915_){
_start:
{
if (lean_obj_tag(v_x_915_) == 0)
{
lean_object* v___x_916_; 
v___x_916_ = lean_box(0);
return v___x_916_;
}
else
{
lean_object* v_val_917_; lean_object* v_bubbles_918_; lean_object* v_cancelable_919_; lean_object* v_composed_920_; lean_object* v_wasClean_921_; lean_object* v_code_922_; lean_object* v_reason_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v_val_917_ = lean_ctor_get(v_x_915_, 0);
lean_inc(v_val_917_);
lean_dec_ref_known(v_x_915_, 1);
v_bubbles_918_ = lean_ctor_get(v_val_917_, 0);
lean_inc(v_bubbles_918_);
v_cancelable_919_ = lean_ctor_get(v_val_917_, 1);
lean_inc(v_cancelable_919_);
v_composed_920_ = lean_ctor_get(v_val_917_, 2);
lean_inc(v_composed_920_);
v_wasClean_921_ = lean_ctor_get(v_val_917_, 3);
lean_inc(v_wasClean_921_);
v_code_922_ = lean_ctor_get(v_val_917_, 4);
lean_inc(v_code_922_);
v_reason_923_ = lean_ctor_get(v_val_917_, 5);
lean_inc(v_reason_923_);
lean_dec(v_val_917_);
v___x_924_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0));
v___x_925_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_918_);
lean_dec(v_bubbles_918_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1));
v___x_928_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_919_);
lean_dec(v_cancelable_919_);
v___x_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_927_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2));
v___x_931_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_920_);
lean_dec(v_composed_920_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_930_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_934_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_wasClean_921_);
lean_dec(v_wasClean_921_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_937_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_922_);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_936_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_940_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_923_);
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = lean_unsigned_to_nat(6u);
v___x_943_ = lean_mk_empty_array_with_capacity(v___x_942_);
v___x_944_ = lean_array_push(v___x_943_, v___x_926_);
v___x_945_ = lean_array_push(v___x_944_, v___x_929_);
v___x_946_ = lean_array_push(v___x_945_, v___x_932_);
v___x_947_ = lean_array_push(v___x_946_, v___x_935_);
v___x_948_ = lean_array_push(v___x_947_, v___x_938_);
v___x_949_ = lean_array_push(v___x_948_, v___x_941_);
v___x_950_ = l_Lasm_JS_Web_Support_fields(v___x_949_);
lean_dec_ref(v___x_949_);
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new(lean_object* v_type_959_, lean_object* v_eventInitDict_960_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; uint8_t v___x_970_; lean_object* v___x_971_; 
v___x_962_ = lean_unsigned_to_nat(2u);
v___x_963_ = ((lean_object*)(l_Lasm_JS_Web_CloseEvent_new___closed__2));
v___x_964_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_964_, 0, v_type_959_);
v___x_965_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(v_eventInitDict_960_);
v___x_966_ = lean_mk_empty_array_with_capacity(v___x_962_);
v___x_967_ = lean_array_push(v___x_966_, v___x_964_);
v___x_968_ = lean_array_push(v___x_967_, v___x_965_);
v___x_969_ = l_Lasm_JS_Web_Support_args(v___x_968_);
v___x_970_ = 0;
v___x_971_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v___x_963_, v___x_969_, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new___boxed(lean_object* v_type_972_, lean_object* v_eventInitDict_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lasm_JS_Web_CloseEvent_new(v_type_972_, v_eventInitDict_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean(lean_object* v_self_976_){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_979_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_976_, v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean___boxed(lean_object* v_self_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_Web_CloseEvent_wasClean(v_self_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code(lean_object* v_self_983_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_986_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_983_, v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code___boxed(lean_object* v_self_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lasm_JS_Web_CloseEvent_code(v_self_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason(lean_object* v_self_990_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_993_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_990_, v___x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason___boxed(lean_object* v_self_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lasm_JS_Web_CloseEvent_reason(v_self_994_);
return v_res_996_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_WebSocket(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instInhabitedBinaryType_default = _init_l_Lasm_JS_Web_instInhabitedBinaryType_default();
l_Lasm_JS_Web_instInhabitedBinaryType = _init_l_Lasm_JS_Web_instInhabitedBinaryType();
l_Lasm_JS_Web_WebSocket_CONNECTING = _init_l_Lasm_JS_Web_WebSocket_CONNECTING();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CONNECTING);
l_Lasm_JS_Web_WebSocket_OPEN = _init_l_Lasm_JS_Web_WebSocket_OPEN();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_OPEN);
l_Lasm_JS_Web_WebSocket_CLOSING = _init_l_Lasm_JS_Web_WebSocket_CLOSING();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CLOSING);
l_Lasm_JS_Web_WebSocket_CLOSED = _init_l_Lasm_JS_Web_WebSocket_CLOSED();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CLOSED);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
