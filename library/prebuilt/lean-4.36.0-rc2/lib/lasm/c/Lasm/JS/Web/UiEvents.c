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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1306_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___x_1307_ = lean_unsigned_to_nat(46u);
v___x_1308_ = lean_unsigned_to_nat(193u);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4));
v___x_1310_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3));
v___x_1311_ = l_mkPanicMessageWithDecl(v___x_1310_, v___x_1309_, v___x_1308_, v___x_1307_, v___x_1306_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(lean_object* v_context_1313_, lean_object* v_d_1314_){
_start:
{
lean_object* v_received_1317_; 
if (lean_obj_tag(v_d_1314_) == 9)
{
lean_object* v_value_1331_; lean_object* v___x_1332_; 
v_value_1331_ = lean_ctor_get(v_d_1314_, 0);
lean_inc(v_value_1331_);
lean_dec_ref_known(v_d_1314_, 2);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_value_1331_);
return v___x_1332_;
}
else
{
if (lean_obj_tag(v_d_1314_) == 9)
{
lean_object* v_value_1333_; lean_object* v_description_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v_value_1333_ = lean_ctor_get(v_d_1314_, 0);
v_description_1334_ = lean_ctor_get(v_d_1314_, 1);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_1336_ = lean_string_dec_eq(v_description_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
goto v___jp_1329_;
}
else
{
uint32_t v___x_1337_; uint64_t v___x_1338_; lean_object* v___x_1339_; uint32_t v___x_1340_; lean_object* v___x_1341_; 
lean_inc_n(v_value_1333_, 2);
lean_dec_ref_known(v_d_1314_, 2);
v___x_1337_ = 206;
v___x_1338_ = 0ULL;
v___x_1339_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1339_, 0, v_value_1333_);
lean_ctor_set(v___x_1339_, 1, v___x_1335_);
v___x_1340_ = lasm_js_value_handle(v_value_1333_);
lean_dec(v_value_1333_);
v___x_1341_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1337_, v___x_1338_, v___x_1339_, v___x_1340_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; uint8_t v___x_1343_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1343_ = lean_string_validate_utf8(v_a_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_dec(v_a_1342_);
v___x_1344_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_1345_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1344_);
v_received_1317_ = v___x_1345_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_string_from_utf8_unchecked(v_a_1342_);
v_received_1317_ = v___x_1346_;
goto v___jp_1316_;
}
}
else
{
lean_object* v___x_1347_; 
lean_dec_ref_known(v___x_1341_, 1);
v___x_1347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_1317_ = v___x_1347_;
goto v___jp_1316_;
}
}
}
else
{
goto v___jp_1329_;
}
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1319_ = lean_string_append(v___x_1318_, v_context_1313_);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
v___x_1322_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSUIEvent___closed__1));
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
v___x_1326_ = lean_string_append(v___x_1325_, v_received_1317_);
lean_dec_ref(v_received_1317_);
v___x_1327_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
return v___x_1328_;
}
v___jp_1329_:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lasm_JS_Data_describe(v_d_1314_);
v_received_1317_ = v___x_1330_;
goto v___jp_1316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1348_, lean_object* v_d_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v_context_1348_, v_d_1349_);
lean_dec_ref(v_context_1348_);
return v_res_1351_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1353_; uint64_t v___x_1354_; 
v___x_1353_ = 0;
v___x_1354_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(lean_object* v_b_1355_, lean_object* v_args_1356_, uint8_t v_await_1357_){
_start:
{
uint64_t v___y_1360_; uint64_t v___y_1361_; uint64_t v___x_1396_; uint64_t v___y_1398_; 
v___x_1396_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1357_ == 0)
{
uint64_t v___x_1403_; 
v___x_1403_ = 0ULL;
v___y_1398_ = v___x_1403_;
goto v___jp_1397_;
}
else
{
uint64_t v___x_1404_; 
v___x_1404_ = 2ULL;
v___y_1398_ = v___x_1404_;
goto v___jp_1397_;
}
v___jp_1359_:
{
uint64_t v_flags_1362_; uint32_t v___x_1363_; lean_object* v___x_1364_; uint32_t v___x_1365_; lean_object* v___x_1366_; 
v_flags_1362_ = lean_uint64_lor(v___y_1360_, v___y_1361_);
v___x_1363_ = 214;
v___x_1364_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1355_, v_args_1356_);
v___x_1365_ = 0;
v___x_1366_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1363_, v_flags_1362_, v___x_1364_, v___x_1365_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1367_);
lean_dec(v_a_1367_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1368_, 1);
v___x_1370_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1355_);
v___x_1371_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v___x_1370_, v_a_1369_);
lean_dec_ref(v___x_1370_);
return v___x_1371_;
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
v_a_1372_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1368_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1368_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1395_; 
v_a_1380_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1382_ = v___x_1366_;
v_isShared_1383_ = v_isSharedCheck_1395_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1366_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1395_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1384_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1385_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1355_);
v___x_1386_ = lean_string_append(v___x_1384_, v___x_1385_);
lean_dec_ref(v___x_1385_);
v___x_1387_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1388_ = lean_string_append(v___x_1386_, v___x_1387_);
v___x_1389_ = lean_io_error_to_string(v_a_1380_);
v___x_1390_ = lean_string_append(v___x_1388_, v___x_1389_);
lean_dec_ref(v___x_1389_);
v___x_1391_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v___x_1391_);
v___x_1393_ = v___x_1382_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
v___jp_1397_:
{
uint8_t v_construct_1399_; uint64_t v___x_1400_; 
v_construct_1399_ = lean_ctor_get_uint8(v_b_1355_, sizeof(void*)*4);
v___x_1400_ = lean_uint64_lor(v___x_1396_, v___y_1398_);
if (v_construct_1399_ == 0)
{
uint64_t v___x_1401_; 
v___x_1401_ = 0ULL;
v___y_1360_ = v___x_1400_;
v___y_1361_ = v___x_1401_;
goto v___jp_1359_;
}
else
{
uint64_t v___x_1402_; 
v___x_1402_ = 4ULL;
v___y_1360_ = v___x_1400_;
v___y_1361_ = v___x_1402_;
goto v___jp_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___boxed(lean_object* v_b_1405_, lean_object* v_args_1406_, lean_object* v_await_1407_, lean_object* v_a_1408_){
_start:
{
uint8_t v_await_boxed_1409_; lean_object* v_res_1410_; 
v_await_boxed_1409_ = lean_unbox(v_await_1407_);
v_res_1410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v_b_1405_, v_args_1406_, v_await_boxed_1409_);
lean_dec_ref(v_b_1405_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new(lean_object* v_type_1420_, lean_object* v_eventInitDict_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; lean_object* v___x_1432_; 
v___x_1423_ = lean_unsigned_to_nat(2u);
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_new___closed__3));
v___x_1425_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1425_, 0, v_type_1420_);
v___x_1426_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(v_eventInitDict_1421_);
v___x_1427_ = lean_mk_empty_array_with_capacity(v___x_1423_);
v___x_1428_ = lean_array_push(v___x_1427_, v___x_1425_);
v___x_1429_ = lean_array_push(v___x_1428_, v___x_1426_);
v___x_1430_ = l_Lasm_JS_Web_Support_args(v___x_1429_);
v___x_1431_ = 0;
v___x_1432_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v___x_1424_, v___x_1430_, v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new___boxed(lean_object* v_type_1433_, lean_object* v_eventInitDict_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_JS_Web_UIEvent_new(v_type_1433_, v_eventInitDict_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view(lean_object* v_self_1437_){
_start:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1440_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_defaultView_spec__0(v_self_1437_, v___x_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view___boxed(lean_object* v_self_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lasm_JS_Web_UIEvent_view(v_self_1441_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail(lean_object* v_self_1444_){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1446_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1447_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1444_, v___x_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail___boxed(lean_object* v_self_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lasm_JS_Web_UIEvent_detail(v_self_1448_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which(lean_object* v_self_1451_){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1454_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1451_, v___x_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which___boxed(lean_object* v_self_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lasm_JS_Web_UIEvent_which(v_self_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent(lean_object* v_self_1459_, lean_object* v_typeArg_1460_, lean_object* v_bubblesArg_1461_, lean_object* v_cancelableArg_1462_, lean_object* v_viewArg_1463_, lean_object* v_detailArg_1464_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0));
v___x_1467_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1467_, 0, v_typeArg_1460_);
v___x_1468_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_1461_);
v___x_1469_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_1462_);
v___x_1470_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_1463_);
v___x_1471_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_1464_);
v___x_1472_ = lean_unsigned_to_nat(5u);
v___x_1473_ = lean_mk_empty_array_with_capacity(v___x_1472_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1467_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1468_);
v___x_1476_ = lean_array_push(v___x_1475_, v___x_1469_);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1470_);
v___x_1478_ = lean_array_push(v___x_1477_, v___x_1471_);
v___x_1479_ = l_Lasm_JS_Web_Support_args(v___x_1478_);
v___x_1480_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1459_, v___x_1466_, v___x_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent___boxed(lean_object* v_self_1481_, lean_object* v_typeArg_1482_, lean_object* v_bubblesArg_1483_, lean_object* v_cancelableArg_1484_, lean_object* v_viewArg_1485_, lean_object* v_detailArg_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lasm_JS_Web_UIEvent_initUIEvent(v_self_1481_, v_typeArg_1482_, v_bubblesArg_1483_, v_cancelableArg_1484_, v_viewArg_1485_, v_detailArg_1486_);
lean_dec(v_viewArg_1485_);
lean_dec(v_cancelableArg_1484_);
lean_dec(v_bubblesArg_1483_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(lean_object* v_context_1489_, lean_object* v_d_1490_){
_start:
{
lean_object* v_received_1493_; 
if (lean_obj_tag(v_d_1490_) == 9)
{
lean_object* v_value_1507_; lean_object* v___x_1508_; 
v_value_1507_ = lean_ctor_get(v_d_1490_, 0);
lean_inc(v_value_1507_);
lean_dec_ref_known(v_d_1490_, 2);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_value_1507_);
return v___x_1508_;
}
else
{
if (lean_obj_tag(v_d_1490_) == 9)
{
lean_object* v_value_1509_; lean_object* v_description_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v_value_1509_ = lean_ctor_get(v_d_1490_, 0);
v_description_1510_ = lean_ctor_get(v_d_1490_, 1);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_1512_ = lean_string_dec_eq(v_description_1510_, v___x_1511_);
if (v___x_1512_ == 0)
{
goto v___jp_1505_;
}
else
{
uint32_t v___x_1513_; uint64_t v___x_1514_; lean_object* v___x_1515_; uint32_t v___x_1516_; lean_object* v___x_1517_; 
lean_inc_n(v_value_1509_, 2);
lean_dec_ref_known(v_d_1490_, 2);
v___x_1513_ = 206;
v___x_1514_ = 0ULL;
v___x_1515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1515_, 0, v_value_1509_);
lean_ctor_set(v___x_1515_, 1, v___x_1511_);
v___x_1516_ = lasm_js_value_handle(v_value_1509_);
lean_dec(v_value_1509_);
v___x_1517_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1513_, v___x_1514_, v___x_1515_, v___x_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; uint8_t v___x_1519_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = lean_string_validate_utf8(v_a_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec(v_a_1518_);
v___x_1520_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_1521_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1520_);
v_received_1493_ = v___x_1521_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_string_from_utf8_unchecked(v_a_1518_);
v_received_1493_ = v___x_1522_;
goto v___jp_1492_;
}
}
else
{
lean_object* v___x_1523_; 
lean_dec_ref_known(v___x_1517_, 1);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_1493_ = v___x_1523_;
goto v___jp_1492_;
}
}
}
else
{
goto v___jp_1505_;
}
}
v___jp_1492_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1495_ = lean_string_append(v___x_1494_, v_context_1489_);
v___x_1496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1497_ = lean_string_append(v___x_1495_, v___x_1496_);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMouseEvent___closed__0));
v___x_1499_ = lean_string_append(v___x_1497_, v___x_1498_);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1501_ = lean_string_append(v___x_1499_, v___x_1500_);
v___x_1502_ = lean_string_append(v___x_1501_, v_received_1493_);
lean_dec_ref(v_received_1493_);
v___x_1503_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
v___x_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
return v___x_1504_;
}
v___jp_1505_:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Lasm_JS_Data_describe(v_d_1490_);
v_received_1493_ = v___x_1506_;
goto v___jp_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1524_, lean_object* v_d_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v_context_1524_, v_d_1525_);
lean_dec_ref(v_context_1524_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(lean_object* v_b_1528_, lean_object* v_args_1529_, uint8_t v_await_1530_){
_start:
{
uint64_t v___y_1533_; uint64_t v___y_1534_; uint64_t v___x_1569_; uint64_t v___y_1571_; 
v___x_1569_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1530_ == 0)
{
uint64_t v___x_1576_; 
v___x_1576_ = 0ULL;
v___y_1571_ = v___x_1576_;
goto v___jp_1570_;
}
else
{
uint64_t v___x_1577_; 
v___x_1577_ = 2ULL;
v___y_1571_ = v___x_1577_;
goto v___jp_1570_;
}
v___jp_1532_:
{
uint64_t v_flags_1535_; uint32_t v___x_1536_; lean_object* v___x_1537_; uint32_t v___x_1538_; lean_object* v___x_1539_; 
v_flags_1535_ = lean_uint64_lor(v___y_1533_, v___y_1534_);
v___x_1536_ = 214;
v___x_1537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1528_, v_args_1529_);
v___x_1538_ = 0;
v___x_1539_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1536_, v_flags_1535_, v___x_1537_, v___x_1538_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1541_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v___x_1541_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1540_);
lean_dec(v_a_1540_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1528_);
v___x_1544_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v___x_1543_, v_a_1542_);
lean_dec_ref(v___x_1543_);
return v___x_1544_;
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
v_a_1545_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1541_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1541_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1568_; 
v_a_1553_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1555_ = v___x_1539_;
v_isShared_1556_ = v_isSharedCheck_1568_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1539_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1568_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1557_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1558_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1528_);
v___x_1559_ = lean_string_append(v___x_1557_, v___x_1558_);
lean_dec_ref(v___x_1558_);
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1561_ = lean_string_append(v___x_1559_, v___x_1560_);
v___x_1562_ = lean_io_error_to_string(v_a_1553_);
v___x_1563_ = lean_string_append(v___x_1561_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v___x_1564_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1564_);
v___x_1566_ = v___x_1555_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
v___jp_1570_:
{
uint8_t v_construct_1572_; uint64_t v___x_1573_; 
v_construct_1572_ = lean_ctor_get_uint8(v_b_1528_, sizeof(void*)*4);
v___x_1573_ = lean_uint64_lor(v___x_1569_, v___y_1571_);
if (v_construct_1572_ == 0)
{
uint64_t v___x_1574_; 
v___x_1574_ = 0ULL;
v___y_1533_ = v___x_1573_;
v___y_1534_ = v___x_1574_;
goto v___jp_1532_;
}
else
{
uint64_t v___x_1575_; 
v___x_1575_ = 4ULL;
v___y_1533_ = v___x_1573_;
v___y_1534_ = v___x_1575_;
goto v___jp_1532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1___boxed(lean_object* v_b_1578_, lean_object* v_args_1579_, lean_object* v_await_1580_, lean_object* v_a_1581_){
_start:
{
uint8_t v_await_boxed_1582_; lean_object* v_res_1583_; 
v_await_boxed_1582_ = lean_unbox(v_await_1580_);
v_res_1583_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v_b_1578_, v_args_1579_, v_await_boxed_1582_);
lean_dec_ref(v_b_1578_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(lean_object* v_x_1584_){
_start:
{
if (lean_obj_tag(v_x_1584_) == 0)
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_box(0);
return v___x_1585_;
}
else
{
lean_object* v_val_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_val_1586_ = lean_ctor_get(v_x_1584_, 0);
v___x_1587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_1586_);
v___x_1588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1588_, 0, v_val_1586_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
return v___x_1588_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0___boxed(lean_object* v_x_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_x_1589_);
lean_dec(v_x_1589_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(lean_object* v_x_1591_){
_start:
{
if (lean_obj_tag(v_x_1591_) == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_box(0);
return v___x_1592_;
}
else
{
lean_object* v_val_1593_; lean_object* v_bubbles_1594_; lean_object* v_cancelable_1595_; lean_object* v_composed_1596_; lean_object* v_view_1597_; lean_object* v_detail_1598_; lean_object* v_which_1599_; lean_object* v_ctrlKey_1600_; lean_object* v_shiftKey_1601_; lean_object* v_altKey_1602_; lean_object* v_metaKey_1603_; lean_object* v_modifierAltGraph_1604_; lean_object* v_modifierCapsLock_1605_; lean_object* v_modifierFn_1606_; lean_object* v_modifierFnLock_1607_; lean_object* v_modifierHyper_1608_; lean_object* v_modifierNumLock_1609_; lean_object* v_modifierScrollLock_1610_; lean_object* v_modifierSuper_1611_; lean_object* v_modifierSymbol_1612_; lean_object* v_modifierSymbolLock_1613_; lean_object* v_screenX_1614_; lean_object* v_screenY_1615_; lean_object* v_clientX_1616_; lean_object* v_clientY_1617_; lean_object* v_button_1618_; lean_object* v_buttons_1619_; lean_object* v_relatedTarget_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v_val_1593_ = lean_ctor_get(v_x_1591_, 0);
lean_inc(v_val_1593_);
lean_dec_ref_known(v_x_1591_, 1);
v_bubbles_1594_ = lean_ctor_get(v_val_1593_, 0);
lean_inc(v_bubbles_1594_);
v_cancelable_1595_ = lean_ctor_get(v_val_1593_, 1);
lean_inc(v_cancelable_1595_);
v_composed_1596_ = lean_ctor_get(v_val_1593_, 2);
lean_inc(v_composed_1596_);
v_view_1597_ = lean_ctor_get(v_val_1593_, 3);
lean_inc(v_view_1597_);
v_detail_1598_ = lean_ctor_get(v_val_1593_, 4);
lean_inc(v_detail_1598_);
v_which_1599_ = lean_ctor_get(v_val_1593_, 5);
lean_inc(v_which_1599_);
v_ctrlKey_1600_ = lean_ctor_get(v_val_1593_, 6);
lean_inc(v_ctrlKey_1600_);
v_shiftKey_1601_ = lean_ctor_get(v_val_1593_, 7);
lean_inc(v_shiftKey_1601_);
v_altKey_1602_ = lean_ctor_get(v_val_1593_, 8);
lean_inc(v_altKey_1602_);
v_metaKey_1603_ = lean_ctor_get(v_val_1593_, 9);
lean_inc(v_metaKey_1603_);
v_modifierAltGraph_1604_ = lean_ctor_get(v_val_1593_, 10);
lean_inc(v_modifierAltGraph_1604_);
v_modifierCapsLock_1605_ = lean_ctor_get(v_val_1593_, 11);
lean_inc(v_modifierCapsLock_1605_);
v_modifierFn_1606_ = lean_ctor_get(v_val_1593_, 12);
lean_inc(v_modifierFn_1606_);
v_modifierFnLock_1607_ = lean_ctor_get(v_val_1593_, 13);
lean_inc(v_modifierFnLock_1607_);
v_modifierHyper_1608_ = lean_ctor_get(v_val_1593_, 14);
lean_inc(v_modifierHyper_1608_);
v_modifierNumLock_1609_ = lean_ctor_get(v_val_1593_, 15);
lean_inc(v_modifierNumLock_1609_);
v_modifierScrollLock_1610_ = lean_ctor_get(v_val_1593_, 16);
lean_inc(v_modifierScrollLock_1610_);
v_modifierSuper_1611_ = lean_ctor_get(v_val_1593_, 17);
lean_inc(v_modifierSuper_1611_);
v_modifierSymbol_1612_ = lean_ctor_get(v_val_1593_, 18);
lean_inc(v_modifierSymbol_1612_);
v_modifierSymbolLock_1613_ = lean_ctor_get(v_val_1593_, 19);
lean_inc(v_modifierSymbolLock_1613_);
v_screenX_1614_ = lean_ctor_get(v_val_1593_, 20);
lean_inc(v_screenX_1614_);
v_screenY_1615_ = lean_ctor_get(v_val_1593_, 21);
lean_inc(v_screenY_1615_);
v_clientX_1616_ = lean_ctor_get(v_val_1593_, 22);
lean_inc(v_clientX_1616_);
v_clientY_1617_ = lean_ctor_get(v_val_1593_, 23);
lean_inc(v_clientY_1617_);
v_button_1618_ = lean_ctor_get(v_val_1593_, 24);
lean_inc(v_button_1618_);
v_buttons_1619_ = lean_ctor_get(v_val_1593_, 25);
lean_inc(v_buttons_1619_);
v_relatedTarget_1620_ = lean_ctor_get(v_val_1593_, 26);
lean_inc(v_relatedTarget_1620_);
lean_dec(v_val_1593_);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1594_);
lean_dec(v_bubbles_1594_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1625_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1595_);
lean_dec(v_cancelable_1595_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1596_);
lean_dec(v_composed_1596_);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1627_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_1597_);
lean_dec(v_view_1597_);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1634_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_1598_);
v___x_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1637_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_1599_);
v___x_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1640_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_1600_);
lean_dec(v_ctrlKey_1600_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1643_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_1601_);
lean_dec(v_shiftKey_1601_);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1646_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_1602_);
lean_dec(v_altKey_1602_);
v___x_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1645_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
v___x_1648_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1649_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_1603_);
lean_dec(v_metaKey_1603_);
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1648_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_1652_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_1604_);
lean_dec(v_modifierAltGraph_1604_);
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_1655_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_1605_);
lean_dec(v_modifierCapsLock_1605_);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_1658_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_1606_);
lean_dec(v_modifierFn_1606_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_1661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_1607_);
lean_dec(v_modifierFnLock_1607_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1660_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_1664_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_1608_);
lean_dec(v_modifierHyper_1608_);
v___x_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set(v___x_1665_, 1, v___x_1664_);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_1667_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_1609_);
lean_dec(v_modifierNumLock_1609_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_1670_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_1610_);
lean_dec(v_modifierScrollLock_1610_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_1673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_1611_);
lean_dec(v_modifierSuper_1611_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_1676_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_1612_);
lean_dec(v_modifierSymbol_1612_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1675_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_1679_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_1613_);
lean_dec(v_modifierSymbolLock_1613_);
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1678_);
lean_ctor_set(v___x_1680_, 1, v___x_1679_);
v___x_1681_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_1614_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
v___x_1684_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1685_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_1615_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1684_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1688_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_1616_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1691_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_1617_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1694_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_1618_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_1619_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_1700_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_1620_);
lean_dec(v_relatedTarget_1620_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = lean_unsigned_to_nat(27u);
v___x_1703_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1623_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1626_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1629_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1632_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1635_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1638_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1641_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1644_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1647_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1650_);
v___x_1714_ = lean_array_push(v___x_1713_, v___x_1653_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1656_);
v___x_1716_ = lean_array_push(v___x_1715_, v___x_1659_);
v___x_1717_ = lean_array_push(v___x_1716_, v___x_1662_);
v___x_1718_ = lean_array_push(v___x_1717_, v___x_1665_);
v___x_1719_ = lean_array_push(v___x_1718_, v___x_1668_);
v___x_1720_ = lean_array_push(v___x_1719_, v___x_1671_);
v___x_1721_ = lean_array_push(v___x_1720_, v___x_1674_);
v___x_1722_ = lean_array_push(v___x_1721_, v___x_1677_);
v___x_1723_ = lean_array_push(v___x_1722_, v___x_1680_);
v___x_1724_ = lean_array_push(v___x_1723_, v___x_1683_);
v___x_1725_ = lean_array_push(v___x_1724_, v___x_1686_);
v___x_1726_ = lean_array_push(v___x_1725_, v___x_1689_);
v___x_1727_ = lean_array_push(v___x_1726_, v___x_1692_);
v___x_1728_ = lean_array_push(v___x_1727_, v___x_1695_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1698_);
v___x_1730_ = lean_array_push(v___x_1729_, v___x_1701_);
v___x_1731_ = l_Lasm_JS_Web_Support_fields(v___x_1730_);
lean_dec_ref(v___x_1730_);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new(lean_object* v_type_1740_, lean_object* v_eventInitDict_1741_){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; 
v___x_1743_ = lean_unsigned_to_nat(2u);
v___x_1744_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_new___closed__2));
v___x_1745_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_type_1740_);
v___x_1746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(v_eventInitDict_1741_);
v___x_1747_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1748_ = lean_array_push(v___x_1747_, v___x_1745_);
v___x_1749_ = lean_array_push(v___x_1748_, v___x_1746_);
v___x_1750_ = l_Lasm_JS_Web_Support_args(v___x_1749_);
v___x_1751_ = 0;
v___x_1752_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v___x_1744_, v___x_1750_, v___x_1751_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new___boxed(lean_object* v_type_1753_, lean_object* v_eventInitDict_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lasm_JS_Web_MouseEvent_new(v_type_1753_, v_eventInitDict_1754_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX(lean_object* v_self_1758_){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageX___closed__0));
v___x_1761_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1758_, v___x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX___boxed(lean_object* v_self_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lasm_JS_Web_MouseEvent_pageX(v_self_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY(lean_object* v_self_1766_){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageY___closed__0));
v___x_1769_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1766_, v___x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY___boxed(lean_object* v_self_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lasm_JS_Web_MouseEvent_pageY(v_self_1770_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x(lean_object* v_self_1774_){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_x___closed__0));
v___x_1777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1774_, v___x_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x___boxed(lean_object* v_self_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lasm_JS_Web_MouseEvent_x(v_self_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y(lean_object* v_self_1782_){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_y___closed__0));
v___x_1785_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1782_, v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y___boxed(lean_object* v_self_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lasm_JS_Web_MouseEvent_y(v_self_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX(lean_object* v_self_1790_){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetX___closed__0));
v___x_1793_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1790_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX___boxed(lean_object* v_self_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lasm_JS_Web_MouseEvent_offsetX(v_self_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY(lean_object* v_self_1798_){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetY___closed__0));
v___x_1801_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1798_, v___x_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY___boxed(lean_object* v_self_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lasm_JS_Web_MouseEvent_offsetY(v_self_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX(lean_object* v_self_1805_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1808_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1805_, v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX___boxed(lean_object* v_self_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = l_Lasm_JS_Web_MouseEvent_screenX(v_self_1809_);
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY(lean_object* v_self_1812_){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1815_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1812_, v___x_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY___boxed(lean_object* v_self_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Lasm_JS_Web_MouseEvent_screenY(v_self_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX(lean_object* v_self_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1822_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1819_, v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX___boxed(lean_object* v_self_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lasm_JS_Web_MouseEvent_clientX(v_self_1823_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY(lean_object* v_self_1826_){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1828_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1829_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1826_, v___x_1828_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY___boxed(lean_object* v_self_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Lasm_JS_Web_MouseEvent_clientY(v_self_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX(lean_object* v_self_1834_){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerX___closed__0));
v___x_1837_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1834_, v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX___boxed(lean_object* v_self_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lasm_JS_Web_MouseEvent_layerX(v_self_1838_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY(lean_object* v_self_1842_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerY___closed__0));
v___x_1845_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1842_, v___x_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY___boxed(lean_object* v_self_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lasm_JS_Web_MouseEvent_layerY(v_self_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey(lean_object* v_self_1849_){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1852_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1849_, v___x_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey___boxed(lean_object* v_self_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lasm_JS_Web_MouseEvent_ctrlKey(v_self_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey(lean_object* v_self_1856_){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1859_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1856_, v___x_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey___boxed(lean_object* v_self_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lasm_JS_Web_MouseEvent_shiftKey(v_self_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey(lean_object* v_self_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1863_, v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey___boxed(lean_object* v_self_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lasm_JS_Web_MouseEvent_altKey(v_self_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey(lean_object* v_self_1870_){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1873_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1870_, v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey___boxed(lean_object* v_self_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lasm_JS_Web_MouseEvent_metaKey(v_self_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button(lean_object* v_self_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1880_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1877_, v___x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button___boxed(lean_object* v_self_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lasm_JS_Web_MouseEvent_button(v_self_1881_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons(lean_object* v_self_1884_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1887_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1884_, v___x_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons___boxed(lean_object* v_self_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lasm_JS_Web_MouseEvent_buttons(v_self_1888_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget(lean_object* v_self_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_1894_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1891_, v___x_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget___boxed(lean_object* v_self_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lasm_JS_Web_MouseEvent_relatedTarget(v_self_1895_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState(lean_object* v_self_1899_, lean_object* v_keyArg_1900_){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1902_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_1903_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_keyArg_1900_);
v___x_1904_ = lean_unsigned_to_nat(1u);
v___x_1905_ = lean_mk_empty_array_with_capacity(v___x_1904_);
v___x_1906_ = lean_array_push(v___x_1905_, v___x_1903_);
v___x_1907_ = l_Lasm_JS_Web_Support_args(v___x_1906_);
v___x_1908_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1899_, v___x_1902_, v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState___boxed(lean_object* v_self_1909_, lean_object* v_keyArg_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lasm_JS_Web_MouseEvent_getModifierState(v_self_1909_, v_keyArg_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent(lean_object* v_self_1914_, lean_object* v_typeArg_1915_, lean_object* v_bubblesArg_1916_, lean_object* v_cancelableArg_1917_, lean_object* v_viewArg_1918_, lean_object* v_detailArg_1919_, lean_object* v_screenXArg_1920_, lean_object* v_screenYArg_1921_, lean_object* v_clientXArg_1922_, lean_object* v_clientYArg_1923_, lean_object* v_ctrlKeyArg_1924_, lean_object* v_altKeyArg_1925_, lean_object* v_shiftKeyArg_1926_, lean_object* v_metaKeyArg_1927_, lean_object* v_buttonArg_1928_, lean_object* v_relatedTargetArg_1929_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0));
v___x_1932_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1932_, 0, v_typeArg_1915_);
v___x_1933_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_1916_);
v___x_1934_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_1917_);
v___x_1935_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_1918_);
v___x_1936_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_1919_);
v___x_1937_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenXArg_1920_);
v___x_1938_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenYArg_1921_);
v___x_1939_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientXArg_1922_);
v___x_1940_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientYArg_1923_);
v___x_1941_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKeyArg_1924_);
v___x_1942_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKeyArg_1925_);
v___x_1943_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKeyArg_1926_);
v___x_1944_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKeyArg_1927_);
v___x_1945_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_buttonArg_1928_);
v___x_1946_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTargetArg_1929_);
v___x_1947_ = lean_unsigned_to_nat(15u);
v___x_1948_ = lean_mk_empty_array_with_capacity(v___x_1947_);
v___x_1949_ = lean_array_push(v___x_1948_, v___x_1932_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1933_);
v___x_1951_ = lean_array_push(v___x_1950_, v___x_1934_);
v___x_1952_ = lean_array_push(v___x_1951_, v___x_1935_);
v___x_1953_ = lean_array_push(v___x_1952_, v___x_1936_);
v___x_1954_ = lean_array_push(v___x_1953_, v___x_1937_);
v___x_1955_ = lean_array_push(v___x_1954_, v___x_1938_);
v___x_1956_ = lean_array_push(v___x_1955_, v___x_1939_);
v___x_1957_ = lean_array_push(v___x_1956_, v___x_1940_);
v___x_1958_ = lean_array_push(v___x_1957_, v___x_1941_);
v___x_1959_ = lean_array_push(v___x_1958_, v___x_1942_);
v___x_1960_ = lean_array_push(v___x_1959_, v___x_1943_);
v___x_1961_ = lean_array_push(v___x_1960_, v___x_1944_);
v___x_1962_ = lean_array_push(v___x_1961_, v___x_1945_);
v___x_1963_ = lean_array_push(v___x_1962_, v___x_1946_);
v___x_1964_ = l_Lasm_JS_Web_Support_args(v___x_1963_);
v___x_1965_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1914_, v___x_1931_, v___x_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent___boxed(lean_object** _args){
lean_object* v_self_1966_ = _args[0];
lean_object* v_typeArg_1967_ = _args[1];
lean_object* v_bubblesArg_1968_ = _args[2];
lean_object* v_cancelableArg_1969_ = _args[3];
lean_object* v_viewArg_1970_ = _args[4];
lean_object* v_detailArg_1971_ = _args[5];
lean_object* v_screenXArg_1972_ = _args[6];
lean_object* v_screenYArg_1973_ = _args[7];
lean_object* v_clientXArg_1974_ = _args[8];
lean_object* v_clientYArg_1975_ = _args[9];
lean_object* v_ctrlKeyArg_1976_ = _args[10];
lean_object* v_altKeyArg_1977_ = _args[11];
lean_object* v_shiftKeyArg_1978_ = _args[12];
lean_object* v_metaKeyArg_1979_ = _args[13];
lean_object* v_buttonArg_1980_ = _args[14];
lean_object* v_relatedTargetArg_1981_ = _args[15];
lean_object* v_a_1982_ = _args[16];
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lasm_JS_Web_MouseEvent_initMouseEvent(v_self_1966_, v_typeArg_1967_, v_bubblesArg_1968_, v_cancelableArg_1969_, v_viewArg_1970_, v_detailArg_1971_, v_screenXArg_1972_, v_screenYArg_1973_, v_clientXArg_1974_, v_clientYArg_1975_, v_ctrlKeyArg_1976_, v_altKeyArg_1977_, v_shiftKeyArg_1978_, v_metaKeyArg_1979_, v_buttonArg_1980_, v_relatedTargetArg_1981_);
lean_dec(v_relatedTargetArg_1981_);
lean_dec(v_metaKeyArg_1979_);
lean_dec(v_shiftKeyArg_1978_);
lean_dec(v_altKeyArg_1977_);
lean_dec(v_ctrlKeyArg_1976_);
lean_dec(v_viewArg_1970_);
lean_dec(v_cancelableArg_1969_);
lean_dec(v_bubblesArg_1968_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(lean_object* v_context_1984_, lean_object* v_d_1985_){
_start:
{
lean_object* v_received_1988_; 
if (lean_obj_tag(v_d_1985_) == 9)
{
lean_object* v_value_2002_; lean_object* v___x_2003_; 
v_value_2002_ = lean_ctor_get(v_d_1985_, 0);
lean_inc(v_value_2002_);
lean_dec_ref_known(v_d_1985_, 2);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v_value_2002_);
return v___x_2003_;
}
else
{
if (lean_obj_tag(v_d_1985_) == 9)
{
lean_object* v_value_2004_; lean_object* v_description_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; 
v_value_2004_ = lean_ctor_get(v_d_1985_, 0);
v_description_2005_ = lean_ctor_get(v_d_1985_, 1);
v___x_2006_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_2007_ = lean_string_dec_eq(v_description_2005_, v___x_2006_);
if (v___x_2007_ == 0)
{
goto v___jp_2000_;
}
else
{
uint32_t v___x_2008_; uint64_t v___x_2009_; lean_object* v___x_2010_; uint32_t v___x_2011_; lean_object* v___x_2012_; 
lean_inc_n(v_value_2004_, 2);
lean_dec_ref_known(v_d_1985_, 2);
v___x_2008_ = 206;
v___x_2009_ = 0ULL;
v___x_2010_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2010_, 0, v_value_2004_);
lean_ctor_set(v___x_2010_, 1, v___x_2006_);
v___x_2011_ = lasm_js_value_handle(v_value_2004_);
lean_dec(v_value_2004_);
v___x_2012_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2008_, v___x_2009_, v___x_2010_, v___x_2011_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; uint8_t v___x_2014_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2014_ = lean_string_validate_utf8(v_a_2013_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
lean_dec(v_a_2013_);
v___x_2015_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_2016_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2015_);
v_received_1988_ = v___x_2016_;
goto v___jp_1987_;
}
else
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_string_from_utf8_unchecked(v_a_2013_);
v_received_1988_ = v___x_2017_;
goto v___jp_1987_;
}
}
else
{
lean_object* v___x_2018_; 
lean_dec_ref_known(v___x_2012_, 1);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_1988_ = v___x_2018_;
goto v___jp_1987_;
}
}
}
else
{
goto v___jp_2000_;
}
}
v___jp_1987_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1989_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1990_ = lean_string_append(v___x_1989_, v_context_1984_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1992_ = lean_string_append(v___x_1990_, v___x_1991_);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWheelEvent___closed__0));
v___x_1994_ = lean_string_append(v___x_1992_, v___x_1993_);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1996_ = lean_string_append(v___x_1994_, v___x_1995_);
v___x_1997_ = lean_string_append(v___x_1996_, v_received_1988_);
lean_dec_ref(v_received_1988_);
v___x_1998_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
v___x_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
return v___x_1999_;
}
v___jp_2000_:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lasm_JS_Data_describe(v_d_1985_);
v_received_1988_ = v___x_2001_;
goto v___jp_1987_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2019_, lean_object* v_d_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v_context_2019_, v_d_2020_);
lean_dec_ref(v_context_2019_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(lean_object* v_b_2023_, lean_object* v_args_2024_, uint8_t v_await_2025_){
_start:
{
uint64_t v___y_2028_; uint64_t v___y_2029_; uint64_t v___x_2064_; uint64_t v___y_2066_; 
v___x_2064_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2025_ == 0)
{
uint64_t v___x_2071_; 
v___x_2071_ = 0ULL;
v___y_2066_ = v___x_2071_;
goto v___jp_2065_;
}
else
{
uint64_t v___x_2072_; 
v___x_2072_ = 2ULL;
v___y_2066_ = v___x_2072_;
goto v___jp_2065_;
}
v___jp_2027_:
{
uint64_t v_flags_2030_; uint32_t v___x_2031_; lean_object* v___x_2032_; uint32_t v___x_2033_; lean_object* v___x_2034_; 
v_flags_2030_ = lean_uint64_lor(v___y_2028_, v___y_2029_);
v___x_2031_ = 214;
v___x_2032_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2023_, v_args_2024_);
v___x_2033_ = 0;
v___x_2034_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2031_, v_flags_2030_, v___x_2032_, v___x_2033_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2035_);
lean_dec(v_a_2035_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2023_);
v___x_2039_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v___x_2038_, v_a_2037_);
lean_dec_ref(v___x_2038_);
return v___x_2039_;
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
v_a_2040_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2036_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2036_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2063_; 
v_a_2048_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2050_ = v___x_2034_;
v_isShared_2051_ = v_isSharedCheck_2063_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2034_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2063_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2052_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2053_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2023_);
v___x_2054_ = lean_string_append(v___x_2052_, v___x_2053_);
lean_dec_ref(v___x_2053_);
v___x_2055_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2056_ = lean_string_append(v___x_2054_, v___x_2055_);
v___x_2057_ = lean_io_error_to_string(v_a_2048_);
v___x_2058_ = lean_string_append(v___x_2056_, v___x_2057_);
lean_dec_ref(v___x_2057_);
v___x_2059_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2059_);
v___x_2061_ = v___x_2050_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
v___jp_2065_:
{
uint8_t v_construct_2067_; uint64_t v___x_2068_; 
v_construct_2067_ = lean_ctor_get_uint8(v_b_2023_, sizeof(void*)*4);
v___x_2068_ = lean_uint64_lor(v___x_2064_, v___y_2066_);
if (v_construct_2067_ == 0)
{
uint64_t v___x_2069_; 
v___x_2069_ = 0ULL;
v___y_2028_ = v___x_2068_;
v___y_2029_ = v___x_2069_;
goto v___jp_2027_;
}
else
{
uint64_t v___x_2070_; 
v___x_2070_ = 4ULL;
v___y_2028_ = v___x_2068_;
v___y_2029_ = v___x_2070_;
goto v___jp_2027_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1___boxed(lean_object* v_b_2073_, lean_object* v_args_2074_, lean_object* v_await_2075_, lean_object* v_a_2076_){
_start:
{
uint8_t v_await_boxed_2077_; lean_object* v_res_2078_; 
v_await_boxed_2077_ = lean_unbox(v_await_2075_);
v_res_2078_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v_b_2073_, v_args_2074_, v_await_boxed_2077_);
lean_dec_ref(v_b_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(lean_object* v_x_2079_){
_start:
{
if (lean_obj_tag(v_x_2079_) == 0)
{
lean_object* v___x_2080_; 
v___x_2080_ = lean_box(0);
return v___x_2080_;
}
else
{
lean_object* v_val_2081_; lean_object* v_bubbles_2082_; lean_object* v_cancelable_2083_; lean_object* v_composed_2084_; lean_object* v_view_2085_; lean_object* v_detail_2086_; lean_object* v_which_2087_; lean_object* v_ctrlKey_2088_; lean_object* v_shiftKey_2089_; lean_object* v_altKey_2090_; lean_object* v_metaKey_2091_; lean_object* v_modifierAltGraph_2092_; lean_object* v_modifierCapsLock_2093_; lean_object* v_modifierFn_2094_; lean_object* v_modifierFnLock_2095_; lean_object* v_modifierHyper_2096_; lean_object* v_modifierNumLock_2097_; lean_object* v_modifierScrollLock_2098_; lean_object* v_modifierSuper_2099_; lean_object* v_modifierSymbol_2100_; lean_object* v_modifierSymbolLock_2101_; lean_object* v_screenX_2102_; lean_object* v_screenY_2103_; lean_object* v_clientX_2104_; lean_object* v_clientY_2105_; lean_object* v_button_2106_; lean_object* v_buttons_2107_; lean_object* v_relatedTarget_2108_; lean_object* v_deltaX_2109_; lean_object* v_deltaY_2110_; lean_object* v_deltaZ_2111_; lean_object* v_deltaMode_2112_; lean_object* v_momentum_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v_val_2081_ = lean_ctor_get(v_x_2079_, 0);
lean_inc(v_val_2081_);
lean_dec_ref_known(v_x_2079_, 1);
v_bubbles_2082_ = lean_ctor_get(v_val_2081_, 0);
lean_inc(v_bubbles_2082_);
v_cancelable_2083_ = lean_ctor_get(v_val_2081_, 1);
lean_inc(v_cancelable_2083_);
v_composed_2084_ = lean_ctor_get(v_val_2081_, 2);
lean_inc(v_composed_2084_);
v_view_2085_ = lean_ctor_get(v_val_2081_, 3);
lean_inc(v_view_2085_);
v_detail_2086_ = lean_ctor_get(v_val_2081_, 4);
lean_inc(v_detail_2086_);
v_which_2087_ = lean_ctor_get(v_val_2081_, 5);
lean_inc(v_which_2087_);
v_ctrlKey_2088_ = lean_ctor_get(v_val_2081_, 6);
lean_inc(v_ctrlKey_2088_);
v_shiftKey_2089_ = lean_ctor_get(v_val_2081_, 7);
lean_inc(v_shiftKey_2089_);
v_altKey_2090_ = lean_ctor_get(v_val_2081_, 8);
lean_inc(v_altKey_2090_);
v_metaKey_2091_ = lean_ctor_get(v_val_2081_, 9);
lean_inc(v_metaKey_2091_);
v_modifierAltGraph_2092_ = lean_ctor_get(v_val_2081_, 10);
lean_inc(v_modifierAltGraph_2092_);
v_modifierCapsLock_2093_ = lean_ctor_get(v_val_2081_, 11);
lean_inc(v_modifierCapsLock_2093_);
v_modifierFn_2094_ = lean_ctor_get(v_val_2081_, 12);
lean_inc(v_modifierFn_2094_);
v_modifierFnLock_2095_ = lean_ctor_get(v_val_2081_, 13);
lean_inc(v_modifierFnLock_2095_);
v_modifierHyper_2096_ = lean_ctor_get(v_val_2081_, 14);
lean_inc(v_modifierHyper_2096_);
v_modifierNumLock_2097_ = lean_ctor_get(v_val_2081_, 15);
lean_inc(v_modifierNumLock_2097_);
v_modifierScrollLock_2098_ = lean_ctor_get(v_val_2081_, 16);
lean_inc(v_modifierScrollLock_2098_);
v_modifierSuper_2099_ = lean_ctor_get(v_val_2081_, 17);
lean_inc(v_modifierSuper_2099_);
v_modifierSymbol_2100_ = lean_ctor_get(v_val_2081_, 18);
lean_inc(v_modifierSymbol_2100_);
v_modifierSymbolLock_2101_ = lean_ctor_get(v_val_2081_, 19);
lean_inc(v_modifierSymbolLock_2101_);
v_screenX_2102_ = lean_ctor_get(v_val_2081_, 20);
lean_inc(v_screenX_2102_);
v_screenY_2103_ = lean_ctor_get(v_val_2081_, 21);
lean_inc(v_screenY_2103_);
v_clientX_2104_ = lean_ctor_get(v_val_2081_, 22);
lean_inc(v_clientX_2104_);
v_clientY_2105_ = lean_ctor_get(v_val_2081_, 23);
lean_inc(v_clientY_2105_);
v_button_2106_ = lean_ctor_get(v_val_2081_, 24);
lean_inc(v_button_2106_);
v_buttons_2107_ = lean_ctor_get(v_val_2081_, 25);
lean_inc(v_buttons_2107_);
v_relatedTarget_2108_ = lean_ctor_get(v_val_2081_, 26);
lean_inc(v_relatedTarget_2108_);
v_deltaX_2109_ = lean_ctor_get(v_val_2081_, 27);
lean_inc(v_deltaX_2109_);
v_deltaY_2110_ = lean_ctor_get(v_val_2081_, 28);
lean_inc(v_deltaY_2110_);
v_deltaZ_2111_ = lean_ctor_get(v_val_2081_, 29);
lean_inc(v_deltaZ_2111_);
v_deltaMode_2112_ = lean_ctor_get(v_val_2081_, 30);
lean_inc(v_deltaMode_2112_);
v_momentum_2113_ = lean_ctor_get(v_val_2081_, 31);
lean_inc(v_momentum_2113_);
lean_dec(v_val_2081_);
v___x_2114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2115_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2082_);
lean_dec(v_bubbles_2082_);
v___x_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2118_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2083_);
lean_dec(v_cancelable_2083_);
v___x_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2117_);
lean_ctor_set(v___x_2119_, 1, v___x_2118_);
v___x_2120_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2121_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2084_);
lean_dec(v_composed_2084_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2124_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2085_);
lean_dec(v_view_2085_);
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2123_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2127_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2086_);
v___x_2128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2130_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2087_);
v___x_2131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2133_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2088_);
lean_dec(v_ctrlKey_2088_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2132_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2136_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2089_);
lean_dec(v_shiftKey_2089_);
v___x_2137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2135_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2139_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2090_);
lean_dec(v_altKey_2090_);
v___x_2140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2138_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2142_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2091_);
lean_dec(v_metaKey_2091_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2141_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2145_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2092_);
lean_dec(v_modifierAltGraph_2092_);
v___x_2146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set(v___x_2146_, 1, v___x_2145_);
v___x_2147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2148_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2093_);
lean_dec(v_modifierCapsLock_2093_);
v___x_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2147_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2151_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2094_);
lean_dec(v_modifierFn_2094_);
v___x_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2150_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
v___x_2153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2154_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2095_);
lean_dec(v_modifierFnLock_2095_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2153_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2157_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2096_);
lean_dec(v_modifierHyper_2096_);
v___x_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2160_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2097_);
lean_dec(v_modifierNumLock_2097_);
v___x_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2163_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2098_);
lean_dec(v_modifierScrollLock_2098_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2162_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2166_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2099_);
lean_dec(v_modifierSuper_2099_);
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2169_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2100_);
lean_dec(v_modifierSymbol_2100_);
v___x_2170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2172_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2101_);
lean_dec(v_modifierSymbolLock_2101_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_2175_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_2102_);
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2174_);
lean_ctor_set(v___x_2176_, 1, v___x_2175_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_2178_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_2103_);
v___x_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_2181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_2104_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2180_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_2184_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_2105_);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2183_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_2187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_2106_);
v___x_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_2190_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_2107_);
v___x_2191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2189_);
lean_ctor_set(v___x_2191_, 1, v___x_2190_);
v___x_2192_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_2193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_2108_);
lean_dec(v_relatedTarget_2108_);
v___x_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2192_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaX_2109_);
lean_dec(v_deltaX_2109_);
v___x_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2195_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2199_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaY_2110_);
lean_dec(v_deltaY_2110_);
v___x_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2198_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2202_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaZ_2111_);
lean_dec(v_deltaZ_2111_);
v___x_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2201_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2205_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_deltaMode_2112_);
v___x_2206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2204_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2208_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_momentum_2113_);
lean_dec(v_momentum_2113_);
v___x_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = lean_unsigned_to_nat(32u);
v___x_2211_ = lean_mk_empty_array_with_capacity(v___x_2210_);
v___x_2212_ = lean_array_push(v___x_2211_, v___x_2116_);
v___x_2213_ = lean_array_push(v___x_2212_, v___x_2119_);
v___x_2214_ = lean_array_push(v___x_2213_, v___x_2122_);
v___x_2215_ = lean_array_push(v___x_2214_, v___x_2125_);
v___x_2216_ = lean_array_push(v___x_2215_, v___x_2128_);
v___x_2217_ = lean_array_push(v___x_2216_, v___x_2131_);
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2134_);
v___x_2219_ = lean_array_push(v___x_2218_, v___x_2137_);
v___x_2220_ = lean_array_push(v___x_2219_, v___x_2140_);
v___x_2221_ = lean_array_push(v___x_2220_, v___x_2143_);
v___x_2222_ = lean_array_push(v___x_2221_, v___x_2146_);
v___x_2223_ = lean_array_push(v___x_2222_, v___x_2149_);
v___x_2224_ = lean_array_push(v___x_2223_, v___x_2152_);
v___x_2225_ = lean_array_push(v___x_2224_, v___x_2155_);
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2158_);
v___x_2227_ = lean_array_push(v___x_2226_, v___x_2161_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2164_);
v___x_2229_ = lean_array_push(v___x_2228_, v___x_2167_);
v___x_2230_ = lean_array_push(v___x_2229_, v___x_2170_);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2173_);
v___x_2232_ = lean_array_push(v___x_2231_, v___x_2176_);
v___x_2233_ = lean_array_push(v___x_2232_, v___x_2179_);
v___x_2234_ = lean_array_push(v___x_2233_, v___x_2182_);
v___x_2235_ = lean_array_push(v___x_2234_, v___x_2185_);
v___x_2236_ = lean_array_push(v___x_2235_, v___x_2188_);
v___x_2237_ = lean_array_push(v___x_2236_, v___x_2191_);
v___x_2238_ = lean_array_push(v___x_2237_, v___x_2194_);
v___x_2239_ = lean_array_push(v___x_2238_, v___x_2197_);
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2200_);
v___x_2241_ = lean_array_push(v___x_2240_, v___x_2203_);
v___x_2242_ = lean_array_push(v___x_2241_, v___x_2206_);
v___x_2243_ = lean_array_push(v___x_2242_, v___x_2209_);
v___x_2244_ = l_Lasm_JS_Web_Support_fields(v___x_2243_);
lean_dec_ref(v___x_2243_);
return v___x_2244_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new(lean_object* v_type_2253_, lean_object* v_eventInitDict_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; lean_object* v___x_2265_; 
v___x_2256_ = lean_unsigned_to_nat(2u);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Web_WheelEvent_new___closed__2));
v___x_2258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2258_, 0, v_type_2253_);
v___x_2259_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(v_eventInitDict_2254_);
v___x_2260_ = lean_mk_empty_array_with_capacity(v___x_2256_);
v___x_2261_ = lean_array_push(v___x_2260_, v___x_2258_);
v___x_2262_ = lean_array_push(v___x_2261_, v___x_2259_);
v___x_2263_ = l_Lasm_JS_Web_Support_args(v___x_2262_);
v___x_2264_ = 0;
v___x_2265_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v___x_2257_, v___x_2263_, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new___boxed(lean_object* v_type_2266_, lean_object* v_eventInitDict_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lasm_JS_Web_WheelEvent_new(v_type_2266_, v_eventInitDict_2267_);
return v_res_2269_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL(void){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_unsigned_to_nat(0u);
return v___x_2270_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE(void){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_unsigned_to_nat(1u);
return v___x_2271_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE(void){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_unsigned_to_nat(2u);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX(lean_object* v_self_2273_){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2275_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2276_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2273_, v___x_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX___boxed(lean_object* v_self_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lasm_JS_Web_WheelEvent_deltaX(v_self_2277_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY(lean_object* v_self_2280_){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2283_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2280_, v___x_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY___boxed(lean_object* v_self_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lasm_JS_Web_WheelEvent_deltaY(v_self_2284_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ(lean_object* v_self_2287_){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2290_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2287_, v___x_2289_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ___boxed(lean_object* v_self_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lasm_JS_Web_WheelEvent_deltaZ(v_self_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode(lean_object* v_self_2294_){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2297_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2294_, v___x_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode___boxed(lean_object* v_self_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lasm_JS_Web_WheelEvent_deltaMode(v_self_2298_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum(lean_object* v_self_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2304_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2301_, v___x_2303_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum___boxed(lean_object* v_self_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lasm_JS_Web_WheelEvent_momentum(v_self_2305_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(lean_object* v_context_2308_, lean_object* v_d_2309_){
_start:
{
lean_object* v_received_2312_; 
if (lean_obj_tag(v_d_2309_) == 9)
{
lean_object* v_value_2326_; lean_object* v___x_2327_; 
v_value_2326_ = lean_ctor_get(v_d_2309_, 0);
lean_inc(v_value_2326_);
lean_dec_ref_known(v_d_2309_, 2);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_value_2326_);
return v___x_2327_;
}
else
{
if (lean_obj_tag(v_d_2309_) == 9)
{
lean_object* v_value_2328_; lean_object* v_description_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; 
v_value_2328_ = lean_ctor_get(v_d_2309_, 0);
v_description_2329_ = lean_ctor_get(v_d_2309_, 1);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_2331_ = lean_string_dec_eq(v_description_2329_, v___x_2330_);
if (v___x_2331_ == 0)
{
goto v___jp_2324_;
}
else
{
uint32_t v___x_2332_; uint64_t v___x_2333_; lean_object* v___x_2334_; uint32_t v___x_2335_; lean_object* v___x_2336_; 
lean_inc_n(v_value_2328_, 2);
lean_dec_ref_known(v_d_2309_, 2);
v___x_2332_ = 206;
v___x_2333_ = 0ULL;
v___x_2334_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2334_, 0, v_value_2328_);
lean_ctor_set(v___x_2334_, 1, v___x_2330_);
v___x_2335_ = lasm_js_value_handle(v_value_2328_);
lean_dec(v_value_2328_);
v___x_2336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2332_, v___x_2333_, v___x_2334_, v___x_2335_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; uint8_t v___x_2338_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2338_ = lean_string_validate_utf8(v_a_2337_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec(v_a_2337_);
v___x_2339_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_2340_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2339_);
v_received_2312_ = v___x_2340_;
goto v___jp_2311_;
}
else
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_string_from_utf8_unchecked(v_a_2337_);
v_received_2312_ = v___x_2341_;
goto v___jp_2311_;
}
}
else
{
lean_object* v___x_2342_; 
lean_dec_ref_known(v___x_2336_, 1);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_2312_ = v___x_2342_;
goto v___jp_2311_;
}
}
}
else
{
goto v___jp_2324_;
}
}
v___jp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2314_ = lean_string_append(v___x_2313_, v_context_2308_);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2316_ = lean_string_append(v___x_2314_, v___x_2315_);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0));
v___x_2318_ = lean_string_append(v___x_2316_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2320_ = lean_string_append(v___x_2318_, v___x_2319_);
v___x_2321_ = lean_string_append(v___x_2320_, v_received_2312_);
lean_dec_ref(v_received_2312_);
v___x_2322_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
return v___x_2323_;
}
v___jp_2324_:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lasm_JS_Data_describe(v_d_2309_);
v_received_2312_ = v___x_2325_;
goto v___jp_2311_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2343_, lean_object* v_d_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v_context_2343_, v_d_2344_);
lean_dec_ref(v_context_2343_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(lean_object* v_b_2347_, lean_object* v_args_2348_, uint8_t v_await_2349_){
_start:
{
uint64_t v___y_2352_; uint64_t v___y_2353_; uint64_t v___x_2388_; uint64_t v___y_2390_; 
v___x_2388_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2349_ == 0)
{
uint64_t v___x_2395_; 
v___x_2395_ = 0ULL;
v___y_2390_ = v___x_2395_;
goto v___jp_2389_;
}
else
{
uint64_t v___x_2396_; 
v___x_2396_ = 2ULL;
v___y_2390_ = v___x_2396_;
goto v___jp_2389_;
}
v___jp_2351_:
{
uint64_t v_flags_2354_; uint32_t v___x_2355_; lean_object* v___x_2356_; uint32_t v___x_2357_; lean_object* v___x_2358_; 
v_flags_2354_ = lean_uint64_lor(v___y_2352_, v___y_2353_);
v___x_2355_ = 214;
v___x_2356_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2347_, v_args_2348_);
v___x_2357_ = 0;
v___x_2358_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2355_, v_flags_2354_, v___x_2356_, v___x_2357_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v_a_2359_; lean_object* v___x_2360_; 
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
lean_inc(v_a_2359_);
lean_dec_ref_known(v___x_2358_, 1);
v___x_2360_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2359_);
lean_dec(v_a_2359_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2360_, 1);
v___x_2362_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2347_);
v___x_2363_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v___x_2362_, v_a_2361_);
lean_dec_ref(v___x_2362_);
return v___x_2363_;
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
v_a_2364_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2360_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2360_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2387_; 
v_a_2372_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2374_ = v___x_2358_;
v_isShared_2375_ = v_isSharedCheck_2387_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2358_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2387_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2385_; 
v___x_2376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2377_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2347_);
v___x_2378_ = lean_string_append(v___x_2376_, v___x_2377_);
lean_dec_ref(v___x_2377_);
v___x_2379_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2380_ = lean_string_append(v___x_2378_, v___x_2379_);
v___x_2381_ = lean_io_error_to_string(v_a_2372_);
v___x_2382_ = lean_string_append(v___x_2380_, v___x_2381_);
lean_dec_ref(v___x_2381_);
v___x_2383_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2382_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 0, v___x_2383_);
v___x_2385_ = v___x_2374_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2383_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
v___jp_2389_:
{
uint8_t v_construct_2391_; uint64_t v___x_2392_; 
v_construct_2391_ = lean_ctor_get_uint8(v_b_2347_, sizeof(void*)*4);
v___x_2392_ = lean_uint64_lor(v___x_2388_, v___y_2390_);
if (v_construct_2391_ == 0)
{
uint64_t v___x_2393_; 
v___x_2393_ = 0ULL;
v___y_2352_ = v___x_2392_;
v___y_2353_ = v___x_2393_;
goto v___jp_2351_;
}
else
{
uint64_t v___x_2394_; 
v___x_2394_ = 4ULL;
v___y_2352_ = v___x_2392_;
v___y_2353_ = v___x_2394_;
goto v___jp_2351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1___boxed(lean_object* v_b_2397_, lean_object* v_args_2398_, lean_object* v_await_2399_, lean_object* v_a_2400_){
_start:
{
uint8_t v_await_boxed_2401_; lean_object* v_res_2402_; 
v_await_boxed_2401_ = lean_unbox(v_await_2399_);
v_res_2402_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v_b_2397_, v_args_2398_, v_await_boxed_2401_);
lean_dec_ref(v_b_2397_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(lean_object* v_x_2403_){
_start:
{
if (lean_obj_tag(v_x_2403_) == 0)
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_box(0);
return v___x_2404_;
}
else
{
lean_object* v_val_2405_; lean_object* v_bubbles_2406_; lean_object* v_cancelable_2407_; lean_object* v_composed_2408_; lean_object* v_view_2409_; lean_object* v_detail_2410_; lean_object* v_which_2411_; lean_object* v_ctrlKey_2412_; lean_object* v_shiftKey_2413_; lean_object* v_altKey_2414_; lean_object* v_metaKey_2415_; lean_object* v_modifierAltGraph_2416_; lean_object* v_modifierCapsLock_2417_; lean_object* v_modifierFn_2418_; lean_object* v_modifierFnLock_2419_; lean_object* v_modifierHyper_2420_; lean_object* v_modifierNumLock_2421_; lean_object* v_modifierScrollLock_2422_; lean_object* v_modifierSuper_2423_; lean_object* v_modifierSymbol_2424_; lean_object* v_modifierSymbolLock_2425_; lean_object* v_key_2426_; lean_object* v_code_2427_; lean_object* v_location_2428_; lean_object* v_repeat_2429_; lean_object* v_isComposing_2430_; lean_object* v_charCode_2431_; lean_object* v_keyCode_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v_val_2405_ = lean_ctor_get(v_x_2403_, 0);
lean_inc(v_val_2405_);
lean_dec_ref_known(v_x_2403_, 1);
v_bubbles_2406_ = lean_ctor_get(v_val_2405_, 0);
lean_inc(v_bubbles_2406_);
v_cancelable_2407_ = lean_ctor_get(v_val_2405_, 1);
lean_inc(v_cancelable_2407_);
v_composed_2408_ = lean_ctor_get(v_val_2405_, 2);
lean_inc(v_composed_2408_);
v_view_2409_ = lean_ctor_get(v_val_2405_, 3);
lean_inc(v_view_2409_);
v_detail_2410_ = lean_ctor_get(v_val_2405_, 4);
lean_inc(v_detail_2410_);
v_which_2411_ = lean_ctor_get(v_val_2405_, 5);
lean_inc(v_which_2411_);
v_ctrlKey_2412_ = lean_ctor_get(v_val_2405_, 6);
lean_inc(v_ctrlKey_2412_);
v_shiftKey_2413_ = lean_ctor_get(v_val_2405_, 7);
lean_inc(v_shiftKey_2413_);
v_altKey_2414_ = lean_ctor_get(v_val_2405_, 8);
lean_inc(v_altKey_2414_);
v_metaKey_2415_ = lean_ctor_get(v_val_2405_, 9);
lean_inc(v_metaKey_2415_);
v_modifierAltGraph_2416_ = lean_ctor_get(v_val_2405_, 10);
lean_inc(v_modifierAltGraph_2416_);
v_modifierCapsLock_2417_ = lean_ctor_get(v_val_2405_, 11);
lean_inc(v_modifierCapsLock_2417_);
v_modifierFn_2418_ = lean_ctor_get(v_val_2405_, 12);
lean_inc(v_modifierFn_2418_);
v_modifierFnLock_2419_ = lean_ctor_get(v_val_2405_, 13);
lean_inc(v_modifierFnLock_2419_);
v_modifierHyper_2420_ = lean_ctor_get(v_val_2405_, 14);
lean_inc(v_modifierHyper_2420_);
v_modifierNumLock_2421_ = lean_ctor_get(v_val_2405_, 15);
lean_inc(v_modifierNumLock_2421_);
v_modifierScrollLock_2422_ = lean_ctor_get(v_val_2405_, 16);
lean_inc(v_modifierScrollLock_2422_);
v_modifierSuper_2423_ = lean_ctor_get(v_val_2405_, 17);
lean_inc(v_modifierSuper_2423_);
v_modifierSymbol_2424_ = lean_ctor_get(v_val_2405_, 18);
lean_inc(v_modifierSymbol_2424_);
v_modifierSymbolLock_2425_ = lean_ctor_get(v_val_2405_, 19);
lean_inc(v_modifierSymbolLock_2425_);
v_key_2426_ = lean_ctor_get(v_val_2405_, 20);
lean_inc(v_key_2426_);
v_code_2427_ = lean_ctor_get(v_val_2405_, 21);
lean_inc(v_code_2427_);
v_location_2428_ = lean_ctor_get(v_val_2405_, 22);
lean_inc(v_location_2428_);
v_repeat_2429_ = lean_ctor_get(v_val_2405_, 23);
lean_inc(v_repeat_2429_);
v_isComposing_2430_ = lean_ctor_get(v_val_2405_, 24);
lean_inc(v_isComposing_2430_);
v_charCode_2431_ = lean_ctor_get(v_val_2405_, 25);
lean_inc(v_charCode_2431_);
v_keyCode_2432_ = lean_ctor_get(v_val_2405_, 26);
lean_inc(v_keyCode_2432_);
lean_dec(v_val_2405_);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2434_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2406_);
lean_dec(v_bubbles_2406_);
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2437_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2407_);
lean_dec(v_cancelable_2407_);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2436_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
v___x_2439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2440_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2408_);
lean_dec(v_composed_2408_);
v___x_2441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2439_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2443_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2409_);
lean_dec(v_view_2409_);
v___x_2444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2442_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2446_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2410_);
v___x_2447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2445_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2449_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2411_);
v___x_2450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2452_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2412_);
lean_dec(v_ctrlKey_2412_);
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2451_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2455_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2413_);
lean_dec(v_shiftKey_2413_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2454_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2458_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2414_);
lean_dec(v_altKey_2414_);
v___x_2459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2457_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2461_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2415_);
lean_dec(v_metaKey_2415_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2460_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2464_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2416_);
lean_dec(v_modifierAltGraph_2416_);
v___x_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2467_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2417_);
lean_dec(v_modifierCapsLock_2417_);
v___x_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2466_);
lean_ctor_set(v___x_2468_, 1, v___x_2467_);
v___x_2469_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2470_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2418_);
lean_dec(v_modifierFn_2418_);
v___x_2471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2469_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v___x_2472_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2473_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2419_);
lean_dec(v_modifierFnLock_2419_);
v___x_2474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2472_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
v___x_2475_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2476_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2420_);
lean_dec(v_modifierHyper_2420_);
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2475_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2479_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2421_);
lean_dec(v_modifierNumLock_2421_);
v___x_2480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2478_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2482_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2422_);
lean_dec(v_modifierScrollLock_2422_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2485_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2423_);
lean_dec(v_modifierSuper_2423_);
v___x_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___x_2487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2488_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2424_);
lean_dec(v_modifierSymbol_2424_);
v___x_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2491_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2425_);
lean_dec(v_modifierSymbolLock_2425_);
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2494_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_2426_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2493_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___x_2496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2497_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_code_2427_);
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2500_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_location_2428_);
v___x_2501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2503_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_repeat_2429_);
lean_dec(v_repeat_2429_);
v___x_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2506_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_2430_);
lean_dec(v_isComposing_2430_);
v___x_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
v___x_2508_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2509_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_charCode_2431_);
v___x_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2508_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
v___x_2511_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2512_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_keyCode_2432_);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2511_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
v___x_2514_ = lean_unsigned_to_nat(27u);
v___x_2515_ = lean_mk_empty_array_with_capacity(v___x_2514_);
v___x_2516_ = lean_array_push(v___x_2515_, v___x_2435_);
v___x_2517_ = lean_array_push(v___x_2516_, v___x_2438_);
v___x_2518_ = lean_array_push(v___x_2517_, v___x_2441_);
v___x_2519_ = lean_array_push(v___x_2518_, v___x_2444_);
v___x_2520_ = lean_array_push(v___x_2519_, v___x_2447_);
v___x_2521_ = lean_array_push(v___x_2520_, v___x_2450_);
v___x_2522_ = lean_array_push(v___x_2521_, v___x_2453_);
v___x_2523_ = lean_array_push(v___x_2522_, v___x_2456_);
v___x_2524_ = lean_array_push(v___x_2523_, v___x_2459_);
v___x_2525_ = lean_array_push(v___x_2524_, v___x_2462_);
v___x_2526_ = lean_array_push(v___x_2525_, v___x_2465_);
v___x_2527_ = lean_array_push(v___x_2526_, v___x_2468_);
v___x_2528_ = lean_array_push(v___x_2527_, v___x_2471_);
v___x_2529_ = lean_array_push(v___x_2528_, v___x_2474_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2477_);
v___x_2531_ = lean_array_push(v___x_2530_, v___x_2480_);
v___x_2532_ = lean_array_push(v___x_2531_, v___x_2483_);
v___x_2533_ = lean_array_push(v___x_2532_, v___x_2486_);
v___x_2534_ = lean_array_push(v___x_2533_, v___x_2489_);
v___x_2535_ = lean_array_push(v___x_2534_, v___x_2492_);
v___x_2536_ = lean_array_push(v___x_2535_, v___x_2495_);
v___x_2537_ = lean_array_push(v___x_2536_, v___x_2498_);
v___x_2538_ = lean_array_push(v___x_2537_, v___x_2501_);
v___x_2539_ = lean_array_push(v___x_2538_, v___x_2504_);
v___x_2540_ = lean_array_push(v___x_2539_, v___x_2507_);
v___x_2541_ = lean_array_push(v___x_2540_, v___x_2510_);
v___x_2542_ = lean_array_push(v___x_2541_, v___x_2513_);
v___x_2543_ = l_Lasm_JS_Web_Support_fields(v___x_2542_);
lean_dec_ref(v___x_2542_);
return v___x_2543_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new(lean_object* v_type_2552_, lean_object* v_eventInitDict_2553_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2555_ = lean_unsigned_to_nat(2u);
v___x_2556_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_new___closed__2));
v___x_2557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2557_, 0, v_type_2552_);
v___x_2558_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(v_eventInitDict_2553_);
v___x_2559_ = lean_mk_empty_array_with_capacity(v___x_2555_);
v___x_2560_ = lean_array_push(v___x_2559_, v___x_2557_);
v___x_2561_ = lean_array_push(v___x_2560_, v___x_2558_);
v___x_2562_ = l_Lasm_JS_Web_Support_args(v___x_2561_);
v___x_2563_ = 0;
v___x_2564_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v___x_2556_, v___x_2562_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new___boxed(lean_object* v_type_2565_, lean_object* v_eventInitDict_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lasm_JS_Web_KeyboardEvent_new(v_type_2565_, v_eventInitDict_2566_);
return v_res_2568_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD(void){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_unsigned_to_nat(0u);
return v___x_2569_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT(void){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_unsigned_to_nat(1u);
return v___x_2570_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT(void){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_unsigned_to_nat(2u);
return v___x_2571_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD(void){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = lean_unsigned_to_nat(3u);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key(lean_object* v_self_2573_){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2576_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2573_, v___x_2575_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key___boxed(lean_object* v_self_2577_, lean_object* v_a_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Lasm_JS_Web_KeyboardEvent_key(v_self_2577_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code(lean_object* v_self_2580_){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2583_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2580_, v___x_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code___boxed(lean_object* v_self_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lasm_JS_Web_KeyboardEvent_code(v_self_2584_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location(lean_object* v_self_2587_){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2590_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2587_, v___x_2589_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location___boxed(lean_object* v_self_2591_, lean_object* v_a_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lasm_JS_Web_KeyboardEvent_location(v_self_2591_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey(lean_object* v_self_2594_){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2597_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2594_, v___x_2596_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey___boxed(lean_object* v_self_2598_, lean_object* v_a_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Lasm_JS_Web_KeyboardEvent_ctrlKey(v_self_2598_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey(lean_object* v_self_2601_){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2604_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2601_, v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey___boxed(lean_object* v_self_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lasm_JS_Web_KeyboardEvent_shiftKey(v_self_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey(lean_object* v_self_2608_){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2611_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2608_, v___x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey___boxed(lean_object* v_self_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lasm_JS_Web_KeyboardEvent_altKey(v_self_2612_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey(lean_object* v_self_2615_){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2618_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2615_, v___x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey___boxed(lean_object* v_self_2619_, lean_object* v_a_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Lasm_JS_Web_KeyboardEvent_metaKey(v_self_2619_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat(lean_object* v_self_2622_){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2624_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2625_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2622_, v___x_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat___boxed(lean_object* v_self_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_Lasm_JS_Web_KeyboardEvent_repeat(v_self_2626_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing(lean_object* v_self_2629_){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2632_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2629_, v___x_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing___boxed(lean_object* v_self_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lasm_JS_Web_KeyboardEvent_isComposing(v_self_2633_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode(lean_object* v_self_2636_){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2639_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2636_, v___x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode___boxed(lean_object* v_self_2640_, lean_object* v_a_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lasm_JS_Web_KeyboardEvent_charCode(v_self_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode(lean_object* v_self_2643_){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2646_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2643_, v___x_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode___boxed(lean_object* v_self_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v_res_2649_; 
v_res_2649_ = l_Lasm_JS_Web_KeyboardEvent_keyCode(v_self_2647_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState(lean_object* v_self_2650_, lean_object* v_keyArg_2651_){
_start:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2653_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_2654_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2654_, 0, v_keyArg_2651_);
v___x_2655_ = lean_unsigned_to_nat(1u);
v___x_2656_ = lean_mk_empty_array_with_capacity(v___x_2655_);
v___x_2657_ = lean_array_push(v___x_2656_, v___x_2654_);
v___x_2658_ = l_Lasm_JS_Web_Support_args(v___x_2657_);
v___x_2659_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_2650_, v___x_2653_, v___x_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState___boxed(lean_object* v_self_2660_, lean_object* v_keyArg_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_JS_Web_KeyboardEvent_getModifierState(v_self_2660_, v_keyArg_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(lean_object* v_self_2665_, lean_object* v_typeArg_2666_, lean_object* v_bubblesArg_2667_, lean_object* v_cancelableArg_2668_, lean_object* v_viewArg_2669_, lean_object* v_keyArg_2670_, lean_object* v_locationArg_2671_, lean_object* v_ctrlKey_2672_, lean_object* v_altKey_2673_, lean_object* v_shiftKey_2674_, lean_object* v_metaKey_2675_){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0));
v___x_2678_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2678_, 0, v_typeArg_2666_);
v___x_2679_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_2667_);
v___x_2680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_2668_);
v___x_2681_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_2669_);
v___x_2682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_keyArg_2670_);
v___x_2683_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_locationArg_2671_);
v___x_2684_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2672_);
v___x_2685_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2673_);
v___x_2686_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2674_);
v___x_2687_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2675_);
v___x_2688_ = lean_unsigned_to_nat(10u);
v___x_2689_ = lean_mk_empty_array_with_capacity(v___x_2688_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2678_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2679_);
v___x_2692_ = lean_array_push(v___x_2691_, v___x_2680_);
v___x_2693_ = lean_array_push(v___x_2692_, v___x_2681_);
v___x_2694_ = lean_array_push(v___x_2693_, v___x_2682_);
v___x_2695_ = lean_array_push(v___x_2694_, v___x_2683_);
v___x_2696_ = lean_array_push(v___x_2695_, v___x_2684_);
v___x_2697_ = lean_array_push(v___x_2696_, v___x_2685_);
v___x_2698_ = lean_array_push(v___x_2697_, v___x_2686_);
v___x_2699_ = lean_array_push(v___x_2698_, v___x_2687_);
v___x_2700_ = l_Lasm_JS_Web_Support_args(v___x_2699_);
v___x_2701_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2665_, v___x_2677_, v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___boxed(lean_object* v_self_2702_, lean_object* v_typeArg_2703_, lean_object* v_bubblesArg_2704_, lean_object* v_cancelableArg_2705_, lean_object* v_viewArg_2706_, lean_object* v_keyArg_2707_, lean_object* v_locationArg_2708_, lean_object* v_ctrlKey_2709_, lean_object* v_altKey_2710_, lean_object* v_shiftKey_2711_, lean_object* v_metaKey_2712_, lean_object* v_a_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(v_self_2702_, v_typeArg_2703_, v_bubblesArg_2704_, v_cancelableArg_2705_, v_viewArg_2706_, v_keyArg_2707_, v_locationArg_2708_, v_ctrlKey_2709_, v_altKey_2710_, v_shiftKey_2711_, v_metaKey_2712_);
lean_dec(v_metaKey_2712_);
lean_dec(v_shiftKey_2711_);
lean_dec(v_altKey_2710_);
lean_dec(v_ctrlKey_2709_);
lean_dec(v_viewArg_2706_);
lean_dec(v_cancelableArg_2705_);
lean_dec(v_bubblesArg_2704_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(lean_object* v_context_2715_, lean_object* v_d_2716_){
_start:
{
lean_object* v_received_2719_; 
if (lean_obj_tag(v_d_2716_) == 9)
{
lean_object* v_value_2733_; lean_object* v___x_2734_; 
v_value_2733_ = lean_ctor_get(v_d_2716_, 0);
lean_inc(v_value_2733_);
lean_dec_ref_known(v_d_2716_, 2);
v___x_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2734_, 0, v_value_2733_);
return v___x_2734_;
}
else
{
if (lean_obj_tag(v_d_2716_) == 9)
{
lean_object* v_value_2735_; lean_object* v_description_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v_value_2735_ = lean_ctor_get(v_d_2716_, 0);
v_description_2736_ = lean_ctor_get(v_d_2716_, 1);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_2738_ = lean_string_dec_eq(v_description_2736_, v___x_2737_);
if (v___x_2738_ == 0)
{
goto v___jp_2731_;
}
else
{
uint32_t v___x_2739_; uint64_t v___x_2740_; lean_object* v___x_2741_; uint32_t v___x_2742_; lean_object* v___x_2743_; 
lean_inc_n(v_value_2735_, 2);
lean_dec_ref_known(v_d_2716_, 2);
v___x_2739_ = 206;
v___x_2740_ = 0ULL;
v___x_2741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2741_, 0, v_value_2735_);
lean_ctor_set(v___x_2741_, 1, v___x_2737_);
v___x_2742_ = lasm_js_value_handle(v_value_2735_);
lean_dec(v_value_2735_);
v___x_2743_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2739_, v___x_2740_, v___x_2741_, v___x_2742_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; uint8_t v___x_2745_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref_known(v___x_2743_, 1);
v___x_2745_ = lean_string_validate_utf8(v_a_2744_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
lean_dec(v_a_2744_);
v___x_2746_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_2747_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2746_);
v_received_2719_ = v___x_2747_;
goto v___jp_2718_;
}
else
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_string_from_utf8_unchecked(v_a_2744_);
v_received_2719_ = v___x_2748_;
goto v___jp_2718_;
}
}
else
{
lean_object* v___x_2749_; 
lean_dec_ref_known(v___x_2743_, 1);
v___x_2749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_2719_ = v___x_2749_;
goto v___jp_2718_;
}
}
}
else
{
goto v___jp_2731_;
}
}
v___jp_2718_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2721_ = lean_string_append(v___x_2720_, v_context_2715_);
v___x_2722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2723_ = lean_string_append(v___x_2721_, v___x_2722_);
v___x_2724_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInputEvent___closed__0));
v___x_2725_ = lean_string_append(v___x_2723_, v___x_2724_);
v___x_2726_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2727_ = lean_string_append(v___x_2725_, v___x_2726_);
v___x_2728_ = lean_string_append(v___x_2727_, v_received_2719_);
lean_dec_ref(v_received_2719_);
v___x_2729_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
v___x_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
return v___x_2730_;
}
v___jp_2731_:
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Lasm_JS_Data_describe(v_d_2716_);
v_received_2719_ = v___x_2732_;
goto v___jp_2718_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2750_, lean_object* v_d_2751_, lean_object* v_a_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v_context_2750_, v_d_2751_);
lean_dec_ref(v_context_2750_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(lean_object* v_b_2754_, lean_object* v_args_2755_, uint8_t v_await_2756_){
_start:
{
uint64_t v___y_2759_; uint64_t v___y_2760_; uint64_t v___x_2795_; uint64_t v___y_2797_; 
v___x_2795_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2756_ == 0)
{
uint64_t v___x_2802_; 
v___x_2802_ = 0ULL;
v___y_2797_ = v___x_2802_;
goto v___jp_2796_;
}
else
{
uint64_t v___x_2803_; 
v___x_2803_ = 2ULL;
v___y_2797_ = v___x_2803_;
goto v___jp_2796_;
}
v___jp_2758_:
{
uint64_t v_flags_2761_; uint32_t v___x_2762_; lean_object* v___x_2763_; uint32_t v___x_2764_; lean_object* v___x_2765_; 
v_flags_2761_ = lean_uint64_lor(v___y_2759_, v___y_2760_);
v___x_2762_ = 214;
v___x_2763_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2754_, v_args_2755_);
v___x_2764_ = 0;
v___x_2765_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2762_, v_flags_2761_, v___x_2763_, v___x_2764_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2767_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v___x_2767_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2766_);
lean_dec(v_a_2766_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2754_);
v___x_2770_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v___x_2769_, v_a_2768_);
lean_dec_ref(v___x_2769_);
return v___x_2770_;
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
v_a_2771_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2767_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2767_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2794_; 
v_a_2779_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2781_ = v___x_2765_;
v_isShared_2782_ = v_isSharedCheck_2794_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2765_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2794_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2783_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2784_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2754_);
v___x_2785_ = lean_string_append(v___x_2783_, v___x_2784_);
lean_dec_ref(v___x_2784_);
v___x_2786_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2787_ = lean_string_append(v___x_2785_, v___x_2786_);
v___x_2788_ = lean_io_error_to_string(v_a_2779_);
v___x_2789_ = lean_string_append(v___x_2787_, v___x_2788_);
lean_dec_ref(v___x_2788_);
v___x_2790_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 0, v___x_2790_);
v___x_2792_ = v___x_2781_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
v___jp_2796_:
{
uint8_t v_construct_2798_; uint64_t v___x_2799_; 
v_construct_2798_ = lean_ctor_get_uint8(v_b_2754_, sizeof(void*)*4);
v___x_2799_ = lean_uint64_lor(v___x_2795_, v___y_2797_);
if (v_construct_2798_ == 0)
{
uint64_t v___x_2800_; 
v___x_2800_ = 0ULL;
v___y_2759_ = v___x_2799_;
v___y_2760_ = v___x_2800_;
goto v___jp_2758_;
}
else
{
uint64_t v___x_2801_; 
v___x_2801_ = 4ULL;
v___y_2759_ = v___x_2799_;
v___y_2760_ = v___x_2801_;
goto v___jp_2758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1___boxed(lean_object* v_b_2804_, lean_object* v_args_2805_, lean_object* v_await_2806_, lean_object* v_a_2807_){
_start:
{
uint8_t v_await_boxed_2808_; lean_object* v_res_2809_; 
v_await_boxed_2808_ = lean_unbox(v_await_2806_);
v_res_2809_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v_b_2804_, v_args_2805_, v_await_boxed_2808_);
lean_dec_ref(v_b_2804_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(lean_object* v_x_2810_){
_start:
{
if (lean_obj_tag(v_x_2810_) == 0)
{
lean_object* v___x_2811_; 
v___x_2811_ = lean_box(0);
return v___x_2811_;
}
else
{
lean_object* v_val_2812_; lean_object* v_bubbles_2813_; lean_object* v_cancelable_2814_; lean_object* v_composed_2815_; lean_object* v_view_2816_; lean_object* v_detail_2817_; lean_object* v_which_2818_; lean_object* v_data_2819_; lean_object* v_isComposing_2820_; lean_object* v_inputType_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; 
v_val_2812_ = lean_ctor_get(v_x_2810_, 0);
lean_inc(v_val_2812_);
lean_dec_ref_known(v_x_2810_, 1);
v_bubbles_2813_ = lean_ctor_get(v_val_2812_, 0);
lean_inc(v_bubbles_2813_);
v_cancelable_2814_ = lean_ctor_get(v_val_2812_, 1);
lean_inc(v_cancelable_2814_);
v_composed_2815_ = lean_ctor_get(v_val_2812_, 2);
lean_inc(v_composed_2815_);
v_view_2816_ = lean_ctor_get(v_val_2812_, 3);
lean_inc(v_view_2816_);
v_detail_2817_ = lean_ctor_get(v_val_2812_, 4);
lean_inc(v_detail_2817_);
v_which_2818_ = lean_ctor_get(v_val_2812_, 5);
lean_inc(v_which_2818_);
v_data_2819_ = lean_ctor_get(v_val_2812_, 6);
lean_inc(v_data_2819_);
v_isComposing_2820_ = lean_ctor_get(v_val_2812_, 7);
lean_inc(v_isComposing_2820_);
v_inputType_2821_ = lean_ctor_get(v_val_2812_, 8);
lean_inc(v_inputType_2821_);
lean_dec(v_val_2812_);
v___x_2822_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2823_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2813_);
lean_dec(v_bubbles_2813_);
v___x_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2822_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
v___x_2825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2826_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2814_);
lean_dec(v_cancelable_2814_);
v___x_2827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2825_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
v___x_2828_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2829_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2815_);
lean_dec(v_composed_2815_);
v___x_2830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2828_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2832_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2816_);
lean_dec(v_view_2816_);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2835_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2817_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2834_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
v___x_2837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2838_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2818_);
v___x_2839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
v___x_2840_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_2841_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_2819_);
v___x_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2840_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2844_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_2820_);
lean_dec(v_isComposing_2820_);
v___x_2845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_2847_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_inputType_2821_);
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_unsigned_to_nat(9u);
v___x_2850_ = lean_mk_empty_array_with_capacity(v___x_2849_);
v___x_2851_ = lean_array_push(v___x_2850_, v___x_2824_);
v___x_2852_ = lean_array_push(v___x_2851_, v___x_2827_);
v___x_2853_ = lean_array_push(v___x_2852_, v___x_2830_);
v___x_2854_ = lean_array_push(v___x_2853_, v___x_2833_);
v___x_2855_ = lean_array_push(v___x_2854_, v___x_2836_);
v___x_2856_ = lean_array_push(v___x_2855_, v___x_2839_);
v___x_2857_ = lean_array_push(v___x_2856_, v___x_2842_);
v___x_2858_ = lean_array_push(v___x_2857_, v___x_2845_);
v___x_2859_ = lean_array_push(v___x_2858_, v___x_2848_);
v___x_2860_ = l_Lasm_JS_Web_Support_fields(v___x_2859_);
lean_dec_ref(v___x_2859_);
return v___x_2860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new(lean_object* v_type_2869_, lean_object* v_eventInitDict_2870_){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; uint8_t v___x_2880_; lean_object* v___x_2881_; 
v___x_2872_ = lean_unsigned_to_nat(2u);
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Web_InputEvent_new___closed__2));
v___x_2874_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2874_, 0, v_type_2869_);
v___x_2875_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(v_eventInitDict_2870_);
v___x_2876_ = lean_mk_empty_array_with_capacity(v___x_2872_);
v___x_2877_ = lean_array_push(v___x_2876_, v___x_2874_);
v___x_2878_ = lean_array_push(v___x_2877_, v___x_2875_);
v___x_2879_ = l_Lasm_JS_Web_Support_args(v___x_2878_);
v___x_2880_ = 0;
v___x_2881_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v___x_2873_, v___x_2879_, v___x_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new___boxed(lean_object* v_type_2882_, lean_object* v_eventInitDict_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lasm_JS_Web_InputEvent_new(v_type_2882_, v_eventInitDict_2883_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data(lean_object* v_self_2886_){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2888_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_2889_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_2886_, v___x_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data___boxed(lean_object* v_self_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lasm_JS_Web_InputEvent_data(v_self_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing(lean_object* v_self_2893_){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2896_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2893_, v___x_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing___boxed(lean_object* v_self_2897_, lean_object* v_a_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lasm_JS_Web_InputEvent_isComposing(v_self_2897_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType(lean_object* v_self_2900_){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_2903_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2900_, v___x_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType___boxed(lean_object* v_self_2904_, lean_object* v_a_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l_Lasm_JS_Web_InputEvent_inputType(v_self_2904_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(lean_object* v_context_2907_, lean_object* v_d_2908_){
_start:
{
lean_object* v_received_2911_; 
if (lean_obj_tag(v_d_2908_) == 9)
{
lean_object* v_value_2925_; lean_object* v___x_2926_; 
v_value_2925_ = lean_ctor_get(v_d_2908_, 0);
lean_inc(v_value_2925_);
lean_dec_ref_known(v_d_2908_, 2);
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_value_2925_);
return v___x_2926_;
}
else
{
if (lean_obj_tag(v_d_2908_) == 9)
{
lean_object* v_value_2927_; lean_object* v_description_2928_; lean_object* v___x_2929_; uint8_t v___x_2930_; 
v_value_2927_ = lean_ctor_get(v_d_2908_, 0);
v_description_2928_ = lean_ctor_get(v_d_2908_, 1);
v___x_2929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_2930_ = lean_string_dec_eq(v_description_2928_, v___x_2929_);
if (v___x_2930_ == 0)
{
goto v___jp_2923_;
}
else
{
uint32_t v___x_2931_; uint64_t v___x_2932_; lean_object* v___x_2933_; uint32_t v___x_2934_; lean_object* v___x_2935_; 
lean_inc_n(v_value_2927_, 2);
lean_dec_ref_known(v_d_2908_, 2);
v___x_2931_ = 206;
v___x_2932_ = 0ULL;
v___x_2933_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2933_, 0, v_value_2927_);
lean_ctor_set(v___x_2933_, 1, v___x_2929_);
v___x_2934_ = lasm_js_value_handle(v_value_2927_);
lean_dec(v_value_2927_);
v___x_2935_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2931_, v___x_2932_, v___x_2933_, v___x_2934_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; uint8_t v___x_2937_; 
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
lean_dec_ref_known(v___x_2935_, 1);
v___x_2937_ = lean_string_validate_utf8(v_a_2936_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec(v_a_2936_);
v___x_2938_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_2939_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2938_);
v_received_2911_ = v___x_2939_;
goto v___jp_2910_;
}
else
{
lean_object* v___x_2940_; 
v___x_2940_ = lean_string_from_utf8_unchecked(v_a_2936_);
v_received_2911_ = v___x_2940_;
goto v___jp_2910_;
}
}
else
{
lean_object* v___x_2941_; 
lean_dec_ref_known(v___x_2935_, 1);
v___x_2941_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_2911_ = v___x_2941_;
goto v___jp_2910_;
}
}
}
else
{
goto v___jp_2923_;
}
}
v___jp_2910_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2913_ = lean_string_append(v___x_2912_, v_context_2907_);
v___x_2914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2915_ = lean_string_append(v___x_2913_, v___x_2914_);
v___x_2916_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFocusEvent___closed__0));
v___x_2917_ = lean_string_append(v___x_2915_, v___x_2916_);
v___x_2918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2919_ = lean_string_append(v___x_2917_, v___x_2918_);
v___x_2920_ = lean_string_append(v___x_2919_, v_received_2911_);
lean_dec_ref(v_received_2911_);
v___x_2921_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
v___x_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2921_);
return v___x_2922_;
}
v___jp_2923_:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_Lasm_JS_Data_describe(v_d_2908_);
v_received_2911_ = v___x_2924_;
goto v___jp_2910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2942_, lean_object* v_d_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v_context_2942_, v_d_2943_);
lean_dec_ref(v_context_2942_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(lean_object* v_b_2946_, lean_object* v_args_2947_, uint8_t v_await_2948_){
_start:
{
uint64_t v___y_2951_; uint64_t v___y_2952_; uint64_t v___x_2987_; uint64_t v___y_2989_; 
v___x_2987_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2948_ == 0)
{
uint64_t v___x_2994_; 
v___x_2994_ = 0ULL;
v___y_2989_ = v___x_2994_;
goto v___jp_2988_;
}
else
{
uint64_t v___x_2995_; 
v___x_2995_ = 2ULL;
v___y_2989_ = v___x_2995_;
goto v___jp_2988_;
}
v___jp_2950_:
{
uint64_t v_flags_2953_; uint32_t v___x_2954_; lean_object* v___x_2955_; uint32_t v___x_2956_; lean_object* v___x_2957_; 
v_flags_2953_ = lean_uint64_lor(v___y_2951_, v___y_2952_);
v___x_2954_ = 214;
v___x_2955_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2946_, v_args_2947_);
v___x_2956_ = 0;
v___x_2957_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2954_, v_flags_2953_, v___x_2955_, v___x_2956_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2959_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2959_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2958_);
lean_dec(v_a_2958_);
if (lean_obj_tag(v___x_2959_) == 0)
{
lean_object* v_a_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_a_2960_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v___x_2959_, 1);
v___x_2961_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2946_);
v___x_2962_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v___x_2961_, v_a_2960_);
lean_dec_ref(v___x_2961_);
return v___x_2962_;
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v_a_2963_ = lean_ctor_get(v___x_2959_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2959_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2959_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2959_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2986_; 
v_a_2971_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2973_ = v___x_2957_;
v_isShared_2974_ = v_isSharedCheck_2986_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2957_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2986_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2976_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2946_);
v___x_2977_ = lean_string_append(v___x_2975_, v___x_2976_);
lean_dec_ref(v___x_2976_);
v___x_2978_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2979_ = lean_string_append(v___x_2977_, v___x_2978_);
v___x_2980_ = lean_io_error_to_string(v_a_2971_);
v___x_2981_ = lean_string_append(v___x_2979_, v___x_2980_);
lean_dec_ref(v___x_2980_);
v___x_2982_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 0, v___x_2982_);
v___x_2984_ = v___x_2973_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v___x_2982_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
v___jp_2988_:
{
uint8_t v_construct_2990_; uint64_t v___x_2991_; 
v_construct_2990_ = lean_ctor_get_uint8(v_b_2946_, sizeof(void*)*4);
v___x_2991_ = lean_uint64_lor(v___x_2987_, v___y_2989_);
if (v_construct_2990_ == 0)
{
uint64_t v___x_2992_; 
v___x_2992_ = 0ULL;
v___y_2951_ = v___x_2991_;
v___y_2952_ = v___x_2992_;
goto v___jp_2950_;
}
else
{
uint64_t v___x_2993_; 
v___x_2993_ = 4ULL;
v___y_2951_ = v___x_2991_;
v___y_2952_ = v___x_2993_;
goto v___jp_2950_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1___boxed(lean_object* v_b_2996_, lean_object* v_args_2997_, lean_object* v_await_2998_, lean_object* v_a_2999_){
_start:
{
uint8_t v_await_boxed_3000_; lean_object* v_res_3001_; 
v_await_boxed_3000_ = lean_unbox(v_await_2998_);
v_res_3001_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v_b_2996_, v_args_2997_, v_await_boxed_3000_);
lean_dec_ref(v_b_2996_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(lean_object* v_x_3002_){
_start:
{
if (lean_obj_tag(v_x_3002_) == 0)
{
lean_object* v___x_3003_; 
v___x_3003_ = lean_box(0);
return v___x_3003_;
}
else
{
lean_object* v_val_3004_; lean_object* v_bubbles_3005_; lean_object* v_cancelable_3006_; lean_object* v_composed_3007_; lean_object* v_view_3008_; lean_object* v_detail_3009_; lean_object* v_which_3010_; lean_object* v_relatedTarget_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_val_3004_ = lean_ctor_get(v_x_3002_, 0);
lean_inc(v_val_3004_);
lean_dec_ref_known(v_x_3002_, 1);
v_bubbles_3005_ = lean_ctor_get(v_val_3004_, 0);
lean_inc(v_bubbles_3005_);
v_cancelable_3006_ = lean_ctor_get(v_val_3004_, 1);
lean_inc(v_cancelable_3006_);
v_composed_3007_ = lean_ctor_get(v_val_3004_, 2);
lean_inc(v_composed_3007_);
v_view_3008_ = lean_ctor_get(v_val_3004_, 3);
lean_inc(v_view_3008_);
v_detail_3009_ = lean_ctor_get(v_val_3004_, 4);
lean_inc(v_detail_3009_);
v_which_3010_ = lean_ctor_get(v_val_3004_, 5);
lean_inc(v_which_3010_);
v_relatedTarget_3011_ = lean_ctor_get(v_val_3004_, 6);
lean_inc(v_relatedTarget_3011_);
lean_dec(v_val_3004_);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3013_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3005_);
lean_dec(v_bubbles_3005_);
v___x_3014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3012_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3016_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3006_);
lean_dec(v_cancelable_3006_);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3015_);
lean_ctor_set(v___x_3017_, 1, v___x_3016_);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3019_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3007_);
lean_dec(v_composed_3007_);
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3022_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3008_);
lean_dec(v_view_3008_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3021_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3025_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3009_);
v___x_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3024_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3028_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3010_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3027_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3031_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3011_);
lean_dec(v_relatedTarget_3011_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3030_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = lean_unsigned_to_nat(7u);
v___x_3034_ = lean_mk_empty_array_with_capacity(v___x_3033_);
v___x_3035_ = lean_array_push(v___x_3034_, v___x_3014_);
v___x_3036_ = lean_array_push(v___x_3035_, v___x_3017_);
v___x_3037_ = lean_array_push(v___x_3036_, v___x_3020_);
v___x_3038_ = lean_array_push(v___x_3037_, v___x_3023_);
v___x_3039_ = lean_array_push(v___x_3038_, v___x_3026_);
v___x_3040_ = lean_array_push(v___x_3039_, v___x_3029_);
v___x_3041_ = lean_array_push(v___x_3040_, v___x_3032_);
v___x_3042_ = l_Lasm_JS_Web_Support_fields(v___x_3041_);
lean_dec_ref(v___x_3041_);
return v___x_3042_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new(lean_object* v_type_3051_, lean_object* v_eventInitDict_3052_){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; lean_object* v___x_3063_; 
v___x_3054_ = lean_unsigned_to_nat(2u);
v___x_3055_ = ((lean_object*)(l_Lasm_JS_Web_FocusEvent_new___closed__2));
v___x_3056_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3056_, 0, v_type_3051_);
v___x_3057_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(v_eventInitDict_3052_);
v___x_3058_ = lean_mk_empty_array_with_capacity(v___x_3054_);
v___x_3059_ = lean_array_push(v___x_3058_, v___x_3056_);
v___x_3060_ = lean_array_push(v___x_3059_, v___x_3057_);
v___x_3061_ = l_Lasm_JS_Web_Support_args(v___x_3060_);
v___x_3062_ = 0;
v___x_3063_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v___x_3055_, v___x_3061_, v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new___boxed(lean_object* v_type_3064_, lean_object* v_eventInitDict_3065_, lean_object* v_a_3066_){
_start:
{
lean_object* v_res_3067_; 
v_res_3067_ = l_Lasm_JS_Web_FocusEvent_new(v_type_3064_, v_eventInitDict_3065_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget(lean_object* v_self_3068_){
_start:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3071_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_3068_, v___x_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget___boxed(lean_object* v_self_3072_, lean_object* v_a_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l_Lasm_JS_Web_FocusEvent_relatedTarget(v_self_3072_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(lean_object* v_context_3075_, lean_object* v_d_3076_){
_start:
{
lean_object* v_received_3079_; 
if (lean_obj_tag(v_d_3076_) == 9)
{
lean_object* v_value_3093_; lean_object* v___x_3094_; 
v_value_3093_ = lean_ctor_get(v_d_3076_, 0);
lean_inc(v_value_3093_);
lean_dec_ref_known(v_d_3076_, 2);
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v_value_3093_);
return v___x_3094_;
}
else
{
if (lean_obj_tag(v_d_3076_) == 9)
{
lean_object* v_value_3095_; lean_object* v_description_3096_; lean_object* v___x_3097_; uint8_t v___x_3098_; 
v_value_3095_ = lean_ctor_get(v_d_3076_, 0);
v_description_3096_ = lean_ctor_get(v_d_3076_, 1);
v___x_3097_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3098_ = lean_string_dec_eq(v_description_3096_, v___x_3097_);
if (v___x_3098_ == 0)
{
goto v___jp_3091_;
}
else
{
uint32_t v___x_3099_; uint64_t v___x_3100_; lean_object* v___x_3101_; uint32_t v___x_3102_; lean_object* v___x_3103_; 
lean_inc_n(v_value_3095_, 2);
lean_dec_ref_known(v_d_3076_, 2);
v___x_3099_ = 206;
v___x_3100_ = 0ULL;
v___x_3101_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3101_, 0, v_value_3095_);
lean_ctor_set(v___x_3101_, 1, v___x_3097_);
v___x_3102_ = lasm_js_value_handle(v_value_3095_);
lean_dec(v_value_3095_);
v___x_3103_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3099_, v___x_3100_, v___x_3101_, v___x_3102_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; uint8_t v___x_3105_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3103_, 1);
v___x_3105_ = lean_string_validate_utf8(v_a_3104_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_dec(v_a_3104_);
v___x_3106_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_3107_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3106_);
v_received_3079_ = v___x_3107_;
goto v___jp_3078_;
}
else
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_string_from_utf8_unchecked(v_a_3104_);
v_received_3079_ = v___x_3108_;
goto v___jp_3078_;
}
}
else
{
lean_object* v___x_3109_; 
lean_dec_ref_known(v___x_3103_, 1);
v___x_3109_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_3079_ = v___x_3109_;
goto v___jp_3078_;
}
}
}
else
{
goto v___jp_3091_;
}
}
v___jp_3078_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3080_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3081_ = lean_string_append(v___x_3080_, v_context_3075_);
v___x_3082_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3083_ = lean_string_append(v___x_3081_, v___x_3082_);
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0));
v___x_3085_ = lean_string_append(v___x_3083_, v___x_3084_);
v___x_3086_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3087_ = lean_string_append(v___x_3085_, v___x_3086_);
v___x_3088_ = lean_string_append(v___x_3087_, v_received_3079_);
lean_dec_ref(v_received_3079_);
v___x_3089_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
v___x_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
return v___x_3090_;
}
v___jp_3091_:
{
lean_object* v___x_3092_; 
v___x_3092_ = l_Lasm_JS_Data_describe(v_d_3076_);
v_received_3079_ = v___x_3092_;
goto v___jp_3078_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3110_, lean_object* v_d_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v_context_3110_, v_d_3111_);
lean_dec_ref(v_context_3110_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(lean_object* v_b_3114_, lean_object* v_args_3115_, uint8_t v_await_3116_){
_start:
{
uint64_t v___y_3119_; uint64_t v___y_3120_; uint64_t v___x_3155_; uint64_t v___y_3157_; 
v___x_3155_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3116_ == 0)
{
uint64_t v___x_3162_; 
v___x_3162_ = 0ULL;
v___y_3157_ = v___x_3162_;
goto v___jp_3156_;
}
else
{
uint64_t v___x_3163_; 
v___x_3163_ = 2ULL;
v___y_3157_ = v___x_3163_;
goto v___jp_3156_;
}
v___jp_3118_:
{
uint64_t v_flags_3121_; uint32_t v___x_3122_; lean_object* v___x_3123_; uint32_t v___x_3124_; lean_object* v___x_3125_; 
v_flags_3121_ = lean_uint64_lor(v___y_3119_, v___y_3120_);
v___x_3122_ = 214;
v___x_3123_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3114_, v_args_3115_);
v___x_3124_ = 0;
v___x_3125_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3122_, v_flags_3121_, v___x_3123_, v___x_3124_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3127_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3126_);
lean_dec(v_a_3126_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3128_);
lean_dec_ref_known(v___x_3127_, 1);
v___x_3129_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3114_);
v___x_3130_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v___x_3129_, v_a_3128_);
lean_dec_ref(v___x_3129_);
return v___x_3130_;
}
else
{
lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3138_; 
v_a_3131_ = lean_ctor_get(v___x_3127_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3133_ = v___x_3127_;
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v___x_3127_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3136_; 
if (v_isShared_3134_ == 0)
{
v___x_3136_ = v___x_3133_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_a_3131_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3154_; 
v_a_3139_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3141_ = v___x_3125_;
v_isShared_3142_ = v_isSharedCheck_3154_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3125_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3154_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3152_; 
v___x_3143_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3144_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3114_);
v___x_3145_ = lean_string_append(v___x_3143_, v___x_3144_);
lean_dec_ref(v___x_3144_);
v___x_3146_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3147_ = lean_string_append(v___x_3145_, v___x_3146_);
v___x_3148_ = lean_io_error_to_string(v_a_3139_);
v___x_3149_ = lean_string_append(v___x_3147_, v___x_3148_);
lean_dec_ref(v___x_3148_);
v___x_3150_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3150_);
v___x_3152_ = v___x_3141_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v___x_3150_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
v___jp_3156_:
{
uint8_t v_construct_3158_; uint64_t v___x_3159_; 
v_construct_3158_ = lean_ctor_get_uint8(v_b_3114_, sizeof(void*)*4);
v___x_3159_ = lean_uint64_lor(v___x_3155_, v___y_3157_);
if (v_construct_3158_ == 0)
{
uint64_t v___x_3160_; 
v___x_3160_ = 0ULL;
v___y_3119_ = v___x_3159_;
v___y_3120_ = v___x_3160_;
goto v___jp_3118_;
}
else
{
uint64_t v___x_3161_; 
v___x_3161_ = 4ULL;
v___y_3119_ = v___x_3159_;
v___y_3120_ = v___x_3161_;
goto v___jp_3118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1___boxed(lean_object* v_b_3164_, lean_object* v_args_3165_, lean_object* v_await_3166_, lean_object* v_a_3167_){
_start:
{
uint8_t v_await_boxed_3168_; lean_object* v_res_3169_; 
v_await_boxed_3168_ = lean_unbox(v_await_3166_);
v_res_3169_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v_b_3164_, v_args_3165_, v_await_boxed_3168_);
lean_dec_ref(v_b_3164_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(lean_object* v_x_3170_){
_start:
{
if (lean_obj_tag(v_x_3170_) == 0)
{
lean_object* v___x_3171_; 
v___x_3171_ = lean_box(0);
return v___x_3171_;
}
else
{
lean_object* v_val_3172_; lean_object* v_bubbles_3173_; lean_object* v_cancelable_3174_; lean_object* v_composed_3175_; lean_object* v_view_3176_; lean_object* v_detail_3177_; lean_object* v_which_3178_; lean_object* v_data_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v_val_3172_ = lean_ctor_get(v_x_3170_, 0);
lean_inc(v_val_3172_);
lean_dec_ref_known(v_x_3170_, 1);
v_bubbles_3173_ = lean_ctor_get(v_val_3172_, 0);
lean_inc(v_bubbles_3173_);
v_cancelable_3174_ = lean_ctor_get(v_val_3172_, 1);
lean_inc(v_cancelable_3174_);
v_composed_3175_ = lean_ctor_get(v_val_3172_, 2);
lean_inc(v_composed_3175_);
v_view_3176_ = lean_ctor_get(v_val_3172_, 3);
lean_inc(v_view_3176_);
v_detail_3177_ = lean_ctor_get(v_val_3172_, 4);
lean_inc(v_detail_3177_);
v_which_3178_ = lean_ctor_get(v_val_3172_, 5);
lean_inc(v_which_3178_);
v_data_3179_ = lean_ctor_get(v_val_3172_, 6);
lean_inc(v_data_3179_);
lean_dec(v_val_3172_);
v___x_3180_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3173_);
lean_dec(v_bubbles_3173_);
v___x_3182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3180_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3184_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3174_);
lean_dec(v_cancelable_3174_);
v___x_3185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3183_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
v___x_3186_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3175_);
lean_dec(v_composed_3175_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3186_);
lean_ctor_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3190_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3176_);
lean_dec(v_view_3176_);
v___x_3191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3189_);
lean_ctor_set(v___x_3191_, 1, v___x_3190_);
v___x_3192_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3177_);
v___x_3194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3192_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3178_);
v___x_3197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3195_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3199_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_3179_);
v___x_3200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3198_);
lean_ctor_set(v___x_3200_, 1, v___x_3199_);
v___x_3201_ = lean_unsigned_to_nat(7u);
v___x_3202_ = lean_mk_empty_array_with_capacity(v___x_3201_);
v___x_3203_ = lean_array_push(v___x_3202_, v___x_3182_);
v___x_3204_ = lean_array_push(v___x_3203_, v___x_3185_);
v___x_3205_ = lean_array_push(v___x_3204_, v___x_3188_);
v___x_3206_ = lean_array_push(v___x_3205_, v___x_3191_);
v___x_3207_ = lean_array_push(v___x_3206_, v___x_3194_);
v___x_3208_ = lean_array_push(v___x_3207_, v___x_3197_);
v___x_3209_ = lean_array_push(v___x_3208_, v___x_3200_);
v___x_3210_ = l_Lasm_JS_Web_Support_fields(v___x_3209_);
lean_dec_ref(v___x_3209_);
return v___x_3210_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new(lean_object* v_type_3219_, lean_object* v_eventInitDict_3220_){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; lean_object* v___x_3231_; 
v___x_3222_ = lean_unsigned_to_nat(2u);
v___x_3223_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_new___closed__2));
v___x_3224_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3224_, 0, v_type_3219_);
v___x_3225_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(v_eventInitDict_3220_);
v___x_3226_ = lean_mk_empty_array_with_capacity(v___x_3222_);
v___x_3227_ = lean_array_push(v___x_3226_, v___x_3224_);
v___x_3228_ = lean_array_push(v___x_3227_, v___x_3225_);
v___x_3229_ = l_Lasm_JS_Web_Support_args(v___x_3228_);
v___x_3230_ = 0;
v___x_3231_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v___x_3223_, v___x_3229_, v___x_3230_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new___boxed(lean_object* v_type_3232_, lean_object* v_eventInitDict_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l_Lasm_JS_Web_CompositionEvent_new(v_type_3232_, v_eventInitDict_3233_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data(lean_object* v_self_3236_){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3239_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3236_, v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data___boxed(lean_object* v_self_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lasm_JS_Web_CompositionEvent_data(v_self_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(lean_object* v_self_3244_, lean_object* v_typeArg_3245_, lean_object* v_bubblesArg_3246_, lean_object* v_cancelableArg_3247_, lean_object* v_viewArg_3248_, lean_object* v_dataArg_3249_){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3251_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0));
v___x_3252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3252_, 0, v_typeArg_3245_);
v___x_3253_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_3246_);
v___x_3254_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_3247_);
v___x_3255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_3248_);
v___x_3256_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dataArg_3249_);
v___x_3257_ = lean_unsigned_to_nat(5u);
v___x_3258_ = lean_mk_empty_array_with_capacity(v___x_3257_);
v___x_3259_ = lean_array_push(v___x_3258_, v___x_3252_);
v___x_3260_ = lean_array_push(v___x_3259_, v___x_3253_);
v___x_3261_ = lean_array_push(v___x_3260_, v___x_3254_);
v___x_3262_ = lean_array_push(v___x_3261_, v___x_3255_);
v___x_3263_ = lean_array_push(v___x_3262_, v___x_3256_);
v___x_3264_ = l_Lasm_JS_Web_Support_args(v___x_3263_);
v___x_3265_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3244_, v___x_3251_, v___x_3264_);
return v___x_3265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___boxed(lean_object* v_self_3266_, lean_object* v_typeArg_3267_, lean_object* v_bubblesArg_3268_, lean_object* v_cancelableArg_3269_, lean_object* v_viewArg_3270_, lean_object* v_dataArg_3271_, lean_object* v_a_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(v_self_3266_, v_typeArg_3267_, v_bubblesArg_3268_, v_cancelableArg_3269_, v_viewArg_3270_, v_dataArg_3271_);
lean_dec(v_viewArg_3270_);
lean_dec(v_cancelableArg_3269_);
lean_dec(v_bubblesArg_3268_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(size_t v_sz_3274_, size_t v_i_3275_, lean_object* v_bs_3276_){
_start:
{
uint8_t v___x_3277_; 
v___x_3277_ = lean_usize_dec_lt(v_i_3275_, v_sz_3274_);
if (v___x_3277_ == 0)
{
return v_bs_3276_;
}
else
{
lean_object* v_v_3278_; lean_object* v___x_3279_; lean_object* v_bs_x27_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; size_t v___x_3283_; size_t v___x_3284_; lean_object* v___x_3285_; 
v_v_3278_ = lean_array_uget(v_bs_3276_, v_i_3275_);
v___x_3279_ = lean_unsigned_to_nat(0u);
v_bs_x27_3280_ = lean_array_uset(v_bs_3276_, v_i_3275_, v___x_3279_);
v___x_3281_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3282_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3282_, 0, v_v_3278_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = ((size_t)1ULL);
v___x_3284_ = lean_usize_add(v_i_3275_, v___x_3283_);
v___x_3285_ = lean_array_uset(v_bs_x27_3280_, v_i_3275_, v___x_3282_);
v_i_3275_ = v___x_3284_;
v_bs_3276_ = v___x_3285_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3287_, lean_object* v_i_3288_, lean_object* v_bs_3289_){
_start:
{
size_t v_sz_boxed_3290_; size_t v_i_boxed_3291_; lean_object* v_res_3292_; 
v_sz_boxed_3290_ = lean_unbox_usize(v_sz_3287_);
lean_dec(v_sz_3287_);
v_i_boxed_3291_ = lean_unbox_usize(v_i_3288_);
lean_dec(v_i_3288_);
v_res_3292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_boxed_3290_, v_i_boxed_3291_, v_bs_3289_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(lean_object* v_x_3293_){
_start:
{
if (lean_obj_tag(v_x_3293_) == 0)
{
lean_object* v___x_3294_; 
v___x_3294_ = lean_box(0);
return v___x_3294_;
}
else
{
lean_object* v_val_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3305_; 
v_val_3295_ = lean_ctor_get(v_x_3293_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v_x_3293_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3297_ = v_x_3293_;
v_isShared_3298_ = v_isSharedCheck_3305_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_val_3295_);
lean_dec(v_x_3293_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3305_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
size_t v_sz_3299_; size_t v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3303_; 
v_sz_3299_ = lean_array_size(v_val_3295_);
v___x_3300_ = ((size_t)0ULL);
v___x_3301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_3299_, v___x_3300_, v_val_3295_);
if (v_isShared_3298_ == 0)
{
lean_ctor_set_tag(v___x_3297_, 7);
lean_ctor_set(v___x_3297_, 0, v___x_3301_);
v___x_3303_ = v___x_3297_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v___x_3301_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(lean_object* v_x_3306_){
_start:
{
if (lean_obj_tag(v_x_3306_) == 0)
{
lean_object* v___x_3307_; 
v___x_3307_ = lean_box(0);
return v___x_3307_;
}
else
{
lean_object* v_val_3308_; lean_object* v_bubbles_3309_; lean_object* v_cancelable_3310_; lean_object* v_composed_3311_; lean_object* v_view_3312_; lean_object* v_detail_3313_; lean_object* v_which_3314_; lean_object* v_ctrlKey_3315_; lean_object* v_shiftKey_3316_; lean_object* v_altKey_3317_; lean_object* v_metaKey_3318_; lean_object* v_modifierAltGraph_3319_; lean_object* v_modifierCapsLock_3320_; lean_object* v_modifierFn_3321_; lean_object* v_modifierFnLock_3322_; lean_object* v_modifierHyper_3323_; lean_object* v_modifierNumLock_3324_; lean_object* v_modifierScrollLock_3325_; lean_object* v_modifierSuper_3326_; lean_object* v_modifierSymbol_3327_; lean_object* v_modifierSymbolLock_3328_; lean_object* v_screenX_3329_; lean_object* v_screenY_3330_; lean_object* v_clientX_3331_; lean_object* v_clientY_3332_; lean_object* v_button_3333_; lean_object* v_buttons_3334_; lean_object* v_relatedTarget_3335_; lean_object* v_pointerId_3336_; lean_object* v_width_3337_; lean_object* v_height_3338_; lean_object* v_pressure_3339_; lean_object* v_tangentialPressure_3340_; lean_object* v_tiltX_3341_; lean_object* v_tiltY_3342_; lean_object* v_twist_3343_; lean_object* v_altitudeAngle_3344_; lean_object* v_azimuthAngle_3345_; lean_object* v_pointerType_3346_; lean_object* v_isPrimary_3347_; lean_object* v_persistentDeviceId_3348_; lean_object* v_coalescedEvents_3349_; lean_object* v_predictedEvents_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v_val_3308_ = lean_ctor_get(v_x_3306_, 0);
lean_inc(v_val_3308_);
lean_dec_ref_known(v_x_3306_, 1);
v_bubbles_3309_ = lean_ctor_get(v_val_3308_, 0);
lean_inc(v_bubbles_3309_);
v_cancelable_3310_ = lean_ctor_get(v_val_3308_, 1);
lean_inc(v_cancelable_3310_);
v_composed_3311_ = lean_ctor_get(v_val_3308_, 2);
lean_inc(v_composed_3311_);
v_view_3312_ = lean_ctor_get(v_val_3308_, 3);
lean_inc(v_view_3312_);
v_detail_3313_ = lean_ctor_get(v_val_3308_, 4);
lean_inc(v_detail_3313_);
v_which_3314_ = lean_ctor_get(v_val_3308_, 5);
lean_inc(v_which_3314_);
v_ctrlKey_3315_ = lean_ctor_get(v_val_3308_, 6);
lean_inc(v_ctrlKey_3315_);
v_shiftKey_3316_ = lean_ctor_get(v_val_3308_, 7);
lean_inc(v_shiftKey_3316_);
v_altKey_3317_ = lean_ctor_get(v_val_3308_, 8);
lean_inc(v_altKey_3317_);
v_metaKey_3318_ = lean_ctor_get(v_val_3308_, 9);
lean_inc(v_metaKey_3318_);
v_modifierAltGraph_3319_ = lean_ctor_get(v_val_3308_, 10);
lean_inc(v_modifierAltGraph_3319_);
v_modifierCapsLock_3320_ = lean_ctor_get(v_val_3308_, 11);
lean_inc(v_modifierCapsLock_3320_);
v_modifierFn_3321_ = lean_ctor_get(v_val_3308_, 12);
lean_inc(v_modifierFn_3321_);
v_modifierFnLock_3322_ = lean_ctor_get(v_val_3308_, 13);
lean_inc(v_modifierFnLock_3322_);
v_modifierHyper_3323_ = lean_ctor_get(v_val_3308_, 14);
lean_inc(v_modifierHyper_3323_);
v_modifierNumLock_3324_ = lean_ctor_get(v_val_3308_, 15);
lean_inc(v_modifierNumLock_3324_);
v_modifierScrollLock_3325_ = lean_ctor_get(v_val_3308_, 16);
lean_inc(v_modifierScrollLock_3325_);
v_modifierSuper_3326_ = lean_ctor_get(v_val_3308_, 17);
lean_inc(v_modifierSuper_3326_);
v_modifierSymbol_3327_ = lean_ctor_get(v_val_3308_, 18);
lean_inc(v_modifierSymbol_3327_);
v_modifierSymbolLock_3328_ = lean_ctor_get(v_val_3308_, 19);
lean_inc(v_modifierSymbolLock_3328_);
v_screenX_3329_ = lean_ctor_get(v_val_3308_, 20);
lean_inc(v_screenX_3329_);
v_screenY_3330_ = lean_ctor_get(v_val_3308_, 21);
lean_inc(v_screenY_3330_);
v_clientX_3331_ = lean_ctor_get(v_val_3308_, 22);
lean_inc(v_clientX_3331_);
v_clientY_3332_ = lean_ctor_get(v_val_3308_, 23);
lean_inc(v_clientY_3332_);
v_button_3333_ = lean_ctor_get(v_val_3308_, 24);
lean_inc(v_button_3333_);
v_buttons_3334_ = lean_ctor_get(v_val_3308_, 25);
lean_inc(v_buttons_3334_);
v_relatedTarget_3335_ = lean_ctor_get(v_val_3308_, 26);
lean_inc(v_relatedTarget_3335_);
v_pointerId_3336_ = lean_ctor_get(v_val_3308_, 27);
lean_inc(v_pointerId_3336_);
v_width_3337_ = lean_ctor_get(v_val_3308_, 28);
lean_inc(v_width_3337_);
v_height_3338_ = lean_ctor_get(v_val_3308_, 29);
lean_inc(v_height_3338_);
v_pressure_3339_ = lean_ctor_get(v_val_3308_, 30);
lean_inc(v_pressure_3339_);
v_tangentialPressure_3340_ = lean_ctor_get(v_val_3308_, 31);
lean_inc(v_tangentialPressure_3340_);
v_tiltX_3341_ = lean_ctor_get(v_val_3308_, 32);
lean_inc(v_tiltX_3341_);
v_tiltY_3342_ = lean_ctor_get(v_val_3308_, 33);
lean_inc(v_tiltY_3342_);
v_twist_3343_ = lean_ctor_get(v_val_3308_, 34);
lean_inc(v_twist_3343_);
v_altitudeAngle_3344_ = lean_ctor_get(v_val_3308_, 35);
lean_inc(v_altitudeAngle_3344_);
v_azimuthAngle_3345_ = lean_ctor_get(v_val_3308_, 36);
lean_inc(v_azimuthAngle_3345_);
v_pointerType_3346_ = lean_ctor_get(v_val_3308_, 37);
lean_inc(v_pointerType_3346_);
v_isPrimary_3347_ = lean_ctor_get(v_val_3308_, 38);
lean_inc(v_isPrimary_3347_);
v_persistentDeviceId_3348_ = lean_ctor_get(v_val_3308_, 39);
lean_inc(v_persistentDeviceId_3348_);
v_coalescedEvents_3349_ = lean_ctor_get(v_val_3308_, 40);
lean_inc(v_coalescedEvents_3349_);
v_predictedEvents_3350_ = lean_ctor_get(v_val_3308_, 41);
lean_inc(v_predictedEvents_3350_);
lean_dec(v_val_3308_);
v___x_3351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_3352_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_azimuthAngle_3345_);
lean_dec(v_azimuthAngle_3345_);
v___x_3353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3351_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_3355_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pointerType_3346_);
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3354_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_3358_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isPrimary_3347_);
lean_dec(v_isPrimary_3347_);
v___x_3359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3357_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_3361_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_persistentDeviceId_3348_);
v___x_3362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3360_);
lean_ctor_set(v___x_3362_, 1, v___x_3361_);
v___x_3363_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4));
v___x_3364_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_coalescedEvents_3349_);
v___x_3365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3363_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5));
v___x_3367_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_predictedEvents_3350_);
v___x_3368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3366_);
lean_ctor_set(v___x_3368_, 1, v___x_3367_);
v___x_3369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_3370_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_tangentialPressure_3340_);
lean_dec(v_tangentialPressure_3340_);
v___x_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3369_);
lean_ctor_set(v___x_3371_, 1, v___x_3370_);
v___x_3372_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_3373_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltX_3341_);
v___x_3374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3372_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_3376_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltY_3342_);
v___x_3377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3375_);
lean_ctor_set(v___x_3377_, 1, v___x_3376_);
v___x_3378_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_3379_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_twist_3343_);
v___x_3380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3378_);
lean_ctor_set(v___x_3380_, 1, v___x_3379_);
v___x_3381_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_3382_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_altitudeAngle_3344_);
lean_dec(v_altitudeAngle_3344_);
v___x_3383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3381_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
v___x_3384_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3385_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3335_);
lean_dec(v_relatedTarget_3335_);
v___x_3386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3384_);
lean_ctor_set(v___x_3386_, 1, v___x_3385_);
v___x_3387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_3388_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_pointerId_3336_);
v___x_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3387_);
lean_ctor_set(v___x_3389_, 1, v___x_3388_);
v___x_3390_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_3391_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_3337_);
lean_dec(v_width_3337_);
v___x_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3390_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
v___x_3393_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_3394_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_3338_);
lean_dec(v_height_3338_);
v___x_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3393_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
v___x_3396_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_3397_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_pressure_3339_);
lean_dec(v_pressure_3339_);
v___x_3398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_3400_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_3330_);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3399_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
v___x_3402_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_3403_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_3331_);
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3402_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_3406_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_3332_);
v___x_3407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3405_);
lean_ctor_set(v___x_3407_, 1, v___x_3406_);
v___x_3408_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_3409_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_3333_);
v___x_3410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3408_);
lean_ctor_set(v___x_3410_, 1, v___x_3409_);
v___x_3411_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_3412_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_3334_);
v___x_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3411_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
v___x_3414_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_3415_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_3324_);
lean_dec(v_modifierNumLock_3324_);
v___x_3416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3414_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_3418_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_3325_);
lean_dec(v_modifierScrollLock_3325_);
v___x_3419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___x_3420_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_3421_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_3326_);
lean_dec(v_modifierSuper_3326_);
v___x_3422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3420_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
v___x_3423_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_3424_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_3327_);
lean_dec(v_modifierSymbol_3327_);
v___x_3425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3423_);
lean_ctor_set(v___x_3425_, 1, v___x_3424_);
v___x_3426_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_3427_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_3328_);
lean_dec(v_modifierSymbolLock_3328_);
v___x_3428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3426_);
lean_ctor_set(v___x_3428_, 1, v___x_3427_);
v___x_3429_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_3430_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_3329_);
v___x_3431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3429_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_3433_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_3319_);
lean_dec(v_modifierAltGraph_3319_);
v___x_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_3436_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_3320_);
lean_dec(v_modifierCapsLock_3320_);
v___x_3437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3435_);
lean_ctor_set(v___x_3437_, 1, v___x_3436_);
v___x_3438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_3439_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_3321_);
lean_dec(v_modifierFn_3321_);
v___x_3440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3438_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_3442_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_3322_);
lean_dec(v_modifierFnLock_3322_);
v___x_3443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3441_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_3445_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_3323_);
lean_dec(v_modifierHyper_3323_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3444_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3448_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3314_);
v___x_3449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3447_);
lean_ctor_set(v___x_3449_, 1, v___x_3448_);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_3451_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_3315_);
lean_dec(v_ctrlKey_3315_);
v___x_3452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3450_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
v___x_3453_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_3454_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_3316_);
lean_dec(v_shiftKey_3316_);
v___x_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3453_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_3457_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_3317_);
lean_dec(v_altKey_3317_);
v___x_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3456_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_3460_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_3318_);
lean_dec(v_metaKey_3318_);
v___x_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3459_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
v___x_3462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3463_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3309_);
lean_dec(v_bubbles_3309_);
v___x_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3462_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3466_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3310_);
lean_dec(v_cancelable_3310_);
v___x_3467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3465_);
lean_ctor_set(v___x_3467_, 1, v___x_3466_);
v___x_3468_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3469_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3311_);
lean_dec(v_composed_3311_);
v___x_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3468_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3472_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3312_);
lean_dec(v_view_3312_);
v___x_3473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3475_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3313_);
v___x_3476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3474_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v___x_3477_ = lean_unsigned_to_nat(42u);
v___x_3478_ = lean_mk_empty_array_with_capacity(v___x_3477_);
v___x_3479_ = lean_array_push(v___x_3478_, v___x_3464_);
v___x_3480_ = lean_array_push(v___x_3479_, v___x_3467_);
v___x_3481_ = lean_array_push(v___x_3480_, v___x_3470_);
v___x_3482_ = lean_array_push(v___x_3481_, v___x_3473_);
v___x_3483_ = lean_array_push(v___x_3482_, v___x_3476_);
v___x_3484_ = lean_array_push(v___x_3483_, v___x_3449_);
v___x_3485_ = lean_array_push(v___x_3484_, v___x_3452_);
v___x_3486_ = lean_array_push(v___x_3485_, v___x_3455_);
v___x_3487_ = lean_array_push(v___x_3486_, v___x_3458_);
v___x_3488_ = lean_array_push(v___x_3487_, v___x_3461_);
v___x_3489_ = lean_array_push(v___x_3488_, v___x_3434_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3437_);
v___x_3491_ = lean_array_push(v___x_3490_, v___x_3440_);
v___x_3492_ = lean_array_push(v___x_3491_, v___x_3443_);
v___x_3493_ = lean_array_push(v___x_3492_, v___x_3446_);
v___x_3494_ = lean_array_push(v___x_3493_, v___x_3416_);
v___x_3495_ = lean_array_push(v___x_3494_, v___x_3419_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3422_);
v___x_3497_ = lean_array_push(v___x_3496_, v___x_3425_);
v___x_3498_ = lean_array_push(v___x_3497_, v___x_3428_);
v___x_3499_ = lean_array_push(v___x_3498_, v___x_3431_);
v___x_3500_ = lean_array_push(v___x_3499_, v___x_3401_);
v___x_3501_ = lean_array_push(v___x_3500_, v___x_3404_);
v___x_3502_ = lean_array_push(v___x_3501_, v___x_3407_);
v___x_3503_ = lean_array_push(v___x_3502_, v___x_3410_);
v___x_3504_ = lean_array_push(v___x_3503_, v___x_3413_);
v___x_3505_ = lean_array_push(v___x_3504_, v___x_3386_);
v___x_3506_ = lean_array_push(v___x_3505_, v___x_3389_);
v___x_3507_ = lean_array_push(v___x_3506_, v___x_3392_);
v___x_3508_ = lean_array_push(v___x_3507_, v___x_3395_);
v___x_3509_ = lean_array_push(v___x_3508_, v___x_3398_);
v___x_3510_ = lean_array_push(v___x_3509_, v___x_3371_);
v___x_3511_ = lean_array_push(v___x_3510_, v___x_3374_);
v___x_3512_ = lean_array_push(v___x_3511_, v___x_3377_);
v___x_3513_ = lean_array_push(v___x_3512_, v___x_3380_);
v___x_3514_ = lean_array_push(v___x_3513_, v___x_3383_);
v___x_3515_ = lean_array_push(v___x_3514_, v___x_3353_);
v___x_3516_ = lean_array_push(v___x_3515_, v___x_3356_);
v___x_3517_ = lean_array_push(v___x_3516_, v___x_3359_);
v___x_3518_ = lean_array_push(v___x_3517_, v___x_3362_);
v___x_3519_ = lean_array_push(v___x_3518_, v___x_3365_);
v___x_3520_ = lean_array_push(v___x_3519_, v___x_3368_);
v___x_3521_ = l_Lasm_JS_Web_Support_fields(v___x_3520_);
lean_dec_ref(v___x_3520_);
return v___x_3521_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(lean_object* v_context_3522_, lean_object* v_d_3523_){
_start:
{
lean_object* v_received_3526_; 
if (lean_obj_tag(v_d_3523_) == 9)
{
lean_object* v_value_3540_; lean_object* v___x_3541_; 
v_value_3540_ = lean_ctor_get(v_d_3523_, 0);
lean_inc(v_value_3540_);
lean_dec_ref_known(v_d_3523_, 2);
v___x_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3541_, 0, v_value_3540_);
return v___x_3541_;
}
else
{
if (lean_obj_tag(v_d_3523_) == 9)
{
lean_object* v_value_3542_; lean_object* v_description_3543_; lean_object* v___x_3544_; uint8_t v___x_3545_; 
v_value_3542_ = lean_ctor_get(v_d_3523_, 0);
v_description_3543_ = lean_ctor_get(v_d_3523_, 1);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3545_ = lean_string_dec_eq(v_description_3543_, v___x_3544_);
if (v___x_3545_ == 0)
{
goto v___jp_3538_;
}
else
{
uint32_t v___x_3546_; uint64_t v___x_3547_; lean_object* v___x_3548_; uint32_t v___x_3549_; lean_object* v___x_3550_; 
lean_inc_n(v_value_3542_, 2);
lean_dec_ref_known(v_d_3523_, 2);
v___x_3546_ = 206;
v___x_3547_ = 0ULL;
v___x_3548_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3548_, 0, v_value_3542_);
lean_ctor_set(v___x_3548_, 1, v___x_3544_);
v___x_3549_ = lasm_js_value_handle(v_value_3542_);
lean_dec(v_value_3542_);
v___x_3550_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3546_, v___x_3547_, v___x_3548_, v___x_3549_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; uint8_t v___x_3552_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
v___x_3552_ = lean_string_validate_utf8(v_a_3551_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
lean_dec(v_a_3551_);
v___x_3553_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_3554_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3553_);
v_received_3526_ = v___x_3554_;
goto v___jp_3525_;
}
else
{
lean_object* v___x_3555_; 
v___x_3555_ = lean_string_from_utf8_unchecked(v_a_3551_);
v_received_3526_ = v___x_3555_;
goto v___jp_3525_;
}
}
else
{
lean_object* v___x_3556_; 
lean_dec_ref_known(v___x_3550_, 1);
v___x_3556_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_3526_ = v___x_3556_;
goto v___jp_3525_;
}
}
}
else
{
goto v___jp_3538_;
}
}
v___jp_3525_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3528_ = lean_string_append(v___x_3527_, v_context_3522_);
v___x_3529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3530_ = lean_string_append(v___x_3528_, v___x_3529_);
v___x_3531_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPointerEvent___closed__0));
v___x_3532_ = lean_string_append(v___x_3530_, v___x_3531_);
v___x_3533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3534_ = lean_string_append(v___x_3532_, v___x_3533_);
v___x_3535_ = lean_string_append(v___x_3534_, v_received_3526_);
lean_dec_ref(v_received_3526_);
v___x_3536_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
v___x_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
return v___x_3537_;
}
v___jp_3538_:
{
lean_object* v___x_3539_; 
v___x_3539_ = l_Lasm_JS_Data_describe(v_d_3523_);
v_received_3526_ = v___x_3539_;
goto v___jp_3525_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2___boxed(lean_object* v_context_3557_, lean_object* v_d_3558_, lean_object* v_a_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v_context_3557_, v_d_3558_);
lean_dec_ref(v_context_3557_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(lean_object* v_b_3561_, lean_object* v_args_3562_, uint8_t v_await_3563_){
_start:
{
uint64_t v___y_3566_; uint64_t v___y_3567_; uint64_t v___x_3602_; uint64_t v___y_3604_; 
v___x_3602_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3563_ == 0)
{
uint64_t v___x_3609_; 
v___x_3609_ = 0ULL;
v___y_3604_ = v___x_3609_;
goto v___jp_3603_;
}
else
{
uint64_t v___x_3610_; 
v___x_3610_ = 2ULL;
v___y_3604_ = v___x_3610_;
goto v___jp_3603_;
}
v___jp_3565_:
{
uint64_t v_flags_3568_; uint32_t v___x_3569_; lean_object* v___x_3570_; uint32_t v___x_3571_; lean_object* v___x_3572_; 
v_flags_3568_ = lean_uint64_lor(v___y_3566_, v___y_3567_);
v___x_3569_ = 214;
v___x_3570_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3561_, v_args_3562_);
v___x_3571_ = 0;
v___x_3572_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3569_, v_flags_3568_, v___x_3570_, v___x_3571_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v___x_3574_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3573_);
lean_dec(v_a_3573_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v___x_3576_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3561_);
v___x_3577_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v___x_3576_, v_a_3575_);
lean_dec_ref(v___x_3576_);
return v___x_3577_;
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
v_a_3578_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3574_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3574_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3601_; 
v_a_3586_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3588_ = v___x_3572_;
v_isShared_3589_ = v_isSharedCheck_3601_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3572_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3601_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3599_; 
v___x_3590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3591_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3561_);
v___x_3592_ = lean_string_append(v___x_3590_, v___x_3591_);
lean_dec_ref(v___x_3591_);
v___x_3593_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3594_ = lean_string_append(v___x_3592_, v___x_3593_);
v___x_3595_ = lean_io_error_to_string(v_a_3586_);
v___x_3596_ = lean_string_append(v___x_3594_, v___x_3595_);
lean_dec_ref(v___x_3595_);
v___x_3597_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3597_);
v___x_3599_ = v___x_3588_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v___x_3597_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
v___jp_3603_:
{
uint8_t v_construct_3605_; uint64_t v___x_3606_; 
v_construct_3605_ = lean_ctor_get_uint8(v_b_3561_, sizeof(void*)*4);
v___x_3606_ = lean_uint64_lor(v___x_3602_, v___y_3604_);
if (v_construct_3605_ == 0)
{
uint64_t v___x_3607_; 
v___x_3607_ = 0ULL;
v___y_3566_ = v___x_3606_;
v___y_3567_ = v___x_3607_;
goto v___jp_3565_;
}
else
{
uint64_t v___x_3608_; 
v___x_3608_ = 4ULL;
v___y_3566_ = v___x_3606_;
v___y_3567_ = v___x_3608_;
goto v___jp_3565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1___boxed(lean_object* v_b_3611_, lean_object* v_args_3612_, lean_object* v_await_3613_, lean_object* v_a_3614_){
_start:
{
uint8_t v_await_boxed_3615_; lean_object* v_res_3616_; 
v_await_boxed_3615_ = lean_unbox(v_await_3613_);
v_res_3616_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v_b_3611_, v_args_3612_, v_await_boxed_3615_);
lean_dec_ref(v_b_3611_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new(lean_object* v_type_3625_, lean_object* v_eventInitDict_3626_){
_start:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; lean_object* v___x_3637_; 
v___x_3628_ = lean_unsigned_to_nat(2u);
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_new___closed__2));
v___x_3630_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3630_, 0, v_type_3625_);
v___x_3631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(v_eventInitDict_3626_);
v___x_3632_ = lean_mk_empty_array_with_capacity(v___x_3628_);
v___x_3633_ = lean_array_push(v___x_3632_, v___x_3630_);
v___x_3634_ = lean_array_push(v___x_3633_, v___x_3631_);
v___x_3635_ = l_Lasm_JS_Web_Support_args(v___x_3634_);
v___x_3636_ = 0;
v___x_3637_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v___x_3629_, v___x_3635_, v___x_3636_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new___boxed(lean_object* v_type_3638_, lean_object* v_eventInitDict_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lasm_JS_Web_PointerEvent_new(v_type_3638_, v_eventInitDict_3639_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId(lean_object* v_self_3642_){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_3645_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3642_, v___x_3644_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId___boxed(lean_object* v_self_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lasm_JS_Web_PointerEvent_pointerId(v_self_3646_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width(lean_object* v_self_3649_){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_3652_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3649_, v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width___boxed(lean_object* v_self_3653_, lean_object* v_a_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lasm_JS_Web_PointerEvent_width(v_self_3653_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height(lean_object* v_self_3656_){
_start:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_3659_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3656_, v___x_3658_);
return v___x_3659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height___boxed(lean_object* v_self_3660_, lean_object* v_a_3661_){
_start:
{
lean_object* v_res_3662_; 
v_res_3662_ = l_Lasm_JS_Web_PointerEvent_height(v_self_3660_);
return v_res_3662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure(lean_object* v_self_3663_){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3665_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_3666_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3663_, v___x_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure___boxed(lean_object* v_self_3667_, lean_object* v_a_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lasm_JS_Web_PointerEvent_pressure(v_self_3667_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure(lean_object* v_self_3670_){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_3673_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3670_, v___x_3672_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure___boxed(lean_object* v_self_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lasm_JS_Web_PointerEvent_tangentialPressure(v_self_3674_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX(lean_object* v_self_3677_){
_start:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3679_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_3680_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3677_, v___x_3679_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX___boxed(lean_object* v_self_3681_, lean_object* v_a_3682_){
_start:
{
lean_object* v_res_3683_; 
v_res_3683_ = l_Lasm_JS_Web_PointerEvent_tiltX(v_self_3681_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY(lean_object* v_self_3684_){
_start:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3686_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_3687_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3684_, v___x_3686_);
return v___x_3687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY___boxed(lean_object* v_self_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lasm_JS_Web_PointerEvent_tiltY(v_self_3688_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist(lean_object* v_self_3691_){
_start:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_3694_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3691_, v___x_3693_);
return v___x_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist___boxed(lean_object* v_self_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lasm_JS_Web_PointerEvent_twist(v_self_3695_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle(lean_object* v_self_3698_){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3700_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_3701_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3698_, v___x_3700_);
return v___x_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle___boxed(lean_object* v_self_3702_, lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lasm_JS_Web_PointerEvent_altitudeAngle(v_self_3702_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle(lean_object* v_self_3705_){
_start:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_3708_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_3705_, v___x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle___boxed(lean_object* v_self_3709_, lean_object* v_a_3710_){
_start:
{
lean_object* v_res_3711_; 
v_res_3711_ = l_Lasm_JS_Web_PointerEvent_azimuthAngle(v_self_3709_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType(lean_object* v_self_3712_){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_3715_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3712_, v___x_3714_);
return v___x_3715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType___boxed(lean_object* v_self_3716_, lean_object* v_a_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l_Lasm_JS_Web_PointerEvent_pointerType(v_self_3716_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary(lean_object* v_self_3719_){
_start:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_3722_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3719_, v___x_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary___boxed(lean_object* v_self_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lasm_JS_Web_PointerEvent_isPrimary(v_self_3723_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId(lean_object* v_self_3726_){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_3729_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_3726_, v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId___boxed(lean_object* v_self_3730_, lean_object* v_a_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lasm_JS_Web_PointerEvent_persistentDeviceId(v_self_3730_);
return v_res_3732_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(uint8_t v_await_3733_, uint64_t v_extra_3734_){
_start:
{
uint64_t v___x_3735_; uint64_t v___y_3737_; 
v___x_3735_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3733_ == 0)
{
uint64_t v___x_3740_; 
v___x_3740_ = 0ULL;
v___y_3737_ = v___x_3740_;
goto v___jp_3736_;
}
else
{
uint64_t v___x_3741_; 
v___x_3741_ = 2ULL;
v___y_3737_ = v___x_3741_;
goto v___jp_3736_;
}
v___jp_3736_:
{
uint64_t v___x_3738_; uint64_t v___x_3739_; 
v___x_3738_ = lean_uint64_lor(v___x_3735_, v___y_3737_);
v___x_3739_ = lean_uint64_lor(v___x_3738_, v_extra_3734_);
return v___x_3739_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0___boxed(lean_object* v_await_3742_, lean_object* v_extra_3743_){
_start:
{
uint8_t v_await_boxed_3744_; uint64_t v_extra_boxed_3745_; uint64_t v_res_3746_; lean_object* v_r_3747_; 
v_await_boxed_3744_ = lean_unbox(v_await_3742_);
v_extra_boxed_3745_ = lean_unbox_uint64(v_extra_3743_);
lean_dec_ref(v_extra_3743_);
v_res_3746_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v_await_boxed_3744_, v_extra_boxed_3745_);
v_r_3747_ = lean_box_uint64(v_res_3746_);
return v_r_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(size_t v_sz_3750_, size_t v_i_3751_, lean_object* v_bs_3752_){
_start:
{
uint8_t v___x_3753_; 
v___x_3753_ = lean_usize_dec_lt(v_i_3751_, v_sz_3750_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; 
v___x_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3754_, 0, v_bs_3752_);
return v___x_3754_;
}
else
{
lean_object* v_v_3755_; 
v_v_3755_ = lean_array_uget_borrowed(v_bs_3752_, v_i_3751_);
if (lean_obj_tag(v_v_3755_) == 9)
{
lean_object* v_value_3756_; lean_object* v___x_3757_; lean_object* v_bs_x27_3758_; size_t v___x_3759_; size_t v___x_3760_; lean_object* v___x_3761_; 
v_value_3756_ = lean_ctor_get(v_v_3755_, 0);
lean_inc(v_value_3756_);
v___x_3757_ = lean_unsigned_to_nat(0u);
v_bs_x27_3758_ = lean_array_uset(v_bs_3752_, v_i_3751_, v___x_3757_);
v___x_3759_ = ((size_t)1ULL);
v___x_3760_ = lean_usize_add(v_i_3751_, v___x_3759_);
v___x_3761_ = lean_array_uset(v_bs_x27_3758_, v_i_3751_, v_value_3756_);
v_i_3751_ = v___x_3760_;
v_bs_3752_ = v___x_3761_;
goto _start;
}
else
{
lean_object* v___x_3763_; 
lean_dec_ref(v_bs_3752_);
v___x_3763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3763_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_3764_, lean_object* v_i_3765_, lean_object* v_bs_3766_){
_start:
{
size_t v_sz_boxed_3767_; size_t v_i_boxed_3768_; lean_object* v_res_3769_; 
v_sz_boxed_3767_ = lean_unbox_usize(v_sz_3764_);
lean_dec(v_sz_3764_);
v_i_boxed_3768_ = lean_unbox_usize(v_i_3765_);
lean_dec(v_i_3765_);
v_res_3769_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_3767_, v_i_boxed_3768_, v_bs_3766_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(lean_object* v_context_3774_, lean_object* v_d_3775_){
_start:
{
lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3784_; lean_object* v_received_3785_; lean_object* v___y_3804_; lean_object* v_a_3807_; 
if (lean_obj_tag(v_d_3775_) == 7)
{
lean_object* v_items_3831_; size_t v_sz_3832_; size_t v___x_3833_; lean_object* v___x_3834_; 
v_items_3831_ = lean_ctor_get(v_d_3775_, 0);
v_sz_3832_ = lean_array_size(v_items_3831_);
v___x_3833_ = ((size_t)0ULL);
lean_inc_ref(v_items_3831_);
v___x_3834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_3832_, v___x_3833_, v_items_3831_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v_a_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; uint8_t v___x_3839_; 
v_a_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3834_, 1);
v___x_3836_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3));
v___x_3837_ = lean_string_utf8_byte_size(v_a_3835_);
v___x_3838_ = lean_unsigned_to_nat(0u);
v___x_3839_ = lean_nat_dec_eq(v___x_3837_, v___x_3838_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v___x_3840_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3841_ = lean_string_append(v___x_3840_, v_a_3835_);
lean_dec(v_a_3835_);
v___x_3842_ = lean_string_append(v___x_3836_, v___x_3841_);
lean_dec_ref(v___x_3841_);
v_a_3807_ = v___x_3842_;
goto v___jp_3806_;
}
else
{
lean_dec(v_a_3835_);
v_a_3807_ = v___x_3836_;
goto v___jp_3806_;
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref_known(v_d_3775_, 1);
v_a_3843_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3834_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3834_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
lean_ctor_set_tag(v___x_3845_, 0);
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
else
{
lean_object* v___x_3851_; 
v___x_3851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v_a_3807_ = v___x_3851_;
goto v___jp_3806_;
}
v___jp_3777_:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = lean_string_append(v___y_3778_, v___y_3779_);
lean_dec_ref(v___y_3779_);
v___x_3781_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
return v___x_3782_;
}
v___jp_3783_:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; uint8_t v___x_3797_; 
v___x_3786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3787_ = lean_string_append(v___x_3786_, v_context_3774_);
v___x_3788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3789_ = lean_string_append(v___x_3787_, v___x_3788_);
v___x_3790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0));
v___x_3791_ = lean_string_append(v___x_3789_, v___x_3790_);
v___x_3792_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3793_ = lean_string_append(v___x_3791_, v___x_3792_);
v___x_3794_ = lean_string_append(v___x_3793_, v_received_3785_);
lean_dec_ref(v_received_3785_);
v___x_3795_ = lean_string_utf8_byte_size(v___y_3784_);
v___x_3796_ = lean_unsigned_to_nat(0u);
v___x_3797_ = lean_nat_dec_eq(v___x_3795_, v___x_3796_);
if (v___x_3797_ == 0)
{
lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3798_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1));
v___x_3799_ = lean_string_append(v___x_3798_, v___y_3784_);
lean_dec_ref(v___y_3784_);
v___x_3800_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2));
v___x_3801_ = lean_string_append(v___x_3799_, v___x_3800_);
v___y_3778_ = v___x_3794_;
v___y_3779_ = v___x_3801_;
goto v___jp_3777_;
}
else
{
lean_object* v___x_3802_; 
lean_dec_ref(v___y_3784_);
v___x_3802_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___y_3778_ = v___x_3794_;
v___y_3779_ = v___x_3802_;
goto v___jp_3777_;
}
}
v___jp_3803_:
{
lean_object* v___x_3805_; 
v___x_3805_ = l_Lasm_JS_Data_describe(v_d_3775_);
v___y_3784_ = v___y_3804_;
v_received_3785_ = v___x_3805_;
goto v___jp_3783_;
}
v___jp_3806_:
{
if (lean_obj_tag(v_d_3775_) == 9)
{
lean_object* v_value_3808_; lean_object* v_description_3809_; lean_object* v___x_3810_; uint8_t v___x_3811_; 
v_value_3808_ = lean_ctor_get(v_d_3775_, 0);
v_description_3809_ = lean_ctor_get(v_d_3775_, 1);
v___x_3810_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3811_ = lean_string_dec_eq(v_description_3809_, v___x_3810_);
if (v___x_3811_ == 0)
{
v___y_3804_ = v_a_3807_;
goto v___jp_3803_;
}
else
{
lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3828_; 
lean_inc(v_value_3808_);
v_isSharedCheck_3828_ = !lean_is_exclusive(v_d_3775_);
if (v_isSharedCheck_3828_ == 0)
{
lean_object* v_unused_3829_; lean_object* v_unused_3830_; 
v_unused_3829_ = lean_ctor_get(v_d_3775_, 1);
lean_dec(v_unused_3829_);
v_unused_3830_ = lean_ctor_get(v_d_3775_, 0);
lean_dec(v_unused_3830_);
v___x_3813_ = v_d_3775_;
v_isShared_3814_ = v_isSharedCheck_3828_;
goto v_resetjp_3812_;
}
else
{
lean_dec(v_d_3775_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3828_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
uint32_t v___x_3815_; uint64_t v___x_3816_; lean_object* v___x_3818_; 
v___x_3815_ = 206;
v___x_3816_ = 0ULL;
lean_inc(v_value_3808_);
if (v_isShared_3814_ == 0)
{
lean_ctor_set(v___x_3813_, 1, v___x_3810_);
v___x_3818_ = v___x_3813_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_value_3808_);
lean_ctor_set(v_reuseFailAlloc_3827_, 1, v___x_3810_);
v___x_3818_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
uint32_t v___x_3819_; lean_object* v___x_3820_; 
v___x_3819_ = lasm_js_value_handle(v_value_3808_);
lean_dec(v_value_3808_);
v___x_3820_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3815_, v___x_3816_, v___x_3818_, v___x_3819_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; uint8_t v___x_3822_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v___x_3820_, 1);
v___x_3822_ = lean_string_validate_utf8(v_a_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_dec(v_a_3821_);
v___x_3823_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_3824_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3823_);
v___y_3784_ = v_a_3807_;
v_received_3785_ = v___x_3824_;
goto v___jp_3783_;
}
else
{
lean_object* v___x_3825_; 
v___x_3825_ = lean_string_from_utf8_unchecked(v_a_3821_);
v___y_3784_ = v_a_3807_;
v_received_3785_ = v___x_3825_;
goto v___jp_3783_;
}
}
else
{
lean_object* v___x_3826_; 
lean_dec_ref_known(v___x_3820_, 1);
v___x_3826_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v___y_3784_ = v_a_3807_;
v_received_3785_ = v___x_3826_;
goto v___jp_3783_;
}
}
}
}
}
else
{
v___y_3804_ = v_a_3807_;
goto v___jp_3803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3852_, lean_object* v_d_3853_, lean_object* v_a_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_3852_, v_d_3853_);
lean_dec_ref(v_context_3852_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(lean_object* v_context_3856_, lean_object* v_bytes_3857_){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3857_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3861_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
lean_inc(v_a_3860_);
lean_dec_ref_known(v___x_3859_, 1);
v___x_3861_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_3856_, v_a_3860_);
return v___x_3861_;
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
v_a_3862_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3859_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3859_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1___boxed(lean_object* v_context_3870_, lean_object* v_bytes_3871_, lean_object* v_a_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v_context_3870_, v_bytes_3871_);
lean_dec_ref(v_bytes_3871_);
lean_dec_ref(v_context_3870_);
return v_res_3873_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3874_; uint8_t v___x_3875_; uint64_t v___x_3876_; 
v___x_3874_ = 8ULL;
v___x_3875_ = 0;
v___x_3876_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v___x_3875_, v___x_3874_);
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(lean_object* v_o_3878_, lean_object* v_name_3879_, lean_object* v_args_3880_){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; uint64_t v___x_3885_; lean_object* v___x_3886_; 
v___x_3882_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3883_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3883_, 0, v_o_3878_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
lean_inc_ref(v_name_3879_);
v___x_3884_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3884_, 0, v_name_3879_);
v___x_3885_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0);
v___x_3886_ = l_Lasm_JS_Value_invokeRaw(v___x_3883_, v___x_3884_, v_args_3880_, v___x_3885_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_a_3887_);
lean_dec_ref_known(v___x_3886_, 1);
v___x_3888_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1));
v___x_3889_ = lean_string_append(v___x_3888_, v_name_3879_);
lean_dec_ref(v_name_3879_);
v___x_3890_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v___x_3889_, v_a_3887_);
lean_dec(v_a_3887_);
lean_dec_ref(v___x_3889_);
return v___x_3890_;
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3898_; 
lean_dec_ref(v_name_3879_);
v_a_3891_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3893_ = v___x_3886_;
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3886_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v_a_3891_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___boxed(lean_object* v_o_3899_, lean_object* v_name_3900_, lean_object* v_args_3901_, lean_object* v_a_3902_){
_start:
{
lean_object* v_res_3903_; 
v_res_3903_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_o_3899_, v_name_3900_, v_args_3901_);
return v_res_3903_;
}
}
static lean_object* _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1));
v___x_3908_ = l_Lasm_JS_Web_Support_args(v___x_3907_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(lean_object* v_self_3909_){
_start:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v___x_3911_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0));
v___x_3912_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_3913_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_3909_, v___x_3911_, v___x_3912_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___boxed(lean_object* v_self_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(v_self_3914_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents(lean_object* v_self_3918_){
_start:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3920_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0));
v___x_3921_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_3922_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_3918_, v___x_3920_, v___x_3921_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents___boxed(lean_object* v_self_3923_, lean_object* v_a_3924_){
_start:
{
lean_object* v_res_3925_; 
v_res_3925_ = l_Lasm_JS_Web_PointerEvent_getPredictedEvents(v_self_3923_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(lean_object* v_context_3926_, lean_object* v_d_3927_){
_start:
{
lean_object* v_received_3930_; 
if (lean_obj_tag(v_d_3927_) == 9)
{
lean_object* v_value_3944_; lean_object* v___x_3945_; 
v_value_3944_ = lean_ctor_get(v_d_3927_, 0);
lean_inc(v_value_3944_);
lean_dec_ref_known(v_d_3927_, 2);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v_value_3944_);
return v___x_3945_;
}
else
{
if (lean_obj_tag(v_d_3927_) == 9)
{
lean_object* v_value_3946_; lean_object* v_description_3947_; lean_object* v___x_3948_; uint8_t v___x_3949_; 
v_value_3946_ = lean_ctor_get(v_d_3927_, 0);
v_description_3947_ = lean_ctor_get(v_d_3927_, 1);
v___x_3948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3949_ = lean_string_dec_eq(v_description_3947_, v___x_3948_);
if (v___x_3949_ == 0)
{
goto v___jp_3942_;
}
else
{
uint32_t v___x_3950_; uint64_t v___x_3951_; lean_object* v___x_3952_; uint32_t v___x_3953_; lean_object* v___x_3954_; 
lean_inc_n(v_value_3946_, 2);
lean_dec_ref_known(v_d_3927_, 2);
v___x_3950_ = 206;
v___x_3951_ = 0ULL;
v___x_3952_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3952_, 0, v_value_3946_);
lean_ctor_set(v___x_3952_, 1, v___x_3948_);
v___x_3953_ = lasm_js_value_handle(v_value_3946_);
lean_dec(v_value_3946_);
v___x_3954_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3950_, v___x_3951_, v___x_3952_, v___x_3953_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; uint8_t v___x_3956_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3956_ = lean_string_validate_utf8(v_a_3955_);
if (v___x_3956_ == 0)
{
lean_object* v___x_3957_; lean_object* v___x_3958_; 
lean_dec(v_a_3955_);
v___x_3957_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_3958_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3957_);
v_received_3930_ = v___x_3958_;
goto v___jp_3929_;
}
else
{
lean_object* v___x_3959_; 
v___x_3959_ = lean_string_from_utf8_unchecked(v_a_3955_);
v_received_3930_ = v___x_3959_;
goto v___jp_3929_;
}
}
else
{
lean_object* v___x_3960_; 
lean_dec_ref_known(v___x_3954_, 1);
v___x_3960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_3930_ = v___x_3960_;
goto v___jp_3929_;
}
}
}
else
{
goto v___jp_3942_;
}
}
v___jp_3929_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3931_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3932_ = lean_string_append(v___x_3931_, v_context_3926_);
v___x_3933_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3934_ = lean_string_append(v___x_3932_, v___x_3933_);
v___x_3935_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0));
v___x_3936_ = lean_string_append(v___x_3934_, v___x_3935_);
v___x_3937_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3938_ = lean_string_append(v___x_3936_, v___x_3937_);
v___x_3939_ = lean_string_append(v___x_3938_, v_received_3930_);
lean_dec_ref(v_received_3930_);
v___x_3940_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3939_);
v___x_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
return v___x_3941_;
}
v___jp_3942_:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Lasm_JS_Data_describe(v_d_3927_);
v_received_3930_ = v___x_3943_;
goto v___jp_3929_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3961_, lean_object* v_d_3962_, lean_object* v_a_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v_context_3961_, v_d_3962_);
lean_dec_ref(v_context_3961_);
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(lean_object* v_b_3965_, lean_object* v_args_3966_, uint8_t v_await_3967_){
_start:
{
uint64_t v___y_3970_; uint64_t v___y_3971_; uint64_t v___x_4006_; uint64_t v___y_4008_; 
v___x_4006_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3967_ == 0)
{
uint64_t v___x_4013_; 
v___x_4013_ = 0ULL;
v___y_4008_ = v___x_4013_;
goto v___jp_4007_;
}
else
{
uint64_t v___x_4014_; 
v___x_4014_ = 2ULL;
v___y_4008_ = v___x_4014_;
goto v___jp_4007_;
}
v___jp_3969_:
{
uint64_t v_flags_3972_; uint32_t v___x_3973_; lean_object* v___x_3974_; uint32_t v___x_3975_; lean_object* v___x_3976_; 
v_flags_3972_ = lean_uint64_lor(v___y_3970_, v___y_3971_);
v___x_3973_ = 214;
v___x_3974_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3965_, v_args_3966_);
v___x_3975_ = 0;
v___x_3976_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3973_, v_flags_3972_, v___x_3974_, v___x_3975_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v___x_3978_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
v___x_3978_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3977_);
lean_dec(v_a_3977_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3965_);
v___x_3981_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v___x_3980_, v_a_3979_);
lean_dec_ref(v___x_3980_);
return v___x_3981_;
}
else
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3989_; 
v_a_3982_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3984_ = v___x_3978_;
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3978_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
return v___x_3987_;
}
}
}
}
else
{
lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_4005_; 
v_a_3990_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_3992_ = v___x_3976_;
v_isShared_3993_ = v_isSharedCheck_4005_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v___x_3976_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_4005_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4003_; 
v___x_3994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3995_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3965_);
v___x_3996_ = lean_string_append(v___x_3994_, v___x_3995_);
lean_dec_ref(v___x_3995_);
v___x_3997_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3998_ = lean_string_append(v___x_3996_, v___x_3997_);
v___x_3999_ = lean_io_error_to_string(v_a_3990_);
v___x_4000_ = lean_string_append(v___x_3998_, v___x_3999_);
lean_dec_ref(v___x_3999_);
v___x_4001_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4001_, 0, v___x_4000_);
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 0, v___x_4001_);
v___x_4003_ = v___x_3992_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v___x_4001_);
v___x_4003_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
return v___x_4003_;
}
}
}
}
v___jp_4007_:
{
uint8_t v_construct_4009_; uint64_t v___x_4010_; 
v_construct_4009_ = lean_ctor_get_uint8(v_b_3965_, sizeof(void*)*4);
v___x_4010_ = lean_uint64_lor(v___x_4006_, v___y_4008_);
if (v_construct_4009_ == 0)
{
uint64_t v___x_4011_; 
v___x_4011_ = 0ULL;
v___y_3970_ = v___x_4010_;
v___y_3971_ = v___x_4011_;
goto v___jp_3969_;
}
else
{
uint64_t v___x_4012_; 
v___x_4012_ = 4ULL;
v___y_3970_ = v___x_4010_;
v___y_3971_ = v___x_4012_;
goto v___jp_3969_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1___boxed(lean_object* v_b_4015_, lean_object* v_args_4016_, lean_object* v_await_4017_, lean_object* v_a_4018_){
_start:
{
uint8_t v_await_boxed_4019_; lean_object* v_res_4020_; 
v_await_boxed_4019_ = lean_unbox(v_await_4017_);
v_res_4020_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v_b_4015_, v_args_4016_, v_await_boxed_4019_);
lean_dec_ref(v_b_4015_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(lean_object* v_x_4021_){
_start:
{
if (lean_obj_tag(v_x_4021_) == 0)
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_box(0);
return v___x_4022_;
}
else
{
lean_object* v_val_4023_; lean_object* v_bubbles_4024_; lean_object* v_cancelable_4025_; lean_object* v_composed_4026_; lean_object* v_submitter_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v_val_4023_ = lean_ctor_get(v_x_4021_, 0);
v_bubbles_4024_ = lean_ctor_get(v_val_4023_, 0);
v_cancelable_4025_ = lean_ctor_get(v_val_4023_, 1);
v_composed_4026_ = lean_ctor_get(v_val_4023_, 2);
v_submitter_4027_ = lean_ctor_get(v_val_4023_, 3);
v___x_4028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4029_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4024_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4028_);
lean_ctor_set(v___x_4030_, 1, v___x_4029_);
v___x_4031_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4032_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4025_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4031_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
v___x_4034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4035_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4026_);
v___x_4036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4034_);
lean_ctor_set(v___x_4036_, 1, v___x_4035_);
v___x_4037_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4038_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HTMLElement_showPopover_spec__0_spec__0(v_submitter_4027_);
v___x_4039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4037_);
lean_ctor_set(v___x_4039_, 1, v___x_4038_);
v___x_4040_ = lean_unsigned_to_nat(4u);
v___x_4041_ = lean_mk_empty_array_with_capacity(v___x_4040_);
v___x_4042_ = lean_array_push(v___x_4041_, v___x_4030_);
v___x_4043_ = lean_array_push(v___x_4042_, v___x_4033_);
v___x_4044_ = lean_array_push(v___x_4043_, v___x_4036_);
v___x_4045_ = lean_array_push(v___x_4044_, v___x_4039_);
v___x_4046_ = l_Lasm_JS_Web_Support_fields(v___x_4045_);
lean_dec_ref(v___x_4045_);
return v___x_4046_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0___boxed(lean_object* v_x_4047_){
_start:
{
lean_object* v_res_4048_; 
v_res_4048_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_x_4047_);
lean_dec(v_x_4047_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new(lean_object* v_type_4057_, lean_object* v_eventInitDict_4058_){
_start:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; lean_object* v___x_4069_; 
v___x_4060_ = lean_unsigned_to_nat(2u);
v___x_4061_ = ((lean_object*)(l_Lasm_JS_Web_SubmitEvent_new___closed__2));
v___x_4062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4062_, 0, v_type_4057_);
v___x_4063_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_eventInitDict_4058_);
v___x_4064_ = lean_mk_empty_array_with_capacity(v___x_4060_);
v___x_4065_ = lean_array_push(v___x_4064_, v___x_4062_);
v___x_4066_ = lean_array_push(v___x_4065_, v___x_4063_);
v___x_4067_ = l_Lasm_JS_Web_Support_args(v___x_4066_);
v___x_4068_ = 0;
v___x_4069_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v___x_4061_, v___x_4067_, v___x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new___boxed(lean_object* v_type_4070_, lean_object* v_eventInitDict_4071_, lean_object* v_a_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lasm_JS_Web_SubmitEvent_new(v_type_4070_, v_eventInitDict_4071_);
lean_dec(v_eventInitDict_4071_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter(lean_object* v_self_4074_){
_start:
{
lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4076_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4077_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_body_spec__0(v_self_4074_, v___x_4076_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter___boxed(lean_object* v_self_4078_, lean_object* v_a_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = l_Lasm_JS_Web_SubmitEvent_submitter(v_self_4078_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(lean_object* v_x_4081_){
_start:
{
if (lean_obj_tag(v_x_4081_) == 0)
{
lean_object* v___x_4082_; 
v___x_4082_ = lean_box(0);
return v___x_4082_;
}
else
{
lean_object* v_val_4083_; lean_object* v_bubbles_4084_; lean_object* v_cancelable_4085_; lean_object* v_composed_4086_; lean_object* v_oldURL_4087_; lean_object* v_newURL_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v_val_4083_ = lean_ctor_get(v_x_4081_, 0);
lean_inc(v_val_4083_);
lean_dec_ref_known(v_x_4081_, 1);
v_bubbles_4084_ = lean_ctor_get(v_val_4083_, 0);
lean_inc(v_bubbles_4084_);
v_cancelable_4085_ = lean_ctor_get(v_val_4083_, 1);
lean_inc(v_cancelable_4085_);
v_composed_4086_ = lean_ctor_get(v_val_4083_, 2);
lean_inc(v_composed_4086_);
v_oldURL_4087_ = lean_ctor_get(v_val_4083_, 3);
lean_inc(v_oldURL_4087_);
v_newURL_4088_ = lean_ctor_get(v_val_4083_, 4);
lean_inc(v_newURL_4088_);
lean_dec(v_val_4083_);
v___x_4089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4090_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4084_);
lean_dec(v_bubbles_4084_);
v___x_4091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4089_);
lean_ctor_set(v___x_4091_, 1, v___x_4090_);
v___x_4092_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4093_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4085_);
lean_dec(v_cancelable_4085_);
v___x_4094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4092_);
lean_ctor_set(v___x_4094_, 1, v___x_4093_);
v___x_4095_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4096_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4086_);
lean_dec(v_composed_4086_);
v___x_4097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4095_);
lean_ctor_set(v___x_4097_, 1, v___x_4096_);
v___x_4098_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4099_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldURL_4087_);
v___x_4100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4098_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newURL_4088_);
v___x_4103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4101_);
lean_ctor_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = lean_unsigned_to_nat(5u);
v___x_4105_ = lean_mk_empty_array_with_capacity(v___x_4104_);
v___x_4106_ = lean_array_push(v___x_4105_, v___x_4091_);
v___x_4107_ = lean_array_push(v___x_4106_, v___x_4094_);
v___x_4108_ = lean_array_push(v___x_4107_, v___x_4097_);
v___x_4109_ = lean_array_push(v___x_4108_, v___x_4100_);
v___x_4110_ = lean_array_push(v___x_4109_, v___x_4103_);
v___x_4111_ = l_Lasm_JS_Web_Support_fields(v___x_4110_);
lean_dec_ref(v___x_4110_);
return v___x_4111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(lean_object* v_context_4112_, lean_object* v_d_4113_){
_start:
{
lean_object* v_received_4116_; 
if (lean_obj_tag(v_d_4113_) == 9)
{
lean_object* v_value_4130_; lean_object* v___x_4131_; 
v_value_4130_ = lean_ctor_get(v_d_4113_, 0);
lean_inc(v_value_4130_);
lean_dec_ref_known(v_d_4113_, 2);
v___x_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4131_, 0, v_value_4130_);
return v___x_4131_;
}
else
{
if (lean_obj_tag(v_d_4113_) == 9)
{
lean_object* v_value_4132_; lean_object* v_description_4133_; lean_object* v___x_4134_; uint8_t v___x_4135_; 
v_value_4132_ = lean_ctor_get(v_d_4113_, 0);
v_description_4133_ = lean_ctor_get(v_d_4113_, 1);
v___x_4134_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4135_ = lean_string_dec_eq(v_description_4133_, v___x_4134_);
if (v___x_4135_ == 0)
{
goto v___jp_4128_;
}
else
{
uint32_t v___x_4136_; uint64_t v___x_4137_; lean_object* v___x_4138_; uint32_t v___x_4139_; lean_object* v___x_4140_; 
lean_inc_n(v_value_4132_, 2);
lean_dec_ref_known(v_d_4113_, 2);
v___x_4136_ = 206;
v___x_4137_ = 0ULL;
v___x_4138_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4138_, 0, v_value_4132_);
lean_ctor_set(v___x_4138_, 1, v___x_4134_);
v___x_4139_ = lasm_js_value_handle(v_value_4132_);
lean_dec(v_value_4132_);
v___x_4140_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4136_, v___x_4137_, v___x_4138_, v___x_4139_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v_a_4141_; uint8_t v___x_4142_; 
v_a_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4140_, 1);
v___x_4142_ = lean_string_validate_utf8(v_a_4141_);
if (v___x_4142_ == 0)
{
lean_object* v___x_4143_; lean_object* v___x_4144_; 
lean_dec(v_a_4141_);
v___x_4143_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_4144_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4143_);
v_received_4116_ = v___x_4144_;
goto v___jp_4115_;
}
else
{
lean_object* v___x_4145_; 
v___x_4145_ = lean_string_from_utf8_unchecked(v_a_4141_);
v_received_4116_ = v___x_4145_;
goto v___jp_4115_;
}
}
else
{
lean_object* v___x_4146_; 
lean_dec_ref_known(v___x_4140_, 1);
v___x_4146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_4116_ = v___x_4146_;
goto v___jp_4115_;
}
}
}
else
{
goto v___jp_4128_;
}
}
v___jp_4115_:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4118_ = lean_string_append(v___x_4117_, v_context_4112_);
v___x_4119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4120_ = lean_string_append(v___x_4118_, v___x_4119_);
v___x_4121_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0));
v___x_4122_ = lean_string_append(v___x_4120_, v___x_4121_);
v___x_4123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4124_ = lean_string_append(v___x_4122_, v___x_4123_);
v___x_4125_ = lean_string_append(v___x_4124_, v_received_4116_);
lean_dec_ref(v_received_4116_);
v___x_4126_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
v___x_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
return v___x_4127_;
}
v___jp_4128_:
{
lean_object* v___x_4129_; 
v___x_4129_ = l_Lasm_JS_Data_describe(v_d_4113_);
v_received_4116_ = v___x_4129_;
goto v___jp_4115_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4147_, lean_object* v_d_4148_, lean_object* v_a_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v_context_4147_, v_d_4148_);
lean_dec_ref(v_context_4147_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(lean_object* v_b_4151_, lean_object* v_args_4152_, uint8_t v_await_4153_){
_start:
{
uint64_t v___y_4156_; uint64_t v___y_4157_; uint64_t v___x_4192_; uint64_t v___y_4194_; 
v___x_4192_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4153_ == 0)
{
uint64_t v___x_4199_; 
v___x_4199_ = 0ULL;
v___y_4194_ = v___x_4199_;
goto v___jp_4193_;
}
else
{
uint64_t v___x_4200_; 
v___x_4200_ = 2ULL;
v___y_4194_ = v___x_4200_;
goto v___jp_4193_;
}
v___jp_4155_:
{
uint64_t v_flags_4158_; uint32_t v___x_4159_; lean_object* v___x_4160_; uint32_t v___x_4161_; lean_object* v___x_4162_; 
v_flags_4158_ = lean_uint64_lor(v___y_4156_, v___y_4157_);
v___x_4159_ = 214;
v___x_4160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4151_, v_args_4152_);
v___x_4161_ = 0;
v___x_4162_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4159_, v_flags_4158_, v___x_4160_, v___x_4161_);
if (lean_obj_tag(v___x_4162_) == 0)
{
lean_object* v_a_4163_; lean_object* v___x_4164_; 
v_a_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc(v_a_4163_);
lean_dec_ref_known(v___x_4162_, 1);
v___x_4164_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4163_);
lean_dec(v_a_4163_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4164_, 1);
v___x_4166_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4151_);
v___x_4167_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v___x_4166_, v_a_4165_);
lean_dec_ref(v___x_4166_);
return v___x_4167_;
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4175_; 
v_a_4168_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4170_ = v___x_4164_;
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4164_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4173_; 
if (v_isShared_4171_ == 0)
{
v___x_4173_ = v___x_4170_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4191_; 
v_a_4176_ = lean_ctor_get(v___x_4162_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v___x_4162_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4178_ = v___x_4162_;
v_isShared_4179_ = v_isSharedCheck_4191_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4162_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4191_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4189_; 
v___x_4180_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4181_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4151_);
v___x_4182_ = lean_string_append(v___x_4180_, v___x_4181_);
lean_dec_ref(v___x_4181_);
v___x_4183_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4184_ = lean_string_append(v___x_4182_, v___x_4183_);
v___x_4185_ = lean_io_error_to_string(v_a_4176_);
v___x_4186_ = lean_string_append(v___x_4184_, v___x_4185_);
lean_dec_ref(v___x_4185_);
v___x_4187_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v___x_4187_);
v___x_4189_ = v___x_4178_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v___x_4187_);
v___x_4189_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
return v___x_4189_;
}
}
}
}
v___jp_4193_:
{
uint8_t v_construct_4195_; uint64_t v___x_4196_; 
v_construct_4195_ = lean_ctor_get_uint8(v_b_4151_, sizeof(void*)*4);
v___x_4196_ = lean_uint64_lor(v___x_4192_, v___y_4194_);
if (v_construct_4195_ == 0)
{
uint64_t v___x_4197_; 
v___x_4197_ = 0ULL;
v___y_4156_ = v___x_4196_;
v___y_4157_ = v___x_4197_;
goto v___jp_4155_;
}
else
{
uint64_t v___x_4198_; 
v___x_4198_ = 4ULL;
v___y_4156_ = v___x_4196_;
v___y_4157_ = v___x_4198_;
goto v___jp_4155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1___boxed(lean_object* v_b_4201_, lean_object* v_args_4202_, lean_object* v_await_4203_, lean_object* v_a_4204_){
_start:
{
uint8_t v_await_boxed_4205_; lean_object* v_res_4206_; 
v_await_boxed_4205_ = lean_unbox(v_await_4203_);
v_res_4206_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v_b_4201_, v_args_4202_, v_await_boxed_4205_);
lean_dec_ref(v_b_4201_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new(lean_object* v_type_4215_, lean_object* v_eventInitDict_4216_){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; lean_object* v___x_4227_; 
v___x_4218_ = lean_unsigned_to_nat(2u);
v___x_4219_ = ((lean_object*)(l_Lasm_JS_Web_HashChangeEvent_new___closed__2));
v___x_4220_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4220_, 0, v_type_4215_);
v___x_4221_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(v_eventInitDict_4216_);
v___x_4222_ = lean_mk_empty_array_with_capacity(v___x_4218_);
v___x_4223_ = lean_array_push(v___x_4222_, v___x_4220_);
v___x_4224_ = lean_array_push(v___x_4223_, v___x_4221_);
v___x_4225_ = l_Lasm_JS_Web_Support_args(v___x_4224_);
v___x_4226_ = 0;
v___x_4227_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v___x_4219_, v___x_4225_, v___x_4226_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new___boxed(lean_object* v_type_4228_, lean_object* v_eventInitDict_4229_, lean_object* v_a_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_Lasm_JS_Web_HashChangeEvent_new(v_type_4228_, v_eventInitDict_4229_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL(lean_object* v_self_4232_){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4235_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4232_, v___x_4234_);
return v___x_4235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL___boxed(lean_object* v_self_4236_, lean_object* v_a_4237_){
_start:
{
lean_object* v_res_4238_; 
v_res_4238_ = l_Lasm_JS_Web_HashChangeEvent_oldURL(v_self_4236_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL(lean_object* v_self_4239_){
_start:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
v___x_4241_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4242_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4239_, v___x_4241_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL___boxed(lean_object* v_self_4243_, lean_object* v_a_4244_){
_start:
{
lean_object* v_res_4245_; 
v_res_4245_ = l_Lasm_JS_Web_HashChangeEvent_newURL(v_self_4243_);
return v_res_4245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(lean_object* v_context_4246_, lean_object* v_d_4247_){
_start:
{
lean_object* v_received_4250_; 
if (lean_obj_tag(v_d_4247_) == 9)
{
lean_object* v_value_4264_; lean_object* v___x_4265_; 
v_value_4264_ = lean_ctor_get(v_d_4247_, 0);
lean_inc(v_value_4264_);
lean_dec_ref_known(v_d_4247_, 2);
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v_value_4264_);
return v___x_4265_;
}
else
{
if (lean_obj_tag(v_d_4247_) == 9)
{
lean_object* v_value_4266_; lean_object* v_description_4267_; lean_object* v___x_4268_; uint8_t v___x_4269_; 
v_value_4266_ = lean_ctor_get(v_d_4247_, 0);
v_description_4267_ = lean_ctor_get(v_d_4247_, 1);
v___x_4268_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4269_ = lean_string_dec_eq(v_description_4267_, v___x_4268_);
if (v___x_4269_ == 0)
{
goto v___jp_4262_;
}
else
{
uint32_t v___x_4270_; uint64_t v___x_4271_; lean_object* v___x_4272_; uint32_t v___x_4273_; lean_object* v___x_4274_; 
lean_inc_n(v_value_4266_, 2);
lean_dec_ref_known(v_d_4247_, 2);
v___x_4270_ = 206;
v___x_4271_ = 0ULL;
v___x_4272_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4272_, 0, v_value_4266_);
lean_ctor_set(v___x_4272_, 1, v___x_4268_);
v___x_4273_ = lasm_js_value_handle(v_value_4266_);
lean_dec(v_value_4266_);
v___x_4274_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4270_, v___x_4271_, v___x_4272_, v___x_4273_);
if (lean_obj_tag(v___x_4274_) == 0)
{
lean_object* v_a_4275_; uint8_t v___x_4276_; 
v_a_4275_ = lean_ctor_get(v___x_4274_, 0);
lean_inc(v_a_4275_);
lean_dec_ref_known(v___x_4274_, 1);
v___x_4276_ = lean_string_validate_utf8(v_a_4275_);
if (v___x_4276_ == 0)
{
lean_object* v___x_4277_; lean_object* v___x_4278_; 
lean_dec(v_a_4275_);
v___x_4277_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_4278_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4277_);
v_received_4250_ = v___x_4278_;
goto v___jp_4249_;
}
else
{
lean_object* v___x_4279_; 
v___x_4279_ = lean_string_from_utf8_unchecked(v_a_4275_);
v_received_4250_ = v___x_4279_;
goto v___jp_4249_;
}
}
else
{
lean_object* v___x_4280_; 
lean_dec_ref_known(v___x_4274_, 1);
v___x_4280_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_4250_ = v___x_4280_;
goto v___jp_4249_;
}
}
}
else
{
goto v___jp_4262_;
}
}
v___jp_4249_:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4252_ = lean_string_append(v___x_4251_, v_context_4246_);
v___x_4253_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4254_ = lean_string_append(v___x_4252_, v___x_4253_);
v___x_4255_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0));
v___x_4256_ = lean_string_append(v___x_4254_, v___x_4255_);
v___x_4257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4258_ = lean_string_append(v___x_4256_, v___x_4257_);
v___x_4259_ = lean_string_append(v___x_4258_, v_received_4250_);
lean_dec_ref(v_received_4250_);
v___x_4260_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
v___x_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4260_);
return v___x_4261_;
}
v___jp_4262_:
{
lean_object* v___x_4263_; 
v___x_4263_ = l_Lasm_JS_Data_describe(v_d_4247_);
v_received_4250_ = v___x_4263_;
goto v___jp_4249_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4281_, lean_object* v_d_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v_context_4281_, v_d_4282_);
lean_dec_ref(v_context_4281_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(lean_object* v_b_4285_, lean_object* v_args_4286_, uint8_t v_await_4287_){
_start:
{
uint64_t v___y_4290_; uint64_t v___y_4291_; uint64_t v___x_4326_; uint64_t v___y_4328_; 
v___x_4326_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4287_ == 0)
{
uint64_t v___x_4333_; 
v___x_4333_ = 0ULL;
v___y_4328_ = v___x_4333_;
goto v___jp_4327_;
}
else
{
uint64_t v___x_4334_; 
v___x_4334_ = 2ULL;
v___y_4328_ = v___x_4334_;
goto v___jp_4327_;
}
v___jp_4289_:
{
uint64_t v_flags_4292_; uint32_t v___x_4293_; lean_object* v___x_4294_; uint32_t v___x_4295_; lean_object* v___x_4296_; 
v_flags_4292_ = lean_uint64_lor(v___y_4290_, v___y_4291_);
v___x_4293_ = 214;
v___x_4294_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4285_, v_args_4286_);
v___x_4295_ = 0;
v___x_4296_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4293_, v_flags_4292_, v___x_4294_, v___x_4295_);
if (lean_obj_tag(v___x_4296_) == 0)
{
lean_object* v_a_4297_; lean_object* v___x_4298_; 
v_a_4297_ = lean_ctor_get(v___x_4296_, 0);
lean_inc(v_a_4297_);
lean_dec_ref_known(v___x_4296_, 1);
v___x_4298_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4297_);
lean_dec(v_a_4297_);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
lean_inc(v_a_4299_);
lean_dec_ref_known(v___x_4298_, 1);
v___x_4300_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4285_);
v___x_4301_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v___x_4300_, v_a_4299_);
lean_dec_ref(v___x_4300_);
return v___x_4301_;
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4309_; 
v_a_4302_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4304_ = v___x_4298_;
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4298_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v_a_4302_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4325_; 
v_a_4310_ = lean_ctor_get(v___x_4296_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4296_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4312_ = v___x_4296_;
v_isShared_4313_ = v_isSharedCheck_4325_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4296_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4325_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4323_; 
v___x_4314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4315_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4285_);
v___x_4316_ = lean_string_append(v___x_4314_, v___x_4315_);
lean_dec_ref(v___x_4315_);
v___x_4317_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4318_ = lean_string_append(v___x_4316_, v___x_4317_);
v___x_4319_ = lean_io_error_to_string(v_a_4310_);
v___x_4320_ = lean_string_append(v___x_4318_, v___x_4319_);
lean_dec_ref(v___x_4319_);
v___x_4321_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4321_, 0, v___x_4320_);
if (v_isShared_4313_ == 0)
{
lean_ctor_set(v___x_4312_, 0, v___x_4321_);
v___x_4323_ = v___x_4312_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4321_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
}
v___jp_4327_:
{
uint8_t v_construct_4329_; uint64_t v___x_4330_; 
v_construct_4329_ = lean_ctor_get_uint8(v_b_4285_, sizeof(void*)*4);
v___x_4330_ = lean_uint64_lor(v___x_4326_, v___y_4328_);
if (v_construct_4329_ == 0)
{
uint64_t v___x_4331_; 
v___x_4331_ = 0ULL;
v___y_4290_ = v___x_4330_;
v___y_4291_ = v___x_4331_;
goto v___jp_4289_;
}
else
{
uint64_t v___x_4332_; 
v___x_4332_ = 4ULL;
v___y_4290_ = v___x_4330_;
v___y_4291_ = v___x_4332_;
goto v___jp_4289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1___boxed(lean_object* v_b_4335_, lean_object* v_args_4336_, lean_object* v_await_4337_, lean_object* v_a_4338_){
_start:
{
uint8_t v_await_boxed_4339_; lean_object* v_res_4340_; 
v_await_boxed_4339_ = lean_unbox(v_await_4337_);
v_res_4340_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v_b_4335_, v_args_4336_, v_await_boxed_4339_);
lean_dec_ref(v_b_4335_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(lean_object* v_x_4341_){
_start:
{
if (lean_obj_tag(v_x_4341_) == 0)
{
lean_object* v___x_4342_; 
v___x_4342_ = lean_box(0);
return v___x_4342_;
}
else
{
lean_object* v_val_4343_; lean_object* v_bubbles_4344_; lean_object* v_cancelable_4345_; lean_object* v_composed_4346_; lean_object* v_state_4347_; lean_object* v_hasUAVisualTransition_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v_val_4343_ = lean_ctor_get(v_x_4341_, 0);
v_bubbles_4344_ = lean_ctor_get(v_val_4343_, 0);
v_cancelable_4345_ = lean_ctor_get(v_val_4343_, 1);
v_composed_4346_ = lean_ctor_get(v_val_4343_, 2);
v_state_4347_ = lean_ctor_get(v_val_4343_, 3);
v_hasUAVisualTransition_4348_ = lean_ctor_get(v_val_4343_, 4);
v___x_4349_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4350_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4344_);
v___x_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4349_);
lean_ctor_set(v___x_4351_, 1, v___x_4350_);
v___x_4352_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4353_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4345_);
v___x_4354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4354_, 0, v___x_4352_);
lean_ctor_set(v___x_4354_, 1, v___x_4353_);
v___x_4355_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4356_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4346_);
v___x_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4357_, 0, v___x_4355_);
lean_ctor_set(v___x_4357_, 1, v___x_4356_);
v___x_4358_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
lean_inc(v_state_4347_);
v___x_4359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
lean_ctor_set(v___x_4359_, 1, v_state_4347_);
v___x_4360_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4361_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_hasUAVisualTransition_4348_);
v___x_4362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4360_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
v___x_4363_ = lean_unsigned_to_nat(5u);
v___x_4364_ = lean_mk_empty_array_with_capacity(v___x_4363_);
v___x_4365_ = lean_array_push(v___x_4364_, v___x_4351_);
v___x_4366_ = lean_array_push(v___x_4365_, v___x_4354_);
v___x_4367_ = lean_array_push(v___x_4366_, v___x_4357_);
v___x_4368_ = lean_array_push(v___x_4367_, v___x_4359_);
v___x_4369_ = lean_array_push(v___x_4368_, v___x_4362_);
v___x_4370_ = l_Lasm_JS_Web_Support_fields(v___x_4369_);
lean_dec_ref(v___x_4369_);
return v___x_4370_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0___boxed(lean_object* v_x_4371_){
_start:
{
lean_object* v_res_4372_; 
v_res_4372_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_x_4371_);
lean_dec(v_x_4371_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new(lean_object* v_type_4381_, lean_object* v_eventInitDict_4382_){
_start:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; uint8_t v___x_4392_; lean_object* v___x_4393_; 
v___x_4384_ = lean_unsigned_to_nat(2u);
v___x_4385_ = ((lean_object*)(l_Lasm_JS_Web_PopStateEvent_new___closed__2));
v___x_4386_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4386_, 0, v_type_4381_);
v___x_4387_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_eventInitDict_4382_);
v___x_4388_ = lean_mk_empty_array_with_capacity(v___x_4384_);
v___x_4389_ = lean_array_push(v___x_4388_, v___x_4386_);
v___x_4390_ = lean_array_push(v___x_4389_, v___x_4387_);
v___x_4391_ = l_Lasm_JS_Web_Support_args(v___x_4390_);
v___x_4392_ = 0;
v___x_4393_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v___x_4385_, v___x_4391_, v___x_4392_);
return v___x_4393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new___boxed(lean_object* v_type_4394_, lean_object* v_eventInitDict_4395_, lean_object* v_a_4396_){
_start:
{
lean_object* v_res_4397_; 
v_res_4397_ = l_Lasm_JS_Web_PopStateEvent_new(v_type_4394_, v_eventInitDict_4395_);
lean_dec(v_eventInitDict_4395_);
return v_res_4397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state(lean_object* v_self_4398_){
_start:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
v___x_4401_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4398_, v___x_4400_);
return v___x_4401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state___boxed(lean_object* v_self_4402_, lean_object* v_a_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Lasm_JS_Web_PopStateEvent_state(v_self_4402_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(lean_object* v_self_4405_){
_start:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4408_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4405_, v___x_4407_);
return v___x_4408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition___boxed(lean_object* v_self_4409_, lean_object* v_a_4410_){
_start:
{
lean_object* v_res_4411_; 
v_res_4411_ = l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(v_self_4409_);
return v_res_4411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(lean_object* v_x_4412_){
_start:
{
if (lean_obj_tag(v_x_4412_) == 0)
{
lean_object* v___x_4413_; 
v___x_4413_ = lean_box(0);
return v___x_4413_;
}
else
{
lean_object* v_val_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v_val_4414_ = lean_ctor_get(v_x_4412_, 0);
v___x_4415_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_4414_);
v___x_4416_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4416_, 0, v_val_4414_);
lean_ctor_set(v___x_4416_, 1, v___x_4415_);
return v___x_4416_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0___boxed(lean_object* v_x_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_x_4417_);
lean_dec(v_x_4417_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(lean_object* v_x_4419_){
_start:
{
if (lean_obj_tag(v_x_4419_) == 0)
{
lean_object* v___x_4420_; 
v___x_4420_ = lean_box(0);
return v___x_4420_;
}
else
{
lean_object* v_val_4421_; lean_object* v_bubbles_4422_; lean_object* v_cancelable_4423_; lean_object* v_composed_4424_; lean_object* v_key_4425_; lean_object* v_oldValue_4426_; lean_object* v_newValue_4427_; lean_object* v_url_4428_; lean_object* v_storageArea_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v_val_4421_ = lean_ctor_get(v_x_4419_, 0);
lean_inc(v_val_4421_);
lean_dec_ref_known(v_x_4419_, 1);
v_bubbles_4422_ = lean_ctor_get(v_val_4421_, 0);
lean_inc(v_bubbles_4422_);
v_cancelable_4423_ = lean_ctor_get(v_val_4421_, 1);
lean_inc(v_cancelable_4423_);
v_composed_4424_ = lean_ctor_get(v_val_4421_, 2);
lean_inc(v_composed_4424_);
v_key_4425_ = lean_ctor_get(v_val_4421_, 3);
lean_inc(v_key_4425_);
v_oldValue_4426_ = lean_ctor_get(v_val_4421_, 4);
lean_inc(v_oldValue_4426_);
v_newValue_4427_ = lean_ctor_get(v_val_4421_, 5);
lean_inc(v_newValue_4427_);
v_url_4428_ = lean_ctor_get(v_val_4421_, 6);
lean_inc(v_url_4428_);
v_storageArea_4429_ = lean_ctor_get(v_val_4421_, 7);
lean_inc(v_storageArea_4429_);
lean_dec(v_val_4421_);
v___x_4430_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4431_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4422_);
lean_dec(v_bubbles_4422_);
v___x_4432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4432_, 0, v___x_4430_);
lean_ctor_set(v___x_4432_, 1, v___x_4431_);
v___x_4433_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4434_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4423_);
lean_dec(v_cancelable_4423_);
v___x_4435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4433_);
lean_ctor_set(v___x_4435_, 1, v___x_4434_);
v___x_4436_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4437_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4424_);
lean_dec(v_composed_4424_);
v___x_4438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4436_);
lean_ctor_set(v___x_4438_, 1, v___x_4437_);
v___x_4439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_4440_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_4425_);
v___x_4441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4439_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
v___x_4442_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_4443_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_4426_);
v___x_4444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4442_);
lean_ctor_set(v___x_4444_, 1, v___x_4443_);
v___x_4445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_4446_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_4427_);
v___x_4447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4445_);
lean_ctor_set(v___x_4447_, 1, v___x_4446_);
v___x_4448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_4449_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_4428_);
v___x_4450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4448_);
lean_ctor_set(v___x_4450_, 1, v___x_4449_);
v___x_4451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_4452_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_4429_);
lean_dec(v_storageArea_4429_);
v___x_4453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4453_, 0, v___x_4451_);
lean_ctor_set(v___x_4453_, 1, v___x_4452_);
v___x_4454_ = lean_unsigned_to_nat(8u);
v___x_4455_ = lean_mk_empty_array_with_capacity(v___x_4454_);
v___x_4456_ = lean_array_push(v___x_4455_, v___x_4432_);
v___x_4457_ = lean_array_push(v___x_4456_, v___x_4435_);
v___x_4458_ = lean_array_push(v___x_4457_, v___x_4438_);
v___x_4459_ = lean_array_push(v___x_4458_, v___x_4441_);
v___x_4460_ = lean_array_push(v___x_4459_, v___x_4444_);
v___x_4461_ = lean_array_push(v___x_4460_, v___x_4447_);
v___x_4462_ = lean_array_push(v___x_4461_, v___x_4450_);
v___x_4463_ = lean_array_push(v___x_4462_, v___x_4453_);
v___x_4464_ = l_Lasm_JS_Web_Support_fields(v___x_4463_);
lean_dec_ref(v___x_4463_);
return v___x_4464_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(lean_object* v_context_4465_, lean_object* v_d_4466_){
_start:
{
lean_object* v_received_4469_; 
if (lean_obj_tag(v_d_4466_) == 9)
{
lean_object* v_value_4483_; lean_object* v___x_4484_; 
v_value_4483_ = lean_ctor_get(v_d_4466_, 0);
lean_inc(v_value_4483_);
lean_dec_ref_known(v_d_4466_, 2);
v___x_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4484_, 0, v_value_4483_);
return v___x_4484_;
}
else
{
if (lean_obj_tag(v_d_4466_) == 9)
{
lean_object* v_value_4485_; lean_object* v_description_4486_; lean_object* v___x_4487_; uint8_t v___x_4488_; 
v_value_4485_ = lean_ctor_get(v_d_4466_, 0);
v_description_4486_ = lean_ctor_get(v_d_4466_, 1);
v___x_4487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4488_ = lean_string_dec_eq(v_description_4486_, v___x_4487_);
if (v___x_4488_ == 0)
{
goto v___jp_4481_;
}
else
{
uint32_t v___x_4489_; uint64_t v___x_4490_; lean_object* v___x_4491_; uint32_t v___x_4492_; lean_object* v___x_4493_; 
lean_inc_n(v_value_4485_, 2);
lean_dec_ref_known(v_d_4466_, 2);
v___x_4489_ = 206;
v___x_4490_ = 0ULL;
v___x_4491_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4491_, 0, v_value_4485_);
lean_ctor_set(v___x_4491_, 1, v___x_4487_);
v___x_4492_ = lasm_js_value_handle(v_value_4485_);
lean_dec(v_value_4485_);
v___x_4493_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4489_, v___x_4490_, v___x_4491_, v___x_4492_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v_a_4494_; uint8_t v___x_4495_; 
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4494_);
lean_dec_ref_known(v___x_4493_, 1);
v___x_4495_ = lean_string_validate_utf8(v_a_4494_);
if (v___x_4495_ == 0)
{
lean_object* v___x_4496_; lean_object* v___x_4497_; 
lean_dec(v_a_4494_);
v___x_4496_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_4497_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4496_);
v_received_4469_ = v___x_4497_;
goto v___jp_4468_;
}
else
{
lean_object* v___x_4498_; 
v___x_4498_ = lean_string_from_utf8_unchecked(v_a_4494_);
v_received_4469_ = v___x_4498_;
goto v___jp_4468_;
}
}
else
{
lean_object* v___x_4499_; 
lean_dec_ref_known(v___x_4493_, 1);
v___x_4499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_4469_ = v___x_4499_;
goto v___jp_4468_;
}
}
}
else
{
goto v___jp_4481_;
}
}
v___jp_4468_:
{
lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4471_ = lean_string_append(v___x_4470_, v_context_4465_);
v___x_4472_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4473_ = lean_string_append(v___x_4471_, v___x_4472_);
v___x_4474_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSStorageEvent___closed__0));
v___x_4475_ = lean_string_append(v___x_4473_, v___x_4474_);
v___x_4476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4477_ = lean_string_append(v___x_4475_, v___x_4476_);
v___x_4478_ = lean_string_append(v___x_4477_, v_received_4469_);
lean_dec_ref(v_received_4469_);
v___x_4479_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4479_, 0, v___x_4478_);
v___x_4480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4480_, 0, v___x_4479_);
return v___x_4480_;
}
v___jp_4481_:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_Lasm_JS_Data_describe(v_d_4466_);
v_received_4469_ = v___x_4482_;
goto v___jp_4468_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2___boxed(lean_object* v_context_4500_, lean_object* v_d_4501_, lean_object* v_a_4502_){
_start:
{
lean_object* v_res_4503_; 
v_res_4503_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v_context_4500_, v_d_4501_);
lean_dec_ref(v_context_4500_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(lean_object* v_b_4504_, lean_object* v_args_4505_, uint8_t v_await_4506_){
_start:
{
uint64_t v___y_4509_; uint64_t v___y_4510_; uint64_t v___x_4545_; uint64_t v___y_4547_; 
v___x_4545_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4506_ == 0)
{
uint64_t v___x_4552_; 
v___x_4552_ = 0ULL;
v___y_4547_ = v___x_4552_;
goto v___jp_4546_;
}
else
{
uint64_t v___x_4553_; 
v___x_4553_ = 2ULL;
v___y_4547_ = v___x_4553_;
goto v___jp_4546_;
}
v___jp_4508_:
{
uint64_t v_flags_4511_; uint32_t v___x_4512_; lean_object* v___x_4513_; uint32_t v___x_4514_; lean_object* v___x_4515_; 
v_flags_4511_ = lean_uint64_lor(v___y_4509_, v___y_4510_);
v___x_4512_ = 214;
v___x_4513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4504_, v_args_4505_);
v___x_4514_ = 0;
v___x_4515_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4512_, v_flags_4511_, v___x_4513_, v___x_4514_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v_a_4516_; lean_object* v___x_4517_; 
v_a_4516_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_a_4516_);
lean_dec_ref_known(v___x_4515_, 1);
v___x_4517_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4516_);
lean_dec(v_a_4516_);
if (lean_obj_tag(v___x_4517_) == 0)
{
lean_object* v_a_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v_a_4518_ = lean_ctor_get(v___x_4517_, 0);
lean_inc(v_a_4518_);
lean_dec_ref_known(v___x_4517_, 1);
v___x_4519_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4504_);
v___x_4520_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v___x_4519_, v_a_4518_);
lean_dec_ref(v___x_4519_);
return v___x_4520_;
}
else
{
lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4528_; 
v_a_4521_ = lean_ctor_get(v___x_4517_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4523_ = v___x_4517_;
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4517_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
lean_object* v___x_4526_; 
if (v_isShared_4524_ == 0)
{
v___x_4526_ = v___x_4523_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4521_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
else
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4544_; 
v_a_4529_ = lean_ctor_get(v___x_4515_, 0);
v_isSharedCheck_4544_ = !lean_is_exclusive(v___x_4515_);
if (v_isSharedCheck_4544_ == 0)
{
v___x_4531_ = v___x_4515_;
v_isShared_4532_ = v_isSharedCheck_4544_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v___x_4515_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4544_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4542_; 
v___x_4533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4534_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4504_);
v___x_4535_ = lean_string_append(v___x_4533_, v___x_4534_);
lean_dec_ref(v___x_4534_);
v___x_4536_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4537_ = lean_string_append(v___x_4535_, v___x_4536_);
v___x_4538_ = lean_io_error_to_string(v_a_4529_);
v___x_4539_ = lean_string_append(v___x_4537_, v___x_4538_);
lean_dec_ref(v___x_4538_);
v___x_4540_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4539_);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 0, v___x_4540_);
v___x_4542_ = v___x_4531_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
v___jp_4546_:
{
uint8_t v_construct_4548_; uint64_t v___x_4549_; 
v_construct_4548_ = lean_ctor_get_uint8(v_b_4504_, sizeof(void*)*4);
v___x_4549_ = lean_uint64_lor(v___x_4545_, v___y_4547_);
if (v_construct_4548_ == 0)
{
uint64_t v___x_4550_; 
v___x_4550_ = 0ULL;
v___y_4509_ = v___x_4549_;
v___y_4510_ = v___x_4550_;
goto v___jp_4508_;
}
else
{
uint64_t v___x_4551_; 
v___x_4551_ = 4ULL;
v___y_4509_ = v___x_4549_;
v___y_4510_ = v___x_4551_;
goto v___jp_4508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1___boxed(lean_object* v_b_4554_, lean_object* v_args_4555_, lean_object* v_await_4556_, lean_object* v_a_4557_){
_start:
{
uint8_t v_await_boxed_4558_; lean_object* v_res_4559_; 
v_await_boxed_4558_ = lean_unbox(v_await_4556_);
v_res_4559_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v_b_4554_, v_args_4555_, v_await_boxed_4558_);
lean_dec_ref(v_b_4554_);
return v_res_4559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new(lean_object* v_type_4568_, lean_object* v_eventInitDict_4569_){
_start:
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; uint8_t v___x_4579_; lean_object* v___x_4580_; 
v___x_4571_ = lean_unsigned_to_nat(2u);
v___x_4572_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_new___closed__2));
v___x_4573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4573_, 0, v_type_4568_);
v___x_4574_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(v_eventInitDict_4569_);
v___x_4575_ = lean_mk_empty_array_with_capacity(v___x_4571_);
v___x_4576_ = lean_array_push(v___x_4575_, v___x_4573_);
v___x_4577_ = lean_array_push(v___x_4576_, v___x_4574_);
v___x_4578_ = l_Lasm_JS_Web_Support_args(v___x_4577_);
v___x_4579_ = 0;
v___x_4580_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v___x_4572_, v___x_4578_, v___x_4579_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new___boxed(lean_object* v_type_4581_, lean_object* v_eventInitDict_4582_, lean_object* v_a_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l_Lasm_JS_Web_StorageEvent_new(v_type_4581_, v_eventInitDict_4582_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key(lean_object* v_self_4585_){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4587_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_4588_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4585_, v___x_4587_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key___boxed(lean_object* v_self_4589_, lean_object* v_a_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l_Lasm_JS_Web_StorageEvent_key(v_self_4589_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue(lean_object* v_self_4592_){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_4595_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4592_, v___x_4594_);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue___boxed(lean_object* v_self_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lasm_JS_Web_StorageEvent_oldValue(v_self_4596_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue(lean_object* v_self_4599_){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_4602_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_4599_, v___x_4601_);
return v___x_4602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue___boxed(lean_object* v_self_4603_, lean_object* v_a_4604_){
_start:
{
lean_object* v_res_4605_; 
v_res_4605_ = l_Lasm_JS_Web_StorageEvent_newValue(v_self_4603_);
return v_res_4605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url(lean_object* v_self_4606_){
_start:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4608_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_4609_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4606_, v___x_4608_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url___boxed(lean_object* v_self_4610_, lean_object* v_a_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l_Lasm_JS_Web_StorageEvent_url(v_self_4610_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(lean_object* v_context_4614_, lean_object* v_d_4615_){
_start:
{
lean_object* v_received_4621_; 
switch(lean_obj_tag(v_d_4615_))
{
case 1:
{
goto v___jp_4617_;
}
case 0:
{
goto v___jp_4617_;
}
default: 
{
if (lean_obj_tag(v_d_4615_) == 9)
{
lean_object* v_value_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v_value_4635_ = lean_ctor_get(v_d_4615_, 0);
lean_inc(v_value_4635_);
lean_dec_ref_known(v_d_4615_, 2);
v___x_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4636_, 0, v_value_4635_);
v___x_4637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4637_, 0, v___x_4636_);
return v___x_4637_;
}
else
{
if (lean_obj_tag(v_d_4615_) == 9)
{
lean_object* v_value_4638_; lean_object* v_description_4639_; lean_object* v___x_4640_; uint8_t v___x_4641_; 
v_value_4638_ = lean_ctor_get(v_d_4615_, 0);
v_description_4639_ = lean_ctor_get(v_d_4615_, 1);
v___x_4640_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4641_ = lean_string_dec_eq(v_description_4639_, v___x_4640_);
if (v___x_4641_ == 0)
{
goto v___jp_4633_;
}
else
{
uint32_t v___x_4642_; uint64_t v___x_4643_; lean_object* v___x_4644_; uint32_t v___x_4645_; lean_object* v___x_4646_; 
lean_inc_n(v_value_4638_, 2);
lean_dec_ref_known(v_d_4615_, 2);
v___x_4642_ = 206;
v___x_4643_ = 0ULL;
v___x_4644_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4644_, 0, v_value_4638_);
lean_ctor_set(v___x_4644_, 1, v___x_4640_);
v___x_4645_ = lasm_js_value_handle(v_value_4638_);
lean_dec(v_value_4638_);
v___x_4646_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4642_, v___x_4643_, v___x_4644_, v___x_4645_);
if (lean_obj_tag(v___x_4646_) == 0)
{
lean_object* v_a_4647_; uint8_t v___x_4648_; 
v_a_4647_ = lean_ctor_get(v___x_4646_, 0);
lean_inc(v_a_4647_);
lean_dec_ref_known(v___x_4646_, 1);
v___x_4648_ = lean_string_validate_utf8(v_a_4647_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4649_; lean_object* v___x_4650_; 
lean_dec(v_a_4647_);
v___x_4649_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6);
v___x_4650_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4649_);
v_received_4621_ = v___x_4650_;
goto v___jp_4620_;
}
else
{
lean_object* v___x_4651_; 
v___x_4651_ = lean_string_from_utf8_unchecked(v_a_4647_);
v_received_4621_ = v___x_4651_;
goto v___jp_4620_;
}
}
else
{
lean_object* v___x_4652_; 
lean_dec_ref_known(v___x_4646_, 1);
v___x_4652_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v_received_4621_ = v___x_4652_;
goto v___jp_4620_;
}
}
}
else
{
goto v___jp_4633_;
}
}
}
}
v___jp_4617_:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4618_ = lean_box(0);
v___x_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4618_);
return v___x_4619_;
}
v___jp_4620_:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4623_ = lean_string_append(v___x_4622_, v_context_4614_);
v___x_4624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4625_ = lean_string_append(v___x_4623_, v___x_4624_);
v___x_4626_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0));
v___x_4627_ = lean_string_append(v___x_4625_, v___x_4626_);
v___x_4628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4629_ = lean_string_append(v___x_4627_, v___x_4628_);
v___x_4630_ = lean_string_append(v___x_4629_, v_received_4621_);
lean_dec_ref(v_received_4621_);
v___x_4631_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4630_);
v___x_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4631_);
return v___x_4632_;
}
v___jp_4633_:
{
lean_object* v___x_4634_; 
v___x_4634_ = l_Lasm_JS_Data_describe(v_d_4615_);
v_received_4621_ = v___x_4634_;
goto v___jp_4620_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4653_, lean_object* v_d_4654_, lean_object* v_a_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_4653_, v_d_4654_);
lean_dec_ref(v_context_4653_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(lean_object* v_context_4657_, lean_object* v_bytes_4658_){
_start:
{
lean_object* v___x_4660_; 
v___x_4660_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4658_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4662_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref_known(v___x_4660_, 1);
v___x_4662_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_4657_, v_a_4661_);
return v___x_4662_;
}
else
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4670_; 
v_a_4663_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4670_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4670_ == 0)
{
v___x_4665_ = v___x_4660_;
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4660_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4668_; 
if (v_isShared_4666_ == 0)
{
v___x_4668_ = v___x_4665_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v_a_4663_);
v___x_4668_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
return v___x_4668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0___boxed(lean_object* v_context_4671_, lean_object* v_bytes_4672_, lean_object* v_a_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v_context_4671_, v_bytes_4672_);
lean_dec_ref(v_bytes_4672_);
lean_dec_ref(v_context_4671_);
return v_res_4674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(lean_object* v_o_4676_, lean_object* v_key_4677_){
_start:
{
lean_object* v_k_4679_; lean_object* v___x_4680_; 
v_k_4679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4679_, 0, v_key_4677_);
lean_inc_ref(v_k_4679_);
v___x_4680_ = l_Lasm_JS_Wire_encodeIO(v_k_4679_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v_a_4681_; uint32_t v___x_4682_; uint32_t v___x_4683_; uint64_t v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc(v_a_4681_);
lean_dec_ref_known(v___x_4680_, 1);
v___x_4682_ = 203;
v___x_4683_ = lasm_js_value_handle(v_o_4676_);
v___x_4684_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
v___x_4685_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4686_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4686_, 0, v_o_4676_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
v___x_4687_ = lean_unsigned_to_nat(2u);
v___x_4688_ = lean_mk_empty_array_with_capacity(v___x_4687_);
lean_inc_ref(v_k_4679_);
v___x_4689_ = lean_array_push(v___x_4688_, v_k_4679_);
v___x_4690_ = lean_array_push(v___x_4689_, v___x_4686_);
v___x_4691_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4691_, 0, v___x_4690_);
v___x_4692_ = lasm_js_call(v___x_4682_, v___x_4683_, v___x_4684_, v_a_4681_, v___x_4691_);
lean_dec_ref_known(v___x_4691_, 1);
lean_dec(v_a_4681_);
if (lean_obj_tag(v___x_4692_) == 0)
{
lean_object* v_a_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v_a_4693_ = lean_ctor_get(v___x_4692_, 0);
lean_inc(v_a_4693_);
lean_dec_ref_known(v___x_4692_, 1);
v___x_4694_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0));
v___x_4695_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4679_);
v___x_4696_ = lean_string_append(v___x_4694_, v___x_4695_);
lean_dec_ref(v___x_4695_);
v___x_4697_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v___x_4696_, v_a_4693_);
lean_dec(v_a_4693_);
lean_dec_ref(v___x_4696_);
return v___x_4697_;
}
else
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4705_; 
lean_dec_ref_known(v_k_4679_, 1);
v_a_4698_ = lean_ctor_get(v___x_4692_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4700_ = v___x_4692_;
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v___x_4692_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4698_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
return v___x_4703_;
}
}
}
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
lean_dec_ref_known(v_k_4679_, 1);
lean_dec(v_o_4676_);
v_a_4706_ = lean_ctor_get(v___x_4680_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4680_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4680_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___boxed(lean_object* v_o_4714_, lean_object* v_key_4715_, lean_object* v_a_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_o_4714_, v_key_4715_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea(lean_object* v_self_4718_){
_start:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4720_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_4721_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_self_4718_, v___x_4720_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea___boxed(lean_object* v_self_4722_, lean_object* v_a_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l_Lasm_JS_Web_StorageEvent_storageArea(v_self_4722_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent(lean_object* v_self_4726_, lean_object* v_type_4727_, lean_object* v_bubbles_4728_, lean_object* v_cancelable_4729_, lean_object* v_key_4730_, lean_object* v_oldValue_4731_, lean_object* v_newValue_4732_, lean_object* v_url_4733_, lean_object* v_storageArea_4734_){
_start:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
v___x_4736_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0));
v___x_4737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4737_, 0, v_type_4727_);
v___x_4738_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4728_);
v___x_4739_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4729_);
v___x_4740_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_4730_);
v___x_4741_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_4731_);
v___x_4742_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_4732_);
v___x_4743_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_4733_);
v___x_4744_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_4734_);
v___x_4745_ = lean_unsigned_to_nat(8u);
v___x_4746_ = lean_mk_empty_array_with_capacity(v___x_4745_);
v___x_4747_ = lean_array_push(v___x_4746_, v___x_4737_);
v___x_4748_ = lean_array_push(v___x_4747_, v___x_4738_);
v___x_4749_ = lean_array_push(v___x_4748_, v___x_4739_);
v___x_4750_ = lean_array_push(v___x_4749_, v___x_4740_);
v___x_4751_ = lean_array_push(v___x_4750_, v___x_4741_);
v___x_4752_ = lean_array_push(v___x_4751_, v___x_4742_);
v___x_4753_ = lean_array_push(v___x_4752_, v___x_4743_);
v___x_4754_ = lean_array_push(v___x_4753_, v___x_4744_);
v___x_4755_ = l_Lasm_JS_Web_Support_args(v___x_4754_);
v___x_4756_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4726_, v___x_4736_, v___x_4755_);
return v___x_4756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent___boxed(lean_object* v_self_4757_, lean_object* v_type_4758_, lean_object* v_bubbles_4759_, lean_object* v_cancelable_4760_, lean_object* v_key_4761_, lean_object* v_oldValue_4762_, lean_object* v_newValue_4763_, lean_object* v_url_4764_, lean_object* v_storageArea_4765_, lean_object* v_a_4766_){
_start:
{
lean_object* v_res_4767_; 
v_res_4767_ = l_Lasm_JS_Web_StorageEvent_initStorageEvent(v_self_4757_, v_type_4758_, v_bubbles_4759_, v_cancelable_4760_, v_key_4761_, v_oldValue_4762_, v_newValue_4763_, v_url_4764_, v_storageArea_4765_);
lean_dec(v_storageArea_4765_);
lean_dec(v_cancelable_4760_);
lean_dec(v_bubbles_4759_);
return v_res_4767_;
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
