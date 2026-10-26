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
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
extern lean_object* l_Lasm_UI_voidTags;
extern lean_object* l_Lasm_UI_Svg_tags;
extern lean_object* l_Lasm_UI_htmlTags;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_UI_Syntax_jsxChild_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "jsxChild"};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 149, 35, 153, 54, 108, 211, 199)}};
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(140, 85, 99, 224, 6, 223, 4, 252)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_jsxChild_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "`(jsxChild| "};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 149, 35, 153, 54, 108, 211, 199)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__5_value),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__14_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__8_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__3_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__8 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__8_value;
static const lean_ctor_object l_Lasm_UI_Syntax_jsxChild_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__8_value)}};
static const lean_object* l_Lasm_UI_Syntax_jsxChild_quot___closed__9 = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__9_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_jsxChild_quot = (const lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_jsxChild;
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
static const lean_ctor_object l_Lasm_UI_Syntax_withChildren___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_selfClosing___closed__6_value),((lean_object*)&l_Lasm_UI_Syntax_jsxChild_quot___closed__5_value)}};
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
static const lean_string_object l_Lasm_UI_Syntax_childText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "childText"};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 93, 232, 129, 11, 102, 199, 56)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__7_value)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childText___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_childText___closed__2_value)}};
static const lean_object* l_Lasm_UI_Syntax_childText___closed__3 = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childText = (const lean_object*)&l_Lasm_UI_Syntax_childText___closed__3_value;
static const lean_string_object l_Lasm_UI_Syntax_childTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "childTerm"};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 179, 11, 78, 31, 181, 58, 209)}};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxAttrVal___closed__17_value)}};
static const lean_object* l_Lasm_UI_Syntax_childTerm___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childTerm = (const lean_object*)&l_Lasm_UI_Syntax_childTerm___closed__2_value;
static const lean_string_object l_Lasm_UI_Syntax_childElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "childElement"};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__4_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_0),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 56, 123, 41, 52, 219, 168, 179)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_1),((lean_object*)&l_Lasm_UI_Syntax_jsxText___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 187, 124, 125, 99, 134, 109, 59)}};
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value_aux_2),((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 67, 240, 146, 166, 211, 235, 9)}};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Syntax_childElement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_childElement___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_UI_Syntax_jsxElement_quot___closed__12_value)}};
static const lean_object* l_Lasm_UI_Syntax_childElement___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Syntax_childElement = (const lean_object*)&l_Lasm_UI_Syntax_childElement___closed__2_value;
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
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unsupported child"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__0 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__0_value;
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
static const lean_ctor_object l_Lasm_UI_Syntax_expandElement___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__20 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__20_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandElement___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandElement___closed__21;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "foreignObject"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__22 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__22_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "> is a void element and takes no children: write <"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__23 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__23_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " … />"};
static const lean_object* l_Lasm_UI_Syntax_expandElement___closed__24 = (const lean_object*)&l_Lasm_UI_Syntax_expandElement___closed__24_value;
static const lean_string_object l_Lasm_UI_Syntax_expandElement___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown SVG element <"};
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
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lasm_children%"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__1 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__1_value;
static const lean_string_object l_Lasm_UI_Syntax_expandChild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.UI.Html.text"};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__2 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__2_value;
static lean_once_cell_t l_Lasm_UI_Syntax_expandChild___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Syntax_expandChild___closed__3;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__5 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__5_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__6 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_elabSplice___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__4 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__4_value;
static const lean_ctor_object l_Lasm_UI_Syntax_expandChild___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__4_value),((lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__6_value)}};
static const lean_object* l_Lasm_UI_Syntax_expandChild___closed__7 = (const lean_object*)&l_Lasm_UI_Syntax_expandChild___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lean_Parser_Category_jsxChild(void){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_box(0);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_Parser_Category_jsxAttr(void){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lean_box(0);
return v___x_382_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__0));
v___x_647_ = l_Lean_stringToMessageData(v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_650_ = l_Lean_stringToMessageData(v___x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0(lean_object* v_a_658_, lean_object* v_t_659_, lean_object* v_kind_660_, lean_object* v_00_u03b1_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v___y_670_; lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_680_ = lean_name_eq(v_kind_660_, v___x_679_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; 
v___x_681_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__6));
v___y_670_ = v___x_681_;
goto v___jp_669_;
}
else
{
lean_object* v___x_682_; 
v___x_682_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__7));
v___y_670_ = v___x_682_;
goto v___jp_669_;
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_671_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__1);
v___x_672_ = l_Lean_indentExpr(v_a_658_);
v___x_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = lean_obj_once(&l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3, &l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3_once, _init_l_Lasm_UI_Syntax_elabSplice___lam__0___closed__3);
v___x_675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
lean_inc_ref(v___y_670_);
v___x_676_ = l_Lean_stringToMessageData(v___y_670_);
v___x_677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_675_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_throwStuckAtUniverseCnstr_spec__3___redArg(v_t_659_, v___x_677_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___lam__0___boxed(lean_object* v_a_683_, lean_object* v_t_684_, lean_object* v_kind_685_, lean_object* v_00_u03b1_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lasm_UI_Syntax_elabSplice___lam__0(v_a_683_, v_t_684_, v_kind_685_, v_00_u03b1_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v_kind_685_);
lean_dec(v_t_684_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice(lean_object* v_kind_730_, lean_object* v_t_731_, lean_object* v_expected_x3f_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; uint8_t v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v_msg_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; 
if (lean_obj_tag(v_expected_x3f_732_) == 0)
{
uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1036_ = 0;
v___x_1037_ = lean_box(0);
v___x_1038_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1036_, v___x_1037_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v_msg_987_ = v_a_1039_;
v___y_988_ = v_a_733_;
v___y_989_ = v_a_734_;
v___y_990_ = v_a_735_;
v___y_991_ = v_a_736_;
v___y_992_ = v_a_737_;
v___y_993_ = v_a_738_;
goto v___jp_986_;
}
else
{
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1038_;
}
}
else
{
lean_object* v_val_1040_; lean_object* v___x_1041_; lean_object* v_a_1042_; lean_object* v___x_1043_; 
v_val_1040_ = lean_ctor_get(v_expected_x3f_732_, 0);
lean_inc(v_val_1040_);
lean_dec_ref_known(v_expected_x3f_732_, 1);
v___x_1041_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_val_1040_, v_a_736_);
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = l_Lean_Meta_whnfR(v_a_1042_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1045_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = l_Lean_Expr_isAppOfArity(v_a_1044_, v___x_1045_, v___x_1046_);
if (v___x_1047_ == 0)
{
uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v_a_1044_);
v___x_1048_ = 0;
v___x_1049_ = lean_box(0);
v___x_1050_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1048_, v___x_1049_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1050_, 1);
v_msg_987_ = v_a_1051_;
v___y_988_ = v_a_733_;
v___y_989_ = v_a_734_;
v___y_990_ = v_a_735_;
v___y_991_ = v_a_736_;
v___y_992_ = v_a_737_;
v___y_993_ = v_a_738_;
goto v___jp_986_;
}
else
{
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1050_;
}
}
else
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v_a_1054_; lean_object* v___x_1055_; 
v___x_1052_ = l_Lean_Expr_appArg_x21(v_a_1044_);
lean_dec(v_a_1044_);
v___x_1053_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v___x_1052_, v_a_736_);
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref(v___x_1053_);
v___x_1055_ = l_Lean_Meta_whnfR(v_a_1054_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; uint8_t v___x_1057_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1057_ = l_Lean_Expr_isAppOfArity(v_a_1056_, v_kind_730_, v___x_1046_);
if (v___x_1057_ == 0)
{
uint8_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec(v_a_1056_);
v___x_1058_ = 0;
v___x_1059_ = lean_box(0);
v___x_1060_ = l_Lean_Meta_mkFreshTypeMVar(v___x_1058_, v___x_1059_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1060_, 1);
v_msg_987_ = v_a_1061_;
v___y_988_ = v_a_733_;
v___y_989_ = v_a_734_;
v___y_990_ = v_a_735_;
v___y_991_ = v_a_736_;
v___y_992_ = v_a_737_;
v___y_993_ = v_a_738_;
goto v___jp_986_;
}
else
{
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1060_;
}
}
else
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_Expr_appArg_x21(v_a_1056_);
lean_dec(v_a_1056_);
v_msg_987_ = v___x_1062_;
v___y_988_ = v_a_733_;
v___y_989_ = v_a_734_;
v___y_990_ = v_a_735_;
v___y_991_ = v_a_736_;
v___y_992_ = v_a_737_;
v___y_993_ = v_a_738_;
goto v___jp_986_;
}
}
else
{
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1055_;
}
}
}
else
{
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1043_;
}
}
v___jp_740_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__2));
v___x_755_ = lean_array_push(v___y_741_, v___y_742_);
v___x_756_ = l_Lean_Meta_mkAppM(v___x_754_, v___x_755_, v___y_744_, v___y_746_, v___y_750_, v___y_753_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
v___x_758_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___lam__3___closed__0));
lean_inc_ref(v___y_749_);
lean_inc_ref(v___y_743_);
lean_inc_ref(v___y_751_);
v___x_759_ = l_Lean_Name_mkStr4(v___y_751_, v___y_743_, v___y_749_, v___x_758_);
v___x_760_ = l_Lean_Expr_const___override(v___x_759_, v___y_748_);
v___x_761_ = l_Lean_mkAppB(v___x_760_, v___y_747_, v_a_757_);
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___y_745_);
v___x_763_ = l_Lean_Meta_mkListLit(v___y_752_, v___x_762_, v___y_744_, v___y_746_, v___y_750_, v___y_753_);
return v___x_763_;
}
else
{
lean_dec_ref(v___y_752_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_745_);
return v___x_756_;
}
}
v___jp_764_:
{
if (v___y_771_ == 0)
{
lean_object* v___x_783_; 
lean_dec_ref(v___y_781_);
lean_dec(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_766_);
lean_dec_ref(v___y_765_);
lean_inc(v___y_782_);
lean_inc_ref(v___y_779_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_770_);
lean_inc(v___y_778_);
lean_inc_ref(v___y_777_);
v___x_783_ = lean_apply_8(v___y_769_, lean_box(0), v___y_777_, v___y_778_, v___y_770_, v___y_772_, v___y_779_, v___y_782_, lean_box(0));
return v___x_783_;
}
else
{
lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_784_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__4));
v___x_785_ = lean_name_eq(v___y_775_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__6));
v___x_787_ = lean_name_eq(v___y_775_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_788_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__8));
v___x_789_ = lean_name_eq(v___y_775_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__10));
v___x_791_ = lean_name_eq(v___y_775_, v___x_790_);
lean_dec(v___y_775_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; 
lean_dec_ref(v___y_781_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_766_);
lean_dec_ref(v___y_765_);
lean_inc(v___y_782_);
lean_inc_ref(v___y_779_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_770_);
lean_inc(v___y_778_);
lean_inc_ref(v___y_777_);
v___x_792_ = lean_apply_8(v___y_769_, lean_box(0), v___y_777_, v___y_778_, v___y_770_, v___y_772_, v___y_779_, v___y_782_, lean_box(0));
return v___x_792_;
}
else
{
lean_dec_ref(v___y_769_);
v___y_741_ = v___y_765_;
v___y_742_ = v___y_766_;
v___y_743_ = v___y_767_;
v___y_744_ = v___y_770_;
v___y_745_ = v___y_768_;
v___y_746_ = v___y_772_;
v___y_747_ = v___y_773_;
v___y_748_ = v___y_774_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_779_;
v___y_751_ = v___y_780_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_782_;
goto v___jp_740_;
}
}
else
{
lean_dec(v___y_775_);
lean_dec_ref(v___y_769_);
v___y_741_ = v___y_765_;
v___y_742_ = v___y_766_;
v___y_743_ = v___y_767_;
v___y_744_ = v___y_770_;
v___y_745_ = v___y_768_;
v___y_746_ = v___y_772_;
v___y_747_ = v___y_773_;
v___y_748_ = v___y_774_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_779_;
v___y_751_ = v___y_780_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_782_;
goto v___jp_740_;
}
}
else
{
lean_dec(v___y_775_);
lean_dec_ref(v___y_769_);
v___y_741_ = v___y_765_;
v___y_742_ = v___y_766_;
v___y_743_ = v___y_767_;
v___y_744_ = v___y_770_;
v___y_745_ = v___y_768_;
v___y_746_ = v___y_772_;
v___y_747_ = v___y_773_;
v___y_748_ = v___y_774_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_779_;
v___y_751_ = v___y_780_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_782_;
goto v___jp_740_;
}
}
else
{
lean_dec(v___y_775_);
lean_dec_ref(v___y_769_);
v___y_741_ = v___y_765_;
v___y_742_ = v___y_766_;
v___y_743_ = v___y_767_;
v___y_744_ = v___y_770_;
v___y_745_ = v___y_768_;
v___y_746_ = v___y_772_;
v___y_747_ = v___y_773_;
v___y_748_ = v___y_774_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_779_;
v___y_751_ = v___y_780_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_782_;
goto v___jp_740_;
}
}
}
v___jp_793_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_801_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__11));
lean_inc_ref(v___y_796_);
v___x_802_ = l_Lean_Name_mkStr2(v___y_796_, v___x_801_);
v___x_803_ = lean_array_push(v___y_794_, v___y_795_);
v___x_804_ = l_Lean_Meta_mkAppM(v___x_802_, v___x_803_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
return v___x_804_;
}
v___jp_805_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_813_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__11));
lean_inc_ref(v___y_808_);
v___x_814_ = l_Lean_Name_mkStr2(v___y_808_, v___x_813_);
v___x_815_ = lean_array_push(v___y_806_, v___y_807_);
v___x_816_ = l_Lean_Meta_mkAppM(v___x_814_, v___x_815_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
return v___x_816_;
}
v___jp_817_:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_825_, 0, v___y_818_);
lean_ctor_set(v___x_825_, 1, v___y_819_);
v___x_826_ = l_Lean_Meta_mkListLit(v___y_820_, v___x_825_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
return v___x_826_;
}
v___jp_827_:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = l_Lean_Expr_getAppFn(v___y_834_);
v___x_846_ = l_Lean_Expr_constName_x3f(v___x_845_);
lean_dec_ref(v___x_845_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v___x_847_; 
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_835_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v_kind_730_);
v___x_847_ = l_Lean_Meta_isExprDefEq(v___y_834_, v___y_831_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_857_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_857_ == 0)
{
v___x_850_ = v___x_847_;
v_isShared_851_ = v_isSharedCheck_857_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_857_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
uint8_t v___x_852_; 
v___x_852_ = lean_unbox(v_a_848_);
lean_dec(v_a_848_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_del_object(v___x_850_);
lean_dec_ref(v___y_830_);
lean_inc(v___y_844_);
lean_inc_ref(v___y_843_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_853_ = lean_apply_8(v___y_836_, lean_box(0), v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, lean_box(0));
return v___x_853_;
}
else
{
lean_object* v___x_855_; 
lean_dec_ref(v___y_836_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___y_830_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___y_830_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_830_);
v_a_858_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_847_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_847_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
else
{
lean_object* v_val_866_; uint8_t v___x_867_; 
v_val_866_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_val_866_);
lean_dec_ref_known(v___x_846_, 1);
v___x_867_ = lean_name_eq(v_val_866_, v_kind_730_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = lean_name_eq(v_val_866_, v___y_838_);
lean_dec(v___y_838_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
lean_dec_ref(v___y_831_);
v___x_869_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__12));
v___x_870_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__13));
v___x_871_ = lean_name_eq(v_val_866_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_872_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__14));
v___x_873_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__15));
v___x_874_ = lean_name_eq(v_val_866_, v___x_873_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
lean_dec_ref(v___y_834_);
lean_dec_ref(v___y_828_);
v___x_875_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__4));
v___x_876_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__5));
v___x_877_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__4));
v___x_878_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_879_ = lean_name_eq(v_kind_730_, v___x_878_);
lean_dec(v_kind_730_);
if (v___x_879_ == 0)
{
v___y_765_ = v___y_829_;
v___y_766_ = v___y_830_;
v___y_767_ = v___x_876_;
v___y_768_ = v___y_835_;
v___y_769_ = v___y_836_;
v___y_770_ = v___y_841_;
v___y_771_ = v___x_879_;
v___y_772_ = v___y_842_;
v___y_773_ = v___y_832_;
v___y_774_ = v___y_833_;
v___y_775_ = v_val_866_;
v___y_776_ = v___x_877_;
v___y_777_ = v___y_839_;
v___y_778_ = v___y_840_;
v___y_779_ = v___y_843_;
v___y_780_ = v___x_875_;
v___y_781_ = v___y_837_;
v___y_782_ = v___y_844_;
goto v___jp_764_;
}
else
{
lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_880_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__17));
v___x_881_ = lean_name_eq(v_val_866_, v___x_880_);
if (v___x_881_ == 0)
{
v___y_765_ = v___y_829_;
v___y_766_ = v___y_830_;
v___y_767_ = v___x_876_;
v___y_768_ = v___y_835_;
v___y_769_ = v___y_836_;
v___y_770_ = v___y_841_;
v___y_771_ = v___x_879_;
v___y_772_ = v___y_842_;
v___y_773_ = v___y_832_;
v___y_774_ = v___y_833_;
v___y_775_ = v_val_866_;
v___y_776_ = v___x_877_;
v___y_777_ = v___y_839_;
v___y_778_ = v___y_840_;
v___y_779_ = v___y_843_;
v___y_780_ = v___x_875_;
v___y_781_ = v___y_837_;
v___y_782_ = v___y_844_;
goto v___jp_764_;
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
lean_dec(v_val_866_);
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_829_);
v___x_882_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
v___x_883_ = l_Lean_Expr_const___override(v___x_882_, v___y_833_);
v___x_884_ = l_Lean_mkAppB(v___x_883_, v___y_832_, v___y_830_);
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v___y_835_);
v___x_886_ = l_Lean_Meta_mkListLit(v___y_837_, v___x_885_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
return v___x_886_;
}
}
}
else
{
lean_object* v___x_887_; 
lean_dec(v_val_866_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_835_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v_kind_730_);
v___x_887_ = l_Lean_Meta_mkAppM(v___x_873_, v___y_828_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_889_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
v___x_889_ = l_Lean_Meta_isExprDefEq(v___y_834_, v_a_888_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; uint8_t v___x_891_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
v___x_891_ = lean_unbox(v_a_890_);
lean_dec(v_a_890_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
lean_inc(v___y_844_);
lean_inc_ref(v___y_843_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_892_ = lean_apply_8(v___y_836_, lean_box(0), v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, lean_box(0));
if (lean_obj_tag(v___x_892_) == 0)
{
lean_dec_ref_known(v___x_892_, 1);
v___y_794_ = v___y_829_;
v___y_795_ = v___y_830_;
v___y_796_ = v___x_872_;
v___y_797_ = v___y_841_;
v___y_798_ = v___y_842_;
v___y_799_ = v___y_843_;
v___y_800_ = v___y_844_;
goto v___jp_793_;
}
else
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
v_a_893_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_900_ == 0)
{
v___x_895_ = v___x_892_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_892_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_a_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
else
{
lean_dec_ref(v___y_836_);
v___y_794_ = v___y_829_;
v___y_795_ = v___y_830_;
v___y_796_ = v___x_872_;
v___y_797_ = v___y_841_;
v___y_798_ = v___y_842_;
v___y_799_ = v___y_843_;
v___y_800_ = v___y_844_;
goto v___jp_793_;
}
}
else
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
v_a_901_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_889_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_889_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_834_);
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
return v___x_887_;
}
}
}
else
{
lean_object* v___x_909_; 
lean_dec(v_val_866_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_835_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v_kind_730_);
v___x_909_ = l_Lean_Meta_mkAppM(v___x_870_, v___y_828_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = l_Lean_Meta_isExprDefEq(v___y_834_, v_a_910_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; uint8_t v___x_913_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = lean_unbox(v_a_912_);
lean_dec(v_a_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; 
lean_inc(v___y_844_);
lean_inc_ref(v___y_843_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_914_ = lean_apply_8(v___y_836_, lean_box(0), v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, lean_box(0));
if (lean_obj_tag(v___x_914_) == 0)
{
lean_dec_ref_known(v___x_914_, 1);
v___y_806_ = v___y_829_;
v___y_807_ = v___y_830_;
v___y_808_ = v___x_869_;
v___y_809_ = v___y_841_;
v___y_810_ = v___y_842_;
v___y_811_ = v___y_843_;
v___y_812_ = v___y_844_;
goto v___jp_805_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_914_);
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
lean_dec_ref(v___y_836_);
v___y_806_ = v___y_829_;
v___y_807_ = v___y_830_;
v___y_808_ = v___x_869_;
v___y_809_ = v___y_841_;
v___y_810_ = v___y_842_;
v___y_811_ = v___y_843_;
v___y_812_ = v___y_844_;
goto v___jp_805_;
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
v_a_923_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_911_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_911_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
else
{
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_834_);
lean_dec_ref(v___y_830_);
lean_dec_ref(v___y_829_);
return v___x_909_;
}
}
}
else
{
lean_object* v___x_931_; 
lean_dec(v_val_866_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_835_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v_kind_730_);
v___x_931_ = l_Lean_Meta_isExprDefEq(v___y_834_, v___y_831_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_957_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_957_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_957_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_957_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
uint8_t v___x_936_; 
v___x_936_ = lean_unbox(v_a_932_);
lean_dec(v_a_932_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; 
lean_del_object(v___x_934_);
lean_inc(v___y_844_);
lean_inc_ref(v___y_843_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_937_ = lean_apply_8(v___y_836_, lean_box(0), v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, lean_box(0));
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; 
v_unused_945_ = lean_ctor_get(v___x_937_, 0);
lean_dec(v_unused_945_);
v___x_939_ = v___x_937_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_dec(v___x_937_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v___y_830_);
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___y_830_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___y_830_);
v_a_946_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_937_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_937_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_object* v___x_955_; 
lean_dec_ref(v___y_836_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___y_830_);
v___x_955_ = v___x_934_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___y_830_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref(v___y_836_);
lean_dec_ref(v___y_830_);
v_a_958_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_931_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_931_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
else
{
lean_object* v___x_966_; 
lean_dec(v_val_866_);
lean_dec(v___y_838_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec_ref(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v_kind_730_);
lean_inc_ref(v___y_837_);
v___x_966_ = l_Lean_Meta_isExprDefEq(v___y_834_, v___y_837_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; uint8_t v___x_968_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_966_, 1);
v___x_968_ = lean_unbox(v_a_967_);
lean_dec(v_a_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
lean_inc(v___y_844_);
lean_inc_ref(v___y_843_);
lean_inc(v___y_842_);
lean_inc_ref(v___y_841_);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
v___x_969_ = lean_apply_8(v___y_836_, lean_box(0), v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, lean_box(0));
if (lean_obj_tag(v___x_969_) == 0)
{
lean_dec_ref_known(v___x_969_, 1);
v___y_818_ = v___y_830_;
v___y_819_ = v___y_835_;
v___y_820_ = v___y_837_;
v___y_821_ = v___y_841_;
v___y_822_ = v___y_842_;
v___y_823_ = v___y_843_;
v___y_824_ = v___y_844_;
goto v___jp_817_;
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec_ref(v___y_837_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_830_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_dec_ref(v___y_836_);
v___y_818_ = v___y_830_;
v___y_819_ = v___y_835_;
v___y_820_ = v___y_837_;
v___y_821_ = v___y_841_;
v___y_822_ = v___y_842_;
v___y_823_ = v___y_843_;
v___y_824_ = v___y_844_;
goto v___jp_817_;
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec_ref(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_830_);
v_a_978_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_966_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_966_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
}
v___jp_986_:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_elemTy_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_994_ = lean_box(0);
lean_inc(v_kind_730_);
v___x_995_ = l_Lean_Expr_const___override(v_kind_730_, v___x_994_);
lean_inc_ref(v_msg_987_);
v_elemTy_996_ = l_Lean_Expr_app___override(v___x_995_, v_msg_987_);
v___x_997_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__20));
v___x_998_ = lean_unsigned_to_nat(1u);
v___x_999_ = lean_mk_empty_array_with_capacity(v___x_998_);
lean_inc_ref(v_elemTy_996_);
lean_inc_ref(v___x_999_);
v___x_1000_ = lean_array_push(v___x_999_, v_elemTy_996_);
lean_inc_ref(v___x_1000_);
v___x_1001_ = l_Lean_Meta_mkAppM(v___x_997_, v___x_1000_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; lean_object* v___x_1005_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 1);
v___x_1003_ = lean_box(0);
v___x_1004_ = 1;
lean_inc(v_t_731_);
v___x_1005_ = l_Lean_Elab_Term_elabTerm(v_t_731_, v___x_1003_, v___x_1004_, v___x_1004_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; uint8_t v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_1005_, 1);
v___x_1007_ = 0;
v___x_1008_ = 0;
v___x_1009_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_1007_, v___x_1008_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v___x_1010_; 
lean_dec_ref_known(v___x_1009_, 1);
lean_inc(v___y_993_);
lean_inc_ref(v___y_992_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v_a_1006_);
v___x_1010_ = lean_infer_type(v_a_1006_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v_a_1013_; lean_object* v___x_1014_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_resumePostponed_spec__0___redArg(v_a_1011_, v___y_991_);
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref(v___x_1012_);
v___x_1014_ = l_Lean_Meta_whnfR(v_a_1013_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___f_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc_n(v_a_1015_, 2);
lean_dec_ref_known(v___x_1014_, 1);
lean_inc(v_kind_730_);
v___f_1016_ = lean_alloc_closure((void*)(l_Lasm_UI_Syntax_elabSplice___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1016_, 0, v_a_1015_);
lean_closure_set(v___f_1016_, 1, v_t_731_);
lean_closure_set(v___f_1016_, 2, v_kind_730_);
v___x_1017_ = l_Lean_Expr_getAppFn(v_a_1015_);
v___x_1018_ = l_Lean_Expr_isMVar(v___x_1017_);
lean_dec_ref(v___x_1017_);
if (v___x_1018_ == 0)
{
v___y_828_ = v___x_1000_;
v___y_829_ = v___x_999_;
v___y_830_ = v_a_1006_;
v___y_831_ = v_a_1002_;
v___y_832_ = v_msg_987_;
v___y_833_ = v___x_994_;
v___y_834_ = v_a_1015_;
v___y_835_ = v___x_994_;
v___y_836_ = v___f_1016_;
v___y_837_ = v_elemTy_996_;
v___y_838_ = v___x_997_;
v___y_839_ = v___y_988_;
v___y_840_ = v___y_989_;
v___y_841_ = v___y_990_;
v___y_842_ = v___y_991_;
v___y_843_ = v___y_992_;
v___y_844_ = v___y_993_;
goto v___jp_827_;
}
else
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Elab_Term_tryPostpone(v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_dec_ref_known(v___x_1019_, 1);
v___y_828_ = v___x_1000_;
v___y_829_ = v___x_999_;
v___y_830_ = v_a_1006_;
v___y_831_ = v_a_1002_;
v___y_832_ = v_msg_987_;
v___y_833_ = v___x_994_;
v___y_834_ = v_a_1015_;
v___y_835_ = v___x_994_;
v___y_836_ = v___f_1016_;
v___y_837_ = v_elemTy_996_;
v___y_838_ = v___x_997_;
v___y_839_ = v___y_988_;
v___y_840_ = v___y_989_;
v___y_841_ = v___y_990_;
v___y_842_ = v___y_991_;
v___y_843_ = v___y_992_;
v___y_844_ = v___y_993_;
goto v___jp_827_;
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v___f_1016_);
lean_dec(v_a_1015_);
lean_dec(v_a_1006_);
lean_dec(v_a_1002_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_kind_730_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
else
{
lean_dec(v_a_1006_);
lean_dec(v_a_1002_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1014_;
}
}
else
{
lean_dec(v_a_1006_);
lean_dec(v_a_1002_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1010_;
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec(v_a_1006_);
lean_dec(v_a_1002_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
v_a_1028_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1009_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1009_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
else
{
lean_dec(v_a_1002_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1005_;
}
}
else
{
lean_dec_ref(v___x_1000_);
lean_dec_ref(v___x_999_);
lean_dec_ref(v_elemTy_996_);
lean_dec_ref(v_msg_987_);
lean_dec(v_t_731_);
lean_dec(v_kind_730_);
return v___x_1001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabSplice___boxed(lean_object* v_kind_1063_, lean_object* v_t_1064_, lean_object* v_expected_x3f_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_UI_Syntax_elabSplice(v_kind_1063_, v_t_1064_, v_expected_x3f_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v_a_1068_);
lean_dec(v_a_1067_);
lean_dec_ref(v_a_1066_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren(lean_object* v_stx_1074_, lean_object* v_expected_x3f_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1083_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__5));
v___x_1084_ = lean_unsigned_to_nat(1u);
v___x_1085_ = l_Lean_Syntax_getArg(v_stx_1074_, v___x_1084_);
v___x_1086_ = l_Lasm_UI_Syntax_elabSplice(v___x_1083_, v___x_1085_, v_expected_x3f_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabChildren___boxed(lean_object* v_stx_1087_, lean_object* v_expected_x3f_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_UI_Syntax_elabChildren(v_stx_1087_, v_expected_x3f_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
lean_dec(v_a_1094_);
lean_dec_ref(v_a_1093_);
lean_dec(v_a_1092_);
lean_dec_ref(v_a_1091_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
lean_dec(v_stx_1087_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs(lean_object* v_stx_1102_, lean_object* v_expected_x3f_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1111_ = ((lean_object*)(l_Lasm_UI_Syntax_elabAttrs___closed__1));
v___x_1112_ = lean_unsigned_to_nat(1u);
v___x_1113_ = l_Lean_Syntax_getArg(v_stx_1102_, v___x_1112_);
v___x_1114_ = l_Lasm_UI_Syntax_elabSplice(v___x_1111_, v___x_1113_, v_expected_x3f_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_elabAttrs___boxed(lean_object* v_stx_1115_, lean_object* v_expected_x3f_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lasm_UI_Syntax_elabAttrs(v_stx_1115_, v_expected_x3f_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_);
lean_dec(v_a_1122_);
lean_dec_ref(v_a_1121_);
lean_dec(v_a_1120_);
lean_dec_ref(v_a_1119_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_stx_1115_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf(lean_object* v_stx_1125_){
_start:
{
switch(lean_obj_tag(v_stx_1125_))
{
case 1:
{
lean_object* v_args_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v_args_1126_ = lean_ctor_get(v_stx_1125_, 2);
v___x_1127_ = lean_array_get_size(v_args_1126_);
v___x_1128_ = lean_unsigned_to_nat(1u);
v___x_1129_ = lean_nat_dec_eq(v___x_1127_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_Syntax_getAtomVal(v_stx_1125_);
return v___x_1130_;
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_unsigned_to_nat(0u);
v___x_1132_ = lean_array_fget_borrowed(v_args_1126_, v___x_1131_);
if (lean_obj_tag(v___x_1132_) == 2)
{
lean_object* v_val_1133_; 
v_val_1133_ = lean_ctor_get(v___x_1132_, 1);
lean_inc_ref(v_val_1133_);
return v_val_1133_;
}
else
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_Syntax_getAtomVal(v_stx_1125_);
return v___x_1134_;
}
}
}
case 2:
{
lean_object* v_val_1135_; 
v_val_1135_ = lean_ctor_get(v_stx_1125_, 1);
lean_inc_ref(v_val_1135_);
return v_val_1135_;
}
default: 
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lean_Syntax_getAtomVal(v_stx_1125_);
return v___x_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nameOf___boxed(lean_object* v_stx_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lasm_UI_Syntax_nameOf(v_stx_1137_);
lean_dec(v_stx_1137_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(lean_object* v___y_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
if (lean_obj_tag(v_a_1140_) == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_array_to_list(v_a_1141_);
return v___x_1142_;
}
else
{
lean_object* v_head_1143_; lean_object* v_tail_1144_; lean_object* v___y_1146_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; lean_object* v___y_1154_; 
v_head_1143_ = lean_ctor_get(v_a_1140_, 0);
lean_inc(v_head_1143_);
v_tail_1144_ = lean_ctor_get(v_a_1140_, 1);
lean_inc(v_tail_1144_);
lean_dec_ref_known(v_a_1140_, 2);
v___x_1149_ = lean_array_get_size(v_a_1141_);
v___x_1150_ = lean_unsigned_to_nat(1u);
v___x_1151_ = l_List_lengthTR___redArg(v___y_1139_);
v___x_1152_ = lean_nat_dec_lt(v___x_1150_, v___x_1151_);
if (v___x_1152_ == 0)
{
v___y_1154_ = v_head_1143_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = lean_nat_dec_lt(v___x_1163_, v___x_1149_);
if (v___x_1164_ == 0)
{
v___y_1154_ = v_head_1143_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1165_ = lean_string_utf8_byte_size(v_head_1143_);
lean_inc(v_head_1143_);
v___x_1166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1166_, 0, v_head_1143_);
lean_ctor_set(v___x_1166_, 1, v___x_1163_);
lean_ctor_set(v___x_1166_, 2, v___x_1165_);
v___x_1167_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v___x_1166_, v___x_1163_);
lean_dec_ref_known(v___x_1166_, 3);
v___x_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_head_1143_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
lean_ctor_set(v___x_1168_, 2, v___x_1165_);
v___x_1169_ = l_String_Slice_toString(v___x_1168_);
lean_dec_ref_known(v___x_1168_, 3);
v___y_1154_ = v___x_1169_;
goto v___jp_1153_;
}
}
v___jp_1145_:
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_array_push(v_a_1141_, v___y_1146_);
v_a_1140_ = v_tail_1144_;
v_a_1141_ = v___x_1147_;
goto _start;
}
v___jp_1153_:
{
if (v___x_1152_ == 0)
{
lean_dec(v___x_1151_);
v___y_1146_ = v___y_1154_;
goto v___jp_1145_;
}
else
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1155_ = lean_nat_add(v___x_1149_, v___x_1150_);
v___x_1156_ = lean_nat_dec_lt(v___x_1155_, v___x_1151_);
lean_dec(v___x_1151_);
lean_dec(v___x_1155_);
if (v___x_1156_ == 0)
{
v___y_1146_ = v___y_1154_;
goto v___jp_1145_;
}
else
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1157_ = lean_unsigned_to_nat(0u);
v___x_1158_ = lean_string_utf8_byte_size(v___y_1154_);
lean_inc_ref(v___y_1154_);
v___x_1159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1159_, 0, v___y_1154_);
lean_ctor_set(v___x_1159_, 1, v___x_1157_);
lean_ctor_set(v___x_1159_, 2, v___x_1158_);
v___x_1160_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v___x_1159_, v___x_1158_);
lean_dec_ref_known(v___x_1159_, 3);
v___x_1161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1161_, 0, v___y_1154_);
lean_ctor_set(v___x_1161_, 1, v___x_1157_);
lean_ctor_set(v___x_1161_, 2, v___x_1160_);
v___x_1162_ = l_String_Slice_toString(v___x_1161_);
lean_dec_ref_known(v___x_1161_, 3);
v___y_1146_ = v___x_1162_;
goto v___jp_1145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1___boxed(lean_object* v___y_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___y_1170_, v_a_1171_, v_a_1172_);
lean_dec(v___y_1170_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(lean_object* v___x_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
if (lean_obj_tag(v_a_1175_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = l_List_reverse___redArg(v_a_1176_);
return v___x_1177_;
}
else
{
lean_object* v_head_1178_; lean_object* v_tail_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1194_; 
v_head_1178_ = lean_ctor_get(v_a_1175_, 0);
v_tail_1179_ = lean_ctor_get(v_a_1175_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_a_1175_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1181_ = v_a_1175_;
v_isShared_1182_ = v_isSharedCheck_1194_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_tail_1179_);
lean_inc(v_head_1178_);
lean_dec(v_a_1175_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1194_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = lean_string_utf8_byte_size(v_head_1178_);
v___x_1184_ = lean_unsigned_to_nat(0u);
v___x_1185_ = lean_nat_dec_eq(v___x_1183_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1186_ = lean_unsigned_to_nat(1u);
v___x_1187_ = lean_nat_dec_lt(v___x_1186_, v___x_1174_);
if (v___x_1187_ == 0)
{
lean_del_object(v___x_1181_);
lean_dec(v_head_1178_);
v_a_1175_ = v_tail_1179_;
goto _start;
}
else
{
lean_object* v___x_1190_; 
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v_a_1176_);
v___x_1190_ = v___x_1181_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_head_1178_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_a_1176_);
v___x_1190_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
v_a_1175_ = v_tail_1179_;
v_a_1176_ = v___x_1190_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_1181_);
lean_dec(v_head_1178_);
v_a_1175_ = v_tail_1179_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2___boxed(lean_object* v___x_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1195_, v_a_1196_, v_a_1197_);
lean_dec(v___x_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(lean_object* v___x_1199_, lean_object* v_joined_1200_, lean_object* v_a_1201_, lean_object* v_b_1202_){
_start:
{
uint8_t v_decide_1203_; 
v_decide_1203_ = lean_nat_dec_eq(v_a_1201_, v___x_1199_);
if (v_decide_1203_ == 0)
{
lean_object* v_fst_1204_; lean_object* v_snd_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1238_; 
v_fst_1204_ = lean_ctor_get(v_b_1202_, 0);
v_snd_1205_ = lean_ctor_get(v_b_1202_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_b_1202_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1207_ = v_b_1202_;
v_isShared_1208_ = v_isSharedCheck_1238_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1205_);
lean_inc(v_fst_1204_);
lean_dec(v_b_1202_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1238_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
uint32_t v___x_1209_; lean_object* v___x_1210_; uint32_t v___x_1226_; uint8_t v___x_1227_; 
v___x_1209_ = lean_string_utf8_get_fast(v_joined_1200_, v_a_1201_);
v___x_1210_ = lean_string_utf8_next_fast(v_joined_1200_, v_a_1201_);
lean_dec(v_a_1201_);
v___x_1226_ = 32;
v___x_1227_ = lean_uint32_dec_eq(v___x_1209_, v___x_1226_);
if (v___x_1227_ == 0)
{
uint32_t v___x_1228_; uint8_t v___x_1229_; 
v___x_1228_ = 9;
v___x_1229_ = lean_uint32_dec_eq(v___x_1209_, v___x_1228_);
if (v___x_1229_ == 0)
{
uint32_t v___x_1230_; uint8_t v___x_1231_; 
v___x_1230_ = 13;
v___x_1231_ = lean_uint32_dec_eq(v___x_1209_, v___x_1230_);
if (v___x_1231_ == 0)
{
uint32_t v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = 10;
v___x_1233_ = lean_uint32_dec_eq(v___x_1209_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
lean_del_object(v___x_1207_);
lean_dec(v_snd_1205_);
v___x_1234_ = lean_string_push(v_fst_1204_, v___x_1209_);
v___x_1235_ = lean_box(v___x_1233_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v_a_1201_ = v___x_1210_;
v_b_1202_ = v___x_1236_;
goto _start;
}
else
{
goto v___jp_1211_;
}
}
else
{
goto v___jp_1211_;
}
}
else
{
goto v___jp_1211_;
}
}
else
{
goto v___jp_1211_;
}
v___jp_1211_:
{
uint8_t v___x_1212_; uint8_t v___x_1213_; 
v___x_1212_ = 1;
v___x_1213_ = lean_unbox(v_snd_1205_);
lean_dec(v_snd_1205_);
if (v___x_1213_ == 0)
{
uint32_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1214_ = 32;
v___x_1215_ = lean_string_push(v_fst_1204_, v___x_1214_);
v___x_1216_ = lean_box(v___x_1212_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1216_);
lean_ctor_set(v___x_1207_, 0, v___x_1215_);
v___x_1218_ = v___x_1207_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v_a_1201_ = v___x_1210_;
v_b_1202_ = v___x_1218_;
goto _start;
}
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_box(v___x_1212_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1221_);
v___x_1223_ = v___x_1207_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_fst_1204_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
v_a_1201_ = v___x_1210_;
v_b_1202_ = v___x_1223_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_a_1201_);
return v_b_1202_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg___boxed(lean_object* v___x_1239_, lean_object* v_joined_1240_, lean_object* v_a_1241_, lean_object* v_b_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1239_, v_joined_1240_, v_a_1241_, v_b_1242_);
lean_dec_ref(v_joined_1240_);
lean_dec(v___x_1239_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace(lean_object* v_s_1252_){
_start:
{
lean_object* v___y_1254_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_lines_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v___x_1262_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___lam__0___closed__2));
v___x_1263_ = lean_unsigned_to_nat(0u);
v___x_1264_ = lean_box(0);
v___x_1265_ = l_String_splitOnAux(v_s_1252_, v___x_1262_, v___x_1263_, v___x_1263_, v___x_1263_, v___x_1264_);
v___x_1266_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__3));
lean_inc(v___x_1265_);
v_lines_1267_ = l_List_mapIdx_go___at___00Lasm_UI_Syntax_jsxWhitespace_spec__1(v___x_1265_, v___x_1265_, v___x_1266_);
v___x_1268_ = lean_unsigned_to_nat(1u);
v___x_1269_ = l_List_lengthTR___redArg(v___x_1265_);
lean_dec(v___x_1265_);
v___x_1270_ = lean_nat_dec_lt(v___x_1268_, v___x_1269_);
if (v___x_1270_ == 0)
{
lean_dec(v___x_1269_);
v___y_1254_ = v_lines_1267_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1271_; 
v___x_1271_ = l_List_filterTR_loop___at___00Lasm_UI_Syntax_jsxWhitespace_spec__2(v___x_1269_, v_lines_1267_, v___x_1264_);
lean_dec(v___x_1269_);
v___y_1254_ = v___x_1271_;
goto v___jp_1253_;
}
v___jp_1253_:
{
lean_object* v___x_1255_; lean_object* v_joined_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_fst_1261_; 
v___x_1255_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v_joined_1256_ = l_String_intercalate(v___x_1255_, v___y_1254_);
v___x_1257_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__2));
v___x_1258_ = lean_string_utf8_byte_size(v_joined_1256_);
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1258_, v_joined_1256_, v___x_1259_, v___x_1257_);
lean_dec_ref(v_joined_1256_);
v_fst_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_fst_1261_);
lean_dec_ref(v___x_1260_);
return v_fst_1261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_jsxWhitespace___boxed(lean_object* v_s_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lasm_UI_Syntax_jsxWhitespace(v_s_1272_);
lean_dec_ref(v_s_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(lean_object* v___x_1274_, lean_object* v___x_1275_, lean_object* v_joined_1276_, lean_object* v_inst_1277_, lean_object* v_R_1278_, lean_object* v_a_1279_, lean_object* v_b_1280_, lean_object* v_c_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___redArg(v___x_1275_, v_joined_1276_, v_a_1279_, v_b_1280_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0___boxed(lean_object* v___x_1283_, lean_object* v___x_1284_, lean_object* v_joined_1285_, lean_object* v_inst_1286_, lean_object* v_R_1287_, lean_object* v_a_1288_, lean_object* v_b_1289_, lean_object* v_c_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_jsxWhitespace_spec__0(v___x_1283_, v___x_1284_, v_joined_1285_, v_inst_1286_, v_R_1287_, v_a_1288_, v_b_1289_, v_c_1290_);
lean_dec_ref(v_joined_1285_);
lean_dec(v___x_1284_);
lean_dec_ref(v___x_1283_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(lean_object* v___x_1292_, lean_object* v___x_1293_, lean_object* v_a_1294_, lean_object* v_b_1295_){
_start:
{
uint8_t v_decide_1296_; 
v_decide_1296_ = lean_nat_dec_eq(v_a_1294_, v___x_1292_);
if (v_decide_1296_ == 0)
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_string_utf8_next_fast(v___x_1293_, v_a_1294_);
if (lean_obj_tag(v_b_1295_) == 0)
{
lean_dec(v_a_1294_);
v_a_1294_ = v___x_1297_;
goto _start;
}
else
{
lean_object* v_val_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1354_; 
v_val_1302_ = lean_ctor_get(v_b_1295_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_b_1295_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1304_ = v_b_1295_;
v_isShared_1305_ = v_isSharedCheck_1354_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_val_1302_);
lean_dec(v_b_1295_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1354_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
uint32_t v___y_1307_; uint32_t v___y_1308_; uint32_t v___x_1323_; uint32_t v___y_1325_; uint32_t v___y_1326_; uint32_t v___x_1342_; uint8_t v___x_1343_; 
v___x_1323_ = lean_string_utf8_get_fast(v___x_1293_, v_a_1294_);
lean_dec(v_a_1294_);
v___x_1342_ = 48;
v___x_1343_ = lean_uint32_dec_le(v___x_1342_, v___x_1323_);
if (v___x_1343_ == 0)
{
goto v___jp_1334_;
}
else
{
uint32_t v___x_1344_; uint8_t v___x_1345_; 
v___x_1344_ = 57;
v___x_1345_ = lean_uint32_dec_le(v___x_1323_, v___x_1344_);
if (v___x_1345_ == 0)
{
goto v___jp_1334_;
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_del_object(v___x_1304_);
v___x_1346_ = lean_unsigned_to_nat(16u);
v___x_1347_ = lean_nat_mul(v_val_1302_, v___x_1346_);
lean_dec(v_val_1302_);
v___x_1348_ = lean_uint32_to_nat(v___x_1323_);
v___x_1349_ = lean_unsigned_to_nat(48u);
v___x_1350_ = lean_nat_sub(v___x_1348_, v___x_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_nat_add(v___x_1347_, v___x_1350_);
lean_dec(v___x_1350_);
lean_dec(v___x_1347_);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
v_a_1294_ = v___x_1297_;
v_b_1295_ = v___x_1352_;
goto _start;
}
}
v___jp_1306_:
{
uint32_t v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = 102;
v___x_1310_ = lean_uint32_dec_le(v___y_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_del_object(v___x_1304_);
lean_dec(v_val_1302_);
goto v___jp_1298_;
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
v___x_1311_ = lean_unsigned_to_nat(16u);
v___x_1312_ = lean_nat_mul(v_val_1302_, v___x_1311_);
lean_dec(v_val_1302_);
v___x_1313_ = lean_uint32_to_nat(v___y_1307_);
v___x_1314_ = lean_unsigned_to_nat(97u);
v___x_1315_ = lean_nat_sub(v___x_1313_, v___x_1314_);
lean_dec(v___x_1313_);
v___x_1316_ = lean_unsigned_to_nat(10u);
v___x_1317_ = lean_nat_add(v___x_1315_, v___x_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_nat_add(v___x_1312_, v___x_1317_);
lean_dec(v___x_1317_);
lean_dec(v___x_1312_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 0, v___x_1318_);
v___x_1320_ = v___x_1304_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
v_a_1294_ = v___x_1297_;
v_b_1295_ = v___x_1320_;
goto _start;
}
}
}
v___jp_1324_:
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_uint32_dec_le(v___y_1325_, v___y_1326_);
if (v___x_1327_ == 0)
{
lean_del_object(v___x_1304_);
lean_dec(v_val_1302_);
goto v___jp_1298_;
}
else
{
uint32_t v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = 65;
v___x_1329_ = lean_uint32_dec_le(v___x_1328_, v___x_1323_);
if (v___x_1329_ == 0)
{
v___y_1307_ = v___y_1326_;
v___y_1308_ = v___x_1323_;
goto v___jp_1306_;
}
else
{
uint32_t v___x_1330_; uint8_t v___x_1331_; 
v___x_1330_ = 90;
v___x_1331_ = lean_uint32_dec_le(v___x_1323_, v___x_1330_);
if (v___x_1331_ == 0)
{
v___y_1307_ = v___y_1326_;
v___y_1308_ = v___x_1323_;
goto v___jp_1306_;
}
else
{
uint32_t v___x_1332_; uint32_t v___x_1333_; 
v___x_1332_ = 32;
v___x_1333_ = lean_uint32_add(v___x_1323_, v___x_1332_);
v___y_1307_ = v___y_1326_;
v___y_1308_ = v___x_1333_;
goto v___jp_1306_;
}
}
}
}
v___jp_1334_:
{
uint32_t v___x_1335_; uint32_t v___x_1336_; uint8_t v___x_1337_; 
v___x_1335_ = 97;
v___x_1336_ = 65;
v___x_1337_ = lean_uint32_dec_le(v___x_1336_, v___x_1323_);
if (v___x_1337_ == 0)
{
v___y_1325_ = v___x_1335_;
v___y_1326_ = v___x_1323_;
goto v___jp_1324_;
}
else
{
uint32_t v___x_1338_; uint8_t v___x_1339_; 
v___x_1338_ = 90;
v___x_1339_ = lean_uint32_dec_le(v___x_1323_, v___x_1338_);
if (v___x_1339_ == 0)
{
v___y_1325_ = v___x_1335_;
v___y_1326_ = v___x_1323_;
goto v___jp_1324_;
}
else
{
uint32_t v___x_1340_; uint32_t v___x_1341_; 
v___x_1340_ = 32;
v___x_1341_ = lean_uint32_add(v___x_1323_, v___x_1340_);
v___y_1325_ = v___x_1335_;
v___y_1326_ = v___x_1341_;
goto v___jp_1324_;
}
}
}
}
}
v___jp_1298_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_box(0);
v_a_1294_ = v___x_1297_;
v_b_1295_ = v___x_1299_;
goto _start;
}
}
else
{
lean_dec(v_a_1294_);
return v_b_1295_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg___boxed(lean_object* v___x_1355_, lean_object* v___x_1356_, lean_object* v_a_1357_, lean_object* v_b_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1355_, v___x_1356_, v_a_1357_, v_b_1358_);
lean_dec_ref(v___x_1356_);
lean_dec(v___x_1355_);
return v_res_1359_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14));
v___x_1376_ = lean_string_utf8_byte_size(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17));
v___x_1381_ = lean_string_utf8_byte_size(v___x_1380_);
return v___x_1381_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19));
v___x_1384_ = lean_string_utf8_byte_size(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(lean_object* v_as_x27_1395_, lean_object* v_b_1396_){
_start:
{
if (lean_obj_tag(v_as_x27_1395_) == 0)
{
return v_b_1396_;
}
else
{
lean_object* v_head_1397_; lean_object* v_tail_1398_; lean_object* v___x_1399_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_head_1397_ = lean_ctor_get(v_as_x27_1395_, 0);
v_tail_1398_ = lean_ctor_get(v_as_x27_1395_, 1);
v___x_1399_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1408_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__1));
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_box(0);
v___x_1411_ = l_String_splitOnAux(v_head_1397_, v___x_1408_, v___x_1409_, v___x_1409_, v___x_1409_, v___x_1410_);
if (lean_obj_tag(v___x_1411_) == 1)
{
lean_object* v_tail_1412_; 
v_tail_1412_ = lean_ctor_get(v___x_1411_, 1);
lean_inc(v_tail_1412_);
if (lean_obj_tag(v_tail_1412_) == 1)
{
lean_object* v_head_1413_; lean_object* v___x_1414_; lean_object* v_val_1416_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v_head_1413_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_head_1413_);
lean_dec_ref_known(v___x_1411_, 2);
v___x_1414_ = l_String_intercalate(v___x_1408_, v_tail_1412_);
v___x_1420_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__2));
v___x_1421_ = lean_string_dec_eq(v_head_1413_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__3));
v___x_1423_ = lean_string_dec_eq(v_head_1413_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; uint8_t v___x_1425_; 
v___x_1424_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__4));
v___x_1425_ = lean_string_dec_eq(v_head_1413_, v___x_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__3));
v___x_1427_ = lean_string_dec_eq(v_head_1413_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1428_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__5));
v___x_1429_ = lean_string_dec_eq(v_head_1413_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__6));
v___x_1431_ = lean_string_dec_eq(v_head_1413_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; uint8_t v___x_1433_; 
v___x_1432_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__7));
v___x_1433_ = lean_string_dec_eq(v_head_1413_, v___x_1432_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; uint8_t v___x_1435_; 
v___x_1434_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__8));
v___x_1435_ = lean_string_dec_eq(v_head_1413_, v___x_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__9));
v___x_1437_ = lean_string_dec_eq(v_head_1413_, v___x_1436_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1438_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__10));
v___x_1439_ = lean_string_dec_eq(v_head_1413_, v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1440_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__11));
v___x_1441_ = lean_string_dec_eq(v_head_1413_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__12));
v___x_1443_ = lean_string_dec_eq(v_head_1413_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__13));
v___x_1445_ = lean_string_dec_eq(v_head_1413_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; uint8_t v___x_1486_; 
v___x_1446_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1483_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__19));
v___x_1484_ = lean_string_utf8_byte_size(v_head_1413_);
v___x_1485_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__20);
v___x_1486_ = lean_nat_dec_le(v___x_1485_, v___x_1484_);
if (v___x_1486_ == 0)
{
goto v___jp_1477_;
}
else
{
uint8_t v___x_1487_; 
v___x_1487_ = lean_string_memcmp(v_head_1413_, v___x_1483_, v___x_1409_, v___x_1409_, v___x_1485_);
if (v___x_1487_ == 0)
{
goto v___jp_1477_;
}
else
{
goto v___jp_1464_;
}
}
v___jp_1447_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1448_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__14));
v___x_1449_ = lean_string_utf8_byte_size(v_head_1413_);
v___x_1450_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__15);
v___x_1451_ = lean_nat_dec_le(v___x_1450_, v___x_1449_);
if (v___x_1451_ == 0)
{
lean_dec_ref(v___x_1414_);
lean_dec(v_head_1413_);
goto v___jp_1404_;
}
else
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_string_memcmp(v_head_1413_, v___x_1448_, v___x_1409_, v___x_1409_, v___x_1450_);
if (v___x_1452_ == 0)
{
lean_dec_ref(v___x_1414_);
lean_dec(v_head_1413_);
goto v___jp_1404_;
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1453_ = lean_unsigned_to_nat(1u);
lean_inc(v_head_1413_);
v___x_1454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1454_, 0, v_head_1413_);
lean_ctor_set(v___x_1454_, 1, v___x_1409_);
lean_ctor_set(v___x_1454_, 2, v___x_1449_);
v___x_1455_ = l_String_Slice_Pos_nextn(v___x_1454_, v___x_1409_, v___x_1453_);
lean_dec_ref_known(v___x_1454_, 3);
v___x_1456_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1456_, 0, v_head_1413_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
lean_ctor_set(v___x_1456_, 2, v___x_1449_);
v___x_1457_ = l_String_Slice_toString(v___x_1456_);
lean_dec_ref_known(v___x_1456_, 3);
v___x_1458_ = lean_string_utf8_byte_size(v___x_1457_);
v___x_1459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1409_);
lean_ctor_set(v___x_1459_, 2, v___x_1458_);
v___x_1460_ = l_String_Slice_toNat_x3f(v___x_1459_);
lean_dec_ref_known(v___x_1459_, 3);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_dec_ref(v___x_1414_);
goto v___jp_1404_;
}
else
{
lean_object* v_val_1461_; uint32_t v___x_1462_; lean_object* v___x_1463_; 
v_val_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_val_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = l_Char_ofNat(v_val_1461_);
lean_dec(v_val_1461_);
v___x_1463_ = lean_string_push(v___x_1446_, v___x_1462_);
v_val_1416_ = v___x_1463_;
goto v___jp_1415_;
}
}
}
}
v___jp_1464_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1465_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__16));
v___x_1466_ = lean_unsigned_to_nat(2u);
v___x_1467_ = lean_string_utf8_byte_size(v_head_1413_);
lean_inc(v_head_1413_);
v___x_1468_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1468_, 0, v_head_1413_);
lean_ctor_set(v___x_1468_, 1, v___x_1409_);
lean_ctor_set(v___x_1468_, 2, v___x_1467_);
v___x_1469_ = l_String_Slice_Pos_nextn(v___x_1468_, v___x_1409_, v___x_1466_);
lean_dec_ref_known(v___x_1468_, 3);
v___x_1470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1470_, 0, v_head_1413_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
lean_ctor_set(v___x_1470_, 2, v___x_1467_);
v___x_1471_ = l_String_Slice_toString(v___x_1470_);
lean_dec_ref_known(v___x_1470_, 3);
v___x_1472_ = lean_string_utf8_byte_size(v___x_1471_);
v___x_1473_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1472_, v___x_1471_, v___x_1409_, v___x_1465_);
lean_dec_ref(v___x_1471_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_dec_ref(v___x_1414_);
goto v___jp_1404_;
}
else
{
lean_object* v_val_1474_; uint32_t v___x_1475_; lean_object* v___x_1476_; 
v_val_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_val_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1475_ = l_Char_ofNat(v_val_1474_);
lean_dec(v_val_1474_);
v___x_1476_ = lean_string_push(v___x_1446_, v___x_1475_);
v_val_1416_ = v___x_1476_;
goto v___jp_1415_;
}
}
v___jp_1477_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; uint8_t v___x_1481_; 
v___x_1478_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__17));
v___x_1479_ = lean_string_utf8_byte_size(v_head_1413_);
v___x_1480_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18, &l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18_once, _init_l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__18);
v___x_1481_ = lean_nat_dec_le(v___x_1480_, v___x_1479_);
if (v___x_1481_ == 0)
{
goto v___jp_1447_;
}
else
{
uint8_t v___x_1482_; 
v___x_1482_ = lean_string_memcmp(v_head_1413_, v___x_1478_, v___x_1409_, v___x_1409_, v___x_1480_);
if (v___x_1482_ == 0)
{
goto v___jp_1447_;
}
else
{
goto v___jp_1464_;
}
}
}
}
else
{
lean_object* v___x_1488_; 
lean_dec(v_head_1413_);
v___x_1488_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__21));
v_val_1416_ = v___x_1488_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1489_; 
lean_dec(v_head_1413_);
v___x_1489_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__22));
v_val_1416_ = v___x_1489_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1490_; 
lean_dec(v_head_1413_);
v___x_1490_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__23));
v_val_1416_ = v___x_1490_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1491_; 
lean_dec(v_head_1413_);
v___x_1491_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__24));
v_val_1416_ = v___x_1491_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1492_; 
lean_dec(v_head_1413_);
v___x_1492_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__25));
v_val_1416_ = v___x_1492_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1493_; 
lean_dec(v_head_1413_);
v___x_1493_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__26));
v_val_1416_ = v___x_1493_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1494_; 
lean_dec(v_head_1413_);
v___x_1494_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__27));
v_val_1416_ = v___x_1494_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec(v_head_1413_);
v___x_1495_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__28));
v_val_1416_ = v___x_1495_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1496_; 
lean_dec(v_head_1413_);
v___x_1496_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__29));
v_val_1416_ = v___x_1496_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1497_; 
lean_dec(v_head_1413_);
v___x_1497_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__30));
v_val_1416_ = v___x_1497_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1498_; 
lean_dec(v_head_1413_);
v___x_1498_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v_val_1416_ = v___x_1498_;
goto v___jp_1415_;
}
}
else
{
lean_object* v___x_1499_; 
lean_dec(v_head_1413_);
v___x_1499_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v_val_1416_ = v___x_1499_;
goto v___jp_1415_;
}
}
else
{
lean_dec(v_head_1413_);
v_val_1416_ = v___x_1399_;
goto v___jp_1415_;
}
v___jp_1415_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = lean_string_append(v_b_1396_, v_val_1416_);
lean_dec_ref(v_val_1416_);
v___x_1418_ = lean_string_append(v___x_1417_, v___x_1414_);
lean_dec_ref(v___x_1414_);
v_as_x27_1395_ = v_tail_1398_;
v_b_1396_ = v___x_1418_;
goto _start;
}
}
else
{
lean_dec_ref_known(v___x_1411_, 2);
lean_dec(v_tail_1412_);
goto v___jp_1400_;
}
}
else
{
lean_dec(v___x_1411_);
goto v___jp_1400_;
}
v___jp_1400_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = lean_string_append(v_b_1396_, v___x_1399_);
v___x_1402_ = lean_string_append(v___x_1401_, v_head_1397_);
v_as_x27_1395_ = v_tail_1398_;
v_b_1396_ = v___x_1402_;
goto _start;
}
v___jp_1404_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_string_append(v_b_1396_, v___x_1399_);
v___x_1406_ = lean_string_append(v___x_1405_, v_head_1397_);
v_as_x27_1395_ = v_tail_1398_;
v_b_1396_ = v___x_1406_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___boxed(lean_object* v_as_x27_1500_, lean_object* v_b_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1500_, v_b_1501_);
lean_dec(v_as_x27_1500_);
return v_res_1502_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(lean_object* v_s_1503_, lean_object* v_a_1504_, uint8_t v_b_1505_){
_start:
{
lean_object* v_str_1506_; lean_object* v_startInclusive_1507_; lean_object* v_endExclusive_1508_; lean_object* v___x_1509_; uint8_t v_decide_1510_; 
v_str_1506_ = lean_ctor_get(v_s_1503_, 0);
v_startInclusive_1507_ = lean_ctor_get(v_s_1503_, 1);
v_endExclusive_1508_ = lean_ctor_get(v_s_1503_, 2);
v___x_1509_ = lean_nat_sub(v_endExclusive_1508_, v_startInclusive_1507_);
v_decide_1510_ = lean_nat_dec_eq(v_a_1504_, v___x_1509_);
lean_dec(v___x_1509_);
if (v_decide_1510_ == 0)
{
lean_object* v___x_1511_; uint32_t v___x_1512_; uint32_t v___x_1513_; uint8_t v___x_1514_; 
v___x_1511_ = lean_nat_add(v_startInclusive_1507_, v_a_1504_);
lean_dec(v_a_1504_);
v___x_1512_ = lean_string_utf8_get_fast(v_str_1506_, v___x_1511_);
v___x_1513_ = 38;
v___x_1514_ = lean_uint32_dec_eq(v___x_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = lean_string_utf8_next_fast(v_str_1506_, v___x_1511_);
lean_dec(v___x_1511_);
v___x_1516_ = lean_nat_sub(v___x_1515_, v_startInclusive_1507_);
v_a_1504_ = v___x_1516_;
v_b_1505_ = v___x_1514_;
goto _start;
}
else
{
lean_dec(v___x_1511_);
return v___x_1514_;
}
}
else
{
lean_dec(v_a_1504_);
return v_b_1505_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg___boxed(lean_object* v_s_1518_, lean_object* v_a_1519_, lean_object* v_b_1520_){
_start:
{
uint8_t v_b_boxed_1521_; uint8_t v_res_1522_; lean_object* v_r_1523_; 
v_b_boxed_1521_ = lean_unbox(v_b_1520_);
v_res_1522_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1518_, v_a_1519_, v_b_boxed_1521_);
lean_dec_ref(v_s_1518_);
v_r_1523_ = lean_box(v_res_1522_);
return v_r_1523_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(lean_object* v_s_1524_){
_start:
{
lean_object* v_searcher_1525_; uint8_t v___x_1526_; uint8_t v___x_1527_; 
v_searcher_1525_ = lean_unsigned_to_nat(0u);
v___x_1526_ = 0;
v___x_1527_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1524_, v_searcher_1525_, v___x_1526_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0___boxed(lean_object* v_s_1528_){
_start:
{
uint8_t v_res_1529_; lean_object* v_r_1530_; 
v_res_1529_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v_s_1528_);
lean_dec_ref(v_s_1528_);
v_r_1530_ = lean_box(v_res_1529_);
return v_r_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_decodeEntities(lean_object* v_s_1531_){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v___x_1532_ = lean_unsigned_to_nat(0u);
v___x_1533_ = lean_string_utf8_byte_size(v_s_1531_);
lean_inc_ref(v_s_1531_);
v___x_1534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1534_, 0, v_s_1531_);
lean_ctor_set(v___x_1534_, 1, v___x_1532_);
lean_ctor_set(v___x_1534_, 2, v___x_1533_);
v___x_1535_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0(v___x_1534_);
lean_dec_ref_known(v___x_1534_, 3);
if (v___x_1535_ == 0)
{
return v_s_1531_;
}
else
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v_out_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1536_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1537_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg___closed__0));
v___x_1538_ = lean_box(0);
v___x_1539_ = l_String_splitOnAux(v_s_1531_, v___x_1537_, v___x_1532_, v___x_1532_, v___x_1532_, v___x_1538_);
lean_dec_ref(v_s_1531_);
v_out_1540_ = l_List_head_x21___redArg(v___x_1536_, v___x_1539_);
v___x_1541_ = l_List_tail_x21___redArg(v___x_1539_);
lean_dec(v___x_1539_);
v___x_1542_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v___x_1541_, v_out_1540_);
lean_dec(v___x_1541_);
return v___x_1542_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(lean_object* v___x_1543_, lean_object* v___x_1544_, lean_object* v___x_1545_, lean_object* v_inst_1546_, lean_object* v_R_1547_, lean_object* v_a_1548_, lean_object* v_b_1549_, lean_object* v_c_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___redArg(v___x_1544_, v___x_1545_, v_a_1548_, v_b_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1___boxed(lean_object* v___x_1552_, lean_object* v___x_1553_, lean_object* v___x_1554_, lean_object* v_inst_1555_, lean_object* v_R_1556_, lean_object* v_a_1557_, lean_object* v_b_1558_, lean_object* v_c_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_WellFounded_opaqueFix_u2083___at___00Lasm_UI_Syntax_decodeEntities_spec__1(v___x_1552_, v___x_1553_, v___x_1554_, v_inst_1555_, v_R_1556_, v_a_1557_, v_b_1558_, v_c_1559_);
lean_dec_ref(v___x_1554_);
lean_dec(v___x_1553_);
lean_dec_ref(v___x_1552_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(lean_object* v_as_1561_, lean_object* v_as_x27_1562_, lean_object* v_b_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___redArg(v_as_x27_1562_, v_b_1563_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2___boxed(lean_object* v_as_1566_, lean_object* v_as_x27_1567_, lean_object* v_b_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_List_forIn_x27_loop___at___00Lasm_UI_Syntax_decodeEntities_spec__2(v_as_1566_, v_as_x27_1567_, v_b_1568_, v_a_1569_);
lean_dec(v_as_x27_1567_);
lean_dec(v_as_1566_);
return v_res_1570_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(lean_object* v_s_1571_, lean_object* v_inst_1572_, lean_object* v_R_1573_, lean_object* v_a_1574_, uint8_t v_b_1575_, lean_object* v_c_1576_){
_start:
{
uint8_t v___x_1577_; 
v___x_1577_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___redArg(v_s_1571_, v_a_1574_, v_b_1575_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0___boxed(lean_object* v_s_1578_, lean_object* v_inst_1579_, lean_object* v_R_1580_, lean_object* v_a_1581_, lean_object* v_b_1582_, lean_object* v_c_1583_){
_start:
{
uint8_t v_b_boxed_1584_; uint8_t v_res_1585_; lean_object* v_r_1586_; 
v_b_boxed_1584_ = lean_unbox(v_b_1582_);
v_res_1585_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_decodeEntities_spec__0_spec__0(v_s_1578_, v_inst_1579_, v_R_1580_, v_a_1581_, v_b_boxed_1584_, v_c_1583_);
lean_dec_ref(v_s_1578_);
v_r_1586_ = lean_box(v_res_1585_);
return v_r_1586_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_isEventName___closed__1(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_1775_ = lean_string_utf8_byte_size(v___x_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Syntax_isEventName(lean_object* v_n_1776_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1777_ = lean_unsigned_to_nat(2u);
v___x_1778_ = lean_string_length(v_n_1776_);
v___x_1779_ = lean_nat_dec_lt(v___x_1777_, v___x_1778_);
if (v___x_1779_ == 0)
{
lean_dec_ref(v_n_1776_);
return v___x_1779_;
}
else
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1780_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_1781_ = lean_string_utf8_byte_size(v_n_1776_);
v___x_1782_ = lean_obj_once(&l_Lasm_UI_Syntax_isEventName___closed__1, &l_Lasm_UI_Syntax_isEventName___closed__1_once, _init_l_Lasm_UI_Syntax_isEventName___closed__1);
v___x_1783_ = lean_nat_dec_le(v___x_1782_, v___x_1781_);
if (v___x_1783_ == 0)
{
lean_dec_ref(v_n_1776_);
return v___x_1783_;
}
else
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = lean_unsigned_to_nat(0u);
v___x_1785_ = lean_string_memcmp(v_n_1776_, v___x_1780_, v___x_1784_, v___x_1784_, v___x_1782_);
if (v___x_1785_ == 0)
{
lean_dec_ref(v_n_1776_);
return v___x_1785_;
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_string_data(v_n_1776_);
v___x_1787_ = l_List_get_x3fInternal___redArg(v___x_1786_, v___x_1777_);
lean_dec(v___x_1786_);
if (lean_obj_tag(v___x_1787_) == 0)
{
uint8_t v___x_1788_; 
v___x_1788_ = 0;
return v___x_1788_;
}
else
{
lean_object* v_val_1789_; uint32_t v___x_1790_; uint32_t v___x_1791_; uint8_t v___x_1792_; 
v_val_1789_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_val_1789_);
lean_dec_ref_known(v___x_1787_, 1);
v___x_1790_ = 65;
v___x_1791_ = lean_unbox_uint32(v_val_1789_);
v___x_1792_ = lean_uint32_dec_le(v___x_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_dec(v_val_1789_);
return v___x_1792_;
}
else
{
uint32_t v___x_1793_; uint32_t v___x_1794_; uint8_t v___x_1795_; 
v___x_1793_ = 90;
v___x_1794_ = lean_unbox_uint32(v_val_1789_);
lean_dec(v_val_1789_);
v___x_1795_ = lean_uint32_dec_le(v___x_1794_, v___x_1793_);
return v___x_1795_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_isEventName___boxed(lean_object* v_n_1796_){
_start:
{
uint8_t v_res_1797_; lean_object* v_r_1798_; 
v_res_1797_ = l_Lasm_UI_Syntax_isEventName(v_n_1796_);
v_r_1798_ = lean_box(v_res_1797_);
return v_r_1798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_lowerFirst(lean_object* v_s_1799_){
_start:
{
lean_object* v___x_1800_; 
lean_inc_ref(v_s_1799_);
v___x_1800_ = lean_string_data(v_s_1799_);
if (lean_obj_tag(v___x_1800_) == 0)
{
return v_s_1799_;
}
else
{
lean_object* v_head_1801_; lean_object* v_tail_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1824_; 
lean_dec_ref(v_s_1799_);
v_head_1801_ = lean_ctor_get(v___x_1800_, 0);
v_tail_1802_ = lean_ctor_get(v___x_1800_, 1);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1804_ = v___x_1800_;
v_isShared_1805_ = v_isSharedCheck_1824_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_tail_1802_);
lean_inc(v_head_1801_);
lean_dec(v___x_1800_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1824_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
uint32_t v___y_1807_; uint32_t v___x_1813_; uint32_t v___x_1814_; uint8_t v___x_1815_; 
v___x_1813_ = 65;
v___x_1814_ = lean_unbox_uint32(v_head_1801_);
v___x_1815_ = lean_uint32_dec_le(v___x_1813_, v___x_1814_);
if (v___x_1815_ == 0)
{
uint32_t v___x_1816_; 
v___x_1816_ = lean_unbox_uint32(v_head_1801_);
lean_dec(v_head_1801_);
v___y_1807_ = v___x_1816_;
goto v___jp_1806_;
}
else
{
uint32_t v___x_1817_; uint32_t v___x_1818_; uint8_t v___x_1819_; 
v___x_1817_ = 90;
v___x_1818_ = lean_unbox_uint32(v_head_1801_);
v___x_1819_ = lean_uint32_dec_le(v___x_1818_, v___x_1817_);
if (v___x_1819_ == 0)
{
uint32_t v___x_1820_; 
v___x_1820_ = lean_unbox_uint32(v_head_1801_);
lean_dec(v_head_1801_);
v___y_1807_ = v___x_1820_;
goto v___jp_1806_;
}
else
{
uint32_t v___x_1821_; uint32_t v___x_1822_; uint32_t v___x_1823_; 
v___x_1821_ = 32;
v___x_1822_ = lean_unbox_uint32(v_head_1801_);
lean_dec(v_head_1801_);
v___x_1823_ = lean_uint32_add(v___x_1822_, v___x_1821_);
v___y_1807_ = v___x_1823_;
goto v___jp_1806_;
}
}
v___jp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1810_; 
v___x_1808_ = lean_box_uint32(v___y_1807_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v___x_1808_);
v___x_1810_ = v___x_1804_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1808_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_tail_1802_);
v___x_1810_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1811_; 
v___x_1811_ = lean_string_mk(v___x_1810_);
return v___x_1811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(lean_object* v_s_1825_, lean_object* v_p_1826_){
_start:
{
uint32_t v___y_1828_; lean_object* v___x_1833_; uint8_t v_decide_1834_; 
v___x_1833_ = lean_string_utf8_byte_size(v_s_1825_);
v_decide_1834_ = lean_nat_dec_eq(v_p_1826_, v___x_1833_);
if (v_decide_1834_ == 0)
{
uint32_t v___x_1835_; uint32_t v___x_1836_; uint8_t v___x_1837_; 
v___x_1835_ = lean_string_utf8_get_fast(v_s_1825_, v_p_1826_);
v___x_1836_ = 65;
v___x_1837_ = lean_uint32_dec_le(v___x_1836_, v___x_1835_);
if (v___x_1837_ == 0)
{
v___y_1828_ = v___x_1835_;
goto v___jp_1827_;
}
else
{
uint32_t v___x_1838_; uint8_t v___x_1839_; 
v___x_1838_ = 90;
v___x_1839_ = lean_uint32_dec_le(v___x_1835_, v___x_1838_);
if (v___x_1839_ == 0)
{
v___y_1828_ = v___x_1835_;
goto v___jp_1827_;
}
else
{
uint32_t v___x_1840_; uint32_t v___x_1841_; 
v___x_1840_ = 32;
v___x_1841_ = lean_uint32_add(v___x_1835_, v___x_1840_);
v___y_1828_ = v___x_1841_;
goto v___jp_1827_;
}
}
}
else
{
lean_dec(v_p_1826_);
return v_s_1825_;
}
v___jp_1827_:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_inc(v_p_1826_);
v___x_1829_ = lean_string_utf8_set(v_s_1825_, v_p_1826_, v___y_1828_);
v___x_1830_ = l_Char_utf8Size(v___y_1828_);
v___x_1831_ = lean_nat_add(v_p_1826_, v___x_1830_);
lean_dec(v___x_1830_);
lean_dec(v_p_1826_);
v_s_1825_ = v___x_1829_;
v_p_1826_ = v___x_1831_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(lean_object* v_x_1842_, lean_object* v_x_1843_){
_start:
{
if (lean_obj_tag(v_x_1843_) == 0)
{
lean_object* v___x_1844_; 
v___x_1844_ = lean_box(0);
return v___x_1844_;
}
else
{
lean_object* v_head_1845_; lean_object* v_tail_1846_; lean_object* v_fst_1847_; lean_object* v_snd_1848_; uint8_t v___x_1849_; 
v_head_1845_ = lean_ctor_get(v_x_1843_, 0);
v_tail_1846_ = lean_ctor_get(v_x_1843_, 1);
v_fst_1847_ = lean_ctor_get(v_head_1845_, 0);
v_snd_1848_ = lean_ctor_get(v_head_1845_, 1);
v___x_1849_ = lean_string_dec_eq(v_x_1842_, v_fst_1847_);
if (v___x_1849_ == 0)
{
v_x_1843_ = v_tail_1846_;
goto _start;
}
else
{
lean_object* v___x_1851_; 
lean_inc(v_snd_1848_);
v___x_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_snd_1848_);
return v___x_1851_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg___boxed(lean_object* v_x_1852_, lean_object* v_x_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_1852_, v_x_1853_);
lean_dec(v_x_1853_);
lean_dec_ref(v_x_1852_);
return v_res_1854_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__8(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__7));
v___x_1870_ = l_String_toRawSubstring_x27(v___x_1869_);
return v___x_1870_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__26(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__1));
v___x_1909_ = l_String_toRawSubstring_x27(v___x_1908_);
return v___x_1909_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__37(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__36));
v___x_1936_ = l_String_toRawSubstring_x27(v___x_1935_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__46(void){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__45));
v___x_1954_ = l_String_toRawSubstring_x27(v___x_1953_);
return v___x_1954_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__58(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__57));
v___x_1977_ = l_String_toRawSubstring_x27(v___x_1976_);
return v___x_1977_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__68(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_2003_ = l_String_toRawSubstring_x27(v___x_2002_);
return v___x_2003_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__74(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__73));
v___x_2010_ = l_String_toRawSubstring_x27(v___x_2009_);
return v___x_2010_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__82(void){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__81));
v___x_2027_ = l_String_toRawSubstring_x27(v___x_2026_);
return v___x_2027_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandAttr___closed__93(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__92));
v___x_2050_ = l_String_toRawSubstring_x27(v___x_2049_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr(lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v___x_2067_; uint8_t v___x_2068_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2104_; 
v___x_2067_ = ((lean_object*)(l_Lasm_UI_Syntax_attrSplice___closed__1));
lean_inc(v_a_2064_);
v___x_2068_ = l_Lean_Syntax_isOfKind(v_a_2064_, v___x_2067_);
if (v___x_2068_ == 0)
{
lean_object* v___x_2120_; uint8_t v___x_2121_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; 
v___x_2120_ = ((lean_object*)(l_Lasm_UI_Syntax_attrFlag___closed__1));
lean_inc(v_a_2064_);
v___x_2121_ = l_Lean_Syntax_isOfKind(v_a_2064_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2493_ = ((lean_object*)(l_Lasm_UI_Syntax_attrValue___closed__1));
lean_inc(v_a_2064_);
v___x_2494_ = l_Lean_Syntax_isOfKind(v_a_2064_, v___x_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2496_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2064_, v___x_2495_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2064_);
return v___x_2496_;
}
else
{
lean_object* v___x_2497_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___x_2586_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; uint8_t v___y_2618_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; uint8_t v___y_2643_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; uint8_t v___y_2720_; lean_object* v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; 
v___x_2497_ = lean_unsigned_to_nat(0u);
v___x_2586_ = l_Lean_Syntax_getArg(v_a_2064_, v___x_2497_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2778_; uint8_t v___x_2779_; 
v___x_2778_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2586_);
v___x_2779_ = l_Lean_Syntax_isOfKind(v___x_2586_, v___x_2778_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_dec(v___x_2586_);
v___x_2780_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2781_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2064_, v___x_2780_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2064_);
return v___x_2781_;
}
else
{
goto v___jp_2770_;
}
}
else
{
goto v___jp_2770_;
}
v___jp_2498_:
{
uint8_t v___x_2506_; 
lean_inc_ref(v___y_2503_);
v___x_2506_ = l_Lasm_UI_Syntax_isEventName(v___y_2503_);
if (v___x_2506_ == 0)
{
lean_dec(v___y_2502_);
v___y_2406_ = v___y_2499_;
v___y_2407_ = v___y_2500_;
v___y_2408_ = v___y_2501_;
v___y_2409_ = v___y_2503_;
v___y_2410_ = v___y_2504_;
v___y_2411_ = v___y_2505_;
goto v___jp_2405_;
}
else
{
lean_dec(v___y_2500_);
if (lean_obj_tag(v___y_2501_) == 1)
{
lean_object* v_val_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v___y_2499_);
v_val_2507_ = lean_ctor_get(v___y_2501_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___y_2501_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2509_ = v___y_2501_;
v_isShared_2510_ = v_isSharedCheck_2570_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_val_2507_);
lean_dec(v___y_2501_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2570_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2511_ = ((lean_object*)(l_Lasm_UI_Syntax_eventHelpers));
v___x_2512_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_2503_, v___x_2511_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v_quotContext_2515_; lean_object* v_currMacroScope_2516_; lean_object* v_ref_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v_event_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2543_; 
v___x_2513_ = lean_string_utf8_byte_size(v___y_2503_);
lean_inc_ref(v___y_2503_);
v___x_2514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2514_, 0, v___y_2503_);
lean_ctor_set(v___x_2514_, 1, v___x_2497_);
lean_ctor_set(v___x_2514_, 2, v___x_2513_);
v_quotContext_2515_ = lean_ctor_get(v___y_2504_, 1);
v_currMacroScope_2516_ = lean_ctor_get(v___y_2504_, 2);
v_ref_2517_ = lean_ctor_get(v___y_2504_, 5);
v___x_2518_ = l_String_Slice_Pos_nextn(v___x_2514_, v___x_2497_, v___y_2502_);
lean_dec_ref_known(v___x_2514_, 3);
v___x_2519_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2519_, 0, v___y_2503_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
lean_ctor_set(v___x_2519_, 2, v___x_2513_);
v___x_2520_ = l_String_Slice_toString(v___x_2519_);
lean_dec_ref_known(v___x_2519_, 3);
v___x_2521_ = l_Lasm_UI_Syntax_lowerFirst(v___x_2520_);
v_event_2522_ = l_String_mapAux___at___00Lasm_UI_Syntax_expandAttr_spec__1(v___x_2521_, v___x_2497_);
v___x_2523_ = l_Lean_SourceInfo_fromRef(v_ref_2517_, v___x_2512_);
v___x_2524_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2525_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2523_, 6);
v___x_2526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2523_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2528_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2529_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__82, &l_Lasm_UI_Syntax_expandAttr___closed__82_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__82);
v___x_2530_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__83));
lean_inc(v_currMacroScope_2516_);
lean_inc(v_quotContext_2515_);
v___x_2531_ = l_Lean_addMacroScope(v_quotContext_2515_, v___x_2530_, v_currMacroScope_2516_);
v___x_2532_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__85));
v___x_2533_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2523_);
lean_ctor_set(v___x_2533_, 1, v___x_2529_);
lean_ctor_set(v___x_2533_, 2, v___x_2531_);
lean_ctor_set(v___x_2533_, 3, v___x_2532_);
v___x_2534_ = lean_box(2);
v___x_2535_ = l_Lean_Syntax_mkStrLit(v_event_2522_, v___x_2534_);
v___x_2536_ = l_Lean_Syntax_node2(v___x_2523_, v___x_2527_, v___x_2535_, v_val_2507_);
v___x_2537_ = l_Lean_Syntax_node2(v___x_2523_, v___x_2528_, v___x_2533_, v___x_2536_);
v___x_2538_ = l_Lean_Syntax_node1(v___x_2523_, v___x_2527_, v___x_2537_);
v___x_2539_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2523_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = l_Lean_Syntax_node3(v___x_2523_, v___x_2524_, v___x_2526_, v___x_2538_, v___x_2540_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2541_);
v___x_2543_ = v___x_2509_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2541_);
v___x_2543_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_box(0);
v___x_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2543_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
v___x_2546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v___y_2505_);
return v___x_2546_;
}
}
else
{
lean_object* v_ref_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v_f_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
lean_dec(v___y_2502_);
v_ref_2548_ = lean_ctor_get(v___y_2504_, 5);
v___x_2549_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__87));
v___x_2550_ = l_Lean_Name_str___override(v___x_2549_, v___y_2503_);
v_f_2551_ = l_Lean_mkIdent(v___x_2550_);
v___x_2552_ = l_Lean_SourceInfo_fromRef(v_ref_2548_, v___x_2121_);
v___x_2553_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2554_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2552_, 5);
v___x_2555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2552_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2557_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2558_ = l_Lean_Syntax_node1(v___x_2552_, v___x_2556_, v_val_2507_);
v___x_2559_ = l_Lean_Syntax_node2(v___x_2552_, v___x_2557_, v_f_2551_, v___x_2558_);
v___x_2560_ = l_Lean_Syntax_node1(v___x_2552_, v___x_2556_, v___x_2559_);
v___x_2561_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2552_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = l_Lean_Syntax_node3(v___x_2552_, v___x_2553_, v___x_2555_, v___x_2560_, v___x_2562_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2563_);
v___x_2565_ = v___x_2509_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2563_);
v___x_2565_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2566_ = lean_box(0);
v___x_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
lean_ctor_set(v___x_2568_, 1, v___y_2505_);
return v___x_2568_;
}
}
}
}
else
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v_a_2577_; lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_dec(v___y_2502_);
lean_dec(v___y_2501_);
v___x_2571_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__88));
lean_inc_ref(v___y_2503_);
v___x_2572_ = lean_string_append(v___y_2503_, v___x_2571_);
v___x_2573_ = lean_string_append(v___x_2572_, v___y_2503_);
lean_dec_ref(v___y_2503_);
v___x_2574_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2575_ = lean_string_append(v___x_2573_, v___x_2574_);
v___x_2576_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2499_, v___x_2575_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2499_);
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
v_a_2578_ = lean_ctor_get(v___x_2576_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2576_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_inc(v_a_2577_);
lean_dec(v___x_2576_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2577_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
v___jp_2587_:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v_a_2601_; lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec_ref(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec(v___y_2592_);
lean_dec(v___y_2589_);
lean_dec(v___y_2588_);
lean_inc_ref(v___y_2591_);
v___x_2597_ = lean_string_append(v___y_2591_, v___y_2596_);
lean_dec_ref(v___y_2596_);
v___x_2598_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2599_ = lean_string_append(v___x_2597_, v___x_2598_);
v___x_2600_ = l_Lean_Macro_throwErrorAt___redArg(v___x_2586_, v___x_2599_, v___y_2590_, v___y_2595_);
lean_dec(v___x_2586_);
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
v_a_2602_ = lean_ctor_get(v___x_2600_, 1);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2600_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_inc(v_a_2601_);
lean_dec(v___x_2600_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2601_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
v___jp_2610_:
{
if (v___y_2618_ == 0)
{
lean_dec(v___x_2586_);
v___y_2499_ = v___y_2611_;
v___y_2500_ = v___y_2612_;
v___y_2501_ = v___y_2614_;
v___y_2502_ = v___y_2615_;
v___y_2503_ = v___y_2616_;
v___y_2504_ = v___y_2613_;
v___y_2505_ = v___y_2617_;
goto v___jp_2498_;
}
else
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint32_t v___x_2625_; uint32_t v___x_2626_; uint8_t v___x_2627_; 
v___x_2619_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__89));
v___x_2620_ = lean_string_utf8_byte_size(v___y_2616_);
lean_inc_ref_n(v___y_2616_, 2);
v___x_2621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2616_);
lean_ctor_set(v___x_2621_, 1, v___x_2497_);
lean_ctor_set(v___x_2621_, 2, v___x_2620_);
lean_inc(v___y_2615_);
v___x_2622_ = l_String_Slice_Pos_nextn(v___x_2621_, v___x_2497_, v___y_2615_);
lean_dec_ref_known(v___x_2621_, 3);
v___x_2623_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2623_, 0, v___y_2616_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
lean_ctor_set(v___x_2623_, 2, v___x_2620_);
v___x_2624_ = l_String_Slice_toString(v___x_2623_);
lean_dec_ref_known(v___x_2623_, 3);
v___x_2625_ = lean_string_utf8_get(v___x_2624_, v___x_2497_);
v___x_2626_ = 97;
v___x_2627_ = lean_uint32_dec_le(v___x_2626_, v___x_2625_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_string_utf8_set(v___x_2624_, v___x_2497_, v___x_2625_);
v___y_2588_ = v___y_2611_;
v___y_2589_ = v___y_2612_;
v___y_2590_ = v___y_2613_;
v___y_2591_ = v___x_2619_;
v___y_2592_ = v___y_2614_;
v___y_2593_ = v___y_2615_;
v___y_2594_ = v___y_2616_;
v___y_2595_ = v___y_2617_;
v___y_2596_ = v___x_2628_;
goto v___jp_2587_;
}
else
{
uint32_t v___x_2629_; uint8_t v___x_2630_; 
v___x_2629_ = 122;
v___x_2630_ = lean_uint32_dec_le(v___x_2625_, v___x_2629_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; 
v___x_2631_ = lean_string_utf8_set(v___x_2624_, v___x_2497_, v___x_2625_);
v___y_2588_ = v___y_2611_;
v___y_2589_ = v___y_2612_;
v___y_2590_ = v___y_2613_;
v___y_2591_ = v___x_2619_;
v___y_2592_ = v___y_2614_;
v___y_2593_ = v___y_2615_;
v___y_2594_ = v___y_2616_;
v___y_2595_ = v___y_2617_;
v___y_2596_ = v___x_2631_;
goto v___jp_2587_;
}
else
{
uint32_t v___x_2632_; uint32_t v___x_2633_; lean_object* v___x_2634_; 
v___x_2632_ = 4294967264;
v___x_2633_ = lean_uint32_add(v___x_2625_, v___x_2632_);
v___x_2634_ = lean_string_utf8_set(v___x_2624_, v___x_2497_, v___x_2633_);
v___y_2588_ = v___y_2611_;
v___y_2589_ = v___y_2612_;
v___y_2590_ = v___y_2613_;
v___y_2591_ = v___x_2619_;
v___y_2592_ = v___y_2614_;
v___y_2593_ = v___y_2615_;
v___y_2594_ = v___y_2616_;
v___y_2595_ = v___y_2617_;
v___y_2596_ = v___x_2634_;
goto v___jp_2587_;
}
}
}
}
v___jp_2635_:
{
if (v___y_2643_ == 0)
{
v___y_2611_ = v___y_2636_;
v___y_2612_ = v___y_2637_;
v___y_2613_ = v___y_2638_;
v___y_2614_ = v___y_2639_;
v___y_2615_ = v___y_2640_;
v___y_2616_ = v___y_2642_;
v___y_2617_ = v___y_2641_;
v___y_2618_ = v___x_2121_;
goto v___jp_2610_;
}
else
{
uint8_t v___x_2644_; 
lean_inc_ref(v___y_2642_);
v___x_2644_ = l_Lasm_UI_Syntax_isEventName(v___y_2642_);
if (v___x_2644_ == 0)
{
v___y_2611_ = v___y_2636_;
v___y_2612_ = v___y_2637_;
v___y_2613_ = v___y_2638_;
v___y_2614_ = v___y_2639_;
v___y_2615_ = v___y_2640_;
v___y_2616_ = v___y_2642_;
v___y_2617_ = v___y_2641_;
v___y_2618_ = v___x_2494_;
goto v___jp_2610_;
}
else
{
v___y_2611_ = v___y_2636_;
v___y_2612_ = v___y_2637_;
v___y_2613_ = v___y_2638_;
v___y_2614_ = v___y_2639_;
v___y_2615_ = v___y_2640_;
v___y_2616_ = v___y_2642_;
v___y_2617_ = v___y_2641_;
v___y_2618_ = v___x_2121_;
goto v___jp_2610_;
}
}
}
v___jp_2645_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; uint8_t v___x_2656_; 
v___x_2653_ = ((lean_object*)(l_Lasm_UI_Syntax_isEventName___closed__0));
v___x_2654_ = lean_string_utf8_byte_size(v___y_2650_);
v___x_2655_ = lean_obj_once(&l_Lasm_UI_Syntax_isEventName___closed__1, &l_Lasm_UI_Syntax_isEventName___closed__1_once, _init_l_Lasm_UI_Syntax_isEventName___closed__1);
v___x_2656_ = lean_nat_dec_le(v___x_2655_, v___x_2654_);
if (v___x_2656_ == 0)
{
v___y_2636_ = v___y_2646_;
v___y_2637_ = v___y_2647_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2648_;
v___y_2640_ = v___y_2649_;
v___y_2641_ = v___y_2652_;
v___y_2642_ = v___y_2650_;
v___y_2643_ = v___x_2121_;
goto v___jp_2635_;
}
else
{
uint8_t v___x_2657_; 
v___x_2657_ = lean_string_memcmp(v___y_2650_, v___x_2653_, v___x_2497_, v___x_2497_, v___x_2655_);
if (v___x_2657_ == 0)
{
v___y_2636_ = v___y_2646_;
v___y_2637_ = v___y_2647_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2648_;
v___y_2640_ = v___y_2649_;
v___y_2641_ = v___y_2652_;
v___y_2642_ = v___y_2650_;
v___y_2643_ = v___x_2121_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2658_; uint8_t v___x_2659_; 
v___x_2658_ = lean_string_length(v___y_2650_);
v___x_2659_ = lean_nat_dec_lt(v___y_2649_, v___x_2658_);
v___y_2636_ = v___y_2646_;
v___y_2637_ = v___y_2647_;
v___y_2638_ = v___y_2651_;
v___y_2639_ = v___y_2648_;
v___y_2640_ = v___y_2649_;
v___y_2641_ = v___y_2652_;
v___y_2642_ = v___y_2650_;
v___y_2643_ = v___x_2659_;
goto v___jp_2635_;
}
}
}
v___jp_2660_:
{
lean_object* v___x_2666_; uint8_t v___x_2667_; 
v___x_2666_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__90));
v___x_2667_ = lean_string_dec_eq(v___y_2664_, v___x_2666_);
if (v___x_2667_ == 0)
{
v___y_2646_ = v___y_2661_;
v___y_2647_ = v___y_2662_;
v___y_2648_ = v___y_2665_;
v___y_2649_ = v___y_2663_;
v___y_2650_ = v___y_2664_;
v___y_2651_ = v_a_2065_;
v___y_2652_ = v_a_2066_;
goto v___jp_2645_;
}
else
{
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec(v___x_2586_);
if (lean_obj_tag(v___y_2662_) == 1)
{
lean_object* v_val_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2678_; 
lean_dec(v___y_2665_);
lean_dec(v___y_2661_);
v_val_2668_ = lean_ctor_get(v___y_2662_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___y_2662_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2670_ = v___y_2662_;
v_isShared_2671_ = v_isSharedCheck_2678_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_val_2668_);
lean_dec(v___y_2662_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2678_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2672_ = lean_box(0);
if (v_isShared_2671_ == 0)
{
v___x_2674_ = v___x_2670_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_val_2668_);
v___x_2674_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2672_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v_a_2066_);
return v___x_2676_;
}
}
}
else
{
lean_dec(v___y_2662_);
if (lean_obj_tag(v___y_2665_) == 1)
{
lean_object* v_val_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v___y_2661_);
v_val_2679_ = lean_ctor_get(v___y_2665_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___y_2665_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2681_ = v___y_2665_;
v_isShared_2682_ = v_isSharedCheck_2702_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_val_2679_);
lean_dec(v___y_2665_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2702_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v_quotContext_2683_; lean_object* v_currMacroScope_2684_; lean_object* v_ref_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2698_; 
v_quotContext_2683_ = lean_ctor_get(v_a_2065_, 1);
v_currMacroScope_2684_ = lean_ctor_get(v_a_2065_, 2);
v_ref_2685_ = lean_ctor_get(v_a_2065_, 5);
v___x_2686_ = l_Lean_SourceInfo_fromRef(v_ref_2685_, v___x_2121_);
v___x_2687_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2688_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__37, &l_Lasm_UI_Syntax_expandAttr___closed__37_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__37);
v___x_2689_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
lean_inc(v_currMacroScope_2684_);
lean_inc(v_quotContext_2683_);
v___x_2690_ = l_Lean_addMacroScope(v_quotContext_2683_, v___x_2689_, v_currMacroScope_2684_);
v___x_2691_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__42));
lean_inc_n(v___x_2686_, 2);
v___x_2692_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2686_);
lean_ctor_set(v___x_2692_, 1, v___x_2688_);
lean_ctor_set(v___x_2692_, 2, v___x_2690_);
lean_ctor_set(v___x_2692_, 3, v___x_2691_);
v___x_2693_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2694_ = l_Lean_Syntax_node1(v___x_2686_, v___x_2693_, v_val_2679_);
v___x_2695_ = l_Lean_Syntax_node2(v___x_2686_, v___x_2687_, v___x_2692_, v___x_2694_);
v___x_2696_ = lean_box(0);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v___x_2695_);
v___x_2698_ = v___x_2681_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2695_);
v___x_2698_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2696_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
lean_ctor_set(v___x_2700_, 1, v_a_2066_);
return v___x_2700_;
}
}
}
else
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v_a_2705_; lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec(v___y_2665_);
v___x_2703_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__91));
v___x_2704_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2661_, v___x_2703_, v_a_2065_, v_a_2066_);
lean_dec(v___y_2661_);
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
v_a_2706_ = lean_ctor_get(v___x_2704_, 1);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2704_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_inc(v_a_2705_);
lean_dec(v___x_2704_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2705_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
}
}
v___jp_2714_:
{
if (v___y_2720_ == 0)
{
v___y_2661_ = v___y_2715_;
v___y_2662_ = v___y_2716_;
v___y_2663_ = v___y_2717_;
v___y_2664_ = v___y_2719_;
v___y_2665_ = v___y_2718_;
goto v___jp_2660_;
}
else
{
lean_object* v___x_2721_; 
lean_dec(v___y_2718_);
v___x_2721_ = lean_box(0);
v___y_2661_ = v___y_2715_;
v___y_2662_ = v___y_2716_;
v___y_2663_ = v___y_2717_;
v___y_2664_ = v___y_2719_;
v___y_2665_ = v___x_2721_;
goto v___jp_2660_;
}
}
v___jp_2722_:
{
if (lean_obj_tag(v___y_2724_) == 0)
{
v___y_2715_ = v___y_2723_;
v___y_2716_ = v___y_2724_;
v___y_2717_ = v___y_2725_;
v___y_2718_ = v___y_2727_;
v___y_2719_ = v___y_2726_;
v___y_2720_ = v___x_2121_;
goto v___jp_2714_;
}
else
{
v___y_2715_ = v___y_2723_;
v___y_2716_ = v___y_2724_;
v___y_2717_ = v___y_2725_;
v___y_2718_ = v___y_2727_;
v___y_2719_ = v___y_2726_;
v___y_2720_ = v___x_2494_;
goto v___jp_2714_;
}
}
v___jp_2728_:
{
if (lean_obj_tag(v___y_2731_) == 1)
{
lean_object* v_args_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v_args_2735_ = lean_ctor_get(v___y_2731_, 2);
lean_inc_ref(v_args_2735_);
lean_dec_ref_known(v___y_2731_, 3);
v___x_2736_ = lean_array_get_size(v_args_2735_);
v___x_2737_ = lean_unsigned_to_nat(3u);
v___x_2738_ = lean_nat_dec_eq(v___x_2736_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
lean_dec_ref(v_args_2735_);
v___x_2739_ = lean_box(0);
v___y_2723_ = v___y_2730_;
v___y_2724_ = v___y_2734_;
v___y_2725_ = v___y_2732_;
v___y_2726_ = v___y_2733_;
v___y_2727_ = v___x_2739_;
goto v___jp_2722_;
}
else
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2740_ = lean_array_fget(v_args_2735_, v___y_2729_);
lean_dec_ref(v_args_2735_);
lean_inc(v___x_2740_);
v___x_2741_ = l_Lean_Syntax_getKind(v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2743_ = lean_name_eq(v___x_2741_, v___x_2742_);
lean_dec(v___x_2741_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2740_);
v___y_2723_ = v___y_2730_;
v___y_2724_ = v___y_2734_;
v___y_2725_ = v___y_2732_;
v___y_2726_ = v___y_2733_;
v___y_2727_ = v___x_2744_;
goto v___jp_2722_;
}
else
{
lean_object* v___x_2745_; 
lean_dec(v___x_2740_);
v___x_2745_ = lean_box(0);
v___y_2723_ = v___y_2730_;
v___y_2724_ = v___y_2734_;
v___y_2725_ = v___y_2732_;
v___y_2726_ = v___y_2733_;
v___y_2727_ = v___x_2745_;
goto v___jp_2722_;
}
}
}
else
{
lean_object* v___x_2746_; 
lean_dec(v___y_2731_);
v___x_2746_ = lean_box(0);
v___y_2723_ = v___y_2730_;
v___y_2724_ = v___y_2734_;
v___y_2725_ = v___y_2732_;
v___y_2726_ = v___y_2733_;
v___y_2727_ = v___x_2746_;
goto v___jp_2722_;
}
}
v___jp_2747_:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_box(0);
v___y_2729_ = v___y_2749_;
v___y_2730_ = v___y_2748_;
v___y_2731_ = v___y_2750_;
v___y_2732_ = v___y_2751_;
v___y_2733_ = v___y_2752_;
v___y_2734_ = v___x_2753_;
goto v___jp_2728_;
}
v___jp_2754_:
{
lean_object* v_name_2758_; lean_object* v___x_2759_; 
v_name_2758_ = l_Lasm_UI_Syntax_nameOf(v___x_2586_);
v___x_2759_ = l_Lean_Syntax_getArg(v___y_2756_, v___x_2497_);
if (lean_obj_tag(v___x_2759_) == 1)
{
lean_object* v_kind_2760_; 
v_kind_2760_ = lean_ctor_get(v___x_2759_, 1);
lean_inc(v_kind_2760_);
if (lean_obj_tag(v_kind_2760_) == 1)
{
lean_object* v_pre_2761_; 
v_pre_2761_ = lean_ctor_get(v_kind_2760_, 0);
lean_inc(v_pre_2761_);
if (lean_obj_tag(v_pre_2761_) == 0)
{
lean_object* v_info_2762_; lean_object* v_args_2763_; lean_object* v_str_2764_; lean_object* v___x_2765_; uint8_t v___x_2766_; 
v_info_2762_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_info_2762_);
v_args_2763_ = lean_ctor_get(v___x_2759_, 2);
lean_inc_ref(v_args_2763_);
v_str_2764_ = lean_ctor_get(v_kind_2760_, 1);
lean_inc_ref(v_str_2764_);
lean_dec_ref_known(v_kind_2760_, 2);
v___x_2765_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__4));
v___x_2766_ = lean_string_dec_eq(v_str_2764_, v___x_2765_);
lean_dec_ref(v_str_2764_);
if (v___x_2766_ == 0)
{
lean_dec_ref(v_args_2763_);
lean_dec(v_info_2762_);
v___y_2748_ = v___y_2756_;
v___y_2749_ = v___y_2755_;
v___y_2750_ = v___x_2759_;
v___y_2751_ = v___y_2757_;
v___y_2752_ = v_name_2758_;
goto v___jp_2747_;
}
else
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2767_ = l_Lean_Name_str___override(v_pre_2761_, v___x_2765_);
v___x_2768_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2768_, 0, v_info_2762_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
lean_ctor_set(v___x_2768_, 2, v_args_2763_);
v___x_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
v___y_2729_ = v___y_2755_;
v___y_2730_ = v___y_2756_;
v___y_2731_ = v___x_2759_;
v___y_2732_ = v___y_2757_;
v___y_2733_ = v_name_2758_;
v___y_2734_ = v___x_2769_;
goto v___jp_2728_;
}
}
else
{
lean_dec(v_pre_2761_);
lean_dec_ref_known(v_kind_2760_, 2);
v___y_2748_ = v___y_2756_;
v___y_2749_ = v___y_2755_;
v___y_2750_ = v___x_2759_;
v___y_2751_ = v___y_2757_;
v___y_2752_ = v_name_2758_;
goto v___jp_2747_;
}
}
else
{
lean_dec(v_kind_2760_);
v___y_2748_ = v___y_2756_;
v___y_2749_ = v___y_2755_;
v___y_2750_ = v___x_2759_;
v___y_2751_ = v___y_2757_;
v___y_2752_ = v_name_2758_;
goto v___jp_2747_;
}
}
else
{
v___y_2748_ = v___y_2756_;
v___y_2749_ = v___y_2755_;
v___y_2750_ = v___x_2759_;
v___y_2751_ = v___y_2757_;
v___y_2752_ = v_name_2758_;
goto v___jp_2747_;
}
}
v___jp_2770_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2771_ = lean_unsigned_to_nat(1u);
v___x_2772_ = lean_unsigned_to_nat(2u);
v___x_2773_ = l_Lean_Syntax_getArg(v_a_2064_, v___x_2772_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2774_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__1));
lean_inc(v___x_2773_);
v___x_2775_ = l_Lean_Syntax_isOfKind(v___x_2773_, v___x_2774_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_dec(v___x_2773_);
lean_dec(v___x_2586_);
v___x_2776_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2777_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2064_, v___x_2776_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2064_);
return v___x_2777_;
}
else
{
lean_dec(v_a_2064_);
v___y_2755_ = v___x_2771_;
v___y_2756_ = v___x_2773_;
v___y_2757_ = v___x_2772_;
goto v___jp_2754_;
}
}
else
{
lean_dec(v_a_2064_);
v___y_2755_ = v___x_2771_;
v___y_2756_ = v___x_2773_;
v___y_2757_ = v___x_2772_;
goto v___jp_2754_;
}
}
}
}
else
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = lean_unsigned_to_nat(0u);
v___x_2783_ = l_Lean_Syntax_getArg(v_a_2064_, v___x_2782_);
if (v___x_2068_ == 0)
{
lean_object* v___x_2855_; uint8_t v___x_2856_; 
v___x_2855_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_2783_);
v___x_2856_ = l_Lean_Syntax_isOfKind(v___x_2783_, v___x_2855_);
if (v___x_2856_ == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec(v___x_2783_);
v___x_2857_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__80));
v___x_2858_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2064_, v___x_2857_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2064_);
return v___x_2858_;
}
else
{
goto v___jp_2784_;
}
}
else
{
goto v___jp_2784_;
}
v___jp_2784_:
{
lean_object* v_name_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v_name_2785_ = l_Lasm_UI_Syntax_nameOf(v___x_2783_);
lean_dec(v___x_2783_);
v___x_2786_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2787_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_name_2785_, v___x_2786_);
if (lean_obj_tag(v___x_2787_) == 1)
{
lean_object* v_val_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2851_; 
lean_dec_ref(v_name_2785_);
lean_dec(v_a_2064_);
v_val_2788_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2790_ = v___x_2787_;
v_isShared_2791_ = v_isSharedCheck_2851_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_val_2788_);
lean_dec(v___x_2787_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2851_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v_quotContext_2792_; lean_object* v_currMacroScope_2793_; lean_object* v_ref_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2846_; 
v_quotContext_2792_ = lean_ctor_get(v_a_2065_, 1);
v_currMacroScope_2793_ = lean_ctor_get(v_a_2065_, 2);
v_ref_2794_ = lean_ctor_get(v_a_2065_, 5);
v___x_2795_ = l_Lean_SourceInfo_fromRef(v_ref_2794_, v___x_2068_);
v___x_2796_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2797_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2795_, 18);
v___x_2798_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2795_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2800_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2801_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2802_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2793_, 4);
lean_inc_n(v_quotContext_2792_, 4);
v___x_2803_ = l_Lean_addMacroScope(v_quotContext_2792_, v___x_2802_, v_currMacroScope_2793_);
v___x_2804_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2805_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2795_);
lean_ctor_set(v___x_2805_, 1, v___x_2801_);
lean_ctor_set(v___x_2805_, 2, v___x_2803_);
lean_ctor_set(v___x_2805_, 3, v___x_2804_);
v___x_2806_ = lean_box(2);
v___x_2807_ = l_Lean_Syntax_mkStrLit(v_val_2788_, v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2809_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2810_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2811_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2795_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2813_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2814_ = lean_box(0);
v___x_2815_ = l_Lean_addMacroScope(v_quotContext_2792_, v___x_2814_, v_currMacroScope_2793_);
v___x_2816_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2817_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2795_);
lean_ctor_set(v___x_2817_, 1, v___x_2813_);
lean_ctor_set(v___x_2817_, 2, v___x_2815_);
lean_ctor_set(v___x_2817_, 3, v___x_2816_);
v___x_2818_ = l_Lean_Syntax_node1(v___x_2795_, v___x_2812_, v___x_2817_);
v___x_2819_ = l_Lean_Syntax_node2(v___x_2795_, v___x_2809_, v___x_2811_, v___x_2818_);
v___x_2820_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2821_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2822_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2795_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__74, &l_Lasm_UI_Syntax_expandAttr___closed__74_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__74);
v___x_2824_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__75));
v___x_2825_ = l_Lean_addMacroScope(v_quotContext_2792_, v___x_2824_, v_currMacroScope_2793_);
v___x_2826_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__79));
v___x_2827_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2795_);
lean_ctor_set(v___x_2827_, 1, v___x_2823_);
lean_ctor_set(v___x_2827_, 2, v___x_2825_);
lean_ctor_set(v___x_2827_, 3, v___x_2826_);
v___x_2828_ = l_Lean_Syntax_node2(v___x_2795_, v___x_2820_, v___x_2822_, v___x_2827_);
v___x_2829_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__93, &l_Lasm_UI_Syntax_expandAttr___closed__93_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__93);
v___x_2830_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__94));
v___x_2831_ = l_Lean_addMacroScope(v_quotContext_2792_, v___x_2830_, v_currMacroScope_2793_);
v___x_2832_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__98));
v___x_2833_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2795_);
lean_ctor_set(v___x_2833_, 1, v___x_2829_);
lean_ctor_set(v___x_2833_, 2, v___x_2831_);
lean_ctor_set(v___x_2833_, 3, v___x_2832_);
v___x_2834_ = l_Lean_Syntax_node1(v___x_2795_, v___x_2799_, v___x_2833_);
v___x_2835_ = l_Lean_Syntax_node2(v___x_2795_, v___x_2800_, v___x_2828_, v___x_2834_);
v___x_2836_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2837_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2795_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = l_Lean_Syntax_node3(v___x_2795_, v___x_2808_, v___x_2819_, v___x_2835_, v___x_2837_);
v___x_2839_ = l_Lean_Syntax_node2(v___x_2795_, v___x_2799_, v___x_2807_, v___x_2838_);
v___x_2840_ = l_Lean_Syntax_node2(v___x_2795_, v___x_2800_, v___x_2805_, v___x_2839_);
v___x_2841_ = l_Lean_Syntax_node1(v___x_2795_, v___x_2799_, v___x_2840_);
v___x_2842_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2795_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = l_Lean_Syntax_node3(v___x_2795_, v___x_2796_, v___x_2798_, v___x_2841_, v___x_2843_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 0, v___x_2844_);
v___x_2846_ = v___x_2790_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
lean_ctor_set(v___x_2849_, 1, v_a_2066_);
return v___x_2849_;
}
}
}
else
{
lean_object* v___x_2852_; uint8_t v___x_2853_; 
lean_dec(v___x_2787_);
v___x_2852_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__90));
v___x_2853_ = lean_string_dec_eq(v_name_2785_, v___x_2852_);
if (v___x_2853_ == 0)
{
uint8_t v___x_2854_; 
lean_inc_ref(v_name_2785_);
v___x_2854_ = l_Lasm_UI_Syntax_isEventName(v_name_2785_);
if (v___x_2854_ == 0)
{
lean_dec(v_a_2064_);
v___y_2070_ = v_name_2785_;
v___y_2071_ = v_a_2065_;
v___y_2072_ = v_a_2066_;
goto v___jp_2069_;
}
else
{
v___y_2104_ = v_name_2785_;
goto v___jp_2103_;
}
}
else
{
v___y_2104_ = v_name_2785_;
goto v___jp_2103_;
}
}
}
}
v___jp_2122_:
{
if (lean_obj_tag(v___y_2124_) == 1)
{
lean_object* v_val_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v___y_2125_);
lean_dec(v___y_2123_);
v_val_2129_ = lean_ctor_get(v___y_2124_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___y_2124_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2131_ = v___y_2124_;
v_isShared_2132_ = v_isSharedCheck_2161_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_val_2129_);
lean_dec(v___y_2124_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2161_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v_quotContext_2133_; lean_object* v_currMacroScope_2134_; lean_object* v_ref_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
v_quotContext_2133_ = lean_ctor_get(v___y_2127_, 1);
v_currMacroScope_2134_ = lean_ctor_get(v___y_2127_, 2);
v_ref_2135_ = lean_ctor_get(v___y_2127_, 5);
v___x_2136_ = l_Lean_SourceInfo_fromRef(v_ref_2135_, v___x_2121_);
v___x_2137_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2138_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2136_, 6);
v___x_2139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2136_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2141_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2142_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2143_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc(v_currMacroScope_2134_);
lean_inc(v_quotContext_2133_);
v___x_2144_ = l_Lean_addMacroScope(v_quotContext_2133_, v___x_2143_, v_currMacroScope_2134_);
v___x_2145_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2136_);
lean_ctor_set(v___x_2146_, 1, v___x_2142_);
lean_ctor_set(v___x_2146_, 2, v___x_2144_);
lean_ctor_set(v___x_2146_, 3, v___x_2145_);
v___x_2147_ = lean_box(2);
v___x_2148_ = l_Lean_Syntax_mkStrLit(v___y_2126_, v___x_2147_);
v___x_2149_ = l_Lean_Syntax_node2(v___x_2136_, v___x_2140_, v___x_2148_, v_val_2129_);
v___x_2150_ = l_Lean_Syntax_node2(v___x_2136_, v___x_2141_, v___x_2146_, v___x_2149_);
v___x_2151_ = l_Lean_Syntax_node1(v___x_2136_, v___x_2140_, v___x_2150_);
v___x_2152_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2136_);
lean_ctor_set(v___x_2153_, 1, v___x_2152_);
v___x_2154_ = l_Lean_Syntax_node3(v___x_2136_, v___x_2137_, v___x_2139_, v___x_2151_, v___x_2153_);
if (v_isShared_2132_ == 0)
{
lean_ctor_set(v___x_2131_, 0, v___x_2154_);
v___x_2156_ = v___x_2131_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2157_ = lean_box(0);
v___x_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2158_);
lean_ctor_set(v___x_2159_, 1, v___y_2128_);
return v___x_2159_;
}
}
}
else
{
lean_dec(v___y_2124_);
if (lean_obj_tag(v___y_2125_) == 1)
{
lean_object* v_val_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2216_; 
lean_dec(v___y_2123_);
v_val_2162_ = lean_ctor_get(v___y_2125_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___y_2125_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2164_ = v___y_2125_;
v_isShared_2165_ = v_isSharedCheck_2216_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_val_2162_);
lean_dec(v___y_2125_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2216_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v_quotContext_2166_; lean_object* v_currMacroScope_2167_; lean_object* v_ref_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2211_; 
v_quotContext_2166_ = lean_ctor_get(v___y_2127_, 1);
v_currMacroScope_2167_ = lean_ctor_get(v___y_2127_, 2);
v_ref_2168_ = lean_ctor_get(v___y_2127_, 5);
v___x_2169_ = l_Lean_SourceInfo_fromRef(v_ref_2168_, v___x_2121_);
v___x_2170_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2171_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2169_, 15);
v___x_2172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2169_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2174_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2175_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2176_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc_n(v_currMacroScope_2167_, 3);
lean_inc_n(v_quotContext_2166_, 3);
v___x_2177_ = l_Lean_addMacroScope(v_quotContext_2166_, v___x_2176_, v_currMacroScope_2167_);
v___x_2178_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2179_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2169_);
lean_ctor_set(v___x_2179_, 1, v___x_2175_);
lean_ctor_set(v___x_2179_, 2, v___x_2177_);
lean_ctor_set(v___x_2179_, 3, v___x_2178_);
v___x_2180_ = lean_box(2);
v___x_2181_ = l_Lean_Syntax_mkStrLit(v___y_2126_, v___x_2180_);
v___x_2182_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2183_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2184_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2185_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2169_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2187_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2188_ = lean_box(0);
v___x_2189_ = l_Lean_addMacroScope(v_quotContext_2166_, v___x_2188_, v_currMacroScope_2167_);
v___x_2190_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2191_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2169_);
lean_ctor_set(v___x_2191_, 1, v___x_2187_);
lean_ctor_set(v___x_2191_, 2, v___x_2189_);
lean_ctor_set(v___x_2191_, 3, v___x_2190_);
v___x_2192_ = l_Lean_Syntax_node1(v___x_2169_, v___x_2186_, v___x_2191_);
v___x_2193_ = l_Lean_Syntax_node2(v___x_2169_, v___x_2183_, v___x_2185_, v___x_2192_);
v___x_2194_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__37, &l_Lasm_UI_Syntax_expandAttr___closed__37_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__37);
v___x_2195_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__40));
v___x_2196_ = l_Lean_addMacroScope(v_quotContext_2166_, v___x_2195_, v_currMacroScope_2167_);
v___x_2197_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__42));
v___x_2198_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2169_);
lean_ctor_set(v___x_2198_, 1, v___x_2194_);
lean_ctor_set(v___x_2198_, 2, v___x_2196_);
lean_ctor_set(v___x_2198_, 3, v___x_2197_);
v___x_2199_ = l_Lean_Syntax_node1(v___x_2169_, v___x_2173_, v_val_2162_);
v___x_2200_ = l_Lean_Syntax_node2(v___x_2169_, v___x_2174_, v___x_2198_, v___x_2199_);
v___x_2201_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2169_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___x_2203_ = l_Lean_Syntax_node3(v___x_2169_, v___x_2182_, v___x_2193_, v___x_2200_, v___x_2202_);
v___x_2204_ = l_Lean_Syntax_node2(v___x_2169_, v___x_2173_, v___x_2181_, v___x_2203_);
v___x_2205_ = l_Lean_Syntax_node2(v___x_2169_, v___x_2174_, v___x_2179_, v___x_2204_);
v___x_2206_ = l_Lean_Syntax_node1(v___x_2169_, v___x_2173_, v___x_2205_);
v___x_2207_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2208_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2169_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
v___x_2209_ = l_Lean_Syntax_node3(v___x_2169_, v___x_2170_, v___x_2172_, v___x_2206_, v___x_2208_);
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v___x_2209_);
v___x_2211_ = v___x_2164_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2209_);
v___x_2211_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = lean_box(0);
v___x_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2211_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
lean_ctor_set(v___x_2214_, 1, v___y_2128_);
return v___x_2214_;
}
}
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
v___x_2217_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__43));
v___x_2218_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2123_, v___x_2217_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2123_);
return v___x_2218_;
}
}
}
v___jp_2219_:
{
lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2226_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__44));
v___x_2227_ = lean_string_dec_eq(v___y_2225_, v___x_2226_);
if (v___x_2227_ == 0)
{
v___y_2123_ = v___y_2220_;
v___y_2124_ = v___y_2221_;
v___y_2125_ = v___y_2223_;
v___y_2126_ = v___y_2225_;
v___y_2127_ = v___y_2224_;
v___y_2128_ = v___y_2222_;
goto v___jp_2122_;
}
else
{
if (lean_obj_tag(v___y_2223_) == 1)
{
lean_object* v_val_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2251_; 
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2221_);
lean_dec(v___y_2220_);
v_val_2228_ = lean_ctor_get(v___y_2223_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___y_2223_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2230_ = v___y_2223_;
v_isShared_2231_ = v_isSharedCheck_2251_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_val_2228_);
lean_dec(v___y_2223_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2251_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v_quotContext_2232_; lean_object* v_currMacroScope_2233_; lean_object* v_ref_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2246_; 
v_quotContext_2232_ = lean_ctor_get(v___y_2224_, 1);
v_currMacroScope_2233_ = lean_ctor_get(v___y_2224_, 2);
v_ref_2234_ = lean_ctor_get(v___y_2224_, 5);
v___x_2235_ = l_Lean_SourceInfo_fromRef(v_ref_2234_, v___x_2121_);
v___x_2236_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2237_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__46, &l_Lasm_UI_Syntax_expandAttr___closed__46_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__46);
v___x_2238_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__48));
lean_inc(v_currMacroScope_2233_);
lean_inc(v_quotContext_2232_);
v___x_2239_ = l_Lean_addMacroScope(v_quotContext_2232_, v___x_2238_, v_currMacroScope_2233_);
v___x_2240_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__52));
lean_inc_n(v___x_2235_, 2);
v___x_2241_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2235_);
lean_ctor_set(v___x_2241_, 1, v___x_2237_);
lean_ctor_set(v___x_2241_, 2, v___x_2239_);
lean_ctor_set(v___x_2241_, 3, v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2243_ = l_Lean_Syntax_node1(v___x_2235_, v___x_2242_, v_val_2228_);
v___x_2244_ = l_Lean_Syntax_node2(v___x_2235_, v___x_2236_, v___x_2241_, v___x_2243_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2244_);
v___x_2246_ = v___x_2230_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2247_ = lean_box(0);
v___x_2248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
lean_ctor_set(v___x_2249_, 1, v___y_2222_);
return v___x_2249_;
}
}
}
else
{
v___y_2123_ = v___y_2220_;
v___y_2124_ = v___y_2221_;
v___y_2125_ = v___y_2223_;
v___y_2126_ = v___y_2225_;
v___y_2127_ = v___y_2224_;
v___y_2128_ = v___y_2222_;
goto v___jp_2122_;
}
}
}
v___jp_2252_:
{
lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__53));
v___x_2260_ = lean_string_dec_eq(v___y_2256_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__54));
v___x_2262_ = lean_string_dec_eq(v___y_2256_, v___x_2261_);
if (v___x_2262_ == 0)
{
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2254_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2255_;
v___y_2224_ = v___y_2257_;
v___y_2225_ = v___y_2256_;
goto v___jp_2219_;
}
else
{
lean_object* v___x_2263_; 
lean_dec_ref(v___y_2256_);
v___x_2263_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__55));
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2254_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2255_;
v___y_2224_ = v___y_2257_;
v___y_2225_ = v___x_2263_;
goto v___jp_2219_;
}
}
else
{
lean_object* v___x_2264_; 
lean_dec_ref(v___y_2256_);
v___x_2264_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__56));
v___y_2220_ = v___y_2253_;
v___y_2221_ = v___y_2254_;
v___y_2222_ = v___y_2258_;
v___y_2223_ = v___y_2255_;
v___y_2224_ = v___y_2257_;
v___y_2225_ = v___x_2264_;
goto v___jp_2219_;
}
}
v___jp_2265_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = ((lean_object*)(l_Lasm_UI_Syntax_stringProps));
v___x_2273_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v___y_2269_, v___x_2272_);
if (lean_obj_tag(v___x_2273_) == 1)
{
lean_dec_ref(v___y_2269_);
if (lean_obj_tag(v___y_2267_) == 1)
{
lean_object* v_val_2274_; lean_object* v_val_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2333_; 
lean_dec(v___y_2268_);
lean_dec(v___y_2266_);
v_val_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v_val_2275_ = lean_ctor_get(v___y_2267_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___y_2267_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2277_ = v___y_2267_;
v_isShared_2278_ = v_isSharedCheck_2333_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_val_2275_);
lean_dec(v___y_2267_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2333_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v_quotContext_2279_; lean_object* v_currMacroScope_2280_; lean_object* v_ref_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2328_; 
v_quotContext_2279_ = lean_ctor_get(v___y_2270_, 1);
v_currMacroScope_2280_ = lean_ctor_get(v___y_2270_, 2);
v_ref_2281_ = lean_ctor_get(v___y_2270_, 5);
v___x_2282_ = l_Lean_SourceInfo_fromRef(v_ref_2281_, v___x_2121_);
v___x_2283_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2284_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2282_, 17);
v___x_2285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2282_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2287_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2288_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2289_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2280_, 3);
lean_inc_n(v_quotContext_2279_, 3);
v___x_2290_ = l_Lean_addMacroScope(v_quotContext_2279_, v___x_2289_, v_currMacroScope_2280_);
v___x_2291_ = lean_box(0);
v___x_2292_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2293_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2282_);
lean_ctor_set(v___x_2293_, 1, v___x_2288_);
lean_ctor_set(v___x_2293_, 2, v___x_2290_);
lean_ctor_set(v___x_2293_, 3, v___x_2292_);
v___x_2294_ = lean_box(2);
v___x_2295_ = l_Lean_Syntax_mkStrLit(v_val_2274_, v___x_2294_);
v___x_2296_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2297_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2298_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2282_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2301_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2302_ = lean_box(0);
v___x_2303_ = l_Lean_addMacroScope(v_quotContext_2279_, v___x_2302_, v_currMacroScope_2280_);
v___x_2304_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2305_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2282_);
lean_ctor_set(v___x_2305_, 1, v___x_2301_);
lean_ctor_set(v___x_2305_, 2, v___x_2303_);
lean_ctor_set(v___x_2305_, 3, v___x_2304_);
v___x_2306_ = l_Lean_Syntax_node1(v___x_2282_, v___x_2300_, v___x_2305_);
v___x_2307_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2297_, v___x_2299_, v___x_2306_);
v___x_2308_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2309_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2310_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2282_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__68, &l_Lasm_UI_Syntax_expandAttr___closed__68_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__68);
v___x_2312_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2313_ = l_Lean_addMacroScope(v_quotContext_2279_, v___x_2312_, v_currMacroScope_2280_);
v___x_2314_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2282_);
lean_ctor_set(v___x_2314_, 1, v___x_2311_);
lean_ctor_set(v___x_2314_, 2, v___x_2313_);
lean_ctor_set(v___x_2314_, 3, v___x_2291_);
v___x_2315_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2308_, v___x_2310_, v___x_2314_);
v___x_2316_ = l_Lean_Syntax_node1(v___x_2282_, v___x_2286_, v_val_2275_);
v___x_2317_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2287_, v___x_2315_, v___x_2316_);
v___x_2318_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2319_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2282_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = l_Lean_Syntax_node3(v___x_2282_, v___x_2296_, v___x_2307_, v___x_2317_, v___x_2319_);
v___x_2321_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2286_, v___x_2295_, v___x_2320_);
v___x_2322_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2287_, v___x_2293_, v___x_2321_);
v___x_2323_ = l_Lean_Syntax_node1(v___x_2282_, v___x_2286_, v___x_2322_);
v___x_2324_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2282_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = l_Lean_Syntax_node3(v___x_2282_, v___x_2283_, v___x_2285_, v___x_2323_, v___x_2325_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2326_);
v___x_2328_ = v___x_2277_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_box(0);
v___x_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
lean_ctor_set(v___x_2331_, 1, v___y_2271_);
return v___x_2331_;
}
}
}
else
{
lean_dec(v___y_2267_);
if (lean_obj_tag(v___y_2268_) == 1)
{
lean_object* v_val_2334_; lean_object* v_val_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v___y_2266_);
v_val_2334_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_val_2334_);
lean_dec_ref_known(v___x_2273_, 1);
v_val_2335_ = lean_ctor_get(v___y_2268_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___y_2268_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2337_ = v___y_2268_;
v_isShared_2338_ = v_isSharedCheck_2393_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_val_2335_);
lean_dec(v___y_2268_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2393_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_quotContext_2339_; lean_object* v_currMacroScope_2340_; lean_object* v_ref_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2388_; 
v_quotContext_2339_ = lean_ctor_get(v___y_2270_, 1);
v_currMacroScope_2340_ = lean_ctor_get(v___y_2270_, 2);
v_ref_2341_ = lean_ctor_get(v___y_2270_, 5);
v___x_2342_ = l_Lean_SourceInfo_fromRef(v_ref_2341_, v___x_2121_);
v___x_2343_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2344_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2342_, 17);
v___x_2345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2342_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2347_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2348_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2349_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2340_, 3);
lean_inc_n(v_quotContext_2339_, 3);
v___x_2350_ = l_Lean_addMacroScope(v_quotContext_2339_, v___x_2349_, v_currMacroScope_2340_);
v___x_2351_ = lean_box(0);
v___x_2352_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2353_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2342_);
lean_ctor_set(v___x_2353_, 1, v___x_2348_);
lean_ctor_set(v___x_2353_, 2, v___x_2350_);
lean_ctor_set(v___x_2353_, 3, v___x_2352_);
v___x_2354_ = lean_box(2);
v___x_2355_ = l_Lean_Syntax_mkStrLit(v_val_2334_, v___x_2354_);
v___x_2356_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2357_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2358_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2359_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2342_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2361_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2362_ = lean_box(0);
v___x_2363_ = l_Lean_addMacroScope(v_quotContext_2339_, v___x_2362_, v_currMacroScope_2340_);
v___x_2364_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2365_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2342_);
lean_ctor_set(v___x_2365_, 1, v___x_2361_);
lean_ctor_set(v___x_2365_, 2, v___x_2363_);
lean_ctor_set(v___x_2365_, 3, v___x_2364_);
v___x_2366_ = l_Lean_Syntax_node1(v___x_2342_, v___x_2360_, v___x_2365_);
v___x_2367_ = l_Lean_Syntax_node2(v___x_2342_, v___x_2357_, v___x_2359_, v___x_2366_);
v___x_2368_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2369_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2342_);
lean_ctor_set(v___x_2370_, 1, v___x_2369_);
v___x_2371_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__68, &l_Lasm_UI_Syntax_expandAttr___closed__68_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__68);
v___x_2372_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2373_ = l_Lean_addMacroScope(v_quotContext_2339_, v___x_2372_, v_currMacroScope_2340_);
v___x_2374_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2342_);
lean_ctor_set(v___x_2374_, 1, v___x_2371_);
lean_ctor_set(v___x_2374_, 2, v___x_2373_);
lean_ctor_set(v___x_2374_, 3, v___x_2351_);
v___x_2375_ = l_Lean_Syntax_node2(v___x_2342_, v___x_2368_, v___x_2370_, v___x_2374_);
v___x_2376_ = l_Lean_Syntax_node1(v___x_2342_, v___x_2346_, v_val_2335_);
v___x_2377_ = l_Lean_Syntax_node2(v___x_2342_, v___x_2347_, v___x_2375_, v___x_2376_);
v___x_2378_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2379_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2342_);
lean_ctor_set(v___x_2379_, 1, v___x_2378_);
v___x_2380_ = l_Lean_Syntax_node3(v___x_2342_, v___x_2356_, v___x_2367_, v___x_2377_, v___x_2379_);
v___x_2381_ = l_Lean_Syntax_node2(v___x_2342_, v___x_2346_, v___x_2355_, v___x_2380_);
v___x_2382_ = l_Lean_Syntax_node2(v___x_2342_, v___x_2347_, v___x_2353_, v___x_2381_);
v___x_2383_ = l_Lean_Syntax_node1(v___x_2342_, v___x_2346_, v___x_2382_);
v___x_2384_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2385_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2342_);
lean_ctor_set(v___x_2385_, 1, v___x_2384_);
v___x_2386_ = l_Lean_Syntax_node3(v___x_2342_, v___x_2343_, v___x_2345_, v___x_2383_, v___x_2385_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2386_);
v___x_2388_ = v___x_2337_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2389_ = lean_box(0);
v___x_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2388_);
lean_ctor_set(v___x_2390_, 1, v___x_2389_);
v___x_2391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___y_2271_);
return v___x_2391_;
}
}
}
else
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_a_2396_; lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2404_; 
lean_dec_ref_known(v___x_2273_, 1);
lean_dec(v___y_2268_);
v___x_2394_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__69));
v___x_2395_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2266_, v___x_2394_, v___y_2270_, v___y_2271_);
lean_dec(v___y_2266_);
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
v_a_2397_ = lean_ctor_get(v___x_2395_, 1);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2399_ = v___x_2395_;
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_inc(v_a_2396_);
lean_dec(v___x_2395_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2396_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
}
else
{
lean_dec(v___x_2273_);
v___y_2253_ = v___y_2266_;
v___y_2254_ = v___y_2267_;
v___y_2255_ = v___y_2268_;
v___y_2256_ = v___y_2269_;
v___y_2257_ = v___y_2270_;
v___y_2258_ = v___y_2271_;
goto v___jp_2252_;
}
}
v___jp_2405_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2412_ = ((lean_object*)(l_Lasm_UI_Syntax_boolProps));
v___x_2413_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v___y_2409_, v___x_2412_);
if (lean_obj_tag(v___x_2413_) == 1)
{
lean_dec(v___y_2407_);
if (lean_obj_tag(v___y_2408_) == 0)
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v_a_2424_; lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
lean_dec_ref_known(v___x_2413_, 1);
v___x_2414_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__70));
lean_inc_ref(v___y_2409_);
v___x_2415_ = lean_string_append(v___y_2409_, v___x_2414_);
v___x_2416_ = lean_string_append(v___x_2415_, v___y_2409_);
v___x_2417_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__71));
v___x_2418_ = lean_string_append(v___x_2416_, v___x_2417_);
v___x_2419_ = lean_string_append(v___x_2418_, v___y_2409_);
v___x_2420_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__72));
v___x_2421_ = lean_string_append(v___x_2419_, v___x_2420_);
v___x_2422_ = lean_string_append(v___x_2421_, v___y_2409_);
lean_dec_ref(v___y_2409_);
v___x_2423_ = l_Lean_Macro_throwErrorAt___redArg(v___y_2406_, v___x_2422_, v___y_2410_, v___y_2411_);
lean_dec(v___y_2406_);
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_a_2425_ = lean_ctor_get(v___x_2423_, 1);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2423_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2424_);
lean_ctor_set(v_reuseFailAlloc_2431_, 1, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
else
{
lean_object* v_val_2433_; lean_object* v_val_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2492_; 
lean_dec_ref(v___y_2409_);
lean_dec(v___y_2406_);
v_val_2433_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_val_2433_);
lean_dec_ref_known(v___x_2413_, 1);
v_val_2434_ = lean_ctor_get(v___y_2408_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___y_2408_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2436_ = v___y_2408_;
v_isShared_2437_ = v_isSharedCheck_2492_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_val_2434_);
lean_dec(v___y_2408_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2492_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v_quotContext_2438_; lean_object* v_currMacroScope_2439_; lean_object* v_ref_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2487_; 
v_quotContext_2438_ = lean_ctor_get(v___y_2410_, 1);
v_currMacroScope_2439_ = lean_ctor_get(v___y_2410_, 2);
v_ref_2440_ = lean_ctor_get(v___y_2410_, 5);
v___x_2441_ = l_Lean_SourceInfo_fromRef(v_ref_2440_, v___x_2121_);
v___x_2442_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2443_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2441_, 17);
v___x_2444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2441_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2446_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2447_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__58, &l_Lasm_UI_Syntax_expandAttr___closed__58_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__58);
v___x_2448_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__60));
lean_inc_n(v_currMacroScope_2439_, 3);
lean_inc_n(v_quotContext_2438_, 3);
v___x_2449_ = l_Lean_addMacroScope(v_quotContext_2438_, v___x_2448_, v_currMacroScope_2439_);
v___x_2450_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__64));
v___x_2451_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2441_);
lean_ctor_set(v___x_2451_, 1, v___x_2447_);
lean_ctor_set(v___x_2451_, 2, v___x_2449_);
lean_ctor_set(v___x_2451_, 3, v___x_2450_);
v___x_2452_ = lean_box(2);
v___x_2453_ = l_Lean_Syntax_mkStrLit(v_val_2433_, v___x_2452_);
v___x_2454_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__20));
v___x_2455_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__22));
v___x_2456_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__23));
v___x_2457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2441_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__25));
v___x_2459_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__26, &l_Lasm_UI_Syntax_expandAttr___closed__26_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__26);
v___x_2460_ = lean_box(0);
v___x_2461_ = l_Lean_addMacroScope(v_quotContext_2438_, v___x_2460_, v_currMacroScope_2439_);
v___x_2462_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__35));
v___x_2463_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2441_);
lean_ctor_set(v___x_2463_, 1, v___x_2459_);
lean_ctor_set(v___x_2463_, 2, v___x_2461_);
lean_ctor_set(v___x_2463_, 3, v___x_2462_);
v___x_2464_ = l_Lean_Syntax_node1(v___x_2441_, v___x_2458_, v___x_2463_);
v___x_2465_ = l_Lean_Syntax_node2(v___x_2441_, v___x_2455_, v___x_2457_, v___x_2464_);
v___x_2466_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__66));
v___x_2467_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__67));
v___x_2468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2441_);
lean_ctor_set(v___x_2468_, 1, v___x_2467_);
v___x_2469_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__74, &l_Lasm_UI_Syntax_expandAttr___closed__74_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__74);
v___x_2470_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__75));
v___x_2471_ = l_Lean_addMacroScope(v_quotContext_2438_, v___x_2470_, v_currMacroScope_2439_);
v___x_2472_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__79));
v___x_2473_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2441_);
lean_ctor_set(v___x_2473_, 1, v___x_2469_);
lean_ctor_set(v___x_2473_, 2, v___x_2471_);
lean_ctor_set(v___x_2473_, 3, v___x_2472_);
v___x_2474_ = l_Lean_Syntax_node2(v___x_2441_, v___x_2466_, v___x_2468_, v___x_2473_);
v___x_2475_ = l_Lean_Syntax_node1(v___x_2441_, v___x_2445_, v_val_2434_);
v___x_2476_ = l_Lean_Syntax_node2(v___x_2441_, v___x_2446_, v___x_2474_, v___x_2475_);
v___x_2477_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxElement_quot___closed__13));
v___x_2478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2441_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = l_Lean_Syntax_node3(v___x_2441_, v___x_2454_, v___x_2465_, v___x_2476_, v___x_2478_);
v___x_2480_ = l_Lean_Syntax_node2(v___x_2441_, v___x_2445_, v___x_2453_, v___x_2479_);
v___x_2481_ = l_Lean_Syntax_node2(v___x_2441_, v___x_2446_, v___x_2451_, v___x_2480_);
v___x_2482_ = l_Lean_Syntax_node1(v___x_2441_, v___x_2445_, v___x_2481_);
v___x_2483_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2441_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = l_Lean_Syntax_node3(v___x_2441_, v___x_2442_, v___x_2444_, v___x_2482_, v___x_2484_);
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 0, v___x_2485_);
v___x_2487_ = v___x_2436_;
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
lean_ctor_set(v___x_2490_, 1, v___y_2411_);
return v___x_2490_;
}
}
}
}
else
{
lean_dec(v___x_2413_);
v___y_2266_ = v___y_2406_;
v___y_2267_ = v___y_2407_;
v___y_2268_ = v___y_2408_;
v___y_2269_ = v___y_2409_;
v___y_2270_ = v___y_2410_;
v___y_2271_ = v___y_2411_;
goto v___jp_2265_;
}
}
}
else
{
lean_object* v_ref_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_ref_2859_ = lean_ctor_get(v_a_2065_, 5);
v___x_2860_ = lean_unsigned_to_nat(1u);
v___x_2861_ = l_Lean_Syntax_getArg(v_a_2064_, v___x_2860_);
lean_dec(v_a_2064_);
v___x_2862_ = 0;
v___x_2863_ = l_Lean_SourceInfo_fromRef(v_ref_2859_, v___x_2862_);
v___x_2864_ = ((lean_object*)(l_Lasm_UI_Syntax_attrsTerm___closed__1));
v___x_2865_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__99));
lean_inc(v___x_2863_);
v___x_2866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2863_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = l_Lean_Syntax_node2(v___x_2863_, v___x_2864_, v___x_2866_, v___x_2861_);
v___x_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
v___x_2869_ = lean_box(0);
v___x_2870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2868_);
lean_ctor_set(v___x_2870_, 1, v___x_2869_);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
lean_ctor_set(v___x_2871_, 1, v_a_2066_);
return v___x_2871_;
}
v___jp_2069_:
{
lean_object* v_quotContext_2073_; lean_object* v_currMacroScope_2074_; lean_object* v_ref_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v_quotContext_2073_ = lean_ctor_get(v___y_2071_, 1);
v_currMacroScope_2074_ = lean_ctor_get(v___y_2071_, 2);
v_ref_2075_ = lean_ctor_get(v___y_2071_, 5);
v___x_2076_ = l_Lean_SourceInfo_fromRef(v_ref_2075_, v___x_2068_);
v___x_2077_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2078_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2076_, 8);
v___x_2079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2076_);
lean_ctor_set(v___x_2079_, 1, v___x_2078_);
v___x_2080_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2081_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_2082_ = lean_obj_once(&l_Lasm_UI_Syntax_expandAttr___closed__8, &l_Lasm_UI_Syntax_expandAttr___closed__8_once, _init_l_Lasm_UI_Syntax_expandAttr___closed__8);
v___x_2083_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__10));
lean_inc(v_currMacroScope_2074_);
lean_inc(v_quotContext_2073_);
v___x_2084_ = l_Lean_addMacroScope(v_quotContext_2073_, v___x_2083_, v_currMacroScope_2074_);
v___x_2085_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__14));
v___x_2086_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2076_);
lean_ctor_set(v___x_2086_, 1, v___x_2082_);
lean_ctor_set(v___x_2086_, 2, v___x_2084_);
lean_ctor_set(v___x_2086_, 3, v___x_2085_);
v___x_2087_ = lean_box(2);
v___x_2088_ = l_Lean_Syntax_mkStrLit(v___y_2070_, v___x_2087_);
v___x_2089_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxAttrVal___closed__5));
v___x_2090_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__15));
v___x_2091_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2076_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = l_Lean_Syntax_node1(v___x_2076_, v___x_2089_, v___x_2091_);
v___x_2093_ = l_Lean_Syntax_node2(v___x_2076_, v___x_2080_, v___x_2088_, v___x_2092_);
v___x_2094_ = l_Lean_Syntax_node2(v___x_2076_, v___x_2081_, v___x_2086_, v___x_2093_);
v___x_2095_ = l_Lean_Syntax_node1(v___x_2076_, v___x_2080_, v___x_2094_);
v___x_2096_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2076_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = l_Lean_Syntax_node3(v___x_2076_, v___x_2077_, v___x_2079_, v___x_2095_, v___x_2097_);
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
v___x_2100_ = lean_box(0);
v___x_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2099_);
lean_ctor_set(v___x_2101_, 1, v___x_2100_);
v___x_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
lean_ctor_set(v___x_2102_, 1, v___y_2072_);
return v___x_2102_;
}
v___jp_2103_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v_a_2111_; lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
v___x_2105_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__17));
lean_inc_ref(v___y_2104_);
v___x_2106_ = lean_string_append(v___y_2104_, v___x_2105_);
v___x_2107_ = lean_string_append(v___x_2106_, v___y_2104_);
lean_dec_ref(v___y_2104_);
v___x_2108_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__18));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
v___x_2110_ = l_Lean_Macro_throwErrorAt___redArg(v_a_2064_, v___x_2109_, v_a_2065_, v_a_2066_);
lean_dec(v_a_2064_);
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
v_a_2112_ = lean_ctor_get(v___x_2110_, 1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2114_ = v___x_2110_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_inc(v_a_2111_);
lean_dec(v___x_2110_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2111_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_a_2112_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandAttr___boxed(lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l_Lasm_UI_Syntax_expandAttr(v_a_2872_, v_a_2873_, v_a_2874_);
lean_dec_ref(v_a_2873_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(lean_object* v_00_u03b2_2876_, lean_object* v_x_2877_, lean_object* v_x_2878_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___redArg(v_x_2877_, v_x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0___boxed(lean_object* v_00_u03b2_2880_, lean_object* v_x_2881_, lean_object* v_x_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_List_lookup___at___00Lasm_UI_Syntax_expandAttr_spec__0(v_00_u03b2_2880_, v_x_2881_, v_x_2882_);
lean_dec(v_x_2882_);
lean_dec_ref(v_x_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(lean_object* v_as_2888_, size_t v_i_2889_, size_t v_stop_2890_, lean_object* v_b_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
uint8_t v___x_2894_; 
v___x_2894_ = lean_usize_dec_eq(v_i_2889_, v_stop_2890_);
if (v___x_2894_ == 0)
{
lean_object* v_ref_2895_; size_t v___x_2896_; size_t v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_ref_2895_ = lean_ctor_get(v___y_2892_, 5);
v___x_2896_ = ((size_t)1ULL);
v___x_2897_ = lean_usize_sub(v_i_2889_, v___x_2896_);
v___x_2898_ = lean_array_uget_borrowed(v_as_2888_, v___x_2897_);
v___x_2899_ = l_Lean_SourceInfo_fromRef(v_ref_2895_, v___x_2894_);
v___x_2900_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__1));
v___x_2901_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___closed__2));
lean_inc(v___x_2899_);
v___x_2902_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2899_);
lean_ctor_set(v___x_2902_, 1, v___x_2901_);
lean_inc(v___x_2898_);
v___x_2903_ = l_Lean_Syntax_node3(v___x_2899_, v___x_2900_, v___x_2898_, v___x_2902_, v_b_2891_);
v_i_2889_ = v___x_2897_;
v_b_2891_ = v___x_2903_;
goto _start;
}
else
{
lean_object* v___x_2905_; 
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v_b_2891_);
lean_ctor_set(v___x_2905_, 1, v___y_2893_);
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0___boxed(lean_object* v_as_2906_, lean_object* v_i_2907_, lean_object* v_stop_2908_, lean_object* v_b_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
size_t v_i_boxed_2912_; size_t v_stop_boxed_2913_; lean_object* v_res_2914_; 
v_i_boxed_2912_ = lean_unbox_usize(v_i_2907_);
lean_dec(v_i_2907_);
v_stop_boxed_2913_ = lean_unbox_usize(v_stop_2908_);
lean_dec(v_stop_2908_);
v_res_2914_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_as_2906_, v_i_boxed_2912_, v_stop_boxed_2913_, v_b_2909_, v___y_2910_, v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec_ref(v_as_2906_);
return v_res_2914_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Array_mkArray0___redArg();
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(lean_object* v___x_2917_, lean_object* v_singles_2918_, lean_object* v_tail_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
if (lean_obj_tag(v_tail_2919_) == 0)
{
lean_object* v_ref_2922_; uint8_t v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_ref_2922_ = lean_ctor_get(v___y_2920_, 5);
v___x_2923_ = 0;
v___x_2924_ = l_Lean_SourceInfo_fromRef(v_ref_2922_, v___x_2923_);
v___x_2925_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_2926_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_2924_, 3);
v___x_2927_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2924_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_2929_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_2930_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_2931_ = l_Lean_Syntax_SepArray_ofElems(v___x_2930_, v_singles_2918_);
v___x_2932_ = l_Array_append___redArg(v___x_2929_, v___x_2931_);
lean_dec_ref(v___x_2931_);
v___x_2933_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2924_);
lean_ctor_set(v___x_2933_, 1, v___x_2928_);
lean_ctor_set(v___x_2933_, 2, v___x_2932_);
v___x_2934_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_2935_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2935_, 0, v___x_2924_);
lean_ctor_set(v___x_2935_, 1, v___x_2934_);
v___x_2936_ = l_Lean_Syntax_node3(v___x_2924_, v___x_2925_, v___x_2927_, v___x_2933_, v___x_2935_);
v___x_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set(v___x_2937_, 1, v___y_2921_);
return v___x_2937_;
}
else
{
lean_object* v_val_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v_val_2938_ = lean_ctor_get(v_tail_2919_, 0);
lean_inc(v_val_2938_);
lean_dec_ref_known(v_tail_2919_, 1);
v___x_2939_ = lean_array_get_size(v_singles_2918_);
v___x_2940_ = lean_nat_dec_lt(v___x_2917_, v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; 
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v_val_2938_);
lean_ctor_set(v___x_2941_, 1, v___y_2921_);
return v___x_2941_;
}
else
{
size_t v___x_2942_; size_t v___x_2943_; lean_object* v___x_2944_; 
v___x_2942_ = lean_usize_of_nat(v___x_2939_);
v___x_2943_ = ((size_t)0ULL);
v___x_2944_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_singles_2918_, v___x_2942_, v___x_2943_, v_val_2938_, v___y_2920_, v___y_2921_);
return v___x_2944_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___boxed(lean_object* v___x_2945_, lean_object* v_singles_2946_, lean_object* v_tail_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2945_, v_singles_2946_, v_tail_2947_, v___y_2948_, v___y_2949_);
lean_dec_ref(v___y_2948_);
lean_dec_ref(v_singles_2946_);
lean_dec(v___x_2945_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(lean_object* v_as_2957_, size_t v_sz_2958_, size_t v_i_2959_, lean_object* v_b_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v_a_2964_; lean_object* v_a_2965_; uint8_t v___x_2969_; 
v___x_2969_ = lean_usize_dec_lt(v_i_2959_, v_sz_2958_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2970_, 0, v_b_2960_);
lean_ctor_set(v___x_2970_, 1, v___y_2962_);
return v___x_2970_;
}
else
{
lean_object* v_fst_2971_; lean_object* v_snd_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3045_; 
v_fst_2971_ = lean_ctor_get(v_b_2960_, 0);
v_snd_2972_ = lean_ctor_get(v_b_2960_, 1);
v_isSharedCheck_3045_ = !lean_is_exclusive(v_b_2960_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_2974_ = v_b_2960_;
v_isShared_2975_ = v_isSharedCheck_3045_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_snd_2972_);
lean_inc(v_fst_2971_);
lean_dec(v_b_2960_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3045_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; lean_object* v_singles_2977_; lean_object* v_____do__lift_2979_; lean_object* v___y_2980_; lean_object* v_____do__lift_2986_; lean_object* v___y_2987_; lean_object* v_a_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; uint8_t v___y_2994_; 
v___x_2976_ = lean_unsigned_to_nat(0u);
v_singles_2977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_a_2990_ = lean_array_uget_borrowed(v_as_2957_, v_i_2959_);
v___x_2991_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
lean_inc(v_a_2990_);
v___x_2992_ = l_Lean_Syntax_isOfKind(v_a_2990_, v___x_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_3013_; uint8_t v___x_3014_; 
lean_del_object(v___x_2974_);
v___x_3013_ = lean_array_get_size(v_snd_2972_);
v___x_3014_ = lean_nat_dec_eq(v___x_3013_, v___x_2976_);
if (v___x_3014_ == 0)
{
v___y_2994_ = v___x_2992_;
goto v___jp_2993_;
}
else
{
if (lean_obj_tag(v_fst_2971_) == 0)
{
lean_dec(v_snd_2972_);
lean_inc(v_a_2990_);
v_____do__lift_2986_ = v_a_2990_;
v___y_2987_ = v___y_2962_;
goto v___jp_2985_;
}
else
{
v___y_2994_ = v___x_2992_;
goto v___jp_2993_;
}
}
}
else
{
lean_object* v___x_3015_; lean_object* v___x_3016_; uint8_t v___x_3017_; uint8_t v___y_3019_; 
v___x_3015_ = lean_unsigned_to_nat(1u);
v___x_3016_ = l_Lean_Syntax_getArg(v_a_2990_, v___x_3015_);
lean_inc(v___x_3016_);
v___x_3017_ = l_Lean_Syntax_matchesNull(v___x_3016_, v___x_3015_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3038_; uint8_t v___x_3039_; 
lean_dec(v___x_3016_);
v___x_3038_ = lean_array_get_size(v_snd_2972_);
v___x_3039_ = lean_nat_dec_eq(v___x_3038_, v___x_2976_);
if (v___x_3039_ == 0)
{
v___y_3019_ = v___x_3017_;
goto v___jp_3018_;
}
else
{
if (lean_obj_tag(v_fst_2971_) == 0)
{
v___y_3019_ = v___x_2992_;
goto v___jp_3018_;
}
else
{
v___y_3019_ = v___x_3017_;
goto v___jp_3018_;
}
}
}
else
{
lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
lean_del_object(v___x_2974_);
v___x_3040_ = l_Lean_Syntax_getArg(v___x_3016_, v___x_2976_);
lean_dec(v___x_3016_);
v___x_3041_ = lean_mk_empty_array_with_capacity(v___x_3015_);
v___x_3042_ = lean_array_push(v___x_3041_, v___x_3040_);
v___x_3043_ = l_Array_append___redArg(v___x_3042_, v_snd_2972_);
lean_dec(v_snd_2972_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v_fst_2971_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v_a_2964_ = v___x_3044_;
v_a_2965_ = v___y_2962_;
goto v___jp_2963_;
}
v___jp_3018_:
{
if (v___y_3019_ == 0)
{
lean_object* v___x_3020_; 
v___x_3020_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2976_, v_snd_2972_, v_fst_2971_, v___y_2961_, v___y_2962_);
lean_dec(v_snd_2972_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v_a_3022_; lean_object* v_ref_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
v_a_3022_ = lean_ctor_get(v___x_3020_, 1);
lean_inc(v_a_3022_);
lean_dec_ref_known(v___x_3020_, 2);
v_ref_3023_ = lean_ctor_get(v___y_2961_, 5);
v___x_3024_ = l_Lean_SourceInfo_fromRef(v_ref_3023_, v___x_3017_);
v___x_3025_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_3026_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_3024_);
v___x_3027_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3024_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
lean_inc(v_a_2990_);
v___x_3028_ = l_Lean_Syntax_node3(v___x_3024_, v___x_3025_, v_a_2990_, v___x_3027_, v_a_3021_);
v_____do__lift_2979_ = v___x_3028_;
v___y_2980_ = v_a_3022_;
goto v___jp_2978_;
}
else
{
lean_object* v_a_3029_; lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_del_object(v___x_2974_);
v_a_3029_ = lean_ctor_get(v___x_3020_, 0);
v_a_3030_ = lean_ctor_get(v___x_3020_, 1);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_3020_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_inc(v_a_3029_);
lean_dec(v___x_3020_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3029_);
lean_ctor_set(v_reuseFailAlloc_3036_, 1, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
else
{
lean_dec(v_snd_2972_);
lean_dec(v_fst_2971_);
lean_inc(v_a_2990_);
v_____do__lift_2979_ = v_a_2990_;
v___y_2980_ = v___y_2962_;
goto v___jp_2978_;
}
}
}
v___jp_2978_:
{
lean_object* v___x_2981_; lean_object* v___x_2983_; 
v___x_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2981_, 0, v_____do__lift_2979_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 1, v_singles_2977_);
lean_ctor_set(v___x_2974_, 0, v___x_2981_);
v___x_2983_ = v___x_2974_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2981_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_singles_2977_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
v_a_2964_ = v___x_2983_;
v_a_2965_ = v___y_2980_;
goto v___jp_2963_;
}
}
v___jp_2985_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2988_, 0, v_____do__lift_2986_);
v___x_2989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2988_);
lean_ctor_set(v___x_2989_, 1, v_singles_2977_);
v_a_2964_ = v___x_2989_;
v_a_2965_ = v___y_2987_;
goto v___jp_2963_;
}
v___jp_2993_:
{
if (v___y_2994_ == 0)
{
lean_object* v___x_2995_; 
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0(v___x_2976_, v_snd_2972_, v_fst_2971_, v___y_2961_, v___y_2962_);
lean_dec(v_snd_2972_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v_a_2997_; lean_object* v_ref_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
v_a_2997_ = lean_ctor_get(v___x_2995_, 1);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2995_, 2);
v_ref_2998_ = lean_ctor_get(v___y_2961_, 5);
v___x_2999_ = l_Lean_SourceInfo_fromRef(v_ref_2998_, v___x_2992_);
v___x_3000_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__2));
v___x_3001_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__3));
lean_inc(v___x_2999_);
v___x_3002_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_2999_);
lean_ctor_set(v___x_3002_, 1, v___x_3001_);
lean_inc(v_a_2990_);
v___x_3003_ = l_Lean_Syntax_node3(v___x_2999_, v___x_3000_, v_a_2990_, v___x_3002_, v_a_2996_);
v_____do__lift_2986_ = v___x_3003_;
v___y_2987_ = v_a_2997_;
goto v___jp_2985_;
}
else
{
lean_object* v_a_3004_; lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
v_a_3004_ = lean_ctor_get(v___x_2995_, 0);
v_a_3005_ = lean_ctor_get(v___x_2995_, 1);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_2995_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_inc(v_a_3004_);
lean_dec(v___x_2995_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3004_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
else
{
lean_dec(v_snd_2972_);
lean_dec(v_fst_2971_);
lean_inc(v_a_2990_);
v_____do__lift_2986_ = v_a_2990_;
v___y_2987_ = v___y_2962_;
goto v___jp_2985_;
}
}
}
}
v___jp_2963_:
{
size_t v___x_2966_; size_t v___x_2967_; 
v___x_2966_ = ((size_t)1ULL);
v___x_2967_ = lean_usize_add(v_i_2959_, v___x_2966_);
v_i_2959_ = v___x_2967_;
v_b_2960_ = v_a_2964_;
v___y_2962_ = v_a_2965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___boxed(lean_object* v_as_3046_, lean_object* v_sz_3047_, lean_object* v_i_3048_, lean_object* v_b_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
size_t v_sz_boxed_3052_; size_t v_i_boxed_3053_; lean_object* v_res_3054_; 
v_sz_boxed_3052_ = lean_unbox_usize(v_sz_3047_);
lean_dec(v_sz_3047_);
v_i_boxed_3053_ = lean_unbox_usize(v_i_3048_);
lean_dec(v_i_3048_);
v_res_3054_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v_as_3046_, v_sz_boxed_3052_, v_i_boxed_3053_, v_b_3049_, v___y_3050_, v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec_ref(v_as_3046_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists(lean_object* v_parts_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; size_t v_sz_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v___x_3061_ = lean_unsigned_to_nat(0u);
v___x_3062_ = l_Array_reverse___redArg(v_parts_3058_);
v___x_3063_ = ((lean_object*)(l_Lasm_UI_Syntax_concatLists___closed__0));
v_sz_3064_ = lean_array_size(v___x_3062_);
v___x_3065_ = ((size_t)0ULL);
v___x_3066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1(v___x_3062_, v_sz_3064_, v___x_3065_, v___x_3063_, v_a_3059_, v_a_3060_);
lean_dec_ref(v___x_3062_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v_fst_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
v_fst_3068_ = lean_ctor_get(v_a_3067_, 0);
if (lean_obj_tag(v_fst_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3099_; 
v_a_3069_ = lean_ctor_get(v___x_3066_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v___x_3066_, 0);
lean_dec(v_unused_3100_);
v___x_3071_ = v___x_3066_;
v_isShared_3072_ = v_isSharedCheck_3099_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3066_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3099_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v_snd_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3097_; 
v_snd_3073_ = lean_ctor_get(v_a_3067_, 1);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_a_3067_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v_a_3067_, 0);
lean_dec(v_unused_3098_);
v___x_3075_ = v_a_3067_;
v_isShared_3076_ = v_isSharedCheck_3097_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_snd_3073_);
lean_dec(v_a_3067_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3097_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v_ref_3077_; uint8_t v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3083_; 
v_ref_3077_ = lean_ctor_get(v_a_3059_, 5);
v___x_3078_ = 0;
v___x_3079_ = l_Lean_SourceInfo_fromRef(v_ref_3077_, v___x_3078_);
v___x_3080_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3081_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc(v___x_3079_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set_tag(v___x_3075_, 2);
lean_ctor_set(v___x_3075_, 1, v___x_3081_);
lean_ctor_set(v___x_3075_, 0, v___x_3079_);
v___x_3083_ = v___x_3075_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3079_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v___x_3081_);
v___x_3083_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3094_; 
v___x_3084_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3085_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__0);
v___x_3086_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___lam__0___closed__1));
v___x_3087_ = l_Lean_Syntax_SepArray_ofElems(v___x_3086_, v_snd_3073_);
lean_dec(v_snd_3073_);
v___x_3088_ = l_Array_append___redArg(v___x_3085_, v___x_3087_);
lean_dec_ref(v___x_3087_);
lean_inc_n(v___x_3079_, 2);
v___x_3089_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3079_);
lean_ctor_set(v___x_3089_, 1, v___x_3084_);
lean_ctor_set(v___x_3089_, 2, v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3091_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3079_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = l_Lean_Syntax_node3(v___x_3079_, v___x_3080_, v___x_3083_, v___x_3089_, v___x_3091_);
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 0, v___x_3092_);
v___x_3094_ = v___x_3071_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3092_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v_a_3069_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3114_; 
lean_inc_ref(v_fst_3068_);
v_a_3101_ = lean_ctor_get(v___x_3066_, 1);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3114_ == 0)
{
lean_object* v_unused_3115_; 
v_unused_3115_ = lean_ctor_get(v___x_3066_, 0);
lean_dec(v_unused_3115_);
v___x_3103_ = v___x_3066_;
v_isShared_3104_ = v_isSharedCheck_3114_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3066_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3114_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v_snd_3105_; lean_object* v_val_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; 
v_snd_3105_ = lean_ctor_get(v_a_3067_, 1);
lean_inc(v_snd_3105_);
lean_dec(v_a_3067_);
v_val_3106_ = lean_ctor_get(v_fst_3068_, 0);
lean_inc(v_val_3106_);
lean_dec_ref_known(v_fst_3068_, 1);
v___x_3107_ = lean_array_get_size(v_snd_3105_);
v___x_3108_ = lean_nat_dec_lt(v___x_3061_, v___x_3107_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3110_; 
lean_dec(v_snd_3105_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 0, v_val_3106_);
v___x_3110_ = v___x_3103_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_val_3106_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_a_3101_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
else
{
size_t v___x_3112_; lean_object* v___x_3113_; 
lean_del_object(v___x_3103_);
v___x_3112_ = lean_usize_of_nat(v___x_3107_);
v___x_3113_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lasm_UI_Syntax_concatLists_spec__0(v_snd_3105_, v___x_3112_, v___x_3065_, v_val_3106_, v_a_3059_, v_a_3101_);
lean_dec(v_snd_3105_);
return v___x_3113_;
}
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_a_3116_ = lean_ctor_get(v___x_3066_, 0);
v_a_3117_ = lean_ctor_get(v___x_3066_, 1);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3066_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_inc(v_a_3116_);
lean_dec(v___x_3066_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3116_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_concatLists___boxed(lean_object* v_parts_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lasm_UI_Syntax_concatLists(v_parts_3125_, v_a_3126_, v_a_3127_);
lean_dec_ref(v_a_3126_);
return v_res_3128_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__1(void){
_start:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3130_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__0));
v___x_3131_ = l_String_toRawSubstring_x27(v___x_3130_);
return v___x_3131_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__10(void){
_start:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3151_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__9));
v___x_3152_ = l_String_toRawSubstring_x27(v___x_3151_);
return v___x_3152_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_nsTerm___closed__18(void){
_start:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__17));
v___x_3172_ = l_String_toRawSubstring_x27(v___x_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm(uint8_t v_x_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
switch(v_x_3190_)
{
case 0:
{
lean_object* v_quotContext_3193_; lean_object* v_currMacroScope_3194_; lean_object* v_ref_3195_; uint8_t v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_quotContext_3193_ = lean_ctor_get(v_a_3191_, 1);
v_currMacroScope_3194_ = lean_ctor_get(v_a_3191_, 2);
v_ref_3195_ = lean_ctor_get(v_a_3191_, 5);
v___x_3196_ = 0;
v___x_3197_ = l_Lean_SourceInfo_fromRef(v_ref_3195_, v___x_3196_);
v___x_3198_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__1, &l_Lasm_UI_Syntax_nsTerm___closed__1_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__1);
v___x_3199_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__4));
lean_inc(v_currMacroScope_3194_);
lean_inc(v_quotContext_3193_);
v___x_3200_ = l_Lean_addMacroScope(v_quotContext_3193_, v___x_3199_, v_currMacroScope_3194_);
v___x_3201_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__8));
v___x_3202_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3197_);
lean_ctor_set(v___x_3202_, 1, v___x_3198_);
lean_ctor_set(v___x_3202_, 2, v___x_3200_);
lean_ctor_set(v___x_3202_, 3, v___x_3201_);
v___x_3203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_ctor_set(v___x_3203_, 1, v_a_3192_);
return v___x_3203_;
}
case 1:
{
lean_object* v_quotContext_3204_; lean_object* v_currMacroScope_3205_; lean_object* v_ref_3206_; uint8_t v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_quotContext_3204_ = lean_ctor_get(v_a_3191_, 1);
v_currMacroScope_3205_ = lean_ctor_get(v_a_3191_, 2);
v_ref_3206_ = lean_ctor_get(v_a_3191_, 5);
v___x_3207_ = 0;
v___x_3208_ = l_Lean_SourceInfo_fromRef(v_ref_3206_, v___x_3207_);
v___x_3209_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__10, &l_Lasm_UI_Syntax_nsTerm___closed__10_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__10);
v___x_3210_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__12));
lean_inc(v_currMacroScope_3205_);
lean_inc(v_quotContext_3204_);
v___x_3211_ = l_Lean_addMacroScope(v_quotContext_3204_, v___x_3210_, v_currMacroScope_3205_);
v___x_3212_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__16));
v___x_3213_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3208_);
lean_ctor_set(v___x_3213_, 1, v___x_3209_);
lean_ctor_set(v___x_3213_, 2, v___x_3211_);
lean_ctor_set(v___x_3213_, 3, v___x_3212_);
v___x_3214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3213_);
lean_ctor_set(v___x_3214_, 1, v_a_3192_);
return v___x_3214_;
}
default: 
{
lean_object* v_quotContext_3215_; lean_object* v_currMacroScope_3216_; lean_object* v_ref_3217_; uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v_quotContext_3215_ = lean_ctor_get(v_a_3191_, 1);
v_currMacroScope_3216_ = lean_ctor_get(v_a_3191_, 2);
v_ref_3217_ = lean_ctor_get(v_a_3191_, 5);
v___x_3218_ = 0;
v___x_3219_ = l_Lean_SourceInfo_fromRef(v_ref_3217_, v___x_3218_);
v___x_3220_ = lean_obj_once(&l_Lasm_UI_Syntax_nsTerm___closed__18, &l_Lasm_UI_Syntax_nsTerm___closed__18_once, _init_l_Lasm_UI_Syntax_nsTerm___closed__18);
v___x_3221_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__20));
lean_inc(v_currMacroScope_3216_);
lean_inc(v_quotContext_3215_);
v___x_3222_ = l_Lean_addMacroScope(v_quotContext_3215_, v___x_3221_, v_currMacroScope_3216_);
v___x_3223_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__24));
v___x_3224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3219_);
lean_ctor_set(v___x_3224_, 1, v___x_3220_);
lean_ctor_set(v___x_3224_, 2, v___x_3222_);
lean_ctor_set(v___x_3224_, 3, v___x_3223_);
v___x_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3224_);
lean_ctor_set(v___x_3225_, 1, v_a_3192_);
return v___x_3225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_nsTerm___boxed(lean_object* v_x_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_){
_start:
{
uint8_t v_x_3972__boxed_3229_; lean_object* v_res_3230_; 
v_x_3972__boxed_3229_ = lean_unbox(v_x_3226_);
v_res_3230_ = l_Lasm_UI_Syntax_nsTerm(v_x_3972__boxed_3229_, v_a_3227_, v_a_3228_);
lean_dec_ref(v_a_3227_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(lean_object* v_as_3232_, size_t v_sz_3233_, size_t v_i_3234_, lean_object* v_b_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
lean_object* v_a_3239_; lean_object* v_a_3240_; uint8_t v___x_3244_; 
v___x_3244_ = lean_usize_dec_lt(v_i_3234_, v_sz_3233_);
if (v___x_3244_ == 0)
{
lean_object* v___x_3245_; 
v___x_3245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3245_, 0, v_b_3235_);
lean_ctor_set(v___x_3245_, 1, v___y_3237_);
return v___x_3245_;
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3247_; 
v_a_3246_ = lean_array_uget_borrowed(v_as_3232_, v_i_3234_);
lean_inc(v_a_3246_);
v___x_3247_ = l_Lasm_UI_Syntax_expandAttr(v_a_3246_, v___y_3236_, v___y_3237_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v_a_3249_; lean_object* v_fst_3250_; lean_object* v_snd_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3288_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc(v_a_3248_);
v_a_3249_ = lean_ctor_get(v___x_3247_, 1);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3247_, 2);
v_fst_3250_ = lean_ctor_get(v_a_3248_, 0);
v_snd_3251_ = lean_ctor_get(v_a_3248_, 1);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_a_3248_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3253_ = v_a_3248_;
v_isShared_3254_ = v_isSharedCheck_3288_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_snd_3251_);
lean_inc(v_fst_3250_);
lean_dec(v_a_3248_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3288_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v_fst_3261_; lean_object* v_snd_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3287_; 
v_fst_3261_ = lean_ctor_get(v_b_3235_, 0);
v_snd_3262_ = lean_ctor_get(v_b_3235_, 1);
v_isSharedCheck_3287_ = !lean_is_exclusive(v_b_3235_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3264_ = v_b_3235_;
v_isShared_3265_ = v_isSharedCheck_3287_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_snd_3262_);
lean_inc(v_fst_3261_);
lean_dec(v_b_3235_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3287_;
goto v_resetjp_3263_;
}
v___jp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3254_ == 0)
{
lean_ctor_set(v___x_3253_, 0, v___y_3256_);
v___x_3259_ = v___x_3253_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___y_3256_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v_snd_3251_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
v_a_3239_ = v___x_3259_;
v_a_3240_ = v___y_3257_;
goto v___jp_3238_;
}
}
v_resetjp_3263_:
{
lean_object* v_attrTerms_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; 
if (lean_obj_tag(v_fst_3250_) == 1)
{
lean_object* v_val_3285_; lean_object* v___x_3286_; 
v_val_3285_ = lean_ctor_get(v_fst_3250_, 0);
lean_inc(v_val_3285_);
lean_dec_ref_known(v_fst_3250_, 1);
v___x_3286_ = lean_array_push(v_fst_3261_, v_val_3285_);
v_attrTerms_3267_ = v___x_3286_;
v___y_3268_ = v___y_3236_;
v___y_3269_ = v_a_3249_;
goto v___jp_3266_;
}
else
{
lean_dec(v_fst_3250_);
v_attrTerms_3267_ = v_fst_3261_;
v___y_3268_ = v___y_3236_;
v___y_3269_ = v_a_3249_;
goto v___jp_3266_;
}
v___jp_3266_:
{
if (lean_obj_tag(v_snd_3251_) == 1)
{
lean_del_object(v___x_3264_);
if (lean_obj_tag(v_snd_3262_) == 0)
{
v___y_3256_ = v_attrTerms_3267_;
v___y_3257_ = v___y_3269_;
goto v___jp_3255_;
}
else
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
lean_dec_ref_known(v_snd_3262_, 1);
v___x_3270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___closed__0));
v___x_3271_ = l_Lean_Macro_throwErrorAt___redArg(v_a_3246_, v___x_3270_, v___y_3268_, v___y_3269_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 1);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3271_, 2);
v___y_3256_ = v_attrTerms_3267_;
v___y_3257_ = v_a_3272_;
goto v___jp_3255_;
}
else
{
lean_object* v_a_3273_; lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec_ref_known(v_snd_3251_, 1);
lean_dec_ref(v_attrTerms_3267_);
lean_del_object(v___x_3253_);
v_a_3273_ = lean_ctor_get(v___x_3271_, 0);
v_a_3274_ = lean_ctor_get(v___x_3271_, 1);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3271_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_inc(v_a_3273_);
lean_dec(v___x_3271_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3273_);
lean_ctor_set(v_reuseFailAlloc_3280_, 1, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
}
else
{
lean_object* v___x_3283_; 
lean_del_object(v___x_3253_);
lean_dec(v_snd_3251_);
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 0, v_attrTerms_3267_);
v___x_3283_ = v___x_3264_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_attrTerms_3267_);
lean_ctor_set(v_reuseFailAlloc_3284_, 1, v_snd_3262_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
v_a_3239_ = v___x_3283_;
v_a_3240_ = v___y_3269_;
goto v___jp_3238_;
}
}
}
}
}
}
else
{
lean_object* v_a_3289_; lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_dec_ref(v_b_3235_);
v_a_3289_ = lean_ctor_get(v___x_3247_, 0);
v_a_3290_ = lean_ctor_get(v___x_3247_, 1);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3247_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_inc(v_a_3289_);
lean_dec(v___x_3247_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3289_);
lean_ctor_set(v_reuseFailAlloc_3296_, 1, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
v___jp_3238_:
{
size_t v___x_3241_; size_t v___x_3242_; 
v___x_3241_ = ((size_t)1ULL);
v___x_3242_ = lean_usize_add(v_i_3234_, v___x_3241_);
v_i_3234_ = v___x_3242_;
v_b_3235_ = v_a_3239_;
v___y_3237_ = v_a_3240_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0___boxed(lean_object* v_as_3298_, lean_object* v_sz_3299_, lean_object* v_i_3300_, lean_object* v_b_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_){
_start:
{
size_t v_sz_boxed_3304_; size_t v_i_boxed_3305_; lean_object* v_res_3306_; 
v_sz_boxed_3304_ = lean_unbox_usize(v_sz_3299_);
lean_dec(v_sz_3299_);
v_i_boxed_3305_ = lean_unbox_usize(v_i_3300_);
lean_dec(v_i_3300_);
v_res_3306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v_as_3298_, v_sz_boxed_3304_, v_i_boxed_3305_, v_b_3301_, v___y_3302_, v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec_ref(v_as_3298_);
return v_res_3306_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(lean_object* v_s_3307_, lean_object* v_a_3308_, uint8_t v_b_3309_){
_start:
{
lean_object* v_str_3310_; lean_object* v_startInclusive_3311_; lean_object* v_endExclusive_3312_; lean_object* v___x_3313_; uint8_t v_decide_3314_; 
v_str_3310_ = lean_ctor_get(v_s_3307_, 0);
v_startInclusive_3311_ = lean_ctor_get(v_s_3307_, 1);
v_endExclusive_3312_ = lean_ctor_get(v_s_3307_, 2);
v___x_3313_ = lean_nat_sub(v_endExclusive_3312_, v_startInclusive_3311_);
v_decide_3314_ = lean_nat_dec_eq(v_a_3308_, v___x_3313_);
lean_dec(v___x_3313_);
if (v_decide_3314_ == 0)
{
lean_object* v___x_3315_; uint32_t v___x_3316_; uint32_t v___x_3317_; uint8_t v___x_3318_; 
v___x_3315_ = lean_nat_add(v_startInclusive_3311_, v_a_3308_);
lean_dec(v_a_3308_);
v___x_3316_ = lean_string_utf8_get_fast(v_str_3310_, v___x_3315_);
v___x_3317_ = 45;
v___x_3318_ = lean_uint32_dec_eq(v___x_3316_, v___x_3317_);
if (v___x_3318_ == 0)
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3319_ = lean_string_utf8_next_fast(v_str_3310_, v___x_3315_);
lean_dec(v___x_3315_);
v___x_3320_ = lean_nat_sub(v___x_3319_, v_startInclusive_3311_);
v_a_3308_ = v___x_3320_;
v_b_3309_ = v___x_3318_;
goto _start;
}
else
{
lean_dec(v___x_3315_);
return v___x_3318_;
}
}
else
{
lean_dec(v_a_3308_);
return v_b_3309_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg___boxed(lean_object* v_s_3322_, lean_object* v_a_3323_, lean_object* v_b_3324_){
_start:
{
uint8_t v_b_boxed_3325_; uint8_t v_res_3326_; lean_object* v_r_3327_; 
v_b_boxed_3325_ = lean_unbox(v_b_3324_);
v_res_3326_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3322_, v_a_3323_, v_b_boxed_3325_);
lean_dec_ref(v_s_3322_);
v_r_3327_ = lean_box(v_res_3326_);
return v_r_3327_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(lean_object* v_s_3328_){
_start:
{
lean_object* v_searcher_3329_; uint8_t v___x_3330_; uint8_t v___x_3331_; 
v_searcher_3329_ = lean_unsigned_to_nat(0u);
v___x_3330_ = 0;
v___x_3331_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3328_, v_searcher_3329_, v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2___boxed(lean_object* v_s_3332_){
_start:
{
uint8_t v_res_3333_; lean_object* v_r_3334_; 
v_res_3333_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v_s_3332_);
lean_dec_ref(v_s_3332_);
v_r_3334_ = lean_box(v_res_3333_);
return v_r_3334_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__1(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__0));
v___x_3338_ = l_String_toRawSubstring_x27(v___x_3337_);
return v___x_3338_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__9(void){
_start:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3357_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__8));
v___x_3358_ = l_String_toRawSubstring_x27(v___x_3357_);
return v___x_3358_;
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandElement___closed__15(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__14));
v___x_3372_ = l_String_toRawSubstring_x27(v___x_3371_);
return v___x_3372_;
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
lean_object* v___y_3403_; uint8_t v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v_keyTerm_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; size_t v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; uint8_t v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; uint8_t v___y_3446_; lean_object* v___y_3494_; uint8_t v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; uint8_t v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; uint8_t v___y_3532_; lean_object* v___y_3552_; lean_object* v___y_3553_; uint8_t v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3565_; lean_object* v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; uint8_t v___y_3571_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v_fst_3628_; lean_object* v_fst_3629_; lean_object* v_fst_3630_; lean_object* v_val_3631_; lean_object* v___y_3632_; lean_object* v___y_3633_; lean_object* v_fst_3656_; lean_object* v_fst_3657_; lean_object* v_fst_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v_____x_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v___x_3676_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__1));
lean_inc(v_e_3399_);
v___x_3677_ = l_Lean_Syntax_isOfKind(v_e_3399_, v___x_3676_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3678_; uint8_t v___x_3679_; 
v___x_3678_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__1));
lean_inc(v_e_3399_);
v___x_3679_ = l_Lean_Syntax_isOfKind(v_e_3399_, v___x_3678_);
if (v___x_3679_ == 0)
{
lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3680_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3681_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3680_, v_a_3400_, v_a_3401_);
lean_dec(v_e_3399_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v_a_3683_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
v_a_3683_ = lean_ctor_get(v___x_3681_, 1);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3681_, 2);
v_____x_3663_ = v_a_3682_;
v___y_3664_ = v_a_3400_;
v___y_3665_ = v_a_3683_;
goto v___jp_3662_;
}
else
{
lean_object* v_a_3684_; lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
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
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; 
v___x_3693_ = lean_unsigned_to_nat(1u);
v___x_3694_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3693_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3694_);
v___x_3729_ = l_Lean_Syntax_isOfKind(v___x_3694_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_dec(v___x_3694_);
v___x_3730_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3731_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3730_, v_a_3400_, v_a_3401_);
lean_dec(v_e_3399_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v_a_3733_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
v_a_3733_ = lean_ctor_get(v___x_3731_, 1);
lean_inc(v_a_3733_);
lean_dec_ref_known(v___x_3731_, 2);
v_____x_3663_ = v_a_3732_;
v___y_3664_ = v_a_3400_;
v___y_3665_ = v_a_3733_;
goto v___jp_3662_;
}
else
{
lean_object* v_a_3734_; lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
v_a_3734_ = lean_ctor_get(v___x_3731_, 0);
v_a_3735_ = lean_ctor_get(v___x_3731_, 1);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3731_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_inc(v_a_3734_);
lean_dec(v___x_3731_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3734_);
lean_ctor_set(v_reuseFailAlloc_3741_, 1, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
goto v___jp_3706_;
}
}
else
{
goto v___jp_3706_;
}
v___jp_3695_:
{
lean_object* v_cs_3699_; lean_object* v_as_3700_; size_t v_sz_3701_; size_t v___x_3702_; lean_object* v___x_3703_; size_t v_sz_3704_; lean_object* v___x_3705_; 
v_cs_3699_ = l_Lean_Syntax_getArgs(v___y_3698_);
lean_dec(v___y_3698_);
v_as_3700_ = l_Lean_Syntax_getArgs(v___y_3697_);
lean_dec(v___y_3697_);
v_sz_3701_ = lean_array_size(v_as_3700_);
v___x_3702_ = ((size_t)0ULL);
v___x_3703_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3701_, v___x_3702_, v_as_3700_);
v_sz_3704_ = lean_array_size(v_cs_3699_);
v___x_3705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3704_, v___x_3702_, v_cs_3699_);
v_fst_3628_ = v___x_3694_;
v_fst_3629_ = v___x_3703_;
v_fst_3630_ = v___x_3705_;
v_val_3631_ = v___y_3696_;
v___y_3632_ = v_a_3400_;
v___y_3633_ = v_a_3401_;
goto v___jp_3627_;
}
v___jp_3706_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3707_ = lean_unsigned_to_nat(2u);
v___x_3708_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3707_);
v___x_3709_ = lean_unsigned_to_nat(4u);
v___x_3710_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3709_);
v___x_3711_ = lean_unsigned_to_nat(6u);
v___x_3712_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3711_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3713_; uint8_t v___x_3714_; 
v___x_3713_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3712_);
v___x_3714_ = l_Lean_Syntax_isOfKind(v___x_3712_, v___x_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; lean_object* v___x_3716_; 
lean_dec(v___x_3712_);
lean_dec(v___x_3710_);
lean_dec(v___x_3708_);
lean_dec(v___x_3694_);
v___x_3715_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3716_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3715_, v_a_3400_, v_a_3401_);
lean_dec(v_e_3399_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v_a_3718_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
lean_inc(v_a_3717_);
v_a_3718_ = lean_ctor_get(v___x_3716_, 1);
lean_inc(v_a_3718_);
lean_dec_ref_known(v___x_3716_, 2);
v_____x_3663_ = v_a_3717_;
v___y_3664_ = v_a_3400_;
v___y_3665_ = v_a_3718_;
goto v___jp_3662_;
}
else
{
lean_object* v_a_3719_; lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3727_; 
v_a_3719_ = lean_ctor_get(v___x_3716_, 0);
v_a_3720_ = lean_ctor_get(v___x_3716_, 1);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3722_ = v___x_3716_;
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_inc(v_a_3719_);
lean_dec(v___x_3716_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3719_);
lean_ctor_set(v_reuseFailAlloc_3726_, 1, v_a_3720_);
v___x_3725_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
return v___x_3725_;
}
}
}
}
else
{
lean_dec(v_e_3399_);
v___y_3696_ = v___x_3712_;
v___y_3697_ = v___x_3708_;
v___y_3698_ = v___x_3710_;
goto v___jp_3695_;
}
}
else
{
lean_dec(v_e_3399_);
v___y_3696_ = v___x_3712_;
v___y_3697_ = v___x_3708_;
v___y_3698_ = v___x_3710_;
goto v___jp_3695_;
}
}
}
}
else
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; uint8_t v___x_3746_; 
v___x_3743_ = lean_unsigned_to_nat(1u);
v___x_3744_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3743_);
v___x_3745_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxName___closed__1));
lean_inc(v___x_3744_);
v___x_3746_ = l_Lean_Syntax_isOfKind(v___x_3744_, v___x_3745_);
if (v___x_3746_ == 0)
{
lean_object* v___x_3747_; lean_object* v___x_3748_; 
lean_dec(v___x_3744_);
v___x_3747_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__30));
v___x_3748_ = l_Lean_Macro_throwErrorAt___redArg(v_e_3399_, v___x_3747_, v_a_3400_, v_a_3401_);
lean_dec(v_e_3399_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_a_3749_; lean_object* v_a_3750_; 
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
lean_inc(v_a_3749_);
v_a_3750_ = lean_ctor_get(v___x_3748_, 1);
lean_inc(v_a_3750_);
lean_dec_ref_known(v___x_3748_, 2);
v_____x_3663_ = v_a_3749_;
v___y_3664_ = v_a_3400_;
v___y_3665_ = v_a_3750_;
goto v___jp_3662_;
}
else
{
lean_object* v_a_3751_; lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
v_a_3751_ = lean_ctor_get(v___x_3748_, 0);
v_a_3752_ = lean_ctor_get(v___x_3748_, 1);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3748_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_inc(v_a_3751_);
lean_dec(v___x_3748_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3751_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
else
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v_as_3762_; size_t v_sz_3763_; size_t v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3760_ = lean_unsigned_to_nat(2u);
v___x_3761_ = l_Lean_Syntax_getArg(v_e_3399_, v___x_3760_);
lean_dec(v_e_3399_);
v_as_3762_ = l_Lean_Syntax_getArgs(v___x_3761_);
lean_dec(v___x_3761_);
v_sz_3763_ = lean_array_size(v_as_3762_);
v___x_3764_ = ((size_t)0ULL);
v___x_3765_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PrettyPrinter_Delaborator_delabStructureInstance_spec__3(v_sz_3763_, v___x_3764_, v_as_3762_);
v___x_3766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v_fst_3656_ = v___x_3744_;
v_fst_3657_ = v___x_3765_;
v_fst_3658_ = v___x_3766_;
v___y_3659_ = v_a_3400_;
v___y_3660_ = v_a_3401_;
goto v___jp_3655_;
}
}
v___jp_3402_:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Lasm_UI_Syntax_nsTerm(v___y_3404_, v___y_3408_, v___y_3409_);
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
v___x_3429_ = l_Lean_Syntax_mkStrLit(v___y_3405_, v___x_3428_);
v___x_3430_ = l_Lean_Syntax_node5(v___x_3420_, v___x_3427_, v_a_3411_, v___x_3429_, v_keyTerm_3407_, v___y_3403_, v___y_3406_);
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
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3403_);
return v___x_3410_;
}
}
v___jp_3436_:
{
size_t v_sz_3447_; lean_object* v___x_3448_; 
v_sz_3447_ = lean_array_size(v___y_3444_);
lean_inc_ref(v___y_3438_);
v___x_3448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_3446_, v___y_3444_, v_sz_3447_, v___y_3437_, v___y_3438_, v___y_3445_, v___y_3439_);
lean_dec_ref(v___y_3444_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v_a_3450_; lean_object* v___x_3451_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
v_a_3450_ = lean_ctor_get(v___x_3448_, 1);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3448_, 2);
v___x_3451_ = l_Lasm_UI_Syntax_concatLists(v___y_3440_, v___y_3445_, v_a_3450_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v_a_3453_; lean_object* v___x_3454_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
v_a_3453_ = lean_ctor_get(v___x_3451_, 1);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3451_, 2);
v___x_3454_ = l_Lasm_UI_Syntax_concatLists(v_a_3449_, v___y_3445_, v_a_3453_);
if (lean_obj_tag(v___x_3454_) == 0)
{
if (lean_obj_tag(v___y_3441_) == 0)
{
lean_object* v_a_3455_; lean_object* v_a_3456_; lean_object* v_quotContext_3457_; lean_object* v_currMacroScope_3458_; lean_object* v_ref_3459_; uint8_t v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
v_a_3456_ = lean_ctor_get(v___x_3454_, 1);
lean_inc(v_a_3456_);
lean_dec_ref_known(v___x_3454_, 2);
v_quotContext_3457_ = lean_ctor_get(v___y_3445_, 1);
v_currMacroScope_3458_ = lean_ctor_get(v___y_3445_, 2);
v_ref_3459_ = lean_ctor_get(v___y_3445_, 5);
v___x_3460_ = 0;
v___x_3461_ = l_Lean_SourceInfo_fromRef(v_ref_3459_, v___x_3460_);
v___x_3462_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__9, &l_Lasm_UI_Syntax_expandElement___closed__9_once, _init_l_Lasm_UI_Syntax_expandElement___closed__9);
v___x_3463_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__10));
lean_inc(v_currMacroScope_3458_);
lean_inc(v_quotContext_3457_);
v___x_3464_ = l_Lean_addMacroScope(v_quotContext_3457_, v___x_3463_, v_currMacroScope_3458_);
v___x_3465_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__13));
v___x_3466_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3461_);
lean_ctor_set(v___x_3466_, 1, v___x_3462_);
lean_ctor_set(v___x_3466_, 2, v___x_3464_);
lean_ctor_set(v___x_3466_, 3, v___x_3465_);
v___y_3403_ = v_a_3452_;
v___y_3404_ = v___y_3442_;
v___y_3405_ = v___y_3443_;
v___y_3406_ = v_a_3455_;
v_keyTerm_3407_ = v___x_3466_;
v___y_3408_ = v___y_3445_;
v___y_3409_ = v_a_3456_;
goto v___jp_3402_;
}
else
{
lean_object* v_a_3467_; lean_object* v_a_3468_; lean_object* v_val_3469_; lean_object* v_quotContext_3470_; lean_object* v_currMacroScope_3471_; lean_object* v_ref_3472_; uint8_t v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_a_3467_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3467_);
v_a_3468_ = lean_ctor_get(v___x_3454_, 1);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3454_, 2);
v_val_3469_ = lean_ctor_get(v___y_3441_, 0);
lean_inc(v_val_3469_);
lean_dec_ref_known(v___y_3441_, 1);
v_quotContext_3470_ = lean_ctor_get(v___y_3445_, 1);
v_currMacroScope_3471_ = lean_ctor_get(v___y_3445_, 2);
v_ref_3472_ = lean_ctor_get(v___y_3445_, 5);
v___x_3473_ = 0;
v___x_3474_ = l_Lean_SourceInfo_fromRef(v_ref_3472_, v___x_3473_);
v___x_3475_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3476_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__15, &l_Lasm_UI_Syntax_expandElement___closed__15_once, _init_l_Lasm_UI_Syntax_expandElement___closed__15);
v___x_3477_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__16));
lean_inc(v_currMacroScope_3471_);
lean_inc(v_quotContext_3470_);
v___x_3478_ = l_Lean_addMacroScope(v_quotContext_3470_, v___x_3477_, v_currMacroScope_3471_);
v___x_3479_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__19));
lean_inc_n(v___x_3474_, 2);
v___x_3480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3474_);
lean_ctor_set(v___x_3480_, 1, v___x_3476_);
lean_ctor_set(v___x_3480_, 2, v___x_3478_);
lean_ctor_set(v___x_3480_, 3, v___x_3479_);
v___x_3481_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3482_ = l_Lean_Syntax_node1(v___x_3474_, v___x_3481_, v_val_3469_);
v___x_3483_ = l_Lean_Syntax_node2(v___x_3474_, v___x_3475_, v___x_3480_, v___x_3482_);
v___y_3403_ = v_a_3452_;
v___y_3404_ = v___y_3442_;
v___y_3405_ = v___y_3443_;
v___y_3406_ = v_a_3467_;
v_keyTerm_3407_ = v___x_3483_;
v___y_3408_ = v___y_3445_;
v___y_3409_ = v_a_3468_;
goto v___jp_3402_;
}
}
else
{
lean_dec(v_a_3452_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3441_);
return v___x_3454_;
}
}
else
{
lean_dec(v_a_3449_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3441_);
return v___x_3451_;
}
}
else
{
lean_object* v_a_3484_; lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3441_);
lean_dec(v___y_3440_);
v_a_3484_ = lean_ctor_get(v___x_3448_, 0);
v_a_3485_ = lean_ctor_get(v___x_3448_, 1);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3448_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_inc(v_a_3484_);
lean_dec(v___x_3448_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3484_);
lean_ctor_set(v_reuseFailAlloc_3491_, 1, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
v___jp_3493_:
{
lean_object* v_attrTerms_3500_; lean_object* v___x_3501_; size_t v_sz_3502_; size_t v___x_3503_; lean_object* v___x_3504_; 
v_attrTerms_3500_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_concatLists_spec__1___closed__0));
v___x_3501_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__20));
v_sz_3502_ = lean_array_size(v___y_3494_);
v___x_3503_ = ((size_t)0ULL);
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__0(v___y_3494_, v_sz_3502_, v___x_3503_, v___x_3501_, v___y_3498_, v___y_3499_);
lean_dec_ref(v___y_3494_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v_a_3506_; lean_object* v_fst_3507_; lean_object* v_snd_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
v_a_3506_ = lean_ctor_get(v___x_3504_, 1);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3504_, 2);
v_fst_3507_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_fst_3507_);
v_snd_3508_ = lean_ctor_get(v_a_3505_, 1);
lean_inc(v_snd_3508_);
lean_dec(v_a_3505_);
v___x_3509_ = l_Lasm_UI_Ns_ctorIdx(v___y_3495_);
v___x_3510_ = lean_obj_once(&l_Lasm_UI_Syntax_expandElement___closed__21, &l_Lasm_UI_Syntax_expandElement___closed__21_once, _init_l_Lasm_UI_Syntax_expandElement___closed__21);
v___x_3511_ = lean_nat_dec_eq(v___x_3509_, v___x_3510_);
lean_dec(v___x_3509_);
if (v___x_3511_ == 0)
{
v___y_3437_ = v___x_3503_;
v___y_3438_ = v_attrTerms_3500_;
v___y_3439_ = v_a_3506_;
v___y_3440_ = v_fst_3507_;
v___y_3441_ = v_snd_3508_;
v___y_3442_ = v___y_3495_;
v___y_3443_ = v___y_3497_;
v___y_3444_ = v___y_3496_;
v___y_3445_ = v___y_3498_;
v___y_3446_ = v___y_3495_;
goto v___jp_3436_;
}
else
{
lean_object* v___x_3512_; uint8_t v___x_3513_; 
v___x_3512_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__22));
v___x_3513_ = lean_string_dec_eq(v___y_3497_, v___x_3512_);
if (v___x_3513_ == 0)
{
v___y_3437_ = v___x_3503_;
v___y_3438_ = v_attrTerms_3500_;
v___y_3439_ = v_a_3506_;
v___y_3440_ = v_fst_3507_;
v___y_3441_ = v_snd_3508_;
v___y_3442_ = v___y_3495_;
v___y_3443_ = v___y_3497_;
v___y_3444_ = v___y_3496_;
v___y_3445_ = v___y_3498_;
v___y_3446_ = v___y_3495_;
goto v___jp_3436_;
}
else
{
uint8_t v___x_3514_; 
v___x_3514_ = 0;
v___y_3437_ = v___x_3503_;
v___y_3438_ = v_attrTerms_3500_;
v___y_3439_ = v_a_3506_;
v___y_3440_ = v_fst_3507_;
v___y_3441_ = v_snd_3508_;
v___y_3442_ = v___y_3495_;
v___y_3443_ = v___y_3497_;
v___y_3444_ = v___y_3496_;
v___y_3445_ = v___y_3498_;
v___y_3446_ = v___x_3514_;
goto v___jp_3436_;
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec_ref(v___y_3497_);
lean_dec_ref(v___y_3496_);
v_a_3515_ = lean_ctor_get(v___x_3504_, 0);
v_a_3516_ = lean_ctor_get(v___x_3504_, 1);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3504_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_inc(v_a_3515_);
lean_dec(v___x_3504_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3515_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
v___jp_3524_:
{
if (v___y_3532_ == 0)
{
lean_dec(v___y_3525_);
v___y_3494_ = v___y_3528_;
v___y_3495_ = v___y_3529_;
v___y_3496_ = v___y_3531_;
v___y_3497_ = v___y_3530_;
v___y_3498_ = v___y_3526_;
v___y_3499_ = v___y_3527_;
goto v___jp_3493_;
}
else
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3533_ = ((lean_object*)(l_Lasm_UI_Syntax_selfClosing___closed__2));
v___x_3534_ = lean_string_append(v___x_3533_, v___y_3530_);
v___x_3535_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__23));
v___x_3536_ = lean_string_append(v___x_3534_, v___x_3535_);
v___x_3537_ = lean_string_append(v___x_3536_, v___y_3530_);
v___x_3538_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__24));
v___x_3539_ = lean_string_append(v___x_3537_, v___x_3538_);
v___x_3540_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3525_, v___x_3539_, v___y_3526_, v___y_3527_);
lean_dec(v___y_3525_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; 
v_a_3541_ = lean_ctor_get(v___x_3540_, 1);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3540_, 2);
v___y_3494_ = v___y_3528_;
v___y_3495_ = v___y_3529_;
v___y_3496_ = v___y_3531_;
v___y_3497_ = v___y_3530_;
v___y_3498_ = v___y_3526_;
v___y_3499_ = v_a_3541_;
goto v___jp_3493_;
}
else
{
lean_object* v_a_3542_; lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v___y_3531_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
v_a_3542_ = lean_ctor_get(v___x_3540_, 0);
v_a_3543_ = lean_ctor_get(v___x_3540_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3540_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_inc(v_a_3542_);
lean_dec(v___x_3540_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3542_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
v___jp_3551_:
{
lean_object* v___x_3559_; uint8_t v___x_3560_; 
v___x_3559_ = l_Lasm_UI_voidTags;
v___x_3560_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3556_, v___x_3559_);
if (v___x_3560_ == 0)
{
v___y_3525_ = v___y_3552_;
v___y_3526_ = v___y_3557_;
v___y_3527_ = v___y_3558_;
v___y_3528_ = v___y_3553_;
v___y_3529_ = v___y_3554_;
v___y_3530_ = v___y_3556_;
v___y_3531_ = v___y_3555_;
v___y_3532_ = v___x_3560_;
goto v___jp_3524_;
}
else
{
lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v___x_3561_ = lean_array_get_size(v___y_3555_);
v___x_3562_ = lean_unsigned_to_nat(0u);
v___x_3563_ = lean_nat_dec_eq(v___x_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
v___y_3525_ = v___y_3552_;
v___y_3526_ = v___y_3557_;
v___y_3527_ = v___y_3558_;
v___y_3528_ = v___y_3553_;
v___y_3529_ = v___y_3554_;
v___y_3530_ = v___y_3556_;
v___y_3531_ = v___y_3555_;
v___y_3532_ = v___x_3560_;
goto v___jp_3524_;
}
else
{
lean_dec(v___y_3552_);
v___y_3494_ = v___y_3553_;
v___y_3495_ = v___y_3554_;
v___y_3496_ = v___y_3555_;
v___y_3497_ = v___y_3556_;
v___y_3498_ = v___y_3557_;
v___y_3499_ = v___y_3558_;
goto v___jp_3493_;
}
}
}
v___jp_3564_:
{
lean_object* v___x_3572_; uint8_t v___x_3573_; 
v___x_3572_ = l_Lasm_UI_Svg_tags;
v___x_3573_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3569_, v___x_3572_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; uint8_t v___x_3577_; 
v___x_3574_ = lean_unsigned_to_nat(0u);
v___x_3575_ = lean_string_utf8_byte_size(v___y_3569_);
lean_inc_ref(v___y_3569_);
v___x_3576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3576_, 0, v___y_3569_);
lean_ctor_set(v___x_3576_, 1, v___x_3574_);
lean_ctor_set(v___x_3576_, 2, v___x_3575_);
v___x_3577_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3576_);
lean_dec_ref_known(v___x_3576_, 3);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3578_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__25));
v___x_3579_ = lean_string_append(v___x_3578_, v___y_3569_);
v___x_3580_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3581_ = lean_string_append(v___x_3579_, v___x_3580_);
v___x_3582_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3565_, v___x_3581_, v___y_3566_, v___y_3567_);
lean_dec(v___y_3565_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_object* v_a_3583_; 
v_a_3583_ = lean_ctor_get(v___x_3582_, 1);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3582_, 2);
v___y_3494_ = v___y_3568_;
v___y_3495_ = v___y_3571_;
v___y_3496_ = v___y_3570_;
v___y_3497_ = v___y_3569_;
v___y_3498_ = v___y_3566_;
v___y_3499_ = v_a_3583_;
goto v___jp_3493_;
}
else
{
lean_object* v_a_3584_; lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___y_3569_);
lean_dec_ref(v___y_3568_);
v_a_3584_ = lean_ctor_get(v___x_3582_, 0);
v_a_3585_ = lean_ctor_get(v___x_3582_, 1);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3582_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_inc(v_a_3584_);
lean_dec(v___x_3582_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3584_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
else
{
lean_dec(v___y_3565_);
v___y_3494_ = v___y_3568_;
v___y_3495_ = v___y_3571_;
v___y_3496_ = v___y_3570_;
v___y_3497_ = v___y_3569_;
v___y_3498_ = v___y_3566_;
v___y_3499_ = v___y_3567_;
goto v___jp_3493_;
}
}
else
{
lean_dec(v___y_3565_);
v___y_3494_ = v___y_3568_;
v___y_3495_ = v___y_3571_;
v___y_3496_ = v___y_3570_;
v___y_3497_ = v___y_3569_;
v___y_3498_ = v___y_3566_;
v___y_3499_ = v___y_3567_;
goto v___jp_3493_;
}
}
v___jp_3593_:
{
lean_object* v___x_3600_; uint8_t v___x_3601_; 
v___x_3600_ = ((lean_object*)(l_Lasm_UI_Syntax_nsTerm___closed__11));
v___x_3601_ = lean_string_dec_eq(v___y_3597_, v___x_3600_);
if (v___x_3601_ == 0)
{
lean_object* v___x_3602_; uint8_t v___x_3603_; 
v___x_3602_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__26));
v___x_3603_ = lean_string_dec_eq(v___y_3597_, v___x_3602_);
if (v___x_3603_ == 0)
{
switch(v_ns_3398_)
{
case 0:
{
lean_object* v___x_3604_; uint8_t v___x_3605_; 
v___x_3604_ = l_Lasm_UI_htmlTags;
v___x_3605_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___y_3597_, v___x_3604_);
if (v___x_3605_ == 0)
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; uint8_t v___x_3609_; 
v___x_3606_ = lean_unsigned_to_nat(0u);
v___x_3607_ = lean_string_utf8_byte_size(v___y_3597_);
lean_inc_ref(v___y_3597_);
v___x_3608_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3608_, 0, v___y_3597_);
lean_ctor_set(v___x_3608_, 1, v___x_3606_);
lean_ctor_set(v___x_3608_, 2, v___x_3607_);
v___x_3609_ = l_String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2(v___x_3608_);
lean_dec_ref_known(v___x_3608_, 3);
if (v___x_3609_ == 0)
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3610_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__27));
v___x_3611_ = lean_string_append(v___x_3610_, v___y_3597_);
v___x_3612_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__28));
v___x_3613_ = lean_string_append(v___x_3611_, v___x_3612_);
v___x_3614_ = l_Lean_Macro_throwErrorAt___redArg(v___y_3594_, v___x_3613_, v___y_3598_, v___y_3599_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 1);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3614_, 2);
v___y_3552_ = v___y_3594_;
v___y_3553_ = v___y_3595_;
v___y_3554_ = v_ns_3398_;
v___y_3555_ = v___y_3596_;
v___y_3556_ = v___y_3597_;
v___y_3557_ = v___y_3598_;
v___y_3558_ = v_a_3615_;
goto v___jp_3551_;
}
else
{
lean_object* v_a_3616_; lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
lean_dec_ref(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec_ref(v___y_3595_);
lean_dec(v___y_3594_);
v_a_3616_ = lean_ctor_get(v___x_3614_, 0);
v_a_3617_ = lean_ctor_get(v___x_3614_, 1);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3614_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_inc(v_a_3616_);
lean_dec(v___x_3614_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3616_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
}
else
{
v___y_3552_ = v___y_3594_;
v___y_3553_ = v___y_3595_;
v___y_3554_ = v_ns_3398_;
v___y_3555_ = v___y_3596_;
v___y_3556_ = v___y_3597_;
v___y_3557_ = v___y_3598_;
v___y_3558_ = v___y_3599_;
goto v___jp_3551_;
}
}
else
{
v___y_3552_ = v___y_3594_;
v___y_3553_ = v___y_3595_;
v___y_3554_ = v_ns_3398_;
v___y_3555_ = v___y_3596_;
v___y_3556_ = v___y_3597_;
v___y_3557_ = v___y_3598_;
v___y_3558_ = v___y_3599_;
goto v___jp_3551_;
}
}
case 1:
{
v___y_3565_ = v___y_3594_;
v___y_3566_ = v___y_3598_;
v___y_3567_ = v___y_3599_;
v___y_3568_ = v___y_3595_;
v___y_3569_ = v___y_3597_;
v___y_3570_ = v___y_3596_;
v___y_3571_ = v_ns_3398_;
goto v___jp_3564_;
}
default: 
{
lean_dec(v___y_3594_);
v___y_3494_ = v___y_3595_;
v___y_3495_ = v_ns_3398_;
v___y_3496_ = v___y_3596_;
v___y_3497_ = v___y_3597_;
v___y_3498_ = v___y_3598_;
v___y_3499_ = v___y_3599_;
goto v___jp_3493_;
}
}
}
else
{
uint8_t v___x_3625_; 
lean_dec(v___y_3594_);
v___x_3625_ = 2;
v___y_3494_ = v___y_3595_;
v___y_3495_ = v___x_3625_;
v___y_3496_ = v___y_3596_;
v___y_3497_ = v___y_3597_;
v___y_3498_ = v___y_3598_;
v___y_3499_ = v___y_3599_;
goto v___jp_3493_;
}
}
else
{
uint8_t v___x_3626_; 
v___x_3626_ = 1;
v___y_3565_ = v___y_3594_;
v___y_3566_ = v___y_3598_;
v___y_3567_ = v___y_3599_;
v___y_3568_ = v___y_3595_;
v___y_3569_ = v___y_3597_;
v___y_3570_ = v___y_3596_;
v___y_3571_ = v___x_3626_;
goto v___jp_3564_;
}
}
v___jp_3627_:
{
lean_object* v_tag_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; 
v_tag_3634_ = l_Lasm_UI_Syntax_nameOf(v_fst_3628_);
v___x_3635_ = l_Lasm_UI_Syntax_nameOf(v_val_3631_);
v___x_3636_ = lean_string_dec_eq(v___x_3635_, v_tag_3634_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3637_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__7));
v___x_3638_ = lean_string_append(v___x_3637_, v___x_3635_);
lean_dec_ref(v___x_3635_);
v___x_3639_ = ((lean_object*)(l_Lasm_UI_Syntax_expandElement___closed__29));
v___x_3640_ = lean_string_append(v___x_3638_, v___x_3639_);
v___x_3641_ = lean_string_append(v___x_3640_, v_tag_3634_);
v___x_3642_ = ((lean_object*)(l_Lasm_UI_Syntax_withChildren___closed__2));
v___x_3643_ = lean_string_append(v___x_3641_, v___x_3642_);
v___x_3644_ = l_Lean_Macro_throwErrorAt___redArg(v_val_3631_, v___x_3643_, v___y_3632_, v___y_3633_);
lean_dec(v_val_3631_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 1);
lean_inc(v_a_3645_);
lean_dec_ref_known(v___x_3644_, 2);
v___y_3594_ = v_fst_3628_;
v___y_3595_ = v_fst_3629_;
v___y_3596_ = v_fst_3630_;
v___y_3597_ = v_tag_3634_;
v___y_3598_ = v___y_3632_;
v___y_3599_ = v_a_3645_;
goto v___jp_3593_;
}
else
{
lean_object* v_a_3646_; lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
lean_dec_ref(v_tag_3634_);
lean_dec_ref(v_fst_3630_);
lean_dec_ref(v_fst_3629_);
lean_dec(v_fst_3628_);
v_a_3646_ = lean_ctor_get(v___x_3644_, 0);
v_a_3647_ = lean_ctor_get(v___x_3644_, 1);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3644_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_inc(v_a_3646_);
lean_dec(v___x_3644_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3646_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
else
{
lean_dec_ref(v___x_3635_);
lean_dec(v_val_3631_);
v___y_3594_ = v_fst_3628_;
v___y_3595_ = v_fst_3629_;
v___y_3596_ = v_fst_3630_;
v___y_3597_ = v_tag_3634_;
v___y_3598_ = v___y_3632_;
v___y_3599_ = v___y_3633_;
goto v___jp_3593_;
}
}
v___jp_3655_:
{
lean_object* v_tag_3661_; 
v_tag_3661_ = l_Lasm_UI_Syntax_nameOf(v_fst_3656_);
v___y_3594_ = v_fst_3656_;
v___y_3595_ = v_fst_3657_;
v___y_3596_ = v_fst_3658_;
v___y_3597_ = v_tag_3661_;
v___y_3598_ = v___y_3659_;
v___y_3599_ = v___y_3660_;
goto v___jp_3593_;
}
v___jp_3662_:
{
lean_object* v_snd_3666_; lean_object* v_snd_3667_; lean_object* v_snd_3668_; 
v_snd_3666_ = lean_ctor_get(v_____x_3663_, 1);
lean_inc(v_snd_3666_);
v_snd_3667_ = lean_ctor_get(v_snd_3666_, 1);
lean_inc(v_snd_3667_);
v_snd_3668_ = lean_ctor_get(v_snd_3667_, 1);
if (lean_obj_tag(v_snd_3668_) == 1)
{
lean_object* v_fst_3669_; lean_object* v_fst_3670_; lean_object* v_fst_3671_; lean_object* v_val_3672_; 
lean_inc_ref(v_snd_3668_);
v_fst_3669_ = lean_ctor_get(v_____x_3663_, 0);
lean_inc(v_fst_3669_);
lean_dec_ref(v_____x_3663_);
v_fst_3670_ = lean_ctor_get(v_snd_3666_, 0);
lean_inc(v_fst_3670_);
lean_dec(v_snd_3666_);
v_fst_3671_ = lean_ctor_get(v_snd_3667_, 0);
lean_inc(v_fst_3671_);
lean_dec(v_snd_3667_);
v_val_3672_ = lean_ctor_get(v_snd_3668_, 0);
lean_inc(v_val_3672_);
lean_dec_ref_known(v_snd_3668_, 1);
v_fst_3628_ = v_fst_3669_;
v_fst_3629_ = v_fst_3670_;
v_fst_3630_ = v_fst_3671_;
v_val_3631_ = v_val_3672_;
v___y_3632_ = v___y_3664_;
v___y_3633_ = v___y_3665_;
goto v___jp_3627_;
}
else
{
lean_object* v_fst_3673_; lean_object* v_fst_3674_; lean_object* v_fst_3675_; 
v_fst_3673_ = lean_ctor_get(v_____x_3663_, 0);
lean_inc(v_fst_3673_);
lean_dec_ref(v_____x_3663_);
v_fst_3674_ = lean_ctor_get(v_snd_3666_, 0);
lean_inc(v_fst_3674_);
lean_dec(v_snd_3666_);
v_fst_3675_ = lean_ctor_get(v_snd_3667_, 0);
lean_inc(v_fst_3675_);
lean_dec(v_snd_3667_);
v_fst_3656_ = v_fst_3673_;
v_fst_3657_ = v_fst_3674_;
v_fst_3658_ = v_fst_3675_;
v___y_3659_ = v___y_3664_;
v___y_3660_ = v___y_3665_;
goto v___jp_3655_;
}
}
}
}
static lean_object* _init_l_Lasm_UI_Syntax_expandChild___closed__3(void){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3769_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__2));
v___x_3770_ = l_String_toRawSubstring_x27(v___x_3769_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild(uint8_t v_ns_3782_, lean_object* v_c_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_){
_start:
{
lean_object* v___x_3789_; uint8_t v___x_3790_; 
v___x_3789_ = ((lean_object*)(l_Lasm_UI_Syntax_childText___closed__1));
lean_inc(v_c_3783_);
v___x_3790_ = l_Lean_Syntax_isOfKind(v_c_3783_, v___x_3789_);
if (v___x_3790_ == 0)
{
lean_object* v___x_3791_; uint8_t v___x_3792_; 
v___x_3791_ = ((lean_object*)(l_Lasm_UI_Syntax_childTerm___closed__1));
lean_inc(v_c_3783_);
v___x_3792_ = l_Lean_Syntax_isOfKind(v_c_3783_, v___x_3791_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; uint8_t v___x_3794_; 
v___x_3793_ = ((lean_object*)(l_Lasm_UI_Syntax_childElement___closed__1));
lean_inc(v_c_3783_);
v___x_3794_ = l_Lean_Syntax_isOfKind(v_c_3783_, v___x_3793_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__0));
v___x_3796_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3783_, v___x_3795_, v_a_3784_, v_a_3785_);
lean_dec(v_c_3783_);
return v___x_3796_;
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = l_Lean_Syntax_getArg(v_c_3783_, v___x_3797_);
lean_dec(v_c_3783_);
v___x_3799_ = l_Lasm_UI_Syntax_expandElement(v_ns_3782_, v___x_3798_, v_a_3784_, v_a_3785_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3819_; 
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
v_a_3801_ = lean_ctor_get(v___x_3799_, 1);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3803_ = v___x_3799_;
v_isShared_3804_ = v_isSharedCheck_3819_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_inc(v_a_3800_);
lean_dec(v___x_3799_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3819_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v_ref_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3817_; 
v_ref_3805_ = lean_ctor_get(v_a_3784_, 5);
v___x_3806_ = l_Lean_SourceInfo_fromRef(v_ref_3805_, v___x_3792_);
v___x_3807_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3808_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3806_, 3);
v___x_3809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3806_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
v___x_3810_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3811_ = l_Lean_Syntax_node1(v___x_3806_, v___x_3810_, v_a_3800_);
v___x_3812_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3806_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
v___x_3814_ = l_Lean_Syntax_node3(v___x_3806_, v___x_3807_, v___x_3809_, v___x_3811_, v___x_3813_);
v___x_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v___x_3815_);
v___x_3817_ = v___x_3803_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v___x_3815_);
lean_ctor_set(v_reuseFailAlloc_3818_, 1, v_a_3801_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
else
{
lean_object* v_a_3820_; lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
v_a_3820_ = lean_ctor_get(v___x_3799_, 0);
v_a_3821_ = lean_ctor_get(v___x_3799_, 1);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3799_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_inc(v_a_3820_);
lean_dec(v___x_3799_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3820_);
lean_ctor_set(v_reuseFailAlloc_3827_, 1, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
}
else
{
lean_object* v_ref_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v_ref_3829_ = lean_ctor_get(v_a_3784_, 5);
v___x_3830_ = lean_unsigned_to_nat(1u);
v___x_3831_ = l_Lean_Syntax_getArg(v_c_3783_, v___x_3830_);
lean_dec(v_c_3783_);
v___x_3832_ = l_Lean_SourceInfo_fromRef(v_ref_3829_, v___x_3790_);
v___x_3833_ = ((lean_object*)(l_Lasm_UI_Syntax_childrenTerm___closed__1));
v___x_3834_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__1));
lean_inc(v___x_3832_);
v___x_3835_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3832_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
v___x_3836_ = l_Lean_Syntax_node2(v___x_3832_, v___x_3833_, v___x_3835_, v___x_3831_);
v___x_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3836_);
v___x_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
lean_ctor_set(v___x_3838_, 1, v_a_3785_);
return v___x_3838_;
}
}
else
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; uint8_t v___x_3842_; 
v___x_3839_ = lean_unsigned_to_nat(0u);
v___x_3840_ = l_Lean_Syntax_getArg(v_c_3783_, v___x_3839_);
v___x_3841_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxText___closed__7));
lean_inc(v___x_3840_);
v___x_3842_ = l_Lean_Syntax_isOfKind(v___x_3840_, v___x_3841_);
if (v___x_3842_ == 0)
{
lean_object* v___x_3843_; lean_object* v___x_3844_; 
lean_dec(v___x_3840_);
v___x_3843_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__0));
v___x_3844_ = l_Lean_Macro_throwErrorAt___redArg(v_c_3783_, v___x_3843_, v_a_3784_, v_a_3785_);
lean_dec(v_c_3783_);
return v___x_3844_;
}
else
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v_s_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; 
lean_dec(v_c_3783_);
v___x_3845_ = l_Lasm_UI_Syntax_nameOf(v___x_3840_);
lean_dec(v___x_3840_);
v___x_3846_ = l_Lasm_UI_Syntax_jsxWhitespace(v___x_3845_);
lean_dec_ref(v___x_3845_);
v_s_3847_ = l_Lasm_UI_Syntax_decodeEntities(v___x_3846_);
v___x_3848_ = lean_string_utf8_byte_size(v_s_3847_);
v___x_3849_ = lean_nat_dec_eq(v___x_3848_, v___x_3839_);
if (v___x_3849_ == 0)
{
lean_object* v___x_3850_; uint8_t v___x_3851_; 
v___x_3850_ = ((lean_object*)(l_Lasm_UI_Syntax_jsxWhitespace___closed__0));
v___x_3851_ = lean_string_dec_eq(v_s_3847_, v___x_3850_);
if (v___x_3851_ == 0)
{
lean_object* v_quotContext_3852_; lean_object* v_currMacroScope_3853_; lean_object* v_ref_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v_quotContext_3852_ = lean_ctor_get(v_a_3784_, 1);
v_currMacroScope_3853_ = lean_ctor_get(v_a_3784_, 2);
v_ref_3854_ = lean_ctor_get(v_a_3784_, 5);
v___x_3855_ = l_Lean_SourceInfo_fromRef(v_ref_3854_, v___x_3851_);
v___x_3856_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__1));
v___x_3857_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__2));
lean_inc_n(v___x_3855_, 6);
v___x_3858_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3855_);
lean_ctor_set(v___x_3858_, 1, v___x_3857_);
v___x_3859_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__4));
v___x_3860_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__6));
v___x_3861_ = lean_obj_once(&l_Lasm_UI_Syntax_expandChild___closed__3, &l_Lasm_UI_Syntax_expandChild___closed__3_once, _init_l_Lasm_UI_Syntax_expandChild___closed__3);
v___x_3862_ = ((lean_object*)(l_Lasm_UI_Syntax_elabSplice___closed__18));
lean_inc(v_currMacroScope_3853_);
lean_inc(v_quotContext_3852_);
v___x_3863_ = l_Lean_addMacroScope(v_quotContext_3852_, v___x_3862_, v_currMacroScope_3853_);
v___x_3864_ = ((lean_object*)(l_Lasm_UI_Syntax_expandChild___closed__7));
v___x_3865_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3855_);
lean_ctor_set(v___x_3865_, 1, v___x_3861_);
lean_ctor_set(v___x_3865_, 2, v___x_3863_);
lean_ctor_set(v___x_3865_, 3, v___x_3864_);
v___x_3866_ = lean_box(2);
v___x_3867_ = l_Lean_Syntax_mkStrLit(v_s_3847_, v___x_3866_);
v___x_3868_ = l_Lean_Syntax_node1(v___x_3855_, v___x_3859_, v___x_3867_);
v___x_3869_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3860_, v___x_3865_, v___x_3868_);
v___x_3870_ = l_Lean_Syntax_node1(v___x_3855_, v___x_3859_, v___x_3869_);
v___x_3871_ = ((lean_object*)(l_Lasm_UI_Syntax_expandAttr___closed__16));
v___x_3872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3855_);
lean_ctor_set(v___x_3872_, 1, v___x_3871_);
v___x_3873_ = l_Lean_Syntax_node3(v___x_3855_, v___x_3856_, v___x_3858_, v___x_3870_, v___x_3872_);
v___x_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
v___x_3875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3874_);
lean_ctor_set(v___x_3875_, 1, v_a_3785_);
return v___x_3875_;
}
else
{
lean_dec_ref(v_s_3847_);
goto v___jp_3786_;
}
}
else
{
lean_dec_ref(v_s_3847_);
goto v___jp_3786_;
}
}
}
v___jp_3786_:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = lean_box(0);
v___x_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
lean_ctor_set(v___x_3788_, 1, v_a_3785_);
return v___x_3788_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(uint8_t v___y_3876_, lean_object* v_as_3877_, size_t v_sz_3878_, size_t v_i_3879_, lean_object* v_b_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
uint8_t v___x_3883_; 
v___x_3883_ = lean_usize_dec_lt(v_i_3879_, v_sz_3878_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; 
v___x_3884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3884_, 0, v_b_3880_);
lean_ctor_set(v___x_3884_, 1, v___y_3882_);
return v___x_3884_;
}
else
{
lean_object* v_a_3885_; lean_object* v___x_3886_; 
v_a_3885_ = lean_array_uget_borrowed(v_as_3877_, v_i_3879_);
lean_inc(v_a_3885_);
v___x_3886_ = l_Lasm_UI_Syntax_expandChild(v___y_3876_, v_a_3885_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v_a_3888_; lean_object* v_a_3890_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_a_3887_);
v_a_3888_ = lean_ctor_get(v___x_3886_, 1);
lean_inc(v_a_3888_);
lean_dec_ref_known(v___x_3886_, 2);
if (lean_obj_tag(v_a_3887_) == 1)
{
lean_object* v_val_3894_; lean_object* v___x_3895_; 
v_val_3894_ = lean_ctor_get(v_a_3887_, 0);
lean_inc(v_val_3894_);
lean_dec_ref_known(v_a_3887_, 1);
v___x_3895_ = lean_array_push(v_b_3880_, v_val_3894_);
v_a_3890_ = v___x_3895_;
goto v___jp_3889_;
}
else
{
lean_dec(v_a_3887_);
v_a_3890_ = v_b_3880_;
goto v___jp_3889_;
}
v___jp_3889_:
{
size_t v___x_3891_; size_t v___x_3892_; 
v___x_3891_ = ((size_t)1ULL);
v___x_3892_ = lean_usize_add(v_i_3879_, v___x_3891_);
v_i_3879_ = v___x_3892_;
v_b_3880_ = v_a_3890_;
v___y_3882_ = v_a_3888_;
goto _start;
}
}
else
{
lean_object* v_a_3896_; lean_object* v_a_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3904_; 
lean_dec_ref(v_b_3880_);
v_a_3896_ = lean_ctor_get(v___x_3886_, 0);
v_a_3897_ = lean_ctor_get(v___x_3886_, 1);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3899_ = v___x_3886_;
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_a_3897_);
lean_inc(v_a_3896_);
lean_dec(v___x_3886_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3904_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3902_; 
if (v_isShared_3900_ == 0)
{
v___x_3902_ = v___x_3899_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3896_);
lean_ctor_set(v_reuseFailAlloc_3903_, 1, v_a_3897_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1___boxed(lean_object* v___y_3905_, lean_object* v_as_3906_, lean_object* v_sz_3907_, lean_object* v_i_3908_, lean_object* v_b_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
uint8_t v___y_20920__boxed_3912_; size_t v_sz_boxed_3913_; size_t v_i_boxed_3914_; lean_object* v_res_3915_; 
v___y_20920__boxed_3912_ = lean_unbox(v___y_3905_);
v_sz_boxed_3913_ = lean_unbox_usize(v_sz_3907_);
lean_dec(v_sz_3907_);
v_i_boxed_3914_ = lean_unbox_usize(v_i_3908_);
lean_dec(v_i_3908_);
v_res_3915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_UI_Syntax_expandElement_spec__1(v___y_20920__boxed_3912_, v_as_3906_, v_sz_boxed_3913_, v_i_boxed_3914_, v_b_3909_, v___y_3910_, v___y_3911_);
lean_dec_ref(v___y_3910_);
lean_dec_ref(v_as_3906_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandChild___boxed(lean_object* v_ns_3916_, lean_object* v_c_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_){
_start:
{
uint8_t v_ns_boxed_3920_; lean_object* v_res_3921_; 
v_ns_boxed_3920_ = lean_unbox(v_ns_3916_);
v_res_3921_ = l_Lasm_UI_Syntax_expandChild(v_ns_boxed_3920_, v_c_3917_, v_a_3918_, v_a_3919_);
lean_dec_ref(v_a_3918_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax_expandElement___boxed(lean_object* v_ns_3922_, lean_object* v_e_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
uint8_t v_ns_boxed_3926_; lean_object* v_res_3927_; 
v_ns_boxed_3926_ = lean_unbox(v_ns_3922_);
v_res_3927_ = l_Lasm_UI_Syntax_expandElement(v_ns_boxed_3926_, v_e_3923_, v_a_3924_, v_a_3925_);
lean_dec_ref(v_a_3924_);
return v_res_3927_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(lean_object* v_s_3928_, lean_object* v_inst_3929_, lean_object* v_R_3930_, lean_object* v_a_3931_, uint8_t v_b_3932_, lean_object* v_c_3933_){
_start:
{
uint8_t v___x_3934_; 
v___x_3934_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___redArg(v_s_3928_, v_a_3931_, v_b_3932_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3___boxed(lean_object* v_s_3935_, lean_object* v_inst_3936_, lean_object* v_R_3937_, lean_object* v_a_3938_, lean_object* v_b_3939_, lean_object* v_c_3940_){
_start:
{
uint8_t v_b_boxed_3941_; uint8_t v_res_3942_; lean_object* v_r_3943_; 
v_b_boxed_3941_ = lean_unbox(v_b_3939_);
v_res_3942_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lasm_UI_Syntax_expandElement_spec__2_spec__3(v_s_3935_, v_inst_3936_, v_R_3937_, v_a_3938_, v_b_boxed_3941_, v_c_3940_);
lean_dec_ref(v_s_3935_);
v_r_3943_ = lean_box(v_res_3942_);
return v_r_3943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(lean_object* v_x_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_){
_start:
{
lean_object* v___x_3947_; uint8_t v___x_3948_; 
v___x_3947_ = ((lean_object*)(l_Lasm_UI_Syntax_htmlTerm___closed__1));
lean_inc(v_x_3944_);
v___x_3948_ = l_Lean_Syntax_isOfKind(v_x_3944_, v___x_3947_);
if (v___x_3948_ == 0)
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
lean_dec(v_x_3944_);
v___x_3949_ = lean_box(1);
v___x_3950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3949_);
lean_ctor_set(v___x_3950_, 1, v_a_3946_);
return v___x_3950_;
}
else
{
lean_object* v___x_3951_; lean_object* v___x_3952_; uint8_t v___x_3953_; lean_object* v___x_3954_; 
v___x_3951_ = lean_unsigned_to_nat(1u);
v___x_3952_ = l_Lean_Syntax_getArg(v_x_3944_, v___x_3951_);
lean_dec(v_x_3944_);
v___x_3953_ = 0;
v___x_3954_ = l_Lasm_UI_Syntax_expandElement(v___x_3953_, v___x_3952_, v_a_3945_, v_a_3946_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
v_a_3956_ = lean_ctor_get(v___x_3954_, 1);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3954_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_inc(v_a_3955_);
lean_dec(v___x_3954_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3955_);
lean_ctor_set(v_reuseFailAlloc_3962_, 1, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
v_a_3964_ = lean_ctor_get(v___x_3954_, 0);
v_a_3965_ = lean_ctor_get(v___x_3954_, 1);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3954_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_inc(v_a_3964_);
lean_dec(v___x_3954_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3964_);
lean_ctor_set(v_reuseFailAlloc_3971_, 1, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1___boxed(lean_object* v_x_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lasm_UI_Syntax___aux__Lasm__UI__Syntax______macroRules__Lasm__UI__Syntax__htmlTerm__1(v_x_3973_, v_a_3974_, v_a_3975_);
lean_dec_ref(v_a_3974_);
return v_res_3976_;
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
l_Lean_Parser_Category_jsxChild = _init_l_Lean_Parser_Category_jsxChild();
lean_mark_persistent(l_Lean_Parser_Category_jsxChild);
l_Lean_Parser_Category_jsxAttr = _init_l_Lean_Parser_Category_jsxAttr();
lean_mark_persistent(l_Lean_Parser_Category_jsxAttr);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
