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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Float_repr(double, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_uint64_to_float(uint64_t);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
case 10:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
case 11:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(11u);
return v___x_13_;
}
case 12:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(12u);
return v___x_14_;
}
case 13:
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(13u);
return v___x_15_;
}
case 14:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(14u);
return v___x_16_;
}
case 15:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(15u);
return v___x_17_;
}
case 16:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(16u);
return v___x_18_;
}
case 17:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(17u);
return v___x_19_;
}
case 18:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(18u);
return v___x_20_;
}
case 19:
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(19u);
return v___x_21_;
}
case 20:
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(20u);
return v___x_22_;
}
case 21:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(21u);
return v___x_23_;
}
case 22:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(22u);
return v___x_24_;
}
case 23:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(23u);
return v___x_25_;
}
case 24:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(24u);
return v___x_26_;
}
case 25:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(25u);
return v___x_27_;
}
case 26:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(26u);
return v___x_28_;
}
case 27:
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(27u);
return v___x_29_;
}
case 28:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(28u);
return v___x_30_;
}
case 29:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(29u);
return v___x_31_;
}
case 30:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(30u);
return v___x_32_;
}
case 31:
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(31u);
return v___x_33_;
}
default: 
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(32u);
return v___x_34_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorIdx___boxed(lean_object* v_x_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lasm_Web_DrawCommand_ctorIdx(v_x_35_);
lean_dec(v_x_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___redArg(lean_object* v_t_37_, lean_object* v_k_38_){
_start:
{
switch(lean_obj_tag(v_t_37_))
{
case 0:
{
lean_object* v_style_39_; lean_object* v___x_40_; 
v_style_39_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_style_39_);
lean_dec_ref_known(v_t_37_, 1);
v___x_40_ = lean_apply_1(v_k_38_, v_style_39_);
return v___x_40_;
}
case 1:
{
lean_object* v_style_41_; lean_object* v___x_42_; 
v_style_41_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_style_41_);
lean_dec_ref_known(v_t_37_, 1);
v___x_42_ = lean_apply_1(v_k_38_, v_style_41_);
return v___x_42_;
}
case 2:
{
double v_width_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_width_43_ = lean_ctor_get_float(v_t_37_, 0);
lean_dec_ref_known(v_t_37_, 0);
v___x_44_ = lean_box_float(v_width_43_);
v___x_45_ = lean_apply_1(v_k_38_, v___x_44_);
return v___x_45_;
}
case 3:
{
lean_object* v_font_46_; lean_object* v___x_47_; 
v_font_46_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_font_46_);
lean_dec_ref_known(v_t_37_, 1);
v___x_47_ = lean_apply_1(v_k_38_, v_font_46_);
return v___x_47_;
}
case 4:
{
lean_object* v_align_48_; lean_object* v___x_49_; 
v_align_48_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_align_48_);
lean_dec_ref_known(v_t_37_, 1);
v___x_49_ = lean_apply_1(v_k_38_, v_align_48_);
return v___x_49_;
}
case 5:
{
lean_object* v_baseline_50_; lean_object* v___x_51_; 
v_baseline_50_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_baseline_50_);
lean_dec_ref_known(v_t_37_, 1);
v___x_51_ = lean_apply_1(v_k_38_, v_baseline_50_);
return v___x_51_;
}
case 6:
{
double v_alpha_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v_alpha_52_ = lean_ctor_get_float(v_t_37_, 0);
lean_dec_ref_known(v_t_37_, 0);
v___x_53_ = lean_box_float(v_alpha_52_);
v___x_54_ = lean_apply_1(v_k_38_, v___x_53_);
return v___x_54_;
}
case 7:
{
lean_object* v_cap_55_; lean_object* v___x_56_; 
v_cap_55_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_cap_55_);
lean_dec_ref_known(v_t_37_, 1);
v___x_56_ = lean_apply_1(v_k_38_, v_cap_55_);
return v___x_56_;
}
case 8:
{
lean_object* v_join_57_; lean_object* v___x_58_; 
v_join_57_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_join_57_);
lean_dec_ref_known(v_t_37_, 1);
v___x_58_ = lean_apply_1(v_k_38_, v_join_57_);
return v___x_58_;
}
case 9:
{
double v_x_59_; double v_y_60_; double v_width_61_; double v_height_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_x_59_ = lean_ctor_get_float(v_t_37_, 0);
v_y_60_ = lean_ctor_get_float(v_t_37_, 8);
v_width_61_ = lean_ctor_get_float(v_t_37_, 16);
v_height_62_ = lean_ctor_get_float(v_t_37_, 24);
lean_dec_ref_known(v_t_37_, 0);
v___x_63_ = lean_box_float(v_x_59_);
v___x_64_ = lean_box_float(v_y_60_);
v___x_65_ = lean_box_float(v_width_61_);
v___x_66_ = lean_box_float(v_height_62_);
v___x_67_ = lean_apply_4(v_k_38_, v___x_63_, v___x_64_, v___x_65_, v___x_66_);
return v___x_67_;
}
case 10:
{
double v_x_68_; double v_y_69_; double v_width_70_; double v_height_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_x_68_ = lean_ctor_get_float(v_t_37_, 0);
v_y_69_ = lean_ctor_get_float(v_t_37_, 8);
v_width_70_ = lean_ctor_get_float(v_t_37_, 16);
v_height_71_ = lean_ctor_get_float(v_t_37_, 24);
lean_dec_ref_known(v_t_37_, 0);
v___x_72_ = lean_box_float(v_x_68_);
v___x_73_ = lean_box_float(v_y_69_);
v___x_74_ = lean_box_float(v_width_70_);
v___x_75_ = lean_box_float(v_height_71_);
v___x_76_ = lean_apply_4(v_k_38_, v___x_72_, v___x_73_, v___x_74_, v___x_75_);
return v___x_76_;
}
case 11:
{
double v_x_77_; double v_y_78_; double v_width_79_; double v_height_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_x_77_ = lean_ctor_get_float(v_t_37_, 0);
v_y_78_ = lean_ctor_get_float(v_t_37_, 8);
v_width_79_ = lean_ctor_get_float(v_t_37_, 16);
v_height_80_ = lean_ctor_get_float(v_t_37_, 24);
lean_dec_ref_known(v_t_37_, 0);
v___x_81_ = lean_box_float(v_x_77_);
v___x_82_ = lean_box_float(v_y_78_);
v___x_83_ = lean_box_float(v_width_79_);
v___x_84_ = lean_box_float(v_height_80_);
v___x_85_ = lean_apply_4(v_k_38_, v___x_81_, v___x_82_, v___x_83_, v___x_84_);
return v___x_85_;
}
case 14:
{
double v_x_86_; double v_y_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v_x_86_ = lean_ctor_get_float(v_t_37_, 0);
v_y_87_ = lean_ctor_get_float(v_t_37_, 8);
lean_dec_ref_known(v_t_37_, 0);
v___x_88_ = lean_box_float(v_x_86_);
v___x_89_ = lean_box_float(v_y_87_);
v___x_90_ = lean_apply_2(v_k_38_, v___x_88_, v___x_89_);
return v___x_90_;
}
case 15:
{
double v_x_91_; double v_y_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_x_91_ = lean_ctor_get_float(v_t_37_, 0);
v_y_92_ = lean_ctor_get_float(v_t_37_, 8);
lean_dec_ref_known(v_t_37_, 0);
v___x_93_ = lean_box_float(v_x_91_);
v___x_94_ = lean_box_float(v_y_92_);
v___x_95_ = lean_apply_2(v_k_38_, v___x_93_, v___x_94_);
return v___x_95_;
}
case 16:
{
double v_x_96_; double v_y_97_; double v_width_98_; double v_height_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_x_96_ = lean_ctor_get_float(v_t_37_, 0);
v_y_97_ = lean_ctor_get_float(v_t_37_, 8);
v_width_98_ = lean_ctor_get_float(v_t_37_, 16);
v_height_99_ = lean_ctor_get_float(v_t_37_, 24);
lean_dec_ref_known(v_t_37_, 0);
v___x_100_ = lean_box_float(v_x_96_);
v___x_101_ = lean_box_float(v_y_97_);
v___x_102_ = lean_box_float(v_width_98_);
v___x_103_ = lean_box_float(v_height_99_);
v___x_104_ = lean_apply_4(v_k_38_, v___x_100_, v___x_101_, v___x_102_, v___x_103_);
return v___x_104_;
}
case 17:
{
double v_x_105_; double v_y_106_; double v_radius_107_; double v_startAngle_108_; double v_endAngle_109_; uint8_t v_counterclockwise_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_x_105_ = lean_ctor_get_float(v_t_37_, 0);
v_y_106_ = lean_ctor_get_float(v_t_37_, 8);
v_radius_107_ = lean_ctor_get_float(v_t_37_, 16);
v_startAngle_108_ = lean_ctor_get_float(v_t_37_, 24);
v_endAngle_109_ = lean_ctor_get_float(v_t_37_, 32);
v_counterclockwise_110_ = lean_ctor_get_uint8(v_t_37_, 40);
lean_dec_ref_known(v_t_37_, 0);
v___x_111_ = lean_box_float(v_x_105_);
v___x_112_ = lean_box_float(v_y_106_);
v___x_113_ = lean_box_float(v_radius_107_);
v___x_114_ = lean_box_float(v_startAngle_108_);
v___x_115_ = lean_box_float(v_endAngle_109_);
v___x_116_ = lean_box(v_counterclockwise_110_);
v___x_117_ = lean_apply_6(v_k_38_, v___x_111_, v___x_112_, v___x_113_, v___x_114_, v___x_115_, v___x_116_);
return v___x_117_;
}
case 18:
{
double v_cpx_118_; double v_cpy_119_; double v_x_120_; double v_y_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v_cpx_118_ = lean_ctor_get_float(v_t_37_, 0);
v_cpy_119_ = lean_ctor_get_float(v_t_37_, 8);
v_x_120_ = lean_ctor_get_float(v_t_37_, 16);
v_y_121_ = lean_ctor_get_float(v_t_37_, 24);
lean_dec_ref_known(v_t_37_, 0);
v___x_122_ = lean_box_float(v_cpx_118_);
v___x_123_ = lean_box_float(v_cpy_119_);
v___x_124_ = lean_box_float(v_x_120_);
v___x_125_ = lean_box_float(v_y_121_);
v___x_126_ = lean_apply_4(v_k_38_, v___x_122_, v___x_123_, v___x_124_, v___x_125_);
return v___x_126_;
}
case 19:
{
double v_cp1x_127_; double v_cp1y_128_; double v_cp2x_129_; double v_cp2y_130_; double v_x_131_; double v_y_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v_cp1x_127_ = lean_ctor_get_float(v_t_37_, 0);
v_cp1y_128_ = lean_ctor_get_float(v_t_37_, 8);
v_cp2x_129_ = lean_ctor_get_float(v_t_37_, 16);
v_cp2y_130_ = lean_ctor_get_float(v_t_37_, 24);
v_x_131_ = lean_ctor_get_float(v_t_37_, 32);
v_y_132_ = lean_ctor_get_float(v_t_37_, 40);
lean_dec_ref_known(v_t_37_, 0);
v___x_133_ = lean_box_float(v_cp1x_127_);
v___x_134_ = lean_box_float(v_cp1y_128_);
v___x_135_ = lean_box_float(v_cp2x_129_);
v___x_136_ = lean_box_float(v_cp2y_130_);
v___x_137_ = lean_box_float(v_x_131_);
v___x_138_ = lean_box_float(v_y_132_);
v___x_139_ = lean_apply_6(v_k_38_, v___x_133_, v___x_134_, v___x_135_, v___x_136_, v___x_137_, v___x_138_);
return v___x_139_;
}
case 22:
{
lean_object* v_text_140_; double v_x_141_; double v_y_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_text_140_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_text_140_);
v_x_141_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1);
v_y_142_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_37_, 1);
v___x_143_ = lean_box_float(v_x_141_);
v___x_144_ = lean_box_float(v_y_142_);
v___x_145_ = lean_apply_3(v_k_38_, v_text_140_, v___x_143_, v___x_144_);
return v___x_145_;
}
case 23:
{
lean_object* v_text_146_; double v_x_147_; double v_y_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_text_146_ = lean_ctor_get(v_t_37_, 0);
lean_inc_ref(v_text_146_);
v_x_147_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1);
v_y_148_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_37_, 1);
v___x_149_ = lean_box_float(v_x_147_);
v___x_150_ = lean_box_float(v_y_148_);
v___x_151_ = lean_apply_3(v_k_38_, v_text_146_, v___x_149_, v___x_150_);
return v___x_151_;
}
case 26:
{
double v_x_152_; double v_y_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_x_152_ = lean_ctor_get_float(v_t_37_, 0);
v_y_153_ = lean_ctor_get_float(v_t_37_, 8);
lean_dec_ref_known(v_t_37_, 0);
v___x_154_ = lean_box_float(v_x_152_);
v___x_155_ = lean_box_float(v_y_153_);
v___x_156_ = lean_apply_2(v_k_38_, v___x_154_, v___x_155_);
return v___x_156_;
}
case 27:
{
double v_angle_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_angle_157_ = lean_ctor_get_float(v_t_37_, 0);
lean_dec_ref_known(v_t_37_, 0);
v___x_158_ = lean_box_float(v_angle_157_);
v___x_159_ = lean_apply_1(v_k_38_, v___x_158_);
return v___x_159_;
}
case 28:
{
double v_x_160_; double v_y_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_x_160_ = lean_ctor_get_float(v_t_37_, 0);
v_y_161_ = lean_ctor_get_float(v_t_37_, 8);
lean_dec_ref_known(v_t_37_, 0);
v___x_162_ = lean_box_float(v_x_160_);
v___x_163_ = lean_box_float(v_y_161_);
v___x_164_ = lean_apply_2(v_k_38_, v___x_162_, v___x_163_);
return v___x_164_;
}
case 29:
{
double v_a_165_; double v_b_166_; double v_c_167_; double v_d_168_; double v_e_169_; double v_f_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_a_165_ = lean_ctor_get_float(v_t_37_, 0);
v_b_166_ = lean_ctor_get_float(v_t_37_, 8);
v_c_167_ = lean_ctor_get_float(v_t_37_, 16);
v_d_168_ = lean_ctor_get_float(v_t_37_, 24);
v_e_169_ = lean_ctor_get_float(v_t_37_, 32);
v_f_170_ = lean_ctor_get_float(v_t_37_, 40);
lean_dec_ref_known(v_t_37_, 0);
v___x_171_ = lean_box_float(v_a_165_);
v___x_172_ = lean_box_float(v_b_166_);
v___x_173_ = lean_box_float(v_c_167_);
v___x_174_ = lean_box_float(v_d_168_);
v___x_175_ = lean_box_float(v_e_169_);
v___x_176_ = lean_box_float(v_f_170_);
v___x_177_ = lean_apply_6(v_k_38_, v___x_171_, v___x_172_, v___x_173_, v___x_174_, v___x_175_, v___x_176_);
return v___x_177_;
}
case 31:
{
lean_object* v_image_178_; double v_x_179_; double v_y_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_image_178_ = lean_ctor_get(v_t_37_, 0);
lean_inc(v_image_178_);
v_x_179_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1);
v_y_180_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_t_37_, 1);
v___x_181_ = lean_box_float(v_x_179_);
v___x_182_ = lean_box_float(v_y_180_);
v___x_183_ = lean_apply_3(v_k_38_, v_image_178_, v___x_181_, v___x_182_);
return v___x_183_;
}
case 32:
{
lean_object* v_image_184_; double v_x_185_; double v_y_186_; double v_width_187_; double v_height_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_image_184_ = lean_ctor_get(v_t_37_, 0);
lean_inc(v_image_184_);
v_x_185_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1);
v_y_186_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 8);
v_width_187_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 16);
v_height_188_ = lean_ctor_get_float(v_t_37_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_t_37_, 1);
v___x_189_ = lean_box_float(v_x_185_);
v___x_190_ = lean_box_float(v_y_186_);
v___x_191_ = lean_box_float(v_width_187_);
v___x_192_ = lean_box_float(v_height_188_);
v___x_193_ = lean_apply_5(v_k_38_, v_image_184_, v___x_189_, v___x_190_, v___x_191_, v___x_192_);
return v___x_193_;
}
default: 
{
lean_dec(v_t_37_);
return v_k_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim(lean_object* v_motive_194_, lean_object* v_ctorIdx_195_, lean_object* v_t_196_, lean_object* v_h_197_, lean_object* v_k_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_196_, v_k_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_ctorElim___boxed(lean_object* v_motive_200_, lean_object* v_ctorIdx_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_k_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lasm_Web_DrawCommand_ctorElim(v_motive_200_, v_ctorIdx_201_, v_t_202_, v_h_203_, v_k_204_);
lean_dec(v_ctorIdx_201_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim___redArg(lean_object* v_t_206_, lean_object* v_fillStyle_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_206_, v_fillStyle_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillStyle_elim(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_fillStyle_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_210_, v_fillStyle_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim___redArg(lean_object* v_t_214_, lean_object* v_strokeStyle_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_214_, v_strokeStyle_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeStyle_elim(lean_object* v_motive_217_, lean_object* v_t_218_, lean_object* v_h_219_, lean_object* v_strokeStyle_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_218_, v_strokeStyle_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim___redArg(lean_object* v_t_222_, lean_object* v_lineWidth_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_222_, v_lineWidth_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineWidth_elim(lean_object* v_motive_225_, lean_object* v_t_226_, lean_object* v_h_227_, lean_object* v_lineWidth_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_226_, v_lineWidth_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim___redArg(lean_object* v_t_230_, lean_object* v_font_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_230_, v_font_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_font_elim(lean_object* v_motive_233_, lean_object* v_t_234_, lean_object* v_h_235_, lean_object* v_font_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_234_, v_font_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim___redArg(lean_object* v_t_238_, lean_object* v_textAlign_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_238_, v_textAlign_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textAlign_elim(lean_object* v_motive_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_textAlign_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_242_, v_textAlign_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim___redArg(lean_object* v_t_246_, lean_object* v_textBaseline_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_246_, v_textBaseline_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_textBaseline_elim(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_textBaseline_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_250_, v_textBaseline_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim___redArg(lean_object* v_t_254_, lean_object* v_globalAlpha_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_254_, v_globalAlpha_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_globalAlpha_elim(lean_object* v_motive_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_globalAlpha_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_258_, v_globalAlpha_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim___redArg(lean_object* v_t_262_, lean_object* v_lineCap_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_262_, v_lineCap_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineCap_elim(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_lineCap_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_266_, v_lineCap_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim___redArg(lean_object* v_t_270_, lean_object* v_lineJoin_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_270_, v_lineJoin_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineJoin_elim(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_lineJoin_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_274_, v_lineJoin_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim___redArg(lean_object* v_t_278_, lean_object* v_fillRect_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_278_, v_fillRect_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillRect_elim(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_fillRect_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_282_, v_fillRect_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim___redArg(lean_object* v_t_286_, lean_object* v_strokeRect_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_286_, v_strokeRect_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeRect_elim(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_strokeRect_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_290_, v_strokeRect_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim___redArg(lean_object* v_t_294_, lean_object* v_clearRect_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_294_, v_clearRect_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_clearRect_elim(lean_object* v_motive_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_clearRect_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_298_, v_clearRect_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim___redArg(lean_object* v_t_302_, lean_object* v_beginPath_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_302_, v_beginPath_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_beginPath_elim(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_beginPath_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_306_, v_beginPath_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim___redArg(lean_object* v_t_310_, lean_object* v_closePath_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_310_, v_closePath_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_closePath_elim(lean_object* v_motive_313_, lean_object* v_t_314_, lean_object* v_h_315_, lean_object* v_closePath_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_314_, v_closePath_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim___redArg(lean_object* v_t_318_, lean_object* v_moveTo_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_318_, v_moveTo_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_moveTo_elim(lean_object* v_motive_321_, lean_object* v_t_322_, lean_object* v_h_323_, lean_object* v_moveTo_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_322_, v_moveTo_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim___redArg(lean_object* v_t_326_, lean_object* v_lineTo_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_326_, v_lineTo_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_lineTo_elim(lean_object* v_motive_329_, lean_object* v_t_330_, lean_object* v_h_331_, lean_object* v_lineTo_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_330_, v_lineTo_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim___redArg(lean_object* v_t_334_, lean_object* v_rect_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_334_, v_rect_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rect_elim(lean_object* v_motive_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_rect_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_338_, v_rect_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim___redArg(lean_object* v_t_342_, lean_object* v_arc_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_342_, v_arc_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_arc_elim(lean_object* v_motive_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_arc_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_346_, v_arc_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim___redArg(lean_object* v_t_350_, lean_object* v_quadraticCurveTo_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_350_, v_quadraticCurveTo_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_quadraticCurveTo_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_quadraticCurveTo_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_354_, v_quadraticCurveTo_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim___redArg(lean_object* v_t_358_, lean_object* v_bezierCurveTo_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_358_, v_bezierCurveTo_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_bezierCurveTo_elim(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_bezierCurveTo_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_362_, v_bezierCurveTo_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim___redArg(lean_object* v_t_366_, lean_object* v_fill_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_366_, v_fill_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fill_elim(lean_object* v_motive_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_fill_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_370_, v_fill_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim___redArg(lean_object* v_t_374_, lean_object* v_stroke_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_374_, v_stroke_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_stroke_elim(lean_object* v_motive_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_stroke_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_378_, v_stroke_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim___redArg(lean_object* v_t_382_, lean_object* v_fillText_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_382_, v_fillText_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_fillText_elim(lean_object* v_motive_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_fillText_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_386_, v_fillText_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim___redArg(lean_object* v_t_390_, lean_object* v_strokeText_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_390_, v_strokeText_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_strokeText_elim(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_strokeText_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_394_, v_strokeText_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim___redArg(lean_object* v_t_398_, lean_object* v_save_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_398_, v_save_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_save_elim(lean_object* v_motive_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_save_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_402_, v_save_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim___redArg(lean_object* v_t_406_, lean_object* v_restore_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_406_, v_restore_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_restore_elim(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_restore_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_410_, v_restore_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim___redArg(lean_object* v_t_414_, lean_object* v_translate_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_414_, v_translate_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_translate_elim(lean_object* v_motive_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_translate_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_418_, v_translate_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim___redArg(lean_object* v_t_422_, lean_object* v_rotate_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_422_, v_rotate_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_rotate_elim(lean_object* v_motive_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_rotate_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_426_, v_rotate_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim___redArg(lean_object* v_t_430_, lean_object* v_scale_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_430_, v_scale_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_scale_elim(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_scale_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_434_, v_scale_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim___redArg(lean_object* v_t_438_, lean_object* v_setTransform_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_438_, v_setTransform_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_setTransform_elim(lean_object* v_motive_441_, lean_object* v_t_442_, lean_object* v_h_443_, lean_object* v_setTransform_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_442_, v_setTransform_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim___redArg(lean_object* v_t_446_, lean_object* v_resetTransform_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_446_, v_resetTransform_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_resetTransform_elim(lean_object* v_motive_449_, lean_object* v_t_450_, lean_object* v_h_451_, lean_object* v_resetTransform_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_450_, v_resetTransform_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim___redArg(lean_object* v_t_454_, lean_object* v_drawImage_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_454_, v_drawImage_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImage_elim(lean_object* v_motive_457_, lean_object* v_t_458_, lean_object* v_h_459_, lean_object* v_drawImage_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_458_, v_drawImage_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim___redArg(lean_object* v_t_462_, lean_object* v_drawImageScaled_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_462_, v_drawImageScaled_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_DrawCommand_drawImageScaled_elim(lean_object* v_motive_465_, lean_object* v_t_466_, lean_object* v_h_467_, lean_object* v_drawImageScaled_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lasm_Web_DrawCommand_ctorElim___redArg(v_t_466_, v_drawImageScaled_468_);
return v___x_469_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_473_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__1));
v___x_474_ = lean_unsigned_to_nat(2u);
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_474_);
v___x_476_ = lean_array_push(v___x_475_, v___x_473_);
return v___x_476_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_480_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__4));
v___x_481_ = lean_unsigned_to_nat(2u);
v___x_482_ = lean_mk_empty_array_with_capacity(v___x_481_);
v___x_483_ = lean_array_push(v___x_482_, v___x_480_);
return v___x_483_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_487_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__7));
v___x_488_ = lean_unsigned_to_nat(2u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_array_push(v___x_489_, v___x_487_);
return v___x_490_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_494_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__10));
v___x_495_ = lean_unsigned_to_nat(2u);
v___x_496_ = lean_mk_empty_array_with_capacity(v___x_495_);
v___x_497_ = lean_array_push(v___x_496_, v___x_494_);
return v___x_497_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_501_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__13));
v___x_502_ = lean_unsigned_to_nat(2u);
v___x_503_ = lean_mk_empty_array_with_capacity(v___x_502_);
v___x_504_ = lean_array_push(v___x_503_, v___x_501_);
return v___x_504_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_508_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__16));
v___x_509_ = lean_unsigned_to_nat(2u);
v___x_510_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_511_ = lean_array_push(v___x_510_, v___x_508_);
return v___x_511_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_515_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__19));
v___x_516_ = lean_unsigned_to_nat(2u);
v___x_517_ = lean_mk_empty_array_with_capacity(v___x_516_);
v___x_518_ = lean_array_push(v___x_517_, v___x_515_);
return v___x_518_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__22));
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = lean_mk_empty_array_with_capacity(v___x_523_);
v___x_525_ = lean_array_push(v___x_524_, v___x_522_);
return v___x_525_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_529_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__25));
v___x_530_ = lean_unsigned_to_nat(2u);
v___x_531_ = lean_mk_empty_array_with_capacity(v___x_530_);
v___x_532_ = lean_array_push(v___x_531_, v___x_529_);
return v___x_532_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__28));
v___x_537_ = lean_unsigned_to_nat(5u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_539_ = lean_array_push(v___x_538_, v___x_536_);
return v___x_539_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_543_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__31));
v___x_544_ = lean_unsigned_to_nat(5u);
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_544_);
v___x_546_ = lean_array_push(v___x_545_, v___x_543_);
return v___x_546_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_550_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__34));
v___x_551_ = lean_unsigned_to_nat(5u);
v___x_552_ = lean_mk_empty_array_with_capacity(v___x_551_);
v___x_553_ = lean_array_push(v___x_552_, v___x_550_);
return v___x_553_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_575_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__45));
v___x_576_ = lean_unsigned_to_nat(3u);
v___x_577_ = lean_mk_empty_array_with_capacity(v___x_576_);
v___x_578_ = lean_array_push(v___x_577_, v___x_575_);
return v___x_578_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_582_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__48));
v___x_583_ = lean_unsigned_to_nat(3u);
v___x_584_ = lean_mk_empty_array_with_capacity(v___x_583_);
v___x_585_ = lean_array_push(v___x_584_, v___x_582_);
return v___x_585_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_589_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__51));
v___x_590_ = lean_unsigned_to_nat(5u);
v___x_591_ = lean_mk_empty_array_with_capacity(v___x_590_);
v___x_592_ = lean_array_push(v___x_591_, v___x_589_);
return v___x_592_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_596_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__54));
v___x_597_ = lean_unsigned_to_nat(7u);
v___x_598_ = lean_mk_empty_array_with_capacity(v___x_597_);
v___x_599_ = lean_array_push(v___x_598_, v___x_596_);
return v___x_599_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_603_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__57));
v___x_604_ = lean_unsigned_to_nat(5u);
v___x_605_ = lean_mk_empty_array_with_capacity(v___x_604_);
v___x_606_ = lean_array_push(v___x_605_, v___x_603_);
return v___x_606_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_610_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__60));
v___x_611_ = lean_unsigned_to_nat(7u);
v___x_612_ = lean_mk_empty_array_with_capacity(v___x_611_);
v___x_613_ = lean_array_push(v___x_612_, v___x_610_);
return v___x_613_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_635_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__71));
v___x_636_ = lean_unsigned_to_nat(4u);
v___x_637_ = lean_mk_empty_array_with_capacity(v___x_636_);
v___x_638_ = lean_array_push(v___x_637_, v___x_635_);
return v___x_638_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_642_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__74));
v___x_643_ = lean_unsigned_to_nat(4u);
v___x_644_ = lean_mk_empty_array_with_capacity(v___x_643_);
v___x_645_ = lean_array_push(v___x_644_, v___x_642_);
return v___x_645_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_667_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__85));
v___x_668_ = lean_unsigned_to_nat(3u);
v___x_669_ = lean_mk_empty_array_with_capacity(v___x_668_);
v___x_670_ = lean_array_push(v___x_669_, v___x_667_);
return v___x_670_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_674_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__88));
v___x_675_ = lean_unsigned_to_nat(2u);
v___x_676_ = lean_mk_empty_array_with_capacity(v___x_675_);
v___x_677_ = lean_array_push(v___x_676_, v___x_674_);
return v___x_677_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_681_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__91));
v___x_682_ = lean_unsigned_to_nat(3u);
v___x_683_ = lean_mk_empty_array_with_capacity(v___x_682_);
v___x_684_ = lean_array_push(v___x_683_, v___x_681_);
return v___x_684_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_688_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__94));
v___x_689_ = lean_unsigned_to_nat(7u);
v___x_690_ = lean_mk_empty_array_with_capacity(v___x_689_);
v___x_691_ = lean_array_push(v___x_690_, v___x_688_);
return v___x_691_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_705_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__101));
v___x_706_ = lean_unsigned_to_nat(4u);
v___x_707_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_708_ = lean_array_push(v___x_707_, v___x_705_);
return v___x_708_;
}
}
static lean_object* _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106(void){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_712_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__105));
v___x_713_ = lean_unsigned_to_nat(6u);
v___x_714_ = lean_mk_empty_array_with_capacity(v___x_713_);
v___x_715_ = lean_array_push(v___x_714_, v___x_712_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSDrawCommand___lam__0(lean_object* v_x_716_){
_start:
{
switch(lean_obj_tag(v_x_716_))
{
case 0:
{
lean_object* v_style_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_727_; 
v_style_717_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_727_ == 0)
{
v___x_719_ = v_x_716_;
v_isShared_720_ = v_isSharedCheck_727_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_style_717_);
lean_dec(v_x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_727_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set_tag(v___x_719_, 4);
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_style_717_);
v___x_722_ = v_reuseFailAlloc_726_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2);
v___x_724_ = lean_array_push(v___x_723_, v___x_722_);
v___x_725_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
}
}
case 1:
{
lean_object* v_style_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_738_; 
v_style_728_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_738_ == 0)
{
v___x_730_ = v_x_716_;
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_style_728_);
lean_dec(v_x_716_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set_tag(v___x_730_, 4);
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_style_728_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5);
v___x_735_ = lean_array_push(v___x_734_, v___x_733_);
v___x_736_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
}
}
case 2:
{
double v_width_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_749_; 
v_width_739_ = lean_ctor_get_float(v_x_716_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_749_ == 0)
{
v___x_741_ = v_x_716_;
v_isShared_742_ = v_isSharedCheck_749_;
goto v_resetjp_740_;
}
else
{
lean_dec(v_x_716_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_749_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 3);
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_748_, 0, v_width_739_);
v___x_744_ = v_reuseFailAlloc_748_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8);
v___x_746_ = lean_array_push(v___x_745_, v___x_744_);
v___x_747_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
}
}
case 3:
{
lean_object* v_font_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_760_; 
v_font_750_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_760_ == 0)
{
v___x_752_ = v_x_716_;
v_isShared_753_ = v_isSharedCheck_760_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_font_750_);
lean_dec(v_x_716_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_760_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
lean_ctor_set_tag(v___x_752_, 4);
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_font_750_);
v___x_755_ = v_reuseFailAlloc_759_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_756_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11);
v___x_757_ = lean_array_push(v___x_756_, v___x_755_);
v___x_758_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
case 4:
{
lean_object* v_align_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_771_; 
v_align_761_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_771_ == 0)
{
v___x_763_ = v_x_716_;
v_isShared_764_ = v_isSharedCheck_771_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_align_761_);
lean_dec(v_x_716_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_771_;
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
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_align_761_);
v___x_766_ = v_reuseFailAlloc_770_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14);
v___x_768_ = lean_array_push(v___x_767_, v___x_766_);
v___x_769_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
}
case 5:
{
lean_object* v_baseline_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_782_; 
v_baseline_772_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_782_ == 0)
{
v___x_774_ = v_x_716_;
v_isShared_775_ = v_isSharedCheck_782_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_baseline_772_);
lean_dec(v_x_716_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_782_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 4);
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_baseline_772_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17);
v___x_779_ = lean_array_push(v___x_778_, v___x_777_);
v___x_780_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
case 6:
{
double v_alpha_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_793_; 
v_alpha_783_ = lean_ctor_get_float(v_x_716_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_793_ == 0)
{
v___x_785_ = v_x_716_;
v_isShared_786_ = v_isSharedCheck_793_;
goto v_resetjp_784_;
}
else
{
lean_dec(v_x_716_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_793_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
lean_ctor_set_tag(v___x_785_, 3);
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_792_, 0, v_alpha_783_);
v___x_788_ = v_reuseFailAlloc_792_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_789_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20);
v___x_790_ = lean_array_push(v___x_789_, v___x_788_);
v___x_791_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
return v___x_791_;
}
}
}
case 7:
{
lean_object* v_cap_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_804_; 
v_cap_794_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_804_ == 0)
{
v___x_796_ = v_x_716_;
v_isShared_797_ = v_isSharedCheck_804_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_cap_794_);
lean_dec(v_x_716_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_804_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set_tag(v___x_796_, 4);
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_cap_794_);
v___x_799_ = v_reuseFailAlloc_803_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23);
v___x_801_ = lean_array_push(v___x_800_, v___x_799_);
v___x_802_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
case 8:
{
lean_object* v_join_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_815_; 
v_join_805_ = lean_ctor_get(v_x_716_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_815_ == 0)
{
v___x_807_ = v_x_716_;
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_join_805_);
lean_dec(v_x_716_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
lean_ctor_set_tag(v___x_807_, 4);
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_join_805_);
v___x_810_ = v_reuseFailAlloc_814_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26);
v___x_812_ = lean_array_push(v___x_811_, v___x_810_);
v___x_813_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
}
case 9:
{
double v_x_816_; double v_y_817_; double v_width_818_; double v_height_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v_x_816_ = lean_ctor_get_float(v_x_716_, 0);
v_y_817_ = lean_ctor_get_float(v_x_716_, 8);
v_width_818_ = lean_ctor_get_float(v_x_716_, 16);
v_height_819_ = lean_ctor_get_float(v_x_716_, 24);
lean_dec_ref_known(v_x_716_, 0);
v___x_820_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_820_, 0, v_x_816_);
v___x_821_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_821_, 0, v_y_817_);
v___x_822_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_822_, 0, v_width_818_);
v___x_823_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_823_, 0, v_height_819_);
v___x_824_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29);
v___x_825_ = lean_array_push(v___x_824_, v___x_820_);
v___x_826_ = lean_array_push(v___x_825_, v___x_821_);
v___x_827_ = lean_array_push(v___x_826_, v___x_822_);
v___x_828_ = lean_array_push(v___x_827_, v___x_823_);
v___x_829_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
return v___x_829_;
}
case 10:
{
double v_x_830_; double v_y_831_; double v_width_832_; double v_height_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_x_830_ = lean_ctor_get_float(v_x_716_, 0);
v_y_831_ = lean_ctor_get_float(v_x_716_, 8);
v_width_832_ = lean_ctor_get_float(v_x_716_, 16);
v_height_833_ = lean_ctor_get_float(v_x_716_, 24);
lean_dec_ref_known(v_x_716_, 0);
v___x_834_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_834_, 0, v_x_830_);
v___x_835_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_835_, 0, v_y_831_);
v___x_836_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_836_, 0, v_width_832_);
v___x_837_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_837_, 0, v_height_833_);
v___x_838_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32);
v___x_839_ = lean_array_push(v___x_838_, v___x_834_);
v___x_840_ = lean_array_push(v___x_839_, v___x_835_);
v___x_841_ = lean_array_push(v___x_840_, v___x_836_);
v___x_842_ = lean_array_push(v___x_841_, v___x_837_);
v___x_843_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
case 11:
{
double v_x_844_; double v_y_845_; double v_width_846_; double v_height_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_x_844_ = lean_ctor_get_float(v_x_716_, 0);
v_y_845_ = lean_ctor_get_float(v_x_716_, 8);
v_width_846_ = lean_ctor_get_float(v_x_716_, 16);
v_height_847_ = lean_ctor_get_float(v_x_716_, 24);
lean_dec_ref_known(v_x_716_, 0);
v___x_848_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_848_, 0, v_x_844_);
v___x_849_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_849_, 0, v_y_845_);
v___x_850_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_850_, 0, v_width_846_);
v___x_851_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_851_, 0, v_height_847_);
v___x_852_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35);
v___x_853_ = lean_array_push(v___x_852_, v___x_848_);
v___x_854_ = lean_array_push(v___x_853_, v___x_849_);
v___x_855_ = lean_array_push(v___x_854_, v___x_850_);
v___x_856_ = lean_array_push(v___x_855_, v___x_851_);
v___x_857_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
case 12:
{
lean_object* v___x_858_; 
v___x_858_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39));
return v___x_858_;
}
case 13:
{
lean_object* v___x_859_; 
v___x_859_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43));
return v___x_859_;
}
case 14:
{
double v_x_860_; double v_y_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v_x_860_ = lean_ctor_get_float(v_x_716_, 0);
v_y_861_ = lean_ctor_get_float(v_x_716_, 8);
lean_dec_ref_known(v_x_716_, 0);
v___x_862_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_862_, 0, v_x_860_);
v___x_863_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_863_, 0, v_y_861_);
v___x_864_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46);
v___x_865_ = lean_array_push(v___x_864_, v___x_862_);
v___x_866_ = lean_array_push(v___x_865_, v___x_863_);
v___x_867_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
return v___x_867_;
}
case 15:
{
double v_x_868_; double v_y_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v_x_868_ = lean_ctor_get_float(v_x_716_, 0);
v_y_869_ = lean_ctor_get_float(v_x_716_, 8);
lean_dec_ref_known(v_x_716_, 0);
v___x_870_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_870_, 0, v_x_868_);
v___x_871_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_871_, 0, v_y_869_);
v___x_872_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49);
v___x_873_ = lean_array_push(v___x_872_, v___x_870_);
v___x_874_ = lean_array_push(v___x_873_, v___x_871_);
v___x_875_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
case 16:
{
double v_x_876_; double v_y_877_; double v_width_878_; double v_height_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_x_876_ = lean_ctor_get_float(v_x_716_, 0);
v_y_877_ = lean_ctor_get_float(v_x_716_, 8);
v_width_878_ = lean_ctor_get_float(v_x_716_, 16);
v_height_879_ = lean_ctor_get_float(v_x_716_, 24);
lean_dec_ref_known(v_x_716_, 0);
v___x_880_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_880_, 0, v_x_876_);
v___x_881_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_881_, 0, v_y_877_);
v___x_882_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_882_, 0, v_width_878_);
v___x_883_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_883_, 0, v_height_879_);
v___x_884_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52);
v___x_885_ = lean_array_push(v___x_884_, v___x_880_);
v___x_886_ = lean_array_push(v___x_885_, v___x_881_);
v___x_887_ = lean_array_push(v___x_886_, v___x_882_);
v___x_888_ = lean_array_push(v___x_887_, v___x_883_);
v___x_889_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
case 17:
{
double v_x_890_; double v_y_891_; double v_radius_892_; double v_startAngle_893_; double v_endAngle_894_; uint8_t v_counterclockwise_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v_x_890_ = lean_ctor_get_float(v_x_716_, 0);
v_y_891_ = lean_ctor_get_float(v_x_716_, 8);
v_radius_892_ = lean_ctor_get_float(v_x_716_, 16);
v_startAngle_893_ = lean_ctor_get_float(v_x_716_, 24);
v_endAngle_894_ = lean_ctor_get_float(v_x_716_, 32);
v_counterclockwise_895_ = lean_ctor_get_uint8(v_x_716_, 40);
lean_dec_ref_known(v_x_716_, 0);
v___x_896_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_896_, 0, v_x_890_);
v___x_897_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_897_, 0, v_y_891_);
v___x_898_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_898_, 0, v_radius_892_);
v___x_899_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_899_, 0, v_startAngle_893_);
v___x_900_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_900_, 0, v_endAngle_894_);
v___x_901_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_901_, 0, v_counterclockwise_895_);
v___x_902_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55);
v___x_903_ = lean_array_push(v___x_902_, v___x_896_);
v___x_904_ = lean_array_push(v___x_903_, v___x_897_);
v___x_905_ = lean_array_push(v___x_904_, v___x_898_);
v___x_906_ = lean_array_push(v___x_905_, v___x_899_);
v___x_907_ = lean_array_push(v___x_906_, v___x_900_);
v___x_908_ = lean_array_push(v___x_907_, v___x_901_);
v___x_909_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
case 18:
{
double v_cpx_910_; double v_cpy_911_; double v_x_912_; double v_y_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_cpx_910_ = lean_ctor_get_float(v_x_716_, 0);
v_cpy_911_ = lean_ctor_get_float(v_x_716_, 8);
v_x_912_ = lean_ctor_get_float(v_x_716_, 16);
v_y_913_ = lean_ctor_get_float(v_x_716_, 24);
lean_dec_ref_known(v_x_716_, 0);
v___x_914_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_914_, 0, v_cpx_910_);
v___x_915_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_915_, 0, v_cpy_911_);
v___x_916_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_916_, 0, v_x_912_);
v___x_917_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_917_, 0, v_y_913_);
v___x_918_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58);
v___x_919_ = lean_array_push(v___x_918_, v___x_914_);
v___x_920_ = lean_array_push(v___x_919_, v___x_915_);
v___x_921_ = lean_array_push(v___x_920_, v___x_916_);
v___x_922_ = lean_array_push(v___x_921_, v___x_917_);
v___x_923_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
return v___x_923_;
}
case 19:
{
double v_cp1x_924_; double v_cp1y_925_; double v_cp2x_926_; double v_cp2y_927_; double v_x_928_; double v_y_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_cp1x_924_ = lean_ctor_get_float(v_x_716_, 0);
v_cp1y_925_ = lean_ctor_get_float(v_x_716_, 8);
v_cp2x_926_ = lean_ctor_get_float(v_x_716_, 16);
v_cp2y_927_ = lean_ctor_get_float(v_x_716_, 24);
v_x_928_ = lean_ctor_get_float(v_x_716_, 32);
v_y_929_ = lean_ctor_get_float(v_x_716_, 40);
lean_dec_ref_known(v_x_716_, 0);
v___x_930_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_930_, 0, v_cp1x_924_);
v___x_931_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_931_, 0, v_cp1y_925_);
v___x_932_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_932_, 0, v_cp2x_926_);
v___x_933_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_933_, 0, v_cp2y_927_);
v___x_934_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_934_, 0, v_x_928_);
v___x_935_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_935_, 0, v_y_929_);
v___x_936_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61);
v___x_937_ = lean_array_push(v___x_936_, v___x_930_);
v___x_938_ = lean_array_push(v___x_937_, v___x_931_);
v___x_939_ = lean_array_push(v___x_938_, v___x_932_);
v___x_940_ = lean_array_push(v___x_939_, v___x_933_);
v___x_941_ = lean_array_push(v___x_940_, v___x_934_);
v___x_942_ = lean_array_push(v___x_941_, v___x_935_);
v___x_943_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
case 20:
{
lean_object* v___x_944_; 
v___x_944_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65));
return v___x_944_;
}
case 21:
{
lean_object* v___x_945_; 
v___x_945_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69));
return v___x_945_;
}
case 22:
{
lean_object* v_text_946_; double v_x_947_; double v_y_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_text_946_ = lean_ctor_get(v_x_716_, 0);
lean_inc_ref(v_text_946_);
v_x_947_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1);
v_y_948_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_716_, 1);
v___x_949_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_949_, 0, v_text_946_);
v___x_950_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_950_, 0, v_x_947_);
v___x_951_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_951_, 0, v_y_948_);
v___x_952_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72);
v___x_953_ = lean_array_push(v___x_952_, v___x_949_);
v___x_954_ = lean_array_push(v___x_953_, v___x_950_);
v___x_955_ = lean_array_push(v___x_954_, v___x_951_);
v___x_956_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
case 23:
{
lean_object* v_text_957_; double v_x_958_; double v_y_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v_text_957_ = lean_ctor_get(v_x_716_, 0);
lean_inc_ref(v_text_957_);
v_x_958_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1);
v_y_959_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_716_, 1);
v___x_960_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_960_, 0, v_text_957_);
v___x_961_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_961_, 0, v_x_958_);
v___x_962_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_962_, 0, v_y_959_);
v___x_963_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75);
v___x_964_ = lean_array_push(v___x_963_, v___x_960_);
v___x_965_ = lean_array_push(v___x_964_, v___x_961_);
v___x_966_ = lean_array_push(v___x_965_, v___x_962_);
v___x_967_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
return v___x_967_;
}
case 24:
{
lean_object* v___x_968_; 
v___x_968_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79));
return v___x_968_;
}
case 25:
{
lean_object* v___x_969_; 
v___x_969_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83));
return v___x_969_;
}
case 26:
{
double v_x_970_; double v_y_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_x_970_ = lean_ctor_get_float(v_x_716_, 0);
v_y_971_ = lean_ctor_get_float(v_x_716_, 8);
lean_dec_ref_known(v_x_716_, 0);
v___x_972_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_972_, 0, v_x_970_);
v___x_973_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_973_, 0, v_y_971_);
v___x_974_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86);
v___x_975_ = lean_array_push(v___x_974_, v___x_972_);
v___x_976_ = lean_array_push(v___x_975_, v___x_973_);
v___x_977_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
return v___x_977_;
}
case 27:
{
double v_angle_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_988_; 
v_angle_978_ = lean_ctor_get_float(v_x_716_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_988_ == 0)
{
v___x_980_ = v_x_716_;
v_isShared_981_ = v_isSharedCheck_988_;
goto v_resetjp_979_;
}
else
{
lean_dec(v_x_716_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_988_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set_tag(v___x_980_, 3);
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_987_, 0, v_angle_978_);
v___x_983_ = v_reuseFailAlloc_987_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_984_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89);
v___x_985_ = lean_array_push(v___x_984_, v___x_983_);
v___x_986_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
case 28:
{
double v_x_989_; double v_y_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v_x_989_ = lean_ctor_get_float(v_x_716_, 0);
v_y_990_ = lean_ctor_get_float(v_x_716_, 8);
lean_dec_ref_known(v_x_716_, 0);
v___x_991_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_991_, 0, v_x_989_);
v___x_992_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_992_, 0, v_y_990_);
v___x_993_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92);
v___x_994_ = lean_array_push(v___x_993_, v___x_991_);
v___x_995_ = lean_array_push(v___x_994_, v___x_992_);
v___x_996_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
case 29:
{
double v_a_997_; double v_b_998_; double v_c_999_; double v_d_1000_; double v_e_1001_; double v_f_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_a_997_ = lean_ctor_get_float(v_x_716_, 0);
v_b_998_ = lean_ctor_get_float(v_x_716_, 8);
v_c_999_ = lean_ctor_get_float(v_x_716_, 16);
v_d_1000_ = lean_ctor_get_float(v_x_716_, 24);
v_e_1001_ = lean_ctor_get_float(v_x_716_, 32);
v_f_1002_ = lean_ctor_get_float(v_x_716_, 40);
lean_dec_ref_known(v_x_716_, 0);
v___x_1003_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1003_, 0, v_a_997_);
v___x_1004_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1004_, 0, v_b_998_);
v___x_1005_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1005_, 0, v_c_999_);
v___x_1006_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1006_, 0, v_d_1000_);
v___x_1007_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1007_, 0, v_e_1001_);
v___x_1008_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1008_, 0, v_f_1002_);
v___x_1009_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95);
v___x_1010_ = lean_array_push(v___x_1009_, v___x_1003_);
v___x_1011_ = lean_array_push(v___x_1010_, v___x_1004_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_1005_);
v___x_1013_ = lean_array_push(v___x_1012_, v___x_1006_);
v___x_1014_ = lean_array_push(v___x_1013_, v___x_1007_);
v___x_1015_ = lean_array_push(v___x_1014_, v___x_1008_);
v___x_1016_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
return v___x_1016_;
}
case 30:
{
lean_object* v___x_1017_; 
v___x_1017_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99));
return v___x_1017_;
}
case 31:
{
lean_object* v_image_1018_; double v_x_1019_; double v_y_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_image_1018_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_image_1018_);
v_x_1019_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1);
v_y_1020_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_x_716_, 1);
v___x_1021_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1022_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1022_, 0, v_image_1018_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1023_, 0, v_x_1019_);
v___x_1024_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1024_, 0, v_y_1020_);
v___x_1025_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1022_);
v___x_1027_ = lean_array_push(v___x_1026_, v___x_1023_);
v___x_1028_ = lean_array_push(v___x_1027_, v___x_1024_);
v___x_1029_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
default: 
{
lean_object* v_image_1030_; double v_x_1031_; double v_y_1032_; double v_width_1033_; double v_height_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_image_1030_ = lean_ctor_get(v_x_716_, 0);
lean_inc(v_image_1030_);
v_x_1031_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1);
v_y_1032_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 8);
v_width_1033_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 16);
v_height_1034_ = lean_ctor_get_float(v_x_716_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_x_716_, 1);
v___x_1035_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1036_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1036_, 0, v_image_1030_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1037_, 0, v_x_1031_);
v___x_1038_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1038_, 0, v_y_1032_);
v___x_1039_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1039_, 0, v_width_1033_);
v___x_1040_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1040_, 0, v_height_1034_);
v___x_1041_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1036_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1037_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1038_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1039_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1040_);
v___x_1047_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0(lean_object* v___x_1053_, lean_object* v_d_1054_){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0));
lean_inc_ref(v___x_1053_);
v___x_1056_ = l_Lasm_JS_readField___redArg(v___x_1053_, v_d_1054_, v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec_ref(v___x_1053_);
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_a_1065_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1066_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1));
lean_inc_ref(v___x_1053_);
v___x_1067_ = l_Lasm_JS_readField___redArg(v___x_1053_, v_d_1054_, v___x_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v_a_1065_);
lean_dec_ref(v___x_1053_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1077_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2));
v___x_1078_ = l_Lasm_JS_readField___redArg(v___x_1053_, v_d_1054_, v___x_1077_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_a_1076_);
lean_dec(v_a_1065_);
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1098_; 
v_a_1087_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1089_ = v___x_1078_;
v_isShared_1090_ = v_isSharedCheck_1098_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1078_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1098_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1091_; double v___x_1092_; double v___x_1093_; double v___x_1094_; lean_object* v___x_1096_; 
v___x_1091_ = lean_alloc_ctor(0, 0, 24);
v___x_1092_ = lean_unbox_float(v_a_1065_);
lean_dec(v_a_1065_);
lean_ctor_set_float(v___x_1091_, 0, v___x_1092_);
v___x_1093_ = lean_unbox_float(v_a_1076_);
lean_dec(v_a_1076_);
lean_ctor_set_float(v___x_1091_, 8, v___x_1093_);
v___x_1094_ = lean_unbox_float(v_a_1087_);
lean_dec(v_a_1087_);
lean_ctor_set_float(v___x_1091_, 16, v___x_1094_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1091_);
v___x_1096_ = v___x_1089_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTextMetrics___lam__0___boxed(lean_object* v___x_1099_, lean_object* v_d_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_Web_instFromJSTextMetrics___lam__0(v___x_1099_, v_d_1100_);
lean_dec(v_d_1100_);
return v_res_1101_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics___closed__0(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___f_1103_; 
v___x_1102_ = l_Lasm_JS_instFromJSFloat;
v___f_1103_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1103_, 0, v___x_1102_);
return v___f_1103_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics___closed__2(void){
_start:
{
uint8_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___f_1107_; lean_object* v___x_1108_; 
v___x_1105_ = 0;
v___x_1106_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___closed__1));
v___f_1107_ = lean_obj_once(&l_Lasm_Web_instFromJSTextMetrics___closed__0, &l_Lasm_Web_instFromJSTextMetrics___closed__0_once, _init_l_Lasm_Web_instFromJSTextMetrics___closed__0);
v___x_1108_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1108_, 0, v___f_1107_);
lean_ctor_set(v___x_1108_, 1, v___x_1106_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*2, v___x_1105_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSTextMetrics(void){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_obj_once(&l_Lasm_Web_instFromJSTextMetrics___closed__2, &l_Lasm_Web_instFromJSTextMetrics___closed__2_once, _init_l_Lasm_Web_instFromJSTextMetrics___closed__2);
return v___x_1109_;
}
}
static double _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__0(void){
_start:
{
uint64_t v___x_1110_; double v___x_1111_; 
v___x_1110_ = 0ULL;
v___x_1111_ = lean_uint64_to_float(v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__1(void){
_start:
{
double v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_float_once(&l_Lasm_Web_instInhabitedTextMetrics_default___closed__0, &l_Lasm_Web_instInhabitedTextMetrics_default___closed__0_once, _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__0);
v___x_1113_ = lean_alloc_ctor(0, 0, 24);
lean_ctor_set_float(v___x_1113_, 0, v___x_1112_);
lean_ctor_set_float(v___x_1113_, 8, v___x_1112_);
lean_ctor_set_float(v___x_1113_, 16, v___x_1112_);
return v___x_1113_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics_default(void){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_obj_once(&l_Lasm_Web_instInhabitedTextMetrics_default___closed__1, &l_Lasm_Web_instInhabitedTextMetrics_default___closed__1_once, _init_l_Lasm_Web_instInhabitedTextMetrics_default___closed__1);
return v___x_1114_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedTextMetrics(void){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lasm_Web_instInhabitedTextMetrics_default;
return v___x_1115_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_unsigned_to_nat(9u);
v___x_1129_ = lean_nat_to_int(v___x_1128_);
return v___x_1129_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_unsigned_to_nat(10u);
v___x_1136_ = lean_nat_to_int(v___x_1135_);
return v___x_1136_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_unsigned_to_nat(11u);
v___x_1140_ = lean_nat_to_int(v___x_1139_);
return v___x_1140_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__0));
v___x_1143_ = lean_string_length(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__14);
v___x_1145_ = lean_nat_to_int(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg(lean_object* v_x_1150_){
_start:
{
double v_width_1151_; double v_ascent_1152_; double v_descent_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v_width_1151_ = lean_ctor_get_float(v_x_1150_, 0);
v_ascent_1152_ = lean_ctor_get_float(v_x_1150_, 8);
v_descent_1153_ = lean_ctor_get_float(v_x_1150_, 16);
v___x_1154_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__4));
v___x_1155_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__5));
v___x_1156_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__6);
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = l_Float_repr(v_width_1151_, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1156_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = 0;
v___x_1161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1161_, 0, v___x_1159_);
lean_ctor_set_uint8(v___x_1161_, sizeof(void*)*1, v___x_1160_);
v___x_1162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1155_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
v___x_1163_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__8));
v___x_1164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
v___x_1165_ = lean_box(1);
v___x_1166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
v___x_1167_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__9));
v___x_1168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1166_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
v___x_1169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
lean_ctor_set(v___x_1169_, 1, v___x_1154_);
v___x_1170_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__10);
v___x_1171_ = l_Float_repr(v_ascent_1152_, v___x_1157_);
v___x_1172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set_uint8(v___x_1173_, sizeof(void*)*1, v___x_1160_);
v___x_1174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1169_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v___x_1163_);
v___x_1176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1165_);
v___x_1177_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__11));
v___x_1178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___x_1154_);
v___x_1180_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__12);
v___x_1181_ = l_Float_repr(v_descent_1153_, v___x_1157_);
v___x_1182_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1180_);
lean_ctor_set(v___x_1182_, 1, v___x_1181_);
v___x_1183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set_uint8(v___x_1183_, sizeof(void*)*1, v___x_1160_);
v___x_1184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1179_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = lean_obj_once(&l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15, &l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__15);
v___x_1186_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__16));
v___x_1187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1184_);
v___x_1188_ = ((lean_object*)(l_Lasm_Web_instReprTextMetrics_repr___redArg___closed__17));
v___x_1189_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1185_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___x_1191_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*1, v___x_1160_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___redArg___boxed(lean_object* v_x_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lasm_Web_instReprTextMetrics_repr___redArg(v_x_1192_);
lean_dec_ref(v_x_1192_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr(lean_object* v_x_1194_, lean_object* v_prec_1195_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lasm_Web_instReprTextMetrics_repr___redArg(v_x_1194_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprTextMetrics_repr___boxed(lean_object* v_x_1197_, lean_object* v_prec_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lasm_Web_instReprTextMetrics_repr(v_x_1197_, v_prec_1198_);
lean_dec(v_prec_1198_);
lean_dec_ref(v_x_1197_);
return v_res_1199_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1207_ = lean_string_utf8_byte_size(v___x_1206_);
return v___x_1207_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__4);
v___x_1210_ = lean_nat_dec_eq(v___x_1209_, v___x_1208_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__9));
v___x_1216_ = lean_unsigned_to_nat(46u);
v___x_1217_ = lean_unsigned_to_nat(193u);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__8));
v___x_1219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__7));
v___x_1220_ = l_mkPanicMessageWithDecl(v___x_1219_, v___x_1218_, v___x_1217_, v___x_1216_, v___x_1215_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(lean_object* v_context_1222_, lean_object* v_d_1223_){
_start:
{
lean_object* v___y_1226_; lean_object* v___y_1227_; 
if (lean_obj_tag(v_d_1223_) == 9)
{
lean_object* v_value_1231_; lean_object* v___x_1232_; 
v_value_1231_ = lean_ctor_get(v_d_1223_, 0);
lean_inc(v_value_1231_);
lean_dec_ref_known(v_d_1223_, 2);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_value_1231_);
return v___x_1232_;
}
else
{
lean_object* v___x_1233_; lean_object* v_received_1235_; 
v___x_1233_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
if (lean_obj_tag(v_d_1223_) == 9)
{
lean_object* v_value_1249_; lean_object* v_description_1250_; uint8_t v___x_1251_; 
v_value_1249_ = lean_ctor_get(v_d_1223_, 0);
v_description_1250_ = lean_ctor_get(v_d_1223_, 1);
v___x_1251_ = lean_string_dec_eq(v_description_1250_, v___x_1233_);
if (v___x_1251_ == 0)
{
goto v___jp_1247_;
}
else
{
uint32_t v___x_1252_; uint64_t v___x_1253_; lean_object* v___x_1254_; uint32_t v___x_1255_; lean_object* v___x_1256_; 
lean_inc_n(v_value_1249_, 2);
lean_dec_ref_known(v_d_1223_, 2);
v___x_1252_ = 206;
v___x_1253_ = 0ULL;
v___x_1254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1254_, 0, v_value_1249_);
lean_ctor_set(v___x_1254_, 1, v___x_1233_);
v___x_1255_ = lasm_js_value_handle(v_value_1249_);
lean_dec(v_value_1249_);
v___x_1256_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1252_, v___x_1253_, v___x_1254_, v___x_1255_);
lean_dec_ref_known(v___x_1254_, 2);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; uint8_t v___x_1258_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1256_, 1);
v___x_1258_ = lean_string_validate_utf8(v_a_1257_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec(v_a_1257_);
v___x_1259_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10);
v___x_1260_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1259_);
v_received_1235_ = v___x_1260_;
goto v___jp_1234_;
}
else
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_string_from_utf8_unchecked(v_a_1257_);
v_received_1235_ = v___x_1261_;
goto v___jp_1234_;
}
}
else
{
lean_object* v___x_1262_; 
lean_dec_ref_known(v___x_1256_, 1);
v___x_1262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11));
v_received_1235_ = v___x_1262_;
goto v___jp_1234_;
}
}
}
else
{
goto v___jp_1247_;
}
v___jp_1234_:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1237_ = lean_string_append(v___x_1236_, v_context_1222_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_1239_ = lean_string_append(v___x_1237_, v___x_1238_);
v___x_1240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__2));
v___x_1241_ = lean_string_append(v___x_1239_, v___x_1240_);
v___x_1242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_1243_ = lean_string_append(v___x_1241_, v___x_1242_);
v___x_1244_ = lean_string_append(v___x_1243_, v_received_1235_);
lean_dec_ref(v_received_1235_);
v___x_1245_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; 
v___x_1246_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6));
v___y_1226_ = v___x_1244_;
v___y_1227_ = v___x_1246_;
goto v___jp_1225_;
}
else
{
v___y_1226_ = v___x_1244_;
v___y_1227_ = v___x_1233_;
goto v___jp_1225_;
}
}
v___jp_1247_:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Lasm_JS_Data_describe(v_d_1223_);
v_received_1235_ = v___x_1248_;
goto v___jp_1234_;
}
}
v___jp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_string_append(v___y_1226_, v___y_1227_);
v___x_1229_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
v___x_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___boxed(lean_object* v_context_1263_, lean_object* v_d_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(v_context_1263_, v_d_1264_);
lean_dec_ref(v_context_1263_);
return v_res_1266_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1(void){
_start:
{
uint8_t v___x_1268_; uint64_t v___x_1269_; 
v___x_1268_ = 1;
v___x_1269_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(lean_object* v_b_1270_, lean_object* v_args_1271_, uint8_t v_await_1272_){
_start:
{
uint64_t v___y_1275_; uint64_t v___y_1276_; uint64_t v___x_1319_; uint64_t v___y_1321_; 
v___x_1319_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__1);
if (v_await_1272_ == 0)
{
uint64_t v___x_1326_; 
v___x_1326_ = 0ULL;
v___y_1321_ = v___x_1326_;
goto v___jp_1320_;
}
else
{
uint64_t v___x_1327_; 
v___x_1327_ = 2ULL;
v___y_1321_ = v___x_1327_;
goto v___jp_1320_;
}
v___jp_1274_:
{
uint64_t v_flags_1277_; uint32_t v___x_1278_; lean_object* v___x_1279_; uint32_t v___x_1280_; lean_object* v___x_1281_; 
v_flags_1277_ = lean_uint64_lor(v___y_1275_, v___y_1276_);
v___x_1278_ = 214;
v___x_1279_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1270_, v_args_1271_);
v___x_1280_ = 0;
v___x_1281_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1278_, v_flags_1277_, v___x_1279_, v___x_1280_);
lean_dec(v___x_1279_);
if (lean_obj_tag(v___x_1281_) == 0)
{
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = l_Lasm_JS_Wire_decode(v_a_1282_);
lean_dec(v_a_1282_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1283_, 1);
v___x_1285_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1270_);
v___x_1286_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0(v___x_1285_, v_a_1284_);
lean_dec_ref(v___x_1285_);
return v___x_1286_;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
v_a_1287_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1283_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1283_);
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
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
v_a_1295_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1281_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1281_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 1);
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1318_; 
v_a_1303_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1305_ = v___x_1281_;
v_isShared_1306_ = v_isSharedCheck_1318_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1281_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1318_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1308_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1270_);
v___x_1309_ = lean_string_append(v___x_1307_, v___x_1308_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_1311_ = lean_string_append(v___x_1309_, v___x_1310_);
v___x_1312_ = lean_io_error_to_string(v_a_1303_);
v___x_1313_ = lean_string_append(v___x_1311_, v___x_1312_);
lean_dec_ref(v___x_1312_);
v___x_1314_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1314_);
v___x_1316_ = v___x_1305_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
v___jp_1320_:
{
uint8_t v_construct_1322_; uint64_t v___x_1323_; 
v_construct_1322_ = lean_ctor_get_uint8(v_b_1270_, sizeof(void*)*4);
v___x_1323_ = lean_uint64_lor(v___x_1319_, v___y_1321_);
if (v_construct_1322_ == 0)
{
uint64_t v___x_1324_; 
v___x_1324_ = 0ULL;
v___y_1275_ = v___x_1323_;
v___y_1276_ = v___x_1324_;
goto v___jp_1274_;
}
else
{
uint64_t v___x_1325_; 
v___x_1325_ = 4ULL;
v___y_1275_ = v___x_1323_;
v___y_1276_ = v___x_1325_;
goto v___jp_1274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___boxed(lean_object* v_b_1328_, lean_object* v_args_1329_, lean_object* v_await_1330_, lean_object* v_a_1331_){
_start:
{
uint8_t v_await_boxed_1332_; lean_object* v_res_1333_; 
v_await_boxed_1332_ = lean_unbox(v_await_1330_);
v_res_1333_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(v_b_1328_, v_args_1329_, v_await_boxed_1332_);
lean_dec_ref(v_b_1328_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d(lean_object* v_a_1343_, uint8_t v_a_1344_){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1354_; 
v___x_1346_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__2));
v___x_1347_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_1348_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1349_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1349_, 0, v_a_1343_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_array_push(v___x_1347_, v___x_1349_);
v___x_1351_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1351_, 0, v_a_1344_);
v___x_1352_ = lean_array_push(v___x_1350_, v___x_1351_);
v___x_1353_ = 1;
v___x_1354_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0(v___x_1346_, v___x_1352_, v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_context2d___boxed(lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_){
_start:
{
uint8_t v_a_790__boxed_1358_; lean_object* v_res_1359_; 
v_a_790__boxed_1358_ = lean_unbox(v_a_1356_);
v_res_1359_ = l_Lasm_Web_Raw_context2d(v_a_1355_, v_a_790__boxed_1358_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg(){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_box(0);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg___boxed(lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg();
return v_res_1364_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0(void){
_start:
{
uint8_t v___x_1365_; uint64_t v___x_1366_; 
v___x_1365_ = 0;
v___x_1366_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(lean_object* v_b_1367_, lean_object* v_args_1368_, uint8_t v_await_1369_){
_start:
{
uint64_t v___y_1372_; uint64_t v___y_1373_; uint64_t v___x_1414_; uint64_t v___y_1416_; 
v___x_1414_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_1369_ == 0)
{
uint64_t v___x_1421_; 
v___x_1421_ = 0ULL;
v___y_1416_ = v___x_1421_;
goto v___jp_1415_;
}
else
{
uint64_t v___x_1422_; 
v___x_1422_ = 2ULL;
v___y_1416_ = v___x_1422_;
goto v___jp_1415_;
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
v___x_1380_ = l_Lasm_JS_Wire_decode(v_a_1379_);
lean_dec(v_a_1379_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; 
lean_dec_ref_known(v___x_1380_, 1);
v___x_1381_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg();
return v___x_1381_;
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1380_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1380_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_a_1390_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1378_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1378_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 1);
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1413_; 
v_a_1398_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1400_ = v___x_1378_;
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1378_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
v___x_1402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1403_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1367_);
v___x_1404_ = lean_string_append(v___x_1402_, v___x_1403_);
lean_dec_ref(v___x_1403_);
v___x_1405_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_1406_ = lean_string_append(v___x_1404_, v___x_1405_);
v___x_1407_ = lean_io_error_to_string(v_a_1398_);
v___x_1408_ = lean_string_append(v___x_1406_, v___x_1407_);
lean_dec_ref(v___x_1407_);
v___x_1409_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1409_);
v___x_1411_ = v___x_1400_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
v___jp_1415_:
{
uint8_t v_construct_1417_; uint64_t v___x_1418_; 
v_construct_1417_ = lean_ctor_get_uint8(v_b_1367_, sizeof(void*)*4);
v___x_1418_ = lean_uint64_lor(v___x_1414_, v___y_1416_);
if (v_construct_1417_ == 0)
{
uint64_t v___x_1419_; 
v___x_1419_ = 0ULL;
v___y_1372_ = v___x_1418_;
v___y_1373_ = v___x_1419_;
goto v___jp_1371_;
}
else
{
uint64_t v___x_1420_; 
v___x_1420_ = 4ULL;
v___y_1372_ = v___x_1418_;
v___y_1373_ = v___x_1420_;
goto v___jp_1371_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___boxed(lean_object* v_b_1423_, lean_object* v_args_1424_, lean_object* v_await_1425_, lean_object* v_a_1426_){
_start:
{
uint8_t v_await_boxed_1427_; lean_object* v_res_1428_; 
v_await_boxed_1427_ = lean_unbox(v_await_1425_);
v_res_1428_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v_b_1423_, v_args_1424_, v_await_boxed_1427_);
lean_dec_ref(v_b_1423_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(size_t v_sz_1429_, size_t v_i_1430_, lean_object* v_bs_1431_){
_start:
{
uint8_t v___x_1432_; 
v___x_1432_ = lean_usize_dec_lt(v_i_1430_, v_sz_1429_);
if (v___x_1432_ == 0)
{
return v_bs_1431_;
}
else
{
lean_object* v_v_1433_; lean_object* v___x_1434_; lean_object* v_bs_x27_1435_; lean_object* v___y_1437_; 
v_v_1433_ = lean_array_uget(v_bs_1431_, v_i_1430_);
v___x_1434_ = lean_unsigned_to_nat(0u);
v_bs_x27_1435_ = lean_array_uset(v_bs_1431_, v_i_1430_, v___x_1434_);
switch(lean_obj_tag(v_v_1433_))
{
case 0:
{
lean_object* v_style_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1454_; 
v_style_1442_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1444_ = v_v_1433_;
v_isShared_1445_ = v_isSharedCheck_1454_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_style_1442_);
lean_dec(v_v_1433_);
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
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_style_1442_);
v___x_1447_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1448_ = lean_unsigned_to_nat(2u);
v___x_1449_ = lean_mk_empty_array_with_capacity(v___x_1448_);
lean_dec_ref(v___x_1449_);
v___x_1450_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__2);
v___x_1451_ = lean_array_push(v___x_1450_, v___x_1447_);
v___x_1452_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
v___y_1437_ = v___x_1452_;
goto v___jp_1436_;
}
}
}
case 1:
{
lean_object* v_style_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1467_; 
v_style_1455_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1457_ = v_v_1433_;
v_isShared_1458_ = v_isSharedCheck_1467_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_style_1455_);
lean_dec(v_v_1433_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1467_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 4);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_style_1455_);
v___x_1460_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1461_ = lean_unsigned_to_nat(2u);
v___x_1462_ = lean_mk_empty_array_with_capacity(v___x_1461_);
lean_dec_ref(v___x_1462_);
v___x_1463_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__5);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1460_);
v___x_1465_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
v___y_1437_ = v___x_1465_;
goto v___jp_1436_;
}
}
}
case 2:
{
double v_width_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1480_; 
v_width_1468_ = lean_ctor_get_float(v_v_1433_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1470_ = v_v_1433_;
v_isShared_1471_ = v_isSharedCheck_1480_;
goto v_resetjp_1469_;
}
else
{
lean_dec(v_v_1433_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1480_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 3);
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1479_, 0, v_width_1468_);
v___x_1473_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1474_ = lean_unsigned_to_nat(2u);
v___x_1475_ = lean_mk_empty_array_with_capacity(v___x_1474_);
lean_dec_ref(v___x_1475_);
v___x_1476_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__8);
v___x_1477_ = lean_array_push(v___x_1476_, v___x_1473_);
v___x_1478_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
v___y_1437_ = v___x_1478_;
goto v___jp_1436_;
}
}
}
case 3:
{
lean_object* v_font_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1493_; 
v_font_1481_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1483_ = v_v_1433_;
v_isShared_1484_ = v_isSharedCheck_1493_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_font_1481_);
lean_dec(v_v_1433_);
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
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_font_1481_);
v___x_1486_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1487_ = lean_unsigned_to_nat(2u);
v___x_1488_ = lean_mk_empty_array_with_capacity(v___x_1487_);
lean_dec_ref(v___x_1488_);
v___x_1489_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__11);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1486_);
v___x_1491_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
v___y_1437_ = v___x_1491_;
goto v___jp_1436_;
}
}
}
case 4:
{
lean_object* v_align_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1506_; 
v_align_1494_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1496_ = v_v_1433_;
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_align_1494_);
lean_dec(v_v_1433_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1506_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_align_1494_);
v___x_1499_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1500_ = lean_unsigned_to_nat(2u);
v___x_1501_ = lean_mk_empty_array_with_capacity(v___x_1500_);
lean_dec_ref(v___x_1501_);
v___x_1502_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__14);
v___x_1503_ = lean_array_push(v___x_1502_, v___x_1499_);
v___x_1504_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
v___y_1437_ = v___x_1504_;
goto v___jp_1436_;
}
}
}
case 5:
{
lean_object* v_baseline_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1519_; 
v_baseline_1507_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1509_ = v_v_1433_;
v_isShared_1510_ = v_isSharedCheck_1519_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_baseline_1507_);
lean_dec(v_v_1433_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1519_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 4);
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_baseline_1507_);
v___x_1512_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1513_ = lean_unsigned_to_nat(2u);
v___x_1514_ = lean_mk_empty_array_with_capacity(v___x_1513_);
lean_dec_ref(v___x_1514_);
v___x_1515_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__17);
v___x_1516_ = lean_array_push(v___x_1515_, v___x_1512_);
v___x_1517_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
v___y_1437_ = v___x_1517_;
goto v___jp_1436_;
}
}
}
case 6:
{
double v_alpha_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1532_; 
v_alpha_1520_ = lean_ctor_get_float(v_v_1433_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1522_ = v_v_1433_;
v_isShared_1523_ = v_isSharedCheck_1532_;
goto v_resetjp_1521_;
}
else
{
lean_dec(v_v_1433_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1532_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set_tag(v___x_1522_, 3);
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1531_, 0, v_alpha_1520_);
v___x_1525_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1526_ = lean_unsigned_to_nat(2u);
v___x_1527_ = lean_mk_empty_array_with_capacity(v___x_1526_);
lean_dec_ref(v___x_1527_);
v___x_1528_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__20);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1525_);
v___x_1530_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
v___y_1437_ = v___x_1530_;
goto v___jp_1436_;
}
}
}
case 7:
{
lean_object* v_cap_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1545_; 
v_cap_1533_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1535_ = v_v_1433_;
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_cap_1533_);
lean_dec(v_v_1433_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1545_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set_tag(v___x_1535_, 4);
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_cap_1533_);
v___x_1538_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1539_ = lean_unsigned_to_nat(2u);
v___x_1540_ = lean_mk_empty_array_with_capacity(v___x_1539_);
lean_dec_ref(v___x_1540_);
v___x_1541_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__23);
v___x_1542_ = lean_array_push(v___x_1541_, v___x_1538_);
v___x_1543_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
v___y_1437_ = v___x_1543_;
goto v___jp_1436_;
}
}
}
case 8:
{
lean_object* v_join_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1558_; 
v_join_1546_ = lean_ctor_get(v_v_1433_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1548_ = v_v_1433_;
v_isShared_1549_ = v_isSharedCheck_1558_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_join_1546_);
lean_dec(v_v_1433_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1558_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set_tag(v___x_1548_, 4);
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_join_1546_);
v___x_1551_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1552_ = lean_unsigned_to_nat(2u);
v___x_1553_ = lean_mk_empty_array_with_capacity(v___x_1552_);
lean_dec_ref(v___x_1553_);
v___x_1554_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__26);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1551_);
v___x_1556_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
v___y_1437_ = v___x_1556_;
goto v___jp_1436_;
}
}
}
case 9:
{
double v_x_1559_; double v_y_1560_; double v_width_1561_; double v_height_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v_x_1559_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1560_ = lean_ctor_get_float(v_v_1433_, 8);
v_width_1561_ = lean_ctor_get_float(v_v_1433_, 16);
v_height_1562_ = lean_ctor_get_float(v_v_1433_, 24);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1563_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1563_, 0, v_x_1559_);
v___x_1564_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1564_, 0, v_y_1560_);
v___x_1565_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1565_, 0, v_width_1561_);
v___x_1566_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1566_, 0, v_height_1562_);
v___x_1567_ = lean_unsigned_to_nat(5u);
v___x_1568_ = lean_mk_empty_array_with_capacity(v___x_1567_);
lean_dec_ref(v___x_1568_);
v___x_1569_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__29);
v___x_1570_ = lean_array_push(v___x_1569_, v___x_1563_);
v___x_1571_ = lean_array_push(v___x_1570_, v___x_1564_);
v___x_1572_ = lean_array_push(v___x_1571_, v___x_1565_);
v___x_1573_ = lean_array_push(v___x_1572_, v___x_1566_);
v___x_1574_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
v___y_1437_ = v___x_1574_;
goto v___jp_1436_;
}
case 10:
{
double v_x_1575_; double v_y_1576_; double v_width_1577_; double v_height_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_x_1575_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1576_ = lean_ctor_get_float(v_v_1433_, 8);
v_width_1577_ = lean_ctor_get_float(v_v_1433_, 16);
v_height_1578_ = lean_ctor_get_float(v_v_1433_, 24);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1579_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1579_, 0, v_x_1575_);
v___x_1580_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1580_, 0, v_y_1576_);
v___x_1581_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1581_, 0, v_width_1577_);
v___x_1582_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1582_, 0, v_height_1578_);
v___x_1583_ = lean_unsigned_to_nat(5u);
v___x_1584_ = lean_mk_empty_array_with_capacity(v___x_1583_);
lean_dec_ref(v___x_1584_);
v___x_1585_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__32);
v___x_1586_ = lean_array_push(v___x_1585_, v___x_1579_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1580_);
v___x_1588_ = lean_array_push(v___x_1587_, v___x_1581_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1582_);
v___x_1590_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
v___y_1437_ = v___x_1590_;
goto v___jp_1436_;
}
case 11:
{
double v_x_1591_; double v_y_1592_; double v_width_1593_; double v_height_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_x_1591_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1592_ = lean_ctor_get_float(v_v_1433_, 8);
v_width_1593_ = lean_ctor_get_float(v_v_1433_, 16);
v_height_1594_ = lean_ctor_get_float(v_v_1433_, 24);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1595_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1595_, 0, v_x_1591_);
v___x_1596_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1596_, 0, v_y_1592_);
v___x_1597_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1597_, 0, v_width_1593_);
v___x_1598_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1598_, 0, v_height_1594_);
v___x_1599_ = lean_unsigned_to_nat(5u);
v___x_1600_ = lean_mk_empty_array_with_capacity(v___x_1599_);
lean_dec_ref(v___x_1600_);
v___x_1601_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__35);
v___x_1602_ = lean_array_push(v___x_1601_, v___x_1595_);
v___x_1603_ = lean_array_push(v___x_1602_, v___x_1596_);
v___x_1604_ = lean_array_push(v___x_1603_, v___x_1597_);
v___x_1605_ = lean_array_push(v___x_1604_, v___x_1598_);
v___x_1606_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
v___y_1437_ = v___x_1606_;
goto v___jp_1436_;
}
case 12:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = lean_unsigned_to_nat(1u);
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1607_);
lean_dec_ref(v___x_1608_);
v___x_1609_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__39));
v___y_1437_ = v___x_1609_;
goto v___jp_1436_;
}
case 13:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = lean_unsigned_to_nat(1u);
v___x_1611_ = lean_mk_empty_array_with_capacity(v___x_1610_);
lean_dec_ref(v___x_1611_);
v___x_1612_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__43));
v___y_1437_ = v___x_1612_;
goto v___jp_1436_;
}
case 14:
{
double v_x_1613_; double v_y_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_x_1613_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1614_ = lean_ctor_get_float(v_v_1433_, 8);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1615_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1615_, 0, v_x_1613_);
v___x_1616_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1616_, 0, v_y_1614_);
v___x_1617_ = lean_unsigned_to_nat(3u);
v___x_1618_ = lean_mk_empty_array_with_capacity(v___x_1617_);
lean_dec_ref(v___x_1618_);
v___x_1619_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__46);
v___x_1620_ = lean_array_push(v___x_1619_, v___x_1615_);
v___x_1621_ = lean_array_push(v___x_1620_, v___x_1616_);
v___x_1622_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
v___y_1437_ = v___x_1622_;
goto v___jp_1436_;
}
case 15:
{
double v_x_1623_; double v_y_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v_x_1623_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1624_ = lean_ctor_get_float(v_v_1433_, 8);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1625_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1625_, 0, v_x_1623_);
v___x_1626_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1626_, 0, v_y_1624_);
v___x_1627_ = lean_unsigned_to_nat(3u);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1627_);
lean_dec_ref(v___x_1628_);
v___x_1629_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__49);
v___x_1630_ = lean_array_push(v___x_1629_, v___x_1625_);
v___x_1631_ = lean_array_push(v___x_1630_, v___x_1626_);
v___x_1632_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
v___y_1437_ = v___x_1632_;
goto v___jp_1436_;
}
case 16:
{
double v_x_1633_; double v_y_1634_; double v_width_1635_; double v_height_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v_x_1633_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1634_ = lean_ctor_get_float(v_v_1433_, 8);
v_width_1635_ = lean_ctor_get_float(v_v_1433_, 16);
v_height_1636_ = lean_ctor_get_float(v_v_1433_, 24);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1637_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1637_, 0, v_x_1633_);
v___x_1638_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1638_, 0, v_y_1634_);
v___x_1639_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1639_, 0, v_width_1635_);
v___x_1640_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1640_, 0, v_height_1636_);
v___x_1641_ = lean_unsigned_to_nat(5u);
v___x_1642_ = lean_mk_empty_array_with_capacity(v___x_1641_);
lean_dec_ref(v___x_1642_);
v___x_1643_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__52);
v___x_1644_ = lean_array_push(v___x_1643_, v___x_1637_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1638_);
v___x_1646_ = lean_array_push(v___x_1645_, v___x_1639_);
v___x_1647_ = lean_array_push(v___x_1646_, v___x_1640_);
v___x_1648_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
v___y_1437_ = v___x_1648_;
goto v___jp_1436_;
}
case 17:
{
double v_x_1649_; double v_y_1650_; double v_radius_1651_; double v_startAngle_1652_; double v_endAngle_1653_; uint8_t v_counterclockwise_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v_x_1649_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1650_ = lean_ctor_get_float(v_v_1433_, 8);
v_radius_1651_ = lean_ctor_get_float(v_v_1433_, 16);
v_startAngle_1652_ = lean_ctor_get_float(v_v_1433_, 24);
v_endAngle_1653_ = lean_ctor_get_float(v_v_1433_, 32);
v_counterclockwise_1654_ = lean_ctor_get_uint8(v_v_1433_, 40);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1655_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1655_, 0, v_x_1649_);
v___x_1656_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1656_, 0, v_y_1650_);
v___x_1657_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1657_, 0, v_radius_1651_);
v___x_1658_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1658_, 0, v_startAngle_1652_);
v___x_1659_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1659_, 0, v_endAngle_1653_);
v___x_1660_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1660_, 0, v_counterclockwise_1654_);
v___x_1661_ = lean_unsigned_to_nat(7u);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1661_);
lean_dec_ref(v___x_1662_);
v___x_1663_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__55);
v___x_1664_ = lean_array_push(v___x_1663_, v___x_1655_);
v___x_1665_ = lean_array_push(v___x_1664_, v___x_1656_);
v___x_1666_ = lean_array_push(v___x_1665_, v___x_1657_);
v___x_1667_ = lean_array_push(v___x_1666_, v___x_1658_);
v___x_1668_ = lean_array_push(v___x_1667_, v___x_1659_);
v___x_1669_ = lean_array_push(v___x_1668_, v___x_1660_);
v___x_1670_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
v___y_1437_ = v___x_1670_;
goto v___jp_1436_;
}
case 18:
{
double v_cpx_1671_; double v_cpy_1672_; double v_x_1673_; double v_y_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_cpx_1671_ = lean_ctor_get_float(v_v_1433_, 0);
v_cpy_1672_ = lean_ctor_get_float(v_v_1433_, 8);
v_x_1673_ = lean_ctor_get_float(v_v_1433_, 16);
v_y_1674_ = lean_ctor_get_float(v_v_1433_, 24);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1675_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1675_, 0, v_cpx_1671_);
v___x_1676_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1676_, 0, v_cpy_1672_);
v___x_1677_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1677_, 0, v_x_1673_);
v___x_1678_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1678_, 0, v_y_1674_);
v___x_1679_ = lean_unsigned_to_nat(5u);
v___x_1680_ = lean_mk_empty_array_with_capacity(v___x_1679_);
lean_dec_ref(v___x_1680_);
v___x_1681_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__58);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1675_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1676_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1677_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1678_);
v___x_1686_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___y_1437_ = v___x_1686_;
goto v___jp_1436_;
}
case 19:
{
double v_cp1x_1687_; double v_cp1y_1688_; double v_cp2x_1689_; double v_cp2y_1690_; double v_x_1691_; double v_y_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_cp1x_1687_ = lean_ctor_get_float(v_v_1433_, 0);
v_cp1y_1688_ = lean_ctor_get_float(v_v_1433_, 8);
v_cp2x_1689_ = lean_ctor_get_float(v_v_1433_, 16);
v_cp2y_1690_ = lean_ctor_get_float(v_v_1433_, 24);
v_x_1691_ = lean_ctor_get_float(v_v_1433_, 32);
v_y_1692_ = lean_ctor_get_float(v_v_1433_, 40);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1693_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1693_, 0, v_cp1x_1687_);
v___x_1694_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1694_, 0, v_cp1y_1688_);
v___x_1695_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1695_, 0, v_cp2x_1689_);
v___x_1696_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1696_, 0, v_cp2y_1690_);
v___x_1697_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1697_, 0, v_x_1691_);
v___x_1698_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1698_, 0, v_y_1692_);
v___x_1699_ = lean_unsigned_to_nat(7u);
v___x_1700_ = lean_mk_empty_array_with_capacity(v___x_1699_);
lean_dec_ref(v___x_1700_);
v___x_1701_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__61);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1693_);
v___x_1703_ = lean_array_push(v___x_1702_, v___x_1694_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1695_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1696_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1697_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1698_);
v___x_1708_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1707_);
v___y_1437_ = v___x_1708_;
goto v___jp_1436_;
}
case 20:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1709_ = lean_unsigned_to_nat(1u);
v___x_1710_ = lean_mk_empty_array_with_capacity(v___x_1709_);
lean_dec_ref(v___x_1710_);
v___x_1711_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__65));
v___y_1437_ = v___x_1711_;
goto v___jp_1436_;
}
case 21:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_unsigned_to_nat(1u);
v___x_1713_ = lean_mk_empty_array_with_capacity(v___x_1712_);
lean_dec_ref(v___x_1713_);
v___x_1714_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__69));
v___y_1437_ = v___x_1714_;
goto v___jp_1436_;
}
case 22:
{
lean_object* v_text_1715_; double v_x_1716_; double v_y_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_text_1715_ = lean_ctor_get(v_v_1433_, 0);
lean_inc_ref(v_text_1715_);
v_x_1716_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1);
v_y_1717_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1433_, 1);
v___x_1718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_text_1715_);
v___x_1719_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1719_, 0, v_x_1716_);
v___x_1720_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1720_, 0, v_y_1717_);
v___x_1721_ = lean_unsigned_to_nat(4u);
v___x_1722_ = lean_mk_empty_array_with_capacity(v___x_1721_);
lean_dec_ref(v___x_1722_);
v___x_1723_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__72);
v___x_1724_ = lean_array_push(v___x_1723_, v___x_1718_);
v___x_1725_ = lean_array_push(v___x_1724_, v___x_1719_);
v___x_1726_ = lean_array_push(v___x_1725_, v___x_1720_);
v___x_1727_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
v___y_1437_ = v___x_1727_;
goto v___jp_1436_;
}
case 23:
{
lean_object* v_text_1728_; double v_x_1729_; double v_y_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_text_1728_ = lean_ctor_get(v_v_1433_, 0);
lean_inc_ref(v_text_1728_);
v_x_1729_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1);
v_y_1730_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1433_, 1);
v___x_1731_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_text_1728_);
v___x_1732_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1732_, 0, v_x_1729_);
v___x_1733_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1733_, 0, v_y_1730_);
v___x_1734_ = lean_unsigned_to_nat(4u);
v___x_1735_ = lean_mk_empty_array_with_capacity(v___x_1734_);
lean_dec_ref(v___x_1735_);
v___x_1736_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__75);
v___x_1737_ = lean_array_push(v___x_1736_, v___x_1731_);
v___x_1738_ = lean_array_push(v___x_1737_, v___x_1732_);
v___x_1739_ = lean_array_push(v___x_1738_, v___x_1733_);
v___x_1740_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1739_);
v___y_1437_ = v___x_1740_;
goto v___jp_1436_;
}
case 24:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1741_ = lean_unsigned_to_nat(1u);
v___x_1742_ = lean_mk_empty_array_with_capacity(v___x_1741_);
lean_dec_ref(v___x_1742_);
v___x_1743_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__79));
v___y_1437_ = v___x_1743_;
goto v___jp_1436_;
}
case 25:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = lean_mk_empty_array_with_capacity(v___x_1744_);
lean_dec_ref(v___x_1745_);
v___x_1746_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__83));
v___y_1437_ = v___x_1746_;
goto v___jp_1436_;
}
case 26:
{
double v_x_1747_; double v_y_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v_x_1747_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1748_ = lean_ctor_get_float(v_v_1433_, 8);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1749_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1749_, 0, v_x_1747_);
v___x_1750_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1750_, 0, v_y_1748_);
v___x_1751_ = lean_unsigned_to_nat(3u);
v___x_1752_ = lean_mk_empty_array_with_capacity(v___x_1751_);
lean_dec_ref(v___x_1752_);
v___x_1753_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__86);
v___x_1754_ = lean_array_push(v___x_1753_, v___x_1749_);
v___x_1755_ = lean_array_push(v___x_1754_, v___x_1750_);
v___x_1756_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
v___y_1437_ = v___x_1756_;
goto v___jp_1436_;
}
case 27:
{
double v_angle_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1769_; 
v_angle_1757_ = lean_ctor_get_float(v_v_1433_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_v_1433_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1759_ = v_v_1433_;
v_isShared_1760_ = v_isSharedCheck_1769_;
goto v_resetjp_1758_;
}
else
{
lean_dec(v_v_1433_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1769_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
lean_ctor_set_tag(v___x_1759_, 3);
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1768_, 0, v_angle_1757_);
v___x_1762_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1763_ = lean_unsigned_to_nat(2u);
v___x_1764_ = lean_mk_empty_array_with_capacity(v___x_1763_);
lean_dec_ref(v___x_1764_);
v___x_1765_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__89);
v___x_1766_ = lean_array_push(v___x_1765_, v___x_1762_);
v___x_1767_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
v___y_1437_ = v___x_1767_;
goto v___jp_1436_;
}
}
}
case 28:
{
double v_x_1770_; double v_y_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_x_1770_ = lean_ctor_get_float(v_v_1433_, 0);
v_y_1771_ = lean_ctor_get_float(v_v_1433_, 8);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1772_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1772_, 0, v_x_1770_);
v___x_1773_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1773_, 0, v_y_1771_);
v___x_1774_ = lean_unsigned_to_nat(3u);
v___x_1775_ = lean_mk_empty_array_with_capacity(v___x_1774_);
lean_dec_ref(v___x_1775_);
v___x_1776_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__92);
v___x_1777_ = lean_array_push(v___x_1776_, v___x_1772_);
v___x_1778_ = lean_array_push(v___x_1777_, v___x_1773_);
v___x_1779_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1778_);
v___y_1437_ = v___x_1779_;
goto v___jp_1436_;
}
case 29:
{
double v_a_1780_; double v_b_1781_; double v_c_1782_; double v_d_1783_; double v_e_1784_; double v_f_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_a_1780_ = lean_ctor_get_float(v_v_1433_, 0);
v_b_1781_ = lean_ctor_get_float(v_v_1433_, 8);
v_c_1782_ = lean_ctor_get_float(v_v_1433_, 16);
v_d_1783_ = lean_ctor_get_float(v_v_1433_, 24);
v_e_1784_ = lean_ctor_get_float(v_v_1433_, 32);
v_f_1785_ = lean_ctor_get_float(v_v_1433_, 40);
lean_dec_ref_known(v_v_1433_, 0);
v___x_1786_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1786_, 0, v_a_1780_);
v___x_1787_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1787_, 0, v_b_1781_);
v___x_1788_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1788_, 0, v_c_1782_);
v___x_1789_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1789_, 0, v_d_1783_);
v___x_1790_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1790_, 0, v_e_1784_);
v___x_1791_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1791_, 0, v_f_1785_);
v___x_1792_ = lean_unsigned_to_nat(7u);
v___x_1793_ = lean_mk_empty_array_with_capacity(v___x_1792_);
lean_dec_ref(v___x_1793_);
v___x_1794_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__95);
v___x_1795_ = lean_array_push(v___x_1794_, v___x_1786_);
v___x_1796_ = lean_array_push(v___x_1795_, v___x_1787_);
v___x_1797_ = lean_array_push(v___x_1796_, v___x_1788_);
v___x_1798_ = lean_array_push(v___x_1797_, v___x_1789_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1790_);
v___x_1800_ = lean_array_push(v___x_1799_, v___x_1791_);
v___x_1801_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
v___y_1437_ = v___x_1801_;
goto v___jp_1436_;
}
case 30:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = lean_unsigned_to_nat(1u);
v___x_1803_ = lean_mk_empty_array_with_capacity(v___x_1802_);
lean_dec_ref(v___x_1803_);
v___x_1804_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__99));
v___y_1437_ = v___x_1804_;
goto v___jp_1436_;
}
case 31:
{
lean_object* v_image_1805_; double v_x_1806_; double v_y_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v_image_1805_ = lean_ctor_get(v_v_1433_, 0);
lean_inc(v_image_1805_);
v_x_1806_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1);
v_y_1807_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 8);
lean_dec_ref_known(v_v_1433_, 1);
v___x_1808_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1809_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1809_, 0, v_image_1805_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1810_, 0, v_x_1806_);
v___x_1811_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1811_, 0, v_y_1807_);
v___x_1812_ = lean_unsigned_to_nat(4u);
v___x_1813_ = lean_mk_empty_array_with_capacity(v___x_1812_);
lean_dec_ref(v___x_1813_);
v___x_1814_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__103);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1809_);
v___x_1816_ = lean_array_push(v___x_1815_, v___x_1810_);
v___x_1817_ = lean_array_push(v___x_1816_, v___x_1811_);
v___x_1818_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
v___y_1437_ = v___x_1818_;
goto v___jp_1436_;
}
default: 
{
lean_object* v_image_1819_; double v_x_1820_; double v_y_1821_; double v_width_1822_; double v_height_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v_image_1819_ = lean_ctor_get(v_v_1433_, 0);
lean_inc(v_image_1819_);
v_x_1820_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1);
v_y_1821_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 8);
v_width_1822_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 16);
v_height_1823_ = lean_ctor_get_float(v_v_1433_, sizeof(void*)*1 + 24);
lean_dec_ref_known(v_v_1433_, 1);
v___x_1824_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1825_, 0, v_image_1819_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1826_, 0, v_x_1820_);
v___x_1827_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1827_, 0, v_y_1821_);
v___x_1828_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1828_, 0, v_width_1822_);
v___x_1829_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1829_, 0, v_height_1823_);
v___x_1830_ = lean_unsigned_to_nat(6u);
v___x_1831_ = lean_mk_empty_array_with_capacity(v___x_1830_);
lean_dec_ref(v___x_1831_);
v___x_1832_ = lean_obj_once(&l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106, &l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106_once, _init_l_Lasm_Web_instToJSDrawCommand___lam__0___closed__106);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1825_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1826_);
v___x_1835_ = lean_array_push(v___x_1834_, v___x_1827_);
v___x_1836_ = lean_array_push(v___x_1835_, v___x_1828_);
v___x_1837_ = lean_array_push(v___x_1836_, v___x_1829_);
v___x_1838_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
v___y_1437_ = v___x_1838_;
goto v___jp_1436_;
}
}
v___jp_1436_:
{
size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = ((size_t)1ULL);
v___x_1439_ = lean_usize_add(v_i_1430_, v___x_1438_);
v___x_1440_ = lean_array_uset(v_bs_x27_1435_, v_i_1430_, v___y_1437_);
v_i_1430_ = v___x_1439_;
v_bs_1431_ = v___x_1440_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0___boxed(lean_object* v_sz_1839_, lean_object* v_i_1840_, lean_object* v_bs_1841_){
_start:
{
size_t v_sz_boxed_1842_; size_t v_i_boxed_1843_; lean_object* v_res_1844_; 
v_sz_boxed_1842_ = lean_unbox_usize(v_sz_1839_);
lean_dec(v_sz_1839_);
v_i_boxed_1843_ = lean_unbox_usize(v_i_1840_);
lean_dec(v_i_1840_);
v_res_1844_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(v_sz_boxed_1842_, v_i_boxed_1843_, v_bs_1841_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw(lean_object* v_a_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; size_t v_sz_1859_; size_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; lean_object* v___x_1865_; 
v___x_1854_ = ((lean_object*)(l_Lasm_Web_Raw_draw___closed__1));
v___x_1855_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_1856_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1857_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1857_, 0, v_a_1851_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = lean_array_push(v___x_1855_, v___x_1857_);
v_sz_1859_ = lean_array_size(v_a_1852_);
v___x_1860_ = ((size_t)0ULL);
v___x_1861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_draw_spec__0(v_sz_1859_, v___x_1860_, v_a_1852_);
v___x_1862_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
v___x_1863_ = lean_array_push(v___x_1858_, v___x_1862_);
v___x_1864_ = 1;
v___x_1865_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v___x_1854_, v___x_1863_, v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_draw___boxed(lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lasm_Web_Raw_draw(v_a_1866_, v_a_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1(lean_object* v_context_1870_, lean_object* v_d_1871_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___redArg();
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1___boxed(lean_object* v_context_1874_, lean_object* v_d_1875_, lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1_spec__1(v_context_1874_, v_d_1875_);
lean_dec(v_d_1875_);
lean_dec_ref(v_context_1874_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(lean_object* v_d_1885_, lean_object* v_key_1886_){
_start:
{
if (lean_obj_tag(v_d_1885_) == 8)
{
lean_object* v___x_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1915_; 
v___x_1887_ = l_Lasm_JS_Data_field(v_d_1885_, v_key_1886_);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_d_1885_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_d_1885_, 0);
lean_dec(v_unused_1916_);
v___x_1889_ = v_d_1885_;
v_isShared_1890_ = v_isSharedCheck_1915_;
goto v_resetjp_1888_;
}
else
{
lean_dec(v_d_1885_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1915_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
if (lean_obj_tag(v___x_1887_) == 3)
{
double v_n_1891_; lean_object* v___x_1892_; lean_object* v___x_1894_; 
v_n_1891_ = lean_ctor_get_float(v___x_1887_, 0);
lean_dec_ref_known(v___x_1887_, 0);
v___x_1892_ = lean_box_float(v_n_1891_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 1);
lean_ctor_set(v___x_1889_, 0, v___x_1892_);
v___x_1894_ = v___x_1889_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1896_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__0));
v___x_1897_ = lean_string_append(v___x_1896_, v_key_1886_);
v___x_1898_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__1));
v___x_1899_ = lean_string_append(v___x_1897_, v___x_1898_);
v___x_1900_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__2));
v___x_1901_ = lean_string_append(v___x_1899_, v___x_1900_);
v___x_1902_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__3));
v___x_1903_ = lean_string_append(v___x_1901_, v___x_1902_);
v___x_1904_ = l_Lasm_JS_Data_describe(v___x_1887_);
v___x_1905_ = lean_string_append(v___x_1903_, v___x_1904_);
lean_dec_ref(v___x_1904_);
v___x_1906_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1907_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6));
v___x_1908_ = lean_string_append(v___x_1905_, v___x_1907_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1908_);
v___x_1910_ = v___x_1889_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
else
{
lean_object* v___x_1913_; 
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1905_);
v___x_1913_ = v___x_1889_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1905_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
else
{
lean_object* v___x_1917_; 
lean_dec(v_d_1885_);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___closed__5));
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1918_, lean_object* v_key_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1918_, v_key_1919_);
lean_dec_ref(v_key_1919_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(lean_object* v_context_1923_, lean_object* v_d_1924_){
_start:
{
lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1933_; lean_object* v_received_1934_; lean_object* v___y_1953_; lean_object* v_a_1956_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__0));
lean_inc(v_d_1924_);
v___x_1981_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1924_, v___x_1980_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v_a_1982_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
lean_inc(v_a_1982_);
lean_dec_ref_known(v___x_1981_, 1);
v_a_1956_ = v_a_1982_;
goto v___jp_1955_;
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_a_1983_ = lean_ctor_get(v___x_1981_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1981_, 1);
v___x_1984_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__1));
lean_inc(v_d_1924_);
v___x_1985_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1924_, v___x_1984_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; 
lean_dec(v_a_1983_);
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v_a_1956_ = v_a_1986_;
goto v___jp_1955_;
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_a_1987_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_1988_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___lam__0___closed__2));
lean_inc(v_d_1924_);
v___x_1989_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0_spec__1(v_d_1924_, v___x_1988_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; 
lean_dec(v_a_1987_);
lean_dec(v_a_1983_);
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v_a_1956_ = v_a_1990_;
goto v___jp_1955_;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2002_; 
lean_dec(v_d_1924_);
v_a_1991_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1993_ = v___x_1989_;
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1989_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1995_; double v___x_1996_; double v___x_1997_; double v___x_1998_; lean_object* v___x_2000_; 
v___x_1995_ = lean_alloc_ctor(0, 0, 24);
v___x_1996_ = lean_unbox_float(v_a_1983_);
lean_dec(v_a_1983_);
lean_ctor_set_float(v___x_1995_, 0, v___x_1996_);
v___x_1997_ = lean_unbox_float(v_a_1987_);
lean_dec(v_a_1987_);
lean_ctor_set_float(v___x_1995_, 8, v___x_1997_);
v___x_1998_ = lean_unbox_float(v_a_1991_);
lean_dec(v_a_1991_);
lean_ctor_set_float(v___x_1995_, 16, v___x_1998_);
if (v_isShared_1994_ == 0)
{
lean_ctor_set_tag(v___x_1993_, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1995_);
v___x_2000_ = v___x_1993_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
v___jp_1926_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_string_append(v___y_1927_, v___y_1928_);
lean_dec_ref(v___y_1928_);
v___x_1930_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
v___x_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
v___jp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1935_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_1936_ = lean_string_append(v___x_1935_, v_context_1923_);
v___x_1937_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_1938_ = lean_string_append(v___x_1936_, v___x_1937_);
v___x_1939_ = ((lean_object*)(l_Lasm_Web_instFromJSTextMetrics___closed__1));
v___x_1940_ = lean_string_append(v___x_1938_, v___x_1939_);
v___x_1941_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_1942_ = lean_string_append(v___x_1940_, v___x_1941_);
v___x_1943_ = lean_string_append(v___x_1942_, v_received_1934_);
lean_dec_ref(v_received_1934_);
v___x_1944_ = lean_string_utf8_byte_size(v___y_1933_);
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = lean_nat_dec_eq(v___x_1944_, v___x_1945_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1947_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__0));
v___x_1948_ = lean_string_append(v___x_1947_, v___y_1933_);
lean_dec_ref(v___y_1933_);
v___x_1949_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___closed__1));
v___x_1950_ = lean_string_append(v___x_1948_, v___x_1949_);
v___y_1927_ = v___x_1943_;
v___y_1928_ = v___x_1950_;
goto v___jp_1926_;
}
else
{
lean_object* v___x_1951_; 
lean_dec_ref(v___y_1933_);
v___x_1951_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___y_1927_ = v___x_1943_;
v___y_1928_ = v___x_1951_;
goto v___jp_1926_;
}
}
v___jp_1952_:
{
lean_object* v___x_1954_; 
v___x_1954_ = l_Lasm_JS_Data_describe(v_d_1924_);
v___y_1933_ = v___y_1953_;
v_received_1934_ = v___x_1954_;
goto v___jp_1932_;
}
v___jp_1955_:
{
if (lean_obj_tag(v_d_1924_) == 9)
{
lean_object* v_value_1957_; lean_object* v_description_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v_value_1957_ = lean_ctor_get(v_d_1924_, 0);
v_description_1958_ = lean_ctor_get(v_d_1924_, 1);
v___x_1959_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_1960_ = lean_string_dec_eq(v_description_1958_, v___x_1959_);
if (v___x_1960_ == 0)
{
v___y_1953_ = v_a_1956_;
goto v___jp_1952_;
}
else
{
lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1977_; 
lean_inc(v_value_1957_);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_d_1924_);
if (v_isSharedCheck_1977_ == 0)
{
lean_object* v_unused_1978_; lean_object* v_unused_1979_; 
v_unused_1978_ = lean_ctor_get(v_d_1924_, 1);
lean_dec(v_unused_1978_);
v_unused_1979_ = lean_ctor_get(v_d_1924_, 0);
lean_dec(v_unused_1979_);
v___x_1962_ = v_d_1924_;
v_isShared_1963_ = v_isSharedCheck_1977_;
goto v_resetjp_1961_;
}
else
{
lean_dec(v_d_1924_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1977_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
uint32_t v___x_1964_; uint64_t v___x_1965_; lean_object* v___x_1967_; 
v___x_1964_ = 206;
v___x_1965_ = 0ULL;
lean_inc(v_value_1957_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v___x_1959_);
v___x_1967_ = v___x_1962_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_value_1957_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v___x_1959_);
v___x_1967_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
uint32_t v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = lasm_js_value_handle(v_value_1957_);
lean_dec(v_value_1957_);
v___x_1969_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1964_, v___x_1965_, v___x_1967_, v___x_1968_);
lean_dec_ref(v___x_1967_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v_a_1970_; uint8_t v___x_1971_; 
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1970_);
lean_dec_ref_known(v___x_1969_, 1);
v___x_1971_ = lean_string_validate_utf8(v_a_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
lean_dec(v_a_1970_);
v___x_1972_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10);
v___x_1973_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1972_);
v___y_1933_ = v_a_1956_;
v_received_1934_ = v___x_1973_;
goto v___jp_1932_;
}
else
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_string_from_utf8_unchecked(v_a_1970_);
v___y_1933_ = v_a_1956_;
v_received_1934_ = v___x_1974_;
goto v___jp_1932_;
}
}
else
{
lean_object* v___x_1975_; 
lean_dec_ref_known(v___x_1969_, 1);
v___x_1975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11));
v___y_1933_ = v_a_1956_;
v_received_1934_ = v___x_1975_;
goto v___jp_1932_;
}
}
}
}
}
else
{
v___y_1953_ = v_a_1956_;
goto v___jp_1952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0___boxed(lean_object* v_context_2003_, lean_object* v_d_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(v_context_2003_, v_d_2004_);
lean_dec_ref(v_context_2003_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(lean_object* v_b_2007_, lean_object* v_args_2008_, uint8_t v_await_2009_){
_start:
{
uint64_t v___y_2012_; uint64_t v___y_2013_; uint64_t v___x_2056_; uint64_t v___y_2058_; 
v___x_2056_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_2009_ == 0)
{
uint64_t v___x_2063_; 
v___x_2063_ = 0ULL;
v___y_2058_ = v___x_2063_;
goto v___jp_2057_;
}
else
{
uint64_t v___x_2064_; 
v___x_2064_ = 2ULL;
v___y_2058_ = v___x_2064_;
goto v___jp_2057_;
}
v___jp_2011_:
{
uint64_t v_flags_2014_; uint32_t v___x_2015_; lean_object* v___x_2016_; uint32_t v___x_2017_; lean_object* v___x_2018_; 
v_flags_2014_ = lean_uint64_lor(v___y_2012_, v___y_2013_);
v___x_2015_ = 214;
v___x_2016_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2007_, v_args_2008_);
v___x_2017_ = 0;
v___x_2018_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2015_, v_flags_2014_, v___x_2016_, v___x_2017_);
lean_dec(v___x_2016_);
if (lean_obj_tag(v___x_2018_) == 0)
{
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2020_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v___x_2020_ = l_Lasm_JS_Wire_decode(v_a_2019_);
lean_dec(v_a_2019_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2021_);
lean_dec_ref_known(v___x_2020_, 1);
v___x_2022_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2007_);
v___x_2023_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0_spec__0(v___x_2022_, v_a_2021_);
lean_dec_ref(v___x_2022_);
return v___x_2023_;
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
v_a_2024_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2020_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2020_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
v_a_2032_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2018_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2018_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
lean_ctor_set_tag(v___x_2034_, 1);
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2055_; 
v_a_2040_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2042_ = v___x_2018_;
v_isShared_2043_ = v_isSharedCheck_2055_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2018_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2055_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2053_; 
v___x_2044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_2045_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2007_);
v___x_2046_ = lean_string_append(v___x_2044_, v___x_2045_);
lean_dec_ref(v___x_2045_);
v___x_2047_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_2048_ = lean_string_append(v___x_2046_, v___x_2047_);
v___x_2049_ = lean_io_error_to_string(v_a_2040_);
v___x_2050_ = lean_string_append(v___x_2048_, v___x_2049_);
lean_dec_ref(v___x_2049_);
v___x_2051_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2051_);
v___x_2053_ = v___x_2042_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
v___jp_2057_:
{
uint8_t v_construct_2059_; uint64_t v___x_2060_; 
v_construct_2059_ = lean_ctor_get_uint8(v_b_2007_, sizeof(void*)*4);
v___x_2060_ = lean_uint64_lor(v___x_2056_, v___y_2058_);
if (v_construct_2059_ == 0)
{
uint64_t v___x_2061_; 
v___x_2061_ = 0ULL;
v___y_2012_ = v___x_2060_;
v___y_2013_ = v___x_2061_;
goto v___jp_2011_;
}
else
{
uint64_t v___x_2062_; 
v___x_2062_ = 4ULL;
v___y_2012_ = v___x_2060_;
v___y_2013_ = v___x_2062_;
goto v___jp_2011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0___boxed(lean_object* v_b_2065_, lean_object* v_args_2066_, lean_object* v_await_2067_, lean_object* v_a_2068_){
_start:
{
uint8_t v_await_boxed_2069_; lean_object* v_res_2070_; 
v_await_boxed_2069_ = lean_unbox(v_await_2067_);
v_res_2070_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(v_b_2065_, v_args_2066_, v_await_boxed_2069_);
lean_dec_ref(v_b_2065_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText(lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; lean_object* v___x_2088_; 
v___x_2080_ = ((lean_object*)(l_Lasm_Web_Raw_measureText___closed__1));
v___x_2081_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_2082_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2083_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2083_, 0, v_a_2077_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = lean_array_push(v___x_2081_, v___x_2083_);
v___x_2085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2085_, 0, v_a_2078_);
v___x_2086_ = lean_array_push(v___x_2084_, v___x_2085_);
v___x_2087_ = 1;
v___x_2088_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_measureText_spec__0(v___x_2080_, v___x_2086_, v___x_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_measureText___boxed(lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lasm_Web_Raw_measureText(v_a_2089_, v_a_2090_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(lean_object* v_context_2094_, lean_object* v_d_2095_){
_start:
{
lean_object* v___y_2098_; lean_object* v___y_2099_; 
if (lean_obj_tag(v_d_2095_) == 6)
{
lean_object* v_b_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
v_b_2103_ = lean_ctor_get(v_d_2095_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v_d_2095_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v_d_2095_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_b_2103_);
lean_dec(v_d_2095_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 0);
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_b_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
else
{
lean_object* v___x_2111_; lean_object* v_received_2113_; 
v___x_2111_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
if (lean_obj_tag(v_d_2095_) == 9)
{
lean_object* v_value_2127_; lean_object* v_description_2128_; uint8_t v___x_2129_; 
v_value_2127_ = lean_ctor_get(v_d_2095_, 0);
v_description_2128_ = lean_ctor_get(v_d_2095_, 1);
v___x_2129_ = lean_string_dec_eq(v_description_2128_, v___x_2111_);
if (v___x_2129_ == 0)
{
goto v___jp_2125_;
}
else
{
uint32_t v___x_2130_; uint64_t v___x_2131_; lean_object* v___x_2132_; uint32_t v___x_2133_; lean_object* v___x_2134_; 
lean_inc_n(v_value_2127_, 2);
lean_dec_ref_known(v_d_2095_, 2);
v___x_2130_ = 206;
v___x_2131_ = 0ULL;
v___x_2132_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2132_, 0, v_value_2127_);
lean_ctor_set(v___x_2132_, 1, v___x_2111_);
v___x_2133_ = lasm_js_value_handle(v_value_2127_);
lean_dec(v_value_2127_);
v___x_2134_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2130_, v___x_2131_, v___x_2132_, v___x_2133_);
lean_dec_ref_known(v___x_2132_, 2);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; uint8_t v___x_2136_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = lean_string_validate_utf8(v_a_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v_a_2135_);
v___x_2137_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__10);
v___x_2138_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2137_);
v_received_2113_ = v___x_2138_;
goto v___jp_2112_;
}
else
{
lean_object* v___x_2139_; 
v___x_2139_ = lean_string_from_utf8_unchecked(v_a_2135_);
v_received_2113_ = v___x_2139_;
goto v___jp_2112_;
}
}
else
{
lean_object* v___x_2140_; 
lean_dec_ref_known(v___x_2134_, 1);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__11));
v_received_2113_ = v___x_2140_;
goto v___jp_2112_;
}
}
}
else
{
goto v___jp_2125_;
}
v___jp_2112_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; uint8_t v___x_2123_; 
v___x_2114_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_2115_ = lean_string_append(v___x_2114_, v_context_2094_);
v___x_2116_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__1));
v___x_2117_ = lean_string_append(v___x_2115_, v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___closed__0));
v___x_2119_ = lean_string_append(v___x_2117_, v___x_2118_);
v___x_2120_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__3));
v___x_2121_ = lean_string_append(v___x_2119_, v___x_2120_);
v___x_2122_ = lean_string_append(v___x_2121_, v_received_2113_);
lean_dec_ref(v_received_2113_);
v___x_2123_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__5);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; 
v___x_2124_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__6));
v___y_2098_ = v___x_2122_;
v___y_2099_ = v___x_2124_;
goto v___jp_2097_;
}
else
{
v___y_2098_ = v___x_2122_;
v___y_2099_ = v___x_2111_;
goto v___jp_2097_;
}
}
v___jp_2125_:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lasm_JS_Data_describe(v_d_2095_);
v_received_2113_ = v___x_2126_;
goto v___jp_2112_;
}
}
v___jp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2100_ = lean_string_append(v___y_2098_, v___y_2099_);
v___x_2101_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
v___x_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
return v___x_2102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0___boxed(lean_object* v_context_2141_, lean_object* v_d_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(v_context_2141_, v_d_2142_);
lean_dec_ref(v_context_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(lean_object* v_b_2145_, lean_object* v_args_2146_, uint8_t v_await_2147_){
_start:
{
uint64_t v___y_2150_; uint64_t v___y_2151_; uint64_t v___x_2186_; uint64_t v___y_2188_; 
v___x_2186_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1___closed__0);
if (v_await_2147_ == 0)
{
uint64_t v___x_2193_; 
v___x_2193_ = 0ULL;
v___y_2188_ = v___x_2193_;
goto v___jp_2187_;
}
else
{
uint64_t v___x_2194_; 
v___x_2194_ = 2ULL;
v___y_2188_ = v___x_2194_;
goto v___jp_2187_;
}
v___jp_2149_:
{
uint64_t v_flags_2152_; uint32_t v___x_2153_; lean_object* v___x_2154_; uint32_t v___x_2155_; lean_object* v___x_2156_; 
v_flags_2152_ = lean_uint64_lor(v___y_2150_, v___y_2151_);
v___x_2153_ = 214;
v___x_2154_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2145_, v_args_2146_);
v___x_2155_ = 0;
v___x_2156_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2153_, v_flags_2152_, v___x_2154_, v___x_2155_);
lean_dec(v___x_2154_);
if (lean_obj_tag(v___x_2156_) == 0)
{
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2158_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
v___x_2158_ = l_Lasm_JS_Wire_decode(v_a_2157_);
lean_dec(v_a_2157_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2145_);
v___x_2161_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0_spec__0(v___x_2160_, v_a_2159_);
lean_dec_ref(v___x_2160_);
return v___x_2161_;
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2158_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2158_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
return v___x_2156_;
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2185_; 
v_a_2170_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2172_ = v___x_2156_;
v_isShared_2173_ = v_isSharedCheck_2185_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2156_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2185_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
v___x_2174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0_spec__0___closed__0));
v___x_2175_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2145_);
v___x_2176_ = lean_string_append(v___x_2174_, v___x_2175_);
lean_dec_ref(v___x_2175_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_context2d_spec__0___closed__0));
v___x_2178_ = lean_string_append(v___x_2176_, v___x_2177_);
v___x_2179_ = lean_io_error_to_string(v_a_2170_);
v___x_2180_ = lean_string_append(v___x_2178_, v___x_2179_);
lean_dec_ref(v___x_2179_);
v___x_2181_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v___x_2181_);
v___x_2183_ = v___x_2172_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
v___jp_2187_:
{
uint8_t v_construct_2189_; uint64_t v___x_2190_; 
v_construct_2189_ = lean_ctor_get_uint8(v_b_2145_, sizeof(void*)*4);
v___x_2190_ = lean_uint64_lor(v___x_2186_, v___y_2188_);
if (v_construct_2189_ == 0)
{
uint64_t v___x_2191_; 
v___x_2191_ = 0ULL;
v___y_2150_ = v___x_2190_;
v___y_2151_ = v___x_2191_;
goto v___jp_2149_;
}
else
{
uint64_t v___x_2192_; 
v___x_2192_ = 4ULL;
v___y_2150_ = v___x_2190_;
v___y_2151_ = v___x_2192_;
goto v___jp_2149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0___boxed(lean_object* v_b_2195_, lean_object* v_args_2196_, lean_object* v_await_2197_, lean_object* v_a_2198_){
_start:
{
uint8_t v_await_boxed_2199_; lean_object* v_res_2200_; 
v_await_boxed_2199_ = lean_unbox(v_await_2197_);
v_res_2200_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(v_b_2195_, v_args_2196_, v_await_boxed_2199_);
lean_dec_ref(v_b_2195_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData(lean_object* v_a_2207_, double v_a_2208_, double v_a_2209_, double v_a_2210_, double v_a_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; uint8_t v___x_2226_; lean_object* v___x_2227_; 
v___x_2213_ = ((lean_object*)(l_Lasm_Web_Raw_imageData___closed__1));
v___x_2214_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_2215_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2216_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2216_, 0, v_a_2207_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = lean_array_push(v___x_2214_, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2218_, 0, v_a_2208_);
v___x_2219_ = lean_array_push(v___x_2217_, v___x_2218_);
v___x_2220_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2220_, 0, v_a_2209_);
v___x_2221_ = lean_array_push(v___x_2219_, v___x_2220_);
v___x_2222_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2222_, 0, v_a_2210_);
v___x_2223_ = lean_array_push(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2224_, 0, v_a_2211_);
v___x_2225_ = lean_array_push(v___x_2223_, v___x_2224_);
v___x_2226_ = 1;
v___x_2227_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_imageData_spec__0(v___x_2213_, v___x_2225_, v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_imageData___boxed(lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
double v_a_890__boxed_2234_; double v_a_891__boxed_2235_; double v_a_892__boxed_2236_; double v_a_893__boxed_2237_; lean_object* v_res_2238_; 
v_a_890__boxed_2234_ = lean_unbox_float(v_a_2229_);
lean_dec_ref(v_a_2229_);
v_a_891__boxed_2235_ = lean_unbox_float(v_a_2230_);
lean_dec_ref(v_a_2230_);
v_a_892__boxed_2236_ = lean_unbox_float(v_a_2231_);
lean_dec_ref(v_a_2231_);
v_a_893__boxed_2237_ = lean_unbox_float(v_a_2232_);
lean_dec_ref(v_a_2232_);
v_res_2238_ = l_Lasm_Web_Raw_imageData(v_a_2228_, v_a_890__boxed_2234_, v_a_891__boxed_2235_, v_a_892__boxed_2236_, v_a_893__boxed_2237_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData(lean_object* v_a_2245_, lean_object* v_a_2246_, double v_a_2247_, double v_a_2248_, double v_a_2249_, double v_a_2250_){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; uint8_t v___x_2267_; lean_object* v___x_2268_; 
v___x_2252_ = ((lean_object*)(l_Lasm_Web_Raw_putImageData___closed__1));
v___x_2253_ = ((lean_object*)(l_Lasm_Web_Raw_context2d___closed__3));
v___x_2254_ = ((lean_object*)(l_Lasm_Web_instToJSDrawCommand___lam__0___closed__102));
v___x_2255_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2255_, 0, v_a_2245_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = lean_array_push(v___x_2253_, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_a_2246_);
v___x_2258_ = lean_array_push(v___x_2256_, v___x_2257_);
v___x_2259_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2259_, 0, v_a_2247_);
v___x_2260_ = lean_array_push(v___x_2258_, v___x_2259_);
v___x_2261_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2261_, 0, v_a_2248_);
v___x_2262_ = lean_array_push(v___x_2260_, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2263_, 0, v_a_2249_);
v___x_2264_ = lean_array_push(v___x_2262_, v___x_2263_);
v___x_2265_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2265_, 0, v_a_2250_);
v___x_2266_ = lean_array_push(v___x_2264_, v___x_2265_);
v___x_2267_ = 1;
v___x_2268_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_draw_spec__1(v___x_2252_, v___x_2266_, v___x_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_putImageData___boxed(lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
double v_a_383__boxed_2276_; double v_a_384__boxed_2277_; double v_a_385__boxed_2278_; double v_a_386__boxed_2279_; lean_object* v_res_2280_; 
v_a_383__boxed_2276_ = lean_unbox_float(v_a_2271_);
lean_dec_ref(v_a_2271_);
v_a_384__boxed_2277_ = lean_unbox_float(v_a_2272_);
lean_dec_ref(v_a_2272_);
v_a_385__boxed_2278_ = lean_unbox_float(v_a_2273_);
lean_dec_ref(v_a_2273_);
v_a_386__boxed_2279_ = lean_unbox_float(v_a_2274_);
lean_dec_ref(v_a_2274_);
v_res_2280_ = l_Lasm_Web_Raw_putImageData(v_a_2269_, v_a_2270_, v_a_383__boxed_2276_, v_a_384__boxed_2277_, v_a_385__boxed_2278_, v_a_386__boxed_2279_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d(lean_object* v_canvas_2281_, uint8_t v_alpha_2282_){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = l_Lasm_Web_Raw_context2d(v_canvas_2281_, v_alpha_2282_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Element_context2d___boxed(lean_object* v_canvas_2285_, lean_object* v_alpha_2286_, lean_object* v_a_2287_){
_start:
{
uint8_t v_alpha_boxed_2288_; lean_object* v_res_2289_; 
v_alpha_boxed_2288_ = lean_unbox(v_alpha_2286_);
v_res_2289_ = l_Lasm_Web_Element_context2d(v_canvas_2285_, v_alpha_boxed_2288_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw(lean_object* v_ctx_2290_, lean_object* v_commands_2291_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = l_Lasm_Web_Raw_draw(v_ctx_2290_, v_commands_2291_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_draw___boxed(lean_object* v_ctx_2294_, lean_object* v_commands_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lasm_Web_Context2D_draw(v_ctx_2294_, v_commands_2295_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText(lean_object* v_ctx_2298_, lean_object* v_text_2299_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lasm_Web_Raw_measureText(v_ctx_2298_, v_text_2299_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_measureText___boxed(lean_object* v_ctx_2302_, lean_object* v_text_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lasm_Web_Context2D_measureText(v_ctx_2302_, v_text_2303_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData(lean_object* v_ctx_2306_, lean_object* v_x_2307_, lean_object* v_y_2308_, lean_object* v_width_2309_, lean_object* v_height_2310_){
_start:
{
double v___x_2312_; double v___x_2313_; double v___x_2314_; double v___x_2315_; lean_object* v___x_2316_; 
v___x_2312_ = lean_float_of_nat(v_x_2307_);
v___x_2313_ = lean_float_of_nat(v_y_2308_);
v___x_2314_ = lean_float_of_nat(v_width_2309_);
v___x_2315_ = lean_float_of_nat(v_height_2310_);
v___x_2316_ = l_Lasm_Web_Raw_imageData(v_ctx_2306_, v___x_2312_, v___x_2313_, v___x_2314_, v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_imageData___boxed(lean_object* v_ctx_2317_, lean_object* v_x_2318_, lean_object* v_y_2319_, lean_object* v_width_2320_, lean_object* v_height_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lasm_Web_Context2D_imageData(v_ctx_2317_, v_x_2318_, v_y_2319_, v_width_2320_, v_height_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData(lean_object* v_ctx_2324_, lean_object* v_bytes_2325_, lean_object* v_x_2326_, lean_object* v_y_2327_, lean_object* v_width_2328_, lean_object* v_height_2329_){
_start:
{
double v___x_2331_; double v___x_2332_; double v___x_2333_; double v___x_2334_; lean_object* v___x_2335_; 
v___x_2331_ = lean_float_of_nat(v_x_2326_);
v___x_2332_ = lean_float_of_nat(v_y_2327_);
v___x_2333_ = lean_float_of_nat(v_width_2328_);
v___x_2334_ = lean_float_of_nat(v_height_2329_);
v___x_2335_ = l_Lasm_Web_Raw_putImageData(v_ctx_2324_, v_bytes_2325_, v___x_2331_, v___x_2332_, v___x_2333_, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Context2D_putImageData___boxed(lean_object* v_ctx_2336_, lean_object* v_bytes_2337_, lean_object* v_x_2338_, lean_object* v_y_2339_, lean_object* v_width_2340_, lean_object* v_height_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lasm_Web_Context2D_putImageData(v_ctx_2336_, v_bytes_2337_, v_x_2338_, v_y_2339_, v_width_2340_, v_height_2341_);
return v_res_2343_;
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
