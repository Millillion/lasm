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
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WebSocket_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "WebSocket"};
static const lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WebSocket_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_WebSocket_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_WebSocket_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WebSocket_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CloseEvent"};
static const lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_CloseEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.CloseEvent.new"};
static const lean_object* l_Lasm_JS_Web_CloseEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CloseEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_WebSocket_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CloseEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CloseEvent_new___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0(lean_object* v___x_404_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0___boxed(lean_object* v___x_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lasm_JS_Web_WebSocket_cast_x3f___lam__0(v___x_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f(lean_object* v_v_416_){
_start:
{
lean_object* v___f_418_; lean_object* v___x_419_; 
v___f_418_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_cast_x3f___closed__2));
lean_inc(v_v_416_);
v___x_419_ = l_Lasm_JS_Web_Support_isInstance(v___f_418_, v_v_416_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_433_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_433_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_433_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_433_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
uint8_t v___x_424_; 
v___x_424_ = lean_unbox(v_a_420_);
lean_dec(v_a_420_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; lean_object* v___x_427_; 
lean_dec(v_v_416_);
v___x_425_ = lean_box(0);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_425_);
v___x_427_ = v___x_422_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
else
{
lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v_v_416_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_429_);
v___x_431_ = v___x_422_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_v_416_);
v_a_434_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_419_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_419_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_cast_x3f___boxed(lean_object* v_v_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_Web_WebSocket_cast_x3f(v_v_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(size_t v_sz_445_, size_t v_i_446_, lean_object* v_bs_447_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = lean_usize_dec_lt(v_i_446_, v_sz_445_);
if (v___x_448_ == 0)
{
return v_bs_447_;
}
else
{
lean_object* v_v_449_; lean_object* v___x_450_; lean_object* v_bs_x27_451_; lean_object* v___x_452_; size_t v___x_453_; size_t v___x_454_; lean_object* v___x_455_; 
v_v_449_ = lean_array_uget(v_bs_447_, v_i_446_);
v___x_450_ = lean_unsigned_to_nat(0u);
v_bs_x27_451_ = lean_array_uset(v_bs_447_, v_i_446_, v___x_450_);
v___x_452_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_452_, 0, v_v_449_);
v___x_453_ = ((size_t)1ULL);
v___x_454_ = lean_usize_add(v_i_446_, v___x_453_);
v___x_455_ = lean_array_uset(v_bs_x27_451_, v_i_446_, v___x_452_);
v_i_446_ = v___x_454_;
v_bs_447_ = v___x_455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0___boxed(lean_object* v_sz_457_, lean_object* v_i_458_, lean_object* v_bs_459_){
_start:
{
size_t v_sz_boxed_460_; size_t v_i_boxed_461_; lean_object* v_res_462_; 
v_sz_boxed_460_ = lean_unbox_usize(v_sz_457_);
lean_dec(v_sz_457_);
v_i_boxed_461_ = lean_unbox_usize(v_i_458_);
lean_dec(v_i_458_);
v_res_462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_boxed_460_, v_i_boxed_461_, v_bs_459_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_box(0);
return v___x_464_;
}
else
{
lean_object* v_val_465_; 
v_val_465_ = lean_ctor_get(v_x_463_, 0);
lean_inc(v_val_465_);
lean_dec_ref_known(v_x_463_, 1);
if (lean_obj_tag(v_val_465_) == 0)
{
lean_object* v_value_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v_value_466_ = lean_ctor_get(v_val_465_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v_val_465_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v_val_465_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_value_466_);
lean_dec(v_val_465_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set_tag(v___x_468_, 4);
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_value_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
else
{
lean_object* v_value_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_484_; 
v_value_474_ = lean_ctor_get(v_val_465_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_val_465_);
if (v_isSharedCheck_484_ == 0)
{
v___x_476_ = v_val_465_;
v_isShared_477_ = v_isSharedCheck_484_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_value_474_);
lean_dec(v_val_465_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_484_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
size_t v_sz_478_; size_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v_sz_478_ = lean_array_size(v_value_474_);
v___x_479_ = ((size_t)0ULL);
v___x_480_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0_spec__0(v_sz_478_, v___x_479_, v_value_474_);
if (v_isShared_477_ == 0)
{
lean_ctor_set_tag(v___x_476_, 7);
lean_ctor_set(v___x_476_, 0, v___x_480_);
v___x_482_ = v___x_476_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_489_ = lean_string_utf8_byte_size(v___x_488_);
return v___x_489_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__3);
v___x_492_ = lean_nat_dec_eq(v___x_491_, v___x_490_);
return v___x_492_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_497_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__8));
v___x_498_ = lean_unsigned_to_nat(46u);
v___x_499_ = lean_unsigned_to_nat(193u);
v___x_500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__7));
v___x_501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__6));
v___x_502_ = l_mkPanicMessageWithDecl(v___x_501_, v___x_500_, v___x_499_, v___x_498_, v___x_497_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(lean_object* v_context_504_, lean_object* v_d_505_){
_start:
{
lean_object* v___y_508_; lean_object* v___y_509_; 
if (lean_obj_tag(v_d_505_) == 9)
{
lean_object* v_value_513_; lean_object* v___x_514_; 
v_value_513_ = lean_ctor_get(v_d_505_, 0);
lean_inc(v_value_513_);
lean_dec_ref_known(v_d_505_, 2);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v_value_513_);
return v___x_514_;
}
else
{
lean_object* v___x_515_; lean_object* v_received_517_; 
v___x_515_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_505_) == 9)
{
lean_object* v_value_531_; lean_object* v_description_532_; uint8_t v___x_533_; 
v_value_531_ = lean_ctor_get(v_d_505_, 0);
v_description_532_ = lean_ctor_get(v_d_505_, 1);
v___x_533_ = lean_string_dec_eq(v_description_532_, v___x_515_);
if (v___x_533_ == 0)
{
goto v___jp_529_;
}
else
{
uint32_t v___x_534_; uint64_t v___x_535_; lean_object* v___x_536_; uint32_t v___x_537_; lean_object* v___x_538_; 
lean_inc_n(v_value_531_, 2);
lean_dec_ref_known(v_d_505_, 2);
v___x_534_ = 206;
v___x_535_ = 0ULL;
v___x_536_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_536_, 0, v_value_531_);
lean_ctor_set(v___x_536_, 1, v___x_515_);
v___x_537_ = lasm_js_value_handle(v_value_531_);
lean_dec(v_value_531_);
v___x_538_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_534_, v___x_535_, v___x_536_, v___x_537_);
lean_dec_ref_known(v___x_536_, 2);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; uint8_t v___x_540_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_538_, 1);
v___x_540_ = lean_string_validate_utf8(v_a_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec(v_a_539_);
v___x_541_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_542_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_541_);
v_received_517_ = v___x_542_;
goto v___jp_516_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_string_from_utf8_unchecked(v_a_539_);
v_received_517_ = v___x_543_;
goto v___jp_516_;
}
}
else
{
lean_object* v___x_544_; 
lean_dec_ref_known(v___x_538_, 1);
v___x_544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v_received_517_ = v___x_544_;
goto v___jp_516_;
}
}
}
else
{
goto v___jp_529_;
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_519_ = lean_string_append(v___x_518_, v_context_504_);
v___x_520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_521_ = lean_string_append(v___x_519_, v___x_520_);
v___x_522_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWebSocket___closed__1));
v___x_523_ = lean_string_append(v___x_521_, v___x_522_);
v___x_524_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_525_ = lean_string_append(v___x_523_, v___x_524_);
v___x_526_ = lean_string_append(v___x_525_, v_received_517_);
lean_dec_ref(v_received_517_);
v___x_527_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5));
v___y_508_ = v___x_526_;
v___y_509_ = v___x_528_;
goto v___jp_507_;
}
else
{
v___y_508_ = v___x_526_;
v___y_509_ = v___x_515_;
goto v___jp_507_;
}
}
v___jp_529_:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lasm_JS_Data_describe(v_d_505_);
v_received_517_ = v___x_530_;
goto v___jp_516_;
}
}
v___jp_507_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = lean_string_append(v___y_508_, v___y_509_);
v___x_511_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___boxed(lean_object* v_context_545_, lean_object* v_d_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v_context_545_, v_d_546_);
lean_dec_ref(v_context_545_);
return v_res_548_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_550_; uint64_t v___x_551_; 
v___x_550_ = 0;
v___x_551_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(lean_object* v_b_552_, lean_object* v_args_553_, uint8_t v_await_554_){
_start:
{
uint64_t v___y_557_; uint64_t v___y_558_; uint64_t v___x_601_; uint64_t v___y_603_; 
v___x_601_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_554_ == 0)
{
uint64_t v___x_608_; 
v___x_608_ = 0ULL;
v___y_603_ = v___x_608_;
goto v___jp_602_;
}
else
{
uint64_t v___x_609_; 
v___x_609_ = 2ULL;
v___y_603_ = v___x_609_;
goto v___jp_602_;
}
v___jp_556_:
{
uint64_t v_flags_559_; uint32_t v___x_560_; lean_object* v___x_561_; uint32_t v___x_562_; lean_object* v___x_563_; 
v_flags_559_ = lean_uint64_lor(v___y_557_, v___y_558_);
v___x_560_ = 214;
v___x_561_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_552_, v_args_553_);
v___x_562_ = 0;
v___x_563_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_560_, v_flags_559_, v___x_561_, v___x_562_);
lean_dec(v___x_561_);
if (lean_obj_tag(v___x_563_) == 0)
{
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v___x_563_, 1);
v___x_565_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_564_);
lean_dec(v_a_564_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_565_, 1);
v___x_567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_552_);
v___x_568_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2(v___x_567_, v_a_566_);
lean_dec_ref(v___x_567_);
return v___x_568_;
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_a_569_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_565_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_565_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
v_a_577_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_563_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_563_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
lean_ctor_set_tag(v___x_579_, 1);
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_600_; 
v_a_585_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_600_ == 0)
{
v___x_587_ = v___x_563_;
v_isShared_588_ = v_isSharedCheck_600_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_563_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_600_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_589_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_590_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_552_);
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
lean_dec_ref(v___x_590_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v___x_594_ = lean_io_error_to_string(v_a_585_);
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
lean_dec_ref(v___x_594_);
v___x_596_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_596_);
v___x_598_ = v___x_587_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
v___jp_602_:
{
uint8_t v_construct_604_; uint64_t v___x_605_; 
v_construct_604_ = lean_ctor_get_uint8(v_b_552_, sizeof(void*)*4);
v___x_605_ = lean_uint64_lor(v___x_601_, v___y_603_);
if (v_construct_604_ == 0)
{
uint64_t v___x_606_; 
v___x_606_ = 0ULL;
v___y_557_ = v___x_605_;
v___y_558_ = v___x_606_;
goto v___jp_556_;
}
else
{
uint64_t v___x_607_; 
v___x_607_ = 4ULL;
v___y_557_ = v___x_605_;
v___y_558_ = v___x_607_;
goto v___jp_556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___boxed(lean_object* v_b_610_, lean_object* v_args_611_, lean_object* v_await_612_, lean_object* v_a_613_){
_start:
{
uint8_t v_await_boxed_614_; lean_object* v_res_615_; 
v_await_boxed_614_ = lean_unbox(v_await_612_);
v_res_615_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v_b_610_, v_args_611_, v_await_boxed_614_);
lean_dec_ref(v_b_610_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new(lean_object* v_url_624_, lean_object* v_protocols_625_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; 
v___x_627_ = lean_unsigned_to_nat(2u);
v___x_628_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_new___closed__2));
v___x_629_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_629_, 0, v_url_624_);
v___x_630_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WebSocket_new_spec__0(v_protocols_625_);
v___x_631_ = lean_mk_empty_array_with_capacity(v___x_627_);
v___x_632_ = lean_array_push(v___x_631_, v___x_629_);
v___x_633_ = lean_array_push(v___x_632_, v___x_630_);
v___x_634_ = l_Lasm_JS_Web_Support_args(v___x_633_);
v___x_635_ = 0;
v___x_636_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1(v___x_628_, v___x_634_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_new___boxed(lean_object* v_url_637_, lean_object* v_protocols_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lasm_JS_Web_WebSocket_new(v_url_637_, v_protocols_638_);
return v_res_640_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CONNECTING(void){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = lean_unsigned_to_nat(0u);
return v___x_641_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_OPEN(void){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lean_unsigned_to_nat(1u);
return v___x_642_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSING(void){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_unsigned_to_nat(2u);
return v___x_643_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSED(void){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = lean_unsigned_to_nat(3u);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url(lean_object* v_self_646_){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_url___closed__0));
v___x_649_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_646_, v___x_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_url___boxed(lean_object* v_self_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lasm_JS_Web_WebSocket_url(v_self_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState(lean_object* v_self_654_){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_readyState___closed__0));
v___x_657_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_654_, v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_readyState___boxed(lean_object* v_self_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_JS_Web_WebSocket_readyState(v_self_658_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount(lean_object* v_self_662_){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_bufferedAmount___closed__0));
v___x_665_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_662_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_bufferedAmount___boxed(lean_object* v_self_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_JS_Web_WebSocket_bufferedAmount(v_self_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions(lean_object* v_self_670_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_extensions___closed__0));
v___x_673_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_670_, v___x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_extensions___boxed(lean_object* v_self_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lasm_JS_Web_WebSocket_extensions(v_self_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol(lean_object* v_self_678_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_protocol___closed__0));
v___x_681_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_678_, v___x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_protocol___boxed(lean_object* v_self_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lasm_JS_Web_WebSocket_protocol(v_self_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(lean_object* v_context_686_, lean_object* v_d_687_){
_start:
{
lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_696_; lean_object* v_received_697_; lean_object* v___y_713_; 
if (lean_obj_tag(v_d_687_) == 4)
{
lean_object* v_s_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v_s_740_ = lean_ctor_get(v_d_687_, 0);
v___x_741_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__0));
v___x_742_ = lean_string_dec_eq(v_s_740_, v___x_741_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_743_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__2));
v___x_744_ = lean_string_dec_eq(v_s_740_, v___x_743_);
if (v___x_744_ == 0)
{
goto v___jp_715_;
}
else
{
uint8_t v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec_ref_known(v_d_687_, 1);
v___x_745_ = 1;
v___x_746_ = lean_box(v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
}
else
{
uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec_ref_known(v_d_687_, 1);
v___x_748_ = 0;
v___x_749_ = lean_box(v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
else
{
goto v___jp_715_;
}
v___jp_689_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_string_append(v___y_690_, v___y_691_);
v___x_693_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
v___jp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_699_ = lean_string_append(v___x_698_, v_context_686_);
v___x_700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_701_ = lean_string_append(v___x_699_, v___x_700_);
v___x_702_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___closed__1));
v___x_703_ = lean_string_append(v___x_701_, v___x_702_);
v___x_704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_705_ = lean_string_append(v___x_703_, v___x_704_);
v___x_706_ = lean_string_append(v___x_705_, v_received_697_);
lean_dec_ref(v_received_697_);
v___x_707_ = lean_string_utf8_byte_size(v___y_696_);
v___x_708_ = lean_unsigned_to_nat(0u);
v___x_709_ = lean_nat_dec_eq(v___x_707_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___closed__0));
v___y_690_ = v___x_706_;
v___y_691_ = v___x_710_;
goto v___jp_689_;
}
else
{
lean_object* v___x_711_; 
v___x_711_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___y_690_ = v___x_706_;
v___y_691_ = v___x_711_;
goto v___jp_689_;
}
}
v___jp_712_:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lasm_JS_Data_describe(v_d_687_);
v___y_696_ = v___y_713_;
v_received_697_ = v___x_714_;
goto v___jp_695_;
}
v___jp_715_:
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBinaryType___lam__0___closed__0));
if (lean_obj_tag(v_d_687_) == 9)
{
lean_object* v_value_717_; lean_object* v_description_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v_value_717_ = lean_ctor_get(v_d_687_, 0);
v_description_718_ = lean_ctor_get(v_d_687_, 1);
v___x_719_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_720_ = lean_string_dec_eq(v_description_718_, v___x_719_);
if (v___x_720_ == 0)
{
v___y_713_ = v___x_716_;
goto v___jp_712_;
}
else
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_737_; 
lean_inc(v_value_717_);
v_isSharedCheck_737_ = !lean_is_exclusive(v_d_687_);
if (v_isSharedCheck_737_ == 0)
{
lean_object* v_unused_738_; lean_object* v_unused_739_; 
v_unused_738_ = lean_ctor_get(v_d_687_, 1);
lean_dec(v_unused_738_);
v_unused_739_ = lean_ctor_get(v_d_687_, 0);
lean_dec(v_unused_739_);
v___x_722_ = v_d_687_;
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
else
{
lean_dec(v_d_687_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
uint32_t v___x_724_; uint64_t v___x_725_; lean_object* v___x_727_; 
v___x_724_ = 206;
v___x_725_ = 0ULL;
lean_inc(v_value_717_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 1, v___x_719_);
v___x_727_ = v___x_722_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_value_717_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_719_);
v___x_727_ = v_reuseFailAlloc_736_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
uint32_t v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lasm_js_value_handle(v_value_717_);
lean_dec(v_value_717_);
v___x_729_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_724_, v___x_725_, v___x_727_, v___x_728_);
lean_dec_ref(v___x_727_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; uint8_t v___x_731_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_729_, 1);
v___x_731_ = lean_string_validate_utf8(v_a_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v_a_730_);
v___x_732_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_733_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_732_);
v___y_696_ = v___x_716_;
v_received_697_ = v___x_733_;
goto v___jp_695_;
}
else
{
lean_object* v___x_734_; 
v___x_734_ = lean_string_from_utf8_unchecked(v_a_730_);
v___y_696_ = v___x_716_;
v_received_697_ = v___x_734_;
goto v___jp_695_;
}
}
else
{
lean_object* v___x_735_; 
lean_dec_ref_known(v___x_729_, 1);
v___x_735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v___y_696_ = v___x_716_;
v_received_697_ = v___x_735_;
goto v___jp_695_;
}
}
}
}
}
else
{
v___y_713_ = v___x_716_;
goto v___jp_712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object* v_context_751_, lean_object* v_d_752_, lean_object* v_a_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_751_, v_d_752_);
lean_dec_ref(v_context_751_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(lean_object* v_context_755_, lean_object* v_bytes_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0_spec__1(v_context_755_, v_a_759_);
return v___x_760_;
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
v_a_761_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_758_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_758_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0___boxed(lean_object* v_context_769_, lean_object* v_bytes_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v_context_769_, v_bytes_770_);
lean_dec_ref(v_bytes_770_);
lean_dec_ref(v_context_769_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(lean_object* v_o_774_, lean_object* v_key_775_){
_start:
{
lean_object* v_k_777_; lean_object* v___x_778_; 
v_k_777_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_777_, 0, v_key_775_);
v___x_778_ = l_Lasm_JS_Wire_encodeIO(v_k_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; uint32_t v___x_780_; uint32_t v___x_781_; uint64_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
v___x_780_ = 203;
v___x_781_ = lasm_js_value_handle(v_o_774_);
v___x_782_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
v___x_783_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_784_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_784_, 0, v_o_774_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_unsigned_to_nat(2u);
v___x_786_ = lean_mk_empty_array_with_capacity(v___x_785_);
lean_inc_ref(v_k_777_);
v___x_787_ = lean_array_push(v___x_786_, v_k_777_);
v___x_788_ = lean_array_push(v___x_787_, v___x_784_);
v___x_789_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
v___x_790_ = lasm_js_call(v___x_780_, v___x_781_, v___x_782_, v_a_779_, v___x_789_);
lean_dec_ref_known(v___x_789_, 1);
lean_dec(v_a_779_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_790_, 1);
v___x_792_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___closed__0));
v___x_793_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_777_);
v___x_794_ = lean_string_append(v___x_792_, v___x_793_);
lean_dec_ref(v___x_793_);
v___x_795_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0_spec__0(v___x_794_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v___x_794_);
return v___x_795_;
}
else
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
lean_dec_ref_known(v_k_777_, 1);
v_a_796_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_790_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_790_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec_ref_known(v_k_777_, 1);
lean_dec(v_o_774_);
v_a_804_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_778_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_778_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0___boxed(lean_object* v_o_812_, lean_object* v_key_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_o_812_, v_key_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType(lean_object* v_self_817_){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
v___x_820_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_WebSocket_binaryType_spec__0(v_self_817_, v___x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_binaryType___boxed(lean_object* v_self_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_JS_Web_WebSocket_binaryType(v_self_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType(lean_object* v_self_824_, uint8_t v_value_825_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_binaryType___closed__0));
if (v_value_825_ == 0)
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__1));
v___x_829_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_824_, v___x_827_, v___x_828_);
return v___x_829_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBinaryType___lam__0___closed__3));
v___x_831_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_824_, v___x_827_, v___x_830_);
return v___x_831_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_setBinaryType___boxed(lean_object* v_self_832_, lean_object* v_value_833_, lean_object* v_a_834_){
_start:
{
uint8_t v_value_boxed_835_; lean_object* v_res_836_; 
v_value_boxed_835_ = lean_unbox(v_value_833_);
v_res_836_ = l_Lasm_JS_Web_WebSocket_setBinaryType(v_self_832_, v_value_boxed_835_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close(lean_object* v_self_838_, lean_object* v_code_839_, lean_object* v_reason_840_){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_842_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_close___closed__0));
v___x_843_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_839_);
v___x_844_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_840_);
v___x_845_ = lean_unsigned_to_nat(2u);
v___x_846_ = lean_mk_empty_array_with_capacity(v___x_845_);
v___x_847_ = lean_array_push(v___x_846_, v___x_843_);
v___x_848_ = lean_array_push(v___x_847_, v___x_844_);
v___x_849_ = l_Lasm_JS_Web_Support_args(v___x_848_);
v___x_850_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_838_, v___x_842_, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_close___boxed(lean_object* v_self_851_, lean_object* v_code_852_, lean_object* v_reason_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lasm_JS_Web_WebSocket_close(v_self_851_, v_code_852_, v_reason_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send(lean_object* v_self_857_, lean_object* v_data_858_){
_start:
{
lean_object* v___x_860_; lean_object* v___y_862_; 
v___x_860_ = ((lean_object*)(l_Lasm_JS_Web_WebSocket_send___closed__0));
switch(lean_obj_tag(v_data_858_))
{
case 0:
{
lean_object* v_value_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_value_868_ = lean_ctor_get(v_data_858_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v_data_858_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v_data_858_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_value_868_);
lean_dec(v_data_858_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set_tag(v___x_870_, 6);
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_value_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
v___y_862_ = v___x_873_;
goto v___jp_861_;
}
}
}
case 1:
{
lean_object* v_value_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_value_876_ = lean_ctor_get(v_data_858_, 0);
lean_inc(v_value_876_);
lean_dec_ref_known(v_data_858_, 1);
v___x_877_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
v___x_878_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_878_, 0, v_value_876_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___y_862_ = v___x_878_;
goto v___jp_861_;
}
default: 
{
lean_object* v_value_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v_value_879_ = lean_ctor_get(v_data_858_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v_data_858_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v_data_858_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_value_879_);
lean_dec(v_data_858_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set_tag(v___x_881_, 4);
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_value_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
v___y_862_ = v___x_884_;
goto v___jp_861_;
}
}
}
}
v___jp_861_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_863_ = lean_unsigned_to_nat(1u);
v___x_864_ = lean_mk_empty_array_with_capacity(v___x_863_);
v___x_865_ = lean_array_push(v___x_864_, v___y_862_);
v___x_866_ = l_Lasm_JS_Web_Support_args(v___x_865_);
v___x_867_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_857_, v___x_860_, v___x_866_);
return v___x_867_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_send___boxed(lean_object* v_self_887_, lean_object* v_data_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_JS_Web_WebSocket_send(v_self_887_, v_data_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f(lean_object* v_v_897_){
_start:
{
lean_object* v___f_899_; lean_object* v___x_900_; 
v___f_899_ = ((lean_object*)(l_Lasm_JS_Web_CloseEvent_cast_x3f___closed__2));
lean_inc(v_v_897_);
v___x_900_ = l_Lasm_JS_Web_Support_isInstance(v___f_899_, v_v_897_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_914_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_914_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_914_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_914_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
uint8_t v___x_905_; 
v___x_905_ = lean_unbox(v_a_901_);
lean_dec(v_a_901_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; lean_object* v___x_908_; 
lean_dec(v_v_897_);
v___x_906_ = lean_box(0);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_906_);
v___x_908_ = v___x_903_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v_v_897_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_910_);
v___x_912_ = v___x_903_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_910_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec(v_v_897_);
v_a_915_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_900_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_900_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_cast_x3f___boxed(lean_object* v_v_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lasm_JS_Web_CloseEvent_cast_x3f(v_v_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(lean_object* v_context_926_, lean_object* v_d_927_){
_start:
{
lean_object* v___y_930_; lean_object* v___y_931_; 
if (lean_obj_tag(v_d_927_) == 9)
{
lean_object* v_value_935_; lean_object* v___x_936_; 
v_value_935_ = lean_ctor_get(v_d_927_, 0);
lean_inc(v_value_935_);
lean_dec_ref_known(v_d_927_, 2);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_value_935_);
return v___x_936_;
}
else
{
lean_object* v___x_937_; lean_object* v_received_939_; 
v___x_937_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_927_) == 9)
{
lean_object* v_value_953_; lean_object* v_description_954_; uint8_t v___x_955_; 
v_value_953_ = lean_ctor_get(v_d_927_, 0);
v_description_954_ = lean_ctor_get(v_d_927_, 1);
v___x_955_ = lean_string_dec_eq(v_description_954_, v___x_937_);
if (v___x_955_ == 0)
{
goto v___jp_951_;
}
else
{
uint32_t v___x_956_; uint64_t v___x_957_; lean_object* v___x_958_; uint32_t v___x_959_; lean_object* v___x_960_; 
lean_inc_n(v_value_953_, 2);
lean_dec_ref_known(v_d_927_, 2);
v___x_956_ = 206;
v___x_957_ = 0ULL;
v___x_958_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_958_, 0, v_value_953_);
lean_ctor_set(v___x_958_, 1, v___x_937_);
v___x_959_ = lasm_js_value_handle(v_value_953_);
lean_dec(v_value_953_);
v___x_960_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_956_, v___x_957_, v___x_958_, v___x_959_);
lean_dec_ref_known(v___x_958_, 2);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; uint8_t v___x_962_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v___x_962_ = lean_string_validate_utf8(v_a_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v_a_961_);
v___x_963_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__9);
v___x_964_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_963_);
v_received_939_ = v___x_964_;
goto v___jp_938_;
}
else
{
lean_object* v___x_965_; 
v___x_965_ = lean_string_from_utf8_unchecked(v_a_961_);
v_received_939_ = v___x_965_;
goto v___jp_938_;
}
}
else
{
lean_object* v___x_966_; 
lean_dec_ref_known(v___x_960_, 1);
v___x_966_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__10));
v_received_939_ = v___x_966_;
goto v___jp_938_;
}
}
}
else
{
goto v___jp_951_;
}
v___jp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_941_ = lean_string_append(v___x_940_, v_context_926_);
v___x_942_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__1));
v___x_943_ = lean_string_append(v___x_941_, v___x_942_);
v___x_944_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCloseEvent___closed__0));
v___x_945_ = lean_string_append(v___x_943_, v___x_944_);
v___x_946_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__2));
v___x_947_ = lean_string_append(v___x_945_, v___x_946_);
v___x_948_ = lean_string_append(v___x_947_, v_received_939_);
lean_dec_ref(v_received_939_);
v___x_949_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__4);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; 
v___x_950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__5));
v___y_930_ = v___x_948_;
v___y_931_ = v___x_950_;
goto v___jp_929_;
}
else
{
v___y_930_ = v___x_948_;
v___y_931_ = v___x_937_;
goto v___jp_929_;
}
}
v___jp_951_:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lasm_JS_Data_describe(v_d_927_);
v_received_939_ = v___x_952_;
goto v___jp_938_;
}
}
v___jp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_932_ = lean_string_append(v___y_930_, v___y_931_);
v___x_933_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1___boxed(lean_object* v_context_967_, lean_object* v_d_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v_context_967_, v_d_968_);
lean_dec_ref(v_context_967_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(lean_object* v_b_971_, lean_object* v_args_972_, uint8_t v_await_973_){
_start:
{
uint64_t v___y_976_; uint64_t v___y_977_; uint64_t v___x_1020_; uint64_t v___y_1022_; 
v___x_1020_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__1);
if (v_await_973_ == 0)
{
uint64_t v___x_1027_; 
v___x_1027_ = 0ULL;
v___y_1022_ = v___x_1027_;
goto v___jp_1021_;
}
else
{
uint64_t v___x_1028_; 
v___x_1028_ = 2ULL;
v___y_1022_ = v___x_1028_;
goto v___jp_1021_;
}
v___jp_975_:
{
uint64_t v_flags_978_; uint32_t v___x_979_; lean_object* v___x_980_; uint32_t v___x_981_; lean_object* v___x_982_; 
v_flags_978_ = lean_uint64_lor(v___y_976_, v___y_977_);
v___x_979_ = 214;
v___x_980_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_971_, v_args_972_);
v___x_981_ = 0;
v___x_982_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_979_, v_flags_978_, v___x_980_, v___x_981_);
lean_dec(v___x_980_);
if (lean_obj_tag(v___x_982_) == 0)
{
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_983_);
lean_dec(v_a_983_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_971_);
v___x_987_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1_spec__1(v___x_986_, v_a_985_);
lean_dec_ref(v___x_986_);
return v___x_987_;
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
v_a_988_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_984_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_984_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
v_a_996_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_982_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_982_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
lean_ctor_set_tag(v___x_998_, 1);
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1019_; 
v_a_1004_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1006_ = v___x_982_;
v_isShared_1007_ = v_isSharedCheck_1019_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_982_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1019_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1_spec__2___closed__0));
v___x_1009_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_971_);
v___x_1010_ = lean_string_append(v___x_1008_, v___x_1009_);
lean_dec_ref(v___x_1009_);
v___x_1011_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WebSocket_new_spec__1___closed__0));
v___x_1012_ = lean_string_append(v___x_1010_, v___x_1011_);
v___x_1013_ = lean_io_error_to_string(v_a_1004_);
v___x_1014_ = lean_string_append(v___x_1012_, v___x_1013_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1015_);
v___x_1017_ = v___x_1006_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1015_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
v___jp_1021_:
{
uint8_t v_construct_1023_; uint64_t v___x_1024_; 
v_construct_1023_ = lean_ctor_get_uint8(v_b_971_, sizeof(void*)*4);
v___x_1024_ = lean_uint64_lor(v___x_1020_, v___y_1022_);
if (v_construct_1023_ == 0)
{
uint64_t v___x_1025_; 
v___x_1025_ = 0ULL;
v___y_976_ = v___x_1024_;
v___y_977_ = v___x_1025_;
goto v___jp_975_;
}
else
{
uint64_t v___x_1026_; 
v___x_1026_ = 4ULL;
v___y_976_ = v___x_1024_;
v___y_977_ = v___x_1026_;
goto v___jp_975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1___boxed(lean_object* v_b_1029_, lean_object* v_args_1030_, lean_object* v_await_1031_, lean_object* v_a_1032_){
_start:
{
uint8_t v_await_boxed_1033_; lean_object* v_res_1034_; 
v_await_boxed_1033_ = lean_unbox(v_await_1031_);
v_res_1034_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v_b_1029_, v_args_1030_, v_await_boxed_1033_);
lean_dec_ref(v_b_1029_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(lean_object* v_x_1035_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 0)
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_box(0);
return v___x_1036_;
}
else
{
lean_object* v_val_1037_; lean_object* v_bubbles_1038_; lean_object* v_cancelable_1039_; lean_object* v_composed_1040_; lean_object* v_wasClean_1041_; lean_object* v_code_1042_; lean_object* v_reason_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v_val_1037_ = lean_ctor_get(v_x_1035_, 0);
lean_inc(v_val_1037_);
lean_dec_ref_known(v_x_1035_, 1);
v_bubbles_1038_ = lean_ctor_get(v_val_1037_, 0);
lean_inc(v_bubbles_1038_);
v_cancelable_1039_ = lean_ctor_get(v_val_1037_, 1);
lean_inc(v_cancelable_1039_);
v_composed_1040_ = lean_ctor_get(v_val_1037_, 2);
lean_inc(v_composed_1040_);
v_wasClean_1041_ = lean_ctor_get(v_val_1037_, 3);
lean_inc(v_wasClean_1041_);
v_code_1042_ = lean_ctor_get(v_val_1037_, 4);
lean_inc(v_code_1042_);
v_reason_1043_ = lean_ctor_get(v_val_1037_, 5);
lean_inc(v_reason_1043_);
lean_dec(v_val_1037_);
v___x_1044_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__0));
v___x_1045_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1038_);
lean_dec(v_bubbles_1038_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__1));
v___x_1048_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1039_);
lean_dec(v_cancelable_1039_);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__2));
v___x_1051_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1040_);
lean_dec(v_composed_1040_);
v___x_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_1054_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_wasClean_1041_);
lean_dec(v_wasClean_1041_);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_1057_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_code_1042_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_1060_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_1043_);
v___x_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = lean_unsigned_to_nat(6u);
v___x_1063_ = lean_mk_empty_array_with_capacity(v___x_1062_);
v___x_1064_ = lean_array_push(v___x_1063_, v___x_1046_);
v___x_1065_ = lean_array_push(v___x_1064_, v___x_1049_);
v___x_1066_ = lean_array_push(v___x_1065_, v___x_1052_);
v___x_1067_ = lean_array_push(v___x_1066_, v___x_1055_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_1058_);
v___x_1069_ = lean_array_push(v___x_1068_, v___x_1061_);
v___x_1070_ = l_Lasm_JS_Web_Support_fields(v___x_1069_);
lean_dec_ref(v___x_1069_);
return v___x_1070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new(lean_object* v_type_1078_, lean_object* v_eventInitDict_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; 
v___x_1081_ = lean_unsigned_to_nat(2u);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Web_CloseEvent_new___closed__1));
v___x_1083_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_type_1078_);
v___x_1084_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CloseEvent_new_spec__0(v_eventInitDict_1079_);
v___x_1085_ = lean_mk_empty_array_with_capacity(v___x_1081_);
v___x_1086_ = lean_array_push(v___x_1085_, v___x_1083_);
v___x_1087_ = lean_array_push(v___x_1086_, v___x_1084_);
v___x_1088_ = l_Lasm_JS_Web_Support_args(v___x_1087_);
v___x_1089_ = 0;
v___x_1090_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CloseEvent_new_spec__1(v___x_1082_, v___x_1088_, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_new___boxed(lean_object* v_type_1091_, lean_object* v_eventInitDict_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lasm_JS_Web_CloseEvent_new(v_type_1091_, v_eventInitDict_1092_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean(lean_object* v_self_1095_){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__3));
v___x_1098_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1095_, v___x_1097_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_wasClean___boxed(lean_object* v_self_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_JS_Web_CloseEvent_wasClean(v_self_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code(lean_object* v_self_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__4));
v___x_1105_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1102_, v___x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_code___boxed(lean_object* v_self_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lasm_JS_Web_CloseEvent_code(v_self_1106_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason(lean_object* v_self_1109_){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0___closed__5));
v___x_1112_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1109_, v___x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CloseEvent_reason___boxed(lean_object* v_self_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lasm_JS_Web_CloseEvent_reason(v_self_1113_);
return v_res_1115_;
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
