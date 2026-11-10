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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx(uint8_t v_x_35_){
_start:
{
if (v_x_35_ == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(0u);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(1u);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BinaryType_ctorIdx___boxed(lean_object* v_x_38_){
_start:
{
uint8_t v_x_boxed_39_; lean_object* v_res_40_; 
v_x_boxed_39_ = lean_unbox(v_x_38_);
v_res_40_ = l_Lasm_JS_Web_BinaryType_ctorIdx(v_x_boxed_39_);
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
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = l_Lasm_JS_Web_BinaryType_ctorIdx(v_x_82_);
v___x_85_ = l_Lasm_JS_Web_BinaryType_ctorIdx(v_y_83_);
v___x_86_ = lean_nat_dec_eq(v___x_84_, v___x_85_);
lean_dec(v___x_85_);
lean_dec(v___x_84_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqBinaryType_beq___boxed(lean_object* v_x_87_, lean_object* v_y_88_){
_start:
{
uint8_t v_x_21__boxed_89_; uint8_t v_y_22__boxed_90_; uint8_t v_res_91_; lean_object* v_r_92_; 
v_x_21__boxed_89_ = lean_unbox(v_x_87_);
v_y_22__boxed_90_ = lean_unbox(v_y_88_);
v_res_91_ = l_Lasm_JS_Web_instBEqBinaryType_beq(v_x_21__boxed_89_, v_y_22__boxed_90_);
v_r_92_ = lean_box(v_res_91_);
return v_r_92_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_nat_to_int(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_to_int(v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr(uint8_t v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v___y_108_; lean_object* v___y_115_; 
if (v_x_105_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1024u);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_prec_106_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__4, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4);
v___y_108_ = v___x_123_;
goto v___jp_107_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__5, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5);
v___y_108_ = v___x_124_;
goto v___jp_107_;
}
}
else
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1024u);
v___x_126_ = lean_nat_dec_le(v___x_125_, v_prec_106_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__4, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__4);
v___y_115_ = v___x_127_;
goto v___jp_114_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&l_Lasm_JS_Web_instReprBinaryType_repr___closed__5, &l_Lasm_JS_Web_instReprBinaryType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprBinaryType_repr___closed__5);
v___y_115_ = v___x_128_;
goto v___jp_114_;
}
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_109_ = ((lean_object*)(l_Lasm_JS_Web_instReprBinaryType_repr___closed__1));
lean_inc(v___y_108_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___y_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = 0;
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_106_);
return v___x_113_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_116_ = ((lean_object*)(l_Lasm_JS_Web_instReprBinaryType_repr___closed__3));
lean_inc(v___y_115_);
v___x_117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_117_, 0, v___y_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = 0;
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_118_);
v___x_120_ = l_Repr_addAppParen(v___x_119_, v_prec_106_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprBinaryType_repr___boxed(lean_object* v_x_129_, lean_object* v_prec_130_){
_start:
{
uint8_t v_x_117__boxed_131_; lean_object* v_res_132_; 
v_x_117__boxed_131_ = lean_unbox(v_x_129_);
v_res_132_ = l_Lasm_JS_Web_instReprBinaryType_repr(v_x_117__boxed_131_, v_prec_130_);
lean_dec(v_prec_130_);
return v_res_132_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedBinaryType_default(void){
_start:
{
uint8_t v___x_135_; 
v___x_135_ = 0;
return v___x_135_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedBinaryType(void){
_start:
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0(uint8_t v_x_143_){
_start:
{
if (v_x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1));
return v___x_144_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3));
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBinaryType___lam__0___boxed(lean_object* v_x_146_){
_start:
{
uint8_t v_x_40__boxed_147_; lean_object* v_res_148_; 
v_x_40__boxed_147_ = lean_unbox(v_x_146_);
v_res_148_ = l_Lasm_JS_Web_instToJSBinaryType___lam__0(v_x_40__boxed_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0(lean_object* v_x_160_){
_start:
{
if (lean_obj_tag(v_x_160_) == 4)
{
lean_object* v_s_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_s_163_ = lean_ctor_get(v_x_160_, 0);
v___x_164_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0));
v___x_165_ = lean_string_dec_eq(v_s_163_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2));
v___x_167_ = lean_string_dec_eq(v_s_163_, v___x_166_);
if (v___x_167_ == 0)
{
goto v___jp_161_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__2));
return v___x_168_;
}
}
else
{
lean_object* v___x_169_; 
v___x_169_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__3));
return v___x_169_;
}
}
else
{
goto v___jp_161_;
}
v___jp_161_:
{
lean_object* v___x_162_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__1));
return v___x_162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBinaryType___lam__0___boxed(lean_object* v_x_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lasm_JS_Web_instFromJSBinaryType___lam__0(v_x_170_);
lean_dec(v_x_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_179_){
_start:
{
if (lean_obj_tag(v_x_179_) == 0)
{
lean_object* v___x_180_; 
v___x_180_ = lean_unsigned_to_nat(0u);
return v___x_180_;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = lean_unsigned_to_nat(1u);
return v___x_181_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_182_);
lean_dec_ref(v_x_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_184_, lean_object* v_k_185_){
_start:
{
lean_object* v_value_186_; lean_object* v___x_187_; 
v_value_186_ = lean_ctor_get(v_t_184_, 0);
lean_inc_ref(v_value_186_);
lean_dec_ref(v_t_184_);
v___x_187_ = lean_apply_1(v_k_185_, v_value_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_188_, lean_object* v_ctorIdx_189_, lean_object* v_t_190_, lean_object* v_h_191_, lean_object* v_k_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_190_, v_k_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_194_, lean_object* v_ctorIdx_195_, lean_object* v_t_196_, lean_object* v_h_197_, lean_object* v_k_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_194_, v_ctorIdx_195_, v_t_196_, v_h_197_, v_k_198_);
lean_dec(v_ctorIdx_195_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_200_, lean_object* v_domString_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_200_, v_domString_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_203_, lean_object* v_t_204_, lean_object* v_h_205_, lean_object* v_domString_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_204_, v_domString_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_208_, lean_object* v_sequence_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_208_, v_sequence_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_sequence_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lasm_JS_Web_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_212_, v_sequence_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_217_, 0, v_x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
lean_object* v_value_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v___f_237_);
v_value_239_ = lean_ctor_get(v_x_238_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v_x_238_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_value_239_);
lean_dec(v_x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set_tag(v___x_241_, 4);
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_value_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
else
{
lean_object* v_value_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_258_; 
v_value_247_ = lean_ctor_get(v_x_238_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_258_ == 0)
{
v___x_249_ = v_x_238_;
v_isShared_250_ = v_isSharedCheck_258_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_value_247_);
lean_dec(v_x_238_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_258_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; size_t v_sz_252_; size_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_251_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_252_ = lean_array_size(v_value_247_);
v___x_253_ = ((size_t)0ULL);
v___x_254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_251_, v___f_237_, v_sz_252_, v___x_253_, v_value_247_);
if (v_isShared_250_ == 0)
{
lean_ctor_set_tag(v___x_249_, 7);
lean_ctor_set(v___x_249_, 0, v___x_254_);
v___x_256_ = v___x_249_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v_value_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_268_, 0, v_value_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(lean_object* v_x_271_){
_start:
{
switch(lean_obj_tag(v_x_271_))
{
case 0:
{
lean_object* v___x_272_; 
v___x_272_ = lean_unsigned_to_nat(0u);
return v___x_272_;
}
case 1:
{
lean_object* v___x_273_; 
v___x_273_ = lean_unsigned_to_nat(1u);
return v___x_273_;
}
default: 
{
lean_object* v___x_274_; 
v___x_274_ = lean_unsigned_to_nat(2u);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___boxed(lean_object* v_x_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(v_x_275_);
lean_dec_ref(v_x_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(lean_object* v_t_277_, lean_object* v_k_278_){
_start:
{
if (lean_obj_tag(v_t_277_) == 1)
{
lean_object* v_value_279_; lean_object* v___x_280_; 
v_value_279_ = lean_ctor_get(v_t_277_, 0);
lean_inc(v_value_279_);
lean_dec_ref_known(v_t_277_, 1);
v___x_280_ = lean_apply_1(v_k_278_, v_value_279_);
return v___x_280_;
}
else
{
lean_object* v_value_281_; lean_object* v___x_282_; 
v_value_281_ = lean_ctor_get(v_t_277_, 0);
lean_inc_ref(v_value_281_);
lean_dec_ref(v_t_277_);
v___x_282_ = lean_apply_1(v_k_278_, v_value_281_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(lean_object* v_motive_283_, lean_object* v_ctorIdx_284_, lean_object* v_t_285_, lean_object* v_h_286_, lean_object* v_k_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_285_, v_k_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___boxed(lean_object* v_motive_289_, lean_object* v_ctorIdx_290_, lean_object* v_t_291_, lean_object* v_h_292_, lean_object* v_k_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(v_motive_289_, v_ctorIdx_290_, v_t_291_, v_h_292_, v_k_293_);
lean_dec(v_ctorIdx_290_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim___redArg(lean_object* v_t_295_, lean_object* v_bufferSource_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_295_, v_bufferSource_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim(lean_object* v_motive_298_, lean_object* v_t_299_, lean_object* v_h_300_, lean_object* v_bufferSource_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_299_, v_bufferSource_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim___redArg(lean_object* v_t_303_, lean_object* v_blob_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_303_, v_blob_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim(lean_object* v_motive_306_, lean_object* v_t_307_, lean_object* v_h_308_, lean_object* v_blob_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_307_, v_blob_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim___redArg(lean_object* v_t_311_, lean_object* v_usvString_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_311_, v_usvString_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim(lean_object* v_motive_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_usvString_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_315_, v_usvString_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_x_319_){
_start:
{
switch(lean_obj_tag(v_x_319_))
{
case 0:
{
lean_object* v_value_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
v_value_320_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v_x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_value_320_);
lean_dec(v_x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
lean_ctor_set_tag(v___x_322_, 6);
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_value_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
case 1:
{
lean_object* v_value_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_value_328_ = lean_ctor_get(v_x_319_, 0);
lean_inc(v_value_328_);
lean_dec_ref_known(v_x_319_, 1);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_330_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_330_, 0, v_value_328_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
return v___x_330_;
}
default: 
{
lean_object* v_value_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
v_value_331_ = lean_ctor_get(v_x_319_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v_x_319_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_value_331_);
lean_dec(v_x_319_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set_tag(v___x_333_, 4);
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_value_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v_value_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v_value_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_350_, 0, v_value_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0(lean_object* v___f_359_, lean_object* v___f_360_, lean_object* v___f_361_, lean_object* v_d_362_){
_start:
{
lean_object* v_bubbles_363_; lean_object* v_cancelable_364_; lean_object* v_composed_365_; lean_object* v_wasClean_366_; lean_object* v_code_367_; lean_object* v_reason_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_bubbles_363_ = lean_ctor_get(v_d_362_, 0);
lean_inc(v_bubbles_363_);
v_cancelable_364_ = lean_ctor_get(v_d_362_, 1);
lean_inc(v_cancelable_364_);
v_composed_365_ = lean_ctor_get(v_d_362_, 2);
lean_inc(v_composed_365_);
v_wasClean_366_ = lean_ctor_get(v_d_362_, 3);
lean_inc(v_wasClean_366_);
v_code_367_ = lean_ctor_get(v_d_362_, 4);
lean_inc(v_code_367_);
v_reason_368_ = lean_ctor_get(v_d_362_, 5);
lean_inc(v_reason_368_);
lean_dec_ref(v_d_362_);
v___x_369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_359_, 3);
v___x_370_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_359_, v_bubbles_363_);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1));
v___x_373_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_359_, v_cancelable_364_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2));
v___x_376_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_359_, v_composed_365_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_379_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_359_, v_wasClean_366_);
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_378_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
v___x_381_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_382_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_360_, v_code_367_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_385_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_361_, v_reason_368_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_unsigned_to_nat(6u);
v___x_388_ = lean_mk_empty_array_with_capacity(v___x_387_);
v___x_389_ = lean_array_push(v___x_388_, v___x_371_);
v___x_390_ = lean_array_push(v___x_389_, v___x_374_);
v___x_391_ = lean_array_push(v___x_390_, v___x_377_);
v___x_392_ = lean_array_push(v___x_391_, v___x_380_);
v___x_393_ = lean_array_push(v___x_392_, v___x_383_);
v___x_394_ = lean_array_push(v___x_393_, v___x_386_);
v___x_395_ = l_Lasm_JS_Web_Support_fields(v___x_394_);
lean_dec_ref(v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(size_t v_sz_404_, size_t v_i_405_, lean_object* v_bs_406_){
_start:
{
uint8_t v___x_407_; 
v___x_407_ = lean_usize_dec_lt(v_i_405_, v_sz_404_);
if (v___x_407_ == 0)
{
return v_bs_406_;
}
else
{
lean_object* v_v_408_; lean_object* v___x_409_; lean_object* v_bs_x27_410_; lean_object* v___x_411_; size_t v___x_412_; size_t v___x_413_; lean_object* v___x_414_; 
v_v_408_ = lean_array_uget(v_bs_406_, v_i_405_);
v___x_409_ = lean_unsigned_to_nat(0u);
v_bs_x27_410_ = lean_array_uset(v_bs_406_, v_i_405_, v___x_409_);
v___x_411_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_411_, 0, v_v_408_);
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_add(v_i_405_, v___x_412_);
v___x_414_ = lean_array_uset(v_bs_x27_410_, v_i_405_, v___x_411_);
v_i_405_ = v___x_413_;
v_bs_406_ = v___x_414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0___boxed(lean_object* v_sz_416_, lean_object* v_i_417_, lean_object* v_bs_418_){
_start:
{
size_t v_sz_boxed_419_; size_t v_i_boxed_420_; lean_object* v_res_421_; 
v_sz_boxed_419_ = lean_unbox_usize(v_sz_416_);
lean_dec(v_sz_416_);
v_i_boxed_420_ = lean_unbox_usize(v_i_417_);
lean_dec(v_i_417_);
v_res_421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_boxed_419_, v_i_boxed_420_, v_bs_418_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_422_) == 0)
{
lean_object* v___x_423_; 
v___x_423_ = lean_box(0);
return v___x_423_;
}
else
{
lean_object* v_val_424_; 
v_val_424_ = lean_ctor_get(v_x_422_, 0);
lean_inc(v_val_424_);
lean_dec_ref_known(v_x_422_, 1);
if (lean_obj_tag(v_val_424_) == 0)
{
lean_object* v_value_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
v_value_425_ = lean_ctor_get(v_val_424_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v_val_424_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v_val_424_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_value_425_);
lean_dec(v_val_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
lean_ctor_set_tag(v___x_427_, 4);
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_value_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
else
{
lean_object* v_value_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_443_; 
v_value_433_ = lean_ctor_get(v_val_424_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v_val_424_);
if (v_isSharedCheck_443_ == 0)
{
v___x_435_ = v_val_424_;
v_isShared_436_ = v_isSharedCheck_443_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_value_433_);
lean_dec(v_val_424_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_443_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
size_t v_sz_437_; size_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v_sz_437_ = lean_array_size(v_value_433_);
v___x_438_ = ((size_t)0ULL);
v___x_439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_437_, v___x_438_, v_value_433_);
if (v_isShared_436_ == 0)
{
lean_ctor_set_tag(v___x_435_, 7);
lean_ctor_set(v___x_435_, 0, v___x_439_);
v___x_441_ = v___x_435_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(7, 1, 0);
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_448_ = lean_string_utf8_byte_size(v___x_447_);
return v___x_448_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3);
v___x_451_ = lean_nat_dec_eq(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__8));
v___x_457_ = lean_unsigned_to_nat(46u);
v___x_458_ = lean_unsigned_to_nat(193u);
v___x_459_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7));
v___x_460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6));
v___x_461_ = l_mkPanicMessageWithDecl(v___x_460_, v___x_459_, v___x_458_, v___x_457_, v___x_456_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(lean_object* v_context_463_, lean_object* v_d_464_){
_start:
{
lean_object* v___y_467_; lean_object* v___y_468_; 
if (lean_obj_tag(v_d_464_) == 9)
{
lean_object* v_value_472_; lean_object* v___x_473_; 
v_value_472_ = lean_ctor_get(v_d_464_, 0);
lean_inc(v_value_472_);
lean_dec_ref_known(v_d_464_, 2);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v_value_472_);
return v___x_473_;
}
else
{
lean_object* v___x_474_; lean_object* v_received_476_; 
v___x_474_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_464_) == 9)
{
lean_object* v_value_490_; lean_object* v_description_491_; uint8_t v___x_492_; 
v_value_490_ = lean_ctor_get(v_d_464_, 0);
v_description_491_ = lean_ctor_get(v_d_464_, 1);
v___x_492_ = lean_string_dec_eq(v_description_491_, v___x_474_);
if (v___x_492_ == 0)
{
goto v___jp_488_;
}
else
{
uint32_t v___x_493_; uint64_t v___x_494_; lean_object* v___x_495_; uint32_t v___x_496_; lean_object* v___x_497_; 
lean_inc_n(v_value_490_, 2);
lean_dec_ref_known(v_d_464_, 2);
v___x_493_ = 206;
v___x_494_ = 0ULL;
v___x_495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_495_, 0, v_value_490_);
lean_ctor_set(v___x_495_, 1, v___x_474_);
v___x_496_ = lasm_js_value_handle(v_value_490_);
lean_dec(v_value_490_);
v___x_497_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_493_, v___x_494_, v___x_495_, v___x_496_);
lean_dec_ref_known(v___x_495_, 2);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; uint8_t v___x_499_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
v___x_499_ = lean_string_validate_utf8(v_a_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec(v_a_498_);
v___x_500_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_501_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_500_);
v_received_476_ = v___x_501_;
goto v___jp_475_;
}
else
{
lean_object* v___x_502_; 
v___x_502_ = lean_string_from_utf8_unchecked(v_a_498_);
v_received_476_ = v___x_502_;
goto v___jp_475_;
}
}
else
{
lean_object* v___x_503_; 
lean_dec_ref_known(v___x_497_, 1);
v___x_503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v_received_476_ = v___x_503_;
goto v___jp_475_;
}
}
}
else
{
goto v___jp_488_;
}
v___jp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_478_ = lean_string_append(v___x_477_, v_context_463_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
v___x_481_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebSocket___closed__1));
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
v___x_483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
v___x_485_ = lean_string_append(v___x_484_, v_received_476_);
lean_dec_ref(v_received_476_);
v___x_486_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; 
v___x_487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5));
v___y_467_ = v___x_485_;
v___y_468_ = v___x_487_;
goto v___jp_466_;
}
else
{
v___y_467_ = v___x_485_;
v___y_468_ = v___x_474_;
goto v___jp_466_;
}
}
v___jp_488_:
{
lean_object* v___x_489_; 
v___x_489_ = l_Lasm_JS_Data_describe(v_d_464_);
v_received_476_ = v___x_489_;
goto v___jp_475_;
}
}
v___jp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_string_append(v___y_467_, v___y_468_);
v___x_470_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___boxed(lean_object* v_context_504_, lean_object* v_d_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v_context_504_, v_d_505_);
lean_dec_ref(v_context_504_);
return v_res_507_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_509_; uint64_t v___x_510_; 
v___x_509_ = 0;
v___x_510_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(lean_object* v_b_511_, lean_object* v_args_512_, uint8_t v_await_513_){
_start:
{
uint64_t v___y_516_; uint64_t v___y_517_; uint64_t v___x_560_; uint64_t v___y_562_; 
v___x_560_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_513_ == 0)
{
uint64_t v___x_567_; 
v___x_567_ = 0ULL;
v___y_562_ = v___x_567_;
goto v___jp_561_;
}
else
{
uint64_t v___x_568_; 
v___x_568_ = 2ULL;
v___y_562_ = v___x_568_;
goto v___jp_561_;
}
v___jp_515_:
{
uint64_t v_flags_518_; uint32_t v___x_519_; lean_object* v___x_520_; uint32_t v___x_521_; lean_object* v___x_522_; 
v_flags_518_ = lean_uint64_lor(v___y_516_, v___y_517_);
v___x_519_ = 214;
v___x_520_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_511_, v_args_512_);
v___x_521_ = 0;
v___x_522_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_519_, v_flags_518_, v___x_520_, v___x_521_);
lean_dec(v___x_520_);
if (lean_obj_tag(v___x_522_) == 0)
{
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_524_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v___x_522_, 1);
v___x_524_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_523_);
lean_dec(v_a_523_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_524_, 1);
v___x_526_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_511_);
v___x_527_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v___x_526_, v_a_525_);
lean_dec_ref(v___x_526_);
return v___x_527_;
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
v_a_528_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_524_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_524_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
v_a_536_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v___x_522_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_522_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set_tag(v___x_538_, 1);
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_559_; 
v_a_544_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_559_ == 0)
{
v___x_546_ = v___x_522_;
v_isShared_547_ = v_isSharedCheck_559_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_522_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_559_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_548_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_549_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_511_);
v___x_550_ = lean_string_append(v___x_548_, v___x_549_);
lean_dec_ref(v___x_549_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = lean_io_error_to_string(v_a_544_);
v___x_554_ = lean_string_append(v___x_552_, v___x_553_);
lean_dec_ref(v___x_553_);
v___x_555_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_555_);
v___x_557_ = v___x_546_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
v___jp_561_:
{
uint8_t v_construct_563_; uint64_t v___x_564_; 
v_construct_563_ = lean_ctor_get_uint8(v_b_511_, sizeof(void*)*4);
v___x_564_ = lean_uint64_lor(v___x_560_, v___y_562_);
if (v_construct_563_ == 0)
{
uint64_t v___x_565_; 
v___x_565_ = 0ULL;
v___y_516_ = v___x_564_;
v___y_517_ = v___x_565_;
goto v___jp_515_;
}
else
{
uint64_t v___x_566_; 
v___x_566_ = 4ULL;
v___y_516_ = v___x_564_;
v___y_517_ = v___x_566_;
goto v___jp_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___boxed(lean_object* v_b_569_, lean_object* v_args_570_, lean_object* v_await_571_, lean_object* v_a_572_){
_start:
{
uint8_t v_await_boxed_573_; lean_object* v_res_574_; 
v_await_boxed_573_ = lean_unbox(v_await_571_);
v_res_574_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v_b_569_, v_args_570_, v_await_boxed_573_);
lean_dec_ref(v_b_569_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new(lean_object* v_url_584_, lean_object* v_protocols_585_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; uint8_t v___x_595_; lean_object* v___x_596_; 
v___x_587_ = lean_unsigned_to_nat(2u);
v___x_588_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_new___closed__3));
v___x_589_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_589_, 0, v_url_584_);
v___x_590_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(v_protocols_585_);
v___x_591_ = lean_mk_empty_array_with_capacity(v___x_587_);
v___x_592_ = lean_array_push(v___x_591_, v___x_589_);
v___x_593_ = lean_array_push(v___x_592_, v___x_590_);
v___x_594_ = l_Lasm_JS_Web_Support_args(v___x_593_);
v___x_595_ = 0;
v___x_596_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v___x_588_, v___x_594_, v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new___boxed(lean_object* v_url_597_, lean_object* v_protocols_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_JS_Web_WebSocket_new(v_url_597_, v_protocols_598_);
return v_res_600_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CONNECTING(void){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = lean_unsigned_to_nat(0u);
return v___x_601_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_OPEN(void){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = lean_unsigned_to_nat(1u);
return v___x_602_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSING(void){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = lean_unsigned_to_nat(2u);
return v___x_603_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSED(void){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = lean_unsigned_to_nat(3u);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url(lean_object* v_self_606_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_url___closed__0));
v___x_609_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_606_, v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url___boxed(lean_object* v_self_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lasm_JS_Web_WebSocket_url(v_self_610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState(lean_object* v_self_614_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_readyState___closed__0));
v___x_617_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_614_, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState___boxed(lean_object* v_self_618_, lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lasm_JS_Web_WebSocket_readyState(v_self_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount(lean_object* v_self_622_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0));
v___x_625_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_622_, v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount___boxed(lean_object* v_self_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lasm_JS_Web_WebSocket_bufferedAmount(v_self_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions(lean_object* v_self_630_){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_extensions___closed__0));
v___x_633_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_630_, v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions___boxed(lean_object* v_self_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_JS_Web_WebSocket_extensions(v_self_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol(lean_object* v_self_638_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_protocol___closed__0));
v___x_641_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_638_, v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol___boxed(lean_object* v_self_642_, lean_object* v_a_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lasm_JS_Web_WebSocket_protocol(v_self_642_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(lean_object* v_context_646_, lean_object* v_d_647_){
_start:
{
lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_656_; lean_object* v_received_657_; lean_object* v___y_673_; 
if (lean_obj_tag(v_d_647_) == 4)
{
lean_object* v_s_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v_s_700_ = lean_ctor_get(v_d_647_, 0);
v___x_701_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0));
v___x_702_ = lean_string_dec_eq(v_s_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2));
v___x_704_ = lean_string_dec_eq(v_s_700_, v___x_703_);
if (v___x_704_ == 0)
{
goto v___jp_675_;
}
else
{
uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
lean_dec_ref_known(v_d_647_, 1);
v___x_705_ = 1;
v___x_706_ = lean_box(v___x_705_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
else
{
uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec_ref_known(v_d_647_, 1);
v___x_708_ = 0;
v___x_709_ = lean_box(v___x_708_);
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
else
{
goto v___jp_675_;
}
v___jp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_string_append(v___y_650_, v___y_651_);
v___x_653_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
v___jp_655_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_658_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_659_ = lean_string_append(v___x_658_, v_context_646_);
v___x_660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_661_ = lean_string_append(v___x_659_, v___x_660_);
v___x_662_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___closed__1));
v___x_663_ = lean_string_append(v___x_661_, v___x_662_);
v___x_664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
v___x_666_ = lean_string_append(v___x_665_, v_received_657_);
lean_dec_ref(v_received_657_);
v___x_667_ = lean_string_utf8_byte_size(v___y_656_);
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_nat_dec_eq(v___x_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0));
v___y_650_ = v___x_666_;
v___y_651_ = v___x_670_;
goto v___jp_649_;
}
else
{
lean_object* v___x_671_; 
v___x_671_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___y_650_ = v___x_666_;
v___y_651_ = v___x_671_;
goto v___jp_649_;
}
}
v___jp_672_:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lasm_JS_Data_describe(v_d_647_);
v___y_656_ = v___y_673_;
v_received_657_ = v___x_674_;
goto v___jp_655_;
}
v___jp_675_:
{
lean_object* v___x_676_; 
v___x_676_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0));
if (lean_obj_tag(v_d_647_) == 9)
{
lean_object* v_value_677_; lean_object* v_description_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v_value_677_ = lean_ctor_get(v_d_647_, 0);
v_description_678_ = lean_ctor_get(v_d_647_, 1);
v___x_679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_680_ = lean_string_dec_eq(v_description_678_, v___x_679_);
if (v___x_680_ == 0)
{
v___y_673_ = v___x_676_;
goto v___jp_672_;
}
else
{
lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_697_; 
lean_inc(v_value_677_);
v_isSharedCheck_697_ = !lean_is_exclusive(v_d_647_);
if (v_isSharedCheck_697_ == 0)
{
lean_object* v_unused_698_; lean_object* v_unused_699_; 
v_unused_698_ = lean_ctor_get(v_d_647_, 1);
lean_dec(v_unused_698_);
v_unused_699_ = lean_ctor_get(v_d_647_, 0);
lean_dec(v_unused_699_);
v___x_682_ = v_d_647_;
v_isShared_683_ = v_isSharedCheck_697_;
goto v_resetjp_681_;
}
else
{
lean_dec(v_d_647_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_697_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
uint32_t v___x_684_; uint64_t v___x_685_; lean_object* v___x_687_; 
v___x_684_ = 206;
v___x_685_ = 0ULL;
lean_inc(v_value_677_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 1, v___x_679_);
v___x_687_ = v___x_682_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_value_677_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_679_);
v___x_687_ = v_reuseFailAlloc_696_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
uint32_t v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lasm_js_value_handle(v_value_677_);
lean_dec(v_value_677_);
v___x_689_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_684_, v___x_685_, v___x_687_, v___x_688_);
lean_dec_ref(v___x_687_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; uint8_t v___x_691_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
v___x_691_ = lean_string_validate_utf8(v_a_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec(v_a_690_);
v___x_692_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_693_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_692_);
v___y_656_ = v___x_676_;
v_received_657_ = v___x_693_;
goto v___jp_655_;
}
else
{
lean_object* v___x_694_; 
v___x_694_ = lean_string_from_utf8_unchecked(v_a_690_);
v___y_656_ = v___x_676_;
v_received_657_ = v___x_694_;
goto v___jp_655_;
}
}
else
{
lean_object* v___x_695_; 
lean_dec_ref_known(v___x_689_, 1);
v___x_695_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v___y_656_ = v___x_676_;
v_received_657_ = v___x_695_;
goto v___jp_655_;
}
}
}
}
}
else
{
v___y_673_ = v___x_676_;
goto v___jp_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object* v_context_711_, lean_object* v_d_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_711_, v_d_712_);
lean_dec_ref(v_context_711_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(lean_object* v_context_715_, lean_object* v_bytes_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_716_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_720_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_a_719_);
lean_dec_ref_known(v___x_718_, 1);
v___x_720_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_715_, v_a_719_);
return v___x_720_;
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
v_a_721_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_718_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_718_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0___boxed(lean_object* v_context_729_, lean_object* v_bytes_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v_context_729_, v_bytes_730_);
lean_dec_ref(v_bytes_730_);
lean_dec_ref(v_context_729_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(lean_object* v_o_734_, lean_object* v_key_735_){
_start:
{
lean_object* v_k_737_; lean_object* v___x_738_; 
v_k_737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_737_, 0, v_key_735_);
v___x_738_ = l_Lasm_JS_Wire_encodeIO(v_k_737_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; uint32_t v___x_740_; uint32_t v___x_741_; uint64_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
v___x_740_ = 203;
v___x_741_ = lasm_js_value_handle(v_o_734_);
v___x_742_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
v___x_743_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_744_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_744_, 0, v_o_734_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_unsigned_to_nat(2u);
v___x_746_ = lean_mk_empty_array_with_capacity(v___x_745_);
lean_inc_ref(v_k_737_);
v___x_747_ = lean_array_push(v___x_746_, v_k_737_);
v___x_748_ = lean_array_push(v___x_747_, v___x_744_);
v___x_749_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
v___x_750_ = lasm_js_call(v___x_740_, v___x_741_, v___x_742_, v_a_739_, v___x_749_);
lean_dec_ref_known(v___x_749_, 1);
lean_dec(v_a_739_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_750_, 1);
v___x_752_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0));
v___x_753_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_737_);
v___x_754_ = lean_string_append(v___x_752_, v___x_753_);
lean_dec_ref(v___x_753_);
v___x_755_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v___x_754_, v_a_751_);
lean_dec(v_a_751_);
lean_dec_ref(v___x_754_);
return v___x_755_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref_known(v_k_737_, 1);
v_a_756_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_750_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_750_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec_ref_known(v_k_737_, 1);
lean_dec(v_o_734_);
v_a_764_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_738_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_738_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___boxed(lean_object* v_o_772_, lean_object* v_key_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_o_772_, v_key_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType(lean_object* v_self_777_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
v___x_780_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_self_777_, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType___boxed(lean_object* v_self_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lasm_JS_Web_WebSocket_binaryType(v_self_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType(lean_object* v_self_784_, uint8_t v_value_785_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
if (v_value_785_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1));
v___x_789_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_784_, v___x_787_, v___x_788_);
return v___x_789_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3));
v___x_791_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_784_, v___x_787_, v___x_790_);
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType___boxed(lean_object* v_self_792_, lean_object* v_value_793_, lean_object* v_a_794_){
_start:
{
uint8_t v_value_boxed_795_; lean_object* v_res_796_; 
v_value_boxed_795_ = lean_unbox(v_value_793_);
v_res_796_ = l_Lasm_JS_Web_WebSocket_setBinaryType(v_self_792_, v_value_boxed_795_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close(lean_object* v_self_798_, lean_object* v_code_799_, lean_object* v_reason_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_802_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_close___closed__0));
v___x_803_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_799_);
v___x_804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_800_);
v___x_805_ = lean_unsigned_to_nat(2u);
v___x_806_ = lean_mk_empty_array_with_capacity(v___x_805_);
v___x_807_ = lean_array_push(v___x_806_, v___x_803_);
v___x_808_ = lean_array_push(v___x_807_, v___x_804_);
v___x_809_ = l_Lasm_JS_Web_Support_args(v___x_808_);
v___x_810_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_798_, v___x_802_, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close___boxed(lean_object* v_self_811_, lean_object* v_code_812_, lean_object* v_reason_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Web_WebSocket_close(v_self_811_, v_code_812_, v_reason_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send(lean_object* v_self_817_, lean_object* v_data_818_){
_start:
{
lean_object* v___x_820_; lean_object* v___y_822_; 
v___x_820_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_send___closed__0));
switch(lean_obj_tag(v_data_818_))
{
case 0:
{
lean_object* v_value_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_value_828_ = lean_ctor_get(v_data_818_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v_data_818_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v_data_818_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_value_828_);
lean_dec(v_data_818_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 6);
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_value_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
v___y_822_ = v___x_833_;
goto v___jp_821_;
}
}
}
case 1:
{
lean_object* v_value_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_value_836_ = lean_ctor_get(v_data_818_, 0);
lean_inc(v_value_836_);
lean_dec_ref_known(v_data_818_, 1);
v___x_837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_838_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_838_, 0, v_value_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___y_822_ = v___x_838_;
goto v___jp_821_;
}
default: 
{
lean_object* v_value_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_value_839_ = lean_ctor_get(v_data_818_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_data_818_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v_data_818_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_value_839_);
lean_dec(v_data_818_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set_tag(v___x_841_, 4);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_value_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
v___y_822_ = v___x_844_;
goto v___jp_821_;
}
}
}
}
v___jp_821_:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_823_ = lean_unsigned_to_nat(1u);
v___x_824_ = lean_mk_empty_array_with_capacity(v___x_823_);
v___x_825_ = lean_array_push(v___x_824_, v___y_822_);
v___x_826_ = l_Lasm_JS_Web_Support_args(v___x_825_);
v___x_827_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_817_, v___x_820_, v___x_826_);
return v___x_827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send___boxed(lean_object* v_self_847_, lean_object* v_data_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lasm_JS_Web_WebSocket_send(v_self_847_, v_data_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(lean_object* v_context_851_, lean_object* v_d_852_){
_start:
{
lean_object* v___y_855_; lean_object* v___y_856_; 
if (lean_obj_tag(v_d_852_) == 9)
{
lean_object* v_value_860_; lean_object* v___x_861_; 
v_value_860_ = lean_ctor_get(v_d_852_, 0);
lean_inc(v_value_860_);
lean_dec_ref_known(v_d_852_, 2);
v___x_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_861_, 0, v_value_860_);
return v___x_861_;
}
else
{
lean_object* v___x_862_; lean_object* v_received_864_; 
v___x_862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_852_) == 9)
{
lean_object* v_value_878_; lean_object* v_description_879_; uint8_t v___x_880_; 
v_value_878_ = lean_ctor_get(v_d_852_, 0);
v_description_879_ = lean_ctor_get(v_d_852_, 1);
v___x_880_ = lean_string_dec_eq(v_description_879_, v___x_862_);
if (v___x_880_ == 0)
{
goto v___jp_876_;
}
else
{
uint32_t v___x_881_; uint64_t v___x_882_; lean_object* v___x_883_; uint32_t v___x_884_; lean_object* v___x_885_; 
lean_inc_n(v_value_878_, 2);
lean_dec_ref_known(v_d_852_, 2);
v___x_881_ = 206;
v___x_882_ = 0ULL;
v___x_883_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_883_, 0, v_value_878_);
lean_ctor_set(v___x_883_, 1, v___x_862_);
v___x_884_ = lasm_js_value_handle(v_value_878_);
lean_dec(v_value_878_);
v___x_885_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_881_, v___x_882_, v___x_883_, v___x_884_);
lean_dec_ref_known(v___x_883_, 2);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_string_validate_utf8(v_a_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec(v_a_886_);
v___x_888_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_889_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_888_);
v_received_864_ = v___x_889_;
goto v___jp_863_;
}
else
{
lean_object* v___x_890_; 
v___x_890_ = lean_string_from_utf8_unchecked(v_a_886_);
v_received_864_ = v___x_890_;
goto v___jp_863_;
}
}
else
{
lean_object* v___x_891_; 
lean_dec_ref_known(v___x_885_, 1);
v___x_891_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v_received_864_ = v___x_891_;
goto v___jp_863_;
}
}
}
else
{
goto v___jp_876_;
}
v___jp_863_:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_865_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_866_ = lean_string_append(v___x_865_, v_context_851_);
v___x_867_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_868_ = lean_string_append(v___x_866_, v___x_867_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCloseEvent___closed__0));
v___x_870_ = lean_string_append(v___x_868_, v___x_869_);
v___x_871_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_872_ = lean_string_append(v___x_870_, v___x_871_);
v___x_873_ = lean_string_append(v___x_872_, v_received_864_);
lean_dec_ref(v_received_864_);
v___x_874_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5));
v___y_855_ = v___x_873_;
v___y_856_ = v___x_875_;
goto v___jp_854_;
}
else
{
v___y_855_ = v___x_873_;
v___y_856_ = v___x_862_;
goto v___jp_854_;
}
}
v___jp_876_:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lasm_JS_Data_describe(v_d_852_);
v_received_864_ = v___x_877_;
goto v___jp_863_;
}
}
v___jp_854_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_string_append(v___y_855_, v___y_856_);
v___x_858_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1___boxed(lean_object* v_context_892_, lean_object* v_d_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v_context_892_, v_d_893_);
lean_dec_ref(v_context_892_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(lean_object* v_b_896_, lean_object* v_args_897_, uint8_t v_await_898_){
_start:
{
uint64_t v___y_901_; uint64_t v___y_902_; uint64_t v___x_945_; uint64_t v___y_947_; 
v___x_945_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_898_ == 0)
{
uint64_t v___x_952_; 
v___x_952_ = 0ULL;
v___y_947_ = v___x_952_;
goto v___jp_946_;
}
else
{
uint64_t v___x_953_; 
v___x_953_ = 2ULL;
v___y_947_ = v___x_953_;
goto v___jp_946_;
}
v___jp_900_:
{
uint64_t v_flags_903_; uint32_t v___x_904_; lean_object* v___x_905_; uint32_t v___x_906_; lean_object* v___x_907_; 
v_flags_903_ = lean_uint64_lor(v___y_901_, v___y_902_);
v___x_904_ = 214;
v___x_905_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_896_, v_args_897_);
v___x_906_ = 0;
v___x_907_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_904_, v_flags_903_, v___x_905_, v___x_906_);
lean_dec(v___x_905_);
if (lean_obj_tag(v___x_907_) == 0)
{
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_909_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_907_, 1);
v___x_909_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_908_);
lean_dec(v_a_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_896_);
v___x_912_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v___x_911_, v_a_910_);
lean_dec_ref(v___x_911_);
return v___x_912_;
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
v_a_913_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_909_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_909_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_a_921_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_907_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_907_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set_tag(v___x_923_, 1);
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_944_; 
v_a_929_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_944_ == 0)
{
v___x_931_ = v___x_907_;
v_isShared_932_ = v_isSharedCheck_944_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_907_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_944_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_933_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_934_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_896_);
v___x_935_ = lean_string_append(v___x_933_, v___x_934_);
lean_dec_ref(v___x_934_);
v___x_936_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_937_ = lean_string_append(v___x_935_, v___x_936_);
v___x_938_ = lean_io_error_to_string(v_a_929_);
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
lean_dec_ref(v___x_938_);
v___x_940_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v___x_940_);
v___x_942_ = v___x_931_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
v___jp_946_:
{
uint8_t v_construct_948_; uint64_t v___x_949_; 
v_construct_948_ = lean_ctor_get_uint8(v_b_896_, sizeof(void*)*4);
v___x_949_ = lean_uint64_lor(v___x_945_, v___y_947_);
if (v_construct_948_ == 0)
{
uint64_t v___x_950_; 
v___x_950_ = 0ULL;
v___y_901_ = v___x_949_;
v___y_902_ = v___x_950_;
goto v___jp_900_;
}
else
{
uint64_t v___x_951_; 
v___x_951_ = 4ULL;
v___y_901_ = v___x_949_;
v___y_902_ = v___x_951_;
goto v___jp_900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1___boxed(lean_object* v_b_954_, lean_object* v_args_955_, lean_object* v_await_956_, lean_object* v_a_957_){
_start:
{
uint8_t v_await_boxed_958_; lean_object* v_res_959_; 
v_await_boxed_958_ = lean_unbox(v_await_956_);
v_res_959_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v_b_954_, v_args_955_, v_await_boxed_958_);
lean_dec_ref(v_b_954_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(lean_object* v_x_960_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v___x_961_; 
v___x_961_ = lean_box(0);
return v___x_961_;
}
else
{
lean_object* v_val_962_; lean_object* v_bubbles_963_; lean_object* v_cancelable_964_; lean_object* v_composed_965_; lean_object* v_wasClean_966_; lean_object* v_code_967_; lean_object* v_reason_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_val_962_ = lean_ctor_get(v_x_960_, 0);
lean_inc(v_val_962_);
lean_dec_ref_known(v_x_960_, 1);
v_bubbles_963_ = lean_ctor_get(v_val_962_, 0);
lean_inc(v_bubbles_963_);
v_cancelable_964_ = lean_ctor_get(v_val_962_, 1);
lean_inc(v_cancelable_964_);
v_composed_965_ = lean_ctor_get(v_val_962_, 2);
lean_inc(v_composed_965_);
v_wasClean_966_ = lean_ctor_get(v_val_962_, 3);
lean_inc(v_wasClean_966_);
v_code_967_ = lean_ctor_get(v_val_962_, 4);
lean_inc(v_code_967_);
v_reason_968_ = lean_ctor_get(v_val_962_, 5);
lean_inc(v_reason_968_);
lean_dec(v_val_962_);
v___x_969_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0));
v___x_970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_963_);
lean_dec(v_bubbles_963_);
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1));
v___x_973_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_964_);
lean_dec(v_cancelable_964_);
v___x_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2));
v___x_976_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_965_);
lean_dec(v_composed_965_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_979_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_wasClean_966_);
lean_dec(v_wasClean_966_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_982_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_967_);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_985_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_968_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_unsigned_to_nat(6u);
v___x_988_ = lean_mk_empty_array_with_capacity(v___x_987_);
v___x_989_ = lean_array_push(v___x_988_, v___x_971_);
v___x_990_ = lean_array_push(v___x_989_, v___x_974_);
v___x_991_ = lean_array_push(v___x_990_, v___x_977_);
v___x_992_ = lean_array_push(v___x_991_, v___x_980_);
v___x_993_ = lean_array_push(v___x_992_, v___x_983_);
v___x_994_ = lean_array_push(v___x_993_, v___x_986_);
v___x_995_ = l_Lasm_JS_Web_Support_fields(v___x_994_);
lean_dec_ref(v___x_994_);
return v___x_995_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new(lean_object* v_type_1004_, lean_object* v_eventInitDict_1005_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; lean_object* v___x_1016_; 
v___x_1007_ = lean_unsigned_to_nat(2u);
v___x_1008_ = ((lean_object*)(l_Lasm_JS_Web_CloseEvent_new___closed__2));
v___x_1009_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_type_1004_);
v___x_1010_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(v_eventInitDict_1005_);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1007_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_1009_);
v___x_1013_ = lean_array_push(v___x_1012_, v___x_1010_);
v___x_1014_ = l_Lasm_JS_Web_Support_args(v___x_1013_);
v___x_1015_ = 0;
v___x_1016_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v___x_1008_, v___x_1014_, v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new___boxed(lean_object* v_type_1017_, lean_object* v_eventInitDict_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lasm_JS_Web_CloseEvent_new(v_type_1017_, v_eventInitDict_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean(lean_object* v_self_1021_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_1024_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1021_, v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean___boxed(lean_object* v_self_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lasm_JS_Web_CloseEvent_wasClean(v_self_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code(lean_object* v_self_1028_){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_1031_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1028_, v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code___boxed(lean_object* v_self_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lasm_JS_Web_CloseEvent_code(v_self_1032_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason(lean_object* v_self_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_1038_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1035_, v___x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason___boxed(lean_object* v_self_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lasm_JS_Web_CloseEvent_reason(v_self_1039_);
return v_res_1041_;
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
