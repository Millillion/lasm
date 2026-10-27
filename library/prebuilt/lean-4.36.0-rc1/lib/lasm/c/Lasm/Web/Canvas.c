// Lean compiler output
// Module: Lasm.Web.Canvas
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types
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
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_uint64_to_float(uint64_t);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fillStyle"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "strokeStyle"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__4_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lineWidth"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__6 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__7 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__7_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "font"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__9 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__9_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__10 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__10_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "textAlign"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__12 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__13 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__13_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "textBaseline"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__15 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__15_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__15_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__16 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__16_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "globalAlpha"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__18 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__19 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__19_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "lineCap"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__21 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__21_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__21_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__22 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__22_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lineJoin"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__24 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__24_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__24_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__25 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__25_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fillRect"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__27 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__27_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__27_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__28 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__28_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "strokeRect"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__30 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__30_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__30_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__31 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__31_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "clearRect"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__33 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__33_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__33_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__34 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__34_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "beginPath"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__36 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__36_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__36_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__37 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__37_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__37_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__38 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__38_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__38_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "closePath"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__40 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__40_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__40_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__41 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__41_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__41_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__42 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__42_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__42_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "moveTo"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__44 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__44_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__44_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__45 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__45_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lineTo"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__47 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__47_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__47_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__48 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__48_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rect"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__50 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__50_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__50_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__51 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__51_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arc"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__53 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__53_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__53_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__54 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__54_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "quadraticCurveTo"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__56 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__56_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__56_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__57 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__57_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "bezierCurveTo"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__59 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__59_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__59_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__60 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__60_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fill"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__62 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__62_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__62_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__63 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__63_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__63_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__64 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__64_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__64_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stroke"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__66 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__66_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__66_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__67 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__67_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__67_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__68 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__68_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__68_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fillText"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__70 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__70_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__70_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__71 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__71_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "strokeText"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__73 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__73_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__73_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__74 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__74_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "save"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__76 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__76_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__76_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__77 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__77_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__77_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__78 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__78_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__78_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "restore"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__80 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__80_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__80_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__81 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__81_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__81_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__82 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__82_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__82_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "translate"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__84 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__84_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__84_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__85 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__85_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rotate"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__87 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__87_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__87_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__88 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__88_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scale"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__90 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__90_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__90_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__91 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__91_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "setTransform"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__93 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__93_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__93_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__94 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__94_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "resetTransform"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__96 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__96_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__96_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__97 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__97_value;
static const lean_array_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__97_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__98 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__98_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__98_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "drawImage"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__100 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__100_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__100_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__101 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__101_value;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103;
static const lean_string_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "drawImageScaled"};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__104 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__104_value;
static const lean_ctor_object l_Lasm_Web_instToJSDrawCommand___lam__0___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__104_value)}};
static const lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__105 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__105_value;
static lean_once_cell_t l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106;
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0(lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSDrawCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSDrawCommand___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSDrawCommand___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSDrawCommand = (const lean_object*)&l_Lasm_Web_instToJSDrawCommand___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ascent"};
static const lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "descent"};
static const lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSTextMetrics___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSTextMetrics___closed__0;
static const lean_string_object l_Lasm_Web_instFromJSTextMetrics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.Web.TextMetrics"};
static const lean_object* l_Lasm_Web_instFromJSTextMetrics___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSTextMetrics___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSTextMetrics___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSTextMetrics___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics;
static lean_once_cell_t l_Lasm_Web_instInhabitedTextMetrics_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_Web_instInhabitedTextMetrics_default___closed__0;
static lean_once_cell_t l_Lasm_Web_instInhabitedTextMetrics_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instInhabitedTextMetrics_default___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedTextMetrics_default;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedTextMetrics;
static const lean_string_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6;
static const lean_string_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12;
static const lean_string_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__13_value;
static lean_once_cell_t l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14;
static lean_once_cell_t l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprTextMetrics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprTextMetrics_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprTextMetrics___closed__0 = (const lean_object*)&l_Lasm_Web_instReprTextMetrics___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprTextMetrics = (const lean_object*)&l_Lasm_Web_instReprTextMetrics___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.Context2D"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_context2d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "context2d"};
static const lean_object* l_Lasm_Web_Raw_context2d___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_context2d___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_context2d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_context2d___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_context2d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_context2d___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_context2d___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_context2d___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_context2d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_context2d___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_context2d___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_draw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "draw"};
static const lean_object* l_Lasm_Web_Raw_draw___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_draw___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_draw___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_draw___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_draw___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_draw___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_draw___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_measureText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "measureText"};
static const lean_object* l_Lasm_Web_Raw_measureText___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_measureText___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_measureText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_measureText___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_measureText___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_measureText___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_measureText___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_imageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "imageData"};
static const lean_object* l_Lasm_Web_Raw_imageData___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_imageData___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_imageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_imageData___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_imageData___closed__0_value),((lean_object*)(((size_t)(5) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_imageData___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_imageData___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData(lean_object*, double, double, double, double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_putImageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "putImageData"};
static const lean_object* l_Lasm_Web_Raw_putImageData___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_putImageData___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_putImageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_putImageData___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_context2d___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_putImageData___closed__0_value),((lean_object*)(((size_t)(6) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_putImageData___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_putImageData___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData(lean_object*, lean_object*, double, double, double, double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_Web_DrawCommand_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
lean_object* v_style_7_; lean_object* v___x_8_; 
v_style_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_style_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_style_7_);
return v___x_8_;
}
case 1:
{
lean_object* v_style_9_; lean_object* v___x_10_; 
v_style_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_style_9_);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_style_9_);
return v___x_10_;
}
case 2:
{
double v_width_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_width_11_ = lean_ctor_get_float(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_12_ = lean_box_float(v_width_11_);
v___x_13_ = lean_apply_1(v_k_6_, v___x_12_);
return v___x_13_;
}
case 3:
{
lean_object* v_font_14_; lean_object* v___x_15_; 
v_font_14_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_font_14_);
lean_dec_ref_known(v_t_5_, 1);
v___x_15_ = lean_apply_1(v_k_6_, v_font_14_);
return v___x_15_;
}
case 4:
{
lean_object* v_align_16_; lean_object* v___x_17_; 
v_align_16_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_align_16_);
lean_dec_ref_known(v_t_5_, 1);
v___x_17_ = lean_apply_1(v_k_6_, v_align_16_);
return v___x_17_;
}
case 5:
{
lean_object* v_baseline_18_; lean_object* v___x_19_; 
v_baseline_18_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_baseline_18_);
lean_dec_ref_known(v_t_5_, 1);
v___x_19_ = lean_apply_1(v_k_6_, v_baseline_18_);
return v___x_19_;
}
case 6:
{
double v_alpha_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v_alpha_20_ = lean_ctor_get_float(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_21_ = lean_box_float(v_alpha_20_);
v___x_22_ = lean_apply_1(v_k_6_, v___x_21_);
return v___x_22_;
}
case 7:
{
lean_object* v_cap_23_; lean_object* v___x_24_; 
v_cap_23_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_cap_23_);
lean_dec_ref_known(v_t_5_, 1);
v___x_24_ = lean_apply_1(v_k_6_, v_cap_23_);
return v___x_24_;
}
case 8:
{
lean_object* v_join_25_; lean_object* v___x_26_; 
v_join_25_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_join_25_);
lean_dec_ref_known(v_t_5_, 1);
v___x_26_ = lean_apply_1(v_k_6_, v_join_25_);
return v___x_26_;
}
case 9:
{
double v_x_27_; double v_y_28_; double v_width_29_; double v_height_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_x_27_ = lean_ctor_get_float(v_t_5_, 0);
v_y_28_ = lean_ctor_get_float(v_t_5_, 8);
v_width_29_ = lean_ctor_get_float(v_t_5_, 16);
v_height_30_ = lean_ctor_get_float(v_t_5_, 24);
lean_dec_ref_known(v_t_5_, 0);
v___x_31_ = lean_box_float(v_x_27_);
v___x_32_ = lean_box_float(v_y_28_);
v___x_33_ = lean_box_float(v_width_29_);
v___x_34_ = lean_box_float(v_height_30_);
v___x_35_ = lean_apply_4(v_k_6_, v___x_31_, v___x_32_, v___x_33_, v___x_34_);
return v___x_35_;
}
case 10:
{
double v_x_36_; double v_y_37_; double v_width_38_; double v_height_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_x_36_ = lean_ctor_get_float(v_t_5_, 0);
v_y_37_ = lean_ctor_get_float(v_t_5_, 8);
v_width_38_ = lean_ctor_get_float(v_t_5_, 16);
v_height_39_ = lean_ctor_get_float(v_t_5_, 24);
lean_dec_ref_known(v_t_5_, 0);
v___x_40_ = lean_box_float(v_x_36_);
v___x_41_ = lean_box_float(v_y_37_);
v___x_42_ = lean_box_float(v_width_38_);
v___x_43_ = lean_box_float(v_height_39_);
v___x_44_ = lean_apply_4(v_k_6_, v___x_40_, v___x_41_, v___x_42_, v___x_43_);
return v___x_44_;
}
case 11:
{
double v_x_45_; double v_y_46_; double v_width_47_; double v_height_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_x_45_ = lean_ctor_get_float(v_t_5_, 0);
v_y_46_ = lean_ctor_get_float(v_t_5_, 8);
v_width_47_ = lean_ctor_get_float(v_t_5_, 16);
v_height_48_ = lean_ctor_get_float(v_t_5_, 24);
lean_dec_ref_known(v_t_5_, 0);
v___x_49_ = lean_box_float(v_x_45_);
v___x_50_ = lean_box_float(v_y_46_);
v___x_51_ = lean_box_float(v_width_47_);
v___x_52_ = lean_box_float(v_height_48_);
v___x_53_ = lean_apply_4(v_k_6_, v___x_49_, v___x_50_, v___x_51_, v___x_52_);
return v___x_53_;
}
case 14:
{
double v_x_54_; double v_y_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_x_54_ = lean_ctor_get_float(v_t_5_, 0);
v_y_55_ = lean_ctor_get_float(v_t_5_, 8);
lean_dec_ref_known(v_t_5_, 0);
v___x_56_ = lean_box_float(v_x_54_);
v___x_57_ = lean_box_float(v_y_55_);
v___x_58_ = lean_apply_2(v_k_6_, v___x_56_, v___x_57_);
return v___x_58_;
}
case 15:
{
double v_x_59_; double v_y_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_x_59_ = lean_ctor_get_float(v_t_5_, 0);
v_y_60_ = lean_ctor_get_float(v_t_5_, 8);
lean_dec_ref_known(v_t_5_, 0);
v___x_61_ = lean_box_float(v_x_59_);
v___x_62_ = lean_box_float(v_y_60_);
v___x_63_ = lean_apply_2(v_k_6_, v___x_61_, v___x_62_);
return v___x_63_;
}
case 16:
{
double v_x_64_; double v_y_65_; double v_width_66_; double v_height_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v_x_64_ = lean_ctor_get_float(v_t_5_, 0);
v_y_65_ = lean_ctor_get_float(v_t_5_, 8);
v_width_66_ = lean_ctor_get_float(v_t_5_, 16);
v_height_67_ = lean_ctor_get_float(v_t_5_, 24);
lean_dec_ref_known(v_t_5_, 0);
v___x_68_ = lean_box_float(v_x_64_);
v___x_69_ = lean_box_float(v_y_65_);
v___x_70_ = lean_box_float(v_width_66_);
v___x_71_ = lean_box_float(v_height_67_);
v___x_72_ = lean_apply_4(v_k_6_, v___x_68_, v___x_69_, v___x_70_, v___x_71_);
return v___x_72_;
}
case 17:
{
double v_x_73_; double v_y_74_; double v_radius_75_; double v_startAngle_76_; double v_endAngle_77_; uint8_t v_counterclockwise_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_x_73_ = lean_ctor_get_float(v_t_5_, 0);
v_y_74_ = lean_ctor_get_float(v_t_5_, 8);
v_radius_75_ = lean_ctor_get_float(v_t_5_, 16);
v_startAngle_76_ = lean_ctor_get_float(v_t_5_, 24);
v_endAngle_77_ = lean_ctor_get_float(v_t_5_, 32);
v_counterclockwise_78_ = lean_ctor_get_uint8(v_t_5_, 40);
lean_dec_ref_known(v_t_5_, 0);
v___x_79_ = lean_box_float(v_x_73_);
v___x_80_ = lean_box_float(v_y_74_);
v___x_81_ = lean_box_float(v_radius_75_);
v___x_82_ = lean_box_float(v_startAngle_76_);
v___x_83_ = lean_box_float(v_endAngle_77_);
v___x_84_ = lean_box(v_counterclockwise_78_);
v___x_85_ = lean_apply_6(v_k_6_, v___x_79_, v___x_80_, v___x_81_, v___x_82_, v___x_83_, v___x_84_);
return v___x_85_;
}
case 18:
{
double v_cpx_86_; double v_cpy_87_; double v_x_88_; double v_y_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_cpx_86_ = lean_ctor_get_float(v_t_5_, 0);
v_cpy_87_ = lean_ctor_get_float(v_t_5_, 8);
v_x_88_ = lean_ctor_get_float(v_t_5_, 16);
v_y_89_ = lean_ctor_get_float(v_t_5_, 24);
lean_dec_ref_known(v_t_5_, 0);
v___x_90_ = lean_box_float(v_cpx_86_);
v___x_91_ = lean_box_float(v_cpy_87_);
v___x_92_ = lean_box_float(v_x_88_);
v___x_93_ = lean_box_float(v_y_89_);
v___x_94_ = lean_apply_4(v_k_6_, v___x_90_, v___x_91_, v___x_92_, v___x_93_);
return v___x_94_;
}
case 19:
{
double v_cp1x_95_; double v_cp1y_96_; double v_cp2x_97_; double v_cp2y_98_; double v_x_99_; double v_y_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_cp1x_95_ = lean_ctor_get_float(v_t_5_, 0);
v_cp1y_96_ = lean_ctor_get_float(v_t_5_, 8);
v_cp2x_97_ = lean_ctor_get_float(v_t_5_, 16);
v_cp2y_98_ = lean_ctor_get_float(v_t_5_, 24);
v_x_99_ = lean_ctor_get_float(v_t_5_, 32);
v_y_100_ = lean_ctor_get_float(v_t_5_, 40);
lean_dec_ref_known(v_t_5_, 0);
v___x_101_ = lean_box_float(v_cp1x_95_);
v___x_102_ = lean_box_float(v_cp1y_96_);
v___x_103_ = lean_box_float(v_cp2x_97_);
v___x_104_ = lean_box_float(v_cp2y_98_);
v___x_105_ = lean_box_float(v_x_99_);
v___x_106_ = lean_box_float(v_y_100_);
v___x_107_ = lean_apply_6(v_k_6_, v___x_101_, v___x_102_, v___x_103_, v___x_104_, v___x_105_, v___x_106_);
return v___x_107_;
}
case 22:
{
lean_object* v_text_108_; double v_x_109_; double v_y_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_text_108_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_text_108_);
v_x_109_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1);
v_y_110_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_5_, 1);
v___x_111_ = lean_box_float(v_x_109_);
v___x_112_ = lean_box_float(v_y_110_);
v___x_113_ = lean_apply_3(v_k_6_, v_text_108_, v___x_111_, v___x_112_);
return v___x_113_;
}
case 23:
{
lean_object* v_text_114_; double v_x_115_; double v_y_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_text_114_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_text_114_);
v_x_115_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1);
v_y_116_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_5_, 1);
v___x_117_ = lean_box_float(v_x_115_);
v___x_118_ = lean_box_float(v_y_116_);
v___x_119_ = lean_apply_3(v_k_6_, v_text_114_, v___x_117_, v___x_118_);
return v___x_119_;
}
case 26:
{
double v_x_120_; double v_y_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_x_120_ = lean_ctor_get_float(v_t_5_, 0);
v_y_121_ = lean_ctor_get_float(v_t_5_, 8);
lean_dec_ref_known(v_t_5_, 0);
v___x_122_ = lean_box_float(v_x_120_);
v___x_123_ = lean_box_float(v_y_121_);
v___x_124_ = lean_apply_2(v_k_6_, v___x_122_, v___x_123_);
return v___x_124_;
}
case 27:
{
double v_angle_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_angle_125_ = lean_ctor_get_float(v_t_5_, 0);
lean_dec_ref_known(v_t_5_, 0);
v___x_126_ = lean_box_float(v_angle_125_);
v___x_127_ = lean_apply_1(v_k_6_, v___x_126_);
return v___x_127_;
}
case 28:
{
double v_x_128_; double v_y_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_x_128_ = lean_ctor_get_float(v_t_5_, 0);
v_y_129_ = lean_ctor_get_float(v_t_5_, 8);
lean_dec_ref_known(v_t_5_, 0);
v___x_130_ = lean_box_float(v_x_128_);
v___x_131_ = lean_box_float(v_y_129_);
v___x_132_ = lean_apply_2(v_k_6_, v___x_130_, v___x_131_);
return v___x_132_;
}
case 29:
{
double v_a_133_; double v_b_134_; double v_c_135_; double v_d_136_; double v_e_137_; double v_f_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_a_133_ = lean_ctor_get_float(v_t_5_, 0);
v_b_134_ = lean_ctor_get_float(v_t_5_, 8);
v_c_135_ = lean_ctor_get_float(v_t_5_, 16);
v_d_136_ = lean_ctor_get_float(v_t_5_, 24);
v_e_137_ = lean_ctor_get_float(v_t_5_, 32);
v_f_138_ = lean_ctor_get_float(v_t_5_, 40);
lean_dec_ref_known(v_t_5_, 0);
v___x_139_ = lean_box_float(v_a_133_);
v___x_140_ = lean_box_float(v_b_134_);
v___x_141_ = lean_box_float(v_c_135_);
v___x_142_ = lean_box_float(v_d_136_);
v___x_143_ = lean_box_float(v_e_137_);
v___x_144_ = lean_box_float(v_f_138_);
v___x_145_ = lean_apply_6(v_k_6_, v___x_139_, v___x_140_, v___x_141_, v___x_142_, v___x_143_, v___x_144_);
return v___x_145_;
}
case 31:
{
lean_object* v_image_146_; double v_x_147_; double v_y_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_image_146_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_image_146_);
v_x_147_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1);
v_y_148_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_5_, 1);
v___x_149_ = lean_box_float(v_x_147_);
v___x_150_ = lean_box_float(v_y_148_);
v___x_151_ = lean_apply_3(v_k_6_, v_image_146_, v___x_149_, v___x_150_);
return v___x_151_;
}
case 32:
{
lean_object* v_image_152_; double v_x_153_; double v_y_154_; double v_width_155_; double v_height_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_image_152_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_image_152_);
v_x_153_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1);
v_y_154_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 8);
v_width_155_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 16);
v_height_156_ = lean_ctor_get_float(v_t_5_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_t_5_, 1);
v___x_157_ = lean_box_float(v_x_153_);
v___x_158_ = lean_box_float(v_y_154_);
v___x_159_ = lean_box_float(v_width_155_);
v___x_160_ = lean_box_float(v_height_156_);
v___x_161_ = lean_apply_5(v_k_6_, v_image_152_, v___x_157_, v___x_158_, v___x_159_, v___x_160_);
return v___x_161_;
}
default: 
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim(lean_object* v_motive_162_, lean_object* v_ctorIdx_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_k_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_164_, v_k_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___boxed(lean_object* v_motive_168_, lean_object* v_ctorIdx_169_, lean_object* v_t_170_, lean_object* v_h_171_, lean_object* v_k_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lasm_Web_DrawCommand_ctorElim(v_motive_168_, v_ctorIdx_169_, v_t_170_, v_h_171_, v_k_172_);
lean_dec(v_ctorIdx_169_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim___redArg(lean_object* v_t_174_, lean_object* v_fillStyle_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_174_, v_fillStyle_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim(lean_object* v_motive_177_, lean_object* v_t_178_, lean_object* v_h_179_, lean_object* v_fillStyle_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_178_, v_fillStyle_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim___redArg(lean_object* v_t_182_, lean_object* v_strokeStyle_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_182_, v_strokeStyle_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_strokeStyle_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_186_, v_strokeStyle_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim___redArg(lean_object* v_t_190_, lean_object* v_lineWidth_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_190_, v_lineWidth_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim(lean_object* v_motive_193_, lean_object* v_t_194_, lean_object* v_h_195_, lean_object* v_lineWidth_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_194_, v_lineWidth_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim___redArg(lean_object* v_t_198_, lean_object* v_font_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_198_, v_font_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim(lean_object* v_motive_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_font_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_202_, v_font_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim___redArg(lean_object* v_t_206_, lean_object* v_textAlign_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_206_, v_textAlign_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_textAlign_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_210_, v_textAlign_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim___redArg(lean_object* v_t_214_, lean_object* v_textBaseline_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_214_, v_textBaseline_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim(lean_object* v_motive_217_, lean_object* v_t_218_, lean_object* v_h_219_, lean_object* v_textBaseline_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_218_, v_textBaseline_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim___redArg(lean_object* v_t_222_, lean_object* v_globalAlpha_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_222_, v_globalAlpha_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim(lean_object* v_motive_225_, lean_object* v_t_226_, lean_object* v_h_227_, lean_object* v_globalAlpha_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_226_, v_globalAlpha_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim___redArg(lean_object* v_t_230_, lean_object* v_lineCap_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_230_, v_lineCap_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim(lean_object* v_motive_233_, lean_object* v_t_234_, lean_object* v_h_235_, lean_object* v_lineCap_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_234_, v_lineCap_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim___redArg(lean_object* v_t_238_, lean_object* v_lineJoin_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_238_, v_lineJoin_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim(lean_object* v_motive_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_lineJoin_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_242_, v_lineJoin_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim___redArg(lean_object* v_t_246_, lean_object* v_fillRect_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_246_, v_fillRect_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_fillRect_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_250_, v_fillRect_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim___redArg(lean_object* v_t_254_, lean_object* v_strokeRect_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_254_, v_strokeRect_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim(lean_object* v_motive_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_strokeRect_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_258_, v_strokeRect_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim___redArg(lean_object* v_t_262_, lean_object* v_clearRect_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_262_, v_clearRect_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_clearRect_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_266_, v_clearRect_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim___redArg(lean_object* v_t_270_, lean_object* v_beginPath_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_270_, v_beginPath_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_beginPath_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_274_, v_beginPath_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim___redArg(lean_object* v_t_278_, lean_object* v_closePath_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_278_, v_closePath_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_closePath_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_282_, v_closePath_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim___redArg(lean_object* v_t_286_, lean_object* v_moveTo_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_286_, v_moveTo_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_moveTo_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_290_, v_moveTo_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim___redArg(lean_object* v_t_294_, lean_object* v_lineTo_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_294_, v_lineTo_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim(lean_object* v_motive_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_lineTo_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_298_, v_lineTo_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim___redArg(lean_object* v_t_302_, lean_object* v_rect_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_302_, v_rect_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_rect_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_306_, v_rect_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim___redArg(lean_object* v_t_310_, lean_object* v_arc_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_310_, v_arc_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim(lean_object* v_motive_313_, lean_object* v_t_314_, lean_object* v_h_315_, lean_object* v_arc_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_314_, v_arc_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim___redArg(lean_object* v_t_318_, lean_object* v_quadraticCurveTo_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_318_, v_quadraticCurveTo_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim(lean_object* v_motive_321_, lean_object* v_t_322_, lean_object* v_h_323_, lean_object* v_quadraticCurveTo_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_322_, v_quadraticCurveTo_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim___redArg(lean_object* v_t_326_, lean_object* v_bezierCurveTo_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_326_, v_bezierCurveTo_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim(lean_object* v_motive_329_, lean_object* v_t_330_, lean_object* v_h_331_, lean_object* v_bezierCurveTo_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_330_, v_bezierCurveTo_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim___redArg(lean_object* v_t_334_, lean_object* v_fill_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_334_, v_fill_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim(lean_object* v_motive_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_fill_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_338_, v_fill_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim___redArg(lean_object* v_t_342_, lean_object* v_stroke_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_342_, v_stroke_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim(lean_object* v_motive_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_stroke_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_346_, v_stroke_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim___redArg(lean_object* v_t_350_, lean_object* v_fillText_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_350_, v_fillText_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_fillText_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_354_, v_fillText_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim___redArg(lean_object* v_t_358_, lean_object* v_strokeText_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_358_, v_strokeText_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_strokeText_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_362_, v_strokeText_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim___redArg(lean_object* v_t_366_, lean_object* v_save_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_366_, v_save_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim(lean_object* v_motive_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_save_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_370_, v_save_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim___redArg(lean_object* v_t_374_, lean_object* v_restore_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_374_, v_restore_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim(lean_object* v_motive_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_restore_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_378_, v_restore_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim___redArg(lean_object* v_t_382_, lean_object* v_translate_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_382_, v_translate_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim(lean_object* v_motive_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_translate_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_386_, v_translate_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim___redArg(lean_object* v_t_390_, lean_object* v_rotate_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_390_, v_rotate_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_rotate_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_394_, v_rotate_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim___redArg(lean_object* v_t_398_, lean_object* v_scale_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_398_, v_scale_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim(lean_object* v_motive_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_scale_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_402_, v_scale_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim___redArg(lean_object* v_t_406_, lean_object* v_setTransform_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_406_, v_setTransform_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_setTransform_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_410_, v_setTransform_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim___redArg(lean_object* v_t_414_, lean_object* v_resetTransform_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_414_, v_resetTransform_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim(lean_object* v_motive_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_resetTransform_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_418_, v_resetTransform_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim___redArg(lean_object* v_t_422_, lean_object* v_drawImage_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_422_, v_drawImage_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim(lean_object* v_motive_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_drawImage_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_426_, v_drawImage_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim___redArg(lean_object* v_t_430_, lean_object* v_drawImageScaled_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_430_, v_drawImageScaled_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_drawImageScaled_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_434_, v_drawImageScaled_436_);
return v___x_437_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_441_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__1));
v___x_442_ = lean_unsigned_to_nat(2u);
v___x_443_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_444_ = lean_array_push(v___x_443_, v___x_441_);
return v___x_444_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_448_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__4));
v___x_449_ = lean_unsigned_to_nat(2u);
v___x_450_ = lean_mk_empty_array_with_capacity(v___x_449_);
v___x_451_ = lean_array_push(v___x_450_, v___x_448_);
return v___x_451_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_455_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__7));
v___x_456_ = lean_unsigned_to_nat(2u);
v___x_457_ = lean_mk_empty_array_with_capacity(v___x_456_);
v___x_458_ = lean_array_push(v___x_457_, v___x_455_);
return v___x_458_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__10));
v___x_463_ = lean_unsigned_to_nat(2u);
v___x_464_ = lean_mk_empty_array_with_capacity(v___x_463_);
v___x_465_ = lean_array_push(v___x_464_, v___x_462_);
return v___x_465_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_469_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__13));
v___x_470_ = lean_unsigned_to_nat(2u);
v___x_471_ = lean_mk_empty_array_with_capacity(v___x_470_);
v___x_472_ = lean_array_push(v___x_471_, v___x_469_);
return v___x_472_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_476_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__16));
v___x_477_ = lean_unsigned_to_nat(2u);
v___x_478_ = lean_mk_empty_array_with_capacity(v___x_477_);
v___x_479_ = lean_array_push(v___x_478_, v___x_476_);
return v___x_479_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_483_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__19));
v___x_484_ = lean_unsigned_to_nat(2u);
v___x_485_ = lean_mk_empty_array_with_capacity(v___x_484_);
v___x_486_ = lean_array_push(v___x_485_, v___x_483_);
return v___x_486_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_490_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__22));
v___x_491_ = lean_unsigned_to_nat(2u);
v___x_492_ = lean_mk_empty_array_with_capacity(v___x_491_);
v___x_493_ = lean_array_push(v___x_492_, v___x_490_);
return v___x_493_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_497_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__25));
v___x_498_ = lean_unsigned_to_nat(2u);
v___x_499_ = lean_mk_empty_array_with_capacity(v___x_498_);
v___x_500_ = lean_array_push(v___x_499_, v___x_497_);
return v___x_500_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_504_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__28));
v___x_505_ = lean_unsigned_to_nat(5u);
v___x_506_ = lean_mk_empty_array_with_capacity(v___x_505_);
v___x_507_ = lean_array_push(v___x_506_, v___x_504_);
return v___x_507_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_511_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__31));
v___x_512_ = lean_unsigned_to_nat(5u);
v___x_513_ = lean_mk_empty_array_with_capacity(v___x_512_);
v___x_514_ = lean_array_push(v___x_513_, v___x_511_);
return v___x_514_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_518_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__34));
v___x_519_ = lean_unsigned_to_nat(5u);
v___x_520_ = lean_mk_empty_array_with_capacity(v___x_519_);
v___x_521_ = lean_array_push(v___x_520_, v___x_518_);
return v___x_521_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_543_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__45));
v___x_544_ = lean_unsigned_to_nat(3u);
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_544_);
v___x_546_ = lean_array_push(v___x_545_, v___x_543_);
return v___x_546_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_550_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__48));
v___x_551_ = lean_unsigned_to_nat(3u);
v___x_552_ = lean_mk_empty_array_with_capacity(v___x_551_);
v___x_553_ = lean_array_push(v___x_552_, v___x_550_);
return v___x_553_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_557_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__51));
v___x_558_ = lean_unsigned_to_nat(5u);
v___x_559_ = lean_mk_empty_array_with_capacity(v___x_558_);
v___x_560_ = lean_array_push(v___x_559_, v___x_557_);
return v___x_560_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_564_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__54));
v___x_565_ = lean_unsigned_to_nat(7u);
v___x_566_ = lean_mk_empty_array_with_capacity(v___x_565_);
v___x_567_ = lean_array_push(v___x_566_, v___x_564_);
return v___x_567_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__57));
v___x_572_ = lean_unsigned_to_nat(5u);
v___x_573_ = lean_mk_empty_array_with_capacity(v___x_572_);
v___x_574_ = lean_array_push(v___x_573_, v___x_571_);
return v___x_574_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_578_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__60));
v___x_579_ = lean_unsigned_to_nat(7u);
v___x_580_ = lean_mk_empty_array_with_capacity(v___x_579_);
v___x_581_ = lean_array_push(v___x_580_, v___x_578_);
return v___x_581_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_603_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__71));
v___x_604_ = lean_unsigned_to_nat(4u);
v___x_605_ = lean_mk_empty_array_with_capacity(v___x_604_);
v___x_606_ = lean_array_push(v___x_605_, v___x_603_);
return v___x_606_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_610_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__74));
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = lean_mk_empty_array_with_capacity(v___x_611_);
v___x_613_ = lean_array_push(v___x_612_, v___x_610_);
return v___x_613_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_635_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__85));
v___x_636_ = lean_unsigned_to_nat(3u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v___x_635_);
return v___x_638_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_642_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__88));
v___x_643_ = lean_unsigned_to_nat(2u);
v___x_644_ = lean_mk_empty_array_with_capacity(v___x_643_);
v___x_645_ = lean_array_push(v___x_644_, v___x_642_);
return v___x_645_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_649_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__91));
v___x_650_ = lean_unsigned_to_nat(3u);
v___x_651_ = lean_mk_empty_array_with_capacity(v___x_650_);
v___x_652_ = lean_array_push(v___x_651_, v___x_649_);
return v___x_652_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_656_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__94));
v___x_657_ = lean_unsigned_to_nat(7u);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_657_);
v___x_659_ = lean_array_push(v___x_658_, v___x_656_);
return v___x_659_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_673_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__101));
v___x_674_ = lean_unsigned_to_nat(4u);
v___x_675_ = lean_mk_empty_array_with_capacity(v___x_674_);
v___x_676_ = lean_array_push(v___x_675_, v___x_673_);
return v___x_676_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__105));
v___x_681_ = lean_unsigned_to_nat(6u);
v___x_682_ = lean_mk_empty_array_with_capacity(v___x_681_);
v___x_683_ = lean_array_push(v___x_682_, v___x_680_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0(lean_object* v_x_684_){
_start:
{
switch(lean_obj_tag(v_x_684_))
{
case 0:
{
lean_object* v_style_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_695_; 
v_style_685_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_695_ == 0)
{
v___x_687_ = v_x_684_;
v_isShared_688_ = v_isSharedCheck_695_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_style_685_);
lean_dec(v_x_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_695_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 4);
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_style_685_);
v___x_690_ = v_reuseFailAlloc_694_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2);
v___x_692_ = lean_array_push(v___x_691_, v___x_690_);
v___x_693_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
}
case 1:
{
lean_object* v_style_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_706_; 
v_style_696_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_706_ == 0)
{
v___x_698_ = v_x_684_;
v_isShared_699_ = v_isSharedCheck_706_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_style_696_);
lean_dec(v_x_684_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_706_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 4);
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_style_696_);
v___x_701_ = v_reuseFailAlloc_705_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_702_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5);
v___x_703_ = lean_array_push(v___x_702_, v___x_701_);
v___x_704_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
}
}
case 2:
{
double v_width_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_717_; 
v_width_707_ = lean_ctor_get_float(v_x_684_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_717_ == 0)
{
v___x_709_ = v_x_684_;
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
else
{
lean_dec(v_x_684_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 3);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_716_, 0, v_width_707_);
v___x_712_ = v_reuseFailAlloc_716_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8);
v___x_714_ = lean_array_push(v___x_713_, v___x_712_);
v___x_715_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
case 3:
{
lean_object* v_font_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_728_; 
v_font_718_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_728_ == 0)
{
v___x_720_ = v_x_684_;
v_isShared_721_ = v_isSharedCheck_728_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_font_718_);
lean_dec(v_x_684_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_728_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 4);
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_font_718_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_724_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11);
v___x_725_ = lean_array_push(v___x_724_, v___x_723_);
v___x_726_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
}
}
case 4:
{
lean_object* v_align_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_739_; 
v_align_729_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_739_ == 0)
{
v___x_731_ = v_x_684_;
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_align_729_);
lean_dec(v_x_684_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_align_729_);
v___x_734_ = v_reuseFailAlloc_738_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14);
v___x_736_ = lean_array_push(v___x_735_, v___x_734_);
v___x_737_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
}
}
case 5:
{
lean_object* v_baseline_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_750_; 
v_baseline_740_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_750_ == 0)
{
v___x_742_ = v_x_684_;
v_isShared_743_ = v_isSharedCheck_750_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_baseline_740_);
lean_dec(v_x_684_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_750_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 4);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_baseline_740_);
v___x_745_ = v_reuseFailAlloc_749_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_746_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17);
v___x_747_ = lean_array_push(v___x_746_, v___x_745_);
v___x_748_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
}
case 6:
{
double v_alpha_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_761_; 
v_alpha_751_ = lean_ctor_get_float(v_x_684_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_761_ == 0)
{
v___x_753_ = v_x_684_;
v_isShared_754_ = v_isSharedCheck_761_;
goto v_resetjp_752_;
}
else
{
lean_dec(v_x_684_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_761_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 3);
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_760_, 0, v_alpha_751_);
v___x_756_ = v_reuseFailAlloc_760_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20);
v___x_758_ = lean_array_push(v___x_757_, v___x_756_);
v___x_759_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
}
case 7:
{
lean_object* v_cap_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_772_; 
v_cap_762_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_772_ == 0)
{
v___x_764_ = v_x_684_;
v_isShared_765_ = v_isSharedCheck_772_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_cap_762_);
lean_dec(v_x_684_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_772_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
lean_ctor_set_tag(v___x_764_, 4);
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_cap_762_);
v___x_767_ = v_reuseFailAlloc_771_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23);
v___x_769_ = lean_array_push(v___x_768_, v___x_767_);
v___x_770_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
case 8:
{
lean_object* v_join_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_783_; 
v_join_773_ = lean_ctor_get(v_x_684_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_783_ == 0)
{
v___x_775_ = v_x_684_;
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_join_773_);
lean_dec(v_x_684_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_783_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 4);
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_join_773_);
v___x_778_ = v_reuseFailAlloc_782_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26);
v___x_780_ = lean_array_push(v___x_779_, v___x_778_);
v___x_781_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
return v___x_781_;
}
}
}
case 9:
{
double v_x_784_; double v_y_785_; double v_width_786_; double v_height_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_x_784_ = lean_ctor_get_float(v_x_684_, 0);
v_y_785_ = lean_ctor_get_float(v_x_684_, 8);
v_width_786_ = lean_ctor_get_float(v_x_684_, 16);
v_height_787_ = lean_ctor_get_float(v_x_684_, 24);
lean_dec_ref_known(v_x_684_, 0);
v___x_788_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_788_, 0, v_x_784_);
v___x_789_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_789_, 0, v_y_785_);
v___x_790_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_790_, 0, v_width_786_);
v___x_791_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_791_, 0, v_height_787_);
v___x_792_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29);
v___x_793_ = lean_array_push(v___x_792_, v___x_788_);
v___x_794_ = lean_array_push(v___x_793_, v___x_789_);
v___x_795_ = lean_array_push(v___x_794_, v___x_790_);
v___x_796_ = lean_array_push(v___x_795_, v___x_791_);
v___x_797_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
case 10:
{
double v_x_798_; double v_y_799_; double v_width_800_; double v_height_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_x_798_ = lean_ctor_get_float(v_x_684_, 0);
v_y_799_ = lean_ctor_get_float(v_x_684_, 8);
v_width_800_ = lean_ctor_get_float(v_x_684_, 16);
v_height_801_ = lean_ctor_get_float(v_x_684_, 24);
lean_dec_ref_known(v_x_684_, 0);
v___x_802_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_802_, 0, v_x_798_);
v___x_803_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_803_, 0, v_y_799_);
v___x_804_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_804_, 0, v_width_800_);
v___x_805_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_805_, 0, v_height_801_);
v___x_806_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32);
v___x_807_ = lean_array_push(v___x_806_, v___x_802_);
v___x_808_ = lean_array_push(v___x_807_, v___x_803_);
v___x_809_ = lean_array_push(v___x_808_, v___x_804_);
v___x_810_ = lean_array_push(v___x_809_, v___x_805_);
v___x_811_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
return v___x_811_;
}
case 11:
{
double v_x_812_; double v_y_813_; double v_width_814_; double v_height_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_x_812_ = lean_ctor_get_float(v_x_684_, 0);
v_y_813_ = lean_ctor_get_float(v_x_684_, 8);
v_width_814_ = lean_ctor_get_float(v_x_684_, 16);
v_height_815_ = lean_ctor_get_float(v_x_684_, 24);
lean_dec_ref_known(v_x_684_, 0);
v___x_816_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_816_, 0, v_x_812_);
v___x_817_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_817_, 0, v_y_813_);
v___x_818_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_818_, 0, v_width_814_);
v___x_819_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_819_, 0, v_height_815_);
v___x_820_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35);
v___x_821_ = lean_array_push(v___x_820_, v___x_816_);
v___x_822_ = lean_array_push(v___x_821_, v___x_817_);
v___x_823_ = lean_array_push(v___x_822_, v___x_818_);
v___x_824_ = lean_array_push(v___x_823_, v___x_819_);
v___x_825_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
return v___x_825_;
}
case 12:
{
lean_object* v___x_826_; 
v___x_826_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39));
return v___x_826_;
}
case 13:
{
lean_object* v___x_827_; 
v___x_827_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43));
return v___x_827_;
}
case 14:
{
double v_x_828_; double v_y_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_x_828_ = lean_ctor_get_float(v_x_684_, 0);
v_y_829_ = lean_ctor_get_float(v_x_684_, 8);
lean_dec_ref_known(v_x_684_, 0);
v___x_830_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_830_, 0, v_x_828_);
v___x_831_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_831_, 0, v_y_829_);
v___x_832_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46);
v___x_833_ = lean_array_push(v___x_832_, v___x_830_);
v___x_834_ = lean_array_push(v___x_833_, v___x_831_);
v___x_835_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
case 15:
{
double v_x_836_; double v_y_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_x_836_ = lean_ctor_get_float(v_x_684_, 0);
v_y_837_ = lean_ctor_get_float(v_x_684_, 8);
lean_dec_ref_known(v_x_684_, 0);
v___x_838_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_838_, 0, v_x_836_);
v___x_839_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_839_, 0, v_y_837_);
v___x_840_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49);
v___x_841_ = lean_array_push(v___x_840_, v___x_838_);
v___x_842_ = lean_array_push(v___x_841_, v___x_839_);
v___x_843_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
case 16:
{
double v_x_844_; double v_y_845_; double v_width_846_; double v_height_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_x_844_ = lean_ctor_get_float(v_x_684_, 0);
v_y_845_ = lean_ctor_get_float(v_x_684_, 8);
v_width_846_ = lean_ctor_get_float(v_x_684_, 16);
v_height_847_ = lean_ctor_get_float(v_x_684_, 24);
lean_dec_ref_known(v_x_684_, 0);
v___x_848_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_848_, 0, v_x_844_);
v___x_849_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_849_, 0, v_y_845_);
v___x_850_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_850_, 0, v_width_846_);
v___x_851_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_851_, 0, v_height_847_);
v___x_852_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52);
v___x_853_ = lean_array_push(v___x_852_, v___x_848_);
v___x_854_ = lean_array_push(v___x_853_, v___x_849_);
v___x_855_ = lean_array_push(v___x_854_, v___x_850_);
v___x_856_ = lean_array_push(v___x_855_, v___x_851_);
v___x_857_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
case 17:
{
double v_x_858_; double v_y_859_; double v_radius_860_; double v_startAngle_861_; double v_endAngle_862_; uint8_t v_counterclockwise_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_x_858_ = lean_ctor_get_float(v_x_684_, 0);
v_y_859_ = lean_ctor_get_float(v_x_684_, 8);
v_radius_860_ = lean_ctor_get_float(v_x_684_, 16);
v_startAngle_861_ = lean_ctor_get_float(v_x_684_, 24);
v_endAngle_862_ = lean_ctor_get_float(v_x_684_, 32);
v_counterclockwise_863_ = lean_ctor_get_uint8(v_x_684_, 40);
lean_dec_ref_known(v_x_684_, 0);
v___x_864_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_864_, 0, v_x_858_);
v___x_865_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_865_, 0, v_y_859_);
v___x_866_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_866_, 0, v_radius_860_);
v___x_867_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_867_, 0, v_startAngle_861_);
v___x_868_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_868_, 0, v_endAngle_862_);
v___x_869_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_869_, 0, v_counterclockwise_863_);
v___x_870_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55);
v___x_871_ = lean_array_push(v___x_870_, v___x_864_);
v___x_872_ = lean_array_push(v___x_871_, v___x_865_);
v___x_873_ = lean_array_push(v___x_872_, v___x_866_);
v___x_874_ = lean_array_push(v___x_873_, v___x_867_);
v___x_875_ = lean_array_push(v___x_874_, v___x_868_);
v___x_876_ = lean_array_push(v___x_875_, v___x_869_);
v___x_877_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_877_, 0, v___x_876_);
return v___x_877_;
}
case 18:
{
double v_cpx_878_; double v_cpy_879_; double v_x_880_; double v_y_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_cpx_878_ = lean_ctor_get_float(v_x_684_, 0);
v_cpy_879_ = lean_ctor_get_float(v_x_684_, 8);
v_x_880_ = lean_ctor_get_float(v_x_684_, 16);
v_y_881_ = lean_ctor_get_float(v_x_684_, 24);
lean_dec_ref_known(v_x_684_, 0);
v___x_882_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_882_, 0, v_cpx_878_);
v___x_883_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_883_, 0, v_cpy_879_);
v___x_884_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_884_, 0, v_x_880_);
v___x_885_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_885_, 0, v_y_881_);
v___x_886_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58);
v___x_887_ = lean_array_push(v___x_886_, v___x_882_);
v___x_888_ = lean_array_push(v___x_887_, v___x_883_);
v___x_889_ = lean_array_push(v___x_888_, v___x_884_);
v___x_890_ = lean_array_push(v___x_889_, v___x_885_);
v___x_891_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
case 19:
{
double v_cp1x_892_; double v_cp1y_893_; double v_cp2x_894_; double v_cp2y_895_; double v_x_896_; double v_y_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_cp1x_892_ = lean_ctor_get_float(v_x_684_, 0);
v_cp1y_893_ = lean_ctor_get_float(v_x_684_, 8);
v_cp2x_894_ = lean_ctor_get_float(v_x_684_, 16);
v_cp2y_895_ = lean_ctor_get_float(v_x_684_, 24);
v_x_896_ = lean_ctor_get_float(v_x_684_, 32);
v_y_897_ = lean_ctor_get_float(v_x_684_, 40);
lean_dec_ref_known(v_x_684_, 0);
v___x_898_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_898_, 0, v_cp1x_892_);
v___x_899_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_899_, 0, v_cp1y_893_);
v___x_900_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_900_, 0, v_cp2x_894_);
v___x_901_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_901_, 0, v_cp2y_895_);
v___x_902_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_902_, 0, v_x_896_);
v___x_903_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_903_, 0, v_y_897_);
v___x_904_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61);
v___x_905_ = lean_array_push(v___x_904_, v___x_898_);
v___x_906_ = lean_array_push(v___x_905_, v___x_899_);
v___x_907_ = lean_array_push(v___x_906_, v___x_900_);
v___x_908_ = lean_array_push(v___x_907_, v___x_901_);
v___x_909_ = lean_array_push(v___x_908_, v___x_902_);
v___x_910_ = lean_array_push(v___x_909_, v___x_903_);
v___x_911_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
case 20:
{
lean_object* v___x_912_; 
v___x_912_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65));
return v___x_912_;
}
case 21:
{
lean_object* v___x_913_; 
v___x_913_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69));
return v___x_913_;
}
case 22:
{
lean_object* v_text_914_; double v_x_915_; double v_y_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_text_914_ = lean_ctor_get(v_x_684_, 0);
lean_inc_ref(v_text_914_);
v_x_915_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1);
v_y_916_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_684_, 1);
v___x_917_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_917_, 0, v_text_914_);
v___x_918_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_918_, 0, v_x_915_);
v___x_919_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_919_, 0, v_y_916_);
v___x_920_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72);
v___x_921_ = lean_array_push(v___x_920_, v___x_917_);
v___x_922_ = lean_array_push(v___x_921_, v___x_918_);
v___x_923_ = lean_array_push(v___x_922_, v___x_919_);
v___x_924_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
case 23:
{
lean_object* v_text_925_; double v_x_926_; double v_y_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v_text_925_ = lean_ctor_get(v_x_684_, 0);
lean_inc_ref(v_text_925_);
v_x_926_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1);
v_y_927_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_684_, 1);
v___x_928_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_928_, 0, v_text_925_);
v___x_929_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_929_, 0, v_x_926_);
v___x_930_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_930_, 0, v_y_927_);
v___x_931_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75);
v___x_932_ = lean_array_push(v___x_931_, v___x_928_);
v___x_933_ = lean_array_push(v___x_932_, v___x_929_);
v___x_934_ = lean_array_push(v___x_933_, v___x_930_);
v___x_935_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
return v___x_935_;
}
case 24:
{
lean_object* v___x_936_; 
v___x_936_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79));
return v___x_936_;
}
case 25:
{
lean_object* v___x_937_; 
v___x_937_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83));
return v___x_937_;
}
case 26:
{
double v_x_938_; double v_y_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_x_938_ = lean_ctor_get_float(v_x_684_, 0);
v_y_939_ = lean_ctor_get_float(v_x_684_, 8);
lean_dec_ref_known(v_x_684_, 0);
v___x_940_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_940_, 0, v_x_938_);
v___x_941_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_941_, 0, v_y_939_);
v___x_942_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86);
v___x_943_ = lean_array_push(v___x_942_, v___x_940_);
v___x_944_ = lean_array_push(v___x_943_, v___x_941_);
v___x_945_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
case 27:
{
double v_angle_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_956_; 
v_angle_946_ = lean_ctor_get_float(v_x_684_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_956_ == 0)
{
v___x_948_ = v_x_684_;
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
else
{
lean_dec(v_x_684_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_956_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 3);
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_955_, 0, v_angle_946_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_952_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89);
v___x_953_ = lean_array_push(v___x_952_, v___x_951_);
v___x_954_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
return v___x_954_;
}
}
}
case 28:
{
double v_x_957_; double v_y_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_x_957_ = lean_ctor_get_float(v_x_684_, 0);
v_y_958_ = lean_ctor_get_float(v_x_684_, 8);
lean_dec_ref_known(v_x_684_, 0);
v___x_959_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_959_, 0, v_x_957_);
v___x_960_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_960_, 0, v_y_958_);
v___x_961_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92);
v___x_962_ = lean_array_push(v___x_961_, v___x_959_);
v___x_963_ = lean_array_push(v___x_962_, v___x_960_);
v___x_964_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
case 29:
{
double v_a_965_; double v_b_966_; double v_c_967_; double v_d_968_; double v_e_969_; double v_f_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_a_965_ = lean_ctor_get_float(v_x_684_, 0);
v_b_966_ = lean_ctor_get_float(v_x_684_, 8);
v_c_967_ = lean_ctor_get_float(v_x_684_, 16);
v_d_968_ = lean_ctor_get_float(v_x_684_, 24);
v_e_969_ = lean_ctor_get_float(v_x_684_, 32);
v_f_970_ = lean_ctor_get_float(v_x_684_, 40);
lean_dec_ref_known(v_x_684_, 0);
v___x_971_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_971_, 0, v_a_965_);
v___x_972_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_972_, 0, v_b_966_);
v___x_973_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_973_, 0, v_c_967_);
v___x_974_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_974_, 0, v_d_968_);
v___x_975_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_975_, 0, v_e_969_);
v___x_976_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_976_, 0, v_f_970_);
v___x_977_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95);
v___x_978_ = lean_array_push(v___x_977_, v___x_971_);
v___x_979_ = lean_array_push(v___x_978_, v___x_972_);
v___x_980_ = lean_array_push(v___x_979_, v___x_973_);
v___x_981_ = lean_array_push(v___x_980_, v___x_974_);
v___x_982_ = lean_array_push(v___x_981_, v___x_975_);
v___x_983_ = lean_array_push(v___x_982_, v___x_976_);
v___x_984_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
return v___x_984_;
}
case 30:
{
lean_object* v___x_985_; 
v___x_985_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99));
return v___x_985_;
}
case 31:
{
lean_object* v_image_986_; double v_x_987_; double v_y_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v_image_986_ = lean_ctor_get(v_x_684_, 0);
lean_inc(v_image_986_);
v_x_987_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1);
v_y_988_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_684_, 1);
v___x_989_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_990_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_990_, 0, v_image_986_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_991_, 0, v_x_987_);
v___x_992_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_992_, 0, v_y_988_);
v___x_993_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103);
v___x_994_ = lean_array_push(v___x_993_, v___x_990_);
v___x_995_ = lean_array_push(v___x_994_, v___x_991_);
v___x_996_ = lean_array_push(v___x_995_, v___x_992_);
v___x_997_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
return v___x_997_;
}
default: 
{
lean_object* v_image_998_; double v_x_999_; double v_y_1000_; double v_width_1001_; double v_height_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_image_998_ = lean_ctor_get(v_x_684_, 0);
lean_inc(v_image_998_);
v_x_999_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1);
v_y_1000_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 8);
v_width_1001_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 16);
v_height_1002_ = lean_ctor_get_float(v_x_684_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_x_684_, 1);
v___x_1003_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1004_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_image_998_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1005_, 0, v_x_999_);
v___x_1006_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1006_, 0, v_y_1000_);
v___x_1007_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1007_, 0, v_width_1001_);
v___x_1008_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1008_, 0, v_height_1002_);
v___x_1009_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106);
v___x_1010_ = lean_array_push(v___x_1009_, v___x_1004_);
v___x_1011_ = lean_array_push(v___x_1010_, v___x_1005_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_1006_);
v___x_1013_ = lean_array_push(v___x_1012_, v___x_1007_);
v___x_1014_ = lean_array_push(v___x_1013_, v___x_1008_);
v___x_1015_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0(lean_object* v___x_1021_, lean_object* v_d_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0));
lean_inc_ref(v___x_1021_);
v___x_1024_ = l_Lasm_JS_readField___redArg(v___x_1021_, v_d_1022_, v___x_1023_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref(v___x_1021_);
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_a_1033_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1033_);
lean_dec_ref_known(v___x_1024_, 1);
v___x_1034_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1));
lean_inc_ref(v___x_1021_);
v___x_1035_ = l_Lasm_JS_readField___redArg(v___x_1021_, v_d_1022_, v___x_1034_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec(v_a_1033_);
lean_dec_ref(v___x_1021_);
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v_a_1044_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1044_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1045_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2));
v___x_1046_ = l_Lasm_JS_readField___redArg(v___x_1021_, v_d_1022_, v___x_1045_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec(v_a_1044_);
lean_dec(v_a_1033_);
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1066_; 
v_a_1055_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1057_ = v___x_1046_;
v_isShared_1058_ = v_isSharedCheck_1066_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1046_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1066_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; double v___x_1060_; double v___x_1061_; double v___x_1062_; lean_object* v___x_1064_; 
v___x_1059_ = lean_alloc_ctor(0, 0, 24);
v___x_1060_ = lean_unbox_float(v_a_1033_);
lean_dec(v_a_1033_);
lean_ctor_set_float(v___x_1059_, 0, v___x_1060_);
v___x_1061_ = lean_unbox_float(v_a_1044_);
lean_dec(v_a_1044_);
lean_ctor_set_float(v___x_1059_, 8, v___x_1061_);
v___x_1062_ = lean_unbox_float(v_a_1055_);
lean_dec(v_a_1055_);
lean_ctor_set_float(v___x_1059_, 16, v___x_1062_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1064_ = v___x_1057_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___boxed(lean_object* v___x_1067_, lean_object* v_d_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lasm_Web_instFromJSTextMetrics___lam__0(v___x_1067_, v_d_1068_);
lean_dec(v_d_1068_);
return v_res_1069_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics___closed__0(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___f_1071_; 
v___x_1070_ = l_Lasm_JS_instFromJSFloat;
v___f_1071_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1071_, 0, v___x_1070_);
return v___f_1071_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics___closed__2(void){
_start:
{
uint8_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___f_1075_; lean_object* v___x_1076_; 
v___x_1073_ = 0;
v___x_1074_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___closed__1));
v___f_1075_ = lean_obj_once(&l_Lasm_Web_instFromJSTextMetrics___closed__0, &l_Lasm_Web_instFromJSTextMetrics___closed__0_once, _init_l_Lasm_Web_instFromJSTextMetrics___closed__0);
v___x_1076_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1076_, 0, v___f_1075_);
lean_ctor_set(v___x_1076_, 1, v___x_1074_);
lean_ctor_set_uint8(v___x_1076_, sizeof(void*)*2, v___x_1073_);
return v___x_1076_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics(void){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_obj_once(&l_Lasm_Web_instFromJSTextMetrics___closed__2, &l_Lasm_Web_instFromJSTextMetrics___closed__2_once, _init_l_Lasm_Web_instFromJSTextMetrics___closed__2);
return v___x_1077_;
}
}
static double _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__0(void){
_start:
{
uint64_t v___x_1078_; double v___x_1079_; 
v___x_1078_ = 0ULL;
v___x_1079_ = lean_uint64_to_float(v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__1(void){
_start:
{
double v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_float_once(&l_Lasm_Web_instInhabitedTextMetrics_default___closed__0, &l_Lasm_Web_instInhabitedTextMetrics_default___closed__0_once, _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__0);
v___x_1081_ = lean_alloc_ctor(0, 0, 24);
lean_ctor_set_float(v___x_1081_, 0, v___x_1080_);
lean_ctor_set_float(v___x_1081_, 8, v___x_1080_);
lean_ctor_set_float(v___x_1081_, 16, v___x_1080_);
return v___x_1081_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics_default(void){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = lean_obj_once(&l_Lasm_Web_instInhabitedTextMetrics_default___closed__1, &l_Lasm_Web_instInhabitedTextMetrics_default___closed__1_once, _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__1);
return v___x_1082_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics(void){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_Web_instInhabitedTextMetrics_default;
return v___x_1083_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_unsigned_to_nat(9u);
v___x_1097_ = lean_nat_to_int(v___x_1096_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_unsigned_to_nat(10u);
v___x_1104_ = lean_nat_to_int(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = lean_unsigned_to_nat(11u);
v___x_1108_ = lean_nat_to_int(v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0));
v___x_1111_ = lean_string_length(v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14);
v___x_1113_ = lean_nat_to_int(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg(lean_object* v_x_1118_){
_start:
{
double v_width_1119_; double v_ascent_1120_; double v_descent_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_width_1119_ = lean_ctor_get_float(v_x_1118_, 0);
v_ascent_1120_ = lean_ctor_get_float(v_x_1118_, 8);
v_descent_1121_ = lean_ctor_get_float(v_x_1118_, 16);
v___x_1122_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4));
v___x_1123_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__5));
v___x_1124_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6);
v___x_1125_ = lean_unsigned_to_nat(0u);
v___x_1126_ = l_Float_repr(v_width_1119_, v___x_1125_);
v___x_1127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1124_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = 0;
v___x_1129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*1, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1123_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__8));
v___x_1132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_box(1);
v___x_1134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__9));
v___x_1136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
lean_ctor_set(v___x_1137_, 1, v___x_1122_);
v___x_1138_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10);
v___x_1139_ = l_Float_repr(v_ascent_1120_, v___x_1125_);
v___x_1140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*1, v___x_1128_);
v___x_1142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1137_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
lean_ctor_set(v___x_1143_, 1, v___x_1131_);
v___x_1144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v___x_1133_);
v___x_1145_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__11));
v___x_1146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v___x_1122_);
v___x_1148_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12);
v___x_1149_ = l_Float_repr(v_descent_1121_, v___x_1125_);
v___x_1150_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
lean_ctor_set_uint8(v___x_1151_, sizeof(void*)*1, v___x_1128_);
v___x_1152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1147_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15);
v___x_1154_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__16));
v___x_1155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
lean_ctor_set(v___x_1155_, 1, v___x_1152_);
v___x_1156_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__17));
v___x_1157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1153_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
lean_ctor_set_uint8(v___x_1159_, sizeof(void*)*1, v___x_1128_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___boxed(lean_object* v_x_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lasm_Web_instReprTextMetrics_repr___redArg(v_x_1160_);
lean_dec_ref(v_x_1160_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr(lean_object* v_x_1162_, lean_object* v_prec_1163_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lasm_Web_instReprTextMetrics_repr___redArg(v_x_1162_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___boxed(lean_object* v_x_1165_, lean_object* v_prec_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lasm_Web_instReprTextMetrics_repr(v_x_1165_, v_prec_1166_);
lean_dec(v_prec_1166_);
lean_dec_ref(v_x_1165_);
return v_res_1167_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6));
v___x_1178_ = lean_unsigned_to_nat(46u);
v___x_1179_ = lean_unsigned_to_nat(193u);
v___x_1180_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5));
v___x_1181_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4));
v___x_1182_ = l_mkPanicMessageWithDecl(v___x_1181_, v___x_1180_, v___x_1179_, v___x_1178_, v___x_1177_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(lean_object* v_context_1184_, lean_object* v_d_1185_){
_start:
{
lean_object* v_received_1188_; 
if (lean_obj_tag(v_d_1185_) == 9)
{
lean_object* v_value_1202_; lean_object* v___x_1203_; 
v_value_1202_ = lean_ctor_get(v_d_1185_, 0);
lean_inc(v_value_1202_);
lean_dec_ref_known(v_d_1185_, 2);
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v_value_1202_);
return v___x_1203_;
}
else
{
if (lean_obj_tag(v_d_1185_) == 9)
{
lean_object* v_value_1204_; lean_object* v_description_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v_value_1204_ = lean_ctor_get(v_d_1185_, 0);
v_description_1205_ = lean_ctor_get(v_d_1185_, 1);
v___x_1206_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1207_ = lean_string_dec_eq(v_description_1205_, v___x_1206_);
if (v___x_1207_ == 0)
{
goto v___jp_1200_;
}
else
{
uint32_t v___x_1208_; uint64_t v___x_1209_; lean_object* v___x_1210_; uint32_t v___x_1211_; lean_object* v___x_1212_; 
lean_inc_n(v_value_1204_, 2);
lean_dec_ref_known(v_d_1185_, 2);
v___x_1208_ = 206;
v___x_1209_ = 0ULL;
v___x_1210_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_value_1204_);
lean_ctor_set(v___x_1210_, 1, v___x_1206_);
v___x_1211_ = lasm_js_value_handle(v_value_1204_);
lean_dec(v_value_1204_);
v___x_1212_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1208_, v___x_1209_, v___x_1210_, v___x_1211_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; uint8_t v___x_1214_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
v___x_1214_ = lean_string_validate_utf8(v_a_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_dec(v_a_1213_);
v___x_1215_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7);
v___x_1216_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1215_);
v_received_1188_ = v___x_1216_;
goto v___jp_1187_;
}
else
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_string_from_utf8_unchecked(v_a_1213_);
v_received_1188_ = v___x_1217_;
goto v___jp_1187_;
}
}
else
{
lean_object* v___x_1218_; 
lean_dec_ref_known(v___x_1212_, 1);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8));
v_received_1188_ = v___x_1218_;
goto v___jp_1187_;
}
}
}
else
{
goto v___jp_1200_;
}
}
v___jp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1190_ = lean_string_append(v___x_1189_, v_context_1184_);
v___x_1191_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_1192_ = lean_string_append(v___x_1190_, v___x_1191_);
v___x_1193_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__2));
v___x_1194_ = lean_string_append(v___x_1192_, v___x_1193_);
v___x_1195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
v___x_1197_ = lean_string_append(v___x_1196_, v_received_1188_);
lean_dec_ref(v_received_1188_);
v___x_1198_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
v___x_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
v___jp_1200_:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lasm_JS_Data_describe(v_d_1185_);
v_received_1188_ = v___x_1201_;
goto v___jp_1187_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___boxed(lean_object* v_context_1219_, lean_object* v_d_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(v_context_1219_, v_d_1220_);
lean_dec_ref(v_context_1219_);
return v_res_1222_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1(void){
_start:
{
uint8_t v___x_1224_; uint64_t v___x_1225_; 
v___x_1224_ = 1;
v___x_1225_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(lean_object* v_b_1226_, lean_object* v_args_1227_, uint8_t v_await_1228_){
_start:
{
uint64_t v___y_1231_; uint64_t v___y_1232_; uint64_t v___x_1267_; uint64_t v___y_1269_; 
v___x_1267_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1);
if (v_await_1228_ == 0)
{
uint64_t v___x_1274_; 
v___x_1274_ = 0ULL;
v___y_1269_ = v___x_1274_;
goto v___jp_1268_;
}
else
{
uint64_t v___x_1275_; 
v___x_1275_ = 2ULL;
v___y_1269_ = v___x_1275_;
goto v___jp_1268_;
}
v___jp_1230_:
{
uint64_t v_flags_1233_; uint32_t v___x_1234_; lean_object* v___x_1235_; uint32_t v___x_1236_; lean_object* v___x_1237_; 
v_flags_1233_ = lean_uint64_lor(v___y_1231_, v___y_1232_);
v___x_1234_ = 214;
v___x_1235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1226_, v_args_1227_);
v___x_1236_ = 0;
v___x_1237_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1234_, v_flags_1233_, v___x_1235_, v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1239_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1238_);
lean_dec_ref_known(v___x_1237_, 1);
v___x_1239_ = l_Lasm_JS_Wire_decode(v_a_1238_);
lean_dec(v_a_1238_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v___x_1241_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1226_);
v___x_1242_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(v___x_1241_, v_a_1240_);
lean_dec_ref(v___x_1241_);
return v___x_1242_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_a_1243_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1239_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1239_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1266_; 
v_a_1251_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1253_ = v___x_1237_;
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1237_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1256_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1226_);
v___x_1257_ = lean_string_append(v___x_1255_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = lean_io_error_to_string(v_a_1251_);
v___x_1261_ = lean_string_append(v___x_1259_, v___x_1260_);
lean_dec_ref(v___x_1260_);
v___x_1262_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1262_);
v___x_1264_ = v___x_1253_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
v___jp_1268_:
{
uint8_t v_construct_1270_; uint64_t v___x_1271_; 
v_construct_1270_ = lean_ctor_get_uint8(v_b_1226_, sizeof(void*)*4);
v___x_1271_ = lean_uint64_lor(v___x_1267_, v___y_1269_);
if (v_construct_1270_ == 0)
{
uint64_t v___x_1272_; 
v___x_1272_ = 0ULL;
v___y_1231_ = v___x_1271_;
v___y_1232_ = v___x_1272_;
goto v___jp_1230_;
}
else
{
uint64_t v___x_1273_; 
v___x_1273_ = 4ULL;
v___y_1231_ = v___x_1271_;
v___y_1232_ = v___x_1273_;
goto v___jp_1230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___boxed(lean_object* v_b_1276_, lean_object* v_args_1277_, lean_object* v_await_1278_, lean_object* v_a_1279_){
_start:
{
uint8_t v_await_boxed_1280_; lean_object* v_res_1281_; 
v_await_boxed_1280_ = lean_unbox(v_await_1278_);
v_res_1281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(v_b_1276_, v_args_1277_, v_await_boxed_1280_);
lean_dec_ref(v_b_1276_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d(lean_object* v_a_1291_, uint8_t v_a_1292_){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1294_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__2));
v___x_1295_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_1296_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1297_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_a_1291_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_array_push(v___x_1295_, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1299_, 0, v_a_1292_);
v___x_1300_ = lean_array_push(v___x_1298_, v___x_1299_);
v___x_1301_ = 1;
v___x_1302_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(v___x_1294_, v___x_1300_, v___x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d___boxed(lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
uint8_t v_a_735__boxed_1306_; lean_object* v_res_1307_; 
v_a_735__boxed_1306_ = lean_unbox(v_a_1304_);
v_res_1307_ = l_Lasm_Web_Raw_context2d(v_a_1303_, v_a_735__boxed_1306_);
return v_res_1307_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0(void){
_start:
{
uint8_t v___x_1308_; uint64_t v___x_1309_; 
v___x_1308_ = 0;
v___x_1309_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1308_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(lean_object* v_b_1310_, lean_object* v_args_1311_, uint8_t v_await_1312_){
_start:
{
uint64_t v___y_1315_; uint64_t v___y_1316_; uint64_t v___x_1349_; uint64_t v___y_1351_; 
v___x_1349_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_1312_ == 0)
{
uint64_t v___x_1356_; 
v___x_1356_ = 0ULL;
v___y_1351_ = v___x_1356_;
goto v___jp_1350_;
}
else
{
uint64_t v___x_1357_; 
v___x_1357_ = 2ULL;
v___y_1351_ = v___x_1357_;
goto v___jp_1350_;
}
v___jp_1314_:
{
uint64_t v_flags_1317_; uint32_t v___x_1318_; lean_object* v___x_1319_; uint32_t v___x_1320_; lean_object* v___x_1321_; 
v_flags_1317_ = lean_uint64_lor(v___y_1315_, v___y_1316_);
v___x_1318_ = 214;
v___x_1319_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1310_, v_args_1311_);
v___x_1320_ = 0;
v___x_1321_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1318_, v_flags_1317_, v___x_1319_, v___x_1320_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; lean_object* v___x_1323_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref_known(v___x_1321_, 1);
v___x_1323_ = l_Lasm_JS_Wire_decode(v_a_1322_);
lean_dec(v_a_1322_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v___x_1324_; 
lean_dec_ref_known(v___x_1323_, 1);
v___x_1324_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_1324_;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
v_a_1325_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1323_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1323_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1348_; 
v_a_1333_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1335_ = v___x_1321_;
v_isShared_1336_ = v_isSharedCheck_1348_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1321_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1348_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1338_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1310_);
v___x_1339_ = lean_string_append(v___x_1337_, v___x_1338_);
lean_dec_ref(v___x_1338_);
v___x_1340_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_1341_ = lean_string_append(v___x_1339_, v___x_1340_);
v___x_1342_ = lean_io_error_to_string(v_a_1333_);
v___x_1343_ = lean_string_append(v___x_1341_, v___x_1342_);
lean_dec_ref(v___x_1342_);
v___x_1344_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1344_);
v___x_1346_ = v___x_1335_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
v___jp_1350_:
{
uint8_t v_construct_1352_; uint64_t v___x_1353_; 
v_construct_1352_ = lean_ctor_get_uint8(v_b_1310_, sizeof(void*)*4);
v___x_1353_ = lean_uint64_lor(v___x_1349_, v___y_1351_);
if (v_construct_1352_ == 0)
{
uint64_t v___x_1354_; 
v___x_1354_ = 0ULL;
v___y_1315_ = v___x_1353_;
v___y_1316_ = v___x_1354_;
goto v___jp_1314_;
}
else
{
uint64_t v___x_1355_; 
v___x_1355_ = 4ULL;
v___y_1315_ = v___x_1353_;
v___y_1316_ = v___x_1355_;
goto v___jp_1314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___boxed(lean_object* v_b_1358_, lean_object* v_args_1359_, lean_object* v_await_1360_, lean_object* v_a_1361_){
_start:
{
uint8_t v_await_boxed_1362_; lean_object* v_res_1363_; 
v_await_boxed_1362_ = lean_unbox(v_await_1360_);
v_res_1363_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v_b_1358_, v_args_1359_, v_await_boxed_1362_);
lean_dec_ref(v_b_1358_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(size_t v_sz_1364_, size_t v_i_1365_, lean_object* v_bs_1366_){
_start:
{
uint8_t v___x_1367_; 
v___x_1367_ = lean_usize_dec_lt(v_i_1365_, v_sz_1364_);
if (v___x_1367_ == 0)
{
return v_bs_1366_;
}
else
{
lean_object* v_v_1368_; lean_object* v___x_1369_; lean_object* v_bs_x27_1370_; lean_object* v___y_1372_; 
v_v_1368_ = lean_array_uget(v_bs_1366_, v_i_1365_);
v___x_1369_ = lean_unsigned_to_nat(0u);
v_bs_x27_1370_ = lean_array_uset(v_bs_1366_, v_i_1365_, v___x_1369_);
switch(lean_obj_tag(v_v_1368_))
{
case 0:
{
lean_object* v_style_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1389_; 
v_style_1377_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1379_ = v_v_1368_;
v_isShared_1380_ = v_isSharedCheck_1389_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_style_1377_);
lean_dec(v_v_1368_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1389_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
lean_ctor_set_tag(v___x_1379_, 4);
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_style_1377_);
v___x_1382_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1383_ = lean_unsigned_to_nat(2u);
v___x_1384_ = lean_mk_empty_array_with_capacity(v___x_1383_);
lean_dec_ref(v___x_1384_);
v___x_1385_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2);
v___x_1386_ = lean_array_push(v___x_1385_, v___x_1382_);
v___x_1387_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
v___y_1372_ = v___x_1387_;
goto v___jp_1371_;
}
}
}
case 1:
{
lean_object* v_style_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1402_; 
v_style_1390_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1392_ = v_v_1368_;
v_isShared_1393_ = v_isSharedCheck_1402_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_style_1390_);
lean_dec(v_v_1368_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1402_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 4);
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_style_1390_);
v___x_1395_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1396_ = lean_unsigned_to_nat(2u);
v___x_1397_ = lean_mk_empty_array_with_capacity(v___x_1396_);
lean_dec_ref(v___x_1397_);
v___x_1398_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1395_);
v___x_1400_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
v___y_1372_ = v___x_1400_;
goto v___jp_1371_;
}
}
}
case 2:
{
double v_width_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1415_; 
v_width_1403_ = lean_ctor_get_float(v_v_1368_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1405_ = v_v_1368_;
v_isShared_1406_ = v_isSharedCheck_1415_;
goto v_resetjp_1404_;
}
else
{
lean_dec(v_v_1368_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1415_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 3);
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1414_, 0, v_width_1403_);
v___x_1408_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1409_ = lean_unsigned_to_nat(2u);
v___x_1410_ = lean_mk_empty_array_with_capacity(v___x_1409_);
lean_dec_ref(v___x_1410_);
v___x_1411_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8);
v___x_1412_ = lean_array_push(v___x_1411_, v___x_1408_);
v___x_1413_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
v___y_1372_ = v___x_1413_;
goto v___jp_1371_;
}
}
}
case 3:
{
lean_object* v_font_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1428_; 
v_font_1416_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1418_ = v_v_1368_;
v_isShared_1419_ = v_isSharedCheck_1428_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_font_1416_);
lean_dec(v_v_1368_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1428_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
lean_ctor_set_tag(v___x_1418_, 4);
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_font_1416_);
v___x_1421_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1422_ = lean_unsigned_to_nat(2u);
v___x_1423_ = lean_mk_empty_array_with_capacity(v___x_1422_);
lean_dec_ref(v___x_1423_);
v___x_1424_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11);
v___x_1425_ = lean_array_push(v___x_1424_, v___x_1421_);
v___x_1426_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
v___y_1372_ = v___x_1426_;
goto v___jp_1371_;
}
}
}
case 4:
{
lean_object* v_align_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1441_; 
v_align_1429_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1431_ = v_v_1368_;
v_isShared_1432_ = v_isSharedCheck_1441_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_align_1429_);
lean_dec(v_v_1368_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1441_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_align_1429_);
v___x_1434_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1435_ = lean_unsigned_to_nat(2u);
v___x_1436_ = lean_mk_empty_array_with_capacity(v___x_1435_);
lean_dec_ref(v___x_1436_);
v___x_1437_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14);
v___x_1438_ = lean_array_push(v___x_1437_, v___x_1434_);
v___x_1439_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
v___y_1372_ = v___x_1439_;
goto v___jp_1371_;
}
}
}
case 5:
{
lean_object* v_baseline_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1454_; 
v_baseline_1442_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1444_ = v_v_1368_;
v_isShared_1445_ = v_isSharedCheck_1454_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_baseline_1442_);
lean_dec(v_v_1368_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1454_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
lean_ctor_set_tag(v___x_1444_, 4);
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_baseline_1442_);
v___x_1447_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1448_ = lean_unsigned_to_nat(2u);
v___x_1449_ = lean_mk_empty_array_with_capacity(v___x_1448_);
lean_dec_ref(v___x_1449_);
v___x_1450_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17);
v___x_1451_ = lean_array_push(v___x_1450_, v___x_1447_);
v___x_1452_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
v___y_1372_ = v___x_1452_;
goto v___jp_1371_;
}
}
}
case 6:
{
double v_alpha_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1467_; 
v_alpha_1455_ = lean_ctor_get_float(v_v_1368_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1457_ = v_v_1368_;
v_isShared_1458_ = v_isSharedCheck_1467_;
goto v_resetjp_1456_;
}
else
{
lean_dec(v_v_1368_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1467_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 3);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1466_, 0, v_alpha_1455_);
v___x_1460_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1461_ = lean_unsigned_to_nat(2u);
v___x_1462_ = lean_mk_empty_array_with_capacity(v___x_1461_);
lean_dec_ref(v___x_1462_);
v___x_1463_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1460_);
v___x_1465_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
v___y_1372_ = v___x_1465_;
goto v___jp_1371_;
}
}
}
case 7:
{
lean_object* v_cap_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1480_; 
v_cap_1468_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1470_ = v_v_1368_;
v_isShared_1471_ = v_isSharedCheck_1480_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_cap_1468_);
lean_dec(v_v_1368_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1480_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 4);
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_cap_1468_);
v___x_1473_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1474_ = lean_unsigned_to_nat(2u);
v___x_1475_ = lean_mk_empty_array_with_capacity(v___x_1474_);
lean_dec_ref(v___x_1475_);
v___x_1476_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1473_);
v___x_1478_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
v___y_1372_ = v___x_1478_;
goto v___jp_1371_;
}
}
}
case 8:
{
lean_object* v_join_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1493_; 
v_join_1481_ = lean_ctor_get(v_v_1368_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1483_ = v_v_1368_;
v_isShared_1484_ = v_isSharedCheck_1493_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_join_1481_);
lean_dec(v_v_1368_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1493_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
lean_ctor_set_tag(v___x_1483_, 4);
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_join_1481_);
v___x_1486_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1487_ = lean_unsigned_to_nat(2u);
v___x_1488_ = lean_mk_empty_array_with_capacity(v___x_1487_);
lean_dec_ref(v___x_1488_);
v___x_1489_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1486_);
v___x_1491_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
v___y_1372_ = v___x_1491_;
goto v___jp_1371_;
}
}
}
case 9:
{
double v_x_1494_; double v_y_1495_; double v_width_1496_; double v_height_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_x_1494_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1495_ = lean_ctor_get_float(v_v_1368_, 8);
v_width_1496_ = lean_ctor_get_float(v_v_1368_, 16);
v_height_1497_ = lean_ctor_get_float(v_v_1368_, 24);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1498_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1498_, 0, v_x_1494_);
v___x_1499_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1499_, 0, v_y_1495_);
v___x_1500_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1500_, 0, v_width_1496_);
v___x_1501_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1501_, 0, v_height_1497_);
v___x_1502_ = lean_unsigned_to_nat(5u);
v___x_1503_ = lean_mk_empty_array_with_capacity(v___x_1502_);
lean_dec_ref(v___x_1503_);
v___x_1504_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29);
v___x_1505_ = lean_array_push(v___x_1504_, v___x_1498_);
v___x_1506_ = lean_array_push(v___x_1505_, v___x_1499_);
v___x_1507_ = lean_array_push(v___x_1506_, v___x_1500_);
v___x_1508_ = lean_array_push(v___x_1507_, v___x_1501_);
v___x_1509_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
v___y_1372_ = v___x_1509_;
goto v___jp_1371_;
}
case 10:
{
double v_x_1510_; double v_y_1511_; double v_width_1512_; double v_height_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_x_1510_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1511_ = lean_ctor_get_float(v_v_1368_, 8);
v_width_1512_ = lean_ctor_get_float(v_v_1368_, 16);
v_height_1513_ = lean_ctor_get_float(v_v_1368_, 24);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1514_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1514_, 0, v_x_1510_);
v___x_1515_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1515_, 0, v_y_1511_);
v___x_1516_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1516_, 0, v_width_1512_);
v___x_1517_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1517_, 0, v_height_1513_);
v___x_1518_ = lean_unsigned_to_nat(5u);
v___x_1519_ = lean_mk_empty_array_with_capacity(v___x_1518_);
lean_dec_ref(v___x_1519_);
v___x_1520_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32);
v___x_1521_ = lean_array_push(v___x_1520_, v___x_1514_);
v___x_1522_ = lean_array_push(v___x_1521_, v___x_1515_);
v___x_1523_ = lean_array_push(v___x_1522_, v___x_1516_);
v___x_1524_ = lean_array_push(v___x_1523_, v___x_1517_);
v___x_1525_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
v___y_1372_ = v___x_1525_;
goto v___jp_1371_;
}
case 11:
{
double v_x_1526_; double v_y_1527_; double v_width_1528_; double v_height_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v_x_1526_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1527_ = lean_ctor_get_float(v_v_1368_, 8);
v_width_1528_ = lean_ctor_get_float(v_v_1368_, 16);
v_height_1529_ = lean_ctor_get_float(v_v_1368_, 24);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1530_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1530_, 0, v_x_1526_);
v___x_1531_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1531_, 0, v_y_1527_);
v___x_1532_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1532_, 0, v_width_1528_);
v___x_1533_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1533_, 0, v_height_1529_);
v___x_1534_ = lean_unsigned_to_nat(5u);
v___x_1535_ = lean_mk_empty_array_with_capacity(v___x_1534_);
lean_dec_ref(v___x_1535_);
v___x_1536_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35);
v___x_1537_ = lean_array_push(v___x_1536_, v___x_1530_);
v___x_1538_ = lean_array_push(v___x_1537_, v___x_1531_);
v___x_1539_ = lean_array_push(v___x_1538_, v___x_1532_);
v___x_1540_ = lean_array_push(v___x_1539_, v___x_1533_);
v___x_1541_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
v___y_1372_ = v___x_1541_;
goto v___jp_1371_;
}
case 12:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1542_ = lean_unsigned_to_nat(1u);
v___x_1543_ = lean_mk_empty_array_with_capacity(v___x_1542_);
lean_dec_ref(v___x_1543_);
v___x_1544_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39));
v___y_1372_ = v___x_1544_;
goto v___jp_1371_;
}
case 13:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = lean_unsigned_to_nat(1u);
v___x_1546_ = lean_mk_empty_array_with_capacity(v___x_1545_);
lean_dec_ref(v___x_1546_);
v___x_1547_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43));
v___y_1372_ = v___x_1547_;
goto v___jp_1371_;
}
case 14:
{
double v_x_1548_; double v_y_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_x_1548_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1549_ = lean_ctor_get_float(v_v_1368_, 8);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1550_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1550_, 0, v_x_1548_);
v___x_1551_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1551_, 0, v_y_1549_);
v___x_1552_ = lean_unsigned_to_nat(3u);
v___x_1553_ = lean_mk_empty_array_with_capacity(v___x_1552_);
lean_dec_ref(v___x_1553_);
v___x_1554_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1550_);
v___x_1556_ = lean_array_push(v___x_1555_, v___x_1551_);
v___x_1557_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
v___y_1372_ = v___x_1557_;
goto v___jp_1371_;
}
case 15:
{
double v_x_1558_; double v_y_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_x_1558_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1559_ = lean_ctor_get_float(v_v_1368_, 8);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1560_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1560_, 0, v_x_1558_);
v___x_1561_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1561_, 0, v_y_1559_);
v___x_1562_ = lean_unsigned_to_nat(3u);
v___x_1563_ = lean_mk_empty_array_with_capacity(v___x_1562_);
lean_dec_ref(v___x_1563_);
v___x_1564_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49);
v___x_1565_ = lean_array_push(v___x_1564_, v___x_1560_);
v___x_1566_ = lean_array_push(v___x_1565_, v___x_1561_);
v___x_1567_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
v___y_1372_ = v___x_1567_;
goto v___jp_1371_;
}
case 16:
{
double v_x_1568_; double v_y_1569_; double v_width_1570_; double v_height_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v_x_1568_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1569_ = lean_ctor_get_float(v_v_1368_, 8);
v_width_1570_ = lean_ctor_get_float(v_v_1368_, 16);
v_height_1571_ = lean_ctor_get_float(v_v_1368_, 24);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1572_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1572_, 0, v_x_1568_);
v___x_1573_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1573_, 0, v_y_1569_);
v___x_1574_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1574_, 0, v_width_1570_);
v___x_1575_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1575_, 0, v_height_1571_);
v___x_1576_ = lean_unsigned_to_nat(5u);
v___x_1577_ = lean_mk_empty_array_with_capacity(v___x_1576_);
lean_dec_ref(v___x_1577_);
v___x_1578_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52);
v___x_1579_ = lean_array_push(v___x_1578_, v___x_1572_);
v___x_1580_ = lean_array_push(v___x_1579_, v___x_1573_);
v___x_1581_ = lean_array_push(v___x_1580_, v___x_1574_);
v___x_1582_ = lean_array_push(v___x_1581_, v___x_1575_);
v___x_1583_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
v___y_1372_ = v___x_1583_;
goto v___jp_1371_;
}
case 17:
{
double v_x_1584_; double v_y_1585_; double v_radius_1586_; double v_startAngle_1587_; double v_endAngle_1588_; uint8_t v_counterclockwise_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_x_1584_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1585_ = lean_ctor_get_float(v_v_1368_, 8);
v_radius_1586_ = lean_ctor_get_float(v_v_1368_, 16);
v_startAngle_1587_ = lean_ctor_get_float(v_v_1368_, 24);
v_endAngle_1588_ = lean_ctor_get_float(v_v_1368_, 32);
v_counterclockwise_1589_ = lean_ctor_get_uint8(v_v_1368_, 40);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1590_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1590_, 0, v_x_1584_);
v___x_1591_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1591_, 0, v_y_1585_);
v___x_1592_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1592_, 0, v_radius_1586_);
v___x_1593_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1593_, 0, v_startAngle_1587_);
v___x_1594_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1594_, 0, v_endAngle_1588_);
v___x_1595_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1595_, 0, v_counterclockwise_1589_);
v___x_1596_ = lean_unsigned_to_nat(7u);
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1596_);
lean_dec_ref(v___x_1597_);
v___x_1598_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55);
v___x_1599_ = lean_array_push(v___x_1598_, v___x_1590_);
v___x_1600_ = lean_array_push(v___x_1599_, v___x_1591_);
v___x_1601_ = lean_array_push(v___x_1600_, v___x_1592_);
v___x_1602_ = lean_array_push(v___x_1601_, v___x_1593_);
v___x_1603_ = lean_array_push(v___x_1602_, v___x_1594_);
v___x_1604_ = lean_array_push(v___x_1603_, v___x_1595_);
v___x_1605_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
v___y_1372_ = v___x_1605_;
goto v___jp_1371_;
}
case 18:
{
double v_cpx_1606_; double v_cpy_1607_; double v_x_1608_; double v_y_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_cpx_1606_ = lean_ctor_get_float(v_v_1368_, 0);
v_cpy_1607_ = lean_ctor_get_float(v_v_1368_, 8);
v_x_1608_ = lean_ctor_get_float(v_v_1368_, 16);
v_y_1609_ = lean_ctor_get_float(v_v_1368_, 24);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1610_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1610_, 0, v_cpx_1606_);
v___x_1611_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1611_, 0, v_cpy_1607_);
v___x_1612_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1612_, 0, v_x_1608_);
v___x_1613_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1613_, 0, v_y_1609_);
v___x_1614_ = lean_unsigned_to_nat(5u);
v___x_1615_ = lean_mk_empty_array_with_capacity(v___x_1614_);
lean_dec_ref(v___x_1615_);
v___x_1616_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58);
v___x_1617_ = lean_array_push(v___x_1616_, v___x_1610_);
v___x_1618_ = lean_array_push(v___x_1617_, v___x_1611_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1612_);
v___x_1620_ = lean_array_push(v___x_1619_, v___x_1613_);
v___x_1621_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
v___y_1372_ = v___x_1621_;
goto v___jp_1371_;
}
case 19:
{
double v_cp1x_1622_; double v_cp1y_1623_; double v_cp2x_1624_; double v_cp2y_1625_; double v_x_1626_; double v_y_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_cp1x_1622_ = lean_ctor_get_float(v_v_1368_, 0);
v_cp1y_1623_ = lean_ctor_get_float(v_v_1368_, 8);
v_cp2x_1624_ = lean_ctor_get_float(v_v_1368_, 16);
v_cp2y_1625_ = lean_ctor_get_float(v_v_1368_, 24);
v_x_1626_ = lean_ctor_get_float(v_v_1368_, 32);
v_y_1627_ = lean_ctor_get_float(v_v_1368_, 40);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1628_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1628_, 0, v_cp1x_1622_);
v___x_1629_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1629_, 0, v_cp1y_1623_);
v___x_1630_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1630_, 0, v_cp2x_1624_);
v___x_1631_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1631_, 0, v_cp2y_1625_);
v___x_1632_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1632_, 0, v_x_1626_);
v___x_1633_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1633_, 0, v_y_1627_);
v___x_1634_ = lean_unsigned_to_nat(7u);
v___x_1635_ = lean_mk_empty_array_with_capacity(v___x_1634_);
lean_dec_ref(v___x_1635_);
v___x_1636_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61);
v___x_1637_ = lean_array_push(v___x_1636_, v___x_1628_);
v___x_1638_ = lean_array_push(v___x_1637_, v___x_1629_);
v___x_1639_ = lean_array_push(v___x_1638_, v___x_1630_);
v___x_1640_ = lean_array_push(v___x_1639_, v___x_1631_);
v___x_1641_ = lean_array_push(v___x_1640_, v___x_1632_);
v___x_1642_ = lean_array_push(v___x_1641_, v___x_1633_);
v___x_1643_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
v___y_1372_ = v___x_1643_;
goto v___jp_1371_;
}
case 20:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = lean_unsigned_to_nat(1u);
v___x_1645_ = lean_mk_empty_array_with_capacity(v___x_1644_);
lean_dec_ref(v___x_1645_);
v___x_1646_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65));
v___y_1372_ = v___x_1646_;
goto v___jp_1371_;
}
case 21:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1647_ = lean_unsigned_to_nat(1u);
v___x_1648_ = lean_mk_empty_array_with_capacity(v___x_1647_);
lean_dec_ref(v___x_1648_);
v___x_1649_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69));
v___y_1372_ = v___x_1649_;
goto v___jp_1371_;
}
case 22:
{
lean_object* v_text_1650_; double v_x_1651_; double v_y_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v_text_1650_ = lean_ctor_get(v_v_1368_, 0);
lean_inc_ref(v_text_1650_);
v_x_1651_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1);
v_y_1652_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1368_, 1);
v___x_1653_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1653_, 0, v_text_1650_);
v___x_1654_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1654_, 0, v_x_1651_);
v___x_1655_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1655_, 0, v_y_1652_);
v___x_1656_ = lean_unsigned_to_nat(4u);
v___x_1657_ = lean_mk_empty_array_with_capacity(v___x_1656_);
lean_dec_ref(v___x_1657_);
v___x_1658_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72);
v___x_1659_ = lean_array_push(v___x_1658_, v___x_1653_);
v___x_1660_ = lean_array_push(v___x_1659_, v___x_1654_);
v___x_1661_ = lean_array_push(v___x_1660_, v___x_1655_);
v___x_1662_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
v___y_1372_ = v___x_1662_;
goto v___jp_1371_;
}
case 23:
{
lean_object* v_text_1663_; double v_x_1664_; double v_y_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_text_1663_ = lean_ctor_get(v_v_1368_, 0);
lean_inc_ref(v_text_1663_);
v_x_1664_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1);
v_y_1665_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1368_, 1);
v___x_1666_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_text_1663_);
v___x_1667_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1667_, 0, v_x_1664_);
v___x_1668_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1668_, 0, v_y_1665_);
v___x_1669_ = lean_unsigned_to_nat(4u);
v___x_1670_ = lean_mk_empty_array_with_capacity(v___x_1669_);
lean_dec_ref(v___x_1670_);
v___x_1671_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75);
v___x_1672_ = lean_array_push(v___x_1671_, v___x_1666_);
v___x_1673_ = lean_array_push(v___x_1672_, v___x_1667_);
v___x_1674_ = lean_array_push(v___x_1673_, v___x_1668_);
v___x_1675_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
v___y_1372_ = v___x_1675_;
goto v___jp_1371_;
}
case 24:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = lean_unsigned_to_nat(1u);
v___x_1677_ = lean_mk_empty_array_with_capacity(v___x_1676_);
lean_dec_ref(v___x_1677_);
v___x_1678_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79));
v___y_1372_ = v___x_1678_;
goto v___jp_1371_;
}
case 25:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1679_ = lean_unsigned_to_nat(1u);
v___x_1680_ = lean_mk_empty_array_with_capacity(v___x_1679_);
lean_dec_ref(v___x_1680_);
v___x_1681_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83));
v___y_1372_ = v___x_1681_;
goto v___jp_1371_;
}
case 26:
{
double v_x_1682_; double v_y_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v_x_1682_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1683_ = lean_ctor_get_float(v_v_1368_, 8);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1684_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1684_, 0, v_x_1682_);
v___x_1685_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1685_, 0, v_y_1683_);
v___x_1686_ = lean_unsigned_to_nat(3u);
v___x_1687_ = lean_mk_empty_array_with_capacity(v___x_1686_);
lean_dec_ref(v___x_1687_);
v___x_1688_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86);
v___x_1689_ = lean_array_push(v___x_1688_, v___x_1684_);
v___x_1690_ = lean_array_push(v___x_1689_, v___x_1685_);
v___x_1691_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___y_1372_ = v___x_1691_;
goto v___jp_1371_;
}
case 27:
{
double v_angle_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1704_; 
v_angle_1692_ = lean_ctor_get_float(v_v_1368_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v_v_1368_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1694_ = v_v_1368_;
v_isShared_1695_ = v_isSharedCheck_1704_;
goto v_resetjp_1693_;
}
else
{
lean_dec(v_v_1368_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1704_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set_tag(v___x_1694_, 3);
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1703_, 0, v_angle_1692_);
v___x_1697_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1698_ = lean_unsigned_to_nat(2u);
v___x_1699_ = lean_mk_empty_array_with_capacity(v___x_1698_);
lean_dec_ref(v___x_1699_);
v___x_1700_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1697_);
v___x_1702_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
v___y_1372_ = v___x_1702_;
goto v___jp_1371_;
}
}
}
case 28:
{
double v_x_1705_; double v_y_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_x_1705_ = lean_ctor_get_float(v_v_1368_, 0);
v_y_1706_ = lean_ctor_get_float(v_v_1368_, 8);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1707_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1707_, 0, v_x_1705_);
v___x_1708_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1708_, 0, v_y_1706_);
v___x_1709_ = lean_unsigned_to_nat(3u);
v___x_1710_ = lean_mk_empty_array_with_capacity(v___x_1709_);
lean_dec_ref(v___x_1710_);
v___x_1711_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1707_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1708_);
v___x_1714_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
v___y_1372_ = v___x_1714_;
goto v___jp_1371_;
}
case 29:
{
double v_a_1715_; double v_b_1716_; double v_c_1717_; double v_d_1718_; double v_e_1719_; double v_f_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v_a_1715_ = lean_ctor_get_float(v_v_1368_, 0);
v_b_1716_ = lean_ctor_get_float(v_v_1368_, 8);
v_c_1717_ = lean_ctor_get_float(v_v_1368_, 16);
v_d_1718_ = lean_ctor_get_float(v_v_1368_, 24);
v_e_1719_ = lean_ctor_get_float(v_v_1368_, 32);
v_f_1720_ = lean_ctor_get_float(v_v_1368_, 40);
lean_dec_ref_known(v_v_1368_, 0);
v___x_1721_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1721_, 0, v_a_1715_);
v___x_1722_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1722_, 0, v_b_1716_);
v___x_1723_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1723_, 0, v_c_1717_);
v___x_1724_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1724_, 0, v_d_1718_);
v___x_1725_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1725_, 0, v_e_1719_);
v___x_1726_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1726_, 0, v_f_1720_);
v___x_1727_ = lean_unsigned_to_nat(7u);
v___x_1728_ = lean_mk_empty_array_with_capacity(v___x_1727_);
lean_dec_ref(v___x_1728_);
v___x_1729_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95);
v___x_1730_ = lean_array_push(v___x_1729_, v___x_1721_);
v___x_1731_ = lean_array_push(v___x_1730_, v___x_1722_);
v___x_1732_ = lean_array_push(v___x_1731_, v___x_1723_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1724_);
v___x_1734_ = lean_array_push(v___x_1733_, v___x_1725_);
v___x_1735_ = lean_array_push(v___x_1734_, v___x_1726_);
v___x_1736_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
v___y_1372_ = v___x_1736_;
goto v___jp_1371_;
}
case 30:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_unsigned_to_nat(1u);
v___x_1738_ = lean_mk_empty_array_with_capacity(v___x_1737_);
lean_dec_ref(v___x_1738_);
v___x_1739_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99));
v___y_1372_ = v___x_1739_;
goto v___jp_1371_;
}
case 31:
{
lean_object* v_image_1740_; double v_x_1741_; double v_y_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_image_1740_ = lean_ctor_get(v_v_1368_, 0);
lean_inc(v_image_1740_);
v_x_1741_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1);
v_y_1742_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1368_, 1);
v___x_1743_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1744_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_image_1740_);
lean_ctor_set(v___x_1744_, 1, v___x_1743_);
v___x_1745_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1745_, 0, v_x_1741_);
v___x_1746_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1746_, 0, v_y_1742_);
v___x_1747_ = lean_unsigned_to_nat(4u);
v___x_1748_ = lean_mk_empty_array_with_capacity(v___x_1747_);
lean_dec_ref(v___x_1748_);
v___x_1749_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103);
v___x_1750_ = lean_array_push(v___x_1749_, v___x_1744_);
v___x_1751_ = lean_array_push(v___x_1750_, v___x_1745_);
v___x_1752_ = lean_array_push(v___x_1751_, v___x_1746_);
v___x_1753_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
v___y_1372_ = v___x_1753_;
goto v___jp_1371_;
}
default: 
{
lean_object* v_image_1754_; double v_x_1755_; double v_y_1756_; double v_width_1757_; double v_height_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_image_1754_ = lean_ctor_get(v_v_1368_, 0);
lean_inc(v_image_1754_);
v_x_1755_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1);
v_y_1756_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 8);
v_width_1757_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 16);
v_height_1758_ = lean_ctor_get_float(v_v_1368_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_v_1368_, 1);
v___x_1759_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1760_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_image_1754_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1761_, 0, v_x_1755_);
v___x_1762_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1762_, 0, v_y_1756_);
v___x_1763_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1763_, 0, v_width_1757_);
v___x_1764_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1764_, 0, v_height_1758_);
v___x_1765_ = lean_unsigned_to_nat(6u);
v___x_1766_ = lean_mk_empty_array_with_capacity(v___x_1765_);
lean_dec_ref(v___x_1766_);
v___x_1767_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106);
v___x_1768_ = lean_array_push(v___x_1767_, v___x_1760_);
v___x_1769_ = lean_array_push(v___x_1768_, v___x_1761_);
v___x_1770_ = lean_array_push(v___x_1769_, v___x_1762_);
v___x_1771_ = lean_array_push(v___x_1770_, v___x_1763_);
v___x_1772_ = lean_array_push(v___x_1771_, v___x_1764_);
v___x_1773_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
v___y_1372_ = v___x_1773_;
goto v___jp_1371_;
}
}
v___jp_1371_:
{
size_t v___x_1373_; size_t v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = ((size_t)1ULL);
v___x_1374_ = lean_usize_add(v_i_1365_, v___x_1373_);
v___x_1375_ = lean_array_uset(v_bs_x27_1370_, v_i_1365_, v___y_1372_);
v_i_1365_ = v___x_1374_;
v_bs_1366_ = v___x_1375_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0___boxed(lean_object* v_sz_1774_, lean_object* v_i_1775_, lean_object* v_bs_1776_){
_start:
{
size_t v_sz_boxed_1777_; size_t v_i_boxed_1778_; lean_object* v_res_1779_; 
v_sz_boxed_1777_ = lean_unbox_usize(v_sz_1774_);
lean_dec(v_sz_1774_);
v_i_boxed_1778_ = lean_unbox_usize(v_i_1775_);
lean_dec(v_i_1775_);
v_res_1779_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(v_sz_boxed_1777_, v_i_boxed_1778_, v_bs_1776_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw(lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; size_t v_sz_1794_; size_t v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; lean_object* v___x_1800_; 
v___x_1789_ = ((lean_object*)(l_Lasm_Web_Raw_draw___closed__1));
v___x_1790_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_1791_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1792_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_a_1786_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = lean_array_push(v___x_1790_, v___x_1792_);
v_sz_1794_ = lean_array_size(v_a_1787_);
v___x_1795_ = ((size_t)0ULL);
v___x_1796_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(v_sz_1794_, v___x_1795_, v_a_1787_);
v___x_1797_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
v___x_1798_ = lean_array_push(v___x_1793_, v___x_1797_);
v___x_1799_ = 1;
v___x_1800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v___x_1789_, v___x_1798_, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw___boxed(lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lasm_Web_Raw_draw(v_a_1801_, v_a_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(lean_object* v_d_1812_, lean_object* v_key_1813_){
_start:
{
if (lean_obj_tag(v_d_1812_) == 8)
{
lean_object* v___x_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1836_; 
v___x_1814_ = l_Lasm_JS_Data_field(v_d_1812_, v_key_1813_);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_d_1812_);
if (v_isSharedCheck_1836_ == 0)
{
lean_object* v_unused_1837_; 
v_unused_1837_ = lean_ctor_get(v_d_1812_, 0);
lean_dec(v_unused_1837_);
v___x_1816_ = v_d_1812_;
v_isShared_1817_ = v_isSharedCheck_1836_;
goto v_resetjp_1815_;
}
else
{
lean_dec(v_d_1812_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1836_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
if (lean_obj_tag(v___x_1814_) == 3)
{
double v_n_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v_n_1818_ = lean_ctor_get_float(v___x_1814_, 0);
lean_dec_ref_known(v___x_1814_, 0);
v___x_1819_ = lean_box_float(v_n_1818_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set_tag(v___x_1816_, 1);
lean_ctor_set(v___x_1816_, 0, v___x_1819_);
v___x_1821_ = v___x_1816_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1834_; 
v___x_1823_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__0));
v___x_1824_ = lean_string_append(v___x_1823_, v_key_1813_);
v___x_1825_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__1));
v___x_1826_ = lean_string_append(v___x_1824_, v___x_1825_);
v___x_1827_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__2));
v___x_1828_ = lean_string_append(v___x_1826_, v___x_1827_);
v___x_1829_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__3));
v___x_1830_ = lean_string_append(v___x_1828_, v___x_1829_);
v___x_1831_ = l_Lasm_JS_Data_describe(v___x_1814_);
v___x_1832_ = lean_string_append(v___x_1830_, v___x_1831_);
lean_dec_ref(v___x_1831_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set_tag(v___x_1816_, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1832_);
v___x_1834_ = v___x_1816_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
else
{
lean_object* v___x_1838_; 
lean_dec(v_d_1812_);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__5));
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1839_, lean_object* v_key_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1839_, v_key_1840_);
lean_dec_ref(v_key_1840_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(lean_object* v_context_1844_, lean_object* v_d_1845_){
_start:
{
lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1854_; lean_object* v_received_1855_; lean_object* v___y_1874_; lean_object* v_a_1877_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0));
lean_inc(v_d_1845_);
v___x_1902_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1845_, v___x_1901_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
v_a_1877_ = v_a_1903_;
goto v___jp_1876_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v_a_1904_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1902_, 1);
v___x_1905_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1));
lean_inc(v_d_1845_);
v___x_1906_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1845_, v___x_1905_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; 
lean_dec(v_a_1904_);
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref_known(v___x_1906_, 1);
v_a_1877_ = v_a_1907_;
goto v___jp_1876_;
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v_a_1908_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1906_, 1);
v___x_1909_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2));
lean_inc(v_d_1845_);
v___x_1910_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1845_, v___x_1909_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; 
lean_dec(v_a_1908_);
lean_dec(v_a_1904_);
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v_a_1877_ = v_a_1911_;
goto v___jp_1876_;
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1923_; 
lean_dec(v_d_1845_);
v_a_1912_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1914_ = v___x_1910_;
v_isShared_1915_ = v_isSharedCheck_1923_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1910_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1923_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; double v___x_1917_; double v___x_1918_; double v___x_1919_; lean_object* v___x_1921_; 
v___x_1916_ = lean_alloc_ctor(0, 0, 24);
v___x_1917_ = lean_unbox_float(v_a_1904_);
lean_dec(v_a_1904_);
lean_ctor_set_float(v___x_1916_, 0, v___x_1917_);
v___x_1918_ = lean_unbox_float(v_a_1908_);
lean_dec(v_a_1908_);
lean_ctor_set_float(v___x_1916_, 8, v___x_1918_);
v___x_1919_ = lean_unbox_float(v_a_1912_);
lean_dec(v_a_1912_);
lean_ctor_set_float(v___x_1916_, 16, v___x_1919_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set_tag(v___x_1914_, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1916_);
v___x_1921_ = v___x_1914_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
v___jp_1847_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = lean_string_append(v___y_1848_, v___y_1849_);
lean_dec_ref(v___y_1849_);
v___x_1851_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
v___jp_1853_:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; uint8_t v___x_1867_; 
v___x_1856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1857_ = lean_string_append(v___x_1856_, v_context_1844_);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_1859_ = lean_string_append(v___x_1857_, v___x_1858_);
v___x_1860_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___closed__1));
v___x_1861_ = lean_string_append(v___x_1859_, v___x_1860_);
v___x_1862_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_1863_ = lean_string_append(v___x_1861_, v___x_1862_);
v___x_1864_ = lean_string_append(v___x_1863_, v_received_1855_);
lean_dec_ref(v_received_1855_);
v___x_1865_ = lean_string_utf8_byte_size(v___y_1854_);
v___x_1866_ = lean_unsigned_to_nat(0u);
v___x_1867_ = lean_nat_dec_eq(v___x_1865_, v___x_1866_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__0));
v___x_1869_ = lean_string_append(v___x_1868_, v___y_1854_);
lean_dec_ref(v___y_1854_);
v___x_1870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__1));
v___x_1871_ = lean_string_append(v___x_1869_, v___x_1870_);
v___y_1848_ = v___x_1864_;
v___y_1849_ = v___x_1871_;
goto v___jp_1847_;
}
else
{
lean_object* v___x_1872_; 
lean_dec_ref(v___y_1854_);
v___x_1872_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___y_1848_ = v___x_1864_;
v___y_1849_ = v___x_1872_;
goto v___jp_1847_;
}
}
v___jp_1873_:
{
lean_object* v___x_1875_; 
v___x_1875_ = l_Lasm_JS_Data_describe(v_d_1845_);
v___y_1854_ = v___y_1874_;
v_received_1855_ = v___x_1875_;
goto v___jp_1853_;
}
v___jp_1876_:
{
if (lean_obj_tag(v_d_1845_) == 9)
{
lean_object* v_value_1878_; lean_object* v_description_1879_; lean_object* v___x_1880_; uint8_t v___x_1881_; 
v_value_1878_ = lean_ctor_get(v_d_1845_, 0);
v_description_1879_ = lean_ctor_get(v_d_1845_, 1);
v___x_1880_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1881_ = lean_string_dec_eq(v_description_1879_, v___x_1880_);
if (v___x_1881_ == 0)
{
v___y_1874_ = v_a_1877_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1898_; 
lean_inc(v_value_1878_);
v_isSharedCheck_1898_ = !lean_is_exclusive(v_d_1845_);
if (v_isSharedCheck_1898_ == 0)
{
lean_object* v_unused_1899_; lean_object* v_unused_1900_; 
v_unused_1899_ = lean_ctor_get(v_d_1845_, 1);
lean_dec(v_unused_1899_);
v_unused_1900_ = lean_ctor_get(v_d_1845_, 0);
lean_dec(v_unused_1900_);
v___x_1883_ = v_d_1845_;
v_isShared_1884_ = v_isSharedCheck_1898_;
goto v_resetjp_1882_;
}
else
{
lean_dec(v_d_1845_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1898_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
uint32_t v___x_1885_; uint64_t v___x_1886_; lean_object* v___x_1888_; 
v___x_1885_ = 206;
v___x_1886_ = 0ULL;
lean_inc(v_value_1878_);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 1, v___x_1880_);
v___x_1888_ = v___x_1883_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_value_1878_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___x_1880_);
v___x_1888_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
uint32_t v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = lasm_js_value_handle(v_value_1878_);
lean_dec(v_value_1878_);
v___x_1890_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1885_, v___x_1886_, v___x_1888_, v___x_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; uint8_t v___x_1892_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v___x_1890_, 1);
v___x_1892_ = lean_string_validate_utf8(v_a_1891_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec(v_a_1891_);
v___x_1893_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7);
v___x_1894_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1893_);
v___y_1854_ = v_a_1877_;
v_received_1855_ = v___x_1894_;
goto v___jp_1853_;
}
else
{
lean_object* v___x_1895_; 
v___x_1895_ = lean_string_from_utf8_unchecked(v_a_1891_);
v___y_1854_ = v_a_1877_;
v_received_1855_ = v___x_1895_;
goto v___jp_1853_;
}
}
else
{
lean_object* v___x_1896_; 
lean_dec_ref_known(v___x_1890_, 1);
v___x_1896_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8));
v___y_1854_ = v_a_1877_;
v_received_1855_ = v___x_1896_;
goto v___jp_1853_;
}
}
}
}
}
else
{
v___y_1874_ = v_a_1877_;
goto v___jp_1873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___boxed(lean_object* v_context_1924_, lean_object* v_d_1925_, lean_object* v_a_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(v_context_1924_, v_d_1925_);
lean_dec_ref(v_context_1924_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(lean_object* v_b_1928_, lean_object* v_args_1929_, uint8_t v_await_1930_){
_start:
{
uint64_t v___y_1933_; uint64_t v___y_1934_; uint64_t v___x_1969_; uint64_t v___y_1971_; 
v___x_1969_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_1930_ == 0)
{
uint64_t v___x_1976_; 
v___x_1976_ = 0ULL;
v___y_1971_ = v___x_1976_;
goto v___jp_1970_;
}
else
{
uint64_t v___x_1977_; 
v___x_1977_ = 2ULL;
v___y_1971_ = v___x_1977_;
goto v___jp_1970_;
}
v___jp_1932_:
{
uint64_t v_flags_1935_; uint32_t v___x_1936_; lean_object* v___x_1937_; uint32_t v___x_1938_; lean_object* v___x_1939_; 
v_flags_1935_ = lean_uint64_lor(v___y_1933_, v___y_1934_);
v___x_1936_ = 214;
v___x_1937_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1928_, v_args_1929_);
v___x_1938_ = 0;
v___x_1939_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1936_, v_flags_1935_, v___x_1937_, v___x_1938_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1941_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = l_Lasm_JS_Wire_decode(v_a_1940_);
lean_dec(v_a_1940_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1928_);
v___x_1944_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(v___x_1943_, v_a_1942_);
lean_dec_ref(v___x_1943_);
return v___x_1944_;
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
v_a_1945_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1941_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1941_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1968_; 
v_a_1953_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1955_ = v___x_1939_;
v_isShared_1956_ = v_isSharedCheck_1968_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1939_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1968_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1957_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1958_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1928_);
v___x_1959_ = lean_string_append(v___x_1957_, v___x_1958_);
lean_dec_ref(v___x_1958_);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_1961_ = lean_string_append(v___x_1959_, v___x_1960_);
v___x_1962_ = lean_io_error_to_string(v_a_1953_);
v___x_1963_ = lean_string_append(v___x_1961_, v___x_1962_);
lean_dec_ref(v___x_1962_);
v___x_1964_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1964_);
v___x_1966_ = v___x_1955_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
v___jp_1970_:
{
uint8_t v_construct_1972_; uint64_t v___x_1973_; 
v_construct_1972_ = lean_ctor_get_uint8(v_b_1928_, sizeof(void*)*4);
v___x_1973_ = lean_uint64_lor(v___x_1969_, v___y_1971_);
if (v_construct_1972_ == 0)
{
uint64_t v___x_1974_; 
v___x_1974_ = 0ULL;
v___y_1933_ = v___x_1973_;
v___y_1934_ = v___x_1974_;
goto v___jp_1932_;
}
else
{
uint64_t v___x_1975_; 
v___x_1975_ = 4ULL;
v___y_1933_ = v___x_1973_;
v___y_1934_ = v___x_1975_;
goto v___jp_1932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0___boxed(lean_object* v_b_1978_, lean_object* v_args_1979_, lean_object* v_await_1980_, lean_object* v_a_1981_){
_start:
{
uint8_t v_await_boxed_1982_; lean_object* v_res_1983_; 
v_await_boxed_1982_ = lean_unbox(v_await_1980_);
v_res_1983_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(v_b_1978_, v_args_1979_, v_await_boxed_1982_);
lean_dec_ref(v_b_1978_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText(lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; uint8_t v___x_2000_; lean_object* v___x_2001_; 
v___x_1993_ = ((lean_object*)(l_Lasm_Web_Raw_measureText___closed__1));
v___x_1994_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_1995_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1996_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_a_1990_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = lean_array_push(v___x_1994_, v___x_1996_);
v___x_1998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1998_, 0, v_a_1991_);
v___x_1999_ = lean_array_push(v___x_1997_, v___x_1998_);
v___x_2000_ = 1;
v___x_2001_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(v___x_1993_, v___x_1999_, v___x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText___boxed(lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lasm_Web_Raw_measureText(v_a_2002_, v_a_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(lean_object* v_context_2007_, lean_object* v_d_2008_){
_start:
{
lean_object* v_received_2011_; 
if (lean_obj_tag(v_d_2008_) == 6)
{
lean_object* v_b_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
v_b_2025_ = lean_ctor_get(v_d_2008_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_d_2008_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v_d_2008_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_b_2025_);
lean_dec(v_d_2008_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_b_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
else
{
if (lean_obj_tag(v_d_2008_) == 9)
{
lean_object* v_value_2033_; lean_object* v_description_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_value_2033_ = lean_ctor_get(v_d_2008_, 0);
v_description_2034_ = lean_ctor_get(v_d_2008_, 1);
v___x_2035_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2036_ = lean_string_dec_eq(v_description_2034_, v___x_2035_);
if (v___x_2036_ == 0)
{
goto v___jp_2023_;
}
else
{
uint32_t v___x_2037_; uint64_t v___x_2038_; lean_object* v___x_2039_; uint32_t v___x_2040_; lean_object* v___x_2041_; 
lean_inc_n(v_value_2033_, 2);
lean_dec_ref_known(v_d_2008_, 2);
v___x_2037_ = 206;
v___x_2038_ = 0ULL;
v___x_2039_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2039_, 0, v_value_2033_);
lean_ctor_set(v___x_2039_, 1, v___x_2035_);
v___x_2040_ = lasm_js_value_handle(v_value_2033_);
lean_dec(v_value_2033_);
v___x_2041_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2037_, v___x_2038_, v___x_2039_, v___x_2040_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; uint8_t v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = lean_string_validate_utf8(v_a_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec(v_a_2042_);
v___x_2044_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7);
v___x_2045_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2044_);
v_received_2011_ = v___x_2045_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_string_from_utf8_unchecked(v_a_2042_);
v_received_2011_ = v___x_2046_;
goto v___jp_2010_;
}
}
else
{
lean_object* v___x_2047_; 
lean_dec_ref_known(v___x_2041_, 1);
v___x_2047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8));
v_received_2011_ = v___x_2047_;
goto v___jp_2010_;
}
}
}
else
{
goto v___jp_2023_;
}
}
v___jp_2010_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_2013_ = lean_string_append(v___x_2012_, v_context_2007_);
v___x_2014_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_2015_ = lean_string_append(v___x_2013_, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___closed__0));
v___x_2017_ = lean_string_append(v___x_2015_, v___x_2016_);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_2019_ = lean_string_append(v___x_2017_, v___x_2018_);
v___x_2020_ = lean_string_append(v___x_2019_, v_received_2011_);
lean_dec_ref(v_received_2011_);
v___x_2021_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
return v___x_2022_;
}
v___jp_2023_:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Lasm_JS_Data_describe(v_d_2008_);
v_received_2011_ = v___x_2024_;
goto v___jp_2010_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___boxed(lean_object* v_context_2048_, lean_object* v_d_2049_, lean_object* v_a_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(v_context_2048_, v_d_2049_);
lean_dec_ref(v_context_2048_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(lean_object* v_b_2052_, lean_object* v_args_2053_, uint8_t v_await_2054_){
_start:
{
uint64_t v___y_2057_; uint64_t v___y_2058_; uint64_t v___x_2093_; uint64_t v___y_2095_; 
v___x_2093_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_2054_ == 0)
{
uint64_t v___x_2100_; 
v___x_2100_ = 0ULL;
v___y_2095_ = v___x_2100_;
goto v___jp_2094_;
}
else
{
uint64_t v___x_2101_; 
v___x_2101_ = 2ULL;
v___y_2095_ = v___x_2101_;
goto v___jp_2094_;
}
v___jp_2056_:
{
uint64_t v_flags_2059_; uint32_t v___x_2060_; lean_object* v___x_2061_; uint32_t v___x_2062_; lean_object* v___x_2063_; 
v_flags_2059_ = lean_uint64_lor(v___y_2057_, v___y_2058_);
v___x_2060_ = 214;
v___x_2061_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2052_, v_args_2053_);
v___x_2062_ = 0;
v___x_2063_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2060_, v_flags_2059_, v___x_2061_, v___x_2062_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = l_Lasm_JS_Wire_decode(v_a_2064_);
lean_dec(v_a_2064_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2052_);
v___x_2068_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(v___x_2067_, v_a_2066_);
lean_dec_ref(v___x_2067_);
return v___x_2068_;
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
v_a_2069_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2065_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2065_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2092_; 
v_a_2077_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2079_ = v___x_2063_;
v_isShared_2080_ = v_isSharedCheck_2092_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2063_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2092_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2081_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_2082_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2052_);
v___x_2083_ = lean_string_append(v___x_2081_, v___x_2082_);
lean_dec_ref(v___x_2082_);
v___x_2084_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_2085_ = lean_string_append(v___x_2083_, v___x_2084_);
v___x_2086_ = lean_io_error_to_string(v_a_2077_);
v___x_2087_ = lean_string_append(v___x_2085_, v___x_2086_);
lean_dec_ref(v___x_2086_);
v___x_2088_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 0, v___x_2088_);
v___x_2090_ = v___x_2079_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
v___jp_2094_:
{
uint8_t v_construct_2096_; uint64_t v___x_2097_; 
v_construct_2096_ = lean_ctor_get_uint8(v_b_2052_, sizeof(void*)*4);
v___x_2097_ = lean_uint64_lor(v___x_2093_, v___y_2095_);
if (v_construct_2096_ == 0)
{
uint64_t v___x_2098_; 
v___x_2098_ = 0ULL;
v___y_2057_ = v___x_2097_;
v___y_2058_ = v___x_2098_;
goto v___jp_2056_;
}
else
{
uint64_t v___x_2099_; 
v___x_2099_ = 4ULL;
v___y_2057_ = v___x_2097_;
v___y_2058_ = v___x_2099_;
goto v___jp_2056_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0___boxed(lean_object* v_b_2102_, lean_object* v_args_2103_, lean_object* v_await_2104_, lean_object* v_a_2105_){
_start:
{
uint8_t v_await_boxed_2106_; lean_object* v_res_2107_; 
v_await_boxed_2106_ = lean_unbox(v_await_2104_);
v_res_2107_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(v_b_2102_, v_args_2103_, v_await_boxed_2106_);
lean_dec_ref(v_b_2102_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData(lean_object* v_a_2114_, double v_a_2115_, double v_a_2116_, double v_a_2117_, double v_a_2118_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; uint8_t v___x_2133_; lean_object* v___x_2134_; 
v___x_2120_ = ((lean_object*)(l_Lasm_Web_Raw_imageData___closed__1));
v___x_2121_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_2122_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2123_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_a_2114_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = lean_array_push(v___x_2121_, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2125_, 0, v_a_2115_);
v___x_2126_ = lean_array_push(v___x_2124_, v___x_2125_);
v___x_2127_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2127_, 0, v_a_2116_);
v___x_2128_ = lean_array_push(v___x_2126_, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2129_, 0, v_a_2117_);
v___x_2130_ = lean_array_push(v___x_2128_, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2131_, 0, v_a_2118_);
v___x_2132_ = lean_array_push(v___x_2130_, v___x_2131_);
v___x_2133_ = 1;
v___x_2134_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(v___x_2120_, v___x_2132_, v___x_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData___boxed(lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_){
_start:
{
double v_a_862__boxed_2141_; double v_a_863__boxed_2142_; double v_a_864__boxed_2143_; double v_a_865__boxed_2144_; lean_object* v_res_2145_; 
v_a_862__boxed_2141_ = lean_unbox_float(v_a_2136_);
lean_dec_ref(v_a_2136_);
v_a_863__boxed_2142_ = lean_unbox_float(v_a_2137_);
lean_dec_ref(v_a_2137_);
v_a_864__boxed_2143_ = lean_unbox_float(v_a_2138_);
lean_dec_ref(v_a_2138_);
v_a_865__boxed_2144_ = lean_unbox_float(v_a_2139_);
lean_dec_ref(v_a_2139_);
v_res_2145_ = l_Lasm_Web_Raw_imageData(v_a_2135_, v_a_862__boxed_2141_, v_a_863__boxed_2142_, v_a_864__boxed_2143_, v_a_865__boxed_2144_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData(lean_object* v_a_2152_, lean_object* v_a_2153_, double v_a_2154_, double v_a_2155_, double v_a_2156_, double v_a_2157_){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; uint8_t v___x_2174_; lean_object* v___x_2175_; 
v___x_2159_ = ((lean_object*)(l_Lasm_Web_Raw_putImageData___closed__1));
v___x_2160_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_2161_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2162_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2162_, 0, v_a_2152_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lean_array_push(v___x_2160_, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2153_);
v___x_2165_ = lean_array_push(v___x_2163_, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2166_, 0, v_a_2154_);
v___x_2167_ = lean_array_push(v___x_2165_, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2168_, 0, v_a_2155_);
v___x_2169_ = lean_array_push(v___x_2167_, v___x_2168_);
v___x_2170_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2170_, 0, v_a_2156_);
v___x_2171_ = lean_array_push(v___x_2169_, v___x_2170_);
v___x_2172_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2172_, 0, v_a_2157_);
v___x_2173_ = lean_array_push(v___x_2171_, v___x_2172_);
v___x_2174_ = 1;
v___x_2175_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v___x_2159_, v___x_2173_, v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData___boxed(lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
double v_a_383__boxed_2183_; double v_a_384__boxed_2184_; double v_a_385__boxed_2185_; double v_a_386__boxed_2186_; lean_object* v_res_2187_; 
v_a_383__boxed_2183_ = lean_unbox_float(v_a_2178_);
lean_dec_ref(v_a_2178_);
v_a_384__boxed_2184_ = lean_unbox_float(v_a_2179_);
lean_dec_ref(v_a_2179_);
v_a_385__boxed_2185_ = lean_unbox_float(v_a_2180_);
lean_dec_ref(v_a_2180_);
v_a_386__boxed_2186_ = lean_unbox_float(v_a_2181_);
lean_dec_ref(v_a_2181_);
v_res_2187_ = l_Lasm_Web_Raw_putImageData(v_a_2176_, v_a_2177_, v_a_383__boxed_2183_, v_a_384__boxed_2184_, v_a_385__boxed_2185_, v_a_386__boxed_2186_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d(lean_object* v_canvas_2188_, uint8_t v_alpha_2189_){
_start:
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Lasm_Web_Raw_context2d(v_canvas_2188_, v_alpha_2189_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d___boxed(lean_object* v_canvas_2192_, lean_object* v_alpha_2193_, lean_object* v_a_2194_){
_start:
{
uint8_t v_alpha_boxed_2195_; lean_object* v_res_2196_; 
v_alpha_boxed_2195_ = lean_unbox(v_alpha_2193_);
v_res_2196_ = l_Lasm_Web_Element_context2d(v_canvas_2192_, v_alpha_boxed_2195_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw(lean_object* v_ctx_2197_, lean_object* v_commands_2198_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lasm_Web_Raw_draw(v_ctx_2197_, v_commands_2198_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw___boxed(lean_object* v_ctx_2201_, lean_object* v_commands_2202_, lean_object* v_a_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lasm_Web_Context2D_draw(v_ctx_2201_, v_commands_2202_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText(lean_object* v_ctx_2205_, lean_object* v_text_2206_){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = l_Lasm_Web_Raw_measureText(v_ctx_2205_, v_text_2206_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText___boxed(lean_object* v_ctx_2209_, lean_object* v_text_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lasm_Web_Context2D_measureText(v_ctx_2209_, v_text_2210_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData(lean_object* v_ctx_2213_, lean_object* v_x_2214_, lean_object* v_y_2215_, lean_object* v_width_2216_, lean_object* v_height_2217_){
_start:
{
double v___x_2219_; double v___x_2220_; double v___x_2221_; double v___x_2222_; lean_object* v___x_2223_; 
v___x_2219_ = lean_float_of_nat(v_x_2214_);
v___x_2220_ = lean_float_of_nat(v_y_2215_);
v___x_2221_ = lean_float_of_nat(v_width_2216_);
v___x_2222_ = lean_float_of_nat(v_height_2217_);
v___x_2223_ = l_Lasm_Web_Raw_imageData(v_ctx_2213_, v___x_2219_, v___x_2220_, v___x_2221_, v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData___boxed(lean_object* v_ctx_2224_, lean_object* v_x_2225_, lean_object* v_y_2226_, lean_object* v_width_2227_, lean_object* v_height_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lasm_Web_Context2D_imageData(v_ctx_2224_, v_x_2225_, v_y_2226_, v_width_2227_, v_height_2228_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData(lean_object* v_ctx_2231_, lean_object* v_bytes_2232_, lean_object* v_x_2233_, lean_object* v_y_2234_, lean_object* v_width_2235_, lean_object* v_height_2236_){
_start:
{
double v___x_2238_; double v___x_2239_; double v___x_2240_; double v___x_2241_; lean_object* v___x_2242_; 
v___x_2238_ = lean_float_of_nat(v_x_2233_);
v___x_2239_ = lean_float_of_nat(v_y_2234_);
v___x_2240_ = lean_float_of_nat(v_width_2235_);
v___x_2241_ = lean_float_of_nat(v_height_2236_);
v___x_2242_ = l_Lasm_Web_Raw_putImageData(v_ctx_2231_, v_bytes_2232_, v___x_2238_, v___x_2239_, v___x_2240_, v___x_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData___boxed(lean_object* v_ctx_2243_, lean_object* v_bytes_2244_, lean_object* v_x_2245_, lean_object* v_y_2246_, lean_object* v_width_2247_, lean_object* v_height_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lasm_Web_Context2D_putImageData(v_ctx_2243_, v_bytes_2244_, v_x_2245_, v_y_2246_, v_width_2247_, v_height_2248_);
return v_res_2250_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Canvas(uint8_t builtin) {
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
l_Lasm_Web_instFromJSTextMetrics = _init_l_Lasm_Web_instFromJSTextMetrics();
lean_mark_persistent(l_Lasm_Web_instFromJSTextMetrics);
l_Lasm_Web_instInhabitedTextMetrics_default = _init_l_Lasm_Web_instInhabitedTextMetrics_default();
lean_mark_persistent(l_Lasm_Web_instInhabitedTextMetrics_default);
l_Lasm_Web_instInhabitedTextMetrics = _init_l_Lasm_Web_instInhabitedTextMetrics();
lean_mark_persistent(l_Lasm_Web_instInhabitedTextMetrics);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
