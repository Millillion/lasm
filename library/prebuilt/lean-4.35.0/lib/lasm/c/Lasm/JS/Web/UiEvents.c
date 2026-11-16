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
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_DOMRectReadOnly_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_UIEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "UIEvent"};
static const lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_UIEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_UIEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_UIEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_UIEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MouseEvent"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_MouseEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.MouseEvent.new"};
static const lean_object* l_Lasm_JS_Web_MouseEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_MouseEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_MouseEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_MouseEvent_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "WheelEvent"};
static const lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_WheelEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.WheelEvent.new"};
static const lean_object* l_Lasm_JS_Web_WheelEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WheelEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WheelEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WheelEvent_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "KeyboardEvent"};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.KeyboardEvent.new"};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_KeyboardEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_KeyboardEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_KeyboardEvent_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_InputEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "InputEvent"};
static const lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_InputEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_InputEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_InputEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.InputEvent.new"};
static const lean_object* l_Lasm_JS_Web_InputEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_InputEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_InputEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_InputEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_InputEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FocusEvent"};
static const lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_FocusEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.FocusEvent.new"};
static const lean_object* l_Lasm_JS_Web_FocusEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_FocusEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_FocusEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_FocusEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "CompositionEvent"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.CompositionEvent.new"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CompositionEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "initCompositionEvent"};
static const lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PointerEvent"};
static const lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_PointerEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_PointerEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PointerEvent_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "SubmitEvent"};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_SubmitEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.SubmitEvent.new"};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_SubmitEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_SubmitEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_SubmitEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "HashChangeEvent"};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.HashChangeEvent.new"};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_HashChangeEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_HashChangeEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_HashChangeEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PopStateEvent"};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_PopStateEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.PopStateEvent.new"};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_PopStateEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_PopStateEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_PopStateEvent_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "StorageEvent"};
static const lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_StorageEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.StorageEvent.new"};
static const lean_object* l_Lasm_JS_Web_StorageEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_StorageEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_UIEvent_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_StorageEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_StorageEvent_new___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0(lean_object* v___x_1257_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_DOMRectReadOnly_cast_x3f_spec__0(v___x_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0___boxed(lean_object* v___x_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lasm_JS_Web_UIEvent_cast_x3f___lam__0(v___x_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f(lean_object* v_v_1269_){
_start:
{
lean_object* v___f_1271_; lean_object* v___x_1272_; 
v___f_1271_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_cast_x3f___closed__2));
lean_inc(v_v_1269_);
v___x_1272_ = l_Lasm_JS_Web_Support_isInstance(v___f_1271_, v_v_1269_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1286_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1286_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1286_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
uint8_t v___x_1277_; 
v___x_1277_ = lean_unbox(v_a_1273_);
lean_dec(v_a_1273_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1280_; 
lean_dec(v_v_1269_);
v___x_1278_ = lean_box(0);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1278_);
v___x_1280_ = v___x_1275_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1282_, 0, v_v_1269_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1282_);
v___x_1284_ = v___x_1275_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v_v_1269_);
v_a_1287_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1272_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1272_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_cast_x3f___boxed(lean_object* v_v_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lasm_JS_Web_UIEvent_cast_x3f(v_v_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(lean_object* v_x_1298_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 0)
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_box(0);
return v___x_1299_;
}
else
{
lean_object* v_val_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_val_1300_ = lean_ctor_get(v_x_1298_, 0);
v___x_1301_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_1300_);
v___x_1302_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1302_, 0, v_val_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0___boxed(lean_object* v_x_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_x_1303_);
lean_dec(v_x_1303_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(lean_object* v_x_1305_){
_start:
{
if (lean_obj_tag(v_x_1305_) == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_box(0);
return v___x_1306_;
}
else
{
lean_object* v_val_1307_; lean_object* v_bubbles_1308_; lean_object* v_cancelable_1309_; lean_object* v_composed_1310_; lean_object* v_view_1311_; lean_object* v_detail_1312_; lean_object* v_which_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v_val_1307_ = lean_ctor_get(v_x_1305_, 0);
lean_inc(v_val_1307_);
lean_dec_ref_known(v_x_1305_, 1);
v_bubbles_1308_ = lean_ctor_get(v_val_1307_, 0);
lean_inc(v_bubbles_1308_);
v_cancelable_1309_ = lean_ctor_get(v_val_1307_, 1);
lean_inc(v_cancelable_1309_);
v_composed_1310_ = lean_ctor_get(v_val_1307_, 2);
lean_inc(v_composed_1310_);
v_view_1311_ = lean_ctor_get(v_val_1307_, 3);
lean_inc(v_view_1311_);
v_detail_1312_ = lean_ctor_get(v_val_1307_, 4);
lean_inc(v_detail_1312_);
v_which_1313_ = lean_ctor_get(v_val_1307_, 5);
lean_inc(v_which_1313_);
lean_dec(v_val_1307_);
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1315_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1308_);
lean_dec(v_bubbles_1308_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1318_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1309_);
lean_dec(v_cancelable_1309_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1321_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1310_);
lean_dec(v_composed_1310_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1320_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1324_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_1311_);
lean_dec(v_view_1311_);
v___x_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1327_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_1312_);
v___x_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1330_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_1313_);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1329_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(6u);
v___x_1333_ = lean_mk_empty_array_with_capacity(v___x_1332_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1316_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1319_);
v___x_1336_ = lean_array_push(v___x_1335_, v___x_1322_);
v___x_1337_ = lean_array_push(v___x_1336_, v___x_1325_);
v___x_1338_ = lean_array_push(v___x_1337_, v___x_1328_);
v___x_1339_ = lean_array_push(v___x_1338_, v___x_1331_);
v___x_1340_ = l_Lasm_JS_Web_Support_fields(v___x_1339_);
lean_dec_ref(v___x_1339_);
return v___x_1340_;
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_1345_ = lean_string_utf8_byte_size(v___x_1344_);
return v___x_1345_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__3);
v___x_1348_ = lean_nat_dec_eq(v___x_1347_, v___x_1346_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__8));
v___x_1354_ = lean_unsigned_to_nat(46u);
v___x_1355_ = lean_unsigned_to_nat(193u);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__7));
v___x_1357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__6));
v___x_1358_ = l_mkPanicMessageWithDecl(v___x_1357_, v___x_1356_, v___x_1355_, v___x_1354_, v___x_1353_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(lean_object* v_context_1360_, lean_object* v_d_1361_){
_start:
{
lean_object* v___y_1364_; lean_object* v___y_1365_; 
if (lean_obj_tag(v_d_1361_) == 9)
{
lean_object* v_value_1369_; lean_object* v___x_1370_; 
v_value_1369_ = lean_ctor_get(v_d_1361_, 0);
lean_inc(v_value_1369_);
lean_dec_ref_known(v_d_1361_, 2);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_value_1369_);
return v___x_1370_;
}
else
{
lean_object* v___x_1371_; lean_object* v_received_1373_; 
v___x_1371_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_1361_) == 9)
{
lean_object* v_value_1387_; lean_object* v_description_1388_; uint8_t v___x_1389_; 
v_value_1387_ = lean_ctor_get(v_d_1361_, 0);
v_description_1388_ = lean_ctor_get(v_d_1361_, 1);
v___x_1389_ = lean_string_dec_eq(v_description_1388_, v___x_1371_);
if (v___x_1389_ == 0)
{
goto v___jp_1385_;
}
else
{
uint32_t v___x_1390_; uint64_t v___x_1391_; lean_object* v___x_1392_; uint32_t v___x_1393_; lean_object* v___x_1394_; 
lean_inc_n(v_value_1387_, 2);
lean_dec_ref_known(v_d_1361_, 2);
v___x_1390_ = 206;
v___x_1391_ = 0ULL;
v___x_1392_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1392_, 0, v_value_1387_);
lean_ctor_set(v___x_1392_, 1, v___x_1371_);
v___x_1393_ = lasm_js_value_handle(v_value_1387_);
lean_dec(v_value_1387_);
v___x_1394_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1390_, v___x_1391_, v___x_1392_, v___x_1393_);
lean_dec_ref_known(v___x_1392_, 2);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; uint8_t v___x_1396_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1396_ = lean_string_validate_utf8(v_a_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_dec(v_a_1395_);
v___x_1397_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_1398_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1397_);
v_received_1373_ = v___x_1398_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_string_from_utf8_unchecked(v_a_1395_);
v_received_1373_ = v___x_1399_;
goto v___jp_1372_;
}
}
else
{
lean_object* v___x_1400_; 
lean_dec_ref_known(v___x_1394_, 1);
v___x_1400_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_1373_ = v___x_1400_;
goto v___jp_1372_;
}
}
}
else
{
goto v___jp_1385_;
}
v___jp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1375_ = lean_string_append(v___x_1374_, v_context_1360_);
v___x_1376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1377_ = lean_string_append(v___x_1375_, v___x_1376_);
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSUIEvent___closed__1));
v___x_1379_ = lean_string_append(v___x_1377_, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1381_ = lean_string_append(v___x_1379_, v___x_1380_);
v___x_1382_ = lean_string_append(v___x_1381_, v_received_1373_);
lean_dec_ref(v_received_1373_);
v___x_1383_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; 
v___x_1384_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_1364_ = v___x_1382_;
v___y_1365_ = v___x_1384_;
goto v___jp_1363_;
}
else
{
v___y_1364_ = v___x_1382_;
v___y_1365_ = v___x_1371_;
goto v___jp_1363_;
}
}
v___jp_1385_:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lasm_JS_Data_describe(v_d_1361_);
v_received_1373_ = v___x_1386_;
goto v___jp_1372_;
}
}
v___jp_1363_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1366_ = lean_string_append(v___y_1364_, v___y_1365_);
v___x_1367_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1401_, lean_object* v_d_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v_context_1401_, v_d_1402_);
lean_dec_ref(v_context_1401_);
return v_res_1404_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_1406_; uint64_t v___x_1407_; 
v___x_1406_ = 0;
v___x_1407_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(lean_object* v_b_1408_, lean_object* v_args_1409_, uint8_t v_await_1410_){
_start:
{
uint64_t v___y_1413_; uint64_t v___y_1414_; uint64_t v___x_1457_; uint64_t v___y_1459_; 
v___x_1457_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1410_ == 0)
{
uint64_t v___x_1464_; 
v___x_1464_ = 0ULL;
v___y_1459_ = v___x_1464_;
goto v___jp_1458_;
}
else
{
uint64_t v___x_1465_; 
v___x_1465_ = 2ULL;
v___y_1459_ = v___x_1465_;
goto v___jp_1458_;
}
v___jp_1412_:
{
uint64_t v_flags_1415_; uint32_t v___x_1416_; lean_object* v___x_1417_; uint32_t v___x_1418_; lean_object* v___x_1419_; 
v_flags_1415_ = lean_uint64_lor(v___y_1413_, v___y_1414_);
v___x_1416_ = 214;
v___x_1417_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1408_, v_args_1409_);
v___x_1418_ = 0;
v___x_1419_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1416_, v_flags_1415_, v___x_1417_, v___x_1418_);
lean_dec(v___x_1417_);
if (lean_obj_tag(v___x_1419_) == 0)
{
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1420_);
lean_dec(v_a_1420_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1408_);
v___x_1424_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2(v___x_1423_, v_a_1422_);
lean_dec_ref(v___x_1423_);
return v___x_1424_;
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
v_a_1425_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1421_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1421_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
v_a_1433_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1419_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1419_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set_tag(v___x_1435_, 1);
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1456_; 
v_a_1441_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1443_ = v___x_1419_;
v_isShared_1444_ = v_isSharedCheck_1456_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1419_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1456_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1446_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1408_);
v___x_1447_ = lean_string_append(v___x_1445_, v___x_1446_);
lean_dec_ref(v___x_1446_);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1449_ = lean_string_append(v___x_1447_, v___x_1448_);
v___x_1450_ = lean_io_error_to_string(v_a_1441_);
v___x_1451_ = lean_string_append(v___x_1449_, v___x_1450_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 0, v___x_1452_);
v___x_1454_ = v___x_1443_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
v___jp_1458_:
{
uint8_t v_construct_1460_; uint64_t v___x_1461_; 
v_construct_1460_ = lean_ctor_get_uint8(v_b_1408_, sizeof(void*)*4);
v___x_1461_ = lean_uint64_lor(v___x_1457_, v___y_1459_);
if (v_construct_1460_ == 0)
{
uint64_t v___x_1462_; 
v___x_1462_ = 0ULL;
v___y_1413_ = v___x_1461_;
v___y_1414_ = v___x_1462_;
goto v___jp_1412_;
}
else
{
uint64_t v___x_1463_; 
v___x_1463_ = 4ULL;
v___y_1413_ = v___x_1461_;
v___y_1414_ = v___x_1463_;
goto v___jp_1412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___boxed(lean_object* v_b_1466_, lean_object* v_args_1467_, lean_object* v_await_1468_, lean_object* v_a_1469_){
_start:
{
uint8_t v_await_boxed_1470_; lean_object* v_res_1471_; 
v_await_boxed_1470_ = lean_unbox(v_await_1468_);
v_res_1471_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v_b_1466_, v_args_1467_, v_await_boxed_1470_);
lean_dec_ref(v_b_1466_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new(lean_object* v_type_1480_, lean_object* v_eventInitDict_1481_){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; 
v___x_1483_ = lean_unsigned_to_nat(2u);
v___x_1484_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_new___closed__2));
v___x_1485_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_type_1480_);
v___x_1486_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0(v_eventInitDict_1481_);
v___x_1487_ = lean_mk_empty_array_with_capacity(v___x_1483_);
v___x_1488_ = lean_array_push(v___x_1487_, v___x_1485_);
v___x_1489_ = lean_array_push(v___x_1488_, v___x_1486_);
v___x_1490_ = l_Lasm_JS_Web_Support_args(v___x_1489_);
v___x_1491_ = 0;
v___x_1492_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1(v___x_1484_, v___x_1490_, v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_new___boxed(lean_object* v_type_1493_, lean_object* v_eventInitDict_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lasm_JS_Web_UIEvent_new(v_type_1493_, v_eventInitDict_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view(lean_object* v_self_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1500_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_defaultView_spec__0(v_self_1497_, v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_view___boxed(lean_object* v_self_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lasm_JS_Web_UIEvent_view(v_self_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail(lean_object* v_self_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1506_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1507_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1504_, v___x_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_detail___boxed(lean_object* v_self_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lasm_JS_Web_UIEvent_detail(v_self_1508_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which(lean_object* v_self_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1514_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1511_, v___x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_which___boxed(lean_object* v_self_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lasm_JS_Web_UIEvent_which(v_self_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent(lean_object* v_self_1519_, lean_object* v_typeArg_1520_, lean_object* v_bubblesArg_1521_, lean_object* v_cancelableArg_1522_, lean_object* v_viewArg_1523_, lean_object* v_detailArg_1524_){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1526_ = ((lean_object*)(l_Lasm_JS_Web_UIEvent_initUIEvent___closed__0));
v___x_1527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_typeArg_1520_);
v___x_1528_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_1521_);
v___x_1529_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_1522_);
v___x_1530_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_1523_);
v___x_1531_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_1524_);
v___x_1532_ = lean_unsigned_to_nat(5u);
v___x_1533_ = lean_mk_empty_array_with_capacity(v___x_1532_);
v___x_1534_ = lean_array_push(v___x_1533_, v___x_1527_);
v___x_1535_ = lean_array_push(v___x_1534_, v___x_1528_);
v___x_1536_ = lean_array_push(v___x_1535_, v___x_1529_);
v___x_1537_ = lean_array_push(v___x_1536_, v___x_1530_);
v___x_1538_ = lean_array_push(v___x_1537_, v___x_1531_);
v___x_1539_ = l_Lasm_JS_Web_Support_args(v___x_1538_);
v___x_1540_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1519_, v___x_1526_, v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UIEvent_initUIEvent___boxed(lean_object* v_self_1541_, lean_object* v_typeArg_1542_, lean_object* v_bubblesArg_1543_, lean_object* v_cancelableArg_1544_, lean_object* v_viewArg_1545_, lean_object* v_detailArg_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lasm_JS_Web_UIEvent_initUIEvent(v_self_1541_, v_typeArg_1542_, v_bubblesArg_1543_, v_cancelableArg_1544_, v_viewArg_1545_, v_detailArg_1546_);
lean_dec(v_viewArg_1545_);
lean_dec(v_cancelableArg_1544_);
lean_dec(v_bubblesArg_1543_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f(lean_object* v_v_1555_){
_start:
{
lean_object* v___f_1557_; lean_object* v___x_1558_; 
v___f_1557_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_cast_x3f___closed__2));
lean_inc(v_v_1555_);
v___x_1558_ = l_Lasm_JS_Web_Support_isInstance(v___f_1557_, v_v_1555_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1572_; 
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1561_ = v___x_1558_;
v_isShared_1562_ = v_isSharedCheck_1572_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1558_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1572_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
uint8_t v___x_1563_; 
v___x_1563_ = lean_unbox(v_a_1559_);
lean_dec(v_a_1559_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
lean_dec(v_v_1555_);
v___x_1564_ = lean_box(0);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1564_);
v___x_1566_ = v___x_1561_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
else
{
lean_object* v___x_1568_; lean_object* v___x_1570_; 
v___x_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1568_, 0, v_v_1555_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1568_);
v___x_1570_ = v___x_1561_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v___x_1568_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec(v_v_1555_);
v_a_1573_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1558_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1558_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_cast_x3f___boxed(lean_object* v_v_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lasm_JS_Web_MouseEvent_cast_x3f(v_v_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(lean_object* v_context_1584_, lean_object* v_d_1585_){
_start:
{
lean_object* v___y_1588_; lean_object* v___y_1589_; 
if (lean_obj_tag(v_d_1585_) == 9)
{
lean_object* v_value_1593_; lean_object* v___x_1594_; 
v_value_1593_ = lean_ctor_get(v_d_1585_, 0);
lean_inc(v_value_1593_);
lean_dec_ref_known(v_d_1585_, 2);
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_value_1593_);
return v___x_1594_;
}
else
{
lean_object* v___x_1595_; lean_object* v_received_1597_; 
v___x_1595_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_1585_) == 9)
{
lean_object* v_value_1611_; lean_object* v_description_1612_; uint8_t v___x_1613_; 
v_value_1611_ = lean_ctor_get(v_d_1585_, 0);
v_description_1612_ = lean_ctor_get(v_d_1585_, 1);
v___x_1613_ = lean_string_dec_eq(v_description_1612_, v___x_1595_);
if (v___x_1613_ == 0)
{
goto v___jp_1609_;
}
else
{
uint32_t v___x_1614_; uint64_t v___x_1615_; lean_object* v___x_1616_; uint32_t v___x_1617_; lean_object* v___x_1618_; 
lean_inc_n(v_value_1611_, 2);
lean_dec_ref_known(v_d_1585_, 2);
v___x_1614_ = 206;
v___x_1615_ = 0ULL;
v___x_1616_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1616_, 0, v_value_1611_);
lean_ctor_set(v___x_1616_, 1, v___x_1595_);
v___x_1617_ = lasm_js_value_handle(v_value_1611_);
lean_dec(v_value_1611_);
v___x_1618_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1614_, v___x_1615_, v___x_1616_, v___x_1617_);
lean_dec_ref_known(v___x_1616_, 2);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; uint8_t v___x_1620_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = lean_string_validate_utf8(v_a_1619_);
if (v___x_1620_ == 0)
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
lean_dec(v_a_1619_);
v___x_1621_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_1622_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1621_);
v_received_1597_ = v___x_1622_;
goto v___jp_1596_;
}
else
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_string_from_utf8_unchecked(v_a_1619_);
v_received_1597_ = v___x_1623_;
goto v___jp_1596_;
}
}
else
{
lean_object* v___x_1624_; 
lean_dec_ref_known(v___x_1618_, 1);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_1597_ = v___x_1624_;
goto v___jp_1596_;
}
}
}
else
{
goto v___jp_1609_;
}
v___jp_1596_:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1599_ = lean_string_append(v___x_1598_, v_context_1584_);
v___x_1600_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_1601_ = lean_string_append(v___x_1599_, v___x_1600_);
v___x_1602_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSMouseEvent___closed__0));
v___x_1603_ = lean_string_append(v___x_1601_, v___x_1602_);
v___x_1604_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_1605_ = lean_string_append(v___x_1603_, v___x_1604_);
v___x_1606_ = lean_string_append(v___x_1605_, v_received_1597_);
lean_dec_ref(v_received_1597_);
v___x_1607_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_1588_ = v___x_1606_;
v___y_1589_ = v___x_1608_;
goto v___jp_1587_;
}
else
{
v___y_1588_ = v___x_1606_;
v___y_1589_ = v___x_1595_;
goto v___jp_1587_;
}
}
v___jp_1609_:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lasm_JS_Data_describe(v_d_1585_);
v_received_1597_ = v___x_1610_;
goto v___jp_1596_;
}
}
v___jp_1587_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_string_append(v___y_1588_, v___y_1589_);
v___x_1591_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
v___x_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
return v___x_1592_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2___boxed(lean_object* v_context_1625_, lean_object* v_d_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v_context_1625_, v_d_1626_);
lean_dec_ref(v_context_1625_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(lean_object* v_b_1629_, lean_object* v_args_1630_, uint8_t v_await_1631_){
_start:
{
uint64_t v___y_1634_; uint64_t v___y_1635_; uint64_t v___x_1678_; uint64_t v___y_1680_; 
v___x_1678_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_1631_ == 0)
{
uint64_t v___x_1685_; 
v___x_1685_ = 0ULL;
v___y_1680_ = v___x_1685_;
goto v___jp_1679_;
}
else
{
uint64_t v___x_1686_; 
v___x_1686_ = 2ULL;
v___y_1680_ = v___x_1686_;
goto v___jp_1679_;
}
v___jp_1633_:
{
uint64_t v_flags_1636_; uint32_t v___x_1637_; lean_object* v___x_1638_; uint32_t v___x_1639_; lean_object* v___x_1640_; 
v_flags_1636_ = lean_uint64_lor(v___y_1634_, v___y_1635_);
v___x_1637_ = 214;
v___x_1638_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1629_, v_args_1630_);
v___x_1639_ = 0;
v___x_1640_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1637_, v_flags_1636_, v___x_1638_, v___x_1639_);
lean_dec(v___x_1638_);
if (lean_obj_tag(v___x_1640_) == 0)
{
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1641_);
lean_dec(v_a_1641_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1644_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1629_);
v___x_1645_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1_spec__2(v___x_1644_, v_a_1643_);
lean_dec_ref(v___x_1644_);
return v___x_1645_;
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
v_a_1646_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1642_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1642_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
v_a_1654_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1640_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1640_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
lean_ctor_set_tag(v___x_1656_, 1);
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
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
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1677_; 
v_a_1662_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1664_ = v___x_1640_;
v_isShared_1665_ = v_isSharedCheck_1677_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1640_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1677_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1675_; 
v___x_1666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_1667_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1629_);
v___x_1668_ = lean_string_append(v___x_1666_, v___x_1667_);
lean_dec_ref(v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_1670_ = lean_string_append(v___x_1668_, v___x_1669_);
v___x_1671_ = lean_io_error_to_string(v_a_1662_);
v___x_1672_ = lean_string_append(v___x_1670_, v___x_1671_);
lean_dec_ref(v___x_1671_);
v___x_1673_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v___x_1673_);
v___x_1675_ = v___x_1664_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v___x_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
v___jp_1679_:
{
uint8_t v_construct_1681_; uint64_t v___x_1682_; 
v_construct_1681_ = lean_ctor_get_uint8(v_b_1629_, sizeof(void*)*4);
v___x_1682_ = lean_uint64_lor(v___x_1678_, v___y_1680_);
if (v_construct_1681_ == 0)
{
uint64_t v___x_1683_; 
v___x_1683_ = 0ULL;
v___y_1634_ = v___x_1682_;
v___y_1635_ = v___x_1683_;
goto v___jp_1633_;
}
else
{
uint64_t v___x_1684_; 
v___x_1684_ = 4ULL;
v___y_1634_ = v___x_1682_;
v___y_1635_ = v___x_1684_;
goto v___jp_1633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1___boxed(lean_object* v_b_1687_, lean_object* v_args_1688_, lean_object* v_await_1689_, lean_object* v_a_1690_){
_start:
{
uint8_t v_await_boxed_1691_; lean_object* v_res_1692_; 
v_await_boxed_1691_ = lean_unbox(v_await_1689_);
v_res_1692_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v_b_1687_, v_args_1688_, v_await_boxed_1691_);
lean_dec_ref(v_b_1687_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(lean_object* v_x_1693_){
_start:
{
if (lean_obj_tag(v_x_1693_) == 0)
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_box(0);
return v___x_1694_;
}
else
{
lean_object* v_val_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v_val_1695_ = lean_ctor_get(v_x_1693_, 0);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_1695_);
v___x_1697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_val_1695_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
return v___x_1697_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0___boxed(lean_object* v_x_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_x_1698_);
lean_dec(v_x_1698_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(lean_object* v_x_1700_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_box(0);
return v___x_1701_;
}
else
{
lean_object* v_val_1702_; lean_object* v_bubbles_1703_; lean_object* v_cancelable_1704_; lean_object* v_composed_1705_; lean_object* v_view_1706_; lean_object* v_detail_1707_; lean_object* v_which_1708_; lean_object* v_ctrlKey_1709_; lean_object* v_shiftKey_1710_; lean_object* v_altKey_1711_; lean_object* v_metaKey_1712_; lean_object* v_modifierAltGraph_1713_; lean_object* v_modifierCapsLock_1714_; lean_object* v_modifierFn_1715_; lean_object* v_modifierFnLock_1716_; lean_object* v_modifierHyper_1717_; lean_object* v_modifierNumLock_1718_; lean_object* v_modifierScrollLock_1719_; lean_object* v_modifierSuper_1720_; lean_object* v_modifierSymbol_1721_; lean_object* v_modifierSymbolLock_1722_; lean_object* v_screenX_1723_; lean_object* v_screenY_1724_; lean_object* v_clientX_1725_; lean_object* v_clientY_1726_; lean_object* v_button_1727_; lean_object* v_buttons_1728_; lean_object* v_relatedTarget_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v_val_1702_ = lean_ctor_get(v_x_1700_, 0);
lean_inc(v_val_1702_);
lean_dec_ref_known(v_x_1700_, 1);
v_bubbles_1703_ = lean_ctor_get(v_val_1702_, 0);
lean_inc(v_bubbles_1703_);
v_cancelable_1704_ = lean_ctor_get(v_val_1702_, 1);
lean_inc(v_cancelable_1704_);
v_composed_1705_ = lean_ctor_get(v_val_1702_, 2);
lean_inc(v_composed_1705_);
v_view_1706_ = lean_ctor_get(v_val_1702_, 3);
lean_inc(v_view_1706_);
v_detail_1707_ = lean_ctor_get(v_val_1702_, 4);
lean_inc(v_detail_1707_);
v_which_1708_ = lean_ctor_get(v_val_1702_, 5);
lean_inc(v_which_1708_);
v_ctrlKey_1709_ = lean_ctor_get(v_val_1702_, 6);
lean_inc(v_ctrlKey_1709_);
v_shiftKey_1710_ = lean_ctor_get(v_val_1702_, 7);
lean_inc(v_shiftKey_1710_);
v_altKey_1711_ = lean_ctor_get(v_val_1702_, 8);
lean_inc(v_altKey_1711_);
v_metaKey_1712_ = lean_ctor_get(v_val_1702_, 9);
lean_inc(v_metaKey_1712_);
v_modifierAltGraph_1713_ = lean_ctor_get(v_val_1702_, 10);
lean_inc(v_modifierAltGraph_1713_);
v_modifierCapsLock_1714_ = lean_ctor_get(v_val_1702_, 11);
lean_inc(v_modifierCapsLock_1714_);
v_modifierFn_1715_ = lean_ctor_get(v_val_1702_, 12);
lean_inc(v_modifierFn_1715_);
v_modifierFnLock_1716_ = lean_ctor_get(v_val_1702_, 13);
lean_inc(v_modifierFnLock_1716_);
v_modifierHyper_1717_ = lean_ctor_get(v_val_1702_, 14);
lean_inc(v_modifierHyper_1717_);
v_modifierNumLock_1718_ = lean_ctor_get(v_val_1702_, 15);
lean_inc(v_modifierNumLock_1718_);
v_modifierScrollLock_1719_ = lean_ctor_get(v_val_1702_, 16);
lean_inc(v_modifierScrollLock_1719_);
v_modifierSuper_1720_ = lean_ctor_get(v_val_1702_, 17);
lean_inc(v_modifierSuper_1720_);
v_modifierSymbol_1721_ = lean_ctor_get(v_val_1702_, 18);
lean_inc(v_modifierSymbol_1721_);
v_modifierSymbolLock_1722_ = lean_ctor_get(v_val_1702_, 19);
lean_inc(v_modifierSymbolLock_1722_);
v_screenX_1723_ = lean_ctor_get(v_val_1702_, 20);
lean_inc(v_screenX_1723_);
v_screenY_1724_ = lean_ctor_get(v_val_1702_, 21);
lean_inc(v_screenY_1724_);
v_clientX_1725_ = lean_ctor_get(v_val_1702_, 22);
lean_inc(v_clientX_1725_);
v_clientY_1726_ = lean_ctor_get(v_val_1702_, 23);
lean_inc(v_clientY_1726_);
v_button_1727_ = lean_ctor_get(v_val_1702_, 24);
lean_inc(v_button_1727_);
v_buttons_1728_ = lean_ctor_get(v_val_1702_, 25);
lean_inc(v_buttons_1728_);
v_relatedTarget_1729_ = lean_ctor_get(v_val_1702_, 26);
lean_inc(v_relatedTarget_1729_);
lean_dec(v_val_1702_);
v___x_1730_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_1731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1703_);
lean_dec(v_bubbles_1703_);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_1734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1704_);
lean_dec(v_cancelable_1704_);
v___x_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_1737_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1705_);
lean_dec(v_composed_1705_);
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1736_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_1740_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_1706_);
lean_dec(v_view_1706_);
v___x_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_1743_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_1707_);
v___x_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1742_);
lean_ctor_set(v___x_1744_, 1, v___x_1743_);
v___x_1745_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_1746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_1708_);
v___x_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_1709_);
lean_dec(v_ctrlKey_1709_);
v___x_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1748_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1752_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_1710_);
lean_dec(v_shiftKey_1710_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1751_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_1711_);
lean_dec(v_altKey_1711_);
v___x_1756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_1712_);
lean_dec(v_metaKey_1712_);
v___x_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1757_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_1761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_1713_);
lean_dec(v_modifierAltGraph_1713_);
v___x_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_1764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_1714_);
lean_dec(v_modifierCapsLock_1714_);
v___x_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_1767_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_1715_);
lean_dec(v_modifierFn_1715_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_1770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_1716_);
lean_dec(v_modifierFnLock_1716_);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_1773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_1717_);
lean_dec(v_modifierHyper_1717_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1772_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_1776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_1718_);
lean_dec(v_modifierNumLock_1718_);
v___x_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_1779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_1719_);
lean_dec(v_modifierScrollLock_1719_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_1782_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_1720_);
lean_dec(v_modifierSuper_1720_);
v___x_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1781_);
lean_ctor_set(v___x_1783_, 1, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_1785_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_1721_);
lean_dec(v_modifierSymbol_1721_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1784_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_1788_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_1722_);
lean_dec(v_modifierSymbolLock_1722_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_1723_);
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_1724_);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
v___x_1796_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1797_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_1725_);
v___x_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___x_1799_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1800_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_1726_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1803_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_1727_);
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1802_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
v___x_1805_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1806_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_1728_);
v___x_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_1809_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_1729_);
lean_dec(v_relatedTarget_1729_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1808_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = lean_unsigned_to_nat(27u);
v___x_1812_ = lean_mk_empty_array_with_capacity(v___x_1811_);
v___x_1813_ = lean_array_push(v___x_1812_, v___x_1732_);
v___x_1814_ = lean_array_push(v___x_1813_, v___x_1735_);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1738_);
v___x_1816_ = lean_array_push(v___x_1815_, v___x_1741_);
v___x_1817_ = lean_array_push(v___x_1816_, v___x_1744_);
v___x_1818_ = lean_array_push(v___x_1817_, v___x_1747_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1750_);
v___x_1820_ = lean_array_push(v___x_1819_, v___x_1753_);
v___x_1821_ = lean_array_push(v___x_1820_, v___x_1756_);
v___x_1822_ = lean_array_push(v___x_1821_, v___x_1759_);
v___x_1823_ = lean_array_push(v___x_1822_, v___x_1762_);
v___x_1824_ = lean_array_push(v___x_1823_, v___x_1765_);
v___x_1825_ = lean_array_push(v___x_1824_, v___x_1768_);
v___x_1826_ = lean_array_push(v___x_1825_, v___x_1771_);
v___x_1827_ = lean_array_push(v___x_1826_, v___x_1774_);
v___x_1828_ = lean_array_push(v___x_1827_, v___x_1777_);
v___x_1829_ = lean_array_push(v___x_1828_, v___x_1780_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1783_);
v___x_1831_ = lean_array_push(v___x_1830_, v___x_1786_);
v___x_1832_ = lean_array_push(v___x_1831_, v___x_1789_);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1792_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1795_);
v___x_1835_ = lean_array_push(v___x_1834_, v___x_1798_);
v___x_1836_ = lean_array_push(v___x_1835_, v___x_1801_);
v___x_1837_ = lean_array_push(v___x_1836_, v___x_1804_);
v___x_1838_ = lean_array_push(v___x_1837_, v___x_1807_);
v___x_1839_ = lean_array_push(v___x_1838_, v___x_1810_);
v___x_1840_ = l_Lasm_JS_Web_Support_fields(v___x_1839_);
lean_dec_ref(v___x_1839_);
return v___x_1840_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new(lean_object* v_type_1848_, lean_object* v_eventInitDict_1849_){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; 
v___x_1851_ = lean_unsigned_to_nat(2u);
v___x_1852_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_new___closed__1));
v___x_1853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_type_1848_);
v___x_1854_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0(v_eventInitDict_1849_);
v___x_1855_ = lean_mk_empty_array_with_capacity(v___x_1851_);
v___x_1856_ = lean_array_push(v___x_1855_, v___x_1853_);
v___x_1857_ = lean_array_push(v___x_1856_, v___x_1854_);
v___x_1858_ = l_Lasm_JS_Web_Support_args(v___x_1857_);
v___x_1859_ = 0;
v___x_1860_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_MouseEvent_new_spec__1(v___x_1852_, v___x_1858_, v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_new___boxed(lean_object* v_type_1861_, lean_object* v_eventInitDict_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lasm_JS_Web_MouseEvent_new(v_type_1861_, v_eventInitDict_1862_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX(lean_object* v_self_1866_){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageX___closed__0));
v___x_1869_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1866_, v___x_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageX___boxed(lean_object* v_self_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lasm_JS_Web_MouseEvent_pageX(v_self_1870_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY(lean_object* v_self_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_pageY___closed__0));
v___x_1877_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1874_, v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_pageY___boxed(lean_object* v_self_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lasm_JS_Web_MouseEvent_pageY(v_self_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x(lean_object* v_self_1882_){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_x___closed__0));
v___x_1885_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1882_, v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_x___boxed(lean_object* v_self_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lasm_JS_Web_MouseEvent_x(v_self_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y(lean_object* v_self_1890_){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_y___closed__0));
v___x_1893_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1890_, v___x_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_y___boxed(lean_object* v_self_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lasm_JS_Web_MouseEvent_y(v_self_1894_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX(lean_object* v_self_1898_){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetX___closed__0));
v___x_1901_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1898_, v___x_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetX___boxed(lean_object* v_self_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lasm_JS_Web_MouseEvent_offsetX(v_self_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY(lean_object* v_self_1906_){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_offsetY___closed__0));
v___x_1909_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_1906_, v___x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_offsetY___boxed(lean_object* v_self_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lasm_JS_Web_MouseEvent_offsetY(v_self_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX(lean_object* v_self_1913_){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_1916_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1913_, v___x_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenX___boxed(lean_object* v_self_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l_Lasm_JS_Web_MouseEvent_screenX(v_self_1917_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY(lean_object* v_self_1920_){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_1923_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1920_, v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_screenY___boxed(lean_object* v_self_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lasm_JS_Web_MouseEvent_screenY(v_self_1924_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX(lean_object* v_self_1927_){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_1930_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1927_, v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientX___boxed(lean_object* v_self_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lasm_JS_Web_MouseEvent_clientX(v_self_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY(lean_object* v_self_1934_){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_1937_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1934_, v___x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_clientY___boxed(lean_object* v_self_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Lasm_JS_Web_MouseEvent_clientY(v_self_1938_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX(lean_object* v_self_1942_){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerX___closed__0));
v___x_1945_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1942_, v___x_1944_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerX___boxed(lean_object* v_self_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lasm_JS_Web_MouseEvent_layerX(v_self_1946_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY(lean_object* v_self_1950_){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_layerY___closed__0));
v___x_1953_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1950_, v___x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_layerY___boxed(lean_object* v_self_1954_, lean_object* v_a_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lasm_JS_Web_MouseEvent_layerY(v_self_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey(lean_object* v_self_1957_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_1960_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1957_, v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_ctrlKey___boxed(lean_object* v_self_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Web_MouseEvent_ctrlKey(v_self_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey(lean_object* v_self_1964_){
_start:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_1967_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1964_, v___x_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_shiftKey___boxed(lean_object* v_self_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lasm_JS_Web_MouseEvent_shiftKey(v_self_1968_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey(lean_object* v_self_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_1974_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1971_, v___x_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_altKey___boxed(lean_object* v_self_1975_, lean_object* v_a_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lasm_JS_Web_MouseEvent_altKey(v_self_1975_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey(lean_object* v_self_1978_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_1981_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1978_, v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_metaKey___boxed(lean_object* v_self_1982_, lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lasm_JS_Web_MouseEvent_metaKey(v_self_1982_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button(lean_object* v_self_1985_){
_start:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_1988_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1985_, v___x_1987_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_button___boxed(lean_object* v_self_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l_Lasm_JS_Web_MouseEvent_button(v_self_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons(lean_object* v_self_1992_){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_1995_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1992_, v___x_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_buttons___boxed(lean_object* v_self_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lasm_JS_Web_MouseEvent_buttons(v_self_1996_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget(lean_object* v_self_1999_){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_2002_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1999_, v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_relatedTarget___boxed(lean_object* v_self_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lasm_JS_Web_MouseEvent_relatedTarget(v_self_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState(lean_object* v_self_2007_, lean_object* v_keyArg_2008_){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_2011_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2011_, 0, v_keyArg_2008_);
v___x_2012_ = lean_unsigned_to_nat(1u);
v___x_2013_ = lean_mk_empty_array_with_capacity(v___x_2012_);
v___x_2014_ = lean_array_push(v___x_2013_, v___x_2011_);
v___x_2015_ = l_Lasm_JS_Web_Support_args(v___x_2014_);
v___x_2016_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2007_, v___x_2010_, v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_getModifierState___boxed(lean_object* v_self_2017_, lean_object* v_keyArg_2018_, lean_object* v_a_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lasm_JS_Web_MouseEvent_getModifierState(v_self_2017_, v_keyArg_2018_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent(lean_object* v_self_2022_, lean_object* v_typeArg_2023_, lean_object* v_bubblesArg_2024_, lean_object* v_cancelableArg_2025_, lean_object* v_viewArg_2026_, lean_object* v_detailArg_2027_, lean_object* v_screenXArg_2028_, lean_object* v_screenYArg_2029_, lean_object* v_clientXArg_2030_, lean_object* v_clientYArg_2031_, lean_object* v_ctrlKeyArg_2032_, lean_object* v_altKeyArg_2033_, lean_object* v_shiftKeyArg_2034_, lean_object* v_metaKeyArg_2035_, lean_object* v_buttonArg_2036_, lean_object* v_relatedTargetArg_2037_){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2039_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_initMouseEvent___closed__0));
v___x_2040_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_typeArg_2023_);
v___x_2041_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_2024_);
v___x_2042_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_2025_);
v___x_2043_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_2026_);
v___x_2044_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detailArg_2027_);
v___x_2045_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenXArg_2028_);
v___x_2046_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenYArg_2029_);
v___x_2047_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientXArg_2030_);
v___x_2048_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientYArg_2031_);
v___x_2049_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKeyArg_2032_);
v___x_2050_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKeyArg_2033_);
v___x_2051_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKeyArg_2034_);
v___x_2052_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKeyArg_2035_);
v___x_2053_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_buttonArg_2036_);
v___x_2054_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTargetArg_2037_);
v___x_2055_ = lean_unsigned_to_nat(15u);
v___x_2056_ = lean_mk_empty_array_with_capacity(v___x_2055_);
v___x_2057_ = lean_array_push(v___x_2056_, v___x_2040_);
v___x_2058_ = lean_array_push(v___x_2057_, v___x_2041_);
v___x_2059_ = lean_array_push(v___x_2058_, v___x_2042_);
v___x_2060_ = lean_array_push(v___x_2059_, v___x_2043_);
v___x_2061_ = lean_array_push(v___x_2060_, v___x_2044_);
v___x_2062_ = lean_array_push(v___x_2061_, v___x_2045_);
v___x_2063_ = lean_array_push(v___x_2062_, v___x_2046_);
v___x_2064_ = lean_array_push(v___x_2063_, v___x_2047_);
v___x_2065_ = lean_array_push(v___x_2064_, v___x_2048_);
v___x_2066_ = lean_array_push(v___x_2065_, v___x_2049_);
v___x_2067_ = lean_array_push(v___x_2066_, v___x_2050_);
v___x_2068_ = lean_array_push(v___x_2067_, v___x_2051_);
v___x_2069_ = lean_array_push(v___x_2068_, v___x_2052_);
v___x_2070_ = lean_array_push(v___x_2069_, v___x_2053_);
v___x_2071_ = lean_array_push(v___x_2070_, v___x_2054_);
v___x_2072_ = l_Lasm_JS_Web_Support_args(v___x_2071_);
v___x_2073_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2022_, v___x_2039_, v___x_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MouseEvent_initMouseEvent___boxed(lean_object** _args){
lean_object* v_self_2074_ = _args[0];
lean_object* v_typeArg_2075_ = _args[1];
lean_object* v_bubblesArg_2076_ = _args[2];
lean_object* v_cancelableArg_2077_ = _args[3];
lean_object* v_viewArg_2078_ = _args[4];
lean_object* v_detailArg_2079_ = _args[5];
lean_object* v_screenXArg_2080_ = _args[6];
lean_object* v_screenYArg_2081_ = _args[7];
lean_object* v_clientXArg_2082_ = _args[8];
lean_object* v_clientYArg_2083_ = _args[9];
lean_object* v_ctrlKeyArg_2084_ = _args[10];
lean_object* v_altKeyArg_2085_ = _args[11];
lean_object* v_shiftKeyArg_2086_ = _args[12];
lean_object* v_metaKeyArg_2087_ = _args[13];
lean_object* v_buttonArg_2088_ = _args[14];
lean_object* v_relatedTargetArg_2089_ = _args[15];
lean_object* v_a_2090_ = _args[16];
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Lasm_JS_Web_MouseEvent_initMouseEvent(v_self_2074_, v_typeArg_2075_, v_bubblesArg_2076_, v_cancelableArg_2077_, v_viewArg_2078_, v_detailArg_2079_, v_screenXArg_2080_, v_screenYArg_2081_, v_clientXArg_2082_, v_clientYArg_2083_, v_ctrlKeyArg_2084_, v_altKeyArg_2085_, v_shiftKeyArg_2086_, v_metaKeyArg_2087_, v_buttonArg_2088_, v_relatedTargetArg_2089_);
lean_dec(v_relatedTargetArg_2089_);
lean_dec(v_metaKeyArg_2087_);
lean_dec(v_shiftKeyArg_2086_);
lean_dec(v_altKeyArg_2085_);
lean_dec(v_ctrlKeyArg_2084_);
lean_dec(v_viewArg_2078_);
lean_dec(v_cancelableArg_2077_);
lean_dec(v_bubblesArg_2076_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f(lean_object* v_v_2098_){
_start:
{
lean_object* v___f_2100_; lean_object* v___x_2101_; 
v___f_2100_ = ((lean_object*)(l_Lasm_JS_Web_WheelEvent_cast_x3f___closed__2));
lean_inc(v_v_2098_);
v___x_2101_ = l_Lasm_JS_Web_Support_isInstance(v___f_2100_, v_v_2098_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2115_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2115_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2115_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
uint8_t v___x_2106_; 
v___x_2106_ = lean_unbox(v_a_2102_);
lean_dec(v_a_2102_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
lean_dec(v_v_2098_);
v___x_2107_ = lean_box(0);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2107_);
v___x_2109_ = v___x_2104_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_v_2098_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2111_);
v___x_2113_ = v___x_2104_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
lean_dec(v_v_2098_);
v_a_2116_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v___x_2101_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2101_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_cast_x3f___boxed(lean_object* v_v_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lasm_JS_Web_WheelEvent_cast_x3f(v_v_2124_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(lean_object* v_context_2127_, lean_object* v_d_2128_){
_start:
{
lean_object* v___y_2131_; lean_object* v___y_2132_; 
if (lean_obj_tag(v_d_2128_) == 9)
{
lean_object* v_value_2136_; lean_object* v___x_2137_; 
v_value_2136_ = lean_ctor_get(v_d_2128_, 0);
lean_inc(v_value_2136_);
lean_dec_ref_known(v_d_2128_, 2);
v___x_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2137_, 0, v_value_2136_);
return v___x_2137_;
}
else
{
lean_object* v___x_2138_; lean_object* v_received_2140_; 
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2128_) == 9)
{
lean_object* v_value_2154_; lean_object* v_description_2155_; uint8_t v___x_2156_; 
v_value_2154_ = lean_ctor_get(v_d_2128_, 0);
v_description_2155_ = lean_ctor_get(v_d_2128_, 1);
v___x_2156_ = lean_string_dec_eq(v_description_2155_, v___x_2138_);
if (v___x_2156_ == 0)
{
goto v___jp_2152_;
}
else
{
uint32_t v___x_2157_; uint64_t v___x_2158_; lean_object* v___x_2159_; uint32_t v___x_2160_; lean_object* v___x_2161_; 
lean_inc_n(v_value_2154_, 2);
lean_dec_ref_known(v_d_2128_, 2);
v___x_2157_ = 206;
v___x_2158_ = 0ULL;
v___x_2159_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2159_, 0, v_value_2154_);
lean_ctor_set(v___x_2159_, 1, v___x_2138_);
v___x_2160_ = lasm_js_value_handle(v_value_2154_);
lean_dec(v_value_2154_);
v___x_2161_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2157_, v___x_2158_, v___x_2159_, v___x_2160_);
lean_dec_ref_known(v___x_2159_, 2);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; uint8_t v___x_2163_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = lean_string_validate_utf8(v_a_2162_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; 
lean_dec(v_a_2162_);
v___x_2164_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2165_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2164_);
v_received_2140_ = v___x_2165_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_string_from_utf8_unchecked(v_a_2162_);
v_received_2140_ = v___x_2166_;
goto v___jp_2139_;
}
}
else
{
lean_object* v___x_2167_; 
lean_dec_ref_known(v___x_2161_, 1);
v___x_2167_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2140_ = v___x_2167_;
goto v___jp_2139_;
}
}
}
else
{
goto v___jp_2152_;
}
v___jp_2139_:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v___x_2141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2142_ = lean_string_append(v___x_2141_, v_context_2127_);
v___x_2143_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2144_ = lean_string_append(v___x_2142_, v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWheelEvent___closed__0));
v___x_2146_ = lean_string_append(v___x_2144_, v___x_2145_);
v___x_2147_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2148_ = lean_string_append(v___x_2146_, v___x_2147_);
v___x_2149_ = lean_string_append(v___x_2148_, v_received_2140_);
lean_dec_ref(v_received_2140_);
v___x_2150_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2150_ == 0)
{
lean_object* v___x_2151_; 
v___x_2151_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2131_ = v___x_2149_;
v___y_2132_ = v___x_2151_;
goto v___jp_2130_;
}
else
{
v___y_2131_ = v___x_2149_;
v___y_2132_ = v___x_2138_;
goto v___jp_2130_;
}
}
v___jp_2152_:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lasm_JS_Data_describe(v_d_2128_);
v_received_2140_ = v___x_2153_;
goto v___jp_2139_;
}
}
v___jp_2130_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2133_ = lean_string_append(v___y_2131_, v___y_2132_);
v___x_2134_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
v___x_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2168_, lean_object* v_d_2169_, lean_object* v_a_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v_context_2168_, v_d_2169_);
lean_dec_ref(v_context_2168_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(lean_object* v_b_2172_, lean_object* v_args_2173_, uint8_t v_await_2174_){
_start:
{
uint64_t v___y_2177_; uint64_t v___y_2178_; uint64_t v___x_2221_; uint64_t v___y_2223_; 
v___x_2221_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2174_ == 0)
{
uint64_t v___x_2228_; 
v___x_2228_ = 0ULL;
v___y_2223_ = v___x_2228_;
goto v___jp_2222_;
}
else
{
uint64_t v___x_2229_; 
v___x_2229_ = 2ULL;
v___y_2223_ = v___x_2229_;
goto v___jp_2222_;
}
v___jp_2176_:
{
uint64_t v_flags_2179_; uint32_t v___x_2180_; lean_object* v___x_2181_; uint32_t v___x_2182_; lean_object* v___x_2183_; 
v_flags_2179_ = lean_uint64_lor(v___y_2177_, v___y_2178_);
v___x_2180_ = 214;
v___x_2181_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2172_, v_args_2173_);
v___x_2182_ = 0;
v___x_2183_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2180_, v_flags_2179_, v___x_2181_, v___x_2182_);
lean_dec(v___x_2181_);
if (lean_obj_tag(v___x_2183_) == 0)
{
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2185_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2183_, 1);
v___x_2185_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2184_);
lean_dec(v_a_2184_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v_a_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_a_2186_);
lean_dec_ref_known(v___x_2185_, 1);
v___x_2187_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2172_);
v___x_2188_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1_spec__1(v___x_2187_, v_a_2186_);
lean_dec_ref(v___x_2187_);
return v___x_2188_;
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
v_a_2189_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2185_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2185_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
v_a_2197_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2183_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2183_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set_tag(v___x_2199_, 1);
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2220_; 
v_a_2205_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2207_ = v___x_2183_;
v_isShared_2208_ = v_isSharedCheck_2220_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2183_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2220_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2209_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2210_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2172_);
v___x_2211_ = lean_string_append(v___x_2209_, v___x_2210_);
lean_dec_ref(v___x_2210_);
v___x_2212_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2213_ = lean_string_append(v___x_2211_, v___x_2212_);
v___x_2214_ = lean_io_error_to_string(v_a_2205_);
v___x_2215_ = lean_string_append(v___x_2213_, v___x_2214_);
lean_dec_ref(v___x_2214_);
v___x_2216_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v___x_2216_);
v___x_2218_ = v___x_2207_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
v___jp_2222_:
{
uint8_t v_construct_2224_; uint64_t v___x_2225_; 
v_construct_2224_ = lean_ctor_get_uint8(v_b_2172_, sizeof(void*)*4);
v___x_2225_ = lean_uint64_lor(v___x_2221_, v___y_2223_);
if (v_construct_2224_ == 0)
{
uint64_t v___x_2226_; 
v___x_2226_ = 0ULL;
v___y_2177_ = v___x_2225_;
v___y_2178_ = v___x_2226_;
goto v___jp_2176_;
}
else
{
uint64_t v___x_2227_; 
v___x_2227_ = 4ULL;
v___y_2177_ = v___x_2225_;
v___y_2178_ = v___x_2227_;
goto v___jp_2176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1___boxed(lean_object* v_b_2230_, lean_object* v_args_2231_, lean_object* v_await_2232_, lean_object* v_a_2233_){
_start:
{
uint8_t v_await_boxed_2234_; lean_object* v_res_2235_; 
v_await_boxed_2234_ = lean_unbox(v_await_2232_);
v_res_2235_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v_b_2230_, v_args_2231_, v_await_boxed_2234_);
lean_dec_ref(v_b_2230_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(lean_object* v_x_2236_){
_start:
{
if (lean_obj_tag(v_x_2236_) == 0)
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_box(0);
return v___x_2237_;
}
else
{
lean_object* v_val_2238_; lean_object* v_bubbles_2239_; lean_object* v_cancelable_2240_; lean_object* v_composed_2241_; lean_object* v_view_2242_; lean_object* v_detail_2243_; lean_object* v_which_2244_; lean_object* v_ctrlKey_2245_; lean_object* v_shiftKey_2246_; lean_object* v_altKey_2247_; lean_object* v_metaKey_2248_; lean_object* v_modifierAltGraph_2249_; lean_object* v_modifierCapsLock_2250_; lean_object* v_modifierFn_2251_; lean_object* v_modifierFnLock_2252_; lean_object* v_modifierHyper_2253_; lean_object* v_modifierNumLock_2254_; lean_object* v_modifierScrollLock_2255_; lean_object* v_modifierSuper_2256_; lean_object* v_modifierSymbol_2257_; lean_object* v_modifierSymbolLock_2258_; lean_object* v_screenX_2259_; lean_object* v_screenY_2260_; lean_object* v_clientX_2261_; lean_object* v_clientY_2262_; lean_object* v_button_2263_; lean_object* v_buttons_2264_; lean_object* v_relatedTarget_2265_; lean_object* v_deltaX_2266_; lean_object* v_deltaY_2267_; lean_object* v_deltaZ_2268_; lean_object* v_deltaMode_2269_; lean_object* v_momentum_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v_val_2238_ = lean_ctor_get(v_x_2236_, 0);
lean_inc(v_val_2238_);
lean_dec_ref_known(v_x_2236_, 1);
v_bubbles_2239_ = lean_ctor_get(v_val_2238_, 0);
lean_inc(v_bubbles_2239_);
v_cancelable_2240_ = lean_ctor_get(v_val_2238_, 1);
lean_inc(v_cancelable_2240_);
v_composed_2241_ = lean_ctor_get(v_val_2238_, 2);
lean_inc(v_composed_2241_);
v_view_2242_ = lean_ctor_get(v_val_2238_, 3);
lean_inc(v_view_2242_);
v_detail_2243_ = lean_ctor_get(v_val_2238_, 4);
lean_inc(v_detail_2243_);
v_which_2244_ = lean_ctor_get(v_val_2238_, 5);
lean_inc(v_which_2244_);
v_ctrlKey_2245_ = lean_ctor_get(v_val_2238_, 6);
lean_inc(v_ctrlKey_2245_);
v_shiftKey_2246_ = lean_ctor_get(v_val_2238_, 7);
lean_inc(v_shiftKey_2246_);
v_altKey_2247_ = lean_ctor_get(v_val_2238_, 8);
lean_inc(v_altKey_2247_);
v_metaKey_2248_ = lean_ctor_get(v_val_2238_, 9);
lean_inc(v_metaKey_2248_);
v_modifierAltGraph_2249_ = lean_ctor_get(v_val_2238_, 10);
lean_inc(v_modifierAltGraph_2249_);
v_modifierCapsLock_2250_ = lean_ctor_get(v_val_2238_, 11);
lean_inc(v_modifierCapsLock_2250_);
v_modifierFn_2251_ = lean_ctor_get(v_val_2238_, 12);
lean_inc(v_modifierFn_2251_);
v_modifierFnLock_2252_ = lean_ctor_get(v_val_2238_, 13);
lean_inc(v_modifierFnLock_2252_);
v_modifierHyper_2253_ = lean_ctor_get(v_val_2238_, 14);
lean_inc(v_modifierHyper_2253_);
v_modifierNumLock_2254_ = lean_ctor_get(v_val_2238_, 15);
lean_inc(v_modifierNumLock_2254_);
v_modifierScrollLock_2255_ = lean_ctor_get(v_val_2238_, 16);
lean_inc(v_modifierScrollLock_2255_);
v_modifierSuper_2256_ = lean_ctor_get(v_val_2238_, 17);
lean_inc(v_modifierSuper_2256_);
v_modifierSymbol_2257_ = lean_ctor_get(v_val_2238_, 18);
lean_inc(v_modifierSymbol_2257_);
v_modifierSymbolLock_2258_ = lean_ctor_get(v_val_2238_, 19);
lean_inc(v_modifierSymbolLock_2258_);
v_screenX_2259_ = lean_ctor_get(v_val_2238_, 20);
lean_inc(v_screenX_2259_);
v_screenY_2260_ = lean_ctor_get(v_val_2238_, 21);
lean_inc(v_screenY_2260_);
v_clientX_2261_ = lean_ctor_get(v_val_2238_, 22);
lean_inc(v_clientX_2261_);
v_clientY_2262_ = lean_ctor_get(v_val_2238_, 23);
lean_inc(v_clientY_2262_);
v_button_2263_ = lean_ctor_get(v_val_2238_, 24);
lean_inc(v_button_2263_);
v_buttons_2264_ = lean_ctor_get(v_val_2238_, 25);
lean_inc(v_buttons_2264_);
v_relatedTarget_2265_ = lean_ctor_get(v_val_2238_, 26);
lean_inc(v_relatedTarget_2265_);
v_deltaX_2266_ = lean_ctor_get(v_val_2238_, 27);
lean_inc(v_deltaX_2266_);
v_deltaY_2267_ = lean_ctor_get(v_val_2238_, 28);
lean_inc(v_deltaY_2267_);
v_deltaZ_2268_ = lean_ctor_get(v_val_2238_, 29);
lean_inc(v_deltaZ_2268_);
v_deltaMode_2269_ = lean_ctor_get(v_val_2238_, 30);
lean_inc(v_deltaMode_2269_);
v_momentum_2270_ = lean_ctor_get(v_val_2238_, 31);
lean_inc(v_momentum_2270_);
lean_dec(v_val_2238_);
v___x_2271_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2272_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2239_);
lean_dec(v_bubbles_2239_);
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2240_);
lean_dec(v_cancelable_2240_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2278_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2241_);
lean_dec(v_composed_2241_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2281_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2242_);
lean_dec(v_view_2242_);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2280_);
lean_ctor_set(v___x_2282_, 1, v___x_2281_);
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2284_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2243_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2287_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2244_);
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2245_);
lean_dec(v_ctrlKey_2245_);
v___x_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2289_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2293_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2246_);
lean_dec(v_shiftKey_2246_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2296_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2247_);
lean_dec(v_altKey_2247_);
v___x_2297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2295_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2299_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2248_);
lean_dec(v_metaKey_2248_);
v___x_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2298_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
v___x_2301_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2302_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2249_);
lean_dec(v_modifierAltGraph_2249_);
v___x_2303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2305_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2250_);
lean_dec(v_modifierCapsLock_2250_);
v___x_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2304_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
v___x_2307_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2308_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2251_);
lean_dec(v_modifierFn_2251_);
v___x_2309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2311_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2252_);
lean_dec(v_modifierFnLock_2252_);
v___x_2312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2314_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2253_);
lean_dec(v_modifierHyper_2253_);
v___x_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2313_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2317_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2254_);
lean_dec(v_modifierNumLock_2254_);
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2320_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2255_);
lean_dec(v_modifierScrollLock_2255_);
v___x_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2319_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2323_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2256_);
lean_dec(v_modifierSuper_2256_);
v___x_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2322_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2326_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2257_);
lean_dec(v_modifierSymbol_2257_);
v___x_2327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2325_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2329_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2258_);
lean_dec(v_modifierSymbolLock_2258_);
v___x_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_2332_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_2259_);
v___x_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_2335_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_2260_);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2334_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_2338_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_2261_);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2337_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_2341_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_2262_);
v___x_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2340_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_2344_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_2263_);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_2347_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_2264_);
v___x_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2346_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
v___x_2349_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_2350_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_2265_);
lean_dec(v_relatedTarget_2265_);
v___x_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2349_);
lean_ctor_set(v___x_2351_, 1, v___x_2350_);
v___x_2352_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2353_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaX_2266_);
lean_dec(v_deltaX_2266_);
v___x_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2352_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2356_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaY_2267_);
lean_dec(v_deltaY_2267_);
v___x_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2355_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
v___x_2358_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2359_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_deltaZ_2268_);
lean_dec(v_deltaZ_2268_);
v___x_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2358_);
lean_ctor_set(v___x_2360_, 1, v___x_2359_);
v___x_2361_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2362_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_deltaMode_2269_);
v___x_2363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2361_);
lean_ctor_set(v___x_2363_, 1, v___x_2362_);
v___x_2364_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2365_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_momentum_2270_);
lean_dec(v_momentum_2270_);
v___x_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2364_);
lean_ctor_set(v___x_2366_, 1, v___x_2365_);
v___x_2367_ = lean_unsigned_to_nat(32u);
v___x_2368_ = lean_mk_empty_array_with_capacity(v___x_2367_);
v___x_2369_ = lean_array_push(v___x_2368_, v___x_2273_);
v___x_2370_ = lean_array_push(v___x_2369_, v___x_2276_);
v___x_2371_ = lean_array_push(v___x_2370_, v___x_2279_);
v___x_2372_ = lean_array_push(v___x_2371_, v___x_2282_);
v___x_2373_ = lean_array_push(v___x_2372_, v___x_2285_);
v___x_2374_ = lean_array_push(v___x_2373_, v___x_2288_);
v___x_2375_ = lean_array_push(v___x_2374_, v___x_2291_);
v___x_2376_ = lean_array_push(v___x_2375_, v___x_2294_);
v___x_2377_ = lean_array_push(v___x_2376_, v___x_2297_);
v___x_2378_ = lean_array_push(v___x_2377_, v___x_2300_);
v___x_2379_ = lean_array_push(v___x_2378_, v___x_2303_);
v___x_2380_ = lean_array_push(v___x_2379_, v___x_2306_);
v___x_2381_ = lean_array_push(v___x_2380_, v___x_2309_);
v___x_2382_ = lean_array_push(v___x_2381_, v___x_2312_);
v___x_2383_ = lean_array_push(v___x_2382_, v___x_2315_);
v___x_2384_ = lean_array_push(v___x_2383_, v___x_2318_);
v___x_2385_ = lean_array_push(v___x_2384_, v___x_2321_);
v___x_2386_ = lean_array_push(v___x_2385_, v___x_2324_);
v___x_2387_ = lean_array_push(v___x_2386_, v___x_2327_);
v___x_2388_ = lean_array_push(v___x_2387_, v___x_2330_);
v___x_2389_ = lean_array_push(v___x_2388_, v___x_2333_);
v___x_2390_ = lean_array_push(v___x_2389_, v___x_2336_);
v___x_2391_ = lean_array_push(v___x_2390_, v___x_2339_);
v___x_2392_ = lean_array_push(v___x_2391_, v___x_2342_);
v___x_2393_ = lean_array_push(v___x_2392_, v___x_2345_);
v___x_2394_ = lean_array_push(v___x_2393_, v___x_2348_);
v___x_2395_ = lean_array_push(v___x_2394_, v___x_2351_);
v___x_2396_ = lean_array_push(v___x_2395_, v___x_2354_);
v___x_2397_ = lean_array_push(v___x_2396_, v___x_2357_);
v___x_2398_ = lean_array_push(v___x_2397_, v___x_2360_);
v___x_2399_ = lean_array_push(v___x_2398_, v___x_2363_);
v___x_2400_ = lean_array_push(v___x_2399_, v___x_2366_);
v___x_2401_ = l_Lasm_JS_Web_Support_fields(v___x_2400_);
lean_dec_ref(v___x_2400_);
return v___x_2401_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new(lean_object* v_type_2409_, lean_object* v_eventInitDict_2410_){
_start:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; 
v___x_2412_ = lean_unsigned_to_nat(2u);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Web_WheelEvent_new___closed__1));
v___x_2414_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2414_, 0, v_type_2409_);
v___x_2415_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_WheelEvent_new_spec__0(v_eventInitDict_2410_);
v___x_2416_ = lean_mk_empty_array_with_capacity(v___x_2412_);
v___x_2417_ = lean_array_push(v___x_2416_, v___x_2414_);
v___x_2418_ = lean_array_push(v___x_2417_, v___x_2415_);
v___x_2419_ = l_Lasm_JS_Web_Support_args(v___x_2418_);
v___x_2420_ = 0;
v___x_2421_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WheelEvent_new_spec__1(v___x_2413_, v___x_2419_, v___x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_new___boxed(lean_object* v_type_2422_, lean_object* v_eventInitDict_2423_, lean_object* v_a_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l_Lasm_JS_Web_WheelEvent_new(v_type_2422_, v_eventInitDict_2423_);
return v_res_2425_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PIXEL(void){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_unsigned_to_nat(0u);
return v___x_2426_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__LINE(void){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = lean_unsigned_to_nat(1u);
return v___x_2427_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WheelEvent_DOM__DELTA__PAGE(void){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_unsigned_to_nat(2u);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX(lean_object* v_self_2429_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__0));
v___x_2432_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2429_, v___x_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaX___boxed(lean_object* v_self_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lasm_JS_Web_WheelEvent_deltaX(v_self_2433_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY(lean_object* v_self_2436_){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__1));
v___x_2439_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2436_, v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaY___boxed(lean_object* v_self_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lasm_JS_Web_WheelEvent_deltaY(v_self_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ(lean_object* v_self_2443_){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__2));
v___x_2446_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_2443_, v___x_2445_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaZ___boxed(lean_object* v_self_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Lasm_JS_Web_WheelEvent_deltaZ(v_self_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode(lean_object* v_self_2450_){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__3));
v___x_2453_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2450_, v___x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_deltaMode___boxed(lean_object* v_self_2454_, lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lasm_JS_Web_WheelEvent_deltaMode(v_self_2454_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum(lean_object* v_self_2457_){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSWheelEventInit___lam__0___closed__4));
v___x_2460_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2457_, v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WheelEvent_momentum___boxed(lean_object* v_self_2461_, lean_object* v_a_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lasm_JS_Web_WheelEvent_momentum(v_self_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f(lean_object* v_v_2470_){
_start:
{
lean_object* v___f_2472_; lean_object* v___x_2473_; 
v___f_2472_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_cast_x3f___closed__2));
lean_inc(v_v_2470_);
v___x_2473_ = l_Lasm_JS_Web_Support_isInstance(v___f_2472_, v_v_2470_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2487_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2487_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2487_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_unbox(v_a_2474_);
lean_dec(v_a_2474_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2481_; 
lean_dec(v_v_2470_);
v___x_2479_ = lean_box(0);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2479_);
v___x_2481_ = v___x_2476_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v___x_2479_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
else
{
lean_object* v___x_2483_; lean_object* v___x_2485_; 
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v_v_2470_);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2483_);
v___x_2485_ = v___x_2476_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec(v_v_2470_);
v_a_2488_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2473_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2473_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_cast_x3f___boxed(lean_object* v_v_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lasm_JS_Web_KeyboardEvent_cast_x3f(v_v_2496_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(lean_object* v_context_2499_, lean_object* v_d_2500_){
_start:
{
lean_object* v___y_2503_; lean_object* v___y_2504_; 
if (lean_obj_tag(v_d_2500_) == 9)
{
lean_object* v_value_2508_; lean_object* v___x_2509_; 
v_value_2508_ = lean_ctor_get(v_d_2500_, 0);
lean_inc(v_value_2508_);
lean_dec_ref_known(v_d_2500_, 2);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_value_2508_);
return v___x_2509_;
}
else
{
lean_object* v___x_2510_; lean_object* v_received_2512_; 
v___x_2510_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2500_) == 9)
{
lean_object* v_value_2526_; lean_object* v_description_2527_; uint8_t v___x_2528_; 
v_value_2526_ = lean_ctor_get(v_d_2500_, 0);
v_description_2527_ = lean_ctor_get(v_d_2500_, 1);
v___x_2528_ = lean_string_dec_eq(v_description_2527_, v___x_2510_);
if (v___x_2528_ == 0)
{
goto v___jp_2524_;
}
else
{
uint32_t v___x_2529_; uint64_t v___x_2530_; lean_object* v___x_2531_; uint32_t v___x_2532_; lean_object* v___x_2533_; 
lean_inc_n(v_value_2526_, 2);
lean_dec_ref_known(v_d_2500_, 2);
v___x_2529_ = 206;
v___x_2530_ = 0ULL;
v___x_2531_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2531_, 0, v_value_2526_);
lean_ctor_set(v___x_2531_, 1, v___x_2510_);
v___x_2532_ = lasm_js_value_handle(v_value_2526_);
lean_dec(v_value_2526_);
v___x_2533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2529_, v___x_2530_, v___x_2531_, v___x_2532_);
lean_dec_ref_known(v___x_2531_, 2);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; uint8_t v___x_2535_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2535_ = lean_string_validate_utf8(v_a_2534_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_dec(v_a_2534_);
v___x_2536_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2537_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2536_);
v_received_2512_ = v___x_2537_;
goto v___jp_2511_;
}
else
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_string_from_utf8_unchecked(v_a_2534_);
v_received_2512_ = v___x_2538_;
goto v___jp_2511_;
}
}
else
{
lean_object* v___x_2539_; 
lean_dec_ref_known(v___x_2533_, 1);
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2512_ = v___x_2539_;
goto v___jp_2511_;
}
}
}
else
{
goto v___jp_2524_;
}
v___jp_2511_:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2514_ = lean_string_append(v___x_2513_, v_context_2499_);
v___x_2515_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2516_ = lean_string_append(v___x_2514_, v___x_2515_);
v___x_2517_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSKeyboardEvent___closed__0));
v___x_2518_ = lean_string_append(v___x_2516_, v___x_2517_);
v___x_2519_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2520_ = lean_string_append(v___x_2518_, v___x_2519_);
v___x_2521_ = lean_string_append(v___x_2520_, v_received_2512_);
lean_dec_ref(v_received_2512_);
v___x_2522_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; 
v___x_2523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2503_ = v___x_2521_;
v___y_2504_ = v___x_2523_;
goto v___jp_2502_;
}
else
{
v___y_2503_ = v___x_2521_;
v___y_2504_ = v___x_2510_;
goto v___jp_2502_;
}
}
v___jp_2524_:
{
lean_object* v___x_2525_; 
v___x_2525_ = l_Lasm_JS_Data_describe(v_d_2500_);
v_received_2512_ = v___x_2525_;
goto v___jp_2511_;
}
}
v___jp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2505_ = lean_string_append(v___y_2503_, v___y_2504_);
v___x_2506_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2540_, lean_object* v_d_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v_context_2540_, v_d_2541_);
lean_dec_ref(v_context_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(lean_object* v_b_2544_, lean_object* v_args_2545_, uint8_t v_await_2546_){
_start:
{
uint64_t v___y_2549_; uint64_t v___y_2550_; uint64_t v___x_2593_; uint64_t v___y_2595_; 
v___x_2593_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_2546_ == 0)
{
uint64_t v___x_2600_; 
v___x_2600_ = 0ULL;
v___y_2595_ = v___x_2600_;
goto v___jp_2594_;
}
else
{
uint64_t v___x_2601_; 
v___x_2601_ = 2ULL;
v___y_2595_ = v___x_2601_;
goto v___jp_2594_;
}
v___jp_2548_:
{
uint64_t v_flags_2551_; uint32_t v___x_2552_; lean_object* v___x_2553_; uint32_t v___x_2554_; lean_object* v___x_2555_; 
v_flags_2551_ = lean_uint64_lor(v___y_2549_, v___y_2550_);
v___x_2552_ = 214;
v___x_2553_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2544_, v_args_2545_);
v___x_2554_ = 0;
v___x_2555_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2552_, v_flags_2551_, v___x_2553_, v___x_2554_);
lean_dec(v___x_2553_);
if (lean_obj_tag(v___x_2555_) == 0)
{
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2556_);
lean_dec(v_a_2556_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v___x_2559_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2544_);
v___x_2560_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1_spec__1(v___x_2559_, v_a_2558_);
lean_dec_ref(v___x_2559_);
return v___x_2560_;
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
v_a_2561_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2557_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2557_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
v_a_2569_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2555_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2555_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
lean_ctor_set_tag(v___x_2571_, 1);
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2592_; 
v_a_2577_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2579_ = v___x_2555_;
v_isShared_2580_ = v_isSharedCheck_2592_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2555_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2592_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2590_; 
v___x_2581_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2582_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2544_);
v___x_2583_ = lean_string_append(v___x_2581_, v___x_2582_);
lean_dec_ref(v___x_2582_);
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_2585_ = lean_string_append(v___x_2583_, v___x_2584_);
v___x_2586_ = lean_io_error_to_string(v_a_2577_);
v___x_2587_ = lean_string_append(v___x_2585_, v___x_2586_);
lean_dec_ref(v___x_2586_);
v___x_2588_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2588_);
v___x_2590_ = v___x_2579_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
v___jp_2594_:
{
uint8_t v_construct_2596_; uint64_t v___x_2597_; 
v_construct_2596_ = lean_ctor_get_uint8(v_b_2544_, sizeof(void*)*4);
v___x_2597_ = lean_uint64_lor(v___x_2593_, v___y_2595_);
if (v_construct_2596_ == 0)
{
uint64_t v___x_2598_; 
v___x_2598_ = 0ULL;
v___y_2549_ = v___x_2597_;
v___y_2550_ = v___x_2598_;
goto v___jp_2548_;
}
else
{
uint64_t v___x_2599_; 
v___x_2599_ = 4ULL;
v___y_2549_ = v___x_2597_;
v___y_2550_ = v___x_2599_;
goto v___jp_2548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1___boxed(lean_object* v_b_2602_, lean_object* v_args_2603_, lean_object* v_await_2604_, lean_object* v_a_2605_){
_start:
{
uint8_t v_await_boxed_2606_; lean_object* v_res_2607_; 
v_await_boxed_2606_ = lean_unbox(v_await_2604_);
v_res_2607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v_b_2602_, v_args_2603_, v_await_boxed_2606_);
lean_dec_ref(v_b_2602_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(lean_object* v_x_2608_){
_start:
{
if (lean_obj_tag(v_x_2608_) == 0)
{
lean_object* v___x_2609_; 
v___x_2609_ = lean_box(0);
return v___x_2609_;
}
else
{
lean_object* v_val_2610_; lean_object* v_bubbles_2611_; lean_object* v_cancelable_2612_; lean_object* v_composed_2613_; lean_object* v_view_2614_; lean_object* v_detail_2615_; lean_object* v_which_2616_; lean_object* v_ctrlKey_2617_; lean_object* v_shiftKey_2618_; lean_object* v_altKey_2619_; lean_object* v_metaKey_2620_; lean_object* v_modifierAltGraph_2621_; lean_object* v_modifierCapsLock_2622_; lean_object* v_modifierFn_2623_; lean_object* v_modifierFnLock_2624_; lean_object* v_modifierHyper_2625_; lean_object* v_modifierNumLock_2626_; lean_object* v_modifierScrollLock_2627_; lean_object* v_modifierSuper_2628_; lean_object* v_modifierSymbol_2629_; lean_object* v_modifierSymbolLock_2630_; lean_object* v_key_2631_; lean_object* v_code_2632_; lean_object* v_location_2633_; lean_object* v_repeat_2634_; lean_object* v_isComposing_2635_; lean_object* v_charCode_2636_; lean_object* v_keyCode_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v_val_2610_ = lean_ctor_get(v_x_2608_, 0);
lean_inc(v_val_2610_);
lean_dec_ref_known(v_x_2608_, 1);
v_bubbles_2611_ = lean_ctor_get(v_val_2610_, 0);
lean_inc(v_bubbles_2611_);
v_cancelable_2612_ = lean_ctor_get(v_val_2610_, 1);
lean_inc(v_cancelable_2612_);
v_composed_2613_ = lean_ctor_get(v_val_2610_, 2);
lean_inc(v_composed_2613_);
v_view_2614_ = lean_ctor_get(v_val_2610_, 3);
lean_inc(v_view_2614_);
v_detail_2615_ = lean_ctor_get(v_val_2610_, 4);
lean_inc(v_detail_2615_);
v_which_2616_ = lean_ctor_get(v_val_2610_, 5);
lean_inc(v_which_2616_);
v_ctrlKey_2617_ = lean_ctor_get(v_val_2610_, 6);
lean_inc(v_ctrlKey_2617_);
v_shiftKey_2618_ = lean_ctor_get(v_val_2610_, 7);
lean_inc(v_shiftKey_2618_);
v_altKey_2619_ = lean_ctor_get(v_val_2610_, 8);
lean_inc(v_altKey_2619_);
v_metaKey_2620_ = lean_ctor_get(v_val_2610_, 9);
lean_inc(v_metaKey_2620_);
v_modifierAltGraph_2621_ = lean_ctor_get(v_val_2610_, 10);
lean_inc(v_modifierAltGraph_2621_);
v_modifierCapsLock_2622_ = lean_ctor_get(v_val_2610_, 11);
lean_inc(v_modifierCapsLock_2622_);
v_modifierFn_2623_ = lean_ctor_get(v_val_2610_, 12);
lean_inc(v_modifierFn_2623_);
v_modifierFnLock_2624_ = lean_ctor_get(v_val_2610_, 13);
lean_inc(v_modifierFnLock_2624_);
v_modifierHyper_2625_ = lean_ctor_get(v_val_2610_, 14);
lean_inc(v_modifierHyper_2625_);
v_modifierNumLock_2626_ = lean_ctor_get(v_val_2610_, 15);
lean_inc(v_modifierNumLock_2626_);
v_modifierScrollLock_2627_ = lean_ctor_get(v_val_2610_, 16);
lean_inc(v_modifierScrollLock_2627_);
v_modifierSuper_2628_ = lean_ctor_get(v_val_2610_, 17);
lean_inc(v_modifierSuper_2628_);
v_modifierSymbol_2629_ = lean_ctor_get(v_val_2610_, 18);
lean_inc(v_modifierSymbol_2629_);
v_modifierSymbolLock_2630_ = lean_ctor_get(v_val_2610_, 19);
lean_inc(v_modifierSymbolLock_2630_);
v_key_2631_ = lean_ctor_get(v_val_2610_, 20);
lean_inc(v_key_2631_);
v_code_2632_ = lean_ctor_get(v_val_2610_, 21);
lean_inc(v_code_2632_);
v_location_2633_ = lean_ctor_get(v_val_2610_, 22);
lean_inc(v_location_2633_);
v_repeat_2634_ = lean_ctor_get(v_val_2610_, 23);
lean_inc(v_repeat_2634_);
v_isComposing_2635_ = lean_ctor_get(v_val_2610_, 24);
lean_inc(v_isComposing_2635_);
v_charCode_2636_ = lean_ctor_get(v_val_2610_, 25);
lean_inc(v_charCode_2636_);
v_keyCode_2637_ = lean_ctor_get(v_val_2610_, 26);
lean_inc(v_keyCode_2637_);
lean_dec(v_val_2610_);
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_2639_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2611_);
lean_dec(v_bubbles_2611_);
v___x_2640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_2642_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2612_);
lean_dec(v_cancelable_2612_);
v___x_2643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_2645_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2613_);
lean_dec(v_composed_2613_);
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2644_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_2648_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_2614_);
lean_dec(v_view_2614_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_2651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_2615_);
v___x_2652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_2654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_2616_);
v___x_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2657_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2617_);
lean_dec(v_ctrlKey_2617_);
v___x_2658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2618_);
lean_dec(v_shiftKey_2618_);
v___x_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2659_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2663_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2619_);
lean_dec(v_altKey_2619_);
v___x_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2662_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2666_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2620_);
lean_dec(v_metaKey_2620_);
v___x_2667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_2669_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_2621_);
lean_dec(v_modifierAltGraph_2621_);
v___x_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_2672_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_2622_);
lean_dec(v_modifierCapsLock_2622_);
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2671_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_2675_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_2623_);
lean_dec(v_modifierFn_2623_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2674_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_2678_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_2624_);
lean_dec(v_modifierFnLock_2624_);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_2681_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_2625_);
lean_dec(v_modifierHyper_2625_);
v___x_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2680_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_2684_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_2626_);
lean_dec(v_modifierNumLock_2626_);
v___x_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2683_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_2687_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_2627_);
lean_dec(v_modifierScrollLock_2627_);
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2686_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_2690_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_2628_);
lean_dec(v_modifierSuper_2628_);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_2693_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_2629_);
lean_dec(v_modifierSymbol_2629_);
v___x_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2692_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_2696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_2630_);
lean_dec(v_modifierSymbolLock_2630_);
v___x_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2699_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_2631_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2698_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
v___x_2701_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2702_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_code_2632_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2705_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_location_2633_);
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2708_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_repeat_2634_);
lean_dec(v_repeat_2634_);
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2707_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2711_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_2635_);
lean_dec(v_isComposing_2635_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2714_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_charCode_2636_);
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2713_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2717_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_keyCode_2637_);
v___x_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2716_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = lean_unsigned_to_nat(27u);
v___x_2720_ = lean_mk_empty_array_with_capacity(v___x_2719_);
v___x_2721_ = lean_array_push(v___x_2720_, v___x_2640_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2643_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2646_);
v___x_2724_ = lean_array_push(v___x_2723_, v___x_2649_);
v___x_2725_ = lean_array_push(v___x_2724_, v___x_2652_);
v___x_2726_ = lean_array_push(v___x_2725_, v___x_2655_);
v___x_2727_ = lean_array_push(v___x_2726_, v___x_2658_);
v___x_2728_ = lean_array_push(v___x_2727_, v___x_2661_);
v___x_2729_ = lean_array_push(v___x_2728_, v___x_2664_);
v___x_2730_ = lean_array_push(v___x_2729_, v___x_2667_);
v___x_2731_ = lean_array_push(v___x_2730_, v___x_2670_);
v___x_2732_ = lean_array_push(v___x_2731_, v___x_2673_);
v___x_2733_ = lean_array_push(v___x_2732_, v___x_2676_);
v___x_2734_ = lean_array_push(v___x_2733_, v___x_2679_);
v___x_2735_ = lean_array_push(v___x_2734_, v___x_2682_);
v___x_2736_ = lean_array_push(v___x_2735_, v___x_2685_);
v___x_2737_ = lean_array_push(v___x_2736_, v___x_2688_);
v___x_2738_ = lean_array_push(v___x_2737_, v___x_2691_);
v___x_2739_ = lean_array_push(v___x_2738_, v___x_2694_);
v___x_2740_ = lean_array_push(v___x_2739_, v___x_2697_);
v___x_2741_ = lean_array_push(v___x_2740_, v___x_2700_);
v___x_2742_ = lean_array_push(v___x_2741_, v___x_2703_);
v___x_2743_ = lean_array_push(v___x_2742_, v___x_2706_);
v___x_2744_ = lean_array_push(v___x_2743_, v___x_2709_);
v___x_2745_ = lean_array_push(v___x_2744_, v___x_2712_);
v___x_2746_ = lean_array_push(v___x_2745_, v___x_2715_);
v___x_2747_ = lean_array_push(v___x_2746_, v___x_2718_);
v___x_2748_ = l_Lasm_JS_Web_Support_fields(v___x_2747_);
lean_dec_ref(v___x_2747_);
return v___x_2748_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new(lean_object* v_type_2756_, lean_object* v_eventInitDict_2757_){
_start:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; lean_object* v___x_2768_; 
v___x_2759_ = lean_unsigned_to_nat(2u);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_new___closed__1));
v___x_2761_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2761_, 0, v_type_2756_);
v___x_2762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_KeyboardEvent_new_spec__0(v_eventInitDict_2757_);
v___x_2763_ = lean_mk_empty_array_with_capacity(v___x_2759_);
v___x_2764_ = lean_array_push(v___x_2763_, v___x_2761_);
v___x_2765_ = lean_array_push(v___x_2764_, v___x_2762_);
v___x_2766_ = l_Lasm_JS_Web_Support_args(v___x_2765_);
v___x_2767_ = 0;
v___x_2768_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_KeyboardEvent_new_spec__1(v___x_2760_, v___x_2766_, v___x_2767_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_new___boxed(lean_object* v_type_2769_, lean_object* v_eventInitDict_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l_Lasm_JS_Web_KeyboardEvent_new(v_type_2769_, v_eventInitDict_2770_);
return v_res_2772_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__STANDARD(void){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_unsigned_to_nat(0u);
return v___x_2773_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__LEFT(void){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = lean_unsigned_to_nat(1u);
return v___x_2774_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__RIGHT(void){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_unsigned_to_nat(2u);
return v___x_2775_;
}
}
static lean_object* _init_l_Lasm_JS_Web_KeyboardEvent_DOM__KEY__LOCATION__NUMPAD(void){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_unsigned_to_nat(3u);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key(lean_object* v_self_2777_){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2779_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_2780_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2777_, v___x_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_key___boxed(lean_object* v_self_2781_, lean_object* v_a_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l_Lasm_JS_Web_KeyboardEvent_key(v_self_2781_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code(lean_object* v_self_2784_){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__1));
v___x_2787_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2784_, v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_code___boxed(lean_object* v_self_2788_, lean_object* v_a_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lasm_JS_Web_KeyboardEvent_code(v_self_2788_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location(lean_object* v_self_2791_){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__2));
v___x_2794_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2791_, v___x_2793_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_location___boxed(lean_object* v_self_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l_Lasm_JS_Web_KeyboardEvent_location(v_self_2795_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey(lean_object* v_self_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_2801_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2798_, v___x_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_ctrlKey___boxed(lean_object* v_self_2802_, lean_object* v_a_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lasm_JS_Web_KeyboardEvent_ctrlKey(v_self_2802_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey(lean_object* v_self_2805_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_2808_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2805_, v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_shiftKey___boxed(lean_object* v_self_2809_, lean_object* v_a_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lasm_JS_Web_KeyboardEvent_shiftKey(v_self_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey(lean_object* v_self_2812_){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_2815_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2812_, v___x_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_altKey___boxed(lean_object* v_self_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = l_Lasm_JS_Web_KeyboardEvent_altKey(v_self_2816_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey(lean_object* v_self_2819_){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_2822_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2819_, v___x_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_metaKey___boxed(lean_object* v_self_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Lasm_JS_Web_KeyboardEvent_metaKey(v_self_2823_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat(lean_object* v_self_2826_){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__3));
v___x_2829_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2826_, v___x_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_repeat___boxed(lean_object* v_self_2830_, lean_object* v_a_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lasm_JS_Web_KeyboardEvent_repeat(v_self_2830_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing(lean_object* v_self_2833_){
_start:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_2836_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2833_, v___x_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_isComposing___boxed(lean_object* v_self_2837_, lean_object* v_a_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Lasm_JS_Web_KeyboardEvent_isComposing(v_self_2837_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode(lean_object* v_self_2840_){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__5));
v___x_2843_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2840_, v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_charCode___boxed(lean_object* v_self_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Lasm_JS_Web_KeyboardEvent_charCode(v_self_2844_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode(lean_object* v_self_2847_){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2849_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__6));
v___x_2850_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2847_, v___x_2849_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_keyCode___boxed(lean_object* v_self_2851_, lean_object* v_a_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Lasm_JS_Web_KeyboardEvent_keyCode(v_self_2851_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState(lean_object* v_self_2854_, lean_object* v_keyArg_2855_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Web_MouseEvent_getModifierState___closed__0));
v___x_2858_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_keyArg_2855_);
v___x_2859_ = lean_unsigned_to_nat(1u);
v___x_2860_ = lean_mk_empty_array_with_capacity(v___x_2859_);
v___x_2861_ = lean_array_push(v___x_2860_, v___x_2858_);
v___x_2862_ = l_Lasm_JS_Web_Support_args(v___x_2861_);
v___x_2863_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2854_, v___x_2857_, v___x_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_getModifierState___boxed(lean_object* v_self_2864_, lean_object* v_keyArg_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lasm_JS_Web_KeyboardEvent_getModifierState(v_self_2864_, v_keyArg_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(lean_object* v_self_2869_, lean_object* v_typeArg_2870_, lean_object* v_bubblesArg_2871_, lean_object* v_cancelableArg_2872_, lean_object* v_viewArg_2873_, lean_object* v_keyArg_2874_, lean_object* v_locationArg_2875_, lean_object* v_ctrlKey_2876_, lean_object* v_altKey_2877_, lean_object* v_shiftKey_2878_, lean_object* v_metaKey_2879_){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2881_ = ((lean_object*)(l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___closed__0));
v___x_2882_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2882_, 0, v_typeArg_2870_);
v___x_2883_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_2871_);
v___x_2884_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_2872_);
v___x_2885_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_2873_);
v___x_2886_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_keyArg_2874_);
v___x_2887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_locationArg_2875_);
v___x_2888_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_2876_);
v___x_2889_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_2877_);
v___x_2890_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_2878_);
v___x_2891_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_2879_);
v___x_2892_ = lean_unsigned_to_nat(10u);
v___x_2893_ = lean_mk_empty_array_with_capacity(v___x_2892_);
v___x_2894_ = lean_array_push(v___x_2893_, v___x_2882_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2883_);
v___x_2896_ = lean_array_push(v___x_2895_, v___x_2884_);
v___x_2897_ = lean_array_push(v___x_2896_, v___x_2885_);
v___x_2898_ = lean_array_push(v___x_2897_, v___x_2886_);
v___x_2899_ = lean_array_push(v___x_2898_, v___x_2887_);
v___x_2900_ = lean_array_push(v___x_2899_, v___x_2888_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2889_);
v___x_2902_ = lean_array_push(v___x_2901_, v___x_2890_);
v___x_2903_ = lean_array_push(v___x_2902_, v___x_2891_);
v___x_2904_ = l_Lasm_JS_Web_Support_args(v___x_2903_);
v___x_2905_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2869_, v___x_2881_, v___x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent___boxed(lean_object* v_self_2906_, lean_object* v_typeArg_2907_, lean_object* v_bubblesArg_2908_, lean_object* v_cancelableArg_2909_, lean_object* v_viewArg_2910_, lean_object* v_keyArg_2911_, lean_object* v_locationArg_2912_, lean_object* v_ctrlKey_2913_, lean_object* v_altKey_2914_, lean_object* v_shiftKey_2915_, lean_object* v_metaKey_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_Lasm_JS_Web_KeyboardEvent_initKeyboardEvent(v_self_2906_, v_typeArg_2907_, v_bubblesArg_2908_, v_cancelableArg_2909_, v_viewArg_2910_, v_keyArg_2911_, v_locationArg_2912_, v_ctrlKey_2913_, v_altKey_2914_, v_shiftKey_2915_, v_metaKey_2916_);
lean_dec(v_metaKey_2916_);
lean_dec(v_shiftKey_2915_);
lean_dec(v_altKey_2914_);
lean_dec(v_ctrlKey_2913_);
lean_dec(v_viewArg_2910_);
lean_dec(v_cancelableArg_2909_);
lean_dec(v_bubblesArg_2908_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f(lean_object* v_v_2925_){
_start:
{
lean_object* v___f_2927_; lean_object* v___x_2928_; 
v___f_2927_ = ((lean_object*)(l_Lasm_JS_Web_InputEvent_cast_x3f___closed__2));
lean_inc(v_v_2925_);
v___x_2928_ = l_Lasm_JS_Web_Support_isInstance(v___f_2927_, v_v_2925_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2942_; 
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2931_ = v___x_2928_;
v_isShared_2932_ = v_isSharedCheck_2942_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2928_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2942_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
uint8_t v___x_2933_; 
v___x_2933_ = lean_unbox(v_a_2929_);
lean_dec(v_a_2929_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; lean_object* v___x_2936_; 
lean_dec(v_v_2925_);
v___x_2934_ = lean_box(0);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v___x_2934_);
v___x_2936_ = v___x_2931_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2934_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2940_; 
v___x_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2938_, 0, v_v_2925_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v___x_2938_);
v___x_2940_ = v___x_2931_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v___x_2938_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_dec(v_v_2925_);
v_a_2943_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2928_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2928_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_cast_x3f___boxed(lean_object* v_v_2951_, lean_object* v_a_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Lasm_JS_Web_InputEvent_cast_x3f(v_v_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(lean_object* v_context_2954_, lean_object* v_d_2955_){
_start:
{
lean_object* v___y_2958_; lean_object* v___y_2959_; 
if (lean_obj_tag(v_d_2955_) == 9)
{
lean_object* v_value_2963_; lean_object* v___x_2964_; 
v_value_2963_ = lean_ctor_get(v_d_2955_, 0);
lean_inc(v_value_2963_);
lean_dec_ref_known(v_d_2955_, 2);
v___x_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2964_, 0, v_value_2963_);
return v___x_2964_;
}
else
{
lean_object* v___x_2965_; lean_object* v_received_2967_; 
v___x_2965_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_2955_) == 9)
{
lean_object* v_value_2981_; lean_object* v_description_2982_; uint8_t v___x_2983_; 
v_value_2981_ = lean_ctor_get(v_d_2955_, 0);
v_description_2982_ = lean_ctor_get(v_d_2955_, 1);
v___x_2983_ = lean_string_dec_eq(v_description_2982_, v___x_2965_);
if (v___x_2983_ == 0)
{
goto v___jp_2979_;
}
else
{
uint32_t v___x_2984_; uint64_t v___x_2985_; lean_object* v___x_2986_; uint32_t v___x_2987_; lean_object* v___x_2988_; 
lean_inc_n(v_value_2981_, 2);
lean_dec_ref_known(v_d_2955_, 2);
v___x_2984_ = 206;
v___x_2985_ = 0ULL;
v___x_2986_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2986_, 0, v_value_2981_);
lean_ctor_set(v___x_2986_, 1, v___x_2965_);
v___x_2987_ = lasm_js_value_handle(v_value_2981_);
lean_dec(v_value_2981_);
v___x_2988_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2984_, v___x_2985_, v___x_2986_, v___x_2987_);
lean_dec_ref_known(v___x_2986_, 2);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; uint8_t v___x_2990_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = lean_string_validate_utf8(v_a_2989_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
lean_dec(v_a_2989_);
v___x_2991_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_2992_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2991_);
v_received_2967_ = v___x_2992_;
goto v___jp_2966_;
}
else
{
lean_object* v___x_2993_; 
v___x_2993_ = lean_string_from_utf8_unchecked(v_a_2989_);
v_received_2967_ = v___x_2993_;
goto v___jp_2966_;
}
}
else
{
lean_object* v___x_2994_; 
lean_dec_ref_known(v___x_2988_, 1);
v___x_2994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_2967_ = v___x_2994_;
goto v___jp_2966_;
}
}
}
else
{
goto v___jp_2979_;
}
v___jp_2966_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; uint8_t v___x_2977_; 
v___x_2968_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_2969_ = lean_string_append(v___x_2968_, v_context_2954_);
v___x_2970_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_2971_ = lean_string_append(v___x_2969_, v___x_2970_);
v___x_2972_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSInputEvent___closed__0));
v___x_2973_ = lean_string_append(v___x_2971_, v___x_2972_);
v___x_2974_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_2975_ = lean_string_append(v___x_2973_, v___x_2974_);
v___x_2976_ = lean_string_append(v___x_2975_, v_received_2967_);
lean_dec_ref(v_received_2967_);
v___x_2977_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_2977_ == 0)
{
lean_object* v___x_2978_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_2958_ = v___x_2976_;
v___y_2959_ = v___x_2978_;
goto v___jp_2957_;
}
else
{
v___y_2958_ = v___x_2976_;
v___y_2959_ = v___x_2965_;
goto v___jp_2957_;
}
}
v___jp_2979_:
{
lean_object* v___x_2980_; 
v___x_2980_ = l_Lasm_JS_Data_describe(v_d_2955_);
v_received_2967_ = v___x_2980_;
goto v___jp_2966_;
}
}
v___jp_2957_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2960_ = lean_string_append(v___y_2958_, v___y_2959_);
v___x_2961_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2960_);
v___x_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2995_, lean_object* v_d_2996_, lean_object* v_a_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v_context_2995_, v_d_2996_);
lean_dec_ref(v_context_2995_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(lean_object* v_b_2999_, lean_object* v_args_3000_, uint8_t v_await_3001_){
_start:
{
uint64_t v___y_3004_; uint64_t v___y_3005_; uint64_t v___x_3048_; uint64_t v___y_3050_; 
v___x_3048_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3001_ == 0)
{
uint64_t v___x_3055_; 
v___x_3055_ = 0ULL;
v___y_3050_ = v___x_3055_;
goto v___jp_3049_;
}
else
{
uint64_t v___x_3056_; 
v___x_3056_ = 2ULL;
v___y_3050_ = v___x_3056_;
goto v___jp_3049_;
}
v___jp_3003_:
{
uint64_t v_flags_3006_; uint32_t v___x_3007_; lean_object* v___x_3008_; uint32_t v___x_3009_; lean_object* v___x_3010_; 
v_flags_3006_ = lean_uint64_lor(v___y_3004_, v___y_3005_);
v___x_3007_ = 214;
v___x_3008_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2999_, v_args_3000_);
v___x_3009_ = 0;
v___x_3010_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3007_, v_flags_3006_, v___x_3008_, v___x_3009_);
lean_dec(v___x_3008_);
if (lean_obj_tag(v___x_3010_) == 0)
{
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3012_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_a_3011_);
lean_dec_ref_known(v___x_3010_, 1);
v___x_3012_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3011_);
lean_dec(v_a_3011_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3012_, 1);
v___x_3014_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2999_);
v___x_3015_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1_spec__1(v___x_3014_, v_a_3013_);
lean_dec_ref(v___x_3014_);
return v___x_3015_;
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
v_a_3016_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_3012_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3012_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
v_a_3024_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_3010_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3010_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
lean_ctor_set_tag(v___x_3026_, 1);
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3047_; 
v_a_3032_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3034_ = v___x_3010_;
v_isShared_3035_ = v_isSharedCheck_3047_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3010_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3047_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
v___x_3036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3037_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2999_);
v___x_3038_ = lean_string_append(v___x_3036_, v___x_3037_);
lean_dec_ref(v___x_3037_);
v___x_3039_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3040_ = lean_string_append(v___x_3038_, v___x_3039_);
v___x_3041_ = lean_io_error_to_string(v_a_3032_);
v___x_3042_ = lean_string_append(v___x_3040_, v___x_3041_);
lean_dec_ref(v___x_3041_);
v___x_3043_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 0, v___x_3043_);
v___x_3045_ = v___x_3034_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
v___jp_3049_:
{
uint8_t v_construct_3051_; uint64_t v___x_3052_; 
v_construct_3051_ = lean_ctor_get_uint8(v_b_2999_, sizeof(void*)*4);
v___x_3052_ = lean_uint64_lor(v___x_3048_, v___y_3050_);
if (v_construct_3051_ == 0)
{
uint64_t v___x_3053_; 
v___x_3053_ = 0ULL;
v___y_3004_ = v___x_3052_;
v___y_3005_ = v___x_3053_;
goto v___jp_3003_;
}
else
{
uint64_t v___x_3054_; 
v___x_3054_ = 4ULL;
v___y_3004_ = v___x_3052_;
v___y_3005_ = v___x_3054_;
goto v___jp_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1___boxed(lean_object* v_b_3057_, lean_object* v_args_3058_, lean_object* v_await_3059_, lean_object* v_a_3060_){
_start:
{
uint8_t v_await_boxed_3061_; lean_object* v_res_3062_; 
v_await_boxed_3061_ = lean_unbox(v_await_3059_);
v_res_3062_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v_b_3057_, v_args_3058_, v_await_boxed_3061_);
lean_dec_ref(v_b_3057_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(lean_object* v_x_3063_){
_start:
{
if (lean_obj_tag(v_x_3063_) == 0)
{
lean_object* v___x_3064_; 
v___x_3064_ = lean_box(0);
return v___x_3064_;
}
else
{
lean_object* v_val_3065_; lean_object* v_bubbles_3066_; lean_object* v_cancelable_3067_; lean_object* v_composed_3068_; lean_object* v_view_3069_; lean_object* v_detail_3070_; lean_object* v_which_3071_; lean_object* v_data_3072_; lean_object* v_isComposing_3073_; lean_object* v_inputType_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v_val_3065_ = lean_ctor_get(v_x_3063_, 0);
lean_inc(v_val_3065_);
lean_dec_ref_known(v_x_3063_, 1);
v_bubbles_3066_ = lean_ctor_get(v_val_3065_, 0);
lean_inc(v_bubbles_3066_);
v_cancelable_3067_ = lean_ctor_get(v_val_3065_, 1);
lean_inc(v_cancelable_3067_);
v_composed_3068_ = lean_ctor_get(v_val_3065_, 2);
lean_inc(v_composed_3068_);
v_view_3069_ = lean_ctor_get(v_val_3065_, 3);
lean_inc(v_view_3069_);
v_detail_3070_ = lean_ctor_get(v_val_3065_, 4);
lean_inc(v_detail_3070_);
v_which_3071_ = lean_ctor_get(v_val_3065_, 5);
lean_inc(v_which_3071_);
v_data_3072_ = lean_ctor_get(v_val_3065_, 6);
lean_inc(v_data_3072_);
v_isComposing_3073_ = lean_ctor_get(v_val_3065_, 7);
lean_inc(v_isComposing_3073_);
v_inputType_3074_ = lean_ctor_get(v_val_3065_, 8);
lean_inc(v_inputType_3074_);
lean_dec(v_val_3065_);
v___x_3075_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3076_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3066_);
lean_dec(v_bubbles_3066_);
v___x_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3075_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3079_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3067_);
lean_dec(v_cancelable_3067_);
v___x_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3078_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3082_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3068_);
lean_dec(v_composed_3068_);
v___x_3083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3081_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3085_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3069_);
lean_dec(v_view_3069_);
v___x_3086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3084_);
lean_ctor_set(v___x_3086_, 1, v___x_3085_);
v___x_3087_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3070_);
v___x_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3091_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3071_);
v___x_3092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3090_);
lean_ctor_set(v___x_3092_, 1, v___x_3091_);
v___x_3093_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3094_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_3072_);
v___x_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3093_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v___x_3096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_3097_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isComposing_3073_);
lean_dec(v_isComposing_3073_);
v___x_3098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3096_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
v___x_3099_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_3100_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_inputType_3074_);
v___x_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = lean_unsigned_to_nat(9u);
v___x_3103_ = lean_mk_empty_array_with_capacity(v___x_3102_);
v___x_3104_ = lean_array_push(v___x_3103_, v___x_3077_);
v___x_3105_ = lean_array_push(v___x_3104_, v___x_3080_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3083_);
v___x_3107_ = lean_array_push(v___x_3106_, v___x_3086_);
v___x_3108_ = lean_array_push(v___x_3107_, v___x_3089_);
v___x_3109_ = lean_array_push(v___x_3108_, v___x_3092_);
v___x_3110_ = lean_array_push(v___x_3109_, v___x_3095_);
v___x_3111_ = lean_array_push(v___x_3110_, v___x_3098_);
v___x_3112_ = lean_array_push(v___x_3111_, v___x_3101_);
v___x_3113_ = l_Lasm_JS_Web_Support_fields(v___x_3112_);
lean_dec_ref(v___x_3112_);
return v___x_3113_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new(lean_object* v_type_3121_, lean_object* v_eventInitDict_3122_){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; uint8_t v___x_3132_; lean_object* v___x_3133_; 
v___x_3124_ = lean_unsigned_to_nat(2u);
v___x_3125_ = ((lean_object*)(l_Lasm_JS_Web_InputEvent_new___closed__1));
v___x_3126_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3126_, 0, v_type_3121_);
v___x_3127_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_InputEvent_new_spec__0(v_eventInitDict_3122_);
v___x_3128_ = lean_mk_empty_array_with_capacity(v___x_3124_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3126_);
v___x_3130_ = lean_array_push(v___x_3129_, v___x_3127_);
v___x_3131_ = l_Lasm_JS_Web_Support_args(v___x_3130_);
v___x_3132_ = 0;
v___x_3133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_InputEvent_new_spec__1(v___x_3125_, v___x_3131_, v___x_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_new___boxed(lean_object* v_type_3134_, lean_object* v_eventInitDict_3135_, lean_object* v_a_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l_Lasm_JS_Web_InputEvent_new(v_type_3134_, v_eventInitDict_3135_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data(lean_object* v_self_3138_){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3141_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_3138_, v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_data___boxed(lean_object* v_self_3142_, lean_object* v_a_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = l_Lasm_JS_Web_InputEvent_data(v_self_3142_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing(lean_object* v_self_3145_){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__4));
v___x_3148_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3145_, v___x_3147_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_isComposing___boxed(lean_object* v_self_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lasm_JS_Web_InputEvent_isComposing(v_self_3149_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType(lean_object* v_self_3152_){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__1));
v___x_3155_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3152_, v___x_3154_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_InputEvent_inputType___boxed(lean_object* v_self_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lasm_JS_Web_InputEvent_inputType(v_self_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f(lean_object* v_v_3165_){
_start:
{
lean_object* v___f_3167_; lean_object* v___x_3168_; 
v___f_3167_ = ((lean_object*)(l_Lasm_JS_Web_FocusEvent_cast_x3f___closed__2));
lean_inc(v_v_3165_);
v___x_3168_ = l_Lasm_JS_Web_Support_isInstance(v___f_3167_, v_v_3165_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3182_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
uint8_t v___x_3173_; 
v___x_3173_ = lean_unbox(v_a_3169_);
lean_dec(v_a_3169_);
if (v___x_3173_ == 0)
{
lean_object* v___x_3174_; lean_object* v___x_3176_; 
lean_dec(v_v_3165_);
v___x_3174_ = lean_box(0);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3174_);
v___x_3176_ = v___x_3171_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3174_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
else
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3178_, 0, v_v_3165_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3178_);
v___x_3180_ = v___x_3171_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
lean_dec(v_v_3165_);
v_a_3183_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3168_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3168_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_cast_x3f___boxed(lean_object* v_v_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lasm_JS_Web_FocusEvent_cast_x3f(v_v_3191_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(lean_object* v_context_3194_, lean_object* v_d_3195_){
_start:
{
lean_object* v___y_3198_; lean_object* v___y_3199_; 
if (lean_obj_tag(v_d_3195_) == 9)
{
lean_object* v_value_3203_; lean_object* v___x_3204_; 
v_value_3203_ = lean_ctor_get(v_d_3195_, 0);
lean_inc(v_value_3203_);
lean_dec_ref_known(v_d_3195_, 2);
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v_value_3203_);
return v___x_3204_;
}
else
{
lean_object* v___x_3205_; lean_object* v_received_3207_; 
v___x_3205_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_3195_) == 9)
{
lean_object* v_value_3221_; lean_object* v_description_3222_; uint8_t v___x_3223_; 
v_value_3221_ = lean_ctor_get(v_d_3195_, 0);
v_description_3222_ = lean_ctor_get(v_d_3195_, 1);
v___x_3223_ = lean_string_dec_eq(v_description_3222_, v___x_3205_);
if (v___x_3223_ == 0)
{
goto v___jp_3219_;
}
else
{
uint32_t v___x_3224_; uint64_t v___x_3225_; lean_object* v___x_3226_; uint32_t v___x_3227_; lean_object* v___x_3228_; 
lean_inc_n(v_value_3221_, 2);
lean_dec_ref_known(v_d_3195_, 2);
v___x_3224_ = 206;
v___x_3225_ = 0ULL;
v___x_3226_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3226_, 0, v_value_3221_);
lean_ctor_set(v___x_3226_, 1, v___x_3205_);
v___x_3227_ = lasm_js_value_handle(v_value_3221_);
lean_dec(v_value_3221_);
v___x_3228_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3224_, v___x_3225_, v___x_3226_, v___x_3227_);
lean_dec_ref_known(v___x_3226_, 2);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v_a_3229_; uint8_t v___x_3230_; 
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___x_3228_, 1);
v___x_3230_ = lean_string_validate_utf8(v_a_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
lean_dec(v_a_3229_);
v___x_3231_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3232_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3231_);
v_received_3207_ = v___x_3232_;
goto v___jp_3206_;
}
else
{
lean_object* v___x_3233_; 
v___x_3233_ = lean_string_from_utf8_unchecked(v_a_3229_);
v_received_3207_ = v___x_3233_;
goto v___jp_3206_;
}
}
else
{
lean_object* v___x_3234_; 
lean_dec_ref_known(v___x_3228_, 1);
v___x_3234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_3207_ = v___x_3234_;
goto v___jp_3206_;
}
}
}
else
{
goto v___jp_3219_;
}
v___jp_3206_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; uint8_t v___x_3217_; 
v___x_3208_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3209_ = lean_string_append(v___x_3208_, v_context_3194_);
v___x_3210_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3211_ = lean_string_append(v___x_3209_, v___x_3210_);
v___x_3212_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFocusEvent___closed__0));
v___x_3213_ = lean_string_append(v___x_3211_, v___x_3212_);
v___x_3214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3215_ = lean_string_append(v___x_3213_, v___x_3214_);
v___x_3216_ = lean_string_append(v___x_3215_, v_received_3207_);
lean_dec_ref(v_received_3207_);
v___x_3217_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3217_ == 0)
{
lean_object* v___x_3218_; 
v___x_3218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_3198_ = v___x_3216_;
v___y_3199_ = v___x_3218_;
goto v___jp_3197_;
}
else
{
v___y_3198_ = v___x_3216_;
v___y_3199_ = v___x_3205_;
goto v___jp_3197_;
}
}
v___jp_3219_:
{
lean_object* v___x_3220_; 
v___x_3220_ = l_Lasm_JS_Data_describe(v_d_3195_);
v_received_3207_ = v___x_3220_;
goto v___jp_3206_;
}
}
v___jp_3197_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3200_ = lean_string_append(v___y_3198_, v___y_3199_);
v___x_3201_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
v___x_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
return v___x_3202_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3235_, lean_object* v_d_3236_, lean_object* v_a_3237_){
_start:
{
lean_object* v_res_3238_; 
v_res_3238_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v_context_3235_, v_d_3236_);
lean_dec_ref(v_context_3235_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(lean_object* v_b_3239_, lean_object* v_args_3240_, uint8_t v_await_3241_){
_start:
{
uint64_t v___y_3244_; uint64_t v___y_3245_; uint64_t v___x_3288_; uint64_t v___y_3290_; 
v___x_3288_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3241_ == 0)
{
uint64_t v___x_3295_; 
v___x_3295_ = 0ULL;
v___y_3290_ = v___x_3295_;
goto v___jp_3289_;
}
else
{
uint64_t v___x_3296_; 
v___x_3296_ = 2ULL;
v___y_3290_ = v___x_3296_;
goto v___jp_3289_;
}
v___jp_3243_:
{
uint64_t v_flags_3246_; uint32_t v___x_3247_; lean_object* v___x_3248_; uint32_t v___x_3249_; lean_object* v___x_3250_; 
v_flags_3246_ = lean_uint64_lor(v___y_3244_, v___y_3245_);
v___x_3247_ = 214;
v___x_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3239_, v_args_3240_);
v___x_3249_ = 0;
v___x_3250_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3247_, v_flags_3246_, v___x_3248_, v___x_3249_);
lean_dec(v___x_3248_);
if (lean_obj_tag(v___x_3250_) == 0)
{
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3252_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref_known(v___x_3250_, 1);
v___x_3252_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3251_);
lean_dec(v_a_3251_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3253_);
lean_dec_ref_known(v___x_3252_, 1);
v___x_3254_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3239_);
v___x_3255_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1_spec__1(v___x_3254_, v_a_3253_);
lean_dec_ref(v___x_3254_);
return v___x_3255_;
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
v_a_3256_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3252_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3252_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
v_a_3264_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3250_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3250_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
lean_ctor_set_tag(v___x_3266_, 1);
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3287_; 
v_a_3272_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3274_ = v___x_3250_;
v_isShared_3275_ = v_isSharedCheck_3287_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3250_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3287_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
v___x_3276_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3277_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3239_);
v___x_3278_ = lean_string_append(v___x_3276_, v___x_3277_);
lean_dec_ref(v___x_3277_);
v___x_3279_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3280_ = lean_string_append(v___x_3278_, v___x_3279_);
v___x_3281_ = lean_io_error_to_string(v_a_3272_);
v___x_3282_ = lean_string_append(v___x_3280_, v___x_3281_);
lean_dec_ref(v___x_3281_);
v___x_3283_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v___x_3283_);
v___x_3285_ = v___x_3274_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
v___jp_3289_:
{
uint8_t v_construct_3291_; uint64_t v___x_3292_; 
v_construct_3291_ = lean_ctor_get_uint8(v_b_3239_, sizeof(void*)*4);
v___x_3292_ = lean_uint64_lor(v___x_3288_, v___y_3290_);
if (v_construct_3291_ == 0)
{
uint64_t v___x_3293_; 
v___x_3293_ = 0ULL;
v___y_3244_ = v___x_3292_;
v___y_3245_ = v___x_3293_;
goto v___jp_3243_;
}
else
{
uint64_t v___x_3294_; 
v___x_3294_ = 4ULL;
v___y_3244_ = v___x_3292_;
v___y_3245_ = v___x_3294_;
goto v___jp_3243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1___boxed(lean_object* v_b_3297_, lean_object* v_args_3298_, lean_object* v_await_3299_, lean_object* v_a_3300_){
_start:
{
uint8_t v_await_boxed_3301_; lean_object* v_res_3302_; 
v_await_boxed_3301_ = lean_unbox(v_await_3299_);
v_res_3302_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v_b_3297_, v_args_3298_, v_await_boxed_3301_);
lean_dec_ref(v_b_3297_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(lean_object* v_x_3303_){
_start:
{
if (lean_obj_tag(v_x_3303_) == 0)
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_box(0);
return v___x_3304_;
}
else
{
lean_object* v_val_3305_; lean_object* v_bubbles_3306_; lean_object* v_cancelable_3307_; lean_object* v_composed_3308_; lean_object* v_view_3309_; lean_object* v_detail_3310_; lean_object* v_which_3311_; lean_object* v_relatedTarget_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v_val_3305_ = lean_ctor_get(v_x_3303_, 0);
lean_inc(v_val_3305_);
lean_dec_ref_known(v_x_3303_, 1);
v_bubbles_3306_ = lean_ctor_get(v_val_3305_, 0);
lean_inc(v_bubbles_3306_);
v_cancelable_3307_ = lean_ctor_get(v_val_3305_, 1);
lean_inc(v_cancelable_3307_);
v_composed_3308_ = lean_ctor_get(v_val_3305_, 2);
lean_inc(v_composed_3308_);
v_view_3309_ = lean_ctor_get(v_val_3305_, 3);
lean_inc(v_view_3309_);
v_detail_3310_ = lean_ctor_get(v_val_3305_, 4);
lean_inc(v_detail_3310_);
v_which_3311_ = lean_ctor_get(v_val_3305_, 5);
lean_inc(v_which_3311_);
v_relatedTarget_3312_ = lean_ctor_get(v_val_3305_, 6);
lean_inc(v_relatedTarget_3312_);
lean_dec(v_val_3305_);
v___x_3313_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3314_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3306_);
lean_dec(v_bubbles_3306_);
v___x_3315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3313_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3317_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3307_);
lean_dec(v_cancelable_3307_);
v___x_3318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3316_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
v___x_3319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3320_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3308_);
lean_dec(v_composed_3308_);
v___x_3321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3319_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
v___x_3322_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3323_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3309_);
lean_dec(v_view_3309_);
v___x_3324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3322_);
lean_ctor_set(v___x_3324_, 1, v___x_3323_);
v___x_3325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3326_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3310_);
v___x_3327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3325_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3329_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3311_);
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3328_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3332_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3312_);
lean_dec(v_relatedTarget_3312_);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3331_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = lean_unsigned_to_nat(7u);
v___x_3335_ = lean_mk_empty_array_with_capacity(v___x_3334_);
v___x_3336_ = lean_array_push(v___x_3335_, v___x_3315_);
v___x_3337_ = lean_array_push(v___x_3336_, v___x_3318_);
v___x_3338_ = lean_array_push(v___x_3337_, v___x_3321_);
v___x_3339_ = lean_array_push(v___x_3338_, v___x_3324_);
v___x_3340_ = lean_array_push(v___x_3339_, v___x_3327_);
v___x_3341_ = lean_array_push(v___x_3340_, v___x_3330_);
v___x_3342_ = lean_array_push(v___x_3341_, v___x_3333_);
v___x_3343_ = l_Lasm_JS_Web_Support_fields(v___x_3342_);
lean_dec_ref(v___x_3342_);
return v___x_3343_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new(lean_object* v_type_3351_, lean_object* v_eventInitDict_3352_){
_start:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; lean_object* v___x_3363_; 
v___x_3354_ = lean_unsigned_to_nat(2u);
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Web_FocusEvent_new___closed__1));
v___x_3356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3356_, 0, v_type_3351_);
v___x_3357_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_FocusEvent_new_spec__0(v_eventInitDict_3352_);
v___x_3358_ = lean_mk_empty_array_with_capacity(v___x_3354_);
v___x_3359_ = lean_array_push(v___x_3358_, v___x_3356_);
v___x_3360_ = lean_array_push(v___x_3359_, v___x_3357_);
v___x_3361_ = l_Lasm_JS_Web_Support_args(v___x_3360_);
v___x_3362_ = 0;
v___x_3363_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_FocusEvent_new_spec__1(v___x_3355_, v___x_3361_, v___x_3362_);
return v___x_3363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_new___boxed(lean_object* v_type_3364_, lean_object* v_eventInitDict_3365_, lean_object* v_a_3366_){
_start:
{
lean_object* v_res_3367_; 
v_res_3367_ = l_Lasm_JS_Web_FocusEvent_new(v_type_3364_, v_eventInitDict_3365_);
return v_res_3367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget(lean_object* v_self_3368_){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3371_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_3368_, v___x_3370_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FocusEvent_relatedTarget___boxed(lean_object* v_self_3372_, lean_object* v_a_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Lasm_JS_Web_FocusEvent_relatedTarget(v_self_3372_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f(lean_object* v_v_3381_){
_start:
{
lean_object* v___f_3383_; lean_object* v___x_3384_; 
v___f_3383_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_cast_x3f___closed__2));
lean_inc(v_v_3381_);
v___x_3384_ = l_Lasm_JS_Web_Support_isInstance(v___f_3383_, v_v_3381_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3398_; 
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3387_ = v___x_3384_;
v_isShared_3388_ = v_isSharedCheck_3398_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v___x_3384_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3398_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
uint8_t v___x_3389_; 
v___x_3389_ = lean_unbox(v_a_3385_);
lean_dec(v_a_3385_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; lean_object* v___x_3392_; 
lean_dec(v_v_3381_);
v___x_3390_ = lean_box(0);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3390_);
v___x_3392_ = v___x_3387_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
else
{
lean_object* v___x_3394_; lean_object* v___x_3396_; 
v___x_3394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3394_, 0, v_v_3381_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3394_);
v___x_3396_ = v___x_3387_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3394_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
lean_dec(v_v_3381_);
v_a_3399_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3384_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3384_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_cast_x3f___boxed(lean_object* v_v_3407_, lean_object* v_a_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lasm_JS_Web_CompositionEvent_cast_x3f(v_v_3407_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(lean_object* v_context_3410_, lean_object* v_d_3411_){
_start:
{
lean_object* v___y_3414_; lean_object* v___y_3415_; 
if (lean_obj_tag(v_d_3411_) == 9)
{
lean_object* v_value_3419_; lean_object* v___x_3420_; 
v_value_3419_ = lean_ctor_get(v_d_3411_, 0);
lean_inc(v_value_3419_);
lean_dec_ref_known(v_d_3411_, 2);
v___x_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3420_, 0, v_value_3419_);
return v___x_3420_;
}
else
{
lean_object* v___x_3421_; lean_object* v_received_3423_; 
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_3411_) == 9)
{
lean_object* v_value_3437_; lean_object* v_description_3438_; uint8_t v___x_3439_; 
v_value_3437_ = lean_ctor_get(v_d_3411_, 0);
v_description_3438_ = lean_ctor_get(v_d_3411_, 1);
v___x_3439_ = lean_string_dec_eq(v_description_3438_, v___x_3421_);
if (v___x_3439_ == 0)
{
goto v___jp_3435_;
}
else
{
uint32_t v___x_3440_; uint64_t v___x_3441_; lean_object* v___x_3442_; uint32_t v___x_3443_; lean_object* v___x_3444_; 
lean_inc_n(v_value_3437_, 2);
lean_dec_ref_known(v_d_3411_, 2);
v___x_3440_ = 206;
v___x_3441_ = 0ULL;
v___x_3442_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3442_, 0, v_value_3437_);
lean_ctor_set(v___x_3442_, 1, v___x_3421_);
v___x_3443_ = lasm_js_value_handle(v_value_3437_);
lean_dec(v_value_3437_);
v___x_3444_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3440_, v___x_3441_, v___x_3442_, v___x_3443_);
lean_dec_ref_known(v___x_3442_, 2);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; uint8_t v___x_3446_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3444_, 1);
v___x_3446_ = lean_string_validate_utf8(v_a_3445_);
if (v___x_3446_ == 0)
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_dec(v_a_3445_);
v___x_3447_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3448_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3447_);
v_received_3423_ = v___x_3448_;
goto v___jp_3422_;
}
else
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_string_from_utf8_unchecked(v_a_3445_);
v_received_3423_ = v___x_3449_;
goto v___jp_3422_;
}
}
else
{
lean_object* v___x_3450_; 
lean_dec_ref_known(v___x_3444_, 1);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_3423_ = v___x_3450_;
goto v___jp_3422_;
}
}
}
else
{
goto v___jp_3435_;
}
v___jp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; uint8_t v___x_3433_; 
v___x_3424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3425_ = lean_string_append(v___x_3424_, v_context_3410_);
v___x_3426_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3427_ = lean_string_append(v___x_3425_, v___x_3426_);
v___x_3428_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCompositionEvent___closed__0));
v___x_3429_ = lean_string_append(v___x_3427_, v___x_3428_);
v___x_3430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3431_ = lean_string_append(v___x_3429_, v___x_3430_);
v___x_3432_ = lean_string_append(v___x_3431_, v_received_3423_);
lean_dec_ref(v_received_3423_);
v___x_3433_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; 
v___x_3434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_3414_ = v___x_3432_;
v___y_3415_ = v___x_3434_;
goto v___jp_3413_;
}
else
{
v___y_3414_ = v___x_3432_;
v___y_3415_ = v___x_3421_;
goto v___jp_3413_;
}
}
v___jp_3435_:
{
lean_object* v___x_3436_; 
v___x_3436_ = l_Lasm_JS_Data_describe(v_d_3411_);
v_received_3423_ = v___x_3436_;
goto v___jp_3422_;
}
}
v___jp_3413_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3416_ = lean_string_append(v___y_3414_, v___y_3415_);
v___x_3417_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
v___x_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
return v___x_3418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1___boxed(lean_object* v_context_3451_, lean_object* v_d_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v_context_3451_, v_d_3452_);
lean_dec_ref(v_context_3451_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(lean_object* v_b_3455_, lean_object* v_args_3456_, uint8_t v_await_3457_){
_start:
{
uint64_t v___y_3460_; uint64_t v___y_3461_; uint64_t v___x_3504_; uint64_t v___y_3506_; 
v___x_3504_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3457_ == 0)
{
uint64_t v___x_3511_; 
v___x_3511_ = 0ULL;
v___y_3506_ = v___x_3511_;
goto v___jp_3505_;
}
else
{
uint64_t v___x_3512_; 
v___x_3512_ = 2ULL;
v___y_3506_ = v___x_3512_;
goto v___jp_3505_;
}
v___jp_3459_:
{
uint64_t v_flags_3462_; uint32_t v___x_3463_; lean_object* v___x_3464_; uint32_t v___x_3465_; lean_object* v___x_3466_; 
v_flags_3462_ = lean_uint64_lor(v___y_3460_, v___y_3461_);
v___x_3463_ = 214;
v___x_3464_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3455_, v_args_3456_);
v___x_3465_ = 0;
v___x_3466_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3463_, v_flags_3462_, v___x_3464_, v___x_3465_);
lean_dec(v___x_3464_);
if (lean_obj_tag(v___x_3466_) == 0)
{
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v___x_3468_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3468_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3467_);
lean_dec(v_a_3467_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_a_3469_);
lean_dec_ref_known(v___x_3468_, 1);
v___x_3470_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3455_);
v___x_3471_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1_spec__1(v___x_3470_, v_a_3469_);
lean_dec_ref(v___x_3470_);
return v___x_3471_;
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
v_a_3472_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3468_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3468_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
else
{
lean_object* v_a_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3487_; 
v_a_3480_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3482_ = v___x_3466_;
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_a_3480_);
lean_dec(v___x_3466_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3487_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v___x_3485_; 
if (v_isShared_3483_ == 0)
{
lean_ctor_set_tag(v___x_3482_, 1);
v___x_3485_ = v___x_3482_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_a_3480_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3503_; 
v_a_3488_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3490_ = v___x_3466_;
v_isShared_3491_ = v_isSharedCheck_3503_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3466_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3503_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3501_; 
v___x_3492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3493_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3455_);
v___x_3494_ = lean_string_append(v___x_3492_, v___x_3493_);
lean_dec_ref(v___x_3493_);
v___x_3495_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
v___x_3497_ = lean_io_error_to_string(v_a_3488_);
v___x_3498_ = lean_string_append(v___x_3496_, v___x_3497_);
lean_dec_ref(v___x_3497_);
v___x_3499_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 0, v___x_3499_);
v___x_3501_ = v___x_3490_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
v___jp_3505_:
{
uint8_t v_construct_3507_; uint64_t v___x_3508_; 
v_construct_3507_ = lean_ctor_get_uint8(v_b_3455_, sizeof(void*)*4);
v___x_3508_ = lean_uint64_lor(v___x_3504_, v___y_3506_);
if (v_construct_3507_ == 0)
{
uint64_t v___x_3509_; 
v___x_3509_ = 0ULL;
v___y_3460_ = v___x_3508_;
v___y_3461_ = v___x_3509_;
goto v___jp_3459_;
}
else
{
uint64_t v___x_3510_; 
v___x_3510_ = 4ULL;
v___y_3460_ = v___x_3508_;
v___y_3461_ = v___x_3510_;
goto v___jp_3459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1___boxed(lean_object* v_b_3513_, lean_object* v_args_3514_, lean_object* v_await_3515_, lean_object* v_a_3516_){
_start:
{
uint8_t v_await_boxed_3517_; lean_object* v_res_3518_; 
v_await_boxed_3517_ = lean_unbox(v_await_3515_);
v_res_3518_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v_b_3513_, v_args_3514_, v_await_boxed_3517_);
lean_dec_ref(v_b_3513_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(lean_object* v_x_3519_){
_start:
{
if (lean_obj_tag(v_x_3519_) == 0)
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_box(0);
return v___x_3520_;
}
else
{
lean_object* v_val_3521_; lean_object* v_bubbles_3522_; lean_object* v_cancelable_3523_; lean_object* v_composed_3524_; lean_object* v_view_3525_; lean_object* v_detail_3526_; lean_object* v_which_3527_; lean_object* v_data_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_val_3521_ = lean_ctor_get(v_x_3519_, 0);
lean_inc(v_val_3521_);
lean_dec_ref_known(v_x_3519_, 1);
v_bubbles_3522_ = lean_ctor_get(v_val_3521_, 0);
lean_inc(v_bubbles_3522_);
v_cancelable_3523_ = lean_ctor_get(v_val_3521_, 1);
lean_inc(v_cancelable_3523_);
v_composed_3524_ = lean_ctor_get(v_val_3521_, 2);
lean_inc(v_composed_3524_);
v_view_3525_ = lean_ctor_get(v_val_3521_, 3);
lean_inc(v_view_3525_);
v_detail_3526_ = lean_ctor_get(v_val_3521_, 4);
lean_inc(v_detail_3526_);
v_which_3527_ = lean_ctor_get(v_val_3521_, 5);
lean_inc(v_which_3527_);
v_data_3528_ = lean_ctor_get(v_val_3521_, 6);
lean_inc(v_data_3528_);
lean_dec(v_val_3521_);
v___x_3529_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3530_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3522_);
lean_dec(v_bubbles_3522_);
v___x_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3529_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3533_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3523_);
lean_dec(v_cancelable_3523_);
v___x_3534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3532_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3524_);
lean_dec(v_composed_3524_);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3539_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3525_);
lean_dec(v_view_3525_);
v___x_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3538_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3542_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3526_);
v___x_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3541_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3527_);
v___x_3546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3544_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3548_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_data_3528_);
v___x_3549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3547_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v___x_3550_ = lean_unsigned_to_nat(7u);
v___x_3551_ = lean_mk_empty_array_with_capacity(v___x_3550_);
v___x_3552_ = lean_array_push(v___x_3551_, v___x_3531_);
v___x_3553_ = lean_array_push(v___x_3552_, v___x_3534_);
v___x_3554_ = lean_array_push(v___x_3553_, v___x_3537_);
v___x_3555_ = lean_array_push(v___x_3554_, v___x_3540_);
v___x_3556_ = lean_array_push(v___x_3555_, v___x_3543_);
v___x_3557_ = lean_array_push(v___x_3556_, v___x_3546_);
v___x_3558_ = lean_array_push(v___x_3557_, v___x_3549_);
v___x_3559_ = l_Lasm_JS_Web_Support_fields(v___x_3558_);
lean_dec_ref(v___x_3558_);
return v___x_3559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new(lean_object* v_type_3567_, lean_object* v_eventInitDict_3568_){
_start:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; lean_object* v___x_3579_; 
v___x_3570_ = lean_unsigned_to_nat(2u);
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_new___closed__1));
v___x_3572_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3572_, 0, v_type_3567_);
v___x_3573_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CompositionEvent_new_spec__0(v_eventInitDict_3568_);
v___x_3574_ = lean_mk_empty_array_with_capacity(v___x_3570_);
v___x_3575_ = lean_array_push(v___x_3574_, v___x_3572_);
v___x_3576_ = lean_array_push(v___x_3575_, v___x_3573_);
v___x_3577_ = l_Lasm_JS_Web_Support_args(v___x_3576_);
v___x_3578_ = 0;
v___x_3579_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CompositionEvent_new_spec__1(v___x_3571_, v___x_3577_, v___x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_new___boxed(lean_object* v_type_3580_, lean_object* v_eventInitDict_3581_, lean_object* v_a_3582_){
_start:
{
lean_object* v_res_3583_; 
v_res_3583_ = l_Lasm_JS_Web_CompositionEvent_new(v_type_3580_, v_eventInitDict_3581_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data(lean_object* v_self_3584_){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3586_ = ((lean_object*)(l_Lasm_JS_Web_instToJSInputEventInit___lam__0___closed__0));
v___x_3587_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3584_, v___x_3586_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_data___boxed(lean_object* v_self_3588_, lean_object* v_a_3589_){
_start:
{
lean_object* v_res_3590_; 
v_res_3590_ = l_Lasm_JS_Web_CompositionEvent_data(v_self_3588_);
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(lean_object* v_self_3592_, lean_object* v_typeArg_3593_, lean_object* v_bubblesArg_3594_, lean_object* v_cancelableArg_3595_, lean_object* v_viewArg_3596_, lean_object* v_dataArg_3597_){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3599_ = ((lean_object*)(l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___closed__0));
v___x_3600_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3600_, 0, v_typeArg_3593_);
v___x_3601_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubblesArg_3594_);
v___x_3602_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelableArg_3595_);
v___x_3603_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_viewArg_3596_);
v___x_3604_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dataArg_3597_);
v___x_3605_ = lean_unsigned_to_nat(5u);
v___x_3606_ = lean_mk_empty_array_with_capacity(v___x_3605_);
v___x_3607_ = lean_array_push(v___x_3606_, v___x_3600_);
v___x_3608_ = lean_array_push(v___x_3607_, v___x_3601_);
v___x_3609_ = lean_array_push(v___x_3608_, v___x_3602_);
v___x_3610_ = lean_array_push(v___x_3609_, v___x_3603_);
v___x_3611_ = lean_array_push(v___x_3610_, v___x_3604_);
v___x_3612_ = l_Lasm_JS_Web_Support_args(v___x_3611_);
v___x_3613_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3592_, v___x_3599_, v___x_3612_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CompositionEvent_initCompositionEvent___boxed(lean_object* v_self_3614_, lean_object* v_typeArg_3615_, lean_object* v_bubblesArg_3616_, lean_object* v_cancelableArg_3617_, lean_object* v_viewArg_3618_, lean_object* v_dataArg_3619_, lean_object* v_a_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l_Lasm_JS_Web_CompositionEvent_initCompositionEvent(v_self_3614_, v_typeArg_3615_, v_bubblesArg_3616_, v_cancelableArg_3617_, v_viewArg_3618_, v_dataArg_3619_);
lean_dec(v_viewArg_3618_);
lean_dec(v_cancelableArg_3617_);
lean_dec(v_bubblesArg_3616_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f(lean_object* v_v_3628_){
_start:
{
lean_object* v___f_3630_; lean_object* v___x_3631_; 
v___f_3630_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_cast_x3f___closed__2));
lean_inc(v_v_3628_);
v___x_3631_ = l_Lasm_JS_Web_Support_isInstance(v___f_3630_, v_v_3628_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v_a_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3645_; 
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3634_ = v___x_3631_;
v_isShared_3635_ = v_isSharedCheck_3645_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_a_3632_);
lean_dec(v___x_3631_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3645_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
uint8_t v___x_3636_; 
v___x_3636_ = lean_unbox(v_a_3632_);
lean_dec(v_a_3632_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; lean_object* v___x_3639_; 
lean_dec(v_v_3628_);
v___x_3637_ = lean_box(0);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3637_);
v___x_3639_ = v___x_3634_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3637_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3643_; 
v___x_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3641_, 0, v_v_3628_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3641_);
v___x_3643_ = v___x_3634_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3641_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v_v_3628_);
v_a_3646_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3631_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3631_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_cast_x3f___boxed(lean_object* v_v_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l_Lasm_JS_Web_PointerEvent_cast_x3f(v_v_3654_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(size_t v_sz_3657_, size_t v_i_3658_, lean_object* v_bs_3659_){
_start:
{
uint8_t v___x_3660_; 
v___x_3660_ = lean_usize_dec_lt(v_i_3658_, v_sz_3657_);
if (v___x_3660_ == 0)
{
return v_bs_3659_;
}
else
{
lean_object* v_v_3661_; lean_object* v___x_3662_; lean_object* v_bs_x27_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; size_t v___x_3666_; size_t v___x_3667_; lean_object* v___x_3668_; 
v_v_3661_ = lean_array_uget(v_bs_3659_, v_i_3658_);
v___x_3662_ = lean_unsigned_to_nat(0u);
v_bs_x27_3663_ = lean_array_uset(v_bs_3659_, v_i_3658_, v___x_3662_);
v___x_3664_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_3665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3665_, 0, v_v_3661_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = ((size_t)1ULL);
v___x_3667_ = lean_usize_add(v_i_3658_, v___x_3666_);
v___x_3668_ = lean_array_uset(v_bs_x27_3663_, v_i_3658_, v___x_3665_);
v_i_3658_ = v___x_3667_;
v_bs_3659_ = v___x_3668_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3670_, lean_object* v_i_3671_, lean_object* v_bs_3672_){
_start:
{
size_t v_sz_boxed_3673_; size_t v_i_boxed_3674_; lean_object* v_res_3675_; 
v_sz_boxed_3673_ = lean_unbox_usize(v_sz_3670_);
lean_dec(v_sz_3670_);
v_i_boxed_3674_ = lean_unbox_usize(v_i_3671_);
lean_dec(v_i_3671_);
v_res_3675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_boxed_3673_, v_i_boxed_3674_, v_bs_3672_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(lean_object* v_x_3676_){
_start:
{
if (lean_obj_tag(v_x_3676_) == 0)
{
lean_object* v___x_3677_; 
v___x_3677_ = lean_box(0);
return v___x_3677_;
}
else
{
lean_object* v_val_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3688_; 
v_val_3678_ = lean_ctor_get(v_x_3676_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v_x_3676_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3680_ = v_x_3676_;
v_isShared_3681_ = v_isSharedCheck_3688_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_val_3678_);
lean_dec(v_x_3676_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3688_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
size_t v_sz_3682_; size_t v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3686_; 
v_sz_3682_ = lean_array_size(v_val_3678_);
v___x_3683_ = ((size_t)0ULL);
v___x_3684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0_spec__1(v_sz_3682_, v___x_3683_, v_val_3678_);
if (v_isShared_3681_ == 0)
{
lean_ctor_set_tag(v___x_3680_, 7);
lean_ctor_set(v___x_3680_, 0, v___x_3684_);
v___x_3686_ = v___x_3680_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(lean_object* v_x_3689_){
_start:
{
if (lean_obj_tag(v_x_3689_) == 0)
{
lean_object* v___x_3690_; 
v___x_3690_ = lean_box(0);
return v___x_3690_;
}
else
{
lean_object* v_val_3691_; lean_object* v_bubbles_3692_; lean_object* v_cancelable_3693_; lean_object* v_composed_3694_; lean_object* v_view_3695_; lean_object* v_detail_3696_; lean_object* v_which_3697_; lean_object* v_ctrlKey_3698_; lean_object* v_shiftKey_3699_; lean_object* v_altKey_3700_; lean_object* v_metaKey_3701_; lean_object* v_modifierAltGraph_3702_; lean_object* v_modifierCapsLock_3703_; lean_object* v_modifierFn_3704_; lean_object* v_modifierFnLock_3705_; lean_object* v_modifierHyper_3706_; lean_object* v_modifierNumLock_3707_; lean_object* v_modifierScrollLock_3708_; lean_object* v_modifierSuper_3709_; lean_object* v_modifierSymbol_3710_; lean_object* v_modifierSymbolLock_3711_; lean_object* v_screenX_3712_; lean_object* v_screenY_3713_; lean_object* v_clientX_3714_; lean_object* v_clientY_3715_; lean_object* v_button_3716_; lean_object* v_buttons_3717_; lean_object* v_relatedTarget_3718_; lean_object* v_pointerId_3719_; lean_object* v_width_3720_; lean_object* v_height_3721_; lean_object* v_pressure_3722_; lean_object* v_tangentialPressure_3723_; lean_object* v_tiltX_3724_; lean_object* v_tiltY_3725_; lean_object* v_twist_3726_; lean_object* v_altitudeAngle_3727_; lean_object* v_azimuthAngle_3728_; lean_object* v_pointerType_3729_; lean_object* v_isPrimary_3730_; lean_object* v_persistentDeviceId_3731_; lean_object* v_coalescedEvents_3732_; lean_object* v_predictedEvents_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v_val_3691_ = lean_ctor_get(v_x_3689_, 0);
lean_inc(v_val_3691_);
lean_dec_ref_known(v_x_3689_, 1);
v_bubbles_3692_ = lean_ctor_get(v_val_3691_, 0);
lean_inc(v_bubbles_3692_);
v_cancelable_3693_ = lean_ctor_get(v_val_3691_, 1);
lean_inc(v_cancelable_3693_);
v_composed_3694_ = lean_ctor_get(v_val_3691_, 2);
lean_inc(v_composed_3694_);
v_view_3695_ = lean_ctor_get(v_val_3691_, 3);
lean_inc(v_view_3695_);
v_detail_3696_ = lean_ctor_get(v_val_3691_, 4);
lean_inc(v_detail_3696_);
v_which_3697_ = lean_ctor_get(v_val_3691_, 5);
lean_inc(v_which_3697_);
v_ctrlKey_3698_ = lean_ctor_get(v_val_3691_, 6);
lean_inc(v_ctrlKey_3698_);
v_shiftKey_3699_ = lean_ctor_get(v_val_3691_, 7);
lean_inc(v_shiftKey_3699_);
v_altKey_3700_ = lean_ctor_get(v_val_3691_, 8);
lean_inc(v_altKey_3700_);
v_metaKey_3701_ = lean_ctor_get(v_val_3691_, 9);
lean_inc(v_metaKey_3701_);
v_modifierAltGraph_3702_ = lean_ctor_get(v_val_3691_, 10);
lean_inc(v_modifierAltGraph_3702_);
v_modifierCapsLock_3703_ = lean_ctor_get(v_val_3691_, 11);
lean_inc(v_modifierCapsLock_3703_);
v_modifierFn_3704_ = lean_ctor_get(v_val_3691_, 12);
lean_inc(v_modifierFn_3704_);
v_modifierFnLock_3705_ = lean_ctor_get(v_val_3691_, 13);
lean_inc(v_modifierFnLock_3705_);
v_modifierHyper_3706_ = lean_ctor_get(v_val_3691_, 14);
lean_inc(v_modifierHyper_3706_);
v_modifierNumLock_3707_ = lean_ctor_get(v_val_3691_, 15);
lean_inc(v_modifierNumLock_3707_);
v_modifierScrollLock_3708_ = lean_ctor_get(v_val_3691_, 16);
lean_inc(v_modifierScrollLock_3708_);
v_modifierSuper_3709_ = lean_ctor_get(v_val_3691_, 17);
lean_inc(v_modifierSuper_3709_);
v_modifierSymbol_3710_ = lean_ctor_get(v_val_3691_, 18);
lean_inc(v_modifierSymbol_3710_);
v_modifierSymbolLock_3711_ = lean_ctor_get(v_val_3691_, 19);
lean_inc(v_modifierSymbolLock_3711_);
v_screenX_3712_ = lean_ctor_get(v_val_3691_, 20);
lean_inc(v_screenX_3712_);
v_screenY_3713_ = lean_ctor_get(v_val_3691_, 21);
lean_inc(v_screenY_3713_);
v_clientX_3714_ = lean_ctor_get(v_val_3691_, 22);
lean_inc(v_clientX_3714_);
v_clientY_3715_ = lean_ctor_get(v_val_3691_, 23);
lean_inc(v_clientY_3715_);
v_button_3716_ = lean_ctor_get(v_val_3691_, 24);
lean_inc(v_button_3716_);
v_buttons_3717_ = lean_ctor_get(v_val_3691_, 25);
lean_inc(v_buttons_3717_);
v_relatedTarget_3718_ = lean_ctor_get(v_val_3691_, 26);
lean_inc(v_relatedTarget_3718_);
v_pointerId_3719_ = lean_ctor_get(v_val_3691_, 27);
lean_inc(v_pointerId_3719_);
v_width_3720_ = lean_ctor_get(v_val_3691_, 28);
lean_inc(v_width_3720_);
v_height_3721_ = lean_ctor_get(v_val_3691_, 29);
lean_inc(v_height_3721_);
v_pressure_3722_ = lean_ctor_get(v_val_3691_, 30);
lean_inc(v_pressure_3722_);
v_tangentialPressure_3723_ = lean_ctor_get(v_val_3691_, 31);
lean_inc(v_tangentialPressure_3723_);
v_tiltX_3724_ = lean_ctor_get(v_val_3691_, 32);
lean_inc(v_tiltX_3724_);
v_tiltY_3725_ = lean_ctor_get(v_val_3691_, 33);
lean_inc(v_tiltY_3725_);
v_twist_3726_ = lean_ctor_get(v_val_3691_, 34);
lean_inc(v_twist_3726_);
v_altitudeAngle_3727_ = lean_ctor_get(v_val_3691_, 35);
lean_inc(v_altitudeAngle_3727_);
v_azimuthAngle_3728_ = lean_ctor_get(v_val_3691_, 36);
lean_inc(v_azimuthAngle_3728_);
v_pointerType_3729_ = lean_ctor_get(v_val_3691_, 37);
lean_inc(v_pointerType_3729_);
v_isPrimary_3730_ = lean_ctor_get(v_val_3691_, 38);
lean_inc(v_isPrimary_3730_);
v_persistentDeviceId_3731_ = lean_ctor_get(v_val_3691_, 39);
lean_inc(v_persistentDeviceId_3731_);
v_coalescedEvents_3732_ = lean_ctor_get(v_val_3691_, 40);
lean_inc(v_coalescedEvents_3732_);
v_predictedEvents_3733_ = lean_ctor_get(v_val_3691_, 41);
lean_inc(v_predictedEvents_3733_);
lean_dec(v_val_3691_);
v___x_3734_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_3735_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_azimuthAngle_3728_);
lean_dec(v_azimuthAngle_3728_);
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_3738_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_pointerType_3729_);
v___x_3739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3737_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_3741_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_isPrimary_3730_);
lean_dec(v_isPrimary_3730_);
v___x_3742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_3744_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_persistentDeviceId_3731_);
v___x_3745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3743_);
lean_ctor_set(v___x_3745_, 1, v___x_3744_);
v___x_3746_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__4));
v___x_3747_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_coalescedEvents_3732_);
v___x_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3746_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__5));
v___x_3750_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0_spec__0(v_predictedEvents_3733_);
v___x_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3749_);
lean_ctor_set(v___x_3751_, 1, v___x_3750_);
v___x_3752_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_3753_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_tangentialPressure_3723_);
lean_dec(v_tangentialPressure_3723_);
v___x_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3752_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_3756_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltX_3724_);
v___x_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
lean_ctor_set(v___x_3757_, 1, v___x_3756_);
v___x_3758_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_3759_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_tiltY_3725_);
v___x_3760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3758_);
lean_ctor_set(v___x_3760_, 1, v___x_3759_);
v___x_3761_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_3762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_twist_3726_);
v___x_3763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3761_);
lean_ctor_set(v___x_3763_, 1, v___x_3762_);
v___x_3764_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_3765_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_altitudeAngle_3727_);
lean_dec(v_altitudeAngle_3727_);
v___x_3766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3764_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
v___x_3767_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__20));
v___x_3768_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_MouseEvent_new_spec__0_spec__0(v_relatedTarget_3718_);
lean_dec(v_relatedTarget_3718_);
v___x_3769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3767_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_3771_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_pointerId_3719_);
v___x_3772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3770_);
lean_ctor_set(v___x_3772_, 1, v___x_3771_);
v___x_3773_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_3774_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_3720_);
lean_dec(v_width_3720_);
v___x_3775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3773_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_3777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_3721_);
lean_dec(v_height_3721_);
v___x_3778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3776_);
lean_ctor_set(v___x_3778_, 1, v___x_3777_);
v___x_3779_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_3780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_pressure_3722_);
lean_dec(v_pressure_3722_);
v___x_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3779_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__15));
v___x_3783_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenY_3713_);
v___x_3784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3782_);
lean_ctor_set(v___x_3784_, 1, v___x_3783_);
v___x_3785_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__16));
v___x_3786_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientX_3714_);
v___x_3787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3785_);
lean_ctor_set(v___x_3787_, 1, v___x_3786_);
v___x_3788_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__17));
v___x_3789_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_clientY_3715_);
v___x_3790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3788_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__18));
v___x_3792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_button_3716_);
v___x_3793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3791_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
v___x_3794_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__19));
v___x_3795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_buttons_3717_);
v___x_3796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3794_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__9));
v___x_3798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierNumLock_3707_);
lean_dec(v_modifierNumLock_3707_);
v___x_3799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__10));
v___x_3801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierScrollLock_3708_);
lean_dec(v_modifierScrollLock_3708_);
v___x_3802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3800_);
lean_ctor_set(v___x_3802_, 1, v___x_3801_);
v___x_3803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__11));
v___x_3804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSuper_3709_);
lean_dec(v_modifierSuper_3709_);
v___x_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3803_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
v___x_3806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__12));
v___x_3807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbol_3710_);
lean_dec(v_modifierSymbol_3710_);
v___x_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3806_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__13));
v___x_3810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierSymbolLock_3711_);
lean_dec(v_modifierSymbolLock_3711_);
v___x_3811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3809_);
lean_ctor_set(v___x_3811_, 1, v___x_3810_);
v___x_3812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__14));
v___x_3813_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_screenX_3712_);
v___x_3814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3812_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__4));
v___x_3816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierAltGraph_3702_);
lean_dec(v_modifierAltGraph_3702_);
v___x_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3815_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
v___x_3818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__5));
v___x_3819_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierCapsLock_3703_);
lean_dec(v_modifierCapsLock_3703_);
v___x_3820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3820_, 0, v___x_3818_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
v___x_3821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__6));
v___x_3822_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFn_3704_);
lean_dec(v_modifierFn_3704_);
v___x_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3821_);
lean_ctor_set(v___x_3823_, 1, v___x_3822_);
v___x_3824_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__7));
v___x_3825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierFnLock_3705_);
lean_dec(v_modifierFnLock_3705_);
v___x_3826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3824_);
lean_ctor_set(v___x_3826_, 1, v___x_3825_);
v___x_3827_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__8));
v___x_3828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_modifierHyper_3706_);
lean_dec(v_modifierHyper_3706_);
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3827_);
lean_ctor_set(v___x_3829_, 1, v___x_3828_);
v___x_3830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__5));
v___x_3831_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ErrorEvent_new_spec__0_spec__0(v_which_3697_);
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3830_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__0));
v___x_3834_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ctrlKey_3698_);
lean_dec(v_ctrlKey_3698_);
v___x_3835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3833_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
v___x_3836_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__1));
v___x_3837_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_shiftKey_3699_);
lean_dec(v_shiftKey_3699_);
v___x_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3836_);
lean_ctor_set(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__2));
v___x_3840_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_altKey_3700_);
lean_dec(v_altKey_3700_);
v___x_3841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3839_);
lean_ctor_set(v___x_3841_, 1, v___x_3840_);
v___x_3842_ = ((lean_object*)(l_Lasm_JS_Web_instToJSMouseEventInit___lam__0___closed__3));
v___x_3843_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_metaKey_3701_);
lean_dec(v_metaKey_3701_);
v___x_3844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3842_);
lean_ctor_set(v___x_3844_, 1, v___x_3843_);
v___x_3845_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_3846_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_3692_);
lean_dec(v_bubbles_3692_);
v___x_3847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3845_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_3849_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_3693_);
lean_dec(v_cancelable_3693_);
v___x_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3848_);
lean_ctor_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_3852_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_3694_);
lean_dec(v_composed_3694_);
v___x_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3851_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
v___x_3854_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__3));
v___x_3855_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_UIEvent_new_spec__0_spec__0(v_view_3695_);
lean_dec(v_view_3695_);
v___x_3856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3854_);
lean_ctor_set(v___x_3856_, 1, v___x_3855_);
v___x_3857_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__4));
v___x_3858_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_detail_3696_);
v___x_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3857_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = lean_unsigned_to_nat(42u);
v___x_3861_ = lean_mk_empty_array_with_capacity(v___x_3860_);
v___x_3862_ = lean_array_push(v___x_3861_, v___x_3847_);
v___x_3863_ = lean_array_push(v___x_3862_, v___x_3850_);
v___x_3864_ = lean_array_push(v___x_3863_, v___x_3853_);
v___x_3865_ = lean_array_push(v___x_3864_, v___x_3856_);
v___x_3866_ = lean_array_push(v___x_3865_, v___x_3859_);
v___x_3867_ = lean_array_push(v___x_3866_, v___x_3832_);
v___x_3868_ = lean_array_push(v___x_3867_, v___x_3835_);
v___x_3869_ = lean_array_push(v___x_3868_, v___x_3838_);
v___x_3870_ = lean_array_push(v___x_3869_, v___x_3841_);
v___x_3871_ = lean_array_push(v___x_3870_, v___x_3844_);
v___x_3872_ = lean_array_push(v___x_3871_, v___x_3817_);
v___x_3873_ = lean_array_push(v___x_3872_, v___x_3820_);
v___x_3874_ = lean_array_push(v___x_3873_, v___x_3823_);
v___x_3875_ = lean_array_push(v___x_3874_, v___x_3826_);
v___x_3876_ = lean_array_push(v___x_3875_, v___x_3829_);
v___x_3877_ = lean_array_push(v___x_3876_, v___x_3799_);
v___x_3878_ = lean_array_push(v___x_3877_, v___x_3802_);
v___x_3879_ = lean_array_push(v___x_3878_, v___x_3805_);
v___x_3880_ = lean_array_push(v___x_3879_, v___x_3808_);
v___x_3881_ = lean_array_push(v___x_3880_, v___x_3811_);
v___x_3882_ = lean_array_push(v___x_3881_, v___x_3814_);
v___x_3883_ = lean_array_push(v___x_3882_, v___x_3784_);
v___x_3884_ = lean_array_push(v___x_3883_, v___x_3787_);
v___x_3885_ = lean_array_push(v___x_3884_, v___x_3790_);
v___x_3886_ = lean_array_push(v___x_3885_, v___x_3793_);
v___x_3887_ = lean_array_push(v___x_3886_, v___x_3796_);
v___x_3888_ = lean_array_push(v___x_3887_, v___x_3769_);
v___x_3889_ = lean_array_push(v___x_3888_, v___x_3772_);
v___x_3890_ = lean_array_push(v___x_3889_, v___x_3775_);
v___x_3891_ = lean_array_push(v___x_3890_, v___x_3778_);
v___x_3892_ = lean_array_push(v___x_3891_, v___x_3781_);
v___x_3893_ = lean_array_push(v___x_3892_, v___x_3754_);
v___x_3894_ = lean_array_push(v___x_3893_, v___x_3757_);
v___x_3895_ = lean_array_push(v___x_3894_, v___x_3760_);
v___x_3896_ = lean_array_push(v___x_3895_, v___x_3763_);
v___x_3897_ = lean_array_push(v___x_3896_, v___x_3766_);
v___x_3898_ = lean_array_push(v___x_3897_, v___x_3736_);
v___x_3899_ = lean_array_push(v___x_3898_, v___x_3739_);
v___x_3900_ = lean_array_push(v___x_3899_, v___x_3742_);
v___x_3901_ = lean_array_push(v___x_3900_, v___x_3745_);
v___x_3902_ = lean_array_push(v___x_3901_, v___x_3748_);
v___x_3903_ = lean_array_push(v___x_3902_, v___x_3751_);
v___x_3904_ = l_Lasm_JS_Web_Support_fields(v___x_3903_);
lean_dec_ref(v___x_3903_);
return v___x_3904_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(lean_object* v_context_3905_, lean_object* v_d_3906_){
_start:
{
lean_object* v___y_3909_; lean_object* v___y_3910_; 
if (lean_obj_tag(v_d_3906_) == 9)
{
lean_object* v_value_3914_; lean_object* v___x_3915_; 
v_value_3914_ = lean_ctor_get(v_d_3906_, 0);
lean_inc(v_value_3914_);
lean_dec_ref_known(v_d_3906_, 2);
v___x_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3915_, 0, v_value_3914_);
return v___x_3915_;
}
else
{
lean_object* v___x_3916_; lean_object* v_received_3918_; 
v___x_3916_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_3906_) == 9)
{
lean_object* v_value_3932_; lean_object* v_description_3933_; uint8_t v___x_3934_; 
v_value_3932_ = lean_ctor_get(v_d_3906_, 0);
v_description_3933_ = lean_ctor_get(v_d_3906_, 1);
v___x_3934_ = lean_string_dec_eq(v_description_3933_, v___x_3916_);
if (v___x_3934_ == 0)
{
goto v___jp_3930_;
}
else
{
uint32_t v___x_3935_; uint64_t v___x_3936_; lean_object* v___x_3937_; uint32_t v___x_3938_; lean_object* v___x_3939_; 
lean_inc_n(v_value_3932_, 2);
lean_dec_ref_known(v_d_3906_, 2);
v___x_3935_ = 206;
v___x_3936_ = 0ULL;
v___x_3937_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3937_, 0, v_value_3932_);
lean_ctor_set(v___x_3937_, 1, v___x_3916_);
v___x_3938_ = lasm_js_value_handle(v_value_3932_);
lean_dec(v_value_3932_);
v___x_3939_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3935_, v___x_3936_, v___x_3937_, v___x_3938_);
lean_dec_ref_known(v___x_3937_, 2);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; uint8_t v___x_3941_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3939_, 1);
v___x_3941_ = lean_string_validate_utf8(v_a_3940_);
if (v___x_3941_ == 0)
{
lean_object* v___x_3942_; lean_object* v___x_3943_; 
lean_dec(v_a_3940_);
v___x_3942_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_3943_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3942_);
v_received_3918_ = v___x_3943_;
goto v___jp_3917_;
}
else
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_string_from_utf8_unchecked(v_a_3940_);
v_received_3918_ = v___x_3944_;
goto v___jp_3917_;
}
}
else
{
lean_object* v___x_3945_; 
lean_dec_ref_known(v___x_3939_, 1);
v___x_3945_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_3918_ = v___x_3945_;
goto v___jp_3917_;
}
}
}
else
{
goto v___jp_3930_;
}
v___jp_3917_:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; uint8_t v___x_3928_; 
v___x_3919_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3920_ = lean_string_append(v___x_3919_, v_context_3905_);
v___x_3921_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_3922_ = lean_string_append(v___x_3920_, v___x_3921_);
v___x_3923_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPointerEvent___closed__0));
v___x_3924_ = lean_string_append(v___x_3922_, v___x_3923_);
v___x_3925_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_3926_ = lean_string_append(v___x_3924_, v___x_3925_);
v___x_3927_ = lean_string_append(v___x_3926_, v_received_3918_);
lean_dec_ref(v_received_3918_);
v___x_3928_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_3928_ == 0)
{
lean_object* v___x_3929_; 
v___x_3929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_3909_ = v___x_3927_;
v___y_3910_ = v___x_3929_;
goto v___jp_3908_;
}
else
{
v___y_3909_ = v___x_3927_;
v___y_3910_ = v___x_3916_;
goto v___jp_3908_;
}
}
v___jp_3930_:
{
lean_object* v___x_3931_; 
v___x_3931_ = l_Lasm_JS_Data_describe(v_d_3906_);
v_received_3918_ = v___x_3931_;
goto v___jp_3917_;
}
}
v___jp_3908_:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v___x_3911_ = lean_string_append(v___y_3909_, v___y_3910_);
v___x_3912_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
v___x_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3912_);
return v___x_3913_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2___boxed(lean_object* v_context_3946_, lean_object* v_d_3947_, lean_object* v_a_3948_){
_start:
{
lean_object* v_res_3949_; 
v_res_3949_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v_context_3946_, v_d_3947_);
lean_dec_ref(v_context_3946_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(lean_object* v_b_3950_, lean_object* v_args_3951_, uint8_t v_await_3952_){
_start:
{
uint64_t v___y_3955_; uint64_t v___y_3956_; uint64_t v___x_3999_; uint64_t v___y_4001_; 
v___x_3999_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_3952_ == 0)
{
uint64_t v___x_4006_; 
v___x_4006_ = 0ULL;
v___y_4001_ = v___x_4006_;
goto v___jp_4000_;
}
else
{
uint64_t v___x_4007_; 
v___x_4007_ = 2ULL;
v___y_4001_ = v___x_4007_;
goto v___jp_4000_;
}
v___jp_3954_:
{
uint64_t v_flags_3957_; uint32_t v___x_3958_; lean_object* v___x_3959_; uint32_t v___x_3960_; lean_object* v___x_3961_; 
v_flags_3957_ = lean_uint64_lor(v___y_3955_, v___y_3956_);
v___x_3958_ = 214;
v___x_3959_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3950_, v_args_3951_);
v___x_3960_ = 0;
v___x_3961_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3958_, v_flags_3957_, v___x_3959_, v___x_3960_);
lean_dec(v___x_3959_);
if (lean_obj_tag(v___x_3961_) == 0)
{
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3963_; 
v_a_3962_ = lean_ctor_get(v___x_3961_, 0);
lean_inc(v_a_3962_);
lean_dec_ref_known(v___x_3961_, 1);
v___x_3963_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3962_);
lean_dec(v_a_3962_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v___x_3963_, 1);
v___x_3965_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3950_);
v___x_3966_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1_spec__2(v___x_3965_, v_a_3964_);
lean_dec_ref(v___x_3965_);
return v___x_3966_;
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
v_a_3967_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3963_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3963_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
else
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
v_a_3975_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3961_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3961_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
lean_ctor_set_tag(v___x_3977_, 1);
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3998_; 
v_a_3983_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3985_ = v___x_3961_;
v_isShared_3986_ = v_isSharedCheck_3998_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3961_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3998_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3996_; 
v___x_3987_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_3988_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3950_);
v___x_3989_ = lean_string_append(v___x_3987_, v___x_3988_);
lean_dec_ref(v___x_3988_);
v___x_3990_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_3991_ = lean_string_append(v___x_3989_, v___x_3990_);
v___x_3992_ = lean_io_error_to_string(v_a_3983_);
v___x_3993_ = lean_string_append(v___x_3991_, v___x_3992_);
lean_dec_ref(v___x_3992_);
v___x_3994_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
if (v_isShared_3986_ == 0)
{
lean_ctor_set(v___x_3985_, 0, v___x_3994_);
v___x_3996_ = v___x_3985_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3994_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
}
v___jp_4000_:
{
uint8_t v_construct_4002_; uint64_t v___x_4003_; 
v_construct_4002_ = lean_ctor_get_uint8(v_b_3950_, sizeof(void*)*4);
v___x_4003_ = lean_uint64_lor(v___x_3999_, v___y_4001_);
if (v_construct_4002_ == 0)
{
uint64_t v___x_4004_; 
v___x_4004_ = 0ULL;
v___y_3955_ = v___x_4003_;
v___y_3956_ = v___x_4004_;
goto v___jp_3954_;
}
else
{
uint64_t v___x_4005_; 
v___x_4005_ = 4ULL;
v___y_3955_ = v___x_4003_;
v___y_3956_ = v___x_4005_;
goto v___jp_3954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1___boxed(lean_object* v_b_4008_, lean_object* v_args_4009_, lean_object* v_await_4010_, lean_object* v_a_4011_){
_start:
{
uint8_t v_await_boxed_4012_; lean_object* v_res_4013_; 
v_await_boxed_4012_ = lean_unbox(v_await_4010_);
v_res_4013_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v_b_4008_, v_args_4009_, v_await_boxed_4012_);
lean_dec_ref(v_b_4008_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new(lean_object* v_type_4021_, lean_object* v_eventInitDict_4022_){
_start:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; uint8_t v___x_4032_; lean_object* v___x_4033_; 
v___x_4024_ = lean_unsigned_to_nat(2u);
v___x_4025_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_new___closed__1));
v___x_4026_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4026_, 0, v_type_4021_);
v___x_4027_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PointerEvent_new_spec__0(v_eventInitDict_4022_);
v___x_4028_ = lean_mk_empty_array_with_capacity(v___x_4024_);
v___x_4029_ = lean_array_push(v___x_4028_, v___x_4026_);
v___x_4030_ = lean_array_push(v___x_4029_, v___x_4027_);
v___x_4031_ = l_Lasm_JS_Web_Support_args(v___x_4030_);
v___x_4032_ = 0;
v___x_4033_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PointerEvent_new_spec__1(v___x_4025_, v___x_4031_, v___x_4032_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_new___boxed(lean_object* v_type_4034_, lean_object* v_eventInitDict_4035_, lean_object* v_a_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Lasm_JS_Web_PointerEvent_new(v_type_4034_, v_eventInitDict_4035_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId(lean_object* v_self_4038_){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__11));
v___x_4041_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_4038_, v___x_4040_);
return v___x_4041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerId___boxed(lean_object* v_self_4042_, lean_object* v_a_4043_){
_start:
{
lean_object* v_res_4044_; 
v_res_4044_ = l_Lasm_JS_Web_PointerEvent_pointerId(v_self_4042_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width(lean_object* v_self_4045_){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4047_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__12));
v___x_4048_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4045_, v___x_4047_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_width___boxed(lean_object* v_self_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lasm_JS_Web_PointerEvent_width(v_self_4049_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height(lean_object* v_self_4052_){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; 
v___x_4054_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__13));
v___x_4055_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4052_, v___x_4054_);
return v___x_4055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_height___boxed(lean_object* v_self_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l_Lasm_JS_Web_PointerEvent_height(v_self_4056_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure(lean_object* v_self_4059_){
_start:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4061_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__14));
v___x_4062_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4059_, v___x_4061_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pressure___boxed(lean_object* v_self_4063_, lean_object* v_a_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = l_Lasm_JS_Web_PointerEvent_pressure(v_self_4063_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure(lean_object* v_self_4066_){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__6));
v___x_4069_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4066_, v___x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tangentialPressure___boxed(lean_object* v_self_4070_, lean_object* v_a_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lasm_JS_Web_PointerEvent_tangentialPressure(v_self_4070_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX(lean_object* v_self_4073_){
_start:
{
lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4075_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__7));
v___x_4076_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_4073_, v___x_4075_);
return v___x_4076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltX___boxed(lean_object* v_self_4077_, lean_object* v_a_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Lasm_JS_Web_PointerEvent_tiltX(v_self_4077_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY(lean_object* v_self_4080_){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4082_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__8));
v___x_4083_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_4080_, v___x_4082_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_tiltY___boxed(lean_object* v_self_4084_, lean_object* v_a_4085_){
_start:
{
lean_object* v_res_4086_; 
v_res_4086_ = l_Lasm_JS_Web_PointerEvent_tiltY(v_self_4084_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist(lean_object* v_self_4087_){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__9));
v___x_4090_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_4087_, v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_twist___boxed(lean_object* v_self_4091_, lean_object* v_a_4092_){
_start:
{
lean_object* v_res_4093_; 
v_res_4093_ = l_Lasm_JS_Web_PointerEvent_twist(v_self_4091_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle(lean_object* v_self_4094_){
_start:
{
lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__10));
v___x_4097_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4094_, v___x_4096_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_altitudeAngle___boxed(lean_object* v_self_4098_, lean_object* v_a_4099_){
_start:
{
lean_object* v_res_4100_; 
v_res_4100_ = l_Lasm_JS_Web_PointerEvent_altitudeAngle(v_self_4098_);
return v_res_4100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle(lean_object* v_self_4101_){
_start:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; 
v___x_4103_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__0));
v___x_4104_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_4101_, v___x_4103_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_azimuthAngle___boxed(lean_object* v_self_4105_, lean_object* v_a_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lasm_JS_Web_PointerEvent_azimuthAngle(v_self_4105_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType(lean_object* v_self_4108_){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4110_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__1));
v___x_4111_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4108_, v___x_4110_);
return v___x_4111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_pointerType___boxed(lean_object* v_self_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l_Lasm_JS_Web_PointerEvent_pointerType(v_self_4112_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary(lean_object* v_self_4115_){
_start:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4117_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__2));
v___x_4118_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4115_, v___x_4117_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_isPrimary___boxed(lean_object* v_self_4119_, lean_object* v_a_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lasm_JS_Web_PointerEvent_isPrimary(v_self_4119_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId(lean_object* v_self_4122_){
_start:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4124_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPointerEventInit___lam__0___closed__3));
v___x_4125_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_4122_, v___x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_persistentDeviceId___boxed(lean_object* v_self_4126_, lean_object* v_a_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l_Lasm_JS_Web_PointerEvent_persistentDeviceId(v_self_4126_);
return v_res_4128_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(uint8_t v_await_4129_, uint64_t v_extra_4130_){
_start:
{
uint64_t v___x_4131_; uint64_t v___y_4133_; 
v___x_4131_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4129_ == 0)
{
uint64_t v___x_4136_; 
v___x_4136_ = 0ULL;
v___y_4133_ = v___x_4136_;
goto v___jp_4132_;
}
else
{
uint64_t v___x_4137_; 
v___x_4137_ = 2ULL;
v___y_4133_ = v___x_4137_;
goto v___jp_4132_;
}
v___jp_4132_:
{
uint64_t v___x_4134_; uint64_t v___x_4135_; 
v___x_4134_ = lean_uint64_lor(v___x_4131_, v___y_4133_);
v___x_4135_ = lean_uint64_lor(v___x_4134_, v_extra_4130_);
return v___x_4135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0___boxed(lean_object* v_await_4138_, lean_object* v_extra_4139_){
_start:
{
uint8_t v_await_boxed_4140_; uint64_t v_extra_boxed_4141_; uint64_t v_res_4142_; lean_object* v_r_4143_; 
v_await_boxed_4140_ = lean_unbox(v_await_4138_);
v_extra_boxed_4141_ = lean_unbox_uint64(v_extra_4139_);
lean_dec_ref(v_extra_4139_);
v_res_4142_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v_await_boxed_4140_, v_extra_boxed_4141_);
v_r_4143_ = lean_box_uint64(v_res_4142_);
return v_r_4143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(size_t v_sz_4146_, size_t v_i_4147_, lean_object* v_bs_4148_){
_start:
{
uint8_t v___x_4149_; 
v___x_4149_ = lean_usize_dec_lt(v_i_4147_, v_sz_4146_);
if (v___x_4149_ == 0)
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4150_, 0, v_bs_4148_);
return v___x_4150_;
}
else
{
lean_object* v_v_4151_; 
v_v_4151_ = lean_array_uget_borrowed(v_bs_4148_, v_i_4147_);
if (lean_obj_tag(v_v_4151_) == 9)
{
lean_object* v_value_4152_; lean_object* v___x_4153_; lean_object* v_bs_x27_4154_; size_t v___x_4155_; size_t v___x_4156_; lean_object* v___x_4157_; 
v_value_4152_ = lean_ctor_get(v_v_4151_, 0);
lean_inc(v_value_4152_);
v___x_4153_ = lean_unsigned_to_nat(0u);
v_bs_x27_4154_ = lean_array_uset(v_bs_4148_, v_i_4147_, v___x_4153_);
v___x_4155_ = ((size_t)1ULL);
v___x_4156_ = lean_usize_add(v_i_4147_, v___x_4155_);
v___x_4157_ = lean_array_uset(v_bs_x27_4154_, v_i_4147_, v_value_4152_);
v_i_4147_ = v___x_4156_;
v_bs_4148_ = v___x_4157_;
goto _start;
}
else
{
lean_object* v___x_4159_; 
lean_dec_ref(v_bs_4148_);
v___x_4159_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_4159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_4160_, lean_object* v_i_4161_, lean_object* v_bs_4162_){
_start:
{
size_t v_sz_boxed_4163_; size_t v_i_boxed_4164_; lean_object* v_res_4165_; 
v_sz_boxed_4163_ = lean_unbox_usize(v_sz_4160_);
lean_dec(v_sz_4160_);
v_i_boxed_4164_ = lean_unbox_usize(v_i_4161_);
lean_dec(v_i_4161_);
v_res_4165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_4163_, v_i_boxed_4164_, v_bs_4162_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(lean_object* v_context_4170_, lean_object* v_d_4171_){
_start:
{
lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4180_; lean_object* v_received_4181_; lean_object* v___y_4200_; lean_object* v_a_4203_; 
if (lean_obj_tag(v_d_4171_) == 7)
{
lean_object* v_items_4227_; size_t v_sz_4228_; size_t v___x_4229_; lean_object* v___x_4230_; 
v_items_4227_ = lean_ctor_get(v_d_4171_, 0);
v_sz_4228_ = lean_array_size(v_items_4227_);
v___x_4229_ = ((size_t)0ULL);
lean_inc_ref(v_items_4227_);
v___x_4230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2_spec__3(v_sz_4228_, v___x_4229_, v_items_4227_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; uint8_t v___x_4235_; 
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
lean_dec_ref_known(v___x_4230_, 1);
v___x_4232_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__3));
v___x_4233_ = lean_string_utf8_byte_size(v_a_4231_);
v___x_4234_ = lean_unsigned_to_nat(0u);
v___x_4235_ = lean_nat_dec_eq(v___x_4233_, v___x_4234_);
if (v___x_4235_ == 0)
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4236_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4237_ = lean_string_append(v___x_4236_, v_a_4231_);
lean_dec(v_a_4231_);
v___x_4238_ = lean_string_append(v___x_4232_, v___x_4237_);
lean_dec_ref(v___x_4237_);
v_a_4203_ = v___x_4238_;
goto v___jp_4202_;
}
else
{
lean_dec(v_a_4231_);
v_a_4203_ = v___x_4232_;
goto v___jp_4202_;
}
}
else
{
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4239_; 
v_a_4239_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v___x_4230_, 1);
v_a_4203_ = v_a_4239_;
goto v___jp_4202_;
}
else
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
lean_dec_ref_known(v_d_4171_, 1);
v_a_4240_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___x_4230_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4230_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set_tag(v___x_4242_, 0);
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
}
else
{
lean_object* v___x_4248_; 
v___x_4248_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v_a_4203_ = v___x_4248_;
goto v___jp_4202_;
}
v___jp_4173_:
{
lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4176_ = lean_string_append(v___y_4174_, v___y_4175_);
lean_dec_ref(v___y_4175_);
v___x_4177_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
v___x_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4177_);
return v___x_4178_;
}
v___jp_4179_:
{
lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; 
v___x_4182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4183_ = lean_string_append(v___x_4182_, v_context_4170_);
v___x_4184_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4185_ = lean_string_append(v___x_4183_, v___x_4184_);
v___x_4186_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__0));
v___x_4187_ = lean_string_append(v___x_4185_, v___x_4186_);
v___x_4188_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4189_ = lean_string_append(v___x_4187_, v___x_4188_);
v___x_4190_ = lean_string_append(v___x_4189_, v_received_4181_);
lean_dec_ref(v_received_4181_);
v___x_4191_ = lean_string_utf8_byte_size(v___y_4180_);
v___x_4192_ = lean_unsigned_to_nat(0u);
v___x_4193_ = lean_nat_dec_eq(v___x_4191_, v___x_4192_);
if (v___x_4193_ == 0)
{
lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__1));
v___x_4195_ = lean_string_append(v___x_4194_, v___y_4180_);
lean_dec_ref(v___y_4180_);
v___x_4196_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___closed__2));
v___x_4197_ = lean_string_append(v___x_4195_, v___x_4196_);
v___y_4174_ = v___x_4190_;
v___y_4175_ = v___x_4197_;
goto v___jp_4173_;
}
else
{
lean_object* v___x_4198_; 
lean_dec_ref(v___y_4180_);
v___x_4198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___y_4174_ = v___x_4190_;
v___y_4175_ = v___x_4198_;
goto v___jp_4173_;
}
}
v___jp_4199_:
{
lean_object* v___x_4201_; 
v___x_4201_ = l_Lasm_JS_Data_describe(v_d_4171_);
v___y_4180_ = v___y_4200_;
v_received_4181_ = v___x_4201_;
goto v___jp_4179_;
}
v___jp_4202_:
{
if (lean_obj_tag(v_d_4171_) == 9)
{
lean_object* v_value_4204_; lean_object* v_description_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; 
v_value_4204_ = lean_ctor_get(v_d_4171_, 0);
v_description_4205_ = lean_ctor_get(v_d_4171_, 1);
v___x_4206_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4207_ = lean_string_dec_eq(v_description_4205_, v___x_4206_);
if (v___x_4207_ == 0)
{
v___y_4200_ = v_a_4203_;
goto v___jp_4199_;
}
else
{
lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4224_; 
lean_inc(v_value_4204_);
v_isSharedCheck_4224_ = !lean_is_exclusive(v_d_4171_);
if (v_isSharedCheck_4224_ == 0)
{
lean_object* v_unused_4225_; lean_object* v_unused_4226_; 
v_unused_4225_ = lean_ctor_get(v_d_4171_, 1);
lean_dec(v_unused_4225_);
v_unused_4226_ = lean_ctor_get(v_d_4171_, 0);
lean_dec(v_unused_4226_);
v___x_4209_ = v_d_4171_;
v_isShared_4210_ = v_isSharedCheck_4224_;
goto v_resetjp_4208_;
}
else
{
lean_dec(v_d_4171_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4224_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
uint32_t v___x_4211_; uint64_t v___x_4212_; lean_object* v___x_4214_; 
v___x_4211_ = 206;
v___x_4212_ = 0ULL;
lean_inc(v_value_4204_);
if (v_isShared_4210_ == 0)
{
lean_ctor_set(v___x_4209_, 1, v___x_4206_);
v___x_4214_ = v___x_4209_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_value_4204_);
lean_ctor_set(v_reuseFailAlloc_4223_, 1, v___x_4206_);
v___x_4214_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
uint32_t v___x_4215_; lean_object* v___x_4216_; 
v___x_4215_ = lasm_js_value_handle(v_value_4204_);
lean_dec(v_value_4204_);
v___x_4216_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4211_, v___x_4212_, v___x_4214_, v___x_4215_);
lean_dec_ref(v___x_4214_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; uint8_t v___x_4218_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4216_, 1);
v___x_4218_ = lean_string_validate_utf8(v_a_4217_);
if (v___x_4218_ == 0)
{
lean_object* v___x_4219_; lean_object* v___x_4220_; 
lean_dec(v_a_4217_);
v___x_4219_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4220_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4219_);
v___y_4180_ = v_a_4203_;
v_received_4181_ = v___x_4220_;
goto v___jp_4179_;
}
else
{
lean_object* v___x_4221_; 
v___x_4221_ = lean_string_from_utf8_unchecked(v_a_4217_);
v___y_4180_ = v_a_4203_;
v_received_4181_ = v___x_4221_;
goto v___jp_4179_;
}
}
else
{
lean_object* v___x_4222_; 
lean_dec_ref_known(v___x_4216_, 1);
v___x_4222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v___y_4180_ = v_a_4203_;
v_received_4181_ = v___x_4222_;
goto v___jp_4179_;
}
}
}
}
}
else
{
v___y_4200_ = v_a_4203_;
goto v___jp_4199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4249_, lean_object* v_d_4250_, lean_object* v_a_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_4249_, v_d_4250_);
lean_dec_ref(v_context_4249_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(lean_object* v_context_4253_, lean_object* v_bytes_4254_){
_start:
{
lean_object* v___x_4256_; 
v___x_4256_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4254_);
if (lean_obj_tag(v___x_4256_) == 0)
{
lean_object* v_a_4257_; lean_object* v___x_4258_; 
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
lean_inc(v_a_4257_);
lean_dec_ref_known(v___x_4256_, 1);
v___x_4258_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1_spec__2(v_context_4253_, v_a_4257_);
return v___x_4258_;
}
else
{
lean_object* v_a_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4266_; 
v_a_4259_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4266_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4261_ = v___x_4256_;
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_a_4259_);
lean_dec(v___x_4256_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4266_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
lean_object* v___x_4264_; 
if (v_isShared_4262_ == 0)
{
v___x_4264_ = v___x_4261_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v_a_4259_);
v___x_4264_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
return v___x_4264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1___boxed(lean_object* v_context_4267_, lean_object* v_bytes_4268_, lean_object* v_a_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v_context_4267_, v_bytes_4268_);
lean_dec_ref(v_bytes_4268_);
lean_dec_ref(v_context_4267_);
return v_res_4270_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4271_; uint8_t v___x_4272_; uint64_t v___x_4273_; 
v___x_4271_ = 8ULL;
v___x_4272_ = 0;
v___x_4273_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__0(v___x_4272_, v___x_4271_);
return v___x_4273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(lean_object* v_o_4275_, lean_object* v_name_4276_, lean_object* v_args_4277_){
_start:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; uint64_t v___x_4282_; lean_object* v___x_4283_; 
v___x_4279_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_4280_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4280_, 0, v_o_4275_);
lean_ctor_set(v___x_4280_, 1, v___x_4279_);
lean_inc_ref(v_name_4276_);
v___x_4281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4281_, 0, v_name_4276_);
v___x_4282_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__0);
v___x_4283_ = l_Lasm_JS_Value_invokeRaw(v___x_4280_, v___x_4281_, v_args_4277_, v___x_4282_);
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
lean_inc(v_a_4284_);
lean_dec_ref_known(v___x_4283_, 1);
v___x_4285_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___closed__1));
v___x_4286_ = lean_string_append(v___x_4285_, v_name_4276_);
lean_dec_ref(v_name_4276_);
v___x_4287_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0_spec__1(v___x_4286_, v_a_4284_);
lean_dec(v_a_4284_);
lean_dec_ref(v___x_4286_);
return v___x_4287_;
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
lean_dec_ref(v_name_4276_);
v_a_4288_ = lean_ctor_get(v___x_4283_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4283_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v___x_4283_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_a_4288_);
lean_dec(v___x_4283_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0___boxed(lean_object* v_o_4296_, lean_object* v_name_4297_, lean_object* v_args_4298_, lean_object* v_a_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_o_4296_, v_name_4297_, v_args_4298_);
return v_res_4300_;
}
}
static lean_object* _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2(void){
_start:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4304_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__1));
v___x_4305_ = l_Lasm_JS_Web_Support_args(v___x_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(lean_object* v_self_4306_){
_start:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4308_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__0));
v___x_4309_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_4310_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_4306_, v___x_4308_, v___x_4309_);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___boxed(lean_object* v_self_4311_, lean_object* v_a_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Lasm_JS_Web_PointerEvent_getCoalescedEvents(v_self_4311_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents(lean_object* v_self_4315_){
_start:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4317_ = ((lean_object*)(l_Lasm_JS_Web_PointerEvent_getPredictedEvents___closed__0));
v___x_4318_ = lean_obj_once(&l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2, &l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2_once, _init_l_Lasm_JS_Web_PointerEvent_getCoalescedEvents___closed__2);
v___x_4319_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_PointerEvent_getCoalescedEvents_spec__0(v_self_4315_, v___x_4317_, v___x_4318_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PointerEvent_getPredictedEvents___boxed(lean_object* v_self_4320_, lean_object* v_a_4321_){
_start:
{
lean_object* v_res_4322_; 
v_res_4322_ = l_Lasm_JS_Web_PointerEvent_getPredictedEvents(v_self_4320_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f(lean_object* v_v_4329_){
_start:
{
lean_object* v___f_4331_; lean_object* v___x_4332_; 
v___f_4331_ = ((lean_object*)(l_Lasm_JS_Web_SubmitEvent_cast_x3f___closed__2));
lean_inc(v_v_4329_);
v___x_4332_ = l_Lasm_JS_Web_Support_isInstance(v___f_4331_, v_v_4329_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4346_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4335_ = v___x_4332_;
v_isShared_4336_ = v_isSharedCheck_4346_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_a_4333_);
lean_dec(v___x_4332_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4346_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
uint8_t v___x_4337_; 
v___x_4337_ = lean_unbox(v_a_4333_);
lean_dec(v_a_4333_);
if (v___x_4337_ == 0)
{
lean_object* v___x_4338_; lean_object* v___x_4340_; 
lean_dec(v_v_4329_);
v___x_4338_ = lean_box(0);
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 0, v___x_4338_);
v___x_4340_ = v___x_4335_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v___x_4338_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
else
{
lean_object* v___x_4342_; lean_object* v___x_4344_; 
v___x_4342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4342_, 0, v_v_4329_);
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 0, v___x_4342_);
v___x_4344_ = v___x_4335_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v___x_4342_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
lean_dec(v_v_4329_);
v_a_4347_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4332_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4332_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_cast_x3f___boxed(lean_object* v_v_4355_, lean_object* v_a_4356_){
_start:
{
lean_object* v_res_4357_; 
v_res_4357_ = l_Lasm_JS_Web_SubmitEvent_cast_x3f(v_v_4355_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(lean_object* v_context_4358_, lean_object* v_d_4359_){
_start:
{
lean_object* v___y_4362_; lean_object* v___y_4363_; 
if (lean_obj_tag(v_d_4359_) == 9)
{
lean_object* v_value_4367_; lean_object* v___x_4368_; 
v_value_4367_ = lean_ctor_get(v_d_4359_, 0);
lean_inc(v_value_4367_);
lean_dec_ref_known(v_d_4359_, 2);
v___x_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4368_, 0, v_value_4367_);
return v___x_4368_;
}
else
{
lean_object* v___x_4369_; lean_object* v_received_4371_; 
v___x_4369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4359_) == 9)
{
lean_object* v_value_4385_; lean_object* v_description_4386_; uint8_t v___x_4387_; 
v_value_4385_ = lean_ctor_get(v_d_4359_, 0);
v_description_4386_ = lean_ctor_get(v_d_4359_, 1);
v___x_4387_ = lean_string_dec_eq(v_description_4386_, v___x_4369_);
if (v___x_4387_ == 0)
{
goto v___jp_4383_;
}
else
{
uint32_t v___x_4388_; uint64_t v___x_4389_; lean_object* v___x_4390_; uint32_t v___x_4391_; lean_object* v___x_4392_; 
lean_inc_n(v_value_4385_, 2);
lean_dec_ref_known(v_d_4359_, 2);
v___x_4388_ = 206;
v___x_4389_ = 0ULL;
v___x_4390_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4390_, 0, v_value_4385_);
lean_ctor_set(v___x_4390_, 1, v___x_4369_);
v___x_4391_ = lasm_js_value_handle(v_value_4385_);
lean_dec(v_value_4385_);
v___x_4392_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4388_, v___x_4389_, v___x_4390_, v___x_4391_);
lean_dec_ref_known(v___x_4390_, 2);
if (lean_obj_tag(v___x_4392_) == 0)
{
lean_object* v_a_4393_; uint8_t v___x_4394_; 
v_a_4393_ = lean_ctor_get(v___x_4392_, 0);
lean_inc(v_a_4393_);
lean_dec_ref_known(v___x_4392_, 1);
v___x_4394_ = lean_string_validate_utf8(v_a_4393_);
if (v___x_4394_ == 0)
{
lean_object* v___x_4395_; lean_object* v___x_4396_; 
lean_dec(v_a_4393_);
v___x_4395_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4396_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4395_);
v_received_4371_ = v___x_4396_;
goto v___jp_4370_;
}
else
{
lean_object* v___x_4397_; 
v___x_4397_ = lean_string_from_utf8_unchecked(v_a_4393_);
v_received_4371_ = v___x_4397_;
goto v___jp_4370_;
}
}
else
{
lean_object* v___x_4398_; 
lean_dec_ref_known(v___x_4392_, 1);
v___x_4398_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4371_ = v___x_4398_;
goto v___jp_4370_;
}
}
}
else
{
goto v___jp_4383_;
}
v___jp_4370_:
{
lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; uint8_t v___x_4381_; 
v___x_4372_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4373_ = lean_string_append(v___x_4372_, v_context_4358_);
v___x_4374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4375_ = lean_string_append(v___x_4373_, v___x_4374_);
v___x_4376_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSSubmitEvent___closed__0));
v___x_4377_ = lean_string_append(v___x_4375_, v___x_4376_);
v___x_4378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4379_ = lean_string_append(v___x_4377_, v___x_4378_);
v___x_4380_ = lean_string_append(v___x_4379_, v_received_4371_);
lean_dec_ref(v_received_4371_);
v___x_4381_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4381_ == 0)
{
lean_object* v___x_4382_; 
v___x_4382_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4362_ = v___x_4380_;
v___y_4363_ = v___x_4382_;
goto v___jp_4361_;
}
else
{
v___y_4362_ = v___x_4380_;
v___y_4363_ = v___x_4369_;
goto v___jp_4361_;
}
}
v___jp_4383_:
{
lean_object* v___x_4384_; 
v___x_4384_ = l_Lasm_JS_Data_describe(v_d_4359_);
v_received_4371_ = v___x_4384_;
goto v___jp_4370_;
}
}
v___jp_4361_:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___x_4364_ = lean_string_append(v___y_4362_, v___y_4363_);
v___x_4365_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
v___x_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4365_);
return v___x_4366_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4399_, lean_object* v_d_4400_, lean_object* v_a_4401_){
_start:
{
lean_object* v_res_4402_; 
v_res_4402_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v_context_4399_, v_d_4400_);
lean_dec_ref(v_context_4399_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(lean_object* v_b_4403_, lean_object* v_args_4404_, uint8_t v_await_4405_){
_start:
{
uint64_t v___y_4408_; uint64_t v___y_4409_; uint64_t v___x_4452_; uint64_t v___y_4454_; 
v___x_4452_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4405_ == 0)
{
uint64_t v___x_4459_; 
v___x_4459_ = 0ULL;
v___y_4454_ = v___x_4459_;
goto v___jp_4453_;
}
else
{
uint64_t v___x_4460_; 
v___x_4460_ = 2ULL;
v___y_4454_ = v___x_4460_;
goto v___jp_4453_;
}
v___jp_4407_:
{
uint64_t v_flags_4410_; uint32_t v___x_4411_; lean_object* v___x_4412_; uint32_t v___x_4413_; lean_object* v___x_4414_; 
v_flags_4410_ = lean_uint64_lor(v___y_4408_, v___y_4409_);
v___x_4411_ = 214;
v___x_4412_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4403_, v_args_4404_);
v___x_4413_ = 0;
v___x_4414_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4411_, v_flags_4410_, v___x_4412_, v___x_4413_);
lean_dec(v___x_4412_);
if (lean_obj_tag(v___x_4414_) == 0)
{
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4416_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
lean_inc(v_a_4415_);
lean_dec_ref_known(v___x_4414_, 1);
v___x_4416_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4415_);
lean_dec(v_a_4415_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_object* v_a_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v_a_4417_ = lean_ctor_get(v___x_4416_, 0);
lean_inc(v_a_4417_);
lean_dec_ref_known(v___x_4416_, 1);
v___x_4418_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4403_);
v___x_4419_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1_spec__1(v___x_4418_, v_a_4417_);
lean_dec_ref(v___x_4418_);
return v___x_4419_;
}
else
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4427_; 
v_a_4420_ = lean_ctor_get(v___x_4416_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4416_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4422_ = v___x_4416_;
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v___x_4416_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4425_; 
if (v_isShared_4423_ == 0)
{
v___x_4425_ = v___x_4422_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v_a_4420_);
v___x_4425_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
return v___x_4425_;
}
}
}
}
else
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4435_; 
v_a_4428_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4430_ = v___x_4414_;
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4414_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4433_; 
if (v_isShared_4431_ == 0)
{
lean_ctor_set_tag(v___x_4430_, 1);
v___x_4433_ = v___x_4430_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4428_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
}
}
else
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4451_; 
v_a_4436_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4438_ = v___x_4414_;
v_isShared_4439_ = v_isSharedCheck_4451_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4414_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4451_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4449_; 
v___x_4440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4403_);
v___x_4442_ = lean_string_append(v___x_4440_, v___x_4441_);
lean_dec_ref(v___x_4441_);
v___x_4443_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4444_ = lean_string_append(v___x_4442_, v___x_4443_);
v___x_4445_ = lean_io_error_to_string(v_a_4436_);
v___x_4446_ = lean_string_append(v___x_4444_, v___x_4445_);
lean_dec_ref(v___x_4445_);
v___x_4447_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 0, v___x_4447_);
v___x_4449_ = v___x_4438_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v___x_4447_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
return v___x_4449_;
}
}
}
}
v___jp_4453_:
{
uint8_t v_construct_4455_; uint64_t v___x_4456_; 
v_construct_4455_ = lean_ctor_get_uint8(v_b_4403_, sizeof(void*)*4);
v___x_4456_ = lean_uint64_lor(v___x_4452_, v___y_4454_);
if (v_construct_4455_ == 0)
{
uint64_t v___x_4457_; 
v___x_4457_ = 0ULL;
v___y_4408_ = v___x_4456_;
v___y_4409_ = v___x_4457_;
goto v___jp_4407_;
}
else
{
uint64_t v___x_4458_; 
v___x_4458_ = 4ULL;
v___y_4408_ = v___x_4456_;
v___y_4409_ = v___x_4458_;
goto v___jp_4407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1___boxed(lean_object* v_b_4461_, lean_object* v_args_4462_, lean_object* v_await_4463_, lean_object* v_a_4464_){
_start:
{
uint8_t v_await_boxed_4465_; lean_object* v_res_4466_; 
v_await_boxed_4465_ = lean_unbox(v_await_4463_);
v_res_4466_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v_b_4461_, v_args_4462_, v_await_boxed_4465_);
lean_dec_ref(v_b_4461_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(lean_object* v_x_4467_){
_start:
{
if (lean_obj_tag(v_x_4467_) == 0)
{
lean_object* v___x_4468_; 
v___x_4468_ = lean_box(0);
return v___x_4468_;
}
else
{
lean_object* v_val_4469_; lean_object* v_bubbles_4470_; lean_object* v_cancelable_4471_; lean_object* v_composed_4472_; lean_object* v_submitter_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; 
v_val_4469_ = lean_ctor_get(v_x_4467_, 0);
v_bubbles_4470_ = lean_ctor_get(v_val_4469_, 0);
v_cancelable_4471_ = lean_ctor_get(v_val_4469_, 1);
v_composed_4472_ = lean_ctor_get(v_val_4469_, 2);
v_submitter_4473_ = lean_ctor_get(v_val_4469_, 3);
v___x_4474_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4475_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4470_);
v___x_4476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4476_, 0, v___x_4474_);
lean_ctor_set(v___x_4476_, 1, v___x_4475_);
v___x_4477_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4478_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4471_);
v___x_4479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4479_, 0, v___x_4477_);
lean_ctor_set(v___x_4479_, 1, v___x_4478_);
v___x_4480_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4481_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4472_);
v___x_4482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4480_);
lean_ctor_set(v___x_4482_, 1, v___x_4481_);
v___x_4483_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4484_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HTMLElement_showPopover_spec__0_spec__0(v_submitter_4473_);
v___x_4485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4483_);
lean_ctor_set(v___x_4485_, 1, v___x_4484_);
v___x_4486_ = lean_unsigned_to_nat(4u);
v___x_4487_ = lean_mk_empty_array_with_capacity(v___x_4486_);
v___x_4488_ = lean_array_push(v___x_4487_, v___x_4476_);
v___x_4489_ = lean_array_push(v___x_4488_, v___x_4479_);
v___x_4490_ = lean_array_push(v___x_4489_, v___x_4482_);
v___x_4491_ = lean_array_push(v___x_4490_, v___x_4485_);
v___x_4492_ = l_Lasm_JS_Web_Support_fields(v___x_4491_);
lean_dec_ref(v___x_4491_);
return v___x_4492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0___boxed(lean_object* v_x_4493_){
_start:
{
lean_object* v_res_4494_; 
v_res_4494_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_x_4493_);
lean_dec(v_x_4493_);
return v_res_4494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new(lean_object* v_type_4502_, lean_object* v_eventInitDict_4503_){
_start:
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; uint8_t v___x_4513_; lean_object* v___x_4514_; 
v___x_4505_ = lean_unsigned_to_nat(2u);
v___x_4506_ = ((lean_object*)(l_Lasm_JS_Web_SubmitEvent_new___closed__1));
v___x_4507_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4507_, 0, v_type_4502_);
v___x_4508_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_SubmitEvent_new_spec__0(v_eventInitDict_4503_);
v___x_4509_ = lean_mk_empty_array_with_capacity(v___x_4505_);
v___x_4510_ = lean_array_push(v___x_4509_, v___x_4507_);
v___x_4511_ = lean_array_push(v___x_4510_, v___x_4508_);
v___x_4512_ = l_Lasm_JS_Web_Support_args(v___x_4511_);
v___x_4513_ = 0;
v___x_4514_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_SubmitEvent_new_spec__1(v___x_4506_, v___x_4512_, v___x_4513_);
return v___x_4514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_new___boxed(lean_object* v_type_4515_, lean_object* v_eventInitDict_4516_, lean_object* v_a_4517_){
_start:
{
lean_object* v_res_4518_; 
v_res_4518_ = l_Lasm_JS_Web_SubmitEvent_new(v_type_4515_, v_eventInitDict_4516_);
lean_dec(v_eventInitDict_4516_);
return v_res_4518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter(lean_object* v_self_4519_){
_start:
{
lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4521_ = ((lean_object*)(l_Lasm_JS_Web_instToJSSubmitEventInit___lam__0___closed__0));
v___x_4522_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Document_body_spec__0(v_self_4519_, v___x_4521_);
return v___x_4522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_SubmitEvent_submitter___boxed(lean_object* v_self_4523_, lean_object* v_a_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l_Lasm_JS_Web_SubmitEvent_submitter(v_self_4523_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f(lean_object* v_v_4532_){
_start:
{
lean_object* v___f_4534_; lean_object* v___x_4535_; 
v___f_4534_ = ((lean_object*)(l_Lasm_JS_Web_HashChangeEvent_cast_x3f___closed__2));
lean_inc(v_v_4532_);
v___x_4535_ = l_Lasm_JS_Web_Support_isInstance(v___f_4534_, v_v_4532_);
if (lean_obj_tag(v___x_4535_) == 0)
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4549_; 
v_a_4536_ = lean_ctor_get(v___x_4535_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4535_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4538_ = v___x_4535_;
v_isShared_4539_ = v_isSharedCheck_4549_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v___x_4535_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4549_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
uint8_t v___x_4540_; 
v___x_4540_ = lean_unbox(v_a_4536_);
lean_dec(v_a_4536_);
if (v___x_4540_ == 0)
{
lean_object* v___x_4541_; lean_object* v___x_4543_; 
lean_dec(v_v_4532_);
v___x_4541_ = lean_box(0);
if (v_isShared_4539_ == 0)
{
lean_ctor_set(v___x_4538_, 0, v___x_4541_);
v___x_4543_ = v___x_4538_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v___x_4541_);
v___x_4543_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
return v___x_4543_;
}
}
else
{
lean_object* v___x_4545_; lean_object* v___x_4547_; 
v___x_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4545_, 0, v_v_4532_);
if (v_isShared_4539_ == 0)
{
lean_ctor_set(v___x_4538_, 0, v___x_4545_);
v___x_4547_ = v___x_4538_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v___x_4545_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
lean_dec(v_v_4532_);
v_a_4550_ = lean_ctor_get(v___x_4535_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4535_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4535_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4535_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_cast_x3f___boxed(lean_object* v_v_4558_, lean_object* v_a_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lasm_JS_Web_HashChangeEvent_cast_x3f(v_v_4558_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(lean_object* v_x_4561_){
_start:
{
if (lean_obj_tag(v_x_4561_) == 0)
{
lean_object* v___x_4562_; 
v___x_4562_ = lean_box(0);
return v___x_4562_;
}
else
{
lean_object* v_val_4563_; lean_object* v_bubbles_4564_; lean_object* v_cancelable_4565_; lean_object* v_composed_4566_; lean_object* v_oldURL_4567_; lean_object* v_newURL_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v_val_4563_ = lean_ctor_get(v_x_4561_, 0);
lean_inc(v_val_4563_);
lean_dec_ref_known(v_x_4561_, 1);
v_bubbles_4564_ = lean_ctor_get(v_val_4563_, 0);
lean_inc(v_bubbles_4564_);
v_cancelable_4565_ = lean_ctor_get(v_val_4563_, 1);
lean_inc(v_cancelable_4565_);
v_composed_4566_ = lean_ctor_get(v_val_4563_, 2);
lean_inc(v_composed_4566_);
v_oldURL_4567_ = lean_ctor_get(v_val_4563_, 3);
lean_inc(v_oldURL_4567_);
v_newURL_4568_ = lean_ctor_get(v_val_4563_, 4);
lean_inc(v_newURL_4568_);
lean_dec(v_val_4563_);
v___x_4569_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4570_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4564_);
lean_dec(v_bubbles_4564_);
v___x_4571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4569_);
lean_ctor_set(v___x_4571_, 1, v___x_4570_);
v___x_4572_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4573_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4565_);
lean_dec(v_cancelable_4565_);
v___x_4574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4574_, 0, v___x_4572_);
lean_ctor_set(v___x_4574_, 1, v___x_4573_);
v___x_4575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4576_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4566_);
lean_dec(v_composed_4566_);
v___x_4577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4575_);
lean_ctor_set(v___x_4577_, 1, v___x_4576_);
v___x_4578_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4579_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldURL_4567_);
v___x_4580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4580_, 0, v___x_4578_);
lean_ctor_set(v___x_4580_, 1, v___x_4579_);
v___x_4581_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4582_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newURL_4568_);
v___x_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4583_, 0, v___x_4581_);
lean_ctor_set(v___x_4583_, 1, v___x_4582_);
v___x_4584_ = lean_unsigned_to_nat(5u);
v___x_4585_ = lean_mk_empty_array_with_capacity(v___x_4584_);
v___x_4586_ = lean_array_push(v___x_4585_, v___x_4571_);
v___x_4587_ = lean_array_push(v___x_4586_, v___x_4574_);
v___x_4588_ = lean_array_push(v___x_4587_, v___x_4577_);
v___x_4589_ = lean_array_push(v___x_4588_, v___x_4580_);
v___x_4590_ = lean_array_push(v___x_4589_, v___x_4583_);
v___x_4591_ = l_Lasm_JS_Web_Support_fields(v___x_4590_);
lean_dec_ref(v___x_4590_);
return v___x_4591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(lean_object* v_context_4592_, lean_object* v_d_4593_){
_start:
{
lean_object* v___y_4596_; lean_object* v___y_4597_; 
if (lean_obj_tag(v_d_4593_) == 9)
{
lean_object* v_value_4601_; lean_object* v___x_4602_; 
v_value_4601_ = lean_ctor_get(v_d_4593_, 0);
lean_inc(v_value_4601_);
lean_dec_ref_known(v_d_4593_, 2);
v___x_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4602_, 0, v_value_4601_);
return v___x_4602_;
}
else
{
lean_object* v___x_4603_; lean_object* v_received_4605_; 
v___x_4603_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4593_) == 9)
{
lean_object* v_value_4619_; lean_object* v_description_4620_; uint8_t v___x_4621_; 
v_value_4619_ = lean_ctor_get(v_d_4593_, 0);
v_description_4620_ = lean_ctor_get(v_d_4593_, 1);
v___x_4621_ = lean_string_dec_eq(v_description_4620_, v___x_4603_);
if (v___x_4621_ == 0)
{
goto v___jp_4617_;
}
else
{
uint32_t v___x_4622_; uint64_t v___x_4623_; lean_object* v___x_4624_; uint32_t v___x_4625_; lean_object* v___x_4626_; 
lean_inc_n(v_value_4619_, 2);
lean_dec_ref_known(v_d_4593_, 2);
v___x_4622_ = 206;
v___x_4623_ = 0ULL;
v___x_4624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4624_, 0, v_value_4619_);
lean_ctor_set(v___x_4624_, 1, v___x_4603_);
v___x_4625_ = lasm_js_value_handle(v_value_4619_);
lean_dec(v_value_4619_);
v___x_4626_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4622_, v___x_4623_, v___x_4624_, v___x_4625_);
lean_dec_ref_known(v___x_4624_, 2);
if (lean_obj_tag(v___x_4626_) == 0)
{
lean_object* v_a_4627_; uint8_t v___x_4628_; 
v_a_4627_ = lean_ctor_get(v___x_4626_, 0);
lean_inc(v_a_4627_);
lean_dec_ref_known(v___x_4626_, 1);
v___x_4628_ = lean_string_validate_utf8(v_a_4627_);
if (v___x_4628_ == 0)
{
lean_object* v___x_4629_; lean_object* v___x_4630_; 
lean_dec(v_a_4627_);
v___x_4629_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4630_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4629_);
v_received_4605_ = v___x_4630_;
goto v___jp_4604_;
}
else
{
lean_object* v___x_4631_; 
v___x_4631_ = lean_string_from_utf8_unchecked(v_a_4627_);
v_received_4605_ = v___x_4631_;
goto v___jp_4604_;
}
}
else
{
lean_object* v___x_4632_; 
lean_dec_ref_known(v___x_4626_, 1);
v___x_4632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4605_ = v___x_4632_;
goto v___jp_4604_;
}
}
}
else
{
goto v___jp_4617_;
}
v___jp_4604_:
{
lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; uint8_t v___x_4615_; 
v___x_4606_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4607_ = lean_string_append(v___x_4606_, v_context_4592_);
v___x_4608_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4609_ = lean_string_append(v___x_4607_, v___x_4608_);
v___x_4610_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSHashChangeEvent___closed__0));
v___x_4611_ = lean_string_append(v___x_4609_, v___x_4610_);
v___x_4612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4613_ = lean_string_append(v___x_4611_, v___x_4612_);
v___x_4614_ = lean_string_append(v___x_4613_, v_received_4605_);
lean_dec_ref(v_received_4605_);
v___x_4615_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4615_ == 0)
{
lean_object* v___x_4616_; 
v___x_4616_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4596_ = v___x_4614_;
v___y_4597_ = v___x_4616_;
goto v___jp_4595_;
}
else
{
v___y_4596_ = v___x_4614_;
v___y_4597_ = v___x_4603_;
goto v___jp_4595_;
}
}
v___jp_4617_:
{
lean_object* v___x_4618_; 
v___x_4618_ = l_Lasm_JS_Data_describe(v_d_4593_);
v_received_4605_ = v___x_4618_;
goto v___jp_4604_;
}
}
v___jp_4595_:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4598_ = lean_string_append(v___y_4596_, v___y_4597_);
v___x_4599_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
v___x_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
return v___x_4600_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4633_, lean_object* v_d_4634_, lean_object* v_a_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v_context_4633_, v_d_4634_);
lean_dec_ref(v_context_4633_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(lean_object* v_b_4637_, lean_object* v_args_4638_, uint8_t v_await_4639_){
_start:
{
uint64_t v___y_4642_; uint64_t v___y_4643_; uint64_t v___x_4686_; uint64_t v___y_4688_; 
v___x_4686_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4639_ == 0)
{
uint64_t v___x_4693_; 
v___x_4693_ = 0ULL;
v___y_4688_ = v___x_4693_;
goto v___jp_4687_;
}
else
{
uint64_t v___x_4694_; 
v___x_4694_ = 2ULL;
v___y_4688_ = v___x_4694_;
goto v___jp_4687_;
}
v___jp_4641_:
{
uint64_t v_flags_4644_; uint32_t v___x_4645_; lean_object* v___x_4646_; uint32_t v___x_4647_; lean_object* v___x_4648_; 
v_flags_4644_ = lean_uint64_lor(v___y_4642_, v___y_4643_);
v___x_4645_ = 214;
v___x_4646_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4637_, v_args_4638_);
v___x_4647_ = 0;
v___x_4648_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4645_, v_flags_4644_, v___x_4646_, v___x_4647_);
lean_dec(v___x_4646_);
if (lean_obj_tag(v___x_4648_) == 0)
{
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; lean_object* v___x_4650_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4649_);
lean_dec_ref_known(v___x_4648_, 1);
v___x_4650_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4649_);
lean_dec(v_a_4649_);
if (lean_obj_tag(v___x_4650_) == 0)
{
lean_object* v_a_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; 
v_a_4651_ = lean_ctor_get(v___x_4650_, 0);
lean_inc(v_a_4651_);
lean_dec_ref_known(v___x_4650_, 1);
v___x_4652_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4637_);
v___x_4653_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1_spec__1(v___x_4652_, v_a_4651_);
lean_dec_ref(v___x_4652_);
return v___x_4653_;
}
else
{
lean_object* v_a_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4661_; 
v_a_4654_ = lean_ctor_get(v___x_4650_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4656_ = v___x_4650_;
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_a_4654_);
lean_dec(v___x_4650_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v___x_4659_; 
if (v_isShared_4657_ == 0)
{
v___x_4659_ = v___x_4656_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_a_4654_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
else
{
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4669_; 
v_a_4662_ = lean_ctor_get(v___x_4648_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4648_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4664_ = v___x_4648_;
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4648_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4667_; 
if (v_isShared_4665_ == 0)
{
lean_ctor_set_tag(v___x_4664_, 1);
v___x_4667_ = v___x_4664_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4662_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
else
{
lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4685_; 
v_a_4670_ = lean_ctor_get(v___x_4648_, 0);
v_isSharedCheck_4685_ = !lean_is_exclusive(v___x_4648_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4672_ = v___x_4648_;
v_isShared_4673_ = v_isSharedCheck_4685_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v___x_4648_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4685_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4683_; 
v___x_4674_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4675_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4637_);
v___x_4676_ = lean_string_append(v___x_4674_, v___x_4675_);
lean_dec_ref(v___x_4675_);
v___x_4677_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4678_ = lean_string_append(v___x_4676_, v___x_4677_);
v___x_4679_ = lean_io_error_to_string(v_a_4670_);
v___x_4680_ = lean_string_append(v___x_4678_, v___x_4679_);
lean_dec_ref(v___x_4679_);
v___x_4681_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4681_, 0, v___x_4680_);
if (v_isShared_4673_ == 0)
{
lean_ctor_set(v___x_4672_, 0, v___x_4681_);
v___x_4683_ = v___x_4672_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v___x_4681_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
}
}
v___jp_4687_:
{
uint8_t v_construct_4689_; uint64_t v___x_4690_; 
v_construct_4689_ = lean_ctor_get_uint8(v_b_4637_, sizeof(void*)*4);
v___x_4690_ = lean_uint64_lor(v___x_4686_, v___y_4688_);
if (v_construct_4689_ == 0)
{
uint64_t v___x_4691_; 
v___x_4691_ = 0ULL;
v___y_4642_ = v___x_4690_;
v___y_4643_ = v___x_4691_;
goto v___jp_4641_;
}
else
{
uint64_t v___x_4692_; 
v___x_4692_ = 4ULL;
v___y_4642_ = v___x_4690_;
v___y_4643_ = v___x_4692_;
goto v___jp_4641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1___boxed(lean_object* v_b_4695_, lean_object* v_args_4696_, lean_object* v_await_4697_, lean_object* v_a_4698_){
_start:
{
uint8_t v_await_boxed_4699_; lean_object* v_res_4700_; 
v_await_boxed_4699_ = lean_unbox(v_await_4697_);
v_res_4700_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v_b_4695_, v_args_4696_, v_await_boxed_4699_);
lean_dec_ref(v_b_4695_);
return v_res_4700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new(lean_object* v_type_4708_, lean_object* v_eventInitDict_4709_){
_start:
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; uint8_t v___x_4719_; lean_object* v___x_4720_; 
v___x_4711_ = lean_unsigned_to_nat(2u);
v___x_4712_ = ((lean_object*)(l_Lasm_JS_Web_HashChangeEvent_new___closed__1));
v___x_4713_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4713_, 0, v_type_4708_);
v___x_4714_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_HashChangeEvent_new_spec__0(v_eventInitDict_4709_);
v___x_4715_ = lean_mk_empty_array_with_capacity(v___x_4711_);
v___x_4716_ = lean_array_push(v___x_4715_, v___x_4713_);
v___x_4717_ = lean_array_push(v___x_4716_, v___x_4714_);
v___x_4718_ = l_Lasm_JS_Web_Support_args(v___x_4717_);
v___x_4719_ = 0;
v___x_4720_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_HashChangeEvent_new_spec__1(v___x_4712_, v___x_4718_, v___x_4719_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_new___boxed(lean_object* v_type_4721_, lean_object* v_eventInitDict_4722_, lean_object* v_a_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l_Lasm_JS_Web_HashChangeEvent_new(v_type_4721_, v_eventInitDict_4722_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL(lean_object* v_self_4725_){
_start:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; 
v___x_4727_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__0));
v___x_4728_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4725_, v___x_4727_);
return v___x_4728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_oldURL___boxed(lean_object* v_self_4729_, lean_object* v_a_4730_){
_start:
{
lean_object* v_res_4731_; 
v_res_4731_ = l_Lasm_JS_Web_HashChangeEvent_oldURL(v_self_4729_);
return v_res_4731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL(lean_object* v_self_4732_){
_start:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
v___x_4734_ = ((lean_object*)(l_Lasm_JS_Web_instToJSHashChangeEventInit___lam__0___closed__1));
v___x_4735_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4732_, v___x_4734_);
return v___x_4735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HashChangeEvent_newURL___boxed(lean_object* v_self_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l_Lasm_JS_Web_HashChangeEvent_newURL(v_self_4736_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f(lean_object* v_v_4745_){
_start:
{
lean_object* v___f_4747_; lean_object* v___x_4748_; 
v___f_4747_ = ((lean_object*)(l_Lasm_JS_Web_PopStateEvent_cast_x3f___closed__2));
lean_inc(v_v_4745_);
v___x_4748_ = l_Lasm_JS_Web_Support_isInstance(v___f_4747_, v_v_4745_);
if (lean_obj_tag(v___x_4748_) == 0)
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4762_; 
v_a_4749_ = lean_ctor_get(v___x_4748_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4748_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4751_ = v___x_4748_;
v_isShared_4752_ = v_isSharedCheck_4762_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4748_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4762_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
uint8_t v___x_4753_; 
v___x_4753_ = lean_unbox(v_a_4749_);
lean_dec(v_a_4749_);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; lean_object* v___x_4756_; 
lean_dec(v_v_4745_);
v___x_4754_ = lean_box(0);
if (v_isShared_4752_ == 0)
{
lean_ctor_set(v___x_4751_, 0, v___x_4754_);
v___x_4756_ = v___x_4751_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4757_; 
v_reuseFailAlloc_4757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4757_, 0, v___x_4754_);
v___x_4756_ = v_reuseFailAlloc_4757_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
return v___x_4756_;
}
}
else
{
lean_object* v___x_4758_; lean_object* v___x_4760_; 
v___x_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4758_, 0, v_v_4745_);
if (v_isShared_4752_ == 0)
{
lean_ctor_set(v___x_4751_, 0, v___x_4758_);
v___x_4760_ = v___x_4751_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v___x_4758_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
else
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4770_; 
lean_dec(v_v_4745_);
v_a_4763_ = lean_ctor_get(v___x_4748_, 0);
v_isSharedCheck_4770_ = !lean_is_exclusive(v___x_4748_);
if (v_isSharedCheck_4770_ == 0)
{
v___x_4765_ = v___x_4748_;
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v___x_4748_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_cast_x3f___boxed(lean_object* v_v_4771_, lean_object* v_a_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lasm_JS_Web_PopStateEvent_cast_x3f(v_v_4771_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(lean_object* v_context_4774_, lean_object* v_d_4775_){
_start:
{
lean_object* v___y_4778_; lean_object* v___y_4779_; 
if (lean_obj_tag(v_d_4775_) == 9)
{
lean_object* v_value_4783_; lean_object* v___x_4784_; 
v_value_4783_ = lean_ctor_get(v_d_4775_, 0);
lean_inc(v_value_4783_);
lean_dec_ref_known(v_d_4775_, 2);
v___x_4784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4784_, 0, v_value_4783_);
return v___x_4784_;
}
else
{
lean_object* v___x_4785_; lean_object* v_received_4787_; 
v___x_4785_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_4775_) == 9)
{
lean_object* v_value_4801_; lean_object* v_description_4802_; uint8_t v___x_4803_; 
v_value_4801_ = lean_ctor_get(v_d_4775_, 0);
v_description_4802_ = lean_ctor_get(v_d_4775_, 1);
v___x_4803_ = lean_string_dec_eq(v_description_4802_, v___x_4785_);
if (v___x_4803_ == 0)
{
goto v___jp_4799_;
}
else
{
uint32_t v___x_4804_; uint64_t v___x_4805_; lean_object* v___x_4806_; uint32_t v___x_4807_; lean_object* v___x_4808_; 
lean_inc_n(v_value_4801_, 2);
lean_dec_ref_known(v_d_4775_, 2);
v___x_4804_ = 206;
v___x_4805_ = 0ULL;
v___x_4806_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4806_, 0, v_value_4801_);
lean_ctor_set(v___x_4806_, 1, v___x_4785_);
v___x_4807_ = lasm_js_value_handle(v_value_4801_);
lean_dec(v_value_4801_);
v___x_4808_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4804_, v___x_4805_, v___x_4806_, v___x_4807_);
lean_dec_ref_known(v___x_4806_, 2);
if (lean_obj_tag(v___x_4808_) == 0)
{
lean_object* v_a_4809_; uint8_t v___x_4810_; 
v_a_4809_ = lean_ctor_get(v___x_4808_, 0);
lean_inc(v_a_4809_);
lean_dec_ref_known(v___x_4808_, 1);
v___x_4810_ = lean_string_validate_utf8(v_a_4809_);
if (v___x_4810_ == 0)
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_dec(v_a_4809_);
v___x_4811_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_4812_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4811_);
v_received_4787_ = v___x_4812_;
goto v___jp_4786_;
}
else
{
lean_object* v___x_4813_; 
v___x_4813_ = lean_string_from_utf8_unchecked(v_a_4809_);
v_received_4787_ = v___x_4813_;
goto v___jp_4786_;
}
}
else
{
lean_object* v___x_4814_; 
lean_dec_ref_known(v___x_4808_, 1);
v___x_4814_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_4787_ = v___x_4814_;
goto v___jp_4786_;
}
}
}
else
{
goto v___jp_4799_;
}
v___jp_4786_:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; uint8_t v___x_4797_; 
v___x_4788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4789_ = lean_string_append(v___x_4788_, v_context_4774_);
v___x_4790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_4791_ = lean_string_append(v___x_4789_, v___x_4790_);
v___x_4792_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSPopStateEvent___closed__0));
v___x_4793_ = lean_string_append(v___x_4791_, v___x_4792_);
v___x_4794_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_4795_ = lean_string_append(v___x_4793_, v___x_4794_);
v___x_4796_ = lean_string_append(v___x_4795_, v_received_4787_);
lean_dec_ref(v_received_4787_);
v___x_4797_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_4797_ == 0)
{
lean_object* v___x_4798_; 
v___x_4798_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_4778_ = v___x_4796_;
v___y_4779_ = v___x_4798_;
goto v___jp_4777_;
}
else
{
v___y_4778_ = v___x_4796_;
v___y_4779_ = v___x_4785_;
goto v___jp_4777_;
}
}
v___jp_4799_:
{
lean_object* v___x_4800_; 
v___x_4800_ = l_Lasm_JS_Data_describe(v_d_4775_);
v_received_4787_ = v___x_4800_;
goto v___jp_4786_;
}
}
v___jp_4777_:
{
lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v___x_4780_ = lean_string_append(v___y_4778_, v___y_4779_);
v___x_4781_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
v___x_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4782_, 0, v___x_4781_);
return v___x_4782_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1___boxed(lean_object* v_context_4815_, lean_object* v_d_4816_, lean_object* v_a_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v_context_4815_, v_d_4816_);
lean_dec_ref(v_context_4815_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(lean_object* v_b_4819_, lean_object* v_args_4820_, uint8_t v_await_4821_){
_start:
{
uint64_t v___y_4824_; uint64_t v___y_4825_; uint64_t v___x_4868_; uint64_t v___y_4870_; 
v___x_4868_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_4821_ == 0)
{
uint64_t v___x_4875_; 
v___x_4875_ = 0ULL;
v___y_4870_ = v___x_4875_;
goto v___jp_4869_;
}
else
{
uint64_t v___x_4876_; 
v___x_4876_ = 2ULL;
v___y_4870_ = v___x_4876_;
goto v___jp_4869_;
}
v___jp_4823_:
{
uint64_t v_flags_4826_; uint32_t v___x_4827_; lean_object* v___x_4828_; uint32_t v___x_4829_; lean_object* v___x_4830_; 
v_flags_4826_ = lean_uint64_lor(v___y_4824_, v___y_4825_);
v___x_4827_ = 214;
v___x_4828_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4819_, v_args_4820_);
v___x_4829_ = 0;
v___x_4830_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4827_, v_flags_4826_, v___x_4828_, v___x_4829_);
lean_dec(v___x_4828_);
if (lean_obj_tag(v___x_4830_) == 0)
{
if (lean_obj_tag(v___x_4830_) == 0)
{
lean_object* v_a_4831_; lean_object* v___x_4832_; 
v_a_4831_ = lean_ctor_get(v___x_4830_, 0);
lean_inc(v_a_4831_);
lean_dec_ref_known(v___x_4830_, 1);
v___x_4832_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4831_);
lean_dec(v_a_4831_);
if (lean_obj_tag(v___x_4832_) == 0)
{
lean_object* v_a_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v_a_4833_ = lean_ctor_get(v___x_4832_, 0);
lean_inc(v_a_4833_);
lean_dec_ref_known(v___x_4832_, 1);
v___x_4834_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4819_);
v___x_4835_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1_spec__1(v___x_4834_, v_a_4833_);
lean_dec_ref(v___x_4834_);
return v___x_4835_;
}
else
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
v_a_4836_ = lean_ctor_get(v___x_4832_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4832_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4832_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4832_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
v_a_4844_ = lean_ctor_get(v___x_4830_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4830_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4830_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4830_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set_tag(v___x_4846_, 1);
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
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4867_; 
v_a_4852_ = lean_ctor_get(v___x_4830_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4830_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4854_ = v___x_4830_;
v_isShared_4855_ = v_isSharedCheck_4867_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4830_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4867_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4865_; 
v___x_4856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_4857_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4819_);
v___x_4858_ = lean_string_append(v___x_4856_, v___x_4857_);
lean_dec_ref(v___x_4857_);
v___x_4859_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_4860_ = lean_string_append(v___x_4858_, v___x_4859_);
v___x_4861_ = lean_io_error_to_string(v_a_4852_);
v___x_4862_ = lean_string_append(v___x_4860_, v___x_4861_);
lean_dec_ref(v___x_4861_);
v___x_4863_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4863_, 0, v___x_4862_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 0, v___x_4863_);
v___x_4865_ = v___x_4854_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v___x_4863_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
return v___x_4865_;
}
}
}
}
v___jp_4869_:
{
uint8_t v_construct_4871_; uint64_t v___x_4872_; 
v_construct_4871_ = lean_ctor_get_uint8(v_b_4819_, sizeof(void*)*4);
v___x_4872_ = lean_uint64_lor(v___x_4868_, v___y_4870_);
if (v_construct_4871_ == 0)
{
uint64_t v___x_4873_; 
v___x_4873_ = 0ULL;
v___y_4824_ = v___x_4872_;
v___y_4825_ = v___x_4873_;
goto v___jp_4823_;
}
else
{
uint64_t v___x_4874_; 
v___x_4874_ = 4ULL;
v___y_4824_ = v___x_4872_;
v___y_4825_ = v___x_4874_;
goto v___jp_4823_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1___boxed(lean_object* v_b_4877_, lean_object* v_args_4878_, lean_object* v_await_4879_, lean_object* v_a_4880_){
_start:
{
uint8_t v_await_boxed_4881_; lean_object* v_res_4882_; 
v_await_boxed_4881_ = lean_unbox(v_await_4879_);
v_res_4882_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v_b_4877_, v_args_4878_, v_await_boxed_4881_);
lean_dec_ref(v_b_4877_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(lean_object* v_x_4883_){
_start:
{
if (lean_obj_tag(v_x_4883_) == 0)
{
lean_object* v___x_4884_; 
v___x_4884_ = lean_box(0);
return v___x_4884_;
}
else
{
lean_object* v_val_4885_; lean_object* v_bubbles_4886_; lean_object* v_cancelable_4887_; lean_object* v_composed_4888_; lean_object* v_state_4889_; lean_object* v_hasUAVisualTransition_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
v_val_4885_ = lean_ctor_get(v_x_4883_, 0);
v_bubbles_4886_ = lean_ctor_get(v_val_4885_, 0);
v_cancelable_4887_ = lean_ctor_get(v_val_4885_, 1);
v_composed_4888_ = lean_ctor_get(v_val_4885_, 2);
v_state_4889_ = lean_ctor_get(v_val_4885_, 3);
v_hasUAVisualTransition_4890_ = lean_ctor_get(v_val_4885_, 4);
v___x_4891_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_4892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4886_);
v___x_4893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4893_, 0, v___x_4891_);
lean_ctor_set(v___x_4893_, 1, v___x_4892_);
v___x_4894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_4895_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4887_);
v___x_4896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4896_, 0, v___x_4894_);
lean_ctor_set(v___x_4896_, 1, v___x_4895_);
v___x_4897_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_4898_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_4888_);
v___x_4899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4897_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
lean_inc(v_state_4889_);
v___x_4901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4901_, 0, v___x_4900_);
lean_ctor_set(v___x_4901_, 1, v_state_4889_);
v___x_4902_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_hasUAVisualTransition_4890_);
v___x_4904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4902_);
lean_ctor_set(v___x_4904_, 1, v___x_4903_);
v___x_4905_ = lean_unsigned_to_nat(5u);
v___x_4906_ = lean_mk_empty_array_with_capacity(v___x_4905_);
v___x_4907_ = lean_array_push(v___x_4906_, v___x_4893_);
v___x_4908_ = lean_array_push(v___x_4907_, v___x_4896_);
v___x_4909_ = lean_array_push(v___x_4908_, v___x_4899_);
v___x_4910_ = lean_array_push(v___x_4909_, v___x_4901_);
v___x_4911_ = lean_array_push(v___x_4910_, v___x_4904_);
v___x_4912_ = l_Lasm_JS_Web_Support_fields(v___x_4911_);
lean_dec_ref(v___x_4911_);
return v___x_4912_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0___boxed(lean_object* v_x_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_x_4913_);
lean_dec(v_x_4913_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new(lean_object* v_type_4922_, lean_object* v_eventInitDict_4923_){
_start:
{
lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; uint8_t v___x_4933_; lean_object* v___x_4934_; 
v___x_4925_ = lean_unsigned_to_nat(2u);
v___x_4926_ = ((lean_object*)(l_Lasm_JS_Web_PopStateEvent_new___closed__1));
v___x_4927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4927_, 0, v_type_4922_);
v___x_4928_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_PopStateEvent_new_spec__0(v_eventInitDict_4923_);
v___x_4929_ = lean_mk_empty_array_with_capacity(v___x_4925_);
v___x_4930_ = lean_array_push(v___x_4929_, v___x_4927_);
v___x_4931_ = lean_array_push(v___x_4930_, v___x_4928_);
v___x_4932_ = l_Lasm_JS_Web_Support_args(v___x_4931_);
v___x_4933_ = 0;
v___x_4934_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_PopStateEvent_new_spec__1(v___x_4926_, v___x_4932_, v___x_4933_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_new___boxed(lean_object* v_type_4935_, lean_object* v_eventInitDict_4936_, lean_object* v_a_4937_){
_start:
{
lean_object* v_res_4938_; 
v_res_4938_ = l_Lasm_JS_Web_PopStateEvent_new(v_type_4935_, v_eventInitDict_4936_);
lean_dec(v_eventInitDict_4936_);
return v_res_4938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state(lean_object* v_self_4939_){
_start:
{
lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4941_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__0));
v___x_4942_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4939_, v___x_4941_);
return v___x_4942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_state___boxed(lean_object* v_self_4943_, lean_object* v_a_4944_){
_start:
{
lean_object* v_res_4945_; 
v_res_4945_ = l_Lasm_JS_Web_PopStateEvent_state(v_self_4943_);
return v_res_4945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(lean_object* v_self_4946_){
_start:
{
lean_object* v___x_4948_; lean_object* v___x_4949_; 
v___x_4948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSPopStateEventInit___lam__0___closed__1));
v___x_4949_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4946_, v___x_4948_);
return v___x_4949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition___boxed(lean_object* v_self_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_Lasm_JS_Web_PopStateEvent_hasUAVisualTransition(v_self_4950_);
return v_res_4952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f(lean_object* v_v_4959_){
_start:
{
lean_object* v___f_4961_; lean_object* v___x_4962_; 
v___f_4961_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_cast_x3f___closed__2));
lean_inc(v_v_4959_);
v___x_4962_ = l_Lasm_JS_Web_Support_isInstance(v___f_4961_, v_v_4959_);
if (lean_obj_tag(v___x_4962_) == 0)
{
lean_object* v_a_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_4976_; 
v_a_4963_ = lean_ctor_get(v___x_4962_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4965_ = v___x_4962_;
v_isShared_4966_ = v_isSharedCheck_4976_;
goto v_resetjp_4964_;
}
else
{
lean_inc(v_a_4963_);
lean_dec(v___x_4962_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_4976_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
uint8_t v___x_4967_; 
v___x_4967_ = lean_unbox(v_a_4963_);
lean_dec(v_a_4963_);
if (v___x_4967_ == 0)
{
lean_object* v___x_4968_; lean_object* v___x_4970_; 
lean_dec(v_v_4959_);
v___x_4968_ = lean_box(0);
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 0, v___x_4968_);
v___x_4970_ = v___x_4965_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v___x_4968_);
v___x_4970_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
return v___x_4970_;
}
}
else
{
lean_object* v___x_4972_; lean_object* v___x_4974_; 
v___x_4972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4972_, 0, v_v_4959_);
if (v_isShared_4966_ == 0)
{
lean_ctor_set(v___x_4965_, 0, v___x_4972_);
v___x_4974_ = v___x_4965_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v___x_4972_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
return v___x_4974_;
}
}
}
}
else
{
lean_object* v_a_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
lean_dec(v_v_4959_);
v_a_4977_ = lean_ctor_get(v___x_4962_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4979_ = v___x_4962_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_a_4977_);
lean_dec(v___x_4962_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4977_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_cast_x3f___boxed(lean_object* v_v_4985_, lean_object* v_a_4986_){
_start:
{
lean_object* v_res_4987_; 
v_res_4987_ = l_Lasm_JS_Web_StorageEvent_cast_x3f(v_v_4985_);
return v_res_4987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(lean_object* v_x_4988_){
_start:
{
if (lean_obj_tag(v_x_4988_) == 0)
{
lean_object* v___x_4989_; 
v___x_4989_ = lean_box(0);
return v___x_4989_;
}
else
{
lean_object* v_val_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; 
v_val_4990_ = lean_ctor_get(v_x_4988_, 0);
v___x_4991_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
lean_inc(v_val_4990_);
v___x_4992_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4992_, 0, v_val_4990_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
return v___x_4992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0___boxed(lean_object* v_x_4993_){
_start:
{
lean_object* v_res_4994_; 
v_res_4994_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_x_4993_);
lean_dec(v_x_4993_);
return v_res_4994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(lean_object* v_x_4995_){
_start:
{
if (lean_obj_tag(v_x_4995_) == 0)
{
lean_object* v___x_4996_; 
v___x_4996_ = lean_box(0);
return v___x_4996_;
}
else
{
lean_object* v_val_4997_; lean_object* v_bubbles_4998_; lean_object* v_cancelable_4999_; lean_object* v_composed_5000_; lean_object* v_key_5001_; lean_object* v_oldValue_5002_; lean_object* v_newValue_5003_; lean_object* v_url_5004_; lean_object* v_storageArea_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v_val_4997_ = lean_ctor_get(v_x_4995_, 0);
lean_inc(v_val_4997_);
lean_dec_ref_known(v_x_4995_, 1);
v_bubbles_4998_ = lean_ctor_get(v_val_4997_, 0);
lean_inc(v_bubbles_4998_);
v_cancelable_4999_ = lean_ctor_get(v_val_4997_, 1);
lean_inc(v_cancelable_4999_);
v_composed_5000_ = lean_ctor_get(v_val_4997_, 2);
lean_inc(v_composed_5000_);
v_key_5001_ = lean_ctor_get(v_val_4997_, 3);
lean_inc(v_key_5001_);
v_oldValue_5002_ = lean_ctor_get(v_val_4997_, 4);
lean_inc(v_oldValue_5002_);
v_newValue_5003_ = lean_ctor_get(v_val_4997_, 5);
lean_inc(v_newValue_5003_);
v_url_5004_ = lean_ctor_get(v_val_4997_, 6);
lean_inc(v_url_5004_);
v_storageArea_5005_ = lean_ctor_get(v_val_4997_, 7);
lean_inc(v_storageArea_5005_);
lean_dec(v_val_4997_);
v___x_5006_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__0));
v___x_5007_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_4998_);
lean_dec(v_bubbles_4998_);
v___x_5008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5008_, 0, v___x_5006_);
lean_ctor_set(v___x_5008_, 1, v___x_5007_);
v___x_5009_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__1));
v___x_5010_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_4999_);
lean_dec(v_cancelable_4999_);
v___x_5011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5011_, 0, v___x_5009_);
lean_ctor_set(v___x_5011_, 1, v___x_5010_);
v___x_5012_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEventInit___lam__0___closed__2));
v___x_5013_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_5000_);
lean_dec(v_composed_5000_);
v___x_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5014_, 0, v___x_5012_);
lean_ctor_set(v___x_5014_, 1, v___x_5013_);
v___x_5015_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_5016_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_5001_);
v___x_5017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5017_, 0, v___x_5015_);
lean_ctor_set(v___x_5017_, 1, v___x_5016_);
v___x_5018_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_5019_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_5002_);
v___x_5020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5020_, 0, v___x_5018_);
lean_ctor_set(v___x_5020_, 1, v___x_5019_);
v___x_5021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_5022_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_5003_);
v___x_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5023_, 0, v___x_5021_);
lean_ctor_set(v___x_5023_, 1, v___x_5022_);
v___x_5024_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_5025_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_5004_);
v___x_5026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5024_);
lean_ctor_set(v___x_5026_, 1, v___x_5025_);
v___x_5027_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_5028_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_5005_);
lean_dec(v_storageArea_5005_);
v___x_5029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5027_);
lean_ctor_set(v___x_5029_, 1, v___x_5028_);
v___x_5030_ = lean_unsigned_to_nat(8u);
v___x_5031_ = lean_mk_empty_array_with_capacity(v___x_5030_);
v___x_5032_ = lean_array_push(v___x_5031_, v___x_5008_);
v___x_5033_ = lean_array_push(v___x_5032_, v___x_5011_);
v___x_5034_ = lean_array_push(v___x_5033_, v___x_5014_);
v___x_5035_ = lean_array_push(v___x_5034_, v___x_5017_);
v___x_5036_ = lean_array_push(v___x_5035_, v___x_5020_);
v___x_5037_ = lean_array_push(v___x_5036_, v___x_5023_);
v___x_5038_ = lean_array_push(v___x_5037_, v___x_5026_);
v___x_5039_ = lean_array_push(v___x_5038_, v___x_5029_);
v___x_5040_ = l_Lasm_JS_Web_Support_fields(v___x_5039_);
lean_dec_ref(v___x_5039_);
return v___x_5040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(lean_object* v_context_5041_, lean_object* v_d_5042_){
_start:
{
lean_object* v___y_5045_; lean_object* v___y_5046_; 
if (lean_obj_tag(v_d_5042_) == 9)
{
lean_object* v_value_5050_; lean_object* v___x_5051_; 
v_value_5050_ = lean_ctor_get(v_d_5042_, 0);
lean_inc(v_value_5050_);
lean_dec_ref_known(v_d_5042_, 2);
v___x_5051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5051_, 0, v_value_5050_);
return v___x_5051_;
}
else
{
lean_object* v___x_5052_; lean_object* v_received_5054_; 
v___x_5052_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_5042_) == 9)
{
lean_object* v_value_5068_; lean_object* v_description_5069_; uint8_t v___x_5070_; 
v_value_5068_ = lean_ctor_get(v_d_5042_, 0);
v_description_5069_ = lean_ctor_get(v_d_5042_, 1);
v___x_5070_ = lean_string_dec_eq(v_description_5069_, v___x_5052_);
if (v___x_5070_ == 0)
{
goto v___jp_5066_;
}
else
{
uint32_t v___x_5071_; uint64_t v___x_5072_; lean_object* v___x_5073_; uint32_t v___x_5074_; lean_object* v___x_5075_; 
lean_inc_n(v_value_5068_, 2);
lean_dec_ref_known(v_d_5042_, 2);
v___x_5071_ = 206;
v___x_5072_ = 0ULL;
v___x_5073_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5073_, 0, v_value_5068_);
lean_ctor_set(v___x_5073_, 1, v___x_5052_);
v___x_5074_ = lasm_js_value_handle(v_value_5068_);
lean_dec(v_value_5068_);
v___x_5075_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5071_, v___x_5072_, v___x_5073_, v___x_5074_);
lean_dec_ref_known(v___x_5073_, 2);
if (lean_obj_tag(v___x_5075_) == 0)
{
lean_object* v_a_5076_; uint8_t v___x_5077_; 
v_a_5076_ = lean_ctor_get(v___x_5075_, 0);
lean_inc(v_a_5076_);
lean_dec_ref_known(v___x_5075_, 1);
v___x_5077_ = lean_string_validate_utf8(v_a_5076_);
if (v___x_5077_ == 0)
{
lean_object* v___x_5078_; lean_object* v___x_5079_; 
lean_dec(v_a_5076_);
v___x_5078_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_5079_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5078_);
v_received_5054_ = v___x_5079_;
goto v___jp_5053_;
}
else
{
lean_object* v___x_5080_; 
v___x_5080_ = lean_string_from_utf8_unchecked(v_a_5076_);
v_received_5054_ = v___x_5080_;
goto v___jp_5053_;
}
}
else
{
lean_object* v___x_5081_; 
lean_dec_ref_known(v___x_5075_, 1);
v___x_5081_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_5054_ = v___x_5081_;
goto v___jp_5053_;
}
}
}
else
{
goto v___jp_5066_;
}
v___jp_5053_:
{
lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; uint8_t v___x_5064_; 
v___x_5055_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_5056_ = lean_string_append(v___x_5055_, v_context_5041_);
v___x_5057_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_5058_ = lean_string_append(v___x_5056_, v___x_5057_);
v___x_5059_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSStorageEvent___closed__0));
v___x_5060_ = lean_string_append(v___x_5058_, v___x_5059_);
v___x_5061_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_5062_ = lean_string_append(v___x_5060_, v___x_5061_);
v___x_5063_ = lean_string_append(v___x_5062_, v_received_5054_);
lean_dec_ref(v_received_5054_);
v___x_5064_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_5064_ == 0)
{
lean_object* v___x_5065_; 
v___x_5065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_5045_ = v___x_5063_;
v___y_5046_ = v___x_5065_;
goto v___jp_5044_;
}
else
{
v___y_5045_ = v___x_5063_;
v___y_5046_ = v___x_5052_;
goto v___jp_5044_;
}
}
v___jp_5066_:
{
lean_object* v___x_5067_; 
v___x_5067_ = l_Lasm_JS_Data_describe(v_d_5042_);
v_received_5054_ = v___x_5067_;
goto v___jp_5053_;
}
}
v___jp_5044_:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5047_ = lean_string_append(v___y_5045_, v___y_5046_);
v___x_5048_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5047_);
v___x_5049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5049_, 0, v___x_5048_);
return v___x_5049_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2___boxed(lean_object* v_context_5082_, lean_object* v_d_5083_, lean_object* v_a_5084_){
_start:
{
lean_object* v_res_5085_; 
v_res_5085_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v_context_5082_, v_d_5083_);
lean_dec_ref(v_context_5082_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(lean_object* v_b_5086_, lean_object* v_args_5087_, uint8_t v_await_5088_){
_start:
{
uint64_t v___y_5091_; uint64_t v___y_5092_; uint64_t v___x_5135_; uint64_t v___y_5137_; 
v___x_5135_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
if (v_await_5088_ == 0)
{
uint64_t v___x_5142_; 
v___x_5142_ = 0ULL;
v___y_5137_ = v___x_5142_;
goto v___jp_5136_;
}
else
{
uint64_t v___x_5143_; 
v___x_5143_ = 2ULL;
v___y_5137_ = v___x_5143_;
goto v___jp_5136_;
}
v___jp_5090_:
{
uint64_t v_flags_5093_; uint32_t v___x_5094_; lean_object* v___x_5095_; uint32_t v___x_5096_; lean_object* v___x_5097_; 
v_flags_5093_ = lean_uint64_lor(v___y_5091_, v___y_5092_);
v___x_5094_ = 214;
v___x_5095_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5086_, v_args_5087_);
v___x_5096_ = 0;
v___x_5097_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5094_, v_flags_5093_, v___x_5095_, v___x_5096_);
lean_dec(v___x_5095_);
if (lean_obj_tag(v___x_5097_) == 0)
{
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; lean_object* v___x_5099_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
v___x_5099_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5098_);
lean_dec(v_a_5098_);
if (lean_obj_tag(v___x_5099_) == 0)
{
lean_object* v_a_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; 
v_a_5100_ = lean_ctor_get(v___x_5099_, 0);
lean_inc(v_a_5100_);
lean_dec_ref_known(v___x_5099_, 1);
v___x_5101_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5086_);
v___x_5102_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1_spec__2(v___x_5101_, v_a_5100_);
lean_dec_ref(v___x_5101_);
return v___x_5102_;
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5110_; 
v_a_5103_ = lean_ctor_get(v___x_5099_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v___x_5099_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5105_ = v___x_5099_;
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5099_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5110_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v___x_5108_; 
if (v_isShared_5106_ == 0)
{
v___x_5108_ = v___x_5105_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5103_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
}
}
}
}
else
{
lean_object* v_a_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5118_; 
v_a_5111_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5113_ = v___x_5097_;
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_a_5111_);
lean_dec(v___x_5097_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5116_; 
if (v_isShared_5114_ == 0)
{
lean_ctor_set_tag(v___x_5113_, 1);
v___x_5116_ = v___x_5113_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v_a_5111_);
v___x_5116_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
return v___x_5116_;
}
}
}
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5134_; 
v_a_5119_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5121_ = v___x_5097_;
v_isShared_5122_ = v_isSharedCheck_5134_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_a_5119_);
lean_dec(v___x_5097_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5134_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5132_; 
v___x_5123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_5124_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5086_);
v___x_5125_ = lean_string_append(v___x_5123_, v___x_5124_);
lean_dec_ref(v___x_5124_);
v___x_5126_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__0));
v___x_5127_ = lean_string_append(v___x_5125_, v___x_5126_);
v___x_5128_ = lean_io_error_to_string(v_a_5119_);
v___x_5129_ = lean_string_append(v___x_5127_, v___x_5128_);
lean_dec_ref(v___x_5128_);
v___x_5130_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5130_, 0, v___x_5129_);
if (v_isShared_5122_ == 0)
{
lean_ctor_set(v___x_5121_, 0, v___x_5130_);
v___x_5132_ = v___x_5121_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v___x_5130_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
}
}
}
}
v___jp_5136_:
{
uint8_t v_construct_5138_; uint64_t v___x_5139_; 
v_construct_5138_ = lean_ctor_get_uint8(v_b_5086_, sizeof(void*)*4);
v___x_5139_ = lean_uint64_lor(v___x_5135_, v___y_5137_);
if (v_construct_5138_ == 0)
{
uint64_t v___x_5140_; 
v___x_5140_ = 0ULL;
v___y_5091_ = v___x_5139_;
v___y_5092_ = v___x_5140_;
goto v___jp_5090_;
}
else
{
uint64_t v___x_5141_; 
v___x_5141_ = 4ULL;
v___y_5091_ = v___x_5139_;
v___y_5092_ = v___x_5141_;
goto v___jp_5090_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1___boxed(lean_object* v_b_5144_, lean_object* v_args_5145_, lean_object* v_await_5146_, lean_object* v_a_5147_){
_start:
{
uint8_t v_await_boxed_5148_; lean_object* v_res_5149_; 
v_await_boxed_5148_ = lean_unbox(v_await_5146_);
v_res_5149_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v_b_5144_, v_args_5145_, v_await_boxed_5148_);
lean_dec_ref(v_b_5144_);
return v_res_5149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new(lean_object* v_type_5157_, lean_object* v_eventInitDict_5158_){
_start:
{
lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; uint8_t v___x_5168_; lean_object* v___x_5169_; 
v___x_5160_ = lean_unsigned_to_nat(2u);
v___x_5161_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_new___closed__1));
v___x_5162_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5162_, 0, v_type_5157_);
v___x_5163_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0(v_eventInitDict_5158_);
v___x_5164_ = lean_mk_empty_array_with_capacity(v___x_5160_);
v___x_5165_ = lean_array_push(v___x_5164_, v___x_5162_);
v___x_5166_ = lean_array_push(v___x_5165_, v___x_5163_);
v___x_5167_ = l_Lasm_JS_Web_Support_args(v___x_5166_);
v___x_5168_ = 0;
v___x_5169_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_StorageEvent_new_spec__1(v___x_5161_, v___x_5167_, v___x_5168_);
return v___x_5169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_new___boxed(lean_object* v_type_5170_, lean_object* v_eventInitDict_5171_, lean_object* v_a_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l_Lasm_JS_Web_StorageEvent_new(v_type_5170_, v_eventInitDict_5171_);
return v_res_5173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key(lean_object* v_self_5174_){
_start:
{
lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5176_ = ((lean_object*)(l_Lasm_JS_Web_instToJSKeyboardEventInit___lam__0___closed__0));
v___x_5177_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_5174_, v___x_5176_);
return v___x_5177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_key___boxed(lean_object* v_self_5178_, lean_object* v_a_5179_){
_start:
{
lean_object* v_res_5180_; 
v_res_5180_ = l_Lasm_JS_Web_StorageEvent_key(v_self_5178_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue(lean_object* v_self_5181_){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5183_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__0));
v___x_5184_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_5181_, v___x_5183_);
return v___x_5184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_oldValue___boxed(lean_object* v_self_5185_, lean_object* v_a_5186_){
_start:
{
lean_object* v_res_5187_; 
v_res_5187_ = l_Lasm_JS_Web_StorageEvent_oldValue(v_self_5185_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue(lean_object* v_self_5188_){
_start:
{
lean_object* v___x_5190_; lean_object* v___x_5191_; 
v___x_5190_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__1));
v___x_5191_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Node_nodeValue_spec__0(v_self_5188_, v___x_5190_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_newValue___boxed(lean_object* v_self_5192_, lean_object* v_a_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l_Lasm_JS_Web_StorageEvent_newValue(v_self_5192_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url(lean_object* v_self_5195_){
_start:
{
lean_object* v___x_5197_; lean_object* v___x_5198_; 
v___x_5197_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__2));
v___x_5198_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_5195_, v___x_5197_);
return v___x_5198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_url___boxed(lean_object* v_self_5199_, lean_object* v_a_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_Lasm_JS_Web_StorageEvent_url(v_self_5199_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(lean_object* v_context_5203_, lean_object* v_d_5204_){
_start:
{
lean_object* v___y_5210_; lean_object* v___y_5211_; 
switch(lean_obj_tag(v_d_5204_))
{
case 1:
{
goto v___jp_5206_;
}
case 0:
{
goto v___jp_5206_;
}
default: 
{
if (lean_obj_tag(v_d_5204_) == 9)
{
lean_object* v_value_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
v_value_5215_ = lean_ctor_get(v_d_5204_, 0);
lean_inc(v_value_5215_);
lean_dec_ref_known(v_d_5204_, 2);
v___x_5216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5216_, 0, v_value_5215_);
v___x_5217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5216_);
return v___x_5217_;
}
else
{
lean_object* v___x_5218_; lean_object* v_received_5220_; 
v___x_5218_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
if (lean_obj_tag(v_d_5204_) == 9)
{
lean_object* v_value_5234_; lean_object* v_description_5235_; uint8_t v___x_5236_; 
v_value_5234_ = lean_ctor_get(v_d_5204_, 0);
v_description_5235_ = lean_ctor_get(v_d_5204_, 1);
v___x_5236_ = lean_string_dec_eq(v_description_5235_, v___x_5218_);
if (v___x_5236_ == 0)
{
goto v___jp_5232_;
}
else
{
uint32_t v___x_5237_; uint64_t v___x_5238_; lean_object* v___x_5239_; uint32_t v___x_5240_; lean_object* v___x_5241_; 
lean_inc_n(v_value_5234_, 2);
lean_dec_ref_known(v_d_5204_, 2);
v___x_5237_ = 206;
v___x_5238_ = 0ULL;
v___x_5239_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5239_, 0, v_value_5234_);
lean_ctor_set(v___x_5239_, 1, v___x_5218_);
v___x_5240_ = lasm_js_value_handle(v_value_5234_);
lean_dec(v_value_5234_);
v___x_5241_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5237_, v___x_5238_, v___x_5239_, v___x_5240_);
lean_dec_ref_known(v___x_5239_, 2);
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_object* v_a_5242_; uint8_t v___x_5243_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
lean_inc(v_a_5242_);
lean_dec_ref_known(v___x_5241_, 1);
v___x_5243_ = lean_string_validate_utf8(v_a_5242_);
if (v___x_5243_ == 0)
{
lean_object* v___x_5244_; lean_object* v___x_5245_; 
lean_dec(v_a_5242_);
v___x_5244_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__9);
v___x_5245_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5244_);
v_received_5220_ = v___x_5245_;
goto v___jp_5219_;
}
else
{
lean_object* v___x_5246_; 
v___x_5246_ = lean_string_from_utf8_unchecked(v_a_5242_);
v_received_5220_ = v___x_5246_;
goto v___jp_5219_;
}
}
else
{
lean_object* v___x_5247_; 
lean_dec_ref_known(v___x_5241_, 1);
v___x_5247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__10));
v_received_5220_ = v___x_5247_;
goto v___jp_5219_;
}
}
}
else
{
goto v___jp_5232_;
}
v___jp_5219_:
{
lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; 
v___x_5221_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__0));
v___x_5222_ = lean_string_append(v___x_5221_, v_context_5203_);
v___x_5223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__1));
v___x_5224_ = lean_string_append(v___x_5222_, v___x_5223_);
v___x_5225_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___closed__0));
v___x_5226_ = lean_string_append(v___x_5224_, v___x_5225_);
v___x_5227_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__2));
v___x_5228_ = lean_string_append(v___x_5226_, v___x_5227_);
v___x_5229_ = lean_string_append(v___x_5228_, v_received_5220_);
lean_dec_ref(v_received_5220_);
v___x_5230_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__4);
if (v___x_5230_ == 0)
{
lean_object* v___x_5231_; 
v___x_5231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1_spec__2___closed__5));
v___y_5210_ = v___x_5229_;
v___y_5211_ = v___x_5231_;
goto v___jp_5209_;
}
else
{
v___y_5210_ = v___x_5229_;
v___y_5211_ = v___x_5218_;
goto v___jp_5209_;
}
}
v___jp_5232_:
{
lean_object* v___x_5233_; 
v___x_5233_ = l_Lasm_JS_Data_describe(v_d_5204_);
v_received_5220_ = v___x_5233_;
goto v___jp_5219_;
}
}
}
}
v___jp_5206_:
{
lean_object* v___x_5207_; lean_object* v___x_5208_; 
v___x_5207_ = lean_box(0);
v___x_5208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
return v___x_5208_;
}
v___jp_5209_:
{
lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
v___x_5212_ = lean_string_append(v___y_5210_, v___y_5211_);
v___x_5213_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
v___x_5214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5214_, 0, v___x_5213_);
return v___x_5214_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5248_, lean_object* v_d_5249_, lean_object* v_a_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_5248_, v_d_5249_);
lean_dec_ref(v_context_5248_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(lean_object* v_context_5252_, lean_object* v_bytes_5253_){
_start:
{
lean_object* v___x_5255_; 
v___x_5255_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5253_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v_a_5256_; lean_object* v___x_5257_; 
v_a_5256_ = lean_ctor_get(v___x_5255_, 0);
lean_inc(v_a_5256_);
lean_dec_ref_known(v___x_5255_, 1);
v___x_5257_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0_spec__1(v_context_5252_, v_a_5256_);
return v___x_5257_;
}
else
{
lean_object* v_a_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5265_; 
v_a_5258_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5260_ = v___x_5255_;
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_a_5258_);
lean_dec(v___x_5255_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5263_; 
if (v_isShared_5261_ == 0)
{
v___x_5263_ = v___x_5260_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_a_5258_);
v___x_5263_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
return v___x_5263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0___boxed(lean_object* v_context_5266_, lean_object* v_bytes_5267_, lean_object* v_a_5268_){
_start:
{
lean_object* v_res_5269_; 
v_res_5269_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v_context_5266_, v_bytes_5267_);
lean_dec_ref(v_bytes_5267_);
lean_dec_ref(v_context_5266_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(lean_object* v_o_5271_, lean_object* v_key_5272_){
_start:
{
lean_object* v_k_5274_; lean_object* v___x_5275_; 
v_k_5274_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5274_, 0, v_key_5272_);
v___x_5275_ = l_Lasm_JS_Wire_encodeIO(v_k_5274_);
if (lean_obj_tag(v___x_5275_) == 0)
{
lean_object* v_a_5276_; uint32_t v___x_5277_; uint32_t v___x_5278_; uint64_t v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; 
v_a_5276_ = lean_ctor_get(v___x_5275_, 0);
lean_inc(v_a_5276_);
lean_dec_ref_known(v___x_5275_, 1);
v___x_5277_ = 203;
v___x_5278_ = lasm_js_value_handle(v_o_5271_);
v___x_5279_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_UIEvent_new_spec__1___closed__1);
v___x_5280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUIEvent___lam__0___closed__0));
v___x_5281_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5281_, 0, v_o_5271_);
lean_ctor_set(v___x_5281_, 1, v___x_5280_);
v___x_5282_ = lean_unsigned_to_nat(2u);
v___x_5283_ = lean_mk_empty_array_with_capacity(v___x_5282_);
lean_inc_ref(v_k_5274_);
v___x_5284_ = lean_array_push(v___x_5283_, v_k_5274_);
v___x_5285_ = lean_array_push(v___x_5284_, v___x_5281_);
v___x_5286_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5286_, 0, v___x_5285_);
v___x_5287_ = lasm_js_call(v___x_5277_, v___x_5278_, v___x_5279_, v_a_5276_, v___x_5286_);
lean_dec_ref_known(v___x_5286_, 1);
lean_dec(v_a_5276_);
if (lean_obj_tag(v___x_5287_) == 0)
{
lean_object* v_a_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; 
v_a_5288_ = lean_ctor_get(v___x_5287_, 0);
lean_inc(v_a_5288_);
lean_dec_ref_known(v___x_5287_, 1);
v___x_5289_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___closed__0));
v___x_5290_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5274_);
v___x_5291_ = lean_string_append(v___x_5289_, v___x_5290_);
lean_dec_ref(v___x_5290_);
v___x_5292_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0_spec__0(v___x_5291_, v_a_5288_);
lean_dec(v_a_5288_);
lean_dec_ref(v___x_5291_);
return v___x_5292_;
}
else
{
lean_object* v_a_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5300_; 
lean_dec_ref_known(v_k_5274_, 1);
v_a_5293_ = lean_ctor_get(v___x_5287_, 0);
v_isSharedCheck_5300_ = !lean_is_exclusive(v___x_5287_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5295_ = v___x_5287_;
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_a_5293_);
lean_dec(v___x_5287_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5300_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5298_; 
if (v_isShared_5296_ == 0)
{
v___x_5298_ = v___x_5295_;
goto v_reusejp_5297_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v_a_5293_);
v___x_5298_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5297_;
}
v_reusejp_5297_:
{
return v___x_5298_;
}
}
}
}
else
{
lean_object* v_a_5301_; lean_object* v___x_5303_; uint8_t v_isShared_5304_; uint8_t v_isSharedCheck_5308_; 
lean_dec_ref_known(v_k_5274_, 1);
lean_dec(v_o_5271_);
v_a_5301_ = lean_ctor_get(v___x_5275_, 0);
v_isSharedCheck_5308_ = !lean_is_exclusive(v___x_5275_);
if (v_isSharedCheck_5308_ == 0)
{
v___x_5303_ = v___x_5275_;
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
else
{
lean_inc(v_a_5301_);
lean_dec(v___x_5275_);
v___x_5303_ = lean_box(0);
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
v_resetjp_5302_:
{
lean_object* v___x_5306_; 
if (v_isShared_5304_ == 0)
{
v___x_5306_ = v___x_5303_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5307_; 
v_reuseFailAlloc_5307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5307_, 0, v_a_5301_);
v___x_5306_ = v_reuseFailAlloc_5307_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
return v___x_5306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0___boxed(lean_object* v_o_5309_, lean_object* v_key_5310_, lean_object* v_a_5311_){
_start:
{
lean_object* v_res_5312_; 
v_res_5312_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_o_5309_, v_key_5310_);
return v_res_5312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea(lean_object* v_self_5313_){
_start:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
v___x_5315_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStorageEventInit___lam__0___closed__3));
v___x_5316_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_StorageEvent_storageArea_spec__0(v_self_5313_, v___x_5315_);
return v___x_5316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_storageArea___boxed(lean_object* v_self_5317_, lean_object* v_a_5318_){
_start:
{
lean_object* v_res_5319_; 
v_res_5319_ = l_Lasm_JS_Web_StorageEvent_storageArea(v_self_5317_);
return v_res_5319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent(lean_object* v_self_5321_, lean_object* v_type_5322_, lean_object* v_bubbles_5323_, lean_object* v_cancelable_5324_, lean_object* v_key_5325_, lean_object* v_oldValue_5326_, lean_object* v_newValue_5327_, lean_object* v_url_5328_, lean_object* v_storageArea_5329_){
_start:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; 
v___x_5331_ = ((lean_object*)(l_Lasm_JS_Web_StorageEvent_initStorageEvent___closed__0));
v___x_5332_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5332_, 0, v_type_5322_);
v___x_5333_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_5323_);
v___x_5334_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_5324_);
v___x_5335_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_key_5325_);
v___x_5336_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_oldValue_5326_);
v___x_5337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_newValue_5327_);
v___x_5338_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_url_5328_);
v___x_5339_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_StorageEvent_new_spec__0_spec__0(v_storageArea_5329_);
v___x_5340_ = lean_unsigned_to_nat(8u);
v___x_5341_ = lean_mk_empty_array_with_capacity(v___x_5340_);
v___x_5342_ = lean_array_push(v___x_5341_, v___x_5332_);
v___x_5343_ = lean_array_push(v___x_5342_, v___x_5333_);
v___x_5344_ = lean_array_push(v___x_5343_, v___x_5334_);
v___x_5345_ = lean_array_push(v___x_5344_, v___x_5335_);
v___x_5346_ = lean_array_push(v___x_5345_, v___x_5336_);
v___x_5347_ = lean_array_push(v___x_5346_, v___x_5337_);
v___x_5348_ = lean_array_push(v___x_5347_, v___x_5338_);
v___x_5349_ = lean_array_push(v___x_5348_, v___x_5339_);
v___x_5350_ = l_Lasm_JS_Web_Support_args(v___x_5349_);
v___x_5351_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5321_, v___x_5331_, v___x_5350_);
return v___x_5351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_StorageEvent_initStorageEvent___boxed(lean_object* v_self_5352_, lean_object* v_type_5353_, lean_object* v_bubbles_5354_, lean_object* v_cancelable_5355_, lean_object* v_key_5356_, lean_object* v_oldValue_5357_, lean_object* v_newValue_5358_, lean_object* v_url_5359_, lean_object* v_storageArea_5360_, lean_object* v_a_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_Lasm_JS_Web_StorageEvent_initStorageEvent(v_self_5352_, v_type_5353_, v_bubbles_5354_, v_cancelable_5355_, v_key_5356_, v_oldValue_5357_, v_newValue_5358_, v_url_5359_, v_storageArea_5360_);
lean_dec(v_storageArea_5360_);
lean_dec(v_cancelable_5355_);
lean_dec(v_bubbles_5354_);
return v_res_5362_;
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
