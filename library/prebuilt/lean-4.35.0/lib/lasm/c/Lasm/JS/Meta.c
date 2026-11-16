// Lean compiler output
// Module: Lasm.JS.Meta
// Imports: public import Init public meta import Init public import Lean.Elab.Deriving.Basic public import Lean.Elab.Command public import Lasm.JS.Core
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkIdent(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_getMkMatcherInputInContext_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_getConstInfo___at___00Lean_Elab_elabDeriving_spec__3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 8, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_instInhabitedBindingInfo_default = (const lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_instInhabitedBindingInfo = (const lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "construct"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arity"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "relative"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "file"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25_value;
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__30_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_instReprBindingInfo = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json___lam__0(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ",\"arity\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "{\"name\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__2_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ",\"module\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ",\"path\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__4_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ",\"construct\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__6_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__7_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ",\"relative\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__8_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ",\"file\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_isProjectFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "../"};
static const lean_object* l_Lasm_JS_Meta_isProjectFile___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_isProjectFile___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Meta_isProjectFile___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_isProjectFile___closed__1;
static const lean_string_object l_Lasm_JS_Meta_isProjectFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "./"};
static const lean_object* l_Lasm_JS_Meta_isProjectFile___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_isProjectFile___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Meta_isProjectFile___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_isProjectFile___closed__3;
LEAN_EXPORT uint8_t l_Lasm_JS_Meta_isProjectFile(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_isProjectFile___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_JS_Meta_projectSpecifier_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__0_value;
static const lean_string_object l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__1 = (const lean_object*)&l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_projectSpecifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_JS_Meta_projectSpecifier___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_projectSpecifier___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_projectSpecifier(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_projectSpecifier___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lasm"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "JS"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "bindingExtension"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 49, 23, 122, 117, 65, 186, 192)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_bindingExtension;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "jsAttr"};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 30, 152, 230, 255, 91, 62, 117)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "js "};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__7_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__5_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__9_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__11_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_jsAttr = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(251, 206, 108, 50, 170, 163, 91, 135)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Bindable.arity"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__16 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__18 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__18_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__19 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__19_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__20 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "noinline"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__22 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__22_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(7, 180, 58, 213, 246, 72, 64, 0)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__24 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__24_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__25 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__25_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__26 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__26_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__28 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__28_value;
static const lean_array_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__29 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__30 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__33 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__33_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__36 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__36_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Bindable.bind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__37 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__37_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Bindable"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__39 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__39_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__40 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__40_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__41 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__41_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__42 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__42_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__43 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__43_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__45 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__45_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__46 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__46_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__47 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__47_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__48 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__48_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__49 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__49_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__50 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__50_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__51 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__51_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__52 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__52_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__54 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__54_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__55 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__55_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__57 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__57_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(13, 173, 251, 55, 140, 124, 51, 22)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__59 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__59_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(1, 117, 5, 82, 228, 105, 80, 180)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__61 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__61_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__62 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__62_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__6_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__67 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__67_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69;
static const lean_array_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__70 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__70_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__72 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__72_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__72_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__74 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__74_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__74_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__76 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__76_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__78 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__78_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__80 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__80_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__80_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__82 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__82_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__83 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__83_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__84 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__84_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__86 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__86_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__86_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "new "};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__88 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__88_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__90 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__90_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__0 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__0_value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS deriving: "};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0_value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " is not an inductive type"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2_value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = " has parameters; write the ToJS/FromJS instances by hand"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4 = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4_value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Data.string"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Data"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(132, 62, 212, 150, 36, 99, 222, 53)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(25, 204, 101, 215, 50, 3, 21, 19)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__18_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__19_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__19_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__8_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__20_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__21_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__8_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__22_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lasm.JS.toJS"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "toJS"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(171, 155, 212, 137, 65, 191, 160, 187)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ToJS"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(224, 186, 233, 79, 7, 5, 169, 187)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(64, 95, 19, 108, 2, 206, 150, 215)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__32_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__32_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lasm.JS.ToJS"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__3;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__4_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(224, 186, 233, 79, 7, 5, 169, 187)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__4_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__5_value),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__7_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__8_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Data.object"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__16_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__17;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "object"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(132, 62, 212, 150, 36, 99, 222, 53)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__18_value),LEAN_SCALAR_PTR_LITERAL(151, 222, 9, 64, 167, 79, 153, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__22_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__23_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__24_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__25_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__25_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__27 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__31 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS deriving ToJS: "};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__32 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__32_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__33;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = " must be a structure or an enumeration (constructors without fields)"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__34 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__34_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__35;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Except.ok"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Except"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(74, 14, 41, 241, 190, 206, 243, 19)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__5_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.readField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "readField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(55, 92, 114, 160, 80, 73, 219, 206)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(48, 234, 148, 175, 115, 149, 2, 231)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS deriving: no projection for "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.JS.FromJS"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__1;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "FromJS"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__3_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__2_value),LEAN_SCALAR_PTR_LITERAL(82, 20, 249, 7, 221, 125, 97, 172)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__3_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__4_value),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__6_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__7_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "whereStructInst"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__8_value),LEAN_SCALAR_PTR_LITERAL(164, 171, 248, 18, 201, 160, 43, 108)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__49_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fromJS"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__12_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__13;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__12_value),LEAN_SCALAR_PTR_LITERAL(50, 45, 246, 1, 0, 145, 229, 27)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__14_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__26_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__27;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__26_value),LEAN_SCALAR_PTR_LITERAL(15, 81, 255, 12, 18, 105, 22, 251)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__29_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__31 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__31_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Except.error"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__32 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__32_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__33;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__34 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__34_value),LEAN_SCALAR_PTR_LITERAL(132, 223, 190, 30, 132, 210, 24, 71)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__35 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__36 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__37 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__37_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__38 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__38_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__36_value),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__38_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__39 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__39_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\"not one of the constructor names\""};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__40 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__40_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS deriving FromJS: "};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__41 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__41_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__42;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Meta_mkToJS___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Meta_mkFromJS___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(12u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(10u);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(8u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_unsigned_to_nat(13u);
v___x_41_ = lean_nat_to_int(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(9u);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0));
v___x_55_ = lean_string_length(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__27);
v___x_57_ = lean_nat_to_int(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(lean_object* v_x_62_){
_start:
{
lean_object* v_declName_63_; lean_object* v_module_64_; lean_object* v_path_65_; uint8_t v_construct_66_; lean_object* v_arity_67_; lean_object* v_relative_68_; lean_object* v_file_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_declName_63_ = lean_ctor_get(v_x_62_, 0);
lean_inc(v_declName_63_);
v_module_64_ = lean_ctor_get(v_x_62_, 1);
lean_inc_ref(v_module_64_);
v_path_65_ = lean_ctor_get(v_x_62_, 2);
lean_inc_ref(v_path_65_);
v_construct_66_ = lean_ctor_get_uint8(v_x_62_, sizeof(void*)*6);
v_arity_67_ = lean_ctor_get(v_x_62_, 3);
lean_inc(v_arity_67_);
v_relative_68_ = lean_ctor_get(v_x_62_, 4);
lean_inc_ref(v_relative_68_);
v_file_69_ = lean_ctor_get(v_x_62_, 5);
lean_inc_ref(v_file_69_);
lean_dec_ref(v_x_62_);
v___x_70_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5));
v___x_71_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__6));
v___x_72_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_Name_reprPrec(v_declName_63_, v___x_73_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_72_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = 0;
v___x_77_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*1, v___x_76_);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_71_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__9));
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_box(1);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__11));
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_70_);
v___x_86_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12);
v___x_87_ = l_String_quote(v_module_64_);
v___x_88_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_86_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*1, v___x_76_);
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_85_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_79_);
v___x_93_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_81_);
v___x_94_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__14));
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_70_);
v___x_97_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15);
v___x_98_ = l_String_quote(v_path_65_);
v___x_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_76_);
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_96_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_79_);
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_81_);
v___x_105_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__17));
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_70_);
v___x_108_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18);
v___x_109_ = l_Bool_repr___redArg(v_construct_66_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_111_, sizeof(void*)*1, v___x_76_);
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_107_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_79_);
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_81_);
v___x_115_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__20));
v___x_116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_70_);
v___x_118_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21);
v___x_119_ = l_Nat_reprFast(v_arity_67_);
v___x_120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
v___x_121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_76_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_117_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_79_);
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_81_);
v___x_126_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23));
v___x_127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_70_);
v___x_129_ = l_String_quote(v_relative_68_);
v___x_130_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
v___x_131_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_72_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*1, v___x_76_);
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_128_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_79_);
v___x_135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_81_);
v___x_136_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25));
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_70_);
v___x_139_ = l_String_quote(v_file_69_);
v___x_140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
v___x_141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_97_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set_uint8(v___x_142_, sizeof(void*)*1, v___x_76_);
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_138_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__28);
v___x_145_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__29));
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_143_);
v___x_147_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__30));
v___x_148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_144_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_76_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr(lean_object* v_x_151_, lean_object* v_prec_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(v_x_151_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed(lean_object* v_x_154_, lean_object* v_prec_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lasm_JS_Meta_instReprBindingInfo_repr(v_x_154_, v_prec_155_);
lean_dec(v_prec_155_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json___lam__0(lean_object* v_s_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_160_, 0, v_s_159_);
v___x_161_ = l_Lean_Json_compress(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json(lean_object* v_b_172_){
_start:
{
lean_object* v_declName_173_; lean_object* v_module_174_; lean_object* v_path_175_; uint8_t v_construct_176_; lean_object* v_arity_177_; lean_object* v_relative_178_; lean_object* v_file_179_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_183_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; uint8_t v___x_195_; lean_object* v___y_197_; 
v_declName_173_ = lean_ctor_get(v_b_172_, 0);
lean_inc(v_declName_173_);
v_module_174_ = lean_ctor_get(v_b_172_, 1);
lean_inc_ref(v_module_174_);
v_path_175_ = lean_ctor_get(v_b_172_, 2);
lean_inc_ref(v_path_175_);
v_construct_176_ = lean_ctor_get_uint8(v_b_172_, sizeof(void*)*6);
v_arity_177_ = lean_ctor_get(v_b_172_, 3);
lean_inc(v_arity_177_);
v_relative_178_ = lean_ctor_get(v_b_172_, 4);
lean_inc_ref(v_relative_178_);
v_file_179_ = lean_ctor_get(v_b_172_, 5);
lean_inc_ref(v_file_179_);
lean_dec_ref(v_b_172_);
v___x_192_ = lean_string_utf8_byte_size(v_relative_178_);
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = lean_nat_dec_eq(v___x_192_, v___x_193_);
v___x_195_ = 1;
if (v___x_194_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_214_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__8));
v___x_215_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_relative_178_);
v___x_216_ = lean_string_append(v___x_214_, v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__9));
v___x_218_ = lean_string_append(v___x_216_, v___x_217_);
v___x_219_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_file_179_);
v___x_220_ = lean_string_append(v___x_218_, v___x_219_);
lean_dec_ref(v___x_219_);
v___y_197_ = v___x_220_;
goto v___jp_196_;
}
else
{
lean_object* v___x_221_; 
lean_dec_ref(v_file_179_);
lean_dec_ref(v_relative_178_);
v___x_221_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___y_197_ = v___x_221_;
goto v___jp_196_;
}
v___jp_180_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_184_ = lean_string_append(v___y_181_, v___y_183_);
v___x_185_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__0));
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
v___x_187_ = l_Nat_reprFast(v_arity_177_);
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
lean_dec_ref(v___x_187_);
v___x_189_ = lean_string_append(v___x_188_, v___y_182_);
lean_dec_ref(v___y_182_);
v___x_190_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_191_ = lean_string_append(v___x_189_, v___x_190_);
return v___x_191_;
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_198_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__2));
v___x_199_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_173_, v___x_195_);
v___x_200_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v___x_199_);
v___x_201_ = lean_string_append(v___x_198_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_202_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__3));
v___x_203_ = lean_string_append(v___x_201_, v___x_202_);
v___x_204_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_module_174_);
v___x_205_ = lean_string_append(v___x_203_, v___x_204_);
lean_dec_ref(v___x_204_);
v___x_206_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__4));
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
v___x_208_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_path_175_);
v___x_209_ = lean_string_append(v___x_207_, v___x_208_);
lean_dec_ref(v___x_208_);
v___x_210_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_211_ = lean_string_append(v___x_209_, v___x_210_);
if (v_construct_176_ == 0)
{
lean_object* v___x_212_; 
v___x_212_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__6));
v___y_181_ = v___x_211_;
v___y_182_ = v___y_197_;
v___y_183_ = v___x_212_;
goto v___jp_180_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__7));
v___y_181_ = v___x_211_;
v___y_182_ = v___y_197_;
v___y_183_ = v___x_213_;
goto v___jp_180_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Meta_isProjectFile___closed__1(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__0));
v___x_224_ = lean_string_utf8_byte_size(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_isProjectFile___closed__3(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__2));
v___x_227_ = lean_string_utf8_byte_size(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Meta_isProjectFile(lean_object* v_module_228_){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_236_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__2));
v___x_237_ = lean_string_utf8_byte_size(v_module_228_);
v___x_238_ = lean_obj_once(&l_Lasm_JS_Meta_isProjectFile___closed__3, &l_Lasm_JS_Meta_isProjectFile___closed__3_once, _init_l_Lasm_JS_Meta_isProjectFile___closed__3);
v___x_239_ = lean_nat_dec_le(v___x_238_, v___x_237_);
if (v___x_239_ == 0)
{
goto v___jp_229_;
}
else
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lean_string_memcmp(v_module_228_, v___x_236_, v___x_240_, v___x_240_, v___x_238_);
if (v___x_241_ == 0)
{
goto v___jp_229_;
}
else
{
return v___x_241_;
}
}
v___jp_229_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__0));
v___x_231_ = lean_string_utf8_byte_size(v_module_228_);
v___x_232_ = lean_obj_once(&l_Lasm_JS_Meta_isProjectFile___closed__1, &l_Lasm_JS_Meta_isProjectFile___closed__1_once, _init_l_Lasm_JS_Meta_isProjectFile___closed__1);
v___x_233_ = lean_nat_dec_le(v___x_232_, v___x_231_);
if (v___x_233_ == 0)
{
return v___x_233_;
}
else
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_unsigned_to_nat(0u);
v___x_235_ = lean_string_memcmp(v_module_228_, v___x_230_, v___x_234_, v___x_234_, v___x_232_);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_isProjectFile___boxed(lean_object* v_module_242_){
_start:
{
uint8_t v_res_243_; lean_object* v_r_244_; 
v_res_243_ = l_Lasm_JS_Meta_isProjectFile(v_module_242_);
lean_dec_ref(v_module_242_);
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_JS_Meta_projectSpecifier_spec__0(lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
if (lean_obj_tag(v_a_245_) == 0)
{
lean_object* v___x_247_; 
v___x_247_ = l_List_reverse___redArg(v_a_246_);
return v___x_247_;
}
else
{
lean_object* v_head_248_; lean_object* v_tail_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_259_; 
v_head_248_ = lean_ctor_get(v_a_245_, 0);
v_tail_249_ = lean_ctor_get(v_a_245_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_a_245_);
if (v_isSharedCheck_259_ == 0)
{
v___x_251_ = v_a_245_;
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_tail_249_);
lean_inc(v_head_248_);
lean_dec(v_a_245_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_259_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
uint8_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_253_ = 0;
v___x_254_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_248_, v___x_253_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v_a_246_);
lean_ctor_set(v___x_251_, 0, v___x_254_);
v___x_256_ = v___x_251_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_a_246_);
v___x_256_ = v_reuseFailAlloc_258_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
v_a_245_ = v_tail_249_;
v_a_246_ = v___x_256_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1(lean_object* v_x_262_, lean_object* v_x_263_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
return v_x_262_;
}
else
{
lean_object* v_head_264_; lean_object* v_tail_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_293_; 
v_head_264_ = lean_ctor_get(v_x_263_, 0);
v_tail_265_ = lean_ctor_get(v_x_263_, 1);
v_isSharedCheck_293_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_293_ == 0)
{
v___x_267_ = v_x_263_;
v_isShared_268_ = v_isSharedCheck_293_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_tail_265_);
lean_inc(v_head_264_);
lean_dec(v_x_263_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_293_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_269_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_270_ = lean_string_dec_eq(v_head_264_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = ((lean_object*)(l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__0));
v___x_272_ = lean_string_dec_eq(v_head_264_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = ((lean_object*)(l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1___closed__1));
v___x_274_ = lean_string_dec_eq(v_head_264_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_276_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_x_262_);
v___x_276_ = v___x_267_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_head_264_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_x_262_);
v___x_276_ = v_reuseFailAlloc_278_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_x_262_ = v___x_276_;
v_x_263_ = v_tail_265_;
goto _start;
}
}
else
{
lean_dec(v_head_264_);
if (lean_obj_tag(v_x_262_) == 0)
{
lean_object* v___x_280_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_x_262_);
lean_ctor_set(v___x_267_, 0, v___x_273_);
v___x_280_ = v___x_267_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_x_262_);
v___x_280_ = v_reuseFailAlloc_282_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
v_x_262_ = v___x_280_;
v_x_263_ = v_tail_265_;
goto _start;
}
}
else
{
lean_object* v_head_283_; lean_object* v_tail_284_; uint8_t v___x_285_; 
v_head_283_ = lean_ctor_get(v_x_262_, 0);
v_tail_284_ = lean_ctor_get(v_x_262_, 1);
v___x_285_ = lean_string_dec_eq(v_head_283_, v___x_273_);
if (v___x_285_ == 0)
{
lean_inc(v_tail_284_);
lean_dec_ref_known(v_x_262_, 2);
lean_del_object(v___x_267_);
v_x_262_ = v_tail_284_;
v_x_263_ = v_tail_265_;
goto _start;
}
else
{
lean_object* v___x_288_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_x_262_);
lean_ctor_set(v___x_267_, 0, v___x_273_);
v___x_288_ = v___x_267_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_x_262_);
v___x_288_ = v_reuseFailAlloc_290_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
v_x_262_ = v___x_288_;
v_x_263_ = v_tail_265_;
goto _start;
}
}
}
}
}
else
{
lean_del_object(v___x_267_);
lean_dec(v_head_264_);
v_x_263_ = v_tail_265_;
goto _start;
}
}
else
{
lean_del_object(v___x_267_);
lean_dec(v_head_264_);
v_x_263_ = v_tail_265_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_projectSpecifier(lean_object* v_mod_295_, lean_object* v_relative_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_dir_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_parts_306_; lean_object* v_normal_307_; lean_object* v___x_308_; lean_object* v_path_309_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_297_ = l_Lean_Name_components(v_mod_295_);
v___x_298_ = lean_array_mk(v___x_297_);
v___x_299_ = lean_array_pop(v___x_298_);
v___x_300_ = lean_array_to_list(v___x_299_);
v___x_301_ = lean_box(0);
v_dir_302_ = l_List_mapTR_loop___at___00Lasm_JS_Meta_projectSpecifier_spec__0(v___x_300_, v___x_301_);
v___x_303_ = ((lean_object*)(l_Lasm_JS_Meta_projectSpecifier___closed__0));
v___x_304_ = lean_unsigned_to_nat(0u);
v___x_305_ = l_String_splitOnAux(v_relative_296_, v___x_303_, v___x_304_, v___x_304_, v___x_304_, v___x_301_);
v_parts_306_ = l_List_appendTR___redArg(v_dir_302_, v___x_305_);
v_normal_307_ = l_List_foldl___at___00Lasm_JS_Meta_projectSpecifier_spec__1(v___x_301_, v_parts_306_);
v___x_308_ = l_List_reverse___redArg(v_normal_307_);
v_path_309_ = l_String_intercalate(v___x_303_, v___x_308_);
v___x_313_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__0));
v___x_314_ = lean_string_utf8_byte_size(v_path_309_);
v___x_315_ = lean_obj_once(&l_Lasm_JS_Meta_isProjectFile___closed__1, &l_Lasm_JS_Meta_isProjectFile___closed__1_once, _init_l_Lasm_JS_Meta_isProjectFile___closed__1);
v___x_316_ = lean_nat_dec_le(v___x_315_, v___x_314_);
if (v___x_316_ == 0)
{
goto v___jp_310_;
}
else
{
uint8_t v___x_317_; 
v___x_317_ = lean_string_memcmp(v_path_309_, v___x_313_, v___x_304_, v___x_304_, v___x_315_);
if (v___x_317_ == 0)
{
goto v___jp_310_;
}
else
{
return v_path_309_;
}
}
v___jp_310_:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lasm_JS_Meta_isProjectFile___closed__2));
v___x_312_ = lean_string_append(v___x_311_, v_path_309_);
lean_dec_ref(v_path_309_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_projectSpecifier___boxed(lean_object* v_mod_318_, lean_object* v_relative_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Meta_projectSpecifier(v_mod_318_, v_relative_319_);
lean_dec_ref(v_relative_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(v_x_325_);
lean_dec_ref(v_x_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object* v_es_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = lean_array_mk(v_es_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_350_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_();
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(lean_object* v_as_353_, size_t v_sz_354_, size_t v_i_355_, lean_object* v_b_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_a_362_; uint8_t v___x_366_; 
v___x_366_ = lean_usize_dec_lt(v_i_355_, v_sz_354_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v_b_356_);
return v___x_367_;
}
else
{
lean_object* v_a_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_368_ = lean_array_uget_borrowed(v_as_353_, v_i_355_);
v___x_369_ = l_Lean_Expr_fvarId_x21(v_a_368_);
v___x_370_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_369_, v___y_357_, v___y_358_, v___y_359_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; uint8_t v___x_372_; uint8_t v___x_373_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = lean_unbox(v_a_371_);
lean_dec(v_a_371_);
v___x_373_ = l_Lean_BinderInfo_isExplicit(v___x_372_);
if (v___x_373_ == 0)
{
v_a_362_ = v_b_356_;
goto v___jp_361_;
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_nat_add(v_b_356_, v___x_374_);
lean_dec(v_b_356_);
v_a_362_ = v___x_375_;
goto v___jp_361_;
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_b_356_);
v_a_376_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_370_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_370_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
v___jp_361_:
{
size_t v___x_363_; size_t v___x_364_; 
v___x_363_ = ((size_t)1ULL);
v___x_364_ = lean_usize_add(v_i_355_, v___x_363_);
v_i_355_ = v___x_364_;
v_b_356_ = v_a_362_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg___boxed(lean_object* v_as_384_, lean_object* v_sz_385_, lean_object* v_i_386_, lean_object* v_b_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
size_t v_sz_boxed_392_; size_t v_i_boxed_393_; lean_object* v_res_394_; 
v_sz_boxed_392_ = lean_unbox_usize(v_sz_385_);
lean_dec(v_sz_385_);
v_i_boxed_393_ = lean_unbox_usize(v_i_386_);
lean_dec(v_i_386_);
v_res_394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_384_, v_sz_boxed_392_, v_i_boxed_393_, v_b_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec_ref(v_as_384_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(lean_object* v_xs_395_, lean_object* v_x_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_n_402_; size_t v_sz_403_; size_t v___x_404_; lean_object* v___x_405_; 
v_n_402_ = lean_unsigned_to_nat(0u);
v_sz_403_ = lean_array_size(v_xs_395_);
v___x_404_ = ((size_t)0ULL);
v___x_405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_xs_395_, v_sz_403_, v___x_404_, v_n_402_, v___y_397_, v___y_399_, v___y_400_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0___boxed(lean_object* v_xs_406_, lean_object* v_x_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(v_xs_406_, v_x_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec_ref(v_x_407_);
lean_dec_ref(v_xs_406_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(lean_object* v_type_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___f_421_; uint8_t v___x_422_; lean_object* v___x_423_; 
v___f_421_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0));
v___x_422_ = 0;
v___x_423_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_getMkMatcherInputInContext_spec__6___redArg(v_type_415_, v___f_421_, v___x_422_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___boxed(lean_object* v_type_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v_type_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(lean_object* v_as_431_, size_t v_sz_432_, size_t v_i_433_, lean_object* v_b_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_431_, v_sz_432_, v_i_433_, v_b_434_, v___y_435_, v___y_437_, v___y_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___boxed(lean_object* v_as_441_, lean_object* v_sz_442_, lean_object* v_i_443_, lean_object* v_b_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
size_t v_sz_boxed_450_; size_t v_i_boxed_451_; lean_object* v_res_452_; 
v_sz_boxed_450_ = lean_unbox_usize(v_sz_442_);
lean_dec(v_sz_442_);
v_i_boxed_451_ = lean_unbox_usize(v_i_443_);
lean_dec(v_i_443_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(v_as_441_, v_sz_boxed_450_, v_i_boxed_451_, v_b_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec_ref(v_as_441_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0(lean_object* v___x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v___x_484_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object* v___x_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0(v___x_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
return v_res_501_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_512_ = l_String_toRawSubstring_x27(v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7));
v___x_517_ = l_String_toRawSubstring_x27(v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__22));
v___x_546_ = l_String_toRawSubstring_x27(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_576_ = l_String_toRawSubstring_x27(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__43));
v___x_583_ = l_String_toRawSubstring_x27(v___x_582_);
return v___x_583_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__52));
v___x_594_ = l_String_toRawSubstring_x27(v___x_593_);
return v___x_594_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10));
v___x_599_ = l_String_toRawSubstring_x27(v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13));
v___x_603_ = l_String_toRawSubstring_x27(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16));
v___x_607_ = l_String_toRawSubstring_x27(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__63));
v___x_615_ = l_Lean_mkCIdent(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__65));
v___x_620_ = l_Lean_mkCIdent(v___x_619_);
return v___x_620_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69(void){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Array_mkArray0___redArg();
return v___x_624_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__88));
v___x_675_ = lean_string_utf8_byte_size(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1(lean_object* v_x_682_, lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; uint8_t v___y_693_; lean_object* v___y_694_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___y_730_; lean_object* v___y_731_; uint8_t v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; uint8_t v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; uint8_t v___x_852_; 
v___x_726_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_727_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_728_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
lean_inc(v_x_682_);
v___x_852_ = l_Lean_Syntax_isOfKind(v_x_682_, v___x_728_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_dec(v_x_682_);
v___x_853_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; uint8_t v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; uint8_t v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; uint8_t v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; uint8_t v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v_a_1018_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; uint8_t v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; uint8_t v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; uint8_t v___x_1060_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; uint8_t v_fst_1077_; lean_object* v_snd_1078_; lean_object* v_doc_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; 
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = l_Lean_Syntax_getArg(v_x_682_, v___x_854_);
v___x_856_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17));
lean_inc(v___x_855_);
v___x_1060_ = l_Lean_Syntax_isOfKind(v___x_855_, v___x_856_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1194_; 
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1194_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1194_;
}
else
{
lean_object* v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = l_Lean_Syntax_getArg(v___x_855_, v___x_854_);
v___x_1196_ = l_Lean_Syntax_isNone(v___x_1195_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1195_);
v___x_1198_ = l_Lean_Syntax_matchesNull(v___x_1195_, v___x_1197_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; 
lean_dec(v___x_1195_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1199_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1199_;
}
else
{
lean_object* v_doc_1200_; 
v_doc_1200_ = l_Lean_Syntax_getArg(v___x_1195_, v___x_854_);
lean_dec(v___x_1195_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__91));
lean_inc(v_doc_1200_);
v___x_1204_ = l_Lean_Syntax_isOfKind(v_doc_1200_, v___x_1203_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; 
lean_dec(v_doc_1200_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1205_;
}
else
{
goto v___jp_1201_;
}
}
else
{
goto v___jp_1201_;
}
v___jp_1201_:
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_doc_1200_);
v_doc_1090_ = v___x_1202_;
v___y_1091_ = v_a_683_;
v___y_1092_ = v_a_684_;
goto v___jp_1089_;
}
}
}
else
{
lean_object* v___x_1206_; 
lean_dec(v___x_1195_);
v___x_1206_ = lean_box(0);
v_doc_1090_ = v___x_1206_;
v___y_1091_ = v_a_683_;
v___y_1092_ = v_a_684_;
goto v___jp_1089_;
}
}
v___jp_857_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
lean_inc_ref_n(v___y_870_, 2);
v___x_887_ = l_Array_append___redArg(v___y_870_, v___y_886_);
lean_dec_ref(v___y_886_);
lean_inc_n(v___y_871_, 9);
lean_inc_n(v___y_875_, 42);
v___x_888_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_888_, 0, v___y_875_);
lean_ctor_set(v___x_888_, 1, v___y_871_);
lean_ctor_set(v___x_888_, 2, v___x_887_);
v___x_889_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_890_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_890_, 0, v___y_875_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_891_, 0, v___y_875_);
lean_ctor_set(v___x_891_, 1, v___y_871_);
lean_ctor_set(v___x_891_, 2, v___y_870_);
lean_inc_ref_n(v___x_891_, 21);
lean_inc(v___y_872_);
v___x_892_ = l_Lean_Syntax_node1(v___y_875_, v___y_872_, v___x_891_);
v___x_893_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_894_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__23);
v___x_895_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__24));
lean_inc_n(v___y_858_, 7);
lean_inc_n(v___y_865_, 7);
v___x_896_ = l_Lean_addMacroScope(v___y_865_, v___x_895_, v___y_858_);
v___x_897_ = lean_box(0);
v___x_898_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_898_, 0, v___y_875_);
lean_ctor_set(v___x_898_, 1, v___x_894_);
lean_ctor_set(v___x_898_, 2, v___x_896_);
lean_ctor_set(v___x_898_, 3, v___x_897_);
v___x_899_ = l_Lean_Syntax_node2(v___y_875_, v___x_893_, v___x_898_, v___x_891_);
lean_inc(v___y_877_);
v___x_900_ = l_Lean_Syntax_node2(v___y_875_, v___y_877_, v___x_892_, v___x_899_);
v___x_901_ = l_Lean_Syntax_node1(v___y_875_, v___y_871_, v___x_900_);
v___x_902_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__25));
v___x_903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_903_, 0, v___y_875_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
lean_inc_ref(v___x_903_);
lean_inc(v___y_864_);
v___x_904_ = l_Lean_Syntax_node3(v___y_875_, v___y_864_, v___x_890_, v___x_901_, v___x_903_);
v___x_905_ = l_Lean_Syntax_node1(v___y_875_, v___y_871_, v___x_904_);
v___x_906_ = l_Lean_Syntax_node7(v___y_875_, v___x_856_, v___x_888_, v___x_905_, v___x_891_, v___x_891_, v___x_891_, v___x_891_, v___x_891_);
v___x_907_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__27));
v___x_908_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__28));
v___x_909_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_909_, 0, v___y_875_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__29));
lean_inc(v___y_860_);
v___x_911_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_911_, 0, v___y_860_);
lean_ctor_set(v___x_911_, 1, v___y_871_);
lean_ctor_set(v___x_911_, 2, v___x_910_);
v___x_912_ = lean_mk_empty_array_with_capacity(v___y_874_);
v___x_913_ = lean_array_push(v___x_912_, v___y_859_);
v___x_914_ = lean_array_push(v___x_913_, v___x_911_);
lean_inc(v___y_868_);
v___x_915_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_915_, 0, v___y_860_);
lean_ctor_set(v___x_915_, 1, v___y_868_);
lean_ctor_set(v___x_915_, 2, v___x_914_);
v___x_916_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__31));
v___x_917_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_918_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_918_, 0, v___y_875_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
lean_inc(v___y_867_);
lean_inc(v___y_884_);
v___x_919_ = l_Lean_Syntax_node2(v___y_875_, v___y_884_, v___x_918_, v___y_867_);
v___x_920_ = l_Lean_Syntax_node1(v___y_875_, v___y_871_, v___x_919_);
v___x_921_ = l_Lean_Syntax_node2(v___y_875_, v___x_916_, v___x_891_, v___x_920_);
v___x_922_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34));
v___x_923_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_924_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_924_, 0, v___y_875_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__36));
lean_inc_ref_n(v___y_879_, 7);
v___x_926_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_925_);
v___x_927_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__38);
v___x_928_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_929_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__40));
lean_inc_ref(v___y_863_);
lean_inc_ref(v___y_882_);
v___x_930_ = l_Lean_Name_mkStr4(v___y_882_, v___y_863_, v___x_928_, v___x_929_);
lean_inc(v___x_930_);
v___x_931_ = l_Lean_addMacroScope(v___y_865_, v___x_930_, v___y_858_);
v___x_932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_930_);
lean_ctor_set(v___x_932_, 1, v___x_897_);
v___x_933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v___x_897_);
v___x_934_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_934_, 0, v___y_875_);
lean_ctor_set(v___x_934_, 1, v___x_927_);
lean_ctor_set(v___x_934_, 2, v___x_931_);
lean_ctor_set(v___x_934_, 3, v___x_933_);
v___x_935_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__41));
v___x_936_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_935_);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__42));
v___x_938_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_938_, 0, v___y_875_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__44);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__45));
v___x_941_ = l_Lean_addMacroScope(v___y_865_, v___x_940_, v___y_858_);
v___x_942_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_942_, 0, v___y_875_);
lean_ctor_set(v___x_942_, 1, v___x_939_);
lean_ctor_set(v___x_942_, 2, v___x_941_);
lean_ctor_set(v___x_942_, 3, v___x_897_);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__46));
v___x_944_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_944_, 0, v___y_875_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_inc_ref_n(v___x_924_, 4);
v___x_945_ = l_Lean_Syntax_node5(v___y_875_, v___x_936_, v___x_938_, v___x_942_, v___x_924_, v___y_867_, v___x_944_);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__47));
v___x_947_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_946_);
v___x_948_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__48));
v___x_949_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_949_, 0, v___y_875_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v___x_950_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__49));
v___x_951_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_950_);
v___x_952_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__50));
v___x_953_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_952_);
v___x_954_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_955_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_954_);
v___x_956_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__53);
v___x_957_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__54));
v___x_958_ = l_Lean_addMacroScope(v___y_865_, v___x_957_, v___y_858_);
v___x_959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_959_, 0, v___y_875_);
lean_ctor_set(v___x_959_, 1, v___x_956_);
lean_ctor_set(v___x_959_, 2, v___x_958_);
lean_ctor_set(v___x_959_, 3, v___x_897_);
lean_inc_n(v___x_955_, 4);
v___x_960_ = l_Lean_Syntax_node2(v___y_875_, v___x_955_, v___x_959_, v___x_891_);
v___x_961_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__55));
v___x_962_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_879_, v___x_961_);
lean_inc_n(v___x_962_, 3);
v___x_963_ = l_Lean_Syntax_node3(v___y_875_, v___x_962_, v___x_924_, v___x_891_, v___y_885_);
v___x_964_ = l_Lean_Syntax_node3(v___y_875_, v___y_871_, v___x_891_, v___x_891_, v___x_963_);
lean_inc_n(v___x_953_, 3);
v___x_965_ = l_Lean_Syntax_node2(v___y_875_, v___x_953_, v___x_960_, v___x_964_);
v___x_966_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_967_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_967_, 0, v___y_875_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__56);
v___x_969_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__57));
v___x_970_ = l_Lean_addMacroScope(v___y_865_, v___x_969_, v___y_858_);
v___x_971_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_971_, 0, v___y_875_);
lean_ctor_set(v___x_971_, 1, v___x_968_);
lean_ctor_set(v___x_971_, 2, v___x_970_);
lean_ctor_set(v___x_971_, 3, v___x_897_);
v___x_972_ = l_Lean_Syntax_node2(v___y_875_, v___x_955_, v___x_971_, v___x_891_);
v___x_973_ = l_Lean_Syntax_node3(v___y_875_, v___x_962_, v___x_924_, v___x_891_, v___y_876_);
v___x_974_ = l_Lean_Syntax_node3(v___y_875_, v___y_871_, v___x_891_, v___x_891_, v___x_973_);
v___x_975_ = l_Lean_Syntax_node2(v___y_875_, v___x_953_, v___x_972_, v___x_974_);
v___x_976_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__58);
v___x_977_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__59));
v___x_978_ = l_Lean_addMacroScope(v___y_865_, v___x_977_, v___y_858_);
v___x_979_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_979_, 0, v___y_875_);
lean_ctor_set(v___x_979_, 1, v___x_976_);
lean_ctor_set(v___x_979_, 2, v___x_978_);
lean_ctor_set(v___x_979_, 3, v___x_897_);
v___x_980_ = l_Lean_Syntax_node2(v___y_875_, v___x_955_, v___x_979_, v___x_891_);
v___x_981_ = l_Lean_Syntax_node3(v___y_875_, v___x_962_, v___x_924_, v___x_891_, v___y_869_);
v___x_982_ = l_Lean_Syntax_node3(v___y_875_, v___y_871_, v___x_891_, v___x_891_, v___x_981_);
v___x_983_ = l_Lean_Syntax_node2(v___y_875_, v___x_953_, v___x_980_, v___x_982_);
v___x_984_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__60);
v___x_985_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__61));
v___x_986_ = l_Lean_addMacroScope(v___y_865_, v___x_985_, v___y_858_);
v___x_987_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_987_, 0, v___y_875_);
lean_ctor_set(v___x_987_, 1, v___x_984_);
lean_ctor_set(v___x_987_, 2, v___x_986_);
lean_ctor_set(v___x_987_, 3, v___x_897_);
v___x_988_ = l_Lean_Syntax_node2(v___y_875_, v___x_955_, v___x_987_, v___x_891_);
if (v___y_873_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__64);
v___y_730_ = v___y_858_;
v___y_731_ = v___x_967_;
v___y_732_ = v___y_861_;
v___y_733_ = v___y_862_;
v___y_734_ = v___y_863_;
v___y_735_ = v___x_934_;
v___y_736_ = v___y_865_;
v___y_737_ = v___y_866_;
v___y_738_ = v___x_945_;
v___y_739_ = v___x_907_;
v___y_740_ = v___x_921_;
v___y_741_ = v___x_983_;
v___y_742_ = v___x_988_;
v___y_743_ = v___y_871_;
v___y_744_ = v___y_873_;
v___y_745_ = v___x_906_;
v___y_746_ = v___x_962_;
v___y_747_ = v___x_897_;
v___y_748_ = v___x_909_;
v___y_749_ = v___y_875_;
v___y_750_ = v___x_924_;
v___y_751_ = v___x_928_;
v___y_752_ = v___x_922_;
v___y_753_ = v___x_965_;
v___y_754_ = v___x_949_;
v___y_755_ = v___x_955_;
v___y_756_ = v___y_878_;
v___y_757_ = v___x_897_;
v___y_758_ = v___y_879_;
v___y_759_ = v___y_880_;
v___y_760_ = v___y_881_;
v___y_761_ = v___x_903_;
v___y_762_ = v___x_891_;
v___y_763_ = v___x_915_;
v___y_764_ = v___y_882_;
v___y_765_ = v___y_883_;
v___y_766_ = v___x_926_;
v___y_767_ = v___x_953_;
v___y_768_ = v___x_975_;
v___y_769_ = v___x_947_;
v___y_770_ = v___x_951_;
v___y_771_ = v___x_989_;
goto v___jp_729_;
}
else
{
lean_object* v___x_990_; 
v___x_990_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__66);
v___y_730_ = v___y_858_;
v___y_731_ = v___x_967_;
v___y_732_ = v___y_861_;
v___y_733_ = v___y_862_;
v___y_734_ = v___y_863_;
v___y_735_ = v___x_934_;
v___y_736_ = v___y_865_;
v___y_737_ = v___y_866_;
v___y_738_ = v___x_945_;
v___y_739_ = v___x_907_;
v___y_740_ = v___x_921_;
v___y_741_ = v___x_983_;
v___y_742_ = v___x_988_;
v___y_743_ = v___y_871_;
v___y_744_ = v___y_873_;
v___y_745_ = v___x_906_;
v___y_746_ = v___x_962_;
v___y_747_ = v___x_897_;
v___y_748_ = v___x_909_;
v___y_749_ = v___y_875_;
v___y_750_ = v___x_924_;
v___y_751_ = v___x_928_;
v___y_752_ = v___x_922_;
v___y_753_ = v___x_965_;
v___y_754_ = v___x_949_;
v___y_755_ = v___x_955_;
v___y_756_ = v___y_878_;
v___y_757_ = v___x_897_;
v___y_758_ = v___y_879_;
v___y_759_ = v___y_880_;
v___y_760_ = v___y_881_;
v___y_761_ = v___x_903_;
v___y_762_ = v___x_891_;
v___y_763_ = v___x_915_;
v___y_764_ = v___y_882_;
v___y_765_ = v___y_883_;
v___y_766_ = v___x_926_;
v___y_767_ = v___x_953_;
v___y_768_ = v___x_975_;
v___y_769_ = v___x_947_;
v___y_770_ = v___x_951_;
v___y_771_ = v___x_990_;
goto v___jp_729_;
}
}
v___jp_991_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_1020_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
if (lean_obj_tag(v___y_1014_) == 1)
{
lean_object* v_val_1021_; lean_object* v___x_1022_; 
v_val_1021_ = lean_ctor_get(v___y_1014_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v___y_1014_, 1);
v___x_1022_ = l_Array_mkArray1___redArg(v_val_1021_);
v___y_858_ = v___y_992_;
v___y_859_ = v___y_993_;
v___y_860_ = v___y_996_;
v___y_861_ = v___y_995_;
v___y_862_ = v___y_994_;
v___y_863_ = v___y_997_;
v___y_864_ = v___y_998_;
v___y_865_ = v_a_1018_;
v___y_866_ = v___y_999_;
v___y_867_ = v___y_1000_;
v___y_868_ = v___y_1002_;
v___y_869_ = v___y_1001_;
v___y_870_ = v___x_1020_;
v___y_871_ = v___x_1019_;
v___y_872_ = v___y_1004_;
v___y_873_ = v___y_1003_;
v___y_874_ = v___y_1005_;
v___y_875_ = v___y_1006_;
v___y_876_ = v___y_1007_;
v___y_877_ = v___y_1008_;
v___y_878_ = v___y_1009_;
v___y_879_ = v___y_1010_;
v___y_880_ = v___y_1011_;
v___y_881_ = v___y_1012_;
v___y_882_ = v___y_1013_;
v___y_883_ = v___y_1015_;
v___y_884_ = v___y_1016_;
v___y_885_ = v___y_1017_;
v___y_886_ = v___x_1022_;
goto v___jp_857_;
}
else
{
lean_object* v___x_1023_; 
lean_dec(v___y_1014_);
v___x_1023_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__70));
v___y_858_ = v___y_992_;
v___y_859_ = v___y_993_;
v___y_860_ = v___y_996_;
v___y_861_ = v___y_995_;
v___y_862_ = v___y_994_;
v___y_863_ = v___y_997_;
v___y_864_ = v___y_998_;
v___y_865_ = v_a_1018_;
v___y_866_ = v___y_999_;
v___y_867_ = v___y_1000_;
v___y_868_ = v___y_1002_;
v___y_869_ = v___y_1001_;
v___y_870_ = v___x_1020_;
v___y_871_ = v___x_1019_;
v___y_872_ = v___y_1004_;
v___y_873_ = v___y_1003_;
v___y_874_ = v___y_1005_;
v___y_875_ = v___y_1006_;
v___y_876_ = v___y_1007_;
v___y_877_ = v___y_1008_;
v___y_878_ = v___y_1009_;
v___y_879_ = v___y_1010_;
v___y_880_ = v___y_1011_;
v___y_881_ = v___y_1012_;
v___y_882_ = v___y_1013_;
v___y_883_ = v___y_1015_;
v___y_884_ = v___y_1016_;
v___y_885_ = v___y_1017_;
v___y_886_ = v___x_1023_;
goto v___jp_857_;
}
}
v___jp_1024_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v_a_1050_; uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v_quotContext_x3f_1054_; 
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1047_);
v___x_1048_ = l_Lean_Syntax_mkStrLit(v___y_1047_, v___y_1026_);
v___x_1049_ = l_Lean_Elab_Command_getRef___redArg(v___y_1036_);
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref(v___x_1049_);
v___x_1051_ = 0;
v___x_1052_ = l_Lean_SourceInfo_fromRef(v_a_1050_, v___x_1051_);
lean_dec(v_a_1050_);
v___x_1053_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1036_);
v_quotContext_x3f_1054_ = lean_ctor_get(v___y_1036_, 5);
if (lean_obj_tag(v_quotContext_x3f_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1056_; lean_object* v_a_1057_; 
v_a_1055_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1055_);
lean_dec_ref(v___x_1053_);
v___x_1056_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1041_);
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref(v___x_1056_);
v___y_992_ = v_a_1055_;
v___y_993_ = v___y_1025_;
v___y_994_ = v___y_1027_;
v___y_995_ = v___y_1028_;
v___y_996_ = v___y_1026_;
v___y_997_ = v___y_1030_;
v___y_998_ = v___y_1031_;
v___y_999_ = v___y_1032_;
v___y_1000_ = v___y_1035_;
v___y_1001_ = v___y_1037_;
v___y_1002_ = v___y_1038_;
v___y_1003_ = v___y_1045_;
v___y_1004_ = v___y_1044_;
v___y_1005_ = v___y_1046_;
v___y_1006_ = v___x_1052_;
v___y_1007_ = v___x_1048_;
v___y_1008_ = v___y_1029_;
v___y_1009_ = v___y_1047_;
v___y_1010_ = v___y_1033_;
v___y_1011_ = v___y_1034_;
v___y_1012_ = v___y_1036_;
v___y_1013_ = v___y_1039_;
v___y_1014_ = v___y_1040_;
v___y_1015_ = v___y_1041_;
v___y_1016_ = v___y_1043_;
v___y_1017_ = v___y_1042_;
v_a_1018_ = v_a_1057_;
goto v___jp_991_;
}
else
{
lean_object* v_a_1058_; lean_object* v_val_1059_; 
v_a_1058_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1058_);
lean_dec_ref(v___x_1053_);
v_val_1059_ = lean_ctor_get(v_quotContext_x3f_1054_, 0);
lean_inc(v_val_1059_);
v___y_992_ = v_a_1058_;
v___y_993_ = v___y_1025_;
v___y_994_ = v___y_1027_;
v___y_995_ = v___y_1028_;
v___y_996_ = v___y_1026_;
v___y_997_ = v___y_1030_;
v___y_998_ = v___y_1031_;
v___y_999_ = v___y_1032_;
v___y_1000_ = v___y_1035_;
v___y_1001_ = v___y_1037_;
v___y_1002_ = v___y_1038_;
v___y_1003_ = v___y_1045_;
v___y_1004_ = v___y_1044_;
v___y_1005_ = v___y_1046_;
v___y_1006_ = v___x_1052_;
v___y_1007_ = v___x_1048_;
v___y_1008_ = v___y_1029_;
v___y_1009_ = v___y_1047_;
v___y_1010_ = v___y_1033_;
v___y_1011_ = v___y_1034_;
v___y_1012_ = v___y_1036_;
v___y_1013_ = v___y_1039_;
v___y_1014_ = v___y_1040_;
v___y_1015_ = v___y_1041_;
v___y_1016_ = v___y_1043_;
v___y_1017_ = v___y_1042_;
v_a_1018_ = v_val_1059_;
goto v___jp_991_;
}
}
v___jp_1061_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v_pathLit_1083_; lean_object* v_written_1084_; uint8_t v_project_1085_; lean_object* v___x_1086_; 
v___x_1079_ = l_Lean_Syntax_getId(v___y_1062_);
lean_inc(v___x_1079_);
v___x_1080_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1079_, v___x_1060_);
v___x_1081_ = lean_box(2);
v___x_1082_ = l_Lean_Syntax_mkStrLit(v___x_1080_, v___x_1081_);
lean_inc_ref(v_snd_1078_);
v_pathLit_1083_ = l_Lean_Syntax_mkStrLit(v_snd_1078_, v___x_1081_);
v_written_1084_ = l_Lean_TSyntax_getString(v___y_1067_);
lean_dec(v___y_1067_);
v_project_1085_ = l_Lasm_JS_Meta_isProjectFile(v_written_1084_);
v___x_1086_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1073_);
if (v_project_1085_ == 0)
{
lean_dec_ref(v___x_1086_);
lean_inc_ref(v_written_1084_);
v___y_1025_ = v___y_1062_;
v___y_1026_ = v___x_1081_;
v___y_1027_ = v___x_1079_;
v___y_1028_ = v_project_1085_;
v___y_1029_ = v___y_1063_;
v___y_1030_ = v___y_1064_;
v___y_1031_ = v___y_1065_;
v___y_1032_ = v_snd_1078_;
v___y_1033_ = v___y_1066_;
v___y_1034_ = v_written_1084_;
v___y_1035_ = v___y_1068_;
v___y_1036_ = v___y_1069_;
v___y_1037_ = v_pathLit_1083_;
v___y_1038_ = v___y_1070_;
v___y_1039_ = v___y_1071_;
v___y_1040_ = v___y_1072_;
v___y_1041_ = v___y_1073_;
v___y_1042_ = v___x_1082_;
v___y_1043_ = v___y_1074_;
v___y_1044_ = v___y_1075_;
v___y_1045_ = v_fst_1077_;
v___y_1046_ = v___y_1076_;
v___y_1047_ = v_written_1084_;
goto v___jp_1024_;
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1088_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref(v___x_1086_);
v___x_1088_ = l_Lasm_JS_Meta_projectSpecifier(v_a_1087_, v_written_1084_);
v___y_1025_ = v___y_1062_;
v___y_1026_ = v___x_1081_;
v___y_1027_ = v___x_1079_;
v___y_1028_ = v_project_1085_;
v___y_1029_ = v___y_1063_;
v___y_1030_ = v___y_1064_;
v___y_1031_ = v___y_1065_;
v___y_1032_ = v_snd_1078_;
v___y_1033_ = v___y_1066_;
v___y_1034_ = v_written_1084_;
v___y_1035_ = v___y_1068_;
v___y_1036_ = v___y_1069_;
v___y_1037_ = v_pathLit_1083_;
v___y_1038_ = v___y_1070_;
v___y_1039_ = v___y_1071_;
v___y_1040_ = v___y_1072_;
v___y_1041_ = v___y_1073_;
v___y_1042_ = v___x_1082_;
v___y_1043_ = v___y_1074_;
v___y_1044_ = v___y_1075_;
v___y_1045_ = v_fst_1077_;
v___y_1046_ = v___y_1076_;
v___y_1047_ = v___x_1088_;
goto v___jp_1024_;
}
}
v___jp_1089_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1093_ = lean_unsigned_to_nat(1u);
v___x_1094_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1093_);
lean_inc(v___x_1094_);
v___x_1095_ = l_Lean_Syntax_matchesNull(v___x_1094_, v___x_1093_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; 
lean_dec(v___x_1094_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1096_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1097_ = l_Lean_Syntax_getArg(v___x_1094_, v___x_854_);
lean_dec(v___x_1094_);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__71));
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v___x_1097_);
v___x_1100_ = l_Lean_Syntax_isOfKind(v___x_1097_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
lean_dec(v___x_1097_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1101_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1102_ = l_Lean_Syntax_getArg(v___x_1097_, v___x_1093_);
lean_dec(v___x_1097_);
lean_inc(v___x_1102_);
v___x_1103_ = l_Lean_Syntax_matchesNull(v___x_1102_, v___x_1093_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; 
lean_dec(v___x_1102_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1104_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1104_;
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v___x_1105_ = l_Lean_Syntax_getArg(v___x_1102_, v___x_854_);
lean_dec(v___x_1102_);
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__75));
lean_inc(v___x_1105_);
v___x_1107_ = l_Lean_Syntax_isOfKind(v___x_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
lean_dec(v___x_1105_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1108_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v___x_1109_ = l_Lean_Syntax_getArg(v___x_1105_, v___x_854_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77));
lean_inc(v___x_1109_);
v___x_1111_ = l_Lean_Syntax_isOfKind(v___x_1109_, v___x_1110_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; 
lean_dec(v___x_1109_);
lean_dec(v___x_1105_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1112_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1112_;
}
else
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = l_Lean_Syntax_getArg(v___x_1109_, v___x_854_);
lean_dec(v___x_1109_);
v___x_1114_ = l_Lean_Syntax_matchesNull(v___x_1113_, v___x_854_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_dec(v___x_1105_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1115_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1115_;
}
else
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v___x_1116_ = l_Lean_Syntax_getArg(v___x_1105_, v___x_1093_);
lean_dec(v___x_1105_);
v___x_1117_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1118_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__1));
lean_inc(v___x_1116_);
v___x_1120_ = l_Lean_Syntax_isOfKind(v___x_1116_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; 
lean_dec(v___x_1116_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1121_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1121_;
}
else
{
lean_object* v_m_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v_m_1122_ = l_Lean_Syntax_getArg(v___x_1116_, v___x_1093_);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__7));
lean_inc(v_m_1122_);
v___x_1124_ = l_Lean_Syntax_isOfKind(v_m_1122_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; 
lean_dec(v_m_1122_);
lean_dec(v___x_1116_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1125_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1125_;
}
else
{
lean_object* v___x_1126_; lean_object* v_e_1127_; uint8_t v___x_1128_; 
v___x_1126_ = lean_unsigned_to_nat(2u);
v_e_1127_ = l_Lean_Syntax_getArg(v___x_1116_, v___x_1126_);
lean_dec(v___x_1116_);
lean_inc(v_e_1127_);
v___x_1128_ = l_Lean_Syntax_isOfKind(v_e_1127_, v___x_1123_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1129_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1129_;
}
else
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1126_);
v___x_1131_ = l_Lean_Syntax_matchesNull(v___x_1130_, v___x_854_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1132_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; uint8_t v___x_1135_; 
v___x_1133_ = lean_unsigned_to_nat(3u);
v___x_1134_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1133_);
v___x_1135_ = l_Lean_Syntax_matchesNull(v___x_1134_, v___x_854_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1136_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1136_;
}
else
{
lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1137_ = lean_unsigned_to_nat(4u);
v___x_1138_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1137_);
v___x_1139_ = l_Lean_Syntax_matchesNull(v___x_1138_, v___x_854_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1140_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1140_;
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = lean_unsigned_to_nat(5u);
v___x_1142_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1141_);
v___x_1143_ = l_Lean_Syntax_matchesNull(v___x_1142_, v___x_854_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v___x_855_);
lean_dec(v_x_682_);
v___x_1144_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1144_;
}
else
{
lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1145_ = lean_unsigned_to_nat(6u);
v___x_1146_ = l_Lean_Syntax_getArg(v___x_855_, v___x_1145_);
lean_dec(v___x_855_);
v___x_1147_ = l_Lean_Syntax_matchesNull(v___x_1146_, v___x_854_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
lean_dec(v_x_682_);
v___x_1148_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1148_;
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1149_ = l_Lean_Syntax_getArg(v_x_682_, v___x_1093_);
lean_dec(v_x_682_);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__79));
lean_inc(v___x_1149_);
v___x_1151_ = l_Lean_Syntax_isOfKind(v___x_1149_, v___x_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1152_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1152_;
}
else
{
lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1153_ = l_Lean_Syntax_getArg(v___x_1149_, v___x_1093_);
v___x_1154_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__81));
lean_inc(v___x_1153_);
v___x_1155_ = l_Lean_Syntax_isOfKind(v___x_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
lean_dec(v___x_1153_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1156_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1156_;
}
else
{
lean_object* v_n_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v_n_1157_ = l_Lean_Syntax_getArg(v___x_1153_, v___x_854_);
v___x_1158_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__83));
lean_inc(v_n_1157_);
v___x_1159_ = l_Lean_Syntax_isOfKind(v_n_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_dec(v_n_1157_);
lean_dec(v___x_1153_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1160_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1160_;
}
else
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = l_Lean_Syntax_getArg(v___x_1153_, v___x_1093_);
lean_dec(v___x_1153_);
v___x_1162_ = l_Lean_Syntax_matchesNull(v___x_1161_, v___x_854_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; 
lean_dec(v_n_1157_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1163_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1163_;
}
else
{
lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1164_ = l_Lean_Syntax_getArg(v___x_1149_, v___x_1126_);
v___x_1165_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85));
lean_inc(v___x_1164_);
v___x_1166_ = l_Lean_Syntax_isOfKind(v___x_1164_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
lean_dec(v___x_1164_);
lean_dec(v_n_1157_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1167_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1167_;
}
else
{
lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1168_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_854_);
v___x_1169_ = l_Lean_Syntax_matchesNull(v___x_1168_, v___x_854_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; 
lean_dec(v___x_1164_);
lean_dec(v_n_1157_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1170_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1170_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1171_ = l_Lean_Syntax_getArg(v___x_1164_, v___x_1093_);
lean_dec(v___x_1164_);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87));
lean_inc(v___x_1171_);
v___x_1173_ = l_Lean_Syntax_isOfKind(v___x_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; 
lean_dec(v___x_1171_);
lean_dec(v_n_1157_);
lean_dec(v___x_1149_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1174_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1174_;
}
else
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = l_Lean_Syntax_getArg(v___x_1149_, v___x_1133_);
lean_dec(v___x_1149_);
v___x_1176_ = l_Lean_Syntax_matchesNull(v___x_1175_, v___x_854_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; 
lean_dec(v___x_1171_);
lean_dec(v_n_1157_);
lean_dec(v_e_1127_);
lean_dec(v_m_1122_);
lean_dec(v_doc_1090_);
v___x_1177_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1177_;
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v_spec_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1178_ = l_Lean_Syntax_getArg(v___x_1171_, v___x_1093_);
lean_dec(v___x_1171_);
v___x_1179_ = l_Lean_TSyntax_getString(v_e_1127_);
lean_dec(v_e_1127_);
v___x_1180_ = lean_string_utf8_byte_size(v___x_1179_);
v___x_1181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_854_);
lean_ctor_set(v___x_1181_, 2, v___x_1180_);
v___x_1182_ = l_String_Slice_trimAscii(v___x_1181_);
v_spec_1183_ = l_String_Slice_toString(v___x_1182_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__88));
v___x_1185_ = lean_string_utf8_byte_size(v_spec_1183_);
v___x_1186_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__89);
v___x_1187_ = lean_nat_dec_le(v___x_1186_, v___x_1185_);
if (v___x_1187_ == 0)
{
v___y_1062_ = v_n_1157_;
v___y_1063_ = v___x_1106_;
v___y_1064_ = v___x_1118_;
v___y_1065_ = v___x_1099_;
v___y_1066_ = v___x_1098_;
v___y_1067_ = v_m_1122_;
v___y_1068_ = v___x_1178_;
v___y_1069_ = v___y_1091_;
v___y_1070_ = v___x_1154_;
v___y_1071_ = v___x_1117_;
v___y_1072_ = v_doc_1090_;
v___y_1073_ = v___y_1092_;
v___y_1074_ = v___x_1172_;
v___y_1075_ = v___x_1110_;
v___y_1076_ = v___x_1126_;
v_fst_1077_ = v___x_1187_;
v_snd_1078_ = v_spec_1183_;
goto v___jp_1061_;
}
else
{
uint8_t v___x_1188_; 
v___x_1188_ = lean_string_memcmp(v_spec_1183_, v___x_1184_, v___x_854_, v___x_854_, v___x_1186_);
if (v___x_1188_ == 0)
{
v___y_1062_ = v_n_1157_;
v___y_1063_ = v___x_1106_;
v___y_1064_ = v___x_1118_;
v___y_1065_ = v___x_1099_;
v___y_1066_ = v___x_1098_;
v___y_1067_ = v_m_1122_;
v___y_1068_ = v___x_1178_;
v___y_1069_ = v___y_1091_;
v___y_1070_ = v___x_1154_;
v___y_1071_ = v___x_1117_;
v___y_1072_ = v_doc_1090_;
v___y_1073_ = v___y_1092_;
v___y_1074_ = v___x_1172_;
v___y_1075_ = v___x_1110_;
v___y_1076_ = v___x_1126_;
v_fst_1077_ = v___x_1188_;
v_snd_1078_ = v_spec_1183_;
goto v___jp_1061_;
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
lean_inc_ref(v_spec_1183_);
v___x_1189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1189_, 0, v_spec_1183_);
lean_ctor_set(v___x_1189_, 1, v___x_854_);
lean_ctor_set(v___x_1189_, 2, v___x_1185_);
v___x_1190_ = l_String_Slice_Pos_nextn(v___x_1189_, v___x_854_, v___x_1137_);
lean_dec_ref_known(v___x_1189_, 3);
v___x_1191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1191_, 0, v_spec_1183_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
lean_ctor_set(v___x_1191_, 2, v___x_1185_);
v___x_1192_ = l_String_Slice_trimAscii(v___x_1191_);
v___x_1193_ = l_String_Slice_toString(v___x_1192_);
lean_dec_ref(v___x_1192_);
v___y_1062_ = v_n_1157_;
v___y_1063_ = v___x_1106_;
v___y_1064_ = v___x_1118_;
v___y_1065_ = v___x_1099_;
v___y_1066_ = v___x_1098_;
v___y_1067_ = v_m_1122_;
v___y_1068_ = v___x_1178_;
v___y_1069_ = v___y_1091_;
v___y_1070_ = v___x_1154_;
v___y_1071_ = v___x_1117_;
v___y_1072_ = v_doc_1090_;
v___y_1073_ = v___y_1092_;
v___y_1074_ = v___x_1172_;
v___y_1075_ = v___x_1110_;
v___y_1076_ = v___x_1126_;
v_fst_1077_ = v___x_1060_;
v_snd_1078_ = v___x_1193_;
goto v___jp_1061_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_686_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v_env_697_; lean_object* v_messages_698_; lean_object* v_scopes_699_; lean_object* v_usedQuotCtxts_700_; lean_object* v_nextMacroScope_701_; lean_object* v_maxRecDepth_702_; lean_object* v_ngen_703_; lean_object* v_auxDeclNGen_704_; lean_object* v_infoState_705_; lean_object* v_traceState_706_; lean_object* v_snapshotTasks_707_; lean_object* v_prevLinterStates_708_; lean_object* v_codeQualityEntryTasks_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_725_; 
v___x_695_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_695_, 0, v___y_690_);
lean_ctor_set(v___x_695_, 1, v___y_691_);
lean_ctor_set(v___x_695_, 2, v___y_692_);
lean_ctor_set(v___x_695_, 3, v___y_687_);
lean_ctor_set(v___x_695_, 4, v___y_689_);
lean_ctor_set(v___x_695_, 5, v___y_694_);
lean_ctor_set_uint8(v___x_695_, sizeof(void*)*6, v___y_693_);
v___x_696_ = lean_st_ref_take(v___y_688_);
v_env_697_ = lean_ctor_get(v___x_696_, 0);
v_messages_698_ = lean_ctor_get(v___x_696_, 1);
v_scopes_699_ = lean_ctor_get(v___x_696_, 2);
v_usedQuotCtxts_700_ = lean_ctor_get(v___x_696_, 3);
v_nextMacroScope_701_ = lean_ctor_get(v___x_696_, 4);
v_maxRecDepth_702_ = lean_ctor_get(v___x_696_, 5);
v_ngen_703_ = lean_ctor_get(v___x_696_, 6);
v_auxDeclNGen_704_ = lean_ctor_get(v___x_696_, 7);
v_infoState_705_ = lean_ctor_get(v___x_696_, 8);
v_traceState_706_ = lean_ctor_get(v___x_696_, 9);
v_snapshotTasks_707_ = lean_ctor_get(v___x_696_, 10);
v_prevLinterStates_708_ = lean_ctor_get(v___x_696_, 11);
v_codeQualityEntryTasks_709_ = lean_ctor_get(v___x_696_, 12);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_725_ == 0)
{
v___x_711_ = v___x_696_;
v_isShared_712_ = v_isSharedCheck_725_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_codeQualityEntryTasks_709_);
lean_inc(v_prevLinterStates_708_);
lean_inc(v_snapshotTasks_707_);
lean_inc(v_traceState_706_);
lean_inc(v_infoState_705_);
lean_inc(v_auxDeclNGen_704_);
lean_inc(v_ngen_703_);
lean_inc(v_maxRecDepth_702_);
lean_inc(v_nextMacroScope_701_);
lean_inc(v_usedQuotCtxts_700_);
lean_inc(v_scopes_699_);
lean_inc(v_messages_698_);
lean_inc(v_env_697_);
lean_dec(v___x_696_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_725_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v_toEnvExtension_714_; lean_object* v_asyncMode_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_713_ = l_Lasm_JS_Meta_bindingExtension;
v_toEnvExtension_714_ = lean_ctor_get(v___x_713_, 0);
v_asyncMode_715_ = lean_ctor_get(v_toEnvExtension_714_, 2);
v___x_716_ = lean_box(0);
v___x_717_ = l_Lasm_JS_Meta_BindingInfo_json(v___x_695_);
v___x_718_ = lean_box(0);
v___x_719_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_713_, v_env_697_, v___x_717_, v_asyncMode_715_, v___x_718_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_719_);
v___x_721_ = v___x_711_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_messages_698_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_scopes_699_);
lean_ctor_set(v_reuseFailAlloc_724_, 3, v_usedQuotCtxts_700_);
lean_ctor_set(v_reuseFailAlloc_724_, 4, v_nextMacroScope_701_);
lean_ctor_set(v_reuseFailAlloc_724_, 5, v_maxRecDepth_702_);
lean_ctor_set(v_reuseFailAlloc_724_, 6, v_ngen_703_);
lean_ctor_set(v_reuseFailAlloc_724_, 7, v_auxDeclNGen_704_);
lean_ctor_set(v_reuseFailAlloc_724_, 8, v_infoState_705_);
lean_ctor_set(v_reuseFailAlloc_724_, 9, v_traceState_706_);
lean_ctor_set(v_reuseFailAlloc_724_, 10, v_snapshotTasks_707_);
lean_ctor_set(v_reuseFailAlloc_724_, 11, v_prevLinterStates_708_);
lean_ctor_set(v_reuseFailAlloc_724_, 12, v_codeQualityEntryTasks_709_);
v___x_721_ = v_reuseFailAlloc_724_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_st_ref_put(v___y_688_, v___x_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_716_);
return v___x_723_;
}
}
}
v___jp_729_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
lean_inc(v___y_771_);
lean_inc_n(v___y_762_, 14);
lean_inc_n(v___y_750_, 2);
lean_inc(v___y_746_);
lean_inc_n(v___y_749_, 23);
v___x_772_ = l_Lean_Syntax_node3(v___y_749_, v___y_746_, v___y_750_, v___y_762_, v___y_771_);
lean_inc_n(v___y_743_, 5);
v___x_773_ = l_Lean_Syntax_node3(v___y_749_, v___y_743_, v___y_762_, v___y_762_, v___x_772_);
lean_inc(v___y_767_);
v___x_774_ = l_Lean_Syntax_node2(v___y_749_, v___y_767_, v___y_742_, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_776_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5);
v___x_777_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
lean_inc(v___y_730_);
lean_inc(v___y_736_);
v___x_778_ = l_Lean_addMacroScope(v___y_736_, v___x_777_, v___y_730_);
lean_inc_n(v___y_747_, 2);
v___x_779_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_779_, 0, v___y_749_);
lean_ctor_set(v___x_779_, 1, v___x_776_);
lean_ctor_set(v___x_779_, 2, v___x_778_);
lean_ctor_set(v___x_779_, 3, v___y_747_);
v___x_780_ = l_Lean_Syntax_node2(v___y_749_, v___y_755_, v___x_779_, v___y_762_);
v___x_781_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8);
lean_inc_ref(v___y_734_);
lean_inc_ref(v___y_764_);
v___x_782_ = l_Lean_Name_mkStr4(v___y_764_, v___y_734_, v___y_751_, v___x_775_);
lean_inc(v___x_782_);
v___x_783_ = l_Lean_addMacroScope(v___y_736_, v___x_782_, v___y_730_);
lean_inc(v___y_757_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v___y_757_);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___y_747_);
v___x_786_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_786_, 0, v___y_749_);
lean_ctor_set(v___x_786_, 1, v___x_781_);
lean_ctor_set(v___x_786_, 2, v___x_783_);
lean_ctor_set(v___x_786_, 3, v___x_785_);
lean_inc(v___y_738_);
v___x_787_ = l_Lean_Syntax_node1(v___y_749_, v___y_743_, v___y_738_);
lean_inc(v___y_766_);
v___x_788_ = l_Lean_Syntax_node2(v___y_749_, v___y_766_, v___x_786_, v___x_787_);
v___x_789_ = l_Lean_Syntax_node3(v___y_749_, v___y_746_, v___y_750_, v___y_762_, v___x_788_);
v___x_790_ = l_Lean_Syntax_node3(v___y_749_, v___y_743_, v___y_762_, v___y_762_, v___x_789_);
v___x_791_ = l_Lean_Syntax_node2(v___y_749_, v___y_767_, v___x_780_, v___x_790_);
v___x_792_ = lean_unsigned_to_nat(9u);
v___x_793_ = lean_mk_empty_array_with_capacity(v___x_792_);
v___x_794_ = lean_array_push(v___x_793_, v___y_753_);
lean_inc_n(v___y_731_, 3);
v___x_795_ = lean_array_push(v___x_794_, v___y_731_);
v___x_796_ = lean_array_push(v___x_795_, v___y_768_);
v___x_797_ = lean_array_push(v___x_796_, v___y_731_);
v___x_798_ = lean_array_push(v___x_797_, v___y_741_);
v___x_799_ = lean_array_push(v___x_798_, v___y_731_);
v___x_800_ = lean_array_push(v___x_799_, v___x_774_);
v___x_801_ = lean_array_push(v___x_800_, v___y_731_);
v___x_802_ = lean_array_push(v___x_801_, v___x_791_);
v___x_803_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_803_, 0, v___y_749_);
lean_ctor_set(v___x_803_, 1, v___y_743_);
lean_ctor_set(v___x_803_, 2, v___x_802_);
v___x_804_ = l_Lean_Syntax_node1(v___y_749_, v___y_770_, v___x_803_);
v___x_805_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9));
lean_inc_ref(v___y_758_);
v___x_806_ = l_Lean_Name_mkStr4(v___x_726_, v___x_727_, v___y_758_, v___x_805_);
v___x_807_ = l_Lean_Syntax_node1(v___y_749_, v___x_806_, v___y_762_);
v___x_808_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_809_, 0, v___y_749_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_Syntax_node6(v___y_749_, v___y_769_, v___y_754_, v___y_762_, v___x_804_, v___x_807_, v___y_762_, v___x_809_);
v___x_811_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11));
v___x_812_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12));
v___x_813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_813_, 0, v___y_749_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Lean_Syntax_node3(v___y_749_, v___x_811_, v___x_813_, v___y_762_, v___y_761_);
v___x_815_ = l_Lean_Syntax_node3(v___y_749_, v___y_743_, v___y_738_, v___x_810_, v___x_814_);
v___x_816_ = l_Lean_Syntax_node2(v___y_749_, v___y_766_, v___y_735_, v___x_815_);
v___x_817_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15));
v___x_818_ = l_Lean_Syntax_node2(v___y_749_, v___x_817_, v___y_762_, v___y_762_);
lean_inc(v___y_752_);
v___x_819_ = l_Lean_Syntax_node4(v___y_749_, v___y_752_, v___y_750_, v___x_816_, v___x_818_, v___y_762_);
lean_inc(v___y_739_);
v___x_820_ = l_Lean_Syntax_node5(v___y_749_, v___y_739_, v___y_748_, v___y_763_, v___y_740_, v___x_819_, v___y_762_);
v___x_821_ = l_Lean_Syntax_node2(v___y_749_, v___x_728_, v___y_745_, v___x_820_);
v___x_822_ = l_Lean_Elab_Command_elabCommand(v___x_821_, v___y_760_, v___y_765_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v___x_823_; lean_object* v_a_824_; lean_object* v_currNamespace_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
lean_dec_ref_known(v___x_822_, 1);
v___x_823_ = l_Lean_Elab_Command_getScope___redArg(v___y_765_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref(v___x_823_);
v_currNamespace_825_ = lean_ctor_get(v_a_824_, 2);
lean_inc(v_currNamespace_825_);
lean_dec(v_a_824_);
v___x_826_ = l_Lean_Name_append(v_currNamespace_825_, v___y_733_);
lean_inc(v___x_826_);
v___x_827_ = l_Lean_getConstInfo___at___00Lean_Elab_elabDeriving_spec__3(v___x_826_, v___y_760_, v___y_765_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_829_; lean_object* v___f_830_; lean_object* v___x_831_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l_Lean_ConstantInfo_type(v_a_828_);
lean_dec(v_a_828_);
v___f_830_ = lean_alloc_closure((void*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___lam__0___boxed), 8, 1);
lean_closure_set(v___f_830_, 0, v___x_829_);
v___x_831_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_830_, v___y_760_, v___y_765_);
if (lean_obj_tag(v___x_831_) == 0)
{
if (v___y_732_ == 0)
{
lean_object* v_a_832_; lean_object* v___x_833_; 
lean_dec_ref(v___y_759_);
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_831_, 1);
v___x_833_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___y_687_ = v_a_832_;
v___y_688_ = v___y_765_;
v___y_689_ = v___x_833_;
v___y_690_ = v___x_826_;
v___y_691_ = v___y_756_;
v___y_692_ = v___y_737_;
v___y_693_ = v___y_744_;
v___y_694_ = v___x_833_;
goto v___jp_686_;
}
else
{
lean_object* v_a_834_; lean_object* v_fileName_835_; 
v_a_834_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_831_, 1);
v_fileName_835_ = lean_ctor_get(v___y_760_, 0);
lean_inc_ref(v_fileName_835_);
v___y_687_ = v_a_834_;
v___y_688_ = v___y_765_;
v___y_689_ = v___y_759_;
v___y_690_ = v___x_826_;
v___y_691_ = v___y_756_;
v___y_692_ = v___y_737_;
v___y_693_ = v___y_744_;
v___y_694_ = v_fileName_835_;
goto v___jp_686_;
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec(v___x_826_);
lean_dec_ref(v___y_759_);
lean_dec_ref(v___y_756_);
lean_dec_ref(v___y_737_);
v_a_836_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_831_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_831_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec(v___x_826_);
lean_dec_ref(v___y_759_);
lean_dec_ref(v___y_756_);
lean_dec_ref(v___y_737_);
v_a_844_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_827_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_827_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
else
{
lean_dec_ref(v___y_759_);
lean_dec_ref(v___y_756_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_733_);
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___boxed(lean_object* v_x_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1(v_x_1207_, v_a_1208_, v_a_1209_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object* v_declName_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v___x_1215_; lean_object* v_env_1216_; uint8_t v___x_1217_; 
v___x_1215_ = lean_st_ref_get(v_a_1213_);
v_env_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc_ref_n(v_env_1216_, 2);
lean_dec(v___x_1215_);
lean_inc(v_declName_1212_);
v___x_1217_ = l_Lean_isStructure(v_env_1216_, v_declName_1212_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
lean_dec_ref(v_env_1216_);
lean_dec(v_declName_1212_);
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
return v___x_1219_;
}
else
{
uint8_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1220_ = 0;
v___x_1221_ = l_Lean_getStructureFieldsFlattened(v_env_1216_, v_declName_1212_, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object* v_declName_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1224_, v_a_1225_);
lean_dec(v_a_1225_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object* v_declName_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1228_, v_a_1230_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object* v_declName_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(v_declName_1233_, v_a_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object* v___x_1240_, lean_object* v_as_x27_1241_, lean_object* v_b_1242_){
_start:
{
if (lean_obj_tag(v_as_x27_1241_) == 0)
{
lean_object* v___x_1244_; 
lean_dec_ref(v___x_1240_);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_b_1242_);
return v___x_1244_;
}
else
{
lean_object* v_head_1245_; lean_object* v_tail_1246_; lean_object* v_snd_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1277_; 
v_head_1245_ = lean_ctor_get(v_as_x27_1241_, 0);
v_tail_1246_ = lean_ctor_get(v_as_x27_1241_, 1);
v_snd_1247_ = lean_ctor_get(v_b_1242_, 1);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_b_1242_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v_b_1242_, 0);
lean_dec(v_unused_1278_);
v___x_1249_ = v_b_1242_;
v_isShared_1250_ = v_isSharedCheck_1277_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_snd_1247_);
lean_dec(v_b_1242_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1277_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
uint8_t v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = 0;
lean_inc(v_head_1245_);
lean_inc_ref(v___x_1240_);
v___x_1258_ = l_Lean_Environment_find_x3f(v___x_1240_, v_head_1245_, v___x_1257_);
if (lean_obj_tag(v___x_1258_) == 1)
{
lean_object* v_val_1259_; 
v_val_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_val_1259_);
lean_dec_ref_known(v___x_1258_, 1);
if (lean_obj_tag(v_val_1259_) == 6)
{
lean_object* v_val_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1276_; 
lean_del_object(v___x_1249_);
v_val_1260_ = lean_ctor_get(v_val_1259_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_val_1259_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1262_ = v_val_1259_;
v_isShared_1263_ = v_isSharedCheck_1276_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_val_1260_);
lean_dec(v_val_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1276_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v_numFields_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v_numFields_1264_ = lean_ctor_get(v_val_1260_, 4);
lean_inc(v_numFields_1264_);
lean_dec_ref(v_val_1260_);
v___x_1265_ = lean_unsigned_to_nat(0u);
v___x_1266_ = lean_nat_dec_eq(v_numFields_1264_, v___x_1265_);
lean_dec(v_numFields_1264_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1270_; 
lean_dec_ref(v___x_1240_);
v___x_1267_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set(v___x_1268_, 1, v_snd_1247_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1268_);
v___x_1270_ = v___x_1262_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_del_object(v___x_1262_);
v___x_1272_ = lean_box(0);
lean_inc(v_head_1245_);
v___x_1273_ = lean_array_push(v_snd_1247_, v_head_1245_);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v_as_x27_1241_ = v_tail_1246_;
v_b_1242_ = v___x_1274_;
goto _start;
}
}
}
else
{
lean_dec(v_val_1259_);
lean_dec_ref(v___x_1240_);
goto v___jp_1251_;
}
}
else
{
lean_dec(v___x_1258_);
lean_dec_ref(v___x_1240_);
goto v___jp_1251_;
}
v___jp_1251_:
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v___x_1252_);
v___x_1254_ = v___x_1249_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1252_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_snd_1247_);
v___x_1254_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; 
v___x_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object* v___x_1279_, lean_object* v_as_x27_1280_, lean_object* v_b_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1279_, v_as_x27_1280_, v_b_1281_);
lean_dec(v_as_x27_1280_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object* v_declName_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_){
_start:
{
lean_object* v___x_1296_; lean_object* v_env_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1296_ = lean_st_ref_get(v_a_1291_);
v_env_1300_ = lean_ctor_get(v___x_1296_, 0);
lean_inc_ref_n(v_env_1300_, 2);
lean_dec(v___x_1296_);
v___x_1301_ = 0;
v___x_1302_ = l_Lean_Environment_find_x3f(v_env_1300_, v_declName_1289_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 1)
{
lean_object* v_val_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1333_; 
v_val_1303_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1305_ = v___x_1302_;
v_isShared_1306_ = v_isSharedCheck_1333_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_val_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1333_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
if (lean_obj_tag(v_val_1303_) == 5)
{
lean_object* v_val_1307_; lean_object* v_numParams_1308_; lean_object* v_numIndices_1309_; lean_object* v_ctors_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; 
v_val_1307_ = lean_ctor_get(v_val_1303_, 0);
lean_inc_ref(v_val_1307_);
lean_dec_ref_known(v_val_1303_, 1);
v_numParams_1308_ = lean_ctor_get(v_val_1307_, 1);
lean_inc(v_numParams_1308_);
v_numIndices_1309_ = lean_ctor_get(v_val_1307_, 2);
lean_inc(v_numIndices_1309_);
v_ctors_1310_ = lean_ctor_get(v_val_1307_, 4);
lean_inc(v_ctors_1310_);
lean_dec_ref(v_val_1307_);
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = lean_nat_dec_eq(v_numParams_1308_, v___x_1311_);
lean_dec(v_numParams_1308_);
if (v___x_1312_ == 0)
{
lean_dec(v_ctors_1310_);
lean_dec(v_numIndices_1309_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_env_1300_);
goto v___jp_1297_;
}
else
{
uint8_t v___x_1313_; 
v___x_1313_ = lean_nat_dec_eq(v_numIndices_1309_, v___x_1311_);
lean_dec(v_numIndices_1309_);
if (v___x_1313_ == 0)
{
lean_dec(v_ctors_1310_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_env_1300_);
goto v___jp_1297_;
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1332_; 
v___x_1314_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1));
v___x_1315_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v_env_1300_, v_ctors_1310_, v___x_1314_);
lean_dec(v_ctors_1310_);
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1332_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1332_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v_fst_1320_; 
v_fst_1320_ = lean_ctor_get(v_a_1316_, 0);
if (lean_obj_tag(v_fst_1320_) == 0)
{
lean_object* v_snd_1321_; lean_object* v___x_1323_; 
v_snd_1321_ = lean_ctor_get(v_a_1316_, 1);
lean_inc(v_snd_1321_);
lean_dec(v_a_1316_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v_snd_1321_);
v___x_1323_ = v___x_1305_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_snd_1321_);
v___x_1323_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1325_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v___x_1323_);
v___x_1325_ = v___x_1318_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
else
{
lean_object* v_val_1328_; lean_object* v___x_1330_; 
lean_inc_ref(v_fst_1320_);
lean_dec(v_a_1316_);
lean_del_object(v___x_1305_);
v_val_1328_ = lean_ctor_get(v_fst_1320_, 0);
lean_inc(v_val_1328_);
lean_dec_ref_known(v_fst_1320_, 1);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v_val_1328_);
v___x_1330_ = v___x_1318_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_val_1328_);
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
}
}
else
{
lean_del_object(v___x_1305_);
lean_dec(v_val_1303_);
lean_dec_ref(v_env_1300_);
goto v___jp_1293_;
}
}
}
else
{
lean_dec(v___x_1302_);
lean_dec_ref(v_env_1300_);
goto v___jp_1293_;
}
v___jp_1293_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = lean_box(0);
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
v___jp_1297_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = lean_box(0);
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object* v_declName_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1334_, v_a_1335_, v_a_1336_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object* v___x_1339_, lean_object* v_as_1340_, lean_object* v_as_x27_1341_, lean_object* v_b_1342_, lean_object* v_a_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1339_, v_as_x27_1341_, v_b_1342_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object* v___x_1348_, lean_object* v_as_1349_, lean_object* v_as_x27_1350_, lean_object* v_b_1351_, lean_object* v_a_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(v___x_1348_, v_as_1349_, v_as_x27_1350_, v_b_1351_, v_a_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v_as_x27_1350_);
lean_dec(v_as_1349_);
return v_res_1356_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0));
v___x_1359_ = l_Lean_stringToMessageData(v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2));
v___x_1362_ = l_Lean_stringToMessageData(v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4));
v___x_1365_ = l_Lean_stringToMessageData(v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object* v_declName_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___x_1379_; lean_object* v_env_1380_; uint8_t v___x_1381_; lean_object* v___x_1382_; 
v___x_1379_ = lean_st_ref_get(v_a_1368_);
v_env_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc_ref(v_env_1380_);
lean_dec(v___x_1379_);
v___x_1381_ = 0;
lean_inc(v_declName_1366_);
v___x_1382_ = l_Lean_Environment_find_x3f(v_env_1380_, v_declName_1366_, v___x_1381_);
if (lean_obj_tag(v___x_1382_) == 1)
{
lean_object* v_val_1383_; 
v_val_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_val_1383_);
lean_dec_ref_known(v___x_1382_, 1);
if (lean_obj_tag(v_val_1383_) == 5)
{
lean_object* v_val_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1401_; 
v_val_1384_ = lean_ctor_get(v_val_1383_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_val_1383_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1386_ = v_val_1383_;
v_isShared_1387_ = v_isSharedCheck_1401_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_val_1384_);
lean_dec(v_val_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1401_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v_numParams_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v_numParams_1388_ = lean_ctor_get(v_val_1384_, 1);
lean_inc(v_numParams_1388_);
lean_dec_ref(v_val_1384_);
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = lean_nat_dec_eq(v_numParams_1388_, v___x_1389_);
lean_dec(v_numParams_1388_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
lean_del_object(v___x_1386_);
v___x_1391_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1392_ = l_Lean_MessageData_ofName(v_declName_1366_);
v___x_1393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5);
v___x_1395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v___x_1396_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1395_, v_a_1367_, v_a_1368_);
return v___x_1396_;
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1399_; 
lean_dec(v_declName_1366_);
v___x_1397_ = lean_box(0);
if (v_isShared_1387_ == 0)
{
lean_ctor_set_tag(v___x_1386_, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1397_);
v___x_1399_ = v___x_1386_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v___x_1397_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
else
{
lean_dec(v_val_1383_);
v___y_1371_ = v_a_1367_;
v___y_1372_ = v_a_1368_;
goto v___jp_1370_;
}
}
else
{
lean_dec(v___x_1382_);
v___y_1371_ = v_a_1367_;
v___y_1372_ = v_a_1368_;
goto v___jp_1370_;
}
v___jp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1373_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1374_ = l_Lean_MessageData_ofName(v_declName_1366_);
v___x_1375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3);
v___x_1377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1375_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
v___x_1378_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1377_, v___y_1371_, v___y_1372_);
return v___x_1378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object* v_declName_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1402_, v_a_1403_, v_a_1404_);
lean_dec(v_a_1404_);
lean_dec_ref(v_a_1403_);
return v_res_1406_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5));
v___x_1422_ = l_String_toRawSubstring_x27(v___x_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t v_sz_1441_, size_t v_i_1442_, lean_object* v_bs_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
uint8_t v___x_1447_; 
v___x_1447_ = lean_usize_dec_lt(v_i_1442_, v_sz_1441_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; 
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v_bs_1443_);
return v___x_1448_;
}
else
{
uint8_t v___x_1449_; lean_object* v_v_1450_; lean_object* v___x_1451_; lean_object* v_bs_x27_1452_; lean_object* v___x_1453_; 
v___x_1449_ = 0;
v_v_1450_ = lean_array_uget(v_bs_1443_, v_i_1442_);
v___x_1451_ = lean_unsigned_to_nat(0u);
v_bs_x27_1452_ = lean_array_uset(v_bs_1443_, v_i_1442_, v___x_1451_);
v___x_1453_ = l_Lean_Elab_Command_getRef___redArg(v___y_1444_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_a_1454_);
lean_dec_ref_known(v___x_1453_, 1);
v___x_1455_ = l_Lean_SourceInfo_fromRef(v_a_1454_, v___x_1449_);
lean_dec(v_a_1454_);
v___x_1456_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1444_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v_a_1459_; lean_object* v_quotContext_x3f_1485_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v_quotContext_x3f_1485_ = lean_ctor_get(v___y_1444_, 5);
if (lean_obj_tag(v_quotContext_x3f_1485_) == 0)
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1445_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v_a_1459_ = v_a_1487_;
goto v___jp_1458_;
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_dec(v_a_1457_);
lean_dec(v___x_1455_);
lean_dec_ref(v_bs_x27_1452_);
lean_dec(v_v_1450_);
v_a_1488_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1486_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1486_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
else
{
lean_object* v_val_1496_; 
v_val_1496_ = lean_ctor_get(v_quotContext_x3f_1485_, 0);
lean_inc(v_val_1496_);
v_a_1459_ = v_val_1496_;
goto v___jp_1458_;
}
v___jp_1458_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; size_t v___x_1481_; size_t v___x_1482_; lean_object* v___x_1483_; 
v___x_1460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_1461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_1455_, 7);
v___x_1462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1455_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
lean_inc(v_v_1450_);
v___x_1464_ = l_Lean_mkIdent(v_v_1450_);
v___x_1465_ = l_Lean_Syntax_node1(v___x_1455_, v___x_1463_, v___x_1464_);
v___x_1466_ = l_Lean_Syntax_node1(v___x_1455_, v___x_1463_, v___x_1465_);
v___x_1467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1455_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
v___x_1469_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1470_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_1471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
v___x_1472_ = l_Lean_addMacroScope(v_a_1459_, v___x_1471_, v_a_1457_);
v___x_1473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_1474_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1455_);
lean_ctor_set(v___x_1474_, 1, v___x_1470_);
lean_ctor_set(v___x_1474_, 2, v___x_1472_);
lean_ctor_set(v___x_1474_, 3, v___x_1473_);
v___x_1475_ = l_Lean_Name_getString_x21(v_v_1450_);
lean_dec(v_v_1450_);
v___x_1476_ = lean_box(2);
v___x_1477_ = l_Lean_Syntax_mkStrLit(v___x_1475_, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node1(v___x_1455_, v___x_1463_, v___x_1477_);
v___x_1479_ = l_Lean_Syntax_node2(v___x_1455_, v___x_1469_, v___x_1474_, v___x_1478_);
v___x_1480_ = l_Lean_Syntax_node4(v___x_1455_, v___x_1460_, v___x_1462_, v___x_1466_, v___x_1468_, v___x_1479_);
v___x_1481_ = ((size_t)1ULL);
v___x_1482_ = lean_usize_add(v_i_1442_, v___x_1481_);
v___x_1483_ = lean_array_uset(v_bs_x27_1452_, v_i_1442_, v___x_1480_);
v_i_1442_ = v___x_1482_;
v_bs_1443_ = v___x_1483_;
goto _start;
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_dec(v___x_1455_);
lean_dec_ref(v_bs_x27_1452_);
lean_dec(v_v_1450_);
v_a_1497_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1456_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1456_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec_ref(v_bs_x27_1452_);
lean_dec(v_v_1450_);
v_a_1505_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1453_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1453_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object* v_sz_1513_, lean_object* v_i_1514_, lean_object* v_bs_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
size_t v_sz_boxed_1519_; size_t v_i_boxed_1520_; lean_object* v_res_1521_; 
v_sz_boxed_1519_ = lean_unbox_usize(v_sz_1513_);
lean_dec(v_sz_1513_);
v_i_boxed_1520_ = lean_unbox_usize(v_i_1514_);
lean_dec(v_i_1514_);
v_res_1521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_boxed_1519_, v_i_boxed_1520_, v_bs_1515_, v___y_1516_, v___y_1517_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t v_sz_1522_, size_t v_i_1523_, lean_object* v_bs_1524_){
_start:
{
uint8_t v___x_1525_; 
v___x_1525_ = lean_usize_dec_lt(v_i_1523_, v_sz_1522_);
if (v___x_1525_ == 0)
{
return v_bs_1524_;
}
else
{
lean_object* v_v_1526_; lean_object* v___x_1527_; lean_object* v_bs_x27_1528_; size_t v___x_1529_; size_t v___x_1530_; lean_object* v___x_1531_; 
v_v_1526_ = lean_array_uget(v_bs_1524_, v_i_1523_);
v___x_1527_ = lean_unsigned_to_nat(0u);
v_bs_x27_1528_ = lean_array_uset(v_bs_1524_, v_i_1523_, v___x_1527_);
v___x_1529_ = ((size_t)1ULL);
v___x_1530_ = lean_usize_add(v_i_1523_, v___x_1529_);
v___x_1531_ = lean_array_uset(v_bs_x27_1528_, v_i_1523_, v_v_1526_);
v_i_1523_ = v___x_1530_;
v_bs_1524_ = v___x_1531_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object* v_sz_1533_, lean_object* v_i_1534_, lean_object* v_bs_1535_){
_start:
{
size_t v_sz_boxed_1536_; size_t v_i_boxed_1537_; lean_object* v_res_1538_; 
v_sz_boxed_1536_ = lean_unbox_usize(v_sz_1533_);
lean_dec(v_sz_1533_);
v_i_boxed_1537_ = lean_unbox_usize(v_i_1534_);
lean_dec(v_i_1534_);
v_res_1538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_boxed_1536_, v_i_boxed_1537_, v_bs_1535_);
return v_res_1538_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_1555_ = l_String_toRawSubstring_x27(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1602_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24));
v___x_1603_ = l_String_toRawSubstring_x27(v___x_1602_);
return v___x_1603_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34));
v___x_1629_ = l_String_toRawSubstring_x27(v___x_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object* v___x_1632_, lean_object* v_declName_1633_, size_t v_sz_1634_, size_t v_i_1635_, lean_object* v_bs_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_usize_dec_lt(v_i_1635_, v_sz_1634_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; 
lean_dec(v_declName_1633_);
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v_bs_1636_);
return v___x_1641_;
}
else
{
uint8_t v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v_v_1645_; lean_object* v___x_1646_; lean_object* v_bs_x27_1647_; lean_object* v___x_1648_; 
v___x_1642_ = 0;
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_nat_dec_eq(v___x_1632_, v___x_1643_);
v_v_1645_ = lean_array_uget(v_bs_1636_, v_i_1635_);
v___x_1646_ = lean_unsigned_to_nat(0u);
v_bs_x27_1647_ = lean_array_uset(v_bs_1636_, v_i_1635_, v___x_1646_);
v___x_1648_ = l_Lean_Elab_Command_getRef___redArg(v___y_1637_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1650_ = l_Lean_SourceInfo_fromRef(v_a_1649_, v___x_1642_);
lean_dec(v_a_1649_);
v___x_1651_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1637_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v_a_1654_; lean_object* v_quotContext_x3f_1701_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
v_quotContext_x3f_1701_ = lean_ctor_get(v___y_1637_, 5);
if (lean_obj_tag(v_quotContext_x3f_1701_) == 0)
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1638_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
v_a_1654_ = v_a_1703_;
goto v___jp_1653_;
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
lean_dec(v_a_1652_);
lean_dec(v___x_1650_);
lean_dec_ref(v_bs_x27_1647_);
lean_dec(v_v_1645_);
lean_dec(v_declName_1633_);
v_a_1704_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1702_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1702_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
else
{
lean_object* v_val_1712_; 
v_val_1712_ = lean_ctor_get(v_quotContext_x3f_1701_, 0);
lean_inc(v_val_1712_);
v_a_1654_ = v_val_1712_;
goto v___jp_1653_;
}
v___jp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; size_t v___x_1697_; size_t v___x_1698_; lean_object* v___x_1699_; 
v___x_1655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1));
v___x_1656_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3));
v___x_1657_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__42));
lean_inc_n(v___x_1650_, 15);
v___x_1658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1650_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5));
v___x_1660_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6);
v___x_1661_ = lean_box(0);
lean_inc_n(v_a_1652_, 2);
lean_inc_n(v_a_1654_, 2);
v___x_1662_ = l_Lean_addMacroScope(v_a_1654_, v___x_1661_, v_a_1652_);
v___x_1663_ = lean_box(0);
v___x_1664_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23));
v___x_1665_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1650_);
lean_ctor_set(v___x_1665_, 1, v___x_1660_);
lean_ctor_set(v___x_1665_, 2, v___x_1662_);
lean_ctor_set(v___x_1665_, 3, v___x_1664_);
v___x_1666_ = l_Lean_Syntax_node1(v___x_1650_, v___x_1659_, v___x_1665_);
v___x_1667_ = l_Lean_Syntax_node2(v___x_1650_, v___x_1656_, v___x_1658_, v___x_1666_);
v___x_1668_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
lean_inc(v_v_1645_);
v___x_1669_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1645_, v___x_1644_);
v___x_1670_ = lean_box(2);
v___x_1671_ = l_Lean_Syntax_mkStrLit(v___x_1669_, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1673_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1650_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1675_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25);
v___x_1676_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27));
v___x_1677_ = l_Lean_addMacroScope(v_a_1654_, v___x_1676_, v_a_1652_);
v___x_1678_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31));
v___x_1679_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1650_);
lean_ctor_set(v___x_1679_, 1, v___x_1675_);
lean_ctor_set(v___x_1679_, 2, v___x_1677_);
lean_ctor_set(v___x_1679_, 3, v___x_1678_);
v___x_1680_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33));
lean_inc(v_declName_1633_);
v___x_1681_ = l_Lean_Name_append(v_declName_1633_, v_v_1645_);
v___x_1682_ = l_Lean_mkIdent(v___x_1681_);
v___x_1683_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1684_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1685_ = l_Lean_addMacroScope(v_a_1654_, v___x_1684_, v_a_1652_);
v___x_1686_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1650_);
lean_ctor_set(v___x_1686_, 1, v___x_1683_);
lean_ctor_set(v___x_1686_, 2, v___x_1685_);
lean_ctor_set(v___x_1686_, 3, v___x_1663_);
v___x_1687_ = l_Lean_Syntax_node1(v___x_1650_, v___x_1668_, v___x_1686_);
v___x_1688_ = l_Lean_Syntax_node2(v___x_1650_, v___x_1674_, v___x_1682_, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__46));
v___x_1690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1650_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
lean_inc_ref(v___x_1690_);
lean_inc(v___x_1667_);
v___x_1691_ = l_Lean_Syntax_node3(v___x_1650_, v___x_1680_, v___x_1667_, v___x_1688_, v___x_1690_);
v___x_1692_ = l_Lean_Syntax_node1(v___x_1650_, v___x_1668_, v___x_1691_);
v___x_1693_ = l_Lean_Syntax_node2(v___x_1650_, v___x_1674_, v___x_1679_, v___x_1692_);
v___x_1694_ = l_Lean_Syntax_node1(v___x_1650_, v___x_1668_, v___x_1693_);
v___x_1695_ = l_Lean_Syntax_node3(v___x_1650_, v___x_1668_, v___x_1671_, v___x_1673_, v___x_1694_);
v___x_1696_ = l_Lean_Syntax_node3(v___x_1650_, v___x_1655_, v___x_1667_, v___x_1695_, v___x_1690_);
v___x_1697_ = ((size_t)1ULL);
v___x_1698_ = lean_usize_add(v_i_1635_, v___x_1697_);
v___x_1699_ = lean_array_uset(v_bs_x27_1647_, v_i_1635_, v___x_1696_);
v_i_1635_ = v___x_1698_;
v_bs_1636_ = v___x_1699_;
goto _start;
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v___x_1650_);
lean_dec_ref(v_bs_x27_1647_);
lean_dec(v_v_1645_);
lean_dec(v_declName_1633_);
v_a_1713_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1651_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1651_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_bs_x27_1647_);
lean_dec(v_v_1645_);
lean_dec(v_declName_1633_);
v_a_1721_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1648_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1648_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object* v___x_1729_, lean_object* v_declName_1730_, lean_object* v_sz_1731_, lean_object* v_i_1732_, lean_object* v_bs_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
size_t v_sz_boxed_1737_; size_t v_i_boxed_1738_; lean_object* v_res_1739_; 
v_sz_boxed_1737_ = lean_unbox_usize(v_sz_1731_);
lean_dec(v_sz_1731_);
v_i_boxed_1738_ = lean_unbox_usize(v_i_1732_);
lean_dec(v_i_1732_);
v_res_1739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1729_, v_declName_1730_, v_sz_boxed_1737_, v_i_boxed_1738_, v_bs_1733_, v___y_1734_, v___y_1735_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___x_1729_);
return v_res_1739_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__3(void){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__2));
v___x_1748_ = l_String_toRawSubstring_x27(v___x_1747_);
return v___x_1748_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__17(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_1785_ = l_String_toRawSubstring_x27(v___x_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__33(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__32));
v___x_1825_ = l_Lean_stringToMessageData(v___x_1824_);
return v___x_1825_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__35(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__34));
v___x_1828_ = l_Lean_stringToMessageData(v___x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object* v_declNames_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1833_ = lean_array_get_size(v_declNames_1829_);
v___x_1834_ = lean_unsigned_to_nat(1u);
v___x_1835_ = lean_nat_dec_eq(v___x_1833_, v___x_1834_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_box(v___x_1835_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
return v___x_1837_;
}
else
{
lean_object* v___x_1838_; uint8_t v___x_1839_; lean_object* v___x_1840_; lean_object* v_declName_1841_; lean_object* v___x_1842_; 
v___x_1838_ = lean_box(0);
v___x_1839_ = 0;
v___x_1840_ = lean_unsigned_to_nat(0u);
v_declName_1841_ = lean_array_get_borrowed(v___x_1838_, v_declNames_1829_, v___x_1840_);
lean_inc(v_declName_1841_);
v___x_1842_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1841_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v_a_1845_; 
lean_dec_ref_known(v___x_1842_, 1);
lean_inc_n(v_declName_1841_, 2);
v___x_1843_ = l_Lean_mkIdent(v_declName_1841_);
v___x_1844_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1841_, v_a_1831_);
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1845_);
lean_dec_ref(v___x_1844_);
if (lean_obj_tag(v_a_1845_) == 1)
{
lean_object* v_val_1846_; size_t v_sz_1847_; size_t v___x_1848_; lean_object* v___x_1849_; 
v_val_1846_ = lean_ctor_get(v_a_1845_, 0);
lean_inc(v_val_1846_);
lean_dec_ref_known(v_a_1845_, 1);
v_sz_1847_ = lean_array_size(v_val_1846_);
v___x_1848_ = ((size_t)0ULL);
lean_inc(v_declName_1841_);
v___x_1849_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1833_, v_declName_1841_, v_sz_1847_, v___x_1848_, v_val_1846_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1851_; lean_object* v_a_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v_a_1855_; lean_object* v_a_1857_; lean_object* v_quotContext_x3f_1947_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1851_ = l_Lean_Elab_Command_getRef___redArg(v_a_1830_);
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref(v___x_1851_);
v___x_1853_ = l_Lean_SourceInfo_fromRef(v_a_1852_, v___x_1839_);
lean_dec(v_a_1852_);
v___x_1854_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1830_);
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1855_);
lean_dec_ref(v___x_1854_);
v_quotContext_x3f_1947_ = lean_ctor_get(v_a_1830_, 5);
if (lean_obj_tag(v_quotContext_x3f_1947_) == 0)
{
lean_object* v___x_1948_; lean_object* v_a_1949_; 
v___x_1948_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_1831_);
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref(v___x_1948_);
v_a_1857_ = v_a_1949_;
goto v___jp_1856_;
}
else
{
lean_object* v_val_1950_; 
v_val_1950_ = lean_ctor_get(v_quotContext_x3f_1947_, 0);
lean_inc(v_val_1950_);
v_a_1857_ = v_val_1950_;
goto v___jp_1856_;
}
v___jp_1856_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1858_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_1859_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_1860_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_1861_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
lean_inc_n(v___x_1853_, 31);
v___x_1862_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1853_);
lean_ctor_set(v___x_1862_, 1, v___x_1860_);
lean_ctor_set(v___x_1862_, 2, v___x_1861_);
lean_inc_ref_n(v___x_1862_, 14);
v___x_1863_ = l_Lean_Syntax_node7(v___x_1853_, v___x_1859_, v___x_1862_, v___x_1862_, v___x_1862_, v___x_1862_, v___x_1862_, v___x_1862_, v___x_1862_);
v___x_1864_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_1866_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77));
v___x_1867_ = l_Lean_Syntax_node1(v___x_1853_, v___x_1866_, v___x_1862_);
v___x_1868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1853_);
lean_ctor_set(v___x_1868_, 1, v___x_1864_);
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85));
v___x_1870_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87));
v___x_1871_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_1872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1853_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1874_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_1875_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc_n(v_a_1855_, 2);
lean_inc_n(v_a_1857_, 2);
v___x_1876_ = l_Lean_addMacroScope(v_a_1857_, v___x_1875_, v_a_1855_);
v___x_1877_ = lean_box(0);
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_1879_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1853_);
lean_ctor_set(v___x_1879_, 1, v___x_1874_);
lean_ctor_set(v___x_1879_, 2, v___x_1876_);
lean_ctor_set(v___x_1879_, 3, v___x_1878_);
v___x_1880_ = l_Lean_Syntax_node1(v___x_1853_, v___x_1860_, v___x_1843_);
v___x_1881_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1873_, v___x_1879_, v___x_1880_);
v___x_1882_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1870_, v___x_1872_, v___x_1881_);
v___x_1883_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1869_, v___x_1862_, v___x_1882_);
v___x_1884_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34));
v___x_1885_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_1886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1853_);
lean_ctor_set(v___x_1886_, 1, v___x_1885_);
v___x_1887_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_1888_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_1889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1853_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_1891_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_1892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1853_);
lean_ctor_set(v___x_1892_, 1, v___x_1890_);
v___x_1893_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_1894_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1895_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1896_ = l_Lean_addMacroScope(v_a_1857_, v___x_1895_, v_a_1855_);
v___x_1897_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1853_);
lean_ctor_set(v___x_1897_, 1, v___x_1894_);
lean_ctor_set(v___x_1897_, 2, v___x_1896_);
lean_ctor_set(v___x_1897_, 3, v___x_1877_);
v___x_1898_ = l_Lean_Syntax_node1(v___x_1853_, v___x_1860_, v___x_1897_);
v___x_1899_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1853_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__17, &l_Lasm_JS_Meta_mkToJS___closed__17_once, _init_l_Lasm_JS_Meta_mkToJS___closed__17);
v___x_1902_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__19));
v___x_1903_ = l_Lean_addMacroScope(v_a_1857_, v___x_1902_, v_a_1855_);
v___x_1904_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__23));
v___x_1905_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1853_);
lean_ctor_set(v___x_1905_, 1, v___x_1901_);
lean_ctor_set(v___x_1905_, 2, v___x_1903_);
lean_ctor_set(v___x_1905_, 3, v___x_1904_);
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11));
v___x_1907_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12));
v___x_1908_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1853_);
lean_ctor_set(v___x_1908_, 1, v___x_1907_);
v___x_1909_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1910_ = l_Lean_Syntax_SepArray_ofElems(v___x_1909_, v_a_1850_);
lean_dec(v_a_1850_);
v___x_1911_ = l_Array_append___redArg(v___x_1861_, v___x_1910_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1853_);
lean_ctor_set(v___x_1912_, 1, v___x_1860_);
lean_ctor_set(v___x_1912_, 2, v___x_1911_);
v___x_1913_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__25));
v___x_1914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1853_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = l_Lean_Syntax_node3(v___x_1853_, v___x_1906_, v___x_1908_, v___x_1912_, v___x_1914_);
v___x_1916_ = l_Lean_Syntax_node1(v___x_1853_, v___x_1860_, v___x_1915_);
v___x_1917_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1873_, v___x_1905_, v___x_1916_);
v___x_1918_ = l_Lean_Syntax_node4(v___x_1853_, v___x_1893_, v___x_1898_, v___x_1862_, v___x_1900_, v___x_1917_);
v___x_1919_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1891_, v___x_1892_, v___x_1918_);
v___x_1920_ = l_Lean_Syntax_node1(v___x_1853_, v___x_1860_, v___x_1919_);
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_1922_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1853_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = l_Lean_Syntax_node3(v___x_1853_, v___x_1887_, v___x_1889_, v___x_1920_, v___x_1922_);
v___x_1924_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15));
v___x_1925_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1924_, v___x_1862_, v___x_1862_);
v___x_1926_ = l_Lean_Syntax_node4(v___x_1853_, v___x_1884_, v___x_1886_, v___x_1923_, v___x_1925_, v___x_1862_);
v___x_1927_ = l_Lean_Syntax_node6(v___x_1853_, v___x_1865_, v___x_1867_, v___x_1868_, v___x_1862_, v___x_1862_, v___x_1883_, v___x_1926_);
v___x_1928_ = l_Lean_Syntax_node2(v___x_1853_, v___x_1858_, v___x_1863_, v___x_1927_);
v___x_1929_ = l_Lean_Elab_Command_elabCommand(v___x_1928_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1937_; 
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v___x_1929_, 0);
lean_dec(v_unused_1938_);
v___x_1931_ = v___x_1929_;
v_isShared_1932_ = v_isSharedCheck_1937_;
goto v_resetjp_1930_;
}
else
{
lean_dec(v___x_1929_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1937_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1933_ = lean_box(v___x_1835_);
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v___x_1933_);
v___x_1935_ = v___x_1931_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1946_; 
v_a_1939_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1941_ = v___x_1929_;
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1929_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1944_; 
if (v_isShared_1942_ == 0)
{
v___x_1944_ = v___x_1941_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_a_1939_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
return v___x_1944_;
}
}
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec(v___x_1843_);
v_a_1951_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1849_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1849_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
else
{
lean_object* v___x_1959_; 
lean_dec(v_a_1845_);
lean_inc(v_declName_1841_);
v___x_1959_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1841_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
if (lean_obj_tag(v_a_1960_) == 1)
{
lean_object* v_val_1961_; size_t v_sz_1962_; size_t v___x_1963_; lean_object* v___x_1964_; 
v_val_1961_ = lean_ctor_get(v_a_1960_, 0);
lean_inc(v_val_1961_);
lean_dec_ref_known(v_a_1960_, 1);
v_sz_1962_ = lean_array_size(v_val_1961_);
v___x_1963_ = ((size_t)0ULL);
v___x_1964_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_1962_, v___x_1963_, v_val_1961_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; lean_object* v___x_1966_; lean_object* v_a_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v_a_1970_; lean_object* v_a_1972_; lean_object* v_quotContext_x3f_2060_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1964_, 1);
v___x_1966_ = l_Lean_Elab_Command_getRef___redArg(v_a_1830_);
v_a_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_a_1967_);
lean_dec_ref(v___x_1966_);
v___x_1968_ = l_Lean_SourceInfo_fromRef(v_a_1967_, v___x_1839_);
lean_dec(v_a_1967_);
v___x_1969_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1830_);
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1970_);
lean_dec_ref(v___x_1969_);
v_quotContext_x3f_2060_ = lean_ctor_get(v_a_1830_, 5);
if (lean_obj_tag(v_quotContext_x3f_2060_) == 0)
{
lean_object* v___x_2061_; lean_object* v_a_2062_; 
v___x_2061_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_1831_);
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_a_2062_);
lean_dec_ref(v___x_2061_);
v_a_1972_ = v_a_2062_;
goto v___jp_1971_;
}
else
{
lean_object* v_val_2063_; 
v_val_2063_ = lean_ctor_get(v_quotContext_x3f_2060_, 0);
lean_inc(v_val_2063_);
v_a_1972_ = v_val_2063_;
goto v___jp_1971_;
}
v___jp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; size_t v_sz_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_1976_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
lean_inc_n(v___x_1968_, 31);
v___x_1977_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1968_);
lean_ctor_set(v___x_1977_, 1, v___x_1975_);
lean_ctor_set(v___x_1977_, 2, v___x_1976_);
lean_inc_ref_n(v___x_1977_, 17);
v___x_1978_ = l_Lean_Syntax_node7(v___x_1968_, v___x_1974_, v___x_1977_, v___x_1977_, v___x_1977_, v___x_1977_, v___x_1977_, v___x_1977_, v___x_1977_);
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_1981_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77));
v___x_1982_ = l_Lean_Syntax_node1(v___x_1968_, v___x_1981_, v___x_1977_);
v___x_1983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1968_);
lean_ctor_set(v___x_1983_, 1, v___x_1979_);
v___x_1984_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85));
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87));
v___x_1986_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_1987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1968_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1989_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_1990_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc(v_a_1970_);
lean_inc(v_a_1972_);
v___x_1991_ = l_Lean_addMacroScope(v_a_1972_, v___x_1990_, v_a_1970_);
v___x_1992_ = lean_box(0);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_1994_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1968_);
lean_ctor_set(v___x_1994_, 1, v___x_1989_);
lean_ctor_set(v___x_1994_, 2, v___x_1991_);
lean_ctor_set(v___x_1994_, 3, v___x_1993_);
v___x_1995_ = l_Lean_Syntax_node1(v___x_1968_, v___x_1975_, v___x_1843_);
v___x_1996_ = l_Lean_Syntax_node2(v___x_1968_, v___x_1988_, v___x_1994_, v___x_1995_);
v___x_1997_ = l_Lean_Syntax_node2(v___x_1968_, v___x_1985_, v___x_1987_, v___x_1996_);
v___x_1998_ = l_Lean_Syntax_node2(v___x_1968_, v___x_1984_, v___x_1977_, v___x_1997_);
v___x_1999_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__34));
v___x_2000_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_2001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___x_1968_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_1968_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
v___x_2005_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2006_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_1968_);
lean_ctor_set(v___x_2007_, 1, v___x_2005_);
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2009_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2010_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2011_ = l_Lean_addMacroScope(v_a_1972_, v___x_2010_, v_a_1970_);
v___x_2012_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2012_, 0, v___x_1968_);
lean_ctor_set(v___x_2012_, 1, v___x_2009_);
lean_ctor_set(v___x_2012_, 2, v___x_2011_);
lean_ctor_set(v___x_2012_, 3, v___x_1992_);
lean_inc_ref(v___x_2012_);
v___x_2013_ = l_Lean_Syntax_node1(v___x_1968_, v___x_1975_, v___x_2012_);
v___x_2014_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_1968_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2017_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_1968_);
lean_ctor_set(v___x_2018_, 1, v___x_2016_);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2020_ = l_Lean_Syntax_node2(v___x_1968_, v___x_2019_, v___x_1977_, v___x_2012_);
v___x_2021_ = l_Lean_Syntax_node1(v___x_1968_, v___x_1975_, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2023_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_1968_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v_sz_2025_ = lean_array_size(v_a_1965_);
v___x_2026_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2025_, v___x_1963_, v_a_1965_);
v___x_2027_ = l_Array_append___redArg(v___x_1976_, v___x_2026_);
lean_dec_ref(v___x_2026_);
v___x_2028_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2028_, 0, v___x_1968_);
lean_ctor_set(v___x_2028_, 1, v___x_1975_);
lean_ctor_set(v___x_2028_, 2, v___x_2027_);
v___x_2029_ = l_Lean_Syntax_node1(v___x_1968_, v___x_2024_, v___x_2028_);
v___x_2030_ = l_Lean_Syntax_node6(v___x_1968_, v___x_2017_, v___x_2018_, v___x_1977_, v___x_1977_, v___x_2021_, v___x_2023_, v___x_2029_);
v___x_2031_ = l_Lean_Syntax_node4(v___x_1968_, v___x_2008_, v___x_2013_, v___x_1977_, v___x_2015_, v___x_2030_);
v___x_2032_ = l_Lean_Syntax_node2(v___x_1968_, v___x_2006_, v___x_2007_, v___x_2031_);
v___x_2033_ = l_Lean_Syntax_node1(v___x_1968_, v___x_1975_, v___x_2032_);
v___x_2034_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_1968_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = l_Lean_Syntax_node3(v___x_1968_, v___x_2002_, v___x_2004_, v___x_2033_, v___x_2035_);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15));
v___x_2038_ = l_Lean_Syntax_node2(v___x_1968_, v___x_2037_, v___x_1977_, v___x_1977_);
v___x_2039_ = l_Lean_Syntax_node4(v___x_1968_, v___x_1999_, v___x_2001_, v___x_2036_, v___x_2038_, v___x_1977_);
v___x_2040_ = l_Lean_Syntax_node6(v___x_1968_, v___x_1980_, v___x_1982_, v___x_1983_, v___x_1977_, v___x_1977_, v___x_1998_, v___x_2039_);
v___x_2041_ = l_Lean_Syntax_node2(v___x_1968_, v___x_1973_, v___x_1978_, v___x_2040_);
v___x_2042_ = l_Lean_Elab_Command_elabCommand(v___x_2041_, v_a_1830_, v_a_1831_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2050_; 
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
lean_object* v_unused_2051_; 
v_unused_2051_ = lean_ctor_get(v___x_2042_, 0);
lean_dec(v_unused_2051_);
v___x_2044_ = v___x_2042_;
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
else
{
lean_dec(v___x_2042_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2046_; lean_object* v___x_2048_; 
v___x_2046_ = lean_box(v___x_1835_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v___x_2046_);
v___x_2048_ = v___x_2044_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
else
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_a_2052_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_2042_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2042_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
lean_dec(v___x_1843_);
v_a_2064_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_1964_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_1964_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
lean_dec(v_a_1960_);
lean_dec(v___x_1843_);
v___x_2072_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__33, &l_Lasm_JS_Meta_mkToJS___closed__33_once, _init_l_Lasm_JS_Meta_mkToJS___closed__33);
lean_inc(v_declName_1841_);
v___x_2073_ = l_Lean_MessageData_ofName(v_declName_1841_);
v___x_2074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2072_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2074_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v___x_2077_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2076_, v_a_1830_, v_a_1831_);
return v___x_2077_;
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec(v___x_1843_);
v_a_2078_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_1959_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_1959_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_1842_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_1842_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object* v_declNames_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lasm_JS_Meta_mkToJS(v_declNames_2094_, v_a_2095_, v_a_2096_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec_ref(v_declNames_2094_);
return v_res_2098_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0));
v___x_2101_ = l_String_toRawSubstring_x27(v___x_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t v_sz_2118_, size_t v_i_2119_, lean_object* v_bs_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
uint8_t v___x_2124_; 
v___x_2124_ = lean_usize_dec_lt(v_i_2119_, v_sz_2118_);
if (v___x_2124_ == 0)
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v_bs_2120_);
return v___x_2125_;
}
else
{
uint8_t v___x_2126_; lean_object* v_v_2127_; lean_object* v___x_2128_; lean_object* v_bs_x27_2129_; lean_object* v___x_2130_; 
v___x_2126_ = 0;
v_v_2127_ = lean_array_uget(v_bs_2120_, v_i_2119_);
v___x_2128_ = lean_unsigned_to_nat(0u);
v_bs_x27_2129_ = lean_array_uset(v_bs_2120_, v_i_2119_, v___x_2128_);
v___x_2130_ = l_Lean_Elab_Command_getRef___redArg(v___y_2121_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = l_Lean_SourceInfo_fromRef(v_a_2131_, v___x_2126_);
lean_dec(v_a_2131_);
v___x_2133_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2121_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v_a_2136_; lean_object* v_quotContext_x3f_2169_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
v_quotContext_x3f_2169_ = lean_ctor_get(v___y_2121_, 5);
if (lean_obj_tag(v_quotContext_x3f_2169_) == 0)
{
lean_object* v___x_2170_; 
v___x_2170_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2122_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
v_a_2136_ = v_a_2171_;
goto v___jp_2135_;
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec(v_a_2134_);
lean_dec(v___x_2132_);
lean_dec_ref(v_bs_x27_2129_);
lean_dec(v_v_2127_);
v_a_2172_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2170_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2170_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_val_2180_; 
v_val_2180_ = lean_ctor_get(v_quotContext_x3f_2169_, 0);
lean_inc(v_val_2180_);
v_a_2136_ = v_val_2180_;
goto v___jp_2135_;
}
v___jp_2135_:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; size_t v___x_2165_; size_t v___x_2166_; lean_object* v___x_2167_; 
v___x_2137_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_2138_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_2132_, 10);
v___x_2139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2132_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_2141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2142_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_2143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
lean_inc(v_a_2134_);
lean_inc(v_a_2136_);
v___x_2144_ = l_Lean_addMacroScope(v_a_2136_, v___x_2143_, v_a_2134_);
v___x_2145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_2146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2132_);
lean_ctor_set(v___x_2146_, 1, v___x_2142_);
lean_ctor_set(v___x_2146_, 2, v___x_2144_);
lean_ctor_set(v___x_2146_, 3, v___x_2145_);
v___x_2147_ = l_Lean_Name_getString_x21(v_v_2127_);
v___x_2148_ = lean_box(2);
v___x_2149_ = l_Lean_Syntax_mkStrLit(v___x_2147_, v___x_2148_);
v___x_2150_ = l_Lean_Syntax_node1(v___x_2132_, v___x_2140_, v___x_2149_);
v___x_2151_ = l_Lean_Syntax_node2(v___x_2132_, v___x_2141_, v___x_2146_, v___x_2150_);
v___x_2152_ = l_Lean_Syntax_node1(v___x_2132_, v___x_2140_, v___x_2151_);
v___x_2153_ = l_Lean_Syntax_node1(v___x_2132_, v___x_2140_, v___x_2152_);
v___x_2154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2155_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2132_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1);
v___x_2157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4));
v___x_2158_ = l_Lean_addMacroScope(v_a_2136_, v___x_2157_, v_a_2134_);
v___x_2159_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8));
v___x_2160_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2132_);
lean_ctor_set(v___x_2160_, 1, v___x_2156_);
lean_ctor_set(v___x_2160_, 2, v___x_2158_);
lean_ctor_set(v___x_2160_, 3, v___x_2159_);
v___x_2161_ = l_Lean_mkIdent(v_v_2127_);
v___x_2162_ = l_Lean_Syntax_node1(v___x_2132_, v___x_2140_, v___x_2161_);
v___x_2163_ = l_Lean_Syntax_node2(v___x_2132_, v___x_2141_, v___x_2160_, v___x_2162_);
v___x_2164_ = l_Lean_Syntax_node4(v___x_2132_, v___x_2137_, v___x_2139_, v___x_2153_, v___x_2155_, v___x_2163_);
v___x_2165_ = ((size_t)1ULL);
v___x_2166_ = lean_usize_add(v_i_2119_, v___x_2165_);
v___x_2167_ = lean_array_uset(v_bs_x27_2129_, v_i_2119_, v___x_2164_);
v_i_2119_ = v___x_2166_;
v_bs_2120_ = v___x_2167_;
goto _start;
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec(v___x_2132_);
lean_dec_ref(v_bs_x27_2129_);
lean_dec(v_v_2127_);
v_a_2181_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2133_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2133_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec_ref(v_bs_x27_2129_);
lean_dec(v_v_2127_);
v_a_2189_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2130_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2130_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object* v_sz_2197_, lean_object* v_i_2198_, lean_object* v_bs_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
size_t v_sz_boxed_2203_; size_t v_i_boxed_2204_; lean_object* v_res_2205_; 
v_sz_boxed_2203_ = lean_unbox_usize(v_sz_2197_);
lean_dec(v_sz_2197_);
v_i_boxed_2204_ = lean_unbox_usize(v_i_2198_);
lean_dec(v_i_2198_);
v_res_2205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_boxed_2203_, v_i_boxed_2204_, v_bs_2199_, v___y_2200_, v___y_2201_);
lean_dec(v___y_2201_);
lean_dec_ref(v___y_2200_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object* v_x_2206_, lean_object* v_body_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_box(1);
v___x_2216_ = l_Lean_PrettyPrinter_delab(v_body_2207_, v___x_2215_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object* v_x_2217_, lean_object* v_body_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(v_x_2217_, v_body_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec_ref(v_x_2217_);
return v_res_2226_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9));
v___x_2258_ = l_String_toRawSubstring_x27(v___x_2257_);
return v___x_2258_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15));
v___x_2272_ = l_String_toRawSubstring_x27(v___x_2271_);
return v___x_2272_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21(void){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20));
v___x_2279_ = lean_unsigned_to_nat(14u);
v___x_2280_ = lean_unsigned_to_nat(22u);
v___x_2281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19));
v___x_2282_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18));
v___x_2283_ = l_mkPanicMessageWithDecl(v___x_2282_, v___x_2281_, v___x_2280_, v___x_2279_, v___x_2278_);
return v___x_2283_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23(void){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22));
v___x_2286_ = l_Lean_stringToMessageData(v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object* v___x_2287_, lean_object* v___x_2288_, lean_object* v_declName_2289_, lean_object* v_as_2290_, size_t v_sz_2291_, size_t v_i_2292_, lean_object* v_b_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_a_2298_; uint8_t v___x_2302_; 
v___x_2302_ = lean_usize_dec_lt(v_i_2292_, v_sz_2291_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_b_2293_);
return v___x_2303_;
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2305_; 
v_a_2304_ = lean_array_uget_borrowed(v_as_2290_, v_i_2292_);
lean_inc(v_a_2304_);
lean_inc(v_declName_2289_);
lean_inc_ref(v___x_2288_);
v___x_2305_ = l_Lean_getProjFnForField_x3f(v___x_2288_, v_declName_2289_, v_a_2304_);
if (lean_obj_tag(v___x_2305_) == 1)
{
lean_object* v_val_2306_; lean_object* v___f_2307_; uint8_t v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2314_; lean_object* v_a_2315_; lean_object* v___y_2353_; lean_object* v___x_2402_; 
v_val_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_val_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___f_2307_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0));
v___x_2308_ = 0;
v___x_2309_ = lean_unsigned_to_nat(1u);
v___x_2310_ = lean_nat_dec_eq(v___x_2287_, v___x_2309_);
lean_inc_ref(v___x_2288_);
v___x_2402_ = l_Lean_Environment_find_x3f(v___x_2288_, v_val_2306_, v___x_2308_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21);
v___x_2404_ = l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(v___x_2403_);
v___y_2353_ = v___x_2404_;
goto v___jp_2352_;
}
else
{
lean_object* v_val_2405_; 
v_val_2405_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_val_2405_);
lean_dec_ref_known(v___x_2402_, 1);
v___y_2353_ = v_val_2405_;
goto v___jp_2352_;
}
v___jp_2311_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2316_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2317_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
lean_inc_n(v_a_2304_, 2);
v___x_2318_ = l_Lean_mkIdent(v_a_2304_);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_2320_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
lean_inc_n(v___y_2313_, 12);
v___x_2321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2321_, 0, v___y_2313_);
lean_ctor_set(v___x_2321_, 1, v___x_2319_);
lean_ctor_set(v___x_2321_, 2, v___x_2320_);
lean_inc_ref_n(v___x_2321_, 3);
v___x_2322_ = l_Lean_Syntax_node2(v___y_2313_, v___x_2317_, v___x_2318_, v___x_2321_);
v___x_2323_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2324_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_2325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___y_2313_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5));
v___x_2327_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6));
v___x_2328_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___y_2313_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8));
v___x_2330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2331_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10);
v___x_2332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12));
lean_inc(v___y_2312_);
lean_inc(v_a_2315_);
v___x_2333_ = l_Lean_addMacroScope(v_a_2315_, v___x_2332_, v___y_2312_);
v___x_2334_ = lean_box(0);
v___x_2335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2336_, 0, v___y_2313_);
lean_ctor_set(v___x_2336_, 1, v___x_2331_);
lean_ctor_set(v___x_2336_, 2, v___x_2333_);
lean_ctor_set(v___x_2336_, 3, v___x_2335_);
v___x_2337_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2339_ = l_Lean_addMacroScope(v_a_2315_, v___x_2338_, v___y_2312_);
v___x_2340_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2340_, 0, v___y_2313_);
lean_ctor_set(v___x_2340_, 1, v___x_2337_);
lean_ctor_set(v___x_2340_, 2, v___x_2339_);
lean_ctor_set(v___x_2340_, 3, v___x_2334_);
v___x_2341_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_2304_, v___x_2310_);
v___x_2342_ = lean_box(2);
v___x_2343_ = l_Lean_Syntax_mkStrLit(v___x_2341_, v___x_2342_);
v___x_2344_ = l_Lean_Syntax_node3(v___y_2313_, v___x_2319_, v___y_2314_, v___x_2340_, v___x_2343_);
v___x_2345_ = l_Lean_Syntax_node2(v___y_2313_, v___x_2330_, v___x_2336_, v___x_2344_);
v___x_2346_ = l_Lean_Syntax_node1(v___y_2313_, v___x_2329_, v___x_2345_);
v___x_2347_ = l_Lean_Syntax_node2(v___y_2313_, v___x_2326_, v___x_2328_, v___x_2346_);
v___x_2348_ = l_Lean_Syntax_node3(v___y_2313_, v___x_2323_, v___x_2325_, v___x_2321_, v___x_2347_);
v___x_2349_ = l_Lean_Syntax_node3(v___y_2313_, v___x_2319_, v___x_2321_, v___x_2321_, v___x_2348_);
v___x_2350_ = l_Lean_Syntax_node2(v___y_2313_, v___x_2316_, v___x_2322_, v___x_2349_);
v___x_2351_ = lean_array_push(v_b_2293_, v___x_2350_);
v_a_2298_ = v___x_2351_;
goto v___jp_2297_;
}
v___jp_2352_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2354_ = l_Lean_ConstantInfo_type(v___y_2353_);
lean_dec_ref(v___y_2353_);
v___x_2355_ = lean_box(v___x_2308_);
v___x_2356_ = lean_box(v___x_2308_);
v___x_2357_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed), 12, 5);
lean_closure_set(v___x_2357_, 0, lean_box(0));
lean_closure_set(v___x_2357_, 1, v___x_2354_);
lean_closure_set(v___x_2357_, 2, v___f_2307_);
lean_closure_set(v___x_2357_, 3, v___x_2355_);
lean_closure_set(v___x_2357_, 4, v___x_2356_);
v___x_2358_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2357_, v___y_2294_, v___y_2295_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v_a_2359_; lean_object* v___x_2360_; 
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
lean_inc(v_a_2359_);
lean_dec_ref_known(v___x_2358_, 1);
v___x_2360_ = l_Lean_Elab_Command_getRef___redArg(v___y_2294_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref_known(v___x_2360_, 1);
v___x_2362_ = l_Lean_SourceInfo_fromRef(v_a_2361_, v___x_2308_);
lean_dec(v_a_2361_);
v___x_2363_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2294_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_quotContext_x3f_2364_; 
v_quotContext_x3f_2364_ = lean_ctor_get(v___y_2294_, 5);
if (lean_obj_tag(v_quotContext_x3f_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2366_; 
v_a_2365_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2363_, 1);
v___x_2366_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2295_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_a_2367_);
lean_dec_ref_known(v___x_2366_, 1);
v___y_2312_ = v_a_2365_;
v___y_2313_ = v___x_2362_;
v___y_2314_ = v_a_2359_;
v_a_2315_ = v_a_2367_;
goto v___jp_2311_;
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2365_);
lean_dec(v___x_2362_);
lean_dec(v_a_2359_);
lean_dec_ref(v_b_2293_);
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v_a_2368_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2366_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2366_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v_val_2377_; 
v_a_2376_ = lean_ctor_get(v___x_2363_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2363_, 1);
v_val_2377_ = lean_ctor_get(v_quotContext_x3f_2364_, 0);
lean_inc(v_val_2377_);
v___y_2312_ = v_a_2376_;
v___y_2313_ = v___x_2362_;
v___y_2314_ = v_a_2359_;
v_a_2315_ = v_val_2377_;
goto v___jp_2311_;
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v___x_2362_);
lean_dec(v_a_2359_);
lean_dec_ref(v_b_2293_);
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v_a_2378_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2363_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2363_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2359_);
lean_dec_ref(v_b_2293_);
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v_a_2386_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2360_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2360_);
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
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
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
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_dec_ref(v_b_2293_);
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v_a_2394_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2358_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2358_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
else
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec(v___x_2305_);
v___x_2406_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23);
lean_inc(v_a_2304_);
v___x_2407_ = l_Lean_MessageData_ofName(v_a_2304_);
v___x_2408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2406_);
lean_ctor_set(v___x_2408_, 1, v___x_2407_);
v___x_2409_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2408_, v___y_2294_, v___y_2295_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_dec_ref_known(v___x_2409_, 1);
v_a_2298_ = v_b_2293_;
goto v___jp_2297_;
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_dec_ref(v_b_2293_);
lean_dec(v_declName_2289_);
lean_dec_ref(v___x_2288_);
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2409_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2409_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
}
v___jp_2297_:
{
size_t v___x_2299_; size_t v___x_2300_; 
v___x_2299_ = ((size_t)1ULL);
v___x_2300_ = lean_usize_add(v_i_2292_, v___x_2299_);
v_i_2292_ = v___x_2300_;
v_b_2293_ = v_a_2298_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object* v___x_2418_, lean_object* v___x_2419_, lean_object* v_declName_2420_, lean_object* v_as_2421_, lean_object* v_sz_2422_, lean_object* v_i_2423_, lean_object* v_b_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
size_t v_sz_boxed_2428_; size_t v_i_boxed_2429_; lean_object* v_res_2430_; 
v_sz_boxed_2428_ = lean_unbox_usize(v_sz_2422_);
lean_dec(v_sz_2422_);
v_i_boxed_2429_ = lean_unbox_usize(v_i_2423_);
lean_dec(v_i_2423_);
v_res_2430_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2418_, v___x_2419_, v_declName_2420_, v_as_2421_, v_sz_boxed_2428_, v_i_boxed_2429_, v_b_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec_ref(v_as_2421_);
lean_dec(v___x_2418_);
return v_res_2430_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__1(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__0));
v___x_2433_ = l_String_toRawSubstring_x27(v___x_2432_);
return v___x_2433_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__13(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__12));
v___x_2464_ = l_String_toRawSubstring_x27(v___x_2463_);
return v___x_2464_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__27(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_2504_ = l_String_toRawSubstring_x27(v___x_2503_);
return v___x_2504_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__33(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__32));
v___x_2516_ = l_String_toRawSubstring_x27(v___x_2515_);
return v___x_2516_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__42(void){
_start:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__41));
v___x_2535_ = l_Lean_stringToMessageData(v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object* v_declNames_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2540_ = lean_array_get_size(v_declNames_2536_);
v___x_2541_ = lean_unsigned_to_nat(1u);
v___x_2542_ = lean_nat_dec_eq(v___x_2540_, v___x_2541_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_box(v___x_2542_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
else
{
lean_object* v___x_2545_; uint8_t v___x_2546_; lean_object* v___x_2547_; lean_object* v_declName_2548_; lean_object* v___x_2549_; 
v___x_2545_ = lean_box(0);
v___x_2546_ = 0;
v___x_2547_ = lean_unsigned_to_nat(0u);
v_declName_2548_ = lean_array_get_borrowed(v___x_2545_, v_declNames_2536_, v___x_2547_);
lean_inc(v_declName_2548_);
v___x_2549_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2548_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v_a_2555_; 
lean_dec_ref_known(v___x_2549_, 1);
lean_inc_n(v_declName_2548_, 3);
v___x_2550_ = l_Lean_mkIdent(v_declName_2548_);
v___x_2551_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2548_, v___x_2542_);
v___x_2552_ = lean_box(2);
v___x_2553_ = l_Lean_Syntax_mkStrLit(v___x_2551_, v___x_2552_);
v___x_2554_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2548_, v_a_2538_);
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref(v___x_2554_);
if (lean_obj_tag(v_a_2555_) == 1)
{
lean_object* v_val_2556_; lean_object* v___x_2557_; lean_object* v_env_2558_; lean_object* v___x_2559_; size_t v_sz_2560_; size_t v___x_2561_; lean_object* v___x_2562_; 
v_val_2556_ = lean_ctor_get(v_a_2555_, 0);
lean_inc(v_val_2556_);
lean_dec_ref_known(v_a_2555_, 1);
v___x_2557_ = lean_st_ref_get(v_a_2538_);
v_env_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc_ref(v_env_2558_);
lean_dec(v___x_2557_);
v___x_2559_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__29));
v_sz_2560_ = lean_array_size(v_val_2556_);
v___x_2561_ = ((size_t)0ULL);
lean_inc(v_declName_2548_);
v___x_2562_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2540_, v_env_2558_, v_declName_2548_, v_val_2556_, v_sz_2560_, v___x_2561_, v___x_2559_, v_a_2537_, v_a_2538_);
lean_dec(v_val_2556_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v_a_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v_a_2571_; lean_object* v_a_2573_; lean_object* v_quotContext_x3f_2677_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v___x_2562_, 1);
v___x_2564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2565_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2566_ = l_Lean_Syntax_SepArray_ofElems(v___x_2565_, v_a_2563_);
lean_dec(v_a_2563_);
v___x_2567_ = l_Lean_Elab_Command_getRef___redArg(v_a_2537_);
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___x_2567_);
v___x_2569_ = l_Lean_SourceInfo_fromRef(v_a_2568_, v___x_2546_);
lean_dec(v_a_2568_);
v___x_2570_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2537_);
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref(v___x_2570_);
v_quotContext_x3f_2677_ = lean_ctor_get(v_a_2537_, 5);
if (lean_obj_tag(v_quotContext_x3f_2677_) == 0)
{
lean_object* v___x_2678_; lean_object* v_a_2679_; 
v___x_2678_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2538_);
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref(v___x_2678_);
v_a_2573_ = v_a_2679_;
goto v___jp_2572_;
}
else
{
lean_object* v_val_2680_; 
v_val_2680_ = lean_ctor_get(v_quotContext_x3f_2677_, 0);
lean_inc(v_val_2680_);
v_a_2573_ = v_val_2680_;
goto v___jp_2572_;
}
v___jp_2572_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2574_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2575_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2576_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_2577_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
lean_inc_n(v___x_2569_, 42);
v___x_2578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2569_);
lean_ctor_set(v___x_2578_, 1, v___x_2576_);
lean_ctor_set(v___x_2578_, 2, v___x_2577_);
lean_inc_ref_n(v___x_2578_, 23);
v___x_2579_ = l_Lean_Syntax_node7(v___x_2569_, v___x_2575_, v___x_2578_, v___x_2578_, v___x_2578_, v___x_2578_, v___x_2578_, v___x_2578_, v___x_2578_);
v___x_2580_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2581_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77));
v___x_2583_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2582_, v___x_2578_);
v___x_2584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2569_);
lean_ctor_set(v___x_2584_, 1, v___x_2580_);
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85));
v___x_2586_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87));
v___x_2587_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_2588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2569_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2590_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2591_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2571_, 3);
lean_inc_n(v_a_2573_, 3);
v___x_2592_ = l_Lean_addMacroScope(v_a_2573_, v___x_2591_, v_a_2571_);
v___x_2593_ = lean_box(0);
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2595_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2569_);
lean_ctor_set(v___x_2595_, 1, v___x_2590_);
lean_ctor_set(v___x_2595_, 2, v___x_2592_);
lean_ctor_set(v___x_2595_, 3, v___x_2594_);
v___x_2596_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2576_, v___x_2550_);
v___x_2597_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2589_, v___x_2595_, v___x_2596_);
v___x_2598_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2586_, v___x_2588_, v___x_2597_);
v___x_2599_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2585_, v___x_2578_, v___x_2598_);
v___x_2600_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2601_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2602_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2569_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2605_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2606_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2607_ = l_Lean_addMacroScope(v_a_2573_, v___x_2606_, v_a_2571_);
v___x_2608_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2569_);
lean_ctor_set(v___x_2608_, 1, v___x_2605_);
lean_ctor_set(v___x_2608_, 2, v___x_2607_);
lean_ctor_set(v___x_2608_, 3, v___x_2593_);
v___x_2609_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2604_, v___x_2608_, v___x_2578_);
v___x_2610_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2611_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2612_ = l_Lean_addMacroScope(v_a_2573_, v___x_2611_, v_a_2571_);
v___x_2613_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2569_);
lean_ctor_set(v___x_2613_, 1, v___x_2610_);
lean_ctor_set(v___x_2613_, 2, v___x_2612_);
lean_ctor_set(v___x_2613_, 3, v___x_2593_);
v___x_2614_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2576_, v___x_2613_);
v___x_2615_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2616_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_2617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2569_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__15));
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__16));
v___x_2620_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2569_);
lean_ctor_set(v___x_2620_, 1, v___x_2618_);
v___x_2621_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__18));
v___x_2622_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__20));
v___x_2623_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__22));
v___x_2624_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__23));
v___x_2625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2569_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__24));
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__48));
v___x_2628_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2569_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = l_Array_append___redArg(v___x_2577_, v___x_2566_);
lean_dec_ref(v___x_2566_);
v___x_2630_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2569_);
lean_ctor_set(v___x_2630_, 1, v___x_2576_);
lean_ctor_set(v___x_2630_, 2, v___x_2629_);
v___x_2631_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2603_, v___x_2630_);
v___x_2632_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__25));
v___x_2633_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2632_, v___x_2578_);
v___x_2634_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_2635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2569_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = l_Lean_Syntax_node6(v___x_2569_, v___x_2626_, v___x_2628_, v___x_2578_, v___x_2631_, v___x_2633_, v___x_2578_, v___x_2635_);
v___x_2637_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2576_, v___x_2636_);
v___x_2638_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2623_, v___x_2625_, v___x_2637_);
v___x_2639_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2622_, v___x_2638_, v___x_2578_);
v___x_2640_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2576_, v___x_2639_);
v___x_2641_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2621_, v___x_2640_);
v___x_2642_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2619_, v___x_2620_, v___x_2641_);
lean_inc_ref(v___x_2617_);
v___x_2643_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2615_, v___x_2617_, v___x_2578_, v___x_2642_);
v___x_2644_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2576_, v___x_2614_, v___x_2578_, v___x_2643_);
v___x_2645_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2564_, v___x_2609_, v___x_2644_);
v___x_2646_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2648_ = l_Lean_addMacroScope(v_a_2573_, v___x_2647_, v_a_2571_);
v___x_2649_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2569_);
lean_ctor_set(v___x_2649_, 1, v___x_2646_);
lean_ctor_set(v___x_2649_, 2, v___x_2648_);
lean_ctor_set(v___x_2649_, 3, v___x_2593_);
v___x_2650_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2604_, v___x_2649_, v___x_2578_);
v___x_2651_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2615_, v___x_2617_, v___x_2578_, v___x_2553_);
v___x_2652_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2576_, v___x_2578_, v___x_2578_, v___x_2651_);
v___x_2653_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2564_, v___x_2650_, v___x_2652_);
v___x_2654_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2576_, v___x_2645_, v___x_2578_, v___x_2653_);
v___x_2655_ = l_Lean_Syntax_node1(v___x_2569_, v___x_2603_, v___x_2654_);
v___x_2656_ = l_Lean_Syntax_node3(v___x_2569_, v___x_2600_, v___x_2602_, v___x_2655_, v___x_2578_);
v___x_2657_ = l_Lean_Syntax_node6(v___x_2569_, v___x_2581_, v___x_2583_, v___x_2584_, v___x_2578_, v___x_2578_, v___x_2599_, v___x_2656_);
v___x_2658_ = l_Lean_Syntax_node2(v___x_2569_, v___x_2574_, v___x_2579_, v___x_2657_);
v___x_2659_ = l_Lean_Elab_Command_elabCommand(v___x_2658_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2667_; 
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2667_ == 0)
{
lean_object* v_unused_2668_; 
v_unused_2668_ = lean_ctor_get(v___x_2659_, 0);
lean_dec(v_unused_2668_);
v___x_2661_ = v___x_2659_;
v_isShared_2662_ = v_isSharedCheck_2667_;
goto v_resetjp_2660_;
}
else
{
lean_dec(v___x_2659_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2667_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2663_; lean_object* v___x_2665_; 
v___x_2663_ = lean_box(v___x_2542_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 0, v___x_2663_);
v___x_2665_ = v___x_2661_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
v_a_2669_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2659_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2659_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec(v___x_2553_);
lean_dec(v___x_2550_);
v_a_2681_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2562_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2562_);
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
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
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
else
{
lean_object* v___x_2689_; 
lean_dec(v_a_2555_);
lean_inc(v_declName_2548_);
v___x_2689_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2548_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2690_);
lean_dec_ref_known(v___x_2689_, 1);
if (lean_obj_tag(v_a_2690_) == 1)
{
lean_object* v_val_2691_; size_t v_sz_2692_; size_t v___x_2693_; lean_object* v___x_2694_; 
v_val_2691_ = lean_ctor_get(v_a_2690_, 0);
lean_inc(v_val_2691_);
lean_dec_ref_known(v_a_2690_, 1);
v_sz_2692_ = lean_array_size(v_val_2691_);
v___x_2693_ = ((size_t)0ULL);
v___x_2694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_2692_, v___x_2693_, v_val_2691_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; lean_object* v_a_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v_a_2700_; lean_object* v_a_2702_; lean_object* v_quotContext_x3f_2821_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2696_ = l_Lean_Elab_Command_getRef___redArg(v_a_2537_);
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref(v___x_2696_);
v___x_2698_ = l_Lean_SourceInfo_fromRef(v_a_2697_, v___x_2546_);
lean_dec(v_a_2697_);
v___x_2699_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2537_);
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref(v___x_2699_);
v_quotContext_x3f_2821_ = lean_ctor_get(v_a_2537_, 5);
if (lean_obj_tag(v_quotContext_x3f_2821_) == 0)
{
lean_object* v___x_2822_; lean_object* v_a_2823_; 
v___x_2822_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2538_);
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_a_2823_);
lean_dec_ref(v___x_2822_);
v_a_2702_ = v_a_2823_;
goto v___jp_2701_;
}
else
{
lean_object* v_val_2824_; 
v_val_2824_ = lean_ctor_get(v_quotContext_x3f_2821_, 0);
lean_inc(v_val_2824_);
v_a_2702_ = v_val_2824_;
goto v___jp_2701_;
}
v___jp_2701_:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; size_t v_sz_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2703_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2705_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_2706_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__69);
lean_inc_n(v___x_2698_, 47);
v___x_2707_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2698_);
lean_ctor_set(v___x_2707_, 1, v___x_2705_);
lean_ctor_set(v___x_2707_, 2, v___x_2706_);
lean_inc_ref_n(v___x_2707_, 22);
v___x_2708_ = l_Lean_Syntax_node7(v___x_2698_, v___x_2704_, v___x_2707_, v___x_2707_, v___x_2707_, v___x_2707_, v___x_2707_, v___x_2707_, v___x_2707_);
v___x_2709_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2711_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__77));
v___x_2712_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2711_, v___x_2707_);
v___x_2713_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2698_);
lean_ctor_set(v___x_2713_, 1, v___x_2709_);
v___x_2714_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__85));
v___x_2715_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__87));
v___x_2716_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_2717_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2698_);
lean_ctor_set(v___x_2717_, 1, v___x_2716_);
v___x_2718_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2719_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2720_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2700_, 4);
lean_inc_n(v_a_2702_, 4);
v___x_2721_ = l_Lean_addMacroScope(v_a_2702_, v___x_2720_, v_a_2700_);
v___x_2722_ = lean_box(0);
v___x_2723_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2724_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2698_);
lean_ctor_set(v___x_2724_, 1, v___x_2719_);
lean_ctor_set(v___x_2724_, 2, v___x_2721_);
lean_ctor_set(v___x_2724_, 3, v___x_2723_);
v___x_2725_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2550_);
v___x_2726_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2718_, v___x_2724_, v___x_2725_);
v___x_2727_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2715_, v___x_2717_, v___x_2726_);
v___x_2728_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2714_, v___x_2707_, v___x_2727_);
v___x_2729_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2730_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2731_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2698_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
v___x_2732_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2733_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2735_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2736_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2737_ = l_Lean_addMacroScope(v_a_2702_, v___x_2736_, v_a_2700_);
v___x_2738_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2698_);
lean_ctor_set(v___x_2738_, 1, v___x_2735_);
lean_ctor_set(v___x_2738_, 2, v___x_2737_);
lean_ctor_set(v___x_2738_, 3, v___x_2722_);
v___x_2739_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2734_, v___x_2738_, v___x_2707_);
v___x_2740_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2742_ = l_Lean_addMacroScope(v_a_2702_, v___x_2741_, v_a_2700_);
v___x_2743_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2698_);
lean_ctor_set(v___x_2743_, 1, v___x_2740_);
lean_ctor_set(v___x_2743_, 2, v___x_2742_);
lean_ctor_set(v___x_2743_, 3, v___x_2722_);
lean_inc_ref(v___x_2743_);
v___x_2744_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2743_);
v___x_2745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2746_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__35));
v___x_2747_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2698_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2749_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2698_);
lean_ctor_set(v___x_2750_, 1, v___x_2748_);
v___x_2751_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2752_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2751_, v___x_2707_, v___x_2743_);
v___x_2753_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2752_);
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2755_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2698_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_2757_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v_sz_2758_ = lean_array_size(v_a_2695_);
v___x_2759_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2758_, v___x_2693_, v_a_2695_);
v___x_2760_ = l_Array_append___redArg(v___x_2706_, v___x_2759_);
lean_dec_ref(v___x_2759_);
v___x_2761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
v___x_2762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2698_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__30));
v___x_2764_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__31));
v___x_2765_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2698_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2763_, v___x_2765_);
v___x_2767_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2766_);
v___x_2768_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2767_);
v___x_2769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2770_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2698_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__33, &l_Lasm_JS_Meta_mkFromJS___closed__33_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__33);
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__35));
v___x_2773_ = l_Lean_addMacroScope(v_a_2702_, v___x_2772_, v_a_2700_);
v___x_2774_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__39));
v___x_2775_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2698_);
lean_ctor_set(v___x_2775_, 1, v___x_2771_);
lean_ctor_set(v___x_2775_, 2, v___x_2773_);
lean_ctor_set(v___x_2775_, 3, v___x_2774_);
v___x_2776_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__7));
v___x_2777_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__40));
v___x_2778_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2698_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
v___x_2779_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2776_, v___x_2778_);
v___x_2780_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2705_, v___x_2779_);
v___x_2781_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2718_, v___x_2775_, v___x_2780_);
v___x_2782_ = l_Lean_Syntax_node4(v___x_2698_, v___x_2757_, v___x_2762_, v___x_2768_, v___x_2770_, v___x_2781_);
v___x_2783_ = lean_array_push(v___x_2760_, v___x_2782_);
v___x_2784_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2698_);
lean_ctor_set(v___x_2784_, 1, v___x_2705_);
lean_ctor_set(v___x_2784_, 2, v___x_2783_);
v___x_2785_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2756_, v___x_2784_);
v___x_2786_ = l_Lean_Syntax_node6(v___x_2698_, v___x_2749_, v___x_2750_, v___x_2707_, v___x_2707_, v___x_2753_, v___x_2755_, v___x_2785_);
lean_inc_ref(v___x_2747_);
v___x_2787_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2745_, v___x_2747_, v___x_2707_, v___x_2786_);
v___x_2788_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2705_, v___x_2744_, v___x_2707_, v___x_2787_);
v___x_2789_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2733_, v___x_2739_, v___x_2788_);
v___x_2790_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2791_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2792_ = l_Lean_addMacroScope(v_a_2702_, v___x_2791_, v_a_2700_);
v___x_2793_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2698_);
lean_ctor_set(v___x_2793_, 1, v___x_2790_);
lean_ctor_set(v___x_2793_, 2, v___x_2792_);
lean_ctor_set(v___x_2793_, 3, v___x_2722_);
v___x_2794_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2734_, v___x_2793_, v___x_2707_);
v___x_2795_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2745_, v___x_2747_, v___x_2707_, v___x_2553_);
v___x_2796_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2705_, v___x_2707_, v___x_2707_, v___x_2795_);
v___x_2797_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2733_, v___x_2794_, v___x_2796_);
v___x_2798_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2705_, v___x_2789_, v___x_2707_, v___x_2797_);
v___x_2799_ = l_Lean_Syntax_node1(v___x_2698_, v___x_2732_, v___x_2798_);
v___x_2800_ = l_Lean_Syntax_node3(v___x_2698_, v___x_2729_, v___x_2731_, v___x_2799_, v___x_2707_);
v___x_2801_ = l_Lean_Syntax_node6(v___x_2698_, v___x_2710_, v___x_2712_, v___x_2713_, v___x_2707_, v___x_2707_, v___x_2728_, v___x_2800_);
v___x_2802_ = l_Lean_Syntax_node2(v___x_2698_, v___x_2703_, v___x_2708_, v___x_2801_);
v___x_2803_ = l_Lean_Elab_Command_elabCommand(v___x_2802_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2811_; 
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2811_ == 0)
{
lean_object* v_unused_2812_; 
v_unused_2812_ = lean_ctor_get(v___x_2803_, 0);
lean_dec(v_unused_2812_);
v___x_2805_ = v___x_2803_;
v_isShared_2806_ = v_isSharedCheck_2811_;
goto v_resetjp_2804_;
}
else
{
lean_dec(v___x_2803_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2811_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_box(v___x_2542_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2807_);
v___x_2809_ = v___x_2805_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
v_a_2813_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2803_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2803_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v___x_2553_);
lean_dec(v___x_2550_);
v_a_2825_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2694_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2694_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_dec(v_a_2690_);
lean_dec(v___x_2553_);
lean_dec(v___x_2550_);
v___x_2833_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__42, &l_Lasm_JS_Meta_mkFromJS___closed__42_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__42);
lean_inc(v_declName_2548_);
v___x_2834_ = l_Lean_MessageData_ofName(v_declName_2548_);
v___x_2835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2837_, v_a_2537_, v_a_2538_);
return v___x_2838_;
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
lean_dec(v___x_2553_);
lean_dec(v___x_2550_);
v_a_2839_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2689_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2689_);
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
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
v_a_2847_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v___x_2549_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_dec(v___x_2549_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object* v_declNames_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l_Lasm_JS_Meta_mkFromJS(v_declNames_2855_, v_a_2856_, v_a_2857_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
lean_dec_ref(v_declNames_2855_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2863_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
v___x_2864_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2865_ = l_Lean_Elab_registerDerivingHandler(v___x_2863_, v___x_2864_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec_ref_known(v___x_2865_, 1);
v___x_2866_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
v___x_2867_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2868_ = l_Lean_Elab_registerDerivingHandler(v___x_2866_, v___x_2867_);
return v___x_2868_;
}
else
{
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object* v_a_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
return v_res_2870_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Meta(uint8_t builtin) {
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
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lasm_JS_Meta_bindingExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lasm_JS_Meta_bindingExtension);
lean_dec_ref(res);
res = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
