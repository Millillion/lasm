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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
extern lean_object* l_Lasm_UI_Svg_tags;
extern lean_object* l_Lasm_UI_voidTags;
extern lean_object* l_Lasm_UI_htmlTags;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_UI_Syntax_jsxName___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expected a tag or attribute name"};
static const lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___lam__2___closed__0_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxName___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_nameChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_jsxName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jsxName"};
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 38, 177, 196, 223, 36, 48, 243)}};
static const lean_object* l_Lasm_UI_Syntax_jsxName___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value;
static const lean_closure_object l_Lasm_UI_Syntax_jsxName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Syntax_jsxName___lam__2___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxName___closed__1_value)} };
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
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__7_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__8_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__9_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__10_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__11_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__12_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__13_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_elabSplice___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_UI_Syntax_elabSplice___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__16_value;
static const lean_ctor_object l_Lasm_UI_Syntax_elabSplice___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__16_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
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
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#X"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#x"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "×"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "…"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "–"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "—"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "©"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = " "};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__28 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__28_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__29 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__29_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__30 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__30_value;
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
static lean_once_cell_t l_Lasm_UI_Syntax_isEventName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_isEventName___closed__1;
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_isEventName(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_isEventName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_lowerFirst(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__4_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__6_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Attr.attr"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__7_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__8;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__9_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 47, 106, 13, 191, 164, 180)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(6, 57, 206, 184, 36, 197, 61, 244)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__10 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__11 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__10_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__12 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__12_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__13 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__13_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__11_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__13_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__14 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__14_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\""};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__15 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__15_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__16 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__16_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " needs a value: "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__17 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__17_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = "={…}"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__18 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__18_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__19 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__19_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__19_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__20_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__21 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__21_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__21_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__22_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__23_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__24_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__24_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__25_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__26;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__27_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__28_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__29_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__29_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__29_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__30 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__30_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__31 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__31_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__31_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__32 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__32_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__33 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__33_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__30_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__33_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__34 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__34_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__28_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__34_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__35 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__35_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.UI.ToAttrValue.toAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__36 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__36_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__37;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ToAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__38 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toAttrValue"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__39 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__39_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__38_value),LEAN_SCALAR_PTR_LITERAL(211, 81, 235, 32, 160, 23, 242, 126)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__39_value),LEAN_SCALAR_PTR_LITERAL(136, 185, 239, 21, 209, 36, 46, 186)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__40 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__40_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__41 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__41_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__41_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__42 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__42_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "bad attribute value"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__43 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__43_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__44 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__44_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.UI.stylesOf"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__45 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__45_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__46;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stylesOf"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__47 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__47_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__47_value),LEAN_SCALAR_PTR_LITERAL(239, 59, 168, 107, 47, 108, 16, 141)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__48 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__49 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__49_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__48_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__50 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__50_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__50_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__51 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__51_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__49_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__51_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__52 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__52_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "className"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__53 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__53_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "htmlFor"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__54 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__54_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__55 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__55_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__56 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__56_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Attr.prop"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__57 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__57_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__58;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prop"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__59 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__59_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_elabAttrs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 47, 106, 13, 191, 164, 180)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__59_value),LEAN_SCALAR_PTR_LITERAL(211, 53, 92, 174, 6, 135, 8, 21)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__60 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__61 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__61_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__60_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__62 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__62_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__63 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__63_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__61_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__63_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__64 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__64_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__65 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__65_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__66_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__65_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__66 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__66_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__67 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__67_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__68;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bad value"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__69 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__69_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " is a boolean property: write "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__70 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__70_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "={true}, "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__71 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__71_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "={b} or a bare "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__72 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__72_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bool"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__73 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__73_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__74;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__73_value),LEAN_SCALAR_PTR_LITERAL(196, 123, 29, 106, 21, 111, 175, 162)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__75 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__75_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__75_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__76 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__76_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__75_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__77 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__77_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__77_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__78 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__78_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__76_value),((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__78_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__79 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__79_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unsupported attribute"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__80 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__80_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Lasm.UI.on"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__81 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__81_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandAttr___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandAttr___closed__82;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_isEventName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 14, 190, 50, 229, 40, 111, 161)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__83 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__83_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__84 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__84_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__84_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__85 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__85_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__86 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__86_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandAttr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__86_value),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__87 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__87_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " takes a Lean value: "};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__88 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__88_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "event attributes are written in camel case: on"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__89 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__89_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_UI_Syntax_expandAttr___closed__90 = (const lean_object*)&l_Lasm_UI_Syntax_expandAttr___closed__90_value;
static const lean_string_object l_Lasm_UI_Syntax_expandAttr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bad key"};
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
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
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
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__14_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
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
static lean_once_cell_t l_Lasm_UI_Syntax_expandElement___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandElement___closed__21;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "foreignObject"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__22_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown SVG element <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__23_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "> is a void element and takes no children: write <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__24_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " … />"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__25 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__25_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "math"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__26 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__26_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown HTML element <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__27 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__27_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "> (custom elements need a `-` in their name)"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__28 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__28_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "> closes <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__29 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__29_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected an element"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__30 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__30_value;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2(uint8_t v___x_150_, lean_object* v___x_151_, lean_object* v_c_152_, lean_object* v_s_153_){
_start:
{
lean_object* v_pos_158_; lean_object* v_toInputContext_159_; uint8_t v___x_160_; 
v_pos_158_ = lean_ctor_get(v_s_153_, 2);
v_toInputContext_159_ = lean_ctor_get(v_c_152_, 0);
v___x_160_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_159_, v_pos_158_);
if (v___x_160_ == 0)
{
lean_object* v_inputString_166_; uint32_t v_ch_167_; uint32_t v___x_176_; uint8_t v___x_177_; 
v_inputString_166_ = lean_ctor_get(v_toInputContext_159_, 0);
v_ch_167_ = lean_string_utf8_get(v_inputString_166_, v_pos_158_);
v___x_176_ = 65;
v___x_177_ = lean_uint32_dec_le(v___x_176_, v_ch_167_);
if (v___x_177_ == 0)
{
goto v___jp_171_;
}
else
{
uint32_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 90;
v___x_179_ = lean_uint32_dec_le(v_ch_167_, v___x_178_);
if (v___x_179_ == 0)
{
goto v___jp_171_;
}
else
{
goto v___jp_161_;
}
}
v___jp_168_:
{
uint32_t v___x_169_; uint8_t v___x_170_; 
v___x_169_ = 95;
v___x_170_ = lean_uint32_dec_eq(v_ch_167_, v___x_169_);
if (v___x_170_ == 0)
{
lean_dec_ref(v_c_152_);
lean_dec(v___x_151_);
goto v___jp_154_;
}
else
{
goto v___jp_161_;
}
}
v___jp_171_:
{
uint32_t v___x_172_; uint8_t v___x_173_; 
v___x_172_ = 97;
v___x_173_ = lean_uint32_dec_le(v___x_172_, v_ch_167_);
if (v___x_173_ == 0)
{
goto v___jp_168_;
}
else
{
uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_174_ = 122;
v___x_175_ = lean_uint32_dec_le(v_ch_167_, v___x_174_);
if (v___x_175_ == 0)
{
goto v___jp_168_;
}
else
{
goto v___jp_161_;
}
}
}
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec_ref(v_c_152_);
lean_dec(v___x_151_);
v___x_180_ = lean_box(0);
v___x_181_ = l_Lean_Parser_ParserState_mkEOIError(v_s_153_, v___x_180_);
return v___x_181_;
}
v___jp_154_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___lam__2___closed__0));
v___x_156_ = lean_box(0);
v___x_157_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_153_, v___x_155_, v___x_156_, v___x_150_);
return v___x_157_;
}
v___jp_161_:
{
if (v___x_160_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_s_164_; lean_object* v___x_165_; 
lean_inc(v_pos_158_);
v___x_162_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___lam__2___closed__1));
v___x_163_ = l_Lean_Parser_ParserState_next(v_s_153_, v_c_152_, v_pos_158_);
v_s_164_ = l_Lean_Parser_takeWhileFn(v___x_162_, v_c_152_, v___x_163_);
v___x_165_ = l_Lean_Parser_mkNodeToken(v___x_151_, v_pos_158_, v___x_150_, v_c_152_, v_s_164_);
return v___x_165_;
}
else
{
lean_dec_ref(v_c_152_);
lean_dec(v___x_151_);
goto v___jp_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName___lam__2___boxed(lean_object* v___x_182_, lean_object* v___x_183_, lean_object* v_c_184_, lean_object* v_s_185_){
_start:
{
uint8_t v___x_179__boxed_186_; lean_object* v_res_187_; 
v___x_179__boxed_186_ = lean_unbox(v___x_182_);
v_res_187_ = l_Lasm_UI_Syntax_jsxName___lam__2(v___x_179__boxed_186_, v___x_183_, v_c_184_, v_s_185_);
return v_res_187_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName___closed__3(void){
_start:
{
uint8_t v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_198_ = 0;
v___x_199_ = 1;
v___x_200_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
v___x_201_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__0));
v___x_202_ = l_Lean_Parser_mkAntiquot(v___x_201_, v___x_200_, v___x_199_, v___x_198_);
return v___x_202_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName___closed__5(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_206_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__4));
v___x_207_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxName___closed__3, &l_Lasm_UI_Syntax_jsxName___closed__3_once, _init_l_Lasm_UI_Syntax_jsxName___closed__3);
v___x_208_ = l_Lean_Parser_withAntiquot(v___x_207_, v___x_206_);
return v___x_208_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_jsxName(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_obj_once(&l_Lasm_UI_Syntax_jsxName___closed__5, &l_Lasm_UI_Syntax_jsxName___closed__5_once, _init_l_Lasm_UI_Syntax_jsxName___closed__5);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg(){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = lean_box(0);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___redArg___boxed(lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lasm_UI_Syntax_jsxText_formatter___redArg();
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter(lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_UI_Syntax_jsxText_formatter___redArg();
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_formatter___boxed(lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lasm_UI_Syntax_jsxText_formatter(v_a_221_, v_a_222_, v_a_223_, v_a_224_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg(){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(0);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg___boxed(lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg();
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer(lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lasm_UI_Syntax_jsxText_parenthesizer___redArg();
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxText_parenthesizer___boxed(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lasm_UI_Syntax_jsxText_parenthesizer(v_a_238_, v_a_239_, v_a_240_, v_a_241_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg(){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_box(0);
v___x_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___redArg___boxed(lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_UI_Syntax_jsxName_formatter___redArg();
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter(lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lasm_UI_Syntax_jsxName_formatter___redArg();
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_formatter___boxed(lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lasm_UI_Syntax_jsxName_formatter(v_a_255_, v_a_256_, v_a_257_, v_a_258_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
lean_dec(v_a_256_);
lean_dec_ref(v_a_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg(){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_box(0);
v___x_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg___boxed(lean_object* v_a_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg();
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer(lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lasm_UI_Syntax_jsxName_parenthesizer___redArg();
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxName_parenthesizer___boxed(lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lasm_UI_Syntax_jsxName_parenthesizer(v_a_272_, v_a_273_, v_a_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec_ref(v_a_274_);
lean_dec(v_a_273_);
lean_dec_ref(v_a_272_);
return v_res_277_;
}
}
static lean_object* _init_l_Lean_Parser_Category_jsxElement(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = lean_box(0);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_Parser_Category_jsxAttr(void){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_box(0);
return v___x_352_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0));
v___x_636_ = l_Lean_stringToMessageData(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_639_ = l_Lean_stringToMessageData(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0(lean_object* v_a_647_, lean_object* v_t_648_, lean_object* v_kind_649_, lean_object* v_00_u03b1_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v___y_659_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_668_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_669_ = lean_name_eq(v_kind_649_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
v___x_670_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6));
v___y_659_ = v___x_670_;
goto v___jp_658_;
}
else
{
lean_object* v___x_671_; 
v___x_671_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7));
v___y_659_ = v___x_671_;
goto v___jp_658_;
}
v___jp_658_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_660_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1);
v___x_661_ = l_Lean_indentExpr(v_a_647_);
v___x_662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3);
v___x_664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
lean_inc_ref(v___y_659_);
v___x_665_ = l_Lean_stringToMessageData(v___y_659_);
v___x_666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_throwStuckAtUniverseCnstr_spec__3___redArg(v_t_648_, v___x_666_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
return v___x_667_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___boxed(lean_object* v_a_672_, lean_object* v_t_673_, lean_object* v_kind_674_, lean_object* v_00_u03b1_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_UI_Syntax_elabSplice___lam__0(v_a_672_, v_t_673_, v_kind_674_, v_00_u03b1_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v_kind_674_);
lean_dec(v_t_673_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice(lean_object* v_kind_719_, lean_object* v_t_720_, lean_object* v_expected_x3f_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_754_; lean_object* v___y_755_; uint8_t v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v_msg_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; 
if (lean_obj_tag(v_expected_x3f_721_) == 0)
{
uint8_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = 0;
v___x_1026_ = lean_box(0);
v___x_1027_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1025_, v___x_1026_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_msg_976_ = v_a_1028_;
v___y_977_ = v_a_722_;
v___y_978_ = v_a_723_;
v___y_979_ = v_a_724_;
v___y_980_ = v_a_725_;
v___y_981_ = v_a_726_;
v___y_982_ = v_a_727_;
goto v___jp_975_;
}
else
{
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1027_;
}
}
else
{
lean_object* v_val_1029_; lean_object* v___x_1030_; lean_object* v_a_1031_; lean_object* v___x_1032_; 
v_val_1029_ = lean_ctor_get(v_expected_x3f_721_, 0);
lean_inc(v_val_1029_);
lean_dec_ref_known(v_expected_x3f_721_, 1);
v___x_1030_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_val_1029_, v_a_725_);
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref(v___x_1030_);
v___x_1032_ = l_Lean_Meta_whnfR(v_a_1031_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_a_1033_);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1034_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_1035_ = lean_unsigned_to_nat(1u);
v___x_1036_ = l_Lean_Expr_isAppOfArity(v_a_1033_, v___x_1034_, v___x_1035_);
if (v___x_1036_ == 0)
{
uint8_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
lean_dec(v_a_1033_);
v___x_1037_ = 0;
v___x_1038_ = lean_box(0);
v___x_1039_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1037_, v___x_1038_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 1);
v_msg_976_ = v_a_1040_;
v___y_977_ = v_a_722_;
v___y_978_ = v_a_723_;
v___y_979_ = v_a_724_;
v___y_980_ = v_a_725_;
v___y_981_ = v_a_726_;
v___y_982_ = v_a_727_;
goto v___jp_975_;
}
else
{
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1039_;
}
}
else
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v_a_1043_; lean_object* v___x_1044_; 
v___x_1041_ = l_Lean_Expr_appArg_x21(v_a_1033_);
lean_dec(v_a_1033_);
v___x_1042_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v___x_1041_, v_a_725_);
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = l_Lean_Meta_whnfR(v_a_1043_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; uint8_t v___x_1046_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc(v_a_1045_);
lean_dec_ref_known(v___x_1044_, 1);
v___x_1046_ = l_Lean_Expr_isAppOfArity(v_a_1045_, v_kind_719_, v___x_1035_);
if (v___x_1046_ == 0)
{
uint8_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec(v_a_1045_);
v___x_1047_ = 0;
v___x_1048_ = lean_box(0);
v___x_1049_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1047_, v___x_1048_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v_msg_976_ = v_a_1050_;
v___y_977_ = v_a_722_;
v___y_978_ = v_a_723_;
v___y_979_ = v_a_724_;
v___y_980_ = v_a_725_;
v___y_981_ = v_a_726_;
v___y_982_ = v_a_727_;
goto v___jp_975_;
}
else
{
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1049_;
}
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Expr_appArg_x21(v_a_1045_);
lean_dec(v_a_1045_);
v_msg_976_ = v___x_1051_;
v___y_977_ = v_a_722_;
v___y_978_ = v_a_723_;
v___y_979_ = v_a_724_;
v___y_980_ = v_a_725_;
v___y_981_ = v_a_726_;
v___y_982_ = v_a_727_;
goto v___jp_975_;
}
}
else
{
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1044_;
}
}
}
else
{
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1032_;
}
}
v___jp_729_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__2));
v___x_744_ = lean_array_push(v___y_741_, v___y_742_);
v___x_745_ = l_Lean_Meta_mkAppM(v___x_743_, v___x_744_, v___y_732_, v___y_736_, v___y_735_, v___y_739_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___lam__3___closed__0));
lean_inc_ref(v___y_740_);
lean_inc_ref(v___y_730_);
lean_inc_ref(v___y_733_);
v___x_748_ = l_Lean_Name_mkStr4(v___y_733_, v___y_730_, v___y_740_, v___x_747_);
v___x_749_ = l_Lean_Expr_const___override(v___x_748_, v___y_737_);
v___x_750_ = l_Lean_mkAppB(v___x_749_, v___y_734_, v_a_746_);
v___x_751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
lean_ctor_set(v___x_751_, 1, v___y_731_);
v___x_752_ = l_Lean_Meta_mkListLit(v___y_738_, v___x_751_, v___y_732_, v___y_736_, v___y_735_, v___y_739_);
return v___x_752_;
}
else
{
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_731_);
return v___x_745_;
}
}
v___jp_753_:
{
if (v___y_756_ == 0)
{
lean_object* v___x_772_; 
lean_dec(v___y_770_);
lean_dec_ref(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_755_);
lean_inc(v___y_766_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_757_);
lean_inc(v___y_769_);
lean_inc_ref(v___y_759_);
v___x_772_ = lean_apply_8(v___y_771_, lean_box(0), v___y_759_, v___y_769_, v___y_757_, v___y_762_, v___y_761_, v___y_766_, lean_box(0));
return v___x_772_;
}
else
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__4));
v___x_774_ = lean_name_eq(v___y_770_, v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__6));
v___x_776_ = lean_name_eq(v___y_770_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__8));
v___x_778_ = lean_name_eq(v___y_770_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__10));
v___x_780_ = lean_name_eq(v___y_770_, v___x_779_);
lean_dec(v___y_770_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; 
lean_dec_ref(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_755_);
lean_inc(v___y_766_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_757_);
lean_inc(v___y_769_);
lean_inc_ref(v___y_759_);
v___x_781_ = lean_apply_8(v___y_771_, lean_box(0), v___y_759_, v___y_769_, v___y_757_, v___y_762_, v___y_761_, v___y_766_, lean_box(0));
return v___x_781_;
}
else
{
lean_dec_ref(v___y_771_);
v___y_730_ = v___y_754_;
v___y_731_ = v___y_755_;
v___y_732_ = v___y_757_;
v___y_733_ = v___y_758_;
v___y_734_ = v___y_760_;
v___y_735_ = v___y_761_;
v___y_736_ = v___y_762_;
v___y_737_ = v___y_763_;
v___y_738_ = v___y_764_;
v___y_739_ = v___y_766_;
v___y_740_ = v___y_765_;
v___y_741_ = v___y_768_;
v___y_742_ = v___y_767_;
goto v___jp_729_;
}
}
else
{
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
v___y_730_ = v___y_754_;
v___y_731_ = v___y_755_;
v___y_732_ = v___y_757_;
v___y_733_ = v___y_758_;
v___y_734_ = v___y_760_;
v___y_735_ = v___y_761_;
v___y_736_ = v___y_762_;
v___y_737_ = v___y_763_;
v___y_738_ = v___y_764_;
v___y_739_ = v___y_766_;
v___y_740_ = v___y_765_;
v___y_741_ = v___y_768_;
v___y_742_ = v___y_767_;
goto v___jp_729_;
}
}
else
{
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
v___y_730_ = v___y_754_;
v___y_731_ = v___y_755_;
v___y_732_ = v___y_757_;
v___y_733_ = v___y_758_;
v___y_734_ = v___y_760_;
v___y_735_ = v___y_761_;
v___y_736_ = v___y_762_;
v___y_737_ = v___y_763_;
v___y_738_ = v___y_764_;
v___y_739_ = v___y_766_;
v___y_740_ = v___y_765_;
v___y_741_ = v___y_768_;
v___y_742_ = v___y_767_;
goto v___jp_729_;
}
}
else
{
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
v___y_730_ = v___y_754_;
v___y_731_ = v___y_755_;
v___y_732_ = v___y_757_;
v___y_733_ = v___y_758_;
v___y_734_ = v___y_760_;
v___y_735_ = v___y_761_;
v___y_736_ = v___y_762_;
v___y_737_ = v___y_763_;
v___y_738_ = v___y_764_;
v___y_739_ = v___y_766_;
v___y_740_ = v___y_765_;
v___y_741_ = v___y_768_;
v___y_742_ = v___y_767_;
goto v___jp_729_;
}
}
}
v___jp_782_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_790_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__11));
lean_inc_ref(v___y_785_);
v___x_791_ = l_Lean_Name_mkStr2(v___y_785_, v___x_790_);
v___x_792_ = lean_array_push(v___y_784_, v___y_783_);
v___x_793_ = l_Lean_Meta_mkAppM(v___x_791_, v___x_792_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
return v___x_793_;
}
v___jp_794_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_802_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__11));
lean_inc_ref(v___y_795_);
v___x_803_ = l_Lean_Name_mkStr2(v___y_795_, v___x_802_);
v___x_804_ = lean_array_push(v___y_797_, v___y_796_);
v___x_805_ = l_Lean_Meta_mkAppM(v___x_803_, v___x_804_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
return v___x_805_;
}
v___jp_806_:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_814_, 0, v___y_809_);
lean_ctor_set(v___x_814_, 1, v___y_807_);
v___x_815_ = l_Lean_Meta_mkListLit(v___y_808_, v___x_814_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
return v___x_815_;
}
v___jp_816_:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = l_Lean_Expr_getAppFn(v___y_822_);
v___x_835_ = l_Lean_Expr_constName_x3f(v___x_834_);
lean_dec_ref(v___x_834_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v___x_836_; 
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v_kind_719_);
v___x_836_ = l_Lean_Meta_isExprDefEq(v___y_822_, v___y_823_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_846_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_846_ == 0)
{
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_846_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_846_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
uint8_t v___x_841_; 
v___x_841_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
lean_del_object(v___x_839_);
lean_dec_ref(v___y_825_);
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___x_842_ = lean_apply_8(v___y_827_, lean_box(0), v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, lean_box(0));
return v___x_842_;
}
else
{
lean_object* v___x_844_; 
lean_dec_ref(v___y_827_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v___y_825_);
v___x_844_ = v___x_839_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___y_825_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
v_a_847_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_836_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_836_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
else
{
lean_object* v_val_855_; uint8_t v___x_856_; 
v_val_855_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_val_855_);
lean_dec_ref_known(v___x_835_, 1);
v___x_856_ = lean_name_eq(v_val_855_, v_kind_719_);
if (v___x_856_ == 0)
{
uint8_t v___x_857_; 
v___x_857_ = lean_name_eq(v_val_855_, v___y_818_);
lean_dec(v___y_818_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; 
lean_dec_ref(v___y_823_);
v___x_858_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__12));
v___x_859_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__13));
v___x_860_ = lean_name_eq(v_val_855_, v___x_859_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_861_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__14));
v___x_862_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__15));
v___x_863_ = lean_name_eq(v_val_855_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
lean_dec_ref(v___y_822_);
lean_dec_ref(v___y_817_);
v___x_864_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__4));
v___x_865_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__5));
v___x_866_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4));
v___x_867_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_868_ = lean_name_eq(v_kind_719_, v___x_867_);
lean_dec(v_kind_719_);
if (v___x_868_ == 0)
{
v___y_754_ = v___x_865_;
v___y_755_ = v___y_820_;
v___y_756_ = v___x_868_;
v___y_757_ = v___y_830_;
v___y_758_ = v___x_864_;
v___y_759_ = v___y_828_;
v___y_760_ = v___y_826_;
v___y_761_ = v___y_832_;
v___y_762_ = v___y_831_;
v___y_763_ = v___y_819_;
v___y_764_ = v___y_821_;
v___y_765_ = v___x_866_;
v___y_766_ = v___y_833_;
v___y_767_ = v___y_825_;
v___y_768_ = v___y_824_;
v___y_769_ = v___y_829_;
v___y_770_ = v_val_855_;
v___y_771_ = v___y_827_;
goto v___jp_753_;
}
else
{
lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_869_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__17));
v___x_870_ = lean_name_eq(v_val_855_, v___x_869_);
if (v___x_870_ == 0)
{
v___y_754_ = v___x_865_;
v___y_755_ = v___y_820_;
v___y_756_ = v___x_868_;
v___y_757_ = v___y_830_;
v___y_758_ = v___x_864_;
v___y_759_ = v___y_828_;
v___y_760_ = v___y_826_;
v___y_761_ = v___y_832_;
v___y_762_ = v___y_831_;
v___y_763_ = v___y_819_;
v___y_764_ = v___y_821_;
v___y_765_ = v___x_866_;
v___y_766_ = v___y_833_;
v___y_767_ = v___y_825_;
v___y_768_ = v___y_824_;
v___y_769_ = v___y_829_;
v___y_770_ = v_val_855_;
v___y_771_ = v___y_827_;
goto v___jp_753_;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
lean_dec(v_val_855_);
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_824_);
v___x_871_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
v___x_872_ = l_Lean_Expr_const___override(v___x_871_, v___y_819_);
v___x_873_ = l_Lean_mkAppB(v___x_872_, v___y_826_, v___y_825_);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
lean_ctor_set(v___x_874_, 1, v___y_820_);
v___x_875_ = l_Lean_Meta_mkListLit(v___y_821_, v___x_874_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
return v___x_875_;
}
}
}
else
{
lean_object* v___x_876_; 
lean_dec(v_val_855_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec(v___y_819_);
lean_dec(v_kind_719_);
v___x_876_ = l_Lean_Meta_mkAppM(v___x_862_, v___y_817_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = l_Lean_Meta_isExprDefEq(v___y_822_, v_a_877_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; uint8_t v___x_880_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = lean_unbox(v_a_879_);
lean_dec(v_a_879_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___x_881_ = lean_apply_8(v___y_827_, lean_box(0), v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, lean_box(0));
if (lean_obj_tag(v___x_881_) == 0)
{
lean_dec_ref_known(v___x_881_, 1);
v___y_783_ = v___y_825_;
v___y_784_ = v___y_824_;
v___y_785_ = v___x_861_;
v___y_786_ = v___y_830_;
v___y_787_ = v___y_831_;
v___y_788_ = v___y_832_;
v___y_789_ = v___y_833_;
goto v___jp_782_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
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
lean_dec_ref(v___y_827_);
v___y_783_ = v___y_825_;
v___y_784_ = v___y_824_;
v___y_785_ = v___x_861_;
v___y_786_ = v___y_830_;
v___y_787_ = v___y_831_;
v___y_788_ = v___y_832_;
v___y_789_ = v___y_833_;
goto v___jp_782_;
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
v_a_890_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_878_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_878_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
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
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_822_);
return v___x_876_;
}
}
}
else
{
lean_object* v___x_898_; 
lean_dec(v_val_855_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec(v___y_819_);
lean_dec(v_kind_719_);
v___x_898_ = l_Lean_Meta_mkAppM(v___x_859_, v___y_817_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = l_Lean_Meta_isExprDefEq(v___y_822_, v_a_899_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; uint8_t v___x_902_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
v___x_902_ = lean_unbox(v_a_901_);
lean_dec(v_a_901_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; 
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___x_903_ = lean_apply_8(v___y_827_, lean_box(0), v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, lean_box(0));
if (lean_obj_tag(v___x_903_) == 0)
{
lean_dec_ref_known(v___x_903_, 1);
v___y_795_ = v___x_858_;
v___y_796_ = v___y_825_;
v___y_797_ = v___y_824_;
v___y_798_ = v___y_830_;
v___y_799_ = v___y_831_;
v___y_800_ = v___y_832_;
v___y_801_ = v___y_833_;
goto v___jp_794_;
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_dec_ref(v___y_827_);
v___y_795_ = v___x_858_;
v___y_796_ = v___y_825_;
v___y_797_ = v___y_824_;
v___y_798_ = v___y_830_;
v___y_799_ = v___y_831_;
v___y_800_ = v___y_832_;
v___y_801_ = v___y_833_;
goto v___jp_794_;
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
v_a_912_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_900_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_900_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
else
{
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_822_);
return v___x_898_;
}
}
}
else
{
lean_object* v___x_920_; 
lean_dec(v_val_855_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_817_);
lean_dec(v_kind_719_);
v___x_920_ = l_Lean_Meta_isExprDefEq(v___y_822_, v___y_823_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_946_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_946_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_946_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_946_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
uint8_t v___x_925_; 
v___x_925_ = lean_unbox(v_a_921_);
lean_dec(v_a_921_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; 
lean_del_object(v___x_923_);
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___x_926_ = lean_apply_8(v___y_827_, lean_box(0), v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, lean_box(0));
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; 
v_unused_934_ = lean_ctor_get(v___x_926_, 0);
lean_dec(v_unused_934_);
v___x_928_ = v___x_926_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_926_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___y_825_);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___y_825_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec_ref(v___y_825_);
v_a_935_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_926_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_926_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
lean_object* v___x_944_; 
lean_dec_ref(v___y_827_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___y_825_);
v___x_944_ = v___x_923_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___y_825_);
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
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
v_a_947_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_920_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_920_);
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
else
{
lean_object* v___x_955_; 
lean_dec(v_val_855_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v_kind_719_);
lean_inc_ref(v___y_821_);
v___x_955_ = l_Lean_Meta_isExprDefEq(v___y_822_, v___y_821_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; uint8_t v___x_957_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = lean_unbox(v_a_956_);
lean_dec(v_a_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___x_958_ = lean_apply_8(v___y_827_, lean_box(0), v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, lean_box(0));
if (lean_obj_tag(v___x_958_) == 0)
{
lean_dec_ref_known(v___x_958_, 1);
v___y_807_ = v___y_820_;
v___y_808_ = v___y_821_;
v___y_809_ = v___y_825_;
v___y_810_ = v___y_830_;
v___y_811_ = v___y_831_;
v___y_812_ = v___y_832_;
v___y_813_ = v___y_833_;
goto v___jp_806_;
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
else
{
lean_dec_ref(v___y_827_);
v___y_807_ = v___y_820_;
v___y_808_ = v___y_821_;
v___y_809_ = v___y_825_;
v___y_810_ = v___y_830_;
v___y_811_ = v___y_831_;
v___y_812_ = v___y_832_;
v___y_813_ = v___y_833_;
goto v___jp_806_;
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
v_a_967_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_955_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_955_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
}
v___jp_975_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_elemTy_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_983_ = lean_box(0);
lean_inc(v_kind_719_);
v___x_984_ = l_Lean_Expr_const___override(v_kind_719_, v___x_983_);
lean_inc_ref(v_msg_976_);
v_elemTy_985_ = l_Lean_Expr_app___override(v___x_984_, v_msg_976_);
v___x_986_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = lean_mk_empty_array_with_capacity(v___x_987_);
lean_inc_ref(v_elemTy_985_);
lean_inc_ref(v___x_988_);
v___x_989_ = lean_array_push(v___x_988_, v_elemTy_985_);
lean_inc_ref(v___x_989_);
v___x_990_ = l_Lean_Meta_mkAppM(v___x_986_, v___x_989_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_992_; uint8_t v___x_993_; lean_object* v___x_994_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = lean_box(0);
v___x_993_ = 1;
lean_inc(v_t_720_);
v___x_994_ = l_Lean_Elab_Term_elabTerm(v_t_720_, v___x_992_, v___x_993_, v___x_993_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; uint8_t v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v___x_996_ = 0;
v___x_997_ = 0;
v___x_998_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_996_, v___x_997_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v___x_999_; 
lean_dec_ref_known(v___x_998_, 1);
lean_inc(v___y_982_);
lean_inc_ref(v___y_981_);
lean_inc(v___y_980_);
lean_inc_ref(v___y_979_);
lean_inc(v_a_995_);
v___x_999_ = lean_infer_type(v_a_995_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; lean_object* v_a_1002_; lean_object* v___x_1003_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_a_1000_, v___y_980_);
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref(v___x_1001_);
v___x_1003_ = l_Lean_Meta_whnfR(v_a_1002_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc_n(v_a_1004_, 2);
lean_dec_ref_known(v___x_1003_, 1);
lean_inc(v_kind_719_);
v___f_1005_ = lean_alloc_closure((void*)(l_Lasm_UI_Syntax_elabSplice___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1005_, 0, v_a_1004_);
lean_closure_set(v___f_1005_, 1, v_t_720_);
lean_closure_set(v___f_1005_, 2, v_kind_719_);
v___x_1006_ = l_Lean_Expr_getAppFn(v_a_1004_);
v___x_1007_ = l_Lean_Expr_isMVar(v___x_1006_);
lean_dec_ref(v___x_1006_);
if (v___x_1007_ == 0)
{
v___y_817_ = v___x_989_;
v___y_818_ = v___x_986_;
v___y_819_ = v___x_983_;
v___y_820_ = v___x_983_;
v___y_821_ = v_elemTy_985_;
v___y_822_ = v_a_1004_;
v___y_823_ = v_a_991_;
v___y_824_ = v___x_988_;
v___y_825_ = v_a_995_;
v___y_826_ = v_msg_976_;
v___y_827_ = v___f_1005_;
v___y_828_ = v___y_977_;
v___y_829_ = v___y_978_;
v___y_830_ = v___y_979_;
v___y_831_ = v___y_980_;
v___y_832_ = v___y_981_;
v___y_833_ = v___y_982_;
goto v___jp_816_;
}
else
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lean_Elab_Term_tryPostpone(v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_dec_ref_known(v___x_1008_, 1);
v___y_817_ = v___x_989_;
v___y_818_ = v___x_986_;
v___y_819_ = v___x_983_;
v___y_820_ = v___x_983_;
v___y_821_ = v_elemTy_985_;
v___y_822_ = v_a_1004_;
v___y_823_ = v_a_991_;
v___y_824_ = v___x_988_;
v___y_825_ = v_a_995_;
v___y_826_ = v_msg_976_;
v___y_827_ = v___f_1005_;
v___y_828_ = v___y_977_;
v___y_829_ = v___y_978_;
v___y_830_ = v___y_979_;
v___y_831_ = v___y_980_;
v___y_832_ = v___y_981_;
v___y_833_ = v___y_982_;
goto v___jp_816_;
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec_ref(v___f_1005_);
lean_dec(v_a_1004_);
lean_dec(v_a_995_);
lean_dec(v_a_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_kind_719_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
else
{
lean_dec(v_a_995_);
lean_dec(v_a_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_1003_;
}
}
else
{
lean_dec(v_a_995_);
lean_dec(v_a_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_999_;
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_995_);
lean_dec(v_a_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
v_a_1017_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_998_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_998_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_dec(v_a_991_);
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_994_;
}
}
else
{
lean_dec_ref(v___x_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_elemTy_985_);
lean_dec_ref(v_msg_976_);
lean_dec(v_t_720_);
lean_dec(v_kind_719_);
return v___x_990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___boxed(lean_object* v_kind_1052_, lean_object* v_t_1053_, lean_object* v_expected_x3f_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lasm_UI_Syntax_elabSplice(v_kind_1052_, v_t_1053_, v_expected_x3f_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren(lean_object* v_stx_1063_, lean_object* v_expected_x3f_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1072_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_1073_ = lean_unsigned_to_nat(1u);
v___x_1074_ = l_Lean_Syntax_getArg(v_stx_1063_, v___x_1073_);
v___x_1075_ = l_Lasm_UI_Syntax_elabSplice(v___x_1072_, v___x_1074_, v_expected_x3f_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren___boxed(lean_object* v_stx_1076_, lean_object* v_expected_x3f_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_UI_Syntax_elabChildren(v_stx_1076_, v_expected_x3f_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
lean_dec(v_a_1081_);
lean_dec_ref(v_a_1080_);
lean_dec(v_a_1079_);
lean_dec_ref(v_a_1078_);
lean_dec(v_stx_1076_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs(lean_object* v_stx_1091_, lean_object* v_expected_x3f_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1100_ = ((lean_object*)(l_Lasm_UI_Syntax_elabAttrs___closed__1));
v___x_1101_ = lean_unsigned_to_nat(1u);
v___x_1102_ = l_Lean_Syntax_getArg(v_stx_1091_, v___x_1101_);
v___x_1103_ = l_Lasm_UI_Syntax_elabSplice(v___x_1100_, v___x_1102_, v_expected_x3f_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs___boxed(lean_object* v_stx_1104_, lean_object* v_expected_x3f_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lasm_UI_Syntax_elabAttrs(v_stx_1104_, v_expected_x3f_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec(v_a_1107_);
lean_dec_ref(v_a_1106_);
lean_dec(v_stx_1104_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf(lean_object* v_stx_1114_){
_start:
{
switch(lean_obj_tag(v_stx_1114_))
{
case 1:
{
lean_object* v_args_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; 
v_args_1115_ = lean_ctor_get(v_stx_1114_, 2);
v___x_1116_ = lean_array_get_size(v_args_1115_);
v___x_1117_ = lean_unsigned_to_nat(1u);
v___x_1118_ = lean_nat_dec_eq(v___x_1116_, v___x_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_Syntax_getAtomVal(v_stx_1114_);
return v___x_1119_;
}
else
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_unsigned_to_nat(0u);
v___x_1121_ = lean_array_fget_borrowed(v_args_1115_, v___x_1120_);
if (lean_obj_tag(v___x_1121_) == 2)
{
lean_object* v_val_1122_; 
v_val_1122_ = lean_ctor_get(v___x_1121_, 1);
lean_inc_ref(v_val_1122_);
return v_val_1122_;
}
else
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_Syntax_getAtomVal(v_stx_1114_);
return v___x_1123_;
}
}
}
case 2:
{
lean_object* v_val_1124_; 
v_val_1124_ = lean_ctor_get(v_stx_1114_, 1);
lean_inc_ref(v_val_1124_);
return v_val_1124_;
}
default: 
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_Syntax_getAtomVal(v_stx_1114_);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf___boxed(lean_object* v_stx_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lasm_UI_Syntax_nameOf(v_stx_1126_);
lean_dec(v_stx_1126_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(lean_object* v___y_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
if (lean_obj_tag(v_a_1129_) == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_array_to_list(v_a_1130_);
return v___x_1131_;
}
else
{
lean_object* v_head_1132_; lean_object* v_tail_1133_; lean_object* v___y_1135_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; lean_object* v___y_1143_; 
v_head_1132_ = lean_ctor_get(v_a_1129_, 0);
lean_inc(v_head_1132_);
v_tail_1133_ = lean_ctor_get(v_a_1129_, 1);
lean_inc(v_tail_1133_);
lean_dec_ref_known(v_a_1129_, 2);
v___x_1138_ = lean_array_get_size(v_a_1130_);
v___x_1139_ = lean_unsigned_to_nat(1u);
v___x_1140_ = l_List_lengthTR___redArg(v___y_1128_);
v___x_1141_ = lean_nat_dec_lt(v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
v___y_1143_ = v_head_1132_;
goto v___jp_1142_;
}
else
{
lean_object* v___x_1152_; uint8_t v___x_1153_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = lean_nat_dec_lt(v___x_1152_, v___x_1138_);
if (v___x_1153_ == 0)
{
v___y_1143_ = v_head_1132_;
goto v___jp_1142_;
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1154_ = lean_string_utf8_byte_size(v_head_1132_);
lean_inc(v_head_1132_);
v___x_1155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1155_, 0, v_head_1132_);
lean_ctor_set(v___x_1155_, 1, v___x_1152_);
lean_ctor_set(v___x_1155_, 2, v___x_1154_);
v___x_1156_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v___x_1155_, v___x_1152_);
lean_dec_ref_known(v___x_1155_, 3);
v___x_1157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1157_, 0, v_head_1132_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
lean_ctor_set(v___x_1157_, 2, v___x_1154_);
v___x_1158_ = l_String_Slice_toString(v___x_1157_);
lean_dec_ref_known(v___x_1157_, 3);
v___y_1143_ = v___x_1158_;
goto v___jp_1142_;
}
}
v___jp_1134_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_array_push(v_a_1130_, v___y_1135_);
v_a_1129_ = v_tail_1133_;
v_a_1130_ = v___x_1136_;
goto _start;
}
v___jp_1142_:
{
if (v___x_1141_ == 0)
{
lean_dec(v___x_1140_);
v___y_1135_ = v___y_1143_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = lean_nat_add(v___x_1138_, v___x_1139_);
v___x_1145_ = lean_nat_dec_lt(v___x_1144_, v___x_1140_);
lean_dec(v___x_1140_);
lean_dec(v___x_1144_);
if (v___x_1145_ == 0)
{
v___y_1135_ = v___y_1143_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_string_utf8_byte_size(v___y_1143_);
lean_inc_ref(v___y_1143_);
v___x_1148_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1148_, 0, v___y_1143_);
lean_ctor_set(v___x_1148_, 1, v___x_1146_);
lean_ctor_set(v___x_1148_, 2, v___x_1147_);
v___x_1149_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v___x_1148_, v___x_1147_);
lean_dec_ref_known(v___x_1148_, 3);
v___x_1150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1150_, 0, v___y_1143_);
lean_ctor_set(v___x_1150_, 1, v___x_1146_);
lean_ctor_set(v___x_1150_, 2, v___x_1149_);
v___x_1151_ = l_String_Slice_toString(v___x_1150_);
lean_dec_ref_known(v___x_1150_, 3);
v___y_1135_ = v___x_1151_;
goto v___jp_1134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1___boxed(lean_object* v___y_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___y_1159_, v_a_1160_, v_a_1161_);
lean_dec(v___y_1159_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(lean_object* v___x_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
if (lean_obj_tag(v_a_1164_) == 0)
{
lean_object* v___x_1166_; 
v___x_1166_ = l_List_reverse___redArg(v_a_1165_);
return v___x_1166_;
}
else
{
lean_object* v_head_1167_; lean_object* v_tail_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1183_; 
v_head_1167_ = lean_ctor_get(v_a_1164_, 0);
v_tail_1168_ = lean_ctor_get(v_a_1164_, 1);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_a_1164_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1170_ = v_a_1164_;
v_isShared_1171_ = v_isSharedCheck_1183_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_tail_1168_);
lean_inc(v_head_1167_);
lean_dec(v_a_1164_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1183_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1172_ = lean_string_utf8_byte_size(v_head_1167_);
v___x_1173_ = lean_unsigned_to_nat(0u);
v___x_1174_ = lean_nat_dec_eq(v___x_1172_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = lean_unsigned_to_nat(1u);
v___x_1176_ = lean_nat_dec_lt(v___x_1175_, v___x_1163_);
if (v___x_1176_ == 0)
{
lean_del_object(v___x_1170_);
lean_dec(v_head_1167_);
v_a_1164_ = v_tail_1168_;
goto _start;
}
else
{
lean_object* v___x_1179_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v_a_1165_);
v___x_1179_ = v___x_1170_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_head_1167_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_a_1165_);
v___x_1179_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
v_a_1164_ = v_tail_1168_;
v_a_1165_ = v___x_1179_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_1170_);
lean_dec(v_head_1167_);
v_a_1164_ = v_tail_1168_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2___boxed(lean_object* v___x_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1184_, v_a_1185_, v_a_1186_);
lean_dec(v___x_1184_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(lean_object* v___x_1188_, lean_object* v_joined_1189_, lean_object* v_a_1190_, lean_object* v_b_1191_){
_start:
{
uint8_t v_decide_1192_; 
v_decide_1192_ = lean_nat_dec_eq(v_a_1190_, v___x_1188_);
if (v_decide_1192_ == 0)
{
lean_object* v_fst_1193_; lean_object* v_snd_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1227_; 
v_fst_1193_ = lean_ctor_get(v_b_1191_, 0);
v_snd_1194_ = lean_ctor_get(v_b_1191_, 1);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_b_1191_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1196_ = v_b_1191_;
v_isShared_1197_ = v_isSharedCheck_1227_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_snd_1194_);
lean_inc(v_fst_1193_);
lean_dec(v_b_1191_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1227_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
uint32_t v___x_1198_; lean_object* v___x_1199_; uint32_t v___x_1215_; uint8_t v___x_1216_; 
v___x_1198_ = lean_string_utf8_get_fast(v_joined_1189_, v_a_1190_);
v___x_1199_ = lean_string_utf8_next_fast(v_joined_1189_, v_a_1190_);
lean_dec(v_a_1190_);
v___x_1215_ = 32;
v___x_1216_ = lean_uint32_dec_eq(v___x_1198_, v___x_1215_);
if (v___x_1216_ == 0)
{
uint32_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = 9;
v___x_1218_ = lean_uint32_dec_eq(v___x_1198_, v___x_1217_);
if (v___x_1218_ == 0)
{
uint32_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = 13;
v___x_1220_ = lean_uint32_dec_eq(v___x_1198_, v___x_1219_);
if (v___x_1220_ == 0)
{
uint32_t v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = 10;
v___x_1222_ = lean_uint32_dec_eq(v___x_1198_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
lean_del_object(v___x_1196_);
lean_dec(v_snd_1194_);
v___x_1223_ = lean_string_push(v_fst_1193_, v___x_1198_);
v___x_1224_ = lean_box(v___x_1222_);
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v_a_1190_ = v___x_1199_;
v_b_1191_ = v___x_1225_;
goto _start;
}
else
{
goto v___jp_1200_;
}
}
else
{
goto v___jp_1200_;
}
}
else
{
goto v___jp_1200_;
}
}
else
{
goto v___jp_1200_;
}
v___jp_1200_:
{
uint8_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 1;
v___x_1202_ = lean_unbox(v_snd_1194_);
lean_dec(v_snd_1194_);
if (v___x_1202_ == 0)
{
uint32_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1203_ = 32;
v___x_1204_ = lean_string_push(v_fst_1193_, v___x_1203_);
v___x_1205_ = lean_box(v___x_1201_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 1, v___x_1205_);
lean_ctor_set(v___x_1196_, 0, v___x_1204_);
v___x_1207_ = v___x_1196_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
v_a_1190_ = v___x_1199_;
v_b_1191_ = v___x_1207_;
goto _start;
}
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1210_ = lean_box(v___x_1201_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 1, v___x_1210_);
v___x_1212_ = v___x_1196_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_fst_1193_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
v_a_1190_ = v___x_1199_;
v_b_1191_ = v___x_1212_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_a_1190_);
return v_b_1191_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg___boxed(lean_object* v___x_1228_, lean_object* v_joined_1229_, lean_object* v_a_1230_, lean_object* v_b_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1228_, v_joined_1229_, v_a_1230_, v_b_1231_);
lean_dec_ref(v_joined_1229_);
lean_dec(v___x_1228_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace(lean_object* v_s_1241_){
_start:
{
lean_object* v___y_1243_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v_lines_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1251_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_1252_ = lean_unsigned_to_nat(0u);
v___x_1253_ = lean_box(0);
v___x_1254_ = l_String_splitOnAux(v_s_1241_, v___x_1251_, v___x_1252_, v___x_1252_, v___x_1252_, v___x_1253_);
v___x_1255_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__3));
lean_inc(v___x_1254_);
v_lines_1256_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___x_1254_, v___x_1254_, v___x_1255_);
v___x_1257_ = lean_unsigned_to_nat(1u);
v___x_1258_ = l_List_lengthTR___redArg(v___x_1254_);
lean_dec(v___x_1254_);
v___x_1259_ = lean_nat_dec_lt(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v___x_1258_);
v___y_1243_ = v_lines_1256_;
goto v___jp_1242_;
}
else
{
lean_object* v___x_1260_; 
v___x_1260_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1258_, v_lines_1256_, v___x_1253_);
lean_dec(v___x_1258_);
v___y_1243_ = v___x_1260_;
goto v___jp_1242_;
}
v___jp_1242_:
{
lean_object* v___x_1244_; lean_object* v_joined_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v_fst_1250_; 
v___x_1244_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v_joined_1245_ = l_String_intercalate(v___x_1244_, v___y_1243_);
v___x_1246_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__2));
v___x_1247_ = lean_string_utf8_byte_size(v_joined_1245_);
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1247_, v_joined_1245_, v___x_1248_, v___x_1246_);
lean_dec_ref(v_joined_1245_);
v_fst_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_fst_1250_);
lean_dec_ref(v___x_1249_);
return v_fst_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace___boxed(lean_object* v_s_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lasm_UI_Syntax_jsxWhitespace(v_s_1261_);
lean_dec_ref(v_s_1261_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(lean_object* v___x_1263_, lean_object* v___x_1264_, lean_object* v_joined_1265_, lean_object* v_inst_1266_, lean_object* v_R_1267_, lean_object* v_a_1268_, lean_object* v_b_1269_, lean_object* v_c_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1264_, v_joined_1265_, v_a_1268_, v_b_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___boxed(lean_object* v___x_1272_, lean_object* v___x_1273_, lean_object* v_joined_1274_, lean_object* v_inst_1275_, lean_object* v_R_1276_, lean_object* v_a_1277_, lean_object* v_b_1278_, lean_object* v_c_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(v___x_1272_, v___x_1273_, v_joined_1274_, v_inst_1275_, v_R_1276_, v_a_1277_, v_b_1278_, v_c_1279_);
lean_dec_ref(v_joined_1274_);
lean_dec(v___x_1273_);
lean_dec_ref(v___x_1272_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(lean_object* v___x_1281_, lean_object* v___x_1282_, lean_object* v_a_1283_, lean_object* v_b_1284_){
_start:
{
uint8_t v_decide_1285_; 
v_decide_1285_ = lean_nat_dec_eq(v_a_1283_, v___x_1281_);
if (v_decide_1285_ == 0)
{
lean_object* v___x_1286_; 
v___x_1286_ = lean_string_utf8_next_fast(v___x_1282_, v_a_1283_);
if (lean_obj_tag(v_b_1284_) == 0)
{
lean_dec(v_a_1283_);
v_a_1283_ = v___x_1286_;
goto _start;
}
else
{
lean_object* v_val_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1343_; 
v_val_1291_ = lean_ctor_get(v_b_1284_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_b_1284_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1293_ = v_b_1284_;
v_isShared_1294_ = v_isSharedCheck_1343_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_val_1291_);
lean_dec(v_b_1284_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1343_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
uint32_t v___y_1296_; uint32_t v___y_1297_; uint32_t v___x_1312_; uint32_t v___y_1314_; uint32_t v___y_1315_; uint32_t v___x_1331_; uint8_t v___x_1332_; 
v___x_1312_ = lean_string_utf8_get_fast(v___x_1282_, v_a_1283_);
lean_dec(v_a_1283_);
v___x_1331_ = 48;
v___x_1332_ = lean_uint32_dec_le(v___x_1331_, v___x_1312_);
if (v___x_1332_ == 0)
{
goto v___jp_1323_;
}
else
{
uint32_t v___x_1333_; uint8_t v___x_1334_; 
v___x_1333_ = 57;
v___x_1334_ = lean_uint32_dec_le(v___x_1312_, v___x_1333_);
if (v___x_1334_ == 0)
{
goto v___jp_1323_;
}
else
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_del_object(v___x_1293_);
v___x_1335_ = lean_unsigned_to_nat(16u);
v___x_1336_ = lean_nat_mul(v_val_1291_, v___x_1335_);
lean_dec(v_val_1291_);
v___x_1337_ = lean_uint32_to_nat(v___x_1312_);
v___x_1338_ = lean_unsigned_to_nat(48u);
v___x_1339_ = lean_nat_sub(v___x_1337_, v___x_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_nat_add(v___x_1336_, v___x_1339_);
lean_dec(v___x_1339_);
lean_dec(v___x_1336_);
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
v_a_1283_ = v___x_1286_;
v_b_1284_ = v___x_1341_;
goto _start;
}
}
v___jp_1295_:
{
uint32_t v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = 102;
v___x_1299_ = lean_uint32_dec_le(v___y_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_del_object(v___x_1293_);
lean_dec(v_val_1291_);
goto v___jp_1287_;
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1300_ = lean_unsigned_to_nat(16u);
v___x_1301_ = lean_nat_mul(v_val_1291_, v___x_1300_);
lean_dec(v_val_1291_);
v___x_1302_ = lean_uint32_to_nat(v___y_1296_);
v___x_1303_ = lean_unsigned_to_nat(97u);
v___x_1304_ = lean_nat_sub(v___x_1302_, v___x_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_unsigned_to_nat(10u);
v___x_1306_ = lean_nat_add(v___x_1304_, v___x_1305_);
lean_dec(v___x_1304_);
v___x_1307_ = lean_nat_add(v___x_1301_, v___x_1306_);
lean_dec(v___x_1306_);
lean_dec(v___x_1301_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1307_);
v___x_1309_ = v___x_1293_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
v_a_1283_ = v___x_1286_;
v_b_1284_ = v___x_1309_;
goto _start;
}
}
}
v___jp_1313_:
{
uint8_t v___x_1316_; 
v___x_1316_ = lean_uint32_dec_le(v___y_1314_, v___y_1315_);
if (v___x_1316_ == 0)
{
lean_del_object(v___x_1293_);
lean_dec(v_val_1291_);
goto v___jp_1287_;
}
else
{
uint32_t v___x_1317_; uint8_t v___x_1318_; 
v___x_1317_ = 65;
v___x_1318_ = lean_uint32_dec_le(v___x_1317_, v___x_1312_);
if (v___x_1318_ == 0)
{
v___y_1296_ = v___y_1315_;
v___y_1297_ = v___x_1312_;
goto v___jp_1295_;
}
else
{
uint32_t v___x_1319_; uint8_t v___x_1320_; 
v___x_1319_ = 90;
v___x_1320_ = lean_uint32_dec_le(v___x_1312_, v___x_1319_);
if (v___x_1320_ == 0)
{
v___y_1296_ = v___y_1315_;
v___y_1297_ = v___x_1312_;
goto v___jp_1295_;
}
else
{
uint32_t v___x_1321_; uint32_t v___x_1322_; 
v___x_1321_ = 32;
v___x_1322_ = lean_uint32_add(v___x_1312_, v___x_1321_);
v___y_1296_ = v___y_1315_;
v___y_1297_ = v___x_1322_;
goto v___jp_1295_;
}
}
}
}
v___jp_1323_:
{
uint32_t v___x_1324_; uint32_t v___x_1325_; uint8_t v___x_1326_; 
v___x_1324_ = 97;
v___x_1325_ = 65;
v___x_1326_ = lean_uint32_dec_le(v___x_1325_, v___x_1312_);
if (v___x_1326_ == 0)
{
v___y_1314_ = v___x_1324_;
v___y_1315_ = v___x_1312_;
goto v___jp_1313_;
}
else
{
uint32_t v___x_1327_; uint8_t v___x_1328_; 
v___x_1327_ = 90;
v___x_1328_ = lean_uint32_dec_le(v___x_1312_, v___x_1327_);
if (v___x_1328_ == 0)
{
v___y_1314_ = v___x_1324_;
v___y_1315_ = v___x_1312_;
goto v___jp_1313_;
}
else
{
uint32_t v___x_1329_; uint32_t v___x_1330_; 
v___x_1329_ = 32;
v___x_1330_ = lean_uint32_add(v___x_1312_, v___x_1329_);
v___y_1314_ = v___x_1324_;
v___y_1315_ = v___x_1330_;
goto v___jp_1313_;
}
}
}
}
}
v___jp_1287_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_box(0);
v_a_1283_ = v___x_1286_;
v_b_1284_ = v___x_1288_;
goto _start;
}
}
else
{
lean_dec(v_a_1283_);
return v_b_1284_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg___boxed(lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v_a_1346_, lean_object* v_b_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1344_, v___x_1345_, v_a_1346_, v_b_1347_);
lean_dec_ref(v___x_1345_);
lean_dec(v___x_1344_);
return v_res_1348_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14));
v___x_1365_ = lean_string_utf8_byte_size(v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17));
v___x_1370_ = lean_string_utf8_byte_size(v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19));
v___x_1373_ = lean_string_utf8_byte_size(v___x_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(lean_object* v_as_x27_1384_, lean_object* v_b_1385_){
_start:
{
if (lean_obj_tag(v_as_x27_1384_) == 0)
{
return v_b_1385_;
}
else
{
lean_object* v_head_1386_; lean_object* v_tail_1387_; lean_object* v___x_1388_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_head_1386_ = lean_ctor_get(v_as_x27_1384_, 0);
v_tail_1387_ = lean_ctor_get(v_as_x27_1384_, 1);
v___x_1388_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1397_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1));
v___x_1398_ = lean_unsigned_to_nat(0u);
v___x_1399_ = lean_box(0);
v___x_1400_ = l_String_splitOnAux(v_head_1386_, v___x_1397_, v___x_1398_, v___x_1398_, v___x_1398_, v___x_1399_);
if (lean_obj_tag(v___x_1400_) == 1)
{
lean_object* v_tail_1401_; 
v_tail_1401_ = lean_ctor_get(v___x_1400_, 1);
lean_inc(v_tail_1401_);
if (lean_obj_tag(v_tail_1401_) == 1)
{
lean_object* v_head_1402_; lean_object* v___x_1403_; lean_object* v_val_1405_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_head_1402_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_head_1402_);
lean_dec_ref_known(v___x_1400_, 2);
v___x_1403_ = l_String_intercalate(v___x_1397_, v_tail_1401_);
v___x_1409_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2));
v___x_1410_ = lean_string_dec_eq(v_head_1402_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3));
v___x_1412_ = lean_string_dec_eq(v_head_1402_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4));
v___x_1414_ = lean_string_dec_eq(v_head_1402_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; uint8_t v___x_1416_; 
v___x_1415_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__3));
v___x_1416_ = lean_string_dec_eq(v_head_1402_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5));
v___x_1418_ = lean_string_dec_eq(v_head_1402_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6));
v___x_1420_ = lean_string_dec_eq(v_head_1402_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7));
v___x_1422_ = lean_string_dec_eq(v_head_1402_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8));
v___x_1424_ = lean_string_dec_eq(v_head_1402_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9));
v___x_1426_ = lean_string_dec_eq(v_head_1402_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1427_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10));
v___x_1428_ = lean_string_dec_eq(v_head_1402_, v___x_1427_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11));
v___x_1430_ = lean_string_dec_eq(v_head_1402_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1431_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12));
v___x_1432_ = lean_string_dec_eq(v_head_1402_, v___x_1431_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; uint8_t v___x_1434_; 
v___x_1433_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13));
v___x_1434_ = lean_string_dec_eq(v_head_1402_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1435_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1472_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19));
v___x_1473_ = lean_string_utf8_byte_size(v_head_1402_);
v___x_1474_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20);
v___x_1475_ = lean_nat_dec_le(v___x_1474_, v___x_1473_);
if (v___x_1475_ == 0)
{
goto v___jp_1466_;
}
else
{
uint8_t v___x_1476_; 
v___x_1476_ = lean_string_memcmp(v_head_1402_, v___x_1472_, v___x_1398_, v___x_1398_, v___x_1474_);
if (v___x_1476_ == 0)
{
goto v___jp_1466_;
}
else
{
goto v___jp_1453_;
}
}
v___jp_1436_:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v___x_1437_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14));
v___x_1438_ = lean_string_utf8_byte_size(v_head_1402_);
v___x_1439_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15);
v___x_1440_ = lean_nat_dec_le(v___x_1439_, v___x_1438_);
if (v___x_1440_ == 0)
{
lean_dec_ref(v___x_1403_);
lean_dec(v_head_1402_);
goto v___jp_1393_;
}
else
{
uint8_t v___x_1441_; 
v___x_1441_ = lean_string_memcmp(v_head_1402_, v___x_1437_, v___x_1398_, v___x_1398_, v___x_1439_);
if (v___x_1441_ == 0)
{
lean_dec_ref(v___x_1403_);
lean_dec(v_head_1402_);
goto v___jp_1393_;
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1442_ = lean_unsigned_to_nat(1u);
lean_inc(v_head_1402_);
v___x_1443_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1443_, 0, v_head_1402_);
lean_ctor_set(v___x_1443_, 1, v___x_1398_);
lean_ctor_set(v___x_1443_, 2, v___x_1438_);
v___x_1444_ = l_String_Slice_Pos_nextn(v___x_1443_, v___x_1398_, v___x_1442_);
lean_dec_ref_known(v___x_1443_, 3);
v___x_1445_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1445_, 0, v_head_1402_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
lean_ctor_set(v___x_1445_, 2, v___x_1438_);
v___x_1446_ = l_String_Slice_toString(v___x_1445_);
lean_dec_ref_known(v___x_1445_, 3);
v___x_1447_ = lean_string_utf8_byte_size(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1446_);
lean_ctor_set(v___x_1448_, 1, v___x_1398_);
lean_ctor_set(v___x_1448_, 2, v___x_1447_);
v___x_1449_ = l_String_Slice_toNat_x3f(v___x_1448_);
lean_dec_ref_known(v___x_1448_, 3);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_dec_ref(v___x_1403_);
goto v___jp_1393_;
}
else
{
lean_object* v_val_1450_; uint32_t v___x_1451_; lean_object* v___x_1452_; 
v_val_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_val_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = l_Char_ofNat(v_val_1450_);
lean_dec(v_val_1450_);
v___x_1452_ = lean_string_push(v___x_1435_, v___x_1451_);
v_val_1405_ = v___x_1452_;
goto v___jp_1404_;
}
}
}
}
v___jp_1453_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1454_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16));
v___x_1455_ = lean_unsigned_to_nat(2u);
v___x_1456_ = lean_string_utf8_byte_size(v_head_1402_);
lean_inc(v_head_1402_);
v___x_1457_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1457_, 0, v_head_1402_);
lean_ctor_set(v___x_1457_, 1, v___x_1398_);
lean_ctor_set(v___x_1457_, 2, v___x_1456_);
v___x_1458_ = l_String_Slice_Pos_nextn(v___x_1457_, v___x_1398_, v___x_1455_);
lean_dec_ref_known(v___x_1457_, 3);
v___x_1459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1459_, 0, v_head_1402_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
lean_ctor_set(v___x_1459_, 2, v___x_1456_);
v___x_1460_ = l_String_Slice_toString(v___x_1459_);
lean_dec_ref_known(v___x_1459_, 3);
v___x_1461_ = lean_string_utf8_byte_size(v___x_1460_);
v___x_1462_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1461_, v___x_1460_, v___x_1398_, v___x_1454_);
lean_dec_ref(v___x_1460_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_dec_ref(v___x_1403_);
goto v___jp_1393_;
}
else
{
lean_object* v_val_1463_; uint32_t v___x_1464_; lean_object* v___x_1465_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = l_Char_ofNat(v_val_1463_);
lean_dec(v_val_1463_);
v___x_1465_ = lean_string_push(v___x_1435_, v___x_1464_);
v_val_1405_ = v___x_1465_;
goto v___jp_1404_;
}
}
v___jp_1466_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v___x_1467_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17));
v___x_1468_ = lean_string_utf8_byte_size(v_head_1402_);
v___x_1469_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18);
v___x_1470_ = lean_nat_dec_le(v___x_1469_, v___x_1468_);
if (v___x_1470_ == 0)
{
goto v___jp_1436_;
}
else
{
uint8_t v___x_1471_; 
v___x_1471_ = lean_string_memcmp(v_head_1402_, v___x_1467_, v___x_1398_, v___x_1398_, v___x_1469_);
if (v___x_1471_ == 0)
{
goto v___jp_1436_;
}
else
{
goto v___jp_1453_;
}
}
}
}
else
{
lean_object* v___x_1477_; 
lean_dec(v_head_1402_);
v___x_1477_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21));
v_val_1405_ = v___x_1477_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1478_; 
lean_dec(v_head_1402_);
v___x_1478_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22));
v_val_1405_ = v___x_1478_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1479_; 
lean_dec(v_head_1402_);
v___x_1479_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23));
v_val_1405_ = v___x_1479_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1480_; 
lean_dec(v_head_1402_);
v___x_1480_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24));
v_val_1405_ = v___x_1480_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1481_; 
lean_dec(v_head_1402_);
v___x_1481_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25));
v_val_1405_ = v___x_1481_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1482_; 
lean_dec(v_head_1402_);
v___x_1482_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26));
v_val_1405_ = v___x_1482_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1483_; 
lean_dec(v_head_1402_);
v___x_1483_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27));
v_val_1405_ = v___x_1483_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1484_; 
lean_dec(v_head_1402_);
v___x_1484_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__28));
v_val_1405_ = v___x_1484_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1485_; 
lean_dec(v_head_1402_);
v___x_1485_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__29));
v_val_1405_ = v___x_1485_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1486_; 
lean_dec(v_head_1402_);
v___x_1486_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__30));
v_val_1405_ = v___x_1486_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1487_; 
lean_dec(v_head_1402_);
v___x_1487_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v_val_1405_ = v___x_1487_;
goto v___jp_1404_;
}
}
else
{
lean_object* v___x_1488_; 
lean_dec(v_head_1402_);
v___x_1488_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v_val_1405_ = v___x_1488_;
goto v___jp_1404_;
}
}
else
{
lean_dec(v_head_1402_);
v_val_1405_ = v___x_1388_;
goto v___jp_1404_;
}
v___jp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = lean_string_append(v_b_1385_, v_val_1405_);
lean_dec_ref(v_val_1405_);
v___x_1407_ = lean_string_append(v___x_1406_, v___x_1403_);
lean_dec_ref(v___x_1403_);
v_as_x27_1384_ = v_tail_1387_;
v_b_1385_ = v___x_1407_;
goto _start;
}
}
else
{
lean_dec(v_tail_1401_);
lean_dec_ref_known(v___x_1400_, 2);
goto v___jp_1389_;
}
}
else
{
lean_dec(v___x_1400_);
goto v___jp_1389_;
}
v___jp_1389_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_string_append(v_b_1385_, v___x_1388_);
v___x_1391_ = lean_string_append(v___x_1390_, v_head_1386_);
v_as_x27_1384_ = v_tail_1387_;
v_b_1385_ = v___x_1391_;
goto _start;
}
v___jp_1393_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_string_append(v_b_1385_, v___x_1388_);
v___x_1395_ = lean_string_append(v___x_1394_, v_head_1386_);
v_as_x27_1384_ = v_tail_1387_;
v_b_1385_ = v___x_1395_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___boxed(lean_object* v_as_x27_1489_, lean_object* v_b_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1489_, v_b_1490_);
lean_dec(v_as_x27_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(lean_object* v_s_1492_, lean_object* v_a_1493_, uint8_t v_b_1494_){
_start:
{
lean_object* v_str_1495_; lean_object* v_startInclusive_1496_; lean_object* v_endExclusive_1497_; lean_object* v___x_1498_; uint8_t v_decide_1499_; 
v_str_1495_ = lean_ctor_get(v_s_1492_, 0);
v_startInclusive_1496_ = lean_ctor_get(v_s_1492_, 1);
v_endExclusive_1497_ = lean_ctor_get(v_s_1492_, 2);
v___x_1498_ = lean_nat_sub(v_endExclusive_1497_, v_startInclusive_1496_);
v_decide_1499_ = lean_nat_dec_eq(v_a_1493_, v___x_1498_);
lean_dec(v___x_1498_);
if (v_decide_1499_ == 0)
{
lean_object* v___x_1500_; uint32_t v___x_1501_; uint32_t v___x_1502_; uint8_t v___x_1503_; 
v___x_1500_ = lean_nat_add(v_startInclusive_1496_, v_a_1493_);
lean_dec(v_a_1493_);
v___x_1501_ = lean_string_utf8_get_fast(v_str_1495_, v___x_1500_);
v___x_1502_ = 38;
v___x_1503_ = lean_uint32_dec_eq(v___x_1501_, v___x_1502_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1504_ = lean_string_utf8_next_fast(v_str_1495_, v___x_1500_);
lean_dec(v___x_1500_);
v___x_1505_ = lean_nat_sub(v___x_1504_, v_startInclusive_1496_);
v_a_1493_ = v___x_1505_;
v_b_1494_ = v___x_1503_;
goto _start;
}
else
{
lean_dec(v___x_1500_);
return v___x_1503_;
}
}
else
{
lean_dec(v_a_1493_);
return v_b_1494_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg___boxed(lean_object* v_s_1507_, lean_object* v_a_1508_, lean_object* v_b_1509_){
_start:
{
uint8_t v_b_boxed_1510_; uint8_t v_res_1511_; lean_object* v_r_1512_; 
v_b_boxed_1510_ = lean_unbox(v_b_1509_);
v_res_1511_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1507_, v_a_1508_, v_b_boxed_1510_);
lean_dec_ref(v_s_1507_);
v_r_1512_ = lean_box(v_res_1511_);
return v_r_1512_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(lean_object* v_s_1513_){
_start:
{
lean_object* v_searcher_1514_; uint8_t v___x_1515_; uint8_t v___x_1516_; 
v_searcher_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = 0;
v___x_1516_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1513_, v_searcher_1514_, v___x_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0___boxed(lean_object* v_s_1517_){
_start:
{
uint8_t v_res_1518_; lean_object* v_r_1519_; 
v_res_1518_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v_s_1517_);
lean_dec_ref(v_s_1517_);
v_r_1519_ = lean_box(v_res_1518_);
return v_r_1519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_decodeEntities(lean_object* v_s_1520_){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1521_ = lean_unsigned_to_nat(0u);
v___x_1522_ = lean_string_utf8_byte_size(v_s_1520_);
lean_inc_ref(v_s_1520_);
v___x_1523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1523_, 0, v_s_1520_);
lean_ctor_set(v___x_1523_, 1, v___x_1521_);
lean_ctor_set(v___x_1523_, 2, v___x_1522_);
v___x_1524_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v___x_1523_);
lean_dec_ref_known(v___x_1523_, 3);
if (v___x_1524_ == 0)
{
return v_s_1520_;
}
else
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v_out_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1525_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1526_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1527_ = lean_box(0);
v___x_1528_ = l_String_splitOnAux(v_s_1520_, v___x_1526_, v___x_1521_, v___x_1521_, v___x_1521_, v___x_1527_);
lean_dec_ref(v_s_1520_);
v_out_1529_ = l_List_head_x21___redArg(v___x_1525_, v___x_1528_);
v___x_1530_ = l_List_tail_x21___redArg(v___x_1528_);
lean_dec(v___x_1528_);
v___x_1531_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v___x_1530_, v_out_1529_);
lean_dec(v___x_1530_);
return v___x_1531_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v___x_1534_, lean_object* v_inst_1535_, lean_object* v_R_1536_, lean_object* v_a_1537_, lean_object* v_b_1538_, lean_object* v_c_1539_){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1533_, v___x_1534_, v_a_1537_, v_b_1538_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___boxed(lean_object* v___x_1541_, lean_object* v___x_1542_, lean_object* v___x_1543_, lean_object* v_inst_1544_, lean_object* v_R_1545_, lean_object* v_a_1546_, lean_object* v_b_1547_, lean_object* v_c_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(v___x_1541_, v___x_1542_, v___x_1543_, v_inst_1544_, v_R_1545_, v_a_1546_, v_b_1547_, v_c_1548_);
lean_dec_ref(v___x_1543_);
lean_dec(v___x_1542_);
lean_dec_ref(v___x_1541_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(lean_object* v_as_1550_, lean_object* v_as_x27_1551_, lean_object* v_b_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1551_, v_b_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___boxed(lean_object* v_as_1555_, lean_object* v_as_x27_1556_, lean_object* v_b_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(v_as_1555_, v_as_x27_1556_, v_b_1557_, v_a_1558_);
lean_dec(v_as_x27_1556_);
lean_dec(v_as_1555_);
return v_res_1559_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(lean_object* v_s_1560_, lean_object* v_inst_1561_, lean_object* v_R_1562_, lean_object* v_a_1563_, uint8_t v_b_1564_, lean_object* v_c_1565_){
_start:
{
uint8_t v___x_1566_; 
v___x_1566_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1560_, v_a_1563_, v_b_1564_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___boxed(lean_object* v_s_1567_, lean_object* v_inst_1568_, lean_object* v_R_1569_, lean_object* v_a_1570_, lean_object* v_b_1571_, lean_object* v_c_1572_){
_start:
{
uint8_t v_b_boxed_1573_; uint8_t v_res_1574_; lean_object* v_r_1575_; 
v_b_boxed_1573_ = lean_unbox(v_b_1571_);
v_res_1574_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(v_s_1567_, v_inst_1568_, v_R_1569_, v_a_1570_, v_b_boxed_1573_, v_c_1572_);
lean_dec_ref(v_s_1567_);
v_r_1575_ = lean_box(v_res_1574_);
return v_r_1575_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_isEventName___closed__1(void){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1763_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_1764_ = lean_string_utf8_byte_size(v___x_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_isEventName(lean_object* v_n_1765_){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1766_ = lean_unsigned_to_nat(2u);
v___x_1767_ = lean_string_length(v_n_1765_);
v___x_1768_ = lean_nat_dec_lt(v___x_1766_, v___x_1767_);
if (v___x_1768_ == 0)
{
lean_dec_ref(v_n_1765_);
return v___x_1768_;
}
else
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1769_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_1770_ = lean_string_utf8_byte_size(v_n_1765_);
v___x_1771_ = lean_obj_once(&l_Lasm_UI_Syntax_isEventName___closed__1, &l_Lasm_UI_Syntax_isEventName___closed__1_once, _init_l_Lasm_UI_Syntax_isEventName___closed__1);
v___x_1772_ = lean_nat_dec_le(v___x_1771_, v___x_1770_);
if (v___x_1772_ == 0)
{
lean_dec_ref(v_n_1765_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_string_memcmp(v_n_1765_, v___x_1769_, v___x_1773_, v___x_1773_, v___x_1771_);
if (v___x_1774_ == 0)
{
lean_dec_ref(v_n_1765_);
return v___x_1774_;
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = lean_string_data(v_n_1765_);
v___x_1776_ = l_List_get_x3fInternal___redArg(v___x_1775_, v___x_1766_);
lean_dec(v___x_1775_);
if (lean_obj_tag(v___x_1776_) == 0)
{
uint8_t v___x_1777_; 
v___x_1777_ = 0;
return v___x_1777_;
}
else
{
lean_object* v_val_1778_; uint32_t v___x_1779_; uint32_t v___x_1780_; uint8_t v___x_1781_; 
v_val_1778_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_val_1778_);
lean_dec_ref_known(v___x_1776_, 1);
v___x_1779_ = 65;
v___x_1780_ = lean_unbox_uint32(v_val_1778_);
v___x_1781_ = lean_uint32_dec_le(v___x_1779_, v___x_1780_);
if (v___x_1781_ == 0)
{
lean_dec(v_val_1778_);
return v___x_1781_;
}
else
{
uint32_t v___x_1782_; uint32_t v___x_1783_; uint8_t v___x_1784_; 
v___x_1782_ = 90;
v___x_1783_ = lean_unbox_uint32(v_val_1778_);
lean_dec(v_val_1778_);
v___x_1784_ = lean_uint32_dec_le(v___x_1783_, v___x_1782_);
return v___x_1784_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_isEventName___boxed(lean_object* v_n_1785_){
_start:
{
uint8_t v_res_1786_; lean_object* v_r_1787_; 
v_res_1786_ = l_Lasm_UI_Syntax_isEventName(v_n_1785_);
v_r_1787_ = lean_box(v_res_1786_);
return v_r_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_lowerFirst(lean_object* v_s_1788_){
_start:
{
lean_object* v___x_1789_; 
lean_inc_ref(v_s_1788_);
v___x_1789_ = lean_string_data(v_s_1788_);
if (lean_obj_tag(v___x_1789_) == 0)
{
return v_s_1788_;
}
else
{
lean_object* v_head_1790_; lean_object* v_tail_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1813_; 
lean_dec_ref(v_s_1788_);
v_head_1790_ = lean_ctor_get(v___x_1789_, 0);
v_tail_1791_ = lean_ctor_get(v___x_1789_, 1);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1793_ = v___x_1789_;
v_isShared_1794_ = v_isSharedCheck_1813_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_tail_1791_);
lean_inc(v_head_1790_);
lean_dec(v___x_1789_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1813_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
uint32_t v___y_1796_; uint32_t v___x_1802_; uint32_t v___x_1803_; uint8_t v___x_1804_; 
v___x_1802_ = 65;
v___x_1803_ = lean_unbox_uint32(v_head_1790_);
v___x_1804_ = lean_uint32_dec_le(v___x_1802_, v___x_1803_);
if (v___x_1804_ == 0)
{
uint32_t v___x_1805_; 
v___x_1805_ = lean_unbox_uint32(v_head_1790_);
lean_dec(v_head_1790_);
v___y_1796_ = v___x_1805_;
goto v___jp_1795_;
}
else
{
uint32_t v___x_1806_; uint32_t v___x_1807_; uint8_t v___x_1808_; 
v___x_1806_ = 90;
v___x_1807_ = lean_unbox_uint32(v_head_1790_);
v___x_1808_ = lean_uint32_dec_le(v___x_1807_, v___x_1806_);
if (v___x_1808_ == 0)
{
uint32_t v___x_1809_; 
v___x_1809_ = lean_unbox_uint32(v_head_1790_);
lean_dec(v_head_1790_);
v___y_1796_ = v___x_1809_;
goto v___jp_1795_;
}
else
{
uint32_t v___x_1810_; uint32_t v___x_1811_; uint32_t v___x_1812_; 
v___x_1810_ = 32;
v___x_1811_ = lean_unbox_uint32(v_head_1790_);
lean_dec(v_head_1790_);
v___x_1812_ = lean_uint32_add(v___x_1811_, v___x_1810_);
v___y_1796_ = v___x_1812_;
goto v___jp_1795_;
}
}
v___jp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1797_ = lean_box_uint32(v___y_1796_);
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v___x_1797_);
v___x_1799_ = v___x_1793_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1797_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_tail_1791_);
v___x_1799_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_string_mk(v___x_1799_);
return v___x_1800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(lean_object* v_s_1814_, lean_object* v_p_1815_){
_start:
{
uint32_t v___y_1817_; lean_object* v___x_1822_; uint8_t v_decide_1823_; 
v___x_1822_ = lean_string_utf8_byte_size(v_s_1814_);
v_decide_1823_ = lean_nat_dec_eq(v_p_1815_, v___x_1822_);
if (v_decide_1823_ == 0)
{
uint32_t v___x_1824_; uint32_t v___x_1825_; uint8_t v___x_1826_; 
v___x_1824_ = lean_string_utf8_get_fast(v_s_1814_, v_p_1815_);
v___x_1825_ = 65;
v___x_1826_ = lean_uint32_dec_le(v___x_1825_, v___x_1824_);
if (v___x_1826_ == 0)
{
v___y_1817_ = v___x_1824_;
goto v___jp_1816_;
}
else
{
uint32_t v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = 90;
v___x_1828_ = lean_uint32_dec_le(v___x_1824_, v___x_1827_);
if (v___x_1828_ == 0)
{
v___y_1817_ = v___x_1824_;
goto v___jp_1816_;
}
else
{
uint32_t v___x_1829_; uint32_t v___x_1830_; 
v___x_1829_ = 32;
v___x_1830_ = lean_uint32_add(v___x_1824_, v___x_1829_);
v___y_1817_ = v___x_1830_;
goto v___jp_1816_;
}
}
}
else
{
lean_dec(v_p_1815_);
return v_s_1814_;
}
v___jp_1816_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
lean_inc(v_p_1815_);
v___x_1818_ = lean_string_utf8_set(v_s_1814_, v_p_1815_, v___y_1817_);
v___x_1819_ = l_Char_utf8Size(v___y_1817_);
v___x_1820_ = lean_nat_add(v_p_1815_, v___x_1819_);
lean_dec(v___x_1819_);
lean_dec(v_p_1815_);
v_s_1814_ = v___x_1818_;
v_p_1815_ = v___x_1820_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(lean_object* v_x_1831_, lean_object* v_x_1832_){
_start:
{
if (lean_obj_tag(v_x_1832_) == 0)
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_box(0);
return v___x_1833_;
}
else
{
lean_object* v_head_1834_; lean_object* v_tail_1835_; lean_object* v_fst_1836_; lean_object* v_snd_1837_; uint8_t v___x_1838_; 
v_head_1834_ = lean_ctor_get(v_x_1832_, 0);
v_tail_1835_ = lean_ctor_get(v_x_1832_, 1);
v_fst_1836_ = lean_ctor_get(v_head_1834_, 0);
v_snd_1837_ = lean_ctor_get(v_head_1834_, 1);
v___x_1838_ = lean_string_dec_eq(v_x_1831_, v_fst_1836_);
if (v___x_1838_ == 0)
{
v_x_1832_ = v_tail_1835_;
goto _start;
}
else
{
lean_object* v___x_1840_; 
lean_inc(v_snd_1837_);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v_snd_1837_);
return v___x_1840_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg___boxed(lean_object* v_x_1841_, lean_object* v_x_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_1841_, v_x_1842_);
lean_dec(v_x_1842_);
lean_dec_ref(v_x_1841_);
return v_res_1843_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__8(void){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_1859_ = l_String_toRawSubstring_x27(v___x_1858_);
return v___x_1859_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__26(void){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1898_ = l_String_toRawSubstring_x27(v___x_1897_);
return v___x_1898_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__37(void){
_start:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1924_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__36));
v___x_1925_ = l_String_toRawSubstring_x27(v___x_1924_);
return v___x_1925_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__46(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__45));
v___x_1943_ = l_String_toRawSubstring_x27(v___x_1942_);
return v___x_1943_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__58(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__57));
v___x_1966_ = l_String_toRawSubstring_x27(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__68(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_1992_ = l_String_toRawSubstring_x27(v___x_1991_);
return v___x_1992_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__74(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__73));
v___x_1999_ = l_String_toRawSubstring_x27(v___x_1998_);
return v___x_1999_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__82(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__81));
v___x_2016_ = l_String_toRawSubstring_x27(v___x_2015_);
return v___x_2016_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__93(void){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__92));
v___x_2039_ = l_String_toRawSubstring_x27(v___x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr(lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_){
_start:
{
lean_object* v___x_2056_; uint8_t v___x_2057_; lean_object* v___y_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2093_; 
v___x_2056_ = ((lean_object*)(l_Lasm_UI_Syntax_attrSplice___closed__1));
lean_inc(v_a_2053_);
v___x_2057_ = l_Lean_Syntax_isOfKind(v_a_2053_, v___x_2056_);
if (v___x_2057_ == 0)
{
lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2209_; lean_object* v___y_2210_; lean_object* v___y_2211_; lean_object* v___y_2212_; lean_object* v___y_2213_; lean_object* v___y_2214_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; 
v___x_2109_ = ((lean_object*)(l_Lasm_UI_Syntax_attrFlag___closed__1));
lean_inc(v_a_2053_);
v___x_2110_ = l_Lean_Syntax_isOfKind(v_a_2053_, v___x_2109_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2482_ = ((lean_object*)(l_Lasm_UI_Syntax_attrValue___closed__1));
lean_inc(v_a_2053_);
v___x_2483_ = l_Lean_Syntax_isOfKind(v_a_2053_, v___x_2482_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2485_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2053_, v___x_2484_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2053_);
return v___x_2485_;
}
else
{
lean_object* v___x_2486_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___x_2575_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; uint8_t v___y_2607_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; uint8_t v___y_2632_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; uint8_t v___y_2709_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; 
v___x_2486_ = lean_unsigned_to_nat(0u);
v___x_2575_ = l_Lean_Syntax_getArg(v_a_2053_, v___x_2486_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2763_; uint8_t v___x_2764_; 
v___x_2763_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2575_);
v___x_2764_ = l_Lean_Syntax_isOfKind(v___x_2575_, v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
lean_dec(v___x_2575_);
v___x_2765_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2766_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2053_, v___x_2765_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2053_);
return v___x_2766_;
}
else
{
goto v___jp_2755_;
}
}
else
{
goto v___jp_2755_;
}
v___jp_2487_:
{
uint8_t v___x_2495_; 
lean_inc_ref(v___y_2491_);
v___x_2495_ = l_Lasm_UI_Syntax_isEventName(v___y_2491_);
if (v___x_2495_ == 0)
{
lean_dec(v___y_2489_);
v___y_2395_ = v___y_2488_;
v___y_2396_ = v___y_2490_;
v___y_2397_ = v___y_2491_;
v___y_2398_ = v___y_2492_;
v___y_2399_ = v___y_2493_;
v___y_2400_ = v___y_2494_;
goto v___jp_2394_;
}
else
{
lean_dec(v___y_2488_);
if (lean_obj_tag(v___y_2490_) == 1)
{
lean_object* v_val_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2559_; 
lean_dec(v___y_2492_);
v_val_2496_ = lean_ctor_get(v___y_2490_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___y_2490_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2498_ = v___y_2490_;
v_isShared_2499_ = v_isSharedCheck_2559_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_val_2496_);
lean_dec(v___y_2490_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2559_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; uint8_t v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_Lasm_UI_Syntax_eventHelpers));
v___x_2501_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_2491_, v___x_2500_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v_quotContext_2504_; lean_object* v_currMacroScope_2505_; lean_object* v_ref_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v_event_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; 
v___x_2502_ = lean_string_utf8_byte_size(v___y_2491_);
lean_inc_ref(v___y_2491_);
v___x_2503_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2503_, 0, v___y_2491_);
lean_ctor_set(v___x_2503_, 1, v___x_2486_);
lean_ctor_set(v___x_2503_, 2, v___x_2502_);
v_quotContext_2504_ = lean_ctor_get(v___y_2493_, 1);
v_currMacroScope_2505_ = lean_ctor_get(v___y_2493_, 2);
v_ref_2506_ = lean_ctor_get(v___y_2493_, 5);
v___x_2507_ = l_String_Slice_Pos_nextn(v___x_2503_, v___x_2486_, v___y_2489_);
lean_dec_ref_known(v___x_2503_, 3);
v___x_2508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2508_, 0, v___y_2491_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
lean_ctor_set(v___x_2508_, 2, v___x_2502_);
v___x_2509_ = l_String_Slice_toString(v___x_2508_);
lean_dec_ref_known(v___x_2508_, 3);
v___x_2510_ = l_Lasm_UI_Syntax_lowerFirst(v___x_2509_);
v_event_2511_ = l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(v___x_2510_, v___x_2486_);
v___x_2512_ = l_Lean_SourceInfo_fromRef(v_ref_2506_, v___x_2501_);
v___x_2513_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2514_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2512_, 6);
v___x_2515_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2512_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2517_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2518_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__82, &l_Lasm_UI_Syntax_expandAttr___closed__82_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__82);
v___x_2519_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__83));
lean_inc(v_currMacroScope_2505_);
lean_inc(v_quotContext_2504_);
v___x_2520_ = l_Lean_addMacroScope(v_quotContext_2504_, v___x_2519_, v_currMacroScope_2505_);
v___x_2521_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__85));
v___x_2522_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2512_);
lean_ctor_set(v___x_2522_, 1, v___x_2518_);
lean_ctor_set(v___x_2522_, 2, v___x_2520_);
lean_ctor_set(v___x_2522_, 3, v___x_2521_);
v___x_2523_ = lean_box(2);
v___x_2524_ = l_Lean_Syntax_mkStrLit(v_event_2511_, v___x_2523_);
v___x_2525_ = l_Lean_Syntax_node2(v___x_2512_, v___x_2516_, v___x_2524_, v_val_2496_);
v___x_2526_ = l_Lean_Syntax_node2(v___x_2512_, v___x_2517_, v___x_2522_, v___x_2525_);
v___x_2527_ = l_Lean_Syntax_node1(v___x_2512_, v___x_2516_, v___x_2526_);
v___x_2528_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2529_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2512_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = l_Lean_Syntax_node3(v___x_2512_, v___x_2513_, v___x_2515_, v___x_2527_, v___x_2529_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2530_);
v___x_2532_ = v___x_2498_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2533_ = lean_box(0);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
lean_ctor_set(v___x_2535_, 1, v___y_2494_);
return v___x_2535_;
}
}
else
{
lean_object* v_ref_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v_f_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2554_; 
lean_dec(v___y_2489_);
v_ref_2537_ = lean_ctor_get(v___y_2493_, 5);
v___x_2538_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__87));
v___x_2539_ = l_Lean_Name_str___override(v___x_2538_, v___y_2491_);
v_f_2540_ = l_Lean_mkIdent(v___x_2539_);
v___x_2541_ = l_Lean_SourceInfo_fromRef(v_ref_2537_, v___x_2110_);
v___x_2542_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2543_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2541_, 5);
v___x_2544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2541_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2546_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2547_ = l_Lean_Syntax_node1(v___x_2541_, v___x_2545_, v_val_2496_);
v___x_2548_ = l_Lean_Syntax_node2(v___x_2541_, v___x_2546_, v_f_2540_, v___x_2547_);
v___x_2549_ = l_Lean_Syntax_node1(v___x_2541_, v___x_2545_, v___x_2548_);
v___x_2550_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2551_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2541_);
lean_ctor_set(v___x_2551_, 1, v___x_2550_);
v___x_2552_ = l_Lean_Syntax_node3(v___x_2541_, v___x_2542_, v___x_2544_, v___x_2549_, v___x_2551_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2552_);
v___x_2554_ = v___x_2498_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2552_);
v___x_2554_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2555_ = lean_box(0);
v___x_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2554_);
lean_ctor_set(v___x_2556_, 1, v___x_2555_);
v___x_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
lean_ctor_set(v___x_2557_, 1, v___y_2494_);
return v___x_2557_;
}
}
}
}
else
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v_a_2566_; lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v___y_2490_);
lean_dec(v___y_2489_);
v___x_2560_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__88));
lean_inc_ref(v___y_2491_);
v___x_2561_ = lean_string_append(v___y_2491_, v___x_2560_);
v___x_2562_ = lean_string_append(v___x_2561_, v___y_2491_);
lean_dec_ref(v___y_2491_);
v___x_2563_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2564_ = lean_string_append(v___x_2562_, v___x_2563_);
v___x_2565_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2492_, v___x_2564_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2492_);
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
v_a_2567_ = lean_ctor_get(v___x_2565_, 1);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2565_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_inc(v_a_2566_);
lean_dec(v___x_2565_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2566_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
v___jp_2576_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v_a_2590_; lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec(v___y_2579_);
lean_inc_ref(v___y_2578_);
v___x_2586_ = lean_string_append(v___y_2578_, v___y_2585_);
lean_dec_ref(v___y_2585_);
v___x_2587_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2588_ = lean_string_append(v___x_2586_, v___x_2587_);
v___x_2589_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2575_, v___x_2588_, v___y_2584_, v___y_2577_);
lean_dec(v___x_2575_);
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
v_a_2591_ = lean_ctor_get(v___x_2589_, 1);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2589_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_inc(v_a_2590_);
lean_dec(v___x_2589_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2590_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
v___jp_2599_:
{
if (v___y_2607_ == 0)
{
lean_dec(v___x_2575_);
v___y_2488_ = v___y_2601_;
v___y_2489_ = v___y_2603_;
v___y_2490_ = v___y_2602_;
v___y_2491_ = v___y_2604_;
v___y_2492_ = v___y_2605_;
v___y_2493_ = v___y_2606_;
v___y_2494_ = v___y_2600_;
goto v___jp_2487_;
}
else
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; uint32_t v___x_2614_; uint32_t v___x_2615_; uint8_t v___x_2616_; 
v___x_2608_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__89));
v___x_2609_ = lean_string_utf8_byte_size(v___y_2604_);
lean_inc_ref_n(v___y_2604_, 2);
v___x_2610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2610_, 0, v___y_2604_);
lean_ctor_set(v___x_2610_, 1, v___x_2486_);
lean_ctor_set(v___x_2610_, 2, v___x_2609_);
lean_inc(v___y_2603_);
v___x_2611_ = l_String_Slice_Pos_nextn(v___x_2610_, v___x_2486_, v___y_2603_);
lean_dec_ref_known(v___x_2610_, 3);
v___x_2612_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2612_, 0, v___y_2604_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_ctor_set(v___x_2612_, 2, v___x_2609_);
v___x_2613_ = l_String_Slice_toString(v___x_2612_);
lean_dec_ref_known(v___x_2612_, 3);
v___x_2614_ = lean_string_utf8_get(v___x_2613_, v___x_2486_);
v___x_2615_ = 97;
v___x_2616_ = lean_uint32_dec_le(v___x_2615_, v___x_2614_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_string_utf8_set(v___x_2613_, v___x_2486_, v___x_2614_);
v___y_2577_ = v___y_2600_;
v___y_2578_ = v___x_2608_;
v___y_2579_ = v___y_2601_;
v___y_2580_ = v___y_2602_;
v___y_2581_ = v___y_2603_;
v___y_2582_ = v___y_2604_;
v___y_2583_ = v___y_2605_;
v___y_2584_ = v___y_2606_;
v___y_2585_ = v___x_2617_;
goto v___jp_2576_;
}
else
{
uint32_t v___x_2618_; uint8_t v___x_2619_; 
v___x_2618_ = 122;
v___x_2619_ = lean_uint32_dec_le(v___x_2614_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; 
v___x_2620_ = lean_string_utf8_set(v___x_2613_, v___x_2486_, v___x_2614_);
v___y_2577_ = v___y_2600_;
v___y_2578_ = v___x_2608_;
v___y_2579_ = v___y_2601_;
v___y_2580_ = v___y_2602_;
v___y_2581_ = v___y_2603_;
v___y_2582_ = v___y_2604_;
v___y_2583_ = v___y_2605_;
v___y_2584_ = v___y_2606_;
v___y_2585_ = v___x_2620_;
goto v___jp_2576_;
}
else
{
uint32_t v___x_2621_; uint32_t v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = 4294967264;
v___x_2622_ = lean_uint32_add(v___x_2614_, v___x_2621_);
v___x_2623_ = lean_string_utf8_set(v___x_2613_, v___x_2486_, v___x_2622_);
v___y_2577_ = v___y_2600_;
v___y_2578_ = v___x_2608_;
v___y_2579_ = v___y_2601_;
v___y_2580_ = v___y_2602_;
v___y_2581_ = v___y_2603_;
v___y_2582_ = v___y_2604_;
v___y_2583_ = v___y_2605_;
v___y_2584_ = v___y_2606_;
v___y_2585_ = v___x_2623_;
goto v___jp_2576_;
}
}
}
}
v___jp_2624_:
{
if (v___y_2632_ == 0)
{
v___y_2600_ = v___y_2625_;
v___y_2601_ = v___y_2626_;
v___y_2602_ = v___y_2628_;
v___y_2603_ = v___y_2627_;
v___y_2604_ = v___y_2629_;
v___y_2605_ = v___y_2631_;
v___y_2606_ = v___y_2630_;
v___y_2607_ = v___x_2110_;
goto v___jp_2599_;
}
else
{
uint8_t v___x_2633_; 
lean_inc_ref(v___y_2629_);
v___x_2633_ = l_Lasm_UI_Syntax_isEventName(v___y_2629_);
if (v___x_2633_ == 0)
{
v___y_2600_ = v___y_2625_;
v___y_2601_ = v___y_2626_;
v___y_2602_ = v___y_2628_;
v___y_2603_ = v___y_2627_;
v___y_2604_ = v___y_2629_;
v___y_2605_ = v___y_2631_;
v___y_2606_ = v___y_2630_;
v___y_2607_ = v___x_2483_;
goto v___jp_2599_;
}
else
{
v___y_2600_ = v___y_2625_;
v___y_2601_ = v___y_2626_;
v___y_2602_ = v___y_2628_;
v___y_2603_ = v___y_2627_;
v___y_2604_ = v___y_2629_;
v___y_2605_ = v___y_2631_;
v___y_2606_ = v___y_2630_;
v___y_2607_ = v___x_2110_;
goto v___jp_2599_;
}
}
}
v___jp_2634_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v___x_2642_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_2643_ = lean_string_utf8_byte_size(v___y_2638_);
v___x_2644_ = lean_obj_once(&l_Lasm_UI_Syntax_isEventName___closed__1, &l_Lasm_UI_Syntax_isEventName___closed__1_once, _init_l_Lasm_UI_Syntax_isEventName___closed__1);
v___x_2645_ = lean_nat_dec_le(v___x_2644_, v___x_2643_);
if (v___x_2645_ == 0)
{
v___y_2625_ = v___y_2641_;
v___y_2626_ = v___y_2635_;
v___y_2627_ = v___y_2636_;
v___y_2628_ = v___y_2637_;
v___y_2629_ = v___y_2638_;
v___y_2630_ = v___y_2640_;
v___y_2631_ = v___y_2639_;
v___y_2632_ = v___x_2110_;
goto v___jp_2624_;
}
else
{
uint8_t v___x_2646_; 
v___x_2646_ = lean_string_memcmp(v___y_2638_, v___x_2642_, v___x_2486_, v___x_2486_, v___x_2644_);
if (v___x_2646_ == 0)
{
v___y_2625_ = v___y_2641_;
v___y_2626_ = v___y_2635_;
v___y_2627_ = v___y_2636_;
v___y_2628_ = v___y_2637_;
v___y_2629_ = v___y_2638_;
v___y_2630_ = v___y_2640_;
v___y_2631_ = v___y_2639_;
v___y_2632_ = v___x_2110_;
goto v___jp_2624_;
}
else
{
lean_object* v___x_2647_; uint8_t v___x_2648_; 
v___x_2647_ = lean_string_length(v___y_2638_);
v___x_2648_ = lean_nat_dec_lt(v___y_2636_, v___x_2647_);
v___y_2625_ = v___y_2641_;
v___y_2626_ = v___y_2635_;
v___y_2627_ = v___y_2636_;
v___y_2628_ = v___y_2637_;
v___y_2629_ = v___y_2638_;
v___y_2630_ = v___y_2640_;
v___y_2631_ = v___y_2639_;
v___y_2632_ = v___x_2648_;
goto v___jp_2624_;
}
}
}
v___jp_2649_:
{
lean_object* v___x_2655_; uint8_t v___x_2656_; 
v___x_2655_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__90));
v___x_2656_ = lean_string_dec_eq(v___y_2652_, v___x_2655_);
if (v___x_2656_ == 0)
{
v___y_2635_ = v___y_2650_;
v___y_2636_ = v___y_2651_;
v___y_2637_ = v___y_2654_;
v___y_2638_ = v___y_2652_;
v___y_2639_ = v___y_2653_;
v___y_2640_ = v_a_2054_;
v___y_2641_ = v_a_2055_;
goto v___jp_2634_;
}
else
{
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec(v___x_2575_);
if (lean_obj_tag(v___y_2650_) == 1)
{
lean_object* v_val_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2667_; 
lean_dec(v___y_2654_);
lean_dec(v___y_2653_);
v_val_2657_ = lean_ctor_get(v___y_2650_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___y_2650_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2659_ = v___y_2650_;
v_isShared_2660_ = v_isSharedCheck_2667_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_val_2657_);
lean_dec(v___y_2650_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2667_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2661_; lean_object* v___x_2663_; 
v___x_2661_ = lean_box(0);
if (v_isShared_2660_ == 0)
{
v___x_2663_ = v___x_2659_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_val_2657_);
v___x_2663_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2661_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
lean_ctor_set(v___x_2665_, 1, v_a_2055_);
return v___x_2665_;
}
}
}
else
{
lean_dec(v___y_2650_);
if (lean_obj_tag(v___y_2654_) == 1)
{
lean_object* v_val_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v___y_2653_);
v_val_2668_ = lean_ctor_get(v___y_2654_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___y_2654_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2670_ = v___y_2654_;
v_isShared_2671_ = v_isSharedCheck_2691_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_val_2668_);
lean_dec(v___y_2654_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2691_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v_quotContext_2672_; lean_object* v_currMacroScope_2673_; lean_object* v_ref_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
v_quotContext_2672_ = lean_ctor_get(v_a_2054_, 1);
v_currMacroScope_2673_ = lean_ctor_get(v_a_2054_, 2);
v_ref_2674_ = lean_ctor_get(v_a_2054_, 5);
v___x_2675_ = l_Lean_SourceInfo_fromRef(v_ref_2674_, v___x_2110_);
v___x_2676_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2677_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__37, &l_Lasm_UI_Syntax_expandAttr___closed__37_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__37);
v___x_2678_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
lean_inc(v_currMacroScope_2673_);
lean_inc(v_quotContext_2672_);
v___x_2679_ = l_Lean_addMacroScope(v_quotContext_2672_, v___x_2678_, v_currMacroScope_2673_);
v___x_2680_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__42));
lean_inc_n(v___x_2675_, 2);
v___x_2681_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2675_);
lean_ctor_set(v___x_2681_, 1, v___x_2677_);
lean_ctor_set(v___x_2681_, 2, v___x_2679_);
lean_ctor_set(v___x_2681_, 3, v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2683_ = l_Lean_Syntax_node1(v___x_2675_, v___x_2682_, v_val_2668_);
v___x_2684_ = l_Lean_Syntax_node2(v___x_2675_, v___x_2676_, v___x_2681_, v___x_2683_);
v___x_2685_ = lean_box(0);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2684_);
v___x_2687_ = v___x_2670_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2684_);
v___x_2687_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2685_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
lean_ctor_set(v___x_2689_, 1, v_a_2055_);
return v___x_2689_;
}
}
}
else
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v_a_2694_; lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v___y_2654_);
v___x_2692_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__91));
v___x_2693_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2653_, v___x_2692_, v_a_2054_, v_a_2055_);
lean_dec(v___y_2653_);
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
v_a_2695_ = lean_ctor_get(v___x_2693_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_inc(v_a_2694_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2694_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
}
v___jp_2703_:
{
if (v___y_2709_ == 0)
{
v___y_2650_ = v___y_2704_;
v___y_2651_ = v___y_2705_;
v___y_2652_ = v___y_2707_;
v___y_2653_ = v___y_2708_;
v___y_2654_ = v___y_2706_;
goto v___jp_2649_;
}
else
{
lean_object* v___x_2710_; 
lean_dec(v___y_2706_);
v___x_2710_ = lean_box(0);
v___y_2650_ = v___y_2704_;
v___y_2651_ = v___y_2705_;
v___y_2652_ = v___y_2707_;
v___y_2653_ = v___y_2708_;
v___y_2654_ = v___x_2710_;
goto v___jp_2649_;
}
}
v___jp_2711_:
{
if (lean_obj_tag(v___y_2712_) == 0)
{
v___y_2704_ = v___y_2712_;
v___y_2705_ = v___y_2713_;
v___y_2706_ = v___y_2716_;
v___y_2707_ = v___y_2714_;
v___y_2708_ = v___y_2715_;
v___y_2709_ = v___x_2110_;
goto v___jp_2703_;
}
else
{
v___y_2704_ = v___y_2712_;
v___y_2705_ = v___y_2713_;
v___y_2706_ = v___y_2716_;
v___y_2707_ = v___y_2714_;
v___y_2708_ = v___y_2715_;
v___y_2709_ = v___x_2483_;
goto v___jp_2703_;
}
}
v___jp_2717_:
{
if (lean_obj_tag(v___y_2719_) == 1)
{
lean_object* v_args_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; uint8_t v___x_2727_; 
v_args_2724_ = lean_ctor_get(v___y_2719_, 2);
lean_inc_ref(v_args_2724_);
lean_dec_ref_known(v___y_2719_, 3);
v___x_2725_ = lean_array_get_size(v_args_2724_);
v___x_2726_ = lean_unsigned_to_nat(3u);
v___x_2727_ = lean_nat_dec_eq(v___x_2725_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; 
lean_dec_ref(v_args_2724_);
v___x_2728_ = lean_box(0);
v___y_2712_ = v___y_2723_;
v___y_2713_ = v___y_2718_;
v___y_2714_ = v___y_2720_;
v___y_2715_ = v___y_2722_;
v___y_2716_ = v___x_2728_;
goto v___jp_2711_;
}
else
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_array_fget(v_args_2724_, v___y_2721_);
lean_dec_ref(v_args_2724_);
v___x_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
v___y_2712_ = v___y_2723_;
v___y_2713_ = v___y_2718_;
v___y_2714_ = v___y_2720_;
v___y_2715_ = v___y_2722_;
v___y_2716_ = v___x_2730_;
goto v___jp_2711_;
}
}
else
{
lean_object* v___x_2731_; 
lean_dec(v___y_2719_);
v___x_2731_ = lean_box(0);
v___y_2712_ = v___y_2723_;
v___y_2713_ = v___y_2718_;
v___y_2714_ = v___y_2720_;
v___y_2715_ = v___y_2722_;
v___y_2716_ = v___x_2731_;
goto v___jp_2711_;
}
}
v___jp_2732_:
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_box(0);
v___y_2718_ = v___y_2733_;
v___y_2719_ = v___y_2734_;
v___y_2720_ = v___y_2735_;
v___y_2721_ = v___y_2737_;
v___y_2722_ = v___y_2736_;
v___y_2723_ = v___x_2738_;
goto v___jp_2717_;
}
v___jp_2739_:
{
lean_object* v_name_2743_; lean_object* v___x_2744_; 
v_name_2743_ = l_Lasm_UI_Syntax_nameOf(v___x_2575_);
v___x_2744_ = l_Lean_Syntax_getArg(v___y_2742_, v___x_2486_);
if (lean_obj_tag(v___x_2744_) == 1)
{
lean_object* v_kind_2745_; 
v_kind_2745_ = lean_ctor_get(v___x_2744_, 1);
lean_inc(v_kind_2745_);
if (lean_obj_tag(v_kind_2745_) == 1)
{
lean_object* v_pre_2746_; 
v_pre_2746_ = lean_ctor_get(v_kind_2745_, 0);
lean_inc(v_pre_2746_);
if (lean_obj_tag(v_pre_2746_) == 0)
{
lean_object* v_info_2747_; lean_object* v_args_2748_; lean_object* v_str_2749_; lean_object* v___x_2750_; uint8_t v___x_2751_; 
v_info_2747_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_info_2747_);
v_args_2748_ = lean_ctor_get(v___x_2744_, 2);
lean_inc_ref(v_args_2748_);
v_str_2749_ = lean_ctor_get(v_kind_2745_, 1);
lean_inc_ref(v_str_2749_);
lean_dec_ref_known(v_kind_2745_, 2);
v___x_2750_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_2751_ = lean_string_dec_eq(v_str_2749_, v___x_2750_);
lean_dec_ref(v_str_2749_);
if (v___x_2751_ == 0)
{
lean_dec_ref(v_args_2748_);
lean_dec(v_info_2747_);
v___y_2733_ = v___y_2740_;
v___y_2734_ = v___x_2744_;
v___y_2735_ = v_name_2743_;
v___y_2736_ = v___y_2742_;
v___y_2737_ = v___y_2741_;
goto v___jp_2732_;
}
else
{
lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v___x_2752_ = l_Lean_Name_str___override(v_pre_2746_, v___x_2750_);
v___x_2753_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2753_, 0, v_info_2747_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
lean_ctor_set(v___x_2753_, 2, v_args_2748_);
v___x_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2753_);
v___y_2718_ = v___y_2740_;
v___y_2719_ = v___x_2744_;
v___y_2720_ = v_name_2743_;
v___y_2721_ = v___y_2741_;
v___y_2722_ = v___y_2742_;
v___y_2723_ = v___x_2754_;
goto v___jp_2717_;
}
}
else
{
lean_dec(v_pre_2746_);
lean_dec_ref_known(v_kind_2745_, 2);
v___y_2733_ = v___y_2740_;
v___y_2734_ = v___x_2744_;
v___y_2735_ = v_name_2743_;
v___y_2736_ = v___y_2742_;
v___y_2737_ = v___y_2741_;
goto v___jp_2732_;
}
}
else
{
lean_dec(v_kind_2745_);
v___y_2733_ = v___y_2740_;
v___y_2734_ = v___x_2744_;
v___y_2735_ = v_name_2743_;
v___y_2736_ = v___y_2742_;
v___y_2737_ = v___y_2741_;
goto v___jp_2732_;
}
}
else
{
v___y_2733_ = v___y_2740_;
v___y_2734_ = v___x_2744_;
v___y_2735_ = v_name_2743_;
v___y_2736_ = v___y_2742_;
v___y_2737_ = v___y_2741_;
goto v___jp_2732_;
}
}
v___jp_2755_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2756_ = lean_unsigned_to_nat(1u);
v___x_2757_ = lean_unsigned_to_nat(2u);
v___x_2758_ = l_Lean_Syntax_getArg(v_a_2053_, v___x_2757_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2759_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__1));
lean_inc(v___x_2758_);
v___x_2760_ = l_Lean_Syntax_isOfKind(v___x_2758_, v___x_2759_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
lean_dec(v___x_2758_);
lean_dec(v___x_2575_);
v___x_2761_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2762_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2053_, v___x_2761_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2053_);
return v___x_2762_;
}
else
{
lean_dec(v_a_2053_);
v___y_2740_ = v___x_2757_;
v___y_2741_ = v___x_2756_;
v___y_2742_ = v___x_2758_;
goto v___jp_2739_;
}
}
else
{
lean_dec(v_a_2053_);
v___y_2740_ = v___x_2757_;
v___y_2741_ = v___x_2756_;
v___y_2742_ = v___x_2758_;
goto v___jp_2739_;
}
}
}
}
else
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = lean_unsigned_to_nat(0u);
v___x_2768_ = l_Lean_Syntax_getArg(v_a_2053_, v___x_2767_);
if (v___x_2057_ == 0)
{
lean_object* v___x_2840_; uint8_t v___x_2841_; 
v___x_2840_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2768_);
v___x_2841_ = l_Lean_Syntax_isOfKind(v___x_2768_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
lean_dec(v___x_2768_);
v___x_2842_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2843_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2053_, v___x_2842_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2053_);
return v___x_2843_;
}
else
{
goto v___jp_2769_;
}
}
else
{
goto v___jp_2769_;
}
v___jp_2769_:
{
lean_object* v_name_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_name_2770_ = l_Lasm_UI_Syntax_nameOf(v___x_2768_);
lean_dec(v___x_2768_);
v___x_2771_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2772_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_name_2770_, v___x_2771_);
if (lean_obj_tag(v___x_2772_) == 1)
{
lean_object* v_val_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2836_; 
lean_dec_ref(v_name_2770_);
lean_dec(v_a_2053_);
v_val_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2836_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_val_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2836_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v_quotContext_2777_; lean_object* v_currMacroScope_2778_; lean_object* v_ref_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2831_; 
v_quotContext_2777_ = lean_ctor_get(v_a_2054_, 1);
v_currMacroScope_2778_ = lean_ctor_get(v_a_2054_, 2);
v_ref_2779_ = lean_ctor_get(v_a_2054_, 5);
v___x_2780_ = l_Lean_SourceInfo_fromRef(v_ref_2779_, v___x_2057_);
v___x_2781_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2782_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2780_, 18);
v___x_2783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2780_);
lean_ctor_set(v___x_2783_, 1, v___x_2782_);
v___x_2784_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2785_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2786_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2787_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2778_, 4);
lean_inc_n(v_quotContext_2777_, 4);
v___x_2788_ = l_Lean_addMacroScope(v_quotContext_2777_, v___x_2787_, v_currMacroScope_2778_);
v___x_2789_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2790_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2780_);
lean_ctor_set(v___x_2790_, 1, v___x_2786_);
lean_ctor_set(v___x_2790_, 2, v___x_2788_);
lean_ctor_set(v___x_2790_, 3, v___x_2789_);
v___x_2791_ = lean_box(2);
v___x_2792_ = l_Lean_Syntax_mkStrLit(v_val_2773_, v___x_2791_);
v___x_2793_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2794_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2795_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2780_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v___x_2797_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2798_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2799_ = lean_box(0);
v___x_2800_ = l_Lean_addMacroScope(v_quotContext_2777_, v___x_2799_, v_currMacroScope_2778_);
v___x_2801_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2802_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2780_);
lean_ctor_set(v___x_2802_, 1, v___x_2798_);
lean_ctor_set(v___x_2802_, 2, v___x_2800_);
lean_ctor_set(v___x_2802_, 3, v___x_2801_);
v___x_2803_ = l_Lean_Syntax_node1(v___x_2780_, v___x_2797_, v___x_2802_);
v___x_2804_ = l_Lean_Syntax_node2(v___x_2780_, v___x_2794_, v___x_2796_, v___x_2803_);
v___x_2805_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2806_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2807_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2780_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__74, &l_Lasm_UI_Syntax_expandAttr___closed__74_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__74);
v___x_2809_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__75));
v___x_2810_ = l_Lean_addMacroScope(v_quotContext_2777_, v___x_2809_, v_currMacroScope_2778_);
v___x_2811_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__79));
v___x_2812_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2780_);
lean_ctor_set(v___x_2812_, 1, v___x_2808_);
lean_ctor_set(v___x_2812_, 2, v___x_2810_);
lean_ctor_set(v___x_2812_, 3, v___x_2811_);
v___x_2813_ = l_Lean_Syntax_node2(v___x_2780_, v___x_2805_, v___x_2807_, v___x_2812_);
v___x_2814_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__93, &l_Lasm_UI_Syntax_expandAttr___closed__93_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__93);
v___x_2815_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__94));
v___x_2816_ = l_Lean_addMacroScope(v_quotContext_2777_, v___x_2815_, v_currMacroScope_2778_);
v___x_2817_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__98));
v___x_2818_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2780_);
lean_ctor_set(v___x_2818_, 1, v___x_2814_);
lean_ctor_set(v___x_2818_, 2, v___x_2816_);
lean_ctor_set(v___x_2818_, 3, v___x_2817_);
v___x_2819_ = l_Lean_Syntax_node1(v___x_2780_, v___x_2784_, v___x_2818_);
v___x_2820_ = l_Lean_Syntax_node2(v___x_2780_, v___x_2785_, v___x_2813_, v___x_2819_);
v___x_2821_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2822_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2780_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = l_Lean_Syntax_node3(v___x_2780_, v___x_2793_, v___x_2804_, v___x_2820_, v___x_2822_);
v___x_2824_ = l_Lean_Syntax_node2(v___x_2780_, v___x_2784_, v___x_2792_, v___x_2823_);
v___x_2825_ = l_Lean_Syntax_node2(v___x_2780_, v___x_2785_, v___x_2790_, v___x_2824_);
v___x_2826_ = l_Lean_Syntax_node1(v___x_2780_, v___x_2784_, v___x_2825_);
v___x_2827_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2828_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2780_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___x_2829_ = l_Lean_Syntax_node3(v___x_2780_, v___x_2781_, v___x_2783_, v___x_2826_, v___x_2828_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2829_);
v___x_2831_ = v___x_2775_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v___x_2829_);
v___x_2831_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2832_ = lean_box(0);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
lean_ctor_set(v___x_2834_, 1, v_a_2055_);
return v___x_2834_;
}
}
}
else
{
lean_object* v___x_2837_; uint8_t v___x_2838_; 
lean_dec(v___x_2772_);
v___x_2837_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__90));
v___x_2838_ = lean_string_dec_eq(v_name_2770_, v___x_2837_);
if (v___x_2838_ == 0)
{
uint8_t v___x_2839_; 
lean_inc_ref(v_name_2770_);
v___x_2839_ = l_Lasm_UI_Syntax_isEventName(v_name_2770_);
if (v___x_2839_ == 0)
{
lean_dec(v_a_2053_);
v___y_2059_ = v_name_2770_;
v___y_2060_ = v_a_2054_;
v___y_2061_ = v_a_2055_;
goto v___jp_2058_;
}
else
{
v___y_2093_ = v_name_2770_;
goto v___jp_2092_;
}
}
else
{
v___y_2093_ = v_name_2770_;
goto v___jp_2092_;
}
}
}
}
v___jp_2111_:
{
if (lean_obj_tag(v___y_2112_) == 1)
{
lean_object* v_val_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v___y_2114_);
lean_dec(v___y_2113_);
v_val_2118_ = lean_ctor_get(v___y_2112_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___y_2112_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2120_ = v___y_2112_;
v_isShared_2121_ = v_isSharedCheck_2150_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_val_2118_);
lean_dec(v___y_2112_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2150_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v_quotContext_2122_; lean_object* v_currMacroScope_2123_; lean_object* v_ref_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v_quotContext_2122_ = lean_ctor_get(v___y_2116_, 1);
v_currMacroScope_2123_ = lean_ctor_get(v___y_2116_, 2);
v_ref_2124_ = lean_ctor_get(v___y_2116_, 5);
v___x_2125_ = l_Lean_SourceInfo_fromRef(v_ref_2124_, v___x_2110_);
v___x_2126_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2127_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2125_, 6);
v___x_2128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2125_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2130_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2131_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2132_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc(v_currMacroScope_2123_);
lean_inc(v_quotContext_2122_);
v___x_2133_ = l_Lean_addMacroScope(v_quotContext_2122_, v___x_2132_, v_currMacroScope_2123_);
v___x_2134_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2135_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2125_);
lean_ctor_set(v___x_2135_, 1, v___x_2131_);
lean_ctor_set(v___x_2135_, 2, v___x_2133_);
lean_ctor_set(v___x_2135_, 3, v___x_2134_);
v___x_2136_ = lean_box(2);
v___x_2137_ = l_Lean_Syntax_mkStrLit(v___y_2115_, v___x_2136_);
v___x_2138_ = l_Lean_Syntax_node2(v___x_2125_, v___x_2129_, v___x_2137_, v_val_2118_);
v___x_2139_ = l_Lean_Syntax_node2(v___x_2125_, v___x_2130_, v___x_2135_, v___x_2138_);
v___x_2140_ = l_Lean_Syntax_node1(v___x_2125_, v___x_2129_, v___x_2139_);
v___x_2141_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2125_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = l_Lean_Syntax_node3(v___x_2125_, v___x_2126_, v___x_2128_, v___x_2140_, v___x_2142_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2143_);
v___x_2145_ = v___x_2120_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2146_ = lean_box(0);
v___x_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2145_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
lean_ctor_set(v___x_2148_, 1, v___y_2117_);
return v___x_2148_;
}
}
}
else
{
lean_dec(v___y_2112_);
if (lean_obj_tag(v___y_2113_) == 1)
{
lean_object* v_val_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v___y_2114_);
v_val_2151_ = lean_ctor_get(v___y_2113_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___y_2113_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2153_ = v___y_2113_;
v_isShared_2154_ = v_isSharedCheck_2205_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_val_2151_);
lean_dec(v___y_2113_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2205_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v_quotContext_2155_; lean_object* v_currMacroScope_2156_; lean_object* v_ref_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2200_; 
v_quotContext_2155_ = lean_ctor_get(v___y_2116_, 1);
v_currMacroScope_2156_ = lean_ctor_get(v___y_2116_, 2);
v_ref_2157_ = lean_ctor_get(v___y_2116_, 5);
v___x_2158_ = l_Lean_SourceInfo_fromRef(v_ref_2157_, v___x_2110_);
v___x_2159_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2160_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2158_, 15);
v___x_2161_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2158_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2163_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2164_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2165_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc_n(v_currMacroScope_2156_, 3);
lean_inc_n(v_quotContext_2155_, 3);
v___x_2166_ = l_Lean_addMacroScope(v_quotContext_2155_, v___x_2165_, v_currMacroScope_2156_);
v___x_2167_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2168_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2158_);
lean_ctor_set(v___x_2168_, 1, v___x_2164_);
lean_ctor_set(v___x_2168_, 2, v___x_2166_);
lean_ctor_set(v___x_2168_, 3, v___x_2167_);
v___x_2169_ = lean_box(2);
v___x_2170_ = l_Lean_Syntax_mkStrLit(v___y_2115_, v___x_2169_);
v___x_2171_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2172_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2173_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2158_);
lean_ctor_set(v___x_2174_, 1, v___x_2173_);
v___x_2175_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2176_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2177_ = lean_box(0);
v___x_2178_ = l_Lean_addMacroScope(v_quotContext_2155_, v___x_2177_, v_currMacroScope_2156_);
v___x_2179_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2158_);
lean_ctor_set(v___x_2180_, 1, v___x_2176_);
lean_ctor_set(v___x_2180_, 2, v___x_2178_);
lean_ctor_set(v___x_2180_, 3, v___x_2179_);
v___x_2181_ = l_Lean_Syntax_node1(v___x_2158_, v___x_2175_, v___x_2180_);
v___x_2182_ = l_Lean_Syntax_node2(v___x_2158_, v___x_2172_, v___x_2174_, v___x_2181_);
v___x_2183_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__37, &l_Lasm_UI_Syntax_expandAttr___closed__37_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__37);
v___x_2184_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
v___x_2185_ = l_Lean_addMacroScope(v_quotContext_2155_, v___x_2184_, v_currMacroScope_2156_);
v___x_2186_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__42));
v___x_2187_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2158_);
lean_ctor_set(v___x_2187_, 1, v___x_2183_);
lean_ctor_set(v___x_2187_, 2, v___x_2185_);
lean_ctor_set(v___x_2187_, 3, v___x_2186_);
v___x_2188_ = l_Lean_Syntax_node1(v___x_2158_, v___x_2162_, v_val_2151_);
v___x_2189_ = l_Lean_Syntax_node2(v___x_2158_, v___x_2163_, v___x_2187_, v___x_2188_);
v___x_2190_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2158_);
lean_ctor_set(v___x_2191_, 1, v___x_2190_);
v___x_2192_ = l_Lean_Syntax_node3(v___x_2158_, v___x_2171_, v___x_2182_, v___x_2189_, v___x_2191_);
v___x_2193_ = l_Lean_Syntax_node2(v___x_2158_, v___x_2162_, v___x_2170_, v___x_2192_);
v___x_2194_ = l_Lean_Syntax_node2(v___x_2158_, v___x_2163_, v___x_2168_, v___x_2193_);
v___x_2195_ = l_Lean_Syntax_node1(v___x_2158_, v___x_2162_, v___x_2194_);
v___x_2196_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2158_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = l_Lean_Syntax_node3(v___x_2158_, v___x_2159_, v___x_2161_, v___x_2195_, v___x_2197_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v___x_2198_);
v___x_2200_ = v___x_2153_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2201_ = lean_box(0);
v___x_2202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___x_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
lean_ctor_set(v___x_2203_, 1, v___y_2117_);
return v___x_2203_;
}
}
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2113_);
v___x_2206_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__43));
v___x_2207_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2114_, v___x_2206_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2114_);
return v___x_2207_;
}
}
}
v___jp_2208_:
{
lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2215_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__44));
v___x_2216_ = lean_string_dec_eq(v___y_2214_, v___x_2215_);
if (v___x_2216_ == 0)
{
v___y_2112_ = v___y_2209_;
v___y_2113_ = v___y_2211_;
v___y_2114_ = v___y_2212_;
v___y_2115_ = v___y_2214_;
v___y_2116_ = v___y_2213_;
v___y_2117_ = v___y_2210_;
goto v___jp_2111_;
}
else
{
if (lean_obj_tag(v___y_2211_) == 1)
{
lean_object* v_val_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2240_; 
lean_dec_ref(v___y_2214_);
lean_dec(v___y_2212_);
lean_dec(v___y_2209_);
v_val_2217_ = lean_ctor_get(v___y_2211_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___y_2211_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2219_ = v___y_2211_;
v_isShared_2220_ = v_isSharedCheck_2240_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_val_2217_);
lean_dec(v___y_2211_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2240_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v_quotContext_2221_; lean_object* v_currMacroScope_2222_; lean_object* v_ref_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2235_; 
v_quotContext_2221_ = lean_ctor_get(v___y_2213_, 1);
v_currMacroScope_2222_ = lean_ctor_get(v___y_2213_, 2);
v_ref_2223_ = lean_ctor_get(v___y_2213_, 5);
v___x_2224_ = l_Lean_SourceInfo_fromRef(v_ref_2223_, v___x_2110_);
v___x_2225_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2226_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__46, &l_Lasm_UI_Syntax_expandAttr___closed__46_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__46);
v___x_2227_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__48));
lean_inc(v_currMacroScope_2222_);
lean_inc(v_quotContext_2221_);
v___x_2228_ = l_Lean_addMacroScope(v_quotContext_2221_, v___x_2227_, v_currMacroScope_2222_);
v___x_2229_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__52));
lean_inc_n(v___x_2224_, 2);
v___x_2230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2224_);
lean_ctor_set(v___x_2230_, 1, v___x_2226_);
lean_ctor_set(v___x_2230_, 2, v___x_2228_);
lean_ctor_set(v___x_2230_, 3, v___x_2229_);
v___x_2231_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2232_ = l_Lean_Syntax_node1(v___x_2224_, v___x_2231_, v_val_2217_);
v___x_2233_ = l_Lean_Syntax_node2(v___x_2224_, v___x_2225_, v___x_2230_, v___x_2232_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2233_);
v___x_2235_ = v___x_2219_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2233_);
v___x_2235_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = lean_box(0);
v___x_2237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2235_);
lean_ctor_set(v___x_2237_, 1, v___x_2236_);
v___x_2238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
lean_ctor_set(v___x_2238_, 1, v___y_2210_);
return v___x_2238_;
}
}
}
else
{
v___y_2112_ = v___y_2209_;
v___y_2113_ = v___y_2211_;
v___y_2114_ = v___y_2212_;
v___y_2115_ = v___y_2214_;
v___y_2116_ = v___y_2213_;
v___y_2117_ = v___y_2210_;
goto v___jp_2111_;
}
}
}
v___jp_2241_:
{
lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__53));
v___x_2249_ = lean_string_dec_eq(v___y_2244_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; uint8_t v___x_2251_; 
v___x_2250_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__54));
v___x_2251_ = lean_string_dec_eq(v___y_2244_, v___x_2250_);
if (v___x_2251_ == 0)
{
v___y_2209_ = v___y_2242_;
v___y_2210_ = v___y_2247_;
v___y_2211_ = v___y_2243_;
v___y_2212_ = v___y_2245_;
v___y_2213_ = v___y_2246_;
v___y_2214_ = v___y_2244_;
goto v___jp_2208_;
}
else
{
lean_object* v___x_2252_; 
lean_dec_ref(v___y_2244_);
v___x_2252_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__55));
v___y_2209_ = v___y_2242_;
v___y_2210_ = v___y_2247_;
v___y_2211_ = v___y_2243_;
v___y_2212_ = v___y_2245_;
v___y_2213_ = v___y_2246_;
v___y_2214_ = v___x_2252_;
goto v___jp_2208_;
}
}
else
{
lean_object* v___x_2253_; 
lean_dec_ref(v___y_2244_);
v___x_2253_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__56));
v___y_2209_ = v___y_2242_;
v___y_2210_ = v___y_2247_;
v___y_2211_ = v___y_2243_;
v___y_2212_ = v___y_2245_;
v___y_2213_ = v___y_2246_;
v___y_2214_ = v___x_2253_;
goto v___jp_2208_;
}
}
v___jp_2254_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lasm_UI_Syntax_stringProps));
v___x_2262_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v___y_2257_, v___x_2261_);
if (lean_obj_tag(v___x_2262_) == 1)
{
lean_dec_ref(v___y_2257_);
if (lean_obj_tag(v___y_2255_) == 1)
{
lean_object* v_val_2263_; lean_object* v_val_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2322_; 
lean_dec(v___y_2258_);
lean_dec(v___y_2256_);
v_val_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_val_2263_);
lean_dec_ref_known(v___x_2262_, 1);
v_val_2264_ = lean_ctor_get(v___y_2255_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___y_2255_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2266_ = v___y_2255_;
v_isShared_2267_ = v_isSharedCheck_2322_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_val_2264_);
lean_dec(v___y_2255_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2322_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v_quotContext_2268_; lean_object* v_currMacroScope_2269_; lean_object* v_ref_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v_quotContext_2268_ = lean_ctor_get(v___y_2259_, 1);
v_currMacroScope_2269_ = lean_ctor_get(v___y_2259_, 2);
v_ref_2270_ = lean_ctor_get(v___y_2259_, 5);
v___x_2271_ = l_Lean_SourceInfo_fromRef(v_ref_2270_, v___x_2110_);
v___x_2272_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2273_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2271_, 17);
v___x_2274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2271_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2276_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2277_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2278_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2269_, 3);
lean_inc_n(v_quotContext_2268_, 3);
v___x_2279_ = l_Lean_addMacroScope(v_quotContext_2268_, v___x_2278_, v_currMacroScope_2269_);
v___x_2280_ = lean_box(0);
v___x_2281_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2282_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2271_);
lean_ctor_set(v___x_2282_, 1, v___x_2277_);
lean_ctor_set(v___x_2282_, 2, v___x_2279_);
lean_ctor_set(v___x_2282_, 3, v___x_2281_);
v___x_2283_ = lean_box(2);
v___x_2284_ = l_Lean_Syntax_mkStrLit(v_val_2263_, v___x_2283_);
v___x_2285_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2286_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2287_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2271_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2290_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2291_ = lean_box(0);
v___x_2292_ = l_Lean_addMacroScope(v_quotContext_2268_, v___x_2291_, v_currMacroScope_2269_);
v___x_2293_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2294_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2271_);
lean_ctor_set(v___x_2294_, 1, v___x_2290_);
lean_ctor_set(v___x_2294_, 2, v___x_2292_);
lean_ctor_set(v___x_2294_, 3, v___x_2293_);
v___x_2295_ = l_Lean_Syntax_node1(v___x_2271_, v___x_2289_, v___x_2294_);
v___x_2296_ = l_Lean_Syntax_node2(v___x_2271_, v___x_2286_, v___x_2288_, v___x_2295_);
v___x_2297_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2298_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2271_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__68, &l_Lasm_UI_Syntax_expandAttr___closed__68_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__68);
v___x_2301_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2302_ = l_Lean_addMacroScope(v_quotContext_2268_, v___x_2301_, v_currMacroScope_2269_);
v___x_2303_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2271_);
lean_ctor_set(v___x_2303_, 1, v___x_2300_);
lean_ctor_set(v___x_2303_, 2, v___x_2302_);
lean_ctor_set(v___x_2303_, 3, v___x_2280_);
v___x_2304_ = l_Lean_Syntax_node2(v___x_2271_, v___x_2297_, v___x_2299_, v___x_2303_);
v___x_2305_ = l_Lean_Syntax_node1(v___x_2271_, v___x_2275_, v_val_2264_);
v___x_2306_ = l_Lean_Syntax_node2(v___x_2271_, v___x_2276_, v___x_2304_, v___x_2305_);
v___x_2307_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2271_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = l_Lean_Syntax_node3(v___x_2271_, v___x_2285_, v___x_2296_, v___x_2306_, v___x_2308_);
v___x_2310_ = l_Lean_Syntax_node2(v___x_2271_, v___x_2275_, v___x_2284_, v___x_2309_);
v___x_2311_ = l_Lean_Syntax_node2(v___x_2271_, v___x_2276_, v___x_2282_, v___x_2310_);
v___x_2312_ = l_Lean_Syntax_node1(v___x_2271_, v___x_2275_, v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2314_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2271_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = l_Lean_Syntax_node3(v___x_2271_, v___x_2272_, v___x_2274_, v___x_2312_, v___x_2314_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2315_);
v___x_2317_ = v___x_2266_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2318_ = lean_box(0);
v___x_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
lean_ctor_set(v___x_2320_, 1, v___y_2260_);
return v___x_2320_;
}
}
}
else
{
lean_dec(v___y_2255_);
if (lean_obj_tag(v___y_2256_) == 1)
{
lean_object* v_val_2323_; lean_object* v_val_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2382_; 
lean_dec(v___y_2258_);
v_val_2323_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_val_2323_);
lean_dec_ref_known(v___x_2262_, 1);
v_val_2324_ = lean_ctor_get(v___y_2256_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___y_2256_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2326_ = v___y_2256_;
v_isShared_2327_ = v_isSharedCheck_2382_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_val_2324_);
lean_dec(v___y_2256_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2382_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v_quotContext_2328_; lean_object* v_currMacroScope_2329_; lean_object* v_ref_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2377_; 
v_quotContext_2328_ = lean_ctor_get(v___y_2259_, 1);
v_currMacroScope_2329_ = lean_ctor_get(v___y_2259_, 2);
v_ref_2330_ = lean_ctor_get(v___y_2259_, 5);
v___x_2331_ = l_Lean_SourceInfo_fromRef(v_ref_2330_, v___x_2110_);
v___x_2332_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2333_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2331_, 17);
v___x_2334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2331_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2336_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2337_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2338_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2329_, 3);
lean_inc_n(v_quotContext_2328_, 3);
v___x_2339_ = l_Lean_addMacroScope(v_quotContext_2328_, v___x_2338_, v_currMacroScope_2329_);
v___x_2340_ = lean_box(0);
v___x_2341_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2342_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2331_);
lean_ctor_set(v___x_2342_, 1, v___x_2337_);
lean_ctor_set(v___x_2342_, 2, v___x_2339_);
lean_ctor_set(v___x_2342_, 3, v___x_2341_);
v___x_2343_ = lean_box(2);
v___x_2344_ = l_Lean_Syntax_mkStrLit(v_val_2323_, v___x_2343_);
v___x_2345_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2346_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2347_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2348_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2331_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
v___x_2349_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2350_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2351_ = lean_box(0);
v___x_2352_ = l_Lean_addMacroScope(v_quotContext_2328_, v___x_2351_, v_currMacroScope_2329_);
v___x_2353_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2354_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2331_);
lean_ctor_set(v___x_2354_, 1, v___x_2350_);
lean_ctor_set(v___x_2354_, 2, v___x_2352_);
lean_ctor_set(v___x_2354_, 3, v___x_2353_);
v___x_2355_ = l_Lean_Syntax_node1(v___x_2331_, v___x_2349_, v___x_2354_);
v___x_2356_ = l_Lean_Syntax_node2(v___x_2331_, v___x_2346_, v___x_2348_, v___x_2355_);
v___x_2357_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2358_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2359_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2331_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__68, &l_Lasm_UI_Syntax_expandAttr___closed__68_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__68);
v___x_2361_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2362_ = l_Lean_addMacroScope(v_quotContext_2328_, v___x_2361_, v_currMacroScope_2329_);
v___x_2363_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2331_);
lean_ctor_set(v___x_2363_, 1, v___x_2360_);
lean_ctor_set(v___x_2363_, 2, v___x_2362_);
lean_ctor_set(v___x_2363_, 3, v___x_2340_);
v___x_2364_ = l_Lean_Syntax_node2(v___x_2331_, v___x_2357_, v___x_2359_, v___x_2363_);
v___x_2365_ = l_Lean_Syntax_node1(v___x_2331_, v___x_2335_, v_val_2324_);
v___x_2366_ = l_Lean_Syntax_node2(v___x_2331_, v___x_2336_, v___x_2364_, v___x_2365_);
v___x_2367_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2368_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2331_);
lean_ctor_set(v___x_2368_, 1, v___x_2367_);
v___x_2369_ = l_Lean_Syntax_node3(v___x_2331_, v___x_2345_, v___x_2356_, v___x_2366_, v___x_2368_);
v___x_2370_ = l_Lean_Syntax_node2(v___x_2331_, v___x_2335_, v___x_2344_, v___x_2369_);
v___x_2371_ = l_Lean_Syntax_node2(v___x_2331_, v___x_2336_, v___x_2342_, v___x_2370_);
v___x_2372_ = l_Lean_Syntax_node1(v___x_2331_, v___x_2335_, v___x_2371_);
v___x_2373_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2331_);
lean_ctor_set(v___x_2374_, 1, v___x_2373_);
v___x_2375_ = l_Lean_Syntax_node3(v___x_2331_, v___x_2332_, v___x_2334_, v___x_2372_, v___x_2374_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2375_);
v___x_2377_ = v___x_2326_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2375_);
v___x_2377_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2378_ = lean_box(0);
v___x_2379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2377_);
lean_ctor_set(v___x_2379_, 1, v___x_2378_);
v___x_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
lean_ctor_set(v___x_2380_, 1, v___y_2260_);
return v___x_2380_;
}
}
}
else
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v_a_2385_; lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec_ref_known(v___x_2262_, 1);
lean_dec(v___y_2256_);
v___x_2383_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__69));
v___x_2384_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2258_, v___x_2383_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2258_);
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
v_a_2386_ = lean_ctor_get(v___x_2384_, 1);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2384_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_inc(v_a_2385_);
lean_dec(v___x_2384_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2385_);
lean_ctor_set(v_reuseFailAlloc_2392_, 1, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
else
{
lean_dec(v___x_2262_);
v___y_2242_ = v___y_2255_;
v___y_2243_ = v___y_2256_;
v___y_2244_ = v___y_2257_;
v___y_2245_ = v___y_2258_;
v___y_2246_ = v___y_2259_;
v___y_2247_ = v___y_2260_;
goto v___jp_2241_;
}
}
v___jp_2394_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2402_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v___y_2397_, v___x_2401_);
if (lean_obj_tag(v___x_2402_) == 1)
{
lean_dec(v___y_2395_);
if (lean_obj_tag(v___y_2396_) == 0)
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v_a_2413_; lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref_known(v___x_2402_, 1);
v___x_2403_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__70));
lean_inc_ref(v___y_2397_);
v___x_2404_ = lean_string_append(v___y_2397_, v___x_2403_);
v___x_2405_ = lean_string_append(v___x_2404_, v___y_2397_);
v___x_2406_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__71));
v___x_2407_ = lean_string_append(v___x_2405_, v___x_2406_);
v___x_2408_ = lean_string_append(v___x_2407_, v___y_2397_);
v___x_2409_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__72));
v___x_2410_ = lean_string_append(v___x_2408_, v___x_2409_);
v___x_2411_ = lean_string_append(v___x_2410_, v___y_2397_);
lean_dec_ref(v___y_2397_);
v___x_2412_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2398_, v___x_2411_, v___y_2399_, v___y_2400_);
lean_dec(v___y_2398_);
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
v_a_2414_ = lean_ctor_get(v___x_2412_, 1);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2412_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_inc(v_a_2413_);
lean_dec(v___x_2412_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2413_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
else
{
lean_object* v_val_2422_; lean_object* v_val_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2481_; 
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
v_val_2422_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_val_2422_);
lean_dec_ref_known(v___x_2402_, 1);
v_val_2423_ = lean_ctor_get(v___y_2396_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___y_2396_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2425_ = v___y_2396_;
v_isShared_2426_ = v_isSharedCheck_2481_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_val_2423_);
lean_dec(v___y_2396_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2481_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v_quotContext_2427_; lean_object* v_currMacroScope_2428_; lean_object* v_ref_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2476_; 
v_quotContext_2427_ = lean_ctor_get(v___y_2399_, 1);
v_currMacroScope_2428_ = lean_ctor_get(v___y_2399_, 2);
v_ref_2429_ = lean_ctor_get(v___y_2399_, 5);
v___x_2430_ = l_Lean_SourceInfo_fromRef(v_ref_2429_, v___x_2110_);
v___x_2431_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2432_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2430_, 17);
v___x_2433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2430_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2435_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2436_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2437_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2428_, 3);
lean_inc_n(v_quotContext_2427_, 3);
v___x_2438_ = l_Lean_addMacroScope(v_quotContext_2427_, v___x_2437_, v_currMacroScope_2428_);
v___x_2439_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2440_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2430_);
lean_ctor_set(v___x_2440_, 1, v___x_2436_);
lean_ctor_set(v___x_2440_, 2, v___x_2438_);
lean_ctor_set(v___x_2440_, 3, v___x_2439_);
v___x_2441_ = lean_box(2);
v___x_2442_ = l_Lean_Syntax_mkStrLit(v_val_2422_, v___x_2441_);
v___x_2443_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2444_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2445_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2446_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2430_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2448_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2449_ = lean_box(0);
v___x_2450_ = l_Lean_addMacroScope(v_quotContext_2427_, v___x_2449_, v_currMacroScope_2428_);
v___x_2451_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2452_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2430_);
lean_ctor_set(v___x_2452_, 1, v___x_2448_);
lean_ctor_set(v___x_2452_, 2, v___x_2450_);
lean_ctor_set(v___x_2452_, 3, v___x_2451_);
v___x_2453_ = l_Lean_Syntax_node1(v___x_2430_, v___x_2447_, v___x_2452_);
v___x_2454_ = l_Lean_Syntax_node2(v___x_2430_, v___x_2444_, v___x_2446_, v___x_2453_);
v___x_2455_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2456_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2430_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__74, &l_Lasm_UI_Syntax_expandAttr___closed__74_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__74);
v___x_2459_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__75));
v___x_2460_ = l_Lean_addMacroScope(v_quotContext_2427_, v___x_2459_, v_currMacroScope_2428_);
v___x_2461_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__79));
v___x_2462_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2430_);
lean_ctor_set(v___x_2462_, 1, v___x_2458_);
lean_ctor_set(v___x_2462_, 2, v___x_2460_);
lean_ctor_set(v___x_2462_, 3, v___x_2461_);
v___x_2463_ = l_Lean_Syntax_node2(v___x_2430_, v___x_2455_, v___x_2457_, v___x_2462_);
v___x_2464_ = l_Lean_Syntax_node1(v___x_2430_, v___x_2434_, v_val_2423_);
v___x_2465_ = l_Lean_Syntax_node2(v___x_2430_, v___x_2435_, v___x_2463_, v___x_2464_);
v___x_2466_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2467_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2430_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = l_Lean_Syntax_node3(v___x_2430_, v___x_2443_, v___x_2454_, v___x_2465_, v___x_2467_);
v___x_2469_ = l_Lean_Syntax_node2(v___x_2430_, v___x_2434_, v___x_2442_, v___x_2468_);
v___x_2470_ = l_Lean_Syntax_node2(v___x_2430_, v___x_2435_, v___x_2440_, v___x_2469_);
v___x_2471_ = l_Lean_Syntax_node1(v___x_2430_, v___x_2434_, v___x_2470_);
v___x_2472_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2473_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2430_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
v___x_2474_ = l_Lean_Syntax_node3(v___x_2430_, v___x_2431_, v___x_2433_, v___x_2471_, v___x_2473_);
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 0, v___x_2474_);
v___x_2476_ = v___x_2425_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2474_);
v___x_2476_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = lean_box(0);
v___x_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2476_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2478_);
lean_ctor_set(v___x_2479_, 1, v___y_2400_);
return v___x_2479_;
}
}
}
}
else
{
lean_dec(v___x_2402_);
v___y_2255_ = v___y_2395_;
v___y_2256_ = v___y_2396_;
v___y_2257_ = v___y_2397_;
v___y_2258_ = v___y_2398_;
v___y_2259_ = v___y_2399_;
v___y_2260_ = v___y_2400_;
goto v___jp_2254_;
}
}
}
else
{
lean_object* v_ref_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; uint8_t v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v_ref_2844_ = lean_ctor_get(v_a_2054_, 5);
v___x_2845_ = lean_unsigned_to_nat(1u);
v___x_2846_ = l_Lean_Syntax_getArg(v_a_2053_, v___x_2845_);
lean_dec(v_a_2053_);
v___x_2847_ = 0;
v___x_2848_ = l_Lean_SourceInfo_fromRef(v_ref_2844_, v___x_2847_);
v___x_2849_ = ((lean_object*)(l_Lasm_UI_Syntax_attrsTerm___closed__1));
v___x_2850_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__99));
lean_inc(v___x_2848_);
v___x_2851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2848_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2849_, v___x_2851_, v___x_2846_);
v___x_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
lean_ctor_set(v___x_2856_, 1, v_a_2055_);
return v___x_2856_;
}
v___jp_2058_:
{
lean_object* v_quotContext_2062_; lean_object* v_currMacroScope_2063_; lean_object* v_ref_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v_quotContext_2062_ = lean_ctor_get(v___y_2060_, 1);
v_currMacroScope_2063_ = lean_ctor_get(v___y_2060_, 2);
v_ref_2064_ = lean_ctor_get(v___y_2060_, 5);
v___x_2065_ = l_Lean_SourceInfo_fromRef(v_ref_2064_, v___x_2057_);
v___x_2066_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2067_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2065_, 8);
v___x_2068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2065_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
v___x_2069_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2070_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2071_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2072_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc(v_currMacroScope_2063_);
lean_inc(v_quotContext_2062_);
v___x_2073_ = l_Lean_addMacroScope(v_quotContext_2062_, v___x_2072_, v_currMacroScope_2063_);
v___x_2074_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2075_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2065_);
lean_ctor_set(v___x_2075_, 1, v___x_2071_);
lean_ctor_set(v___x_2075_, 2, v___x_2073_);
lean_ctor_set(v___x_2075_, 3, v___x_2074_);
v___x_2076_ = lean_box(2);
v___x_2077_ = l_Lean_Syntax_mkStrLit(v___y_2059_, v___x_2076_);
v___x_2078_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2079_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__15));
v___x_2080_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2065_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = l_Lean_Syntax_node1(v___x_2065_, v___x_2078_, v___x_2080_);
v___x_2082_ = l_Lean_Syntax_node2(v___x_2065_, v___x_2069_, v___x_2077_, v___x_2081_);
v___x_2083_ = l_Lean_Syntax_node2(v___x_2065_, v___x_2070_, v___x_2075_, v___x_2082_);
v___x_2084_ = l_Lean_Syntax_node1(v___x_2065_, v___x_2069_, v___x_2083_);
v___x_2085_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2086_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2065_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
v___x_2087_ = l_Lean_Syntax_node3(v___x_2065_, v___x_2066_, v___x_2068_, v___x_2084_, v___x_2086_);
v___x_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
v___x_2089_ = lean_box(0);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2088_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
lean_ctor_set(v___x_2091_, 1, v___y_2061_);
return v___x_2091_;
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v_a_2100_; lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v___x_2094_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__17));
lean_inc_ref(v___y_2093_);
v___x_2095_ = lean_string_append(v___y_2093_, v___x_2094_);
v___x_2096_ = lean_string_append(v___x_2095_, v___y_2093_);
lean_dec_ref(v___y_2093_);
v___x_2097_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2098_ = lean_string_append(v___x_2096_, v___x_2097_);
v___x_2099_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2053_, v___x_2098_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2053_);
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_a_2101_ = lean_ctor_get(v___x_2099_, 1);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2099_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2100_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr___boxed(lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l_Lasm_UI_Syntax_expandAttr(v_a_2857_, v_a_2858_, v_a_2859_);
lean_dec_ref(v_a_2858_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(lean_object* v_00_u03b2_2861_, lean_object* v_x_2862_, lean_object* v_x_2863_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_2862_, v_x_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___boxed(lean_object* v_00_u03b2_2865_, lean_object* v_x_2866_, lean_object* v_x_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(v_00_u03b2_2865_, v_x_2866_, v_x_2867_);
lean_dec(v_x_2867_);
lean_dec_ref(v_x_2866_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(lean_object* v_as_2873_, size_t v_i_2874_, size_t v_stop_2875_, lean_object* v_b_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
uint8_t v___x_2879_; 
v___x_2879_ = lean_usize_dec_eq(v_i_2874_, v_stop_2875_);
if (v___x_2879_ == 0)
{
lean_object* v_ref_2880_; size_t v___x_2881_; size_t v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v_ref_2880_ = lean_ctor_get(v___y_2877_, 5);
v___x_2881_ = ((size_t)1ULL);
v___x_2882_ = lean_usize_sub(v_i_2874_, v___x_2881_);
v___x_2883_ = lean_array_uget_borrowed(v_as_2873_, v___x_2882_);
v___x_2884_ = l_Lean_SourceInfo_fromRef(v_ref_2880_, v___x_2879_);
v___x_2885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1));
v___x_2886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2));
lean_inc(v___x_2884_);
v___x_2887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2884_);
lean_ctor_set(v___x_2887_, 1, v___x_2886_);
lean_inc(v___x_2883_);
v___x_2888_ = l_Lean_Syntax_node3(v___x_2884_, v___x_2885_, v___x_2883_, v___x_2887_, v_b_2876_);
v_i_2874_ = v___x_2882_;
v_b_2876_ = v___x_2888_;
goto _start;
}
else
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_b_2876_);
lean_ctor_set(v___x_2890_, 1, v___y_2878_);
return v___x_2890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___boxed(lean_object* v_as_2891_, lean_object* v_i_2892_, lean_object* v_stop_2893_, lean_object* v_b_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
size_t v_i_boxed_2897_; size_t v_stop_boxed_2898_; lean_object* v_res_2899_; 
v_i_boxed_2897_ = lean_unbox_usize(v_i_2892_);
lean_dec(v_i_2892_);
v_stop_boxed_2898_ = lean_unbox_usize(v_stop_2893_);
lean_dec(v_stop_2893_);
v_res_2899_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_as_2891_, v_i_boxed_2897_, v_stop_boxed_2898_, v_b_2894_, v___y_2895_, v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec_ref(v_as_2891_);
return v_res_2899_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2900_; 
v___x_2900_ = l_Array_mkArray0___redArg();
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(lean_object* v___x_2902_, lean_object* v_singles_2903_, lean_object* v_tail_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
if (lean_obj_tag(v_tail_2904_) == 0)
{
lean_object* v_ref_2907_; uint8_t v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v_ref_2907_ = lean_ctor_get(v___y_2905_, 5);
v___x_2908_ = 0;
v___x_2909_ = l_Lean_SourceInfo_fromRef(v_ref_2907_, v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2911_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2909_, 3);
v___x_2912_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2909_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2914_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_2915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_2916_ = l_Lean_Syntax_SepArray_ofElems(v___x_2915_, v_singles_2903_);
v___x_2917_ = l_Array_append___redArg(v___x_2914_, v___x_2916_);
lean_dec_ref(v___x_2916_);
v___x_2918_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2909_);
lean_ctor_set(v___x_2918_, 1, v___x_2913_);
lean_ctor_set(v___x_2918_, 2, v___x_2917_);
v___x_2919_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2920_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2909_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___x_2921_ = l_Lean_Syntax_node3(v___x_2909_, v___x_2910_, v___x_2912_, v___x_2918_, v___x_2920_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2921_);
lean_ctor_set(v___x_2922_, 1, v___y_2906_);
return v___x_2922_;
}
else
{
lean_object* v_val_2923_; lean_object* v___x_2924_; uint8_t v___x_2925_; 
v_val_2923_ = lean_ctor_get(v_tail_2904_, 0);
lean_inc(v_val_2923_);
lean_dec_ref_known(v_tail_2904_, 1);
v___x_2924_ = lean_array_get_size(v_singles_2903_);
v___x_2925_ = lean_nat_dec_lt(v___x_2902_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v_val_2923_);
lean_ctor_set(v___x_2926_, 1, v___y_2906_);
return v___x_2926_;
}
else
{
size_t v___x_2927_; size_t v___x_2928_; lean_object* v___x_2929_; 
v___x_2927_ = lean_usize_of_nat(v___x_2924_);
v___x_2928_ = ((size_t)0ULL);
v___x_2929_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_singles_2903_, v___x_2927_, v___x_2928_, v_val_2923_, v___y_2905_, v___y_2906_);
return v___x_2929_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___boxed(lean_object* v___x_2930_, lean_object* v_singles_2931_, lean_object* v_tail_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v_res_2935_; 
v_res_2935_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2930_, v_singles_2931_, v_tail_2932_, v___y_2933_, v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec_ref(v_singles_2931_);
lean_dec(v___x_2930_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(lean_object* v_as_2942_, size_t v_sz_2943_, size_t v_i_2944_, lean_object* v_b_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v_a_2949_; lean_object* v_a_2950_; uint8_t v___x_2954_; 
v___x_2954_ = lean_usize_dec_lt(v_i_2944_, v_sz_2943_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; 
v___x_2955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2955_, 0, v_b_2945_);
lean_ctor_set(v___x_2955_, 1, v___y_2947_);
return v___x_2955_;
}
else
{
lean_object* v_fst_2956_; lean_object* v_snd_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3030_; 
v_fst_2956_ = lean_ctor_get(v_b_2945_, 0);
v_snd_2957_ = lean_ctor_get(v_b_2945_, 1);
v_isSharedCheck_3030_ = !lean_is_exclusive(v_b_2945_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_2959_ = v_b_2945_;
v_isShared_2960_ = v_isSharedCheck_3030_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_snd_2957_);
lean_inc(v_fst_2956_);
lean_dec(v_b_2945_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3030_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v_singles_2962_; lean_object* v_____do__lift_2964_; lean_object* v___y_2965_; lean_object* v_____do__lift_2971_; lean_object* v___y_2972_; lean_object* v_a_2975_; lean_object* v___x_2976_; uint8_t v___x_2977_; uint8_t v___y_2979_; 
v___x_2961_ = lean_unsigned_to_nat(0u);
v_singles_2962_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_a_2975_ = lean_array_uget_borrowed(v_as_2942_, v_i_2944_);
v___x_2976_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
lean_inc(v_a_2975_);
v___x_2977_ = l_Lean_Syntax_isOfKind(v_a_2975_, v___x_2976_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2998_; uint8_t v___x_2999_; 
lean_del_object(v___x_2959_);
v___x_2998_ = lean_array_get_size(v_snd_2957_);
v___x_2999_ = lean_nat_dec_eq(v___x_2998_, v___x_2961_);
if (v___x_2999_ == 0)
{
v___y_2979_ = v___x_2977_;
goto v___jp_2978_;
}
else
{
if (lean_obj_tag(v_fst_2956_) == 0)
{
lean_dec(v_snd_2957_);
lean_inc(v_a_2975_);
v_____do__lift_2971_ = v_a_2975_;
v___y_2972_ = v___y_2947_;
goto v___jp_2970_;
}
else
{
v___y_2979_ = v___x_2977_;
goto v___jp_2978_;
}
}
}
else
{
lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; uint8_t v___y_3004_; 
v___x_3000_ = lean_unsigned_to_nat(1u);
v___x_3001_ = l_Lean_Syntax_getArg(v_a_2975_, v___x_3000_);
lean_inc(v___x_3001_);
v___x_3002_ = l_Lean_Syntax_matchesNull(v___x_3001_, v___x_3000_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
lean_dec(v___x_3001_);
v___x_3023_ = lean_array_get_size(v_snd_2957_);
v___x_3024_ = lean_nat_dec_eq(v___x_3023_, v___x_2961_);
if (v___x_3024_ == 0)
{
v___y_3004_ = v___x_3002_;
goto v___jp_3003_;
}
else
{
if (lean_obj_tag(v_fst_2956_) == 0)
{
v___y_3004_ = v___x_2977_;
goto v___jp_3003_;
}
else
{
v___y_3004_ = v___x_3002_;
goto v___jp_3003_;
}
}
}
else
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
lean_del_object(v___x_2959_);
v___x_3025_ = l_Lean_Syntax_getArg(v___x_3001_, v___x_2961_);
lean_dec(v___x_3001_);
v___x_3026_ = lean_mk_empty_array_with_capacity(v___x_3000_);
v___x_3027_ = lean_array_push(v___x_3026_, v___x_3025_);
v___x_3028_ = l_Array_append___redArg(v___x_3027_, v_snd_2957_);
lean_dec(v_snd_2957_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v_fst_2956_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
v_a_2949_ = v___x_3029_;
v_a_2950_ = v___y_2947_;
goto v___jp_2948_;
}
v___jp_3003_:
{
if (v___y_3004_ == 0)
{
lean_object* v___x_3005_; 
v___x_3005_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2961_, v_snd_2957_, v_fst_2956_, v___y_2946_, v___y_2947_);
lean_dec(v_snd_2957_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v_a_3007_; lean_object* v_ref_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
v_a_3007_ = lean_ctor_get(v___x_3005_, 1);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3005_, 2);
v_ref_3008_ = lean_ctor_get(v___y_2946_, 5);
v___x_3009_ = l_Lean_SourceInfo_fromRef(v_ref_3008_, v___x_3002_);
v___x_3010_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_3011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_3009_);
v___x_3012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3009_);
lean_ctor_set(v___x_3012_, 1, v___x_3011_);
lean_inc(v_a_2975_);
v___x_3013_ = l_Lean_Syntax_node3(v___x_3009_, v___x_3010_, v_a_2975_, v___x_3012_, v_a_3006_);
v_____do__lift_2964_ = v___x_3013_;
v___y_2965_ = v_a_3007_;
goto v___jp_2963_;
}
else
{
lean_object* v_a_3014_; lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_del_object(v___x_2959_);
v_a_3014_ = lean_ctor_get(v___x_3005_, 0);
v_a_3015_ = lean_ctor_get(v___x_3005_, 1);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3005_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_inc(v_a_3014_);
lean_dec(v___x_3005_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3014_);
lean_ctor_set(v_reuseFailAlloc_3021_, 1, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
else
{
lean_dec(v_snd_2957_);
lean_dec(v_fst_2956_);
lean_inc(v_a_2975_);
v_____do__lift_2964_ = v_a_2975_;
v___y_2965_ = v___y_2947_;
goto v___jp_2963_;
}
}
}
v___jp_2963_:
{
lean_object* v___x_2966_; lean_object* v___x_2968_; 
v___x_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2966_, 0, v_____do__lift_2964_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v_singles_2962_);
lean_ctor_set(v___x_2959_, 0, v___x_2966_);
v___x_2968_ = v___x_2959_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2966_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_singles_2962_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
v_a_2949_ = v___x_2968_;
v_a_2950_ = v___y_2965_;
goto v___jp_2948_;
}
}
v___jp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2973_, 0, v_____do__lift_2971_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v_singles_2962_);
v_a_2949_ = v___x_2974_;
v_a_2950_ = v___y_2972_;
goto v___jp_2948_;
}
v___jp_2978_:
{
if (v___y_2979_ == 0)
{
lean_object* v___x_2980_; 
v___x_2980_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2961_, v_snd_2957_, v_fst_2956_, v___y_2946_, v___y_2947_);
lean_dec(v_snd_2957_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v_a_2982_; lean_object* v_ref_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
v_a_2982_ = lean_ctor_get(v___x_2980_, 1);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2980_, 2);
v_ref_2983_ = lean_ctor_get(v___y_2946_, 5);
v___x_2984_ = l_Lean_SourceInfo_fromRef(v_ref_2983_, v___x_2977_);
v___x_2985_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_2986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_2984_);
v___x_2987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2984_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
lean_inc(v_a_2975_);
v___x_2988_ = l_Lean_Syntax_node3(v___x_2984_, v___x_2985_, v_a_2975_, v___x_2987_, v_a_2981_);
v_____do__lift_2971_ = v___x_2988_;
v___y_2972_ = v_a_2982_;
goto v___jp_2970_;
}
else
{
lean_object* v_a_2989_; lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
v_a_2989_ = lean_ctor_get(v___x_2980_, 0);
v_a_2990_ = lean_ctor_get(v___x_2980_, 1);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2980_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_inc(v_a_2989_);
lean_dec(v___x_2980_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2989_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v_a_2990_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
else
{
lean_dec(v_snd_2957_);
lean_dec(v_fst_2956_);
lean_inc(v_a_2975_);
v_____do__lift_2971_ = v_a_2975_;
v___y_2972_ = v___y_2947_;
goto v___jp_2970_;
}
}
}
}
v___jp_2948_:
{
size_t v___x_2951_; size_t v___x_2952_; 
v___x_2951_ = ((size_t)1ULL);
v___x_2952_ = lean_usize_add(v_i_2944_, v___x_2951_);
v_i_2944_ = v___x_2952_;
v_b_2945_ = v_a_2949_;
v___y_2947_ = v_a_2950_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___boxed(lean_object* v_as_3031_, lean_object* v_sz_3032_, lean_object* v_i_3033_, lean_object* v_b_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
size_t v_sz_boxed_3037_; size_t v_i_boxed_3038_; lean_object* v_res_3039_; 
v_sz_boxed_3037_ = lean_unbox_usize(v_sz_3032_);
lean_dec(v_sz_3032_);
v_i_boxed_3038_ = lean_unbox_usize(v_i_3033_);
lean_dec(v_i_3033_);
v_res_3039_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v_as_3031_, v_sz_boxed_3037_, v_i_boxed_3038_, v_b_3034_, v___y_3035_, v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec_ref(v_as_3031_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists(lean_object* v_parts_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_){
_start:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; size_t v_sz_3049_; size_t v___x_3050_; lean_object* v___x_3051_; 
v___x_3046_ = lean_unsigned_to_nat(0u);
v___x_3047_ = l_Array_reverse___redArg(v_parts_3043_);
v___x_3048_ = ((lean_object*)(l_Lasm_UI_Syntax_concatLists___closed__0));
v_sz_3049_ = lean_array_size(v___x_3047_);
v___x_3050_ = ((size_t)0ULL);
v___x_3051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v___x_3047_, v_sz_3049_, v___x_3050_, v___x_3048_, v_a_3044_, v_a_3045_);
lean_dec_ref(v___x_3047_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v_fst_3053_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
v_fst_3053_ = lean_ctor_get(v_a_3052_, 0);
if (lean_obj_tag(v_fst_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3084_; 
v_a_3054_ = lean_ctor_get(v___x_3051_, 1);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3084_ == 0)
{
lean_object* v_unused_3085_; 
v_unused_3085_ = lean_ctor_get(v___x_3051_, 0);
lean_dec(v_unused_3085_);
v___x_3056_ = v___x_3051_;
v_isShared_3057_ = v_isSharedCheck_3084_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3051_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3084_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v_snd_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3082_; 
v_snd_3058_ = lean_ctor_get(v_a_3052_, 1);
v_isSharedCheck_3082_ = !lean_is_exclusive(v_a_3052_);
if (v_isSharedCheck_3082_ == 0)
{
lean_object* v_unused_3083_; 
v_unused_3083_ = lean_ctor_get(v_a_3052_, 0);
lean_dec(v_unused_3083_);
v___x_3060_ = v_a_3052_;
v_isShared_3061_ = v_isSharedCheck_3082_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_snd_3058_);
lean_dec(v_a_3052_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3082_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v_ref_3062_; uint8_t v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v_ref_3062_ = lean_ctor_get(v_a_3044_, 5);
v___x_3063_ = 0;
v___x_3064_ = l_Lean_SourceInfo_fromRef(v_ref_3062_, v___x_3063_);
v___x_3065_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3066_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc(v___x_3064_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 2);
lean_ctor_set(v___x_3060_, 1, v___x_3066_);
lean_ctor_set(v___x_3060_, 0, v___x_3064_);
v___x_3068_ = v___x_3060_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3069_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3070_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_3071_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_3072_ = l_Lean_Syntax_SepArray_ofElems(v___x_3071_, v_snd_3058_);
lean_dec(v_snd_3058_);
v___x_3073_ = l_Array_append___redArg(v___x_3070_, v___x_3072_);
lean_dec_ref(v___x_3072_);
lean_inc_n(v___x_3064_, 2);
v___x_3074_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3064_);
lean_ctor_set(v___x_3074_, 1, v___x_3069_);
lean_ctor_set(v___x_3074_, 2, v___x_3073_);
v___x_3075_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3076_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3064_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = l_Lean_Syntax_node3(v___x_3064_, v___x_3065_, v___x_3068_, v___x_3074_, v___x_3076_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 0, v___x_3077_);
v___x_3079_ = v___x_3056_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___x_3077_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v_a_3054_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3099_; 
lean_inc_ref(v_fst_3053_);
v_a_3086_ = lean_ctor_get(v___x_3051_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v___x_3051_, 0);
lean_dec(v_unused_3100_);
v___x_3088_ = v___x_3051_;
v_isShared_3089_ = v_isSharedCheck_3099_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3051_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3099_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v_snd_3090_; lean_object* v_val_3091_; lean_object* v___x_3092_; uint8_t v___x_3093_; 
v_snd_3090_ = lean_ctor_get(v_a_3052_, 1);
lean_inc(v_snd_3090_);
lean_dec(v_a_3052_);
v_val_3091_ = lean_ctor_get(v_fst_3053_, 0);
lean_inc(v_val_3091_);
lean_dec_ref_known(v_fst_3053_, 1);
v___x_3092_ = lean_array_get_size(v_snd_3090_);
v___x_3093_ = lean_nat_dec_lt(v___x_3046_, v___x_3092_);
if (v___x_3093_ == 0)
{
lean_object* v___x_3095_; 
lean_dec(v_snd_3090_);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v_val_3091_);
v___x_3095_ = v___x_3088_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_val_3091_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v_a_3086_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
else
{
size_t v___x_3097_; lean_object* v___x_3098_; 
lean_del_object(v___x_3088_);
v___x_3097_ = lean_usize_of_nat(v___x_3092_);
v___x_3098_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_snd_3090_, v___x_3097_, v___x_3050_, v_val_3091_, v_a_3044_, v_a_3086_);
lean_dec(v_snd_3090_);
return v___x_3098_;
}
}
}
}
else
{
lean_object* v_a_3101_; lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
v_a_3101_ = lean_ctor_get(v___x_3051_, 0);
v_a_3102_ = lean_ctor_get(v___x_3051_, 1);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3051_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_inc(v_a_3101_);
lean_dec(v___x_3051_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3101_);
lean_ctor_set(v_reuseFailAlloc_3108_, 1, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists___boxed(lean_object* v_parts_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l_Lasm_UI_Syntax_concatLists(v_parts_3110_, v_a_3111_, v_a_3112_);
lean_dec_ref(v_a_3111_);
return v_res_3113_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__1(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__0));
v___x_3116_ = l_String_toRawSubstring_x27(v___x_3115_);
return v___x_3116_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__10(void){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__9));
v___x_3137_ = l_String_toRawSubstring_x27(v___x_3136_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__18(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__17));
v___x_3157_ = l_String_toRawSubstring_x27(v___x_3156_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm(uint8_t v_x_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_){
_start:
{
switch(v_x_3175_)
{
case 0:
{
lean_object* v_quotContext_3178_; lean_object* v_currMacroScope_3179_; lean_object* v_ref_3180_; uint8_t v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_quotContext_3178_ = lean_ctor_get(v_a_3176_, 1);
v_currMacroScope_3179_ = lean_ctor_get(v_a_3176_, 2);
v_ref_3180_ = lean_ctor_get(v_a_3176_, 5);
v___x_3181_ = 0;
v___x_3182_ = l_Lean_SourceInfo_fromRef(v_ref_3180_, v___x_3181_);
v___x_3183_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__1, &l_Lasm_UI_Syntax_nsTerm___closed__1_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__1);
v___x_3184_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__4));
lean_inc(v_currMacroScope_3179_);
lean_inc(v_quotContext_3178_);
v___x_3185_ = l_Lean_addMacroScope(v_quotContext_3178_, v___x_3184_, v_currMacroScope_3179_);
v___x_3186_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__8));
v___x_3187_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3182_);
lean_ctor_set(v___x_3187_, 1, v___x_3183_);
lean_ctor_set(v___x_3187_, 2, v___x_3185_);
lean_ctor_set(v___x_3187_, 3, v___x_3186_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
lean_ctor_set(v___x_3188_, 1, v_a_3177_);
return v___x_3188_;
}
case 1:
{
lean_object* v_quotContext_3189_; lean_object* v_currMacroScope_3190_; lean_object* v_ref_3191_; uint8_t v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v_quotContext_3189_ = lean_ctor_get(v_a_3176_, 1);
v_currMacroScope_3190_ = lean_ctor_get(v_a_3176_, 2);
v_ref_3191_ = lean_ctor_get(v_a_3176_, 5);
v___x_3192_ = 0;
v___x_3193_ = l_Lean_SourceInfo_fromRef(v_ref_3191_, v___x_3192_);
v___x_3194_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__10, &l_Lasm_UI_Syntax_nsTerm___closed__10_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__10);
v___x_3195_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__12));
lean_inc(v_currMacroScope_3190_);
lean_inc(v_quotContext_3189_);
v___x_3196_ = l_Lean_addMacroScope(v_quotContext_3189_, v___x_3195_, v_currMacroScope_3190_);
v___x_3197_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__16));
v___x_3198_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3193_);
lean_ctor_set(v___x_3198_, 1, v___x_3194_);
lean_ctor_set(v___x_3198_, 2, v___x_3196_);
lean_ctor_set(v___x_3198_, 3, v___x_3197_);
v___x_3199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
lean_ctor_set(v___x_3199_, 1, v_a_3177_);
return v___x_3199_;
}
default: 
{
lean_object* v_quotContext_3200_; lean_object* v_currMacroScope_3201_; lean_object* v_ref_3202_; uint8_t v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v_quotContext_3200_ = lean_ctor_get(v_a_3176_, 1);
v_currMacroScope_3201_ = lean_ctor_get(v_a_3176_, 2);
v_ref_3202_ = lean_ctor_get(v_a_3176_, 5);
v___x_3203_ = 0;
v___x_3204_ = l_Lean_SourceInfo_fromRef(v_ref_3202_, v___x_3203_);
v___x_3205_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__18, &l_Lasm_UI_Syntax_nsTerm___closed__18_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__18);
v___x_3206_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__20));
lean_inc(v_currMacroScope_3201_);
lean_inc(v_quotContext_3200_);
v___x_3207_ = l_Lean_addMacroScope(v_quotContext_3200_, v___x_3206_, v_currMacroScope_3201_);
v___x_3208_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__24));
v___x_3209_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3204_);
lean_ctor_set(v___x_3209_, 1, v___x_3205_);
lean_ctor_set(v___x_3209_, 2, v___x_3207_);
lean_ctor_set(v___x_3209_, 3, v___x_3208_);
v___x_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
lean_ctor_set(v___x_3210_, 1, v_a_3177_);
return v___x_3210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm___boxed(lean_object* v_x_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_){
_start:
{
uint8_t v_x_3972__boxed_3214_; lean_object* v_res_3215_; 
v_x_3972__boxed_3214_ = lean_unbox(v_x_3211_);
v_res_3215_ = l_Lasm_UI_Syntax_nsTerm(v_x_3972__boxed_3214_, v_a_3212_, v_a_3213_);
lean_dec_ref(v_a_3212_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(lean_object* v_as_3217_, size_t v_sz_3218_, size_t v_i_3219_, lean_object* v_b_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_a_3224_; lean_object* v_a_3225_; uint8_t v___x_3229_; 
v___x_3229_ = lean_usize_dec_lt(v_i_3219_, v_sz_3218_);
if (v___x_3229_ == 0)
{
lean_object* v___x_3230_; 
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v_b_3220_);
lean_ctor_set(v___x_3230_, 1, v___y_3222_);
return v___x_3230_;
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3232_; 
v_a_3231_ = lean_array_uget_borrowed(v_as_3217_, v_i_3219_);
lean_inc(v_a_3231_);
v___x_3232_ = l_Lasm_UI_Syntax_expandAttr(v_a_3231_, v___y_3221_, v___y_3222_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v_a_3234_; lean_object* v_fst_3235_; lean_object* v_snd_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3273_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
v_a_3234_ = lean_ctor_get(v___x_3232_, 1);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3232_, 2);
v_fst_3235_ = lean_ctor_get(v_a_3233_, 0);
v_snd_3236_ = lean_ctor_get(v_a_3233_, 1);
v_isSharedCheck_3273_ = !lean_is_exclusive(v_a_3233_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3238_ = v_a_3233_;
v_isShared_3239_ = v_isSharedCheck_3273_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_snd_3236_);
lean_inc(v_fst_3235_);
lean_dec(v_a_3233_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3273_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v_fst_3246_; lean_object* v_snd_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3272_; 
v_fst_3246_ = lean_ctor_get(v_b_3220_, 0);
v_snd_3247_ = lean_ctor_get(v_b_3220_, 1);
v_isSharedCheck_3272_ = !lean_is_exclusive(v_b_3220_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3249_ = v_b_3220_;
v_isShared_3250_ = v_isSharedCheck_3272_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_snd_3247_);
lean_inc(v_fst_3246_);
lean_dec(v_b_3220_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3272_;
goto v_resetjp_3248_;
}
v___jp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3239_ == 0)
{
lean_ctor_set(v___x_3238_, 0, v___y_3241_);
v___x_3244_ = v___x_3238_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___y_3241_);
lean_ctor_set(v_reuseFailAlloc_3245_, 1, v_snd_3236_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
v_a_3224_ = v___x_3244_;
v_a_3225_ = v___y_3242_;
goto v___jp_3223_;
}
}
v_resetjp_3248_:
{
lean_object* v_attrTerms_3252_; lean_object* v___y_3253_; lean_object* v___y_3254_; 
if (lean_obj_tag(v_fst_3235_) == 1)
{
lean_object* v_val_3270_; lean_object* v___x_3271_; 
v_val_3270_ = lean_ctor_get(v_fst_3235_, 0);
lean_inc(v_val_3270_);
lean_dec_ref_known(v_fst_3235_, 1);
v___x_3271_ = lean_array_push(v_fst_3246_, v_val_3270_);
v_attrTerms_3252_ = v___x_3271_;
v___y_3253_ = v___y_3221_;
v___y_3254_ = v_a_3234_;
goto v___jp_3251_;
}
else
{
lean_dec(v_fst_3235_);
v_attrTerms_3252_ = v_fst_3246_;
v___y_3253_ = v___y_3221_;
v___y_3254_ = v_a_3234_;
goto v___jp_3251_;
}
v___jp_3251_:
{
if (lean_obj_tag(v_snd_3236_) == 1)
{
lean_del_object(v___x_3249_);
if (lean_obj_tag(v_snd_3247_) == 0)
{
v___y_3241_ = v_attrTerms_3252_;
v___y_3242_ = v___y_3254_;
goto v___jp_3240_;
}
else
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
lean_dec_ref_known(v_snd_3247_, 1);
v___x_3255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0));
v___x_3256_ = l_Lean_Macro_throwErrorAt___redArg(v_a_3231_, v___x_3255_, v___y_3253_, v___y_3254_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 1);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 2);
v___y_3241_ = v_attrTerms_3252_;
v___y_3242_ = v_a_3257_;
goto v___jp_3240_;
}
else
{
lean_object* v_a_3258_; lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec_ref_known(v_snd_3236_, 1);
lean_dec_ref(v_attrTerms_3252_);
lean_del_object(v___x_3238_);
v_a_3258_ = lean_ctor_get(v___x_3256_, 0);
v_a_3259_ = lean_ctor_get(v___x_3256_, 1);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3256_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_inc(v_a_3258_);
lean_dec(v___x_3256_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3258_);
lean_ctor_set(v_reuseFailAlloc_3265_, 1, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
else
{
lean_object* v___x_3268_; 
lean_del_object(v___x_3238_);
lean_dec(v_snd_3236_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v_attrTerms_3252_);
v___x_3268_ = v___x_3249_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_attrTerms_3252_);
lean_ctor_set(v_reuseFailAlloc_3269_, 1, v_snd_3247_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
v_a_3224_ = v___x_3268_;
v_a_3225_ = v___y_3254_;
goto v___jp_3223_;
}
}
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
lean_dec_ref(v_b_3220_);
v_a_3274_ = lean_ctor_get(v___x_3232_, 0);
v_a_3275_ = lean_ctor_get(v___x_3232_, 1);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3232_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_inc(v_a_3274_);
lean_dec(v___x_3232_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3274_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
v___jp_3223_:
{
size_t v___x_3226_; size_t v___x_3227_; 
v___x_3226_ = ((size_t)1ULL);
v___x_3227_ = lean_usize_add(v_i_3219_, v___x_3226_);
v_i_3219_ = v___x_3227_;
v_b_3220_ = v_a_3224_;
v___y_3222_ = v_a_3225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___boxed(lean_object* v_as_3283_, lean_object* v_sz_3284_, lean_object* v_i_3285_, lean_object* v_b_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_){
_start:
{
size_t v_sz_boxed_3289_; size_t v_i_boxed_3290_; lean_object* v_res_3291_; 
v_sz_boxed_3289_ = lean_unbox_usize(v_sz_3284_);
lean_dec(v_sz_3284_);
v_i_boxed_3290_ = lean_unbox_usize(v_i_3285_);
lean_dec(v_i_3285_);
v_res_3291_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v_as_3283_, v_sz_boxed_3289_, v_i_boxed_3290_, v_b_3286_, v___y_3287_, v___y_3288_);
lean_dec_ref(v___y_3287_);
lean_dec_ref(v_as_3283_);
return v_res_3291_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(lean_object* v_s_3292_, lean_object* v_a_3293_, uint8_t v_b_3294_){
_start:
{
lean_object* v_str_3295_; lean_object* v_startInclusive_3296_; lean_object* v_endExclusive_3297_; lean_object* v___x_3298_; uint8_t v_decide_3299_; 
v_str_3295_ = lean_ctor_get(v_s_3292_, 0);
v_startInclusive_3296_ = lean_ctor_get(v_s_3292_, 1);
v_endExclusive_3297_ = lean_ctor_get(v_s_3292_, 2);
v___x_3298_ = lean_nat_sub(v_endExclusive_3297_, v_startInclusive_3296_);
v_decide_3299_ = lean_nat_dec_eq(v_a_3293_, v___x_3298_);
lean_dec(v___x_3298_);
if (v_decide_3299_ == 0)
{
lean_object* v___x_3300_; uint32_t v___x_3301_; uint32_t v___x_3302_; uint8_t v___x_3303_; 
v___x_3300_ = lean_nat_add(v_startInclusive_3296_, v_a_3293_);
lean_dec(v_a_3293_);
v___x_3301_ = lean_string_utf8_get_fast(v_str_3295_, v___x_3300_);
v___x_3302_ = 45;
v___x_3303_ = lean_uint32_dec_eq(v___x_3301_, v___x_3302_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3304_ = lean_string_utf8_next_fast(v_str_3295_, v___x_3300_);
lean_dec(v___x_3300_);
v___x_3305_ = lean_nat_sub(v___x_3304_, v_startInclusive_3296_);
v_a_3293_ = v___x_3305_;
v_b_3294_ = v___x_3303_;
goto _start;
}
else
{
lean_dec(v___x_3300_);
return v___x_3303_;
}
}
else
{
lean_dec(v_a_3293_);
return v_b_3294_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg___boxed(lean_object* v_s_3307_, lean_object* v_a_3308_, lean_object* v_b_3309_){
_start:
{
uint8_t v_b_boxed_3310_; uint8_t v_res_3311_; lean_object* v_r_3312_; 
v_b_boxed_3310_ = lean_unbox(v_b_3309_);
v_res_3311_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3307_, v_a_3308_, v_b_boxed_3310_);
lean_dec_ref(v_s_3307_);
v_r_3312_ = lean_box(v_res_3311_);
return v_r_3312_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(lean_object* v_s_3313_){
_start:
{
lean_object* v_searcher_3314_; uint8_t v___x_3315_; uint8_t v___x_3316_; 
v_searcher_3314_ = lean_unsigned_to_nat(0u);
v___x_3315_ = 0;
v___x_3316_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3313_, v_searcher_3314_, v___x_3315_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2___boxed(lean_object* v_s_3317_){
_start:
{
uint8_t v_res_3318_; lean_object* v_r_3319_; 
v_res_3318_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v_s_3317_);
lean_dec_ref(v_s_3317_);
v_r_3319_ = lean_box(v_res_3318_);
return v_r_3319_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandChild___closed__1(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__0));
v___x_3322_ = l_String_toRawSubstring_x27(v___x_3321_);
return v___x_3322_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__1(void){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__0));
v___x_3337_ = l_String_toRawSubstring_x27(v___x_3336_);
return v___x_3337_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__9(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__8));
v___x_3357_ = l_String_toRawSubstring_x27(v___x_3356_);
return v___x_3357_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__15(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__14));
v___x_3371_ = l_String_toRawSubstring_x27(v___x_3370_);
return v___x_3371_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__21(void){
_start:
{
uint8_t v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = 1;
v___x_3388_ = l_Lasm_UI_Ns_ctorIdx(v___x_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement(uint8_t v_ns_3398_, lean_object* v_e_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_){
_start:
{
lean_object* v___y_3403_; lean_object* v___y_3404_; uint8_t v___y_3405_; lean_object* v___y_3406_; lean_object* v_keyTerm_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3437_; uint8_t v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v_childTerms_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; uint8_t v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; uint8_t v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; uint8_t v___y_3524_; lean_object* v___y_3525_; uint8_t v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; uint8_t v___y_3530_; lean_object* v___x_3531_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; uint8_t v___y_3536_; size_t v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; uint8_t v___y_3543_; lean_object* v___y_3590_; uint8_t v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; uint8_t v___y_3628_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3653_; lean_object* v___y_3654_; uint8_t v___y_3655_; lean_object* v___y_3656_; lean_object* v___y_3657_; uint8_t v___y_3658_; lean_object* v___y_3678_; lean_object* v___y_3679_; uint8_t v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v_fst_3725_; lean_object* v_fst_3726_; lean_object* v_fst_3727_; lean_object* v_val_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v_fst_3753_; lean_object* v_fst_3754_; lean_object* v_fst_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v_____x_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___x_3773_; uint8_t v___x_3774_; 
v___x_3531_ = lean_box(0);
v___x_3773_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__1));
lean_inc(v_e_3399_);
v___x_3774_ = l_Lean_Syntax_isOfKind(v_e_3399_, v___x_3773_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; uint8_t v___x_3776_; 
v___x_3775_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__1));
lean_inc(v_e_3399_);
v___x_3776_ = l_Lean_Syntax_isOfKind(v_e_3399_, v___x_3775_);
if (v___x_3776_ == 0)
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3777_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3778_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3777_, v_a_3400_, v_a_3401_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v_a_3780_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_a_3779_);
v_a_3780_ = lean_ctor_get(v___x_3778_, 1);
lean_inc(v_a_3780_);
lean_dec_ref_known(v___x_3778_, 2);
v_____x_3760_ = v_a_3779_;
v___y_3761_ = v_a_3400_;
v___y_3762_ = v_a_3780_;
goto v___jp_3759_;
}
else
{
lean_object* v_a_3781_; lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_dec(v_e_3399_);
v_a_3781_ = lean_ctor_get(v___x_3778_, 0);
v_a_3782_ = lean_ctor_get(v___x_3778_, 1);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3778_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_inc(v_a_3781_);
lean_dec(v___x_3778_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3781_);
lean_ctor_set(v_reuseFailAlloc_3788_, 1, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
else
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; 
v___x_3790_ = lean_unsigned_to_nat(1u);
v___x_3791_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3790_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3825_; uint8_t v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3791_);
v___x_3826_ = l_Lean_Syntax_isOfKind(v___x_3791_, v___x_3825_);
if (v___x_3826_ == 0)
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
lean_dec(v___x_3791_);
v___x_3827_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3828_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3827_, v_a_3400_, v_a_3401_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v_a_3830_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_a_3829_);
v_a_3830_ = lean_ctor_get(v___x_3828_, 1);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3828_, 2);
v_____x_3760_ = v_a_3829_;
v___y_3761_ = v_a_3400_;
v___y_3762_ = v_a_3830_;
goto v___jp_3759_;
}
else
{
lean_object* v_a_3831_; lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_dec(v_e_3399_);
v_a_3831_ = lean_ctor_get(v___x_3828_, 0);
v_a_3832_ = lean_ctor_get(v___x_3828_, 1);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3828_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_inc(v_a_3831_);
lean_dec(v___x_3828_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3831_);
lean_ctor_set(v_reuseFailAlloc_3838_, 1, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
else
{
goto v___jp_3803_;
}
}
else
{
goto v___jp_3803_;
}
v___jp_3792_:
{
lean_object* v_cs_3796_; lean_object* v_as_3797_; size_t v_sz_3798_; size_t v___x_3799_; lean_object* v___x_3800_; size_t v_sz_3801_; lean_object* v___x_3802_; 
v_cs_3796_ = l_Lean_Syntax_getArgs(v___y_3793_);
lean_dec(v___y_3793_);
v_as_3797_ = l_Lean_Syntax_getArgs(v___y_3794_);
lean_dec(v___y_3794_);
v_sz_3798_ = lean_array_size(v_as_3797_);
v___x_3799_ = ((size_t)0ULL);
v___x_3800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3798_, v___x_3799_, v_as_3797_);
v_sz_3801_ = lean_array_size(v_cs_3796_);
v___x_3802_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3801_, v___x_3799_, v_cs_3796_);
v_fst_3725_ = v___x_3791_;
v_fst_3726_ = v___x_3800_;
v_fst_3727_ = v___x_3802_;
v_val_3728_ = v___y_3795_;
v___y_3729_ = v_a_3400_;
v___y_3730_ = v_a_3401_;
goto v___jp_3724_;
}
v___jp_3803_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3804_ = lean_unsigned_to_nat(2u);
v___x_3805_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3804_);
v___x_3806_ = lean_unsigned_to_nat(4u);
v___x_3807_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3806_);
v___x_3808_ = lean_unsigned_to_nat(6u);
v___x_3809_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3808_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3810_; uint8_t v___x_3811_; 
v___x_3810_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3809_);
v___x_3811_ = l_Lean_Syntax_isOfKind(v___x_3809_, v___x_3810_);
if (v___x_3811_ == 0)
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
lean_dec(v___x_3809_);
lean_dec(v___x_3807_);
lean_dec(v___x_3805_);
lean_dec(v___x_3791_);
v___x_3812_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3813_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3812_, v_a_3400_, v_a_3401_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v_a_3814_; lean_object* v_a_3815_; 
v_a_3814_ = lean_ctor_get(v___x_3813_, 0);
lean_inc(v_a_3814_);
v_a_3815_ = lean_ctor_get(v___x_3813_, 1);
lean_inc(v_a_3815_);
lean_dec_ref_known(v___x_3813_, 2);
v_____x_3760_ = v_a_3814_;
v___y_3761_ = v_a_3400_;
v___y_3762_ = v_a_3815_;
goto v___jp_3759_;
}
else
{
lean_object* v_a_3816_; lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v_e_3399_);
v_a_3816_ = lean_ctor_get(v___x_3813_, 0);
v_a_3817_ = lean_ctor_get(v___x_3813_, 1);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3813_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_inc(v_a_3816_);
lean_dec(v___x_3813_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3816_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
else
{
v___y_3793_ = v___x_3807_;
v___y_3794_ = v___x_3805_;
v___y_3795_ = v___x_3809_;
goto v___jp_3792_;
}
}
else
{
v___y_3793_ = v___x_3807_;
v___y_3794_ = v___x_3805_;
v___y_3795_ = v___x_3809_;
goto v___jp_3792_;
}
}
}
}
else
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; uint8_t v___x_3843_; 
v___x_3840_ = lean_unsigned_to_nat(1u);
v___x_3841_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3840_);
v___x_3842_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3841_);
v___x_3843_ = l_Lean_Syntax_isOfKind(v___x_3841_, v___x_3842_);
if (v___x_3843_ == 0)
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
lean_dec(v___x_3841_);
v___x_3844_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3845_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3844_, v_a_3400_, v_a_3401_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v_a_3847_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
v_a_3847_ = lean_ctor_get(v___x_3845_, 1);
lean_inc(v_a_3847_);
lean_dec_ref_known(v___x_3845_, 2);
v_____x_3760_ = v_a_3846_;
v___y_3761_ = v_a_3400_;
v___y_3762_ = v_a_3847_;
goto v___jp_3759_;
}
else
{
lean_object* v_a_3848_; lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
lean_dec(v_e_3399_);
v_a_3848_ = lean_ctor_get(v___x_3845_, 0);
v_a_3849_ = lean_ctor_get(v___x_3845_, 1);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v___x_3845_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_inc(v_a_3848_);
lean_dec(v___x_3845_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_a_3848_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_a_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
}
else
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v_as_3859_; size_t v_sz_3860_; size_t v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v___x_3857_ = lean_unsigned_to_nat(2u);
v___x_3858_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3857_);
v_as_3859_ = l_Lean_Syntax_getArgs(v___x_3858_);
lean_dec(v___x_3858_);
v_sz_3860_ = lean_array_size(v_as_3859_);
v___x_3861_ = ((size_t)0ULL);
v___x_3862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3860_, v___x_3861_, v_as_3859_);
v___x_3863_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_fst_3753_ = v___x_3841_;
v_fst_3754_ = v___x_3862_;
v_fst_3755_ = v___x_3863_;
v___y_3756_ = v_a_3400_;
v___y_3757_ = v_a_3401_;
goto v___jp_3752_;
}
}
v___jp_3402_:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Lasm_UI_Syntax_nsTerm(v___y_3405_, v___y_3408_, v___y_3409_);
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_object* v_a_3411_; lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3435_; 
v_a_3411_ = lean_ctor_get(v___x_3410_, 0);
v_a_3412_ = lean_ctor_get(v___x_3410_, 1);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3414_ = v___x_3410_;
v_isShared_3415_ = v_isSharedCheck_3435_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_inc(v_a_3411_);
lean_dec(v___x_3410_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3435_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v_quotContext_3416_; lean_object* v_currMacroScope_3417_; lean_object* v_ref_3418_; uint8_t v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3433_; 
v_quotContext_3416_ = lean_ctor_get(v___y_3408_, 1);
v_currMacroScope_3417_ = lean_ctor_get(v___y_3408_, 2);
v_ref_3418_ = lean_ctor_get(v___y_3408_, 5);
v___x_3419_ = 0;
v___x_3420_ = l_Lean_SourceInfo_fromRef(v_ref_3418_, v___x_3419_);
v___x_3421_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3422_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__1, &l_Lasm_UI_Syntax_expandElement___closed__1_once, _init_l_Lasm_UI_Syntax_expandElement___closed__1);
v___x_3423_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__3));
lean_inc(v_currMacroScope_3417_);
lean_inc(v_quotContext_3416_);
v___x_3424_ = l_Lean_addMacroScope(v_quotContext_3416_, v___x_3423_, v_currMacroScope_3417_);
v___x_3425_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__7));
lean_inc_n(v___x_3420_, 2);
v___x_3426_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3420_);
lean_ctor_set(v___x_3426_, 1, v___x_3422_);
lean_ctor_set(v___x_3426_, 2, v___x_3424_);
lean_ctor_set(v___x_3426_, 3, v___x_3425_);
v___x_3427_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3428_ = lean_box(2);
v___x_3429_ = l_Lean_Syntax_mkStrLit(v___y_3403_, v___x_3428_);
v___x_3430_ = l_Lean_Syntax_node5(v___x_3420_, v___x_3427_, v_a_3411_, v___x_3429_, v_keyTerm_3407_, v___y_3404_, v___y_3406_);
v___x_3431_ = l_Lean_Syntax_node2(v___x_3420_, v___x_3421_, v___x_3426_, v___x_3430_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set(v___x_3414_, 0, v___x_3431_);
v___x_3433_ = v___x_3414_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v___x_3431_);
lean_ctor_set(v_reuseFailAlloc_3434_, 1, v_a_3412_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
else
{
lean_dec(v_keyTerm_3407_);
lean_dec(v___y_3406_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
return v___x_3410_;
}
}
v___jp_3436_:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lasm_UI_Syntax_concatLists(v___y_3439_, v___y_3442_, v___y_3443_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; lean_object* v_a_3446_; lean_object* v___x_3447_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
v_a_3446_ = lean_ctor_get(v___x_3444_, 1);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3444_, 2);
v___x_3447_ = l_Lasm_UI_Syntax_concatLists(v_childTerms_3441_, v___y_3442_, v_a_3446_);
if (lean_obj_tag(v___x_3447_) == 0)
{
if (lean_obj_tag(v___y_3440_) == 0)
{
lean_object* v_a_3448_; lean_object* v_a_3449_; lean_object* v_quotContext_3450_; lean_object* v_currMacroScope_3451_; lean_object* v_ref_3452_; uint8_t v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
v_a_3449_ = lean_ctor_get(v___x_3447_, 1);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3447_, 2);
v_quotContext_3450_ = lean_ctor_get(v___y_3442_, 1);
v_currMacroScope_3451_ = lean_ctor_get(v___y_3442_, 2);
v_ref_3452_ = lean_ctor_get(v___y_3442_, 5);
v___x_3453_ = 0;
v___x_3454_ = l_Lean_SourceInfo_fromRef(v_ref_3452_, v___x_3453_);
v___x_3455_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__9, &l_Lasm_UI_Syntax_expandElement___closed__9_once, _init_l_Lasm_UI_Syntax_expandElement___closed__9);
v___x_3456_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__10));
lean_inc(v_currMacroScope_3451_);
lean_inc(v_quotContext_3450_);
v___x_3457_ = l_Lean_addMacroScope(v_quotContext_3450_, v___x_3456_, v_currMacroScope_3451_);
v___x_3458_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__13));
v___x_3459_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3454_);
lean_ctor_set(v___x_3459_, 1, v___x_3455_);
lean_ctor_set(v___x_3459_, 2, v___x_3457_);
lean_ctor_set(v___x_3459_, 3, v___x_3458_);
v___y_3403_ = v___y_3437_;
v___y_3404_ = v_a_3445_;
v___y_3405_ = v___y_3438_;
v___y_3406_ = v_a_3448_;
v_keyTerm_3407_ = v___x_3459_;
v___y_3408_ = v___y_3442_;
v___y_3409_ = v_a_3449_;
goto v___jp_3402_;
}
else
{
lean_object* v_a_3460_; lean_object* v_a_3461_; lean_object* v_val_3462_; lean_object* v_quotContext_3463_; lean_object* v_currMacroScope_3464_; lean_object* v_ref_3465_; uint8_t v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v_a_3460_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3460_);
v_a_3461_ = lean_ctor_get(v___x_3447_, 1);
lean_inc(v_a_3461_);
lean_dec_ref_known(v___x_3447_, 2);
v_val_3462_ = lean_ctor_get(v___y_3440_, 0);
lean_inc(v_val_3462_);
lean_dec_ref_known(v___y_3440_, 1);
v_quotContext_3463_ = lean_ctor_get(v___y_3442_, 1);
v_currMacroScope_3464_ = lean_ctor_get(v___y_3442_, 2);
v_ref_3465_ = lean_ctor_get(v___y_3442_, 5);
v___x_3466_ = 0;
v___x_3467_ = l_Lean_SourceInfo_fromRef(v_ref_3465_, v___x_3466_);
v___x_3468_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3469_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__15, &l_Lasm_UI_Syntax_expandElement___closed__15_once, _init_l_Lasm_UI_Syntax_expandElement___closed__15);
v___x_3470_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__16));
lean_inc(v_currMacroScope_3464_);
lean_inc(v_quotContext_3463_);
v___x_3471_ = l_Lean_addMacroScope(v_quotContext_3463_, v___x_3470_, v_currMacroScope_3464_);
v___x_3472_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__19));
lean_inc_n(v___x_3467_, 2);
v___x_3473_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3467_);
lean_ctor_set(v___x_3473_, 1, v___x_3469_);
lean_ctor_set(v___x_3473_, 2, v___x_3471_);
lean_ctor_set(v___x_3473_, 3, v___x_3472_);
v___x_3474_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3475_ = l_Lean_Syntax_node1(v___x_3467_, v___x_3474_, v_val_3462_);
v___x_3476_ = l_Lean_Syntax_node2(v___x_3467_, v___x_3468_, v___x_3473_, v___x_3475_);
v___y_3403_ = v___y_3437_;
v___y_3404_ = v_a_3445_;
v___y_3405_ = v___y_3438_;
v___y_3406_ = v_a_3460_;
v_keyTerm_3407_ = v___x_3476_;
v___y_3408_ = v___y_3442_;
v___y_3409_ = v_a_3461_;
goto v___jp_3402_;
}
}
else
{
lean_dec(v_a_3445_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3437_);
return v___x_3447_;
}
}
else
{
lean_dec_ref(v_childTerms_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3437_);
return v___x_3444_;
}
}
v___jp_3477_:
{
lean_object* v_quotContext_3488_; lean_object* v_currMacroScope_3489_; lean_object* v_ref_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v_quotContext_3488_ = lean_ctor_get(v___y_3487_, 1);
v_currMacroScope_3489_ = lean_ctor_get(v___y_3487_, 2);
v_ref_3490_ = lean_ctor_get(v___y_3487_, 5);
v___x_3491_ = l_Lean_SourceInfo_fromRef(v_ref_3490_, v___y_3485_);
v___x_3492_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3493_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3491_, 8);
v___x_3494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3491_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
v___x_3495_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3496_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3497_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3498_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4));
v___x_3499_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___lam__3___closed__0));
lean_inc_ref(v___y_3479_);
lean_inc_ref(v___y_3482_);
v___x_3500_ = l_Lean_Name_mkStr4(v___y_3482_, v___y_3479_, v___x_3498_, v___x_3499_);
lean_inc(v_currMacroScope_3489_);
lean_inc_n(v___x_3500_, 2);
lean_inc(v_quotContext_3488_);
v___x_3501_ = l_Lean_addMacroScope(v_quotContext_3488_, v___x_3500_, v_currMacroScope_3489_);
v___x_3502_ = lean_box(0);
v___x_3503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3500_);
lean_ctor_set(v___x_3503_, 1, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3500_);
v___x_3505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
lean_ctor_set(v___x_3505_, 1, v___x_3502_);
v___x_3506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3503_);
lean_ctor_set(v___x_3506_, 1, v___x_3505_);
v___x_3507_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3491_);
lean_ctor_set(v___x_3507_, 1, v___x_3497_);
lean_ctor_set(v___x_3507_, 2, v___x_3501_);
lean_ctor_set(v___x_3507_, 3, v___x_3506_);
v___x_3508_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_3509_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_3510_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3491_);
lean_ctor_set(v___x_3510_, 1, v___x_3509_);
v___x_3511_ = l_Lean_Syntax_node1(v___x_3491_, v___x_3508_, v___x_3510_);
v___x_3512_ = l_Lean_Syntax_node1(v___x_3491_, v___x_3495_, v___x_3511_);
v___x_3513_ = l_Lean_Syntax_node2(v___x_3491_, v___x_3496_, v___x_3507_, v___x_3512_);
v___x_3514_ = l_Lean_Syntax_node1(v___x_3491_, v___x_3495_, v___x_3513_);
v___x_3515_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3491_);
lean_ctor_set(v___x_3516_, 1, v___x_3515_);
v___x_3517_ = l_Lean_Syntax_node3(v___x_3491_, v___x_3492_, v___x_3494_, v___x_3514_, v___x_3516_);
v___x_3518_ = lean_array_push(v___y_3483_, v___x_3517_);
v___y_3437_ = v___y_3480_;
v___y_3438_ = v___y_3481_;
v___y_3439_ = v___y_3484_;
v___y_3440_ = v___y_3486_;
v_childTerms_3441_ = v___x_3518_;
v___y_3442_ = v___y_3487_;
v___y_3443_ = v___y_3478_;
goto v___jp_3436_;
}
v___jp_3519_:
{
if (v___y_3530_ == 0)
{
v___y_3437_ = v___y_3522_;
v___y_3438_ = v___y_3524_;
v___y_3439_ = v___y_3527_;
v___y_3440_ = v___y_3528_;
v_childTerms_3441_ = v___y_3525_;
v___y_3442_ = v___y_3529_;
v___y_3443_ = v___y_3520_;
goto v___jp_3436_;
}
else
{
v___y_3478_ = v___y_3520_;
v___y_3479_ = v___y_3521_;
v___y_3480_ = v___y_3522_;
v___y_3481_ = v___y_3524_;
v___y_3482_ = v___y_3523_;
v___y_3483_ = v___y_3525_;
v___y_3484_ = v___y_3527_;
v___y_3485_ = v___y_3526_;
v___y_3486_ = v___y_3528_;
v___y_3487_ = v___y_3529_;
goto v___jp_3477_;
}
}
v___jp_3532_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; size_t v_sz_3547_; lean_object* v___x_3548_; 
v___x_3544_ = lean_unsigned_to_nat(3u);
v___x_3545_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3544_);
lean_dec(v_e_3399_);
lean_inc_ref(v___y_3538_);
v___x_3546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___y_3538_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v_sz_3547_ = lean_array_size(v___y_3542_);
v___x_3548_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_3543_, v___y_3542_, v_sz_3547_, v___y_3537_, v___x_3546_, v___y_3541_, v___y_3534_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v_a_3550_; lean_object* v_fst_3551_; lean_object* v_snd_3552_; lean_object* v___x_3553_; uint8_t v___x_3554_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
v_a_3550_ = lean_ctor_get(v___x_3548_, 1);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3548_, 2);
v_fst_3551_ = lean_ctor_get(v_a_3549_, 0);
lean_inc(v_fst_3551_);
v_snd_3552_ = lean_ctor_get(v_a_3549_, 1);
lean_inc(v_snd_3552_);
lean_dec(v_a_3549_);
v___x_3553_ = lean_array_get_size(v___y_3542_);
v___x_3554_ = lean_nat_dec_eq(v___x_3553_, v___y_3535_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v___x_3555_ = lean_unsigned_to_nat(1u);
v___x_3556_ = lean_nat_sub(v___x_3553_, v___x_3555_);
v___x_3557_ = lean_array_get(v___x_3531_, v___y_3542_, v___x_3556_);
lean_dec(v___x_3556_);
lean_dec_ref(v___y_3542_);
v___x_3558_ = l_Lean_Syntax_getArg(v___x_3557_, v___y_3535_);
lean_dec(v___x_3557_);
v___x_3559_ = l_Lean_Syntax_getKind(v___x_3558_);
v___x_3560_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__4));
v___x_3561_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__5));
v___x_3562_ = ((lean_object*)(l_Lasm_UI_Syntax_childText___closed__1));
v___x_3563_ = lean_name_eq(v___x_3559_, v___x_3562_);
lean_dec(v___x_3559_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; 
v___x_3564_ = l_Lean_Syntax_getTailInfo(v_snd_3552_);
lean_dec(v_snd_3552_);
if (lean_obj_tag(v___x_3564_) == 0)
{
lean_object* v_trailing_3565_; lean_object* v_str_3566_; lean_object* v_startPos_3567_; lean_object* v_stopPos_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3579_; 
v_trailing_3565_ = lean_ctor_get(v___x_3564_, 2);
lean_inc_ref(v_trailing_3565_);
lean_dec_ref_known(v___x_3564_, 4);
v_str_3566_ = lean_ctor_get(v_trailing_3565_, 0);
v_startPos_3567_ = lean_ctor_get(v_trailing_3565_, 1);
v_stopPos_3568_ = lean_ctor_get(v_trailing_3565_, 2);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_trailing_3565_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3570_ = v_trailing_3565_;
v_isShared_3571_ = v_isSharedCheck_3579_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_stopPos_3568_);
lean_inc(v_startPos_3567_);
lean_inc(v_str_3566_);
lean_dec(v_trailing_3565_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3579_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; 
v___x_3572_ = lean_string_utf8_extract(v_str_3566_, v_startPos_3567_, v_stopPos_3568_);
lean_dec(v_stopPos_3568_);
lean_dec(v_startPos_3567_);
lean_dec_ref(v_str_3566_);
v___x_3573_ = lean_string_utf8_byte_size(v___x_3572_);
v___x_3574_ = lean_nat_dec_eq(v___x_3573_, v___y_3535_);
if (v___x_3574_ == 0)
{
lean_object* v___x_3576_; 
if (v_isShared_3571_ == 0)
{
lean_ctor_set(v___x_3570_, 2, v___x_3573_);
lean_ctor_set(v___x_3570_, 1, v___y_3535_);
lean_ctor_set(v___x_3570_, 0, v___x_3572_);
v___x_3576_ = v___x_3570_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3572_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v___y_3535_);
lean_ctor_set(v_reuseFailAlloc_3578_, 2, v___x_3573_);
v___x_3576_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
uint8_t v___x_3577_; 
v___x_3577_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_3576_);
lean_dec_ref(v___x_3576_);
if (v___x_3577_ == 0)
{
v___y_3478_ = v_a_3550_;
v___y_3479_ = v___x_3561_;
v___y_3480_ = v___y_3533_;
v___y_3481_ = v___y_3536_;
v___y_3482_ = v___x_3560_;
v___y_3483_ = v_fst_3551_;
v___y_3484_ = v___y_3539_;
v___y_3485_ = v___x_3563_;
v___y_3486_ = v___y_3540_;
v___y_3487_ = v___y_3541_;
goto v___jp_3477_;
}
else
{
v___y_3437_ = v___y_3533_;
v___y_3438_ = v___y_3536_;
v___y_3439_ = v___y_3539_;
v___y_3440_ = v___y_3540_;
v_childTerms_3441_ = v_fst_3551_;
v___y_3442_ = v___y_3541_;
v___y_3443_ = v_a_3550_;
goto v___jp_3436_;
}
}
}
else
{
lean_dec_ref(v___x_3572_);
lean_del_object(v___x_3570_);
lean_dec(v___y_3535_);
v___y_3520_ = v_a_3550_;
v___y_3521_ = v___x_3561_;
v___y_3522_ = v___y_3533_;
v___y_3523_ = v___x_3560_;
v___y_3524_ = v___y_3536_;
v___y_3525_ = v_fst_3551_;
v___y_3526_ = v___x_3563_;
v___y_3527_ = v___y_3539_;
v___y_3528_ = v___y_3540_;
v___y_3529_ = v___y_3541_;
v___y_3530_ = v___x_3563_;
goto v___jp_3519_;
}
}
}
else
{
lean_dec(v___x_3564_);
lean_dec(v___y_3535_);
v___y_3520_ = v_a_3550_;
v___y_3521_ = v___x_3561_;
v___y_3522_ = v___y_3533_;
v___y_3523_ = v___x_3560_;
v___y_3524_ = v___y_3536_;
v___y_3525_ = v_fst_3551_;
v___y_3526_ = v___x_3563_;
v___y_3527_ = v___y_3539_;
v___y_3528_ = v___y_3540_;
v___y_3529_ = v___y_3541_;
v___y_3530_ = v___x_3563_;
goto v___jp_3519_;
}
}
else
{
lean_dec(v_snd_3552_);
lean_dec(v___y_3535_);
v___y_3437_ = v___y_3533_;
v___y_3438_ = v___y_3536_;
v___y_3439_ = v___y_3539_;
v___y_3440_ = v___y_3540_;
v_childTerms_3441_ = v_fst_3551_;
v___y_3442_ = v___y_3541_;
v___y_3443_ = v_a_3550_;
goto v___jp_3436_;
}
}
else
{
lean_dec(v_snd_3552_);
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3535_);
v___y_3437_ = v___y_3533_;
v___y_3438_ = v___y_3536_;
v___y_3439_ = v___y_3539_;
v___y_3440_ = v___y_3540_;
v_childTerms_3441_ = v_fst_3551_;
v___y_3442_ = v___y_3541_;
v___y_3443_ = v_a_3550_;
goto v___jp_3436_;
}
}
else
{
lean_object* v_a_3580_; lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3540_);
lean_dec(v___y_3539_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3533_);
v_a_3580_ = lean_ctor_get(v___x_3548_, 0);
v_a_3581_ = lean_ctor_get(v___x_3548_, 1);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3548_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_inc(v_a_3580_);
lean_dec(v___x_3548_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3580_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
v___jp_3589_:
{
lean_object* v___x_3596_; lean_object* v_attrTerms_3597_; lean_object* v___x_3598_; size_t v_sz_3599_; size_t v___x_3600_; lean_object* v___x_3601_; 
v___x_3596_ = lean_unsigned_to_nat(0u);
v_attrTerms_3597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v___x_3598_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__20));
v_sz_3599_ = lean_array_size(v___y_3593_);
v___x_3600_ = ((size_t)0ULL);
v___x_3601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v___y_3593_, v_sz_3599_, v___x_3600_, v___x_3598_, v___y_3594_, v___y_3595_);
lean_dec_ref(v___y_3593_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v_a_3602_; lean_object* v_a_3603_; lean_object* v_fst_3604_; lean_object* v_snd_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v_a_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc(v_a_3602_);
v_a_3603_ = lean_ctor_get(v___x_3601_, 1);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3601_, 2);
v_fst_3604_ = lean_ctor_get(v_a_3602_, 0);
lean_inc(v_fst_3604_);
v_snd_3605_ = lean_ctor_get(v_a_3602_, 1);
lean_inc(v_snd_3605_);
lean_dec(v_a_3602_);
v___x_3606_ = l_Lasm_UI_Ns_ctorIdx(v___y_3591_);
v___x_3607_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__21, &l_Lasm_UI_Syntax_expandElement___closed__21_once, _init_l_Lasm_UI_Syntax_expandElement___closed__21);
v___x_3608_ = lean_nat_dec_eq(v___x_3606_, v___x_3607_);
lean_dec(v___x_3606_);
if (v___x_3608_ == 0)
{
v___y_3533_ = v___y_3590_;
v___y_3534_ = v_a_3603_;
v___y_3535_ = v___x_3596_;
v___y_3536_ = v___y_3591_;
v___y_3537_ = v___x_3600_;
v___y_3538_ = v_attrTerms_3597_;
v___y_3539_ = v_fst_3604_;
v___y_3540_ = v_snd_3605_;
v___y_3541_ = v___y_3594_;
v___y_3542_ = v___y_3592_;
v___y_3543_ = v___y_3591_;
goto v___jp_3532_;
}
else
{
lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3609_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__22));
v___x_3610_ = lean_string_dec_eq(v___y_3590_, v___x_3609_);
if (v___x_3610_ == 0)
{
v___y_3533_ = v___y_3590_;
v___y_3534_ = v_a_3603_;
v___y_3535_ = v___x_3596_;
v___y_3536_ = v___y_3591_;
v___y_3537_ = v___x_3600_;
v___y_3538_ = v_attrTerms_3597_;
v___y_3539_ = v_fst_3604_;
v___y_3540_ = v_snd_3605_;
v___y_3541_ = v___y_3594_;
v___y_3542_ = v___y_3592_;
v___y_3543_ = v___y_3591_;
goto v___jp_3532_;
}
else
{
uint8_t v___x_3611_; 
v___x_3611_ = 0;
v___y_3533_ = v___y_3590_;
v___y_3534_ = v_a_3603_;
v___y_3535_ = v___x_3596_;
v___y_3536_ = v___y_3591_;
v___y_3537_ = v___x_3600_;
v___y_3538_ = v_attrTerms_3597_;
v___y_3539_ = v_fst_3604_;
v___y_3540_ = v_snd_3605_;
v___y_3541_ = v___y_3594_;
v___y_3542_ = v___y_3592_;
v___y_3543_ = v___x_3611_;
goto v___jp_3532_;
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec_ref(v___y_3592_);
lean_dec_ref(v___y_3590_);
lean_dec(v_e_3399_);
v_a_3612_ = lean_ctor_get(v___x_3601_, 0);
v_a_3613_ = lean_ctor_get(v___x_3601_, 1);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3601_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3601_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_inc(v_a_3612_);
lean_dec(v___x_3601_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3612_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
v___jp_3621_:
{
lean_object* v___x_3629_; uint8_t v___x_3630_; 
v___x_3629_ = l_Lasm_UI_Svg_tags;
v___x_3630_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3623_, v___x_3629_);
if (v___x_3630_ == 0)
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; 
v___x_3631_ = lean_unsigned_to_nat(0u);
v___x_3632_ = lean_string_utf8_byte_size(v___y_3623_);
lean_inc_ref(v___y_3623_);
v___x_3633_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3633_, 0, v___y_3623_);
lean_ctor_set(v___x_3633_, 1, v___x_3631_);
lean_ctor_set(v___x_3633_, 2, v___x_3632_);
v___x_3634_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3633_);
lean_dec_ref_known(v___x_3633_, 3);
if (v___x_3634_ == 0)
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3635_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__23));
v___x_3636_ = lean_string_append(v___x_3635_, v___y_3623_);
v___x_3637_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3638_ = lean_string_append(v___x_3636_, v___x_3637_);
v___x_3639_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3624_, v___x_3638_, v___y_3622_, v___y_3626_);
lean_dec(v___y_3624_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 1);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 2);
v___y_3590_ = v___y_3623_;
v___y_3591_ = v___y_3628_;
v___y_3592_ = v___y_3625_;
v___y_3593_ = v___y_3627_;
v___y_3594_ = v___y_3622_;
v___y_3595_ = v_a_3640_;
goto v___jp_3589_;
}
else
{
lean_object* v_a_3641_; lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_dec_ref(v___y_3627_);
lean_dec_ref(v___y_3625_);
lean_dec_ref(v___y_3623_);
lean_dec(v_e_3399_);
v_a_3641_ = lean_ctor_get(v___x_3639_, 0);
v_a_3642_ = lean_ctor_get(v___x_3639_, 1);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3639_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_inc(v_a_3641_);
lean_dec(v___x_3639_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3641_);
lean_ctor_set(v_reuseFailAlloc_3648_, 1, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
else
{
lean_dec(v___y_3624_);
v___y_3590_ = v___y_3623_;
v___y_3591_ = v___y_3628_;
v___y_3592_ = v___y_3625_;
v___y_3593_ = v___y_3627_;
v___y_3594_ = v___y_3622_;
v___y_3595_ = v___y_3626_;
goto v___jp_3589_;
}
}
else
{
lean_dec(v___y_3624_);
v___y_3590_ = v___y_3623_;
v___y_3591_ = v___y_3628_;
v___y_3592_ = v___y_3625_;
v___y_3593_ = v___y_3627_;
v___y_3594_ = v___y_3622_;
v___y_3595_ = v___y_3626_;
goto v___jp_3589_;
}
}
v___jp_3650_:
{
if (v___y_3658_ == 0)
{
lean_dec(v___y_3654_);
v___y_3590_ = v___y_3652_;
v___y_3591_ = v___y_3655_;
v___y_3592_ = v___y_3656_;
v___y_3593_ = v___y_3657_;
v___y_3594_ = v___y_3653_;
v___y_3595_ = v___y_3651_;
goto v___jp_3589_;
}
else
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3659_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v___x_3660_ = lean_string_append(v___x_3659_, v___y_3652_);
v___x_3661_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__24));
v___x_3662_ = lean_string_append(v___x_3660_, v___x_3661_);
v___x_3663_ = lean_string_append(v___x_3662_, v___y_3652_);
v___x_3664_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__25));
v___x_3665_ = lean_string_append(v___x_3663_, v___x_3664_);
v___x_3666_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3654_, v___x_3665_, v___y_3653_, v___y_3651_);
lean_dec(v___y_3654_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 1);
lean_inc(v_a_3667_);
lean_dec_ref_known(v___x_3666_, 2);
v___y_3590_ = v___y_3652_;
v___y_3591_ = v___y_3655_;
v___y_3592_ = v___y_3656_;
v___y_3593_ = v___y_3657_;
v___y_3594_ = v___y_3653_;
v___y_3595_ = v_a_3667_;
goto v___jp_3589_;
}
else
{
lean_object* v_a_3668_; lean_object* v_a_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3676_; 
lean_dec_ref(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec_ref(v___y_3652_);
lean_dec(v_e_3399_);
v_a_3668_ = lean_ctor_get(v___x_3666_, 0);
v_a_3669_ = lean_ctor_get(v___x_3666_, 1);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3671_ = v___x_3666_;
v_isShared_3672_ = v_isSharedCheck_3676_;
goto v_resetjp_3670_;
}
else
{
lean_inc(v_a_3669_);
lean_inc(v_a_3668_);
lean_dec(v___x_3666_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3676_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v___x_3674_; 
if (v_isShared_3672_ == 0)
{
v___x_3674_ = v___x_3671_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_a_3668_);
lean_ctor_set(v_reuseFailAlloc_3675_, 1, v_a_3669_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
}
}
v___jp_3677_:
{
lean_object* v___x_3685_; uint8_t v___x_3686_; 
v___x_3685_ = l_Lasm_UI_voidTags;
v___x_3686_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3678_, v___x_3685_);
if (v___x_3686_ == 0)
{
v___y_3651_ = v___y_3684_;
v___y_3652_ = v___y_3678_;
v___y_3653_ = v___y_3683_;
v___y_3654_ = v___y_3679_;
v___y_3655_ = v___y_3680_;
v___y_3656_ = v___y_3681_;
v___y_3657_ = v___y_3682_;
v___y_3658_ = v___x_3686_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3687_; lean_object* v___x_3688_; uint8_t v___x_3689_; 
v___x_3687_ = lean_array_get_size(v___y_3681_);
v___x_3688_ = lean_unsigned_to_nat(0u);
v___x_3689_ = lean_nat_dec_eq(v___x_3687_, v___x_3688_);
if (v___x_3689_ == 0)
{
v___y_3651_ = v___y_3684_;
v___y_3652_ = v___y_3678_;
v___y_3653_ = v___y_3683_;
v___y_3654_ = v___y_3679_;
v___y_3655_ = v___y_3680_;
v___y_3656_ = v___y_3681_;
v___y_3657_ = v___y_3682_;
v___y_3658_ = v___x_3686_;
goto v___jp_3650_;
}
else
{
lean_dec(v___y_3679_);
v___y_3590_ = v___y_3678_;
v___y_3591_ = v___y_3680_;
v___y_3592_ = v___y_3681_;
v___y_3593_ = v___y_3682_;
v___y_3594_ = v___y_3683_;
v___y_3595_ = v___y_3684_;
goto v___jp_3589_;
}
}
}
v___jp_3690_:
{
lean_object* v___x_3697_; uint8_t v___x_3698_; 
v___x_3697_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__11));
v___x_3698_ = lean_string_dec_eq(v___y_3691_, v___x_3697_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; uint8_t v___x_3700_; 
v___x_3699_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__26));
v___x_3700_ = lean_string_dec_eq(v___y_3691_, v___x_3699_);
if (v___x_3700_ == 0)
{
switch(v_ns_3398_)
{
case 0:
{
lean_object* v___x_3701_; uint8_t v___x_3702_; 
v___x_3701_ = l_Lasm_UI_htmlTags;
v___x_3702_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3691_, v___x_3701_);
if (v___x_3702_ == 0)
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; uint8_t v___x_3706_; 
v___x_3703_ = lean_unsigned_to_nat(0u);
v___x_3704_ = lean_string_utf8_byte_size(v___y_3691_);
lean_inc_ref(v___y_3691_);
v___x_3705_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3705_, 0, v___y_3691_);
lean_ctor_set(v___x_3705_, 1, v___x_3703_);
lean_ctor_set(v___x_3705_, 2, v___x_3704_);
v___x_3706_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3705_);
lean_dec_ref_known(v___x_3705_, 3);
if (v___x_3706_ == 0)
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3707_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__27));
v___x_3708_ = lean_string_append(v___x_3707_, v___y_3691_);
v___x_3709_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__28));
v___x_3710_ = lean_string_append(v___x_3708_, v___x_3709_);
v___x_3711_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3692_, v___x_3710_, v___y_3695_, v___y_3696_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 1);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3711_, 2);
v___y_3678_ = v___y_3691_;
v___y_3679_ = v___y_3692_;
v___y_3680_ = v_ns_3398_;
v___y_3681_ = v___y_3693_;
v___y_3682_ = v___y_3694_;
v___y_3683_ = v___y_3695_;
v___y_3684_ = v_a_3712_;
goto v___jp_3677_;
}
else
{
lean_object* v_a_3713_; lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
lean_dec_ref(v___y_3694_);
lean_dec_ref(v___y_3693_);
lean_dec(v___y_3692_);
lean_dec_ref(v___y_3691_);
lean_dec(v_e_3399_);
v_a_3713_ = lean_ctor_get(v___x_3711_, 0);
v_a_3714_ = lean_ctor_get(v___x_3711_, 1);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3711_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_inc(v_a_3713_);
lean_dec(v___x_3711_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3713_);
lean_ctor_set(v_reuseFailAlloc_3720_, 1, v_a_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
}
else
{
v___y_3678_ = v___y_3691_;
v___y_3679_ = v___y_3692_;
v___y_3680_ = v_ns_3398_;
v___y_3681_ = v___y_3693_;
v___y_3682_ = v___y_3694_;
v___y_3683_ = v___y_3695_;
v___y_3684_ = v___y_3696_;
goto v___jp_3677_;
}
}
else
{
v___y_3678_ = v___y_3691_;
v___y_3679_ = v___y_3692_;
v___y_3680_ = v_ns_3398_;
v___y_3681_ = v___y_3693_;
v___y_3682_ = v___y_3694_;
v___y_3683_ = v___y_3695_;
v___y_3684_ = v___y_3696_;
goto v___jp_3677_;
}
}
case 1:
{
v___y_3622_ = v___y_3695_;
v___y_3623_ = v___y_3691_;
v___y_3624_ = v___y_3692_;
v___y_3625_ = v___y_3693_;
v___y_3626_ = v___y_3696_;
v___y_3627_ = v___y_3694_;
v___y_3628_ = v_ns_3398_;
goto v___jp_3621_;
}
default: 
{
lean_dec(v___y_3692_);
v___y_3590_ = v___y_3691_;
v___y_3591_ = v_ns_3398_;
v___y_3592_ = v___y_3693_;
v___y_3593_ = v___y_3694_;
v___y_3594_ = v___y_3695_;
v___y_3595_ = v___y_3696_;
goto v___jp_3589_;
}
}
}
else
{
uint8_t v___x_3722_; 
lean_dec(v___y_3692_);
v___x_3722_ = 2;
v___y_3590_ = v___y_3691_;
v___y_3591_ = v___x_3722_;
v___y_3592_ = v___y_3693_;
v___y_3593_ = v___y_3694_;
v___y_3594_ = v___y_3695_;
v___y_3595_ = v___y_3696_;
goto v___jp_3589_;
}
}
else
{
uint8_t v___x_3723_; 
v___x_3723_ = 1;
v___y_3622_ = v___y_3695_;
v___y_3623_ = v___y_3691_;
v___y_3624_ = v___y_3692_;
v___y_3625_ = v___y_3693_;
v___y_3626_ = v___y_3696_;
v___y_3627_ = v___y_3694_;
v___y_3628_ = v___x_3723_;
goto v___jp_3621_;
}
}
v___jp_3724_:
{
lean_object* v_tag_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; 
v_tag_3731_ = l_Lasm_UI_Syntax_nameOf(v_fst_3725_);
v___x_3732_ = l_Lasm_UI_Syntax_nameOf(v_val_3728_);
v___x_3733_ = lean_string_dec_eq(v___x_3732_, v_tag_3731_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3734_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__7));
v___x_3735_ = lean_string_append(v___x_3734_, v___x_3732_);
lean_dec_ref(v___x_3732_);
v___x_3736_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3737_ = lean_string_append(v___x_3735_, v___x_3736_);
v___x_3738_ = lean_string_append(v___x_3737_, v_tag_3731_);
v___x_3739_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3740_ = lean_string_append(v___x_3738_, v___x_3739_);
v___x_3741_ = l_Lean_Macro_throwErrorAt___redArg(v_val_3728_, v___x_3740_, v___y_3729_, v___y_3730_);
lean_dec(v_val_3728_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 1);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3741_, 2);
v___y_3691_ = v_tag_3731_;
v___y_3692_ = v_fst_3725_;
v___y_3693_ = v_fst_3727_;
v___y_3694_ = v_fst_3726_;
v___y_3695_ = v___y_3729_;
v___y_3696_ = v_a_3742_;
goto v___jp_3690_;
}
else
{
lean_object* v_a_3743_; lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
lean_dec_ref(v_tag_3731_);
lean_dec_ref(v_fst_3727_);
lean_dec_ref(v_fst_3726_);
lean_dec(v_fst_3725_);
lean_dec(v_e_3399_);
v_a_3743_ = lean_ctor_get(v___x_3741_, 0);
v_a_3744_ = lean_ctor_get(v___x_3741_, 1);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3741_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_inc(v_a_3743_);
lean_dec(v___x_3741_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3743_);
lean_ctor_set(v_reuseFailAlloc_3750_, 1, v_a_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
else
{
lean_dec_ref(v___x_3732_);
lean_dec(v_val_3728_);
v___y_3691_ = v_tag_3731_;
v___y_3692_ = v_fst_3725_;
v___y_3693_ = v_fst_3727_;
v___y_3694_ = v_fst_3726_;
v___y_3695_ = v___y_3729_;
v___y_3696_ = v___y_3730_;
goto v___jp_3690_;
}
}
v___jp_3752_:
{
lean_object* v_tag_3758_; 
v_tag_3758_ = l_Lasm_UI_Syntax_nameOf(v_fst_3753_);
v___y_3691_ = v_tag_3758_;
v___y_3692_ = v_fst_3753_;
v___y_3693_ = v_fst_3755_;
v___y_3694_ = v_fst_3754_;
v___y_3695_ = v___y_3756_;
v___y_3696_ = v___y_3757_;
goto v___jp_3690_;
}
v___jp_3759_:
{
lean_object* v_snd_3763_; lean_object* v_snd_3764_; lean_object* v_snd_3765_; 
v_snd_3763_ = lean_ctor_get(v_____x_3760_, 1);
lean_inc(v_snd_3763_);
v_snd_3764_ = lean_ctor_get(v_snd_3763_, 1);
lean_inc(v_snd_3764_);
v_snd_3765_ = lean_ctor_get(v_snd_3764_, 1);
if (lean_obj_tag(v_snd_3765_) == 1)
{
lean_object* v_fst_3766_; lean_object* v_fst_3767_; lean_object* v_fst_3768_; lean_object* v_val_3769_; 
lean_inc_ref(v_snd_3765_);
v_fst_3766_ = lean_ctor_get(v_____x_3760_, 0);
lean_inc(v_fst_3766_);
lean_dec_ref(v_____x_3760_);
v_fst_3767_ = lean_ctor_get(v_snd_3763_, 0);
lean_inc(v_fst_3767_);
lean_dec(v_snd_3763_);
v_fst_3768_ = lean_ctor_get(v_snd_3764_, 0);
lean_inc(v_fst_3768_);
lean_dec(v_snd_3764_);
v_val_3769_ = lean_ctor_get(v_snd_3765_, 0);
lean_inc(v_val_3769_);
lean_dec_ref_known(v_snd_3765_, 1);
v_fst_3725_ = v_fst_3766_;
v_fst_3726_ = v_fst_3767_;
v_fst_3727_ = v_fst_3768_;
v_val_3728_ = v_val_3769_;
v___y_3729_ = v___y_3761_;
v___y_3730_ = v___y_3762_;
goto v___jp_3724_;
}
else
{
lean_object* v_fst_3770_; lean_object* v_fst_3771_; lean_object* v_fst_3772_; 
v_fst_3770_ = lean_ctor_get(v_____x_3760_, 0);
lean_inc(v_fst_3770_);
lean_dec_ref(v_____x_3760_);
v_fst_3771_ = lean_ctor_get(v_snd_3763_, 0);
lean_inc(v_fst_3771_);
lean_dec(v_snd_3763_);
v_fst_3772_ = lean_ctor_get(v_snd_3764_, 0);
lean_inc(v_fst_3772_);
lean_dec(v_snd_3764_);
v_fst_3753_ = v_fst_3770_;
v_fst_3754_ = v_fst_3771_;
v_fst_3755_ = v_fst_3772_;
v___y_3756_ = v___y_3761_;
v___y_3757_ = v___y_3762_;
goto v___jp_3752_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild(uint8_t v_ns_3865_, uint8_t v_lead_3866_, lean_object* v_c_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_){
_start:
{
lean_object* v_a_3871_; lean_object* v_a_3872_; lean_object* v___x_3875_; lean_object* v_c_3876_; lean_object* v___y_3878_; lean_object* v___x_3909_; uint8_t v___x_3910_; 
v___x_3875_ = lean_unsigned_to_nat(0u);
v_c_3876_ = l_Lean_Syntax_getArg(v_c_3867_, v___x_3875_);
v___x_3909_ = ((lean_object*)(l_Lasm_UI_Syntax_childText___closed__1));
lean_inc(v_c_3876_);
v___x_3910_ = l_Lean_Syntax_isOfKind(v_c_3876_, v___x_3909_);
if (v___x_3910_ == 0)
{
lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3911_ = ((lean_object*)(l_Lasm_UI_Syntax_childTerm___closed__1));
lean_inc(v_c_3876_);
v___x_3912_ = l_Lean_Syntax_isOfKind(v_c_3876_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; uint8_t v___x_3914_; 
v___x_3913_ = ((lean_object*)(l_Lasm_UI_Syntax_childElement___closed__1));
lean_inc(v_c_3876_);
v___x_3914_ = l_Lean_Syntax_isOfKind(v_c_3876_, v___x_3913_);
if (v___x_3914_ == 0)
{
lean_object* v___x_3915_; lean_object* v___x_3916_; 
v___x_3915_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__6));
v___x_3916_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3876_, v___x_3915_, v_a_3868_, v_a_3869_);
lean_dec(v_c_3876_);
return v___x_3916_;
}
else
{
lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3917_ = l_Lean_Syntax_getArg(v_c_3876_, v___x_3875_);
lean_dec(v_c_3876_);
v___x_3918_ = l_Lasm_UI_Syntax_expandElement(v_ns_3865_, v___x_3917_, v_a_3868_, v_a_3869_);
if (lean_obj_tag(v___x_3918_) == 0)
{
if (v_lead_3866_ == 0)
{
lean_object* v_a_3919_; lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3938_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
v_a_3920_ = lean_ctor_get(v___x_3918_, 1);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3922_ = v___x_3918_;
v_isShared_3923_ = v_isSharedCheck_3938_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_inc(v_a_3919_);
lean_dec(v___x_3918_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3938_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_ref_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3936_; 
v_ref_3924_ = lean_ctor_get(v_a_3868_, 5);
v___x_3925_ = l_Lean_SourceInfo_fromRef(v_ref_3924_, v_lead_3866_);
v___x_3926_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3927_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3925_, 3);
v___x_3928_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3925_);
lean_ctor_set(v___x_3928_, 1, v___x_3927_);
v___x_3929_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3930_ = l_Lean_Syntax_node1(v___x_3925_, v___x_3929_, v_a_3919_);
v___x_3931_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3932_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3925_);
lean_ctor_set(v___x_3932_, 1, v___x_3931_);
v___x_3933_ = l_Lean_Syntax_node3(v___x_3925_, v___x_3926_, v___x_3928_, v___x_3930_, v___x_3932_);
v___x_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v___x_3934_);
v___x_3936_ = v___x_3922_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v___x_3934_);
lean_ctor_set(v_reuseFailAlloc_3937_, 1, v_a_3920_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
else
{
lean_object* v_a_3939_; lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3974_; 
v_a_3939_ = lean_ctor_get(v___x_3918_, 0);
v_a_3940_ = lean_ctor_get(v___x_3918_, 1);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3942_ = v___x_3918_;
v_isShared_3943_ = v_isSharedCheck_3974_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_inc(v_a_3939_);
lean_dec(v___x_3918_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3974_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v_quotContext_3944_; lean_object* v_currMacroScope_3945_; lean_object* v_ref_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3972_; 
v_quotContext_3944_ = lean_ctor_get(v_a_3868_, 1);
v_currMacroScope_3945_ = lean_ctor_get(v_a_3868_, 2);
v_ref_3946_ = lean_ctor_get(v_a_3868_, 5);
v___x_3947_ = l_Lean_SourceInfo_fromRef(v_ref_3946_, v___x_3912_);
v___x_3948_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3949_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3947_, 9);
v___x_3950_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3947_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3952_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3953_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3954_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3945_);
lean_inc(v_quotContext_3944_);
v___x_3955_ = l_Lean_addMacroScope(v_quotContext_3944_, v___x_3954_, v_currMacroScope_3945_);
v___x_3956_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_3957_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3947_);
lean_ctor_set(v___x_3957_, 1, v___x_3953_);
lean_ctor_set(v___x_3957_, 2, v___x_3955_);
lean_ctor_set(v___x_3957_, 3, v___x_3956_);
v___x_3958_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_3959_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_3960_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3947_);
lean_ctor_set(v___x_3960_, 1, v___x_3959_);
v___x_3961_ = l_Lean_Syntax_node1(v___x_3947_, v___x_3958_, v___x_3960_);
v___x_3962_ = l_Lean_Syntax_node1(v___x_3947_, v___x_3951_, v___x_3961_);
v___x_3963_ = l_Lean_Syntax_node2(v___x_3947_, v___x_3952_, v___x_3957_, v___x_3962_);
v___x_3964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_3965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3947_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = l_Lean_Syntax_node3(v___x_3947_, v___x_3951_, v___x_3963_, v___x_3965_, v_a_3939_);
v___x_3967_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3947_);
lean_ctor_set(v___x_3968_, 1, v___x_3967_);
v___x_3969_ = l_Lean_Syntax_node3(v___x_3947_, v___x_3948_, v___x_3950_, v___x_3966_, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 0, v___x_3970_);
v___x_3972_ = v___x_3942_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v___x_3970_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v_a_3940_);
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
lean_object* v_a_3975_; lean_object* v_a_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3983_; 
v_a_3975_ = lean_ctor_get(v___x_3918_, 0);
v_a_3976_ = lean_ctor_get(v___x_3918_, 1);
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3978_ = v___x_3918_;
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_a_3976_);
lean_inc(v_a_3975_);
lean_dec(v___x_3918_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_a_3975_);
lean_ctor_set(v_reuseFailAlloc_3982_, 1, v_a_3976_);
v___x_3981_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
return v___x_3981_;
}
}
}
}
}
else
{
lean_object* v_quotContext_3984_; lean_object* v_currMacroScope_3985_; lean_object* v_ref_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v_quotContext_3984_ = lean_ctor_get(v_a_3868_, 1);
v_currMacroScope_3985_ = lean_ctor_get(v_a_3868_, 2);
v_ref_3986_ = lean_ctor_get(v_a_3868_, 5);
v___x_3987_ = lean_unsigned_to_nat(1u);
v___x_3988_ = l_Lean_Syntax_getArg(v_c_3876_, v___x_3987_);
lean_dec(v_c_3876_);
v___x_3989_ = l_Lean_SourceInfo_fromRef(v_ref_3986_, v___x_3910_);
v___x_3990_ = ((lean_object*)(l_Lasm_UI_Syntax_childrenTerm___closed__1));
v___x_3991_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__8));
lean_inc_n(v___x_3989_, 2);
v___x_3992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3989_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
v___x_3993_ = l_Lean_Syntax_node2(v___x_3989_, v___x_3990_, v___x_3992_, v___x_3988_);
if (v_lead_3866_ == 0)
{
lean_dec(v___x_3989_);
v_a_3871_ = v___x_3993_;
v_a_3872_ = v_a_3869_;
goto v___jp_3870_;
}
else
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_3994_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_3995_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3996_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3989_, 10);
v___x_3997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3989_);
lean_ctor_set(v___x_3997_, 1, v___x_3996_);
v___x_3998_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3999_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_4000_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_4001_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3985_);
lean_inc(v_quotContext_3984_);
v___x_4002_ = l_Lean_addMacroScope(v_quotContext_3984_, v___x_4001_, v_currMacroScope_3985_);
v___x_4003_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_4004_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4004_, 0, v___x_3989_);
lean_ctor_set(v___x_4004_, 1, v___x_4000_);
lean_ctor_set(v___x_4004_, 2, v___x_4002_);
lean_ctor_set(v___x_4004_, 3, v___x_4003_);
v___x_4005_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_4006_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_4007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_3989_);
lean_ctor_set(v___x_4007_, 1, v___x_4006_);
v___x_4008_ = l_Lean_Syntax_node1(v___x_3989_, v___x_4005_, v___x_4007_);
v___x_4009_ = l_Lean_Syntax_node1(v___x_3989_, v___x_3998_, v___x_4008_);
v___x_4010_ = l_Lean_Syntax_node2(v___x_3989_, v___x_3999_, v___x_4004_, v___x_4009_);
v___x_4011_ = l_Lean_Syntax_node1(v___x_3989_, v___x_3998_, v___x_4010_);
v___x_4012_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_4013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4013_, 0, v___x_3989_);
lean_ctor_set(v___x_4013_, 1, v___x_4012_);
v___x_4014_ = l_Lean_Syntax_node3(v___x_3989_, v___x_3995_, v___x_3997_, v___x_4011_, v___x_4013_);
v___x_4015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
v___x_4016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_3989_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = l_Lean_Syntax_node3(v___x_3989_, v___x_3994_, v___x_4014_, v___x_4016_, v___x_3993_);
v_a_3871_ = v___x_4017_;
v_a_3872_ = v_a_3869_;
goto v___jp_3870_;
}
}
}
else
{
lean_object* v___x_4018_; lean_object* v___y_4020_; lean_object* v___x_4030_; uint8_t v___x_4031_; 
v___x_4018_ = l_Lean_Syntax_getArg(v_c_3876_, v___x_3875_);
v___x_4030_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__7));
lean_inc(v___x_4018_);
v___x_4031_ = l_Lean_Syntax_isOfKind(v___x_4018_, v___x_4030_);
if (v___x_4031_ == 0)
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
lean_dec(v___x_4018_);
v___x_4032_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__6));
v___x_4033_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3876_, v___x_4032_, v_a_3868_, v_a_3869_);
lean_dec(v_c_3876_);
return v___x_4033_;
}
else
{
lean_dec(v_c_3876_);
if (v_lead_3866_ == 0)
{
lean_object* v___x_4034_; 
v___x_4034_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___y_4020_ = v___x_4034_;
goto v___jp_4019_;
}
else
{
lean_object* v___x_4035_; 
v___x_4035_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v___y_4020_ = v___x_4035_;
goto v___jp_4019_;
}
}
v___jp_4019_:
{
lean_object* v___x_4021_; lean_object* v_raw_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; uint8_t v_decide_4026_; 
v___x_4021_ = l_Lasm_UI_Syntax_nameOf(v___x_4018_);
lean_dec(v___x_4018_);
lean_inc_ref(v___y_4020_);
v_raw_4022_ = lean_string_append(v___y_4020_, v___x_4021_);
lean_dec_ref(v___x_4021_);
v___x_4023_ = lean_string_utf8_byte_size(v_raw_4022_);
lean_inc_ref(v_raw_4022_);
v___x_4024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4024_, 0, v_raw_4022_);
lean_ctor_set(v___x_4024_, 1, v___x_3875_);
lean_ctor_set(v___x_4024_, 2, v___x_4023_);
v___x_4025_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v___x_4024_, v___x_3875_);
v_decide_4026_ = lean_nat_dec_eq(v___x_4025_, v___x_4023_);
lean_dec(v___x_4025_);
if (v_decide_4026_ == 0)
{
lean_dec_ref_known(v___x_4024_, 3);
v___y_3878_ = v_raw_4022_;
goto v___jp_3877_;
}
else
{
uint8_t v___x_4027_; 
v___x_4027_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_4024_);
lean_dec_ref_known(v___x_4024_, 3);
if (v___x_4027_ == 0)
{
v___y_3878_ = v_raw_4022_;
goto v___jp_3877_;
}
else
{
lean_object* v___x_4028_; lean_object* v___x_4029_; 
lean_dec_ref(v_raw_4022_);
v___x_4028_ = lean_box(0);
v___x_4029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
lean_ctor_set(v___x_4029_, 1, v_a_3869_);
return v___x_4029_;
}
}
}
}
v___jp_3870_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3873_, 0, v_a_3871_);
v___x_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
lean_ctor_set(v___x_3874_, 1, v_a_3872_);
return v___x_3874_;
}
v___jp_3877_:
{
lean_object* v___x_3879_; lean_object* v_s_3880_; lean_object* v___x_3881_; uint8_t v___x_3882_; 
v___x_3879_ = l_Lasm_UI_Syntax_jsxWhitespace(v___y_3878_);
lean_dec_ref(v___y_3878_);
v_s_3880_ = l_Lasm_UI_Syntax_decodeEntities(v___x_3879_);
v___x_3881_ = lean_string_utf8_byte_size(v_s_3880_);
v___x_3882_ = lean_nat_dec_eq(v___x_3881_, v___x_3875_);
if (v___x_3882_ == 0)
{
lean_object* v_quotContext_3883_; lean_object* v_currMacroScope_3884_; lean_object* v_ref_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v_quotContext_3883_ = lean_ctor_get(v_a_3868_, 1);
v_currMacroScope_3884_ = lean_ctor_get(v_a_3868_, 2);
v_ref_3885_ = lean_ctor_get(v_a_3868_, 5);
v___x_3886_ = l_Lean_SourceInfo_fromRef(v_ref_3885_, v___x_3882_);
v___x_3887_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3888_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3886_, 6);
v___x_3889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3886_);
lean_ctor_set(v___x_3889_, 1, v___x_3888_);
v___x_3890_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3891_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3892_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__1, &l_Lasm_UI_Syntax_expandChild___closed__1_once, _init_l_Lasm_UI_Syntax_expandChild___closed__1);
v___x_3893_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3884_);
lean_inc(v_quotContext_3883_);
v___x_3894_ = l_Lean_addMacroScope(v_quotContext_3883_, v___x_3893_, v_currMacroScope_3884_);
v___x_3895_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__5));
v___x_3896_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3886_);
lean_ctor_set(v___x_3896_, 1, v___x_3892_);
lean_ctor_set(v___x_3896_, 2, v___x_3894_);
lean_ctor_set(v___x_3896_, 3, v___x_3895_);
v___x_3897_ = lean_box(2);
v___x_3898_ = l_Lean_Syntax_mkStrLit(v_s_3880_, v___x_3897_);
v___x_3899_ = l_Lean_Syntax_node1(v___x_3886_, v___x_3890_, v___x_3898_);
v___x_3900_ = l_Lean_Syntax_node2(v___x_3886_, v___x_3891_, v___x_3896_, v___x_3899_);
v___x_3901_ = l_Lean_Syntax_node1(v___x_3886_, v___x_3890_, v___x_3900_);
v___x_3902_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3886_);
lean_ctor_set(v___x_3903_, 1, v___x_3902_);
v___x_3904_ = l_Lean_Syntax_node3(v___x_3886_, v___x_3887_, v___x_3889_, v___x_3901_, v___x_3903_);
v___x_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
v___x_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3905_);
lean_ctor_set(v___x_3906_, 1, v_a_3869_);
return v___x_3906_;
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
lean_dec_ref(v_s_3880_);
v___x_3907_ = lean_box(0);
v___x_3908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
lean_ctor_set(v___x_3908_, 1, v_a_3869_);
return v___x_3908_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(uint8_t v___y_4036_, lean_object* v_as_4037_, size_t v_sz_4038_, size_t v_i_4039_, lean_object* v_b_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
uint8_t v___x_4043_; 
v___x_4043_ = lean_usize_dec_lt(v_i_4039_, v_sz_4038_);
if (v___x_4043_ == 0)
{
lean_object* v___x_4044_; 
v___x_4044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4044_, 0, v_b_4040_);
lean_ctor_set(v___x_4044_, 1, v___y_4042_);
return v___x_4044_;
}
else
{
lean_object* v_fst_4045_; lean_object* v_snd_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4096_; 
v_fst_4045_ = lean_ctor_get(v_b_4040_, 0);
v_snd_4046_ = lean_ctor_get(v_b_4040_, 1);
v_isSharedCheck_4096_ = !lean_is_exclusive(v_b_4040_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4048_ = v_b_4040_;
v_isShared_4049_ = v_isSharedCheck_4096_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_snd_4046_);
lean_inc(v_fst_4045_);
lean_dec(v_b_4040_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4096_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v_a_4050_; lean_object* v_childTerms_4052_; lean_object* v___y_4053_; uint8_t v___y_4061_; lean_object* v___x_4077_; 
v_a_4050_ = lean_array_uget_borrowed(v_as_4037_, v_i_4039_);
v___x_4077_ = l_Lean_Syntax_getTailInfo(v_snd_4046_);
lean_dec(v_snd_4046_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_trailing_4078_; lean_object* v_str_4079_; lean_object* v_startPos_4080_; lean_object* v_stopPos_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4094_; 
v_trailing_4078_ = lean_ctor_get(v___x_4077_, 2);
lean_inc_ref(v_trailing_4078_);
lean_dec_ref_known(v___x_4077_, 4);
v_str_4079_ = lean_ctor_get(v_trailing_4078_, 0);
v_startPos_4080_ = lean_ctor_get(v_trailing_4078_, 1);
v_stopPos_4081_ = lean_ctor_get(v_trailing_4078_, 2);
v_isSharedCheck_4094_ = !lean_is_exclusive(v_trailing_4078_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4083_ = v_trailing_4078_;
v_isShared_4084_ = v_isSharedCheck_4094_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_stopPos_4081_);
lean_inc(v_startPos_4080_);
lean_inc(v_str_4079_);
lean_dec(v_trailing_4078_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4094_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4085_ = lean_string_utf8_extract(v_str_4079_, v_startPos_4080_, v_stopPos_4081_);
lean_dec(v_stopPos_4081_);
lean_dec(v_startPos_4080_);
lean_dec_ref(v_str_4079_);
v___x_4086_ = lean_string_utf8_byte_size(v___x_4085_);
v___x_4087_ = lean_unsigned_to_nat(0u);
v___x_4088_ = lean_nat_dec_eq(v___x_4086_, v___x_4087_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4090_; 
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 2, v___x_4086_);
lean_ctor_set(v___x_4083_, 1, v___x_4087_);
lean_ctor_set(v___x_4083_, 0, v___x_4085_);
v___x_4090_ = v___x_4083_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4085_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v___x_4087_);
lean_ctor_set(v_reuseFailAlloc_4092_, 2, v___x_4086_);
v___x_4090_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
uint8_t v___x_4091_; 
v___x_4091_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_4090_);
lean_dec_ref(v___x_4090_);
if (v___x_4091_ == 0)
{
v___y_4061_ = v___x_4043_;
goto v___jp_4060_;
}
else
{
v___y_4061_ = v___x_4088_;
goto v___jp_4060_;
}
}
}
else
{
uint8_t v___x_4093_; 
lean_dec_ref(v___x_4085_);
lean_del_object(v___x_4083_);
v___x_4093_ = 0;
v___y_4061_ = v___x_4093_;
goto v___jp_4060_;
}
}
}
else
{
uint8_t v___x_4095_; 
lean_dec(v___x_4077_);
v___x_4095_ = 0;
v___y_4061_ = v___x_4095_;
goto v___jp_4060_;
}
v___jp_4051_:
{
lean_object* v___x_4055_; 
lean_inc(v_a_4050_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 1, v_a_4050_);
lean_ctor_set(v___x_4048_, 0, v_childTerms_4052_);
v___x_4055_ = v___x_4048_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_childTerms_4052_);
lean_ctor_set(v_reuseFailAlloc_4059_, 1, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
size_t v___x_4056_; size_t v___x_4057_; 
v___x_4056_ = ((size_t)1ULL);
v___x_4057_ = lean_usize_add(v_i_4039_, v___x_4056_);
v_i_4039_ = v___x_4057_;
v_b_4040_ = v___x_4055_;
v___y_4042_ = v___y_4053_;
goto _start;
}
}
v___jp_4060_:
{
lean_object* v___x_4062_; 
v___x_4062_ = l_Lasm_UI_Syntax_expandChild(v___y_4036_, v___y_4061_, v_a_4050_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
if (lean_obj_tag(v_a_4063_) == 1)
{
lean_object* v_a_4064_; lean_object* v_val_4065_; lean_object* v___x_4066_; 
v_a_4064_ = lean_ctor_get(v___x_4062_, 1);
lean_inc(v_a_4064_);
lean_dec_ref_known(v___x_4062_, 2);
v_val_4065_ = lean_ctor_get(v_a_4063_, 0);
lean_inc(v_val_4065_);
lean_dec_ref_known(v_a_4063_, 1);
v___x_4066_ = lean_array_push(v_fst_4045_, v_val_4065_);
v_childTerms_4052_ = v___x_4066_;
v___y_4053_ = v_a_4064_;
goto v___jp_4051_;
}
else
{
lean_object* v_a_4067_; 
lean_dec(v_a_4063_);
v_a_4067_ = lean_ctor_get(v___x_4062_, 1);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4062_, 2);
v_childTerms_4052_ = v_fst_4045_;
v___y_4053_ = v_a_4067_;
goto v___jp_4051_;
}
}
else
{
lean_object* v_a_4068_; lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
lean_del_object(v___x_4048_);
lean_dec(v_fst_4045_);
v_a_4068_ = lean_ctor_get(v___x_4062_, 0);
v_a_4069_ = lean_ctor_get(v___x_4062_, 1);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_4062_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_inc(v_a_4068_);
lean_dec(v___x_4062_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4068_);
lean_ctor_set(v_reuseFailAlloc_4075_, 1, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(uint8_t v___y_4097_, lean_object* v_as_4098_, size_t v_sz_4099_, size_t v_i_4100_, lean_object* v_b_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
uint8_t v___x_4104_; 
v___x_4104_ = lean_usize_dec_lt(v_i_4100_, v_sz_4099_);
if (v___x_4104_ == 0)
{
lean_object* v___x_4105_; 
v___x_4105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4105_, 0, v_b_4101_);
lean_ctor_set(v___x_4105_, 1, v___y_4103_);
return v___x_4105_;
}
else
{
lean_object* v_fst_4106_; lean_object* v_snd_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4157_; 
v_fst_4106_ = lean_ctor_get(v_b_4101_, 0);
v_snd_4107_ = lean_ctor_get(v_b_4101_, 1);
v_isSharedCheck_4157_ = !lean_is_exclusive(v_b_4101_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4109_ = v_b_4101_;
v_isShared_4110_ = v_isSharedCheck_4157_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_snd_4107_);
lean_inc(v_fst_4106_);
lean_dec(v_b_4101_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4157_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v_a_4111_; lean_object* v_childTerms_4113_; lean_object* v___y_4114_; uint8_t v___y_4122_; lean_object* v___x_4138_; 
v_a_4111_ = lean_array_uget_borrowed(v_as_4098_, v_i_4100_);
v___x_4138_ = l_Lean_Syntax_getTailInfo(v_snd_4107_);
lean_dec(v_snd_4107_);
if (lean_obj_tag(v___x_4138_) == 0)
{
lean_object* v_trailing_4139_; lean_object* v_str_4140_; lean_object* v_startPos_4141_; lean_object* v_stopPos_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4155_; 
v_trailing_4139_ = lean_ctor_get(v___x_4138_, 2);
lean_inc_ref(v_trailing_4139_);
lean_dec_ref_known(v___x_4138_, 4);
v_str_4140_ = lean_ctor_get(v_trailing_4139_, 0);
v_startPos_4141_ = lean_ctor_get(v_trailing_4139_, 1);
v_stopPos_4142_ = lean_ctor_get(v_trailing_4139_, 2);
v_isSharedCheck_4155_ = !lean_is_exclusive(v_trailing_4139_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4144_ = v_trailing_4139_;
v_isShared_4145_ = v_isSharedCheck_4155_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_stopPos_4142_);
lean_inc(v_startPos_4141_);
lean_inc(v_str_4140_);
lean_dec(v_trailing_4139_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4155_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; uint8_t v___x_4149_; 
v___x_4146_ = lean_string_utf8_extract(v_str_4140_, v_startPos_4141_, v_stopPos_4142_);
lean_dec(v_stopPos_4142_);
lean_dec(v_startPos_4141_);
lean_dec_ref(v_str_4140_);
v___x_4147_ = lean_string_utf8_byte_size(v___x_4146_);
v___x_4148_ = lean_unsigned_to_nat(0u);
v___x_4149_ = lean_nat_dec_eq(v___x_4147_, v___x_4148_);
if (v___x_4149_ == 0)
{
lean_object* v___x_4151_; 
if (v_isShared_4145_ == 0)
{
lean_ctor_set(v___x_4144_, 2, v___x_4147_);
lean_ctor_set(v___x_4144_, 1, v___x_4148_);
lean_ctor_set(v___x_4144_, 0, v___x_4146_);
v___x_4151_ = v___x_4144_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4146_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v___x_4148_);
lean_ctor_set(v_reuseFailAlloc_4153_, 2, v___x_4147_);
v___x_4151_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
uint8_t v___x_4152_; 
v___x_4152_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_4151_);
lean_dec_ref(v___x_4151_);
if (v___x_4152_ == 0)
{
v___y_4122_ = v___x_4104_;
goto v___jp_4121_;
}
else
{
v___y_4122_ = v___x_4149_;
goto v___jp_4121_;
}
}
}
else
{
uint8_t v___x_4154_; 
lean_dec_ref(v___x_4146_);
lean_del_object(v___x_4144_);
v___x_4154_ = 0;
v___y_4122_ = v___x_4154_;
goto v___jp_4121_;
}
}
}
else
{
uint8_t v___x_4156_; 
lean_dec(v___x_4138_);
v___x_4156_ = 0;
v___y_4122_ = v___x_4156_;
goto v___jp_4121_;
}
v___jp_4112_:
{
lean_object* v___x_4116_; 
lean_inc(v_a_4111_);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 1, v_a_4111_);
lean_ctor_set(v___x_4109_, 0, v_childTerms_4113_);
v___x_4116_ = v___x_4109_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_childTerms_4113_);
lean_ctor_set(v_reuseFailAlloc_4120_, 1, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
size_t v___x_4117_; size_t v___x_4118_; lean_object* v___x_4119_; 
v___x_4117_ = ((size_t)1ULL);
v___x_4118_ = lean_usize_add(v_i_4100_, v___x_4117_);
v___x_4119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(v___y_4097_, v_as_4098_, v_sz_4099_, v___x_4118_, v___x_4116_, v___y_4102_, v___y_4114_);
return v___x_4119_;
}
}
v___jp_4121_:
{
lean_object* v___x_4123_; 
v___x_4123_ = l_Lasm_UI_Syntax_expandChild(v___y_4097_, v___y_4122_, v_a_4111_, v___y_4102_, v___y_4103_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
if (lean_obj_tag(v_a_4124_) == 1)
{
lean_object* v_a_4125_; lean_object* v_val_4126_; lean_object* v___x_4127_; 
v_a_4125_ = lean_ctor_get(v___x_4123_, 1);
lean_inc(v_a_4125_);
lean_dec_ref_known(v___x_4123_, 2);
v_val_4126_ = lean_ctor_get(v_a_4124_, 0);
lean_inc(v_val_4126_);
lean_dec_ref_known(v_a_4124_, 1);
v___x_4127_ = lean_array_push(v_fst_4106_, v_val_4126_);
v_childTerms_4113_ = v___x_4127_;
v___y_4114_ = v_a_4125_;
goto v___jp_4112_;
}
else
{
lean_object* v_a_4128_; 
lean_dec(v_a_4124_);
v_a_4128_ = lean_ctor_get(v___x_4123_, 1);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4123_, 2);
v_childTerms_4113_ = v_fst_4106_;
v___y_4114_ = v_a_4128_;
goto v___jp_4112_;
}
}
else
{
lean_object* v_a_4129_; lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
lean_del_object(v___x_4109_);
lean_dec(v_fst_4106_);
v_a_4129_ = lean_ctor_get(v___x_4123_, 0);
v_a_4130_ = lean_ctor_get(v___x_4123_, 1);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4123_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_inc(v_a_4129_);
lean_dec(v___x_4123_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4129_);
lean_ctor_set(v_reuseFailAlloc_4136_, 1, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1___boxed(lean_object* v___y_4158_, lean_object* v_as_4159_, lean_object* v_sz_4160_, lean_object* v_i_4161_, lean_object* v_b_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
uint8_t v___y_30163__boxed_4165_; size_t v_sz_boxed_4166_; size_t v_i_boxed_4167_; lean_object* v_res_4168_; 
v___y_30163__boxed_4165_ = lean_unbox(v___y_4158_);
v_sz_boxed_4166_ = lean_unbox_usize(v_sz_4160_);
lean_dec(v_sz_4160_);
v_i_boxed_4167_ = lean_unbox_usize(v_i_4161_);
lean_dec(v_i_4161_);
v_res_4168_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_30163__boxed_4165_, v_as_4159_, v_sz_boxed_4166_, v_i_boxed_4167_, v_b_4162_, v___y_4163_, v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec_ref(v_as_4159_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1___boxed(lean_object* v___y_4169_, lean_object* v_as_4170_, lean_object* v_sz_4171_, lean_object* v_i_4172_, lean_object* v_b_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
uint8_t v___y_30198__boxed_4176_; size_t v_sz_boxed_4177_; size_t v_i_boxed_4178_; lean_object* v_res_4179_; 
v___y_30198__boxed_4176_ = lean_unbox(v___y_4169_);
v_sz_boxed_4177_ = lean_unbox_usize(v_sz_4171_);
lean_dec(v_sz_4171_);
v_i_boxed_4178_ = lean_unbox_usize(v_i_4172_);
lean_dec(v_i_4172_);
v_res_4179_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1_spec__1(v___y_30198__boxed_4176_, v_as_4170_, v_sz_boxed_4177_, v_i_boxed_4178_, v_b_4173_, v___y_4174_, v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec_ref(v_as_4170_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild___boxed(lean_object* v_ns_4180_, lean_object* v_lead_4181_, lean_object* v_c_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_){
_start:
{
uint8_t v_ns_boxed_4185_; uint8_t v_lead_boxed_4186_; lean_object* v_res_4187_; 
v_ns_boxed_4185_ = lean_unbox(v_ns_4180_);
v_lead_boxed_4186_ = lean_unbox(v_lead_4181_);
v_res_4187_ = l_Lasm_UI_Syntax_expandChild(v_ns_boxed_4185_, v_lead_boxed_4186_, v_c_4182_, v_a_4183_, v_a_4184_);
lean_dec_ref(v_a_4183_);
lean_dec(v_c_4182_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement___boxed(lean_object* v_ns_4188_, lean_object* v_e_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_){
_start:
{
uint8_t v_ns_boxed_4192_; lean_object* v_res_4193_; 
v_ns_boxed_4192_ = lean_unbox(v_ns_4188_);
v_res_4193_ = l_Lasm_UI_Syntax_expandElement(v_ns_boxed_4192_, v_e_4189_, v_a_4190_, v_a_4191_);
lean_dec_ref(v_a_4190_);
return v_res_4193_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(lean_object* v_s_4194_, lean_object* v_inst_4195_, lean_object* v_R_4196_, lean_object* v_a_4197_, uint8_t v_b_4198_, lean_object* v_c_4199_){
_start:
{
uint8_t v___x_4200_; 
v___x_4200_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_4194_, v_a_4197_, v_b_4198_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___boxed(lean_object* v_s_4201_, lean_object* v_inst_4202_, lean_object* v_R_4203_, lean_object* v_a_4204_, lean_object* v_b_4205_, lean_object* v_c_4206_){
_start:
{
uint8_t v_b_boxed_4207_; uint8_t v_res_4208_; lean_object* v_r_4209_; 
v_b_boxed_4207_ = lean_unbox(v_b_4205_);
v_res_4208_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(v_s_4201_, v_inst_4202_, v_R_4203_, v_a_4204_, v_b_boxed_4207_, v_c_4206_);
lean_dec_ref(v_s_4201_);
v_r_4209_ = lean_box(v_res_4208_);
return v_r_4209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(lean_object* v_x_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v___x_4213_; uint8_t v___x_4214_; 
v___x_4213_ = ((lean_object*)(l_Lasm_UI_Syntax_htmlTerm___closed__1));
lean_inc(v_x_4210_);
v___x_4214_ = l_Lean_Syntax_isOfKind(v_x_4210_, v___x_4213_);
if (v___x_4214_ == 0)
{
lean_object* v___x_4215_; lean_object* v___x_4216_; 
lean_dec(v_x_4210_);
v___x_4215_ = lean_box(1);
v___x_4216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4215_);
lean_ctor_set(v___x_4216_, 1, v_a_4212_);
return v___x_4216_;
}
else
{
lean_object* v___x_4217_; lean_object* v___x_4218_; uint8_t v___x_4219_; lean_object* v___x_4220_; 
v___x_4217_ = lean_unsigned_to_nat(1u);
v___x_4218_ = l_Lean_Syntax_getArg(v_x_4210_, v___x_4217_);
lean_dec(v_x_4210_);
v___x_4219_ = 0;
v___x_4220_ = l_Lasm_UI_Syntax_expandElement(v___x_4219_, v___x_4218_, v_a_4211_, v_a_4212_);
if (lean_obj_tag(v___x_4220_) == 0)
{
lean_object* v_a_4221_; lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
v_a_4221_ = lean_ctor_get(v___x_4220_, 0);
v_a_4222_ = lean_ctor_get(v___x_4220_, 1);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4220_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_inc(v_a_4221_);
lean_dec(v___x_4220_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4221_);
lean_ctor_set(v_reuseFailAlloc_4228_, 1, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
else
{
lean_object* v_a_4230_; lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4238_; 
v_a_4230_ = lean_ctor_get(v___x_4220_, 0);
v_a_4231_ = lean_ctor_get(v___x_4220_, 1);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4233_ = v___x_4220_;
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_inc(v_a_4230_);
lean_dec(v___x_4220_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4236_; 
if (v_isShared_4234_ == 0)
{
v___x_4236_ = v___x_4233_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4230_);
lean_ctor_set(v_reuseFailAlloc_4237_, 1, v_a_4231_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1___boxed(lean_object* v_x_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(v_x_4239_, v_a_4240_, v_a_4241_);
lean_dec_ref(v_a_4240_);
return v_res_4242_;
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
