// Lean compiler output
// Module: Lasm.JS.Web.UiEvents
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Html
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_body_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSNode___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HTMLElement_showPopover_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_defaultView_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
static const lean_string_object l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUIEvent___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSUIEvent___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUIEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUIEvent___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUIEvent___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSUIEvent___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSUIEvent___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSUIEvent___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSUIEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUIEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.UIEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSUIEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUIEvent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUIEvent___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUIEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeUIEventEvent___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeUIEventEvent___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeUIEventEvent___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeUIEventEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeUIEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMouseEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSMouseEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.MouseEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSMouseEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSMouseEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSMouseEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSMouseEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSMouseEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSMouseEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSMouseEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSMouseEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeMouseEventUIEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWheelEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWheelEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.WheelEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSWheelEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWheelEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWheelEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWheelEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWheelEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWheelEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWheelEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSWheelEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeWheelEventMouseEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyboardEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.KeyboardEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSKeyboardEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeKeyboardEventUIEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSInputEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSInputEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.InputEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSInputEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSInputEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSInputEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSInputEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSInputEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSInputEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSInputEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSInputEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeInputEventUIEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSFocusEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSFocusEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.FocusEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSFocusEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSFocusEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSFocusEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSFocusEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSFocusEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSFocusEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSFocusEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSFocusEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeFocusEventUIEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCompositionEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.CompositionEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCompositionEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCompositionEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompositionEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCompositionEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSCompositionEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeCompositionEventUIEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPointerEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSPointerEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.PointerEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSPointerEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSPointerEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSPointerEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSPointerEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSPointerEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSPointerEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSPointerEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSPointerEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoePointerEventMouseEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSSubmitEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.SubmitEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSSubmitEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSSubmitEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubmitEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSSubmitEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSSubmitEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeSubmitEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHashChangeEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.HashChangeEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSHashChangeEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeHashChangeEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPopStateEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.PopStateEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSPopStateEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSPopStateEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSPopStateEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSPopStateEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSPopStateEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoePopStateEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSStorageEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSStorageEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.StorageEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSStorageEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSStorageEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSStorageEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSUIEvent___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSStorageEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSStorageEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSStorageEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSStorageEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSStorageEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStorageEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeUIEventEvent___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bubbles"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cancelable"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "composed"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "view"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "which"};
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSNode___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSUIEventInit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSUIEventInit___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSUIEventInit___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__4_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUIEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctrlKey"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "shiftKey"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "altKey"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metaKey"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "modifierAltGraph"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "modifierCapsLock"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "modifierFn"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "modifierFnLock"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "modifierHyper"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "modifierNumLock"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "modifierScrollLock"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "modifierSuper"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "modifierSymbol"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "modifierSymbolLock"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "screenX"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "screenY"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientX"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "clientY"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "button"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "buttons"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "relatedTarget"};
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSMouseEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSMouseEventInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSMouseEventInit___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMouseEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaX"};
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaY"};
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "deltaZ"};
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "deltaMode"};
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "momentum"};
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSWheelEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSWheelEventInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSWheelEventInit___lam__0, .m_arity = 7, .m_num_fixed = 6, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWheelEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSWheelEventInit___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "repeat"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isComposing"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "charCode"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keyCode"};
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inputType"};
static const lean_object* l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSInputEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSInputEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSInputEventInit___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSInputEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSInputEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSInputEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSInputEventInit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFocusEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSFocusEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSFocusEventInit___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSMouseEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSFocusEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSFocusEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSFocusEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSFocusEventInit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompositionEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCompositionEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCompositionEventInit___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSCompositionEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCompositionEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCompositionEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSCompositionEventInit___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "azimuthAngle"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pointerType"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isPrimary"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "persistentDeviceId"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "coalescedEvents"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "predictedEvents"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tangentialPressure"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tiltX"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tiltY"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "twist"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "altitudeAngle"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "pointerId"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pressure"};
static const lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instToJSPointerEventInit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instToJSPointerEventInit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPointerEventInit;
static const lean_string_object l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "submitter"};
static const lean_object* l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSSubmitEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSSubmitEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSSubmitEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSSubmitEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSSubmitEventInit___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "oldURL"};
static const lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "newURL"};
static const lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSHashChangeEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSHashChangeEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSHashChangeEventInit___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "state"};
static const lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "hasUAVisualTransition"};
static const lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSPopStateEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSPopStateEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSPopStateEventInit___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "oldValue"};
static const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "newValue"};
static const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "storageArea"};
static const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSStorageEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSStorageEventInit___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSUIEventInit___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSStorageEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSStorageEventInit___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_UIEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.UIEvent.new"};
static const lean_object* l_Lasm_JS_Web_UIEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_UIEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_UIEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_UIEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "UIEvent"};
static const lean_object* l_Lasm_JS_Web_UIEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_UIEvent_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_UIEvent_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initUIEvent"};
static const lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.MouseEvent.new"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_MouseEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MouseEvent"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_MouseEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_MouseEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_pageX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageX"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_pageX___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_pageX___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_pageY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pageY"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_pageY___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_pageY___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_x___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_x___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_x___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_y___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_y___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_y___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_offsetX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetX"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_offsetX___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_offsetX___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_offsetY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "offsetY"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_offsetY___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_offsetY___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_layerX___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "layerX"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_layerX___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_layerX___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_layerY___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "layerY"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_layerY___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_layerY___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "getModifierState"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "initMouseEvent"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_WheelEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.WheelEvent.new"};
static const lean_object* l_Lasm_JS_Web_WheelEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WheelEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "WheelEvent"};
static const lean_object* l_Lasm_JS_Web_WheelEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WheelEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WheelEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.KeyboardEvent.new"};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_KeyboardEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "KeyboardEvent"};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_KeyboardEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "initKeyboardEvent"};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_InputEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.InputEvent.new"};
static const lean_object* l_Lasm_JS_Web_InputEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_InputEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "InputEvent"};
static const lean_object* l_Lasm_JS_Web_InputEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_InputEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_InputEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_FocusEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.FocusEvent.new"};
static const lean_object* l_Lasm_JS_Web_FocusEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_FocusEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FocusEvent"};
static const lean_object* l_Lasm_JS_Web_FocusEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_FocusEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_FocusEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.CompositionEvent.new"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "CompositionEvent"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_CompositionEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "initCompositionEvent"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_PointerEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.PointerEvent.new"};
static const lean_object* l_Lasm_JS_Web_PointerEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_PointerEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PointerEvent"};
static const lean_object* l_Lasm_JS_Web_PointerEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_PointerEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_PointerEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Array (Lasm.JS.Web.PointerEvent)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "an element is not Lasm.JS.Web.PointerEvent"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "getCoalescedEvents"};
static const lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "getPredictedEvents"};
static const lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_SubmitEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.SubmitEvent.new"};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_SubmitEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "SubmitEvent"};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_SubmitEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.HashChangeEvent.new"};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_HashChangeEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "HashChangeEvent"};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_HashChangeEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_PopStateEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.PopStateEvent.new"};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_PopStateEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PopStateEvent"};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_PopStateEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_StorageEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.StorageEvent.new"};
static const lean_object* l_Lasm_JS_Web_StorageEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_StorageEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "StorageEvent"};
static const lean_object* l_Lasm_JS_Web_StorageEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_StorageEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_StorageEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Option (Lasm.JS.Web.Storage)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "initStorageEvent"};
static const lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUIEvent___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSUIEvent___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSUIEvent___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSUIEvent___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSUIEvent___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeUIEventEvent___lam__0(lean_object* v_self_22_){
_start:
{
lean_inc(v_self_22_);
return v_self_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeUIEventEvent___lam__0___boxed(lean_object* v_self_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Web_instCoeUIEventEvent___lam__0(v_self_23_);
lean_dec(v_self_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUIEventInit___lam__0(lean_object* v___f_121_, lean_object* v___f_122_, lean_object* v___f_123_, lean_object* v___f_124_, lean_object* v_d_125_){
_start:
{
lean_object* v_bubbles_126_; lean_object* v_cancelable_127_; lean_object* v_composed_128_; lean_object* v_view_129_; lean_object* v_detail_130_; lean_object* v_which_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_bubbles_126_ = lean_ctor_get(v_d_125_, 0);
lean_inc(v_bubbles_126_);
v_cancelable_127_ = lean_ctor_get(v_d_125_, 1);
lean_inc(v_cancelable_127_);
v_composed_128_ = lean_ctor_get(v_d_125_, 2);
lean_inc(v_composed_128_);
v_view_129_ = lean_ctor_get(v_d_125_, 3);
lean_inc(v_view_129_);
v_detail_130_ = lean_ctor_get(v_d_125_, 4);
lean_inc(v_detail_130_);
v_which_131_ = lean_ctor_get(v_d_125_, 5);
lean_inc(v_which_131_);
lean_dec_ref(v_d_125_);
v___x_132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_121_, 2);
v___x_133_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_121_, v_bubbles_126_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_132_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_136_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_121_, v_cancelable_127_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_139_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_121_, v_composed_128_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_142_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_122_, v_view_129_);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_145_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_123_, v_detail_130_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_148_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_124_, v_which_131_);
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_unsigned_to_nat(6u);
v___x_151_ = lean_mk_empty_array_with_capacity(v___x_150_);
v___x_152_ = lean_array_push(v___x_151_, v___x_134_);
v___x_153_ = lean_array_push(v___x_152_, v___x_137_);
v___x_154_ = lean_array_push(v___x_153_, v___x_140_);
v___x_155_ = lean_array_push(v___x_154_, v___x_143_);
v___x_156_ = lean_array_push(v___x_155_, v___x_146_);
v___x_157_ = lean_array_push(v___x_156_, v___x_149_);
v___x_158_ = l_Lasm_JS_Web_Support_fields(v___x_157_);
lean_dec_ref(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMouseEventInit___lam__0(lean_object* v___f_190_, lean_object* v___f_191_, lean_object* v___f_192_, lean_object* v___f_193_, lean_object* v___f_194_, lean_object* v_d_195_){
_start:
{
lean_object* v_bubbles_196_; lean_object* v_cancelable_197_; lean_object* v_composed_198_; lean_object* v_view_199_; lean_object* v_detail_200_; lean_object* v_which_201_; lean_object* v_ctrlKey_202_; lean_object* v_shiftKey_203_; lean_object* v_altKey_204_; lean_object* v_metaKey_205_; lean_object* v_modifierAltGraph_206_; lean_object* v_modifierCapsLock_207_; lean_object* v_modifierFn_208_; lean_object* v_modifierFnLock_209_; lean_object* v_modifierHyper_210_; lean_object* v_modifierNumLock_211_; lean_object* v_modifierScrollLock_212_; lean_object* v_modifierSuper_213_; lean_object* v_modifierSymbol_214_; lean_object* v_modifierSymbolLock_215_; lean_object* v_screenX_216_; lean_object* v_screenY_217_; lean_object* v_clientX_218_; lean_object* v_clientY_219_; lean_object* v_button_220_; lean_object* v_buttons_221_; lean_object* v_relatedTarget_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_bubbles_196_ = lean_ctor_get(v_d_195_, 0);
lean_inc(v_bubbles_196_);
v_cancelable_197_ = lean_ctor_get(v_d_195_, 1);
lean_inc(v_cancelable_197_);
v_composed_198_ = lean_ctor_get(v_d_195_, 2);
lean_inc(v_composed_198_);
v_view_199_ = lean_ctor_get(v_d_195_, 3);
lean_inc(v_view_199_);
v_detail_200_ = lean_ctor_get(v_d_195_, 4);
lean_inc(v_detail_200_);
v_which_201_ = lean_ctor_get(v_d_195_, 5);
lean_inc(v_which_201_);
v_ctrlKey_202_ = lean_ctor_get(v_d_195_, 6);
lean_inc(v_ctrlKey_202_);
v_shiftKey_203_ = lean_ctor_get(v_d_195_, 7);
lean_inc(v_shiftKey_203_);
v_altKey_204_ = lean_ctor_get(v_d_195_, 8);
lean_inc(v_altKey_204_);
v_metaKey_205_ = lean_ctor_get(v_d_195_, 9);
lean_inc(v_metaKey_205_);
v_modifierAltGraph_206_ = lean_ctor_get(v_d_195_, 10);
lean_inc(v_modifierAltGraph_206_);
v_modifierCapsLock_207_ = lean_ctor_get(v_d_195_, 11);
lean_inc(v_modifierCapsLock_207_);
v_modifierFn_208_ = lean_ctor_get(v_d_195_, 12);
lean_inc(v_modifierFn_208_);
v_modifierFnLock_209_ = lean_ctor_get(v_d_195_, 13);
lean_inc(v_modifierFnLock_209_);
v_modifierHyper_210_ = lean_ctor_get(v_d_195_, 14);
lean_inc(v_modifierHyper_210_);
v_modifierNumLock_211_ = lean_ctor_get(v_d_195_, 15);
lean_inc(v_modifierNumLock_211_);
v_modifierScrollLock_212_ = lean_ctor_get(v_d_195_, 16);
lean_inc(v_modifierScrollLock_212_);
v_modifierSuper_213_ = lean_ctor_get(v_d_195_, 17);
lean_inc(v_modifierSuper_213_);
v_modifierSymbol_214_ = lean_ctor_get(v_d_195_, 18);
lean_inc(v_modifierSymbol_214_);
v_modifierSymbolLock_215_ = lean_ctor_get(v_d_195_, 19);
lean_inc(v_modifierSymbolLock_215_);
v_screenX_216_ = lean_ctor_get(v_d_195_, 20);
lean_inc(v_screenX_216_);
v_screenY_217_ = lean_ctor_get(v_d_195_, 21);
lean_inc(v_screenY_217_);
v_clientX_218_ = lean_ctor_get(v_d_195_, 22);
lean_inc(v_clientX_218_);
v_clientY_219_ = lean_ctor_get(v_d_195_, 23);
lean_inc(v_clientY_219_);
v_button_220_ = lean_ctor_get(v_d_195_, 24);
lean_inc(v_button_220_);
v_buttons_221_ = lean_ctor_get(v_d_195_, 25);
lean_inc(v_buttons_221_);
v_relatedTarget_222_ = lean_ctor_get(v_d_195_, 26);
lean_inc(v_relatedTarget_222_);
lean_dec_ref(v_d_195_);
v___x_223_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_190_, 16);
v___x_224_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_bubbles_196_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_227_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_cancelable_197_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_230_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_composed_198_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_233_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_191_, v_view_199_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
lean_inc_ref_n(v___f_192_, 5);
v___x_236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_detail_200_);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
lean_inc_ref(v___f_193_);
v___x_239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_193_, v_which_201_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_242_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_ctrlKey_202_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_245_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_shiftKey_203_);
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_248_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_altKey_204_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_251_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_metaKey_205_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_254_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierAltGraph_206_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_257_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierCapsLock_207_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_260_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierFn_208_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_263_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierFnLock_209_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_266_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierHyper_210_);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_269_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierNumLock_211_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_272_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierScrollLock_212_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_271_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_275_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierSuper_213_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_278_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierSymbol_214_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_281_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_190_, v_modifierSymbolLock_215_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_280_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_284_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_screenX_216_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_287_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_screenY_217_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_290_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_clientX_218_);
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_293_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_clientY_219_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_296_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_192_, v_button_220_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_299_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_193_, v_buttons_221_);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_302_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_194_, v_relatedTarget_222_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v___x_301_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = lean_unsigned_to_nat(27u);
v___x_305_ = lean_mk_empty_array_with_capacity(v___x_304_);
v___x_306_ = lean_array_push(v___x_305_, v___x_225_);
v___x_307_ = lean_array_push(v___x_306_, v___x_228_);
v___x_308_ = lean_array_push(v___x_307_, v___x_231_);
v___x_309_ = lean_array_push(v___x_308_, v___x_234_);
v___x_310_ = lean_array_push(v___x_309_, v___x_237_);
v___x_311_ = lean_array_push(v___x_310_, v___x_240_);
v___x_312_ = lean_array_push(v___x_311_, v___x_243_);
v___x_313_ = lean_array_push(v___x_312_, v___x_246_);
v___x_314_ = lean_array_push(v___x_313_, v___x_249_);
v___x_315_ = lean_array_push(v___x_314_, v___x_252_);
v___x_316_ = lean_array_push(v___x_315_, v___x_255_);
v___x_317_ = lean_array_push(v___x_316_, v___x_258_);
v___x_318_ = lean_array_push(v___x_317_, v___x_261_);
v___x_319_ = lean_array_push(v___x_318_, v___x_264_);
v___x_320_ = lean_array_push(v___x_319_, v___x_267_);
v___x_321_ = lean_array_push(v___x_320_, v___x_270_);
v___x_322_ = lean_array_push(v___x_321_, v___x_273_);
v___x_323_ = lean_array_push(v___x_322_, v___x_276_);
v___x_324_ = lean_array_push(v___x_323_, v___x_279_);
v___x_325_ = lean_array_push(v___x_324_, v___x_282_);
v___x_326_ = lean_array_push(v___x_325_, v___x_285_);
v___x_327_ = lean_array_push(v___x_326_, v___x_288_);
v___x_328_ = lean_array_push(v___x_327_, v___x_291_);
v___x_329_ = lean_array_push(v___x_328_, v___x_294_);
v___x_330_ = lean_array_push(v___x_329_, v___x_297_);
v___x_331_ = lean_array_push(v___x_330_, v___x_300_);
v___x_332_ = lean_array_push(v___x_331_, v___x_303_);
v___x_333_ = l_Lasm_JS_Web_Support_fields(v___x_332_);
lean_dec_ref(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWheelEventInit___lam__0(lean_object* v___f_347_, lean_object* v___f_348_, lean_object* v___f_349_, lean_object* v___f_350_, lean_object* v___f_351_, lean_object* v___f_352_, lean_object* v_d_353_){
_start:
{
lean_object* v_bubbles_354_; lean_object* v_cancelable_355_; lean_object* v_composed_356_; lean_object* v_view_357_; lean_object* v_detail_358_; lean_object* v_which_359_; lean_object* v_ctrlKey_360_; lean_object* v_shiftKey_361_; lean_object* v_altKey_362_; lean_object* v_metaKey_363_; lean_object* v_modifierAltGraph_364_; lean_object* v_modifierCapsLock_365_; lean_object* v_modifierFn_366_; lean_object* v_modifierFnLock_367_; lean_object* v_modifierHyper_368_; lean_object* v_modifierNumLock_369_; lean_object* v_modifierScrollLock_370_; lean_object* v_modifierSuper_371_; lean_object* v_modifierSymbol_372_; lean_object* v_modifierSymbolLock_373_; lean_object* v_screenX_374_; lean_object* v_screenY_375_; lean_object* v_clientX_376_; lean_object* v_clientY_377_; lean_object* v_button_378_; lean_object* v_buttons_379_; lean_object* v_relatedTarget_380_; lean_object* v_deltaX_381_; lean_object* v_deltaY_382_; lean_object* v_deltaZ_383_; lean_object* v_deltaMode_384_; lean_object* v_momentum_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_bubbles_354_ = lean_ctor_get(v_d_353_, 0);
lean_inc(v_bubbles_354_);
v_cancelable_355_ = lean_ctor_get(v_d_353_, 1);
lean_inc(v_cancelable_355_);
v_composed_356_ = lean_ctor_get(v_d_353_, 2);
lean_inc(v_composed_356_);
v_view_357_ = lean_ctor_get(v_d_353_, 3);
lean_inc(v_view_357_);
v_detail_358_ = lean_ctor_get(v_d_353_, 4);
lean_inc(v_detail_358_);
v_which_359_ = lean_ctor_get(v_d_353_, 5);
lean_inc(v_which_359_);
v_ctrlKey_360_ = lean_ctor_get(v_d_353_, 6);
lean_inc(v_ctrlKey_360_);
v_shiftKey_361_ = lean_ctor_get(v_d_353_, 7);
lean_inc(v_shiftKey_361_);
v_altKey_362_ = lean_ctor_get(v_d_353_, 8);
lean_inc(v_altKey_362_);
v_metaKey_363_ = lean_ctor_get(v_d_353_, 9);
lean_inc(v_metaKey_363_);
v_modifierAltGraph_364_ = lean_ctor_get(v_d_353_, 10);
lean_inc(v_modifierAltGraph_364_);
v_modifierCapsLock_365_ = lean_ctor_get(v_d_353_, 11);
lean_inc(v_modifierCapsLock_365_);
v_modifierFn_366_ = lean_ctor_get(v_d_353_, 12);
lean_inc(v_modifierFn_366_);
v_modifierFnLock_367_ = lean_ctor_get(v_d_353_, 13);
lean_inc(v_modifierFnLock_367_);
v_modifierHyper_368_ = lean_ctor_get(v_d_353_, 14);
lean_inc(v_modifierHyper_368_);
v_modifierNumLock_369_ = lean_ctor_get(v_d_353_, 15);
lean_inc(v_modifierNumLock_369_);
v_modifierScrollLock_370_ = lean_ctor_get(v_d_353_, 16);
lean_inc(v_modifierScrollLock_370_);
v_modifierSuper_371_ = lean_ctor_get(v_d_353_, 17);
lean_inc(v_modifierSuper_371_);
v_modifierSymbol_372_ = lean_ctor_get(v_d_353_, 18);
lean_inc(v_modifierSymbol_372_);
v_modifierSymbolLock_373_ = lean_ctor_get(v_d_353_, 19);
lean_inc(v_modifierSymbolLock_373_);
v_screenX_374_ = lean_ctor_get(v_d_353_, 20);
lean_inc(v_screenX_374_);
v_screenY_375_ = lean_ctor_get(v_d_353_, 21);
lean_inc(v_screenY_375_);
v_clientX_376_ = lean_ctor_get(v_d_353_, 22);
lean_inc(v_clientX_376_);
v_clientY_377_ = lean_ctor_get(v_d_353_, 23);
lean_inc(v_clientY_377_);
v_button_378_ = lean_ctor_get(v_d_353_, 24);
lean_inc(v_button_378_);
v_buttons_379_ = lean_ctor_get(v_d_353_, 25);
lean_inc(v_buttons_379_);
v_relatedTarget_380_ = lean_ctor_get(v_d_353_, 26);
lean_inc(v_relatedTarget_380_);
v_deltaX_381_ = lean_ctor_get(v_d_353_, 27);
lean_inc(v_deltaX_381_);
v_deltaY_382_ = lean_ctor_get(v_d_353_, 28);
lean_inc(v_deltaY_382_);
v_deltaZ_383_ = lean_ctor_get(v_d_353_, 29);
lean_inc(v_deltaZ_383_);
v_deltaMode_384_ = lean_ctor_get(v_d_353_, 30);
lean_inc(v_deltaMode_384_);
v_momentum_385_ = lean_ctor_get(v_d_353_, 31);
lean_inc(v_momentum_385_);
lean_dec_ref(v_d_353_);
v___x_386_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_347_, 17);
v___x_387_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_bubbles_354_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_390_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_cancelable_355_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_393_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_composed_356_);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_396_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_348_, v_view_357_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
lean_inc_ref_n(v___f_349_, 5);
v___x_399_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_detail_358_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
lean_inc_ref_n(v___f_350_, 2);
v___x_402_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_350_, v_which_359_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_405_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_ctrlKey_360_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_408_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_shiftKey_361_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_411_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_altKey_362_);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_414_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_metaKey_363_);
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_417_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierAltGraph_364_);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_420_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierCapsLock_365_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_423_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierFn_366_);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_426_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierFnLock_367_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_429_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierHyper_368_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_432_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierNumLock_369_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_435_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierScrollLock_370_);
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
v___x_437_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_438_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierSuper_371_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_441_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierSymbol_372_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_440_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_444_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_modifierSymbolLock_373_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_447_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_screenX_374_);
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_450_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_screenY_375_);
v___x_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_449_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_453_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_clientX_376_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_456_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_clientY_377_);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_459_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_349_, v_button_378_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_462_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_350_, v_buttons_379_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_465_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_351_, v_relatedTarget_380_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_352_, 2);
v___x_468_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_352_, v_deltaX_381_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_471_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_352_, v_deltaY_382_);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_474_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_352_, v_deltaZ_383_);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_477_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_350_, v_deltaMode_384_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_480_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_347_, v_momentum_385_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_unsigned_to_nat(32u);
v___x_483_ = lean_mk_empty_array_with_capacity(v___x_482_);
v___x_484_ = lean_array_push(v___x_483_, v___x_388_);
v___x_485_ = lean_array_push(v___x_484_, v___x_391_);
v___x_486_ = lean_array_push(v___x_485_, v___x_394_);
v___x_487_ = lean_array_push(v___x_486_, v___x_397_);
v___x_488_ = lean_array_push(v___x_487_, v___x_400_);
v___x_489_ = lean_array_push(v___x_488_, v___x_403_);
v___x_490_ = lean_array_push(v___x_489_, v___x_406_);
v___x_491_ = lean_array_push(v___x_490_, v___x_409_);
v___x_492_ = lean_array_push(v___x_491_, v___x_412_);
v___x_493_ = lean_array_push(v___x_492_, v___x_415_);
v___x_494_ = lean_array_push(v___x_493_, v___x_418_);
v___x_495_ = lean_array_push(v___x_494_, v___x_421_);
v___x_496_ = lean_array_push(v___x_495_, v___x_424_);
v___x_497_ = lean_array_push(v___x_496_, v___x_427_);
v___x_498_ = lean_array_push(v___x_497_, v___x_430_);
v___x_499_ = lean_array_push(v___x_498_, v___x_433_);
v___x_500_ = lean_array_push(v___x_499_, v___x_436_);
v___x_501_ = lean_array_push(v___x_500_, v___x_439_);
v___x_502_ = lean_array_push(v___x_501_, v___x_442_);
v___x_503_ = lean_array_push(v___x_502_, v___x_445_);
v___x_504_ = lean_array_push(v___x_503_, v___x_448_);
v___x_505_ = lean_array_push(v___x_504_, v___x_451_);
v___x_506_ = lean_array_push(v___x_505_, v___x_454_);
v___x_507_ = lean_array_push(v___x_506_, v___x_457_);
v___x_508_ = lean_array_push(v___x_507_, v___x_460_);
v___x_509_ = lean_array_push(v___x_508_, v___x_463_);
v___x_510_ = lean_array_push(v___x_509_, v___x_466_);
v___x_511_ = lean_array_push(v___x_510_, v___x_469_);
v___x_512_ = lean_array_push(v___x_511_, v___x_472_);
v___x_513_ = lean_array_push(v___x_512_, v___x_475_);
v___x_514_ = lean_array_push(v___x_513_, v___x_478_);
v___x_515_ = lean_array_push(v___x_514_, v___x_481_);
v___x_516_ = l_Lasm_JS_Web_Support_fields(v___x_515_);
lean_dec_ref(v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0(lean_object* v___f_533_, lean_object* v___f_534_, lean_object* v___f_535_, lean_object* v___f_536_, lean_object* v___f_537_, lean_object* v_d_538_){
_start:
{
lean_object* v_bubbles_539_; lean_object* v_cancelable_540_; lean_object* v_composed_541_; lean_object* v_view_542_; lean_object* v_detail_543_; lean_object* v_which_544_; lean_object* v_ctrlKey_545_; lean_object* v_shiftKey_546_; lean_object* v_altKey_547_; lean_object* v_metaKey_548_; lean_object* v_modifierAltGraph_549_; lean_object* v_modifierCapsLock_550_; lean_object* v_modifierFn_551_; lean_object* v_modifierFnLock_552_; lean_object* v_modifierHyper_553_; lean_object* v_modifierNumLock_554_; lean_object* v_modifierScrollLock_555_; lean_object* v_modifierSuper_556_; lean_object* v_modifierSymbol_557_; lean_object* v_modifierSymbolLock_558_; lean_object* v_key_559_; lean_object* v_code_560_; lean_object* v_location_561_; lean_object* v_repeat_562_; lean_object* v_isComposing_563_; lean_object* v_charCode_564_; lean_object* v_keyCode_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_bubbles_539_ = lean_ctor_get(v_d_538_, 0);
lean_inc(v_bubbles_539_);
v_cancelable_540_ = lean_ctor_get(v_d_538_, 1);
lean_inc(v_cancelable_540_);
v_composed_541_ = lean_ctor_get(v_d_538_, 2);
lean_inc(v_composed_541_);
v_view_542_ = lean_ctor_get(v_d_538_, 3);
lean_inc(v_view_542_);
v_detail_543_ = lean_ctor_get(v_d_538_, 4);
lean_inc(v_detail_543_);
v_which_544_ = lean_ctor_get(v_d_538_, 5);
lean_inc(v_which_544_);
v_ctrlKey_545_ = lean_ctor_get(v_d_538_, 6);
lean_inc(v_ctrlKey_545_);
v_shiftKey_546_ = lean_ctor_get(v_d_538_, 7);
lean_inc(v_shiftKey_546_);
v_altKey_547_ = lean_ctor_get(v_d_538_, 8);
lean_inc(v_altKey_547_);
v_metaKey_548_ = lean_ctor_get(v_d_538_, 9);
lean_inc(v_metaKey_548_);
v_modifierAltGraph_549_ = lean_ctor_get(v_d_538_, 10);
lean_inc(v_modifierAltGraph_549_);
v_modifierCapsLock_550_ = lean_ctor_get(v_d_538_, 11);
lean_inc(v_modifierCapsLock_550_);
v_modifierFn_551_ = lean_ctor_get(v_d_538_, 12);
lean_inc(v_modifierFn_551_);
v_modifierFnLock_552_ = lean_ctor_get(v_d_538_, 13);
lean_inc(v_modifierFnLock_552_);
v_modifierHyper_553_ = lean_ctor_get(v_d_538_, 14);
lean_inc(v_modifierHyper_553_);
v_modifierNumLock_554_ = lean_ctor_get(v_d_538_, 15);
lean_inc(v_modifierNumLock_554_);
v_modifierScrollLock_555_ = lean_ctor_get(v_d_538_, 16);
lean_inc(v_modifierScrollLock_555_);
v_modifierSuper_556_ = lean_ctor_get(v_d_538_, 17);
lean_inc(v_modifierSuper_556_);
v_modifierSymbol_557_ = lean_ctor_get(v_d_538_, 18);
lean_inc(v_modifierSymbol_557_);
v_modifierSymbolLock_558_ = lean_ctor_get(v_d_538_, 19);
lean_inc(v_modifierSymbolLock_558_);
v_key_559_ = lean_ctor_get(v_d_538_, 20);
lean_inc(v_key_559_);
v_code_560_ = lean_ctor_get(v_d_538_, 21);
lean_inc(v_code_560_);
v_location_561_ = lean_ctor_get(v_d_538_, 22);
lean_inc(v_location_561_);
v_repeat_562_ = lean_ctor_get(v_d_538_, 23);
lean_inc(v_repeat_562_);
v_isComposing_563_ = lean_ctor_get(v_d_538_, 24);
lean_inc(v_isComposing_563_);
v_charCode_564_ = lean_ctor_get(v_d_538_, 25);
lean_inc(v_charCode_564_);
v_keyCode_565_ = lean_ctor_get(v_d_538_, 26);
lean_inc(v_keyCode_565_);
lean_dec_ref(v_d_538_);
v___x_566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_533_, 18);
v___x_567_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_bubbles_539_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_570_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_cancelable_540_);
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_573_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_composed_541_);
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_576_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_534_, v_view_542_);
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_579_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_535_, v_detail_543_);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
lean_inc_ref_n(v___f_536_, 3);
v___x_582_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_536_, v_which_544_);
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_585_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_ctrlKey_545_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_588_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_shiftKey_546_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_591_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_altKey_547_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_594_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_metaKey_548_);
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_597_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierAltGraph_549_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_600_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierCapsLock_550_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_603_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierFn_551_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_602_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_606_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierFnLock_552_);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_605_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_609_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierHyper_553_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_612_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierNumLock_554_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_615_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierScrollLock_555_);
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_618_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierSuper_556_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_621_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierSymbol_557_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_624_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_modifierSymbolLock_558_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
lean_inc_ref(v___f_537_);
v___x_627_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_537_, v_key_559_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_630_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_537_, v_code_560_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_633_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_536_, v_location_561_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_636_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_repeat_562_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_639_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_533_, v_isComposing_563_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_642_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_536_, v_charCode_564_);
v___x_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_645_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_536_, v_keyCode_565_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_unsigned_to_nat(27u);
v___x_648_ = lean_mk_empty_array_with_capacity(v___x_647_);
v___x_649_ = lean_array_push(v___x_648_, v___x_568_);
v___x_650_ = lean_array_push(v___x_649_, v___x_571_);
v___x_651_ = lean_array_push(v___x_650_, v___x_574_);
v___x_652_ = lean_array_push(v___x_651_, v___x_577_);
v___x_653_ = lean_array_push(v___x_652_, v___x_580_);
v___x_654_ = lean_array_push(v___x_653_, v___x_583_);
v___x_655_ = lean_array_push(v___x_654_, v___x_586_);
v___x_656_ = lean_array_push(v___x_655_, v___x_589_);
v___x_657_ = lean_array_push(v___x_656_, v___x_592_);
v___x_658_ = lean_array_push(v___x_657_, v___x_595_);
v___x_659_ = lean_array_push(v___x_658_, v___x_598_);
v___x_660_ = lean_array_push(v___x_659_, v___x_601_);
v___x_661_ = lean_array_push(v___x_660_, v___x_604_);
v___x_662_ = lean_array_push(v___x_661_, v___x_607_);
v___x_663_ = lean_array_push(v___x_662_, v___x_610_);
v___x_664_ = lean_array_push(v___x_663_, v___x_613_);
v___x_665_ = lean_array_push(v___x_664_, v___x_616_);
v___x_666_ = lean_array_push(v___x_665_, v___x_619_);
v___x_667_ = lean_array_push(v___x_666_, v___x_622_);
v___x_668_ = lean_array_push(v___x_667_, v___x_625_);
v___x_669_ = lean_array_push(v___x_668_, v___x_628_);
v___x_670_ = lean_array_push(v___x_669_, v___x_631_);
v___x_671_ = lean_array_push(v___x_670_, v___x_634_);
v___x_672_ = lean_array_push(v___x_671_, v___x_637_);
v___x_673_ = lean_array_push(v___x_672_, v___x_640_);
v___x_674_ = lean_array_push(v___x_673_, v___x_643_);
v___x_675_ = lean_array_push(v___x_674_, v___x_646_);
v___x_676_ = l_Lasm_JS_Web_Support_fields(v___x_675_);
lean_dec_ref(v___x_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSInputEventInit___lam__0(lean_object* v___f_687_, lean_object* v___f_688_, lean_object* v___f_689_, lean_object* v___f_690_, lean_object* v___f_691_, lean_object* v_d_692_){
_start:
{
lean_object* v_bubbles_693_; lean_object* v_cancelable_694_; lean_object* v_composed_695_; lean_object* v_view_696_; lean_object* v_detail_697_; lean_object* v_which_698_; lean_object* v_data_699_; lean_object* v_isComposing_700_; lean_object* v_inputType_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_bubbles_693_ = lean_ctor_get(v_d_692_, 0);
lean_inc(v_bubbles_693_);
v_cancelable_694_ = lean_ctor_get(v_d_692_, 1);
lean_inc(v_cancelable_694_);
v_composed_695_ = lean_ctor_get(v_d_692_, 2);
lean_inc(v_composed_695_);
v_view_696_ = lean_ctor_get(v_d_692_, 3);
lean_inc(v_view_696_);
v_detail_697_ = lean_ctor_get(v_d_692_, 4);
lean_inc(v_detail_697_);
v_which_698_ = lean_ctor_get(v_d_692_, 5);
lean_inc(v_which_698_);
v_data_699_ = lean_ctor_get(v_d_692_, 6);
lean_inc(v_data_699_);
v_isComposing_700_ = lean_ctor_get(v_d_692_, 7);
lean_inc(v_isComposing_700_);
v_inputType_701_ = lean_ctor_get(v_d_692_, 8);
lean_inc(v_inputType_701_);
lean_dec_ref(v_d_692_);
v___x_702_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_687_, 3);
v___x_703_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_687_, v_bubbles_693_);
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_702_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_706_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_687_, v_cancelable_694_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_705_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_709_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_687_, v_composed_695_);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_712_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_688_, v_view_696_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
v___x_714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_715_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_689_, v_detail_697_);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_718_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_690_, v_which_698_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
lean_inc_ref(v___f_691_);
v___x_721_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_691_, v_data_699_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_724_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_687_, v_isComposing_700_);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_727_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_691_, v_inputType_701_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_726_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = lean_unsigned_to_nat(9u);
v___x_730_ = lean_mk_empty_array_with_capacity(v___x_729_);
v___x_731_ = lean_array_push(v___x_730_, v___x_704_);
v___x_732_ = lean_array_push(v___x_731_, v___x_707_);
v___x_733_ = lean_array_push(v___x_732_, v___x_710_);
v___x_734_ = lean_array_push(v___x_733_, v___x_713_);
v___x_735_ = lean_array_push(v___x_734_, v___x_716_);
v___x_736_ = lean_array_push(v___x_735_, v___x_719_);
v___x_737_ = lean_array_push(v___x_736_, v___x_722_);
v___x_738_ = lean_array_push(v___x_737_, v___x_725_);
v___x_739_ = lean_array_push(v___x_738_, v___x_728_);
v___x_740_ = l_Lasm_JS_Web_Support_fields(v___x_739_);
lean_dec_ref(v___x_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFocusEventInit___lam__0(lean_object* v___f_748_, lean_object* v___f_749_, lean_object* v___f_750_, lean_object* v___f_751_, lean_object* v___f_752_, lean_object* v_d_753_){
_start:
{
lean_object* v_bubbles_754_; lean_object* v_cancelable_755_; lean_object* v_composed_756_; lean_object* v_view_757_; lean_object* v_detail_758_; lean_object* v_which_759_; lean_object* v_relatedTarget_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_bubbles_754_ = lean_ctor_get(v_d_753_, 0);
lean_inc(v_bubbles_754_);
v_cancelable_755_ = lean_ctor_get(v_d_753_, 1);
lean_inc(v_cancelable_755_);
v_composed_756_ = lean_ctor_get(v_d_753_, 2);
lean_inc(v_composed_756_);
v_view_757_ = lean_ctor_get(v_d_753_, 3);
lean_inc(v_view_757_);
v_detail_758_ = lean_ctor_get(v_d_753_, 4);
lean_inc(v_detail_758_);
v_which_759_ = lean_ctor_get(v_d_753_, 5);
lean_inc(v_which_759_);
v_relatedTarget_760_ = lean_ctor_get(v_d_753_, 6);
lean_inc(v_relatedTarget_760_);
lean_dec_ref(v_d_753_);
v___x_761_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_748_, 2);
v___x_762_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_748_, v_bubbles_754_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v___x_761_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v___x_764_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_765_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_748_, v_cancelable_755_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_768_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_748_, v_composed_756_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_771_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_749_, v_view_757_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_770_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
v___x_773_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_774_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_750_, v_detail_758_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_777_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_751_, v_which_759_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_780_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_752_, v_relatedTarget_760_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = lean_unsigned_to_nat(7u);
v___x_783_ = lean_mk_empty_array_with_capacity(v___x_782_);
v___x_784_ = lean_array_push(v___x_783_, v___x_763_);
v___x_785_ = lean_array_push(v___x_784_, v___x_766_);
v___x_786_ = lean_array_push(v___x_785_, v___x_769_);
v___x_787_ = lean_array_push(v___x_786_, v___x_772_);
v___x_788_ = lean_array_push(v___x_787_, v___x_775_);
v___x_789_ = lean_array_push(v___x_788_, v___x_778_);
v___x_790_ = lean_array_push(v___x_789_, v___x_781_);
v___x_791_ = l_Lasm_JS_Web_Support_fields(v___x_790_);
lean_dec_ref(v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCompositionEventInit___lam__0(lean_object* v___f_799_, lean_object* v___f_800_, lean_object* v___f_801_, lean_object* v___f_802_, lean_object* v___f_803_, lean_object* v_d_804_){
_start:
{
lean_object* v_bubbles_805_; lean_object* v_cancelable_806_; lean_object* v_composed_807_; lean_object* v_view_808_; lean_object* v_detail_809_; lean_object* v_which_810_; lean_object* v_data_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_bubbles_805_ = lean_ctor_get(v_d_804_, 0);
lean_inc(v_bubbles_805_);
v_cancelable_806_ = lean_ctor_get(v_d_804_, 1);
lean_inc(v_cancelable_806_);
v_composed_807_ = lean_ctor_get(v_d_804_, 2);
lean_inc(v_composed_807_);
v_view_808_ = lean_ctor_get(v_d_804_, 3);
lean_inc(v_view_808_);
v_detail_809_ = lean_ctor_get(v_d_804_, 4);
lean_inc(v_detail_809_);
v_which_810_ = lean_ctor_get(v_d_804_, 5);
lean_inc(v_which_810_);
v_data_811_ = lean_ctor_get(v_d_804_, 6);
lean_inc(v_data_811_);
lean_dec_ref(v_d_804_);
v___x_812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_799_, 2);
v___x_813_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_799_, v_bubbles_805_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_816_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_799_, v_cancelable_806_);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_819_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_799_, v_composed_807_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_822_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_800_, v_view_808_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_821_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_825_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_801_, v_detail_809_);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v___x_824_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
v___x_827_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_828_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_802_, v_which_810_);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_827_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_831_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_803_, v_data_811_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = lean_unsigned_to_nat(7u);
v___x_834_ = lean_mk_empty_array_with_capacity(v___x_833_);
v___x_835_ = lean_array_push(v___x_834_, v___x_814_);
v___x_836_ = lean_array_push(v___x_835_, v___x_817_);
v___x_837_ = lean_array_push(v___x_836_, v___x_820_);
v___x_838_ = lean_array_push(v___x_837_, v___x_823_);
v___x_839_ = lean_array_push(v___x_838_, v___x_826_);
v___x_840_ = lean_array_push(v___x_839_, v___x_829_);
v___x_841_ = lean_array_push(v___x_840_, v___x_832_);
v___x_842_ = l_Lasm_JS_Web_Support_fields(v___x_841_);
lean_dec_ref(v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPointerEventInit___lam__0(lean_object* v___f_865_, lean_object* v___f_866_, lean_object* v___f_867_, lean_object* v___f_868_, lean_object* v___x_869_, lean_object* v___f_870_, lean_object* v___f_871_, lean_object* v___f_872_, lean_object* v_d_873_){
_start:
{
lean_object* v_bubbles_874_; lean_object* v_cancelable_875_; lean_object* v_composed_876_; lean_object* v_view_877_; lean_object* v_detail_878_; lean_object* v_which_879_; lean_object* v_ctrlKey_880_; lean_object* v_shiftKey_881_; lean_object* v_altKey_882_; lean_object* v_metaKey_883_; lean_object* v_modifierAltGraph_884_; lean_object* v_modifierCapsLock_885_; lean_object* v_modifierFn_886_; lean_object* v_modifierFnLock_887_; lean_object* v_modifierHyper_888_; lean_object* v_modifierNumLock_889_; lean_object* v_modifierScrollLock_890_; lean_object* v_modifierSuper_891_; lean_object* v_modifierSymbol_892_; lean_object* v_modifierSymbolLock_893_; lean_object* v_screenX_894_; lean_object* v_screenY_895_; lean_object* v_clientX_896_; lean_object* v_clientY_897_; lean_object* v_button_898_; lean_object* v_buttons_899_; lean_object* v_relatedTarget_900_; lean_object* v_pointerId_901_; lean_object* v_width_902_; lean_object* v_height_903_; lean_object* v_pressure_904_; lean_object* v_tangentialPressure_905_; lean_object* v_tiltX_906_; lean_object* v_tiltY_907_; lean_object* v_twist_908_; lean_object* v_altitudeAngle_909_; lean_object* v_azimuthAngle_910_; lean_object* v_pointerType_911_; lean_object* v_isPrimary_912_; lean_object* v_persistentDeviceId_913_; lean_object* v_coalescedEvents_914_; lean_object* v_predictedEvents_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_bubbles_874_ = lean_ctor_get(v_d_873_, 0);
lean_inc(v_bubbles_874_);
v_cancelable_875_ = lean_ctor_get(v_d_873_, 1);
lean_inc(v_cancelable_875_);
v_composed_876_ = lean_ctor_get(v_d_873_, 2);
lean_inc(v_composed_876_);
v_view_877_ = lean_ctor_get(v_d_873_, 3);
lean_inc(v_view_877_);
v_detail_878_ = lean_ctor_get(v_d_873_, 4);
lean_inc(v_detail_878_);
v_which_879_ = lean_ctor_get(v_d_873_, 5);
lean_inc(v_which_879_);
v_ctrlKey_880_ = lean_ctor_get(v_d_873_, 6);
lean_inc(v_ctrlKey_880_);
v_shiftKey_881_ = lean_ctor_get(v_d_873_, 7);
lean_inc(v_shiftKey_881_);
v_altKey_882_ = lean_ctor_get(v_d_873_, 8);
lean_inc(v_altKey_882_);
v_metaKey_883_ = lean_ctor_get(v_d_873_, 9);
lean_inc(v_metaKey_883_);
v_modifierAltGraph_884_ = lean_ctor_get(v_d_873_, 10);
lean_inc(v_modifierAltGraph_884_);
v_modifierCapsLock_885_ = lean_ctor_get(v_d_873_, 11);
lean_inc(v_modifierCapsLock_885_);
v_modifierFn_886_ = lean_ctor_get(v_d_873_, 12);
lean_inc(v_modifierFn_886_);
v_modifierFnLock_887_ = lean_ctor_get(v_d_873_, 13);
lean_inc(v_modifierFnLock_887_);
v_modifierHyper_888_ = lean_ctor_get(v_d_873_, 14);
lean_inc(v_modifierHyper_888_);
v_modifierNumLock_889_ = lean_ctor_get(v_d_873_, 15);
lean_inc(v_modifierNumLock_889_);
v_modifierScrollLock_890_ = lean_ctor_get(v_d_873_, 16);
lean_inc(v_modifierScrollLock_890_);
v_modifierSuper_891_ = lean_ctor_get(v_d_873_, 17);
lean_inc(v_modifierSuper_891_);
v_modifierSymbol_892_ = lean_ctor_get(v_d_873_, 18);
lean_inc(v_modifierSymbol_892_);
v_modifierSymbolLock_893_ = lean_ctor_get(v_d_873_, 19);
lean_inc(v_modifierSymbolLock_893_);
v_screenX_894_ = lean_ctor_get(v_d_873_, 20);
lean_inc(v_screenX_894_);
v_screenY_895_ = lean_ctor_get(v_d_873_, 21);
lean_inc(v_screenY_895_);
v_clientX_896_ = lean_ctor_get(v_d_873_, 22);
lean_inc(v_clientX_896_);
v_clientY_897_ = lean_ctor_get(v_d_873_, 23);
lean_inc(v_clientY_897_);
v_button_898_ = lean_ctor_get(v_d_873_, 24);
lean_inc(v_button_898_);
v_buttons_899_ = lean_ctor_get(v_d_873_, 25);
lean_inc(v_buttons_899_);
v_relatedTarget_900_ = lean_ctor_get(v_d_873_, 26);
lean_inc(v_relatedTarget_900_);
v_pointerId_901_ = lean_ctor_get(v_d_873_, 27);
lean_inc(v_pointerId_901_);
v_width_902_ = lean_ctor_get(v_d_873_, 28);
lean_inc(v_width_902_);
v_height_903_ = lean_ctor_get(v_d_873_, 29);
lean_inc(v_height_903_);
v_pressure_904_ = lean_ctor_get(v_d_873_, 30);
lean_inc(v_pressure_904_);
v_tangentialPressure_905_ = lean_ctor_get(v_d_873_, 31);
lean_inc(v_tangentialPressure_905_);
v_tiltX_906_ = lean_ctor_get(v_d_873_, 32);
lean_inc(v_tiltX_906_);
v_tiltY_907_ = lean_ctor_get(v_d_873_, 33);
lean_inc(v_tiltY_907_);
v_twist_908_ = lean_ctor_get(v_d_873_, 34);
lean_inc(v_twist_908_);
v_altitudeAngle_909_ = lean_ctor_get(v_d_873_, 35);
lean_inc(v_altitudeAngle_909_);
v_azimuthAngle_910_ = lean_ctor_get(v_d_873_, 36);
lean_inc(v_azimuthAngle_910_);
v_pointerType_911_ = lean_ctor_get(v_d_873_, 37);
lean_inc(v_pointerType_911_);
v_isPrimary_912_ = lean_ctor_get(v_d_873_, 38);
lean_inc(v_isPrimary_912_);
v_persistentDeviceId_913_ = lean_ctor_get(v_d_873_, 39);
lean_inc(v_persistentDeviceId_913_);
v_coalescedEvents_914_ = lean_ctor_get(v_d_873_, 40);
lean_inc(v_coalescedEvents_914_);
v_predictedEvents_915_ = lean_ctor_get(v_d_873_, 41);
lean_inc(v_predictedEvents_915_);
lean_dec_ref(v_d_873_);
v___x_916_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_865_, 5);
v___x_917_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_azimuthAngle_910_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_920_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_866_, v_pointerType_911_);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
lean_inc_ref_n(v___f_867_, 17);
v___x_923_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_isPrimary_912_);
v___x_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
lean_inc_ref_n(v___f_868_, 10);
v___x_926_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_persistentDeviceId_913_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4));
lean_inc_ref(v___x_869_);
v___x_929_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_869_, v_coalescedEvents_914_);
v___x_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5));
v___x_932_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_869_, v_predictedEvents_915_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_935_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_tangentialPressure_905_);
v___x_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_934_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_938_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_tiltX_906_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_941_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_tiltY_907_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_944_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_twist_908_);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_947_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_altitudeAngle_909_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_950_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_870_, v_relatedTarget_900_);
v___x_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_953_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_pointerId_901_);
v___x_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_956_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_width_902_);
v___x_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_959_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_height_903_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_958_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v___x_961_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_962_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_865_, v_pressure_904_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_965_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_screenY_895_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_964_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_968_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_clientX_896_);
v___x_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_967_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
v___x_970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_971_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_clientY_897_);
v___x_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_974_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_button_898_);
v___x_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
lean_inc_ref(v___f_871_);
v___x_977_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_871_, v_buttons_899_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_980_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierNumLock_889_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_983_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierScrollLock_890_);
v___x_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_986_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierSuper_891_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_989_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierSymbol_892_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_992_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierSymbolLock_893_);
v___x_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_995_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_screenX_894_);
v___x_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_998_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierAltGraph_884_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_1001_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierCapsLock_885_);
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_1004_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierFn_886_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_1007_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierFnLock_887_);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1006_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_1010_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_modifierHyper_888_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1013_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_871_, v_which_879_);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1016_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_ctrlKey_880_);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1019_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_shiftKey_881_);
v___x_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1022_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_altKey_882_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1021_);
lean_ctor_set(v___x_1023_, 1, v___x_1022_);
v___x_1024_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1025_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_metaKey_883_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1028_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_bubbles_874_);
v___x_1029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1031_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_cancelable_875_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1034_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_867_, v_composed_876_);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1037_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_872_, v_view_877_);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1036_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1040_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_868_, v_detail_878_);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_unsigned_to_nat(42u);
v___x_1043_ = lean_mk_empty_array_with_capacity(v___x_1042_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1029_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1032_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1035_);
v___x_1047_ = lean_array_push(v___x_1046_, v___x_1038_);
v___x_1048_ = lean_array_push(v___x_1047_, v___x_1041_);
v___x_1049_ = lean_array_push(v___x_1048_, v___x_1014_);
v___x_1050_ = lean_array_push(v___x_1049_, v___x_1017_);
v___x_1051_ = lean_array_push(v___x_1050_, v___x_1020_);
v___x_1052_ = lean_array_push(v___x_1051_, v___x_1023_);
v___x_1053_ = lean_array_push(v___x_1052_, v___x_1026_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_999_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1002_);
v___x_1056_ = lean_array_push(v___x_1055_, v___x_1005_);
v___x_1057_ = lean_array_push(v___x_1056_, v___x_1008_);
v___x_1058_ = lean_array_push(v___x_1057_, v___x_1011_);
v___x_1059_ = lean_array_push(v___x_1058_, v___x_981_);
v___x_1060_ = lean_array_push(v___x_1059_, v___x_984_);
v___x_1061_ = lean_array_push(v___x_1060_, v___x_987_);
v___x_1062_ = lean_array_push(v___x_1061_, v___x_990_);
v___x_1063_ = lean_array_push(v___x_1062_, v___x_993_);
v___x_1064_ = lean_array_push(v___x_1063_, v___x_996_);
v___x_1065_ = lean_array_push(v___x_1064_, v___x_966_);
v___x_1066_ = lean_array_push(v___x_1065_, v___x_969_);
v___x_1067_ = lean_array_push(v___x_1066_, v___x_972_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_975_);
v___x_1069_ = lean_array_push(v___x_1068_, v___x_978_);
v___x_1070_ = lean_array_push(v___x_1069_, v___x_951_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_954_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_957_);
v___x_1073_ = lean_array_push(v___x_1072_, v___x_960_);
v___x_1074_ = lean_array_push(v___x_1073_, v___x_963_);
v___x_1075_ = lean_array_push(v___x_1074_, v___x_936_);
v___x_1076_ = lean_array_push(v___x_1075_, v___x_939_);
v___x_1077_ = lean_array_push(v___x_1076_, v___x_942_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_945_);
v___x_1079_ = lean_array_push(v___x_1078_, v___x_948_);
v___x_1080_ = lean_array_push(v___x_1079_, v___x_918_);
v___x_1081_ = lean_array_push(v___x_1080_, v___x_921_);
v___x_1082_ = lean_array_push(v___x_1081_, v___x_924_);
v___x_1083_ = lean_array_push(v___x_1082_, v___x_927_);
v___x_1084_ = lean_array_push(v___x_1083_, v___x_930_);
v___x_1085_ = lean_array_push(v___x_1084_, v___x_933_);
v___x_1086_ = l_Lasm_JS_Web_Support_fields(v___x_1085_);
lean_dec_ref(v___x_1085_);
return v___x_1086_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPointerEventInit___closed__0(void){
_start:
{
lean_object* v___f_1087_; lean_object* v___x_1088_; 
v___f_1087_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___closed__0));
v___x_1088_ = l_Lasm_JS_instToJSArray___redArg(v___f_1087_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPointerEventInit___closed__1(void){
_start:
{
lean_object* v___f_1089_; lean_object* v___f_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; lean_object* v___f_1093_; lean_object* v___f_1094_; lean_object* v___f_1095_; lean_object* v___f_1096_; lean_object* v___f_1097_; 
v___f_1089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___closed__1));
v___f_1090_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___closed__3));
v___f_1091_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___closed__0));
v___x_1092_ = lean_obj_once(&l_Lasm_JS_Web_instToJSPointerEventInit___closed__0, &l_Lasm_JS_Web_instToJSPointerEventInit___closed__0_once, _init_l_Lasm_JS_Web_instToJSPointerEventInit___closed__0);
v___f_1093_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___closed__2));
v___f_1094_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___closed__0));
v___f_1095_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___closed__0));
v___f_1096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___closed__0));
v___f_1097_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0), 9, 8);
lean_closure_set(v___f_1097_, 0, v___f_1096_);
lean_closure_set(v___f_1097_, 1, v___f_1095_);
lean_closure_set(v___f_1097_, 2, v___f_1094_);
lean_closure_set(v___f_1097_, 3, v___f_1093_);
lean_closure_set(v___f_1097_, 4, v___x_1092_);
lean_closure_set(v___f_1097_, 5, v___f_1091_);
lean_closure_set(v___f_1097_, 6, v___f_1090_);
lean_closure_set(v___f_1097_, 7, v___f_1089_);
return v___f_1097_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPointerEventInit(void){
_start:
{
lean_object* v___f_1098_; 
v___f_1098_ = lean_obj_once(&l_Lasm_JS_Web_instToJSPointerEventInit___closed__1, &l_Lasm_JS_Web_instToJSPointerEventInit___closed__1_once, _init_l_Lasm_JS_Web_instToJSPointerEventInit___closed__1);
return v___f_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0(lean_object* v___f_1100_, lean_object* v___f_1101_, lean_object* v_d_1102_){
_start:
{
lean_object* v_bubbles_1103_; lean_object* v_cancelable_1104_; lean_object* v_composed_1105_; lean_object* v_submitter_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v_bubbles_1103_ = lean_ctor_get(v_d_1102_, 0);
lean_inc(v_bubbles_1103_);
v_cancelable_1104_ = lean_ctor_get(v_d_1102_, 1);
lean_inc(v_cancelable_1104_);
v_composed_1105_ = lean_ctor_get(v_d_1102_, 2);
lean_inc(v_composed_1105_);
v_submitter_1106_ = lean_ctor_get(v_d_1102_, 3);
lean_inc(v_submitter_1106_);
lean_dec_ref(v_d_1102_);
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_1100_, 2);
v___x_1108_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1100_, v_bubbles_1103_);
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1111_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1100_, v_cancelable_1104_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1114_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1100_, v_composed_1105_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_1117_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1101_, v_submitter_1106_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = lean_unsigned_to_nat(4u);
v___x_1120_ = lean_mk_empty_array_with_capacity(v___x_1119_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1109_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1112_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1115_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1118_);
v___x_1125_ = l_Lasm_JS_Web_Support_fields(v___x_1124_);
lean_dec_ref(v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0(lean_object* v___f_1132_, lean_object* v___f_1133_, lean_object* v_d_1134_){
_start:
{
lean_object* v_bubbles_1135_; lean_object* v_cancelable_1136_; lean_object* v_composed_1137_; lean_object* v_oldURL_1138_; lean_object* v_newURL_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_bubbles_1135_ = lean_ctor_get(v_d_1134_, 0);
lean_inc(v_bubbles_1135_);
v_cancelable_1136_ = lean_ctor_get(v_d_1134_, 1);
lean_inc(v_cancelable_1136_);
v_composed_1137_ = lean_ctor_get(v_d_1134_, 2);
lean_inc(v_composed_1137_);
v_oldURL_1138_ = lean_ctor_get(v_d_1134_, 3);
lean_inc(v_oldURL_1138_);
v_newURL_1139_ = lean_ctor_get(v_d_1134_, 4);
lean_inc(v_newURL_1139_);
lean_dec_ref(v_d_1134_);
v___x_1140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_1132_, 2);
v___x_1141_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1132_, v_bubbles_1135_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1144_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1132_, v_cancelable_1136_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1147_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1132_, v_composed_1137_);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
lean_inc_ref(v___f_1133_);
v___x_1150_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_oldURL_1138_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_1153_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1133_, v_newURL_1139_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = lean_unsigned_to_nat(5u);
v___x_1156_ = lean_mk_empty_array_with_capacity(v___x_1155_);
v___x_1157_ = lean_array_push(v___x_1156_, v___x_1142_);
v___x_1158_ = lean_array_push(v___x_1157_, v___x_1145_);
v___x_1159_ = lean_array_push(v___x_1158_, v___x_1148_);
v___x_1160_ = lean_array_push(v___x_1159_, v___x_1151_);
v___x_1161_ = lean_array_push(v___x_1160_, v___x_1154_);
v___x_1162_ = l_Lasm_JS_Web_Support_fields(v___x_1161_);
lean_dec_ref(v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0(lean_object* v___f_1169_, lean_object* v_d_1170_){
_start:
{
lean_object* v_bubbles_1171_; lean_object* v_cancelable_1172_; lean_object* v_composed_1173_; lean_object* v_state_1174_; lean_object* v_hasUAVisualTransition_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_bubbles_1171_ = lean_ctor_get(v_d_1170_, 0);
lean_inc(v_bubbles_1171_);
v_cancelable_1172_ = lean_ctor_get(v_d_1170_, 1);
lean_inc(v_cancelable_1172_);
v_composed_1173_ = lean_ctor_get(v_d_1170_, 2);
lean_inc(v_composed_1173_);
v_state_1174_ = lean_ctor_get(v_d_1170_, 3);
lean_inc(v_state_1174_);
v_hasUAVisualTransition_1175_ = lean_ctor_get(v_d_1170_, 4);
lean_inc(v_hasUAVisualTransition_1175_);
lean_dec_ref(v_d_1170_);
v___x_1176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_1169_, 3);
v___x_1177_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1169_, v_bubbles_1171_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1180_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1169_, v_cancelable_1172_);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1183_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1169_, v_composed_1173_);
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1182_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v_state_1174_);
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_1188_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1169_, v_hasUAVisualTransition_1175_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = lean_unsigned_to_nat(5u);
v___x_1191_ = lean_mk_empty_array_with_capacity(v___x_1190_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1178_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1181_);
v___x_1194_ = lean_array_push(v___x_1193_, v___x_1184_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1186_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1189_);
v___x_1197_ = l_Lasm_JS_Web_Support_fields(v___x_1196_);
lean_dec_ref(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStorageEventInit___lam__0(lean_object* v___f_1205_, lean_object* v___f_1206_, lean_object* v___f_1207_, lean_object* v_d_1208_){
_start:
{
lean_object* v_bubbles_1209_; lean_object* v_cancelable_1210_; lean_object* v_composed_1211_; lean_object* v_key_1212_; lean_object* v_oldValue_1213_; lean_object* v_newValue_1214_; lean_object* v_url_1215_; lean_object* v_storageArea_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_bubbles_1209_ = lean_ctor_get(v_d_1208_, 0);
lean_inc(v_bubbles_1209_);
v_cancelable_1210_ = lean_ctor_get(v_d_1208_, 1);
lean_inc(v_cancelable_1210_);
v_composed_1211_ = lean_ctor_get(v_d_1208_, 2);
lean_inc(v_composed_1211_);
v_key_1212_ = lean_ctor_get(v_d_1208_, 3);
lean_inc(v_key_1212_);
v_oldValue_1213_ = lean_ctor_get(v_d_1208_, 4);
lean_inc(v_oldValue_1213_);
v_newValue_1214_ = lean_ctor_get(v_d_1208_, 5);
lean_inc(v_newValue_1214_);
v_url_1215_ = lean_ctor_get(v_d_1208_, 6);
lean_inc(v_url_1215_);
v_storageArea_1216_ = lean_ctor_get(v_d_1208_, 7);
lean_inc(v_storageArea_1216_);
lean_dec_ref(v_d_1208_);
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_1205_, 2);
v___x_1218_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1205_, v_bubbles_1209_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1217_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1221_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1205_, v_cancelable_1210_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1220_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1224_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1205_, v_composed_1211_);
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_1206_, 3);
v___x_1227_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_key_1212_);
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1226_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_1230_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_oldValue_1213_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_1233_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_newValue_1214_);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1232_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_1236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_url_1215_);
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_1239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_storageArea_1216_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_unsigned_to_nat(8u);
v___x_1242_ = lean_mk_empty_array_with_capacity(v___x_1241_);
v___x_1243_ = lean_array_push(v___x_1242_, v___x_1219_);
v___x_1244_ = lean_array_push(v___x_1243_, v___x_1222_);
v___x_1245_ = lean_array_push(v___x_1244_, v___x_1225_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1228_);
v___x_1247_ = lean_array_push(v___x_1246_, v___x_1231_);
v___x_1248_ = lean_array_push(v___x_1247_, v___x_1234_);
v___x_1249_ = lean_array_push(v___x_1248_, v___x_1237_);
v___x_1250_ = lean_array_push(v___x_1249_, v___x_1240_);
v___x_1251_ = l_Lasm_JS_Web_Support_fields(v___x_1250_);
lean_dec_ref(v___x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_box(0);
return v___x_1258_;
}
else
{
lean_object* v_val_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v_val_1259_ = lean_ctor_get(v_x_1257_, 0);
v___x_1260_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_1259_);
v___x_1261_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1261_, 0, v_val_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0___boxed(lean_object* v_x_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_x_1262_);
lean_dec(v_x_1262_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(lean_object* v_x_1264_){
_start:
{
if (lean_obj_tag(v_x_1264_) == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_box(0);
return v___x_1265_;
}
else
{
lean_object* v_val_1266_; lean_object* v_bubbles_1267_; lean_object* v_cancelable_1268_; lean_object* v_composed_1269_; lean_object* v_view_1270_; lean_object* v_detail_1271_; lean_object* v_which_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v_val_1266_ = lean_ctor_get(v_x_1264_, 0);
lean_inc(v_val_1266_);
lean_dec_ref_known(v_x_1264_, 1);
v_bubbles_1267_ = lean_ctor_get(v_val_1266_, 0);
lean_inc(v_bubbles_1267_);
v_cancelable_1268_ = lean_ctor_get(v_val_1266_, 1);
lean_inc(v_cancelable_1268_);
v_composed_1269_ = lean_ctor_get(v_val_1266_, 2);
lean_inc(v_composed_1269_);
v_view_1270_ = lean_ctor_get(v_val_1266_, 3);
lean_inc(v_view_1270_);
v_detail_1271_ = lean_ctor_get(v_val_1266_, 4);
lean_inc(v_detail_1271_);
v_which_1272_ = lean_ctor_get(v_val_1266_, 5);
lean_inc(v_which_1272_);
lean_dec(v_val_1266_);
v___x_1273_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1274_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1267_);
lean_dec(v_bubbles_1267_);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1268_);
lean_dec(v_cancelable_1268_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1280_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1269_);
lean_dec(v_composed_1269_);
v___x_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1283_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_1270_);
lean_dec(v_view_1270_);
v___x_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1282_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1286_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_1271_);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1289_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_1272_);
v___x_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = lean_unsigned_to_nat(6u);
v___x_1292_ = lean_mk_empty_array_with_capacity(v___x_1291_);
v___x_1293_ = lean_array_push(v___x_1292_, v___x_1275_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1278_);
v___x_1295_ = lean_array_push(v___x_1294_, v___x_1281_);
v___x_1296_ = lean_array_push(v___x_1295_, v___x_1284_);
v___x_1297_ = lean_array_push(v___x_1296_, v___x_1287_);
v___x_1298_ = lean_array_push(v___x_1297_, v___x_1290_);
v___x_1299_ = l_Lasm_JS_Web_Support_fields(v___x_1298_);
lean_dec_ref(v___x_1298_);
return v___x_1299_;
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_1304_ = lean_string_utf8_byte_size(v___x_1303_);
return v___x_1304_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1305_ = lean_unsigned_to_nat(0u);
v___x_1306_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3);
v___x_1307_ = lean_nat_dec_eq(v___x_1306_, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__8));
v___x_1313_ = lean_unsigned_to_nat(46u);
v___x_1314_ = lean_unsigned_to_nat(193u);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v___x_1316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6));
v___x_1317_ = l_mkPanicMessageWithDecl(v___x_1316_, v___x_1315_, v___x_1314_, v___x_1313_, v___x_1312_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(lean_object* v_context_1319_, lean_object* v_d_1320_){
_start:
{
lean_object* v___y_1323_; lean_object* v___y_1324_; 
if (lean_obj_tag(v_d_1320_) == 9)
{
lean_object* v_value_1328_; lean_object* v___x_1329_; 
v_value_1328_ = lean_ctor_get(v_d_1320_, 0);
lean_inc(v_value_1328_);
lean_dec_ref_known(v_d_1320_, 2);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v_value_1328_);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; lean_object* v_received_1332_; 
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_1320_) == 9)
{
lean_object* v_value_1346_; lean_object* v_description_1347_; uint8_t v___x_1348_; 
v_value_1346_ = lean_ctor_get(v_d_1320_, 0);
v_description_1347_ = lean_ctor_get(v_d_1320_, 1);
v___x_1348_ = lean_string_dec_eq(v_description_1347_, v___x_1330_);
if (v___x_1348_ == 0)
{
goto v___jp_1344_;
}
else
{
uint32_t v___x_1349_; uint64_t v___x_1350_; lean_object* v___x_1351_; uint32_t v___x_1352_; lean_object* v___x_1353_; 
lean_inc_n(v_value_1346_, 2);
lean_dec_ref_known(v_d_1320_, 2);
v___x_1349_ = 206;
v___x_1350_ = 0ULL;
v___x_1351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1351_, 0, v_value_1346_);
lean_ctor_set(v___x_1351_, 1, v___x_1330_);
v___x_1352_ = lasm_js_value_handle(v_value_1346_);
lean_dec(v_value_1346_);
v___x_1353_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1349_, v___x_1350_, v___x_1351_, v___x_1352_);
lean_dec_ref_known(v___x_1351_, 2);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; uint8_t v___x_1355_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1355_ = lean_string_validate_utf8(v_a_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec(v_a_1354_);
v___x_1356_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_1357_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1356_);
v_received_1332_ = v___x_1357_;
goto v___jp_1331_;
}
else
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_string_from_utf8_unchecked(v_a_1354_);
v_received_1332_ = v___x_1358_;
goto v___jp_1331_;
}
}
else
{
lean_object* v___x_1359_; 
lean_dec_ref_known(v___x_1353_, 1);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_1332_ = v___x_1359_;
goto v___jp_1331_;
}
}
}
else
{
goto v___jp_1344_;
}
v___jp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1334_ = lean_string_append(v___x_1333_, v_context_1319_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
v___x_1337_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSUIEvent___closed__1));
v___x_1338_ = lean_string_append(v___x_1336_, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1340_ = lean_string_append(v___x_1338_, v___x_1339_);
v___x_1341_ = lean_string_append(v___x_1340_, v_received_1332_);
lean_dec_ref(v_received_1332_);
v___x_1342_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_1323_ = v___x_1341_;
v___y_1324_ = v___x_1343_;
goto v___jp_1322_;
}
else
{
v___y_1323_ = v___x_1341_;
v___y_1324_ = v___x_1330_;
goto v___jp_1322_;
}
}
v___jp_1344_:
{
lean_object* v___x_1345_; 
v___x_1345_ = l_Lasm_JS_Data_describe(v_d_1320_);
v_received_1332_ = v___x_1345_;
goto v___jp_1331_;
}
}
v___jp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1325_ = lean_string_append(v___y_1323_, v___y_1324_);
v___x_1326_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1360_, lean_object* v_d_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v_context_1360_, v_d_1361_);
lean_dec_ref(v_context_1360_);
return v_res_1363_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1365_; uint64_t v___x_1366_; 
v___x_1365_ = 0;
v___x_1366_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(lean_object* v_b_1367_, lean_object* v_args_1368_, uint8_t v_await_1369_){
_start:
{
uint64_t v___y_1372_; uint64_t v___y_1373_; uint64_t v___x_1416_; uint64_t v___y_1418_; 
v___x_1416_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1369_ == 0)
{
uint64_t v___x_1423_; 
v___x_1423_ = 0ULL;
v___y_1418_ = v___x_1423_;
goto v___jp_1417_;
}
else
{
uint64_t v___x_1424_; 
v___x_1424_ = 2ULL;
v___y_1418_ = v___x_1424_;
goto v___jp_1417_;
}
v___jp_1371_:
{
uint64_t v_flags_1374_; uint32_t v___x_1375_; lean_object* v___x_1376_; uint32_t v___x_1377_; lean_object* v___x_1378_; 
v_flags_1374_ = lean_uint64_lor(v___y_1372_, v___y_1373_);
v___x_1375_ = 214;
v___x_1376_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1367_, v_args_1368_);
v___x_1377_ = 0;
v___x_1378_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1375_, v_flags_1374_, v___x_1376_, v___x_1377_);
lean_dec(v___x_1376_);
if (lean_obj_tag(v___x_1378_) == 0)
{
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1379_);
lean_dec(v_a_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1367_);
v___x_1383_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v___x_1382_, v_a_1381_);
lean_dec_ref(v___x_1382_);
return v___x_1383_;
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
v_a_1384_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1380_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1380_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
else
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1399_; 
v_a_1392_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1394_ = v___x_1378_;
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1378_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set_tag(v___x_1394_, 1);
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_a_1392_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
}
else
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1415_; 
v_a_1400_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1402_ = v___x_1378_;
v_isShared_1403_ = v_isSharedCheck_1415_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1378_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1415_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1404_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1405_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1367_);
v___x_1406_ = lean_string_append(v___x_1404_, v___x_1405_);
lean_dec_ref(v___x_1405_);
v___x_1407_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1408_ = lean_string_append(v___x_1406_, v___x_1407_);
v___x_1409_ = lean_io_error_to_string(v_a_1400_);
v___x_1410_ = lean_string_append(v___x_1408_, v___x_1409_);
lean_dec_ref(v___x_1409_);
v___x_1411_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 0, v___x_1411_);
v___x_1413_ = v___x_1402_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
v___jp_1417_:
{
uint8_t v_construct_1419_; uint64_t v___x_1420_; 
v_construct_1419_ = lean_ctor_get_uint8(v_b_1367_, sizeof(void*)*4);
v___x_1420_ = lean_uint64_lor(v___x_1416_, v___y_1418_);
if (v_construct_1419_ == 0)
{
uint64_t v___x_1421_; 
v___x_1421_ = 0ULL;
v___y_1372_ = v___x_1420_;
v___y_1373_ = v___x_1421_;
goto v___jp_1371_;
}
else
{
uint64_t v___x_1422_; 
v___x_1422_ = 4ULL;
v___y_1372_ = v___x_1420_;
v___y_1373_ = v___x_1422_;
goto v___jp_1371_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___boxed(lean_object* v_b_1425_, lean_object* v_args_1426_, lean_object* v_await_1427_, lean_object* v_a_1428_){
_start:
{
uint8_t v_await_boxed_1429_; lean_object* v_res_1430_; 
v_await_boxed_1429_ = lean_unbox(v_await_1427_);
v_res_1430_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v_b_1425_, v_args_1426_, v_await_boxed_1429_);
lean_dec_ref(v_b_1425_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new(lean_object* v_type_1440_, lean_object* v_eventInitDict_1441_){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; lean_object* v___x_1452_; 
v___x_1443_ = lean_unsigned_to_nat(2u);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_new___closed__3));
v___x_1445_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_type_1440_);
v___x_1446_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(v_eventInitDict_1441_);
v___x_1447_ = lean_mk_empty_array_with_capacity(v___x_1443_);
v___x_1448_ = lean_array_push(v___x_1447_, v___x_1445_);
v___x_1449_ = lean_array_push(v___x_1448_, v___x_1446_);
v___x_1450_ = l_Lasm_JS_Web_Support_args(v___x_1449_);
v___x_1451_ = 0;
v___x_1452_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v___x_1444_, v___x_1450_, v___x_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new___boxed(lean_object* v_type_1453_, lean_object* v_eventInitDict_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lasm_JS_Web_UIEvent_new(v_type_1453_, v_eventInitDict_1454_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view(lean_object* v_self_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1460_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_defaultView_spec__0(v_self_1457_, v___x_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view___boxed(lean_object* v_self_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lasm_JS_Web_UIEvent_view(v_self_1461_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail(lean_object* v_self_1464_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1467_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1464_, v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail___boxed(lean_object* v_self_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lasm_JS_Web_UIEvent_detail(v_self_1468_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which(lean_object* v_self_1471_){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1474_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1471_, v___x_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which___boxed(lean_object* v_self_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lasm_JS_Web_UIEvent_which(v_self_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent(lean_object* v_self_1479_, lean_object* v_typeArg_1480_, lean_object* v_bubblesArg_1481_, lean_object* v_cancelableArg_1482_, lean_object* v_viewArg_1483_, lean_object* v_detailArg_1484_){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1486_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0));
v___x_1487_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1487_, 0, v_typeArg_1480_);
v___x_1488_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_1481_);
v___x_1489_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_1482_);
v___x_1490_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_1483_);
v___x_1491_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_1484_);
v___x_1492_ = lean_unsigned_to_nat(5u);
v___x_1493_ = lean_mk_empty_array_with_capacity(v___x_1492_);
v___x_1494_ = lean_array_push(v___x_1493_, v___x_1487_);
v___x_1495_ = lean_array_push(v___x_1494_, v___x_1488_);
v___x_1496_ = lean_array_push(v___x_1495_, v___x_1489_);
v___x_1497_ = lean_array_push(v___x_1496_, v___x_1490_);
v___x_1498_ = lean_array_push(v___x_1497_, v___x_1491_);
v___x_1499_ = l_Lasm_JS_Web_Support_args(v___x_1498_);
v___x_1500_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1479_, v___x_1486_, v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent___boxed(lean_object* v_self_1501_, lean_object* v_typeArg_1502_, lean_object* v_bubblesArg_1503_, lean_object* v_cancelableArg_1504_, lean_object* v_viewArg_1505_, lean_object* v_detailArg_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lasm_JS_Web_UIEvent_initUIEvent(v_self_1501_, v_typeArg_1502_, v_bubblesArg_1503_, v_cancelableArg_1504_, v_viewArg_1505_, v_detailArg_1506_);
lean_dec(v_viewArg_1505_);
lean_dec(v_cancelableArg_1504_);
lean_dec(v_bubblesArg_1503_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(lean_object* v_context_1509_, lean_object* v_d_1510_){
_start:
{
lean_object* v___y_1513_; lean_object* v___y_1514_; 
if (lean_obj_tag(v_d_1510_) == 9)
{
lean_object* v_value_1518_; lean_object* v___x_1519_; 
v_value_1518_ = lean_ctor_get(v_d_1510_, 0);
lean_inc(v_value_1518_);
lean_dec_ref_known(v_d_1510_, 2);
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v_value_1518_);
return v___x_1519_;
}
else
{
lean_object* v___x_1520_; lean_object* v_received_1522_; 
v___x_1520_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_1510_) == 9)
{
lean_object* v_value_1536_; lean_object* v_description_1537_; uint8_t v___x_1538_; 
v_value_1536_ = lean_ctor_get(v_d_1510_, 0);
v_description_1537_ = lean_ctor_get(v_d_1510_, 1);
v___x_1538_ = lean_string_dec_eq(v_description_1537_, v___x_1520_);
if (v___x_1538_ == 0)
{
goto v___jp_1534_;
}
else
{
uint32_t v___x_1539_; uint64_t v___x_1540_; lean_object* v___x_1541_; uint32_t v___x_1542_; lean_object* v___x_1543_; 
lean_inc_n(v_value_1536_, 2);
lean_dec_ref_known(v_d_1510_, 2);
v___x_1539_ = 206;
v___x_1540_ = 0ULL;
v___x_1541_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1541_, 0, v_value_1536_);
lean_ctor_set(v___x_1541_, 1, v___x_1520_);
v___x_1542_ = lasm_js_value_handle(v_value_1536_);
lean_dec(v_value_1536_);
v___x_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1539_, v___x_1540_, v___x_1541_, v___x_1542_);
lean_dec_ref_known(v___x_1541_, 2);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; uint8_t v___x_1545_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1543_, 1);
v___x_1545_ = lean_string_validate_utf8(v_a_1544_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_dec(v_a_1544_);
v___x_1546_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_1547_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1546_);
v_received_1522_ = v___x_1547_;
goto v___jp_1521_;
}
else
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_string_from_utf8_unchecked(v_a_1544_);
v_received_1522_ = v___x_1548_;
goto v___jp_1521_;
}
}
else
{
lean_object* v___x_1549_; 
lean_dec_ref_known(v___x_1543_, 1);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_1522_ = v___x_1549_;
goto v___jp_1521_;
}
}
}
else
{
goto v___jp_1534_;
}
v___jp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1524_ = lean_string_append(v___x_1523_, v_context_1509_);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1526_ = lean_string_append(v___x_1524_, v___x_1525_);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMouseEvent___closed__0));
v___x_1528_ = lean_string_append(v___x_1526_, v___x_1527_);
v___x_1529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1530_ = lean_string_append(v___x_1528_, v___x_1529_);
v___x_1531_ = lean_string_append(v___x_1530_, v_received_1522_);
lean_dec_ref(v_received_1522_);
v___x_1532_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_1513_ = v___x_1531_;
v___y_1514_ = v___x_1533_;
goto v___jp_1512_;
}
else
{
v___y_1513_ = v___x_1531_;
v___y_1514_ = v___x_1520_;
goto v___jp_1512_;
}
}
v___jp_1534_:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lasm_JS_Data_describe(v_d_1510_);
v_received_1522_ = v___x_1535_;
goto v___jp_1521_;
}
}
v___jp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1515_ = lean_string_append(v___y_1513_, v___y_1514_);
v___x_1516_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
v___x_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1550_, lean_object* v_d_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v_context_1550_, v_d_1551_);
lean_dec_ref(v_context_1550_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(lean_object* v_b_1554_, lean_object* v_args_1555_, uint8_t v_await_1556_){
_start:
{
uint64_t v___y_1559_; uint64_t v___y_1560_; uint64_t v___x_1603_; uint64_t v___y_1605_; 
v___x_1603_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1556_ == 0)
{
uint64_t v___x_1610_; 
v___x_1610_ = 0ULL;
v___y_1605_ = v___x_1610_;
goto v___jp_1604_;
}
else
{
uint64_t v___x_1611_; 
v___x_1611_ = 2ULL;
v___y_1605_ = v___x_1611_;
goto v___jp_1604_;
}
v___jp_1558_:
{
uint64_t v_flags_1561_; uint32_t v___x_1562_; lean_object* v___x_1563_; uint32_t v___x_1564_; lean_object* v___x_1565_; 
v_flags_1561_ = lean_uint64_lor(v___y_1559_, v___y_1560_);
v___x_1562_ = 214;
v___x_1563_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1554_, v_args_1555_);
v___x_1564_ = 0;
v___x_1565_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1562_, v_flags_1561_, v___x_1563_, v___x_1564_);
lean_dec(v___x_1563_);
if (lean_obj_tag(v___x_1565_) == 0)
{
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1567_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1567_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1566_);
lean_dec(v_a_1566_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1567_, 1);
v___x_1569_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1554_);
v___x_1570_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v___x_1569_, v_a_1568_);
lean_dec_ref(v___x_1569_);
return v___x_1570_;
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
v_a_1571_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1567_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1567_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1586_; 
v_a_1579_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1581_ = v___x_1565_;
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1565_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set_tag(v___x_1581_, 1);
v___x_1584_ = v___x_1581_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1602_; 
v_a_1587_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1589_ = v___x_1565_;
v_isShared_1590_ = v_isSharedCheck_1602_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1565_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1602_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1592_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1554_);
v___x_1593_ = lean_string_append(v___x_1591_, v___x_1592_);
lean_dec_ref(v___x_1592_);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1595_ = lean_string_append(v___x_1593_, v___x_1594_);
v___x_1596_ = lean_io_error_to_string(v_a_1587_);
v___x_1597_ = lean_string_append(v___x_1595_, v___x_1596_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1598_);
v___x_1600_ = v___x_1589_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
v___jp_1604_:
{
uint8_t v_construct_1606_; uint64_t v___x_1607_; 
v_construct_1606_ = lean_ctor_get_uint8(v_b_1554_, sizeof(void*)*4);
v___x_1607_ = lean_uint64_lor(v___x_1603_, v___y_1605_);
if (v_construct_1606_ == 0)
{
uint64_t v___x_1608_; 
v___x_1608_ = 0ULL;
v___y_1559_ = v___x_1607_;
v___y_1560_ = v___x_1608_;
goto v___jp_1558_;
}
else
{
uint64_t v___x_1609_; 
v___x_1609_ = 4ULL;
v___y_1559_ = v___x_1607_;
v___y_1560_ = v___x_1609_;
goto v___jp_1558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1___boxed(lean_object* v_b_1612_, lean_object* v_args_1613_, lean_object* v_await_1614_, lean_object* v_a_1615_){
_start:
{
uint8_t v_await_boxed_1616_; lean_object* v_res_1617_; 
v_await_boxed_1616_ = lean_unbox(v_await_1614_);
v_res_1617_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v_b_1612_, v_args_1613_, v_await_boxed_1616_);
lean_dec_ref(v_b_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(lean_object* v_x_1618_){
_start:
{
if (lean_obj_tag(v_x_1618_) == 0)
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_box(0);
return v___x_1619_;
}
else
{
lean_object* v_val_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_val_1620_ = lean_ctor_get(v_x_1618_, 0);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_1620_);
v___x_1622_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1622_, 0, v_val_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
return v___x_1622_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0___boxed(lean_object* v_x_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_x_1623_);
lean_dec(v_x_1623_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(lean_object* v_x_1625_){
_start:
{
if (lean_obj_tag(v_x_1625_) == 0)
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_box(0);
return v___x_1626_;
}
else
{
lean_object* v_val_1627_; lean_object* v_bubbles_1628_; lean_object* v_cancelable_1629_; lean_object* v_composed_1630_; lean_object* v_view_1631_; lean_object* v_detail_1632_; lean_object* v_which_1633_; lean_object* v_ctrlKey_1634_; lean_object* v_shiftKey_1635_; lean_object* v_altKey_1636_; lean_object* v_metaKey_1637_; lean_object* v_modifierAltGraph_1638_; lean_object* v_modifierCapsLock_1639_; lean_object* v_modifierFn_1640_; lean_object* v_modifierFnLock_1641_; lean_object* v_modifierHyper_1642_; lean_object* v_modifierNumLock_1643_; lean_object* v_modifierScrollLock_1644_; lean_object* v_modifierSuper_1645_; lean_object* v_modifierSymbol_1646_; lean_object* v_modifierSymbolLock_1647_; lean_object* v_screenX_1648_; lean_object* v_screenY_1649_; lean_object* v_clientX_1650_; lean_object* v_clientY_1651_; lean_object* v_button_1652_; lean_object* v_buttons_1653_; lean_object* v_relatedTarget_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_val_1627_ = lean_ctor_get(v_x_1625_, 0);
lean_inc(v_val_1627_);
lean_dec_ref_known(v_x_1625_, 1);
v_bubbles_1628_ = lean_ctor_get(v_val_1627_, 0);
lean_inc(v_bubbles_1628_);
v_cancelable_1629_ = lean_ctor_get(v_val_1627_, 1);
lean_inc(v_cancelable_1629_);
v_composed_1630_ = lean_ctor_get(v_val_1627_, 2);
lean_inc(v_composed_1630_);
v_view_1631_ = lean_ctor_get(v_val_1627_, 3);
lean_inc(v_view_1631_);
v_detail_1632_ = lean_ctor_get(v_val_1627_, 4);
lean_inc(v_detail_1632_);
v_which_1633_ = lean_ctor_get(v_val_1627_, 5);
lean_inc(v_which_1633_);
v_ctrlKey_1634_ = lean_ctor_get(v_val_1627_, 6);
lean_inc(v_ctrlKey_1634_);
v_shiftKey_1635_ = lean_ctor_get(v_val_1627_, 7);
lean_inc(v_shiftKey_1635_);
v_altKey_1636_ = lean_ctor_get(v_val_1627_, 8);
lean_inc(v_altKey_1636_);
v_metaKey_1637_ = lean_ctor_get(v_val_1627_, 9);
lean_inc(v_metaKey_1637_);
v_modifierAltGraph_1638_ = lean_ctor_get(v_val_1627_, 10);
lean_inc(v_modifierAltGraph_1638_);
v_modifierCapsLock_1639_ = lean_ctor_get(v_val_1627_, 11);
lean_inc(v_modifierCapsLock_1639_);
v_modifierFn_1640_ = lean_ctor_get(v_val_1627_, 12);
lean_inc(v_modifierFn_1640_);
v_modifierFnLock_1641_ = lean_ctor_get(v_val_1627_, 13);
lean_inc(v_modifierFnLock_1641_);
v_modifierHyper_1642_ = lean_ctor_get(v_val_1627_, 14);
lean_inc(v_modifierHyper_1642_);
v_modifierNumLock_1643_ = lean_ctor_get(v_val_1627_, 15);
lean_inc(v_modifierNumLock_1643_);
v_modifierScrollLock_1644_ = lean_ctor_get(v_val_1627_, 16);
lean_inc(v_modifierScrollLock_1644_);
v_modifierSuper_1645_ = lean_ctor_get(v_val_1627_, 17);
lean_inc(v_modifierSuper_1645_);
v_modifierSymbol_1646_ = lean_ctor_get(v_val_1627_, 18);
lean_inc(v_modifierSymbol_1646_);
v_modifierSymbolLock_1647_ = lean_ctor_get(v_val_1627_, 19);
lean_inc(v_modifierSymbolLock_1647_);
v_screenX_1648_ = lean_ctor_get(v_val_1627_, 20);
lean_inc(v_screenX_1648_);
v_screenY_1649_ = lean_ctor_get(v_val_1627_, 21);
lean_inc(v_screenY_1649_);
v_clientX_1650_ = lean_ctor_get(v_val_1627_, 22);
lean_inc(v_clientX_1650_);
v_clientY_1651_ = lean_ctor_get(v_val_1627_, 23);
lean_inc(v_clientY_1651_);
v_button_1652_ = lean_ctor_get(v_val_1627_, 24);
lean_inc(v_button_1652_);
v_buttons_1653_ = lean_ctor_get(v_val_1627_, 25);
lean_inc(v_buttons_1653_);
v_relatedTarget_1654_ = lean_ctor_get(v_val_1627_, 26);
lean_inc(v_relatedTarget_1654_);
lean_dec(v_val_1627_);
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1628_);
lean_dec(v_bubbles_1628_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1629_);
lean_dec(v_cancelable_1629_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1630_);
lean_dec(v_composed_1630_);
v___x_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1661_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1665_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_1631_);
lean_dec(v_view_1631_);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1668_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_1632_);
v___x_1669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1667_);
lean_ctor_set(v___x_1669_, 1, v___x_1668_);
v___x_1670_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1671_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_1633_);
v___x_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1670_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1674_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_1634_);
lean_dec(v_ctrlKey_1634_);
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1673_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1676_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1677_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_1635_);
lean_dec(v_shiftKey_1635_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1676_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_1636_);
lean_dec(v_altKey_1636_);
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
v___x_1682_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1683_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_1637_);
lean_dec(v_metaKey_1637_);
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1682_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_1686_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_1638_);
lean_dec(v_modifierAltGraph_1638_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1685_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___x_1688_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_1689_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_1639_);
lean_dec(v_modifierCapsLock_1639_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1688_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_1692_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_1640_);
lean_dec(v_modifierFn_1640_);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1691_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_1695_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_1641_);
lean_dec(v_modifierFnLock_1641_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_1698_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_1642_);
lean_dec(v_modifierHyper_1642_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1697_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_1701_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_1643_);
lean_dec(v_modifierNumLock_1643_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_1704_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_1644_);
lean_dec(v_modifierScrollLock_1644_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_1707_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_1645_);
lean_dec(v_modifierSuper_1645_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1706_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_1710_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_1646_);
lean_dec(v_modifierSymbol_1646_);
v___x_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_1713_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_1647_);
lean_dec(v_modifierSymbolLock_1647_);
v___x_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
v___x_1715_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1716_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_1648_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1715_);
lean_ctor_set(v___x_1717_, 1, v___x_1716_);
v___x_1718_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1719_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_1649_);
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1718_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1722_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_1650_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1721_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1725_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_1651_);
v___x_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1724_);
lean_ctor_set(v___x_1726_, 1, v___x_1725_);
v___x_1727_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1728_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_1652_);
v___x_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1727_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_1653_);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_1734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_1654_);
lean_dec(v_relatedTarget_1654_);
v___x_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_unsigned_to_nat(27u);
v___x_1737_ = lean_mk_empty_array_with_capacity(v___x_1736_);
v___x_1738_ = lean_array_push(v___x_1737_, v___x_1657_);
v___x_1739_ = lean_array_push(v___x_1738_, v___x_1660_);
v___x_1740_ = lean_array_push(v___x_1739_, v___x_1663_);
v___x_1741_ = lean_array_push(v___x_1740_, v___x_1666_);
v___x_1742_ = lean_array_push(v___x_1741_, v___x_1669_);
v___x_1743_ = lean_array_push(v___x_1742_, v___x_1672_);
v___x_1744_ = lean_array_push(v___x_1743_, v___x_1675_);
v___x_1745_ = lean_array_push(v___x_1744_, v___x_1678_);
v___x_1746_ = lean_array_push(v___x_1745_, v___x_1681_);
v___x_1747_ = lean_array_push(v___x_1746_, v___x_1684_);
v___x_1748_ = lean_array_push(v___x_1747_, v___x_1687_);
v___x_1749_ = lean_array_push(v___x_1748_, v___x_1690_);
v___x_1750_ = lean_array_push(v___x_1749_, v___x_1693_);
v___x_1751_ = lean_array_push(v___x_1750_, v___x_1696_);
v___x_1752_ = lean_array_push(v___x_1751_, v___x_1699_);
v___x_1753_ = lean_array_push(v___x_1752_, v___x_1702_);
v___x_1754_ = lean_array_push(v___x_1753_, v___x_1705_);
v___x_1755_ = lean_array_push(v___x_1754_, v___x_1708_);
v___x_1756_ = lean_array_push(v___x_1755_, v___x_1711_);
v___x_1757_ = lean_array_push(v___x_1756_, v___x_1714_);
v___x_1758_ = lean_array_push(v___x_1757_, v___x_1717_);
v___x_1759_ = lean_array_push(v___x_1758_, v___x_1720_);
v___x_1760_ = lean_array_push(v___x_1759_, v___x_1723_);
v___x_1761_ = lean_array_push(v___x_1760_, v___x_1726_);
v___x_1762_ = lean_array_push(v___x_1761_, v___x_1729_);
v___x_1763_ = lean_array_push(v___x_1762_, v___x_1732_);
v___x_1764_ = lean_array_push(v___x_1763_, v___x_1735_);
v___x_1765_ = l_Lasm_JS_Web_Support_fields(v___x_1764_);
lean_dec_ref(v___x_1764_);
return v___x_1765_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new(lean_object* v_type_1774_, lean_object* v_eventInitDict_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; uint8_t v___x_1785_; lean_object* v___x_1786_; 
v___x_1777_ = lean_unsigned_to_nat(2u);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_new___closed__2));
v___x_1779_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1779_, 0, v_type_1774_);
v___x_1780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(v_eventInitDict_1775_);
v___x_1781_ = lean_mk_empty_array_with_capacity(v___x_1777_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1779_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1780_);
v___x_1784_ = l_Lasm_JS_Web_Support_args(v___x_1783_);
v___x_1785_ = 0;
v___x_1786_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v___x_1778_, v___x_1784_, v___x_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new___boxed(lean_object* v_type_1787_, lean_object* v_eventInitDict_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lasm_JS_Web_MouseEvent_new(v_type_1787_, v_eventInitDict_1788_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX(lean_object* v_self_1792_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageX___closed__0));
v___x_1795_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1792_, v___x_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX___boxed(lean_object* v_self_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lasm_JS_Web_MouseEvent_pageX(v_self_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY(lean_object* v_self_1800_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageY___closed__0));
v___x_1803_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1800_, v___x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY___boxed(lean_object* v_self_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lasm_JS_Web_MouseEvent_pageY(v_self_1804_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x(lean_object* v_self_1808_){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_x___closed__0));
v___x_1811_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1808_, v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x___boxed(lean_object* v_self_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Lasm_JS_Web_MouseEvent_x(v_self_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y(lean_object* v_self_1816_){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_y___closed__0));
v___x_1819_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1816_, v___x_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y___boxed(lean_object* v_self_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lasm_JS_Web_MouseEvent_y(v_self_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX(lean_object* v_self_1824_){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetX___closed__0));
v___x_1827_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1824_, v___x_1826_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX___boxed(lean_object* v_self_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lasm_JS_Web_MouseEvent_offsetX(v_self_1828_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY(lean_object* v_self_1832_){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetY___closed__0));
v___x_1835_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1832_, v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY___boxed(lean_object* v_self_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l_Lasm_JS_Web_MouseEvent_offsetY(v_self_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX(lean_object* v_self_1839_){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1842_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1839_, v___x_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX___boxed(lean_object* v_self_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lasm_JS_Web_MouseEvent_screenX(v_self_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY(lean_object* v_self_1846_){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1849_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1846_, v___x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY___boxed(lean_object* v_self_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lasm_JS_Web_MouseEvent_screenY(v_self_1850_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX(lean_object* v_self_1853_){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1856_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1853_, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX___boxed(lean_object* v_self_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lasm_JS_Web_MouseEvent_clientX(v_self_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY(lean_object* v_self_1860_){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1863_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1860_, v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY___boxed(lean_object* v_self_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lasm_JS_Web_MouseEvent_clientY(v_self_1864_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX(lean_object* v_self_1868_){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerX___closed__0));
v___x_1871_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1868_, v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX___boxed(lean_object* v_self_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lasm_JS_Web_MouseEvent_layerX(v_self_1872_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY(lean_object* v_self_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerY___closed__0));
v___x_1879_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1876_, v___x_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY___boxed(lean_object* v_self_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lasm_JS_Web_MouseEvent_layerY(v_self_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey(lean_object* v_self_1883_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1886_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1883_, v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey___boxed(lean_object* v_self_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lasm_JS_Web_MouseEvent_ctrlKey(v_self_1887_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey(lean_object* v_self_1890_){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1893_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1890_, v___x_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey___boxed(lean_object* v_self_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lasm_JS_Web_MouseEvent_shiftKey(v_self_1894_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey(lean_object* v_self_1897_){
_start:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1900_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1897_, v___x_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey___boxed(lean_object* v_self_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lasm_JS_Web_MouseEvent_altKey(v_self_1901_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey(lean_object* v_self_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1907_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1904_, v___x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey___boxed(lean_object* v_self_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lasm_JS_Web_MouseEvent_metaKey(v_self_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button(lean_object* v_self_1911_){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1914_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1911_, v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button___boxed(lean_object* v_self_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lasm_JS_Web_MouseEvent_button(v_self_1915_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons(lean_object* v_self_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1921_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1918_, v___x_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons___boxed(lean_object* v_self_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lasm_JS_Web_MouseEvent_buttons(v_self_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget(lean_object* v_self_1925_){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_1928_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1925_, v___x_1927_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget___boxed(lean_object* v_self_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lasm_JS_Web_MouseEvent_relatedTarget(v_self_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState(lean_object* v_self_1933_, lean_object* v_keyArg_1934_){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_1937_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1937_, 0, v_keyArg_1934_);
v___x_1938_ = lean_unsigned_to_nat(1u);
v___x_1939_ = lean_mk_empty_array_with_capacity(v___x_1938_);
v___x_1940_ = lean_array_push(v___x_1939_, v___x_1937_);
v___x_1941_ = l_Lasm_JS_Web_Support_args(v___x_1940_);
v___x_1942_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1933_, v___x_1936_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState___boxed(lean_object* v_self_1943_, lean_object* v_keyArg_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lasm_JS_Web_MouseEvent_getModifierState(v_self_1943_, v_keyArg_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent(lean_object* v_self_1948_, lean_object* v_typeArg_1949_, lean_object* v_bubblesArg_1950_, lean_object* v_cancelableArg_1951_, lean_object* v_viewArg_1952_, lean_object* v_detailArg_1953_, lean_object* v_screenXArg_1954_, lean_object* v_screenYArg_1955_, lean_object* v_clientXArg_1956_, lean_object* v_clientYArg_1957_, lean_object* v_ctrlKeyArg_1958_, lean_object* v_altKeyArg_1959_, lean_object* v_shiftKeyArg_1960_, lean_object* v_metaKeyArg_1961_, lean_object* v_buttonArg_1962_, lean_object* v_relatedTargetArg_1963_){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1965_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0));
v___x_1966_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_typeArg_1949_);
v___x_1967_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_1950_);
v___x_1968_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_1951_);
v___x_1969_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_1952_);
v___x_1970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_1953_);
v___x_1971_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenXArg_1954_);
v___x_1972_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenYArg_1955_);
v___x_1973_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientXArg_1956_);
v___x_1974_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientYArg_1957_);
v___x_1975_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKeyArg_1958_);
v___x_1976_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKeyArg_1959_);
v___x_1977_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKeyArg_1960_);
v___x_1978_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKeyArg_1961_);
v___x_1979_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_buttonArg_1962_);
v___x_1980_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTargetArg_1963_);
v___x_1981_ = lean_unsigned_to_nat(15u);
v___x_1982_ = lean_mk_empty_array_with_capacity(v___x_1981_);
v___x_1983_ = lean_array_push(v___x_1982_, v___x_1966_);
v___x_1984_ = lean_array_push(v___x_1983_, v___x_1967_);
v___x_1985_ = lean_array_push(v___x_1984_, v___x_1968_);
v___x_1986_ = lean_array_push(v___x_1985_, v___x_1969_);
v___x_1987_ = lean_array_push(v___x_1986_, v___x_1970_);
v___x_1988_ = lean_array_push(v___x_1987_, v___x_1971_);
v___x_1989_ = lean_array_push(v___x_1988_, v___x_1972_);
v___x_1990_ = lean_array_push(v___x_1989_, v___x_1973_);
v___x_1991_ = lean_array_push(v___x_1990_, v___x_1974_);
v___x_1992_ = lean_array_push(v___x_1991_, v___x_1975_);
v___x_1993_ = lean_array_push(v___x_1992_, v___x_1976_);
v___x_1994_ = lean_array_push(v___x_1993_, v___x_1977_);
v___x_1995_ = lean_array_push(v___x_1994_, v___x_1978_);
v___x_1996_ = lean_array_push(v___x_1995_, v___x_1979_);
v___x_1997_ = lean_array_push(v___x_1996_, v___x_1980_);
v___x_1998_ = l_Lasm_JS_Web_Support_args(v___x_1997_);
v___x_1999_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1948_, v___x_1965_, v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent___boxed(lean_object** _args){
lean_object* v_self_2000_ = _args[0];
lean_object* v_typeArg_2001_ = _args[1];
lean_object* v_bubblesArg_2002_ = _args[2];
lean_object* v_cancelableArg_2003_ = _args[3];
lean_object* v_viewArg_2004_ = _args[4];
lean_object* v_detailArg_2005_ = _args[5];
lean_object* v_screenXArg_2006_ = _args[6];
lean_object* v_screenYArg_2007_ = _args[7];
lean_object* v_clientXArg_2008_ = _args[8];
lean_object* v_clientYArg_2009_ = _args[9];
lean_object* v_ctrlKeyArg_2010_ = _args[10];
lean_object* v_altKeyArg_2011_ = _args[11];
lean_object* v_shiftKeyArg_2012_ = _args[12];
lean_object* v_metaKeyArg_2013_ = _args[13];
lean_object* v_buttonArg_2014_ = _args[14];
lean_object* v_relatedTargetArg_2015_ = _args[15];
lean_object* v_a_2016_ = _args[16];
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lasm_JS_Web_MouseEvent_initMouseEvent(v_self_2000_, v_typeArg_2001_, v_bubblesArg_2002_, v_cancelableArg_2003_, v_viewArg_2004_, v_detailArg_2005_, v_screenXArg_2006_, v_screenYArg_2007_, v_clientXArg_2008_, v_clientYArg_2009_, v_ctrlKeyArg_2010_, v_altKeyArg_2011_, v_shiftKeyArg_2012_, v_metaKeyArg_2013_, v_buttonArg_2014_, v_relatedTargetArg_2015_);
lean_dec(v_relatedTargetArg_2015_);
lean_dec(v_metaKeyArg_2013_);
lean_dec(v_shiftKeyArg_2012_);
lean_dec(v_altKeyArg_2011_);
lean_dec(v_ctrlKeyArg_2010_);
lean_dec(v_viewArg_2004_);
lean_dec(v_cancelableArg_2003_);
lean_dec(v_bubblesArg_2002_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(lean_object* v_context_2018_, lean_object* v_d_2019_){
_start:
{
lean_object* v___y_2022_; lean_object* v___y_2023_; 
if (lean_obj_tag(v_d_2019_) == 9)
{
lean_object* v_value_2027_; lean_object* v___x_2028_; 
v_value_2027_ = lean_ctor_get(v_d_2019_, 0);
lean_inc(v_value_2027_);
lean_dec_ref_known(v_d_2019_, 2);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v_value_2027_);
return v___x_2028_;
}
else
{
lean_object* v___x_2029_; lean_object* v_received_2031_; 
v___x_2029_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2019_) == 9)
{
lean_object* v_value_2045_; lean_object* v_description_2046_; uint8_t v___x_2047_; 
v_value_2045_ = lean_ctor_get(v_d_2019_, 0);
v_description_2046_ = lean_ctor_get(v_d_2019_, 1);
v___x_2047_ = lean_string_dec_eq(v_description_2046_, v___x_2029_);
if (v___x_2047_ == 0)
{
goto v___jp_2043_;
}
else
{
uint32_t v___x_2048_; uint64_t v___x_2049_; lean_object* v___x_2050_; uint32_t v___x_2051_; lean_object* v___x_2052_; 
lean_inc_n(v_value_2045_, 2);
lean_dec_ref_known(v_d_2019_, 2);
v___x_2048_ = 206;
v___x_2049_ = 0ULL;
v___x_2050_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_value_2045_);
lean_ctor_set(v___x_2050_, 1, v___x_2029_);
v___x_2051_ = lasm_js_value_handle(v_value_2045_);
lean_dec(v_value_2045_);
v___x_2052_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2048_, v___x_2049_, v___x_2050_, v___x_2051_);
lean_dec_ref_known(v___x_2050_, 2);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; uint8_t v___x_2054_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2053_);
lean_dec_ref_known(v___x_2052_, 1);
v___x_2054_ = lean_string_validate_utf8(v_a_2053_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_dec(v_a_2053_);
v___x_2055_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2056_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2055_);
v_received_2031_ = v___x_2056_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2057_; 
v___x_2057_ = lean_string_from_utf8_unchecked(v_a_2053_);
v_received_2031_ = v___x_2057_;
goto v___jp_2030_;
}
}
else
{
lean_object* v___x_2058_; 
lean_dec_ref_known(v___x_2052_, 1);
v___x_2058_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2031_ = v___x_2058_;
goto v___jp_2030_;
}
}
}
else
{
goto v___jp_2043_;
}
v___jp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2033_ = lean_string_append(v___x_2032_, v_context_2018_);
v___x_2034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2035_ = lean_string_append(v___x_2033_, v___x_2034_);
v___x_2036_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWheelEvent___closed__0));
v___x_2037_ = lean_string_append(v___x_2035_, v___x_2036_);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2039_ = lean_string_append(v___x_2037_, v___x_2038_);
v___x_2040_ = lean_string_append(v___x_2039_, v_received_2031_);
lean_dec_ref(v_received_2031_);
v___x_2041_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; 
v___x_2042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2022_ = v___x_2040_;
v___y_2023_ = v___x_2042_;
goto v___jp_2021_;
}
else
{
v___y_2022_ = v___x_2040_;
v___y_2023_ = v___x_2029_;
goto v___jp_2021_;
}
}
v___jp_2043_:
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lasm_JS_Data_describe(v_d_2019_);
v_received_2031_ = v___x_2044_;
goto v___jp_2030_;
}
}
v___jp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2024_ = lean_string_append(v___y_2022_, v___y_2023_);
v___x_2025_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
v___x_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
return v___x_2026_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2059_, lean_object* v_d_2060_, lean_object* v_a_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v_context_2059_, v_d_2060_);
lean_dec_ref(v_context_2059_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(lean_object* v_b_2063_, lean_object* v_args_2064_, uint8_t v_await_2065_){
_start:
{
uint64_t v___y_2068_; uint64_t v___y_2069_; uint64_t v___x_2112_; uint64_t v___y_2114_; 
v___x_2112_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2065_ == 0)
{
uint64_t v___x_2119_; 
v___x_2119_ = 0ULL;
v___y_2114_ = v___x_2119_;
goto v___jp_2113_;
}
else
{
uint64_t v___x_2120_; 
v___x_2120_ = 2ULL;
v___y_2114_ = v___x_2120_;
goto v___jp_2113_;
}
v___jp_2067_:
{
uint64_t v_flags_2070_; uint32_t v___x_2071_; lean_object* v___x_2072_; uint32_t v___x_2073_; lean_object* v___x_2074_; 
v_flags_2070_ = lean_uint64_lor(v___y_2068_, v___y_2069_);
v___x_2071_ = 214;
v___x_2072_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2063_, v_args_2064_);
v___x_2073_ = 0;
v___x_2074_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2071_, v_flags_2070_, v___x_2072_, v___x_2073_);
lean_dec(v___x_2072_);
if (lean_obj_tag(v___x_2074_) == 0)
{
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2076_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2075_);
lean_dec(v_a_2075_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_a_2077_);
lean_dec_ref_known(v___x_2076_, 1);
v___x_2078_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2063_);
v___x_2079_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v___x_2078_, v_a_2077_);
lean_dec_ref(v___x_2078_);
return v___x_2079_;
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2076_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2076_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
v_a_2088_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_2074_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2074_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
lean_ctor_set_tag(v___x_2090_, 1);
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2111_; 
v_a_2096_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2098_ = v___x_2074_;
v_isShared_2099_ = v_isSharedCheck_2111_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2074_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2111_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2101_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2063_);
v___x_2102_ = lean_string_append(v___x_2100_, v___x_2101_);
lean_dec_ref(v___x_2101_);
v___x_2103_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2104_ = lean_string_append(v___x_2102_, v___x_2103_);
v___x_2105_ = lean_io_error_to_string(v_a_2096_);
v___x_2106_ = lean_string_append(v___x_2104_, v___x_2105_);
lean_dec_ref(v___x_2105_);
v___x_2107_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2107_);
v___x_2109_ = v___x_2098_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
v___jp_2113_:
{
uint8_t v_construct_2115_; uint64_t v___x_2116_; 
v_construct_2115_ = lean_ctor_get_uint8(v_b_2063_, sizeof(void*)*4);
v___x_2116_ = lean_uint64_lor(v___x_2112_, v___y_2114_);
if (v_construct_2115_ == 0)
{
uint64_t v___x_2117_; 
v___x_2117_ = 0ULL;
v___y_2068_ = v___x_2116_;
v___y_2069_ = v___x_2117_;
goto v___jp_2067_;
}
else
{
uint64_t v___x_2118_; 
v___x_2118_ = 4ULL;
v___y_2068_ = v___x_2116_;
v___y_2069_ = v___x_2118_;
goto v___jp_2067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1___boxed(lean_object* v_b_2121_, lean_object* v_args_2122_, lean_object* v_await_2123_, lean_object* v_a_2124_){
_start:
{
uint8_t v_await_boxed_2125_; lean_object* v_res_2126_; 
v_await_boxed_2125_ = lean_unbox(v_await_2123_);
v_res_2126_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v_b_2121_, v_args_2122_, v_await_boxed_2125_);
lean_dec_ref(v_b_2121_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(lean_object* v_x_2127_){
_start:
{
if (lean_obj_tag(v_x_2127_) == 0)
{
lean_object* v___x_2128_; 
v___x_2128_ = lean_box(0);
return v___x_2128_;
}
else
{
lean_object* v_val_2129_; lean_object* v_bubbles_2130_; lean_object* v_cancelable_2131_; lean_object* v_composed_2132_; lean_object* v_view_2133_; lean_object* v_detail_2134_; lean_object* v_which_2135_; lean_object* v_ctrlKey_2136_; lean_object* v_shiftKey_2137_; lean_object* v_altKey_2138_; lean_object* v_metaKey_2139_; lean_object* v_modifierAltGraph_2140_; lean_object* v_modifierCapsLock_2141_; lean_object* v_modifierFn_2142_; lean_object* v_modifierFnLock_2143_; lean_object* v_modifierHyper_2144_; lean_object* v_modifierNumLock_2145_; lean_object* v_modifierScrollLock_2146_; lean_object* v_modifierSuper_2147_; lean_object* v_modifierSymbol_2148_; lean_object* v_modifierSymbolLock_2149_; lean_object* v_screenX_2150_; lean_object* v_screenY_2151_; lean_object* v_clientX_2152_; lean_object* v_clientY_2153_; lean_object* v_button_2154_; lean_object* v_buttons_2155_; lean_object* v_relatedTarget_2156_; lean_object* v_deltaX_2157_; lean_object* v_deltaY_2158_; lean_object* v_deltaZ_2159_; lean_object* v_deltaMode_2160_; lean_object* v_momentum_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_val_2129_ = lean_ctor_get(v_x_2127_, 0);
lean_inc(v_val_2129_);
lean_dec_ref_known(v_x_2127_, 1);
v_bubbles_2130_ = lean_ctor_get(v_val_2129_, 0);
lean_inc(v_bubbles_2130_);
v_cancelable_2131_ = lean_ctor_get(v_val_2129_, 1);
lean_inc(v_cancelable_2131_);
v_composed_2132_ = lean_ctor_get(v_val_2129_, 2);
lean_inc(v_composed_2132_);
v_view_2133_ = lean_ctor_get(v_val_2129_, 3);
lean_inc(v_view_2133_);
v_detail_2134_ = lean_ctor_get(v_val_2129_, 4);
lean_inc(v_detail_2134_);
v_which_2135_ = lean_ctor_get(v_val_2129_, 5);
lean_inc(v_which_2135_);
v_ctrlKey_2136_ = lean_ctor_get(v_val_2129_, 6);
lean_inc(v_ctrlKey_2136_);
v_shiftKey_2137_ = lean_ctor_get(v_val_2129_, 7);
lean_inc(v_shiftKey_2137_);
v_altKey_2138_ = lean_ctor_get(v_val_2129_, 8);
lean_inc(v_altKey_2138_);
v_metaKey_2139_ = lean_ctor_get(v_val_2129_, 9);
lean_inc(v_metaKey_2139_);
v_modifierAltGraph_2140_ = lean_ctor_get(v_val_2129_, 10);
lean_inc(v_modifierAltGraph_2140_);
v_modifierCapsLock_2141_ = lean_ctor_get(v_val_2129_, 11);
lean_inc(v_modifierCapsLock_2141_);
v_modifierFn_2142_ = lean_ctor_get(v_val_2129_, 12);
lean_inc(v_modifierFn_2142_);
v_modifierFnLock_2143_ = lean_ctor_get(v_val_2129_, 13);
lean_inc(v_modifierFnLock_2143_);
v_modifierHyper_2144_ = lean_ctor_get(v_val_2129_, 14);
lean_inc(v_modifierHyper_2144_);
v_modifierNumLock_2145_ = lean_ctor_get(v_val_2129_, 15);
lean_inc(v_modifierNumLock_2145_);
v_modifierScrollLock_2146_ = lean_ctor_get(v_val_2129_, 16);
lean_inc(v_modifierScrollLock_2146_);
v_modifierSuper_2147_ = lean_ctor_get(v_val_2129_, 17);
lean_inc(v_modifierSuper_2147_);
v_modifierSymbol_2148_ = lean_ctor_get(v_val_2129_, 18);
lean_inc(v_modifierSymbol_2148_);
v_modifierSymbolLock_2149_ = lean_ctor_get(v_val_2129_, 19);
lean_inc(v_modifierSymbolLock_2149_);
v_screenX_2150_ = lean_ctor_get(v_val_2129_, 20);
lean_inc(v_screenX_2150_);
v_screenY_2151_ = lean_ctor_get(v_val_2129_, 21);
lean_inc(v_screenY_2151_);
v_clientX_2152_ = lean_ctor_get(v_val_2129_, 22);
lean_inc(v_clientX_2152_);
v_clientY_2153_ = lean_ctor_get(v_val_2129_, 23);
lean_inc(v_clientY_2153_);
v_button_2154_ = lean_ctor_get(v_val_2129_, 24);
lean_inc(v_button_2154_);
v_buttons_2155_ = lean_ctor_get(v_val_2129_, 25);
lean_inc(v_buttons_2155_);
v_relatedTarget_2156_ = lean_ctor_get(v_val_2129_, 26);
lean_inc(v_relatedTarget_2156_);
v_deltaX_2157_ = lean_ctor_get(v_val_2129_, 27);
lean_inc(v_deltaX_2157_);
v_deltaY_2158_ = lean_ctor_get(v_val_2129_, 28);
lean_inc(v_deltaY_2158_);
v_deltaZ_2159_ = lean_ctor_get(v_val_2129_, 29);
lean_inc(v_deltaZ_2159_);
v_deltaMode_2160_ = lean_ctor_get(v_val_2129_, 30);
lean_inc(v_deltaMode_2160_);
v_momentum_2161_ = lean_ctor_get(v_val_2129_, 31);
lean_inc(v_momentum_2161_);
lean_dec(v_val_2129_);
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2163_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2130_);
lean_dec(v_bubbles_2130_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2162_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2166_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2131_);
lean_dec(v_cancelable_2131_);
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2169_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2132_);
lean_dec(v_composed_2132_);
v___x_2170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2172_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2133_);
lean_dec(v_view_2133_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2175_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2134_);
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2174_);
lean_ctor_set(v___x_2176_, 1, v___x_2175_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2178_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2135_);
v___x_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2136_);
lean_dec(v_ctrlKey_2136_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2180_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2184_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2137_);
lean_dec(v_shiftKey_2137_);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2183_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2138_);
lean_dec(v_altKey_2138_);
v___x_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2190_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2139_);
lean_dec(v_metaKey_2139_);
v___x_2191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2189_);
lean_ctor_set(v___x_2191_, 1, v___x_2190_);
v___x_2192_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2140_);
lean_dec(v_modifierAltGraph_2140_);
v___x_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2192_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2141_);
lean_dec(v_modifierCapsLock_2141_);
v___x_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2195_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2199_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2142_);
lean_dec(v_modifierFn_2142_);
v___x_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2198_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2202_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2143_);
lean_dec(v_modifierFnLock_2143_);
v___x_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2201_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2205_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2144_);
lean_dec(v_modifierHyper_2144_);
v___x_2206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2204_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2208_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2145_);
lean_dec(v_modifierNumLock_2145_);
v___x_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2211_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2146_);
lean_dec(v_modifierScrollLock_2146_);
v___x_2212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2214_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2147_);
lean_dec(v_modifierSuper_2147_);
v___x_2215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2213_);
lean_ctor_set(v___x_2215_, 1, v___x_2214_);
v___x_2216_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2217_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2148_);
lean_dec(v_modifierSymbol_2148_);
v___x_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2216_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2220_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2149_);
lean_dec(v_modifierSymbolLock_2149_);
v___x_2221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2219_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
v___x_2222_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_2223_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_2150_);
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2222_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
v___x_2225_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_2226_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_2151_);
v___x_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2225_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_2229_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_2152_);
v___x_2230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2228_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
v___x_2231_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_2232_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_2153_);
v___x_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2231_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
v___x_2234_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_2235_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_2154_);
v___x_2236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2234_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_2238_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_2155_);
v___x_2239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2237_);
lean_ctor_set(v___x_2239_, 1, v___x_2238_);
v___x_2240_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_2241_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_2156_);
lean_dec(v_relatedTarget_2156_);
v___x_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2240_);
lean_ctor_set(v___x_2242_, 1, v___x_2241_);
v___x_2243_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2244_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaX_2157_);
lean_dec(v_deltaX_2157_);
v___x_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2243_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2247_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaY_2158_);
lean_dec(v_deltaY_2158_);
v___x_2248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2250_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaZ_2159_);
lean_dec(v_deltaZ_2159_);
v___x_2251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2249_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2253_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_deltaMode_2160_);
v___x_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2252_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2256_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_momentum_2161_);
lean_dec(v_momentum_2161_);
v___x_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = lean_unsigned_to_nat(32u);
v___x_2259_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___x_2260_ = lean_array_push(v___x_2259_, v___x_2164_);
v___x_2261_ = lean_array_push(v___x_2260_, v___x_2167_);
v___x_2262_ = lean_array_push(v___x_2261_, v___x_2170_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2173_);
v___x_2264_ = lean_array_push(v___x_2263_, v___x_2176_);
v___x_2265_ = lean_array_push(v___x_2264_, v___x_2179_);
v___x_2266_ = lean_array_push(v___x_2265_, v___x_2182_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2185_);
v___x_2268_ = lean_array_push(v___x_2267_, v___x_2188_);
v___x_2269_ = lean_array_push(v___x_2268_, v___x_2191_);
v___x_2270_ = lean_array_push(v___x_2269_, v___x_2194_);
v___x_2271_ = lean_array_push(v___x_2270_, v___x_2197_);
v___x_2272_ = lean_array_push(v___x_2271_, v___x_2200_);
v___x_2273_ = lean_array_push(v___x_2272_, v___x_2203_);
v___x_2274_ = lean_array_push(v___x_2273_, v___x_2206_);
v___x_2275_ = lean_array_push(v___x_2274_, v___x_2209_);
v___x_2276_ = lean_array_push(v___x_2275_, v___x_2212_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2215_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2218_);
v___x_2279_ = lean_array_push(v___x_2278_, v___x_2221_);
v___x_2280_ = lean_array_push(v___x_2279_, v___x_2224_);
v___x_2281_ = lean_array_push(v___x_2280_, v___x_2227_);
v___x_2282_ = lean_array_push(v___x_2281_, v___x_2230_);
v___x_2283_ = lean_array_push(v___x_2282_, v___x_2233_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2236_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2239_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2242_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2245_);
v___x_2288_ = lean_array_push(v___x_2287_, v___x_2248_);
v___x_2289_ = lean_array_push(v___x_2288_, v___x_2251_);
v___x_2290_ = lean_array_push(v___x_2289_, v___x_2254_);
v___x_2291_ = lean_array_push(v___x_2290_, v___x_2257_);
v___x_2292_ = l_Lasm_JS_Web_Support_fields(v___x_2291_);
lean_dec_ref(v___x_2291_);
return v___x_2292_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new(lean_object* v_type_2301_, lean_object* v_eventInitDict_2302_){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; uint8_t v___x_2312_; lean_object* v___x_2313_; 
v___x_2304_ = lean_unsigned_to_nat(2u);
v___x_2305_ = ((lean_object*)(l_Lasm_JS_Web_WheelEvent_new___closed__2));
v___x_2306_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_type_2301_);
v___x_2307_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(v_eventInitDict_2302_);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2304_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2306_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2307_);
v___x_2311_ = l_Lasm_JS_Web_Support_args(v___x_2310_);
v___x_2312_ = 0;
v___x_2313_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v___x_2305_, v___x_2311_, v___x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new___boxed(lean_object* v_type_2314_, lean_object* v_eventInitDict_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lasm_JS_Web_WheelEvent_new(v_type_2314_, v_eventInitDict_2315_);
return v_res_2317_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL(void){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_unsigned_to_nat(0u);
return v___x_2318_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE(void){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_unsigned_to_nat(1u);
return v___x_2319_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE(void){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_unsigned_to_nat(2u);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX(lean_object* v_self_2321_){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2324_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2321_, v___x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX___boxed(lean_object* v_self_2325_, lean_object* v_a_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lasm_JS_Web_WheelEvent_deltaX(v_self_2325_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY(lean_object* v_self_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2331_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2328_, v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY___boxed(lean_object* v_self_2332_, lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lasm_JS_Web_WheelEvent_deltaY(v_self_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ(lean_object* v_self_2335_){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2338_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2335_, v___x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ___boxed(lean_object* v_self_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lasm_JS_Web_WheelEvent_deltaZ(v_self_2339_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode(lean_object* v_self_2342_){
_start:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2344_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2345_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2342_, v___x_2344_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode___boxed(lean_object* v_self_2346_, lean_object* v_a_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_Lasm_JS_Web_WheelEvent_deltaMode(v_self_2346_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum(lean_object* v_self_2349_){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2352_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2349_, v___x_2351_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum___boxed(lean_object* v_self_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lasm_JS_Web_WheelEvent_momentum(v_self_2353_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(lean_object* v_context_2356_, lean_object* v_d_2357_){
_start:
{
lean_object* v___y_2360_; lean_object* v___y_2361_; 
if (lean_obj_tag(v_d_2357_) == 9)
{
lean_object* v_value_2365_; lean_object* v___x_2366_; 
v_value_2365_ = lean_ctor_get(v_d_2357_, 0);
lean_inc(v_value_2365_);
lean_dec_ref_known(v_d_2357_, 2);
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_value_2365_);
return v___x_2366_;
}
else
{
lean_object* v___x_2367_; lean_object* v_received_2369_; 
v___x_2367_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2357_) == 9)
{
lean_object* v_value_2383_; lean_object* v_description_2384_; uint8_t v___x_2385_; 
v_value_2383_ = lean_ctor_get(v_d_2357_, 0);
v_description_2384_ = lean_ctor_get(v_d_2357_, 1);
v___x_2385_ = lean_string_dec_eq(v_description_2384_, v___x_2367_);
if (v___x_2385_ == 0)
{
goto v___jp_2381_;
}
else
{
uint32_t v___x_2386_; uint64_t v___x_2387_; lean_object* v___x_2388_; uint32_t v___x_2389_; lean_object* v___x_2390_; 
lean_inc_n(v_value_2383_, 2);
lean_dec_ref_known(v_d_2357_, 2);
v___x_2386_ = 206;
v___x_2387_ = 0ULL;
v___x_2388_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2388_, 0, v_value_2383_);
lean_ctor_set(v___x_2388_, 1, v___x_2367_);
v___x_2389_ = lasm_js_value_handle(v_value_2383_);
lean_dec(v_value_2383_);
v___x_2390_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2386_, v___x_2387_, v___x_2388_, v___x_2389_);
lean_dec_ref_known(v___x_2388_, 2);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; uint8_t v___x_2392_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
v___x_2392_ = lean_string_validate_utf8(v_a_2391_);
if (v___x_2392_ == 0)
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
lean_dec(v_a_2391_);
v___x_2393_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2394_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2393_);
v_received_2369_ = v___x_2394_;
goto v___jp_2368_;
}
else
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_string_from_utf8_unchecked(v_a_2391_);
v_received_2369_ = v___x_2395_;
goto v___jp_2368_;
}
}
else
{
lean_object* v___x_2396_; 
lean_dec_ref_known(v___x_2390_, 1);
v___x_2396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2369_ = v___x_2396_;
goto v___jp_2368_;
}
}
}
else
{
goto v___jp_2381_;
}
v___jp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2371_ = lean_string_append(v___x_2370_, v_context_2356_);
v___x_2372_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2373_ = lean_string_append(v___x_2371_, v___x_2372_);
v___x_2374_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0));
v___x_2375_ = lean_string_append(v___x_2373_, v___x_2374_);
v___x_2376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2377_ = lean_string_append(v___x_2375_, v___x_2376_);
v___x_2378_ = lean_string_append(v___x_2377_, v_received_2369_);
lean_dec_ref(v_received_2369_);
v___x_2379_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; 
v___x_2380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2360_ = v___x_2378_;
v___y_2361_ = v___x_2380_;
goto v___jp_2359_;
}
else
{
v___y_2360_ = v___x_2378_;
v___y_2361_ = v___x_2367_;
goto v___jp_2359_;
}
}
v___jp_2381_:
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lasm_JS_Data_describe(v_d_2357_);
v_received_2369_ = v___x_2382_;
goto v___jp_2368_;
}
}
v___jp_2359_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2362_ = lean_string_append(v___y_2360_, v___y_2361_);
v___x_2363_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
return v___x_2364_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2397_, lean_object* v_d_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v_context_2397_, v_d_2398_);
lean_dec_ref(v_context_2397_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(lean_object* v_b_2401_, lean_object* v_args_2402_, uint8_t v_await_2403_){
_start:
{
uint64_t v___y_2406_; uint64_t v___y_2407_; uint64_t v___x_2450_; uint64_t v___y_2452_; 
v___x_2450_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2403_ == 0)
{
uint64_t v___x_2457_; 
v___x_2457_ = 0ULL;
v___y_2452_ = v___x_2457_;
goto v___jp_2451_;
}
else
{
uint64_t v___x_2458_; 
v___x_2458_ = 2ULL;
v___y_2452_ = v___x_2458_;
goto v___jp_2451_;
}
v___jp_2405_:
{
uint64_t v_flags_2408_; uint32_t v___x_2409_; lean_object* v___x_2410_; uint32_t v___x_2411_; lean_object* v___x_2412_; 
v_flags_2408_ = lean_uint64_lor(v___y_2406_, v___y_2407_);
v___x_2409_ = 214;
v___x_2410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2401_, v_args_2402_);
v___x_2411_ = 0;
v___x_2412_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2409_, v_flags_2408_, v___x_2410_, v___x_2411_);
lean_dec(v___x_2410_);
if (lean_obj_tag(v___x_2412_) == 0)
{
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
v___x_2414_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2413_);
lean_dec(v_a_2413_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2401_);
v___x_2417_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v___x_2416_, v_a_2415_);
lean_dec_ref(v___x_2416_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
v_a_2418_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2414_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2414_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
v_a_2426_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2412_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2412_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 1);
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2449_; 
v_a_2434_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2436_ = v___x_2412_;
v_isShared_2437_ = v_isSharedCheck_2449_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2412_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2449_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2439_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2401_);
v___x_2440_ = lean_string_append(v___x_2438_, v___x_2439_);
lean_dec_ref(v___x_2439_);
v___x_2441_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2442_ = lean_string_append(v___x_2440_, v___x_2441_);
v___x_2443_ = lean_io_error_to_string(v_a_2434_);
v___x_2444_ = lean_string_append(v___x_2442_, v___x_2443_);
lean_dec_ref(v___x_2443_);
v___x_2445_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 0, v___x_2445_);
v___x_2447_ = v___x_2436_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2445_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
v___jp_2451_:
{
uint8_t v_construct_2453_; uint64_t v___x_2454_; 
v_construct_2453_ = lean_ctor_get_uint8(v_b_2401_, sizeof(void*)*4);
v___x_2454_ = lean_uint64_lor(v___x_2450_, v___y_2452_);
if (v_construct_2453_ == 0)
{
uint64_t v___x_2455_; 
v___x_2455_ = 0ULL;
v___y_2406_ = v___x_2454_;
v___y_2407_ = v___x_2455_;
goto v___jp_2405_;
}
else
{
uint64_t v___x_2456_; 
v___x_2456_ = 4ULL;
v___y_2406_ = v___x_2454_;
v___y_2407_ = v___x_2456_;
goto v___jp_2405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1___boxed(lean_object* v_b_2459_, lean_object* v_args_2460_, lean_object* v_await_2461_, lean_object* v_a_2462_){
_start:
{
uint8_t v_await_boxed_2463_; lean_object* v_res_2464_; 
v_await_boxed_2463_ = lean_unbox(v_await_2461_);
v_res_2464_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v_b_2459_, v_args_2460_, v_await_boxed_2463_);
lean_dec_ref(v_b_2459_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(lean_object* v_x_2465_){
_start:
{
if (lean_obj_tag(v_x_2465_) == 0)
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_box(0);
return v___x_2466_;
}
else
{
lean_object* v_val_2467_; lean_object* v_bubbles_2468_; lean_object* v_cancelable_2469_; lean_object* v_composed_2470_; lean_object* v_view_2471_; lean_object* v_detail_2472_; lean_object* v_which_2473_; lean_object* v_ctrlKey_2474_; lean_object* v_shiftKey_2475_; lean_object* v_altKey_2476_; lean_object* v_metaKey_2477_; lean_object* v_modifierAltGraph_2478_; lean_object* v_modifierCapsLock_2479_; lean_object* v_modifierFn_2480_; lean_object* v_modifierFnLock_2481_; lean_object* v_modifierHyper_2482_; lean_object* v_modifierNumLock_2483_; lean_object* v_modifierScrollLock_2484_; lean_object* v_modifierSuper_2485_; lean_object* v_modifierSymbol_2486_; lean_object* v_modifierSymbolLock_2487_; lean_object* v_key_2488_; lean_object* v_code_2489_; lean_object* v_location_2490_; lean_object* v_repeat_2491_; lean_object* v_isComposing_2492_; lean_object* v_charCode_2493_; lean_object* v_keyCode_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_val_2467_ = lean_ctor_get(v_x_2465_, 0);
lean_inc(v_val_2467_);
lean_dec_ref_known(v_x_2465_, 1);
v_bubbles_2468_ = lean_ctor_get(v_val_2467_, 0);
lean_inc(v_bubbles_2468_);
v_cancelable_2469_ = lean_ctor_get(v_val_2467_, 1);
lean_inc(v_cancelable_2469_);
v_composed_2470_ = lean_ctor_get(v_val_2467_, 2);
lean_inc(v_composed_2470_);
v_view_2471_ = lean_ctor_get(v_val_2467_, 3);
lean_inc(v_view_2471_);
v_detail_2472_ = lean_ctor_get(v_val_2467_, 4);
lean_inc(v_detail_2472_);
v_which_2473_ = lean_ctor_get(v_val_2467_, 5);
lean_inc(v_which_2473_);
v_ctrlKey_2474_ = lean_ctor_get(v_val_2467_, 6);
lean_inc(v_ctrlKey_2474_);
v_shiftKey_2475_ = lean_ctor_get(v_val_2467_, 7);
lean_inc(v_shiftKey_2475_);
v_altKey_2476_ = lean_ctor_get(v_val_2467_, 8);
lean_inc(v_altKey_2476_);
v_metaKey_2477_ = lean_ctor_get(v_val_2467_, 9);
lean_inc(v_metaKey_2477_);
v_modifierAltGraph_2478_ = lean_ctor_get(v_val_2467_, 10);
lean_inc(v_modifierAltGraph_2478_);
v_modifierCapsLock_2479_ = lean_ctor_get(v_val_2467_, 11);
lean_inc(v_modifierCapsLock_2479_);
v_modifierFn_2480_ = lean_ctor_get(v_val_2467_, 12);
lean_inc(v_modifierFn_2480_);
v_modifierFnLock_2481_ = lean_ctor_get(v_val_2467_, 13);
lean_inc(v_modifierFnLock_2481_);
v_modifierHyper_2482_ = lean_ctor_get(v_val_2467_, 14);
lean_inc(v_modifierHyper_2482_);
v_modifierNumLock_2483_ = lean_ctor_get(v_val_2467_, 15);
lean_inc(v_modifierNumLock_2483_);
v_modifierScrollLock_2484_ = lean_ctor_get(v_val_2467_, 16);
lean_inc(v_modifierScrollLock_2484_);
v_modifierSuper_2485_ = lean_ctor_get(v_val_2467_, 17);
lean_inc(v_modifierSuper_2485_);
v_modifierSymbol_2486_ = lean_ctor_get(v_val_2467_, 18);
lean_inc(v_modifierSymbol_2486_);
v_modifierSymbolLock_2487_ = lean_ctor_get(v_val_2467_, 19);
lean_inc(v_modifierSymbolLock_2487_);
v_key_2488_ = lean_ctor_get(v_val_2467_, 20);
lean_inc(v_key_2488_);
v_code_2489_ = lean_ctor_get(v_val_2467_, 21);
lean_inc(v_code_2489_);
v_location_2490_ = lean_ctor_get(v_val_2467_, 22);
lean_inc(v_location_2490_);
v_repeat_2491_ = lean_ctor_get(v_val_2467_, 23);
lean_inc(v_repeat_2491_);
v_isComposing_2492_ = lean_ctor_get(v_val_2467_, 24);
lean_inc(v_isComposing_2492_);
v_charCode_2493_ = lean_ctor_get(v_val_2467_, 25);
lean_inc(v_charCode_2493_);
v_keyCode_2494_ = lean_ctor_get(v_val_2467_, 26);
lean_inc(v_keyCode_2494_);
lean_dec(v_val_2467_);
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2496_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2468_);
lean_dec(v_bubbles_2468_);
v___x_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2495_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2499_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2469_);
lean_dec(v_cancelable_2469_);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2498_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2502_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2470_);
lean_dec(v_composed_2470_);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2501_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2505_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2471_);
lean_dec(v_view_2471_);
v___x_2506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2508_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2472_);
v___x_2509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2511_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2473_);
v___x_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2510_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
v___x_2513_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2514_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2474_);
lean_dec(v_ctrlKey_2474_);
v___x_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2513_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2517_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2475_);
lean_dec(v_shiftKey_2475_);
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2516_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
v___x_2519_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2520_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2476_);
lean_dec(v_altKey_2476_);
v___x_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2523_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2477_);
lean_dec(v_metaKey_2477_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2526_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2478_);
lean_dec(v_modifierAltGraph_2478_);
v___x_2527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2529_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2479_);
lean_dec(v_modifierCapsLock_2479_);
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2528_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
v___x_2531_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2480_);
lean_dec(v_modifierFn_2480_);
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2535_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2481_);
lean_dec(v_modifierFnLock_2481_);
v___x_2536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2534_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2538_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2482_);
lean_dec(v_modifierHyper_2482_);
v___x_2539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2537_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
v___x_2540_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2541_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2483_);
lean_dec(v_modifierNumLock_2483_);
v___x_2542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2540_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
v___x_2543_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2544_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2484_);
lean_dec(v_modifierScrollLock_2484_);
v___x_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2543_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
v___x_2546_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2547_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2485_);
lean_dec(v_modifierSuper_2485_);
v___x_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2546_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2550_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2486_);
lean_dec(v_modifierSymbol_2486_);
v___x_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2549_);
lean_ctor_set(v___x_2551_, 1, v___x_2550_);
v___x_2552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2553_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2487_);
lean_dec(v_modifierSymbolLock_2487_);
v___x_2554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set(v___x_2554_, 1, v___x_2553_);
v___x_2555_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2556_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_2488_);
v___x_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2555_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2559_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_code_2489_);
v___x_2560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2558_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
v___x_2561_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2562_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_location_2490_);
v___x_2563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2561_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2565_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_repeat_2491_);
lean_dec(v_repeat_2491_);
v___x_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2564_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2568_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_2492_);
lean_dec(v_isComposing_2492_);
v___x_2569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2567_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2571_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_charCode_2493_);
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2570_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2574_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_keyCode_2494_);
v___x_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2573_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_unsigned_to_nat(27u);
v___x_2577_ = lean_mk_empty_array_with_capacity(v___x_2576_);
v___x_2578_ = lean_array_push(v___x_2577_, v___x_2497_);
v___x_2579_ = lean_array_push(v___x_2578_, v___x_2500_);
v___x_2580_ = lean_array_push(v___x_2579_, v___x_2503_);
v___x_2581_ = lean_array_push(v___x_2580_, v___x_2506_);
v___x_2582_ = lean_array_push(v___x_2581_, v___x_2509_);
v___x_2583_ = lean_array_push(v___x_2582_, v___x_2512_);
v___x_2584_ = lean_array_push(v___x_2583_, v___x_2515_);
v___x_2585_ = lean_array_push(v___x_2584_, v___x_2518_);
v___x_2586_ = lean_array_push(v___x_2585_, v___x_2521_);
v___x_2587_ = lean_array_push(v___x_2586_, v___x_2524_);
v___x_2588_ = lean_array_push(v___x_2587_, v___x_2527_);
v___x_2589_ = lean_array_push(v___x_2588_, v___x_2530_);
v___x_2590_ = lean_array_push(v___x_2589_, v___x_2533_);
v___x_2591_ = lean_array_push(v___x_2590_, v___x_2536_);
v___x_2592_ = lean_array_push(v___x_2591_, v___x_2539_);
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2542_);
v___x_2594_ = lean_array_push(v___x_2593_, v___x_2545_);
v___x_2595_ = lean_array_push(v___x_2594_, v___x_2548_);
v___x_2596_ = lean_array_push(v___x_2595_, v___x_2551_);
v___x_2597_ = lean_array_push(v___x_2596_, v___x_2554_);
v___x_2598_ = lean_array_push(v___x_2597_, v___x_2557_);
v___x_2599_ = lean_array_push(v___x_2598_, v___x_2560_);
v___x_2600_ = lean_array_push(v___x_2599_, v___x_2563_);
v___x_2601_ = lean_array_push(v___x_2600_, v___x_2566_);
v___x_2602_ = lean_array_push(v___x_2601_, v___x_2569_);
v___x_2603_ = lean_array_push(v___x_2602_, v___x_2572_);
v___x_2604_ = lean_array_push(v___x_2603_, v___x_2575_);
v___x_2605_ = l_Lasm_JS_Web_Support_fields(v___x_2604_);
lean_dec_ref(v___x_2604_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new(lean_object* v_type_2614_, lean_object* v_eventInitDict_2615_){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; 
v___x_2617_ = lean_unsigned_to_nat(2u);
v___x_2618_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_new___closed__2));
v___x_2619_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2619_, 0, v_type_2614_);
v___x_2620_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(v_eventInitDict_2615_);
v___x_2621_ = lean_mk_empty_array_with_capacity(v___x_2617_);
v___x_2622_ = lean_array_push(v___x_2621_, v___x_2619_);
v___x_2623_ = lean_array_push(v___x_2622_, v___x_2620_);
v___x_2624_ = l_Lasm_JS_Web_Support_args(v___x_2623_);
v___x_2625_ = 0;
v___x_2626_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v___x_2618_, v___x_2624_, v___x_2625_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new___boxed(lean_object* v_type_2627_, lean_object* v_eventInitDict_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lasm_JS_Web_KeyboardEvent_new(v_type_2627_, v_eventInitDict_2628_);
return v_res_2630_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD(void){
_start:
{
lean_object* v___x_2631_; 
v___x_2631_ = lean_unsigned_to_nat(0u);
return v___x_2631_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT(void){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_unsigned_to_nat(1u);
return v___x_2632_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT(void){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_unsigned_to_nat(2u);
return v___x_2633_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD(void){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_unsigned_to_nat(3u);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key(lean_object* v_self_2635_){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2638_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2635_, v___x_2637_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key___boxed(lean_object* v_self_2639_, lean_object* v_a_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l_Lasm_JS_Web_KeyboardEvent_key(v_self_2639_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code(lean_object* v_self_2642_){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2645_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2642_, v___x_2644_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code___boxed(lean_object* v_self_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lasm_JS_Web_KeyboardEvent_code(v_self_2646_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location(lean_object* v_self_2649_){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2652_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2649_, v___x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location___boxed(lean_object* v_self_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lasm_JS_Web_KeyboardEvent_location(v_self_2653_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey(lean_object* v_self_2656_){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2659_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2656_, v___x_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey___boxed(lean_object* v_self_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Lasm_JS_Web_KeyboardEvent_ctrlKey(v_self_2660_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey(lean_object* v_self_2663_){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2665_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2666_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2663_, v___x_2665_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey___boxed(lean_object* v_self_2667_, lean_object* v_a_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lasm_JS_Web_KeyboardEvent_shiftKey(v_self_2667_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey(lean_object* v_self_2670_){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2673_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2670_, v___x_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey___boxed(lean_object* v_self_2674_, lean_object* v_a_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_Lasm_JS_Web_KeyboardEvent_altKey(v_self_2674_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey(lean_object* v_self_2677_){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2680_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2677_, v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey___boxed(lean_object* v_self_2681_, lean_object* v_a_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lasm_JS_Web_KeyboardEvent_metaKey(v_self_2681_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat(lean_object* v_self_2684_){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2687_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2684_, v___x_2686_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat___boxed(lean_object* v_self_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Lasm_JS_Web_KeyboardEvent_repeat(v_self_2688_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing(lean_object* v_self_2691_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2694_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2691_, v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing___boxed(lean_object* v_self_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Lasm_JS_Web_KeyboardEvent_isComposing(v_self_2695_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode(lean_object* v_self_2698_){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2701_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2698_, v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode___boxed(lean_object* v_self_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lasm_JS_Web_KeyboardEvent_charCode(v_self_2702_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode(lean_object* v_self_2705_){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2708_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2705_, v___x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode___boxed(lean_object* v_self_2709_, lean_object* v_a_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Lasm_JS_Web_KeyboardEvent_keyCode(v_self_2709_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState(lean_object* v_self_2712_, lean_object* v_keyArg_2713_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2715_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_2716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_keyArg_2713_);
v___x_2717_ = lean_unsigned_to_nat(1u);
v___x_2718_ = lean_mk_empty_array_with_capacity(v___x_2717_);
v___x_2719_ = lean_array_push(v___x_2718_, v___x_2716_);
v___x_2720_ = l_Lasm_JS_Web_Support_args(v___x_2719_);
v___x_2721_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2712_, v___x_2715_, v___x_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState___boxed(lean_object* v_self_2722_, lean_object* v_keyArg_2723_, lean_object* v_a_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lasm_JS_Web_KeyboardEvent_getModifierState(v_self_2722_, v_keyArg_2723_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(lean_object* v_self_2727_, lean_object* v_typeArg_2728_, lean_object* v_bubblesArg_2729_, lean_object* v_cancelableArg_2730_, lean_object* v_viewArg_2731_, lean_object* v_keyArg_2732_, lean_object* v_locationArg_2733_, lean_object* v_ctrlKey_2734_, lean_object* v_altKey_2735_, lean_object* v_shiftKey_2736_, lean_object* v_metaKey_2737_){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0));
v___x_2740_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2740_, 0, v_typeArg_2728_);
v___x_2741_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_2729_);
v___x_2742_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_2730_);
v___x_2743_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_2731_);
v___x_2744_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_keyArg_2732_);
v___x_2745_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_locationArg_2733_);
v___x_2746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2734_);
v___x_2747_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2735_);
v___x_2748_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2736_);
v___x_2749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2737_);
v___x_2750_ = lean_unsigned_to_nat(10u);
v___x_2751_ = lean_mk_empty_array_with_capacity(v___x_2750_);
v___x_2752_ = lean_array_push(v___x_2751_, v___x_2740_);
v___x_2753_ = lean_array_push(v___x_2752_, v___x_2741_);
v___x_2754_ = lean_array_push(v___x_2753_, v___x_2742_);
v___x_2755_ = lean_array_push(v___x_2754_, v___x_2743_);
v___x_2756_ = lean_array_push(v___x_2755_, v___x_2744_);
v___x_2757_ = lean_array_push(v___x_2756_, v___x_2745_);
v___x_2758_ = lean_array_push(v___x_2757_, v___x_2746_);
v___x_2759_ = lean_array_push(v___x_2758_, v___x_2747_);
v___x_2760_ = lean_array_push(v___x_2759_, v___x_2748_);
v___x_2761_ = lean_array_push(v___x_2760_, v___x_2749_);
v___x_2762_ = l_Lasm_JS_Web_Support_args(v___x_2761_);
v___x_2763_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2727_, v___x_2739_, v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___boxed(lean_object* v_self_2764_, lean_object* v_typeArg_2765_, lean_object* v_bubblesArg_2766_, lean_object* v_cancelableArg_2767_, lean_object* v_viewArg_2768_, lean_object* v_keyArg_2769_, lean_object* v_locationArg_2770_, lean_object* v_ctrlKey_2771_, lean_object* v_altKey_2772_, lean_object* v_shiftKey_2773_, lean_object* v_metaKey_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(v_self_2764_, v_typeArg_2765_, v_bubblesArg_2766_, v_cancelableArg_2767_, v_viewArg_2768_, v_keyArg_2769_, v_locationArg_2770_, v_ctrlKey_2771_, v_altKey_2772_, v_shiftKey_2773_, v_metaKey_2774_);
lean_dec(v_metaKey_2774_);
lean_dec(v_shiftKey_2773_);
lean_dec(v_altKey_2772_);
lean_dec(v_ctrlKey_2771_);
lean_dec(v_viewArg_2768_);
lean_dec(v_cancelableArg_2767_);
lean_dec(v_bubblesArg_2766_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(lean_object* v_context_2777_, lean_object* v_d_2778_){
_start:
{
lean_object* v___y_2781_; lean_object* v___y_2782_; 
if (lean_obj_tag(v_d_2778_) == 9)
{
lean_object* v_value_2786_; lean_object* v___x_2787_; 
v_value_2786_ = lean_ctor_get(v_d_2778_, 0);
lean_inc(v_value_2786_);
lean_dec_ref_known(v_d_2778_, 2);
v___x_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2787_, 0, v_value_2786_);
return v___x_2787_;
}
else
{
lean_object* v___x_2788_; lean_object* v_received_2790_; 
v___x_2788_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2778_) == 9)
{
lean_object* v_value_2804_; lean_object* v_description_2805_; uint8_t v___x_2806_; 
v_value_2804_ = lean_ctor_get(v_d_2778_, 0);
v_description_2805_ = lean_ctor_get(v_d_2778_, 1);
v___x_2806_ = lean_string_dec_eq(v_description_2805_, v___x_2788_);
if (v___x_2806_ == 0)
{
goto v___jp_2802_;
}
else
{
uint32_t v___x_2807_; uint64_t v___x_2808_; lean_object* v___x_2809_; uint32_t v___x_2810_; lean_object* v___x_2811_; 
lean_inc_n(v_value_2804_, 2);
lean_dec_ref_known(v_d_2778_, 2);
v___x_2807_ = 206;
v___x_2808_ = 0ULL;
v___x_2809_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2809_, 0, v_value_2804_);
lean_ctor_set(v___x_2809_, 1, v___x_2788_);
v___x_2810_ = lasm_js_value_handle(v_value_2804_);
lean_dec(v_value_2804_);
v___x_2811_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2807_, v___x_2808_, v___x_2809_, v___x_2810_);
lean_dec_ref_known(v___x_2809_, 2);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; uint8_t v___x_2813_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v___x_2813_ = lean_string_validate_utf8(v_a_2812_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
lean_dec(v_a_2812_);
v___x_2814_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2815_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2814_);
v_received_2790_ = v___x_2815_;
goto v___jp_2789_;
}
else
{
lean_object* v___x_2816_; 
v___x_2816_ = lean_string_from_utf8_unchecked(v_a_2812_);
v_received_2790_ = v___x_2816_;
goto v___jp_2789_;
}
}
else
{
lean_object* v___x_2817_; 
lean_dec_ref_known(v___x_2811_, 1);
v___x_2817_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2790_ = v___x_2817_;
goto v___jp_2789_;
}
}
}
else
{
goto v___jp_2802_;
}
v___jp_2789_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; 
v___x_2791_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2792_ = lean_string_append(v___x_2791_, v_context_2777_);
v___x_2793_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2794_ = lean_string_append(v___x_2792_, v___x_2793_);
v___x_2795_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInputEvent___closed__0));
v___x_2796_ = lean_string_append(v___x_2794_, v___x_2795_);
v___x_2797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2798_ = lean_string_append(v___x_2796_, v___x_2797_);
v___x_2799_ = lean_string_append(v___x_2798_, v_received_2790_);
lean_dec_ref(v_received_2790_);
v___x_2800_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; 
v___x_2801_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2781_ = v___x_2799_;
v___y_2782_ = v___x_2801_;
goto v___jp_2780_;
}
else
{
v___y_2781_ = v___x_2799_;
v___y_2782_ = v___x_2788_;
goto v___jp_2780_;
}
}
v___jp_2802_:
{
lean_object* v___x_2803_; 
v___x_2803_ = l_Lasm_JS_Data_describe(v_d_2778_);
v_received_2790_ = v___x_2803_;
goto v___jp_2789_;
}
}
v___jp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2783_ = lean_string_append(v___y_2781_, v___y_2782_);
v___x_2784_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
v___x_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
return v___x_2785_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2818_, lean_object* v_d_2819_, lean_object* v_a_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v_context_2818_, v_d_2819_);
lean_dec_ref(v_context_2818_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(lean_object* v_b_2822_, lean_object* v_args_2823_, uint8_t v_await_2824_){
_start:
{
uint64_t v___y_2827_; uint64_t v___y_2828_; uint64_t v___x_2871_; uint64_t v___y_2873_; 
v___x_2871_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2824_ == 0)
{
uint64_t v___x_2878_; 
v___x_2878_ = 0ULL;
v___y_2873_ = v___x_2878_;
goto v___jp_2872_;
}
else
{
uint64_t v___x_2879_; 
v___x_2879_ = 2ULL;
v___y_2873_ = v___x_2879_;
goto v___jp_2872_;
}
v___jp_2826_:
{
uint64_t v_flags_2829_; uint32_t v___x_2830_; lean_object* v___x_2831_; uint32_t v___x_2832_; lean_object* v___x_2833_; 
v_flags_2829_ = lean_uint64_lor(v___y_2827_, v___y_2828_);
v___x_2830_ = 214;
v___x_2831_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2822_, v_args_2823_);
v___x_2832_ = 0;
v___x_2833_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2830_, v_flags_2829_, v___x_2831_, v___x_2832_);
lean_dec(v___x_2831_);
if (lean_obj_tag(v___x_2833_) == 0)
{
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2835_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___x_2833_, 1);
v___x_2835_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2834_);
lean_dec(v_a_2834_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
lean_inc(v_a_2836_);
lean_dec_ref_known(v___x_2835_, 1);
v___x_2837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2822_);
v___x_2838_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v___x_2837_, v_a_2836_);
lean_dec_ref(v___x_2837_);
return v___x_2838_;
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
v_a_2839_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2835_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2835_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
v_a_2847_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v___x_2833_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_dec(v___x_2833_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 1);
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_a_2847_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2870_; 
v_a_2855_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2857_ = v___x_2833_;
v_isShared_2858_ = v_isSharedCheck_2870_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2833_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2870_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2868_; 
v___x_2859_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2822_);
v___x_2861_ = lean_string_append(v___x_2859_, v___x_2860_);
lean_dec_ref(v___x_2860_);
v___x_2862_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2863_ = lean_string_append(v___x_2861_, v___x_2862_);
v___x_2864_ = lean_io_error_to_string(v_a_2855_);
v___x_2865_ = lean_string_append(v___x_2863_, v___x_2864_);
lean_dec_ref(v___x_2864_);
v___x_2866_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 0, v___x_2866_);
v___x_2868_ = v___x_2857_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2866_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
v___jp_2872_:
{
uint8_t v_construct_2874_; uint64_t v___x_2875_; 
v_construct_2874_ = lean_ctor_get_uint8(v_b_2822_, sizeof(void*)*4);
v___x_2875_ = lean_uint64_lor(v___x_2871_, v___y_2873_);
if (v_construct_2874_ == 0)
{
uint64_t v___x_2876_; 
v___x_2876_ = 0ULL;
v___y_2827_ = v___x_2875_;
v___y_2828_ = v___x_2876_;
goto v___jp_2826_;
}
else
{
uint64_t v___x_2877_; 
v___x_2877_ = 4ULL;
v___y_2827_ = v___x_2875_;
v___y_2828_ = v___x_2877_;
goto v___jp_2826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1___boxed(lean_object* v_b_2880_, lean_object* v_args_2881_, lean_object* v_await_2882_, lean_object* v_a_2883_){
_start:
{
uint8_t v_await_boxed_2884_; lean_object* v_res_2885_; 
v_await_boxed_2884_ = lean_unbox(v_await_2882_);
v_res_2885_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v_b_2880_, v_args_2881_, v_await_boxed_2884_);
lean_dec_ref(v_b_2880_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(lean_object* v_x_2886_){
_start:
{
if (lean_obj_tag(v_x_2886_) == 0)
{
lean_object* v___x_2887_; 
v___x_2887_ = lean_box(0);
return v___x_2887_;
}
else
{
lean_object* v_val_2888_; lean_object* v_bubbles_2889_; lean_object* v_cancelable_2890_; lean_object* v_composed_2891_; lean_object* v_view_2892_; lean_object* v_detail_2893_; lean_object* v_which_2894_; lean_object* v_data_2895_; lean_object* v_isComposing_2896_; lean_object* v_inputType_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v_val_2888_ = lean_ctor_get(v_x_2886_, 0);
lean_inc(v_val_2888_);
lean_dec_ref_known(v_x_2886_, 1);
v_bubbles_2889_ = lean_ctor_get(v_val_2888_, 0);
lean_inc(v_bubbles_2889_);
v_cancelable_2890_ = lean_ctor_get(v_val_2888_, 1);
lean_inc(v_cancelable_2890_);
v_composed_2891_ = lean_ctor_get(v_val_2888_, 2);
lean_inc(v_composed_2891_);
v_view_2892_ = lean_ctor_get(v_val_2888_, 3);
lean_inc(v_view_2892_);
v_detail_2893_ = lean_ctor_get(v_val_2888_, 4);
lean_inc(v_detail_2893_);
v_which_2894_ = lean_ctor_get(v_val_2888_, 5);
lean_inc(v_which_2894_);
v_data_2895_ = lean_ctor_get(v_val_2888_, 6);
lean_inc(v_data_2895_);
v_isComposing_2896_ = lean_ctor_get(v_val_2888_, 7);
lean_inc(v_isComposing_2896_);
v_inputType_2897_ = lean_ctor_get(v_val_2888_, 8);
lean_inc(v_inputType_2897_);
lean_dec(v_val_2888_);
v___x_2898_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2899_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2889_);
lean_dec(v_bubbles_2889_);
v___x_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2898_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2902_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2890_);
lean_dec(v_cancelable_2890_);
v___x_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2901_);
lean_ctor_set(v___x_2903_, 1, v___x_2902_);
v___x_2904_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2905_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2891_);
lean_dec(v_composed_2891_);
v___x_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2904_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
v___x_2907_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2908_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2892_);
lean_dec(v_view_2892_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2907_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2911_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2893_);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2914_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2894_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2913_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_2917_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_2895_);
v___x_2918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2916_);
lean_ctor_set(v___x_2918_, 1, v___x_2917_);
v___x_2919_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2920_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_2896_);
lean_dec(v_isComposing_2896_);
v___x_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2919_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_2923_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_inputType_2897_);
v___x_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2922_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
v___x_2925_ = lean_unsigned_to_nat(9u);
v___x_2926_ = lean_mk_empty_array_with_capacity(v___x_2925_);
v___x_2927_ = lean_array_push(v___x_2926_, v___x_2900_);
v___x_2928_ = lean_array_push(v___x_2927_, v___x_2903_);
v___x_2929_ = lean_array_push(v___x_2928_, v___x_2906_);
v___x_2930_ = lean_array_push(v___x_2929_, v___x_2909_);
v___x_2931_ = lean_array_push(v___x_2930_, v___x_2912_);
v___x_2932_ = lean_array_push(v___x_2931_, v___x_2915_);
v___x_2933_ = lean_array_push(v___x_2932_, v___x_2918_);
v___x_2934_ = lean_array_push(v___x_2933_, v___x_2921_);
v___x_2935_ = lean_array_push(v___x_2934_, v___x_2924_);
v___x_2936_ = l_Lasm_JS_Web_Support_fields(v___x_2935_);
lean_dec_ref(v___x_2935_);
return v___x_2936_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new(lean_object* v_type_2945_, lean_object* v_eventInitDict_2946_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; lean_object* v___x_2957_; 
v___x_2948_ = lean_unsigned_to_nat(2u);
v___x_2949_ = ((lean_object*)(l_Lasm_JS_Web_InputEvent_new___closed__2));
v___x_2950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2950_, 0, v_type_2945_);
v___x_2951_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(v_eventInitDict_2946_);
v___x_2952_ = lean_mk_empty_array_with_capacity(v___x_2948_);
v___x_2953_ = lean_array_push(v___x_2952_, v___x_2950_);
v___x_2954_ = lean_array_push(v___x_2953_, v___x_2951_);
v___x_2955_ = l_Lasm_JS_Web_Support_args(v___x_2954_);
v___x_2956_ = 0;
v___x_2957_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v___x_2949_, v___x_2955_, v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new___boxed(lean_object* v_type_2958_, lean_object* v_eventInitDict_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lasm_JS_Web_InputEvent_new(v_type_2958_, v_eventInitDict_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data(lean_object* v_self_2962_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_2965_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_2962_, v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data___boxed(lean_object* v_self_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l_Lasm_JS_Web_InputEvent_data(v_self_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing(lean_object* v_self_2969_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2972_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2969_, v___x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing___boxed(lean_object* v_self_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lasm_JS_Web_InputEvent_isComposing(v_self_2973_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType(lean_object* v_self_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_2979_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2976_, v___x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType___boxed(lean_object* v_self_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Lasm_JS_Web_InputEvent_inputType(v_self_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(lean_object* v_context_2983_, lean_object* v_d_2984_){
_start:
{
lean_object* v___y_2987_; lean_object* v___y_2988_; 
if (lean_obj_tag(v_d_2984_) == 9)
{
lean_object* v_value_2992_; lean_object* v___x_2993_; 
v_value_2992_ = lean_ctor_get(v_d_2984_, 0);
lean_inc(v_value_2992_);
lean_dec_ref_known(v_d_2984_, 2);
v___x_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2993_, 0, v_value_2992_);
return v___x_2993_;
}
else
{
lean_object* v___x_2994_; lean_object* v_received_2996_; 
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2984_) == 9)
{
lean_object* v_value_3010_; lean_object* v_description_3011_; uint8_t v___x_3012_; 
v_value_3010_ = lean_ctor_get(v_d_2984_, 0);
v_description_3011_ = lean_ctor_get(v_d_2984_, 1);
v___x_3012_ = lean_string_dec_eq(v_description_3011_, v___x_2994_);
if (v___x_3012_ == 0)
{
goto v___jp_3008_;
}
else
{
uint32_t v___x_3013_; uint64_t v___x_3014_; lean_object* v___x_3015_; uint32_t v___x_3016_; lean_object* v___x_3017_; 
lean_inc_n(v_value_3010_, 2);
lean_dec_ref_known(v_d_2984_, 2);
v___x_3013_ = 206;
v___x_3014_ = 0ULL;
v___x_3015_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3015_, 0, v_value_3010_);
lean_ctor_set(v___x_3015_, 1, v___x_2994_);
v___x_3016_ = lasm_js_value_handle(v_value_3010_);
lean_dec(v_value_3010_);
v___x_3017_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3013_, v___x_3014_, v___x_3015_, v___x_3016_);
lean_dec_ref_known(v___x_3015_, 2);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; uint8_t v___x_3019_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref_known(v___x_3017_, 1);
v___x_3019_ = lean_string_validate_utf8(v_a_3018_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_dec(v_a_3018_);
v___x_3020_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3021_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3020_);
v_received_2996_ = v___x_3021_;
goto v___jp_2995_;
}
else
{
lean_object* v___x_3022_; 
v___x_3022_ = lean_string_from_utf8_unchecked(v_a_3018_);
v_received_2996_ = v___x_3022_;
goto v___jp_2995_;
}
}
else
{
lean_object* v___x_3023_; 
lean_dec_ref_known(v___x_3017_, 1);
v___x_3023_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2996_ = v___x_3023_;
goto v___jp_2995_;
}
}
}
else
{
goto v___jp_3008_;
}
v___jp_2995_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_2997_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2998_ = lean_string_append(v___x_2997_, v_context_2983_);
v___x_2999_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3000_ = lean_string_append(v___x_2998_, v___x_2999_);
v___x_3001_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFocusEvent___closed__0));
v___x_3002_ = lean_string_append(v___x_3000_, v___x_3001_);
v___x_3003_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3004_ = lean_string_append(v___x_3002_, v___x_3003_);
v___x_3005_ = lean_string_append(v___x_3004_, v_received_2996_);
lean_dec_ref(v_received_2996_);
v___x_3006_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; 
v___x_3007_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2987_ = v___x_3005_;
v___y_2988_ = v___x_3007_;
goto v___jp_2986_;
}
else
{
v___y_2987_ = v___x_3005_;
v___y_2988_ = v___x_2994_;
goto v___jp_2986_;
}
}
v___jp_3008_:
{
lean_object* v___x_3009_; 
v___x_3009_ = l_Lasm_JS_Data_describe(v_d_2984_);
v_received_2996_ = v___x_3009_;
goto v___jp_2995_;
}
}
v___jp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2989_ = lean_string_append(v___y_2987_, v___y_2988_);
v___x_2990_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
v___x_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
return v___x_2991_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3024_, lean_object* v_d_3025_, lean_object* v_a_3026_){
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v_context_3024_, v_d_3025_);
lean_dec_ref(v_context_3024_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(lean_object* v_b_3028_, lean_object* v_args_3029_, uint8_t v_await_3030_){
_start:
{
uint64_t v___y_3033_; uint64_t v___y_3034_; uint64_t v___x_3077_; uint64_t v___y_3079_; 
v___x_3077_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3030_ == 0)
{
uint64_t v___x_3084_; 
v___x_3084_ = 0ULL;
v___y_3079_ = v___x_3084_;
goto v___jp_3078_;
}
else
{
uint64_t v___x_3085_; 
v___x_3085_ = 2ULL;
v___y_3079_ = v___x_3085_;
goto v___jp_3078_;
}
v___jp_3032_:
{
uint64_t v_flags_3035_; uint32_t v___x_3036_; lean_object* v___x_3037_; uint32_t v___x_3038_; lean_object* v___x_3039_; 
v_flags_3035_ = lean_uint64_lor(v___y_3033_, v___y_3034_);
v___x_3036_ = 214;
v___x_3037_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3028_, v_args_3029_);
v___x_3038_ = 0;
v___x_3039_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3036_, v_flags_3035_, v___x_3037_, v___x_3038_);
lean_dec(v___x_3037_);
if (lean_obj_tag(v___x_3039_) == 0)
{
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3040_);
lean_dec(v_a_3040_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
lean_dec_ref_known(v___x_3041_, 1);
v___x_3043_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3028_);
v___x_3044_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v___x_3043_, v_a_3042_);
lean_dec_ref(v___x_3043_);
return v___x_3044_;
}
else
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
v_a_3045_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3041_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3041_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
v_a_3053_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3039_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3039_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
lean_ctor_set_tag(v___x_3055_, 1);
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3076_; 
v_a_3061_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3063_ = v___x_3039_;
v_isShared_3064_ = v_isSharedCheck_3076_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3039_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3076_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3066_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3028_);
v___x_3067_ = lean_string_append(v___x_3065_, v___x_3066_);
lean_dec_ref(v___x_3066_);
v___x_3068_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3069_ = lean_string_append(v___x_3067_, v___x_3068_);
v___x_3070_ = lean_io_error_to_string(v_a_3061_);
v___x_3071_ = lean_string_append(v___x_3069_, v___x_3070_);
lean_dec_ref(v___x_3070_);
v___x_3072_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 0, v___x_3072_);
v___x_3074_ = v___x_3063_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
v___jp_3078_:
{
uint8_t v_construct_3080_; uint64_t v___x_3081_; 
v_construct_3080_ = lean_ctor_get_uint8(v_b_3028_, sizeof(void*)*4);
v___x_3081_ = lean_uint64_lor(v___x_3077_, v___y_3079_);
if (v_construct_3080_ == 0)
{
uint64_t v___x_3082_; 
v___x_3082_ = 0ULL;
v___y_3033_ = v___x_3081_;
v___y_3034_ = v___x_3082_;
goto v___jp_3032_;
}
else
{
uint64_t v___x_3083_; 
v___x_3083_ = 4ULL;
v___y_3033_ = v___x_3081_;
v___y_3034_ = v___x_3083_;
goto v___jp_3032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1___boxed(lean_object* v_b_3086_, lean_object* v_args_3087_, lean_object* v_await_3088_, lean_object* v_a_3089_){
_start:
{
uint8_t v_await_boxed_3090_; lean_object* v_res_3091_; 
v_await_boxed_3090_ = lean_unbox(v_await_3088_);
v_res_3091_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v_b_3086_, v_args_3087_, v_await_boxed_3090_);
lean_dec_ref(v_b_3086_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(lean_object* v_x_3092_){
_start:
{
if (lean_obj_tag(v_x_3092_) == 0)
{
lean_object* v___x_3093_; 
v___x_3093_ = lean_box(0);
return v___x_3093_;
}
else
{
lean_object* v_val_3094_; lean_object* v_bubbles_3095_; lean_object* v_cancelable_3096_; lean_object* v_composed_3097_; lean_object* v_view_3098_; lean_object* v_detail_3099_; lean_object* v_which_3100_; lean_object* v_relatedTarget_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v_val_3094_ = lean_ctor_get(v_x_3092_, 0);
lean_inc(v_val_3094_);
lean_dec_ref_known(v_x_3092_, 1);
v_bubbles_3095_ = lean_ctor_get(v_val_3094_, 0);
lean_inc(v_bubbles_3095_);
v_cancelable_3096_ = lean_ctor_get(v_val_3094_, 1);
lean_inc(v_cancelable_3096_);
v_composed_3097_ = lean_ctor_get(v_val_3094_, 2);
lean_inc(v_composed_3097_);
v_view_3098_ = lean_ctor_get(v_val_3094_, 3);
lean_inc(v_view_3098_);
v_detail_3099_ = lean_ctor_get(v_val_3094_, 4);
lean_inc(v_detail_3099_);
v_which_3100_ = lean_ctor_get(v_val_3094_, 5);
lean_inc(v_which_3100_);
v_relatedTarget_3101_ = lean_ctor_get(v_val_3094_, 6);
lean_inc(v_relatedTarget_3101_);
lean_dec(v_val_3094_);
v___x_3102_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3103_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3095_);
lean_dec(v_bubbles_3095_);
v___x_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3102_);
lean_ctor_set(v___x_3104_, 1, v___x_3103_);
v___x_3105_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3106_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3096_);
lean_dec(v_cancelable_3096_);
v___x_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3105_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3097_);
lean_dec(v_composed_3097_);
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3108_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3112_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3098_);
lean_dec(v_view_3098_);
v___x_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3115_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3099_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3118_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3100_);
v___x_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3117_);
lean_ctor_set(v___x_3119_, 1, v___x_3118_);
v___x_3120_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3121_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3101_);
lean_dec(v_relatedTarget_3101_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3120_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = lean_unsigned_to_nat(7u);
v___x_3124_ = lean_mk_empty_array_with_capacity(v___x_3123_);
v___x_3125_ = lean_array_push(v___x_3124_, v___x_3104_);
v___x_3126_ = lean_array_push(v___x_3125_, v___x_3107_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3110_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3113_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3116_);
v___x_3130_ = lean_array_push(v___x_3129_, v___x_3119_);
v___x_3131_ = lean_array_push(v___x_3130_, v___x_3122_);
v___x_3132_ = l_Lasm_JS_Web_Support_fields(v___x_3131_);
lean_dec_ref(v___x_3131_);
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new(lean_object* v_type_3141_, lean_object* v_eventInitDict_3142_){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; uint8_t v___x_3152_; lean_object* v___x_3153_; 
v___x_3144_ = lean_unsigned_to_nat(2u);
v___x_3145_ = ((lean_object*)(l_Lasm_JS_Web_FocusEvent_new___closed__2));
v___x_3146_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3146_, 0, v_type_3141_);
v___x_3147_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(v_eventInitDict_3142_);
v___x_3148_ = lean_mk_empty_array_with_capacity(v___x_3144_);
v___x_3149_ = lean_array_push(v___x_3148_, v___x_3146_);
v___x_3150_ = lean_array_push(v___x_3149_, v___x_3147_);
v___x_3151_ = l_Lasm_JS_Web_Support_args(v___x_3150_);
v___x_3152_ = 0;
v___x_3153_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v___x_3145_, v___x_3151_, v___x_3152_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new___boxed(lean_object* v_type_3154_, lean_object* v_eventInitDict_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lasm_JS_Web_FocusEvent_new(v_type_3154_, v_eventInitDict_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget(lean_object* v_self_3158_){
_start:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3161_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_3158_, v___x_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget___boxed(lean_object* v_self_3162_, lean_object* v_a_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lasm_JS_Web_FocusEvent_relatedTarget(v_self_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(lean_object* v_context_3165_, lean_object* v_d_3166_){
_start:
{
lean_object* v___y_3169_; lean_object* v___y_3170_; 
if (lean_obj_tag(v_d_3166_) == 9)
{
lean_object* v_value_3174_; lean_object* v___x_3175_; 
v_value_3174_ = lean_ctor_get(v_d_3166_, 0);
lean_inc(v_value_3174_);
lean_dec_ref_known(v_d_3166_, 2);
v___x_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3175_, 0, v_value_3174_);
return v___x_3175_;
}
else
{
lean_object* v___x_3176_; lean_object* v_received_3178_; 
v___x_3176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_3166_) == 9)
{
lean_object* v_value_3192_; lean_object* v_description_3193_; uint8_t v___x_3194_; 
v_value_3192_ = lean_ctor_get(v_d_3166_, 0);
v_description_3193_ = lean_ctor_get(v_d_3166_, 1);
v___x_3194_ = lean_string_dec_eq(v_description_3193_, v___x_3176_);
if (v___x_3194_ == 0)
{
goto v___jp_3190_;
}
else
{
uint32_t v___x_3195_; uint64_t v___x_3196_; lean_object* v___x_3197_; uint32_t v___x_3198_; lean_object* v___x_3199_; 
lean_inc_n(v_value_3192_, 2);
lean_dec_ref_known(v_d_3166_, 2);
v___x_3195_ = 206;
v___x_3196_ = 0ULL;
v___x_3197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3197_, 0, v_value_3192_);
lean_ctor_set(v___x_3197_, 1, v___x_3176_);
v___x_3198_ = lasm_js_value_handle(v_value_3192_);
lean_dec(v_value_3192_);
v___x_3199_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3195_, v___x_3196_, v___x_3197_, v___x_3198_);
lean_dec_ref_known(v___x_3197_, 2);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; uint8_t v___x_3201_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
v___x_3201_ = lean_string_validate_utf8(v_a_3200_);
if (v___x_3201_ == 0)
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
lean_dec(v_a_3200_);
v___x_3202_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3203_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3202_);
v_received_3178_ = v___x_3203_;
goto v___jp_3177_;
}
else
{
lean_object* v___x_3204_; 
v___x_3204_ = lean_string_from_utf8_unchecked(v_a_3200_);
v_received_3178_ = v___x_3204_;
goto v___jp_3177_;
}
}
else
{
lean_object* v___x_3205_; 
lean_dec_ref_known(v___x_3199_, 1);
v___x_3205_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_3178_ = v___x_3205_;
goto v___jp_3177_;
}
}
}
else
{
goto v___jp_3190_;
}
v___jp_3177_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3179_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3180_ = lean_string_append(v___x_3179_, v_context_3165_);
v___x_3181_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3182_ = lean_string_append(v___x_3180_, v___x_3181_);
v___x_3183_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0));
v___x_3184_ = lean_string_append(v___x_3182_, v___x_3183_);
v___x_3185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3186_ = lean_string_append(v___x_3184_, v___x_3185_);
v___x_3187_ = lean_string_append(v___x_3186_, v_received_3178_);
lean_dec_ref(v_received_3178_);
v___x_3188_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3188_ == 0)
{
lean_object* v___x_3189_; 
v___x_3189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_3169_ = v___x_3187_;
v___y_3170_ = v___x_3189_;
goto v___jp_3168_;
}
else
{
v___y_3169_ = v___x_3187_;
v___y_3170_ = v___x_3176_;
goto v___jp_3168_;
}
}
v___jp_3190_:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Lasm_JS_Data_describe(v_d_3166_);
v_received_3178_ = v___x_3191_;
goto v___jp_3177_;
}
}
v___jp_3168_:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3171_ = lean_string_append(v___y_3169_, v___y_3170_);
v___x_3172_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
v___x_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
return v___x_3173_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3206_, lean_object* v_d_3207_, lean_object* v_a_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v_context_3206_, v_d_3207_);
lean_dec_ref(v_context_3206_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(lean_object* v_b_3210_, lean_object* v_args_3211_, uint8_t v_await_3212_){
_start:
{
uint64_t v___y_3215_; uint64_t v___y_3216_; uint64_t v___x_3259_; uint64_t v___y_3261_; 
v___x_3259_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3212_ == 0)
{
uint64_t v___x_3266_; 
v___x_3266_ = 0ULL;
v___y_3261_ = v___x_3266_;
goto v___jp_3260_;
}
else
{
uint64_t v___x_3267_; 
v___x_3267_ = 2ULL;
v___y_3261_ = v___x_3267_;
goto v___jp_3260_;
}
v___jp_3214_:
{
uint64_t v_flags_3217_; uint32_t v___x_3218_; lean_object* v___x_3219_; uint32_t v___x_3220_; lean_object* v___x_3221_; 
v_flags_3217_ = lean_uint64_lor(v___y_3215_, v___y_3216_);
v___x_3218_ = 214;
v___x_3219_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3210_, v_args_3211_);
v___x_3220_ = 0;
v___x_3221_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3218_, v_flags_3217_, v___x_3219_, v___x_3220_);
lean_dec(v___x_3219_);
if (lean_obj_tag(v___x_3221_) == 0)
{
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; lean_object* v___x_3223_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3223_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3222_);
lean_dec(v_a_3222_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref_known(v___x_3223_, 1);
v___x_3225_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3210_);
v___x_3226_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v___x_3225_, v_a_3224_);
lean_dec_ref(v___x_3225_);
return v___x_3226_;
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
v_a_3227_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3223_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3223_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
v_a_3235_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3221_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3221_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
lean_ctor_set_tag(v___x_3237_, 1);
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3258_; 
v_a_3243_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3245_ = v___x_3221_;
v_isShared_3246_ = v_isSharedCheck_3258_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3221_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3258_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3210_);
v___x_3249_ = lean_string_append(v___x_3247_, v___x_3248_);
lean_dec_ref(v___x_3248_);
v___x_3250_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3251_ = lean_string_append(v___x_3249_, v___x_3250_);
v___x_3252_ = lean_io_error_to_string(v_a_3243_);
v___x_3253_ = lean_string_append(v___x_3251_, v___x_3252_);
lean_dec_ref(v___x_3252_);
v___x_3254_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3254_);
v___x_3256_ = v___x_3245_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
v___jp_3260_:
{
uint8_t v_construct_3262_; uint64_t v___x_3263_; 
v_construct_3262_ = lean_ctor_get_uint8(v_b_3210_, sizeof(void*)*4);
v___x_3263_ = lean_uint64_lor(v___x_3259_, v___y_3261_);
if (v_construct_3262_ == 0)
{
uint64_t v___x_3264_; 
v___x_3264_ = 0ULL;
v___y_3215_ = v___x_3263_;
v___y_3216_ = v___x_3264_;
goto v___jp_3214_;
}
else
{
uint64_t v___x_3265_; 
v___x_3265_ = 4ULL;
v___y_3215_ = v___x_3263_;
v___y_3216_ = v___x_3265_;
goto v___jp_3214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1___boxed(lean_object* v_b_3268_, lean_object* v_args_3269_, lean_object* v_await_3270_, lean_object* v_a_3271_){
_start:
{
uint8_t v_await_boxed_3272_; lean_object* v_res_3273_; 
v_await_boxed_3272_ = lean_unbox(v_await_3270_);
v_res_3273_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v_b_3268_, v_args_3269_, v_await_boxed_3272_);
lean_dec_ref(v_b_3268_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(lean_object* v_x_3274_){
_start:
{
if (lean_obj_tag(v_x_3274_) == 0)
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_box(0);
return v___x_3275_;
}
else
{
lean_object* v_val_3276_; lean_object* v_bubbles_3277_; lean_object* v_cancelable_3278_; lean_object* v_composed_3279_; lean_object* v_view_3280_; lean_object* v_detail_3281_; lean_object* v_which_3282_; lean_object* v_data_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_val_3276_ = lean_ctor_get(v_x_3274_, 0);
lean_inc(v_val_3276_);
lean_dec_ref_known(v_x_3274_, 1);
v_bubbles_3277_ = lean_ctor_get(v_val_3276_, 0);
lean_inc(v_bubbles_3277_);
v_cancelable_3278_ = lean_ctor_get(v_val_3276_, 1);
lean_inc(v_cancelable_3278_);
v_composed_3279_ = lean_ctor_get(v_val_3276_, 2);
lean_inc(v_composed_3279_);
v_view_3280_ = lean_ctor_get(v_val_3276_, 3);
lean_inc(v_view_3280_);
v_detail_3281_ = lean_ctor_get(v_val_3276_, 4);
lean_inc(v_detail_3281_);
v_which_3282_ = lean_ctor_get(v_val_3276_, 5);
lean_inc(v_which_3282_);
v_data_3283_ = lean_ctor_get(v_val_3276_, 6);
lean_inc(v_data_3283_);
lean_dec(v_val_3276_);
v___x_3284_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3285_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3277_);
lean_dec(v_bubbles_3277_);
v___x_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3288_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3278_);
lean_dec(v_cancelable_3278_);
v___x_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3287_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3279_);
lean_dec(v_composed_3279_);
v___x_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3290_);
lean_ctor_set(v___x_3292_, 1, v___x_3291_);
v___x_3293_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3294_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3280_);
lean_dec(v_view_3280_);
v___x_3295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3293_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3297_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3281_);
v___x_3298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3296_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___x_3299_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3300_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3282_);
v___x_3301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3299_);
lean_ctor_set(v___x_3301_, 1, v___x_3300_);
v___x_3302_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3303_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_3283_);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = lean_unsigned_to_nat(7u);
v___x_3306_ = lean_mk_empty_array_with_capacity(v___x_3305_);
v___x_3307_ = lean_array_push(v___x_3306_, v___x_3286_);
v___x_3308_ = lean_array_push(v___x_3307_, v___x_3289_);
v___x_3309_ = lean_array_push(v___x_3308_, v___x_3292_);
v___x_3310_ = lean_array_push(v___x_3309_, v___x_3295_);
v___x_3311_ = lean_array_push(v___x_3310_, v___x_3298_);
v___x_3312_ = lean_array_push(v___x_3311_, v___x_3301_);
v___x_3313_ = lean_array_push(v___x_3312_, v___x_3304_);
v___x_3314_ = l_Lasm_JS_Web_Support_fields(v___x_3313_);
lean_dec_ref(v___x_3313_);
return v___x_3314_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new(lean_object* v_type_3323_, lean_object* v_eventInitDict_3324_){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; 
v___x_3326_ = lean_unsigned_to_nat(2u);
v___x_3327_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_new___closed__2));
v___x_3328_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3328_, 0, v_type_3323_);
v___x_3329_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(v_eventInitDict_3324_);
v___x_3330_ = lean_mk_empty_array_with_capacity(v___x_3326_);
v___x_3331_ = lean_array_push(v___x_3330_, v___x_3328_);
v___x_3332_ = lean_array_push(v___x_3331_, v___x_3329_);
v___x_3333_ = l_Lasm_JS_Web_Support_args(v___x_3332_);
v___x_3334_ = 0;
v___x_3335_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v___x_3327_, v___x_3333_, v___x_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new___boxed(lean_object* v_type_3336_, lean_object* v_eventInitDict_3337_, lean_object* v_a_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lasm_JS_Web_CompositionEvent_new(v_type_3336_, v_eventInitDict_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data(lean_object* v_self_3340_){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3343_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3340_, v___x_3342_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data___boxed(lean_object* v_self_3344_, lean_object* v_a_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_Lasm_JS_Web_CompositionEvent_data(v_self_3344_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(lean_object* v_self_3348_, lean_object* v_typeArg_3349_, lean_object* v_bubblesArg_3350_, lean_object* v_cancelableArg_3351_, lean_object* v_viewArg_3352_, lean_object* v_dataArg_3353_){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0));
v___x_3356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3356_, 0, v_typeArg_3349_);
v___x_3357_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_3350_);
v___x_3358_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_3351_);
v___x_3359_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_3352_);
v___x_3360_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dataArg_3353_);
v___x_3361_ = lean_unsigned_to_nat(5u);
v___x_3362_ = lean_mk_empty_array_with_capacity(v___x_3361_);
v___x_3363_ = lean_array_push(v___x_3362_, v___x_3356_);
v___x_3364_ = lean_array_push(v___x_3363_, v___x_3357_);
v___x_3365_ = lean_array_push(v___x_3364_, v___x_3358_);
v___x_3366_ = lean_array_push(v___x_3365_, v___x_3359_);
v___x_3367_ = lean_array_push(v___x_3366_, v___x_3360_);
v___x_3368_ = l_Lasm_JS_Web_Support_args(v___x_3367_);
v___x_3369_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3348_, v___x_3355_, v___x_3368_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___boxed(lean_object* v_self_3370_, lean_object* v_typeArg_3371_, lean_object* v_bubblesArg_3372_, lean_object* v_cancelableArg_3373_, lean_object* v_viewArg_3374_, lean_object* v_dataArg_3375_, lean_object* v_a_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(v_self_3370_, v_typeArg_3371_, v_bubblesArg_3372_, v_cancelableArg_3373_, v_viewArg_3374_, v_dataArg_3375_);
lean_dec(v_viewArg_3374_);
lean_dec(v_cancelableArg_3373_);
lean_dec(v_bubblesArg_3372_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(size_t v_sz_3378_, size_t v_i_3379_, lean_object* v_bs_3380_){
_start:
{
uint8_t v___x_3381_; 
v___x_3381_ = lean_usize_dec_lt(v_i_3379_, v_sz_3378_);
if (v___x_3381_ == 0)
{
return v_bs_3380_;
}
else
{
lean_object* v_v_3382_; lean_object* v___x_3383_; lean_object* v_bs_x27_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; size_t v___x_3387_; size_t v___x_3388_; lean_object* v___x_3389_; 
v_v_3382_ = lean_array_uget(v_bs_3380_, v_i_3379_);
v___x_3383_ = lean_unsigned_to_nat(0u);
v_bs_x27_3384_ = lean_array_uset(v_bs_3380_, v_i_3379_, v___x_3383_);
v___x_3385_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3386_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3386_, 0, v_v_3382_);
lean_ctor_set(v___x_3386_, 1, v___x_3385_);
v___x_3387_ = ((size_t)1ULL);
v___x_3388_ = lean_usize_add(v_i_3379_, v___x_3387_);
v___x_3389_ = lean_array_uset(v_bs_x27_3384_, v_i_3379_, v___x_3386_);
v_i_3379_ = v___x_3388_;
v_bs_3380_ = v___x_3389_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3391_, lean_object* v_i_3392_, lean_object* v_bs_3393_){
_start:
{
size_t v_sz_boxed_3394_; size_t v_i_boxed_3395_; lean_object* v_res_3396_; 
v_sz_boxed_3394_ = lean_unbox_usize(v_sz_3391_);
lean_dec(v_sz_3391_);
v_i_boxed_3395_ = lean_unbox_usize(v_i_3392_);
lean_dec(v_i_3392_);
v_res_3396_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_boxed_3394_, v_i_boxed_3395_, v_bs_3393_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(lean_object* v_x_3397_){
_start:
{
if (lean_obj_tag(v_x_3397_) == 0)
{
lean_object* v___x_3398_; 
v___x_3398_ = lean_box(0);
return v___x_3398_;
}
else
{
lean_object* v_val_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3409_; 
v_val_3399_ = lean_ctor_get(v_x_3397_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_x_3397_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3401_ = v_x_3397_;
v_isShared_3402_ = v_isSharedCheck_3409_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_val_3399_);
lean_dec(v_x_3397_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3409_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
size_t v_sz_3403_; size_t v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3407_; 
v_sz_3403_ = lean_array_size(v_val_3399_);
v___x_3404_ = ((size_t)0ULL);
v___x_3405_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_3403_, v___x_3404_, v_val_3399_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set_tag(v___x_3401_, 7);
lean_ctor_set(v___x_3401_, 0, v___x_3405_);
v___x_3407_ = v___x_3401_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(lean_object* v_x_3410_){
_start:
{
if (lean_obj_tag(v_x_3410_) == 0)
{
lean_object* v___x_3411_; 
v___x_3411_ = lean_box(0);
return v___x_3411_;
}
else
{
lean_object* v_val_3412_; lean_object* v_bubbles_3413_; lean_object* v_cancelable_3414_; lean_object* v_composed_3415_; lean_object* v_view_3416_; lean_object* v_detail_3417_; lean_object* v_which_3418_; lean_object* v_ctrlKey_3419_; lean_object* v_shiftKey_3420_; lean_object* v_altKey_3421_; lean_object* v_metaKey_3422_; lean_object* v_modifierAltGraph_3423_; lean_object* v_modifierCapsLock_3424_; lean_object* v_modifierFn_3425_; lean_object* v_modifierFnLock_3426_; lean_object* v_modifierHyper_3427_; lean_object* v_modifierNumLock_3428_; lean_object* v_modifierScrollLock_3429_; lean_object* v_modifierSuper_3430_; lean_object* v_modifierSymbol_3431_; lean_object* v_modifierSymbolLock_3432_; lean_object* v_screenX_3433_; lean_object* v_screenY_3434_; lean_object* v_clientX_3435_; lean_object* v_clientY_3436_; lean_object* v_button_3437_; lean_object* v_buttons_3438_; lean_object* v_relatedTarget_3439_; lean_object* v_pointerId_3440_; lean_object* v_width_3441_; lean_object* v_height_3442_; lean_object* v_pressure_3443_; lean_object* v_tangentialPressure_3444_; lean_object* v_tiltX_3445_; lean_object* v_tiltY_3446_; lean_object* v_twist_3447_; lean_object* v_altitudeAngle_3448_; lean_object* v_azimuthAngle_3449_; lean_object* v_pointerType_3450_; lean_object* v_isPrimary_3451_; lean_object* v_persistentDeviceId_3452_; lean_object* v_coalescedEvents_3453_; lean_object* v_predictedEvents_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v_val_3412_ = lean_ctor_get(v_x_3410_, 0);
lean_inc(v_val_3412_);
lean_dec_ref_known(v_x_3410_, 1);
v_bubbles_3413_ = lean_ctor_get(v_val_3412_, 0);
lean_inc(v_bubbles_3413_);
v_cancelable_3414_ = lean_ctor_get(v_val_3412_, 1);
lean_inc(v_cancelable_3414_);
v_composed_3415_ = lean_ctor_get(v_val_3412_, 2);
lean_inc(v_composed_3415_);
v_view_3416_ = lean_ctor_get(v_val_3412_, 3);
lean_inc(v_view_3416_);
v_detail_3417_ = lean_ctor_get(v_val_3412_, 4);
lean_inc(v_detail_3417_);
v_which_3418_ = lean_ctor_get(v_val_3412_, 5);
lean_inc(v_which_3418_);
v_ctrlKey_3419_ = lean_ctor_get(v_val_3412_, 6);
lean_inc(v_ctrlKey_3419_);
v_shiftKey_3420_ = lean_ctor_get(v_val_3412_, 7);
lean_inc(v_shiftKey_3420_);
v_altKey_3421_ = lean_ctor_get(v_val_3412_, 8);
lean_inc(v_altKey_3421_);
v_metaKey_3422_ = lean_ctor_get(v_val_3412_, 9);
lean_inc(v_metaKey_3422_);
v_modifierAltGraph_3423_ = lean_ctor_get(v_val_3412_, 10);
lean_inc(v_modifierAltGraph_3423_);
v_modifierCapsLock_3424_ = lean_ctor_get(v_val_3412_, 11);
lean_inc(v_modifierCapsLock_3424_);
v_modifierFn_3425_ = lean_ctor_get(v_val_3412_, 12);
lean_inc(v_modifierFn_3425_);
v_modifierFnLock_3426_ = lean_ctor_get(v_val_3412_, 13);
lean_inc(v_modifierFnLock_3426_);
v_modifierHyper_3427_ = lean_ctor_get(v_val_3412_, 14);
lean_inc(v_modifierHyper_3427_);
v_modifierNumLock_3428_ = lean_ctor_get(v_val_3412_, 15);
lean_inc(v_modifierNumLock_3428_);
v_modifierScrollLock_3429_ = lean_ctor_get(v_val_3412_, 16);
lean_inc(v_modifierScrollLock_3429_);
v_modifierSuper_3430_ = lean_ctor_get(v_val_3412_, 17);
lean_inc(v_modifierSuper_3430_);
v_modifierSymbol_3431_ = lean_ctor_get(v_val_3412_, 18);
lean_inc(v_modifierSymbol_3431_);
v_modifierSymbolLock_3432_ = lean_ctor_get(v_val_3412_, 19);
lean_inc(v_modifierSymbolLock_3432_);
v_screenX_3433_ = lean_ctor_get(v_val_3412_, 20);
lean_inc(v_screenX_3433_);
v_screenY_3434_ = lean_ctor_get(v_val_3412_, 21);
lean_inc(v_screenY_3434_);
v_clientX_3435_ = lean_ctor_get(v_val_3412_, 22);
lean_inc(v_clientX_3435_);
v_clientY_3436_ = lean_ctor_get(v_val_3412_, 23);
lean_inc(v_clientY_3436_);
v_button_3437_ = lean_ctor_get(v_val_3412_, 24);
lean_inc(v_button_3437_);
v_buttons_3438_ = lean_ctor_get(v_val_3412_, 25);
lean_inc(v_buttons_3438_);
v_relatedTarget_3439_ = lean_ctor_get(v_val_3412_, 26);
lean_inc(v_relatedTarget_3439_);
v_pointerId_3440_ = lean_ctor_get(v_val_3412_, 27);
lean_inc(v_pointerId_3440_);
v_width_3441_ = lean_ctor_get(v_val_3412_, 28);
lean_inc(v_width_3441_);
v_height_3442_ = lean_ctor_get(v_val_3412_, 29);
lean_inc(v_height_3442_);
v_pressure_3443_ = lean_ctor_get(v_val_3412_, 30);
lean_inc(v_pressure_3443_);
v_tangentialPressure_3444_ = lean_ctor_get(v_val_3412_, 31);
lean_inc(v_tangentialPressure_3444_);
v_tiltX_3445_ = lean_ctor_get(v_val_3412_, 32);
lean_inc(v_tiltX_3445_);
v_tiltY_3446_ = lean_ctor_get(v_val_3412_, 33);
lean_inc(v_tiltY_3446_);
v_twist_3447_ = lean_ctor_get(v_val_3412_, 34);
lean_inc(v_twist_3447_);
v_altitudeAngle_3448_ = lean_ctor_get(v_val_3412_, 35);
lean_inc(v_altitudeAngle_3448_);
v_azimuthAngle_3449_ = lean_ctor_get(v_val_3412_, 36);
lean_inc(v_azimuthAngle_3449_);
v_pointerType_3450_ = lean_ctor_get(v_val_3412_, 37);
lean_inc(v_pointerType_3450_);
v_isPrimary_3451_ = lean_ctor_get(v_val_3412_, 38);
lean_inc(v_isPrimary_3451_);
v_persistentDeviceId_3452_ = lean_ctor_get(v_val_3412_, 39);
lean_inc(v_persistentDeviceId_3452_);
v_coalescedEvents_3453_ = lean_ctor_get(v_val_3412_, 40);
lean_inc(v_coalescedEvents_3453_);
v_predictedEvents_3454_ = lean_ctor_get(v_val_3412_, 41);
lean_inc(v_predictedEvents_3454_);
lean_dec(v_val_3412_);
v___x_3455_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_3456_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_azimuthAngle_3449_);
lean_dec(v_azimuthAngle_3449_);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3455_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_3459_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pointerType_3450_);
v___x_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3458_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
v___x_3461_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_3462_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isPrimary_3451_);
lean_dec(v_isPrimary_3451_);
v___x_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3461_);
lean_ctor_set(v___x_3463_, 1, v___x_3462_);
v___x_3464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_3465_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_persistentDeviceId_3452_);
v___x_3466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3464_);
lean_ctor_set(v___x_3466_, 1, v___x_3465_);
v___x_3467_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4));
v___x_3468_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_coalescedEvents_3453_);
v___x_3469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3467_);
lean_ctor_set(v___x_3469_, 1, v___x_3468_);
v___x_3470_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5));
v___x_3471_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_predictedEvents_3454_);
v___x_3472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3470_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
v___x_3473_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_3474_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_tangentialPressure_3444_);
lean_dec(v_tangentialPressure_3444_);
v___x_3475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3473_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
v___x_3476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_3477_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltX_3445_);
v___x_3478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3476_);
lean_ctor_set(v___x_3478_, 1, v___x_3477_);
v___x_3479_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_3480_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltY_3446_);
v___x_3481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3479_);
lean_ctor_set(v___x_3481_, 1, v___x_3480_);
v___x_3482_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_3483_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_twist_3447_);
v___x_3484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3482_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
v___x_3485_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_3486_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_altitudeAngle_3448_);
lean_dec(v_altitudeAngle_3448_);
v___x_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3485_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3489_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3439_);
lean_dec(v_relatedTarget_3439_);
v___x_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3488_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
v___x_3491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_3492_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_pointerId_3440_);
v___x_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3491_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_3495_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_3441_);
lean_dec(v_width_3441_);
v___x_3496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3494_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_3498_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_3442_);
lean_dec(v_height_3442_);
v___x_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3497_);
lean_ctor_set(v___x_3499_, 1, v___x_3498_);
v___x_3500_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_3501_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_pressure_3443_);
lean_dec(v_pressure_3443_);
v___x_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
v___x_3503_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_3504_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_3434_);
v___x_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3503_);
lean_ctor_set(v___x_3505_, 1, v___x_3504_);
v___x_3506_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_3507_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_3435_);
v___x_3508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3506_);
lean_ctor_set(v___x_3508_, 1, v___x_3507_);
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_3510_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_3436_);
v___x_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3509_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_3513_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_3437_);
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3512_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_3516_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_3438_);
v___x_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3515_);
lean_ctor_set(v___x_3517_, 1, v___x_3516_);
v___x_3518_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_3519_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_3428_);
lean_dec(v_modifierNumLock_3428_);
v___x_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3518_);
lean_ctor_set(v___x_3520_, 1, v___x_3519_);
v___x_3521_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_3522_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_3429_);
lean_dec(v_modifierScrollLock_3429_);
v___x_3523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3521_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_3525_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_3430_);
lean_dec(v_modifierSuper_3430_);
v___x_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3524_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_3528_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_3431_);
lean_dec(v_modifierSymbol_3431_);
v___x_3529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3527_);
lean_ctor_set(v___x_3529_, 1, v___x_3528_);
v___x_3530_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_3531_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_3432_);
lean_dec(v_modifierSymbolLock_3432_);
v___x_3532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3530_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_3534_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_3433_);
v___x_3535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3533_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
v___x_3536_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_3537_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_3423_);
lean_dec(v_modifierAltGraph_3423_);
v___x_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3536_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_3540_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_3424_);
lean_dec(v_modifierCapsLock_3424_);
v___x_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_3543_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_3425_);
lean_dec(v_modifierFn_3425_);
v___x_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3542_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v___x_3545_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_3546_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_3426_);
lean_dec(v_modifierFnLock_3426_);
v___x_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3545_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_3549_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_3427_);
lean_dec(v_modifierHyper_3427_);
v___x_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3548_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
v___x_3551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3552_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3418_);
v___x_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3551_);
lean_ctor_set(v___x_3553_, 1, v___x_3552_);
v___x_3554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_3555_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_3419_);
lean_dec(v_ctrlKey_3419_);
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3554_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
v___x_3557_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_3558_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_3420_);
lean_dec(v_shiftKey_3420_);
v___x_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3557_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
v___x_3560_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_3561_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_3421_);
lean_dec(v_altKey_3421_);
v___x_3562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3560_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_3564_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_3422_);
lean_dec(v_metaKey_3422_);
v___x_3565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3563_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
v___x_3566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3567_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3413_);
lean_dec(v_bubbles_3413_);
v___x_3568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3566_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3570_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3414_);
lean_dec(v_cancelable_3414_);
v___x_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3569_);
lean_ctor_set(v___x_3571_, 1, v___x_3570_);
v___x_3572_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3573_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3415_);
lean_dec(v_composed_3415_);
v___x_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3572_);
lean_ctor_set(v___x_3574_, 1, v___x_3573_);
v___x_3575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3576_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3416_);
lean_dec(v_view_3416_);
v___x_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3575_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3579_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3417_);
v___x_3580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3578_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lean_unsigned_to_nat(42u);
v___x_3582_ = lean_mk_empty_array_with_capacity(v___x_3581_);
v___x_3583_ = lean_array_push(v___x_3582_, v___x_3568_);
v___x_3584_ = lean_array_push(v___x_3583_, v___x_3571_);
v___x_3585_ = lean_array_push(v___x_3584_, v___x_3574_);
v___x_3586_ = lean_array_push(v___x_3585_, v___x_3577_);
v___x_3587_ = lean_array_push(v___x_3586_, v___x_3580_);
v___x_3588_ = lean_array_push(v___x_3587_, v___x_3553_);
v___x_3589_ = lean_array_push(v___x_3588_, v___x_3556_);
v___x_3590_ = lean_array_push(v___x_3589_, v___x_3559_);
v___x_3591_ = lean_array_push(v___x_3590_, v___x_3562_);
v___x_3592_ = lean_array_push(v___x_3591_, v___x_3565_);
v___x_3593_ = lean_array_push(v___x_3592_, v___x_3538_);
v___x_3594_ = lean_array_push(v___x_3593_, v___x_3541_);
v___x_3595_ = lean_array_push(v___x_3594_, v___x_3544_);
v___x_3596_ = lean_array_push(v___x_3595_, v___x_3547_);
v___x_3597_ = lean_array_push(v___x_3596_, v___x_3550_);
v___x_3598_ = lean_array_push(v___x_3597_, v___x_3520_);
v___x_3599_ = lean_array_push(v___x_3598_, v___x_3523_);
v___x_3600_ = lean_array_push(v___x_3599_, v___x_3526_);
v___x_3601_ = lean_array_push(v___x_3600_, v___x_3529_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3532_);
v___x_3603_ = lean_array_push(v___x_3602_, v___x_3535_);
v___x_3604_ = lean_array_push(v___x_3603_, v___x_3505_);
v___x_3605_ = lean_array_push(v___x_3604_, v___x_3508_);
v___x_3606_ = lean_array_push(v___x_3605_, v___x_3511_);
v___x_3607_ = lean_array_push(v___x_3606_, v___x_3514_);
v___x_3608_ = lean_array_push(v___x_3607_, v___x_3517_);
v___x_3609_ = lean_array_push(v___x_3608_, v___x_3490_);
v___x_3610_ = lean_array_push(v___x_3609_, v___x_3493_);
v___x_3611_ = lean_array_push(v___x_3610_, v___x_3496_);
v___x_3612_ = lean_array_push(v___x_3611_, v___x_3499_);
v___x_3613_ = lean_array_push(v___x_3612_, v___x_3502_);
v___x_3614_ = lean_array_push(v___x_3613_, v___x_3475_);
v___x_3615_ = lean_array_push(v___x_3614_, v___x_3478_);
v___x_3616_ = lean_array_push(v___x_3615_, v___x_3481_);
v___x_3617_ = lean_array_push(v___x_3616_, v___x_3484_);
v___x_3618_ = lean_array_push(v___x_3617_, v___x_3487_);
v___x_3619_ = lean_array_push(v___x_3618_, v___x_3457_);
v___x_3620_ = lean_array_push(v___x_3619_, v___x_3460_);
v___x_3621_ = lean_array_push(v___x_3620_, v___x_3463_);
v___x_3622_ = lean_array_push(v___x_3621_, v___x_3466_);
v___x_3623_ = lean_array_push(v___x_3622_, v___x_3469_);
v___x_3624_ = lean_array_push(v___x_3623_, v___x_3472_);
v___x_3625_ = l_Lasm_JS_Web_Support_fields(v___x_3624_);
lean_dec_ref(v___x_3624_);
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(lean_object* v_context_3626_, lean_object* v_d_3627_){
_start:
{
lean_object* v___y_3630_; lean_object* v___y_3631_; 
if (lean_obj_tag(v_d_3627_) == 9)
{
lean_object* v_value_3635_; lean_object* v___x_3636_; 
v_value_3635_ = lean_ctor_get(v_d_3627_, 0);
lean_inc(v_value_3635_);
lean_dec_ref_known(v_d_3627_, 2);
v___x_3636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3636_, 0, v_value_3635_);
return v___x_3636_;
}
else
{
lean_object* v___x_3637_; lean_object* v_received_3639_; 
v___x_3637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_3627_) == 9)
{
lean_object* v_value_3653_; lean_object* v_description_3654_; uint8_t v___x_3655_; 
v_value_3653_ = lean_ctor_get(v_d_3627_, 0);
v_description_3654_ = lean_ctor_get(v_d_3627_, 1);
v___x_3655_ = lean_string_dec_eq(v_description_3654_, v___x_3637_);
if (v___x_3655_ == 0)
{
goto v___jp_3651_;
}
else
{
uint32_t v___x_3656_; uint64_t v___x_3657_; lean_object* v___x_3658_; uint32_t v___x_3659_; lean_object* v___x_3660_; 
lean_inc_n(v_value_3653_, 2);
lean_dec_ref_known(v_d_3627_, 2);
v___x_3656_ = 206;
v___x_3657_ = 0ULL;
v___x_3658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3658_, 0, v_value_3653_);
lean_ctor_set(v___x_3658_, 1, v___x_3637_);
v___x_3659_ = lasm_js_value_handle(v_value_3653_);
lean_dec(v_value_3653_);
v___x_3660_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3656_, v___x_3657_, v___x_3658_, v___x_3659_);
lean_dec_ref_known(v___x_3658_, 2);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; uint8_t v___x_3662_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref_known(v___x_3660_, 1);
v___x_3662_ = lean_string_validate_utf8(v_a_3661_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
lean_dec(v_a_3661_);
v___x_3663_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3664_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3663_);
v_received_3639_ = v___x_3664_;
goto v___jp_3638_;
}
else
{
lean_object* v___x_3665_; 
v___x_3665_ = lean_string_from_utf8_unchecked(v_a_3661_);
v_received_3639_ = v___x_3665_;
goto v___jp_3638_;
}
}
else
{
lean_object* v___x_3666_; 
lean_dec_ref_known(v___x_3660_, 1);
v___x_3666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_3639_ = v___x_3666_;
goto v___jp_3638_;
}
}
}
else
{
goto v___jp_3651_;
}
v___jp_3638_:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; uint8_t v___x_3649_; 
v___x_3640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3641_ = lean_string_append(v___x_3640_, v_context_3626_);
v___x_3642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3643_ = lean_string_append(v___x_3641_, v___x_3642_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPointerEvent___closed__0));
v___x_3645_ = lean_string_append(v___x_3643_, v___x_3644_);
v___x_3646_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3647_ = lean_string_append(v___x_3645_, v___x_3646_);
v___x_3648_ = lean_string_append(v___x_3647_, v_received_3639_);
lean_dec_ref(v_received_3639_);
v___x_3649_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3649_ == 0)
{
lean_object* v___x_3650_; 
v___x_3650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_3630_ = v___x_3648_;
v___y_3631_ = v___x_3650_;
goto v___jp_3629_;
}
else
{
v___y_3630_ = v___x_3648_;
v___y_3631_ = v___x_3637_;
goto v___jp_3629_;
}
}
v___jp_3651_:
{
lean_object* v___x_3652_; 
v___x_3652_ = l_Lasm_JS_Data_describe(v_d_3627_);
v_received_3639_ = v___x_3652_;
goto v___jp_3638_;
}
}
v___jp_3629_:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3632_ = lean_string_append(v___y_3630_, v___y_3631_);
v___x_3633_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3632_);
v___x_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3633_);
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2___boxed(lean_object* v_context_3667_, lean_object* v_d_3668_, lean_object* v_a_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v_context_3667_, v_d_3668_);
lean_dec_ref(v_context_3667_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(lean_object* v_b_3671_, lean_object* v_args_3672_, uint8_t v_await_3673_){
_start:
{
uint64_t v___y_3676_; uint64_t v___y_3677_; uint64_t v___x_3720_; uint64_t v___y_3722_; 
v___x_3720_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3673_ == 0)
{
uint64_t v___x_3727_; 
v___x_3727_ = 0ULL;
v___y_3722_ = v___x_3727_;
goto v___jp_3721_;
}
else
{
uint64_t v___x_3728_; 
v___x_3728_ = 2ULL;
v___y_3722_ = v___x_3728_;
goto v___jp_3721_;
}
v___jp_3675_:
{
uint64_t v_flags_3678_; uint32_t v___x_3679_; lean_object* v___x_3680_; uint32_t v___x_3681_; lean_object* v___x_3682_; 
v_flags_3678_ = lean_uint64_lor(v___y_3676_, v___y_3677_);
v___x_3679_ = 214;
v___x_3680_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3671_, v_args_3672_);
v___x_3681_ = 0;
v___x_3682_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3679_, v_flags_3678_, v___x_3680_, v___x_3681_);
lean_dec(v___x_3680_);
if (lean_obj_tag(v___x_3682_) == 0)
{
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3684_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3682_, 1);
v___x_3684_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3683_);
lean_dec(v_a_3683_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
v___x_3686_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3671_);
v___x_3687_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v___x_3686_, v_a_3685_);
lean_dec_ref(v___x_3686_);
return v___x_3687_;
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
v_a_3688_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3684_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3684_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
v_a_3696_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3682_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3682_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
lean_ctor_set_tag(v___x_3698_, 1);
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3719_; 
v_a_3704_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3706_ = v___x_3682_;
v_isShared_3707_ = v_isSharedCheck_3719_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3682_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3719_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3717_; 
v___x_3708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3709_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3671_);
v___x_3710_ = lean_string_append(v___x_3708_, v___x_3709_);
lean_dec_ref(v___x_3709_);
v___x_3711_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3712_ = lean_string_append(v___x_3710_, v___x_3711_);
v___x_3713_ = lean_io_error_to_string(v_a_3704_);
v___x_3714_ = lean_string_append(v___x_3712_, v___x_3713_);
lean_dec_ref(v___x_3713_);
v___x_3715_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3714_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 0, v___x_3715_);
v___x_3717_ = v___x_3706_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3715_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
}
v___jp_3721_:
{
uint8_t v_construct_3723_; uint64_t v___x_3724_; 
v_construct_3723_ = lean_ctor_get_uint8(v_b_3671_, sizeof(void*)*4);
v___x_3724_ = lean_uint64_lor(v___x_3720_, v___y_3722_);
if (v_construct_3723_ == 0)
{
uint64_t v___x_3725_; 
v___x_3725_ = 0ULL;
v___y_3676_ = v___x_3724_;
v___y_3677_ = v___x_3725_;
goto v___jp_3675_;
}
else
{
uint64_t v___x_3726_; 
v___x_3726_ = 4ULL;
v___y_3676_ = v___x_3724_;
v___y_3677_ = v___x_3726_;
goto v___jp_3675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1___boxed(lean_object* v_b_3729_, lean_object* v_args_3730_, lean_object* v_await_3731_, lean_object* v_a_3732_){
_start:
{
uint8_t v_await_boxed_3733_; lean_object* v_res_3734_; 
v_await_boxed_3733_ = lean_unbox(v_await_3731_);
v_res_3734_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v_b_3729_, v_args_3730_, v_await_boxed_3733_);
lean_dec_ref(v_b_3729_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new(lean_object* v_type_3743_, lean_object* v_eventInitDict_3744_){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; lean_object* v___x_3755_; 
v___x_3746_ = lean_unsigned_to_nat(2u);
v___x_3747_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_new___closed__2));
v___x_3748_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3748_, 0, v_type_3743_);
v___x_3749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(v_eventInitDict_3744_);
v___x_3750_ = lean_mk_empty_array_with_capacity(v___x_3746_);
v___x_3751_ = lean_array_push(v___x_3750_, v___x_3748_);
v___x_3752_ = lean_array_push(v___x_3751_, v___x_3749_);
v___x_3753_ = l_Lasm_JS_Web_Support_args(v___x_3752_);
v___x_3754_ = 0;
v___x_3755_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v___x_3747_, v___x_3753_, v___x_3754_);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new___boxed(lean_object* v_type_3756_, lean_object* v_eventInitDict_3757_, lean_object* v_a_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l_Lasm_JS_Web_PointerEvent_new(v_type_3756_, v_eventInitDict_3757_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId(lean_object* v_self_3760_){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_3763_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3760_, v___x_3762_);
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId___boxed(lean_object* v_self_3764_, lean_object* v_a_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lasm_JS_Web_PointerEvent_pointerId(v_self_3764_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width(lean_object* v_self_3767_){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_3770_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3767_, v___x_3769_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width___boxed(lean_object* v_self_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lasm_JS_Web_PointerEvent_width(v_self_3771_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height(lean_object* v_self_3774_){
_start:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_3777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3774_, v___x_3776_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height___boxed(lean_object* v_self_3778_, lean_object* v_a_3779_){
_start:
{
lean_object* v_res_3780_; 
v_res_3780_ = l_Lasm_JS_Web_PointerEvent_height(v_self_3778_);
return v_res_3780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure(lean_object* v_self_3781_){
_start:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3783_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_3784_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3781_, v___x_3783_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure___boxed(lean_object* v_self_3785_, lean_object* v_a_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Lasm_JS_Web_PointerEvent_pressure(v_self_3785_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure(lean_object* v_self_3788_){
_start:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_3791_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3788_, v___x_3790_);
return v___x_3791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure___boxed(lean_object* v_self_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l_Lasm_JS_Web_PointerEvent_tangentialPressure(v_self_3792_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX(lean_object* v_self_3795_){
_start:
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3797_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_3798_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3795_, v___x_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX___boxed(lean_object* v_self_3799_, lean_object* v_a_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = l_Lasm_JS_Web_PointerEvent_tiltX(v_self_3799_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY(lean_object* v_self_3802_){
_start:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_3805_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3802_, v___x_3804_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY___boxed(lean_object* v_self_3806_, lean_object* v_a_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lasm_JS_Web_PointerEvent_tiltY(v_self_3806_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist(lean_object* v_self_3809_){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_3812_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3809_, v___x_3811_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist___boxed(lean_object* v_self_3813_, lean_object* v_a_3814_){
_start:
{
lean_object* v_res_3815_; 
v_res_3815_ = l_Lasm_JS_Web_PointerEvent_twist(v_self_3813_);
return v_res_3815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle(lean_object* v_self_3816_){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_3819_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3816_, v___x_3818_);
return v___x_3819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle___boxed(lean_object* v_self_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lasm_JS_Web_PointerEvent_altitudeAngle(v_self_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle(lean_object* v_self_3823_){
_start:
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_3826_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3823_, v___x_3825_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle___boxed(lean_object* v_self_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lasm_JS_Web_PointerEvent_azimuthAngle(v_self_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType(lean_object* v_self_3830_){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_3833_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3830_, v___x_3832_);
return v___x_3833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType___boxed(lean_object* v_self_3834_, lean_object* v_a_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lasm_JS_Web_PointerEvent_pointerType(v_self_3834_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary(lean_object* v_self_3837_){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_3840_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3837_, v___x_3839_);
return v___x_3840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary___boxed(lean_object* v_self_3841_, lean_object* v_a_3842_){
_start:
{
lean_object* v_res_3843_; 
v_res_3843_ = l_Lasm_JS_Web_PointerEvent_isPrimary(v_self_3841_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId(lean_object* v_self_3844_){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___x_3846_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_3847_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3844_, v___x_3846_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId___boxed(lean_object* v_self_3848_, lean_object* v_a_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l_Lasm_JS_Web_PointerEvent_persistentDeviceId(v_self_3848_);
return v_res_3850_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(uint8_t v_await_3851_, uint64_t v_extra_3852_){
_start:
{
uint64_t v___x_3853_; uint64_t v___y_3855_; 
v___x_3853_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3851_ == 0)
{
uint64_t v___x_3858_; 
v___x_3858_ = 0ULL;
v___y_3855_ = v___x_3858_;
goto v___jp_3854_;
}
else
{
uint64_t v___x_3859_; 
v___x_3859_ = 2ULL;
v___y_3855_ = v___x_3859_;
goto v___jp_3854_;
}
v___jp_3854_:
{
uint64_t v___x_3856_; uint64_t v___x_3857_; 
v___x_3856_ = lean_uint64_lor(v___x_3853_, v___y_3855_);
v___x_3857_ = lean_uint64_lor(v___x_3856_, v_extra_3852_);
return v___x_3857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0___boxed(lean_object* v_await_3860_, lean_object* v_extra_3861_){
_start:
{
uint8_t v_await_boxed_3862_; uint64_t v_extra_boxed_3863_; uint64_t v_res_3864_; lean_object* v_r_3865_; 
v_await_boxed_3862_ = lean_unbox(v_await_3860_);
v_extra_boxed_3863_ = lean_unbox_uint64(v_extra_3861_);
lean_dec_ref(v_extra_3861_);
v_res_3864_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v_await_boxed_3862_, v_extra_boxed_3863_);
v_r_3865_ = lean_box_uint64(v_res_3864_);
return v_r_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(size_t v_sz_3868_, size_t v_i_3869_, lean_object* v_bs_3870_){
_start:
{
uint8_t v___x_3871_; 
v___x_3871_ = lean_usize_dec_lt(v_i_3869_, v_sz_3868_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; 
v___x_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_bs_3870_);
return v___x_3872_;
}
else
{
lean_object* v_v_3873_; 
v_v_3873_ = lean_array_uget_borrowed(v_bs_3870_, v_i_3869_);
if (lean_obj_tag(v_v_3873_) == 9)
{
lean_object* v_value_3874_; lean_object* v___x_3875_; lean_object* v_bs_x27_3876_; size_t v___x_3877_; size_t v___x_3878_; lean_object* v___x_3879_; 
v_value_3874_ = lean_ctor_get(v_v_3873_, 0);
lean_inc(v_value_3874_);
v___x_3875_ = lean_unsigned_to_nat(0u);
v_bs_x27_3876_ = lean_array_uset(v_bs_3870_, v_i_3869_, v___x_3875_);
v___x_3877_ = ((size_t)1ULL);
v___x_3878_ = lean_usize_add(v_i_3869_, v___x_3877_);
v___x_3879_ = lean_array_uset(v_bs_x27_3876_, v_i_3869_, v_value_3874_);
v_i_3869_ = v___x_3878_;
v_bs_3870_ = v___x_3879_;
goto _start;
}
else
{
lean_object* v___x_3881_; 
lean_dec_ref(v_bs_3870_);
v___x_3881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3881_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_3882_, lean_object* v_i_3883_, lean_object* v_bs_3884_){
_start:
{
size_t v_sz_boxed_3885_; size_t v_i_boxed_3886_; lean_object* v_res_3887_; 
v_sz_boxed_3885_ = lean_unbox_usize(v_sz_3882_);
lean_dec(v_sz_3882_);
v_i_boxed_3886_ = lean_unbox_usize(v_i_3883_);
lean_dec(v_i_3883_);
v_res_3887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_3885_, v_i_boxed_3886_, v_bs_3884_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(lean_object* v_context_3892_, lean_object* v_d_3893_){
_start:
{
lean_object* v___y_3896_; lean_object* v___y_3897_; lean_object* v___y_3902_; lean_object* v_received_3903_; lean_object* v___y_3922_; lean_object* v_a_3925_; 
if (lean_obj_tag(v_d_3893_) == 7)
{
lean_object* v_items_3949_; size_t v_sz_3950_; size_t v___x_3951_; lean_object* v___x_3952_; 
v_items_3949_ = lean_ctor_get(v_d_3893_, 0);
v_sz_3950_ = lean_array_size(v_items_3949_);
v___x_3951_ = ((size_t)0ULL);
lean_inc_ref(v_items_3949_);
v___x_3952_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_3950_, v___x_3951_, v_items_3949_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; uint8_t v___x_3957_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___x_3952_, 1);
v___x_3954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3));
v___x_3955_ = lean_string_utf8_byte_size(v_a_3953_);
v___x_3956_ = lean_unsigned_to_nat(0u);
v___x_3957_ = lean_nat_dec_eq(v___x_3955_, v___x_3956_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3959_ = lean_string_append(v___x_3958_, v_a_3953_);
lean_dec(v_a_3953_);
v___x_3960_ = lean_string_append(v___x_3954_, v___x_3959_);
lean_dec_ref(v___x_3959_);
v_a_3925_ = v___x_3960_;
goto v___jp_3924_;
}
else
{
lean_dec(v_a_3953_);
v_a_3925_ = v___x_3954_;
goto v___jp_3924_;
}
}
else
{
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3961_; 
v_a_3961_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3961_);
lean_dec_ref_known(v___x_3952_, 1);
v_a_3925_ = v_a_3961_;
goto v___jp_3924_;
}
else
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3969_; 
lean_dec_ref_known(v_d_3893_, 1);
v_a_3962_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3964_ = v___x_3952_;
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v___x_3952_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
lean_ctor_set_tag(v___x_3964_, 0);
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
}
}
else
{
lean_object* v___x_3970_; 
v___x_3970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v_a_3925_ = v___x_3970_;
goto v___jp_3924_;
}
v___jp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3898_ = lean_string_append(v___y_3896_, v___y_3897_);
lean_dec_ref(v___y_3897_);
v___x_3899_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
v___x_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
return v___x_3900_;
}
v___jp_3901_:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; 
v___x_3904_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3905_ = lean_string_append(v___x_3904_, v_context_3892_);
v___x_3906_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3907_ = lean_string_append(v___x_3905_, v___x_3906_);
v___x_3908_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0));
v___x_3909_ = lean_string_append(v___x_3907_, v___x_3908_);
v___x_3910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3911_ = lean_string_append(v___x_3909_, v___x_3910_);
v___x_3912_ = lean_string_append(v___x_3911_, v_received_3903_);
lean_dec_ref(v_received_3903_);
v___x_3913_ = lean_string_utf8_byte_size(v___y_3902_);
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = lean_nat_dec_eq(v___x_3913_, v___x_3914_);
if (v___x_3915_ == 0)
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
v___x_3916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1));
v___x_3917_ = lean_string_append(v___x_3916_, v___y_3902_);
lean_dec_ref(v___y_3902_);
v___x_3918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2));
v___x_3919_ = lean_string_append(v___x_3917_, v___x_3918_);
v___y_3896_ = v___x_3912_;
v___y_3897_ = v___x_3919_;
goto v___jp_3895_;
}
else
{
lean_object* v___x_3920_; 
lean_dec_ref(v___y_3902_);
v___x_3920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___y_3896_ = v___x_3912_;
v___y_3897_ = v___x_3920_;
goto v___jp_3895_;
}
}
v___jp_3921_:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lasm_JS_Data_describe(v_d_3893_);
v___y_3902_ = v___y_3922_;
v_received_3903_ = v___x_3923_;
goto v___jp_3901_;
}
v___jp_3924_:
{
if (lean_obj_tag(v_d_3893_) == 9)
{
lean_object* v_value_3926_; lean_object* v_description_3927_; lean_object* v___x_3928_; uint8_t v___x_3929_; 
v_value_3926_ = lean_ctor_get(v_d_3893_, 0);
v_description_3927_ = lean_ctor_get(v_d_3893_, 1);
v___x_3928_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3929_ = lean_string_dec_eq(v_description_3927_, v___x_3928_);
if (v___x_3929_ == 0)
{
v___y_3922_ = v_a_3925_;
goto v___jp_3921_;
}
else
{
lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3946_; 
lean_inc(v_value_3926_);
v_isSharedCheck_3946_ = !lean_is_exclusive(v_d_3893_);
if (v_isSharedCheck_3946_ == 0)
{
lean_object* v_unused_3947_; lean_object* v_unused_3948_; 
v_unused_3947_ = lean_ctor_get(v_d_3893_, 1);
lean_dec(v_unused_3947_);
v_unused_3948_ = lean_ctor_get(v_d_3893_, 0);
lean_dec(v_unused_3948_);
v___x_3931_ = v_d_3893_;
v_isShared_3932_ = v_isSharedCheck_3946_;
goto v_resetjp_3930_;
}
else
{
lean_dec(v_d_3893_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3946_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
uint32_t v___x_3933_; uint64_t v___x_3934_; lean_object* v___x_3936_; 
v___x_3933_ = 206;
v___x_3934_ = 0ULL;
lean_inc(v_value_3926_);
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 1, v___x_3928_);
v___x_3936_ = v___x_3931_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_value_3926_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v___x_3928_);
v___x_3936_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
uint32_t v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = lasm_js_value_handle(v_value_3926_);
lean_dec(v_value_3926_);
v___x_3938_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3933_, v___x_3934_, v___x_3936_, v___x_3937_);
lean_dec_ref(v___x_3936_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; uint8_t v___x_3940_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref_known(v___x_3938_, 1);
v___x_3940_ = lean_string_validate_utf8(v_a_3939_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; lean_object* v___x_3942_; 
lean_dec(v_a_3939_);
v___x_3941_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3942_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3941_);
v___y_3902_ = v_a_3925_;
v_received_3903_ = v___x_3942_;
goto v___jp_3901_;
}
else
{
lean_object* v___x_3943_; 
v___x_3943_ = lean_string_from_utf8_unchecked(v_a_3939_);
v___y_3902_ = v_a_3925_;
v_received_3903_ = v___x_3943_;
goto v___jp_3901_;
}
}
else
{
lean_object* v___x_3944_; 
lean_dec_ref_known(v___x_3938_, 1);
v___x_3944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v___y_3902_ = v_a_3925_;
v_received_3903_ = v___x_3944_;
goto v___jp_3901_;
}
}
}
}
}
else
{
v___y_3922_ = v_a_3925_;
goto v___jp_3921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3971_, lean_object* v_d_3972_, lean_object* v_a_3973_){
_start:
{
lean_object* v_res_3974_; 
v_res_3974_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_3971_, v_d_3972_);
lean_dec_ref(v_context_3971_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(lean_object* v_context_3975_, lean_object* v_bytes_3976_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3976_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_3975_, v_a_3979_);
return v___x_3980_;
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
v_a_3981_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3978_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3978_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1___boxed(lean_object* v_context_3989_, lean_object* v_bytes_3990_, lean_object* v_a_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v_context_3989_, v_bytes_3990_);
lean_dec_ref(v_bytes_3990_);
lean_dec_ref(v_context_3989_);
return v_res_3992_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3993_; uint8_t v___x_3994_; uint64_t v___x_3995_; 
v___x_3993_ = 8ULL;
v___x_3994_ = 0;
v___x_3995_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v___x_3994_, v___x_3993_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(lean_object* v_o_3997_, lean_object* v_name_3998_, lean_object* v_args_3999_){
_start:
{
lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; uint64_t v___x_4004_; lean_object* v___x_4005_; 
v___x_4001_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4002_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4002_, 0, v_o_3997_);
lean_ctor_set(v___x_4002_, 1, v___x_4001_);
lean_inc_ref(v_name_3998_);
v___x_4003_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4003_, 0, v_name_3998_);
v___x_4004_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0);
v___x_4005_ = l_Lasm_JS_Value_invokeRaw(v___x_4002_, v___x_4003_, v_args_3999_, v___x_4004_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_a_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v_a_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v___x_4005_, 1);
v___x_4007_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1));
v___x_4008_ = lean_string_append(v___x_4007_, v_name_3998_);
lean_dec_ref(v_name_3998_);
v___x_4009_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v___x_4008_, v_a_4006_);
lean_dec(v_a_4006_);
lean_dec_ref(v___x_4008_);
return v___x_4009_;
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec_ref(v_name_3998_);
v_a_4010_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_4005_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_4005_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___boxed(lean_object* v_o_4018_, lean_object* v_name_4019_, lean_object* v_args_4020_, lean_object* v_a_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_o_4018_, v_name_4019_, v_args_4020_);
return v_res_4022_;
}
}
static lean_object* _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2(void){
_start:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; 
v___x_4026_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1));
v___x_4027_ = l_Lasm_JS_Web_Support_args(v___x_4026_);
return v___x_4027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(lean_object* v_self_4028_){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0));
v___x_4031_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_4032_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_4028_, v___x_4030_, v___x_4031_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___boxed(lean_object* v_self_4033_, lean_object* v_a_4034_){
_start:
{
lean_object* v_res_4035_; 
v_res_4035_ = l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(v_self_4033_);
return v_res_4035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents(lean_object* v_self_4037_){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0));
v___x_4040_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_4041_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_4037_, v___x_4039_, v___x_4040_);
return v___x_4041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents___boxed(lean_object* v_self_4042_, lean_object* v_a_4043_){
_start:
{
lean_object* v_res_4044_; 
v_res_4044_ = l_Lasm_JS_Web_PointerEvent_getPredictedEvents(v_self_4042_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(lean_object* v_context_4045_, lean_object* v_d_4046_){
_start:
{
lean_object* v___y_4049_; lean_object* v___y_4050_; 
if (lean_obj_tag(v_d_4046_) == 9)
{
lean_object* v_value_4054_; lean_object* v___x_4055_; 
v_value_4054_ = lean_ctor_get(v_d_4046_, 0);
lean_inc(v_value_4054_);
lean_dec_ref_known(v_d_4046_, 2);
v___x_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4055_, 0, v_value_4054_);
return v___x_4055_;
}
else
{
lean_object* v___x_4056_; lean_object* v_received_4058_; 
v___x_4056_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4046_) == 9)
{
lean_object* v_value_4072_; lean_object* v_description_4073_; uint8_t v___x_4074_; 
v_value_4072_ = lean_ctor_get(v_d_4046_, 0);
v_description_4073_ = lean_ctor_get(v_d_4046_, 1);
v___x_4074_ = lean_string_dec_eq(v_description_4073_, v___x_4056_);
if (v___x_4074_ == 0)
{
goto v___jp_4070_;
}
else
{
uint32_t v___x_4075_; uint64_t v___x_4076_; lean_object* v___x_4077_; uint32_t v___x_4078_; lean_object* v___x_4079_; 
lean_inc_n(v_value_4072_, 2);
lean_dec_ref_known(v_d_4046_, 2);
v___x_4075_ = 206;
v___x_4076_ = 0ULL;
v___x_4077_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4077_, 0, v_value_4072_);
lean_ctor_set(v___x_4077_, 1, v___x_4056_);
v___x_4078_ = lasm_js_value_handle(v_value_4072_);
lean_dec(v_value_4072_);
v___x_4079_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4075_, v___x_4076_, v___x_4077_, v___x_4078_);
lean_dec_ref_known(v___x_4077_, 2);
if (lean_obj_tag(v___x_4079_) == 0)
{
lean_object* v_a_4080_; uint8_t v___x_4081_; 
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
lean_inc(v_a_4080_);
lean_dec_ref_known(v___x_4079_, 1);
v___x_4081_ = lean_string_validate_utf8(v_a_4080_);
if (v___x_4081_ == 0)
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_dec(v_a_4080_);
v___x_4082_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4083_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4082_);
v_received_4058_ = v___x_4083_;
goto v___jp_4057_;
}
else
{
lean_object* v___x_4084_; 
v___x_4084_ = lean_string_from_utf8_unchecked(v_a_4080_);
v_received_4058_ = v___x_4084_;
goto v___jp_4057_;
}
}
else
{
lean_object* v___x_4085_; 
lean_dec_ref_known(v___x_4079_, 1);
v___x_4085_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4058_ = v___x_4085_;
goto v___jp_4057_;
}
}
}
else
{
goto v___jp_4070_;
}
v___jp_4057_:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; 
v___x_4059_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4060_ = lean_string_append(v___x_4059_, v_context_4045_);
v___x_4061_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4062_ = lean_string_append(v___x_4060_, v___x_4061_);
v___x_4063_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0));
v___x_4064_ = lean_string_append(v___x_4062_, v___x_4063_);
v___x_4065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4066_ = lean_string_append(v___x_4064_, v___x_4065_);
v___x_4067_ = lean_string_append(v___x_4066_, v_received_4058_);
lean_dec_ref(v_received_4058_);
v___x_4068_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4068_ == 0)
{
lean_object* v___x_4069_; 
v___x_4069_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4049_ = v___x_4067_;
v___y_4050_ = v___x_4069_;
goto v___jp_4048_;
}
else
{
v___y_4049_ = v___x_4067_;
v___y_4050_ = v___x_4056_;
goto v___jp_4048_;
}
}
v___jp_4070_:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lasm_JS_Data_describe(v_d_4046_);
v_received_4058_ = v___x_4071_;
goto v___jp_4057_;
}
}
v___jp_4048_:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4051_ = lean_string_append(v___y_4049_, v___y_4050_);
v___x_4052_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4051_);
v___x_4053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4053_, 0, v___x_4052_);
return v___x_4053_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4086_, lean_object* v_d_4087_, lean_object* v_a_4088_){
_start:
{
lean_object* v_res_4089_; 
v_res_4089_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v_context_4086_, v_d_4087_);
lean_dec_ref(v_context_4086_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(lean_object* v_b_4090_, lean_object* v_args_4091_, uint8_t v_await_4092_){
_start:
{
uint64_t v___y_4095_; uint64_t v___y_4096_; uint64_t v___x_4139_; uint64_t v___y_4141_; 
v___x_4139_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4092_ == 0)
{
uint64_t v___x_4146_; 
v___x_4146_ = 0ULL;
v___y_4141_ = v___x_4146_;
goto v___jp_4140_;
}
else
{
uint64_t v___x_4147_; 
v___x_4147_ = 2ULL;
v___y_4141_ = v___x_4147_;
goto v___jp_4140_;
}
v___jp_4094_:
{
uint64_t v_flags_4097_; uint32_t v___x_4098_; lean_object* v___x_4099_; uint32_t v___x_4100_; lean_object* v___x_4101_; 
v_flags_4097_ = lean_uint64_lor(v___y_4095_, v___y_4096_);
v___x_4098_ = 214;
v___x_4099_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4090_, v_args_4091_);
v___x_4100_ = 0;
v___x_4101_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4098_, v_flags_4097_, v___x_4099_, v___x_4100_);
lean_dec(v___x_4099_);
if (lean_obj_tag(v___x_4101_) == 0)
{
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v_a_4102_; lean_object* v___x_4103_; 
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
lean_inc(v_a_4102_);
lean_dec_ref_known(v___x_4101_, 1);
v___x_4103_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4102_);
lean_dec(v_a_4102_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___x_4103_, 1);
v___x_4105_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4090_);
v___x_4106_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v___x_4105_, v_a_4104_);
lean_dec_ref(v___x_4105_);
return v___x_4106_;
}
else
{
lean_object* v_a_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4114_; 
v_a_4107_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4114_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4109_ = v___x_4103_;
v_isShared_4110_ = v_isSharedCheck_4114_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_a_4107_);
lean_dec(v___x_4103_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4114_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v___x_4112_; 
if (v_isShared_4110_ == 0)
{
v___x_4112_ = v___x_4109_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v_a_4107_);
v___x_4112_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
return v___x_4112_;
}
}
}
}
else
{
lean_object* v_a_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4122_; 
v_a_4115_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4117_ = v___x_4101_;
v_isShared_4118_ = v_isSharedCheck_4122_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_a_4115_);
lean_dec(v___x_4101_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4122_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v___x_4120_; 
if (v_isShared_4118_ == 0)
{
lean_ctor_set_tag(v___x_4117_, 1);
v___x_4120_ = v___x_4117_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_a_4115_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
}
}
else
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4138_; 
v_a_4123_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4125_ = v___x_4101_;
v_isShared_4126_ = v_isSharedCheck_4138_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4101_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4138_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4136_; 
v___x_4127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4128_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4090_);
v___x_4129_ = lean_string_append(v___x_4127_, v___x_4128_);
lean_dec_ref(v___x_4128_);
v___x_4130_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4131_ = lean_string_append(v___x_4129_, v___x_4130_);
v___x_4132_ = lean_io_error_to_string(v_a_4123_);
v___x_4133_ = lean_string_append(v___x_4131_, v___x_4132_);
lean_dec_ref(v___x_4132_);
v___x_4134_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4133_);
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 0, v___x_4134_);
v___x_4136_ = v___x_4125_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v___x_4134_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
v___jp_4140_:
{
uint8_t v_construct_4142_; uint64_t v___x_4143_; 
v_construct_4142_ = lean_ctor_get_uint8(v_b_4090_, sizeof(void*)*4);
v___x_4143_ = lean_uint64_lor(v___x_4139_, v___y_4141_);
if (v_construct_4142_ == 0)
{
uint64_t v___x_4144_; 
v___x_4144_ = 0ULL;
v___y_4095_ = v___x_4143_;
v___y_4096_ = v___x_4144_;
goto v___jp_4094_;
}
else
{
uint64_t v___x_4145_; 
v___x_4145_ = 4ULL;
v___y_4095_ = v___x_4143_;
v___y_4096_ = v___x_4145_;
goto v___jp_4094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1___boxed(lean_object* v_b_4148_, lean_object* v_args_4149_, lean_object* v_await_4150_, lean_object* v_a_4151_){
_start:
{
uint8_t v_await_boxed_4152_; lean_object* v_res_4153_; 
v_await_boxed_4152_ = lean_unbox(v_await_4150_);
v_res_4153_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v_b_4148_, v_args_4149_, v_await_boxed_4152_);
lean_dec_ref(v_b_4148_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(lean_object* v_x_4154_){
_start:
{
if (lean_obj_tag(v_x_4154_) == 0)
{
lean_object* v___x_4155_; 
v___x_4155_ = lean_box(0);
return v___x_4155_;
}
else
{
lean_object* v_val_4156_; lean_object* v_bubbles_4157_; lean_object* v_cancelable_4158_; lean_object* v_composed_4159_; lean_object* v_submitter_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v_val_4156_ = lean_ctor_get(v_x_4154_, 0);
v_bubbles_4157_ = lean_ctor_get(v_val_4156_, 0);
v_cancelable_4158_ = lean_ctor_get(v_val_4156_, 1);
v_composed_4159_ = lean_ctor_get(v_val_4156_, 2);
v_submitter_4160_ = lean_ctor_get(v_val_4156_, 3);
v___x_4161_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4162_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4157_);
v___x_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4161_);
lean_ctor_set(v___x_4163_, 1, v___x_4162_);
v___x_4164_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4165_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4158_);
v___x_4166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4164_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
v___x_4167_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4168_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4159_);
v___x_4169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4167_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
v___x_4170_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4171_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HTMLElement_showPopover_spec__0_spec__0(v_submitter_4160_);
v___x_4172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4170_);
lean_ctor_set(v___x_4172_, 1, v___x_4171_);
v___x_4173_ = lean_unsigned_to_nat(4u);
v___x_4174_ = lean_mk_empty_array_with_capacity(v___x_4173_);
v___x_4175_ = lean_array_push(v___x_4174_, v___x_4163_);
v___x_4176_ = lean_array_push(v___x_4175_, v___x_4166_);
v___x_4177_ = lean_array_push(v___x_4176_, v___x_4169_);
v___x_4178_ = lean_array_push(v___x_4177_, v___x_4172_);
v___x_4179_ = l_Lasm_JS_Web_Support_fields(v___x_4178_);
lean_dec_ref(v___x_4178_);
return v___x_4179_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0___boxed(lean_object* v_x_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_x_4180_);
lean_dec(v_x_4180_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new(lean_object* v_type_4190_, lean_object* v_eventInitDict_4191_){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; uint8_t v___x_4201_; lean_object* v___x_4202_; 
v___x_4193_ = lean_unsigned_to_nat(2u);
v___x_4194_ = ((lean_object*)(l_Lasm_JS_Web_SubmitEvent_new___closed__2));
v___x_4195_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4195_, 0, v_type_4190_);
v___x_4196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_eventInitDict_4191_);
v___x_4197_ = lean_mk_empty_array_with_capacity(v___x_4193_);
v___x_4198_ = lean_array_push(v___x_4197_, v___x_4195_);
v___x_4199_ = lean_array_push(v___x_4198_, v___x_4196_);
v___x_4200_ = l_Lasm_JS_Web_Support_args(v___x_4199_);
v___x_4201_ = 0;
v___x_4202_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v___x_4194_, v___x_4200_, v___x_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new___boxed(lean_object* v_type_4203_, lean_object* v_eventInitDict_4204_, lean_object* v_a_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Lasm_JS_Web_SubmitEvent_new(v_type_4203_, v_eventInitDict_4204_);
lean_dec(v_eventInitDict_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter(lean_object* v_self_4207_){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4210_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_body_spec__0(v_self_4207_, v___x_4209_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter___boxed(lean_object* v_self_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = l_Lasm_JS_Web_SubmitEvent_submitter(v_self_4211_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(lean_object* v_x_4214_){
_start:
{
if (lean_obj_tag(v_x_4214_) == 0)
{
lean_object* v___x_4215_; 
v___x_4215_ = lean_box(0);
return v___x_4215_;
}
else
{
lean_object* v_val_4216_; lean_object* v_bubbles_4217_; lean_object* v_cancelable_4218_; lean_object* v_composed_4219_; lean_object* v_oldURL_4220_; lean_object* v_newURL_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v_val_4216_ = lean_ctor_get(v_x_4214_, 0);
lean_inc(v_val_4216_);
lean_dec_ref_known(v_x_4214_, 1);
v_bubbles_4217_ = lean_ctor_get(v_val_4216_, 0);
lean_inc(v_bubbles_4217_);
v_cancelable_4218_ = lean_ctor_get(v_val_4216_, 1);
lean_inc(v_cancelable_4218_);
v_composed_4219_ = lean_ctor_get(v_val_4216_, 2);
lean_inc(v_composed_4219_);
v_oldURL_4220_ = lean_ctor_get(v_val_4216_, 3);
lean_inc(v_oldURL_4220_);
v_newURL_4221_ = lean_ctor_get(v_val_4216_, 4);
lean_inc(v_newURL_4221_);
lean_dec(v_val_4216_);
v___x_4222_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4223_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4217_);
lean_dec(v_bubbles_4217_);
v___x_4224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4222_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
v___x_4225_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4226_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4218_);
lean_dec(v_cancelable_4218_);
v___x_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4225_);
lean_ctor_set(v___x_4227_, 1, v___x_4226_);
v___x_4228_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4229_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4219_);
lean_dec(v_composed_4219_);
v___x_4230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4228_);
lean_ctor_set(v___x_4230_, 1, v___x_4229_);
v___x_4231_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4232_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldURL_4220_);
v___x_4233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4231_);
lean_ctor_set(v___x_4233_, 1, v___x_4232_);
v___x_4234_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4235_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newURL_4221_);
v___x_4236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4234_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
v___x_4237_ = lean_unsigned_to_nat(5u);
v___x_4238_ = lean_mk_empty_array_with_capacity(v___x_4237_);
v___x_4239_ = lean_array_push(v___x_4238_, v___x_4224_);
v___x_4240_ = lean_array_push(v___x_4239_, v___x_4227_);
v___x_4241_ = lean_array_push(v___x_4240_, v___x_4230_);
v___x_4242_ = lean_array_push(v___x_4241_, v___x_4233_);
v___x_4243_ = lean_array_push(v___x_4242_, v___x_4236_);
v___x_4244_ = l_Lasm_JS_Web_Support_fields(v___x_4243_);
lean_dec_ref(v___x_4243_);
return v___x_4244_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(lean_object* v_context_4245_, lean_object* v_d_4246_){
_start:
{
lean_object* v___y_4249_; lean_object* v___y_4250_; 
if (lean_obj_tag(v_d_4246_) == 9)
{
lean_object* v_value_4254_; lean_object* v___x_4255_; 
v_value_4254_ = lean_ctor_get(v_d_4246_, 0);
lean_inc(v_value_4254_);
lean_dec_ref_known(v_d_4246_, 2);
v___x_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4255_, 0, v_value_4254_);
return v___x_4255_;
}
else
{
lean_object* v___x_4256_; lean_object* v_received_4258_; 
v___x_4256_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4246_) == 9)
{
lean_object* v_value_4272_; lean_object* v_description_4273_; uint8_t v___x_4274_; 
v_value_4272_ = lean_ctor_get(v_d_4246_, 0);
v_description_4273_ = lean_ctor_get(v_d_4246_, 1);
v___x_4274_ = lean_string_dec_eq(v_description_4273_, v___x_4256_);
if (v___x_4274_ == 0)
{
goto v___jp_4270_;
}
else
{
uint32_t v___x_4275_; uint64_t v___x_4276_; lean_object* v___x_4277_; uint32_t v___x_4278_; lean_object* v___x_4279_; 
lean_inc_n(v_value_4272_, 2);
lean_dec_ref_known(v_d_4246_, 2);
v___x_4275_ = 206;
v___x_4276_ = 0ULL;
v___x_4277_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4277_, 0, v_value_4272_);
lean_ctor_set(v___x_4277_, 1, v___x_4256_);
v___x_4278_ = lasm_js_value_handle(v_value_4272_);
lean_dec(v_value_4272_);
v___x_4279_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4275_, v___x_4276_, v___x_4277_, v___x_4278_);
lean_dec_ref_known(v___x_4277_, 2);
if (lean_obj_tag(v___x_4279_) == 0)
{
lean_object* v_a_4280_; uint8_t v___x_4281_; 
v_a_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_a_4280_);
lean_dec_ref_known(v___x_4279_, 1);
v___x_4281_ = lean_string_validate_utf8(v_a_4280_);
if (v___x_4281_ == 0)
{
lean_object* v___x_4282_; lean_object* v___x_4283_; 
lean_dec(v_a_4280_);
v___x_4282_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4283_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4282_);
v_received_4258_ = v___x_4283_;
goto v___jp_4257_;
}
else
{
lean_object* v___x_4284_; 
v___x_4284_ = lean_string_from_utf8_unchecked(v_a_4280_);
v_received_4258_ = v___x_4284_;
goto v___jp_4257_;
}
}
else
{
lean_object* v___x_4285_; 
lean_dec_ref_known(v___x_4279_, 1);
v___x_4285_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4258_ = v___x_4285_;
goto v___jp_4257_;
}
}
}
else
{
goto v___jp_4270_;
}
v___jp_4257_:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; 
v___x_4259_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4260_ = lean_string_append(v___x_4259_, v_context_4245_);
v___x_4261_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4262_ = lean_string_append(v___x_4260_, v___x_4261_);
v___x_4263_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0));
v___x_4264_ = lean_string_append(v___x_4262_, v___x_4263_);
v___x_4265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4266_ = lean_string_append(v___x_4264_, v___x_4265_);
v___x_4267_ = lean_string_append(v___x_4266_, v_received_4258_);
lean_dec_ref(v_received_4258_);
v___x_4268_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4268_ == 0)
{
lean_object* v___x_4269_; 
v___x_4269_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4249_ = v___x_4267_;
v___y_4250_ = v___x_4269_;
goto v___jp_4248_;
}
else
{
v___y_4249_ = v___x_4267_;
v___y_4250_ = v___x_4256_;
goto v___jp_4248_;
}
}
v___jp_4270_:
{
lean_object* v___x_4271_; 
v___x_4271_ = l_Lasm_JS_Data_describe(v_d_4246_);
v_received_4258_ = v___x_4271_;
goto v___jp_4257_;
}
}
v___jp_4248_:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4251_ = lean_string_append(v___y_4249_, v___y_4250_);
v___x_4252_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4251_);
v___x_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4252_);
return v___x_4253_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4286_, lean_object* v_d_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v_context_4286_, v_d_4287_);
lean_dec_ref(v_context_4286_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(lean_object* v_b_4290_, lean_object* v_args_4291_, uint8_t v_await_4292_){
_start:
{
uint64_t v___y_4295_; uint64_t v___y_4296_; uint64_t v___x_4339_; uint64_t v___y_4341_; 
v___x_4339_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4292_ == 0)
{
uint64_t v___x_4346_; 
v___x_4346_ = 0ULL;
v___y_4341_ = v___x_4346_;
goto v___jp_4340_;
}
else
{
uint64_t v___x_4347_; 
v___x_4347_ = 2ULL;
v___y_4341_ = v___x_4347_;
goto v___jp_4340_;
}
v___jp_4294_:
{
uint64_t v_flags_4297_; uint32_t v___x_4298_; lean_object* v___x_4299_; uint32_t v___x_4300_; lean_object* v___x_4301_; 
v_flags_4297_ = lean_uint64_lor(v___y_4295_, v___y_4296_);
v___x_4298_ = 214;
v___x_4299_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4290_, v_args_4291_);
v___x_4300_ = 0;
v___x_4301_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4298_, v_flags_4297_, v___x_4299_, v___x_4300_);
lean_dec(v___x_4299_);
if (lean_obj_tag(v___x_4301_) == 0)
{
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4303_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v___x_4301_, 1);
v___x_4303_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4302_);
lean_dec(v_a_4302_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v_a_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
lean_inc(v_a_4304_);
lean_dec_ref_known(v___x_4303_, 1);
v___x_4305_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4290_);
v___x_4306_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v___x_4305_, v_a_4304_);
lean_dec_ref(v___x_4305_);
return v___x_4306_;
}
else
{
lean_object* v_a_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4314_; 
v_a_4307_ = lean_ctor_get(v___x_4303_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4309_ = v___x_4303_;
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_a_4307_);
lean_dec(v___x_4303_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4312_; 
if (v_isShared_4310_ == 0)
{
v___x_4312_ = v___x_4309_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v_a_4307_);
v___x_4312_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
return v___x_4312_;
}
}
}
}
else
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
v_a_4315_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4301_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4301_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
lean_ctor_set_tag(v___x_4317_, 1);
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
else
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4338_; 
v_a_4323_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4325_ = v___x_4301_;
v_isShared_4326_ = v_isSharedCheck_4338_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4301_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4338_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4336_; 
v___x_4327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4290_);
v___x_4329_ = lean_string_append(v___x_4327_, v___x_4328_);
lean_dec_ref(v___x_4328_);
v___x_4330_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4331_ = lean_string_append(v___x_4329_, v___x_4330_);
v___x_4332_ = lean_io_error_to_string(v_a_4323_);
v___x_4333_ = lean_string_append(v___x_4331_, v___x_4332_);
lean_dec_ref(v___x_4332_);
v___x_4334_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4333_);
if (v_isShared_4326_ == 0)
{
lean_ctor_set(v___x_4325_, 0, v___x_4334_);
v___x_4336_ = v___x_4325_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
v___jp_4340_:
{
uint8_t v_construct_4342_; uint64_t v___x_4343_; 
v_construct_4342_ = lean_ctor_get_uint8(v_b_4290_, sizeof(void*)*4);
v___x_4343_ = lean_uint64_lor(v___x_4339_, v___y_4341_);
if (v_construct_4342_ == 0)
{
uint64_t v___x_4344_; 
v___x_4344_ = 0ULL;
v___y_4295_ = v___x_4343_;
v___y_4296_ = v___x_4344_;
goto v___jp_4294_;
}
else
{
uint64_t v___x_4345_; 
v___x_4345_ = 4ULL;
v___y_4295_ = v___x_4343_;
v___y_4296_ = v___x_4345_;
goto v___jp_4294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1___boxed(lean_object* v_b_4348_, lean_object* v_args_4349_, lean_object* v_await_4350_, lean_object* v_a_4351_){
_start:
{
uint8_t v_await_boxed_4352_; lean_object* v_res_4353_; 
v_await_boxed_4352_ = lean_unbox(v_await_4350_);
v_res_4353_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v_b_4348_, v_args_4349_, v_await_boxed_4352_);
lean_dec_ref(v_b_4348_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new(lean_object* v_type_4362_, lean_object* v_eventInitDict_4363_){
_start:
{
lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; lean_object* v___x_4374_; 
v___x_4365_ = lean_unsigned_to_nat(2u);
v___x_4366_ = ((lean_object*)(l_Lasm_JS_Web_HashChangeEvent_new___closed__2));
v___x_4367_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4367_, 0, v_type_4362_);
v___x_4368_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(v_eventInitDict_4363_);
v___x_4369_ = lean_mk_empty_array_with_capacity(v___x_4365_);
v___x_4370_ = lean_array_push(v___x_4369_, v___x_4367_);
v___x_4371_ = lean_array_push(v___x_4370_, v___x_4368_);
v___x_4372_ = l_Lasm_JS_Web_Support_args(v___x_4371_);
v___x_4373_ = 0;
v___x_4374_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v___x_4366_, v___x_4372_, v___x_4373_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new___boxed(lean_object* v_type_4375_, lean_object* v_eventInitDict_4376_, lean_object* v_a_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Lasm_JS_Web_HashChangeEvent_new(v_type_4375_, v_eventInitDict_4376_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL(lean_object* v_self_4379_){
_start:
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
v___x_4381_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4382_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4379_, v___x_4381_);
return v___x_4382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL___boxed(lean_object* v_self_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l_Lasm_JS_Web_HashChangeEvent_oldURL(v_self_4383_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL(lean_object* v_self_4386_){
_start:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4388_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4389_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4386_, v___x_4388_);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL___boxed(lean_object* v_self_4390_, lean_object* v_a_4391_){
_start:
{
lean_object* v_res_4392_; 
v_res_4392_ = l_Lasm_JS_Web_HashChangeEvent_newURL(v_self_4390_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(lean_object* v_context_4393_, lean_object* v_d_4394_){
_start:
{
lean_object* v___y_4397_; lean_object* v___y_4398_; 
if (lean_obj_tag(v_d_4394_) == 9)
{
lean_object* v_value_4402_; lean_object* v___x_4403_; 
v_value_4402_ = lean_ctor_get(v_d_4394_, 0);
lean_inc(v_value_4402_);
lean_dec_ref_known(v_d_4394_, 2);
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v_value_4402_);
return v___x_4403_;
}
else
{
lean_object* v___x_4404_; lean_object* v_received_4406_; 
v___x_4404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4394_) == 9)
{
lean_object* v_value_4420_; lean_object* v_description_4421_; uint8_t v___x_4422_; 
v_value_4420_ = lean_ctor_get(v_d_4394_, 0);
v_description_4421_ = lean_ctor_get(v_d_4394_, 1);
v___x_4422_ = lean_string_dec_eq(v_description_4421_, v___x_4404_);
if (v___x_4422_ == 0)
{
goto v___jp_4418_;
}
else
{
uint32_t v___x_4423_; uint64_t v___x_4424_; lean_object* v___x_4425_; uint32_t v___x_4426_; lean_object* v___x_4427_; 
lean_inc_n(v_value_4420_, 2);
lean_dec_ref_known(v_d_4394_, 2);
v___x_4423_ = 206;
v___x_4424_ = 0ULL;
v___x_4425_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4425_, 0, v_value_4420_);
lean_ctor_set(v___x_4425_, 1, v___x_4404_);
v___x_4426_ = lasm_js_value_handle(v_value_4420_);
lean_dec(v_value_4420_);
v___x_4427_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4423_, v___x_4424_, v___x_4425_, v___x_4426_);
lean_dec_ref_known(v___x_4425_, 2);
if (lean_obj_tag(v___x_4427_) == 0)
{
lean_object* v_a_4428_; uint8_t v___x_4429_; 
v_a_4428_ = lean_ctor_get(v___x_4427_, 0);
lean_inc(v_a_4428_);
lean_dec_ref_known(v___x_4427_, 1);
v___x_4429_ = lean_string_validate_utf8(v_a_4428_);
if (v___x_4429_ == 0)
{
lean_object* v___x_4430_; lean_object* v___x_4431_; 
lean_dec(v_a_4428_);
v___x_4430_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4431_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4430_);
v_received_4406_ = v___x_4431_;
goto v___jp_4405_;
}
else
{
lean_object* v___x_4432_; 
v___x_4432_ = lean_string_from_utf8_unchecked(v_a_4428_);
v_received_4406_ = v___x_4432_;
goto v___jp_4405_;
}
}
else
{
lean_object* v___x_4433_; 
lean_dec_ref_known(v___x_4427_, 1);
v___x_4433_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4406_ = v___x_4433_;
goto v___jp_4405_;
}
}
}
else
{
goto v___jp_4418_;
}
v___jp_4405_:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; uint8_t v___x_4416_; 
v___x_4407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4408_ = lean_string_append(v___x_4407_, v_context_4393_);
v___x_4409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4410_ = lean_string_append(v___x_4408_, v___x_4409_);
v___x_4411_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0));
v___x_4412_ = lean_string_append(v___x_4410_, v___x_4411_);
v___x_4413_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4414_ = lean_string_append(v___x_4412_, v___x_4413_);
v___x_4415_ = lean_string_append(v___x_4414_, v_received_4406_);
lean_dec_ref(v_received_4406_);
v___x_4416_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4416_ == 0)
{
lean_object* v___x_4417_; 
v___x_4417_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4397_ = v___x_4415_;
v___y_4398_ = v___x_4417_;
goto v___jp_4396_;
}
else
{
v___y_4397_ = v___x_4415_;
v___y_4398_ = v___x_4404_;
goto v___jp_4396_;
}
}
v___jp_4418_:
{
lean_object* v___x_4419_; 
v___x_4419_ = l_Lasm_JS_Data_describe(v_d_4394_);
v_received_4406_ = v___x_4419_;
goto v___jp_4405_;
}
}
v___jp_4396_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4399_ = lean_string_append(v___y_4397_, v___y_4398_);
v___x_4400_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4399_);
v___x_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4400_);
return v___x_4401_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4434_, lean_object* v_d_4435_, lean_object* v_a_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v_context_4434_, v_d_4435_);
lean_dec_ref(v_context_4434_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(lean_object* v_b_4438_, lean_object* v_args_4439_, uint8_t v_await_4440_){
_start:
{
uint64_t v___y_4443_; uint64_t v___y_4444_; uint64_t v___x_4487_; uint64_t v___y_4489_; 
v___x_4487_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4440_ == 0)
{
uint64_t v___x_4494_; 
v___x_4494_ = 0ULL;
v___y_4489_ = v___x_4494_;
goto v___jp_4488_;
}
else
{
uint64_t v___x_4495_; 
v___x_4495_ = 2ULL;
v___y_4489_ = v___x_4495_;
goto v___jp_4488_;
}
v___jp_4442_:
{
uint64_t v_flags_4445_; uint32_t v___x_4446_; lean_object* v___x_4447_; uint32_t v___x_4448_; lean_object* v___x_4449_; 
v_flags_4445_ = lean_uint64_lor(v___y_4443_, v___y_4444_);
v___x_4446_ = 214;
v___x_4447_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4438_, v_args_4439_);
v___x_4448_ = 0;
v___x_4449_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4446_, v_flags_4445_, v___x_4447_, v___x_4448_);
lean_dec(v___x_4447_);
if (lean_obj_tag(v___x_4449_) == 0)
{
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_object* v_a_4450_; lean_object* v___x_4451_; 
v_a_4450_ = lean_ctor_get(v___x_4449_, 0);
lean_inc(v_a_4450_);
lean_dec_ref_known(v___x_4449_, 1);
v___x_4451_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4450_);
lean_dec(v_a_4450_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v_a_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v_a_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_a_4452_);
lean_dec_ref_known(v___x_4451_, 1);
v___x_4453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4438_);
v___x_4454_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v___x_4453_, v_a_4452_);
lean_dec_ref(v___x_4453_);
return v___x_4454_;
}
else
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4462_; 
v_a_4455_ = lean_ctor_get(v___x_4451_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4451_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4457_ = v___x_4451_;
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v___x_4451_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
v_a_4463_ = lean_ctor_get(v___x_4449_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4449_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4449_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
lean_ctor_set_tag(v___x_4465_, 1);
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
else
{
lean_object* v_a_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4486_; 
v_a_4471_ = lean_ctor_get(v___x_4449_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4473_ = v___x_4449_;
v_isShared_4474_ = v_isSharedCheck_4486_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_a_4471_);
lean_dec(v___x_4449_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4486_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4484_; 
v___x_4475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4476_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4438_);
v___x_4477_ = lean_string_append(v___x_4475_, v___x_4476_);
lean_dec_ref(v___x_4476_);
v___x_4478_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4479_ = lean_string_append(v___x_4477_, v___x_4478_);
v___x_4480_ = lean_io_error_to_string(v_a_4471_);
v___x_4481_ = lean_string_append(v___x_4479_, v___x_4480_);
lean_dec_ref(v___x_4480_);
v___x_4482_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4481_);
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 0, v___x_4482_);
v___x_4484_ = v___x_4473_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v___x_4482_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
}
v___jp_4488_:
{
uint8_t v_construct_4490_; uint64_t v___x_4491_; 
v_construct_4490_ = lean_ctor_get_uint8(v_b_4438_, sizeof(void*)*4);
v___x_4491_ = lean_uint64_lor(v___x_4487_, v___y_4489_);
if (v_construct_4490_ == 0)
{
uint64_t v___x_4492_; 
v___x_4492_ = 0ULL;
v___y_4443_ = v___x_4491_;
v___y_4444_ = v___x_4492_;
goto v___jp_4442_;
}
else
{
uint64_t v___x_4493_; 
v___x_4493_ = 4ULL;
v___y_4443_ = v___x_4491_;
v___y_4444_ = v___x_4493_;
goto v___jp_4442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1___boxed(lean_object* v_b_4496_, lean_object* v_args_4497_, lean_object* v_await_4498_, lean_object* v_a_4499_){
_start:
{
uint8_t v_await_boxed_4500_; lean_object* v_res_4501_; 
v_await_boxed_4500_ = lean_unbox(v_await_4498_);
v_res_4501_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v_b_4496_, v_args_4497_, v_await_boxed_4500_);
lean_dec_ref(v_b_4496_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(lean_object* v_x_4502_){
_start:
{
if (lean_obj_tag(v_x_4502_) == 0)
{
lean_object* v___x_4503_; 
v___x_4503_ = lean_box(0);
return v___x_4503_;
}
else
{
lean_object* v_val_4504_; lean_object* v_bubbles_4505_; lean_object* v_cancelable_4506_; lean_object* v_composed_4507_; lean_object* v_state_4508_; lean_object* v_hasUAVisualTransition_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v_val_4504_ = lean_ctor_get(v_x_4502_, 0);
v_bubbles_4505_ = lean_ctor_get(v_val_4504_, 0);
v_cancelable_4506_ = lean_ctor_get(v_val_4504_, 1);
v_composed_4507_ = lean_ctor_get(v_val_4504_, 2);
v_state_4508_ = lean_ctor_get(v_val_4504_, 3);
v_hasUAVisualTransition_4509_ = lean_ctor_get(v_val_4504_, 4);
v___x_4510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4511_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4505_);
v___x_4512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4510_);
lean_ctor_set(v___x_4512_, 1, v___x_4511_);
v___x_4513_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4514_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4506_);
v___x_4515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4513_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4517_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4507_);
v___x_4518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
lean_inc(v_state_4508_);
v___x_4520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4519_);
lean_ctor_set(v___x_4520_, 1, v_state_4508_);
v___x_4521_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4522_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_hasUAVisualTransition_4509_);
v___x_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4521_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
v___x_4524_ = lean_unsigned_to_nat(5u);
v___x_4525_ = lean_mk_empty_array_with_capacity(v___x_4524_);
v___x_4526_ = lean_array_push(v___x_4525_, v___x_4512_);
v___x_4527_ = lean_array_push(v___x_4526_, v___x_4515_);
v___x_4528_ = lean_array_push(v___x_4527_, v___x_4518_);
v___x_4529_ = lean_array_push(v___x_4528_, v___x_4520_);
v___x_4530_ = lean_array_push(v___x_4529_, v___x_4523_);
v___x_4531_ = l_Lasm_JS_Web_Support_fields(v___x_4530_);
lean_dec_ref(v___x_4530_);
return v___x_4531_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0___boxed(lean_object* v_x_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_x_4532_);
lean_dec(v_x_4532_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new(lean_object* v_type_4542_, lean_object* v_eventInitDict_4543_){
_start:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; uint8_t v___x_4553_; lean_object* v___x_4554_; 
v___x_4545_ = lean_unsigned_to_nat(2u);
v___x_4546_ = ((lean_object*)(l_Lasm_JS_Web_PopStateEvent_new___closed__2));
v___x_4547_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4547_, 0, v_type_4542_);
v___x_4548_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_eventInitDict_4543_);
v___x_4549_ = lean_mk_empty_array_with_capacity(v___x_4545_);
v___x_4550_ = lean_array_push(v___x_4549_, v___x_4547_);
v___x_4551_ = lean_array_push(v___x_4550_, v___x_4548_);
v___x_4552_ = l_Lasm_JS_Web_Support_args(v___x_4551_);
v___x_4553_ = 0;
v___x_4554_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v___x_4546_, v___x_4552_, v___x_4553_);
return v___x_4554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new___boxed(lean_object* v_type_4555_, lean_object* v_eventInitDict_4556_, lean_object* v_a_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Lasm_JS_Web_PopStateEvent_new(v_type_4555_, v_eventInitDict_4556_);
lean_dec(v_eventInitDict_4556_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state(lean_object* v_self_4559_){
_start:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4561_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
v___x_4562_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4559_, v___x_4561_);
return v___x_4562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state___boxed(lean_object* v_self_4563_, lean_object* v_a_4564_){
_start:
{
lean_object* v_res_4565_; 
v_res_4565_ = l_Lasm_JS_Web_PopStateEvent_state(v_self_4563_);
return v_res_4565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(lean_object* v_self_4566_){
_start:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4568_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4569_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4566_, v___x_4568_);
return v___x_4569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition___boxed(lean_object* v_self_4570_, lean_object* v_a_4571_){
_start:
{
lean_object* v_res_4572_; 
v_res_4572_ = l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(v_self_4570_);
return v_res_4572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(lean_object* v_x_4573_){
_start:
{
if (lean_obj_tag(v_x_4573_) == 0)
{
lean_object* v___x_4574_; 
v___x_4574_ = lean_box(0);
return v___x_4574_;
}
else
{
lean_object* v_val_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v_val_4575_ = lean_ctor_get(v_x_4573_, 0);
v___x_4576_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_4575_);
v___x_4577_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4577_, 0, v_val_4575_);
lean_ctor_set(v___x_4577_, 1, v___x_4576_);
return v___x_4577_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0___boxed(lean_object* v_x_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_x_4578_);
lean_dec(v_x_4578_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(lean_object* v_x_4580_){
_start:
{
if (lean_obj_tag(v_x_4580_) == 0)
{
lean_object* v___x_4581_; 
v___x_4581_ = lean_box(0);
return v___x_4581_;
}
else
{
lean_object* v_val_4582_; lean_object* v_bubbles_4583_; lean_object* v_cancelable_4584_; lean_object* v_composed_4585_; lean_object* v_key_4586_; lean_object* v_oldValue_4587_; lean_object* v_newValue_4588_; lean_object* v_url_4589_; lean_object* v_storageArea_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; 
v_val_4582_ = lean_ctor_get(v_x_4580_, 0);
lean_inc(v_val_4582_);
lean_dec_ref_known(v_x_4580_, 1);
v_bubbles_4583_ = lean_ctor_get(v_val_4582_, 0);
lean_inc(v_bubbles_4583_);
v_cancelable_4584_ = lean_ctor_get(v_val_4582_, 1);
lean_inc(v_cancelable_4584_);
v_composed_4585_ = lean_ctor_get(v_val_4582_, 2);
lean_inc(v_composed_4585_);
v_key_4586_ = lean_ctor_get(v_val_4582_, 3);
lean_inc(v_key_4586_);
v_oldValue_4587_ = lean_ctor_get(v_val_4582_, 4);
lean_inc(v_oldValue_4587_);
v_newValue_4588_ = lean_ctor_get(v_val_4582_, 5);
lean_inc(v_newValue_4588_);
v_url_4589_ = lean_ctor_get(v_val_4582_, 6);
lean_inc(v_url_4589_);
v_storageArea_4590_ = lean_ctor_get(v_val_4582_, 7);
lean_inc(v_storageArea_4590_);
lean_dec(v_val_4582_);
v___x_4591_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4592_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4583_);
lean_dec(v_bubbles_4583_);
v___x_4593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4591_);
lean_ctor_set(v___x_4593_, 1, v___x_4592_);
v___x_4594_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4595_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4584_);
lean_dec(v_cancelable_4584_);
v___x_4596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4594_);
lean_ctor_set(v___x_4596_, 1, v___x_4595_);
v___x_4597_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4598_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4585_);
lean_dec(v_composed_4585_);
v___x_4599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4597_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_4601_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_4586_);
v___x_4602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4600_);
lean_ctor_set(v___x_4602_, 1, v___x_4601_);
v___x_4603_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_4604_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_4587_);
v___x_4605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4603_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_4607_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_4588_);
v___x_4608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4606_);
lean_ctor_set(v___x_4608_, 1, v___x_4607_);
v___x_4609_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_4610_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_4589_);
v___x_4611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4609_);
lean_ctor_set(v___x_4611_, 1, v___x_4610_);
v___x_4612_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_4613_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_4590_);
lean_dec(v_storageArea_4590_);
v___x_4614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4612_);
lean_ctor_set(v___x_4614_, 1, v___x_4613_);
v___x_4615_ = lean_unsigned_to_nat(8u);
v___x_4616_ = lean_mk_empty_array_with_capacity(v___x_4615_);
v___x_4617_ = lean_array_push(v___x_4616_, v___x_4593_);
v___x_4618_ = lean_array_push(v___x_4617_, v___x_4596_);
v___x_4619_ = lean_array_push(v___x_4618_, v___x_4599_);
v___x_4620_ = lean_array_push(v___x_4619_, v___x_4602_);
v___x_4621_ = lean_array_push(v___x_4620_, v___x_4605_);
v___x_4622_ = lean_array_push(v___x_4621_, v___x_4608_);
v___x_4623_ = lean_array_push(v___x_4622_, v___x_4611_);
v___x_4624_ = lean_array_push(v___x_4623_, v___x_4614_);
v___x_4625_ = l_Lasm_JS_Web_Support_fields(v___x_4624_);
lean_dec_ref(v___x_4624_);
return v___x_4625_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(lean_object* v_context_4626_, lean_object* v_d_4627_){
_start:
{
lean_object* v___y_4630_; lean_object* v___y_4631_; 
if (lean_obj_tag(v_d_4627_) == 9)
{
lean_object* v_value_4635_; lean_object* v___x_4636_; 
v_value_4635_ = lean_ctor_get(v_d_4627_, 0);
lean_inc(v_value_4635_);
lean_dec_ref_known(v_d_4627_, 2);
v___x_4636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4636_, 0, v_value_4635_);
return v___x_4636_;
}
else
{
lean_object* v___x_4637_; lean_object* v_received_4639_; 
v___x_4637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4627_) == 9)
{
lean_object* v_value_4653_; lean_object* v_description_4654_; uint8_t v___x_4655_; 
v_value_4653_ = lean_ctor_get(v_d_4627_, 0);
v_description_4654_ = lean_ctor_get(v_d_4627_, 1);
v___x_4655_ = lean_string_dec_eq(v_description_4654_, v___x_4637_);
if (v___x_4655_ == 0)
{
goto v___jp_4651_;
}
else
{
uint32_t v___x_4656_; uint64_t v___x_4657_; lean_object* v___x_4658_; uint32_t v___x_4659_; lean_object* v___x_4660_; 
lean_inc_n(v_value_4653_, 2);
lean_dec_ref_known(v_d_4627_, 2);
v___x_4656_ = 206;
v___x_4657_ = 0ULL;
v___x_4658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4658_, 0, v_value_4653_);
lean_ctor_set(v___x_4658_, 1, v___x_4637_);
v___x_4659_ = lasm_js_value_handle(v_value_4653_);
lean_dec(v_value_4653_);
v___x_4660_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4656_, v___x_4657_, v___x_4658_, v___x_4659_);
lean_dec_ref_known(v___x_4658_, 2);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; uint8_t v___x_4662_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref_known(v___x_4660_, 1);
v___x_4662_ = lean_string_validate_utf8(v_a_4661_);
if (v___x_4662_ == 0)
{
lean_object* v___x_4663_; lean_object* v___x_4664_; 
lean_dec(v_a_4661_);
v___x_4663_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4664_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4663_);
v_received_4639_ = v___x_4664_;
goto v___jp_4638_;
}
else
{
lean_object* v___x_4665_; 
v___x_4665_ = lean_string_from_utf8_unchecked(v_a_4661_);
v_received_4639_ = v___x_4665_;
goto v___jp_4638_;
}
}
else
{
lean_object* v___x_4666_; 
lean_dec_ref_known(v___x_4660_, 1);
v___x_4666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4639_ = v___x_4666_;
goto v___jp_4638_;
}
}
}
else
{
goto v___jp_4651_;
}
v___jp_4638_:
{
lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; uint8_t v___x_4649_; 
v___x_4640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4641_ = lean_string_append(v___x_4640_, v_context_4626_);
v___x_4642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4643_ = lean_string_append(v___x_4641_, v___x_4642_);
v___x_4644_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSStorageEvent___closed__0));
v___x_4645_ = lean_string_append(v___x_4643_, v___x_4644_);
v___x_4646_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4647_ = lean_string_append(v___x_4645_, v___x_4646_);
v___x_4648_ = lean_string_append(v___x_4647_, v_received_4639_);
lean_dec_ref(v_received_4639_);
v___x_4649_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4649_ == 0)
{
lean_object* v___x_4650_; 
v___x_4650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4630_ = v___x_4648_;
v___y_4631_ = v___x_4650_;
goto v___jp_4629_;
}
else
{
v___y_4630_ = v___x_4648_;
v___y_4631_ = v___x_4637_;
goto v___jp_4629_;
}
}
v___jp_4651_:
{
lean_object* v___x_4652_; 
v___x_4652_ = l_Lasm_JS_Data_describe(v_d_4627_);
v_received_4639_ = v___x_4652_;
goto v___jp_4638_;
}
}
v___jp_4629_:
{
lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4632_ = lean_string_append(v___y_4630_, v___y_4631_);
v___x_4633_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4633_, 0, v___x_4632_);
v___x_4634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4633_);
return v___x_4634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2___boxed(lean_object* v_context_4667_, lean_object* v_d_4668_, lean_object* v_a_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v_context_4667_, v_d_4668_);
lean_dec_ref(v_context_4667_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(lean_object* v_b_4671_, lean_object* v_args_4672_, uint8_t v_await_4673_){
_start:
{
uint64_t v___y_4676_; uint64_t v___y_4677_; uint64_t v___x_4720_; uint64_t v___y_4722_; 
v___x_4720_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4673_ == 0)
{
uint64_t v___x_4727_; 
v___x_4727_ = 0ULL;
v___y_4722_ = v___x_4727_;
goto v___jp_4721_;
}
else
{
uint64_t v___x_4728_; 
v___x_4728_ = 2ULL;
v___y_4722_ = v___x_4728_;
goto v___jp_4721_;
}
v___jp_4675_:
{
uint64_t v_flags_4678_; uint32_t v___x_4679_; lean_object* v___x_4680_; uint32_t v___x_4681_; lean_object* v___x_4682_; 
v_flags_4678_ = lean_uint64_lor(v___y_4676_, v___y_4677_);
v___x_4679_ = 214;
v___x_4680_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4671_, v_args_4672_);
v___x_4681_ = 0;
v___x_4682_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4679_, v_flags_4678_, v___x_4680_, v___x_4681_);
lean_dec(v___x_4680_);
if (lean_obj_tag(v___x_4682_) == 0)
{
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4684_; 
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
lean_inc(v_a_4683_);
lean_dec_ref_known(v___x_4682_, 1);
v___x_4684_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4683_);
lean_dec(v_a_4683_);
if (lean_obj_tag(v___x_4684_) == 0)
{
lean_object* v_a_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
lean_inc(v_a_4685_);
lean_dec_ref_known(v___x_4684_, 1);
v___x_4686_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4671_);
v___x_4687_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v___x_4686_, v_a_4685_);
lean_dec_ref(v___x_4686_);
return v___x_4687_;
}
else
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
v_a_4688_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4684_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4684_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
v_a_4696_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4682_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4682_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
lean_ctor_set_tag(v___x_4698_, 1);
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
else
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4719_; 
v_a_4704_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4706_ = v___x_4682_;
v_isShared_4707_ = v_isSharedCheck_4719_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4682_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4719_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4717_; 
v___x_4708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4709_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4671_);
v___x_4710_ = lean_string_append(v___x_4708_, v___x_4709_);
lean_dec_ref(v___x_4709_);
v___x_4711_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4712_ = lean_string_append(v___x_4710_, v___x_4711_);
v___x_4713_ = lean_io_error_to_string(v_a_4704_);
v___x_4714_ = lean_string_append(v___x_4712_, v___x_4713_);
lean_dec_ref(v___x_4713_);
v___x_4715_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
if (v_isShared_4707_ == 0)
{
lean_ctor_set(v___x_4706_, 0, v___x_4715_);
v___x_4717_ = v___x_4706_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v___x_4715_);
v___x_4717_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
return v___x_4717_;
}
}
}
}
v___jp_4721_:
{
uint8_t v_construct_4723_; uint64_t v___x_4724_; 
v_construct_4723_ = lean_ctor_get_uint8(v_b_4671_, sizeof(void*)*4);
v___x_4724_ = lean_uint64_lor(v___x_4720_, v___y_4722_);
if (v_construct_4723_ == 0)
{
uint64_t v___x_4725_; 
v___x_4725_ = 0ULL;
v___y_4676_ = v___x_4724_;
v___y_4677_ = v___x_4725_;
goto v___jp_4675_;
}
else
{
uint64_t v___x_4726_; 
v___x_4726_ = 4ULL;
v___y_4676_ = v___x_4724_;
v___y_4677_ = v___x_4726_;
goto v___jp_4675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1___boxed(lean_object* v_b_4729_, lean_object* v_args_4730_, lean_object* v_await_4731_, lean_object* v_a_4732_){
_start:
{
uint8_t v_await_boxed_4733_; lean_object* v_res_4734_; 
v_await_boxed_4733_ = lean_unbox(v_await_4731_);
v_res_4734_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v_b_4729_, v_args_4730_, v_await_boxed_4733_);
lean_dec_ref(v_b_4729_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new(lean_object* v_type_4743_, lean_object* v_eventInitDict_4744_){
_start:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; uint8_t v___x_4754_; lean_object* v___x_4755_; 
v___x_4746_ = lean_unsigned_to_nat(2u);
v___x_4747_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_new___closed__2));
v___x_4748_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4748_, 0, v_type_4743_);
v___x_4749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(v_eventInitDict_4744_);
v___x_4750_ = lean_mk_empty_array_with_capacity(v___x_4746_);
v___x_4751_ = lean_array_push(v___x_4750_, v___x_4748_);
v___x_4752_ = lean_array_push(v___x_4751_, v___x_4749_);
v___x_4753_ = l_Lasm_JS_Web_Support_args(v___x_4752_);
v___x_4754_ = 0;
v___x_4755_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v___x_4747_, v___x_4753_, v___x_4754_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new___boxed(lean_object* v_type_4756_, lean_object* v_eventInitDict_4757_, lean_object* v_a_4758_){
_start:
{
lean_object* v_res_4759_; 
v_res_4759_ = l_Lasm_JS_Web_StorageEvent_new(v_type_4756_, v_eventInitDict_4757_);
return v_res_4759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key(lean_object* v_self_4760_){
_start:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4762_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_4763_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4760_, v___x_4762_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key___boxed(lean_object* v_self_4764_, lean_object* v_a_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l_Lasm_JS_Web_StorageEvent_key(v_self_4764_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue(lean_object* v_self_4767_){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_4770_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4767_, v___x_4769_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue___boxed(lean_object* v_self_4771_, lean_object* v_a_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lasm_JS_Web_StorageEvent_oldValue(v_self_4771_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue(lean_object* v_self_4774_){
_start:
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_4777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4774_, v___x_4776_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue___boxed(lean_object* v_self_4778_, lean_object* v_a_4779_){
_start:
{
lean_object* v_res_4780_; 
v_res_4780_ = l_Lasm_JS_Web_StorageEvent_newValue(v_self_4778_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url(lean_object* v_self_4781_){
_start:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; 
v___x_4783_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_4784_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4781_, v___x_4783_);
return v___x_4784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url___boxed(lean_object* v_self_4785_, lean_object* v_a_4786_){
_start:
{
lean_object* v_res_4787_; 
v_res_4787_ = l_Lasm_JS_Web_StorageEvent_url(v_self_4785_);
return v_res_4787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(lean_object* v_context_4789_, lean_object* v_d_4790_){
_start:
{
lean_object* v___y_4796_; lean_object* v___y_4797_; 
switch(lean_obj_tag(v_d_4790_))
{
case 1:
{
goto v___jp_4792_;
}
case 0:
{
goto v___jp_4792_;
}
default: 
{
if (lean_obj_tag(v_d_4790_) == 9)
{
lean_object* v_value_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; 
v_value_4801_ = lean_ctor_get(v_d_4790_, 0);
lean_inc(v_value_4801_);
lean_dec_ref_known(v_d_4790_, 2);
v___x_4802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4802_, 0, v_value_4801_);
v___x_4803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4803_, 0, v___x_4802_);
return v___x_4803_;
}
else
{
lean_object* v___x_4804_; lean_object* v_received_4806_; 
v___x_4804_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4790_) == 9)
{
lean_object* v_value_4820_; lean_object* v_description_4821_; uint8_t v___x_4822_; 
v_value_4820_ = lean_ctor_get(v_d_4790_, 0);
v_description_4821_ = lean_ctor_get(v_d_4790_, 1);
v___x_4822_ = lean_string_dec_eq(v_description_4821_, v___x_4804_);
if (v___x_4822_ == 0)
{
goto v___jp_4818_;
}
else
{
uint32_t v___x_4823_; uint64_t v___x_4824_; lean_object* v___x_4825_; uint32_t v___x_4826_; lean_object* v___x_4827_; 
lean_inc_n(v_value_4820_, 2);
lean_dec_ref_known(v_d_4790_, 2);
v___x_4823_ = 206;
v___x_4824_ = 0ULL;
v___x_4825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4825_, 0, v_value_4820_);
lean_ctor_set(v___x_4825_, 1, v___x_4804_);
v___x_4826_ = lasm_js_value_handle(v_value_4820_);
lean_dec(v_value_4820_);
v___x_4827_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4823_, v___x_4824_, v___x_4825_, v___x_4826_);
lean_dec_ref_known(v___x_4825_, 2);
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; uint8_t v___x_4829_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4828_);
lean_dec_ref_known(v___x_4827_, 1);
v___x_4829_ = lean_string_validate_utf8(v_a_4828_);
if (v___x_4829_ == 0)
{
lean_object* v___x_4830_; lean_object* v___x_4831_; 
lean_dec(v_a_4828_);
v___x_4830_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4831_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4830_);
v_received_4806_ = v___x_4831_;
goto v___jp_4805_;
}
else
{
lean_object* v___x_4832_; 
v___x_4832_ = lean_string_from_utf8_unchecked(v_a_4828_);
v_received_4806_ = v___x_4832_;
goto v___jp_4805_;
}
}
else
{
lean_object* v___x_4833_; 
lean_dec_ref_known(v___x_4827_, 1);
v___x_4833_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4806_ = v___x_4833_;
goto v___jp_4805_;
}
}
}
else
{
goto v___jp_4818_;
}
v___jp_4805_:
{
lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; uint8_t v___x_4816_; 
v___x_4807_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4808_ = lean_string_append(v___x_4807_, v_context_4789_);
v___x_4809_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4810_ = lean_string_append(v___x_4808_, v___x_4809_);
v___x_4811_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0));
v___x_4812_ = lean_string_append(v___x_4810_, v___x_4811_);
v___x_4813_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4814_ = lean_string_append(v___x_4812_, v___x_4813_);
v___x_4815_ = lean_string_append(v___x_4814_, v_received_4806_);
lean_dec_ref(v_received_4806_);
v___x_4816_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4816_ == 0)
{
lean_object* v___x_4817_; 
v___x_4817_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4796_ = v___x_4815_;
v___y_4797_ = v___x_4817_;
goto v___jp_4795_;
}
else
{
v___y_4796_ = v___x_4815_;
v___y_4797_ = v___x_4804_;
goto v___jp_4795_;
}
}
v___jp_4818_:
{
lean_object* v___x_4819_; 
v___x_4819_ = l_Lasm_JS_Data_describe(v_d_4790_);
v_received_4806_ = v___x_4819_;
goto v___jp_4805_;
}
}
}
}
v___jp_4792_:
{
lean_object* v___x_4793_; lean_object* v___x_4794_; 
v___x_4793_ = lean_box(0);
v___x_4794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4794_, 0, v___x_4793_);
return v___x_4794_;
}
v___jp_4795_:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v___x_4798_ = lean_string_append(v___y_4796_, v___y_4797_);
v___x_4799_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4798_);
v___x_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4799_);
return v___x_4800_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4834_, lean_object* v_d_4835_, lean_object* v_a_4836_){
_start:
{
lean_object* v_res_4837_; 
v_res_4837_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_4834_, v_d_4835_);
lean_dec_ref(v_context_4834_);
return v_res_4837_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(lean_object* v_context_4838_, lean_object* v_bytes_4839_){
_start:
{
lean_object* v___x_4841_; 
v___x_4841_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4839_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_object* v_a_4842_; lean_object* v___x_4843_; 
v_a_4842_ = lean_ctor_get(v___x_4841_, 0);
lean_inc(v_a_4842_);
lean_dec_ref_known(v___x_4841_, 1);
v___x_4843_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_4838_, v_a_4842_);
return v___x_4843_;
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
v_a_4844_ = lean_ctor_get(v___x_4841_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4841_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4841_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4841_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0___boxed(lean_object* v_context_4852_, lean_object* v_bytes_4853_, lean_object* v_a_4854_){
_start:
{
lean_object* v_res_4855_; 
v_res_4855_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v_context_4852_, v_bytes_4853_);
lean_dec_ref(v_bytes_4853_);
lean_dec_ref(v_context_4852_);
return v_res_4855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(lean_object* v_o_4857_, lean_object* v_key_4858_){
_start:
{
lean_object* v_k_4860_; lean_object* v___x_4861_; 
v_k_4860_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4860_, 0, v_key_4858_);
v___x_4861_ = l_Lasm_JS_Wire_encodeIO(v_k_4860_);
if (lean_obj_tag(v___x_4861_) == 0)
{
lean_object* v_a_4862_; uint32_t v___x_4863_; uint32_t v___x_4864_; uint64_t v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v_a_4862_ = lean_ctor_get(v___x_4861_, 0);
lean_inc(v_a_4862_);
lean_dec_ref_known(v___x_4861_, 1);
v___x_4863_ = 203;
v___x_4864_ = lasm_js_value_handle(v_o_4857_);
v___x_4865_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
v___x_4866_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4867_, 0, v_o_4857_);
lean_ctor_set(v___x_4867_, 1, v___x_4866_);
v___x_4868_ = lean_unsigned_to_nat(2u);
v___x_4869_ = lean_mk_empty_array_with_capacity(v___x_4868_);
lean_inc_ref(v_k_4860_);
v___x_4870_ = lean_array_push(v___x_4869_, v_k_4860_);
v___x_4871_ = lean_array_push(v___x_4870_, v___x_4867_);
v___x_4872_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4871_);
v___x_4873_ = lasm_js_call(v___x_4863_, v___x_4864_, v___x_4865_, v_a_4862_, v___x_4872_);
lean_dec_ref_known(v___x_4872_, 1);
lean_dec(v_a_4862_);
if (lean_obj_tag(v___x_4873_) == 0)
{
lean_object* v_a_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
v_a_4874_ = lean_ctor_get(v___x_4873_, 0);
lean_inc(v_a_4874_);
lean_dec_ref_known(v___x_4873_, 1);
v___x_4875_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0));
v___x_4876_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4860_);
v___x_4877_ = lean_string_append(v___x_4875_, v___x_4876_);
lean_dec_ref(v___x_4876_);
v___x_4878_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v___x_4877_, v_a_4874_);
lean_dec(v_a_4874_);
lean_dec_ref(v___x_4877_);
return v___x_4878_;
}
else
{
lean_object* v_a_4879_; lean_object* v___x_4881_; uint8_t v_isShared_4882_; uint8_t v_isSharedCheck_4886_; 
lean_dec_ref_known(v_k_4860_, 1);
v_a_4879_ = lean_ctor_get(v___x_4873_, 0);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4873_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4881_ = v___x_4873_;
v_isShared_4882_ = v_isSharedCheck_4886_;
goto v_resetjp_4880_;
}
else
{
lean_inc(v_a_4879_);
lean_dec(v___x_4873_);
v___x_4881_ = lean_box(0);
v_isShared_4882_ = v_isSharedCheck_4886_;
goto v_resetjp_4880_;
}
v_resetjp_4880_:
{
lean_object* v___x_4884_; 
if (v_isShared_4882_ == 0)
{
v___x_4884_ = v___x_4881_;
goto v_reusejp_4883_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v_a_4879_);
v___x_4884_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4883_;
}
v_reusejp_4883_:
{
return v___x_4884_;
}
}
}
}
else
{
lean_object* v_a_4887_; lean_object* v___x_4889_; uint8_t v_isShared_4890_; uint8_t v_isSharedCheck_4894_; 
lean_dec_ref_known(v_k_4860_, 1);
lean_dec(v_o_4857_);
v_a_4887_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4894_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4894_ == 0)
{
v___x_4889_ = v___x_4861_;
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
else
{
lean_inc(v_a_4887_);
lean_dec(v___x_4861_);
v___x_4889_ = lean_box(0);
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
v_resetjp_4888_:
{
lean_object* v___x_4892_; 
if (v_isShared_4890_ == 0)
{
v___x_4892_ = v___x_4889_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v_a_4887_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___boxed(lean_object* v_o_4895_, lean_object* v_key_4896_, lean_object* v_a_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_o_4895_, v_key_4896_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea(lean_object* v_self_4899_){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4901_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_4902_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_self_4899_, v___x_4901_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea___boxed(lean_object* v_self_4903_, lean_object* v_a_4904_){
_start:
{
lean_object* v_res_4905_; 
v_res_4905_ = l_Lasm_JS_Web_StorageEvent_storageArea(v_self_4903_);
return v_res_4905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent(lean_object* v_self_4907_, lean_object* v_type_4908_, lean_object* v_bubbles_4909_, lean_object* v_cancelable_4910_, lean_object* v_key_4911_, lean_object* v_oldValue_4912_, lean_object* v_newValue_4913_, lean_object* v_url_4914_, lean_object* v_storageArea_4915_){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4917_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0));
v___x_4918_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4918_, 0, v_type_4908_);
v___x_4919_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4909_);
v___x_4920_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4910_);
v___x_4921_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_4911_);
v___x_4922_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_4912_);
v___x_4923_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_4913_);
v___x_4924_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_4914_);
v___x_4925_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_4915_);
v___x_4926_ = lean_unsigned_to_nat(8u);
v___x_4927_ = lean_mk_empty_array_with_capacity(v___x_4926_);
v___x_4928_ = lean_array_push(v___x_4927_, v___x_4918_);
v___x_4929_ = lean_array_push(v___x_4928_, v___x_4919_);
v___x_4930_ = lean_array_push(v___x_4929_, v___x_4920_);
v___x_4931_ = lean_array_push(v___x_4930_, v___x_4921_);
v___x_4932_ = lean_array_push(v___x_4931_, v___x_4922_);
v___x_4933_ = lean_array_push(v___x_4932_, v___x_4923_);
v___x_4934_ = lean_array_push(v___x_4933_, v___x_4924_);
v___x_4935_ = lean_array_push(v___x_4934_, v___x_4925_);
v___x_4936_ = l_Lasm_JS_Web_Support_args(v___x_4935_);
v___x_4937_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4907_, v___x_4917_, v___x_4936_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent___boxed(lean_object* v_self_4938_, lean_object* v_type_4939_, lean_object* v_bubbles_4940_, lean_object* v_cancelable_4941_, lean_object* v_key_4942_, lean_object* v_oldValue_4943_, lean_object* v_newValue_4944_, lean_object* v_url_4945_, lean_object* v_storageArea_4946_, lean_object* v_a_4947_){
_start:
{
lean_object* v_res_4948_; 
v_res_4948_ = l_Lasm_JS_Web_StorageEvent_initStorageEvent(v_self_4938_, v_type_4939_, v_bubbles_4940_, v_cancelable_4941_, v_key_4942_, v_oldValue_4943_, v_newValue_4944_, v_url_4945_, v_storageArea_4946_);
lean_dec(v_storageArea_4946_);
lean_dec(v_cancelable_4941_);
lean_dec(v_bubbles_4940_);
return v_res_4948_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_UiEvents(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSPointerEventInit = _init_l_Lasm_JS_Web_instToJSPointerEventInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPointerEventInit);
l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL = _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL();
lean_mark_persistent(l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL);
l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE = _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE();
lean_mark_persistent(l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE);
l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE = _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE();
lean_mark_persistent(l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE);
l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD = _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD();
lean_mark_persistent(l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD);
l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT = _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT();
lean_mark_persistent(l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT);
l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT = _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT();
lean_mark_persistent(l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT);
l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD = _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD();
lean_mark_persistent(l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
