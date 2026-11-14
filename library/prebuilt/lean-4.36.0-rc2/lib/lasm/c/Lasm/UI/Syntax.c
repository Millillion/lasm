// Lean compiler output
// Module: Lasm.UI.Syntax
// Imports: public import Init public meta import Init public import Lean.Parser public import Lean.Elab.SyntheticMVars public import Lasm.UI.Html public import Lasm.UI.Elements
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_tail_x21___redArg(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
extern lean_object* l_Lasm_UI_Svg_tags;
extern lean_object* l_Lasm_UI_voidTags;
extern lean_object* l_Lasm_UI_htmlTags;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_throwStuckAtUniverseCnstr_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Float_toString___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instToAttrValueString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_UI_instToAttrValueString___closed__0 = (const lean_object*)&l_Lasm_UI_instToAttrValueString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instToAttrValueString = (const lean_object*)&l_Lasm_UI_instToAttrValueString___closed__0_value;
static const lean_closure_object l_Lasm_UI_instToAttrValueNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instToAttrValueNat___closed__0 = (const lean_object*)&l_Lasm_UI_instToAttrValueNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instToAttrValueNat = (const lean_object*)&l_Lasm_UI_instToAttrValueNat___closed__0_value;
static const lean_closure_object l_Lasm_UI_instToAttrValueInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instToAttrValueInt___closed__0 = (const lean_object*)&l_Lasm_UI_instToAttrValueInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instToAttrValueInt = (const lean_object*)&l_Lasm_UI_instToAttrValueInt___closed__0_value;
static const lean_closure_object l_Lasm_UI_instToAttrValueFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Float_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instToAttrValueFloat___closed__0 = (const lean_object*)&l_Lasm_UI_instToAttrValueFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instToAttrValueFloat = (const lean_object*)&l_Lasm_UI_instToAttrValueFloat___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stylesOf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_stylesOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_textStop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_textStop___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_jsxText___lam__2(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__2___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_jsxText___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_UI_Syntax_jsxText___lam__3___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Syntax_jsxText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxText___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__0_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxText___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__1_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxText___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jsxText"};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lasm"};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "UI"};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxText___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 128, 243, 155, 224, 145, 227, 190)}};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxText___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxText___lam__3___boxed, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__8_value;
static lean_once_cell_t l_Lasm_UI_Syntax_jsxText___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_jsxText___closed__9;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxText___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__8_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxText___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__11_value;
static lean_once_cell_t l_Lasm_UI_Syntax_jsxText___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_jsxText___closed__12;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText;
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_nameChar(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameChar___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_Syntax_jsxName___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_nameChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___lam__2___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxName___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expected a tag or attribute name"};
static const lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_jsxName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jsxName"};
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 38, 177, 196, 223, 36, 48, 243)}};
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxName___lam__2___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__2_value;
static lean_once_cell_t l_Lasm_UI_Syntax_jsxName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_jsxName___closed__3;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__4_value;
static lean_once_cell_t l_Lasm_UI_Syntax_jsxName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_jsxName___closed__5;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "jsxElement"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 223, 13, 109, 164, 57, 206, 93)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__6_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(33, 209, 205, 215, 105, 240, 219, 59)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`(jsxElement| "};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__9_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 223, 13, 109, 164, 57, 206, 93)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxElement_quot___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__13_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__14_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__15_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__15_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__6_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__16_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxElement_quot___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__17_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxElement_quot___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__18_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_jsxElement_quot = (const lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_jsxElement;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jsxAttr"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 2, 134, 53, 209, 211, 144, 239)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(73, 241, 140, 45, 108, 37, 83, 160)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "`(jsxAttr| "};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 2, 134, 53, 209, 211, 144, 239)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__14_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__8_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttr_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__8_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__9_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_jsxAttr_quot = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_jsxAttr;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "jsxAttrVal"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 209, 70, 172, 183, 157, 216, 173)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__5_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__7_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__9_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__10_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__11_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__13_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__14_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxAttrVal___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__15_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__15_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__14_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__16_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__18_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__18_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxAttrVal___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__19_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxAttrVal___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__20_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_jsxAttrVal = (const lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__20_value;
static const lean_string_object l_Lasm_UI_Syntax_attrValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attrValue"};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(150, 27, 85, 241, 139, 67, 224, 248)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_attrValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__3_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__20_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrValue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrValue___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__7_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_attrValue = (const lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_attrSplice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attrSplice"};
static const lean_object* l_Lasm_UI_Syntax_attrSplice___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrSplice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 134, 52, 88, 123, 5, 154, 130)}};
static const lean_object* l_Lasm_UI_Syntax_attrSplice___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrSplice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrSplice___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_attrSplice = (const lean_object*)&l_Lasm_UI_Syntax_attrSplice___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_attrFlag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrFlag"};
static const lean_object* l_Lasm_UI_Syntax_attrFlag___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrFlag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 246, 3, 229, 146, 165, 89, 170)}};
static const lean_object* l_Lasm_UI_Syntax_attrFlag___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrFlag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrFlag___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_attrFlag = (const lean_object*)&l_Lasm_UI_Syntax_attrFlag___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_selfClosing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "selfClosing"};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 95, 175, 31, 79, 245, 138, 214)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_selfClosing___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_selfClosing___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttr_quot___closed__5_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_selfClosing___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/>"};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__9_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__10_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_selfClosing___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__11_value)}};
static const lean_object* l_Lasm_UI_Syntax_selfClosing___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__12_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_selfClosing = (const lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__12_value;
static const lean_string_object l_Lasm_UI_Syntax_childText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "childText"};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 93, 232, 129, 11, 102, 199, 56)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childText = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_childTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "childTerm"};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 179, 11, 78, 31, 181, 58, 209)}};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value)}};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childTerm = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_childElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "childElement"};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 67, 240, 146, 166, 211, 235, 9)}};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value)}};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childElement = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "jsxChild"};
static const lean_object* l_Lasm_UI_Syntax_jsxChild___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 21, 249, 109, 14, 97, 160, 94)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__3_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__4_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_jsxChild = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_withChildren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withChildren"};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 56, 231, 171, 22, 87, 110, 69)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_withChildren___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__3_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__5_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_withChildren___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "</"};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__8_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__8_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__9_value),((lean_object*)&l_Lasm_UI_Syntax_attrValue___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__3_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__11_value)}};
static const lean_object* l_Lasm_UI_Syntax_withChildren___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__12_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_withChildren = (const lean_object*)&l_Lasm_UI_Syntax_withChildren___closed__12_value;
static const lean_string_object l_Lasm_UI_Syntax_htmlTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "htmlTerm"};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(8, 88, 134, 251, 225, 254, 251, 196)}};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_htmlTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "html!"};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value)}};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_htmlTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_htmlTerm___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__5_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_htmlTerm = (const lean_object*)&l_Lasm_UI_Syntax_htmlTerm___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_childrenTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "childrenTerm"};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 196, 23, 116, 214, 136, 127, 228)}};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_childrenTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lasm_children% "};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__12_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childrenTerm___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__5_value)}};
static const lean_object* l_Lasm_UI_Syntax_childrenTerm___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__6_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childrenTerm = (const lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_attrsTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attrsTerm"};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 150, 139, 94, 83, 223, 127, 31)}};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_attrsTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lasm_attrs% "};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_childrenTerm___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_attrsTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_attrsTerm___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__5_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_attrsTerm = (const lean_object*)&l_Lasm_UI_Syntax_attrsTerm___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "html!: this has type"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0_value;
static lean_once_cell_t l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2_value;
static lean_once_cell_t l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Html"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 29, 200, 239, 67, 244, 211, 31)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "attributes must be an Attr, a list or an option of Attr"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "children must be an Html, a list, array or option of Html, a String or a number"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToString"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 202, 174, 203, 16, 186, 159, 168)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__2_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__1_value),LEAN_SCALAR_PTR_LITERAL(206, 210, 39, 124, 69, 192, 37, 107)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__4_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__6_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__8_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__8_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__9_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__10_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__11_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__12_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__13_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__16_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 29, 200, 239, 67, 244, 211, 31)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxText___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 2, 162, 115, 179, 41, 239, 198)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__19_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_elabAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lasm_UI_Syntax_elabAttrs___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabAttrs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabAttrs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_elabAttrs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 47, 106, 13, 191, 164, 180)}};
static const lean_object* l_Lasm_UI_Syntax_elabAttrs___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_jsxWhitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lasm_UI_Syntax_jsxWhitespace___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxWhitespace___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxWhitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_Syntax_jsxWhitespace___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxWhitespace___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxWhitespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxWhitespace___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxWhitespace___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxWhitespace___closed__2_value;
static const lean_array_object l_Lasm_UI_Syntax_jsxWhitespace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Syntax_jsxWhitespace___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxWhitespace___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "amp"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "apos"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nbsp"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "copy"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdash"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndash"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hellip"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "times"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rarr"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "larr"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#X"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#x"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "×"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "…"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "–"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "—"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "©"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = " "};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_decodeEntities(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__0_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "selected"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "disabled"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hidden"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readonly"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readOnly"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__9_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__9_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__9_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__11_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "required"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__12_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__12_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__13_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "multiple"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__14_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__14_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "autofocus"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__16_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__16_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__17_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__18_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__18_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__18_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__19_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "muted"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__20_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__20_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__20_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__21_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "controls"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__22_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__22_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__23_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "autoplay"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__24_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__24_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__24_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__25_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "loop"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__26 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__26_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__26_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__26_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__27_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "novalidate"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__28_value;
static const lean_string_object l_Lasm_UI_Syntax_boolProps___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "noValidate"};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__29_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__28_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__29_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__30 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__31 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__27_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__31_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__32 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__25_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__32_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__33 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__33_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__23_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__33_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__34 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__34_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__21_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__34_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__35 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__35_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__19_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__35_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__36 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__36_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__17_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__36_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__37 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__37_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__15_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__37_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__38 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__38_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__13_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__38_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__39 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__39_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__11_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__39_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__40 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__40_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__40_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__41 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__41_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__7_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__41_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__42 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__42_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__42_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__43 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__43_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__43_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__44 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__44_value;
static const lean_ctor_object l_Lasm_UI_Syntax_boolProps___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__44_value)}};
static const lean_object* l_Lasm_UI_Syntax_boolProps___closed__45 = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__45_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_boolProps = (const lean_object*)&l_Lasm_UI_Syntax_boolProps___closed__45_value;
static const lean_string_object l_Lasm_UI_Syntax_stringProps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__0_value)}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_stringProps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "innerHTML"};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_stringProps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "textContent"};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_stringProps___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_stringProps___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__8_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_stringProps = (const lean_object*)&l_Lasm_UI_Syntax_stringProps___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onClick"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "onDoubleClick"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "onMouseDown"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onMouseUp"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "onMouseEnter"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "onMouseLeave"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "onMouseOver"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "onMouseOut"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onFocus"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "onBlur"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__9_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onInput"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__10_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onChange"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__11_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onCheck"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__12_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onSubmit"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__13_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onKeyDown"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__14_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onKeyUp"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onEnter"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__16_value;
static const lean_string_object l_Lasm_UI_Syntax_eventHelpers___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onEscape"};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__18_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__16_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__18_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__15_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__19_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__20_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__14_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__20_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__21_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__13_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__21_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__12_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__22_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__23_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__11_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__23_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__24_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__10_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__24_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__25_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__9_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__25_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__26 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__26_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__26_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__27_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__7_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__27_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__28_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__28_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__29_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__29_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__30 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__30_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__31 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__31_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__32 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__32_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__33 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__33_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__1_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__33_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__34 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__34_value;
static const lean_ctor_object l_Lasm_UI_Syntax_eventHelpers___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__0_value),((lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__34_value)}};
static const lean_object* l_Lasm_UI_Syntax_eventHelpers___closed__35 = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__35_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_eventHelpers = (const lean_object*)&l_Lasm_UI_Syntax_eventHelpers___closed__35_value;
static const lean_string_object l_Lasm_UI_Syntax_isEventName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* l_Lasm_UI_Syntax_isEventName___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_isEventName___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_isEventName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_isEventName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_lowerFirst(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unsupported attribute"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__0_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__7_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Attr.attr"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__8_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__9;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 47, 106, 13, 191, 164, 180)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value),LEAN_SCALAR_PTR_LITERAL(6, 57, 206, 184, 36, 197, 61, 244)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__12_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__14_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__16_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__18_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__17_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__18_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__21_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__23_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__24;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__25_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__25_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__25_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__25_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__26 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__26_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__28_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__29_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__29_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__30 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__31 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__28_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__31_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__32 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__26_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__32_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__33 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__33_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.UI.ToAttrValue.toAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__34 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__34_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__35;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ToAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__36 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__36_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__37 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__37_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__36_value),LEAN_SCALAR_PTR_LITERAL(211, 81, 235, 32, 160, 23, 242, 126)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__37_value),LEAN_SCALAR_PTR_LITERAL(136, 185, 239, 21, 209, 36, 46, 186)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__38 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__39 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__39_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__40 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "bad attribute value"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__41 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__41_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__42 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__42_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.UI.stylesOf"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__43 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__43_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__44;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stylesOf"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__45 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__45_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__46_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__46_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__45_value),LEAN_SCALAR_PTR_LITERAL(239, 59, 168, 107, 47, 108, 16, 141)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__46 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__46_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__47 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__47_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__46_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__48 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__49 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__49_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__47_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__49_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__50 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__50_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "className"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__51 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__51_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "htmlFor"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__52 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__52_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__53 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__53_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__54 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__54_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Attr.prop"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__55 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__55_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__56;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prop"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__57 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__57_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 47, 106, 13, 191, 164, 180)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__57_value),LEAN_SCALAR_PTR_LITERAL(211, 53, 92, 174, 6, 135, 8, 21)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__58 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__59 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__59_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__58_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__60 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__61 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__61_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__59_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__61_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__62 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__62_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__63 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__63_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__64_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__63_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__64 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__64_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__65 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__65_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__66;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bad value"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__67 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__67_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " is a boolean property: write "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__68 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__68_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "={true}, "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__69 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__69_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "={b} or a bare "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__70 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__70_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bool"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__71 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__71_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__72;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__71_value),LEAN_SCALAR_PTR_LITERAL(196, 123, 29, 106, 21, 111, 175, 162)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__73 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__73_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__73_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__74 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__74_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__73_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__75 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__75_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__75_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__76 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__76_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__74_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__76_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__77 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__77_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Lasm.UI.on"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__78 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__78_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__79;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__80_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__80_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_isEventName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 14, 190, 50, 229, 40, 111, 161)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__80 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__80_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__80_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__81 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__81_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__81_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__82 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__82_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__83 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__84 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__84_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " takes a Lean value: "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__85 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__85_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = "={…}"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__86 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__86_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "event attributes are written in camel case: on"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__87 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__87_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__88 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__88_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bad key"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__89 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__89_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\""};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__90 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__90_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " needs a value: "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__91 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__91_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__92 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__92_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__93;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__92_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__94 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__94_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__95 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__95_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__95_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__96_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__92_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__96 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__96_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__96_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__97 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__97_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__97_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__98 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__98_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lasm_attrs%"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__99 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__99_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_::_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 118, 107, 117, 215, 167, 224, 10)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "::"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_Syntax_concatLists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0_value)}};
static const lean_object* l_Lasm_UI_Syntax_concatLists___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_concatLists___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.UI.Ns.html"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__0_value;
static lean_once_cell_t l_Lasm_UI_Syntax_nsTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_nsTerm___closed__1;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ns"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "html"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 111, 119, 236, 75, 102, 252, 118)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 125, 21, 110, 143, 122, 3, 4)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.UI.Ns.svg"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__9_value;
static lean_once_cell_t l_Lasm_UI_Syntax_nsTerm___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_nsTerm___closed__10;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "svg"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 111, 119, 236, 75, 102, 252, 118)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__11_value),LEAN_SCALAR_PTR_LITERAL(95, 199, 77, 95, 15, 38, 62, 131)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__12_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__15_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__13_value),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__15_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__16_value;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Ns.mathml"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__17_value;
static lean_once_cell_t l_Lasm_UI_Syntax_nsTerm___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_nsTerm___closed__18;
static const lean_string_object l_Lasm_UI_Syntax_nsTerm___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mathml"};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 111, 119, 236, 75, 102, 252, 118)}};
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__19_value),LEAN_SCALAR_PTR_LITERAL(78, 62, 140, 197, 233, 16, 37, 175)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__21_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__20_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__22_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__23_value;
static const lean_ctor_object l_Lasm_UI_Syntax_nsTerm___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__21_value),((lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__23_value)}};
static const lean_object* l_Lasm_UI_Syntax_nsTerm___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_nsTerm___closed__24_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "the element already has a key"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Html.text"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__0_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandChild___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandChild___closed__1;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__2_value),((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__4_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__5_value;
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unsupported child"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Html.elem"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__0_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandElement___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandElement___closed__1;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elem"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 29, 200, 239, 67, 244, 211, 31)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 168, 210, 133, 250, 250, 125, 206)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__7_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__8_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandElement___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandElement___closed__9;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__8_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__6_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__11_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__8_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__13_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__14_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandElement___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandElement___closed__15;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__14_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__6_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__17_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__14_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__17_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__18_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__19_value;
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\" \""};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__20_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "foreignObject"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__21_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown SVG element <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__22_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "> is a void element and takes no children: write <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__23_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " … />"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__24_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "math"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__25_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown HTML element <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__26 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__26_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "> (custom elements need a `-` in their name)"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__27_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "> closes <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__28_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected an element"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__29_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement(uint8_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lasm_children%"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0___redArg(lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
if (lean_obj_tag(v_a_9_) == 0)
{
lean_object* v___x_11_; 
v___x_11_ = l_List_reverse___redArg(v_a_10_);
return v___x_11_;
}
else
{
lean_object* v_head_12_; lean_object* v_tail_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_30_; 
v_head_12_ = lean_ctor_get(v_a_9_, 0);
v_tail_13_ = lean_ctor_get(v_a_9_, 1);
v_isSharedCheck_30_ = !lean_is_exclusive(v_a_9_);
if (v_isSharedCheck_30_ == 0)
{
v___x_15_ = v_a_9_;
v_isShared_16_ = v_isSharedCheck_30_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_tail_13_);
lean_inc(v_head_12_);
lean_dec(v_a_9_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_30_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v_fst_17_; lean_object* v_snd_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_29_; 
v_fst_17_ = lean_ctor_get(v_head_12_, 0);
v_snd_18_ = lean_ctor_get(v_head_12_, 1);
v_isSharedCheck_29_ = !lean_is_exclusive(v_head_12_);
if (v_isSharedCheck_29_ == 0)
{
v___x_20_ = v_head_12_;
v_isShared_21_ = v_isSharedCheck_29_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_snd_18_);
lean_inc(v_fst_17_);
lean_dec(v_head_12_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_29_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set_tag(v___x_20_, 2);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_fst_17_);
lean_ctor_set(v_reuseFailAlloc_28_, 1, v_snd_18_);
v___x_23_ = v_reuseFailAlloc_28_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_25_; 
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v_a_10_);
lean_ctor_set(v___x_15_, 0, v___x_23_);
v___x_25_ = v___x_15_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_a_10_);
v___x_25_ = v_reuseFailAlloc_27_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
v_a_9_ = v_tail_13_;
v_a_10_ = v___x_25_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stylesOf___redArg(lean_object* v_l_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_box(0);
v___x_33_ = l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0___redArg(v_l_31_, v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_stylesOf(lean_object* v_Msg_34_, lean_object* v_l_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lasm_UI_stylesOf___redArg(v_l_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0(lean_object* v_Msg_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_List_mapTR_loop___at___00Lasm_UI_stylesOf_spec__0___redArg(v_a_38_, v_a_39_);
return v___x_40_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_textStop(uint32_t v_c_41_){
_start:
{
uint32_t v___x_42_; uint8_t v___x_43_; 
v___x_42_ = 60;
v___x_43_ = lean_uint32_dec_eq(v_c_41_, v___x_42_);
if (v___x_43_ == 0)
{
uint32_t v___x_44_; uint8_t v___x_45_; 
v___x_44_ = 62;
v___x_45_ = lean_uint32_dec_eq(v_c_41_, v___x_44_);
if (v___x_45_ == 0)
{
uint32_t v___x_46_; uint8_t v___x_47_; 
v___x_46_ = 123;
v___x_47_ = lean_uint32_dec_eq(v_c_41_, v___x_46_);
if (v___x_47_ == 0)
{
uint32_t v___x_48_; uint8_t v___x_49_; 
v___x_48_ = 125;
v___x_49_ = lean_uint32_dec_eq(v_c_41_, v___x_48_);
if (v___x_49_ == 0)
{
uint32_t v___x_50_; uint8_t v___x_51_; 
v___x_50_ = 36;
v___x_51_ = lean_uint32_dec_eq(v_c_41_, v___x_50_);
return v___x_51_;
}
else
{
return v___x_49_;
}
}
else
{
return v___x_47_;
}
}
else
{
return v___x_45_;
}
}
else
{
return v___x_43_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_textStop___boxed(lean_object* v_c_52_){
_start:
{
uint32_t v_c_boxed_53_; uint8_t v_res_54_; lean_object* v_r_55_; 
v_c_boxed_53_ = lean_unbox_uint32(v_c_52_);
lean_dec(v_c_52_);
v_res_54_ = l_Lasm_UI_Syntax_textStop(v_c_boxed_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__0(lean_object* v___y_56_){
_start:
{
lean_inc_ref(v___y_56_);
return v___y_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__0___boxed(lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lasm_UI_Syntax_jsxText___lam__0(v___y_57_);
lean_dec_ref(v___y_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__1(lean_object* v___y_59_){
_start:
{
lean_inc(v___y_59_);
return v___y_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__1___boxed(lean_object* v___y_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lasm_UI_Syntax_jsxText___lam__1(v___y_60_);
lean_dec(v___y_60_);
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_jsxText___lam__2(uint32_t v_c_62_){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = l_Lasm_UI_Syntax_textStop(v_c_62_);
if (v___x_63_ == 0)
{
uint8_t v___x_64_; 
v___x_64_ = 1;
return v___x_64_;
}
else
{
uint8_t v___x_65_; 
v___x_65_ = 0;
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__2___boxed(lean_object* v_c_66_){
_start:
{
uint32_t v_c_boxed_67_; uint8_t v_res_68_; lean_object* v_r_69_; 
v_c_boxed_67_ = lean_unbox_uint32(v_c_66_);
lean_dec(v_c_66_);
v_res_68_ = l_Lasm_UI_Syntax_jsxText___lam__2(v_c_boxed_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__3(lean_object* v___f_71_, lean_object* v___x_72_, uint8_t v___x_73_, lean_object* v_c_74_, lean_object* v_s_75_){
_start:
{
lean_object* v_pos_76_; lean_object* v___x_77_; lean_object* v_s_78_; lean_object* v___x_79_; 
v_pos_76_ = lean_ctor_get(v_s_75_, 2);
lean_inc(v_pos_76_);
v___x_77_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___lam__3___closed__0));
lean_inc_ref(v_c_74_);
v_s_78_ = l_Lean_Parser_takeWhile1Fn(v___f_71_, v___x_77_, v_c_74_, v_s_75_);
v___x_79_ = l_Lean_Parser_mkNodeToken(v___x_72_, v_pos_76_, v___x_73_, v_c_74_, v_s_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText___lam__3___boxed(lean_object* v___f_80_, lean_object* v___x_81_, lean_object* v___x_82_, lean_object* v_c_83_, lean_object* v_s_84_){
_start:
{
uint8_t v___x_55__boxed_85_; lean_object* v_res_86_; 
v___x_55__boxed_85_ = lean_unbox(v___x_82_);
v_res_86_ = l_Lasm_UI_Syntax_jsxText___lam__3(v___f_80_, v___x_81_, v___x_55__boxed_85_, v_c_83_, v_s_84_);
return v_res_86_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxText___closed__9(void){
_start:
{
uint8_t v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_104_ = 0;
v___x_105_ = 1;
v___x_106_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__7));
v___x_107_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__3));
v___x_108_ = l_Lean_Parser_mkAntiquot(v___x_107_, v___x_106_, v___x_105_, v___x_104_);
return v___x_108_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxText___closed__12(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__11));
v___x_117_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxText___closed__9, &l_Lasm_UI_Syntax_jsxText___closed__9_once, _init_l_Lasm_UI_Syntax_jsxText___closed__9);
v___x_118_ = l_Lean_Parser_withAntiquot(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxText(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxText___closed__12, &l_Lasm_UI_Syntax_jsxText___closed__12_once, _init_l_Lasm_UI_Syntax_jsxText___closed__12);
return v___x_119_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_nameChar(uint32_t v_c_120_){
_start:
{
uint32_t v___x_140_; uint8_t v___x_141_; 
v___x_140_ = 65;
v___x_141_ = lean_uint32_dec_le(v___x_140_, v_c_120_);
if (v___x_141_ == 0)
{
goto v___jp_135_;
}
else
{
uint32_t v___x_142_; uint8_t v___x_143_; 
v___x_142_ = 90;
v___x_143_ = lean_uint32_dec_le(v_c_120_, v___x_142_);
if (v___x_143_ == 0)
{
goto v___jp_135_;
}
else
{
return v___x_143_;
}
}
v___jp_121_:
{
uint32_t v___x_122_; uint8_t v___x_123_; 
v___x_122_ = 45;
v___x_123_ = lean_uint32_dec_eq(v_c_120_, v___x_122_);
if (v___x_123_ == 0)
{
uint32_t v___x_124_; uint8_t v___x_125_; 
v___x_124_ = 95;
v___x_125_ = lean_uint32_dec_eq(v_c_120_, v___x_124_);
if (v___x_125_ == 0)
{
uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_126_ = 58;
v___x_127_ = lean_uint32_dec_eq(v_c_120_, v___x_126_);
if (v___x_127_ == 0)
{
uint32_t v___x_128_; uint8_t v___x_129_; 
v___x_128_ = 46;
v___x_129_ = lean_uint32_dec_eq(v_c_120_, v___x_128_);
return v___x_129_;
}
else
{
return v___x_127_;
}
}
else
{
return v___x_125_;
}
}
else
{
return v___x_123_;
}
}
v___jp_130_:
{
uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_131_ = 48;
v___x_132_ = lean_uint32_dec_le(v___x_131_, v_c_120_);
if (v___x_132_ == 0)
{
goto v___jp_121_;
}
else
{
uint32_t v___x_133_; uint8_t v___x_134_; 
v___x_133_ = 57;
v___x_134_ = lean_uint32_dec_le(v_c_120_, v___x_133_);
if (v___x_134_ == 0)
{
goto v___jp_121_;
}
else
{
return v___x_134_;
}
}
}
v___jp_135_:
{
uint32_t v___x_136_; uint8_t v___x_137_; 
v___x_136_ = 97;
v___x_137_ = lean_uint32_dec_le(v___x_136_, v_c_120_);
if (v___x_137_ == 0)
{
goto v___jp_130_;
}
else
{
uint32_t v___x_138_; uint8_t v___x_139_; 
v___x_138_ = 122;
v___x_139_ = lean_uint32_dec_le(v_c_120_, v___x_138_);
if (v___x_139_ == 0)
{
goto v___jp_130_;
}
else
{
return v___x_139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameChar___boxed(lean_object* v_c_144_){
_start:
{
uint32_t v_c_boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v_c_boxed_145_ = lean_unbox_uint32(v_c_144_);
lean_dec(v_c_144_);
v_res_146_ = l_Lasm_UI_Syntax_nameChar(v_c_boxed_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2(lean_object* v___x_150_, uint8_t v___x_151_, lean_object* v_c_152_, lean_object* v_s_153_){
_start:
{
lean_object* v_pos_154_; lean_object* v_toInputContext_160_; uint8_t v___x_161_; 
v_pos_154_ = lean_ctor_get(v_s_153_, 2);
v_toInputContext_160_ = lean_ctor_get(v_c_152_, 0);
v___x_161_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_160_, v_pos_154_);
if (v___x_161_ == 0)
{
lean_object* v_inputString_162_; uint32_t v_ch_163_; uint32_t v___x_175_; uint8_t v___x_176_; 
v_inputString_162_ = lean_ctor_get(v_toInputContext_160_, 0);
v_ch_163_ = lean_string_utf8_get(v_inputString_162_, v_pos_154_);
v___x_175_ = 65;
v___x_176_ = lean_uint32_dec_le(v___x_175_, v_ch_163_);
if (v___x_176_ == 0)
{
goto v___jp_170_;
}
else
{
uint32_t v___x_177_; uint8_t v___x_178_; 
v___x_177_ = 90;
v___x_178_ = lean_uint32_dec_le(v_ch_163_, v___x_177_);
if (v___x_178_ == 0)
{
goto v___jp_170_;
}
else
{
lean_inc(v_pos_154_);
goto v___jp_155_;
}
}
v___jp_164_:
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 95;
v___x_166_ = lean_uint32_dec_eq(v_ch_163_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec_ref(v_c_152_);
lean_dec(v___x_150_);
v___x_167_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___lam__2___closed__1));
v___x_168_ = lean_box(0);
v___x_169_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_153_, v___x_167_, v___x_168_, v___x_151_);
return v___x_169_;
}
else
{
lean_inc(v_pos_154_);
goto v___jp_155_;
}
}
v___jp_170_:
{
uint32_t v___x_171_; uint8_t v___x_172_; 
v___x_171_ = 97;
v___x_172_ = lean_uint32_dec_le(v___x_171_, v_ch_163_);
if (v___x_172_ == 0)
{
goto v___jp_164_;
}
else
{
uint32_t v___x_173_; uint8_t v___x_174_; 
v___x_173_ = 122;
v___x_174_ = lean_uint32_dec_le(v_ch_163_, v___x_173_);
if (v___x_174_ == 0)
{
goto v___jp_164_;
}
else
{
lean_inc(v_pos_154_);
goto v___jp_155_;
}
}
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec_ref(v_c_152_);
lean_dec(v___x_150_);
v___x_179_ = lean_box(0);
v___x_180_ = l_Lean_Parser_ParserState_mkEOIError(v_s_153_, v___x_179_);
return v___x_180_;
}
v___jp_155_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_s_158_; lean_object* v___x_159_; 
v___x_156_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___lam__2___closed__0));
v___x_157_ = l_Lean_Parser_ParserState_next(v_s_153_, v_c_152_, v_pos_154_);
v_s_158_ = l_Lean_Parser_takeWhileFn(v___x_156_, v_c_152_, v___x_157_);
v___x_159_ = l_Lean_Parser_mkNodeToken(v___x_150_, v_pos_154_, v___x_151_, v_c_152_, v_s_158_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___boxed(lean_object* v___x_181_, lean_object* v___x_182_, lean_object* v_c_183_, lean_object* v_s_184_){
_start:
{
uint8_t v___x_201__boxed_185_; lean_object* v_res_186_; 
v___x_201__boxed_185_ = lean_unbox(v___x_182_);
v_res_186_ = l_Lasm_UI_Syntax_jsxName___lam__2(v___x_181_, v___x_201__boxed_185_, v_c_183_, v_s_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName___closed__3(void){
_start:
{
uint8_t v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = 0;
v___x_198_ = 1;
v___x_199_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
v___x_200_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__0));
v___x_201_ = l_Lean_Parser_mkAntiquot(v___x_200_, v___x_199_, v___x_198_, v___x_197_);
return v___x_201_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName___closed__5(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__4));
v___x_206_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxName___closed__3, &l_Lasm_UI_Syntax_jsxName___closed__3_once, _init_l_Lasm_UI_Syntax_jsxName___closed__3);
v___x_207_ = l_Lean_Parser_withAntiquot(v___x_206_, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxName___closed__5, &l_Lasm_UI_Syntax_jsxName___closed__5_once, _init_l_Lasm_UI_Syntax_jsxName___closed__5);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg(){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_box(0);
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg___boxed(lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lasm_UI_Syntax_jsxText_formatter___redArg();
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter(lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lasm_UI_Syntax_jsxText_formatter___redArg();
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___boxed(lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_UI_Syntax_jsxText_formatter(v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg(){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_box(0);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg___boxed(lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg();
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer(lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg();
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___boxed(lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lasm_UI_Syntax_jsxText_parenthesizer(v_a_237_, v_a_238_, v_a_239_, v_a_240_);
lean_dec(v_a_240_);
lean_dec_ref(v_a_239_);
lean_dec(v_a_238_);
lean_dec_ref(v_a_237_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg(){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg___boxed(lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lasm_UI_Syntax_jsxName_formatter___redArg();
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter(lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lasm_UI_Syntax_jsxName_formatter___redArg();
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___boxed(lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lasm_UI_Syntax_jsxName_formatter(v_a_254_, v_a_255_, v_a_256_, v_a_257_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
lean_dec(v_a_255_);
lean_dec_ref(v_a_254_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg(){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg___boxed(lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg();
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer(lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg();
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___boxed(lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lasm_UI_Syntax_jsxName_parenthesizer(v_a_271_, v_a_272_, v_a_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
return v_res_276_;
}
}
static lean_object* _init_l_Lean_Parser_Category_jsxElement(void){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_box(0);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Parser_Category_jsxAttr(void){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lean_box(0);
return v___x_351_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_638_ = l_Lean_stringToMessageData(v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0(lean_object* v_a_646_, lean_object* v_t_647_, lean_object* v_kind_648_, lean_object* v_00_u03b1_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v___y_658_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_668_ = lean_name_eq(v_kind_648_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6));
v___y_658_ = v___x_669_;
goto v___jp_657_;
}
else
{
lean_object* v___x_670_; 
v___x_670_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7));
v___y_658_ = v___x_670_;
goto v___jp_657_;
}
v___jp_657_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_659_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1);
v___x_660_ = l_Lean_indentExpr(v_a_646_);
v___x_661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3);
v___x_663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
lean_inc_ref(v___y_658_);
v___x_664_ = l_Lean_stringToMessageData(v___y_658_);
v___x_665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_663_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
v___x_666_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_throwStuckAtUniverseCnstr_spec__3___redArg(v_t_647_, v___x_665_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___boxed(lean_object* v_a_671_, lean_object* v_t_672_, lean_object* v_kind_673_, lean_object* v_00_u03b1_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lasm_UI_Syntax_elabSplice___lam__0(v_a_671_, v_t_672_, v_kind_673_, v_00_u03b1_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v_kind_673_);
lean_dec(v_t_672_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice(lean_object* v_kind_718_, lean_object* v_t_719_, lean_object* v_expected_x3f_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v_msg_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; 
if (lean_obj_tag(v_expected_x3f_720_) == 0)
{
uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = 0;
v___x_1006_ = lean_box(0);
v___x_1007_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1005_, v___x_1006_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v_msg_956_ = v_a_1008_;
v___y_957_ = v_a_721_;
v___y_958_ = v_a_722_;
v___y_959_ = v_a_723_;
v___y_960_ = v_a_724_;
v___y_961_ = v_a_725_;
v___y_962_ = v_a_726_;
goto v___jp_955_;
}
else
{
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_1007_;
}
}
else
{
lean_object* v_val_1009_; lean_object* v___x_1010_; lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_val_1009_ = lean_ctor_get(v_expected_x3f_720_, 0);
lean_inc(v_val_1009_);
lean_dec_ref_known(v_expected_x3f_720_, 1);
v___x_1010_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_val_1009_, v_a_724_);
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref(v___x_1010_);
v___x_1012_ = l_Lean_Meta_whnfR(v_a_1011_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_1015_ = lean_unsigned_to_nat(1u);
v___x_1016_ = l_Lean_Expr_isAppOfArity(v_a_1013_, v___x_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
uint8_t v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_dec(v_a_1013_);
v___x_1017_ = 0;
v___x_1018_ = lean_box(0);
v___x_1019_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1017_, v___x_1018_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v_msg_956_ = v_a_1020_;
v___y_957_ = v_a_721_;
v___y_958_ = v_a_722_;
v___y_959_ = v_a_723_;
v___y_960_ = v_a_724_;
v___y_961_ = v_a_725_;
v___y_962_ = v_a_726_;
goto v___jp_955_;
}
else
{
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_1019_;
}
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_a_1023_; lean_object* v___x_1024_; 
v___x_1021_ = l_Lean_Expr_appArg_x21(v_a_1013_);
lean_dec(v_a_1013_);
v___x_1022_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v___x_1021_, v_a_724_);
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_a_1023_);
lean_dec_ref(v___x_1022_);
v___x_1024_ = l_Lean_Meta_whnfR(v_a_1023_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; uint8_t v___x_1026_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
v___x_1026_ = l_Lean_Expr_isAppOfArity(v_a_1025_, v_kind_718_, v___x_1015_);
if (v___x_1026_ == 0)
{
uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_dec(v_a_1025_);
v___x_1027_ = 0;
v___x_1028_ = lean_box(0);
v___x_1029_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1027_, v___x_1028_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v_msg_956_ = v_a_1030_;
v___y_957_ = v_a_721_;
v___y_958_ = v_a_722_;
v___y_959_ = v_a_723_;
v___y_960_ = v_a_724_;
v___y_961_ = v_a_725_;
v___y_962_ = v_a_726_;
goto v___jp_955_;
}
else
{
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_1029_;
}
}
else
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Expr_appArg_x21(v_a_1025_);
lean_dec(v_a_1025_);
v_msg_956_ = v___x_1031_;
v___y_957_ = v_a_721_;
v___y_958_ = v_a_722_;
v___y_959_ = v_a_723_;
v___y_960_ = v_a_724_;
v___y_961_ = v_a_725_;
v___y_962_ = v_a_726_;
goto v___jp_955_;
}
}
else
{
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_1024_;
}
}
}
else
{
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_1012_;
}
}
v___jp_728_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__2));
v___x_743_ = lean_array_push(v___y_729_, v___y_730_);
v___x_744_ = l_Lean_Meta_mkAppM(v___x_742_, v___x_743_, v___y_737_, v___y_733_, v___y_731_, v___y_740_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___lam__3___closed__0));
lean_inc_ref(v___y_739_);
lean_inc_ref(v___y_732_);
lean_inc_ref(v___y_738_);
v___x_747_ = l_Lean_Name_mkStr4(v___y_738_, v___y_732_, v___y_739_, v___x_746_);
v___x_748_ = l_Lean_Expr_const___override(v___x_747_, v___y_741_);
v___x_749_ = l_Lean_mkAppB(v___x_748_, v___y_736_, v_a_745_);
v___x_750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___y_735_);
v___x_751_ = l_Lean_Meta_mkListLit(v___y_734_, v___x_750_, v___y_737_, v___y_733_, v___y_731_, v___y_740_);
return v___x_751_;
}
else
{
lean_dec(v___y_741_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
return v___x_744_;
}
}
v___jp_752_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_760_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__3));
lean_inc_ref(v___y_755_);
v___x_761_ = l_Lean_Name_mkStr2(v___y_755_, v___x_760_);
v___x_762_ = lean_array_push(v___y_753_, v___y_754_);
v___x_763_ = l_Lean_Meta_mkAppM(v___x_761_, v___x_762_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
return v___x_763_;
}
v___jp_764_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_772_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__3));
lean_inc_ref(v___y_767_);
v___x_773_ = l_Lean_Name_mkStr2(v___y_767_, v___x_772_);
v___x_774_ = lean_array_push(v___y_765_, v___y_766_);
v___x_775_ = l_Lean_Meta_mkAppM(v___x_773_, v___x_774_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
return v___x_775_;
}
v___jp_776_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___y_777_);
lean_ctor_set(v___x_784_, 1, v___y_779_);
v___x_785_ = l_Lean_Meta_mkListLit(v___y_778_, v___x_784_, v___y_780_, v___y_781_, v___y_782_, v___y_783_);
return v___x_785_;
}
v___jp_786_:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = l_Lean_Expr_getAppFn(v___y_789_);
v___x_805_ = l_Lean_Expr_constName_x3f(v___x_804_);
lean_dec_ref(v___x_804_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_806_; 
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v_kind_718_);
v___x_806_ = l_Lean_Meta_isExprDefEq(v___y_789_, v___y_795_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_816_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_816_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_816_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
uint8_t v___x_811_; 
v___x_811_ = lean_unbox(v_a_807_);
lean_dec(v_a_807_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; 
lean_del_object(v___x_809_);
lean_dec_ref(v___y_792_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_812_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
return v___x_812_;
}
else
{
lean_object* v___x_814_; 
lean_dec_ref(v___y_793_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___y_792_);
v___x_814_ = v___x_809_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___y_792_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
else
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_824_; 
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
v_a_817_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_824_ == 0)
{
v___x_819_ = v___x_806_;
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_806_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_824_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_822_; 
if (v_isShared_820_ == 0)
{
v___x_822_ = v___x_819_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_817_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
else
{
lean_object* v_val_825_; uint8_t v___x_826_; 
v_val_825_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_val_825_);
lean_dec_ref_known(v___x_805_, 1);
v___x_826_ = lean_name_eq(v_val_825_, v_kind_718_);
if (v___x_826_ == 0)
{
uint8_t v___x_827_; 
v___x_827_ = lean_name_eq(v_val_825_, v___y_788_);
lean_dec(v___y_788_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
lean_dec_ref(v___y_795_);
v___x_828_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__4));
v___x_829_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__5));
v___x_830_ = lean_name_eq(v_val_825_, v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_831_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__6));
v___x_832_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__7));
v___x_833_ = lean_name_eq(v_val_825_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
lean_dec_ref(v___y_791_);
lean_dec_ref(v___y_789_);
v___x_834_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__4));
v___x_835_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__5));
v___x_836_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4));
v___x_837_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_838_ = lean_name_eq(v_kind_718_, v___x_837_);
lean_dec(v_kind_718_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; 
lean_dec(v_val_825_);
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v___y_787_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_839_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
return v___x_839_;
}
else
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__9));
v___x_841_ = lean_name_eq(v_val_825_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__11));
v___x_843_ = lean_name_eq(v_val_825_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__13));
v___x_845_ = lean_name_eq(v_val_825_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_846_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__15));
v___x_847_ = lean_name_eq(v_val_825_, v___x_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__17));
v___x_849_ = lean_name_eq(v_val_825_, v___x_848_);
lean_dec(v_val_825_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v___y_787_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_850_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
return v___x_850_;
}
else
{
lean_dec_ref(v___y_793_);
v___y_729_ = v___y_790_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_802_;
v___y_732_ = v___x_835_;
v___y_733_ = v___y_801_;
v___y_734_ = v___y_794_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_787_;
v___y_737_ = v___y_800_;
v___y_738_ = v___x_834_;
v___y_739_ = v___x_836_;
v___y_740_ = v___y_803_;
v___y_741_ = v___y_796_;
goto v___jp_728_;
}
}
else
{
lean_dec(v_val_825_);
lean_dec_ref(v___y_793_);
v___y_729_ = v___y_790_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_802_;
v___y_732_ = v___x_835_;
v___y_733_ = v___y_801_;
v___y_734_ = v___y_794_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_787_;
v___y_737_ = v___y_800_;
v___y_738_ = v___x_834_;
v___y_739_ = v___x_836_;
v___y_740_ = v___y_803_;
v___y_741_ = v___y_796_;
goto v___jp_728_;
}
}
else
{
lean_dec(v_val_825_);
lean_dec_ref(v___y_793_);
v___y_729_ = v___y_790_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_802_;
v___y_732_ = v___x_835_;
v___y_733_ = v___y_801_;
v___y_734_ = v___y_794_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_787_;
v___y_737_ = v___y_800_;
v___y_738_ = v___x_834_;
v___y_739_ = v___x_836_;
v___y_740_ = v___y_803_;
v___y_741_ = v___y_796_;
goto v___jp_728_;
}
}
else
{
lean_dec(v_val_825_);
lean_dec_ref(v___y_793_);
v___y_729_ = v___y_790_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_802_;
v___y_732_ = v___x_835_;
v___y_733_ = v___y_801_;
v___y_734_ = v___y_794_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_787_;
v___y_737_ = v___y_800_;
v___y_738_ = v___x_834_;
v___y_739_ = v___x_836_;
v___y_740_ = v___y_803_;
v___y_741_ = v___y_796_;
goto v___jp_728_;
}
}
else
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec(v_val_825_);
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_790_);
v___x_851_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
v___x_852_ = l_Lean_Expr_const___override(v___x_851_, v___y_796_);
v___x_853_ = l_Lean_mkAppB(v___x_852_, v___y_787_, v___y_792_);
v___x_854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v___y_797_);
v___x_855_ = l_Lean_Meta_mkListLit(v___y_794_, v___x_854_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
return v___x_855_;
}
}
}
else
{
lean_object* v___x_856_; 
lean_dec(v_val_825_);
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_787_);
lean_dec(v_kind_718_);
v___x_856_ = l_Lean_Meta_mkAppM(v___x_832_, v___y_791_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = l_Lean_Meta_isExprDefEq(v___y_789_, v_a_857_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; uint8_t v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = lean_unbox(v_a_859_);
lean_dec(v_a_859_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; 
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_861_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
if (lean_obj_tag(v___x_861_) == 0)
{
lean_dec_ref_known(v___x_861_, 1);
v___y_753_ = v___y_790_;
v___y_754_ = v___y_792_;
v___y_755_ = v___x_831_;
v___y_756_ = v___y_800_;
v___y_757_ = v___y_801_;
v___y_758_ = v___y_802_;
v___y_759_ = v___y_803_;
goto v___jp_752_;
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
else
{
lean_dec_ref(v___y_793_);
v___y_753_ = v___y_790_;
v___y_754_ = v___y_792_;
v___y_755_ = v___x_831_;
v___y_756_ = v___y_800_;
v___y_757_ = v___y_801_;
v___y_758_ = v___y_802_;
v___y_759_ = v___y_803_;
goto v___jp_752_;
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
v_a_870_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_858_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_858_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v___y_789_);
return v___x_856_;
}
}
}
else
{
lean_object* v___x_878_; 
lean_dec(v_val_825_);
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_787_);
lean_dec(v_kind_718_);
v___x_878_ = l_Lean_Meta_mkAppM(v___x_829_, v___y_791_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = l_Lean_Meta_isExprDefEq(v___y_789_, v_a_879_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; uint8_t v___x_882_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_880_, 1);
v___x_882_ = lean_unbox(v_a_881_);
lean_dec(v_a_881_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_883_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
if (lean_obj_tag(v___x_883_) == 0)
{
lean_dec_ref_known(v___x_883_, 1);
v___y_765_ = v___y_790_;
v___y_766_ = v___y_792_;
v___y_767_ = v___x_828_;
v___y_768_ = v___y_800_;
v___y_769_ = v___y_801_;
v___y_770_ = v___y_802_;
v___y_771_ = v___y_803_;
goto v___jp_764_;
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
v_a_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
else
{
lean_dec_ref(v___y_793_);
v___y_765_ = v___y_790_;
v___y_766_ = v___y_792_;
v___y_767_ = v___x_828_;
v___y_768_ = v___y_800_;
v___y_769_ = v___y_801_;
v___y_770_ = v___y_802_;
v___y_771_ = v___y_803_;
goto v___jp_764_;
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
v_a_892_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_880_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_880_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
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
else
{
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v___y_789_);
return v___x_878_;
}
}
}
else
{
lean_object* v___x_900_; 
lean_dec(v_val_825_);
lean_dec(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v___y_787_);
lean_dec(v_kind_718_);
v___x_900_ = l_Lean_Meta_isExprDefEq(v___y_789_, v___y_795_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_926_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_926_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_926_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_926_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
uint8_t v___x_905_; 
v___x_905_ = lean_unbox(v_a_901_);
lean_dec(v_a_901_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
lean_del_object(v___x_903_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_906_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_913_ == 0)
{
lean_object* v_unused_914_; 
v_unused_914_ = lean_ctor_get(v___x_906_, 0);
lean_dec(v_unused_914_);
v___x_908_ = v___x_906_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_dec(v___x_906_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___y_792_);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___y_792_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v___y_792_);
v_a_915_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_906_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_906_);
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
else
{
lean_object* v___x_924_; 
lean_dec_ref(v___y_793_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___y_792_);
v___x_924_ = v___x_903_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___y_792_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
v_a_927_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_900_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_900_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
else
{
lean_object* v___x_935_; 
lean_dec(v_val_825_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec_ref(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v_kind_718_);
lean_inc_ref(v___y_794_);
v___x_935_ = l_Lean_Meta_isExprDefEq(v___y_789_, v___y_794_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; uint8_t v___x_937_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = lean_unbox(v_a_936_);
lean_dec(v_a_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
v___x_938_ = lean_apply_8(v___y_793_, lean_box(0), v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, lean_box(0));
if (lean_obj_tag(v___x_938_) == 0)
{
lean_dec_ref_known(v___x_938_, 1);
v___y_777_ = v___y_792_;
v___y_778_ = v___y_794_;
v___y_779_ = v___y_797_;
v___y_780_ = v___y_800_;
v___y_781_ = v___y_801_;
v___y_782_ = v___y_802_;
v___y_783_ = v___y_803_;
goto v___jp_776_;
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec(v___y_797_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_792_);
v_a_939_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_938_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_938_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_dec_ref(v___y_793_);
v___y_777_ = v___y_792_;
v___y_778_ = v___y_794_;
v___y_779_ = v___y_797_;
v___y_780_ = v___y_800_;
v___y_781_ = v___y_801_;
v___y_782_ = v___y_802_;
v___y_783_ = v___y_803_;
goto v___jp_776_;
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec(v___y_797_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_792_);
v_a_947_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_935_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_935_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
}
v___jp_955_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_elemTy_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_963_ = lean_box(0);
lean_inc(v_kind_718_);
v___x_964_ = l_Lean_Expr_const___override(v_kind_718_, v___x_963_);
lean_inc_ref(v_msg_956_);
v_elemTy_965_ = l_Lean_Expr_app___override(v___x_964_, v_msg_956_);
v___x_966_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_967_ = lean_unsigned_to_nat(1u);
v___x_968_ = lean_mk_empty_array_with_capacity(v___x_967_);
lean_inc_ref(v_elemTy_965_);
lean_inc_ref(v___x_968_);
v___x_969_ = lean_array_push(v___x_968_, v_elemTy_965_);
lean_inc_ref(v___x_969_);
v___x_970_ = l_Lean_Meta_mkAppM(v___x_966_, v___x_969_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v___x_974_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v___x_972_ = lean_box(0);
v___x_973_ = 1;
lean_inc(v_t_719_);
v___x_974_ = l_Lean_Elab_Term_elabTerm(v_t_719_, v___x_972_, v___x_973_, v___x_973_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; uint8_t v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = 0;
v___x_977_ = 0;
v___x_978_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_976_, v___x_977_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v___x_979_; 
lean_dec_ref_known(v___x_978_, 1);
lean_inc(v___y_962_);
lean_inc_ref(v___y_961_);
lean_inc(v___y_960_);
lean_inc_ref(v___y_959_);
lean_inc(v_a_975_);
v___x_979_ = lean_infer_type(v_a_975_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_981_; lean_object* v_a_982_; lean_object* v___x_983_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_a_980_, v___y_960_);
v_a_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_a_982_);
lean_dec_ref(v___x_981_);
v___x_983_ = l_Lean_Meta_whnfR(v_a_982_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___f_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc_n(v_a_984_, 2);
lean_dec_ref_known(v___x_983_, 1);
lean_inc(v_kind_718_);
v___f_985_ = lean_alloc_closure((void*)(l_Lasm_UI_Syntax_elabSplice___lam__0___boxed), 11, 3);
lean_closure_set(v___f_985_, 0, v_a_984_);
lean_closure_set(v___f_985_, 1, v_t_719_);
lean_closure_set(v___f_985_, 2, v_kind_718_);
v___x_986_ = l_Lean_Expr_getAppFn(v_a_984_);
v___x_987_ = l_Lean_Expr_isMVar(v___x_986_);
lean_dec_ref(v___x_986_);
if (v___x_987_ == 0)
{
v___y_787_ = v_msg_956_;
v___y_788_ = v___x_966_;
v___y_789_ = v_a_984_;
v___y_790_ = v___x_968_;
v___y_791_ = v___x_969_;
v___y_792_ = v_a_975_;
v___y_793_ = v___f_985_;
v___y_794_ = v_elemTy_965_;
v___y_795_ = v_a_971_;
v___y_796_ = v___x_963_;
v___y_797_ = v___x_963_;
v___y_798_ = v___y_957_;
v___y_799_ = v___y_958_;
v___y_800_ = v___y_959_;
v___y_801_ = v___y_960_;
v___y_802_ = v___y_961_;
v___y_803_ = v___y_962_;
goto v___jp_786_;
}
else
{
lean_object* v___x_988_; 
v___x_988_ = l_Lean_Elab_Term_tryPostpone(v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_dec_ref_known(v___x_988_, 1);
v___y_787_ = v_msg_956_;
v___y_788_ = v___x_966_;
v___y_789_ = v_a_984_;
v___y_790_ = v___x_968_;
v___y_791_ = v___x_969_;
v___y_792_ = v_a_975_;
v___y_793_ = v___f_985_;
v___y_794_ = v_elemTy_965_;
v___y_795_ = v_a_971_;
v___y_796_ = v___x_963_;
v___y_797_ = v___x_963_;
v___y_798_ = v___y_957_;
v___y_799_ = v___y_958_;
v___y_800_ = v___y_959_;
v___y_801_ = v___y_960_;
v___y_802_ = v___y_961_;
v___y_803_ = v___y_962_;
goto v___jp_786_;
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec_ref(v___f_985_);
lean_dec(v_a_984_);
lean_dec(v_a_975_);
lean_dec(v_a_971_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_kind_718_);
v_a_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
else
{
lean_dec(v_a_975_);
lean_dec(v_a_971_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_983_;
}
}
else
{
lean_dec(v_a_975_);
lean_dec(v_a_971_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_979_;
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec(v_a_975_);
lean_dec(v_a_971_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
v_a_997_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_978_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_978_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
else
{
lean_dec(v_a_971_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_974_;
}
}
else
{
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_elemTy_965_);
lean_dec_ref(v_msg_956_);
lean_dec(v_t_719_);
lean_dec(v_kind_718_);
return v___x_970_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___boxed(lean_object* v_kind_1032_, lean_object* v_t_1033_, lean_object* v_expected_x3f_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lasm_UI_Syntax_elabSplice(v_kind_1032_, v_t_1033_, v_expected_x3f_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren(lean_object* v_stx_1043_, lean_object* v_expected_x3f_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1052_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_1053_ = lean_unsigned_to_nat(1u);
v___x_1054_ = l_Lean_Syntax_getArg(v_stx_1043_, v___x_1053_);
v___x_1055_ = l_Lasm_UI_Syntax_elabSplice(v___x_1052_, v___x_1054_, v_expected_x3f_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren___boxed(lean_object* v_stx_1056_, lean_object* v_expected_x3f_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lasm_UI_Syntax_elabChildren(v_stx_1056_, v_expected_x3f_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_a_1063_);
lean_dec_ref(v_a_1062_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_stx_1056_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs(lean_object* v_stx_1071_, lean_object* v_expected_x3f_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1080_ = ((lean_object*)(l_Lasm_UI_Syntax_elabAttrs___closed__1));
v___x_1081_ = lean_unsigned_to_nat(1u);
v___x_1082_ = l_Lean_Syntax_getArg(v_stx_1071_, v___x_1081_);
v___x_1083_ = l_Lasm_UI_Syntax_elabSplice(v___x_1080_, v___x_1082_, v_expected_x3f_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs___boxed(lean_object* v_stx_1084_, lean_object* v_expected_x3f_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lasm_UI_Syntax_elabAttrs(v_stx_1084_, v_expected_x3f_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_stx_1084_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf(lean_object* v_stx_1094_){
_start:
{
switch(lean_obj_tag(v_stx_1094_))
{
case 1:
{
lean_object* v_args_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v_args_1095_ = lean_ctor_get(v_stx_1094_, 2);
v___x_1096_ = lean_array_get_size(v_args_1095_);
v___x_1097_ = lean_unsigned_to_nat(1u);
v___x_1098_ = lean_nat_dec_eq(v___x_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_Syntax_getAtomVal(v_stx_1094_);
return v___x_1099_;
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = lean_array_fget_borrowed(v_args_1095_, v___x_1100_);
if (lean_obj_tag(v___x_1101_) == 2)
{
lean_object* v_val_1102_; 
v_val_1102_ = lean_ctor_get(v___x_1101_, 1);
lean_inc_ref(v_val_1102_);
return v_val_1102_;
}
else
{
lean_object* v___x_1103_; 
v___x_1103_ = l_Lean_Syntax_getAtomVal(v_stx_1094_);
return v___x_1103_;
}
}
}
case 2:
{
lean_object* v_val_1104_; 
v_val_1104_ = lean_ctor_get(v_stx_1094_, 1);
lean_inc_ref(v_val_1104_);
return v_val_1104_;
}
default: 
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lean_Syntax_getAtomVal(v_stx_1094_);
return v___x_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf___boxed(lean_object* v_stx_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lasm_UI_Syntax_nameOf(v_stx_1106_);
lean_dec(v_stx_1106_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(lean_object* v___y_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
if (lean_obj_tag(v_a_1109_) == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_array_to_list(v_a_1110_);
return v___x_1111_;
}
else
{
lean_object* v_head_1112_; lean_object* v_tail_1113_; lean_object* v___y_1115_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; lean_object* v___y_1123_; 
v_head_1112_ = lean_ctor_get(v_a_1109_, 0);
lean_inc(v_head_1112_);
v_tail_1113_ = lean_ctor_get(v_a_1109_, 1);
lean_inc(v_tail_1113_);
lean_dec_ref_known(v_a_1109_, 2);
v___x_1118_ = lean_array_get_size(v_a_1110_);
v___x_1119_ = lean_unsigned_to_nat(1u);
v___x_1120_ = l_List_lengthTR___redArg(v___y_1108_);
v___x_1121_ = lean_nat_dec_lt(v___x_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
v___y_1123_ = v_head_1112_;
goto v___jp_1122_;
}
else
{
lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = lean_unsigned_to_nat(0u);
v___x_1133_ = lean_nat_dec_lt(v___x_1132_, v___x_1118_);
if (v___x_1133_ == 0)
{
v___y_1123_ = v_head_1112_;
goto v___jp_1122_;
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1134_ = lean_string_utf8_byte_size(v_head_1112_);
lean_inc(v_head_1112_);
v___x_1135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1135_, 0, v_head_1112_);
lean_ctor_set(v___x_1135_, 1, v___x_1132_);
lean_ctor_set(v___x_1135_, 2, v___x_1134_);
v___x_1136_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v___x_1135_, v___x_1132_);
lean_dec_ref_known(v___x_1135_, 3);
v___x_1137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1137_, 0, v_head_1112_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
lean_ctor_set(v___x_1137_, 2, v___x_1134_);
v___x_1138_ = l_String_Slice_toString(v___x_1137_);
lean_dec_ref_known(v___x_1137_, 3);
v___y_1123_ = v___x_1138_;
goto v___jp_1122_;
}
}
v___jp_1114_:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_array_push(v_a_1110_, v___y_1115_);
v_a_1109_ = v_tail_1113_;
v_a_1110_ = v___x_1116_;
goto _start;
}
v___jp_1122_:
{
if (v___x_1121_ == 0)
{
lean_dec(v___x_1120_);
v___y_1115_ = v___y_1123_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = lean_nat_add(v___x_1118_, v___x_1119_);
v___x_1125_ = lean_nat_dec_lt(v___x_1124_, v___x_1120_);
lean_dec(v___x_1120_);
lean_dec(v___x_1124_);
if (v___x_1125_ == 0)
{
v___y_1115_ = v___y_1123_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_string_utf8_byte_size(v___y_1123_);
lean_inc_ref(v___y_1123_);
v___x_1128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1128_, 0, v___y_1123_);
lean_ctor_set(v___x_1128_, 1, v___x_1126_);
lean_ctor_set(v___x_1128_, 2, v___x_1127_);
v___x_1129_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v___x_1128_, v___x_1127_);
lean_dec_ref_known(v___x_1128_, 3);
v___x_1130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1130_, 0, v___y_1123_);
lean_ctor_set(v___x_1130_, 1, v___x_1126_);
lean_ctor_set(v___x_1130_, 2, v___x_1129_);
v___x_1131_ = l_String_Slice_toString(v___x_1130_);
lean_dec_ref_known(v___x_1130_, 3);
v___y_1115_ = v___x_1131_;
goto v___jp_1114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1___boxed(lean_object* v___y_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___y_1139_, v_a_1140_, v_a_1141_);
lean_dec(v___y_1139_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(lean_object* v___x_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_){
_start:
{
if (lean_obj_tag(v_a_1144_) == 0)
{
lean_object* v___x_1146_; 
v___x_1146_ = l_List_reverse___redArg(v_a_1145_);
return v___x_1146_;
}
else
{
lean_object* v_head_1147_; lean_object* v_tail_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1163_; 
v_head_1147_ = lean_ctor_get(v_a_1144_, 0);
v_tail_1148_ = lean_ctor_get(v_a_1144_, 1);
v_isSharedCheck_1163_ = !lean_is_exclusive(v_a_1144_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1150_ = v_a_1144_;
v_isShared_1151_ = v_isSharedCheck_1163_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_tail_1148_);
lean_inc(v_head_1147_);
lean_dec(v_a_1144_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1163_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1152_ = lean_string_utf8_byte_size(v_head_1147_);
v___x_1153_ = lean_unsigned_to_nat(0u);
v___x_1154_ = lean_nat_dec_eq(v___x_1152_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1155_ = lean_unsigned_to_nat(1u);
v___x_1156_ = lean_nat_dec_lt(v___x_1155_, v___x_1143_);
if (v___x_1156_ == 0)
{
lean_del_object(v___x_1150_);
lean_dec(v_head_1147_);
v_a_1144_ = v_tail_1148_;
goto _start;
}
else
{
lean_object* v___x_1159_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v_a_1145_);
v___x_1159_ = v___x_1150_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_head_1147_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_a_1145_);
v___x_1159_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v_a_1144_ = v_tail_1148_;
v_a_1145_ = v___x_1159_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_1150_);
lean_dec(v_head_1147_);
v_a_1144_ = v_tail_1148_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2___boxed(lean_object* v___x_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1164_, v_a_1165_, v_a_1166_);
lean_dec(v___x_1164_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(lean_object* v___x_1168_, lean_object* v_joined_1169_, lean_object* v_a_1170_, lean_object* v_b_1171_){
_start:
{
uint8_t v_decide_1172_; 
v_decide_1172_ = lean_nat_dec_eq(v_a_1170_, v___x_1168_);
if (v_decide_1172_ == 0)
{
lean_object* v_fst_1173_; lean_object* v_snd_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1207_; 
v_fst_1173_ = lean_ctor_get(v_b_1171_, 0);
v_snd_1174_ = lean_ctor_get(v_b_1171_, 1);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_b_1171_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1176_ = v_b_1171_;
v_isShared_1177_ = v_isSharedCheck_1207_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_snd_1174_);
lean_inc(v_fst_1173_);
lean_dec(v_b_1171_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1207_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
uint32_t v___x_1178_; lean_object* v___x_1179_; uint32_t v___x_1195_; uint8_t v___x_1196_; 
v___x_1178_ = lean_string_utf8_get_fast(v_joined_1169_, v_a_1170_);
v___x_1179_ = lean_string_utf8_next_fast(v_joined_1169_, v_a_1170_);
lean_dec(v_a_1170_);
v___x_1195_ = 32;
v___x_1196_ = lean_uint32_dec_eq(v___x_1178_, v___x_1195_);
if (v___x_1196_ == 0)
{
uint32_t v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = 9;
v___x_1198_ = lean_uint32_dec_eq(v___x_1178_, v___x_1197_);
if (v___x_1198_ == 0)
{
uint32_t v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = 13;
v___x_1200_ = lean_uint32_dec_eq(v___x_1178_, v___x_1199_);
if (v___x_1200_ == 0)
{
uint32_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 10;
v___x_1202_ = lean_uint32_dec_eq(v___x_1178_, v___x_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_del_object(v___x_1176_);
lean_dec(v_snd_1174_);
v___x_1203_ = lean_string_push(v_fst_1173_, v___x_1178_);
v___x_1204_ = lean_box(v___x_1202_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1203_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v_a_1170_ = v___x_1179_;
v_b_1171_ = v___x_1205_;
goto _start;
}
else
{
goto v___jp_1180_;
}
}
else
{
goto v___jp_1180_;
}
}
else
{
goto v___jp_1180_;
}
}
else
{
goto v___jp_1180_;
}
v___jp_1180_:
{
uint8_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 1;
v___x_1182_ = lean_unbox(v_snd_1174_);
lean_dec(v_snd_1174_);
if (v___x_1182_ == 0)
{
uint32_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1183_ = 32;
v___x_1184_ = lean_string_push(v_fst_1173_, v___x_1183_);
v___x_1185_ = lean_box(v___x_1181_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1185_);
lean_ctor_set(v___x_1176_, 0, v___x_1184_);
v___x_1187_ = v___x_1176_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
v_a_1170_ = v___x_1179_;
v_b_1171_ = v___x_1187_;
goto _start;
}
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1192_; 
v___x_1190_ = lean_box(v___x_1181_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1190_);
v___x_1192_ = v___x_1176_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_fst_1173_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
v_a_1170_ = v___x_1179_;
v_b_1171_ = v___x_1192_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_a_1170_);
return v_b_1171_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg___boxed(lean_object* v___x_1208_, lean_object* v_joined_1209_, lean_object* v_a_1210_, lean_object* v_b_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1208_, v_joined_1209_, v_a_1210_, v_b_1211_);
lean_dec_ref(v_joined_1209_);
lean_dec(v___x_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace(lean_object* v_s_1221_){
_start:
{
lean_object* v___y_1223_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v_lines_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1231_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = lean_box(0);
v___x_1234_ = l_String_splitOnAux(v_s_1221_, v___x_1231_, v___x_1232_, v___x_1232_, v___x_1232_, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__3));
lean_inc(v___x_1234_);
v_lines_1236_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___x_1234_, v___x_1234_, v___x_1235_);
v___x_1237_ = lean_unsigned_to_nat(1u);
v___x_1238_ = l_List_lengthTR___redArg(v___x_1234_);
lean_dec(v___x_1234_);
v___x_1239_ = lean_nat_dec_lt(v___x_1237_, v___x_1238_);
if (v___x_1239_ == 0)
{
lean_dec(v___x_1238_);
v___y_1223_ = v_lines_1236_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1240_; 
v___x_1240_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1238_, v_lines_1236_, v___x_1233_);
lean_dec(v___x_1238_);
v___y_1223_ = v___x_1240_;
goto v___jp_1222_;
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v_joined_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v_fst_1230_; 
v___x_1224_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v_joined_1225_ = l_String_intercalate(v___x_1224_, v___y_1223_);
v___x_1226_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__2));
v___x_1227_ = lean_string_utf8_byte_size(v_joined_1225_);
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1227_, v_joined_1225_, v___x_1228_, v___x_1226_);
lean_dec_ref(v_joined_1225_);
v_fst_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_fst_1230_);
lean_dec_ref(v___x_1229_);
return v_fst_1230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace___boxed(lean_object* v_s_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lasm_UI_Syntax_jsxWhitespace(v_s_1241_);
lean_dec_ref(v_s_1241_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(lean_object* v___x_1243_, lean_object* v___x_1244_, lean_object* v_joined_1245_, lean_object* v_inst_1246_, lean_object* v_R_1247_, lean_object* v_a_1248_, lean_object* v_b_1249_, lean_object* v_c_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1244_, v_joined_1245_, v_a_1248_, v_b_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___boxed(lean_object* v___x_1252_, lean_object* v___x_1253_, lean_object* v_joined_1254_, lean_object* v_inst_1255_, lean_object* v_R_1256_, lean_object* v_a_1257_, lean_object* v_b_1258_, lean_object* v_c_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(v___x_1252_, v___x_1253_, v_joined_1254_, v_inst_1255_, v_R_1256_, v_a_1257_, v_b_1258_, v_c_1259_);
lean_dec_ref(v_joined_1254_);
lean_dec(v___x_1253_);
lean_dec_ref(v___x_1252_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(lean_object* v___x_1261_, lean_object* v___x_1262_, lean_object* v_a_1263_, lean_object* v_b_1264_){
_start:
{
uint8_t v_decide_1265_; 
v_decide_1265_ = lean_nat_dec_eq(v_a_1263_, v___x_1261_);
if (v_decide_1265_ == 0)
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_string_utf8_next_fast(v___x_1262_, v_a_1263_);
if (lean_obj_tag(v_b_1264_) == 0)
{
lean_dec(v_a_1263_);
v_a_1263_ = v___x_1266_;
goto _start;
}
else
{
lean_object* v_val_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1323_; 
v_val_1271_ = lean_ctor_get(v_b_1264_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_b_1264_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1273_ = v_b_1264_;
v_isShared_1274_ = v_isSharedCheck_1323_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_val_1271_);
lean_dec(v_b_1264_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1323_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
uint32_t v___y_1276_; uint32_t v___y_1277_; uint32_t v___x_1292_; uint32_t v___y_1294_; uint32_t v___y_1295_; uint32_t v___x_1311_; uint8_t v___x_1312_; 
v___x_1292_ = lean_string_utf8_get_fast(v___x_1262_, v_a_1263_);
lean_dec(v_a_1263_);
v___x_1311_ = 48;
v___x_1312_ = lean_uint32_dec_le(v___x_1311_, v___x_1292_);
if (v___x_1312_ == 0)
{
goto v___jp_1303_;
}
else
{
uint32_t v___x_1313_; uint8_t v___x_1314_; 
v___x_1313_ = 57;
v___x_1314_ = lean_uint32_dec_le(v___x_1292_, v___x_1313_);
if (v___x_1314_ == 0)
{
goto v___jp_1303_;
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_del_object(v___x_1273_);
v___x_1315_ = lean_unsigned_to_nat(16u);
v___x_1316_ = lean_nat_mul(v_val_1271_, v___x_1315_);
lean_dec(v_val_1271_);
v___x_1317_ = lean_uint32_to_nat(v___x_1292_);
v___x_1318_ = lean_unsigned_to_nat(48u);
v___x_1319_ = lean_nat_sub(v___x_1317_, v___x_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_nat_add(v___x_1316_, v___x_1319_);
lean_dec(v___x_1319_);
lean_dec(v___x_1316_);
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
v_a_1263_ = v___x_1266_;
v_b_1264_ = v___x_1321_;
goto _start;
}
}
v___jp_1275_:
{
uint32_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = 102;
v___x_1279_ = lean_uint32_dec_le(v___y_1277_, v___x_1278_);
if (v___x_1279_ == 0)
{
lean_del_object(v___x_1273_);
lean_dec(v_val_1271_);
goto v___jp_1267_;
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1280_ = lean_unsigned_to_nat(16u);
v___x_1281_ = lean_nat_mul(v_val_1271_, v___x_1280_);
lean_dec(v_val_1271_);
v___x_1282_ = lean_uint32_to_nat(v___y_1276_);
v___x_1283_ = lean_unsigned_to_nat(97u);
v___x_1284_ = lean_nat_sub(v___x_1282_, v___x_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_unsigned_to_nat(10u);
v___x_1286_ = lean_nat_add(v___x_1284_, v___x_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_nat_add(v___x_1281_, v___x_1286_);
lean_dec(v___x_1286_);
lean_dec(v___x_1281_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v___x_1287_);
v___x_1289_ = v___x_1273_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1287_);
v___x_1289_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
v_a_1263_ = v___x_1266_;
v_b_1264_ = v___x_1289_;
goto _start;
}
}
}
v___jp_1293_:
{
uint8_t v___x_1296_; 
v___x_1296_ = lean_uint32_dec_le(v___y_1294_, v___y_1295_);
if (v___x_1296_ == 0)
{
lean_del_object(v___x_1273_);
lean_dec(v_val_1271_);
goto v___jp_1267_;
}
else
{
uint32_t v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = 65;
v___x_1298_ = lean_uint32_dec_le(v___x_1297_, v___x_1292_);
if (v___x_1298_ == 0)
{
v___y_1276_ = v___y_1295_;
v___y_1277_ = v___x_1292_;
goto v___jp_1275_;
}
else
{
uint32_t v___x_1299_; uint8_t v___x_1300_; 
v___x_1299_ = 90;
v___x_1300_ = lean_uint32_dec_le(v___x_1292_, v___x_1299_);
if (v___x_1300_ == 0)
{
v___y_1276_ = v___y_1295_;
v___y_1277_ = v___x_1292_;
goto v___jp_1275_;
}
else
{
uint32_t v___x_1301_; uint32_t v___x_1302_; 
v___x_1301_ = 32;
v___x_1302_ = lean_uint32_add(v___x_1292_, v___x_1301_);
v___y_1276_ = v___y_1295_;
v___y_1277_ = v___x_1302_;
goto v___jp_1275_;
}
}
}
}
v___jp_1303_:
{
uint32_t v___x_1304_; uint32_t v___x_1305_; uint8_t v___x_1306_; 
v___x_1304_ = 97;
v___x_1305_ = 65;
v___x_1306_ = lean_uint32_dec_le(v___x_1305_, v___x_1292_);
if (v___x_1306_ == 0)
{
v___y_1294_ = v___x_1304_;
v___y_1295_ = v___x_1292_;
goto v___jp_1293_;
}
else
{
uint32_t v___x_1307_; uint8_t v___x_1308_; 
v___x_1307_ = 90;
v___x_1308_ = lean_uint32_dec_le(v___x_1292_, v___x_1307_);
if (v___x_1308_ == 0)
{
v___y_1294_ = v___x_1304_;
v___y_1295_ = v___x_1292_;
goto v___jp_1293_;
}
else
{
uint32_t v___x_1309_; uint32_t v___x_1310_; 
v___x_1309_ = 32;
v___x_1310_ = lean_uint32_add(v___x_1292_, v___x_1309_);
v___y_1294_ = v___x_1304_;
v___y_1295_ = v___x_1310_;
goto v___jp_1293_;
}
}
}
}
}
v___jp_1267_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_box(0);
v_a_1263_ = v___x_1266_;
v_b_1264_ = v___x_1268_;
goto _start;
}
}
else
{
lean_dec(v_a_1263_);
return v_b_1264_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg___boxed(lean_object* v___x_1324_, lean_object* v___x_1325_, lean_object* v_a_1326_, lean_object* v_b_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1324_, v___x_1325_, v_a_1326_, v_b_1327_);
lean_dec_ref(v___x_1325_);
lean_dec(v___x_1324_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(lean_object* v_as_x27_1358_, lean_object* v_b_1359_){
_start:
{
if (lean_obj_tag(v_as_x27_1358_) == 0)
{
return v_b_1359_;
}
else
{
lean_object* v_head_1360_; lean_object* v_tail_1361_; lean_object* v___x_1362_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_head_1360_ = lean_ctor_get(v_as_x27_1358_, 0);
v_tail_1361_ = lean_ctor_get(v_as_x27_1358_, 1);
v___x_1362_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1371_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1));
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = lean_box(0);
v___x_1374_ = l_String_splitOnAux(v_head_1360_, v___x_1371_, v___x_1372_, v___x_1372_, v___x_1372_, v___x_1373_);
if (lean_obj_tag(v___x_1374_) == 1)
{
lean_object* v_tail_1375_; 
v_tail_1375_ = lean_ctor_get(v___x_1374_, 1);
lean_inc(v_tail_1375_);
if (lean_obj_tag(v_tail_1375_) == 1)
{
lean_object* v_head_1376_; lean_object* v___x_1377_; lean_object* v_val_1379_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v_head_1376_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_head_1376_);
lean_dec_ref_known(v___x_1374_, 2);
v___x_1377_ = l_String_intercalate(v___x_1371_, v_tail_1375_);
v___x_1383_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2));
v___x_1384_ = lean_string_dec_eq(v_head_1376_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3));
v___x_1386_ = lean_string_dec_eq(v_head_1376_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4));
v___x_1388_ = lean_string_dec_eq(v_head_1376_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__3));
v___x_1390_ = lean_string_dec_eq(v_head_1376_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5));
v___x_1392_ = lean_string_dec_eq(v_head_1376_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6));
v___x_1394_ = lean_string_dec_eq(v_head_1376_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7));
v___x_1396_ = lean_string_dec_eq(v_head_1376_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8));
v___x_1398_ = lean_string_dec_eq(v_head_1376_, v___x_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; uint8_t v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9));
v___x_1400_ = lean_string_dec_eq(v_head_1376_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; uint8_t v___x_1402_; 
v___x_1401_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10));
v___x_1402_ = lean_string_dec_eq(v_head_1376_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11));
v___x_1404_ = lean_string_dec_eq(v_head_1376_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12));
v___x_1406_ = lean_string_dec_eq(v_head_1376_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13));
v___x_1408_ = lean_string_dec_eq(v_head_1376_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1409_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1445_ = lean_string_utf8_byte_size(v_head_1376_);
v___x_1446_ = lean_unsigned_to_nat(2u);
v___x_1447_ = lean_nat_dec_le(v___x_1446_, v___x_1445_);
if (v___x_1447_ == 0)
{
goto v___jp_1439_;
}
else
{
lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1448_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17));
v___x_1449_ = lean_string_memcmp(v_head_1376_, v___x_1448_, v___x_1372_, v___x_1372_, v___x_1446_);
if (v___x_1449_ == 0)
{
goto v___jp_1439_;
}
else
{
goto v___jp_1426_;
}
}
v___jp_1410_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v___x_1411_ = lean_string_utf8_byte_size(v_head_1376_);
v___x_1412_ = lean_unsigned_to_nat(1u);
v___x_1413_ = lean_nat_dec_le(v___x_1412_, v___x_1411_);
if (v___x_1413_ == 0)
{
lean_dec_ref(v___x_1377_);
lean_dec(v_head_1376_);
goto v___jp_1367_;
}
else
{
lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1414_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14));
v___x_1415_ = lean_string_memcmp(v_head_1376_, v___x_1414_, v___x_1372_, v___x_1372_, v___x_1412_);
if (v___x_1415_ == 0)
{
lean_dec_ref(v___x_1377_);
lean_dec(v_head_1376_);
goto v___jp_1367_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
lean_inc(v_head_1376_);
v___x_1416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1416_, 0, v_head_1376_);
lean_ctor_set(v___x_1416_, 1, v___x_1372_);
lean_ctor_set(v___x_1416_, 2, v___x_1411_);
v___x_1417_ = l_String_Slice_Pos_nextn(v___x_1416_, v___x_1372_, v___x_1412_);
lean_dec_ref_known(v___x_1416_, 3);
v___x_1418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1418_, 0, v_head_1376_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
lean_ctor_set(v___x_1418_, 2, v___x_1411_);
v___x_1419_ = l_String_Slice_toString(v___x_1418_);
lean_dec_ref_known(v___x_1418_, 3);
v___x_1420_ = lean_string_utf8_byte_size(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1372_);
lean_ctor_set(v___x_1421_, 2, v___x_1420_);
v___x_1422_ = l_String_Slice_toNat_x3f(v___x_1421_);
lean_dec_ref_known(v___x_1421_, 3);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_dec_ref(v___x_1377_);
goto v___jp_1367_;
}
else
{
lean_object* v_val_1423_; uint32_t v___x_1424_; lean_object* v___x_1425_; 
v_val_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_val_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = l_Char_ofNat(v_val_1423_);
lean_dec(v_val_1423_);
v___x_1425_ = lean_string_push(v___x_1409_, v___x_1424_);
v_val_1379_ = v___x_1425_;
goto v___jp_1378_;
}
}
}
}
v___jp_1426_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1427_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15));
v___x_1428_ = lean_unsigned_to_nat(2u);
v___x_1429_ = lean_string_utf8_byte_size(v_head_1376_);
lean_inc(v_head_1376_);
v___x_1430_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1430_, 0, v_head_1376_);
lean_ctor_set(v___x_1430_, 1, v___x_1372_);
lean_ctor_set(v___x_1430_, 2, v___x_1429_);
v___x_1431_ = l_String_Slice_Pos_nextn(v___x_1430_, v___x_1372_, v___x_1428_);
lean_dec_ref_known(v___x_1430_, 3);
v___x_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1432_, 0, v_head_1376_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
lean_ctor_set(v___x_1432_, 2, v___x_1429_);
v___x_1433_ = l_String_Slice_toString(v___x_1432_);
lean_dec_ref_known(v___x_1432_, 3);
v___x_1434_ = lean_string_utf8_byte_size(v___x_1433_);
v___x_1435_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1434_, v___x_1433_, v___x_1372_, v___x_1427_);
lean_dec_ref(v___x_1433_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_dec_ref(v___x_1377_);
goto v___jp_1367_;
}
else
{
lean_object* v_val_1436_; uint32_t v___x_1437_; lean_object* v___x_1438_; 
v_val_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_val_1436_);
lean_dec_ref_known(v___x_1435_, 1);
v___x_1437_ = l_Char_ofNat(v_val_1436_);
lean_dec(v_val_1436_);
v___x_1438_ = lean_string_push(v___x_1409_, v___x_1437_);
v_val_1379_ = v___x_1438_;
goto v___jp_1378_;
}
}
v___jp_1439_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1440_ = lean_string_utf8_byte_size(v_head_1376_);
v___x_1441_ = lean_unsigned_to_nat(2u);
v___x_1442_ = lean_nat_dec_le(v___x_1441_, v___x_1440_);
if (v___x_1442_ == 0)
{
goto v___jp_1410_;
}
else
{
lean_object* v___x_1443_; uint8_t v___x_1444_; 
v___x_1443_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16));
v___x_1444_ = lean_string_memcmp(v_head_1376_, v___x_1443_, v___x_1372_, v___x_1372_, v___x_1441_);
if (v___x_1444_ == 0)
{
goto v___jp_1410_;
}
else
{
goto v___jp_1426_;
}
}
}
}
else
{
lean_object* v___x_1450_; 
lean_dec(v_head_1376_);
v___x_1450_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18));
v_val_1379_ = v___x_1450_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1451_; 
lean_dec(v_head_1376_);
v___x_1451_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19));
v_val_1379_ = v___x_1451_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1452_; 
lean_dec(v_head_1376_);
v___x_1452_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20));
v_val_1379_ = v___x_1452_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1453_; 
lean_dec(v_head_1376_);
v___x_1453_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21));
v_val_1379_ = v___x_1453_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1454_; 
lean_dec(v_head_1376_);
v___x_1454_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22));
v_val_1379_ = v___x_1454_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1455_; 
lean_dec(v_head_1376_);
v___x_1455_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23));
v_val_1379_ = v___x_1455_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1456_; 
lean_dec(v_head_1376_);
v___x_1456_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24));
v_val_1379_ = v___x_1456_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1457_; 
lean_dec(v_head_1376_);
v___x_1457_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25));
v_val_1379_ = v___x_1457_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1458_; 
lean_dec(v_head_1376_);
v___x_1458_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26));
v_val_1379_ = v___x_1458_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1459_; 
lean_dec(v_head_1376_);
v___x_1459_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27));
v_val_1379_ = v___x_1459_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1460_; 
lean_dec(v_head_1376_);
v___x_1460_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v_val_1379_ = v___x_1460_;
goto v___jp_1378_;
}
}
else
{
lean_object* v___x_1461_; 
lean_dec(v_head_1376_);
v___x_1461_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v_val_1379_ = v___x_1461_;
goto v___jp_1378_;
}
}
else
{
lean_dec(v_head_1376_);
v_val_1379_ = v___x_1362_;
goto v___jp_1378_;
}
v___jp_1378_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_string_append(v_b_1359_, v_val_1379_);
lean_dec_ref(v_val_1379_);
v___x_1381_ = lean_string_append(v___x_1380_, v___x_1377_);
lean_dec_ref(v___x_1377_);
v_as_x27_1358_ = v_tail_1361_;
v_b_1359_ = v___x_1381_;
goto _start;
}
}
else
{
lean_dec(v_tail_1375_);
lean_dec_ref_known(v___x_1374_, 2);
goto v___jp_1363_;
}
}
else
{
lean_dec(v___x_1374_);
goto v___jp_1363_;
}
v___jp_1363_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_string_append(v_b_1359_, v___x_1362_);
v___x_1365_ = lean_string_append(v___x_1364_, v_head_1360_);
v_as_x27_1358_ = v_tail_1361_;
v_b_1359_ = v___x_1365_;
goto _start;
}
v___jp_1367_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_string_append(v_b_1359_, v___x_1362_);
v___x_1369_ = lean_string_append(v___x_1368_, v_head_1360_);
v_as_x27_1358_ = v_tail_1361_;
v_b_1359_ = v___x_1369_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___boxed(lean_object* v_as_x27_1462_, lean_object* v_b_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1462_, v_b_1463_);
lean_dec(v_as_x27_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(lean_object* v_s_1465_, lean_object* v_a_1466_, uint8_t v_b_1467_){
_start:
{
lean_object* v_str_1468_; lean_object* v_startInclusive_1469_; lean_object* v_endExclusive_1470_; lean_object* v___x_1471_; uint8_t v_decide_1472_; 
v_str_1468_ = lean_ctor_get(v_s_1465_, 0);
v_startInclusive_1469_ = lean_ctor_get(v_s_1465_, 1);
v_endExclusive_1470_ = lean_ctor_get(v_s_1465_, 2);
v___x_1471_ = lean_nat_sub(v_endExclusive_1470_, v_startInclusive_1469_);
v_decide_1472_ = lean_nat_dec_eq(v_a_1466_, v___x_1471_);
lean_dec(v___x_1471_);
if (v_decide_1472_ == 0)
{
lean_object* v___x_1473_; uint32_t v___x_1474_; uint32_t v___x_1475_; uint8_t v___x_1476_; 
v___x_1473_ = lean_nat_add(v_startInclusive_1469_, v_a_1466_);
lean_dec(v_a_1466_);
v___x_1474_ = lean_string_utf8_get_fast(v_str_1468_, v___x_1473_);
v___x_1475_ = 38;
v___x_1476_ = lean_uint32_dec_eq(v___x_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_string_utf8_next_fast(v_str_1468_, v___x_1473_);
lean_dec(v___x_1473_);
v___x_1478_ = lean_nat_sub(v___x_1477_, v_startInclusive_1469_);
v_a_1466_ = v___x_1478_;
v_b_1467_ = v___x_1476_;
goto _start;
}
else
{
lean_dec(v___x_1473_);
return v___x_1476_;
}
}
else
{
lean_dec(v_a_1466_);
return v_b_1467_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg___boxed(lean_object* v_s_1480_, lean_object* v_a_1481_, lean_object* v_b_1482_){
_start:
{
uint8_t v_b_boxed_1483_; uint8_t v_res_1484_; lean_object* v_r_1485_; 
v_b_boxed_1483_ = lean_unbox(v_b_1482_);
v_res_1484_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1480_, v_a_1481_, v_b_boxed_1483_);
lean_dec_ref(v_s_1480_);
v_r_1485_ = lean_box(v_res_1484_);
return v_r_1485_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(lean_object* v_s_1486_){
_start:
{
lean_object* v_searcher_1487_; uint8_t v___x_1488_; uint8_t v___x_1489_; 
v_searcher_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = 0;
v___x_1489_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1486_, v_searcher_1487_, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0___boxed(lean_object* v_s_1490_){
_start:
{
uint8_t v_res_1491_; lean_object* v_r_1492_; 
v_res_1491_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v_s_1490_);
lean_dec_ref(v_s_1490_);
v_r_1492_ = lean_box(v_res_1491_);
return v_r_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_decodeEntities(lean_object* v_s_1493_){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; uint8_t v___x_1497_; 
v___x_1494_ = lean_unsigned_to_nat(0u);
v___x_1495_ = lean_string_utf8_byte_size(v_s_1493_);
lean_inc_ref(v_s_1493_);
v___x_1496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1496_, 0, v_s_1493_);
lean_ctor_set(v___x_1496_, 1, v___x_1494_);
lean_ctor_set(v___x_1496_, 2, v___x_1495_);
v___x_1497_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v___x_1496_);
lean_dec_ref_known(v___x_1496_, 3);
if (v___x_1497_ == 0)
{
return v_s_1493_;
}
else
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v_out_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1498_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1499_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1500_ = lean_box(0);
v___x_1501_ = l_String_splitOnAux(v_s_1493_, v___x_1499_, v___x_1494_, v___x_1494_, v___x_1494_, v___x_1500_);
lean_dec_ref(v_s_1493_);
v_out_1502_ = l_List_head_x21___redArg(v___x_1498_, v___x_1501_);
v___x_1503_ = l_List_tail_x21___redArg(v___x_1501_);
lean_dec(v___x_1501_);
v___x_1504_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v___x_1503_, v_out_1502_);
lean_dec(v___x_1503_);
return v___x_1504_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(lean_object* v___x_1505_, lean_object* v___x_1506_, lean_object* v___x_1507_, lean_object* v_inst_1508_, lean_object* v_R_1509_, lean_object* v_a_1510_, lean_object* v_b_1511_, lean_object* v_c_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1506_, v___x_1507_, v_a_1510_, v_b_1511_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___boxed(lean_object* v___x_1514_, lean_object* v___x_1515_, lean_object* v___x_1516_, lean_object* v_inst_1517_, lean_object* v_R_1518_, lean_object* v_a_1519_, lean_object* v_b_1520_, lean_object* v_c_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(v___x_1514_, v___x_1515_, v___x_1516_, v_inst_1517_, v_R_1518_, v_a_1519_, v_b_1520_, v_c_1521_);
lean_dec_ref(v___x_1516_);
lean_dec(v___x_1515_);
lean_dec_ref(v___x_1514_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(lean_object* v_as_1523_, lean_object* v_as_x27_1524_, lean_object* v_b_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1524_, v_b_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___boxed(lean_object* v_as_1528_, lean_object* v_as_x27_1529_, lean_object* v_b_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(v_as_1528_, v_as_x27_1529_, v_b_1530_, v_a_1531_);
lean_dec(v_as_x27_1529_);
lean_dec(v_as_1528_);
return v_res_1532_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(lean_object* v_s_1533_, lean_object* v_inst_1534_, lean_object* v_R_1535_, lean_object* v_a_1536_, uint8_t v_b_1537_, lean_object* v_c_1538_){
_start:
{
uint8_t v___x_1539_; 
v___x_1539_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1533_, v_a_1536_, v_b_1537_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___boxed(lean_object* v_s_1540_, lean_object* v_inst_1541_, lean_object* v_R_1542_, lean_object* v_a_1543_, lean_object* v_b_1544_, lean_object* v_c_1545_){
_start:
{
uint8_t v_b_boxed_1546_; uint8_t v_res_1547_; lean_object* v_r_1548_; 
v_b_boxed_1546_ = lean_unbox(v_b_1544_);
v_res_1547_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(v_s_1540_, v_inst_1541_, v_R_1542_, v_a_1543_, v_b_boxed_1546_, v_c_1545_);
lean_dec_ref(v_s_1540_);
v_r_1548_ = lean_box(v_res_1547_);
return v_r_1548_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_isEventName(lean_object* v_n_1736_){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
v___x_1737_ = lean_unsigned_to_nat(2u);
v___x_1738_ = lean_string_length(v_n_1736_);
v___x_1739_ = lean_nat_dec_lt(v___x_1737_, v___x_1738_);
if (v___x_1739_ == 0)
{
lean_dec_ref(v_n_1736_);
return v___x_1739_;
}
else
{
lean_object* v___x_1740_; uint8_t v___x_1741_; 
v___x_1740_ = lean_string_utf8_byte_size(v_n_1736_);
v___x_1741_ = lean_nat_dec_le(v___x_1737_, v___x_1740_);
if (v___x_1741_ == 0)
{
lean_dec_ref(v_n_1736_);
return v___x_1741_;
}
else
{
lean_object* v___x_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1742_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_1743_ = lean_unsigned_to_nat(0u);
v___x_1744_ = lean_string_memcmp(v_n_1736_, v___x_1742_, v___x_1743_, v___x_1743_, v___x_1737_);
if (v___x_1744_ == 0)
{
lean_dec_ref(v_n_1736_);
return v___x_1744_;
}
else
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = l_String_toListImpl(v_n_1736_);
v___x_1746_ = l_List_get_x3fInternal___redArg(v___x_1745_, v___x_1737_);
lean_dec(v___x_1745_);
if (lean_obj_tag(v___x_1746_) == 0)
{
uint8_t v___x_1747_; 
v___x_1747_ = 0;
return v___x_1747_;
}
else
{
lean_object* v_val_1748_; uint32_t v___x_1749_; uint32_t v___x_1750_; uint8_t v___x_1751_; 
v_val_1748_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_val_1748_);
lean_dec_ref_known(v___x_1746_, 1);
v___x_1749_ = 65;
v___x_1750_ = lean_unbox_uint32(v_val_1748_);
v___x_1751_ = lean_uint32_dec_le(v___x_1749_, v___x_1750_);
if (v___x_1751_ == 0)
{
lean_dec(v_val_1748_);
return v___x_1751_;
}
else
{
uint32_t v___x_1752_; uint32_t v___x_1753_; uint8_t v___x_1754_; 
v___x_1752_ = 90;
v___x_1753_ = lean_unbox_uint32(v_val_1748_);
lean_dec(v_val_1748_);
v___x_1754_ = lean_uint32_dec_le(v___x_1753_, v___x_1752_);
return v___x_1754_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_isEventName___boxed(lean_object* v_n_1755_){
_start:
{
uint8_t v_res_1756_; lean_object* v_r_1757_; 
v_res_1756_ = l_Lasm_UI_Syntax_isEventName(v_n_1755_);
v_r_1757_ = lean_box(v_res_1756_);
return v_r_1757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_lowerFirst(lean_object* v_s_1758_){
_start:
{
lean_object* v___x_1759_; 
lean_inc_ref(v_s_1758_);
v___x_1759_ = l_String_toListImpl(v_s_1758_);
if (lean_obj_tag(v___x_1759_) == 0)
{
return v_s_1758_;
}
else
{
lean_object* v_head_1760_; lean_object* v_tail_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1783_; 
lean_dec_ref(v_s_1758_);
v_head_1760_ = lean_ctor_get(v___x_1759_, 0);
v_tail_1761_ = lean_ctor_get(v___x_1759_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1763_ = v___x_1759_;
v_isShared_1764_ = v_isSharedCheck_1783_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_tail_1761_);
lean_inc(v_head_1760_);
lean_dec(v___x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1783_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
uint32_t v___y_1766_; uint32_t v___x_1772_; uint32_t v___x_1773_; uint8_t v___x_1774_; 
v___x_1772_ = 65;
v___x_1773_ = lean_unbox_uint32(v_head_1760_);
v___x_1774_ = lean_uint32_dec_le(v___x_1772_, v___x_1773_);
if (v___x_1774_ == 0)
{
uint32_t v___x_1775_; 
v___x_1775_ = lean_unbox_uint32(v_head_1760_);
lean_dec(v_head_1760_);
v___y_1766_ = v___x_1775_;
goto v___jp_1765_;
}
else
{
uint32_t v___x_1776_; uint32_t v___x_1777_; uint8_t v___x_1778_; 
v___x_1776_ = 90;
v___x_1777_ = lean_unbox_uint32(v_head_1760_);
v___x_1778_ = lean_uint32_dec_le(v___x_1777_, v___x_1776_);
if (v___x_1778_ == 0)
{
uint32_t v___x_1779_; 
v___x_1779_ = lean_unbox_uint32(v_head_1760_);
lean_dec(v_head_1760_);
v___y_1766_ = v___x_1779_;
goto v___jp_1765_;
}
else
{
uint32_t v___x_1780_; uint32_t v___x_1781_; uint32_t v___x_1782_; 
v___x_1780_ = 32;
v___x_1781_ = lean_unbox_uint32(v_head_1760_);
lean_dec(v_head_1760_);
v___x_1782_ = lean_uint32_add(v___x_1781_, v___x_1780_);
v___y_1766_ = v___x_1782_;
goto v___jp_1765_;
}
}
v___jp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1769_; 
v___x_1767_ = lean_box_uint32(v___y_1766_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v___x_1767_);
v___x_1769_ = v___x_1763_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1771_, 1, v_tail_1761_);
v___x_1769_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_string_mk(v___x_1769_);
return v___x_1770_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(lean_object* v_s_1784_, lean_object* v_p_1785_){
_start:
{
lean_object* v___y_1787_; lean_object* v___y_1788_; uint32_t v___y_1792_; lean_object* v___x_1804_; uint8_t v_decide_1805_; 
v___x_1804_ = lean_string_utf8_byte_size(v_s_1784_);
v_decide_1805_ = lean_nat_dec_eq(v_p_1785_, v___x_1804_);
if (v_decide_1805_ == 0)
{
uint32_t v___x_1806_; uint32_t v___x_1807_; uint8_t v___x_1808_; 
v___x_1806_ = lean_string_utf8_get_fast(v_s_1784_, v_p_1785_);
v___x_1807_ = 65;
v___x_1808_ = lean_uint32_dec_le(v___x_1807_, v___x_1806_);
if (v___x_1808_ == 0)
{
v___y_1792_ = v___x_1806_;
goto v___jp_1791_;
}
else
{
uint32_t v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = 90;
v___x_1810_ = lean_uint32_dec_le(v___x_1806_, v___x_1809_);
if (v___x_1810_ == 0)
{
v___y_1792_ = v___x_1806_;
goto v___jp_1791_;
}
else
{
uint32_t v___x_1811_; uint32_t v___x_1812_; 
v___x_1811_ = 32;
v___x_1812_ = lean_uint32_add(v___x_1806_, v___x_1811_);
v___y_1792_ = v___x_1812_;
goto v___jp_1791_;
}
}
}
else
{
lean_dec(v_p_1785_);
return v_s_1784_;
}
v___jp_1786_:
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_nat_add(v_p_1785_, v___y_1788_);
lean_dec(v_p_1785_);
v_s_1784_ = v___y_1787_;
v_p_1785_ = v___x_1789_;
goto _start;
}
v___jp_1791_:
{
lean_object* v___x_1793_; uint32_t v___x_1794_; uint8_t v___x_1795_; 
lean_inc(v_p_1785_);
v___x_1793_ = lean_string_utf8_set(v_s_1784_, v_p_1785_, v___y_1792_);
v___x_1794_ = 127;
v___x_1795_ = lean_uint32_dec_le(v___y_1792_, v___x_1794_);
if (v___x_1795_ == 0)
{
uint32_t v___x_1796_; uint8_t v___x_1797_; 
v___x_1796_ = 2047;
v___x_1797_ = lean_uint32_dec_le(v___y_1792_, v___x_1796_);
if (v___x_1797_ == 0)
{
uint32_t v___x_1798_; uint8_t v___x_1799_; 
v___x_1798_ = 65535;
v___x_1799_ = lean_uint32_dec_le(v___y_1792_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_unsigned_to_nat(4u);
v___y_1787_ = v___x_1793_;
v___y_1788_ = v___x_1800_;
goto v___jp_1786_;
}
else
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_unsigned_to_nat(3u);
v___y_1787_ = v___x_1793_;
v___y_1788_ = v___x_1801_;
goto v___jp_1786_;
}
}
else
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_unsigned_to_nat(2u);
v___y_1787_ = v___x_1793_;
v___y_1788_ = v___x_1802_;
goto v___jp_1786_;
}
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_unsigned_to_nat(1u);
v___y_1787_ = v___x_1793_;
v___y_1788_ = v___x_1803_;
goto v___jp_1786_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(lean_object* v_x_1813_, lean_object* v_x_1814_){
_start:
{
if (lean_obj_tag(v_x_1814_) == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = lean_box(0);
return v___x_1815_;
}
else
{
lean_object* v_head_1816_; lean_object* v_tail_1817_; lean_object* v_fst_1818_; lean_object* v_snd_1819_; uint8_t v___x_1820_; 
v_head_1816_ = lean_ctor_get(v_x_1814_, 0);
v_tail_1817_ = lean_ctor_get(v_x_1814_, 1);
v_fst_1818_ = lean_ctor_get(v_head_1816_, 0);
v_snd_1819_ = lean_ctor_get(v_head_1816_, 1);
v___x_1820_ = lean_string_dec_eq(v_x_1813_, v_fst_1818_);
if (v___x_1820_ == 0)
{
v_x_1814_ = v_tail_1817_;
goto _start;
}
else
{
lean_object* v___x_1822_; 
lean_inc(v_snd_1819_);
v___x_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1822_, 0, v_snd_1819_);
return v___x_1822_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg___boxed(lean_object* v_x_1823_, lean_object* v_x_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_1823_, v_x_1824_);
lean_dec(v_x_1824_);
lean_dec_ref(v_x_1823_);
return v_res_1825_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__9(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__8));
v___x_1842_ = l_String_toRawSubstring_x27(v___x_1841_);
return v___x_1842_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__24(void){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1877_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1878_ = l_String_toRawSubstring_x27(v___x_1877_);
return v___x_1878_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__35(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__34));
v___x_1905_ = l_String_toRawSubstring_x27(v___x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__44(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__43));
v___x_1923_ = l_String_toRawSubstring_x27(v___x_1922_);
return v___x_1923_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__56(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__55));
v___x_1946_ = l_String_toRawSubstring_x27(v___x_1945_);
return v___x_1946_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__66(void){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_1972_ = l_String_toRawSubstring_x27(v___x_1971_);
return v___x_1972_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__72(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__71));
v___x_1979_ = l_String_toRawSubstring_x27(v___x_1978_);
return v___x_1979_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__79(void){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__78));
v___x_1995_ = l_String_toRawSubstring_x27(v___x_1994_);
return v___x_1995_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__93(void){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__92));
v___x_2021_ = l_String_toRawSubstring_x27(v___x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr(lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = ((lean_object*)(l_Lasm_UI_Syntax_attrSplice___closed__1));
lean_inc(v_a_2035_);
v___x_2039_ = l_Lean_Syntax_isOfKind(v_a_2035_, v___x_2038_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2040_ = ((lean_object*)(l_Lasm_UI_Syntax_attrFlag___closed__1));
lean_inc(v_a_2035_);
v___x_2041_ = l_Lean_Syntax_isOfKind(v_a_2035_, v___x_2040_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = ((lean_object*)(l_Lasm_UI_Syntax_attrValue___closed__1));
lean_inc(v_a_2035_);
v___x_2043_ = l_Lean_Syntax_isOfKind(v_a_2035_, v___x_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__0));
v___x_2045_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2035_, v___x_2044_, v_a_2036_, v_a_2037_);
lean_dec(v_a_2035_);
return v___x_2045_;
}
else
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; 
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = l_Lean_Syntax_getArg(v_a_2035_, v___x_2046_);
v___x_2048_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2047_);
v___x_2049_ = l_Lean_Syntax_isOfKind(v___x_2047_, v___x_2048_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec(v___x_2047_);
v___x_2050_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__0));
v___x_2051_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2035_, v___x_2050_, v_a_2036_, v_a_2037_);
lean_dec(v_a_2035_);
return v___x_2051_;
}
else
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2052_ = lean_unsigned_to_nat(2u);
v___x_2053_ = l_Lean_Syntax_getArg(v_a_2035_, v___x_2052_);
v___x_2182_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__1));
lean_inc(v___x_2053_);
v___x_2183_ = l_Lean_Syntax_isOfKind(v___x_2053_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
lean_dec(v___x_2053_);
lean_dec(v___x_2047_);
v___x_2184_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__0));
v___x_2185_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2035_, v___x_2184_, v_a_2036_, v_a_2037_);
lean_dec(v_a_2035_);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; lean_object* v_name_2187_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2203_; lean_object* v___y_2338_; lean_object* v___y_2339_; lean_object* v___y_2340_; lean_object* v___y_2341_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___x_2610_; lean_object* v___y_2612_; 
lean_dec(v_a_2035_);
v___x_2186_ = lean_unsigned_to_nat(1u);
v_name_2187_ = l_Lasm_UI_Syntax_nameOf(v___x_2047_);
v___x_2610_ = l_Lean_Syntax_getArg(v___x_2053_, v___x_2046_);
if (lean_obj_tag(v___x_2610_) == 1)
{
lean_object* v_kind_2623_; 
v_kind_2623_ = lean_ctor_get(v___x_2610_, 1);
if (lean_obj_tag(v_kind_2623_) == 1)
{
lean_object* v_pre_2624_; 
v_pre_2624_ = lean_ctor_get(v_kind_2623_, 0);
if (lean_obj_tag(v_pre_2624_) == 0)
{
lean_object* v_info_2625_; lean_object* v_args_2626_; lean_object* v_str_2627_; lean_object* v___x_2628_; uint8_t v___x_2629_; 
v_info_2625_ = lean_ctor_get(v___x_2610_, 0);
v_args_2626_ = lean_ctor_get(v___x_2610_, 2);
v_str_2627_ = lean_ctor_get(v_kind_2623_, 1);
v___x_2628_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_2629_ = lean_string_dec_eq(v_str_2627_, v___x_2628_);
if (v___x_2629_ == 0)
{
goto v___jp_2621_;
}
else
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = l_Lean_Name_str___override(v_pre_2624_, v___x_2628_);
lean_inc_ref(v_args_2626_);
lean_inc(v_info_2625_);
v___x_2631_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2631_, 0, v_info_2625_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
lean_ctor_set(v___x_2631_, 2, v_args_2626_);
v___x_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
v___y_2612_ = v___x_2632_;
goto v___jp_2611_;
}
}
else
{
goto v___jp_2621_;
}
}
else
{
goto v___jp_2621_;
}
}
else
{
goto v___jp_2621_;
}
v___jp_2188_:
{
lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2193_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__51));
v___x_2194_ = lean_string_dec_eq(v_name_2187_, v___x_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__52));
v___x_2196_ = lean_string_dec_eq(v_name_2187_, v___x_2195_);
if (v___x_2196_ == 0)
{
v___y_2151_ = v___y_2192_;
v___y_2152_ = v___y_2191_;
v___y_2153_ = v___y_2189_;
v___y_2154_ = v___y_2190_;
v___y_2155_ = v_name_2187_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2197_; 
lean_dec_ref(v_name_2187_);
v___x_2197_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__53));
v___y_2151_ = v___y_2192_;
v___y_2152_ = v___y_2191_;
v___y_2153_ = v___y_2189_;
v___y_2154_ = v___y_2190_;
v___y_2155_ = v___x_2197_;
goto v___jp_2150_;
}
}
else
{
lean_object* v___x_2198_; 
lean_dec_ref(v_name_2187_);
v___x_2198_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__54));
v___y_2151_ = v___y_2192_;
v___y_2152_ = v___y_2191_;
v___y_2153_ = v___y_2189_;
v___y_2154_ = v___y_2190_;
v___y_2155_ = v___x_2198_;
goto v___jp_2150_;
}
}
v___jp_2199_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lasm_UI_Syntax_stringProps));
v___x_2205_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_name_2187_, v___x_2204_);
if (lean_obj_tag(v___x_2205_) == 1)
{
lean_dec_ref(v_name_2187_);
if (lean_obj_tag(v___y_2201_) == 1)
{
lean_object* v_val_2206_; lean_object* v_val_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2265_; 
lean_dec(v___y_2200_);
lean_dec(v___x_2053_);
v_val_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_val_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v_val_2207_ = lean_ctor_get(v___y_2201_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___y_2201_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2209_ = v___y_2201_;
v_isShared_2210_ = v_isSharedCheck_2265_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_val_2207_);
lean_dec(v___y_2201_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2265_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v_quotContext_2211_; lean_object* v_currMacroScope_2212_; lean_object* v_ref_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2260_; 
v_quotContext_2211_ = lean_ctor_get(v___y_2202_, 1);
v_currMacroScope_2212_ = lean_ctor_get(v___y_2202_, 2);
v_ref_2213_ = lean_ctor_get(v___y_2202_, 5);
v___x_2214_ = l_Lean_SourceInfo_fromRef(v_ref_2213_, v___x_2041_);
v___x_2215_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2216_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2214_, 17);
v___x_2217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2214_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2219_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2220_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__56, &l_Lasm_UI_Syntax_expandAttr___closed__56_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__56);
v___x_2221_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__58));
lean_inc_n(v_currMacroScope_2212_, 3);
lean_inc_n(v_quotContext_2211_, 3);
v___x_2222_ = l_Lean_addMacroScope(v_quotContext_2211_, v___x_2221_, v_currMacroScope_2212_);
v___x_2223_ = lean_box(0);
v___x_2224_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__62));
v___x_2225_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2214_);
lean_ctor_set(v___x_2225_, 1, v___x_2220_);
lean_ctor_set(v___x_2225_, 2, v___x_2222_);
lean_ctor_set(v___x_2225_, 3, v___x_2224_);
v___x_2226_ = lean_box(2);
v___x_2227_ = l_Lean_Syntax_mkStrLit(v_val_2206_, v___x_2226_);
v___x_2228_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2229_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2230_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__21));
v___x_2231_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2214_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2233_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__24, &l_Lasm_UI_Syntax_expandAttr___closed__24_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__24);
v___x_2234_ = lean_box(0);
v___x_2235_ = l_Lean_addMacroScope(v_quotContext_2211_, v___x_2234_, v_currMacroScope_2212_);
v___x_2236_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__33));
v___x_2237_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2214_);
lean_ctor_set(v___x_2237_, 1, v___x_2233_);
lean_ctor_set(v___x_2237_, 2, v___x_2235_);
lean_ctor_set(v___x_2237_, 3, v___x_2236_);
v___x_2238_ = l_Lean_Syntax_node1(v___x_2214_, v___x_2232_, v___x_2237_);
v___x_2239_ = l_Lean_Syntax_node2(v___x_2214_, v___x_2229_, v___x_2231_, v___x_2238_);
v___x_2240_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2241_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__65));
v___x_2242_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2214_);
lean_ctor_set(v___x_2242_, 1, v___x_2241_);
v___x_2243_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__66, &l_Lasm_UI_Syntax_expandAttr___closed__66_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__66);
v___x_2244_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2245_ = l_Lean_addMacroScope(v_quotContext_2211_, v___x_2244_, v_currMacroScope_2212_);
v___x_2246_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2214_);
lean_ctor_set(v___x_2246_, 1, v___x_2243_);
lean_ctor_set(v___x_2246_, 2, v___x_2245_);
lean_ctor_set(v___x_2246_, 3, v___x_2223_);
v___x_2247_ = l_Lean_Syntax_node2(v___x_2214_, v___x_2240_, v___x_2242_, v___x_2246_);
v___x_2248_ = l_Lean_Syntax_node1(v___x_2214_, v___x_2218_, v_val_2207_);
v___x_2249_ = l_Lean_Syntax_node2(v___x_2214_, v___x_2219_, v___x_2247_, v___x_2248_);
v___x_2250_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2214_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = l_Lean_Syntax_node3(v___x_2214_, v___x_2228_, v___x_2239_, v___x_2249_, v___x_2251_);
v___x_2253_ = l_Lean_Syntax_node2(v___x_2214_, v___x_2218_, v___x_2227_, v___x_2252_);
v___x_2254_ = l_Lean_Syntax_node2(v___x_2214_, v___x_2219_, v___x_2225_, v___x_2253_);
v___x_2255_ = l_Lean_Syntax_node1(v___x_2214_, v___x_2218_, v___x_2254_);
v___x_2256_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2214_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = l_Lean_Syntax_node3(v___x_2214_, v___x_2215_, v___x_2217_, v___x_2255_, v___x_2257_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 0, v___x_2258_);
v___x_2260_ = v___x_2209_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v___x_2258_);
v___x_2260_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2261_ = lean_box(0);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
lean_ctor_set(v___x_2263_, 1, v___y_2203_);
return v___x_2263_;
}
}
}
else
{
lean_dec(v___y_2201_);
if (lean_obj_tag(v___y_2200_) == 1)
{
lean_object* v_val_2266_; lean_object* v_val_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2325_; 
lean_dec(v___x_2053_);
v_val_2266_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_val_2266_);
lean_dec_ref_known(v___x_2205_, 1);
v_val_2267_ = lean_ctor_get(v___y_2200_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___y_2200_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2269_ = v___y_2200_;
v_isShared_2270_ = v_isSharedCheck_2325_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_val_2267_);
lean_dec(v___y_2200_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2325_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v_quotContext_2271_; lean_object* v_currMacroScope_2272_; lean_object* v_ref_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; 
v_quotContext_2271_ = lean_ctor_get(v___y_2202_, 1);
v_currMacroScope_2272_ = lean_ctor_get(v___y_2202_, 2);
v_ref_2273_ = lean_ctor_get(v___y_2202_, 5);
v___x_2274_ = l_Lean_SourceInfo_fromRef(v_ref_2273_, v___x_2041_);
v___x_2275_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2276_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2274_, 17);
v___x_2277_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2274_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
v___x_2278_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2279_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2280_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__56, &l_Lasm_UI_Syntax_expandAttr___closed__56_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__56);
v___x_2281_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__58));
lean_inc_n(v_currMacroScope_2272_, 3);
lean_inc_n(v_quotContext_2271_, 3);
v___x_2282_ = l_Lean_addMacroScope(v_quotContext_2271_, v___x_2281_, v_currMacroScope_2272_);
v___x_2283_ = lean_box(0);
v___x_2284_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__62));
v___x_2285_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2274_);
lean_ctor_set(v___x_2285_, 1, v___x_2280_);
lean_ctor_set(v___x_2285_, 2, v___x_2282_);
lean_ctor_set(v___x_2285_, 3, v___x_2284_);
v___x_2286_ = lean_box(2);
v___x_2287_ = l_Lean_Syntax_mkStrLit(v_val_2266_, v___x_2286_);
v___x_2288_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2289_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2290_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__21));
v___x_2291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2274_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2293_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__24, &l_Lasm_UI_Syntax_expandAttr___closed__24_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__24);
v___x_2294_ = lean_box(0);
v___x_2295_ = l_Lean_addMacroScope(v_quotContext_2271_, v___x_2294_, v_currMacroScope_2272_);
v___x_2296_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__33));
v___x_2297_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2274_);
lean_ctor_set(v___x_2297_, 1, v___x_2293_);
lean_ctor_set(v___x_2297_, 2, v___x_2295_);
lean_ctor_set(v___x_2297_, 3, v___x_2296_);
v___x_2298_ = l_Lean_Syntax_node1(v___x_2274_, v___x_2292_, v___x_2297_);
v___x_2299_ = l_Lean_Syntax_node2(v___x_2274_, v___x_2289_, v___x_2291_, v___x_2298_);
v___x_2300_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2301_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__65));
v___x_2302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2274_);
lean_ctor_set(v___x_2302_, 1, v___x_2301_);
v___x_2303_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__66, &l_Lasm_UI_Syntax_expandAttr___closed__66_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__66);
v___x_2304_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2305_ = l_Lean_addMacroScope(v_quotContext_2271_, v___x_2304_, v_currMacroScope_2272_);
v___x_2306_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2274_);
lean_ctor_set(v___x_2306_, 1, v___x_2303_);
lean_ctor_set(v___x_2306_, 2, v___x_2305_);
lean_ctor_set(v___x_2306_, 3, v___x_2283_);
v___x_2307_ = l_Lean_Syntax_node2(v___x_2274_, v___x_2300_, v___x_2302_, v___x_2306_);
v___x_2308_ = l_Lean_Syntax_node1(v___x_2274_, v___x_2278_, v_val_2267_);
v___x_2309_ = l_Lean_Syntax_node2(v___x_2274_, v___x_2279_, v___x_2307_, v___x_2308_);
v___x_2310_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2274_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = l_Lean_Syntax_node3(v___x_2274_, v___x_2288_, v___x_2299_, v___x_2309_, v___x_2311_);
v___x_2313_ = l_Lean_Syntax_node2(v___x_2274_, v___x_2278_, v___x_2287_, v___x_2312_);
v___x_2314_ = l_Lean_Syntax_node2(v___x_2274_, v___x_2279_, v___x_2285_, v___x_2313_);
v___x_2315_ = l_Lean_Syntax_node1(v___x_2274_, v___x_2278_, v___x_2314_);
v___x_2316_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2274_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = l_Lean_Syntax_node3(v___x_2274_, v___x_2275_, v___x_2277_, v___x_2315_, v___x_2317_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2318_);
v___x_2320_ = v___x_2269_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2318_);
v___x_2320_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2321_ = lean_box(0);
v___x_2322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
lean_ctor_set(v___x_2323_, 1, v___y_2203_);
return v___x_2323_;
}
}
}
else
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v_a_2328_; lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec_ref_known(v___x_2205_, 1);
lean_dec(v___y_2200_);
v___x_2326_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2327_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2053_, v___x_2326_, v___y_2202_, v___y_2203_);
lean_dec(v___x_2053_);
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_a_2329_ = lean_ctor_get(v___x_2327_, 1);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2327_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2328_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
else
{
lean_dec(v___x_2205_);
v___y_2189_ = v___y_2200_;
v___y_2190_ = v___y_2201_;
v___y_2191_ = v___y_2202_;
v___y_2192_ = v___y_2203_;
goto v___jp_2188_;
}
}
v___jp_2337_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2343_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_name_2187_, v___x_2342_);
if (lean_obj_tag(v___x_2343_) == 1)
{
lean_dec(v___y_2339_);
if (lean_obj_tag(v___y_2338_) == 0)
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v_a_2354_; lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_dec_ref_known(v___x_2343_, 1);
v___x_2344_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__68));
lean_inc_ref(v_name_2187_);
v___x_2345_ = lean_string_append(v_name_2187_, v___x_2344_);
v___x_2346_ = lean_string_append(v___x_2345_, v_name_2187_);
v___x_2347_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__69));
v___x_2348_ = lean_string_append(v___x_2346_, v___x_2347_);
v___x_2349_ = lean_string_append(v___x_2348_, v_name_2187_);
v___x_2350_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__70));
v___x_2351_ = lean_string_append(v___x_2349_, v___x_2350_);
v___x_2352_ = lean_string_append(v___x_2351_, v_name_2187_);
lean_dec_ref(v_name_2187_);
v___x_2353_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2053_, v___x_2352_, v___y_2340_, v___y_2341_);
lean_dec(v___x_2053_);
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_a_2355_ = lean_ctor_get(v___x_2353_, 1);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2353_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2354_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
else
{
lean_object* v_val_2363_; lean_object* v_val_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2422_; 
lean_dec_ref(v_name_2187_);
lean_dec(v___x_2053_);
v_val_2363_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_val_2363_);
lean_dec_ref_known(v___x_2343_, 1);
v_val_2364_ = lean_ctor_get(v___y_2338_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___y_2338_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2366_ = v___y_2338_;
v_isShared_2367_ = v_isSharedCheck_2422_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_val_2364_);
lean_dec(v___y_2338_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2422_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v_quotContext_2368_; lean_object* v_currMacroScope_2369_; lean_object* v_ref_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
v_quotContext_2368_ = lean_ctor_get(v___y_2340_, 1);
v_currMacroScope_2369_ = lean_ctor_get(v___y_2340_, 2);
v_ref_2370_ = lean_ctor_get(v___y_2340_, 5);
v___x_2371_ = l_Lean_SourceInfo_fromRef(v_ref_2370_, v___x_2041_);
v___x_2372_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2373_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2371_, 17);
v___x_2374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2371_);
lean_ctor_set(v___x_2374_, 1, v___x_2373_);
v___x_2375_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2376_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2377_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__56, &l_Lasm_UI_Syntax_expandAttr___closed__56_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__56);
v___x_2378_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__58));
lean_inc_n(v_currMacroScope_2369_, 3);
lean_inc_n(v_quotContext_2368_, 3);
v___x_2379_ = l_Lean_addMacroScope(v_quotContext_2368_, v___x_2378_, v_currMacroScope_2369_);
v___x_2380_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__62));
v___x_2381_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2371_);
lean_ctor_set(v___x_2381_, 1, v___x_2377_);
lean_ctor_set(v___x_2381_, 2, v___x_2379_);
lean_ctor_set(v___x_2381_, 3, v___x_2380_);
v___x_2382_ = lean_box(2);
v___x_2383_ = l_Lean_Syntax_mkStrLit(v_val_2363_, v___x_2382_);
v___x_2384_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2385_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2386_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__21));
v___x_2387_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2371_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
v___x_2388_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2389_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__24, &l_Lasm_UI_Syntax_expandAttr___closed__24_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__24);
v___x_2390_ = lean_box(0);
v___x_2391_ = l_Lean_addMacroScope(v_quotContext_2368_, v___x_2390_, v_currMacroScope_2369_);
v___x_2392_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__33));
v___x_2393_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2371_);
lean_ctor_set(v___x_2393_, 1, v___x_2389_);
lean_ctor_set(v___x_2393_, 2, v___x_2391_);
lean_ctor_set(v___x_2393_, 3, v___x_2392_);
v___x_2394_ = l_Lean_Syntax_node1(v___x_2371_, v___x_2388_, v___x_2393_);
v___x_2395_ = l_Lean_Syntax_node2(v___x_2371_, v___x_2385_, v___x_2387_, v___x_2394_);
v___x_2396_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2397_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__65));
v___x_2398_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2371_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
v___x_2399_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__72, &l_Lasm_UI_Syntax_expandAttr___closed__72_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__72);
v___x_2400_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__73));
v___x_2401_ = l_Lean_addMacroScope(v_quotContext_2368_, v___x_2400_, v_currMacroScope_2369_);
v___x_2402_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__77));
v___x_2403_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2371_);
lean_ctor_set(v___x_2403_, 1, v___x_2399_);
lean_ctor_set(v___x_2403_, 2, v___x_2401_);
lean_ctor_set(v___x_2403_, 3, v___x_2402_);
v___x_2404_ = l_Lean_Syntax_node2(v___x_2371_, v___x_2396_, v___x_2398_, v___x_2403_);
v___x_2405_ = l_Lean_Syntax_node1(v___x_2371_, v___x_2375_, v_val_2364_);
v___x_2406_ = l_Lean_Syntax_node2(v___x_2371_, v___x_2376_, v___x_2404_, v___x_2405_);
v___x_2407_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2408_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2371_);
lean_ctor_set(v___x_2408_, 1, v___x_2407_);
v___x_2409_ = l_Lean_Syntax_node3(v___x_2371_, v___x_2384_, v___x_2395_, v___x_2406_, v___x_2408_);
v___x_2410_ = l_Lean_Syntax_node2(v___x_2371_, v___x_2375_, v___x_2383_, v___x_2409_);
v___x_2411_ = l_Lean_Syntax_node2(v___x_2371_, v___x_2376_, v___x_2381_, v___x_2410_);
v___x_2412_ = l_Lean_Syntax_node1(v___x_2371_, v___x_2375_, v___x_2411_);
v___x_2413_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2371_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = l_Lean_Syntax_node3(v___x_2371_, v___x_2372_, v___x_2374_, v___x_2412_, v___x_2414_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2415_);
v___x_2417_ = v___x_2366_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_box(0);
v___x_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2419_);
lean_ctor_set(v___x_2420_, 1, v___y_2341_);
return v___x_2420_;
}
}
}
}
else
{
lean_dec(v___x_2343_);
v___y_2200_ = v___y_2338_;
v___y_2201_ = v___y_2339_;
v___y_2202_ = v___y_2340_;
v___y_2203_ = v___y_2341_;
goto v___jp_2199_;
}
}
v___jp_2423_:
{
uint8_t v___x_2428_; 
lean_inc_ref(v_name_2187_);
v___x_2428_ = l_Lasm_UI_Syntax_isEventName(v_name_2187_);
if (v___x_2428_ == 0)
{
v___y_2338_ = v___y_2424_;
v___y_2339_ = v___y_2425_;
v___y_2340_ = v___y_2426_;
v___y_2341_ = v___y_2427_;
goto v___jp_2337_;
}
else
{
lean_dec(v___y_2425_);
if (lean_obj_tag(v___y_2424_) == 1)
{
lean_object* v_val_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2492_; 
lean_dec(v___x_2053_);
v_val_2429_ = lean_ctor_get(v___y_2424_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___y_2424_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2431_ = v___y_2424_;
v_isShared_2432_ = v_isSharedCheck_2492_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_val_2429_);
lean_dec(v___y_2424_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2492_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2433_ = ((lean_object*)(l_Lasm_UI_Syntax_eventHelpers));
v___x_2434_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_name_2187_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v_quotContext_2437_; lean_object* v_currMacroScope_2438_; lean_object* v_ref_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v_event_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2465_; 
v___x_2435_ = lean_string_utf8_byte_size(v_name_2187_);
lean_inc_ref(v_name_2187_);
v___x_2436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2436_, 0, v_name_2187_);
lean_ctor_set(v___x_2436_, 1, v___x_2046_);
lean_ctor_set(v___x_2436_, 2, v___x_2435_);
v_quotContext_2437_ = lean_ctor_get(v___y_2426_, 1);
v_currMacroScope_2438_ = lean_ctor_get(v___y_2426_, 2);
v_ref_2439_ = lean_ctor_get(v___y_2426_, 5);
v___x_2440_ = l_String_Slice_Pos_nextn(v___x_2436_, v___x_2046_, v___x_2052_);
lean_dec_ref_known(v___x_2436_, 3);
v___x_2441_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2441_, 0, v_name_2187_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
lean_ctor_set(v___x_2441_, 2, v___x_2435_);
v___x_2442_ = l_String_Slice_toString(v___x_2441_);
lean_dec_ref_known(v___x_2441_, 3);
v___x_2443_ = l_Lasm_UI_Syntax_lowerFirst(v___x_2442_);
v_event_2444_ = l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(v___x_2443_, v___x_2046_);
v___x_2445_ = l_Lean_SourceInfo_fromRef(v_ref_2439_, v___x_2434_);
v___x_2446_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2447_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2445_, 6);
v___x_2448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2445_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2450_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2451_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__79, &l_Lasm_UI_Syntax_expandAttr___closed__79_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__79);
v___x_2452_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
lean_inc(v_currMacroScope_2438_);
lean_inc(v_quotContext_2437_);
v___x_2453_ = l_Lean_addMacroScope(v_quotContext_2437_, v___x_2452_, v_currMacroScope_2438_);
v___x_2454_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__82));
v___x_2455_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2445_);
lean_ctor_set(v___x_2455_, 1, v___x_2451_);
lean_ctor_set(v___x_2455_, 2, v___x_2453_);
lean_ctor_set(v___x_2455_, 3, v___x_2454_);
v___x_2456_ = lean_box(2);
v___x_2457_ = l_Lean_Syntax_mkStrLit(v_event_2444_, v___x_2456_);
v___x_2458_ = l_Lean_Syntax_node2(v___x_2445_, v___x_2449_, v___x_2457_, v_val_2429_);
v___x_2459_ = l_Lean_Syntax_node2(v___x_2445_, v___x_2450_, v___x_2455_, v___x_2458_);
v___x_2460_ = l_Lean_Syntax_node1(v___x_2445_, v___x_2449_, v___x_2459_);
v___x_2461_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2445_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = l_Lean_Syntax_node3(v___x_2445_, v___x_2446_, v___x_2448_, v___x_2460_, v___x_2462_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2463_);
v___x_2465_ = v___x_2431_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2463_);
v___x_2465_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = lean_box(0);
v___x_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2465_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
lean_ctor_set(v___x_2468_, 1, v___y_2427_);
return v___x_2468_;
}
}
else
{
lean_object* v_ref_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v_f_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2487_; 
v_ref_2470_ = lean_ctor_get(v___y_2426_, 5);
v___x_2471_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__84));
v___x_2472_ = l_Lean_Name_str___override(v___x_2471_, v_name_2187_);
v_f_2473_ = l_Lean_mkIdent(v___x_2472_);
v___x_2474_ = l_Lean_SourceInfo_fromRef(v_ref_2470_, v___x_2041_);
v___x_2475_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2476_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2474_, 5);
v___x_2477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2474_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2479_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2480_ = l_Lean_Syntax_node1(v___x_2474_, v___x_2478_, v_val_2429_);
v___x_2481_ = l_Lean_Syntax_node2(v___x_2474_, v___x_2479_, v_f_2473_, v___x_2480_);
v___x_2482_ = l_Lean_Syntax_node1(v___x_2474_, v___x_2478_, v___x_2481_);
v___x_2483_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2474_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = l_Lean_Syntax_node3(v___x_2474_, v___x_2475_, v___x_2477_, v___x_2482_, v___x_2484_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2485_);
v___x_2487_ = v___x_2431_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2485_);
v___x_2487_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = lean_box(0);
v___x_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
lean_ctor_set(v___x_2490_, 1, v___y_2427_);
return v___x_2490_;
}
}
}
}
else
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v_a_2499_; lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec(v___y_2424_);
v___x_2493_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__85));
lean_inc_ref(v_name_2187_);
v___x_2494_ = lean_string_append(v_name_2187_, v___x_2493_);
v___x_2495_ = lean_string_append(v___x_2494_, v_name_2187_);
lean_dec_ref(v_name_2187_);
v___x_2496_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__86));
v___x_2497_ = lean_string_append(v___x_2495_, v___x_2496_);
v___x_2498_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2053_, v___x_2497_, v___y_2426_, v___y_2427_);
lean_dec(v___x_2053_);
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
v_a_2500_ = lean_ctor_get(v___x_2498_, 1);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2498_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_inc(v_a_2499_);
lean_dec(v___x_2498_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2499_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
v___jp_2508_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v_a_2519_; lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec(v___y_2511_);
lean_dec(v___y_2510_);
lean_inc_ref(v___y_2512_);
v___x_2515_ = lean_string_append(v___y_2512_, v___y_2514_);
lean_dec_ref(v___y_2514_);
v___x_2516_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__86));
v___x_2517_ = lean_string_append(v___x_2515_, v___x_2516_);
v___x_2518_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2047_, v___x_2517_, v___y_2509_, v___y_2513_);
lean_dec(v___x_2047_);
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_a_2520_ = lean_ctor_get(v___x_2518_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2518_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2519_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
v___jp_2528_:
{
lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2533_ = lean_string_utf8_byte_size(v_name_2187_);
v___x_2534_ = lean_nat_dec_le(v___x_2052_, v___x_2533_);
if (v___x_2534_ == 0)
{
lean_dec(v___x_2047_);
v___y_2424_ = v___y_2529_;
v___y_2425_ = v___y_2530_;
v___y_2426_ = v___y_2531_;
v___y_2427_ = v___y_2532_;
goto v___jp_2423_;
}
else
{
lean_object* v___x_2535_; uint8_t v___x_2536_; 
v___x_2535_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_2536_ = lean_string_memcmp(v_name_2187_, v___x_2535_, v___x_2046_, v___x_2046_, v___x_2052_);
if (v___x_2536_ == 0)
{
lean_dec(v___x_2047_);
v___y_2424_ = v___y_2529_;
v___y_2425_ = v___y_2530_;
v___y_2426_ = v___y_2531_;
v___y_2427_ = v___y_2532_;
goto v___jp_2423_;
}
else
{
lean_object* v___x_2537_; uint8_t v___x_2538_; 
v___x_2537_ = lean_string_length(v_name_2187_);
v___x_2538_ = lean_nat_dec_lt(v___x_2052_, v___x_2537_);
if (v___x_2538_ == 0)
{
lean_dec(v___x_2047_);
v___y_2424_ = v___y_2529_;
v___y_2425_ = v___y_2530_;
v___y_2426_ = v___y_2531_;
v___y_2427_ = v___y_2532_;
goto v___jp_2423_;
}
else
{
uint8_t v___x_2539_; 
lean_inc_ref(v_name_2187_);
v___x_2539_ = l_Lasm_UI_Syntax_isEventName(v_name_2187_);
if (v___x_2539_ == 0)
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; uint32_t v___x_2545_; uint32_t v___x_2546_; uint8_t v___x_2547_; 
lean_dec(v___x_2053_);
v___x_2540_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__87));
lean_inc_ref(v_name_2187_);
v___x_2541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2541_, 0, v_name_2187_);
lean_ctor_set(v___x_2541_, 1, v___x_2046_);
lean_ctor_set(v___x_2541_, 2, v___x_2533_);
v___x_2542_ = l_String_Slice_Pos_nextn(v___x_2541_, v___x_2046_, v___x_2052_);
lean_dec_ref_known(v___x_2541_, 3);
v___x_2543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2543_, 0, v_name_2187_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
lean_ctor_set(v___x_2543_, 2, v___x_2533_);
v___x_2544_ = l_String_Slice_toString(v___x_2543_);
lean_dec_ref_known(v___x_2543_, 3);
v___x_2545_ = lean_string_utf8_get(v___x_2544_, v___x_2046_);
v___x_2546_ = 97;
v___x_2547_ = lean_uint32_dec_le(v___x_2546_, v___x_2545_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_string_utf8_set(v___x_2544_, v___x_2046_, v___x_2545_);
v___y_2509_ = v___y_2531_;
v___y_2510_ = v___y_2529_;
v___y_2511_ = v___y_2530_;
v___y_2512_ = v___x_2540_;
v___y_2513_ = v___y_2532_;
v___y_2514_ = v___x_2548_;
goto v___jp_2508_;
}
else
{
uint32_t v___x_2549_; uint8_t v___x_2550_; 
v___x_2549_ = 122;
v___x_2550_ = lean_uint32_dec_le(v___x_2545_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_string_utf8_set(v___x_2544_, v___x_2046_, v___x_2545_);
v___y_2509_ = v___y_2531_;
v___y_2510_ = v___y_2529_;
v___y_2511_ = v___y_2530_;
v___y_2512_ = v___x_2540_;
v___y_2513_ = v___y_2532_;
v___y_2514_ = v___x_2551_;
goto v___jp_2508_;
}
else
{
uint32_t v___x_2552_; uint32_t v___x_2553_; lean_object* v___x_2554_; 
v___x_2552_ = 4294967264;
v___x_2553_ = lean_uint32_add(v___x_2545_, v___x_2552_);
v___x_2554_ = lean_string_utf8_set(v___x_2544_, v___x_2046_, v___x_2553_);
v___y_2509_ = v___y_2531_;
v___y_2510_ = v___y_2529_;
v___y_2511_ = v___y_2530_;
v___y_2512_ = v___x_2540_;
v___y_2513_ = v___y_2532_;
v___y_2514_ = v___x_2554_;
goto v___jp_2508_;
}
}
}
else
{
lean_dec(v___x_2047_);
v___y_2424_ = v___y_2529_;
v___y_2425_ = v___y_2530_;
v___y_2426_ = v___y_2531_;
v___y_2427_ = v___y_2532_;
goto v___jp_2423_;
}
}
}
}
}
v___jp_2555_:
{
lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__88));
v___x_2559_ = lean_string_dec_eq(v_name_2187_, v___x_2558_);
if (v___x_2559_ == 0)
{
v___y_2529_ = v___y_2557_;
v___y_2530_ = v___y_2556_;
v___y_2531_ = v_a_2036_;
v___y_2532_ = v_a_2037_;
goto v___jp_2528_;
}
else
{
lean_dec_ref(v_name_2187_);
lean_dec(v___x_2047_);
if (lean_obj_tag(v___y_2556_) == 1)
{
lean_object* v_val_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v___y_2557_);
lean_dec(v___x_2053_);
v_val_2560_ = lean_ctor_get(v___y_2556_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___y_2556_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2562_ = v___y_2556_;
v_isShared_2563_ = v_isSharedCheck_2570_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_val_2560_);
lean_dec(v___y_2556_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2570_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2564_; lean_object* v___x_2566_; 
v___x_2564_ = lean_box(0);
if (v_isShared_2563_ == 0)
{
v___x_2566_ = v___x_2562_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_val_2560_);
v___x_2566_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2564_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
lean_ctor_set(v___x_2568_, 1, v_a_2037_);
return v___x_2568_;
}
}
}
else
{
lean_dec(v___y_2556_);
if (lean_obj_tag(v___y_2557_) == 1)
{
lean_object* v_val_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2594_; 
lean_dec(v___x_2053_);
v_val_2571_ = lean_ctor_get(v___y_2557_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___y_2557_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2573_ = v___y_2557_;
v_isShared_2574_ = v_isSharedCheck_2594_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_val_2571_);
lean_dec(v___y_2557_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2594_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v_quotContext_2575_; lean_object* v_currMacroScope_2576_; lean_object* v_ref_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2590_; 
v_quotContext_2575_ = lean_ctor_get(v_a_2036_, 1);
v_currMacroScope_2576_ = lean_ctor_get(v_a_2036_, 2);
v_ref_2577_ = lean_ctor_get(v_a_2036_, 5);
v___x_2578_ = l_Lean_SourceInfo_fromRef(v_ref_2577_, v___x_2041_);
v___x_2579_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2580_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__35, &l_Lasm_UI_Syntax_expandAttr___closed__35_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__35);
v___x_2581_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__38));
lean_inc(v_currMacroScope_2576_);
lean_inc(v_quotContext_2575_);
v___x_2582_ = l_Lean_addMacroScope(v_quotContext_2575_, v___x_2581_, v_currMacroScope_2576_);
v___x_2583_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
lean_inc_n(v___x_2578_, 2);
v___x_2584_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2578_);
lean_ctor_set(v___x_2584_, 1, v___x_2580_);
lean_ctor_set(v___x_2584_, 2, v___x_2582_);
lean_ctor_set(v___x_2584_, 3, v___x_2583_);
v___x_2585_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2586_ = l_Lean_Syntax_node1(v___x_2578_, v___x_2585_, v_val_2571_);
v___x_2587_ = l_Lean_Syntax_node2(v___x_2578_, v___x_2579_, v___x_2584_, v___x_2586_);
v___x_2588_ = lean_box(0);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 0, v___x_2587_);
v___x_2590_ = v___x_2573_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v___x_2587_);
v___x_2590_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2588_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v_a_2037_);
return v___x_2592_;
}
}
}
else
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v_a_2597_; lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec(v___y_2557_);
v___x_2595_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__89));
v___x_2596_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2053_, v___x_2595_, v_a_2036_, v_a_2037_);
lean_dec(v___x_2053_);
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
v_a_2598_ = lean_ctor_get(v___x_2596_, 1);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2596_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_inc(v_a_2597_);
lean_dec(v___x_2596_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2597_);
lean_ctor_set(v_reuseFailAlloc_2604_, 1, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
}
v___jp_2606_:
{
if (lean_obj_tag(v___y_2607_) == 0)
{
v___y_2556_ = v___y_2607_;
v___y_2557_ = v___y_2608_;
goto v___jp_2555_;
}
else
{
lean_object* v___x_2609_; 
lean_dec(v___y_2608_);
v___x_2609_ = lean_box(0);
v___y_2556_ = v___y_2607_;
v___y_2557_ = v___x_2609_;
goto v___jp_2555_;
}
}
v___jp_2611_:
{
if (lean_obj_tag(v___x_2610_) == 1)
{
lean_object* v_args_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v_args_2613_ = lean_ctor_get(v___x_2610_, 2);
lean_inc_ref(v_args_2613_);
lean_dec_ref_known(v___x_2610_, 3);
v___x_2614_ = lean_array_get_size(v_args_2613_);
v___x_2615_ = lean_unsigned_to_nat(3u);
v___x_2616_ = lean_nat_dec_eq(v___x_2614_, v___x_2615_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
lean_dec_ref(v_args_2613_);
v___x_2617_ = lean_box(0);
v___y_2607_ = v___y_2612_;
v___y_2608_ = v___x_2617_;
goto v___jp_2606_;
}
else
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = lean_array_fget(v_args_2613_, v___x_2186_);
lean_dec_ref(v_args_2613_);
v___x_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
v___y_2607_ = v___y_2612_;
v___y_2608_ = v___x_2619_;
goto v___jp_2606_;
}
}
else
{
lean_object* v___x_2620_; 
lean_dec(v___x_2610_);
v___x_2620_ = lean_box(0);
v___y_2607_ = v___y_2612_;
v___y_2608_ = v___x_2620_;
goto v___jp_2606_;
}
}
v___jp_2621_:
{
lean_object* v___x_2622_; 
v___x_2622_ = lean_box(0);
v___y_2612_ = v___x_2622_;
goto v___jp_2611_;
}
}
v___jp_2054_:
{
if (lean_obj_tag(v___y_2057_) == 1)
{
lean_object* v_val_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v___y_2056_);
lean_dec(v___x_2053_);
v_val_2060_ = lean_ctor_get(v___y_2057_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___y_2057_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2062_ = v___y_2057_;
v_isShared_2063_ = v_isSharedCheck_2092_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_val_2060_);
lean_dec(v___y_2057_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2092_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_quotContext_2064_; lean_object* v_currMacroScope_2065_; lean_object* v_ref_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2087_; 
v_quotContext_2064_ = lean_ctor_get(v___y_2058_, 1);
v_currMacroScope_2065_ = lean_ctor_get(v___y_2058_, 2);
v_ref_2066_ = lean_ctor_get(v___y_2058_, 5);
v___x_2067_ = l_Lean_SourceInfo_fromRef(v_ref_2066_, v___x_2041_);
v___x_2068_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2069_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2067_, 6);
v___x_2070_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2067_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2072_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2073_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__9, &l_Lasm_UI_Syntax_expandAttr___closed__9_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__9);
v___x_2074_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__11));
lean_inc(v_currMacroScope_2065_);
lean_inc(v_quotContext_2064_);
v___x_2075_ = l_Lean_addMacroScope(v_quotContext_2064_, v___x_2074_, v_currMacroScope_2065_);
v___x_2076_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__15));
v___x_2077_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2067_);
lean_ctor_set(v___x_2077_, 1, v___x_2073_);
lean_ctor_set(v___x_2077_, 2, v___x_2075_);
lean_ctor_set(v___x_2077_, 3, v___x_2076_);
v___x_2078_ = lean_box(2);
v___x_2079_ = l_Lean_Syntax_mkStrLit(v___y_2055_, v___x_2078_);
v___x_2080_ = l_Lean_Syntax_node2(v___x_2067_, v___x_2071_, v___x_2079_, v_val_2060_);
v___x_2081_ = l_Lean_Syntax_node2(v___x_2067_, v___x_2072_, v___x_2077_, v___x_2080_);
v___x_2082_ = l_Lean_Syntax_node1(v___x_2067_, v___x_2071_, v___x_2081_);
v___x_2083_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2067_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = l_Lean_Syntax_node3(v___x_2067_, v___x_2068_, v___x_2070_, v___x_2082_, v___x_2084_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2085_);
v___x_2087_ = v___x_2062_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2088_ = lean_box(0);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2087_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v___y_2059_);
return v___x_2090_;
}
}
}
else
{
lean_dec(v___y_2057_);
if (lean_obj_tag(v___y_2056_) == 1)
{
lean_object* v_val_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2147_; 
lean_dec(v___x_2053_);
v_val_2093_ = lean_ctor_get(v___y_2056_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___y_2056_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2095_ = v___y_2056_;
v_isShared_2096_ = v_isSharedCheck_2147_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_val_2093_);
lean_dec(v___y_2056_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2147_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v_quotContext_2097_; lean_object* v_currMacroScope_2098_; lean_object* v_ref_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
v_quotContext_2097_ = lean_ctor_get(v___y_2058_, 1);
v_currMacroScope_2098_ = lean_ctor_get(v___y_2058_, 2);
v_ref_2099_ = lean_ctor_get(v___y_2058_, 5);
v___x_2100_ = l_Lean_SourceInfo_fromRef(v_ref_2099_, v___x_2041_);
v___x_2101_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2102_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2100_, 15);
v___x_2103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2100_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2105_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2106_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__9, &l_Lasm_UI_Syntax_expandAttr___closed__9_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__9);
v___x_2107_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__11));
lean_inc_n(v_currMacroScope_2098_, 3);
lean_inc_n(v_quotContext_2097_, 3);
v___x_2108_ = l_Lean_addMacroScope(v_quotContext_2097_, v___x_2107_, v_currMacroScope_2098_);
v___x_2109_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__15));
v___x_2110_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2100_);
lean_ctor_set(v___x_2110_, 1, v___x_2106_);
lean_ctor_set(v___x_2110_, 2, v___x_2108_);
lean_ctor_set(v___x_2110_, 3, v___x_2109_);
v___x_2111_ = lean_box(2);
v___x_2112_ = l_Lean_Syntax_mkStrLit(v___y_2055_, v___x_2111_);
v___x_2113_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2114_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2115_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__21));
v___x_2116_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2100_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2118_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__24, &l_Lasm_UI_Syntax_expandAttr___closed__24_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__24);
v___x_2119_ = lean_box(0);
v___x_2120_ = l_Lean_addMacroScope(v_quotContext_2097_, v___x_2119_, v_currMacroScope_2098_);
v___x_2121_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__33));
v___x_2122_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2100_);
lean_ctor_set(v___x_2122_, 1, v___x_2118_);
lean_ctor_set(v___x_2122_, 2, v___x_2120_);
lean_ctor_set(v___x_2122_, 3, v___x_2121_);
v___x_2123_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2117_, v___x_2122_);
v___x_2124_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2114_, v___x_2116_, v___x_2123_);
v___x_2125_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__35, &l_Lasm_UI_Syntax_expandAttr___closed__35_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__35);
v___x_2126_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__38));
v___x_2127_ = l_Lean_addMacroScope(v_quotContext_2097_, v___x_2126_, v_currMacroScope_2098_);
v___x_2128_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
v___x_2129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2100_);
lean_ctor_set(v___x_2129_, 1, v___x_2125_);
lean_ctor_set(v___x_2129_, 2, v___x_2127_);
lean_ctor_set(v___x_2129_, 3, v___x_2128_);
v___x_2130_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2104_, v_val_2093_);
v___x_2131_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2105_, v___x_2129_, v___x_2130_);
v___x_2132_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2100_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = l_Lean_Syntax_node3(v___x_2100_, v___x_2113_, v___x_2124_, v___x_2131_, v___x_2133_);
v___x_2135_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2104_, v___x_2112_, v___x_2134_);
v___x_2136_ = l_Lean_Syntax_node2(v___x_2100_, v___x_2105_, v___x_2110_, v___x_2135_);
v___x_2137_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2104_, v___x_2136_);
v___x_2138_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2100_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = l_Lean_Syntax_node3(v___x_2100_, v___x_2101_, v___x_2103_, v___x_2137_, v___x_2139_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2140_);
v___x_2142_ = v___x_2095_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2143_ = lean_box(0);
v___x_2144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
lean_ctor_set(v___x_2145_, 1, v___y_2059_);
return v___x_2145_;
}
}
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
v___x_2148_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__41));
v___x_2149_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2053_, v___x_2148_, v___y_2058_, v___y_2059_);
lean_dec(v___x_2053_);
return v___x_2149_;
}
}
}
v___jp_2150_:
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__42));
v___x_2157_ = lean_string_dec_eq(v___y_2155_, v___x_2156_);
if (v___x_2157_ == 0)
{
v___y_2055_ = v___y_2155_;
v___y_2056_ = v___y_2153_;
v___y_2057_ = v___y_2154_;
v___y_2058_ = v___y_2152_;
v___y_2059_ = v___y_2151_;
goto v___jp_2054_;
}
else
{
if (lean_obj_tag(v___y_2153_) == 1)
{
lean_object* v_val_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2181_; 
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2154_);
lean_dec(v___x_2053_);
v_val_2158_ = lean_ctor_get(v___y_2153_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___y_2153_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2160_ = v___y_2153_;
v_isShared_2161_ = v_isSharedCheck_2181_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_val_2158_);
lean_dec(v___y_2153_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2181_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v_quotContext_2162_; lean_object* v_currMacroScope_2163_; lean_object* v_ref_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
v_quotContext_2162_ = lean_ctor_get(v___y_2152_, 1);
v_currMacroScope_2163_ = lean_ctor_get(v___y_2152_, 2);
v_ref_2164_ = lean_ctor_get(v___y_2152_, 5);
v___x_2165_ = l_Lean_SourceInfo_fromRef(v_ref_2164_, v___x_2041_);
v___x_2166_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2167_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__44, &l_Lasm_UI_Syntax_expandAttr___closed__44_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__44);
v___x_2168_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__46));
lean_inc(v_currMacroScope_2163_);
lean_inc(v_quotContext_2162_);
v___x_2169_ = l_Lean_addMacroScope(v_quotContext_2162_, v___x_2168_, v_currMacroScope_2163_);
v___x_2170_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__50));
lean_inc_n(v___x_2165_, 2);
v___x_2171_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2165_);
lean_ctor_set(v___x_2171_, 1, v___x_2167_);
lean_ctor_set(v___x_2171_, 2, v___x_2169_);
lean_ctor_set(v___x_2171_, 3, v___x_2170_);
v___x_2172_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2173_ = l_Lean_Syntax_node1(v___x_2165_, v___x_2172_, v_val_2158_);
v___x_2174_ = l_Lean_Syntax_node2(v___x_2165_, v___x_2166_, v___x_2171_, v___x_2173_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2174_);
v___x_2176_ = v___x_2160_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2177_ = lean_box(0);
v___x_2178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2176_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
v___x_2179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
lean_ctor_set(v___x_2179_, 1, v___y_2151_);
return v___x_2179_;
}
}
}
else
{
v___y_2055_ = v___y_2155_;
v___y_2056_ = v___y_2153_;
v___y_2057_ = v___y_2154_;
v___y_2058_ = v___y_2152_;
v___y_2059_ = v___y_2151_;
goto v___jp_2054_;
}
}
}
}
}
}
else
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; 
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = l_Lean_Syntax_getArg(v_a_2035_, v___x_2633_);
v___x_2635_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2634_);
v___x_2636_ = l_Lean_Syntax_isOfKind(v___x_2634_, v___x_2635_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_dec(v___x_2634_);
v___x_2637_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__0));
v___x_2638_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2035_, v___x_2637_, v_a_2036_, v_a_2037_);
lean_dec(v_a_2035_);
return v___x_2638_;
}
else
{
lean_object* v_name_2639_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_name_2639_ = l_Lasm_UI_Syntax_nameOf(v___x_2634_);
lean_dec(v___x_2634_);
v___x_2689_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2690_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_name_2639_, v___x_2689_);
if (lean_obj_tag(v___x_2690_) == 1)
{
lean_object* v_val_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v_name_2639_);
lean_dec(v_a_2035_);
v_val_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2754_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_val_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2754_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v_quotContext_2695_; lean_object* v_currMacroScope_2696_; lean_object* v_ref_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v_quotContext_2695_ = lean_ctor_get(v_a_2036_, 1);
v_currMacroScope_2696_ = lean_ctor_get(v_a_2036_, 2);
v_ref_2697_ = lean_ctor_get(v_a_2036_, 5);
v___x_2698_ = l_Lean_SourceInfo_fromRef(v_ref_2697_, v___x_2039_);
v___x_2699_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2700_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2698_, 18);
v___x_2701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2698_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
v___x_2702_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2703_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2704_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__56, &l_Lasm_UI_Syntax_expandAttr___closed__56_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__56);
v___x_2705_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__58));
lean_inc_n(v_currMacroScope_2696_, 4);
lean_inc_n(v_quotContext_2695_, 4);
v___x_2706_ = l_Lean_addMacroScope(v_quotContext_2695_, v___x_2705_, v_currMacroScope_2696_);
v___x_2707_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__62));
v___x_2708_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2698_);
lean_ctor_set(v___x_2708_, 1, v___x_2704_);
lean_ctor_set(v___x_2708_, 2, v___x_2706_);
lean_ctor_set(v___x_2708_, 3, v___x_2707_);
v___x_2709_ = lean_box(2);
v___x_2710_ = l_Lean_Syntax_mkStrLit(v_val_2691_, v___x_2709_);
v___x_2711_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2712_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2713_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__21));
v___x_2714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2698_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
v___x_2715_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2716_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__24, &l_Lasm_UI_Syntax_expandAttr___closed__24_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__24);
v___x_2717_ = lean_box(0);
v___x_2718_ = l_Lean_addMacroScope(v_quotContext_2695_, v___x_2717_, v_currMacroScope_2696_);
v___x_2719_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__33));
v___x_2720_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2698_);
lean_ctor_set(v___x_2720_, 1, v___x_2716_);
lean_ctor_set(v___x_2720_, 2, v___x_2718_);
lean_ctor_set(v___x_2720_, 3, v___x_2719_);
v___x_2721_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2715_, v___x_2720_);
v___x_2722_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2712_, v___x_2714_, v___x_2721_);
v___x_2723_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2724_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__65));
v___x_2725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2698_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__72, &l_Lasm_UI_Syntax_expandAttr___closed__72_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__72);
v___x_2727_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__73));
v___x_2728_ = l_Lean_addMacroScope(v_quotContext_2695_, v___x_2727_, v_currMacroScope_2696_);
v___x_2729_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__77));
v___x_2730_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2698_);
lean_ctor_set(v___x_2730_, 1, v___x_2726_);
lean_ctor_set(v___x_2730_, 2, v___x_2728_);
lean_ctor_set(v___x_2730_, 3, v___x_2729_);
v___x_2731_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2723_, v___x_2725_, v___x_2730_);
v___x_2732_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__93, &l_Lasm_UI_Syntax_expandAttr___closed__93_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__93);
v___x_2733_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__94));
v___x_2734_ = l_Lean_addMacroScope(v_quotContext_2695_, v___x_2733_, v_currMacroScope_2696_);
v___x_2735_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__98));
v___x_2736_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2698_);
lean_ctor_set(v___x_2736_, 1, v___x_2732_);
lean_ctor_set(v___x_2736_, 2, v___x_2734_);
lean_ctor_set(v___x_2736_, 3, v___x_2735_);
v___x_2737_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2702_, v___x_2736_);
v___x_2738_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2703_, v___x_2731_, v___x_2737_);
v___x_2739_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2698_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2711_, v___x_2722_, v___x_2738_, v___x_2740_);
v___x_2742_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2702_, v___x_2710_, v___x_2741_);
v___x_2743_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2703_, v___x_2708_, v___x_2742_);
v___x_2744_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2702_, v___x_2743_);
v___x_2745_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2698_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2699_, v___x_2701_, v___x_2744_, v___x_2746_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2747_);
v___x_2749_ = v___x_2693_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = lean_box(0);
v___x_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2749_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
lean_ctor_set(v___x_2752_, 1, v_a_2037_);
return v___x_2752_;
}
}
}
else
{
lean_object* v___x_2755_; uint8_t v___x_2756_; 
lean_dec(v___x_2690_);
v___x_2755_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__88));
v___x_2756_ = lean_string_dec_eq(v_name_2639_, v___x_2755_);
if (v___x_2756_ == 0)
{
uint8_t v___x_2757_; 
lean_inc_ref(v_name_2639_);
v___x_2757_ = l_Lasm_UI_Syntax_isEventName(v_name_2639_);
if (v___x_2757_ == 0)
{
lean_dec(v_a_2035_);
v___y_2641_ = v_a_2036_;
v___y_2642_ = v_a_2037_;
goto v___jp_2640_;
}
else
{
goto v___jp_2673_;
}
}
else
{
goto v___jp_2673_;
}
}
v___jp_2640_:
{
lean_object* v_quotContext_2643_; lean_object* v_currMacroScope_2644_; lean_object* v_ref_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_quotContext_2643_ = lean_ctor_get(v___y_2641_, 1);
v_currMacroScope_2644_ = lean_ctor_get(v___y_2641_, 2);
v_ref_2645_ = lean_ctor_get(v___y_2641_, 5);
v___x_2646_ = l_Lean_SourceInfo_fromRef(v_ref_2645_, v___x_2039_);
v___x_2647_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2648_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2646_, 8);
v___x_2649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2646_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2651_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_2652_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__9, &l_Lasm_UI_Syntax_expandAttr___closed__9_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__9);
v___x_2653_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__11));
lean_inc(v_currMacroScope_2644_);
lean_inc(v_quotContext_2643_);
v___x_2654_ = l_Lean_addMacroScope(v_quotContext_2643_, v___x_2653_, v_currMacroScope_2644_);
v___x_2655_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__15));
v___x_2656_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2646_);
lean_ctor_set(v___x_2656_, 1, v___x_2652_);
lean_ctor_set(v___x_2656_, 2, v___x_2654_);
lean_ctor_set(v___x_2656_, 3, v___x_2655_);
v___x_2657_ = lean_box(2);
v___x_2658_ = l_Lean_Syntax_mkStrLit(v_name_2639_, v___x_2657_);
v___x_2659_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2660_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__90));
v___x_2661_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2646_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = l_Lean_Syntax_node1(v___x_2646_, v___x_2659_, v___x_2661_);
v___x_2663_ = l_Lean_Syntax_node2(v___x_2646_, v___x_2650_, v___x_2658_, v___x_2662_);
v___x_2664_ = l_Lean_Syntax_node2(v___x_2646_, v___x_2651_, v___x_2656_, v___x_2663_);
v___x_2665_ = l_Lean_Syntax_node1(v___x_2646_, v___x_2650_, v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2667_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2646_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = l_Lean_Syntax_node3(v___x_2646_, v___x_2647_, v___x_2649_, v___x_2665_, v___x_2667_);
v___x_2669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
v___x_2670_ = lean_box(0);
v___x_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2669_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
lean_ctor_set(v___x_2672_, 1, v___y_2642_);
return v___x_2672_;
}
v___jp_2673_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v_a_2680_; lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
v___x_2674_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__91));
lean_inc_ref(v_name_2639_);
v___x_2675_ = lean_string_append(v_name_2639_, v___x_2674_);
v___x_2676_ = lean_string_append(v___x_2675_, v_name_2639_);
lean_dec_ref(v_name_2639_);
v___x_2677_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__86));
v___x_2678_ = lean_string_append(v___x_2676_, v___x_2677_);
v___x_2679_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2035_, v___x_2678_, v_a_2036_, v_a_2037_);
lean_dec(v_a_2035_);
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_a_2681_ = lean_ctor_get(v___x_2679_, 1);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2679_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2680_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
}
else
{
lean_object* v_ref_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v_ref_2758_ = lean_ctor_get(v_a_2036_, 5);
v___x_2759_ = lean_unsigned_to_nat(1u);
v___x_2760_ = l_Lean_Syntax_getArg(v_a_2035_, v___x_2759_);
lean_dec(v_a_2035_);
v___x_2761_ = 0;
v___x_2762_ = l_Lean_SourceInfo_fromRef(v_ref_2758_, v___x_2761_);
v___x_2763_ = ((lean_object*)(l_Lasm_UI_Syntax_attrsTerm___closed__1));
v___x_2764_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__99));
lean_inc(v___x_2762_);
v___x_2765_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2762_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Lean_Syntax_node2(v___x_2762_, v___x_2763_, v___x_2765_, v___x_2760_);
v___x_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2766_);
v___x_2768_ = lean_box(0);
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
lean_ctor_set(v___x_2770_, 1, v_a_2037_);
return v___x_2770_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr___boxed(lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lasm_UI_Syntax_expandAttr(v_a_2771_, v_a_2772_, v_a_2773_);
lean_dec_ref(v_a_2772_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(lean_object* v_00_u03b2_2775_, lean_object* v_x_2776_, lean_object* v_x_2777_){
_start:
{
lean_object* v___x_2778_; 
v___x_2778_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_2776_, v_x_2777_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___boxed(lean_object* v_00_u03b2_2779_, lean_object* v_x_2780_, lean_object* v_x_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(v_00_u03b2_2779_, v_x_2780_, v_x_2781_);
lean_dec(v_x_2781_);
lean_dec_ref(v_x_2780_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(lean_object* v_as_2787_, size_t v_i_2788_, size_t v_stop_2789_, lean_object* v_b_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
uint8_t v___x_2793_; 
v___x_2793_ = lean_usize_dec_eq(v_i_2788_, v_stop_2789_);
if (v___x_2793_ == 0)
{
lean_object* v_ref_2794_; size_t v___x_2795_; size_t v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_ref_2794_ = lean_ctor_get(v___y_2791_, 5);
v___x_2795_ = ((size_t)1ULL);
v___x_2796_ = lean_usize_sub(v_i_2788_, v___x_2795_);
v___x_2797_ = lean_array_uget_borrowed(v_as_2787_, v___x_2796_);
v___x_2798_ = l_Lean_SourceInfo_fromRef(v_ref_2794_, v___x_2793_);
v___x_2799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1));
v___x_2800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2));
lean_inc(v___x_2798_);
v___x_2801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2798_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
lean_inc(v___x_2797_);
v___x_2802_ = l_Lean_Syntax_node3(v___x_2798_, v___x_2799_, v___x_2797_, v___x_2801_, v_b_2790_);
v_i_2788_ = v___x_2796_;
v_b_2790_ = v___x_2802_;
goto _start;
}
else
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v_b_2790_);
lean_ctor_set(v___x_2804_, 1, v___y_2792_);
return v___x_2804_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___boxed(lean_object* v_as_2805_, lean_object* v_i_2806_, lean_object* v_stop_2807_, lean_object* v_b_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
size_t v_i_boxed_2811_; size_t v_stop_boxed_2812_; lean_object* v_res_2813_; 
v_i_boxed_2811_ = lean_unbox_usize(v_i_2806_);
lean_dec(v_i_2806_);
v_stop_boxed_2812_ = lean_unbox_usize(v_stop_2807_);
lean_dec(v_stop_2807_);
v_res_2813_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_as_2805_, v_i_boxed_2811_, v_stop_boxed_2812_, v_b_2808_, v___y_2809_, v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec_ref(v_as_2805_);
return v_res_2813_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Array_mkArray0___redArg();
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(lean_object* v___x_2816_, lean_object* v_singles_2817_, lean_object* v_tail_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
if (lean_obj_tag(v_tail_2818_) == 0)
{
lean_object* v_ref_2821_; uint8_t v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v_ref_2821_ = lean_ctor_get(v___y_2819_, 5);
v___x_2822_ = 0;
v___x_2823_ = l_Lean_SourceInfo_fromRef(v_ref_2821_, v___x_2822_);
v___x_2824_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2825_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_2823_, 3);
v___x_2826_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2823_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2828_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_2829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_2830_ = l_Lean_Syntax_SepArray_ofElems(v___x_2829_, v_singles_2817_);
v___x_2831_ = l_Array_append___redArg(v___x_2828_, v___x_2830_);
lean_dec_ref(v___x_2830_);
v___x_2832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2823_);
lean_ctor_set(v___x_2832_, 1, v___x_2827_);
lean_ctor_set(v___x_2832_, 2, v___x_2831_);
v___x_2833_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2834_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2823_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
v___x_2835_ = l_Lean_Syntax_node3(v___x_2823_, v___x_2824_, v___x_2826_, v___x_2832_, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
lean_ctor_set(v___x_2836_, 1, v___y_2820_);
return v___x_2836_;
}
else
{
lean_object* v_val_2837_; lean_object* v___x_2838_; uint8_t v___x_2839_; 
v_val_2837_ = lean_ctor_get(v_tail_2818_, 0);
lean_inc(v_val_2837_);
lean_dec_ref_known(v_tail_2818_, 1);
v___x_2838_ = lean_array_get_size(v_singles_2817_);
v___x_2839_ = lean_nat_dec_lt(v___x_2816_, v___x_2838_);
if (v___x_2839_ == 0)
{
lean_object* v___x_2840_; 
v___x_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2840_, 0, v_val_2837_);
lean_ctor_set(v___x_2840_, 1, v___y_2820_);
return v___x_2840_;
}
else
{
size_t v___x_2841_; size_t v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = lean_usize_of_nat(v___x_2838_);
v___x_2842_ = ((size_t)0ULL);
v___x_2843_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_singles_2817_, v___x_2841_, v___x_2842_, v_val_2837_, v___y_2819_, v___y_2820_);
return v___x_2843_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___boxed(lean_object* v___x_2844_, lean_object* v_singles_2845_, lean_object* v_tail_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2844_, v_singles_2845_, v_tail_2846_, v___y_2847_, v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec_ref(v_singles_2845_);
lean_dec(v___x_2844_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(lean_object* v_as_2856_, size_t v_sz_2857_, size_t v_i_2858_, lean_object* v_b_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_a_2863_; lean_object* v_a_2864_; uint8_t v___x_2868_; 
v___x_2868_ = lean_usize_dec_lt(v_i_2858_, v_sz_2857_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v_b_2859_);
lean_ctor_set(v___x_2869_, 1, v___y_2861_);
return v___x_2869_;
}
else
{
lean_object* v_fst_2870_; lean_object* v_snd_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2942_; 
v_fst_2870_ = lean_ctor_get(v_b_2859_, 0);
v_snd_2871_ = lean_ctor_get(v_b_2859_, 1);
v_isSharedCheck_2942_ = !lean_is_exclusive(v_b_2859_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2873_ = v_b_2859_;
v_isShared_2874_ = v_isSharedCheck_2942_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_snd_2871_);
lean_inc(v_fst_2870_);
lean_dec(v_b_2859_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2942_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2875_; lean_object* v_singles_2876_; lean_object* v_____do__lift_2878_; lean_object* v___y_2879_; lean_object* v_____do__lift_2885_; lean_object* v___y_2886_; lean_object* v_a_2889_; lean_object* v___x_2890_; uint8_t v___x_2891_; 
v___x_2875_ = lean_unsigned_to_nat(0u);
v_singles_2876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_a_2889_ = lean_array_uget_borrowed(v_as_2856_, v_i_2858_);
v___x_2890_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc(v_a_2889_);
v___x_2891_ = l_Lean_Syntax_isOfKind(v_a_2889_, v___x_2890_);
if (v___x_2891_ == 0)
{
lean_object* v___x_2911_; uint8_t v___x_2912_; 
lean_del_object(v___x_2873_);
v___x_2911_ = lean_array_get_size(v_snd_2871_);
v___x_2912_ = lean_nat_dec_eq(v___x_2911_, v___x_2875_);
if (v___x_2912_ == 0)
{
goto v___jp_2892_;
}
else
{
if (lean_obj_tag(v_fst_2870_) == 0)
{
lean_dec(v_snd_2871_);
lean_inc(v_a_2889_);
v_____do__lift_2885_ = v_a_2889_;
v___y_2886_ = v___y_2861_;
goto v___jp_2884_;
}
else
{
goto v___jp_2892_;
}
}
}
else
{
lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2913_ = lean_unsigned_to_nat(1u);
v___x_2914_ = l_Lean_Syntax_getArg(v_a_2889_, v___x_2913_);
lean_inc(v___x_2914_);
v___x_2915_ = l_Lean_Syntax_matchesNull(v___x_2914_, v___x_2913_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2935_; uint8_t v___x_2936_; 
lean_dec(v___x_2914_);
v___x_2935_ = lean_array_get_size(v_snd_2871_);
v___x_2936_ = lean_nat_dec_eq(v___x_2935_, v___x_2875_);
if (v___x_2936_ == 0)
{
goto v___jp_2916_;
}
else
{
if (lean_obj_tag(v_fst_2870_) == 0)
{
lean_dec(v_snd_2871_);
lean_inc(v_a_2889_);
v_____do__lift_2878_ = v_a_2889_;
v___y_2879_ = v___y_2861_;
goto v___jp_2877_;
}
else
{
goto v___jp_2916_;
}
}
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
lean_del_object(v___x_2873_);
v___x_2937_ = l_Lean_Syntax_getArg(v___x_2914_, v___x_2875_);
lean_dec(v___x_2914_);
v___x_2938_ = lean_mk_empty_array_with_capacity(v___x_2913_);
v___x_2939_ = lean_array_push(v___x_2938_, v___x_2937_);
v___x_2940_ = l_Array_append___redArg(v___x_2939_, v_snd_2871_);
lean_dec(v_snd_2871_);
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v_fst_2870_);
lean_ctor_set(v___x_2941_, 1, v___x_2940_);
v_a_2863_ = v___x_2941_;
v_a_2864_ = v___y_2861_;
goto v___jp_2862_;
}
v___jp_2916_:
{
lean_object* v___x_2917_; 
v___x_2917_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2875_, v_snd_2871_, v_fst_2870_, v___y_2860_, v___y_2861_);
lean_dec(v_snd_2871_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v_a_2919_; lean_object* v_ref_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
lean_inc(v_a_2918_);
v_a_2919_ = lean_ctor_get(v___x_2917_, 1);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2917_, 2);
v_ref_2920_ = lean_ctor_get(v___y_2860_, 5);
v___x_2921_ = l_Lean_SourceInfo_fromRef(v_ref_2920_, v___x_2915_);
v___x_2922_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_2923_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_2921_);
v___x_2924_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2921_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
lean_inc(v_a_2889_);
v___x_2925_ = l_Lean_Syntax_node3(v___x_2921_, v___x_2922_, v_a_2889_, v___x_2924_, v_a_2918_);
v_____do__lift_2878_ = v___x_2925_;
v___y_2879_ = v_a_2919_;
goto v___jp_2877_;
}
else
{
lean_object* v_a_2926_; lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_del_object(v___x_2873_);
v_a_2926_ = lean_ctor_get(v___x_2917_, 0);
v_a_2927_ = lean_ctor_get(v___x_2917_, 1);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2917_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_inc(v_a_2926_);
lean_dec(v___x_2917_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2926_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
v___jp_2877_:
{
lean_object* v___x_2880_; lean_object* v___x_2882_; 
v___x_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2880_, 0, v_____do__lift_2878_);
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 1, v_singles_2876_);
lean_ctor_set(v___x_2873_, 0, v___x_2880_);
v___x_2882_ = v___x_2873_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2880_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_singles_2876_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
v_a_2863_ = v___x_2882_;
v_a_2864_ = v___y_2879_;
goto v___jp_2862_;
}
}
v___jp_2884_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2887_, 0, v_____do__lift_2885_);
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
lean_ctor_set(v___x_2888_, 1, v_singles_2876_);
v_a_2863_ = v___x_2888_;
v_a_2864_ = v___y_2886_;
goto v___jp_2862_;
}
v___jp_2892_:
{
lean_object* v___x_2893_; 
v___x_2893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2875_, v_snd_2871_, v_fst_2870_, v___y_2860_, v___y_2861_);
lean_dec(v_snd_2871_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v_a_2895_; lean_object* v_ref_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
v_a_2895_ = lean_ctor_get(v___x_2893_, 1);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2893_, 2);
v_ref_2896_ = lean_ctor_get(v___y_2860_, 5);
v___x_2897_ = l_Lean_SourceInfo_fromRef(v_ref_2896_, v___x_2891_);
v___x_2898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_2899_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_2897_);
v___x_2900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2897_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
lean_inc(v_a_2889_);
v___x_2901_ = l_Lean_Syntax_node3(v___x_2897_, v___x_2898_, v_a_2889_, v___x_2900_, v_a_2894_);
v_____do__lift_2885_ = v___x_2901_;
v___y_2886_ = v_a_2895_;
goto v___jp_2884_;
}
else
{
lean_object* v_a_2902_; lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
v_a_2902_ = lean_ctor_get(v___x_2893_, 0);
v_a_2903_ = lean_ctor_get(v___x_2893_, 1);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2893_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_inc(v_a_2902_);
lean_dec(v___x_2893_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2902_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
}
v___jp_2862_:
{
size_t v___x_2865_; size_t v___x_2866_; 
v___x_2865_ = ((size_t)1ULL);
v___x_2866_ = lean_usize_add(v_i_2858_, v___x_2865_);
v_i_2858_ = v___x_2866_;
v_b_2859_ = v_a_2863_;
v___y_2861_ = v_a_2864_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___boxed(lean_object* v_as_2943_, lean_object* v_sz_2944_, lean_object* v_i_2945_, lean_object* v_b_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
size_t v_sz_boxed_2949_; size_t v_i_boxed_2950_; lean_object* v_res_2951_; 
v_sz_boxed_2949_ = lean_unbox_usize(v_sz_2944_);
lean_dec(v_sz_2944_);
v_i_boxed_2950_ = lean_unbox_usize(v_i_2945_);
lean_dec(v_i_2945_);
v_res_2951_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v_as_2943_, v_sz_boxed_2949_, v_i_boxed_2950_, v_b_2946_, v___y_2947_, v___y_2948_);
lean_dec_ref(v___y_2947_);
lean_dec_ref(v_as_2943_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists(lean_object* v_parts_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; size_t v_sz_2961_; size_t v___x_2962_; lean_object* v___x_2963_; 
v___x_2958_ = lean_unsigned_to_nat(0u);
v___x_2959_ = l_Array_reverse___redArg(v_parts_2955_);
v___x_2960_ = ((lean_object*)(l_Lasm_UI_Syntax_concatLists___closed__0));
v_sz_2961_ = lean_array_size(v___x_2959_);
v___x_2962_ = ((size_t)0ULL);
v___x_2963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v___x_2959_, v_sz_2961_, v___x_2962_, v___x_2960_, v_a_2956_, v_a_2957_);
lean_dec_ref(v___x_2959_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v_fst_2965_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
v_fst_2965_ = lean_ctor_get(v_a_2964_, 0);
if (lean_obj_tag(v_fst_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2996_; 
v_a_2966_ = lean_ctor_get(v___x_2963_, 1);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2996_ == 0)
{
lean_object* v_unused_2997_; 
v_unused_2997_ = lean_ctor_get(v___x_2963_, 0);
lean_dec(v_unused_2997_);
v___x_2968_ = v___x_2963_;
v_isShared_2969_ = v_isSharedCheck_2996_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2963_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2996_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v_snd_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2994_; 
v_snd_2970_ = lean_ctor_get(v_a_2964_, 1);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_a_2964_);
if (v_isSharedCheck_2994_ == 0)
{
lean_object* v_unused_2995_; 
v_unused_2995_ = lean_ctor_get(v_a_2964_, 0);
lean_dec(v_unused_2995_);
v___x_2972_ = v_a_2964_;
v_isShared_2973_ = v_isSharedCheck_2994_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_snd_2970_);
lean_dec(v_a_2964_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2994_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v_ref_2974_; uint8_t v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
v_ref_2974_ = lean_ctor_get(v_a_2956_, 5);
v___x_2975_ = 0;
v___x_2976_ = l_Lean_SourceInfo_fromRef(v_ref_2974_, v___x_2975_);
v___x_2977_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_2978_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc(v___x_2976_);
if (v_isShared_2973_ == 0)
{
lean_ctor_set_tag(v___x_2972_, 2);
lean_ctor_set(v___x_2972_, 1, v___x_2978_);
lean_ctor_set(v___x_2972_, 0, v___x_2976_);
v___x_2980_ = v___x_2972_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2976_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2991_; 
v___x_2981_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_2982_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_2983_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_2984_ = l_Lean_Syntax_SepArray_ofElems(v___x_2983_, v_snd_2970_);
lean_dec(v_snd_2970_);
v___x_2985_ = l_Array_append___redArg(v___x_2982_, v___x_2984_);
lean_dec_ref(v___x_2984_);
lean_inc_n(v___x_2976_, 2);
v___x_2986_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2976_);
lean_ctor_set(v___x_2986_, 1, v___x_2981_);
lean_ctor_set(v___x_2986_, 2, v___x_2985_);
v___x_2987_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2976_);
lean_ctor_set(v___x_2988_, 1, v___x_2987_);
v___x_2989_ = l_Lean_Syntax_node3(v___x_2976_, v___x_2977_, v___x_2980_, v___x_2986_, v___x_2988_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2989_);
v___x_2991_ = v___x_2968_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2989_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v_a_2966_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3011_; 
lean_inc_ref(v_fst_2965_);
v_a_2998_ = lean_ctor_get(v___x_2963_, 1);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3011_ == 0)
{
lean_object* v_unused_3012_; 
v_unused_3012_ = lean_ctor_get(v___x_2963_, 0);
lean_dec(v_unused_3012_);
v___x_3000_ = v___x_2963_;
v_isShared_3001_ = v_isSharedCheck_3011_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2963_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3011_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v_snd_3002_; lean_object* v_val_3003_; lean_object* v___x_3004_; uint8_t v___x_3005_; 
v_snd_3002_ = lean_ctor_get(v_a_2964_, 1);
lean_inc(v_snd_3002_);
lean_dec(v_a_2964_);
v_val_3003_ = lean_ctor_get(v_fst_2965_, 0);
lean_inc(v_val_3003_);
lean_dec_ref_known(v_fst_2965_, 1);
v___x_3004_ = lean_array_get_size(v_snd_3002_);
v___x_3005_ = lean_nat_dec_lt(v___x_2958_, v___x_3004_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3007_; 
lean_dec(v_snd_3002_);
if (v_isShared_3001_ == 0)
{
lean_ctor_set(v___x_3000_, 0, v_val_3003_);
v___x_3007_ = v___x_3000_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_val_3003_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v_a_2998_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
else
{
size_t v___x_3009_; lean_object* v___x_3010_; 
lean_del_object(v___x_3000_);
v___x_3009_ = lean_usize_of_nat(v___x_3004_);
v___x_3010_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_snd_3002_, v___x_3009_, v___x_2962_, v_val_3003_, v_a_2956_, v_a_2998_);
lean_dec(v_snd_3002_);
return v___x_3010_;
}
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
v_a_3013_ = lean_ctor_get(v___x_2963_, 0);
v_a_3014_ = lean_ctor_get(v___x_2963_, 1);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_2963_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_inc(v_a_3013_);
lean_dec(v___x_2963_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3013_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists___boxed(lean_object* v_parts_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Lasm_UI_Syntax_concatLists(v_parts_3022_, v_a_3023_, v_a_3024_);
lean_dec_ref(v_a_3023_);
return v_res_3025_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__1(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__0));
v___x_3028_ = l_String_toRawSubstring_x27(v___x_3027_);
return v___x_3028_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__10(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__9));
v___x_3049_ = l_String_toRawSubstring_x27(v___x_3048_);
return v___x_3049_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__18(void){
_start:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3068_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__17));
v___x_3069_ = l_String_toRawSubstring_x27(v___x_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm(uint8_t v_x_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_){
_start:
{
switch(v_x_3087_)
{
case 0:
{
lean_object* v_quotContext_3090_; lean_object* v_currMacroScope_3091_; lean_object* v_ref_3092_; uint8_t v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v_quotContext_3090_ = lean_ctor_get(v_a_3088_, 1);
v_currMacroScope_3091_ = lean_ctor_get(v_a_3088_, 2);
v_ref_3092_ = lean_ctor_get(v_a_3088_, 5);
v___x_3093_ = 0;
v___x_3094_ = l_Lean_SourceInfo_fromRef(v_ref_3092_, v___x_3093_);
v___x_3095_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__1, &l_Lasm_UI_Syntax_nsTerm___closed__1_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__1);
v___x_3096_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__4));
lean_inc(v_currMacroScope_3091_);
lean_inc(v_quotContext_3090_);
v___x_3097_ = l_Lean_addMacroScope(v_quotContext_3090_, v___x_3096_, v_currMacroScope_3091_);
v___x_3098_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__8));
v___x_3099_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3094_);
lean_ctor_set(v___x_3099_, 1, v___x_3095_);
lean_ctor_set(v___x_3099_, 2, v___x_3097_);
lean_ctor_set(v___x_3099_, 3, v___x_3098_);
v___x_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
lean_ctor_set(v___x_3100_, 1, v_a_3089_);
return v___x_3100_;
}
case 1:
{
lean_object* v_quotContext_3101_; lean_object* v_currMacroScope_3102_; lean_object* v_ref_3103_; uint8_t v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_quotContext_3101_ = lean_ctor_get(v_a_3088_, 1);
v_currMacroScope_3102_ = lean_ctor_get(v_a_3088_, 2);
v_ref_3103_ = lean_ctor_get(v_a_3088_, 5);
v___x_3104_ = 0;
v___x_3105_ = l_Lean_SourceInfo_fromRef(v_ref_3103_, v___x_3104_);
v___x_3106_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__10, &l_Lasm_UI_Syntax_nsTerm___closed__10_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__10);
v___x_3107_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__12));
lean_inc(v_currMacroScope_3102_);
lean_inc(v_quotContext_3101_);
v___x_3108_ = l_Lean_addMacroScope(v_quotContext_3101_, v___x_3107_, v_currMacroScope_3102_);
v___x_3109_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__16));
v___x_3110_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3105_);
lean_ctor_set(v___x_3110_, 1, v___x_3106_);
lean_ctor_set(v___x_3110_, 2, v___x_3108_);
lean_ctor_set(v___x_3110_, 3, v___x_3109_);
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
lean_ctor_set(v___x_3111_, 1, v_a_3089_);
return v___x_3111_;
}
default: 
{
lean_object* v_quotContext_3112_; lean_object* v_currMacroScope_3113_; lean_object* v_ref_3114_; uint8_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v_quotContext_3112_ = lean_ctor_get(v_a_3088_, 1);
v_currMacroScope_3113_ = lean_ctor_get(v_a_3088_, 2);
v_ref_3114_ = lean_ctor_get(v_a_3088_, 5);
v___x_3115_ = 0;
v___x_3116_ = l_Lean_SourceInfo_fromRef(v_ref_3114_, v___x_3115_);
v___x_3117_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__18, &l_Lasm_UI_Syntax_nsTerm___closed__18_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__18);
v___x_3118_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__20));
lean_inc(v_currMacroScope_3113_);
lean_inc(v_quotContext_3112_);
v___x_3119_ = l_Lean_addMacroScope(v_quotContext_3112_, v___x_3118_, v_currMacroScope_3113_);
v___x_3120_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__24));
v___x_3121_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3116_);
lean_ctor_set(v___x_3121_, 1, v___x_3117_);
lean_ctor_set(v___x_3121_, 2, v___x_3119_);
lean_ctor_set(v___x_3121_, 3, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
lean_ctor_set(v___x_3122_, 1, v_a_3089_);
return v___x_3122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm___boxed(lean_object* v_x_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_){
_start:
{
uint8_t v_x_3972__boxed_3126_; lean_object* v_res_3127_; 
v_x_3972__boxed_3126_ = lean_unbox(v_x_3123_);
v_res_3127_ = l_Lasm_UI_Syntax_nsTerm(v_x_3972__boxed_3126_, v_a_3124_, v_a_3125_);
lean_dec_ref(v_a_3124_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(lean_object* v_as_3129_, size_t v_sz_3130_, size_t v_i_3131_, lean_object* v_b_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v_a_3136_; lean_object* v_a_3137_; uint8_t v___x_3141_; 
v___x_3141_ = lean_usize_dec_lt(v_i_3131_, v_sz_3130_);
if (v___x_3141_ == 0)
{
lean_object* v___x_3142_; 
v___x_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3142_, 0, v_b_3132_);
lean_ctor_set(v___x_3142_, 1, v___y_3134_);
return v___x_3142_;
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3144_; 
v_a_3143_ = lean_array_uget_borrowed(v_as_3129_, v_i_3131_);
lean_inc(v_a_3143_);
v___x_3144_ = l_Lasm_UI_Syntax_expandAttr(v_a_3143_, v___y_3133_, v___y_3134_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v_a_3146_; lean_object* v_fst_3147_; lean_object* v_snd_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3185_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
lean_inc(v_a_3145_);
v_a_3146_ = lean_ctor_get(v___x_3144_, 1);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3144_, 2);
v_fst_3147_ = lean_ctor_get(v_a_3145_, 0);
v_snd_3148_ = lean_ctor_get(v_a_3145_, 1);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_a_3145_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3150_ = v_a_3145_;
v_isShared_3151_ = v_isSharedCheck_3185_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_snd_3148_);
lean_inc(v_fst_3147_);
lean_dec(v_a_3145_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3185_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v_fst_3158_; lean_object* v_snd_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3184_; 
v_fst_3158_ = lean_ctor_get(v_b_3132_, 0);
v_snd_3159_ = lean_ctor_get(v_b_3132_, 1);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_b_3132_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3161_ = v_b_3132_;
v_isShared_3162_ = v_isSharedCheck_3184_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_snd_3159_);
lean_inc(v_fst_3158_);
lean_dec(v_b_3132_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3184_;
goto v_resetjp_3160_;
}
v___jp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3151_ == 0)
{
lean_ctor_set(v___x_3150_, 0, v___y_3153_);
v___x_3156_ = v___x_3150_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v___y_3153_);
lean_ctor_set(v_reuseFailAlloc_3157_, 1, v_snd_3148_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
v_a_3136_ = v___x_3156_;
v_a_3137_ = v___y_3154_;
goto v___jp_3135_;
}
}
v_resetjp_3160_:
{
lean_object* v_attrTerms_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; 
if (lean_obj_tag(v_fst_3147_) == 1)
{
lean_object* v_val_3182_; lean_object* v___x_3183_; 
v_val_3182_ = lean_ctor_get(v_fst_3147_, 0);
lean_inc(v_val_3182_);
lean_dec_ref_known(v_fst_3147_, 1);
v___x_3183_ = lean_array_push(v_fst_3158_, v_val_3182_);
v_attrTerms_3164_ = v___x_3183_;
v___y_3165_ = v___y_3133_;
v___y_3166_ = v_a_3146_;
goto v___jp_3163_;
}
else
{
lean_dec(v_fst_3147_);
v_attrTerms_3164_ = v_fst_3158_;
v___y_3165_ = v___y_3133_;
v___y_3166_ = v_a_3146_;
goto v___jp_3163_;
}
v___jp_3163_:
{
if (lean_obj_tag(v_snd_3148_) == 1)
{
lean_del_object(v___x_3161_);
if (lean_obj_tag(v_snd_3159_) == 0)
{
v___y_3153_ = v_attrTerms_3164_;
v___y_3154_ = v___y_3166_;
goto v___jp_3152_;
}
else
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_dec_ref_known(v_snd_3159_, 1);
v___x_3167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0));
v___x_3168_ = l_Lean_Macro_throwErrorAt___redArg(v_a_3143_, v___x_3167_, v___y_3165_, v___y_3166_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 1);
lean_inc(v_a_3169_);
lean_dec_ref_known(v___x_3168_, 2);
v___y_3153_ = v_attrTerms_3164_;
v___y_3154_ = v_a_3169_;
goto v___jp_3152_;
}
else
{
lean_object* v_a_3170_; lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec_ref_known(v_snd_3148_, 1);
lean_dec_ref(v_attrTerms_3164_);
lean_del_object(v___x_3150_);
v_a_3170_ = lean_ctor_get(v___x_3168_, 0);
v_a_3171_ = lean_ctor_get(v___x_3168_, 1);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3168_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_inc(v_a_3170_);
lean_dec(v___x_3168_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3170_);
lean_ctor_set(v_reuseFailAlloc_3177_, 1, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
else
{
lean_object* v___x_3180_; 
lean_del_object(v___x_3150_);
lean_dec(v_snd_3148_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 0, v_attrTerms_3164_);
v___x_3180_ = v___x_3161_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_attrTerms_3164_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v_snd_3159_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
v_a_3136_ = v___x_3180_;
v_a_3137_ = v___y_3166_;
goto v___jp_3135_;
}
}
}
}
}
}
else
{
lean_object* v_a_3186_; lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_dec_ref(v_b_3132_);
v_a_3186_ = lean_ctor_get(v___x_3144_, 0);
v_a_3187_ = lean_ctor_get(v___x_3144_, 1);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_3144_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_inc(v_a_3186_);
lean_dec(v___x_3144_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3186_);
lean_ctor_set(v_reuseFailAlloc_3193_, 1, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
}
}
}
}
v___jp_3135_:
{
size_t v___x_3138_; size_t v___x_3139_; 
v___x_3138_ = ((size_t)1ULL);
v___x_3139_ = lean_usize_add(v_i_3131_, v___x_3138_);
v_i_3131_ = v___x_3139_;
v_b_3132_ = v_a_3136_;
v___y_3134_ = v_a_3137_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___boxed(lean_object* v_as_3195_, lean_object* v_sz_3196_, lean_object* v_i_3197_, lean_object* v_b_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
size_t v_sz_boxed_3201_; size_t v_i_boxed_3202_; lean_object* v_res_3203_; 
v_sz_boxed_3201_ = lean_unbox_usize(v_sz_3196_);
lean_dec(v_sz_3196_);
v_i_boxed_3202_ = lean_unbox_usize(v_i_3197_);
lean_dec(v_i_3197_);
v_res_3203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v_as_3195_, v_sz_boxed_3201_, v_i_boxed_3202_, v_b_3198_, v___y_3199_, v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec_ref(v_as_3195_);
return v_res_3203_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(lean_object* v_s_3204_, lean_object* v_a_3205_, uint8_t v_b_3206_){
_start:
{
lean_object* v_str_3207_; lean_object* v_startInclusive_3208_; lean_object* v_endExclusive_3209_; lean_object* v___x_3210_; uint8_t v_decide_3211_; 
v_str_3207_ = lean_ctor_get(v_s_3204_, 0);
v_startInclusive_3208_ = lean_ctor_get(v_s_3204_, 1);
v_endExclusive_3209_ = lean_ctor_get(v_s_3204_, 2);
v___x_3210_ = lean_nat_sub(v_endExclusive_3209_, v_startInclusive_3208_);
v_decide_3211_ = lean_nat_dec_eq(v_a_3205_, v___x_3210_);
lean_dec(v___x_3210_);
if (v_decide_3211_ == 0)
{
lean_object* v___x_3212_; uint32_t v___x_3213_; uint32_t v___x_3214_; uint8_t v___x_3215_; 
v___x_3212_ = lean_nat_add(v_startInclusive_3208_, v_a_3205_);
lean_dec(v_a_3205_);
v___x_3213_ = lean_string_utf8_get_fast(v_str_3207_, v___x_3212_);
v___x_3214_ = 45;
v___x_3215_ = lean_uint32_dec_eq(v___x_3213_, v___x_3214_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3216_ = lean_string_utf8_next_fast(v_str_3207_, v___x_3212_);
lean_dec(v___x_3212_);
v___x_3217_ = lean_nat_sub(v___x_3216_, v_startInclusive_3208_);
v_a_3205_ = v___x_3217_;
v_b_3206_ = v___x_3215_;
goto _start;
}
else
{
lean_dec(v___x_3212_);
return v___x_3215_;
}
}
else
{
lean_dec(v_a_3205_);
return v_b_3206_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg___boxed(lean_object* v_s_3219_, lean_object* v_a_3220_, lean_object* v_b_3221_){
_start:
{
uint8_t v_b_boxed_3222_; uint8_t v_res_3223_; lean_object* v_r_3224_; 
v_b_boxed_3222_ = lean_unbox(v_b_3221_);
v_res_3223_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3219_, v_a_3220_, v_b_boxed_3222_);
lean_dec_ref(v_s_3219_);
v_r_3224_ = lean_box(v_res_3223_);
return v_r_3224_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(lean_object* v_s_3225_){
_start:
{
lean_object* v_searcher_3226_; uint8_t v___x_3227_; uint8_t v___x_3228_; 
v_searcher_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = 0;
v___x_3228_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3225_, v_searcher_3226_, v___x_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2___boxed(lean_object* v_s_3229_){
_start:
{
uint8_t v_res_3230_; lean_object* v_r_3231_; 
v_res_3230_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v_s_3229_);
lean_dec_ref(v_s_3229_);
v_r_3231_ = lean_box(v_res_3230_);
return v_r_3231_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandChild___closed__1(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3233_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__0));
v___x_3234_ = l_String_toRawSubstring_x27(v___x_3233_);
return v___x_3234_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__1(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__0));
v___x_3249_ = l_String_toRawSubstring_x27(v___x_3248_);
return v___x_3249_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__9(void){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__8));
v___x_3269_ = l_String_toRawSubstring_x27(v___x_3268_);
return v___x_3269_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__15(void){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__14));
v___x_3283_ = l_String_toRawSubstring_x27(v___x_3282_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement(uint8_t v_ns_3308_, lean_object* v_e_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_){
_start:
{
lean_object* v___y_3313_; lean_object* v___y_3314_; uint8_t v___y_3315_; lean_object* v___y_3316_; lean_object* v_keyTerm_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; uint8_t v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v_childTerms_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___x_3387_; lean_object* v___y_3389_; uint8_t v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; size_t v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; uint8_t v___y_3399_; lean_object* v___y_3484_; uint8_t v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; uint8_t v___y_3523_; uint8_t v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v___y_3552_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v_fst_3611_; lean_object* v_fst_3612_; lean_object* v_fst_3613_; lean_object* v_val_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v_fst_3639_; lean_object* v_fst_3640_; lean_object* v_fst_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; lean_object* v_____x_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___x_3659_; uint8_t v___x_3660_; 
v___x_3387_ = lean_box(0);
v___x_3659_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__1));
lean_inc(v_e_3309_);
v___x_3660_ = l_Lean_Syntax_isOfKind(v_e_3309_, v___x_3659_);
if (v___x_3660_ == 0)
{
lean_object* v___x_3661_; uint8_t v___x_3662_; 
v___x_3661_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__1));
lean_inc(v_e_3309_);
v___x_3662_ = l_Lean_Syntax_isOfKind(v_e_3309_, v___x_3661_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3664_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3309_, v___x_3663_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v_a_3666_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
v_a_3666_ = lean_ctor_get(v___x_3664_, 1);
lean_inc(v_a_3666_);
lean_dec_ref_known(v___x_3664_, 2);
v_____x_3646_ = v_a_3665_;
v___y_3647_ = v_a_3310_;
v___y_3648_ = v_a_3666_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3667_; lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3675_; 
lean_dec(v_e_3309_);
v_a_3667_ = lean_ctor_get(v___x_3664_, 0);
v_a_3668_ = lean_ctor_get(v___x_3664_, 1);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3670_ = v___x_3664_;
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_inc(v_a_3667_);
lean_dec(v___x_3664_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3673_; 
if (v_isShared_3671_ == 0)
{
v___x_3673_ = v___x_3670_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3667_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_a_3668_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
}
else
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; uint8_t v___x_3679_; 
v___x_3676_ = lean_unsigned_to_nat(1u);
v___x_3677_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3676_);
v___x_3678_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3677_);
v___x_3679_ = l_Lean_Syntax_isOfKind(v___x_3677_, v___x_3678_);
if (v___x_3679_ == 0)
{
lean_object* v___x_3680_; lean_object* v___x_3681_; 
lean_dec(v___x_3677_);
v___x_3680_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3681_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3309_, v___x_3680_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v_a_3683_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
v_a_3683_ = lean_ctor_get(v___x_3681_, 1);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3681_, 2);
v_____x_3646_ = v_a_3682_;
v___y_3647_ = v_a_3310_;
v___y_3648_ = v_a_3683_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3684_; lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_dec(v_e_3309_);
v_a_3684_ = lean_ctor_get(v___x_3681_, 0);
v_a_3685_ = lean_ctor_get(v___x_3681_, 1);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3681_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_inc(v_a_3684_);
lean_dec(v___x_3681_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3684_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v___x_3693_; lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3693_ = lean_unsigned_to_nat(6u);
v___x_3694_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3693_);
lean_inc(v___x_3694_);
v___x_3695_ = l_Lean_Syntax_isOfKind(v___x_3694_, v___x_3678_);
if (v___x_3695_ == 0)
{
lean_object* v___x_3696_; lean_object* v___x_3697_; 
lean_dec(v___x_3694_);
lean_dec(v___x_3677_);
v___x_3696_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3697_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3309_, v___x_3696_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_a_3698_; lean_object* v_a_3699_; 
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3698_);
v_a_3699_ = lean_ctor_get(v___x_3697_, 1);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___x_3697_, 2);
v_____x_3646_ = v_a_3698_;
v___y_3647_ = v_a_3310_;
v___y_3648_ = v_a_3699_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3700_; lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v_e_3309_);
v_a_3700_ = lean_ctor_get(v___x_3697_, 0);
v_a_3701_ = lean_ctor_get(v___x_3697_, 1);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3697_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_inc(v_a_3700_);
lean_dec(v___x_3697_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3700_);
lean_ctor_set(v_reuseFailAlloc_3707_, 1, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v_cs_3713_; lean_object* v_as_3714_; size_t v_sz_3715_; size_t v___x_3716_; lean_object* v___x_3717_; size_t v_sz_3718_; lean_object* v___x_3719_; 
v___x_3709_ = lean_unsigned_to_nat(2u);
v___x_3710_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3709_);
v___x_3711_ = lean_unsigned_to_nat(4u);
v___x_3712_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3711_);
v_cs_3713_ = l_Lean_Syntax_getArgs(v___x_3712_);
lean_dec(v___x_3712_);
v_as_3714_ = l_Lean_Syntax_getArgs(v___x_3710_);
lean_dec(v___x_3710_);
v_sz_3715_ = lean_array_size(v_as_3714_);
v___x_3716_ = ((size_t)0ULL);
v___x_3717_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3715_, v___x_3716_, v_as_3714_);
v_sz_3718_ = lean_array_size(v_cs_3713_);
v___x_3719_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3718_, v___x_3716_, v_cs_3713_);
v_fst_3611_ = v___x_3677_;
v_fst_3612_ = v___x_3717_;
v_fst_3613_ = v___x_3719_;
v_val_3614_ = v___x_3694_;
v___y_3615_ = v_a_3310_;
v___y_3616_ = v_a_3311_;
goto v___jp_3610_;
}
}
}
}
else
{
lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; uint8_t v___x_3723_; 
v___x_3720_ = lean_unsigned_to_nat(1u);
v___x_3721_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3720_);
v___x_3722_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3721_);
v___x_3723_ = l_Lean_Syntax_isOfKind(v___x_3721_, v___x_3722_);
if (v___x_3723_ == 0)
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
lean_dec(v___x_3721_);
v___x_3724_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3725_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3309_, v___x_3724_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; lean_object* v_a_3727_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3726_);
v_a_3727_ = lean_ctor_get(v___x_3725_, 1);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3725_, 2);
v_____x_3646_ = v_a_3726_;
v___y_3647_ = v_a_3310_;
v___y_3648_ = v_a_3727_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3728_; lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3736_; 
lean_dec(v_e_3309_);
v_a_3728_ = lean_ctor_get(v___x_3725_, 0);
v_a_3729_ = lean_ctor_get(v___x_3725_, 1);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3731_ = v___x_3725_;
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_inc(v_a_3728_);
lean_dec(v___x_3725_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3728_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
}
else
{
lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v_as_3739_; size_t v_sz_3740_; size_t v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3737_ = lean_unsigned_to_nat(2u);
v___x_3738_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3737_);
v_as_3739_ = l_Lean_Syntax_getArgs(v___x_3738_);
lean_dec(v___x_3738_);
v_sz_3740_ = lean_array_size(v_as_3739_);
v___x_3741_ = ((size_t)0ULL);
v___x_3742_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3740_, v___x_3741_, v_as_3739_);
v___x_3743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_fst_3639_ = v___x_3721_;
v_fst_3640_ = v___x_3742_;
v_fst_3641_ = v___x_3743_;
v___y_3642_ = v_a_3310_;
v___y_3643_ = v_a_3311_;
goto v___jp_3638_;
}
}
v___jp_3312_:
{
lean_object* v___x_3320_; 
v___x_3320_ = l_Lasm_UI_Syntax_nsTerm(v___y_3315_, v___y_3318_, v___y_3319_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3345_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
v_a_3322_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3324_ = v___x_3320_;
v_isShared_3325_ = v_isSharedCheck_3345_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_inc(v_a_3321_);
lean_dec(v___x_3320_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3345_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v_quotContext_3326_; lean_object* v_currMacroScope_3327_; lean_object* v_ref_3328_; uint8_t v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3343_; 
v_quotContext_3326_ = lean_ctor_get(v___y_3318_, 1);
v_currMacroScope_3327_ = lean_ctor_get(v___y_3318_, 2);
v_ref_3328_ = lean_ctor_get(v___y_3318_, 5);
v___x_3329_ = 0;
v___x_3330_ = l_Lean_SourceInfo_fromRef(v_ref_3328_, v___x_3329_);
v___x_3331_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3332_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__1, &l_Lasm_UI_Syntax_expandElement___closed__1_once, _init_l_Lasm_UI_Syntax_expandElement___closed__1);
v___x_3333_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__3));
lean_inc(v_currMacroScope_3327_);
lean_inc(v_quotContext_3326_);
v___x_3334_ = l_Lean_addMacroScope(v_quotContext_3326_, v___x_3333_, v_currMacroScope_3327_);
v___x_3335_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__7));
lean_inc_n(v___x_3330_, 2);
v___x_3336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3330_);
lean_ctor_set(v___x_3336_, 1, v___x_3332_);
lean_ctor_set(v___x_3336_, 2, v___x_3334_);
lean_ctor_set(v___x_3336_, 3, v___x_3335_);
v___x_3337_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3338_ = lean_box(2);
v___x_3339_ = l_Lean_Syntax_mkStrLit(v___y_3316_, v___x_3338_);
v___x_3340_ = l_Lean_Syntax_node5(v___x_3330_, v___x_3337_, v_a_3321_, v___x_3339_, v_keyTerm_3317_, v___y_3313_, v___y_3314_);
v___x_3341_ = l_Lean_Syntax_node2(v___x_3330_, v___x_3331_, v___x_3336_, v___x_3340_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3341_);
v___x_3343_ = v___x_3324_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3341_);
lean_ctor_set(v_reuseFailAlloc_3344_, 1, v_a_3322_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
else
{
lean_dec(v_keyTerm_3317_);
lean_dec_ref(v___y_3316_);
lean_dec(v___y_3314_);
lean_dec(v___y_3313_);
return v___x_3320_;
}
}
v___jp_3346_:
{
lean_object* v___x_3354_; 
v___x_3354_ = l_Lasm_UI_Syntax_concatLists(v___y_3350_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v_a_3356_; lean_object* v___x_3357_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_a_3355_);
v_a_3356_ = lean_ctor_get(v___x_3354_, 1);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3354_, 2);
v___x_3357_ = l_Lasm_UI_Syntax_concatLists(v_childTerms_3351_, v___y_3352_, v_a_3356_);
if (lean_obj_tag(v___x_3357_) == 0)
{
if (lean_obj_tag(v___y_3349_) == 0)
{
lean_object* v_a_3358_; lean_object* v_a_3359_; lean_object* v_quotContext_3360_; lean_object* v_currMacroScope_3361_; lean_object* v_ref_3362_; uint8_t v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
v_a_3359_ = lean_ctor_get(v___x_3357_, 1);
lean_inc(v_a_3359_);
lean_dec_ref_known(v___x_3357_, 2);
v_quotContext_3360_ = lean_ctor_get(v___y_3352_, 1);
v_currMacroScope_3361_ = lean_ctor_get(v___y_3352_, 2);
v_ref_3362_ = lean_ctor_get(v___y_3352_, 5);
v___x_3363_ = 0;
v___x_3364_ = l_Lean_SourceInfo_fromRef(v_ref_3362_, v___x_3363_);
v___x_3365_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__9, &l_Lasm_UI_Syntax_expandElement___closed__9_once, _init_l_Lasm_UI_Syntax_expandElement___closed__9);
v___x_3366_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__10));
lean_inc(v_currMacroScope_3361_);
lean_inc(v_quotContext_3360_);
v___x_3367_ = l_Lean_addMacroScope(v_quotContext_3360_, v___x_3366_, v_currMacroScope_3361_);
v___x_3368_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__13));
v___x_3369_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3364_);
lean_ctor_set(v___x_3369_, 1, v___x_3365_);
lean_ctor_set(v___x_3369_, 2, v___x_3367_);
lean_ctor_set(v___x_3369_, 3, v___x_3368_);
v___y_3313_ = v_a_3355_;
v___y_3314_ = v_a_3358_;
v___y_3315_ = v___y_3347_;
v___y_3316_ = v___y_3348_;
v_keyTerm_3317_ = v___x_3369_;
v___y_3318_ = v___y_3352_;
v___y_3319_ = v_a_3359_;
goto v___jp_3312_;
}
else
{
lean_object* v_a_3370_; lean_object* v_a_3371_; lean_object* v_val_3372_; lean_object* v_quotContext_3373_; lean_object* v_currMacroScope_3374_; lean_object* v_ref_3375_; uint8_t v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v_a_3370_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3370_);
v_a_3371_ = lean_ctor_get(v___x_3357_, 1);
lean_inc(v_a_3371_);
lean_dec_ref_known(v___x_3357_, 2);
v_val_3372_ = lean_ctor_get(v___y_3349_, 0);
lean_inc(v_val_3372_);
lean_dec_ref_known(v___y_3349_, 1);
v_quotContext_3373_ = lean_ctor_get(v___y_3352_, 1);
v_currMacroScope_3374_ = lean_ctor_get(v___y_3352_, 2);
v_ref_3375_ = lean_ctor_get(v___y_3352_, 5);
v___x_3376_ = 0;
v___x_3377_ = l_Lean_SourceInfo_fromRef(v_ref_3375_, v___x_3376_);
v___x_3378_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3379_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__15, &l_Lasm_UI_Syntax_expandElement___closed__15_once, _init_l_Lasm_UI_Syntax_expandElement___closed__15);
v___x_3380_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__16));
lean_inc(v_currMacroScope_3374_);
lean_inc(v_quotContext_3373_);
v___x_3381_ = l_Lean_addMacroScope(v_quotContext_3373_, v___x_3380_, v_currMacroScope_3374_);
v___x_3382_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__19));
lean_inc_n(v___x_3377_, 2);
v___x_3383_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3377_);
lean_ctor_set(v___x_3383_, 1, v___x_3379_);
lean_ctor_set(v___x_3383_, 2, v___x_3381_);
lean_ctor_set(v___x_3383_, 3, v___x_3382_);
v___x_3384_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3385_ = l_Lean_Syntax_node1(v___x_3377_, v___x_3384_, v_val_3372_);
v___x_3386_ = l_Lean_Syntax_node2(v___x_3377_, v___x_3378_, v___x_3383_, v___x_3385_);
v___y_3313_ = v_a_3355_;
v___y_3314_ = v_a_3370_;
v___y_3315_ = v___y_3347_;
v___y_3316_ = v___y_3348_;
v_keyTerm_3317_ = v___x_3386_;
v___y_3318_ = v___y_3352_;
v___y_3319_ = v_a_3371_;
goto v___jp_3312_;
}
}
else
{
lean_dec(v_a_3355_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
return v___x_3357_;
}
}
else
{
lean_dec_ref(v_childTerms_3351_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
return v___x_3354_;
}
}
v___jp_3388_:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; size_t v_sz_3403_; lean_object* v___x_3404_; 
v___x_3400_ = lean_unsigned_to_nat(3u);
v___x_3401_ = l_Lean_Syntax_getArg(v_e_3309_, v___x_3400_);
lean_dec(v_e_3309_);
lean_inc_ref(v___y_3398_);
v___x_3402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___y_3398_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
v_sz_3403_ = lean_array_size(v___y_3391_);
v___x_3404_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_3399_, v___y_3391_, v_sz_3403_, v___y_3396_, v___x_3402_, v___y_3397_, v___y_3392_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_object* v_a_3405_; lean_object* v_a_3406_; lean_object* v_fst_3407_; lean_object* v_snd_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3473_; 
v_a_3405_ = lean_ctor_get(v___x_3404_, 0);
lean_inc(v_a_3405_);
v_a_3406_ = lean_ctor_get(v___x_3404_, 1);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3404_, 2);
v_fst_3407_ = lean_ctor_get(v_a_3405_, 0);
v_snd_3408_ = lean_ctor_get(v_a_3405_, 1);
v_isSharedCheck_3473_ = !lean_is_exclusive(v_a_3405_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3410_ = v_a_3405_;
v_isShared_3411_ = v_isSharedCheck_3473_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_snd_3408_);
lean_inc(v_fst_3407_);
lean_dec(v_a_3405_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3473_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3412_; uint8_t v___x_3413_; 
v___x_3412_ = lean_array_get_size(v___y_3391_);
v___x_3413_ = lean_nat_dec_eq(v___x_3412_, v___y_3389_);
if (v___x_3413_ == 0)
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
v___x_3414_ = lean_unsigned_to_nat(1u);
v___x_3415_ = lean_nat_sub(v___x_3412_, v___x_3414_);
v___x_3416_ = lean_array_get(v___x_3387_, v___y_3391_, v___x_3415_);
lean_dec(v___x_3415_);
lean_dec_ref(v___y_3391_);
v___x_3417_ = l_Lean_Syntax_getArg(v___x_3416_, v___y_3389_);
lean_dec(v___x_3416_);
v___x_3418_ = l_Lean_Syntax_getKind(v___x_3417_);
v___x_3419_ = ((lean_object*)(l_Lasm_UI_Syntax_childText___closed__1));
v___x_3420_ = lean_name_eq(v___x_3418_, v___x_3419_);
lean_dec(v___x_3418_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lean_Syntax_getTailInfo(v_snd_3408_);
lean_dec(v_snd_3408_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_trailing_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3469_; 
v_trailing_3422_ = lean_ctor_get(v___x_3421_, 2);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3469_ == 0)
{
lean_object* v_unused_3470_; lean_object* v_unused_3471_; lean_object* v_unused_3472_; 
v_unused_3470_ = lean_ctor_get(v___x_3421_, 3);
lean_dec(v_unused_3470_);
v_unused_3471_ = lean_ctor_get(v___x_3421_, 1);
lean_dec(v_unused_3471_);
v_unused_3472_ = lean_ctor_get(v___x_3421_, 0);
lean_dec(v_unused_3472_);
v___x_3424_ = v___x_3421_;
v_isShared_3425_ = v_isSharedCheck_3469_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_trailing_3422_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3469_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v_str_3426_; lean_object* v_startPos_3427_; lean_object* v_stopPos_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3468_; 
v_str_3426_ = lean_ctor_get(v_trailing_3422_, 0);
v_startPos_3427_ = lean_ctor_get(v_trailing_3422_, 1);
v_stopPos_3428_ = lean_ctor_get(v_trailing_3422_, 2);
v_isSharedCheck_3468_ = !lean_is_exclusive(v_trailing_3422_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3430_ = v_trailing_3422_;
v_isShared_3431_ = v_isSharedCheck_3468_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_stopPos_3428_);
lean_inc(v_startPos_3427_);
lean_inc(v_str_3426_);
lean_dec(v_trailing_3422_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3468_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v___x_3432_ = lean_string_utf8_extract(v_str_3426_, v_startPos_3427_, v_stopPos_3428_);
lean_dec(v_stopPos_3428_);
lean_dec(v_startPos_3427_);
lean_dec_ref(v_str_3426_);
v___x_3433_ = lean_string_utf8_byte_size(v___x_3432_);
v___x_3434_ = lean_nat_dec_eq(v___x_3433_, v___y_3389_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3436_; 
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 2, v___x_3433_);
lean_ctor_set(v___x_3430_, 1, v___y_3389_);
lean_ctor_set(v___x_3430_, 0, v___x_3432_);
v___x_3436_ = v___x_3430_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3432_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v___y_3389_);
lean_ctor_set(v_reuseFailAlloc_3467_, 2, v___x_3433_);
v___x_3436_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
uint8_t v___x_3437_; 
v___x_3437_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_3436_);
lean_dec_ref(v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v_quotContext_3438_; lean_object* v_currMacroScope_3439_; lean_object* v_ref_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3445_; 
v_quotContext_3438_ = lean_ctor_get(v___y_3397_, 1);
v_currMacroScope_3439_ = lean_ctor_get(v___y_3397_, 2);
v_ref_3440_ = lean_ctor_get(v___y_3397_, 5);
v___x_3441_ = l_Lean_SourceInfo_fromRef(v_ref_3440_, v___x_3420_);
v___x_3442_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_3443_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc(v___x_3441_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set_tag(v___x_3410_, 2);
lean_ctor_set(v___x_3410_, 1, v___x_3443_);
lean_ctor_set(v___x_3410_, 0, v___x_3441_);
v___x_3445_ = v___x_3410_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3441_);
lean_ctor_set(v_reuseFailAlloc_3466_, 1, v___x_3443_);
v___x_3445_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3453_; 
v___x_3446_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3447_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3448_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3449_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3439_);
lean_inc(v_quotContext_3438_);
v___x_3450_ = l_Lean_addMacroScope(v_quotContext_3438_, v___x_3449_, v_currMacroScope_3439_);
v___x_3451_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
lean_inc(v___x_3441_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set_tag(v___x_3424_, 3);
lean_ctor_set(v___x_3424_, 3, v___x_3451_);
lean_ctor_set(v___x_3424_, 2, v___x_3450_);
lean_ctor_set(v___x_3424_, 1, v___x_3448_);
lean_ctor_set(v___x_3424_, 0, v___x_3441_);
v___x_3453_ = v___x_3424_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3441_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v___x_3448_);
lean_ctor_set(v_reuseFailAlloc_3465_, 2, v___x_3450_);
lean_ctor_set(v_reuseFailAlloc_3465_, 3, v___x_3451_);
v___x_3453_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3454_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_3455_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
lean_inc_n(v___x_3441_, 6);
v___x_3456_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3441_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
v___x_3457_ = l_Lean_Syntax_node1(v___x_3441_, v___x_3454_, v___x_3456_);
v___x_3458_ = l_Lean_Syntax_node1(v___x_3441_, v___x_3446_, v___x_3457_);
v___x_3459_ = l_Lean_Syntax_node2(v___x_3441_, v___x_3447_, v___x_3453_, v___x_3458_);
v___x_3460_ = l_Lean_Syntax_node1(v___x_3441_, v___x_3446_, v___x_3459_);
v___x_3461_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3462_, 0, v___x_3441_);
lean_ctor_set(v___x_3462_, 1, v___x_3461_);
v___x_3463_ = l_Lean_Syntax_node3(v___x_3441_, v___x_3442_, v___x_3445_, v___x_3460_, v___x_3462_);
v___x_3464_ = lean_array_push(v_fst_3407_, v___x_3463_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v___x_3464_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
}
else
{
lean_del_object(v___x_3424_);
lean_del_object(v___x_3410_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v_fst_3407_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
}
else
{
lean_dec_ref(v___x_3432_);
lean_del_object(v___x_3430_);
lean_del_object(v___x_3424_);
lean_del_object(v___x_3410_);
lean_dec(v___y_3389_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v_fst_3407_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
}
}
else
{
lean_dec(v___x_3421_);
lean_del_object(v___x_3410_);
lean_dec(v___y_3389_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v_fst_3407_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
else
{
lean_del_object(v___x_3410_);
lean_dec(v_snd_3408_);
lean_dec(v___y_3389_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v_fst_3407_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
else
{
lean_del_object(v___x_3410_);
lean_dec(v_snd_3408_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3389_);
v___y_3347_ = v___y_3390_;
v___y_3348_ = v___y_3393_;
v___y_3349_ = v___y_3395_;
v___y_3350_ = v___y_3394_;
v_childTerms_3351_ = v_fst_3407_;
v___y_3352_ = v___y_3397_;
v___y_3353_ = v_a_3406_;
goto v___jp_3346_;
}
}
}
else
{
lean_object* v_a_3474_; lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
lean_dec(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3389_);
v_a_3474_ = lean_ctor_get(v___x_3404_, 0);
v_a_3475_ = lean_ctor_get(v___x_3404_, 1);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3404_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3404_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_inc(v_a_3474_);
lean_dec(v___x_3404_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3474_);
lean_ctor_set(v_reuseFailAlloc_3481_, 1, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
v___jp_3483_:
{
lean_object* v___x_3490_; lean_object* v_attrTerms_3491_; lean_object* v___x_3492_; size_t v_sz_3493_; size_t v___x_3494_; lean_object* v___x_3495_; 
v___x_3490_ = lean_unsigned_to_nat(0u);
v_attrTerms_3491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v___x_3492_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__20));
v_sz_3493_ = lean_array_size(v___y_3486_);
v___x_3494_ = ((size_t)0ULL);
v___x_3495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v___y_3486_, v_sz_3493_, v___x_3494_, v___x_3492_, v___y_3488_, v___y_3489_);
lean_dec_ref(v___y_3486_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v_a_3497_; lean_object* v_fst_3498_; lean_object* v_snd_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; uint8_t v___x_3503_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
v_a_3497_ = lean_ctor_get(v___x_3495_, 1);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3495_, 2);
v_fst_3498_ = lean_ctor_get(v_a_3496_, 0);
lean_inc(v_fst_3498_);
v_snd_3499_ = lean_ctor_get(v_a_3496_, 1);
lean_inc(v_snd_3499_);
lean_dec(v_a_3496_);
v___x_3500_ = lean_box(v___y_3485_);
v___x_3501_ = lean_obj_tag_nat(v___x_3500_);
lean_dec(v___x_3500_);
v___x_3502_ = lean_unsigned_to_nat(1u);
v___x_3503_ = lean_nat_dec_eq(v___x_3501_, v___x_3502_);
if (v___x_3503_ == 0)
{
v___y_3389_ = v___x_3490_;
v___y_3390_ = v___y_3485_;
v___y_3391_ = v___y_3484_;
v___y_3392_ = v_a_3497_;
v___y_3393_ = v___y_3487_;
v___y_3394_ = v_fst_3498_;
v___y_3395_ = v_snd_3499_;
v___y_3396_ = v___x_3494_;
v___y_3397_ = v___y_3488_;
v___y_3398_ = v_attrTerms_3491_;
v___y_3399_ = v___y_3485_;
goto v___jp_3388_;
}
else
{
lean_object* v___x_3504_; uint8_t v___x_3505_; 
v___x_3504_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__21));
v___x_3505_ = lean_string_dec_eq(v___y_3487_, v___x_3504_);
if (v___x_3505_ == 0)
{
v___y_3389_ = v___x_3490_;
v___y_3390_ = v___y_3485_;
v___y_3391_ = v___y_3484_;
v___y_3392_ = v_a_3497_;
v___y_3393_ = v___y_3487_;
v___y_3394_ = v_fst_3498_;
v___y_3395_ = v_snd_3499_;
v___y_3396_ = v___x_3494_;
v___y_3397_ = v___y_3488_;
v___y_3398_ = v_attrTerms_3491_;
v___y_3399_ = v___y_3485_;
goto v___jp_3388_;
}
else
{
uint8_t v___x_3506_; 
v___x_3506_ = 0;
v___y_3389_ = v___x_3490_;
v___y_3390_ = v___y_3485_;
v___y_3391_ = v___y_3484_;
v___y_3392_ = v_a_3497_;
v___y_3393_ = v___y_3487_;
v___y_3394_ = v_fst_3498_;
v___y_3395_ = v_snd_3499_;
v___y_3396_ = v___x_3494_;
v___y_3397_ = v___y_3488_;
v___y_3398_ = v_attrTerms_3491_;
v___y_3399_ = v___x_3506_;
goto v___jp_3388_;
}
}
}
else
{
lean_object* v_a_3507_; lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_dec_ref(v___y_3487_);
lean_dec_ref(v___y_3484_);
lean_dec(v_e_3309_);
v_a_3507_ = lean_ctor_get(v___x_3495_, 0);
v_a_3508_ = lean_ctor_get(v___x_3495_, 1);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3495_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_inc(v_a_3507_);
lean_dec(v___x_3495_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3507_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
v___jp_3516_:
{
lean_object* v___x_3524_; uint8_t v___x_3525_; 
v___x_3524_ = l_Lasm_UI_Svg_tags;
v___x_3525_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3522_, v___x_3524_);
if (v___x_3525_ == 0)
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; uint8_t v___x_3529_; 
v___x_3526_ = lean_unsigned_to_nat(0u);
v___x_3527_ = lean_string_utf8_byte_size(v___y_3522_);
lean_inc_ref(v___y_3522_);
v___x_3528_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3528_, 0, v___y_3522_);
lean_ctor_set(v___x_3528_, 1, v___x_3526_);
lean_ctor_set(v___x_3528_, 2, v___x_3527_);
v___x_3529_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3528_);
lean_dec_ref_known(v___x_3528_, 3);
if (v___x_3529_ == 0)
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3530_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__22));
v___x_3531_ = lean_string_append(v___x_3530_, v___y_3522_);
v___x_3532_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3533_ = lean_string_append(v___x_3531_, v___x_3532_);
v___x_3534_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3520_, v___x_3533_, v___y_3521_, v___y_3518_);
lean_dec(v___y_3520_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 1);
lean_inc(v_a_3535_);
lean_dec_ref_known(v___x_3534_, 2);
v___y_3484_ = v___y_3517_;
v___y_3485_ = v___y_3523_;
v___y_3486_ = v___y_3519_;
v___y_3487_ = v___y_3522_;
v___y_3488_ = v___y_3521_;
v___y_3489_ = v_a_3535_;
goto v___jp_3483_;
}
else
{
lean_object* v_a_3536_; lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3517_);
lean_dec(v_e_3309_);
v_a_3536_ = lean_ctor_get(v___x_3534_, 0);
v_a_3537_ = lean_ctor_get(v___x_3534_, 1);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3534_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_inc(v_a_3536_);
lean_dec(v___x_3534_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3536_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
else
{
lean_dec(v___y_3520_);
v___y_3484_ = v___y_3517_;
v___y_3485_ = v___y_3523_;
v___y_3486_ = v___y_3519_;
v___y_3487_ = v___y_3522_;
v___y_3488_ = v___y_3521_;
v___y_3489_ = v___y_3518_;
goto v___jp_3483_;
}
}
else
{
lean_dec(v___y_3520_);
v___y_3484_ = v___y_3517_;
v___y_3485_ = v___y_3523_;
v___y_3486_ = v___y_3519_;
v___y_3487_ = v___y_3522_;
v___y_3488_ = v___y_3521_;
v___y_3489_ = v___y_3518_;
goto v___jp_3483_;
}
}
v___jp_3545_:
{
lean_object* v___x_3553_; uint8_t v___x_3554_; 
v___x_3553_ = l_Lasm_UI_voidTags;
v___x_3554_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3550_, v___x_3553_);
if (v___x_3554_ == 0)
{
lean_dec(v___y_3549_);
v___y_3484_ = v___y_3547_;
v___y_3485_ = v___y_3546_;
v___y_3486_ = v___y_3548_;
v___y_3487_ = v___y_3550_;
v___y_3488_ = v___y_3551_;
v___y_3489_ = v___y_3552_;
goto v___jp_3483_;
}
else
{
lean_object* v___x_3555_; lean_object* v___x_3556_; uint8_t v___x_3557_; 
v___x_3555_ = lean_array_get_size(v___y_3547_);
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = lean_nat_dec_eq(v___x_3555_, v___x_3556_);
if (v___x_3557_ == 0)
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v___x_3558_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v___x_3559_ = lean_string_append(v___x_3558_, v___y_3550_);
v___x_3560_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__23));
v___x_3561_ = lean_string_append(v___x_3559_, v___x_3560_);
v___x_3562_ = lean_string_append(v___x_3561_, v___y_3550_);
v___x_3563_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__24));
v___x_3564_ = lean_string_append(v___x_3562_, v___x_3563_);
v___x_3565_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3549_, v___x_3564_, v___y_3551_, v___y_3552_);
lean_dec(v___y_3549_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 1);
lean_inc(v_a_3566_);
lean_dec_ref_known(v___x_3565_, 2);
v___y_3484_ = v___y_3547_;
v___y_3485_ = v___y_3546_;
v___y_3486_ = v___y_3548_;
v___y_3487_ = v___y_3550_;
v___y_3488_ = v___y_3551_;
v___y_3489_ = v_a_3566_;
goto v___jp_3483_;
}
else
{
lean_object* v_a_3567_; lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v___y_3550_);
lean_dec_ref(v___y_3548_);
lean_dec_ref(v___y_3547_);
lean_dec(v_e_3309_);
v_a_3567_ = lean_ctor_get(v___x_3565_, 0);
v_a_3568_ = lean_ctor_get(v___x_3565_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3565_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_inc(v_a_3567_);
lean_dec(v___x_3565_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3567_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
else
{
lean_dec(v___y_3549_);
v___y_3484_ = v___y_3547_;
v___y_3485_ = v___y_3546_;
v___y_3486_ = v___y_3548_;
v___y_3487_ = v___y_3550_;
v___y_3488_ = v___y_3551_;
v___y_3489_ = v___y_3552_;
goto v___jp_3483_;
}
}
}
v___jp_3576_:
{
lean_object* v___x_3583_; uint8_t v___x_3584_; 
v___x_3583_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__11));
v___x_3584_ = lean_string_dec_eq(v___y_3580_, v___x_3583_);
if (v___x_3584_ == 0)
{
lean_object* v___x_3585_; uint8_t v___x_3586_; 
v___x_3585_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__25));
v___x_3586_ = lean_string_dec_eq(v___y_3580_, v___x_3585_);
if (v___x_3586_ == 0)
{
switch(v_ns_3308_)
{
case 0:
{
lean_object* v___x_3587_; uint8_t v___x_3588_; 
v___x_3587_ = l_Lasm_UI_htmlTags;
v___x_3588_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3580_, v___x_3587_);
if (v___x_3588_ == 0)
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; 
v___x_3589_ = lean_unsigned_to_nat(0u);
v___x_3590_ = lean_string_utf8_byte_size(v___y_3580_);
lean_inc_ref(v___y_3580_);
v___x_3591_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3591_, 0, v___y_3580_);
lean_ctor_set(v___x_3591_, 1, v___x_3589_);
lean_ctor_set(v___x_3591_, 2, v___x_3590_);
v___x_3592_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3591_);
lean_dec_ref_known(v___x_3591_, 3);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3593_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__26));
v___x_3594_ = lean_string_append(v___x_3593_, v___y_3580_);
v___x_3595_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__27));
v___x_3596_ = lean_string_append(v___x_3594_, v___x_3595_);
v___x_3597_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3579_, v___x_3596_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; 
v_a_3598_ = lean_ctor_get(v___x_3597_, 1);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3597_, 2);
v___y_3546_ = v_ns_3308_;
v___y_3547_ = v___y_3577_;
v___y_3548_ = v___y_3578_;
v___y_3549_ = v___y_3579_;
v___y_3550_ = v___y_3580_;
v___y_3551_ = v___y_3581_;
v___y_3552_ = v_a_3598_;
goto v___jp_3545_;
}
else
{
lean_object* v_a_3599_; lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec_ref(v___y_3580_);
lean_dec(v___y_3579_);
lean_dec_ref(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_e_3309_);
v_a_3599_ = lean_ctor_get(v___x_3597_, 0);
v_a_3600_ = lean_ctor_get(v___x_3597_, 1);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3597_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3597_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_inc(v_a_3599_);
lean_dec(v___x_3597_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3599_);
lean_ctor_set(v_reuseFailAlloc_3606_, 1, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
else
{
v___y_3546_ = v_ns_3308_;
v___y_3547_ = v___y_3577_;
v___y_3548_ = v___y_3578_;
v___y_3549_ = v___y_3579_;
v___y_3550_ = v___y_3580_;
v___y_3551_ = v___y_3581_;
v___y_3552_ = v___y_3582_;
goto v___jp_3545_;
}
}
else
{
v___y_3546_ = v_ns_3308_;
v___y_3547_ = v___y_3577_;
v___y_3548_ = v___y_3578_;
v___y_3549_ = v___y_3579_;
v___y_3550_ = v___y_3580_;
v___y_3551_ = v___y_3581_;
v___y_3552_ = v___y_3582_;
goto v___jp_3545_;
}
}
case 1:
{
v___y_3517_ = v___y_3577_;
v___y_3518_ = v___y_3582_;
v___y_3519_ = v___y_3578_;
v___y_3520_ = v___y_3579_;
v___y_3521_ = v___y_3581_;
v___y_3522_ = v___y_3580_;
v___y_3523_ = v_ns_3308_;
goto v___jp_3516_;
}
default: 
{
lean_dec(v___y_3579_);
v___y_3484_ = v___y_3577_;
v___y_3485_ = v_ns_3308_;
v___y_3486_ = v___y_3578_;
v___y_3487_ = v___y_3580_;
v___y_3488_ = v___y_3581_;
v___y_3489_ = v___y_3582_;
goto v___jp_3483_;
}
}
}
else
{
uint8_t v___x_3608_; 
lean_dec(v___y_3579_);
v___x_3608_ = 2;
v___y_3484_ = v___y_3577_;
v___y_3485_ = v___x_3608_;
v___y_3486_ = v___y_3578_;
v___y_3487_ = v___y_3580_;
v___y_3488_ = v___y_3581_;
v___y_3489_ = v___y_3582_;
goto v___jp_3483_;
}
}
else
{
uint8_t v___x_3609_; 
v___x_3609_ = 1;
v___y_3517_ = v___y_3577_;
v___y_3518_ = v___y_3582_;
v___y_3519_ = v___y_3578_;
v___y_3520_ = v___y_3579_;
v___y_3521_ = v___y_3581_;
v___y_3522_ = v___y_3580_;
v___y_3523_ = v___x_3609_;
goto v___jp_3516_;
}
}
v___jp_3610_:
{
lean_object* v_tag_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v_tag_3617_ = l_Lasm_UI_Syntax_nameOf(v_fst_3611_);
v___x_3618_ = l_Lasm_UI_Syntax_nameOf(v_val_3614_);
v___x_3619_ = lean_string_dec_eq(v___x_3618_, v_tag_3617_);
if (v___x_3619_ == 0)
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3620_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__7));
v___x_3621_ = lean_string_append(v___x_3620_, v___x_3618_);
lean_dec_ref(v___x_3618_);
v___x_3622_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__28));
v___x_3623_ = lean_string_append(v___x_3621_, v___x_3622_);
v___x_3624_ = lean_string_append(v___x_3623_, v_tag_3617_);
v___x_3625_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3626_ = lean_string_append(v___x_3624_, v___x_3625_);
v___x_3627_ = l_Lean_Macro_throwErrorAt___redArg(v_val_3614_, v___x_3626_, v___y_3615_, v___y_3616_);
lean_dec(v_val_3614_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 1);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 2);
v___y_3577_ = v_fst_3613_;
v___y_3578_ = v_fst_3612_;
v___y_3579_ = v_fst_3611_;
v___y_3580_ = v_tag_3617_;
v___y_3581_ = v___y_3615_;
v___y_3582_ = v_a_3628_;
goto v___jp_3576_;
}
else
{
lean_object* v_a_3629_; lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
lean_dec_ref(v_tag_3617_);
lean_dec_ref(v_fst_3613_);
lean_dec_ref(v_fst_3612_);
lean_dec(v_fst_3611_);
lean_dec(v_e_3309_);
v_a_3629_ = lean_ctor_get(v___x_3627_, 0);
v_a_3630_ = lean_ctor_get(v___x_3627_, 1);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3627_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_inc(v_a_3629_);
lean_dec(v___x_3627_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3629_);
lean_ctor_set(v_reuseFailAlloc_3636_, 1, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
else
{
lean_dec_ref(v___x_3618_);
lean_dec(v_val_3614_);
v___y_3577_ = v_fst_3613_;
v___y_3578_ = v_fst_3612_;
v___y_3579_ = v_fst_3611_;
v___y_3580_ = v_tag_3617_;
v___y_3581_ = v___y_3615_;
v___y_3582_ = v___y_3616_;
goto v___jp_3576_;
}
}
v___jp_3638_:
{
lean_object* v_tag_3644_; 
v_tag_3644_ = l_Lasm_UI_Syntax_nameOf(v_fst_3639_);
v___y_3577_ = v_fst_3641_;
v___y_3578_ = v_fst_3640_;
v___y_3579_ = v_fst_3639_;
v___y_3580_ = v_tag_3644_;
v___y_3581_ = v___y_3642_;
v___y_3582_ = v___y_3643_;
goto v___jp_3576_;
}
v___jp_3645_:
{
lean_object* v_snd_3649_; lean_object* v_snd_3650_; lean_object* v_snd_3651_; 
v_snd_3649_ = lean_ctor_get(v_____x_3646_, 1);
lean_inc(v_snd_3649_);
v_snd_3650_ = lean_ctor_get(v_snd_3649_, 1);
lean_inc(v_snd_3650_);
v_snd_3651_ = lean_ctor_get(v_snd_3650_, 1);
if (lean_obj_tag(v_snd_3651_) == 1)
{
lean_object* v_fst_3652_; lean_object* v_fst_3653_; lean_object* v_fst_3654_; lean_object* v_val_3655_; 
lean_inc_ref(v_snd_3651_);
v_fst_3652_ = lean_ctor_get(v_____x_3646_, 0);
lean_inc(v_fst_3652_);
lean_dec_ref(v_____x_3646_);
v_fst_3653_ = lean_ctor_get(v_snd_3649_, 0);
lean_inc(v_fst_3653_);
lean_dec(v_snd_3649_);
v_fst_3654_ = lean_ctor_get(v_snd_3650_, 0);
lean_inc(v_fst_3654_);
lean_dec(v_snd_3650_);
v_val_3655_ = lean_ctor_get(v_snd_3651_, 0);
lean_inc(v_val_3655_);
lean_dec_ref_known(v_snd_3651_, 1);
v_fst_3611_ = v_fst_3652_;
v_fst_3612_ = v_fst_3653_;
v_fst_3613_ = v_fst_3654_;
v_val_3614_ = v_val_3655_;
v___y_3615_ = v___y_3647_;
v___y_3616_ = v___y_3648_;
goto v___jp_3610_;
}
else
{
lean_object* v_fst_3656_; lean_object* v_fst_3657_; lean_object* v_fst_3658_; 
v_fst_3656_ = lean_ctor_get(v_____x_3646_, 0);
lean_inc(v_fst_3656_);
lean_dec_ref(v_____x_3646_);
v_fst_3657_ = lean_ctor_get(v_snd_3649_, 0);
lean_inc(v_fst_3657_);
lean_dec(v_snd_3649_);
v_fst_3658_ = lean_ctor_get(v_snd_3650_, 0);
lean_inc(v_fst_3658_);
lean_dec(v_snd_3650_);
v_fst_3639_ = v_fst_3656_;
v_fst_3640_ = v_fst_3657_;
v_fst_3641_ = v_fst_3658_;
v___y_3642_ = v___y_3647_;
v___y_3643_ = v___y_3648_;
goto v___jp_3638_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild(uint8_t v_ns_3745_, uint8_t v_lead_3746_, lean_object* v_c_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_){
_start:
{
lean_object* v_a_3751_; lean_object* v_a_3752_; lean_object* v___x_3755_; lean_object* v_c_3756_; lean_object* v___y_3758_; lean_object* v___x_3789_; uint8_t v___x_3790_; 
v___x_3755_ = lean_unsigned_to_nat(0u);
v_c_3756_ = l_Lean_Syntax_getArg(v_c_3747_, v___x_3755_);
v___x_3789_ = ((lean_object*)(l_Lasm_UI_Syntax_childText___closed__1));
lean_inc(v_c_3756_);
v___x_3790_ = l_Lean_Syntax_isOfKind(v_c_3756_, v___x_3789_);
if (v___x_3790_ == 0)
{
lean_object* v___x_3791_; uint8_t v___x_3792_; 
v___x_3791_ = ((lean_object*)(l_Lasm_UI_Syntax_childTerm___closed__1));
lean_inc(v_c_3756_);
v___x_3792_ = l_Lean_Syntax_isOfKind(v_c_3756_, v___x_3791_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; uint8_t v___x_3794_; 
v___x_3793_ = ((lean_object*)(l_Lasm_UI_Syntax_childElement___closed__1));
lean_inc(v_c_3756_);
v___x_3794_ = l_Lean_Syntax_isOfKind(v_c_3756_, v___x_3793_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__6));
v___x_3796_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3756_, v___x_3795_, v_a_3748_, v_a_3749_);
lean_dec(v_c_3756_);
return v___x_3796_;
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3797_ = l_Lean_Syntax_getArg(v_c_3756_, v___x_3755_);
lean_dec(v_c_3756_);
v___x_3798_ = l_Lasm_UI_Syntax_expandElement(v_ns_3745_, v___x_3797_, v_a_3748_, v_a_3749_);
if (lean_obj_tag(v___x_3798_) == 0)
{
if (v_lead_3746_ == 0)
{
lean_object* v_a_3799_; lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3818_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
v_a_3800_ = lean_ctor_get(v___x_3798_, 1);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3802_ = v___x_3798_;
v_isShared_3803_ = v_isSharedCheck_3818_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_inc(v_a_3799_);
lean_dec(v___x_3798_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3818_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v_ref_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3816_; 
v_ref_3804_ = lean_ctor_get(v_a_3748_, 5);
v___x_3805_ = l_Lean_SourceInfo_fromRef(v_ref_3804_, v_lead_3746_);
v___x_3806_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_3807_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_3805_, 3);
v___x_3808_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3805_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3810_ = l_Lean_Syntax_node1(v___x_3805_, v___x_3809_, v_a_3799_);
v___x_3811_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3805_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
v___x_3813_ = l_Lean_Syntax_node3(v___x_3805_, v___x_3806_, v___x_3808_, v___x_3810_, v___x_3812_);
v___x_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3813_);
if (v_isShared_3803_ == 0)
{
lean_ctor_set(v___x_3802_, 0, v___x_3814_);
v___x_3816_ = v___x_3802_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v___x_3814_);
lean_ctor_set(v_reuseFailAlloc_3817_, 1, v_a_3800_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v_a_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3854_; 
v_a_3819_ = lean_ctor_get(v___x_3798_, 0);
v_a_3820_ = lean_ctor_get(v___x_3798_, 1);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3822_ = v___x_3798_;
v_isShared_3823_ = v_isSharedCheck_3854_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_a_3820_);
lean_inc(v_a_3819_);
lean_dec(v___x_3798_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3854_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
lean_object* v_quotContext_3824_; lean_object* v_currMacroScope_3825_; lean_object* v_ref_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3852_; 
v_quotContext_3824_ = lean_ctor_get(v_a_3748_, 1);
v_currMacroScope_3825_ = lean_ctor_get(v_a_3748_, 2);
v_ref_3826_ = lean_ctor_get(v_a_3748_, 5);
v___x_3827_ = l_Lean_SourceInfo_fromRef(v_ref_3826_, v___x_3792_);
v___x_3828_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_3829_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_3827_, 9);
v___x_3830_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3827_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3832_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3833_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3834_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3825_);
lean_inc(v_quotContext_3824_);
v___x_3835_ = l_Lean_addMacroScope(v_quotContext_3824_, v___x_3834_, v_currMacroScope_3825_);
v___x_3836_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_3837_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3827_);
lean_ctor_set(v___x_3837_, 1, v___x_3833_);
lean_ctor_set(v___x_3837_, 2, v___x_3835_);
lean_ctor_set(v___x_3837_, 3, v___x_3836_);
v___x_3838_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_3839_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_3840_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3840_, 0, v___x_3827_);
lean_ctor_set(v___x_3840_, 1, v___x_3839_);
v___x_3841_ = l_Lean_Syntax_node1(v___x_3827_, v___x_3838_, v___x_3840_);
v___x_3842_ = l_Lean_Syntax_node1(v___x_3827_, v___x_3831_, v___x_3841_);
v___x_3843_ = l_Lean_Syntax_node2(v___x_3827_, v___x_3832_, v___x_3837_, v___x_3842_);
v___x_3844_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_3845_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3827_);
lean_ctor_set(v___x_3845_, 1, v___x_3844_);
v___x_3846_ = l_Lean_Syntax_node3(v___x_3827_, v___x_3831_, v___x_3843_, v___x_3845_, v_a_3819_);
v___x_3847_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3827_);
lean_ctor_set(v___x_3848_, 1, v___x_3847_);
v___x_3849_ = l_Lean_Syntax_node3(v___x_3827_, v___x_3828_, v___x_3830_, v___x_3846_, v___x_3848_);
v___x_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
if (v_isShared_3823_ == 0)
{
lean_ctor_set(v___x_3822_, 0, v___x_3850_);
v___x_3852_ = v___x_3822_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3850_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v_a_3820_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
else
{
lean_object* v_a_3855_; lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
v_a_3855_ = lean_ctor_get(v___x_3798_, 0);
v_a_3856_ = lean_ctor_get(v___x_3798_, 1);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3798_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_inc(v_a_3855_);
lean_dec(v___x_3798_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3855_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
}
else
{
lean_object* v_quotContext_3864_; lean_object* v_currMacroScope_3865_; lean_object* v_ref_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v_quotContext_3864_ = lean_ctor_get(v_a_3748_, 1);
v_currMacroScope_3865_ = lean_ctor_get(v_a_3748_, 2);
v_ref_3866_ = lean_ctor_get(v_a_3748_, 5);
v___x_3867_ = lean_unsigned_to_nat(1u);
v___x_3868_ = l_Lean_Syntax_getArg(v_c_3756_, v___x_3867_);
lean_dec(v_c_3756_);
v___x_3869_ = l_Lean_SourceInfo_fromRef(v_ref_3866_, v___x_3790_);
v___x_3870_ = ((lean_object*)(l_Lasm_UI_Syntax_childrenTerm___closed__1));
v___x_3871_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__8));
lean_inc_n(v___x_3869_, 2);
v___x_3872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3869_);
lean_ctor_set(v___x_3872_, 1, v___x_3871_);
v___x_3873_ = l_Lean_Syntax_node2(v___x_3869_, v___x_3870_, v___x_3872_, v___x_3868_);
if (v_lead_3746_ == 0)
{
lean_dec(v___x_3869_);
v_a_3751_ = v___x_3873_;
v_a_3752_ = v_a_3749_;
goto v___jp_3750_;
}
else
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_3875_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_3876_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_3869_, 10);
v___x_3877_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3869_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3879_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3880_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3881_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3865_);
lean_inc(v_quotContext_3864_);
v___x_3882_ = l_Lean_addMacroScope(v_quotContext_3864_, v___x_3881_, v_currMacroScope_3865_);
v___x_3883_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_3884_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3869_);
lean_ctor_set(v___x_3884_, 1, v___x_3880_);
lean_ctor_set(v___x_3884_, 2, v___x_3882_);
lean_ctor_set(v___x_3884_, 3, v___x_3883_);
v___x_3885_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_3886_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_3887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3869_);
lean_ctor_set(v___x_3887_, 1, v___x_3886_);
v___x_3888_ = l_Lean_Syntax_node1(v___x_3869_, v___x_3885_, v___x_3887_);
v___x_3889_ = l_Lean_Syntax_node1(v___x_3869_, v___x_3878_, v___x_3888_);
v___x_3890_ = l_Lean_Syntax_node2(v___x_3869_, v___x_3879_, v___x_3884_, v___x_3889_);
v___x_3891_ = l_Lean_Syntax_node1(v___x_3869_, v___x_3878_, v___x_3890_);
v___x_3892_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3893_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3869_);
lean_ctor_set(v___x_3893_, 1, v___x_3892_);
v___x_3894_ = l_Lean_Syntax_node3(v___x_3869_, v___x_3875_, v___x_3877_, v___x_3891_, v___x_3893_);
v___x_3895_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
v___x_3896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3869_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = l_Lean_Syntax_node3(v___x_3869_, v___x_3874_, v___x_3894_, v___x_3896_, v___x_3873_);
v_a_3751_ = v___x_3897_;
v_a_3752_ = v_a_3749_;
goto v___jp_3750_;
}
}
}
else
{
lean_object* v___x_3898_; lean_object* v___y_3900_; lean_object* v___x_3910_; uint8_t v___x_3911_; 
v___x_3898_ = l_Lean_Syntax_getArg(v_c_3756_, v___x_3755_);
v___x_3910_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__7));
lean_inc(v___x_3898_);
v___x_3911_ = l_Lean_Syntax_isOfKind(v___x_3898_, v___x_3910_);
if (v___x_3911_ == 0)
{
lean_object* v___x_3912_; lean_object* v___x_3913_; 
lean_dec(v___x_3898_);
v___x_3912_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__6));
v___x_3913_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3756_, v___x_3912_, v_a_3748_, v_a_3749_);
lean_dec(v_c_3756_);
return v___x_3913_;
}
else
{
lean_dec(v_c_3756_);
if (v_lead_3746_ == 0)
{
lean_object* v___x_3914_; 
v___x_3914_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___y_3900_ = v___x_3914_;
goto v___jp_3899_;
}
else
{
lean_object* v___x_3915_; 
v___x_3915_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v___y_3900_ = v___x_3915_;
goto v___jp_3899_;
}
}
v___jp_3899_:
{
lean_object* v___x_3901_; lean_object* v_raw_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; uint8_t v_decide_3906_; 
v___x_3901_ = l_Lasm_UI_Syntax_nameOf(v___x_3898_);
lean_dec(v___x_3898_);
lean_inc_ref(v___y_3900_);
v_raw_3902_ = lean_string_append(v___y_3900_, v___x_3901_);
lean_dec_ref(v___x_3901_);
v___x_3903_ = lean_string_utf8_byte_size(v_raw_3902_);
lean_inc_ref(v_raw_3902_);
v___x_3904_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3904_, 0, v_raw_3902_);
lean_ctor_set(v___x_3904_, 1, v___x_3755_);
lean_ctor_set(v___x_3904_, 2, v___x_3903_);
v___x_3905_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v___x_3904_, v___x_3755_);
v_decide_3906_ = lean_nat_dec_eq(v___x_3905_, v___x_3903_);
lean_dec(v___x_3905_);
if (v_decide_3906_ == 0)
{
lean_dec_ref_known(v___x_3904_, 3);
v___y_3758_ = v_raw_3902_;
goto v___jp_3757_;
}
else
{
uint8_t v___x_3907_; 
v___x_3907_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_3904_);
lean_dec_ref_known(v___x_3904_, 3);
if (v___x_3907_ == 0)
{
v___y_3758_ = v_raw_3902_;
goto v___jp_3757_;
}
else
{
lean_object* v___x_3908_; lean_object* v___x_3909_; 
lean_dec_ref(v_raw_3902_);
v___x_3908_ = lean_box(0);
v___x_3909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
lean_ctor_set(v___x_3909_, 1, v_a_3749_);
return v___x_3909_;
}
}
}
}
v___jp_3750_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3753_, 0, v_a_3751_);
v___x_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3753_);
lean_ctor_set(v___x_3754_, 1, v_a_3752_);
return v___x_3754_;
}
v___jp_3757_:
{
lean_object* v___x_3759_; lean_object* v_s_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v___x_3759_ = l_Lasm_UI_Syntax_jsxWhitespace(v___y_3758_);
lean_dec_ref(v___y_3758_);
v_s_3760_ = l_Lasm_UI_Syntax_decodeEntities(v___x_3759_);
v___x_3761_ = lean_string_utf8_byte_size(v_s_3760_);
v___x_3762_ = lean_nat_dec_eq(v___x_3761_, v___x_3755_);
if (v___x_3762_ == 0)
{
lean_object* v_quotContext_3763_; lean_object* v_currMacroScope_3764_; lean_object* v_ref_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v_quotContext_3763_ = lean_ctor_get(v_a_3748_, 1);
v_currMacroScope_3764_ = lean_ctor_get(v_a_3748_, 2);
v_ref_3765_ = lean_ctor_get(v_a_3748_, 5);
v___x_3766_ = l_Lean_SourceInfo_fromRef(v_ref_3765_, v___x_3762_);
v___x_3767_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
v___x_3768_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__3));
lean_inc_n(v___x_3766_, 6);
v___x_3769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3766_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__5));
v___x_3771_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_3772_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3773_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3764_);
lean_inc(v_quotContext_3763_);
v___x_3774_ = l_Lean_addMacroScope(v_quotContext_3763_, v___x_3773_, v_currMacroScope_3764_);
v___x_3775_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_3776_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3766_);
lean_ctor_set(v___x_3776_, 1, v___x_3772_);
lean_ctor_set(v___x_3776_, 2, v___x_3774_);
lean_ctor_set(v___x_3776_, 3, v___x_3775_);
v___x_3777_ = lean_box(2);
v___x_3778_ = l_Lean_Syntax_mkStrLit(v_s_3760_, v___x_3777_);
v___x_3779_ = l_Lean_Syntax_node1(v___x_3766_, v___x_3770_, v___x_3778_);
v___x_3780_ = l_Lean_Syntax_node2(v___x_3766_, v___x_3771_, v___x_3776_, v___x_3779_);
v___x_3781_ = l_Lean_Syntax_node1(v___x_3766_, v___x_3770_, v___x_3780_);
v___x_3782_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3766_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = l_Lean_Syntax_node3(v___x_3766_, v___x_3767_, v___x_3769_, v___x_3781_, v___x_3783_);
v___x_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3784_);
v___x_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
lean_ctor_set(v___x_3786_, 1, v_a_3749_);
return v___x_3786_;
}
else
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
lean_dec_ref(v_s_3760_);
v___x_3787_ = lean_box(0);
v___x_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
lean_ctor_set(v___x_3788_, 1, v_a_3749_);
return v___x_3788_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(uint8_t v___y_3916_, lean_object* v_as_3917_, size_t v_sz_3918_, size_t v_i_3919_, lean_object* v_b_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
uint8_t v___x_3923_; 
v___x_3923_ = lean_usize_dec_lt(v_i_3919_, v_sz_3918_);
if (v___x_3923_ == 0)
{
lean_object* v___x_3924_; 
v___x_3924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3924_, 0, v_b_3920_);
lean_ctor_set(v___x_3924_, 1, v___y_3922_);
return v___x_3924_;
}
else
{
lean_object* v_fst_3925_; lean_object* v_snd_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3976_; 
v_fst_3925_ = lean_ctor_get(v_b_3920_, 0);
v_snd_3926_ = lean_ctor_get(v_b_3920_, 1);
v_isSharedCheck_3976_ = !lean_is_exclusive(v_b_3920_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3928_ = v_b_3920_;
v_isShared_3929_ = v_isSharedCheck_3976_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_snd_3926_);
lean_inc(v_fst_3925_);
lean_dec(v_b_3920_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3976_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v_a_3930_; lean_object* v_childTerms_3932_; lean_object* v___y_3933_; uint8_t v___y_3941_; lean_object* v___x_3957_; 
v_a_3930_ = lean_array_uget_borrowed(v_as_3917_, v_i_3919_);
v___x_3957_ = l_Lean_Syntax_getTailInfo(v_snd_3926_);
lean_dec(v_snd_3926_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_trailing_3958_; lean_object* v_str_3959_; lean_object* v_startPos_3960_; lean_object* v_stopPos_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3974_; 
v_trailing_3958_ = lean_ctor_get(v___x_3957_, 2);
lean_inc_ref(v_trailing_3958_);
lean_dec_ref_known(v___x_3957_, 4);
v_str_3959_ = lean_ctor_get(v_trailing_3958_, 0);
v_startPos_3960_ = lean_ctor_get(v_trailing_3958_, 1);
v_stopPos_3961_ = lean_ctor_get(v_trailing_3958_, 2);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_trailing_3958_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3963_ = v_trailing_3958_;
v_isShared_3964_ = v_isSharedCheck_3974_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_stopPos_3961_);
lean_inc(v_startPos_3960_);
lean_inc(v_str_3959_);
lean_dec(v_trailing_3958_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3974_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; uint8_t v___x_3968_; 
v___x_3965_ = lean_string_utf8_extract(v_str_3959_, v_startPos_3960_, v_stopPos_3961_);
lean_dec(v_stopPos_3961_);
lean_dec(v_startPos_3960_);
lean_dec_ref(v_str_3959_);
v___x_3966_ = lean_string_utf8_byte_size(v___x_3965_);
v___x_3967_ = lean_unsigned_to_nat(0u);
v___x_3968_ = lean_nat_dec_eq(v___x_3966_, v___x_3967_);
if (v___x_3968_ == 0)
{
lean_object* v___x_3970_; 
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 2, v___x_3966_);
lean_ctor_set(v___x_3963_, 1, v___x_3967_);
lean_ctor_set(v___x_3963_, 0, v___x_3965_);
v___x_3970_ = v___x_3963_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3965_);
lean_ctor_set(v_reuseFailAlloc_3972_, 1, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3972_, 2, v___x_3966_);
v___x_3970_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
uint8_t v___x_3971_; 
v___x_3971_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_3970_);
lean_dec_ref(v___x_3970_);
if (v___x_3971_ == 0)
{
v___y_3941_ = v___x_3923_;
goto v___jp_3940_;
}
else
{
v___y_3941_ = v___x_3968_;
goto v___jp_3940_;
}
}
}
else
{
uint8_t v___x_3973_; 
lean_dec_ref(v___x_3965_);
lean_del_object(v___x_3963_);
v___x_3973_ = 0;
v___y_3941_ = v___x_3973_;
goto v___jp_3940_;
}
}
}
else
{
uint8_t v___x_3975_; 
lean_dec(v___x_3957_);
v___x_3975_ = 0;
v___y_3941_ = v___x_3975_;
goto v___jp_3940_;
}
v___jp_3931_:
{
lean_object* v___x_3935_; 
lean_inc(v_a_3930_);
if (v_isShared_3929_ == 0)
{
lean_ctor_set(v___x_3928_, 1, v_a_3930_);
lean_ctor_set(v___x_3928_, 0, v_childTerms_3932_);
v___x_3935_ = v___x_3928_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_childTerms_3932_);
lean_ctor_set(v_reuseFailAlloc_3939_, 1, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
size_t v___x_3936_; size_t v___x_3937_; 
v___x_3936_ = ((size_t)1ULL);
v___x_3937_ = lean_usize_add(v_i_3919_, v___x_3936_);
v_i_3919_ = v___x_3937_;
v_b_3920_ = v___x_3935_;
v___y_3922_ = v___y_3933_;
goto _start;
}
}
v___jp_3940_:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lasm_UI_Syntax_expandChild(v___y_3916_, v___y_3941_, v_a_3930_, v___y_3921_, v___y_3922_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v_a_3943_; 
v_a_3943_ = lean_ctor_get(v___x_3942_, 0);
if (lean_obj_tag(v_a_3943_) == 1)
{
lean_object* v_a_3944_; lean_object* v_val_3945_; lean_object* v___x_3946_; 
lean_inc_ref(v_a_3943_);
v_a_3944_ = lean_ctor_get(v___x_3942_, 1);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3942_, 2);
v_val_3945_ = lean_ctor_get(v_a_3943_, 0);
lean_inc(v_val_3945_);
lean_dec_ref_known(v_a_3943_, 1);
v___x_3946_ = lean_array_push(v_fst_3925_, v_val_3945_);
v_childTerms_3932_ = v___x_3946_;
v___y_3933_ = v_a_3944_;
goto v___jp_3931_;
}
else
{
lean_object* v_a_3947_; 
v_a_3947_ = lean_ctor_get(v___x_3942_, 1);
lean_inc(v_a_3947_);
lean_dec_ref_known(v___x_3942_, 2);
v_childTerms_3932_ = v_fst_3925_;
v___y_3933_ = v_a_3947_;
goto v___jp_3931_;
}
}
else
{
lean_object* v_a_3948_; lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
lean_del_object(v___x_3928_);
lean_dec(v_fst_3925_);
v_a_3948_ = lean_ctor_get(v___x_3942_, 0);
v_a_3949_ = lean_ctor_get(v___x_3942_, 1);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3942_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3942_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_inc(v_a_3948_);
lean_dec(v___x_3942_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3948_);
lean_ctor_set(v_reuseFailAlloc_3955_, 1, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(uint8_t v___y_3977_, lean_object* v_as_3978_, size_t v_sz_3979_, size_t v_i_3980_, lean_object* v_b_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_){
_start:
{
uint8_t v___x_3984_; 
v___x_3984_ = lean_usize_dec_lt(v_i_3980_, v_sz_3979_);
if (v___x_3984_ == 0)
{
lean_object* v___x_3985_; 
v___x_3985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3985_, 0, v_b_3981_);
lean_ctor_set(v___x_3985_, 1, v___y_3983_);
return v___x_3985_;
}
else
{
lean_object* v_fst_3986_; lean_object* v_snd_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_4037_; 
v_fst_3986_ = lean_ctor_get(v_b_3981_, 0);
v_snd_3987_ = lean_ctor_get(v_b_3981_, 1);
v_isSharedCheck_4037_ = !lean_is_exclusive(v_b_3981_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_3989_ = v_b_3981_;
v_isShared_3990_ = v_isSharedCheck_4037_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_snd_3987_);
lean_inc(v_fst_3986_);
lean_dec(v_b_3981_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_4037_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v_a_3991_; lean_object* v_childTerms_3993_; lean_object* v___y_3994_; uint8_t v___y_4002_; lean_object* v___x_4018_; 
v_a_3991_ = lean_array_uget_borrowed(v_as_3978_, v_i_3980_);
v___x_4018_ = l_Lean_Syntax_getTailInfo(v_snd_3987_);
lean_dec(v_snd_3987_);
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v_trailing_4019_; lean_object* v_str_4020_; lean_object* v_startPos_4021_; lean_object* v_stopPos_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4035_; 
v_trailing_4019_ = lean_ctor_get(v___x_4018_, 2);
lean_inc_ref(v_trailing_4019_);
lean_dec_ref_known(v___x_4018_, 4);
v_str_4020_ = lean_ctor_get(v_trailing_4019_, 0);
v_startPos_4021_ = lean_ctor_get(v_trailing_4019_, 1);
v_stopPos_4022_ = lean_ctor_get(v_trailing_4019_, 2);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_trailing_4019_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4024_ = v_trailing_4019_;
v_isShared_4025_ = v_isSharedCheck_4035_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_stopPos_4022_);
lean_inc(v_startPos_4021_);
lean_inc(v_str_4020_);
lean_dec(v_trailing_4019_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4035_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; uint8_t v___x_4029_; 
v___x_4026_ = lean_string_utf8_extract(v_str_4020_, v_startPos_4021_, v_stopPos_4022_);
lean_dec(v_stopPos_4022_);
lean_dec(v_startPos_4021_);
lean_dec_ref(v_str_4020_);
v___x_4027_ = lean_string_utf8_byte_size(v___x_4026_);
v___x_4028_ = lean_unsigned_to_nat(0u);
v___x_4029_ = lean_nat_dec_eq(v___x_4027_, v___x_4028_);
if (v___x_4029_ == 0)
{
lean_object* v___x_4031_; 
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 2, v___x_4027_);
lean_ctor_set(v___x_4024_, 1, v___x_4028_);
lean_ctor_set(v___x_4024_, 0, v___x_4026_);
v___x_4031_ = v___x_4024_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v___x_4026_);
lean_ctor_set(v_reuseFailAlloc_4033_, 1, v___x_4028_);
lean_ctor_set(v_reuseFailAlloc_4033_, 2, v___x_4027_);
v___x_4031_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
uint8_t v___x_4032_; 
v___x_4032_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_4031_);
lean_dec_ref(v___x_4031_);
if (v___x_4032_ == 0)
{
v___y_4002_ = v___x_3984_;
goto v___jp_4001_;
}
else
{
v___y_4002_ = v___x_4029_;
goto v___jp_4001_;
}
}
}
else
{
uint8_t v___x_4034_; 
lean_dec_ref(v___x_4026_);
lean_del_object(v___x_4024_);
v___x_4034_ = 0;
v___y_4002_ = v___x_4034_;
goto v___jp_4001_;
}
}
}
else
{
uint8_t v___x_4036_; 
lean_dec(v___x_4018_);
v___x_4036_ = 0;
v___y_4002_ = v___x_4036_;
goto v___jp_4001_;
}
v___jp_3992_:
{
lean_object* v___x_3996_; 
lean_inc(v_a_3991_);
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 1, v_a_3991_);
lean_ctor_set(v___x_3989_, 0, v_childTerms_3993_);
v___x_3996_ = v___x_3989_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_childTerms_3993_);
lean_ctor_set(v_reuseFailAlloc_4000_, 1, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
size_t v___x_3997_; size_t v___x_3998_; lean_object* v___x_3999_; 
v___x_3997_ = ((size_t)1ULL);
v___x_3998_ = lean_usize_add(v_i_3980_, v___x_3997_);
v___x_3999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(v___y_3977_, v_as_3978_, v_sz_3979_, v___x_3998_, v___x_3996_, v___y_3982_, v___y_3994_);
return v___x_3999_;
}
}
v___jp_4001_:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Lasm_UI_Syntax_expandChild(v___y_3977_, v___y_4002_, v_a_3991_, v___y_3982_, v___y_3983_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
if (lean_obj_tag(v_a_4004_) == 1)
{
lean_object* v_a_4005_; lean_object* v_val_4006_; lean_object* v___x_4007_; 
lean_inc_ref(v_a_4004_);
v_a_4005_ = lean_ctor_get(v___x_4003_, 1);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4003_, 2);
v_val_4006_ = lean_ctor_get(v_a_4004_, 0);
lean_inc(v_val_4006_);
lean_dec_ref_known(v_a_4004_, 1);
v___x_4007_ = lean_array_push(v_fst_3986_, v_val_4006_);
v_childTerms_3993_ = v___x_4007_;
v___y_3994_ = v_a_4005_;
goto v___jp_3992_;
}
else
{
lean_object* v_a_4008_; 
v_a_4008_ = lean_ctor_get(v___x_4003_, 1);
lean_inc(v_a_4008_);
lean_dec_ref_known(v___x_4003_, 2);
v_childTerms_3993_ = v_fst_3986_;
v___y_3994_ = v_a_4008_;
goto v___jp_3992_;
}
}
else
{
lean_object* v_a_4009_; lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_del_object(v___x_3989_);
lean_dec(v_fst_3986_);
v_a_4009_ = lean_ctor_get(v___x_4003_, 0);
v_a_4010_ = lean_ctor_get(v___x_4003_, 1);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_4003_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_inc(v_a_4009_);
lean_dec(v___x_4003_);
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
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4009_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v_a_4010_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1___boxed(lean_object* v___y_4038_, lean_object* v_as_4039_, lean_object* v_sz_4040_, lean_object* v_i_4041_, lean_object* v_b_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
uint8_t v___y_30341__boxed_4045_; size_t v_sz_boxed_4046_; size_t v_i_boxed_4047_; lean_object* v_res_4048_; 
v___y_30341__boxed_4045_ = lean_unbox(v___y_4038_);
v_sz_boxed_4046_ = lean_unbox_usize(v_sz_4040_);
lean_dec(v_sz_4040_);
v_i_boxed_4047_ = lean_unbox_usize(v_i_4041_);
lean_dec(v_i_4041_);
v_res_4048_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_30341__boxed_4045_, v_as_4039_, v_sz_boxed_4046_, v_i_boxed_4047_, v_b_4042_, v___y_4043_, v___y_4044_);
lean_dec_ref(v___y_4043_);
lean_dec_ref(v_as_4039_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1___boxed(lean_object* v___y_4049_, lean_object* v_as_4050_, lean_object* v_sz_4051_, lean_object* v_i_4052_, lean_object* v_b_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
uint8_t v___y_30376__boxed_4056_; size_t v_sz_boxed_4057_; size_t v_i_boxed_4058_; lean_object* v_res_4059_; 
v___y_30376__boxed_4056_ = lean_unbox(v___y_4049_);
v_sz_boxed_4057_ = lean_unbox_usize(v_sz_4051_);
lean_dec(v_sz_4051_);
v_i_boxed_4058_ = lean_unbox_usize(v_i_4052_);
lean_dec(v_i_4052_);
v_res_4059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(v___y_30376__boxed_4056_, v_as_4050_, v_sz_boxed_4057_, v_i_boxed_4058_, v_b_4053_, v___y_4054_, v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec_ref(v_as_4050_);
return v_res_4059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild___boxed(lean_object* v_ns_4060_, lean_object* v_lead_4061_, lean_object* v_c_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_){
_start:
{
uint8_t v_ns_boxed_4065_; uint8_t v_lead_boxed_4066_; lean_object* v_res_4067_; 
v_ns_boxed_4065_ = lean_unbox(v_ns_4060_);
v_lead_boxed_4066_ = lean_unbox(v_lead_4061_);
v_res_4067_ = l_Lasm_UI_Syntax_expandChild(v_ns_boxed_4065_, v_lead_boxed_4066_, v_c_4062_, v_a_4063_, v_a_4064_);
lean_dec_ref(v_a_4063_);
lean_dec(v_c_4062_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement___boxed(lean_object* v_ns_4068_, lean_object* v_e_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_){
_start:
{
uint8_t v_ns_boxed_4072_; lean_object* v_res_4073_; 
v_ns_boxed_4072_ = lean_unbox(v_ns_4068_);
v_res_4073_ = l_Lasm_UI_Syntax_expandElement(v_ns_boxed_4072_, v_e_4069_, v_a_4070_, v_a_4071_);
lean_dec_ref(v_a_4070_);
return v_res_4073_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(lean_object* v_s_4074_, lean_object* v_inst_4075_, lean_object* v_R_4076_, lean_object* v_a_4077_, uint8_t v_b_4078_, lean_object* v_c_4079_){
_start:
{
uint8_t v___x_4080_; 
v___x_4080_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_4074_, v_a_4077_, v_b_4078_);
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___boxed(lean_object* v_s_4081_, lean_object* v_inst_4082_, lean_object* v_R_4083_, lean_object* v_a_4084_, lean_object* v_b_4085_, lean_object* v_c_4086_){
_start:
{
uint8_t v_b_boxed_4087_; uint8_t v_res_4088_; lean_object* v_r_4089_; 
v_b_boxed_4087_ = lean_unbox(v_b_4085_);
v_res_4088_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(v_s_4081_, v_inst_4082_, v_R_4083_, v_a_4084_, v_b_boxed_4087_, v_c_4086_);
lean_dec_ref(v_s_4081_);
v_r_4089_ = lean_box(v_res_4088_);
return v_r_4089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(lean_object* v_x_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_){
_start:
{
lean_object* v___x_4093_; uint8_t v___x_4094_; 
v___x_4093_ = ((lean_object*)(l_Lasm_UI_Syntax_htmlTerm___closed__1));
lean_inc(v_x_4090_);
v___x_4094_ = l_Lean_Syntax_isOfKind(v_x_4090_, v___x_4093_);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
lean_dec(v_x_4090_);
v___x_4095_ = lean_box(1);
v___x_4096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
lean_ctor_set(v___x_4096_, 1, v_a_4092_);
return v___x_4096_;
}
else
{
lean_object* v___x_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; lean_object* v___x_4100_; 
v___x_4097_ = lean_unsigned_to_nat(1u);
v___x_4098_ = l_Lean_Syntax_getArg(v_x_4090_, v___x_4097_);
lean_dec(v_x_4090_);
v___x_4099_ = 0;
v___x_4100_ = l_Lasm_UI_Syntax_expandElement(v___x_4099_, v___x_4098_, v_a_4091_, v_a_4092_);
if (lean_obj_tag(v___x_4100_) == 0)
{
lean_object* v_a_4101_; lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
v_a_4101_ = lean_ctor_get(v___x_4100_, 0);
v_a_4102_ = lean_ctor_get(v___x_4100_, 1);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4100_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_inc(v_a_4101_);
lean_dec(v___x_4100_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4101_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
else
{
lean_object* v_a_4110_; lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
v_a_4110_ = lean_ctor_get(v___x_4100_, 0);
v_a_4111_ = lean_ctor_get(v___x_4100_, 1);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4100_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_inc(v_a_4110_);
lean_dec(v___x_4100_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4110_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1___boxed(lean_object* v_x_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(v_x_4119_, v_a_4120_, v_a_4121_);
lean_dec_ref(v_a_4120_);
return v_res_4122_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
lean_object* initialize_Lasm_UI_Html(uint8_t builtin);
lean_object* initialize_Lasm_UI_Elements(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Syntax(uint8_t builtin) {
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
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Elements(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_UI_Syntax_jsxText = _init_l_Lasm_UI_Syntax_jsxText();
lean_mark_persistent(l_Lasm_UI_Syntax_jsxText);
l_Lasm_UI_Syntax_jsxName = _init_l_Lasm_UI_Syntax_jsxName();
lean_mark_persistent(l_Lasm_UI_Syntax_jsxName);
l_Lean_Parser_Category_jsxElement = _init_l_Lean_Parser_Category_jsxElement();
lean_mark_persistent(l_Lean_Parser_Category_jsxElement);
l_Lean_Parser_Category_jsxAttr = _init_l_Lean_Parser_Category_jsxAttr();
lean_mark_persistent(l_Lean_Parser_Category_jsxAttr);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
