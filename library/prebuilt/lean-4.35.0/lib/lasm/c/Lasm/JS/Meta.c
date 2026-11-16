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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
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
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_getMkMatcherInputInContext_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
lean_object* l_Lean_Name_components(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Term_processDefDeriving_spec__3_spec__9___redArg();
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
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
static const lean_string_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "termLasm_js_project%_"};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__0 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 53, 45, 115, 199, 137, 8, 56)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__2 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "lasm_js_project% "};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__4 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__4_value)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__5 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__6 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7_value)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__5_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__9 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__9_value)}};
static const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__10 = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__10_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_termLasm__js__project_x25__ = (const lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__10_value;
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lasmJsRecord"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 116, 189, 233, 227, 134, 71, 145)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lasm_js_record "};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__4_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__6_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__7_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " new"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__7_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__9_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__5_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__10_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__11_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__12_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_lasmJsRecord = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 41, 135, 212, 101, 60, 221, 136)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 251, 239, 220, 186, 252, 14, 14)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 237, 37, 2, 189, 252, 228, 197)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(62, 253, 4, 187, 117, 87, 87, 107)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 254, 224, 114, 40, 98, 17, 243)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 81, 242, 57, 82, 213, 155, 129)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 218, 160, 241, 110, 65, 135, 139)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 33, 204, 79, 171, 104, 67, 89)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 154, 86, 187, 183, 177, 156, 52)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(9, 176, 41, 190, 155, 207, 178, 138)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(2, 197, 108, 141, 228, 80, 230, 67)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 146, 137, 187, 186, 170, 0, 192)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1246458272) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(81, 166, 115, 223, 90, 40, 141, 240)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(50, 234, 230, 132, 143, 181, 65, 1)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 88, 151, 245, 244, 94, 99, 39)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(239, 197, 125, 58, 213, 221, 187, 6)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed, .m_arity = 13, .m_num_fixed = 7, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 80, 239, 79, 71, 173, 245, 131)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "Records a Lasm.JS binding for the build-time binding check (added by `@[js]`)."};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "jsAttr"};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 30, 152, 230, 255, 91, 62, 117)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_jsAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "js "};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value),((lean_object*)&l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__5_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__6_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_jsAttr = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__3 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__5 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(251, 206, 108, 50, 170, 163, 91, 135)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Bindable.arity"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__12 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__15 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__15_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__16 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lasm_js_record"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "new"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__24 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__24_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__25 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__25_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "noinline"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(7, 180, 58, 213, 246, 72, 64, 0)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__31 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__31_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33_value;
static const lean_array_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__35 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__35_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__38 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__38_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Bindable.bind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Bindable"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(13, 173, 251, 55, 140, 124, 51, 22)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(1, 117, 5, 82, 228, 105, 80, 180)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__67 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__67_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__6_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__72 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__72_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__72_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74;
static const lean_array_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lasm_js_project%"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "new "};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_value;
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__25_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__27 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__8_value),LEAN_SCALAR_PTR_LITERAL(164, 171, 248, 18, 201, 160, 43, 108)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fromJS"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__12_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__13;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__12_value),LEAN_SCALAR_PTR_LITERAL(50, 45, 246, 1, 0, 145, 229, 27)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__14_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__26_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__27;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__26_value),LEAN_SCALAR_PTR_LITERAL(15, 81, 255, 12, 18, 105, 22, 251)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg(lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v_env_482_; lean_object* v___x_483_; lean_object* v_mainModule_484_; lean_object* v___x_485_; 
v___x_481_ = lean_st_ref_get(v___y_479_);
v_env_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc_ref(v_env_482_);
lean_dec(v___x_481_);
v___x_483_ = l_Lean_Environment_header(v_env_482_);
lean_dec_ref(v_env_482_);
v_mainModule_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_mainModule_484_);
lean_dec_ref(v___x_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_mainModule_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg___boxed(lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg(v___y_486_);
lean_dec(v___y_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0(lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg(v___y_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___boxed(lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0(v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg(lean_object* v_stx_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_513_ = ((lean_object*)(l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__1));
lean_inc(v_stx_505_);
v___x_514_ = l_Lean_Syntax_isOfKind(v_stx_505_, v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; 
lean_dec(v_stx_505_);
v___x_515_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Term_processDefDeriving_spec__3_spec__9___redArg();
return v___x_515_;
}
else
{
lean_object* v___x_516_; lean_object* v_s_517_; lean_object* v___x_518_; lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_529_; 
v___x_516_ = lean_unsigned_to_nat(1u);
v_s_517_ = l_Lean_Syntax_getArg(v_stx_505_, v___x_516_);
lean_dec(v_stx_505_);
v___x_518_ = l_Lean_getMainModule___at___00Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1_spec__0___redArg(v_a_511_);
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_529_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_523_ = l_Lean_TSyntax_getString(v_s_517_);
lean_dec(v_s_517_);
v___x_524_ = l_Lasm_JS_Meta_projectSpecifier(v_a_519_, v___x_523_);
lean_dec_ref(v___x_523_);
v___x_525_ = l_Lean_mkStrLit(v___x_524_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_525_);
v___x_527_ = v___x_521_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg___boxed(lean_object* v_stx_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg(v_stx_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1(lean_object* v_stx_539_, lean_object* v_x_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___redArg(v_stx_539_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1___boxed(lean_object* v_stx_549_, lean_object* v_x_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lasm__JS__Meta__termLasm__js__project_x25____1(v_stx_549_, v_x_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_x_550_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg(lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; lean_object* v_env_598_; lean_object* v___x_599_; lean_object* v_mainModule_600_; lean_object* v___x_601_; 
v___x_597_ = lean_st_ref_get(v___y_595_);
v_env_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_598_);
lean_dec(v___x_597_);
v___x_599_ = l_Lean_Environment_header(v_env_598_);
lean_dec_ref(v_env_598_);
v_mainModule_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_mainModule_600_);
lean_dec_ref(v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_mainModule_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg(v___y_602_);
lean_dec(v___y_602_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0(lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg(v___y_606_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___boxed(lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0(v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
return v_res_612_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_613_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = lean_unsigned_to_nat(32u);
v___x_621_ = lean_mk_empty_array_with_capacity(v___x_620_);
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_624_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
lean_ctor_set(v___x_624_, 2, v___x_623_);
lean_ctor_set(v___x_624_, 3, v___x_623_);
lean_ctor_set(v___x_624_, 4, v___x_623_);
lean_ctor_set(v___x_624_, 5, v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
lean_ctor_set(v___x_626_, 2, v___x_625_);
lean_ctor_set(v___x_626_, 3, v___x_625_);
lean_ctor_set(v___x_626_, 4, v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v___x_631_, lean_object* v___x_632_, lean_object* v___x_633_, lean_object* v_decl_634_, lean_object* v_stx_635_, uint8_t v_x_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; uint8_t v___y_676_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; uint8_t v___y_683_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = l_Lean_Name_mkStr4(v___x_627_, v___x_628_, v___x_629_, v___x_630_);
lean_inc(v_stx_635_);
v___x_687_ = l_Lean_Syntax_isOfKind(v_stx_635_, v___x_686_);
lean_dec(v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; 
lean_dec(v_stx_635_);
lean_dec(v_decl_634_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v___x_688_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_688_;
}
else
{
lean_object* v___x_689_; lean_object* v_m_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_689_ = lean_unsigned_to_nat(1u);
v_m_690_ = l_Lean_Syntax_getArg(v_stx_635_, v___x_689_);
v___x_691_ = ((lean_object*)(l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7));
lean_inc(v_m_690_);
v___x_692_ = l_Lean_Syntax_isOfKind(v_m_690_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; 
lean_dec(v_m_690_);
lean_dec(v_stx_635_);
lean_dec(v_decl_634_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v___x_693_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_693_;
}
else
{
lean_object* v_p_694_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v_a_699_; uint8_t v___x_710_; lean_object* v_c_712_; lean_object* v___y_713_; lean_object* v___y_714_; 
v_p_694_ = l_Lean_Syntax_getArg(v_stx_635_, v___x_631_);
lean_inc(v_p_694_);
v___x_710_ = l_Lean_Syntax_isOfKind(v_p_694_, v___x_691_);
if (v___x_710_ == 0)
{
lean_object* v___x_761_; 
lean_dec(v_p_694_);
lean_dec(v_m_690_);
lean_dec(v_stx_635_);
lean_dec(v_decl_634_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v___x_761_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_761_;
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_762_ = lean_unsigned_to_nat(3u);
v___x_763_ = l_Lean_Syntax_getArg(v_stx_635_, v___x_762_);
lean_dec(v_stx_635_);
v___x_764_ = l_Lean_Syntax_isNone(v___x_763_);
if (v___x_764_ == 0)
{
uint8_t v___x_765_; 
lean_inc(v___x_763_);
v___x_765_ = l_Lean_Syntax_matchesNull(v___x_763_, v___x_689_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
lean_dec(v___x_763_);
lean_dec(v_p_694_);
lean_dec(v_m_690_);
lean_dec(v_decl_634_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v___x_766_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_766_;
}
else
{
lean_object* v_c_767_; lean_object* v___x_768_; 
v_c_767_ = l_Lean_Syntax_getArg(v___x_763_, v___x_633_);
lean_dec(v___x_763_);
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v_c_767_);
v_c_712_ = v___x_768_;
v___y_713_ = v___y_637_;
v___y_714_ = v___y_638_;
goto v___jp_711_;
}
}
else
{
lean_object* v___x_769_; 
lean_dec(v___x_763_);
v___x_769_ = lean_box(0);
v_c_712_ = v___x_769_;
v___y_713_ = v___y_637_;
v___y_714_ = v___y_638_;
goto v___jp_711_;
}
}
v___jp_695_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v_a_702_; uint8_t v___x_703_; 
v___x_700_ = l_Lean_TSyntax_getString(v_m_690_);
lean_dec(v_m_690_);
v___x_701_ = l_Lean_getMainModule___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__spec__0___redArg(v___y_696_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref(v___x_701_);
v___x_703_ = l_Lasm_JS_Meta_isProjectFile(v___x_700_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; 
lean_dec(v_a_702_);
v___x_704_ = l_Lean_TSyntax_getString(v_p_694_);
lean_dec(v_p_694_);
if (lean_obj_tag(v___y_697_) == 0)
{
v___y_679_ = v___y_696_;
v___y_680_ = v___x_700_;
v___y_681_ = v_a_699_;
v___y_682_ = v___x_704_;
v___y_683_ = v___x_703_;
goto v___jp_678_;
}
else
{
lean_dec_ref_known(v___y_697_, 1);
v___y_679_ = v___y_696_;
v___y_680_ = v___x_700_;
v___y_681_ = v_a_699_;
v___y_682_ = v___x_704_;
v___y_683_ = v___x_687_;
goto v___jp_678_;
}
}
else
{
lean_object* v_toCold_705_; lean_object* v_fileName_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_toCold_705_ = lean_ctor_get(v___y_698_, 0);
v_fileName_706_ = lean_ctor_get(v_toCold_705_, 0);
v___x_707_ = l_Lasm_JS_Meta_projectSpecifier(v_a_702_, v___x_700_);
v___x_708_ = l_Lean_TSyntax_getString(v_p_694_);
lean_dec(v_p_694_);
if (lean_obj_tag(v___y_697_) == 0)
{
uint8_t v___x_709_; 
v___x_709_ = 0;
v___y_670_ = v___y_696_;
v___y_671_ = v___x_700_;
v___y_672_ = v_a_699_;
v___y_673_ = v_fileName_706_;
v___y_674_ = v___x_707_;
v___y_675_ = v___x_708_;
v___y_676_ = v___x_709_;
goto v___jp_669_;
}
else
{
lean_dec_ref_known(v___y_697_, 1);
v___y_670_ = v___y_696_;
v___y_671_ = v___x_700_;
v___y_672_ = v_a_699_;
v___y_673_ = v_fileName_706_;
v___y_674_ = v___x_707_;
v___y_675_ = v___x_708_;
v___y_676_ = v___x_703_;
goto v___jp_669_;
}
}
}
v___jp_711_:
{
lean_object* v___x_715_; 
lean_inc(v_decl_634_);
v___x_715_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(v_decl_634_, v___y_713_, v___y_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_717_; uint8_t v___x_718_; uint8_t v___x_719_; uint8_t v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; uint64_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; size_t v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___x_715_, 1);
v___x_717_ = l_Lean_ConstantInfo_type(v_a_716_);
lean_dec(v_a_716_);
v___x_718_ = 0;
v___x_719_ = 1;
v___x_720_ = 0;
v___x_721_ = 2;
v___x_722_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_722_, 0, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 1, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 2, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 3, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 4, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 5, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 6, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 7, v___x_718_);
lean_ctor_set_uint8(v___x_722_, 8, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 9, v___x_719_);
lean_ctor_set_uint8(v___x_722_, 10, v___x_720_);
lean_ctor_set_uint8(v___x_722_, 11, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 12, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 13, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 14, v___x_721_);
lean_ctor_set_uint8(v___x_722_, 15, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 16, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 17, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 18, v___x_687_);
lean_ctor_set_uint8(v___x_722_, 19, v___x_718_);
v___x_723_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_722_);
v___x_724_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_724_, 0, v___x_722_);
lean_ctor_set_uint64(v___x_724_, sizeof(void*)*1, v___x_723_);
v___x_725_ = lean_box(1);
v___x_726_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_727_ = lean_unsigned_to_nat(32u);
v___x_728_ = lean_mk_empty_array_with_capacity(v___x_727_);
v___x_729_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_730_ = ((size_t)5ULL);
lean_inc_n(v___x_633_, 6);
v___x_731_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_731_, 0, v___x_729_);
lean_ctor_set(v___x_731_, 1, v___x_728_);
lean_ctor_set(v___x_731_, 2, v___x_633_);
lean_ctor_set(v___x_731_, 3, v___x_633_);
lean_ctor_set_usize(v___x_731_, 4, v___x_730_);
lean_inc_ref(v___x_731_);
v___x_732_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_732_, 0, v___x_726_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
lean_ctor_set(v___x_732_, 2, v___x_725_);
v___x_733_ = lean_mk_empty_array_with_capacity(v___x_633_);
v___x_734_ = lean_box(0);
v___x_735_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_735_, 0, v___x_724_);
lean_ctor_set(v___x_735_, 1, v___x_725_);
lean_ctor_set(v___x_735_, 2, v___x_732_);
lean_ctor_set(v___x_735_, 3, v___x_733_);
lean_ctor_set(v___x_735_, 4, v___x_734_);
lean_ctor_set(v___x_735_, 5, v___x_633_);
lean_ctor_set(v___x_735_, 6, v___x_734_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*7, v___x_718_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*7 + 1, v___x_718_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*7 + 2, v___x_718_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*7 + 3, v___x_710_);
v___x_736_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_736_, 0, v___x_633_);
lean_ctor_set(v___x_736_, 1, v___x_633_);
lean_ctor_set(v___x_736_, 2, v___x_633_);
lean_ctor_set(v___x_736_, 3, v___x_633_);
lean_ctor_set(v___x_736_, 4, v___x_726_);
lean_ctor_set(v___x_736_, 5, v___x_726_);
lean_ctor_set(v___x_736_, 6, v___x_726_);
lean_ctor_set(v___x_736_, 7, v___x_726_);
lean_ctor_set(v___x_736_, 8, v___x_726_);
lean_ctor_set(v___x_736_, 9, v___x_726_);
lean_ctor_set(v___x_736_, 10, v___x_726_);
v___x_737_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_738_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_739_, 0, v___x_736_);
lean_ctor_set(v___x_739_, 1, v___x_737_);
lean_ctor_set(v___x_739_, 2, v___x_725_);
lean_ctor_set(v___x_739_, 3, v___x_731_);
lean_ctor_set(v___x_739_, 4, v___x_738_);
v___x_740_ = lean_st_mk_ref(v___x_739_);
v___x_741_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v___x_717_, v___x_735_, v___x_740_, v___y_713_, v___y_714_);
lean_dec_ref_known(v___x_735_, 7);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = lean_st_ref_get(v___x_740_);
lean_dec(v___x_740_);
lean_dec(v___x_743_);
v___y_696_ = v___y_714_;
v___y_697_ = v_c_712_;
v___y_698_ = v___y_713_;
v_a_699_ = v_a_742_;
goto v___jp_695_;
}
else
{
lean_dec(v___x_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_744_; 
v_a_744_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_741_, 1);
v___y_696_ = v___y_714_;
v___y_697_ = v_c_712_;
v___y_698_ = v___y_713_;
v_a_699_ = v_a_744_;
goto v___jp_695_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec(v_c_712_);
lean_dec(v_p_694_);
lean_dec(v_m_690_);
lean_dec(v_decl_634_);
lean_dec(v___x_632_);
v_a_745_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_741_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_741_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_c_712_);
lean_dec(v_p_694_);
lean_dec(v_m_690_);
lean_dec(v_decl_634_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v_a_753_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_715_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_715_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
}
v___jp_640_:
{
lean_object* v___x_643_; lean_object* v_env_644_; lean_object* v_nextMacroScope_645_; lean_object* v_ngen_646_; lean_object* v_auxDeclNGen_647_; lean_object* v_traceState_648_; lean_object* v_messages_649_; lean_object* v_infoState_650_; lean_object* v_snapshotTasks_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_667_; 
v___x_643_ = lean_st_ref_take(v___y_641_);
v_env_644_ = lean_ctor_get(v___x_643_, 0);
v_nextMacroScope_645_ = lean_ctor_get(v___x_643_, 1);
v_ngen_646_ = lean_ctor_get(v___x_643_, 2);
v_auxDeclNGen_647_ = lean_ctor_get(v___x_643_, 3);
v_traceState_648_ = lean_ctor_get(v___x_643_, 4);
v_messages_649_ = lean_ctor_get(v___x_643_, 6);
v_infoState_650_ = lean_ctor_get(v___x_643_, 7);
v_snapshotTasks_651_ = lean_ctor_get(v___x_643_, 8);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v___x_643_, 5);
lean_dec(v_unused_668_);
v___x_653_ = v___x_643_;
v_isShared_654_ = v_isSharedCheck_667_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_snapshotTasks_651_);
lean_inc(v_infoState_650_);
lean_inc(v_messages_649_);
lean_inc(v_traceState_648_);
lean_inc(v_auxDeclNGen_647_);
lean_inc(v_ngen_646_);
lean_inc(v_nextMacroScope_645_);
lean_inc(v_env_644_);
lean_dec(v___x_643_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_667_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v_toEnvExtension_656_; lean_object* v_asyncMode_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_655_ = l_Lasm_JS_Meta_bindingExtension;
v_toEnvExtension_656_ = lean_ctor_get(v___x_655_, 0);
v_asyncMode_657_ = lean_ctor_get(v_toEnvExtension_656_, 2);
v___x_658_ = lean_box(0);
v___x_659_ = l_Lasm_JS_Meta_BindingInfo_json(v___y_642_);
v___x_660_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_655_, v_env_644_, v___x_659_, v_asyncMode_657_, v___x_632_);
v___x_661_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 5, v___x_661_);
lean_ctor_set(v___x_653_, 0, v___x_660_);
v___x_663_ = v___x_653_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_660_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_nextMacroScope_645_);
lean_ctor_set(v_reuseFailAlloc_666_, 2, v_ngen_646_);
lean_ctor_set(v_reuseFailAlloc_666_, 3, v_auxDeclNGen_647_);
lean_ctor_set(v_reuseFailAlloc_666_, 4, v_traceState_648_);
lean_ctor_set(v_reuseFailAlloc_666_, 5, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_666_, 6, v_messages_649_);
lean_ctor_set(v_reuseFailAlloc_666_, 7, v_infoState_650_);
lean_ctor_set(v_reuseFailAlloc_666_, 8, v_snapshotTasks_651_);
v___x_663_ = v_reuseFailAlloc_666_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_st_ref_put(v___y_641_, v___x_663_);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_658_);
return v___x_665_;
}
}
}
v___jp_669_:
{
lean_object* v___x_677_; 
lean_inc_ref(v___y_673_);
v___x_677_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_677_, 0, v_decl_634_);
lean_ctor_set(v___x_677_, 1, v___y_674_);
lean_ctor_set(v___x_677_, 2, v___y_675_);
lean_ctor_set(v___x_677_, 3, v___y_672_);
lean_ctor_set(v___x_677_, 4, v___y_671_);
lean_ctor_set(v___x_677_, 5, v___y_673_);
lean_ctor_set_uint8(v___x_677_, sizeof(void*)*6, v___y_676_);
v___y_641_ = v___y_670_;
v___y_642_ = v___x_677_;
goto v___jp_640_;
}
v___jp_678_:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_685_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_685_, 0, v_decl_634_);
lean_ctor_set(v___x_685_, 1, v___y_680_);
lean_ctor_set(v___x_685_, 2, v___y_682_);
lean_ctor_set(v___x_685_, 3, v___y_681_);
lean_ctor_set(v___x_685_, 4, v___x_684_);
lean_ctor_set(v___x_685_, 5, v___x_684_);
lean_ctor_set_uint8(v___x_685_, sizeof(void*)*6, v___y_683_);
v___y_641_ = v___y_679_;
v___y_642_ = v___x_685_;
goto v___jp_640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object* v___x_770_, lean_object* v___x_771_, lean_object* v___x_772_, lean_object* v___x_773_, lean_object* v___x_774_, lean_object* v___x_775_, lean_object* v___x_776_, lean_object* v_decl_777_, lean_object* v_stx_778_, lean_object* v_x_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
uint8_t v_x_2482__boxed_783_; lean_object* v_res_784_; 
v_x_2482__boxed_783_ = lean_unbox(v_x_779_);
v_res_784_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(v___x_770_, v___x_771_, v___x_772_, v___x_773_, v___x_774_, v___x_775_, v___x_776_, v_decl_777_, v_stx_778_, v_x_2482__boxed_783_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___x_774_);
return v_res_784_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(lean_object* v___x_791_, lean_object* v_decl_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_796_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_797_ = l_Lean_MessageData_ofName(v___x_791_);
v___x_798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_796_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_);
v___x_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(v___x_800_, v___y_793_, v___y_794_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object* v___x_802_, lean_object* v_decl_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(v___x_802_, v_decl_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v_decl_803_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_));
v___x_888_ = l_Lean_registerBuiltinAttribute(v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2____boxed(lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_();
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(lean_object* v_____do__lift_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
uint8_t v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_917_ = 0;
v___x_918_ = l_Lean_SourceInfo_fromRef(v_____do__lift_914_, v___x_917_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v___y_916_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object* v_____do__lift_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_____do__lift_920_, v___y_921_, v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v_____do__lift_920_);
return v_res_923_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_940_ = l_String_toRawSubstring_x27(v___x_939_);
return v___x_940_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9));
v___x_945_ = l_String_toRawSubstring_x27(v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27));
v___x_977_ = l_String_toRawSubstring_x27(v___x_976_);
return v___x_977_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42));
v___x_1007_ = l_String_toRawSubstring_x27(v___x_1006_);
return v___x_1007_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48));
v___x_1014_ = l_String_toRawSubstring_x27(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57));
v___x_1025_ = l_String_toRawSubstring_x27(v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10));
v___x_1030_ = l_String_toRawSubstring_x27(v___x_1029_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13));
v___x_1034_ = l_String_toRawSubstring_x27(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16));
v___x_1038_ = l_String_toRawSubstring_x27(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_1046_ = l_Lean_mkCIdent(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70));
v___x_1051_ = l_Lean_mkCIdent(v___x_1050_);
return v___x_1051_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74(void){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Array_mkArray0___redArg();
return v___x_1055_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94));
v___x_1107_ = lean_string_utf8_byte_size(v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(lean_object* v_x_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v_record_1122_; lean_object* v___y_1123_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1128_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_1129_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
lean_inc(v_x_1114_);
v___x_1131_ = l_Lean_Syntax_isOfKind(v_x_1114_, v___x_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_dec(v_x_1114_);
v___x_1132_ = lean_box(1);
v___x_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
lean_ctor_set(v___x_1133_, 1, v_a_1116_);
return v___x_1133_;
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1134_ = lean_unsigned_to_nat(0u);
v___x_1135_ = l_Lean_Syntax_getArg(v_x_1114_, v___x_1134_);
v___x_1136_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
lean_inc(v___x_1135_);
v___x_1137_ = l_Lean_Syntax_isOfKind(v___x_1135_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1138_ = lean_box(1);
v___x_1139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
lean_ctor_set(v___x_1139_, 1, v_a_1116_);
return v___x_1139_;
}
else
{
lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; uint8_t v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; uint8_t v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1419_; uint8_t v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v_moduleTerm_1437_; lean_object* v___y_1438_; lean_object* v_quotContext_1439_; lean_object* v_currMacroScope_1440_; lean_object* v_ref_1441_; lean_object* v___y_1442_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; uint8_t v_fst_1468_; lean_object* v_snd_1469_; lean_object* v_doc_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1134_);
v___x_1619_ = l_Lean_Syntax_isNone(v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1618_);
v___x_1621_ = l_Lean_Syntax_matchesNull(v___x_1618_, v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec(v___x_1618_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1622_ = lean_box(1);
v___x_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v_a_1116_);
return v___x_1623_;
}
else
{
lean_object* v_doc_1624_; 
v_doc_1624_ = l_Lean_Syntax_getArg(v___x_1618_, v___x_1134_);
lean_dec(v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__97));
lean_inc(v_doc_1624_);
v___x_1628_ = l_Lean_Syntax_isOfKind(v_doc_1624_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
lean_dec(v_doc_1624_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1629_ = lean_box(1);
v___x_1630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
lean_ctor_set(v___x_1630_, 1, v_a_1116_);
return v___x_1630_;
}
else
{
goto v___jp_1625_;
}
}
else
{
goto v___jp_1625_;
}
v___jp_1625_:
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1626_, 0, v_doc_1624_);
v_doc_1491_ = v___x_1626_;
v___y_1492_ = v_a_1115_;
v___y_1493_ = v_a_1116_;
goto v___jp_1490_;
}
}
}
else
{
lean_object* v___x_1631_; 
lean_dec(v___x_1618_);
v___x_1631_ = lean_box(0);
v_doc_1491_ = v___x_1631_;
v___y_1492_ = v_a_1115_;
v___y_1493_ = v_a_1116_;
goto v___jp_1490_;
}
v___jp_1140_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_inc(v___y_1188_);
lean_inc_n(v___y_1169_, 14);
lean_inc_n(v___y_1161_, 2);
lean_inc(v___y_1185_);
lean_inc_n(v___y_1158_, 23);
v___x_1189_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1185_, v___y_1161_, v___y_1169_, v___y_1188_);
lean_inc_n(v___y_1144_, 5);
v___x_1190_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1144_, v___y_1169_, v___y_1169_, v___x_1189_);
lean_inc(v___y_1165_);
v___x_1191_ = l_Lean_Syntax_node2(v___y_1158_, v___y_1165_, v___y_1177_, v___x_1190_);
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_1193_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7);
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8));
lean_inc_n(v___y_1156_, 2);
lean_inc_n(v___y_1187_, 2);
v___x_1195_ = l_Lean_addMacroScope(v___y_1187_, v___x_1194_, v___y_1156_);
lean_inc_n(v___y_1143_, 2);
v___x_1196_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1196_, 0, v___y_1158_);
lean_ctor_set(v___x_1196_, 1, v___x_1193_);
lean_ctor_set(v___x_1196_, 2, v___x_1195_);
lean_ctor_set(v___x_1196_, 3, v___y_1143_);
v___x_1197_ = l_Lean_Syntax_node2(v___y_1158_, v___y_1160_, v___x_1196_, v___y_1169_);
v___x_1198_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10);
lean_inc_ref(v___y_1163_);
lean_inc_ref(v___y_1155_);
v___x_1199_ = l_Lean_Name_mkStr4(v___y_1155_, v___y_1163_, v___y_1181_, v___x_1192_);
lean_inc(v___x_1199_);
v___x_1200_ = l_Lean_addMacroScope(v___y_1187_, v___x_1199_, v___y_1156_);
lean_inc(v___y_1182_);
v___x_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___y_1182_);
v___x_1202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v___y_1143_);
v___x_1203_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1203_, 0, v___y_1158_);
lean_ctor_set(v___x_1203_, 1, v___x_1198_);
lean_ctor_set(v___x_1203_, 2, v___x_1200_);
lean_ctor_set(v___x_1203_, 3, v___x_1202_);
lean_inc(v___y_1170_);
v___x_1204_ = l_Lean_Syntax_node1(v___y_1158_, v___y_1144_, v___y_1170_);
lean_inc(v___y_1164_);
v___x_1205_ = l_Lean_Syntax_node2(v___y_1158_, v___y_1164_, v___x_1203_, v___x_1204_);
v___x_1206_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1185_, v___y_1161_, v___y_1169_, v___x_1205_);
v___x_1207_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1144_, v___y_1169_, v___y_1169_, v___x_1206_);
v___x_1208_ = l_Lean_Syntax_node2(v___y_1158_, v___y_1165_, v___x_1197_, v___x_1207_);
v___x_1209_ = lean_unsigned_to_nat(9u);
v___x_1210_ = lean_mk_empty_array_with_capacity(v___x_1209_);
v___x_1211_ = lean_array_push(v___x_1210_, v___y_1141_);
lean_inc_n(v___y_1147_, 3);
v___x_1212_ = lean_array_push(v___x_1211_, v___y_1147_);
v___x_1213_ = lean_array_push(v___x_1212_, v___y_1183_);
v___x_1214_ = lean_array_push(v___x_1213_, v___y_1147_);
v___x_1215_ = lean_array_push(v___x_1214_, v___y_1148_);
v___x_1216_ = lean_array_push(v___x_1215_, v___y_1147_);
v___x_1217_ = lean_array_push(v___x_1216_, v___x_1191_);
v___x_1218_ = lean_array_push(v___x_1217_, v___y_1147_);
v___x_1219_ = lean_array_push(v___x_1218_, v___x_1208_);
v___x_1220_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1220_, 0, v___y_1158_);
lean_ctor_set(v___x_1220_, 1, v___y_1144_);
lean_ctor_set(v___x_1220_, 2, v___x_1219_);
v___x_1221_ = l_Lean_Syntax_node1(v___y_1158_, v___y_1157_, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11));
lean_inc_ref(v___y_1159_);
v___x_1223_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1159_, v___x_1222_);
v___x_1224_ = l_Lean_Syntax_node1(v___y_1158_, v___x_1223_, v___y_1169_);
v___x_1225_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_1226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___y_1158_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
v___x_1227_ = l_Lean_Syntax_node6(v___y_1158_, v___y_1149_, v___y_1151_, v___y_1169_, v___x_1221_, v___x_1224_, v___y_1169_, v___x_1226_);
v___x_1228_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_1229_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_1230_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___y_1158_);
lean_ctor_set(v___x_1230_, 1, v___x_1229_);
v___x_1231_ = l_Lean_Syntax_node3(v___y_1158_, v___x_1228_, v___x_1230_, v___y_1169_, v___y_1180_);
v___x_1232_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1144_, v___y_1170_, v___x_1227_, v___x_1231_);
v___x_1233_ = l_Lean_Syntax_node2(v___y_1158_, v___y_1164_, v___y_1184_, v___x_1232_);
v___x_1234_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_1235_ = l_Lean_Syntax_node2(v___y_1158_, v___x_1234_, v___y_1169_, v___y_1169_);
lean_inc(v___y_1146_);
v___x_1236_ = l_Lean_Syntax_node4(v___y_1158_, v___y_1146_, v___y_1161_, v___x_1233_, v___x_1235_, v___y_1169_);
lean_inc(v___y_1172_);
v___x_1237_ = l_Lean_Syntax_node5(v___y_1158_, v___y_1172_, v___y_1153_, v___y_1175_, v___y_1150_, v___x_1236_, v___y_1169_);
v___x_1238_ = l_Lean_Syntax_node2(v___y_1158_, v___x_1130_, v___y_1152_, v___x_1237_);
if (v___y_1168_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1239_ = l_Lean_SourceInfo_fromRef(v___y_1142_, v___y_1168_);
v___x_1240_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc_n(v___x_1239_, 10);
v___x_1242_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1239_);
lean_ctor_set(v___x_1242_, 1, v___x_1240_);
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
v___x_1244_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1239_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
lean_inc_ref(v___y_1174_);
lean_inc_n(v___y_1144_, 3);
v___x_1245_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1239_);
lean_ctor_set(v___x_1245_, 1, v___y_1144_);
lean_ctor_set(v___x_1245_, 2, v___y_1174_);
lean_inc_ref(v___x_1245_);
lean_inc(v___y_1179_);
v___x_1246_ = l_Lean_Syntax_node1(v___x_1239_, v___y_1179_, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_1178_);
lean_inc_ref(v___y_1163_);
lean_inc_ref(v___y_1155_);
v___x_1248_ = l_Lean_Name_mkStr4(v___y_1155_, v___y_1163_, v___y_1178_, v___x_1247_);
v___x_1249_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_1250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1239_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = l_Lean_Syntax_node4(v___x_1239_, v___x_1248_, v___x_1250_, v___y_1154_, v___y_1176_, v___x_1245_);
lean_inc(v___y_1166_);
v___x_1252_ = l_Lean_Syntax_node2(v___x_1239_, v___y_1166_, v___x_1246_, v___x_1251_);
v___x_1253_ = l_Lean_Syntax_node1(v___x_1239_, v___y_1144_, v___x_1252_);
lean_inc_ref(v___y_1167_);
v___x_1254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1239_);
lean_ctor_set(v___x_1254_, 1, v___y_1167_);
v___x_1255_ = l_Lean_Syntax_node1(v___x_1239_, v___y_1144_, v___y_1173_);
v___x_1256_ = l_Lean_Syntax_node5(v___x_1239_, v___x_1241_, v___x_1242_, v___x_1244_, v___x_1253_, v___x_1254_, v___x_1255_);
v___y_1118_ = v___y_1144_;
v___y_1119_ = v___x_1238_;
v___y_1120_ = v___y_1145_;
v___y_1121_ = v___y_1186_;
v_record_1122_ = v___x_1256_;
v___y_1123_ = v___y_1162_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1257_; lean_object* v_a_1258_; lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1285_; 
v___x_1257_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v___y_1142_, v___y_1171_, v___y_1162_);
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_a_1259_ = lean_ctor_get(v___x_1257_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1261_ = v___x_1257_;
v_isShared_1262_ = v_isSharedCheck_1285_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1285_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1263_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_1264_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc(v_a_1258_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set_tag(v___x_1261_, 2);
lean_ctor_set(v___x_1261_, 1, v___x_1263_);
v___x_1266_ = v___x_1261_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1258_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___x_1263_);
v___x_1266_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1267_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
lean_inc_n(v_a_1258_, 11);
v___x_1268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1268_, 0, v_a_1258_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
lean_inc_ref(v___y_1174_);
lean_inc_n(v___y_1144_, 4);
v___x_1269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1269_, 0, v_a_1258_);
lean_ctor_set(v___x_1269_, 1, v___y_1144_);
lean_ctor_set(v___x_1269_, 2, v___y_1174_);
lean_inc(v___y_1179_);
v___x_1270_ = l_Lean_Syntax_node1(v_a_1258_, v___y_1179_, v___x_1269_);
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_1178_);
lean_inc_ref(v___y_1163_);
lean_inc_ref(v___y_1155_);
v___x_1272_ = l_Lean_Name_mkStr4(v___y_1155_, v___y_1163_, v___y_1178_, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_1274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1274_, 0, v_a_1258_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22));
v___x_1276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1276_, 0, v_a_1258_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = l_Lean_Syntax_node1(v_a_1258_, v___y_1144_, v___x_1276_);
v___x_1278_ = l_Lean_Syntax_node4(v_a_1258_, v___x_1272_, v___x_1274_, v___y_1154_, v___y_1176_, v___x_1277_);
lean_inc(v___y_1166_);
v___x_1279_ = l_Lean_Syntax_node2(v_a_1258_, v___y_1166_, v___x_1270_, v___x_1278_);
v___x_1280_ = l_Lean_Syntax_node1(v_a_1258_, v___y_1144_, v___x_1279_);
lean_inc_ref(v___y_1167_);
v___x_1281_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1281_, 0, v_a_1258_);
lean_ctor_set(v___x_1281_, 1, v___y_1167_);
v___x_1282_ = l_Lean_Syntax_node1(v_a_1258_, v___y_1144_, v___y_1173_);
v___x_1283_ = l_Lean_Syntax_node5(v_a_1258_, v___x_1264_, v___x_1266_, v___x_1268_, v___x_1280_, v___x_1281_, v___x_1282_);
v___y_1118_ = v___y_1144_;
v___y_1119_ = v___x_1238_;
v___y_1120_ = v___y_1145_;
v___y_1121_ = v___y_1186_;
v_record_1122_ = v___x_1283_;
v___y_1123_ = v_a_1259_;
goto v___jp_1117_;
}
}
}
}
v___jp_1286_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
lean_inc_ref_n(v___y_1307_, 2);
v___x_1314_ = l_Array_append___redArg(v___y_1307_, v___y_1313_);
lean_dec_ref(v___y_1313_);
lean_inc_n(v___y_1288_, 9);
lean_inc_n(v___y_1296_, 42);
v___x_1315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1315_, 0, v___y_1296_);
lean_ctor_set(v___x_1315_, 1, v___y_1288_);
lean_ctor_set(v___x_1315_, 2, v___x_1314_);
v___x_1316_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23));
v___x_1317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___y_1296_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1318_, 0, v___y_1296_);
lean_ctor_set(v___x_1318_, 1, v___y_1288_);
lean_ctor_set(v___x_1318_, 2, v___y_1307_);
lean_inc_ref_n(v___x_1318_, 21);
lean_inc(v___y_1310_);
v___x_1319_ = l_Lean_Syntax_node1(v___y_1296_, v___y_1310_, v___x_1318_);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26));
v___x_1321_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28);
v___x_1322_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29));
lean_inc_n(v___y_1293_, 7);
lean_inc_n(v___y_1312_, 7);
v___x_1323_ = l_Lean_addMacroScope(v___y_1312_, v___x_1322_, v___y_1293_);
v___x_1324_ = lean_box(0);
v___x_1325_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1325_, 0, v___y_1296_);
lean_ctor_set(v___x_1325_, 1, v___x_1321_);
lean_ctor_set(v___x_1325_, 2, v___x_1323_);
lean_ctor_set(v___x_1325_, 3, v___x_1324_);
v___x_1326_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1320_, v___x_1325_, v___x_1318_);
lean_inc(v___y_1301_);
v___x_1327_ = l_Lean_Syntax_node2(v___y_1296_, v___y_1301_, v___x_1319_, v___x_1326_);
v___x_1328_ = l_Lean_Syntax_node1(v___y_1296_, v___y_1288_, v___x_1327_);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_1330_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___y_1296_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
lean_inc_ref(v___x_1330_);
lean_inc(v___y_1291_);
v___x_1331_ = l_Lean_Syntax_node3(v___y_1296_, v___y_1291_, v___x_1317_, v___x_1328_, v___x_1330_);
v___x_1332_ = l_Lean_Syntax_node1(v___y_1296_, v___y_1288_, v___x_1331_);
v___x_1333_ = l_Lean_Syntax_node7(v___y_1296_, v___x_1136_, v___x_1315_, v___x_1332_, v___x_1318_, v___x_1318_, v___x_1318_, v___x_1318_, v___x_1318_);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33));
v___x_1336_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___y_1296_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
v___x_1337_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
lean_inc_n(v___y_1311_, 2);
v___x_1338_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1338_, 0, v___y_1311_);
lean_ctor_set(v___x_1338_, 1, v___y_1288_);
lean_ctor_set(v___x_1338_, 2, v___x_1337_);
v___x_1339_ = lean_mk_empty_array_with_capacity(v___y_1300_);
lean_inc(v___y_1306_);
lean_inc_ref(v___x_1339_);
v___x_1340_ = lean_array_push(v___x_1339_, v___y_1306_);
v___x_1341_ = lean_array_push(v___x_1340_, v___x_1338_);
lean_inc(v___y_1303_);
v___x_1342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1342_, 0, v___y_1311_);
lean_ctor_set(v___x_1342_, 1, v___y_1303_);
lean_ctor_set(v___x_1342_, 2, v___x_1341_);
v___x_1343_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36));
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_1345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___y_1296_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
lean_inc(v___y_1290_);
lean_inc(v___y_1289_);
v___x_1346_ = l_Lean_Syntax_node2(v___y_1296_, v___y_1289_, v___x_1345_, v___y_1290_);
v___x_1347_ = l_Lean_Syntax_node1(v___y_1296_, v___y_1288_, v___x_1346_);
v___x_1348_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1343_, v___x_1318_, v___x_1347_);
v___x_1349_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_1350_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_1351_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1296_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41));
lean_inc_ref_n(v___y_1297_, 7);
v___x_1353_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1352_);
v___x_1354_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43);
v___x_1355_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44));
v___x_1356_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45));
lean_inc_ref(v___y_1298_);
lean_inc_ref(v___y_1294_);
v___x_1357_ = l_Lean_Name_mkStr4(v___y_1294_, v___y_1298_, v___x_1355_, v___x_1356_);
lean_inc(v___x_1357_);
v___x_1358_ = l_Lean_addMacroScope(v___y_1312_, v___x_1357_, v___y_1293_);
v___x_1359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1357_);
lean_ctor_set(v___x_1359_, 1, v___x_1324_);
v___x_1360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v___x_1324_);
v___x_1361_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1361_, 0, v___y_1296_);
lean_ctor_set(v___x_1361_, 1, v___x_1354_);
lean_ctor_set(v___x_1361_, 2, v___x_1358_);
lean_ctor_set(v___x_1361_, 3, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46));
v___x_1363_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1362_);
v___x_1364_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
v___x_1365_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___y_1296_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49);
v___x_1367_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50));
v___x_1368_ = l_Lean_addMacroScope(v___y_1312_, v___x_1367_, v___y_1293_);
v___x_1369_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1369_, 0, v___y_1296_);
lean_ctor_set(v___x_1369_, 1, v___x_1366_);
lean_ctor_set(v___x_1369_, 2, v___x_1368_);
lean_ctor_set(v___x_1369_, 3, v___x_1324_);
v___x_1370_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_1371_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___y_1296_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
lean_inc_ref_n(v___x_1351_, 4);
v___x_1372_ = l_Lean_Syntax_node5(v___y_1296_, v___x_1363_, v___x_1365_, v___x_1369_, v___x_1351_, v___y_1290_, v___x_1371_);
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52));
v___x_1374_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1373_);
v___x_1375_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_1376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___y_1296_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
v___x_1377_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54));
v___x_1378_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1377_);
v___x_1379_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55));
v___x_1380_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1379_);
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56));
v___x_1382_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1381_);
v___x_1383_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58);
v___x_1384_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59));
v___x_1385_ = l_Lean_addMacroScope(v___y_1312_, v___x_1384_, v___y_1293_);
v___x_1386_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1386_, 0, v___y_1296_);
lean_ctor_set(v___x_1386_, 1, v___x_1383_);
lean_ctor_set(v___x_1386_, 2, v___x_1385_);
lean_ctor_set(v___x_1386_, 3, v___x_1324_);
lean_inc_n(v___x_1382_, 4);
v___x_1387_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1382_, v___x_1386_, v___x_1318_);
v___x_1388_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60));
v___x_1389_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1129_, v___y_1297_, v___x_1388_);
lean_inc_n(v___x_1389_, 3);
v___x_1390_ = l_Lean_Syntax_node3(v___y_1296_, v___x_1389_, v___x_1351_, v___x_1318_, v___y_1292_);
v___x_1391_ = l_Lean_Syntax_node3(v___y_1296_, v___y_1288_, v___x_1318_, v___x_1318_, v___x_1390_);
lean_inc_n(v___x_1380_, 3);
v___x_1392_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1380_, v___x_1387_, v___x_1391_);
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1394_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1394_, 0, v___y_1296_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
v___x_1395_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61);
v___x_1396_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62));
v___x_1397_ = l_Lean_addMacroScope(v___y_1312_, v___x_1396_, v___y_1293_);
v___x_1398_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1398_, 0, v___y_1296_);
lean_ctor_set(v___x_1398_, 1, v___x_1395_);
lean_ctor_set(v___x_1398_, 2, v___x_1397_);
lean_ctor_set(v___x_1398_, 3, v___x_1324_);
v___x_1399_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1382_, v___x_1398_, v___x_1318_);
v___x_1400_ = l_Lean_Syntax_node3(v___y_1296_, v___x_1389_, v___x_1351_, v___x_1318_, v___y_1304_);
v___x_1401_ = l_Lean_Syntax_node3(v___y_1296_, v___y_1288_, v___x_1318_, v___x_1318_, v___x_1400_);
v___x_1402_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1380_, v___x_1399_, v___x_1401_);
v___x_1403_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63);
v___x_1404_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64));
v___x_1405_ = l_Lean_addMacroScope(v___y_1312_, v___x_1404_, v___y_1293_);
v___x_1406_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1406_, 0, v___y_1296_);
lean_ctor_set(v___x_1406_, 1, v___x_1403_);
lean_ctor_set(v___x_1406_, 2, v___x_1405_);
lean_ctor_set(v___x_1406_, 3, v___x_1324_);
v___x_1407_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1382_, v___x_1406_, v___x_1318_);
lean_inc(v___y_1308_);
v___x_1408_ = l_Lean_Syntax_node3(v___y_1296_, v___x_1389_, v___x_1351_, v___x_1318_, v___y_1308_);
v___x_1409_ = l_Lean_Syntax_node3(v___y_1296_, v___y_1288_, v___x_1318_, v___x_1318_, v___x_1408_);
v___x_1410_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1380_, v___x_1407_, v___x_1409_);
v___x_1411_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65);
v___x_1412_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66));
v___x_1413_ = l_Lean_addMacroScope(v___y_1312_, v___x_1412_, v___y_1293_);
v___x_1414_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1414_, 0, v___y_1296_);
lean_ctor_set(v___x_1414_, 1, v___x_1411_);
lean_ctor_set(v___x_1414_, 2, v___x_1413_);
lean_ctor_set(v___x_1414_, 3, v___x_1324_);
v___x_1415_ = l_Lean_Syntax_node2(v___y_1296_, v___x_1382_, v___x_1414_, v___x_1318_);
if (v___y_1302_ == 0)
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69);
v___y_1141_ = v___x_1392_;
v___y_1142_ = v___y_1287_;
v___y_1143_ = v___x_1324_;
v___y_1144_ = v___y_1288_;
v___y_1145_ = v___x_1339_;
v___y_1146_ = v___x_1349_;
v___y_1147_ = v___x_1394_;
v___y_1148_ = v___x_1410_;
v___y_1149_ = v___x_1374_;
v___y_1150_ = v___x_1348_;
v___y_1151_ = v___x_1376_;
v___y_1152_ = v___x_1333_;
v___y_1153_ = v___x_1336_;
v___y_1154_ = v___y_1295_;
v___y_1155_ = v___y_1294_;
v___y_1156_ = v___y_1293_;
v___y_1157_ = v___x_1378_;
v___y_1158_ = v___y_1296_;
v___y_1159_ = v___y_1297_;
v___y_1160_ = v___x_1382_;
v___y_1161_ = v___x_1351_;
v___y_1162_ = v___y_1299_;
v___y_1163_ = v___y_1298_;
v___y_1164_ = v___x_1353_;
v___y_1165_ = v___x_1380_;
v___y_1166_ = v___y_1301_;
v___y_1167_ = v___x_1329_;
v___y_1168_ = v___y_1302_;
v___y_1169_ = v___x_1318_;
v___y_1170_ = v___x_1372_;
v___y_1171_ = v___y_1305_;
v___y_1172_ = v___x_1334_;
v___y_1173_ = v___y_1306_;
v___y_1174_ = v___y_1307_;
v___y_1175_ = v___x_1342_;
v___y_1176_ = v___y_1308_;
v___y_1177_ = v___x_1415_;
v___y_1178_ = v___y_1309_;
v___y_1179_ = v___y_1310_;
v___y_1180_ = v___x_1330_;
v___y_1181_ = v___x_1355_;
v___y_1182_ = v___x_1324_;
v___y_1183_ = v___x_1402_;
v___y_1184_ = v___x_1361_;
v___y_1185_ = v___x_1389_;
v___y_1186_ = v___y_1311_;
v___y_1187_ = v___y_1312_;
v___y_1188_ = v___x_1416_;
goto v___jp_1140_;
}
else
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71);
v___y_1141_ = v___x_1392_;
v___y_1142_ = v___y_1287_;
v___y_1143_ = v___x_1324_;
v___y_1144_ = v___y_1288_;
v___y_1145_ = v___x_1339_;
v___y_1146_ = v___x_1349_;
v___y_1147_ = v___x_1394_;
v___y_1148_ = v___x_1410_;
v___y_1149_ = v___x_1374_;
v___y_1150_ = v___x_1348_;
v___y_1151_ = v___x_1376_;
v___y_1152_ = v___x_1333_;
v___y_1153_ = v___x_1336_;
v___y_1154_ = v___y_1295_;
v___y_1155_ = v___y_1294_;
v___y_1156_ = v___y_1293_;
v___y_1157_ = v___x_1378_;
v___y_1158_ = v___y_1296_;
v___y_1159_ = v___y_1297_;
v___y_1160_ = v___x_1382_;
v___y_1161_ = v___x_1351_;
v___y_1162_ = v___y_1299_;
v___y_1163_ = v___y_1298_;
v___y_1164_ = v___x_1353_;
v___y_1165_ = v___x_1380_;
v___y_1166_ = v___y_1301_;
v___y_1167_ = v___x_1329_;
v___y_1168_ = v___y_1302_;
v___y_1169_ = v___x_1318_;
v___y_1170_ = v___x_1372_;
v___y_1171_ = v___y_1305_;
v___y_1172_ = v___x_1334_;
v___y_1173_ = v___y_1306_;
v___y_1174_ = v___y_1307_;
v___y_1175_ = v___x_1342_;
v___y_1176_ = v___y_1308_;
v___y_1177_ = v___x_1415_;
v___y_1178_ = v___y_1309_;
v___y_1179_ = v___y_1310_;
v___y_1180_ = v___x_1330_;
v___y_1181_ = v___x_1355_;
v___y_1182_ = v___x_1324_;
v___y_1183_ = v___x_1402_;
v___y_1184_ = v___x_1361_;
v___y_1185_ = v___x_1389_;
v___y_1186_ = v___y_1311_;
v___y_1187_ = v___y_1312_;
v___y_1188_ = v___x_1417_;
goto v___jp_1140_;
}
}
v___jp_1418_:
{
lean_object* v___x_1443_; lean_object* v_a_1444_; lean_object* v_a_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1443_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_ref_1441_, v___y_1438_, v___y_1442_);
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
v_a_1445_ = lean_ctor_get(v___x_1443_, 1);
lean_inc(v_a_1445_);
lean_dec_ref(v___x_1443_);
v___x_1446_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_1447_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
if (lean_obj_tag(v___y_1433_) == 1)
{
lean_object* v_val_1448_; lean_object* v___x_1449_; 
v_val_1448_ = lean_ctor_get(v___y_1433_, 0);
lean_inc(v_val_1448_);
lean_dec_ref_known(v___y_1433_, 1);
v___x_1449_ = l_Array_mkArray1___redArg(v_val_1448_);
v___y_1287_ = v_ref_1441_;
v___y_1288_ = v___x_1446_;
v___y_1289_ = v___y_1422_;
v___y_1290_ = v___y_1424_;
v___y_1291_ = v___y_1425_;
v___y_1292_ = v___y_1426_;
v___y_1293_ = v_currMacroScope_1440_;
v___y_1294_ = v___y_1430_;
v___y_1295_ = v___y_1431_;
v___y_1296_ = v_a_1444_;
v___y_1297_ = v___y_1432_;
v___y_1298_ = v___y_1434_;
v___y_1299_ = v_a_1445_;
v___y_1300_ = v___y_1436_;
v___y_1301_ = v___y_1419_;
v___y_1302_ = v___y_1420_;
v___y_1303_ = v___y_1421_;
v___y_1304_ = v_moduleTerm_1437_;
v___y_1305_ = v___y_1438_;
v___y_1306_ = v___y_1423_;
v___y_1307_ = v___x_1447_;
v___y_1308_ = v___y_1427_;
v___y_1309_ = v___y_1429_;
v___y_1310_ = v___y_1428_;
v___y_1311_ = v___y_1435_;
v___y_1312_ = v_quotContext_1439_;
v___y_1313_ = v___x_1449_;
goto v___jp_1286_;
}
else
{
lean_object* v___x_1450_; 
lean_dec(v___y_1433_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75));
v___y_1287_ = v_ref_1441_;
v___y_1288_ = v___x_1446_;
v___y_1289_ = v___y_1422_;
v___y_1290_ = v___y_1424_;
v___y_1291_ = v___y_1425_;
v___y_1292_ = v___y_1426_;
v___y_1293_ = v_currMacroScope_1440_;
v___y_1294_ = v___y_1430_;
v___y_1295_ = v___y_1431_;
v___y_1296_ = v_a_1444_;
v___y_1297_ = v___y_1432_;
v___y_1298_ = v___y_1434_;
v___y_1299_ = v_a_1445_;
v___y_1300_ = v___y_1436_;
v___y_1301_ = v___y_1419_;
v___y_1302_ = v___y_1420_;
v___y_1303_ = v___y_1421_;
v___y_1304_ = v_moduleTerm_1437_;
v___y_1305_ = v___y_1438_;
v___y_1306_ = v___y_1423_;
v___y_1307_ = v___x_1447_;
v___y_1308_ = v___y_1427_;
v___y_1309_ = v___y_1429_;
v___y_1310_ = v___y_1428_;
v___y_1311_ = v___y_1435_;
v___y_1312_ = v_quotContext_1439_;
v___y_1313_ = v___x_1450_;
goto v___jp_1286_;
}
}
v___jp_1451_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v_pathLit_1474_; lean_object* v_relative_1475_; uint8_t v_project_1476_; 
v___x_1470_ = l_Lean_Syntax_getId(v___y_1456_);
v___x_1471_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1470_, v___x_1137_);
v___x_1472_ = lean_box(2);
v___x_1473_ = l_Lean_Syntax_mkStrLit(v___x_1471_, v___x_1472_);
v_pathLit_1474_ = l_Lean_Syntax_mkStrLit(v_snd_1469_, v___x_1472_);
v_relative_1475_ = l_Lean_TSyntax_getString(v___y_1463_);
v_project_1476_ = l_Lasm_JS_Meta_isProjectFile(v_relative_1475_);
lean_dec_ref(v_relative_1475_);
if (v_project_1476_ == 0)
{
lean_object* v_quotContext_1477_; lean_object* v_currMacroScope_1478_; lean_object* v_ref_1479_; 
v_quotContext_1477_ = lean_ctor_get(v___y_1454_, 1);
v_currMacroScope_1478_ = lean_ctor_get(v___y_1454_, 2);
v_ref_1479_ = lean_ctor_get(v___y_1454_, 5);
lean_inc(v___y_1463_);
v___y_1419_ = v___y_1452_;
v___y_1420_ = v_fst_1468_;
v___y_1421_ = v___y_1455_;
v___y_1422_ = v___y_1457_;
v___y_1423_ = v___y_1456_;
v___y_1424_ = v___y_1458_;
v___y_1425_ = v___y_1459_;
v___y_1426_ = v___x_1473_;
v___y_1427_ = v_pathLit_1474_;
v___y_1428_ = v___y_1460_;
v___y_1429_ = v___y_1461_;
v___y_1430_ = v___y_1462_;
v___y_1431_ = v___y_1463_;
v___y_1432_ = v___y_1464_;
v___y_1433_ = v___y_1465_;
v___y_1434_ = v___y_1466_;
v___y_1435_ = v___x_1472_;
v___y_1436_ = v___y_1467_;
v_moduleTerm_1437_ = v___y_1463_;
v___y_1438_ = v___y_1454_;
v_quotContext_1439_ = v_quotContext_1477_;
v_currMacroScope_1440_ = v_currMacroScope_1478_;
v_ref_1441_ = v_ref_1479_;
v___y_1442_ = v___y_1453_;
goto v___jp_1418_;
}
else
{
lean_object* v_quotContext_1480_; lean_object* v_currMacroScope_1481_; lean_object* v_ref_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v_quotContext_1480_ = lean_ctor_get(v___y_1454_, 1);
v_currMacroScope_1481_ = lean_ctor_get(v___y_1454_, 2);
v_ref_1482_ = lean_ctor_get(v___y_1454_, 5);
v___x_1483_ = 0;
v___x_1484_ = l_Lean_SourceInfo_fromRef(v_ref_1482_, v___x_1483_);
v___x_1485_ = ((lean_object*)(l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__0));
lean_inc_ref(v___y_1461_);
lean_inc_ref(v___y_1466_);
lean_inc_ref(v___y_1462_);
v___x_1486_ = l_Lean_Name_mkStr4(v___y_1462_, v___y_1466_, v___y_1461_, v___x_1485_);
v___x_1487_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76));
lean_inc(v___x_1484_);
v___x_1488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1484_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
lean_inc(v___y_1463_);
v___x_1489_ = l_Lean_Syntax_node2(v___x_1484_, v___x_1486_, v___x_1488_, v___y_1463_);
v___y_1419_ = v___y_1452_;
v___y_1420_ = v_fst_1468_;
v___y_1421_ = v___y_1455_;
v___y_1422_ = v___y_1457_;
v___y_1423_ = v___y_1456_;
v___y_1424_ = v___y_1458_;
v___y_1425_ = v___y_1459_;
v___y_1426_ = v___x_1473_;
v___y_1427_ = v_pathLit_1474_;
v___y_1428_ = v___y_1460_;
v___y_1429_ = v___y_1461_;
v___y_1430_ = v___y_1462_;
v___y_1431_ = v___y_1463_;
v___y_1432_ = v___y_1464_;
v___y_1433_ = v___y_1465_;
v___y_1434_ = v___y_1466_;
v___y_1435_ = v___x_1472_;
v___y_1436_ = v___y_1467_;
v_moduleTerm_1437_ = v___x_1489_;
v___y_1438_ = v___y_1454_;
v_quotContext_1439_ = v_quotContext_1480_;
v_currMacroScope_1440_ = v_currMacroScope_1481_;
v_ref_1441_ = v_ref_1482_;
v___y_1442_ = v___y_1453_;
goto v___jp_1418_;
}
}
v___jp_1490_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1494_ = lean_unsigned_to_nat(1u);
v___x_1495_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1494_);
lean_inc(v___x_1495_);
v___x_1496_ = l_Lean_Syntax_matchesNull(v___x_1495_, v___x_1494_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_dec(v___x_1495_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1497_ = lean_box(1);
v___x_1498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
lean_ctor_set(v___x_1498_, 1, v___y_1493_);
return v___x_1498_;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1499_ = l_Lean_Syntax_getArg(v___x_1495_, v___x_1134_);
lean_dec(v___x_1495_);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77));
v___x_1501_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79));
lean_inc(v___x_1499_);
v___x_1502_ = l_Lean_Syntax_isOfKind(v___x_1499_, v___x_1501_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec(v___x_1499_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1503_ = lean_box(1);
v___x_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v___y_1493_);
return v___x_1504_;
}
else
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = l_Lean_Syntax_getArg(v___x_1499_, v___x_1494_);
lean_dec(v___x_1499_);
lean_inc(v___x_1505_);
v___x_1506_ = l_Lean_Syntax_matchesNull(v___x_1505_, v___x_1494_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec(v___x_1505_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1507_ = lean_box(1);
v___x_1508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v___y_1493_);
return v___x_1508_;
}
else
{
lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v___x_1509_ = l_Lean_Syntax_getArg(v___x_1505_, v___x_1134_);
lean_dec(v___x_1505_);
v___x_1510_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81));
lean_inc(v___x_1509_);
v___x_1511_ = l_Lean_Syntax_isOfKind(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v___x_1509_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1512_ = lean_box(1);
v___x_1513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
lean_ctor_set(v___x_1513_, 1, v___y_1493_);
return v___x_1513_;
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1514_ = l_Lean_Syntax_getArg(v___x_1509_, v___x_1134_);
v___x_1515_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83));
lean_inc(v___x_1514_);
v___x_1516_ = l_Lean_Syntax_isOfKind(v___x_1514_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_dec(v___x_1514_);
lean_dec(v___x_1509_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1517_ = lean_box(1);
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
lean_ctor_set(v___x_1518_, 1, v___y_1493_);
return v___x_1518_;
}
else
{
lean_object* v___x_1519_; uint8_t v___x_1520_; 
v___x_1519_ = l_Lean_Syntax_getArg(v___x_1514_, v___x_1134_);
lean_dec(v___x_1514_);
v___x_1520_ = l_Lean_Syntax_matchesNull(v___x_1519_, v___x_1134_);
if (v___x_1520_ == 0)
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec(v___x_1509_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1521_ = lean_box(1);
v___x_1522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
lean_ctor_set(v___x_1522_, 1, v___y_1493_);
return v___x_1522_;
}
else
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1523_ = l_Lean_Syntax_getArg(v___x_1509_, v___x_1494_);
lean_dec(v___x_1509_);
v___x_1524_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1525_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1526_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__1));
lean_inc(v___x_1523_);
v___x_1528_ = l_Lean_Syntax_isOfKind(v___x_1523_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
lean_dec(v___x_1523_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1529_ = lean_box(1);
v___x_1530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
lean_ctor_set(v___x_1530_, 1, v___y_1493_);
return v___x_1530_;
}
else
{
lean_object* v_m_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v_m_1531_ = l_Lean_Syntax_getArg(v___x_1523_, v___x_1494_);
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7));
lean_inc(v_m_1531_);
v___x_1533_ = l_Lean_Syntax_isOfKind(v_m_1531_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_dec(v_m_1531_);
lean_dec(v___x_1523_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1534_ = lean_box(1);
v___x_1535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
lean_ctor_set(v___x_1535_, 1, v___y_1493_);
return v___x_1535_;
}
else
{
lean_object* v___x_1536_; lean_object* v_e_1537_; uint8_t v___x_1538_; 
v___x_1536_ = lean_unsigned_to_nat(2u);
v_e_1537_ = l_Lean_Syntax_getArg(v___x_1523_, v___x_1536_);
lean_dec(v___x_1523_);
lean_inc(v_e_1537_);
v___x_1538_ = l_Lean_Syntax_isOfKind(v_e_1537_, v___x_1532_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1539_ = lean_box(1);
v___x_1540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
lean_ctor_set(v___x_1540_, 1, v___y_1493_);
return v___x_1540_;
}
else
{
lean_object* v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1536_);
v___x_1542_ = l_Lean_Syntax_matchesNull(v___x_1541_, v___x_1134_);
if (v___x_1542_ == 0)
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1543_ = lean_box(1);
v___x_1544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
lean_ctor_set(v___x_1544_, 1, v___y_1493_);
return v___x_1544_;
}
else
{
lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v___x_1545_ = lean_unsigned_to_nat(3u);
v___x_1546_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1545_);
v___x_1547_ = l_Lean_Syntax_matchesNull(v___x_1546_, v___x_1134_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1548_ = lean_box(1);
v___x_1549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
lean_ctor_set(v___x_1549_, 1, v___y_1493_);
return v___x_1549_;
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v___x_1550_ = lean_unsigned_to_nat(4u);
v___x_1551_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1550_);
v___x_1552_ = l_Lean_Syntax_matchesNull(v___x_1551_, v___x_1134_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1553_ = lean_box(1);
v___x_1554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
lean_ctor_set(v___x_1554_, 1, v___y_1493_);
return v___x_1554_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_unsigned_to_nat(5u);
v___x_1556_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1555_);
v___x_1557_ = l_Lean_Syntax_matchesNull(v___x_1556_, v___x_1134_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v___x_1135_);
lean_dec(v_x_1114_);
v___x_1558_ = lean_box(1);
v___x_1559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
lean_ctor_set(v___x_1559_, 1, v___y_1493_);
return v___x_1559_;
}
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1560_ = lean_unsigned_to_nat(6u);
v___x_1561_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1560_);
lean_dec(v___x_1135_);
v___x_1562_ = l_Lean_Syntax_matchesNull(v___x_1561_, v___x_1134_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
lean_dec(v_x_1114_);
v___x_1563_ = lean_box(1);
v___x_1564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
lean_ctor_set(v___x_1564_, 1, v___y_1493_);
return v___x_1564_;
}
else
{
lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1565_ = l_Lean_Syntax_getArg(v_x_1114_, v___x_1494_);
lean_dec(v_x_1114_);
v___x_1566_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85));
lean_inc(v___x_1565_);
v___x_1567_ = l_Lean_Syntax_isOfKind(v___x_1565_, v___x_1566_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1568_ = lean_box(1);
v___x_1569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
lean_ctor_set(v___x_1569_, 1, v___y_1493_);
return v___x_1569_;
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1570_ = l_Lean_Syntax_getArg(v___x_1565_, v___x_1494_);
v___x_1571_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87));
lean_inc(v___x_1570_);
v___x_1572_ = l_Lean_Syntax_isOfKind(v___x_1570_, v___x_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
lean_dec(v___x_1570_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1573_ = lean_box(1);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___y_1493_);
return v___x_1574_;
}
else
{
lean_object* v_n_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v_n_1575_ = l_Lean_Syntax_getArg(v___x_1570_, v___x_1134_);
v___x_1576_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89));
lean_inc(v_n_1575_);
v___x_1577_ = l_Lean_Syntax_isOfKind(v_n_1575_, v___x_1576_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_dec(v_n_1575_);
lean_dec(v___x_1570_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1578_ = lean_box(1);
v___x_1579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v___y_1493_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = l_Lean_Syntax_getArg(v___x_1570_, v___x_1494_);
lean_dec(v___x_1570_);
v___x_1581_ = l_Lean_Syntax_matchesNull(v___x_1580_, v___x_1134_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_n_1575_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1582_ = lean_box(1);
v___x_1583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v___y_1493_);
return v___x_1583_;
}
else
{
lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1584_ = l_Lean_Syntax_getArg(v___x_1565_, v___x_1536_);
v___x_1585_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91));
lean_inc(v___x_1584_);
v___x_1586_ = l_Lean_Syntax_isOfKind(v___x_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
lean_dec(v___x_1584_);
lean_dec(v_n_1575_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1587_ = lean_box(1);
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v___y_1493_);
return v___x_1588_;
}
else
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = l_Lean_Syntax_getArg(v___x_1584_, v___x_1134_);
v___x_1590_ = l_Lean_Syntax_matchesNull(v___x_1589_, v___x_1134_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
lean_dec(v___x_1584_);
lean_dec(v_n_1575_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1591_ = lean_box(1);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
lean_ctor_set(v___x_1592_, 1, v___y_1493_);
return v___x_1592_;
}
else
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1593_ = l_Lean_Syntax_getArg(v___x_1584_, v___x_1494_);
lean_dec(v___x_1584_);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
lean_inc(v___x_1593_);
v___x_1595_ = l_Lean_Syntax_isOfKind(v___x_1593_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec(v___x_1593_);
lean_dec(v_n_1575_);
lean_dec(v___x_1565_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1596_ = lean_box(1);
v___x_1597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
lean_ctor_set(v___x_1597_, 1, v___y_1493_);
return v___x_1597_;
}
else
{
lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1598_ = l_Lean_Syntax_getArg(v___x_1565_, v___x_1545_);
lean_dec(v___x_1565_);
v___x_1599_ = l_Lean_Syntax_matchesNull(v___x_1598_, v___x_1134_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec(v___x_1593_);
lean_dec(v_n_1575_);
lean_dec(v_e_1537_);
lean_dec(v_m_1531_);
lean_dec(v_doc_1491_);
v___x_1600_ = lean_box(1);
v___x_1601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v___y_1493_);
return v___x_1601_;
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v_spec_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1602_ = l_Lean_Syntax_getArg(v___x_1593_, v___x_1494_);
lean_dec(v___x_1593_);
v___x_1603_ = l_Lean_TSyntax_getString(v_e_1537_);
lean_dec(v_e_1537_);
v___x_1604_ = lean_string_utf8_byte_size(v___x_1603_);
v___x_1605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set(v___x_1605_, 1, v___x_1134_);
lean_ctor_set(v___x_1605_, 2, v___x_1604_);
v___x_1606_ = l_String_Slice_trimAscii(v___x_1605_);
v_spec_1607_ = l_String_Slice_toString(v___x_1606_);
lean_dec_ref(v___x_1606_);
v___x_1608_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94));
v___x_1609_ = lean_string_utf8_byte_size(v_spec_1607_);
v___x_1610_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95);
v___x_1611_ = lean_nat_dec_le(v___x_1610_, v___x_1609_);
if (v___x_1611_ == 0)
{
v___y_1452_ = v___x_1510_;
v___y_1453_ = v___y_1493_;
v___y_1454_ = v___y_1492_;
v___y_1455_ = v___x_1571_;
v___y_1456_ = v_n_1575_;
v___y_1457_ = v___x_1594_;
v___y_1458_ = v___x_1602_;
v___y_1459_ = v___x_1501_;
v___y_1460_ = v___x_1515_;
v___y_1461_ = v___x_1526_;
v___y_1462_ = v___x_1524_;
v___y_1463_ = v_m_1531_;
v___y_1464_ = v___x_1500_;
v___y_1465_ = v_doc_1491_;
v___y_1466_ = v___x_1525_;
v___y_1467_ = v___x_1536_;
v_fst_1468_ = v___x_1611_;
v_snd_1469_ = v_spec_1607_;
goto v___jp_1451_;
}
else
{
uint8_t v___x_1612_; 
v___x_1612_ = lean_string_memcmp(v_spec_1607_, v___x_1608_, v___x_1134_, v___x_1134_, v___x_1610_);
if (v___x_1612_ == 0)
{
v___y_1452_ = v___x_1510_;
v___y_1453_ = v___y_1493_;
v___y_1454_ = v___y_1492_;
v___y_1455_ = v___x_1571_;
v___y_1456_ = v_n_1575_;
v___y_1457_ = v___x_1594_;
v___y_1458_ = v___x_1602_;
v___y_1459_ = v___x_1501_;
v___y_1460_ = v___x_1515_;
v___y_1461_ = v___x_1526_;
v___y_1462_ = v___x_1524_;
v___y_1463_ = v_m_1531_;
v___y_1464_ = v___x_1500_;
v___y_1465_ = v_doc_1491_;
v___y_1466_ = v___x_1525_;
v___y_1467_ = v___x_1536_;
v_fst_1468_ = v___x_1612_;
v_snd_1469_ = v_spec_1607_;
goto v___jp_1451_;
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
lean_inc_ref(v_spec_1607_);
v___x_1613_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1613_, 0, v_spec_1607_);
lean_ctor_set(v___x_1613_, 1, v___x_1134_);
lean_ctor_set(v___x_1613_, 2, v___x_1609_);
v___x_1614_ = l_String_Slice_Pos_nextn(v___x_1613_, v___x_1134_, v___x_1550_);
lean_dec_ref_known(v___x_1613_, 3);
v___x_1615_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1615_, 0, v_spec_1607_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
lean_ctor_set(v___x_1615_, 2, v___x_1609_);
v___x_1616_ = l_String_Slice_trimAscii(v___x_1615_);
v___x_1617_ = l_String_Slice_toString(v___x_1616_);
lean_dec_ref(v___x_1616_);
v___y_1452_ = v___x_1510_;
v___y_1453_ = v___y_1493_;
v___y_1454_ = v___y_1492_;
v___y_1455_ = v___x_1571_;
v___y_1456_ = v_n_1575_;
v___y_1457_ = v___x_1594_;
v___y_1458_ = v___x_1602_;
v___y_1459_ = v___x_1501_;
v___y_1460_ = v___x_1515_;
v___y_1461_ = v___x_1526_;
v___y_1462_ = v___x_1524_;
v___y_1463_ = v_m_1531_;
v___y_1464_ = v___x_1500_;
v___y_1465_ = v_doc_1491_;
v___y_1466_ = v___x_1525_;
v___y_1467_ = v___x_1536_;
v_fst_1468_ = v___x_1137_;
v_snd_1469_ = v___x_1617_;
goto v___jp_1451_;
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
}
v___jp_1117_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1124_ = lean_array_push(v___y_1120_, v___y_1119_);
v___x_1125_ = lean_array_push(v___x_1124_, v_record_1122_);
lean_inc(v___y_1118_);
v___x_1126_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1126_, 0, v___y_1121_);
lean_ctor_set(v___x_1126_, 1, v___y_1118_);
lean_ctor_set(v___x_1126_, 2, v___x_1125_);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___y_1123_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___boxed(lean_object* v_x_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(v_x_1632_, v_a_1633_, v_a_1634_);
lean_dec_ref(v_a_1633_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object* v_declName_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v___x_1639_; lean_object* v_env_1640_; uint8_t v___x_1641_; 
v___x_1639_ = lean_st_ref_get(v_a_1637_);
v_env_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc_ref_n(v_env_1640_, 2);
lean_dec(v___x_1639_);
lean_inc(v_declName_1636_);
v___x_1641_ = l_Lean_isStructure(v_env_1640_, v_declName_1636_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_dec_ref(v_env_1640_);
lean_dec(v_declName_1636_);
v___x_1642_ = lean_box(0);
v___x_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
return v___x_1643_;
}
else
{
uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1644_ = 0;
v___x_1645_ = l_Lean_getStructureFieldsFlattened(v_env_1640_, v_declName_1636_, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object* v_declName_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1648_, v_a_1649_);
lean_dec(v_a_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object* v_declName_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1652_, v_a_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object* v_declName_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(v_declName_1657_, v_a_1658_, v_a_1659_);
lean_dec(v_a_1659_);
lean_dec_ref(v_a_1658_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object* v___x_1664_, lean_object* v_as_x27_1665_, lean_object* v_b_1666_){
_start:
{
if (lean_obj_tag(v_as_x27_1665_) == 0)
{
lean_object* v___x_1668_; 
lean_dec_ref(v___x_1664_);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_b_1666_);
return v___x_1668_;
}
else
{
lean_object* v_head_1669_; lean_object* v_tail_1670_; lean_object* v_snd_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1701_; 
v_head_1669_ = lean_ctor_get(v_as_x27_1665_, 0);
v_tail_1670_ = lean_ctor_get(v_as_x27_1665_, 1);
v_snd_1671_ = lean_ctor_get(v_b_1666_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_b_1666_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v_b_1666_, 0);
lean_dec(v_unused_1702_);
v___x_1673_ = v_b_1666_;
v_isShared_1674_ = v_isSharedCheck_1701_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_snd_1671_);
lean_dec(v_b_1666_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1701_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
uint8_t v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = 0;
lean_inc(v_head_1669_);
lean_inc_ref(v___x_1664_);
v___x_1682_ = l_Lean_Environment_find_x3f(v___x_1664_, v_head_1669_, v___x_1681_);
if (lean_obj_tag(v___x_1682_) == 1)
{
lean_object* v_val_1683_; 
v_val_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_val_1683_);
lean_dec_ref_known(v___x_1682_, 1);
if (lean_obj_tag(v_val_1683_) == 6)
{
lean_object* v_val_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1700_; 
lean_del_object(v___x_1673_);
v_val_1684_ = lean_ctor_get(v_val_1683_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_val_1683_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1686_ = v_val_1683_;
v_isShared_1687_ = v_isSharedCheck_1700_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_val_1684_);
lean_dec(v_val_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1700_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_numFields_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; 
v_numFields_1688_ = lean_ctor_get(v_val_1684_, 4);
lean_inc(v_numFields_1688_);
lean_dec_ref(v_val_1684_);
v___x_1689_ = lean_unsigned_to_nat(0u);
v___x_1690_ = lean_nat_dec_eq(v_numFields_1688_, v___x_1689_);
lean_dec(v_numFields_1688_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
lean_dec_ref(v___x_1664_);
v___x_1691_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
lean_ctor_set(v___x_1692_, 1, v_snd_1671_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1692_);
v___x_1694_ = v___x_1686_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_del_object(v___x_1686_);
v___x_1696_ = lean_box(0);
lean_inc(v_head_1669_);
v___x_1697_ = lean_array_push(v_snd_1671_, v_head_1669_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v_as_x27_1665_ = v_tail_1670_;
v_b_1666_ = v___x_1698_;
goto _start;
}
}
}
else
{
lean_dec(v_val_1683_);
lean_dec_ref(v___x_1664_);
goto v___jp_1675_;
}
}
else
{
lean_dec(v___x_1682_);
lean_dec_ref(v___x_1664_);
goto v___jp_1675_;
}
v___jp_1675_:
{
lean_object* v___x_1676_; lean_object* v___x_1678_; 
v___x_1676_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1676_);
v___x_1678_ = v___x_1673_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1676_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v_snd_1671_);
v___x_1678_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
return v___x_1679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object* v___x_1703_, lean_object* v_as_x27_1704_, lean_object* v_b_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1703_, v_as_x27_1704_, v_b_1705_);
lean_dec(v_as_x27_1704_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object* v_declName_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v___x_1720_; lean_object* v_env_1724_; uint8_t v___x_1725_; lean_object* v___x_1726_; 
v___x_1720_ = lean_st_ref_get(v_a_1715_);
v_env_1724_ = lean_ctor_get(v___x_1720_, 0);
lean_inc_ref_n(v_env_1724_, 2);
lean_dec(v___x_1720_);
v___x_1725_ = 0;
v___x_1726_ = l_Lean_Environment_find_x3f(v_env_1724_, v_declName_1713_, v___x_1725_);
if (lean_obj_tag(v___x_1726_) == 1)
{
lean_object* v_val_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1757_; 
v_val_1727_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1757_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_val_1727_);
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1757_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
if (lean_obj_tag(v_val_1727_) == 5)
{
lean_object* v_val_1731_; lean_object* v_numParams_1732_; lean_object* v_numIndices_1733_; lean_object* v_ctors_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v_val_1731_ = lean_ctor_get(v_val_1727_, 0);
lean_inc_ref(v_val_1731_);
lean_dec_ref_known(v_val_1727_, 1);
v_numParams_1732_ = lean_ctor_get(v_val_1731_, 1);
lean_inc(v_numParams_1732_);
v_numIndices_1733_ = lean_ctor_get(v_val_1731_, 2);
lean_inc(v_numIndices_1733_);
v_ctors_1734_ = lean_ctor_get(v_val_1731_, 4);
lean_inc(v_ctors_1734_);
lean_dec_ref(v_val_1731_);
v___x_1735_ = lean_unsigned_to_nat(0u);
v___x_1736_ = lean_nat_dec_eq(v_numParams_1732_, v___x_1735_);
lean_dec(v_numParams_1732_);
if (v___x_1736_ == 0)
{
lean_dec(v_ctors_1734_);
lean_dec(v_numIndices_1733_);
lean_del_object(v___x_1729_);
lean_dec_ref(v_env_1724_);
goto v___jp_1721_;
}
else
{
uint8_t v___x_1737_; 
v___x_1737_ = lean_nat_dec_eq(v_numIndices_1733_, v___x_1735_);
lean_dec(v_numIndices_1733_);
if (v___x_1737_ == 0)
{
lean_dec(v_ctors_1734_);
lean_del_object(v___x_1729_);
lean_dec_ref(v_env_1724_);
goto v___jp_1721_;
}
else
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1756_; 
v___x_1738_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1));
v___x_1739_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v_env_1724_, v_ctors_1734_, v___x_1738_);
lean_dec(v_ctors_1734_);
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1756_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1756_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v_fst_1744_; 
v_fst_1744_ = lean_ctor_get(v_a_1740_, 0);
if (lean_obj_tag(v_fst_1744_) == 0)
{
lean_object* v_snd_1745_; lean_object* v___x_1747_; 
v_snd_1745_ = lean_ctor_get(v_a_1740_, 1);
lean_inc(v_snd_1745_);
lean_dec(v_a_1740_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v_snd_1745_);
v___x_1747_ = v___x_1729_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_snd_1745_);
v___x_1747_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1749_; 
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1747_);
v___x_1749_ = v___x_1742_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
else
{
lean_object* v_val_1752_; lean_object* v___x_1754_; 
lean_inc_ref(v_fst_1744_);
lean_dec(v_a_1740_);
lean_del_object(v___x_1729_);
v_val_1752_ = lean_ctor_get(v_fst_1744_, 0);
lean_inc(v_val_1752_);
lean_dec_ref_known(v_fst_1744_, 1);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v_val_1752_);
v___x_1754_ = v___x_1742_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_val_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1729_);
lean_dec(v_val_1727_);
lean_dec_ref(v_env_1724_);
goto v___jp_1717_;
}
}
}
else
{
lean_dec(v___x_1726_);
lean_dec_ref(v_env_1724_);
goto v___jp_1717_;
}
v___jp_1717_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = lean_box(0);
v___x_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
return v___x_1719_;
}
v___jp_1721_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_box(0);
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
return v___x_1723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object* v_declName_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1758_, v_a_1759_, v_a_1760_);
lean_dec(v_a_1760_);
lean_dec_ref(v_a_1759_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object* v___x_1763_, lean_object* v_as_1764_, lean_object* v_as_x27_1765_, lean_object* v_b_1766_, lean_object* v_a_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1763_, v_as_x27_1765_, v_b_1766_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object* v___x_1772_, lean_object* v_as_1773_, lean_object* v_as_x27_1774_, lean_object* v_b_1775_, lean_object* v_a_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(v___x_1772_, v_as_1773_, v_as_x27_1774_, v_b_1775_, v_a_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v_as_x27_1774_);
lean_dec(v_as_1773_);
return v_res_1780_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1(void){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1782_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0));
v___x_1783_ = l_Lean_stringToMessageData(v___x_1782_);
return v___x_1783_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3(void){
_start:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1785_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2));
v___x_1786_ = l_Lean_stringToMessageData(v___x_1785_);
return v___x_1786_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5(void){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4));
v___x_1789_ = l_Lean_stringToMessageData(v___x_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object* v_declName_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v___y_1795_; lean_object* v___y_1796_; lean_object* v___x_1803_; lean_object* v_env_1804_; uint8_t v___x_1805_; lean_object* v___x_1806_; 
v___x_1803_ = lean_st_ref_get(v_a_1792_);
v_env_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc_ref(v_env_1804_);
lean_dec(v___x_1803_);
v___x_1805_ = 0;
lean_inc(v_declName_1790_);
v___x_1806_ = l_Lean_Environment_find_x3f(v_env_1804_, v_declName_1790_, v___x_1805_);
if (lean_obj_tag(v___x_1806_) == 1)
{
lean_object* v_val_1807_; 
v_val_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_val_1807_);
lean_dec_ref_known(v___x_1806_, 1);
if (lean_obj_tag(v_val_1807_) == 5)
{
lean_object* v_val_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1825_; 
v_val_1808_ = lean_ctor_get(v_val_1807_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_val_1807_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1810_ = v_val_1807_;
v_isShared_1811_ = v_isSharedCheck_1825_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_val_1808_);
lean_dec(v_val_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1825_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v_numParams_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v_numParams_1812_ = lean_ctor_get(v_val_1808_, 1);
lean_inc(v_numParams_1812_);
lean_dec_ref(v_val_1808_);
v___x_1813_ = lean_unsigned_to_nat(0u);
v___x_1814_ = lean_nat_dec_eq(v_numParams_1812_, v___x_1813_);
lean_dec(v_numParams_1812_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
lean_del_object(v___x_1810_);
v___x_1815_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1816_ = l_Lean_MessageData_ofName(v_declName_1790_);
v___x_1817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5);
v___x_1819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1817_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
v___x_1820_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1819_, v_a_1791_, v_a_1792_);
return v___x_1820_;
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
lean_dec(v_declName_1790_);
v___x_1821_ = lean_box(0);
if (v_isShared_1811_ == 0)
{
lean_ctor_set_tag(v___x_1810_, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1821_);
v___x_1823_ = v___x_1810_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
else
{
lean_dec(v_val_1807_);
v___y_1795_ = v_a_1791_;
v___y_1796_ = v_a_1792_;
goto v___jp_1794_;
}
}
else
{
lean_dec(v___x_1806_);
v___y_1795_ = v_a_1791_;
v___y_1796_ = v_a_1792_;
goto v___jp_1794_;
}
v___jp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1797_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1798_ = l_Lean_MessageData_ofName(v_declName_1790_);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3);
v___x_1801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1801_, v___y_1795_, v___y_1796_);
return v___x_1802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object* v_declName_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1826_, v_a_1827_, v_a_1828_);
lean_dec(v_a_1828_);
lean_dec_ref(v_a_1827_);
return v_res_1830_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5));
v___x_1846_ = l_String_toRawSubstring_x27(v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t v_sz_1865_, size_t v_i_1866_, lean_object* v_bs_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
uint8_t v___x_1871_; 
v___x_1871_ = lean_usize_dec_lt(v_i_1866_, v_sz_1865_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; 
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v_bs_1867_);
return v___x_1872_;
}
else
{
uint8_t v___x_1873_; lean_object* v_v_1874_; lean_object* v___x_1875_; lean_object* v_bs_x27_1876_; lean_object* v___x_1877_; 
v___x_1873_ = 0;
v_v_1874_ = lean_array_uget(v_bs_1867_, v_i_1866_);
v___x_1875_ = lean_unsigned_to_nat(0u);
v_bs_x27_1876_ = lean_array_uset(v_bs_1867_, v_i_1866_, v___x_1875_);
v___x_1877_ = l_Lean_Elab_Command_getRef___redArg(v___y_1868_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v___x_1877_, 1);
v___x_1879_ = l_Lean_SourceInfo_fromRef(v_a_1878_, v___x_1873_);
lean_dec(v_a_1878_);
v___x_1880_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1868_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v_a_1883_; lean_object* v_quotContext_x3f_1909_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v_quotContext_x3f_1909_ = lean_ctor_get(v___y_1868_, 5);
if (lean_obj_tag(v_quotContext_x3f_1909_) == 0)
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1869_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v_a_1883_ = v_a_1911_;
goto v___jp_1882_;
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_a_1881_);
lean_dec(v___x_1879_);
lean_dec_ref(v_bs_x27_1876_);
lean_dec(v_v_1874_);
v_a_1912_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1910_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1910_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
else
{
lean_object* v_val_1920_; 
v_val_1920_ = lean_ctor_get(v_quotContext_x3f_1909_, 0);
lean_inc(v_val_1920_);
v_a_1883_ = v_val_1920_;
goto v___jp_1882_;
}
v___jp_1882_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; size_t v___x_1905_; size_t v___x_1906_; lean_object* v___x_1907_; 
v___x_1884_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_1885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_1879_, 7);
v___x_1886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1879_);
lean_ctor_set(v___x_1886_, 1, v___x_1885_);
v___x_1887_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_1874_);
v___x_1888_ = l_Lean_mkIdent(v_v_1874_);
v___x_1889_ = l_Lean_Syntax_node1(v___x_1879_, v___x_1887_, v___x_1888_);
v___x_1890_ = l_Lean_Syntax_node1(v___x_1879_, v___x_1887_, v___x_1889_);
v___x_1891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1879_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
v___x_1893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1894_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_1895_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
v___x_1896_ = l_Lean_addMacroScope(v_a_1883_, v___x_1895_, v_a_1881_);
v___x_1897_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_1898_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1879_);
lean_ctor_set(v___x_1898_, 1, v___x_1894_);
lean_ctor_set(v___x_1898_, 2, v___x_1896_);
lean_ctor_set(v___x_1898_, 3, v___x_1897_);
v___x_1899_ = l_Lean_Name_getString_x21(v_v_1874_);
lean_dec(v_v_1874_);
v___x_1900_ = lean_box(2);
v___x_1901_ = l_Lean_Syntax_mkStrLit(v___x_1899_, v___x_1900_);
v___x_1902_ = l_Lean_Syntax_node1(v___x_1879_, v___x_1887_, v___x_1901_);
v___x_1903_ = l_Lean_Syntax_node2(v___x_1879_, v___x_1893_, v___x_1898_, v___x_1902_);
v___x_1904_ = l_Lean_Syntax_node4(v___x_1879_, v___x_1884_, v___x_1886_, v___x_1890_, v___x_1892_, v___x_1903_);
v___x_1905_ = ((size_t)1ULL);
v___x_1906_ = lean_usize_add(v_i_1866_, v___x_1905_);
v___x_1907_ = lean_array_uset(v_bs_x27_1876_, v_i_1866_, v___x_1904_);
v_i_1866_ = v___x_1906_;
v_bs_1867_ = v___x_1907_;
goto _start;
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
lean_dec(v___x_1879_);
lean_dec_ref(v_bs_x27_1876_);
lean_dec(v_v_1874_);
v_a_1921_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1880_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1880_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec_ref(v_bs_x27_1876_);
lean_dec(v_v_1874_);
v_a_1929_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1877_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1877_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object* v_sz_1937_, lean_object* v_i_1938_, lean_object* v_bs_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
size_t v_sz_boxed_1943_; size_t v_i_boxed_1944_; lean_object* v_res_1945_; 
v_sz_boxed_1943_ = lean_unbox_usize(v_sz_1937_);
lean_dec(v_sz_1937_);
v_i_boxed_1944_ = lean_unbox_usize(v_i_1938_);
lean_dec(v_i_1938_);
v_res_1945_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_boxed_1943_, v_i_boxed_1944_, v_bs_1939_, v___y_1940_, v___y_1941_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t v_sz_1946_, size_t v_i_1947_, lean_object* v_bs_1948_){
_start:
{
uint8_t v___x_1949_; 
v___x_1949_ = lean_usize_dec_lt(v_i_1947_, v_sz_1946_);
if (v___x_1949_ == 0)
{
return v_bs_1948_;
}
else
{
lean_object* v_v_1950_; lean_object* v___x_1951_; lean_object* v_bs_x27_1952_; size_t v___x_1953_; size_t v___x_1954_; lean_object* v___x_1955_; 
v_v_1950_ = lean_array_uget(v_bs_1948_, v_i_1947_);
v___x_1951_ = lean_unsigned_to_nat(0u);
v_bs_x27_1952_ = lean_array_uset(v_bs_1948_, v_i_1947_, v___x_1951_);
v___x_1953_ = ((size_t)1ULL);
v___x_1954_ = lean_usize_add(v_i_1947_, v___x_1953_);
v___x_1955_ = lean_array_uset(v_bs_x27_1952_, v_i_1947_, v_v_1950_);
v_i_1947_ = v___x_1954_;
v_bs_1948_ = v___x_1955_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object* v_sz_1957_, lean_object* v_i_1958_, lean_object* v_bs_1959_){
_start:
{
size_t v_sz_boxed_1960_; size_t v_i_boxed_1961_; lean_object* v_res_1962_; 
v_sz_boxed_1960_ = lean_unbox_usize(v_sz_1957_);
lean_dec(v_sz_1957_);
v_i_boxed_1961_ = lean_unbox_usize(v_i_1958_);
lean_dec(v_i_1958_);
v_res_1962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_boxed_1960_, v_i_boxed_1961_, v_bs_1959_);
return v_res_1962_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_1979_ = l_String_toRawSubstring_x27(v___x_1978_);
return v___x_1979_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25(void){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24));
v___x_2027_ = l_String_toRawSubstring_x27(v___x_2026_);
return v___x_2027_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35(void){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34));
v___x_2053_ = l_String_toRawSubstring_x27(v___x_2052_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object* v___x_2056_, lean_object* v_declName_2057_, size_t v_sz_2058_, size_t v_i_2059_, lean_object* v_bs_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
uint8_t v___x_2064_; 
v___x_2064_ = lean_usize_dec_lt(v_i_2059_, v_sz_2058_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; 
lean_dec(v_declName_2057_);
v___x_2065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2065_, 0, v_bs_2060_);
return v___x_2065_;
}
else
{
uint8_t v___x_2066_; lean_object* v___x_2067_; uint8_t v___x_2068_; lean_object* v_v_2069_; lean_object* v___x_2070_; lean_object* v_bs_x27_2071_; lean_object* v___x_2072_; 
v___x_2066_ = 0;
v___x_2067_ = lean_unsigned_to_nat(1u);
v___x_2068_ = lean_nat_dec_eq(v___x_2056_, v___x_2067_);
v_v_2069_ = lean_array_uget(v_bs_2060_, v_i_2059_);
v___x_2070_ = lean_unsigned_to_nat(0u);
v_bs_x27_2071_ = lean_array_uset(v_bs_2060_, v_i_2059_, v___x_2070_);
v___x_2072_ = l_Lean_Elab_Command_getRef___redArg(v___y_2061_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2073_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = l_Lean_SourceInfo_fromRef(v_a_2073_, v___x_2066_);
lean_dec(v_a_2073_);
v___x_2075_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2061_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v_a_2078_; lean_object* v_quotContext_x3f_2125_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v_quotContext_x3f_2125_ = lean_ctor_get(v___y_2061_, 5);
if (lean_obj_tag(v_quotContext_x3f_2125_) == 0)
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2062_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 1);
v_a_2078_ = v_a_2127_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec(v_a_2076_);
lean_dec(v___x_2074_);
lean_dec_ref(v_bs_x27_2071_);
lean_dec(v_v_2069_);
lean_dec(v_declName_2057_);
v_a_2128_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2126_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2126_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
else
{
lean_object* v_val_2136_; 
v_val_2136_ = lean_ctor_get(v_quotContext_x3f_2125_, 0);
lean_inc(v_val_2136_);
v_a_2078_ = v_val_2136_;
goto v___jp_2077_;
}
v___jp_2077_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; size_t v___x_2121_; size_t v___x_2122_; lean_object* v___x_2123_; 
v___x_2079_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1));
v___x_2080_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3));
v___x_2081_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
lean_inc_n(v___x_2074_, 15);
v___x_2082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2074_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5));
v___x_2084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6);
v___x_2085_ = lean_box(0);
lean_inc_n(v_a_2076_, 2);
lean_inc_n(v_a_2078_, 2);
v___x_2086_ = l_Lean_addMacroScope(v_a_2078_, v___x_2085_, v_a_2076_);
v___x_2087_ = lean_box(0);
v___x_2088_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23));
v___x_2089_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2074_);
lean_ctor_set(v___x_2089_, 1, v___x_2084_);
lean_ctor_set(v___x_2089_, 2, v___x_2086_);
lean_ctor_set(v___x_2089_, 3, v___x_2088_);
v___x_2090_ = l_Lean_Syntax_node1(v___x_2074_, v___x_2083_, v___x_2089_);
v___x_2091_ = l_Lean_Syntax_node2(v___x_2074_, v___x_2080_, v___x_2082_, v___x_2090_);
v___x_2092_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_2069_);
v___x_2093_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_2069_, v___x_2068_);
v___x_2094_ = lean_box(2);
v___x_2095_ = l_Lean_Syntax_mkStrLit(v___x_2093_, v___x_2094_);
v___x_2096_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2074_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2099_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25);
v___x_2100_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27));
v___x_2101_ = l_Lean_addMacroScope(v_a_2078_, v___x_2100_, v_a_2076_);
v___x_2102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31));
v___x_2103_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2074_);
lean_ctor_set(v___x_2103_, 1, v___x_2099_);
lean_ctor_set(v___x_2103_, 2, v___x_2101_);
lean_ctor_set(v___x_2103_, 3, v___x_2102_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33));
lean_inc(v_declName_2057_);
v___x_2105_ = l_Lean_Name_append(v_declName_2057_, v_v_2069_);
v___x_2106_ = l_Lean_mkIdent(v___x_2105_);
v___x_2107_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2108_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2109_ = l_Lean_addMacroScope(v_a_2078_, v___x_2108_, v_a_2076_);
v___x_2110_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2074_);
lean_ctor_set(v___x_2110_, 1, v___x_2107_);
lean_ctor_set(v___x_2110_, 2, v___x_2109_);
lean_ctor_set(v___x_2110_, 3, v___x_2087_);
v___x_2111_ = l_Lean_Syntax_node1(v___x_2074_, v___x_2092_, v___x_2110_);
v___x_2112_ = l_Lean_Syntax_node2(v___x_2074_, v___x_2098_, v___x_2106_, v___x_2111_);
v___x_2113_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_2114_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2074_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
lean_inc_ref(v___x_2114_);
lean_inc(v___x_2091_);
v___x_2115_ = l_Lean_Syntax_node3(v___x_2074_, v___x_2104_, v___x_2091_, v___x_2112_, v___x_2114_);
v___x_2116_ = l_Lean_Syntax_node1(v___x_2074_, v___x_2092_, v___x_2115_);
v___x_2117_ = l_Lean_Syntax_node2(v___x_2074_, v___x_2098_, v___x_2103_, v___x_2116_);
v___x_2118_ = l_Lean_Syntax_node1(v___x_2074_, v___x_2092_, v___x_2117_);
v___x_2119_ = l_Lean_Syntax_node3(v___x_2074_, v___x_2092_, v___x_2095_, v___x_2097_, v___x_2118_);
v___x_2120_ = l_Lean_Syntax_node3(v___x_2074_, v___x_2079_, v___x_2091_, v___x_2119_, v___x_2114_);
v___x_2121_ = ((size_t)1ULL);
v___x_2122_ = lean_usize_add(v_i_2059_, v___x_2121_);
v___x_2123_ = lean_array_uset(v_bs_x27_2071_, v_i_2059_, v___x_2120_);
v_i_2059_ = v___x_2122_;
v_bs_2060_ = v___x_2123_;
goto _start;
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec(v___x_2074_);
lean_dec_ref(v_bs_x27_2071_);
lean_dec(v_v_2069_);
lean_dec(v_declName_2057_);
v_a_2137_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2075_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2075_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v_bs_x27_2071_);
lean_dec(v_v_2069_);
lean_dec(v_declName_2057_);
v_a_2145_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2072_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2072_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object* v___x_2153_, lean_object* v_declName_2154_, lean_object* v_sz_2155_, lean_object* v_i_2156_, lean_object* v_bs_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
size_t v_sz_boxed_2161_; size_t v_i_boxed_2162_; lean_object* v_res_2163_; 
v_sz_boxed_2161_ = lean_unbox_usize(v_sz_2155_);
lean_dec(v_sz_2155_);
v_i_boxed_2162_ = lean_unbox_usize(v_i_2156_);
lean_dec(v_i_2156_);
v_res_2163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_2153_, v_declName_2154_, v_sz_boxed_2161_, v_i_boxed_2162_, v_bs_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___x_2153_);
return v_res_2163_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__3(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__2));
v___x_2172_ = l_String_toRawSubstring_x27(v___x_2171_);
return v___x_2172_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__17(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2208_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_2209_ = l_String_toRawSubstring_x27(v___x_2208_);
return v___x_2209_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__33(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__32));
v___x_2249_ = l_Lean_stringToMessageData(v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__35(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__34));
v___x_2252_ = l_Lean_stringToMessageData(v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object* v_declNames_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; uint8_t v___x_2259_; 
v___x_2257_ = lean_array_get_size(v_declNames_2253_);
v___x_2258_ = lean_unsigned_to_nat(1u);
v___x_2259_ = lean_nat_dec_eq(v___x_2257_, v___x_2258_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2260_ = lean_box(v___x_2259_);
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
return v___x_2261_;
}
else
{
lean_object* v___x_2262_; uint8_t v___x_2263_; lean_object* v___x_2264_; lean_object* v_declName_2265_; lean_object* v___x_2266_; 
v___x_2262_ = lean_box(0);
v___x_2263_ = 0;
v___x_2264_ = lean_unsigned_to_nat(0u);
v_declName_2265_ = lean_array_get_borrowed(v___x_2262_, v_declNames_2253_, v___x_2264_);
lean_inc(v_declName_2265_);
v___x_2266_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2265_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v_a_2269_; 
lean_dec_ref_known(v___x_2266_, 1);
lean_inc_n(v_declName_2265_, 2);
v___x_2267_ = l_Lean_mkIdent(v_declName_2265_);
v___x_2268_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2265_, v_a_2255_);
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref(v___x_2268_);
if (lean_obj_tag(v_a_2269_) == 1)
{
lean_object* v_val_2270_; size_t v_sz_2271_; size_t v___x_2272_; lean_object* v___x_2273_; 
v_val_2270_ = lean_ctor_get(v_a_2269_, 0);
lean_inc(v_val_2270_);
lean_dec_ref_known(v_a_2269_, 1);
v_sz_2271_ = lean_array_size(v_val_2270_);
v___x_2272_ = ((size_t)0ULL);
lean_inc(v_declName_2265_);
v___x_2273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_2257_, v_declName_2265_, v_sz_2271_, v___x_2272_, v_val_2270_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v_a_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v_a_2279_; lean_object* v_a_2281_; lean_object* v_quotContext_x3f_2371_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = l_Lean_Elab_Command_getRef___redArg(v_a_2254_);
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref(v___x_2275_);
v___x_2277_ = l_Lean_SourceInfo_fromRef(v_a_2276_, v___x_2263_);
lean_dec(v_a_2276_);
v___x_2278_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2254_);
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref(v___x_2278_);
v_quotContext_x3f_2371_ = lean_ctor_get(v_a_2254_, 5);
if (lean_obj_tag(v_quotContext_x3f_2371_) == 0)
{
lean_object* v___x_2372_; lean_object* v_a_2373_; 
v___x_2372_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2255_);
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref(v___x_2372_);
v_a_2281_ = v_a_2373_;
goto v___jp_2280_;
}
else
{
lean_object* v_val_2374_; 
v_val_2374_ = lean_ctor_get(v_quotContext_x3f_2371_, 0);
lean_inc(v_val_2374_);
v_a_2281_ = v_val_2374_;
goto v___jp_2280_;
}
v___jp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2282_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2284_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2285_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2277_, 31);
v___x_2286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2277_);
lean_ctor_set(v___x_2286_, 1, v___x_2284_);
lean_ctor_set(v___x_2286_, 2, v___x_2285_);
lean_inc_ref_n(v___x_2286_, 14);
v___x_2287_ = l_Lean_Syntax_node7(v___x_2277_, v___x_2283_, v___x_2286_, v___x_2286_, v___x_2286_, v___x_2286_, v___x_2286_, v___x_2286_, v___x_2286_);
v___x_2288_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83));
v___x_2291_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2290_, v___x_2286_);
v___x_2292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2277_);
lean_ctor_set(v___x_2292_, 1, v___x_2288_);
v___x_2293_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91));
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_2295_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2277_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
v___x_2297_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2298_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2299_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc_n(v_a_2279_, 2);
lean_inc_n(v_a_2281_, 2);
v___x_2300_ = l_Lean_addMacroScope(v_a_2281_, v___x_2299_, v_a_2279_);
v___x_2301_ = lean_box(0);
v___x_2302_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2303_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2277_);
lean_ctor_set(v___x_2303_, 1, v___x_2298_);
lean_ctor_set(v___x_2303_, 2, v___x_2300_);
lean_ctor_set(v___x_2303_, 3, v___x_2302_);
v___x_2304_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2284_, v___x_2267_);
v___x_2305_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2297_, v___x_2303_, v___x_2304_);
v___x_2306_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2294_, v___x_2296_, v___x_2305_);
v___x_2307_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2293_, v___x_2286_, v___x_2306_);
v___x_2308_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_2309_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2310_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2277_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2277_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2277_);
lean_ctor_set(v___x_2316_, 1, v___x_2314_);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2318_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2320_ = l_Lean_addMacroScope(v_a_2281_, v___x_2319_, v_a_2279_);
v___x_2321_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2277_);
lean_ctor_set(v___x_2321_, 1, v___x_2318_);
lean_ctor_set(v___x_2321_, 2, v___x_2320_);
lean_ctor_set(v___x_2321_, 3, v___x_2301_);
v___x_2322_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2284_, v___x_2321_);
v___x_2323_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2277_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__17, &l_Lasm_JS_Meta_mkToJS___closed__17_once, _init_l_Lasm_JS_Meta_mkToJS___closed__17);
v___x_2326_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__19));
v___x_2327_ = l_Lean_addMacroScope(v_a_2281_, v___x_2326_, v_a_2279_);
v___x_2328_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__23));
v___x_2329_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2277_);
lean_ctor_set(v___x_2329_, 1, v___x_2325_);
lean_ctor_set(v___x_2329_, 2, v___x_2327_);
lean_ctor_set(v___x_2329_, 3, v___x_2328_);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2331_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_2332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2277_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2334_ = l_Lean_Syntax_SepArray_ofElems(v___x_2333_, v_a_2274_);
lean_dec(v_a_2274_);
v___x_2335_ = l_Array_append___redArg(v___x_2285_, v___x_2334_);
lean_dec_ref(v___x_2334_);
v___x_2336_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2277_);
lean_ctor_set(v___x_2336_, 1, v___x_2284_);
lean_ctor_set(v___x_2336_, 2, v___x_2335_);
v___x_2337_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_2338_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2277_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = l_Lean_Syntax_node3(v___x_2277_, v___x_2330_, v___x_2332_, v___x_2336_, v___x_2338_);
v___x_2340_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2284_, v___x_2339_);
v___x_2341_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2297_, v___x_2329_, v___x_2340_);
v___x_2342_ = l_Lean_Syntax_node4(v___x_2277_, v___x_2317_, v___x_2322_, v___x_2286_, v___x_2324_, v___x_2341_);
v___x_2343_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2315_, v___x_2316_, v___x_2342_);
v___x_2344_ = l_Lean_Syntax_node1(v___x_2277_, v___x_2284_, v___x_2343_);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2346_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2277_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
v___x_2347_ = l_Lean_Syntax_node3(v___x_2277_, v___x_2311_, v___x_2313_, v___x_2344_, v___x_2346_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2349_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2348_, v___x_2286_, v___x_2286_);
v___x_2350_ = l_Lean_Syntax_node4(v___x_2277_, v___x_2308_, v___x_2310_, v___x_2347_, v___x_2349_, v___x_2286_);
v___x_2351_ = l_Lean_Syntax_node6(v___x_2277_, v___x_2289_, v___x_2291_, v___x_2292_, v___x_2286_, v___x_2286_, v___x_2307_, v___x_2350_);
v___x_2352_ = l_Lean_Syntax_node2(v___x_2277_, v___x_2282_, v___x_2287_, v___x_2351_);
v___x_2353_ = l_Lean_Elab_Command_elabCommand(v___x_2352_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2361_; 
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2361_ == 0)
{
lean_object* v_unused_2362_; 
v_unused_2362_ = lean_ctor_get(v___x_2353_, 0);
lean_dec(v_unused_2362_);
v___x_2355_ = v___x_2353_;
v_isShared_2356_ = v_isSharedCheck_2361_;
goto v_resetjp_2354_;
}
else
{
lean_dec(v___x_2353_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2361_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v___x_2359_; 
v___x_2357_ = lean_box(v___x_2259_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2357_);
v___x_2359_ = v___x_2355_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
else
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
v_a_2363_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2353_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2353_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
else
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
lean_dec(v___x_2267_);
v_a_2375_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v___x_2273_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2273_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
else
{
lean_object* v___x_2383_; 
lean_dec(v_a_2269_);
lean_inc(v_declName_2265_);
v___x_2383_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2265_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
if (lean_obj_tag(v_a_2384_) == 1)
{
lean_object* v_val_2385_; size_t v_sz_2386_; size_t v___x_2387_; lean_object* v___x_2388_; 
v_val_2385_ = lean_ctor_get(v_a_2384_, 0);
lean_inc(v_val_2385_);
lean_dec_ref_known(v_a_2384_, 1);
v_sz_2386_ = lean_array_size(v_val_2385_);
v___x_2387_ = ((size_t)0ULL);
v___x_2388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_2386_, v___x_2387_, v_val_2385_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v_a_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v_a_2394_; lean_object* v_a_2396_; lean_object* v_quotContext_x3f_2484_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = l_Lean_Elab_Command_getRef___redArg(v_a_2254_);
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref(v___x_2390_);
v___x_2392_ = l_Lean_SourceInfo_fromRef(v_a_2391_, v___x_2263_);
lean_dec(v_a_2391_);
v___x_2393_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2254_);
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref(v___x_2393_);
v_quotContext_x3f_2484_ = lean_ctor_get(v_a_2254_, 5);
if (lean_obj_tag(v_quotContext_x3f_2484_) == 0)
{
lean_object* v___x_2485_; lean_object* v_a_2486_; 
v___x_2485_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2255_);
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc(v_a_2486_);
lean_dec_ref(v___x_2485_);
v_a_2396_ = v_a_2486_;
goto v___jp_2395_;
}
else
{
lean_object* v_val_2487_; 
v_val_2487_ = lean_ctor_get(v_quotContext_x3f_2484_, 0);
lean_inc(v_val_2487_);
v_a_2396_ = v_val_2487_;
goto v___jp_2395_;
}
v___jp_2395_:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; size_t v_sz_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2397_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2398_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2399_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2400_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2392_, 31);
v___x_2401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2392_);
lean_ctor_set(v___x_2401_, 1, v___x_2399_);
lean_ctor_set(v___x_2401_, 2, v___x_2400_);
lean_inc_ref_n(v___x_2401_, 17);
v___x_2402_ = l_Lean_Syntax_node7(v___x_2392_, v___x_2398_, v___x_2401_, v___x_2401_, v___x_2401_, v___x_2401_, v___x_2401_, v___x_2401_, v___x_2401_);
v___x_2403_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2404_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2405_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83));
v___x_2406_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2405_, v___x_2401_);
v___x_2407_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2392_);
lean_ctor_set(v___x_2407_, 1, v___x_2403_);
v___x_2408_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91));
v___x_2409_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_2410_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2411_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2392_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
v___x_2412_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2413_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2414_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc(v_a_2394_);
lean_inc(v_a_2396_);
v___x_2415_ = l_Lean_addMacroScope(v_a_2396_, v___x_2414_, v_a_2394_);
v___x_2416_ = lean_box(0);
v___x_2417_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2418_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2392_);
lean_ctor_set(v___x_2418_, 1, v___x_2413_);
lean_ctor_set(v___x_2418_, 2, v___x_2415_);
lean_ctor_set(v___x_2418_, 3, v___x_2417_);
v___x_2419_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2399_, v___x_2267_);
v___x_2420_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2412_, v___x_2418_, v___x_2419_);
v___x_2421_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2409_, v___x_2411_, v___x_2420_);
v___x_2422_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2408_, v___x_2401_, v___x_2421_);
v___x_2423_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_2424_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2425_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2392_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2427_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2428_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2392_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2430_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2392_);
lean_ctor_set(v___x_2431_, 1, v___x_2429_);
v___x_2432_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2433_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2435_ = l_Lean_addMacroScope(v_a_2396_, v___x_2434_, v_a_2394_);
v___x_2436_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2392_);
lean_ctor_set(v___x_2436_, 1, v___x_2433_);
lean_ctor_set(v___x_2436_, 2, v___x_2435_);
lean_ctor_set(v___x_2436_, 3, v___x_2416_);
lean_inc_ref(v___x_2436_);
v___x_2437_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2399_, v___x_2436_);
v___x_2438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2392_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2441_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2442_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2392_);
lean_ctor_set(v___x_2442_, 1, v___x_2440_);
v___x_2443_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2444_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2443_, v___x_2401_, v___x_2436_);
v___x_2445_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2399_, v___x_2444_);
v___x_2446_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2392_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v_sz_2449_ = lean_array_size(v_a_2389_);
v___x_2450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2449_, v___x_2387_, v_a_2389_);
v___x_2451_ = l_Array_append___redArg(v___x_2400_, v___x_2450_);
lean_dec_ref(v___x_2450_);
v___x_2452_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2392_);
lean_ctor_set(v___x_2452_, 1, v___x_2399_);
lean_ctor_set(v___x_2452_, 2, v___x_2451_);
v___x_2453_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2448_, v___x_2452_);
v___x_2454_ = l_Lean_Syntax_node6(v___x_2392_, v___x_2441_, v___x_2442_, v___x_2401_, v___x_2401_, v___x_2445_, v___x_2447_, v___x_2453_);
v___x_2455_ = l_Lean_Syntax_node4(v___x_2392_, v___x_2432_, v___x_2437_, v___x_2401_, v___x_2439_, v___x_2454_);
v___x_2456_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2430_, v___x_2431_, v___x_2455_);
v___x_2457_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2399_, v___x_2456_);
v___x_2458_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2392_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = l_Lean_Syntax_node3(v___x_2392_, v___x_2426_, v___x_2428_, v___x_2457_, v___x_2459_);
v___x_2461_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2462_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2461_, v___x_2401_, v___x_2401_);
v___x_2463_ = l_Lean_Syntax_node4(v___x_2392_, v___x_2423_, v___x_2425_, v___x_2460_, v___x_2462_, v___x_2401_);
v___x_2464_ = l_Lean_Syntax_node6(v___x_2392_, v___x_2404_, v___x_2406_, v___x_2407_, v___x_2401_, v___x_2401_, v___x_2422_, v___x_2463_);
v___x_2465_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2397_, v___x_2402_, v___x_2464_);
v___x_2466_ = l_Lean_Elab_Command_elabCommand(v___x_2465_, v_a_2254_, v_a_2255_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2474_; 
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; 
v_unused_2475_ = lean_ctor_get(v___x_2466_, 0);
lean_dec(v_unused_2475_);
v___x_2468_ = v___x_2466_;
v_isShared_2469_ = v_isSharedCheck_2474_;
goto v_resetjp_2467_;
}
else
{
lean_dec(v___x_2466_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2474_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2470_; lean_object* v___x_2472_; 
v___x_2470_ = lean_box(v___x_2259_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2470_);
v___x_2472_ = v___x_2468_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
v_a_2476_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2466_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2466_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec(v___x_2267_);
v_a_2488_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2388_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2388_);
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
else
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
lean_dec(v_a_2384_);
lean_dec(v___x_2267_);
v___x_2496_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__33, &l_Lasm_JS_Meta_mkToJS___closed__33_once, _init_l_Lasm_JS_Meta_mkToJS___closed__33);
lean_inc(v_declName_2265_);
v___x_2497_ = l_Lean_MessageData_ofName(v_declName_2265_);
v___x_2498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2498_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2500_, v_a_2254_, v_a_2255_);
return v___x_2501_;
}
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
lean_dec(v___x_2267_);
v_a_2502_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2383_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2383_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2502_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_a_2510_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2266_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2266_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object* v_declNames_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lasm_JS_Meta_mkToJS(v_declNames_2518_, v_a_2519_, v_a_2520_);
lean_dec(v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec_ref(v_declNames_2518_);
return v_res_2522_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0));
v___x_2525_ = l_String_toRawSubstring_x27(v___x_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t v_sz_2542_, size_t v_i_2543_, lean_object* v_bs_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
uint8_t v___x_2548_; 
v___x_2548_ = lean_usize_dec_lt(v_i_2543_, v_sz_2542_);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; 
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v_bs_2544_);
return v___x_2549_;
}
else
{
uint8_t v___x_2550_; lean_object* v_v_2551_; lean_object* v___x_2552_; lean_object* v_bs_x27_2553_; lean_object* v___x_2554_; 
v___x_2550_ = 0;
v_v_2551_ = lean_array_uget(v_bs_2544_, v_i_2543_);
v___x_2552_ = lean_unsigned_to_nat(0u);
v_bs_x27_2553_ = lean_array_uset(v_bs_2544_, v_i_2543_, v___x_2552_);
v___x_2554_ = l_Lean_Elab_Command_getRef___redArg(v___y_2545_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v___x_2554_, 1);
v___x_2556_ = l_Lean_SourceInfo_fromRef(v_a_2555_, v___x_2550_);
lean_dec(v_a_2555_);
v___x_2557_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2545_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v_a_2560_; lean_object* v_quotContext_x3f_2593_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v_quotContext_x3f_2593_ = lean_ctor_get(v___y_2545_, 5);
if (lean_obj_tag(v_quotContext_x3f_2593_) == 0)
{
lean_object* v___x_2594_; 
v___x_2594_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2546_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v_a_2560_ = v_a_2595_;
goto v___jp_2559_;
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_dec(v_a_2558_);
lean_dec(v___x_2556_);
lean_dec_ref(v_bs_x27_2553_);
lean_dec(v_v_2551_);
v_a_2596_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2594_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2594_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
else
{
lean_object* v_val_2604_; 
v_val_2604_ = lean_ctor_get(v_quotContext_x3f_2593_, 0);
lean_inc(v_val_2604_);
v_a_2560_ = v_val_2604_;
goto v___jp_2559_;
}
v___jp_2559_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; size_t v___x_2589_; size_t v___x_2590_; lean_object* v___x_2591_; 
v___x_2561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_2562_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_2556_, 10);
v___x_2563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2556_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2565_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2566_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_2567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
lean_inc(v_a_2558_);
lean_inc(v_a_2560_);
v___x_2568_ = l_Lean_addMacroScope(v_a_2560_, v___x_2567_, v_a_2558_);
v___x_2569_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_2570_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2556_);
lean_ctor_set(v___x_2570_, 1, v___x_2566_);
lean_ctor_set(v___x_2570_, 2, v___x_2568_);
lean_ctor_set(v___x_2570_, 3, v___x_2569_);
v___x_2571_ = l_Lean_Name_getString_x21(v_v_2551_);
v___x_2572_ = lean_box(2);
v___x_2573_ = l_Lean_Syntax_mkStrLit(v___x_2571_, v___x_2572_);
v___x_2574_ = l_Lean_Syntax_node1(v___x_2556_, v___x_2564_, v___x_2573_);
v___x_2575_ = l_Lean_Syntax_node2(v___x_2556_, v___x_2565_, v___x_2570_, v___x_2574_);
v___x_2576_ = l_Lean_Syntax_node1(v___x_2556_, v___x_2564_, v___x_2575_);
v___x_2577_ = l_Lean_Syntax_node1(v___x_2556_, v___x_2564_, v___x_2576_);
v___x_2578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2556_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1);
v___x_2581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4));
v___x_2582_ = l_Lean_addMacroScope(v_a_2560_, v___x_2581_, v_a_2558_);
v___x_2583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8));
v___x_2584_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2556_);
lean_ctor_set(v___x_2584_, 1, v___x_2580_);
lean_ctor_set(v___x_2584_, 2, v___x_2582_);
lean_ctor_set(v___x_2584_, 3, v___x_2583_);
v___x_2585_ = l_Lean_mkIdent(v_v_2551_);
v___x_2586_ = l_Lean_Syntax_node1(v___x_2556_, v___x_2564_, v___x_2585_);
v___x_2587_ = l_Lean_Syntax_node2(v___x_2556_, v___x_2565_, v___x_2584_, v___x_2586_);
v___x_2588_ = l_Lean_Syntax_node4(v___x_2556_, v___x_2561_, v___x_2563_, v___x_2577_, v___x_2579_, v___x_2587_);
v___x_2589_ = ((size_t)1ULL);
v___x_2590_ = lean_usize_add(v_i_2543_, v___x_2589_);
v___x_2591_ = lean_array_uset(v_bs_x27_2553_, v_i_2543_, v___x_2588_);
v_i_2543_ = v___x_2590_;
v_bs_2544_ = v___x_2591_;
goto _start;
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
lean_dec(v___x_2556_);
lean_dec_ref(v_bs_x27_2553_);
lean_dec(v_v_2551_);
v_a_2605_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2557_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2557_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
lean_dec_ref(v_bs_x27_2553_);
lean_dec(v_v_2551_);
v_a_2613_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2554_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2554_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object* v_sz_2621_, lean_object* v_i_2622_, lean_object* v_bs_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
size_t v_sz_boxed_2627_; size_t v_i_boxed_2628_; lean_object* v_res_2629_; 
v_sz_boxed_2627_ = lean_unbox_usize(v_sz_2621_);
lean_dec(v_sz_2621_);
v_i_boxed_2628_ = lean_unbox_usize(v_i_2622_);
lean_dec(v_i_2622_);
v_res_2629_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_boxed_2627_, v_i_boxed_2628_, v_bs_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object* v_x_2630_, lean_object* v_body_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2639_ = lean_box(1);
v___x_2640_ = l_Lean_PrettyPrinter_delab(v_body_2631_, v___x_2639_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object* v_x_2641_, lean_object* v_body_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(v_x_2641_, v_body_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec_ref(v_x_2641_);
return v_res_2650_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9));
v___x_2682_ = l_String_toRawSubstring_x27(v___x_2681_);
return v___x_2682_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2695_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15));
v___x_2696_ = l_String_toRawSubstring_x27(v___x_2695_);
return v___x_2696_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20));
v___x_2703_ = lean_unsigned_to_nat(14u);
v___x_2704_ = lean_unsigned_to_nat(22u);
v___x_2705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19));
v___x_2706_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18));
v___x_2707_ = l_mkPanicMessageWithDecl(v___x_2706_, v___x_2705_, v___x_2704_, v___x_2703_, v___x_2702_);
return v___x_2707_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23(void){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22));
v___x_2710_ = l_Lean_stringToMessageData(v___x_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object* v___x_2711_, lean_object* v___x_2712_, lean_object* v_declName_2713_, lean_object* v_as_2714_, size_t v_sz_2715_, size_t v_i_2716_, lean_object* v_b_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_a_2722_; uint8_t v___x_2726_; 
v___x_2726_ = lean_usize_dec_lt(v_i_2716_, v_sz_2715_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; 
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v___x_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2727_, 0, v_b_2717_);
return v___x_2727_;
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2729_; 
v_a_2728_ = lean_array_uget_borrowed(v_as_2714_, v_i_2716_);
lean_inc(v_a_2728_);
lean_inc(v_declName_2713_);
lean_inc_ref(v___x_2712_);
v___x_2729_ = l_Lean_getProjFnForField_x3f(v___x_2712_, v_declName_2713_, v_a_2728_);
if (lean_obj_tag(v___x_2729_) == 1)
{
lean_object* v_val_2730_; lean_object* v___f_2731_; uint8_t v___x_2732_; lean_object* v___x_2733_; uint8_t v___x_2734_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v_a_2739_; lean_object* v___y_2777_; lean_object* v___x_2826_; 
v_val_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_val_2730_);
lean_dec_ref_known(v___x_2729_, 1);
v___f_2731_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0));
v___x_2732_ = 0;
v___x_2733_ = lean_unsigned_to_nat(1u);
v___x_2734_ = lean_nat_dec_eq(v___x_2711_, v___x_2733_);
lean_inc_ref(v___x_2712_);
v___x_2826_ = l_Lean_Environment_find_x3f(v___x_2712_, v_val_2730_, v___x_2732_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2827_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21);
v___x_2828_ = l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(v___x_2827_);
v___y_2777_ = v___x_2828_;
goto v___jp_2776_;
}
else
{
lean_object* v_val_2829_; 
v_val_2829_ = lean_ctor_get(v___x_2826_, 0);
lean_inc(v_val_2829_);
lean_dec_ref_known(v___x_2826_, 1);
v___y_2777_ = v_val_2829_;
goto v___jp_2776_;
}
v___jp_2735_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
lean_inc_n(v_a_2728_, 2);
v___x_2742_ = l_Lean_mkIdent(v_a_2728_);
v___x_2743_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2744_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___y_2736_, 12);
v___x_2745_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2745_, 0, v___y_2736_);
lean_ctor_set(v___x_2745_, 1, v___x_2743_);
lean_ctor_set(v___x_2745_, 2, v___x_2744_);
lean_inc_ref_n(v___x_2745_, 3);
v___x_2746_ = l_Lean_Syntax_node2(v___y_2736_, v___x_2741_, v___x_2742_, v___x_2745_);
v___x_2747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___y_2736_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5));
v___x_2751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6));
v___x_2752_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___y_2736_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8));
v___x_2754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2755_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10);
v___x_2756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12));
lean_inc(v___y_2738_);
lean_inc(v_a_2739_);
v___x_2757_ = l_Lean_addMacroScope(v_a_2739_, v___x_2756_, v___y_2738_);
v___x_2758_ = lean_box(0);
v___x_2759_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2760_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2760_, 0, v___y_2736_);
lean_ctor_set(v___x_2760_, 1, v___x_2755_);
lean_ctor_set(v___x_2760_, 2, v___x_2757_);
lean_ctor_set(v___x_2760_, 3, v___x_2759_);
v___x_2761_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2763_ = l_Lean_addMacroScope(v_a_2739_, v___x_2762_, v___y_2738_);
v___x_2764_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2764_, 0, v___y_2736_);
lean_ctor_set(v___x_2764_, 1, v___x_2761_);
lean_ctor_set(v___x_2764_, 2, v___x_2763_);
lean_ctor_set(v___x_2764_, 3, v___x_2758_);
v___x_2765_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_2728_, v___x_2734_);
v___x_2766_ = lean_box(2);
v___x_2767_ = l_Lean_Syntax_mkStrLit(v___x_2765_, v___x_2766_);
v___x_2768_ = l_Lean_Syntax_node3(v___y_2736_, v___x_2743_, v___y_2737_, v___x_2764_, v___x_2767_);
v___x_2769_ = l_Lean_Syntax_node2(v___y_2736_, v___x_2754_, v___x_2760_, v___x_2768_);
v___x_2770_ = l_Lean_Syntax_node1(v___y_2736_, v___x_2753_, v___x_2769_);
v___x_2771_ = l_Lean_Syntax_node2(v___y_2736_, v___x_2750_, v___x_2752_, v___x_2770_);
v___x_2772_ = l_Lean_Syntax_node3(v___y_2736_, v___x_2747_, v___x_2749_, v___x_2745_, v___x_2771_);
v___x_2773_ = l_Lean_Syntax_node3(v___y_2736_, v___x_2743_, v___x_2745_, v___x_2745_, v___x_2772_);
v___x_2774_ = l_Lean_Syntax_node2(v___y_2736_, v___x_2740_, v___x_2746_, v___x_2773_);
v___x_2775_ = lean_array_push(v_b_2717_, v___x_2774_);
v_a_2722_ = v___x_2775_;
goto v___jp_2721_;
}
v___jp_2776_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2778_ = l_Lean_ConstantInfo_type(v___y_2777_);
lean_dec_ref(v___y_2777_);
v___x_2779_ = lean_box(v___x_2732_);
v___x_2780_ = lean_box(v___x_2732_);
v___x_2781_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed), 12, 5);
lean_closure_set(v___x_2781_, 0, lean_box(0));
lean_closure_set(v___x_2781_, 1, v___x_2778_);
lean_closure_set(v___x_2781_, 2, v___f_2731_);
lean_closure_set(v___x_2781_, 3, v___x_2779_);
lean_closure_set(v___x_2781_, 4, v___x_2780_);
v___x_2782_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2781_, v___y_2718_, v___y_2719_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2784_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2782_, 1);
v___x_2784_ = l_Lean_Elab_Command_getRef___redArg(v___y_2718_);
if (lean_obj_tag(v___x_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2784_, 1);
v___x_2786_ = l_Lean_SourceInfo_fromRef(v_a_2785_, v___x_2732_);
lean_dec(v_a_2785_);
v___x_2787_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2718_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_quotContext_x3f_2788_; 
v_quotContext_x3f_2788_ = lean_ctor_get(v___y_2718_, 5);
if (lean_obj_tag(v_quotContext_x3f_2788_) == 0)
{
lean_object* v_a_2789_; lean_object* v___x_2790_; 
v_a_2789_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2789_);
lean_dec_ref_known(v___x_2787_, 1);
v___x_2790_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2719_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
v___y_2736_ = v___x_2786_;
v___y_2737_ = v_a_2783_;
v___y_2738_ = v_a_2789_;
v_a_2739_ = v_a_2791_;
goto v___jp_2735_;
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec(v_a_2789_);
lean_dec(v___x_2786_);
lean_dec(v_a_2783_);
lean_dec_ref(v_b_2717_);
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v_a_2792_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2790_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2790_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
else
{
lean_object* v_a_2800_; lean_object* v_val_2801_; 
v_a_2800_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2787_, 1);
v_val_2801_ = lean_ctor_get(v_quotContext_x3f_2788_, 0);
lean_inc(v_val_2801_);
v___y_2736_ = v___x_2786_;
v___y_2737_ = v_a_2783_;
v___y_2738_ = v_a_2800_;
v_a_2739_ = v_val_2801_;
goto v___jp_2735_;
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
lean_dec(v___x_2786_);
lean_dec(v_a_2783_);
lean_dec_ref(v_b_2717_);
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v_a_2802_ = lean_ctor_get(v___x_2787_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2787_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2787_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2787_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
lean_dec(v_a_2783_);
lean_dec_ref(v_b_2717_);
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v_a_2810_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2784_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2784_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
lean_dec_ref(v_b_2717_);
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v_a_2818_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___x_2782_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2782_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
}
else
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
lean_dec(v___x_2729_);
v___x_2830_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23);
lean_inc(v_a_2728_);
v___x_2831_ = l_Lean_MessageData_ofName(v_a_2728_);
v___x_2832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2830_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2832_, v___y_2718_, v___y_2719_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_dec_ref_known(v___x_2833_, 1);
v_a_2722_ = v_b_2717_;
goto v___jp_2721_;
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_b_2717_);
lean_dec(v_declName_2713_);
lean_dec_ref(v___x_2712_);
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
v___jp_2721_:
{
size_t v___x_2723_; size_t v___x_2724_; 
v___x_2723_ = ((size_t)1ULL);
v___x_2724_ = lean_usize_add(v_i_2716_, v___x_2723_);
v_i_2716_ = v___x_2724_;
v_b_2717_ = v_a_2722_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object* v___x_2842_, lean_object* v___x_2843_, lean_object* v_declName_2844_, lean_object* v_as_2845_, lean_object* v_sz_2846_, lean_object* v_i_2847_, lean_object* v_b_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
size_t v_sz_boxed_2852_; size_t v_i_boxed_2853_; lean_object* v_res_2854_; 
v_sz_boxed_2852_ = lean_unbox_usize(v_sz_2846_);
lean_dec(v_sz_2846_);
v_i_boxed_2853_ = lean_unbox_usize(v_i_2847_);
lean_dec(v_i_2847_);
v_res_2854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2842_, v___x_2843_, v_declName_2844_, v_as_2845_, v_sz_boxed_2852_, v_i_boxed_2853_, v_b_2848_, v___y_2849_, v___y_2850_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec_ref(v_as_2845_);
lean_dec(v___x_2842_);
return v_res_2854_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__1(void){
_start:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2856_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__0));
v___x_2857_ = l_String_toRawSubstring_x27(v___x_2856_);
return v___x_2857_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__13(void){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__12));
v___x_2888_ = l_String_toRawSubstring_x27(v___x_2887_);
return v___x_2888_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__27(void){
_start:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_2928_ = l_String_toRawSubstring_x27(v___x_2927_);
return v___x_2928_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__33(void){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2939_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__32));
v___x_2940_ = l_String_toRawSubstring_x27(v___x_2939_);
return v___x_2940_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__42(void){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__41));
v___x_2959_ = l_Lean_stringToMessageData(v___x_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object* v_declNames_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; 
v___x_2964_ = lean_array_get_size(v_declNames_2960_);
v___x_2965_ = lean_unsigned_to_nat(1u);
v___x_2966_ = lean_nat_dec_eq(v___x_2964_, v___x_2965_);
if (v___x_2966_ == 0)
{
lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2967_ = lean_box(v___x_2966_);
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
else
{
lean_object* v___x_2969_; uint8_t v___x_2970_; lean_object* v___x_2971_; lean_object* v_declName_2972_; lean_object* v___x_2973_; 
v___x_2969_ = lean_box(0);
v___x_2970_ = 0;
v___x_2971_ = lean_unsigned_to_nat(0u);
v_declName_2972_ = lean_array_get_borrowed(v___x_2969_, v_declNames_2960_, v___x_2971_);
lean_inc(v_declName_2972_);
v___x_2973_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2972_, v_a_2961_, v_a_2962_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v_a_2979_; 
lean_dec_ref_known(v___x_2973_, 1);
lean_inc_n(v_declName_2972_, 3);
v___x_2974_ = l_Lean_mkIdent(v_declName_2972_);
v___x_2975_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2972_, v___x_2966_);
v___x_2976_ = lean_box(2);
v___x_2977_ = l_Lean_Syntax_mkStrLit(v___x_2975_, v___x_2976_);
v___x_2978_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2972_, v_a_2962_);
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref(v___x_2978_);
if (lean_obj_tag(v_a_2979_) == 1)
{
lean_object* v_val_2980_; lean_object* v___x_2981_; lean_object* v_env_2982_; lean_object* v___x_2983_; size_t v_sz_2984_; size_t v___x_2985_; lean_object* v___x_2986_; 
v_val_2980_ = lean_ctor_get(v_a_2979_, 0);
lean_inc(v_val_2980_);
lean_dec_ref_known(v_a_2979_, 1);
v___x_2981_ = lean_st_ref_get(v_a_2962_);
v_env_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc_ref(v_env_2982_);
lean_dec(v___x_2981_);
v___x_2983_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
v_sz_2984_ = lean_array_size(v_val_2980_);
v___x_2985_ = ((size_t)0ULL);
lean_inc(v_declName_2972_);
v___x_2986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2964_, v_env_2982_, v_declName_2972_, v_val_2980_, v_sz_2984_, v___x_2985_, v___x_2983_, v_a_2961_, v_a_2962_);
lean_dec(v_val_2980_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v_a_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v_a_2995_; lean_object* v_a_2997_; lean_object* v_quotContext_x3f_3101_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2989_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2990_ = l_Lean_Syntax_SepArray_ofElems(v___x_2989_, v_a_2987_);
lean_dec(v_a_2987_);
v___x_2991_ = l_Lean_Elab_Command_getRef___redArg(v_a_2961_);
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref(v___x_2991_);
v___x_2993_ = l_Lean_SourceInfo_fromRef(v_a_2992_, v___x_2970_);
lean_dec(v_a_2992_);
v___x_2994_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2961_);
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref(v___x_2994_);
v_quotContext_x3f_3101_ = lean_ctor_get(v_a_2961_, 5);
if (lean_obj_tag(v_quotContext_x3f_3101_) == 0)
{
lean_object* v___x_3102_; lean_object* v_a_3103_; 
v___x_3102_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2962_);
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
lean_dec_ref(v___x_3102_);
v_a_2997_ = v_a_3103_;
goto v___jp_2996_;
}
else
{
lean_object* v_val_3104_; 
v_val_3104_ = lean_ctor_get(v_quotContext_x3f_3101_, 0);
lean_inc(v_val_3104_);
v_a_2997_ = v_val_3104_;
goto v___jp_2996_;
}
v___jp_2996_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_2998_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2999_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_3000_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_3001_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2993_, 42);
v___x_3002_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3002_, 0, v___x_2993_);
lean_ctor_set(v___x_3002_, 1, v___x_3000_);
lean_ctor_set(v___x_3002_, 2, v___x_3001_);
lean_inc_ref_n(v___x_3002_, 23);
v___x_3003_ = l_Lean_Syntax_node7(v___x_2993_, v___x_2999_, v___x_3002_, v___x_3002_, v___x_3002_, v___x_3002_, v___x_3002_, v___x_3002_, v___x_3002_);
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_3006_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83));
v___x_3007_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3006_, v___x_3002_);
v___x_3008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_2993_);
lean_ctor_set(v___x_3008_, 1, v___x_3004_);
v___x_3009_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91));
v___x_3010_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_3011_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_3012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_2993_);
lean_ctor_set(v___x_3012_, 1, v___x_3011_);
v___x_3013_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_3014_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2995_, 3);
lean_inc_n(v_a_2997_, 3);
v___x_3016_ = l_Lean_addMacroScope(v_a_2997_, v___x_3015_, v_a_2995_);
v___x_3017_ = lean_box(0);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_3019_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3019_, 0, v___x_2993_);
lean_ctor_set(v___x_3019_, 1, v___x_3014_);
lean_ctor_set(v___x_3019_, 2, v___x_3016_);
lean_ctor_set(v___x_3019_, 3, v___x_3018_);
v___x_3020_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3000_, v___x_2974_);
v___x_3021_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3013_, v___x_3019_, v___x_3020_);
v___x_3022_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3010_, v___x_3012_, v___x_3021_);
v___x_3023_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3009_, v___x_3002_, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_3025_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_3026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_2993_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_3028_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_3029_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_3031_ = l_Lean_addMacroScope(v_a_2997_, v___x_3030_, v_a_2995_);
v___x_3032_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3032_, 0, v___x_2993_);
lean_ctor_set(v___x_3032_, 1, v___x_3029_);
lean_ctor_set(v___x_3032_, 2, v___x_3031_);
lean_ctor_set(v___x_3032_, 3, v___x_3017_);
v___x_3033_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3028_, v___x_3032_, v___x_3002_);
v___x_3034_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_3035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_3036_ = l_Lean_addMacroScope(v_a_2997_, v___x_3035_, v_a_2995_);
v___x_3037_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3037_, 0, v___x_2993_);
lean_ctor_set(v___x_3037_, 1, v___x_3034_);
lean_ctor_set(v___x_3037_, 2, v___x_3036_);
lean_ctor_set(v___x_3037_, 3, v___x_3017_);
v___x_3038_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3000_, v___x_3037_);
v___x_3039_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_3040_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_3041_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_2993_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__15));
v___x_3043_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__16));
v___x_3044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_2993_);
lean_ctor_set(v___x_3044_, 1, v___x_3042_);
v___x_3045_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__18));
v___x_3046_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__20));
v___x_3047_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__22));
v___x_3048_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__23));
v___x_3049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___x_2993_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__24));
v___x_3051_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_3052_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_2993_);
lean_ctor_set(v___x_3052_, 1, v___x_3051_);
v___x_3053_ = l_Array_append___redArg(v___x_3001_, v___x_2990_);
lean_dec_ref(v___x_2990_);
v___x_3054_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3054_, 0, v___x_2993_);
lean_ctor_set(v___x_3054_, 1, v___x_3000_);
lean_ctor_set(v___x_3054_, 2, v___x_3053_);
v___x_3055_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3027_, v___x_3054_);
v___x_3056_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__25));
v___x_3057_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3056_, v___x_3002_);
v___x_3058_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_3059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_2993_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = l_Lean_Syntax_node6(v___x_2993_, v___x_3050_, v___x_3052_, v___x_3002_, v___x_3055_, v___x_3057_, v___x_3002_, v___x_3059_);
v___x_3061_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3000_, v___x_3060_);
v___x_3062_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3047_, v___x_3049_, v___x_3061_);
v___x_3063_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3046_, v___x_3062_, v___x_3002_);
v___x_3064_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3000_, v___x_3063_);
v___x_3065_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3045_, v___x_3064_);
v___x_3066_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3043_, v___x_3044_, v___x_3065_);
lean_inc_ref(v___x_3041_);
v___x_3067_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3039_, v___x_3041_, v___x_3002_, v___x_3066_);
v___x_3068_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3000_, v___x_3038_, v___x_3002_, v___x_3067_);
v___x_3069_ = l_Lean_Syntax_node2(v___x_2993_, v___x_2988_, v___x_3033_, v___x_3068_);
v___x_3070_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_3071_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_3072_ = l_Lean_addMacroScope(v_a_2997_, v___x_3071_, v_a_2995_);
v___x_3073_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3073_, 0, v___x_2993_);
lean_ctor_set(v___x_3073_, 1, v___x_3070_);
lean_ctor_set(v___x_3073_, 2, v___x_3072_);
lean_ctor_set(v___x_3073_, 3, v___x_3017_);
v___x_3074_ = l_Lean_Syntax_node2(v___x_2993_, v___x_3028_, v___x_3073_, v___x_3002_);
v___x_3075_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3039_, v___x_3041_, v___x_3002_, v___x_2977_);
v___x_3076_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3000_, v___x_3002_, v___x_3002_, v___x_3075_);
v___x_3077_ = l_Lean_Syntax_node2(v___x_2993_, v___x_2988_, v___x_3074_, v___x_3076_);
v___x_3078_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3000_, v___x_3069_, v___x_3002_, v___x_3077_);
v___x_3079_ = l_Lean_Syntax_node1(v___x_2993_, v___x_3027_, v___x_3078_);
v___x_3080_ = l_Lean_Syntax_node3(v___x_2993_, v___x_3024_, v___x_3026_, v___x_3079_, v___x_3002_);
v___x_3081_ = l_Lean_Syntax_node6(v___x_2993_, v___x_3005_, v___x_3007_, v___x_3008_, v___x_3002_, v___x_3002_, v___x_3023_, v___x_3080_);
v___x_3082_ = l_Lean_Syntax_node2(v___x_2993_, v___x_2998_, v___x_3003_, v___x_3081_);
v___x_3083_ = l_Lean_Elab_Command_elabCommand(v___x_3082_, v_a_2961_, v_a_2962_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3091_; 
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3091_ == 0)
{
lean_object* v_unused_3092_; 
v_unused_3092_ = lean_ctor_get(v___x_3083_, 0);
lean_dec(v_unused_3092_);
v___x_3085_ = v___x_3083_;
v_isShared_3086_ = v_isSharedCheck_3091_;
goto v_resetjp_3084_;
}
else
{
lean_dec(v___x_3083_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3091_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3089_; 
v___x_3087_ = lean_box(v___x_2966_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set(v___x_3085_, 0, v___x_3087_);
v___x_3089_ = v___x_3085_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v___x_3087_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
v_a_3093_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3083_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3083_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v___x_2977_);
lean_dec(v___x_2974_);
v_a_3105_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_2986_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_2986_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v___x_3113_; 
lean_dec(v_a_2979_);
lean_inc(v_declName_2972_);
v___x_3113_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2972_, v_a_2961_, v_a_2962_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3113_, 1);
if (lean_obj_tag(v_a_3114_) == 1)
{
lean_object* v_val_3115_; size_t v_sz_3116_; size_t v___x_3117_; lean_object* v___x_3118_; 
v_val_3115_ = lean_ctor_get(v_a_3114_, 0);
lean_inc(v_val_3115_);
lean_dec_ref_known(v_a_3114_, 1);
v_sz_3116_ = lean_array_size(v_val_3115_);
v___x_3117_ = ((size_t)0ULL);
v___x_3118_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_3116_, v___x_3117_, v_val_3115_, v_a_2961_, v_a_2962_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3120_; lean_object* v_a_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v_a_3124_; lean_object* v_a_3126_; lean_object* v_quotContext_x3f_3245_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v___x_3120_ = l_Lean_Elab_Command_getRef___redArg(v_a_2961_);
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc(v_a_3121_);
lean_dec_ref(v___x_3120_);
v___x_3122_ = l_Lean_SourceInfo_fromRef(v_a_3121_, v___x_2970_);
lean_dec(v_a_3121_);
v___x_3123_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2961_);
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref(v___x_3123_);
v_quotContext_x3f_3245_ = lean_ctor_get(v_a_2961_, 5);
if (lean_obj_tag(v_quotContext_x3f_3245_) == 0)
{
lean_object* v___x_3246_; lean_object* v_a_3247_; 
v___x_3246_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2962_);
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref(v___x_3246_);
v_a_3126_ = v_a_3247_;
goto v___jp_3125_;
}
else
{
lean_object* v_val_3248_; 
v_val_3248_ = lean_ctor_get(v_quotContext_x3f_3245_, 0);
lean_inc(v_val_3248_);
v_a_3126_ = v_val_3248_;
goto v___jp_3125_;
}
v___jp_3125_:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; size_t v_sz_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3127_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_3128_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_3129_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_3130_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_3122_, 47);
v___x_3131_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3122_);
lean_ctor_set(v___x_3131_, 1, v___x_3129_);
lean_ctor_set(v___x_3131_, 2, v___x_3130_);
lean_inc_ref_n(v___x_3131_, 22);
v___x_3132_ = l_Lean_Syntax_node7(v___x_3122_, v___x_3128_, v___x_3131_, v___x_3131_, v___x_3131_, v___x_3131_, v___x_3131_, v___x_3131_, v___x_3131_);
v___x_3133_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83));
v___x_3136_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3135_, v___x_3131_);
v___x_3137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3122_);
lean_ctor_set(v___x_3137_, 1, v___x_3133_);
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91));
v___x_3139_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_3140_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_3141_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3122_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_3143_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_3144_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_3124_, 4);
lean_inc_n(v_a_3126_, 4);
v___x_3145_ = l_Lean_addMacroScope(v_a_3126_, v___x_3144_, v_a_3124_);
v___x_3146_ = lean_box(0);
v___x_3147_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_3148_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3122_);
lean_ctor_set(v___x_3148_, 1, v___x_3143_);
lean_ctor_set(v___x_3148_, 2, v___x_3145_);
lean_ctor_set(v___x_3148_, 3, v___x_3147_);
v___x_3149_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_2974_);
v___x_3150_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3142_, v___x_3148_, v___x_3149_);
v___x_3151_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3139_, v___x_3141_, v___x_3150_);
v___x_3152_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3138_, v___x_3131_, v___x_3151_);
v___x_3153_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_3154_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_3155_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3122_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_3157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_3158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_3159_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_3160_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_3161_ = l_Lean_addMacroScope(v_a_3126_, v___x_3160_, v_a_3124_);
v___x_3162_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3122_);
lean_ctor_set(v___x_3162_, 1, v___x_3159_);
lean_ctor_set(v___x_3162_, 2, v___x_3161_);
lean_ctor_set(v___x_3162_, 3, v___x_3146_);
v___x_3163_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3158_, v___x_3162_, v___x_3131_);
v___x_3164_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_3165_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_3166_ = l_Lean_addMacroScope(v_a_3126_, v___x_3165_, v_a_3124_);
v___x_3167_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3122_);
lean_ctor_set(v___x_3167_, 1, v___x_3164_);
lean_ctor_set(v___x_3167_, 2, v___x_3166_);
lean_ctor_set(v___x_3167_, 3, v___x_3146_);
lean_inc_ref(v___x_3167_);
v___x_3168_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_3167_);
v___x_3169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_3170_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_3171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3122_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_3173_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_3174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3122_);
lean_ctor_set(v___x_3174_, 1, v___x_3172_);
v___x_3175_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_3176_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3175_, v___x_3131_, v___x_3167_);
v___x_3177_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_3176_);
v___x_3178_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_3179_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3122_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_3181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v_sz_3182_ = lean_array_size(v_a_3119_);
v___x_3183_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_3182_, v___x_3117_, v_a_3119_);
v___x_3184_ = l_Array_append___redArg(v___x_3130_, v___x_3183_);
lean_dec_ref(v___x_3183_);
v___x_3185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
v___x_3186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3122_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__30));
v___x_3188_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__31));
v___x_3189_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3122_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3187_, v___x_3189_);
v___x_3191_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_3190_);
v___x_3192_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_3191_);
v___x_3193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_3194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3122_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__33, &l_Lasm_JS_Meta_mkFromJS___closed__33_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__33);
v___x_3196_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__35));
v___x_3197_ = l_Lean_addMacroScope(v_a_3126_, v___x_3196_, v_a_3124_);
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__39));
v___x_3199_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3122_);
lean_ctor_set(v___x_3199_, 1, v___x_3195_);
lean_ctor_set(v___x_3199_, 2, v___x_3197_);
lean_ctor_set(v___x_3199_, 3, v___x_3198_);
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Meta_termLasm__js__project_x25___00__closed__7));
v___x_3201_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__40));
v___x_3202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3122_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3200_, v___x_3202_);
v___x_3204_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3129_, v___x_3203_);
v___x_3205_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3142_, v___x_3199_, v___x_3204_);
v___x_3206_ = l_Lean_Syntax_node4(v___x_3122_, v___x_3181_, v___x_3186_, v___x_3192_, v___x_3194_, v___x_3205_);
v___x_3207_ = lean_array_push(v___x_3184_, v___x_3206_);
v___x_3208_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3122_);
lean_ctor_set(v___x_3208_, 1, v___x_3129_);
lean_ctor_set(v___x_3208_, 2, v___x_3207_);
v___x_3209_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3180_, v___x_3208_);
v___x_3210_ = l_Lean_Syntax_node6(v___x_3122_, v___x_3173_, v___x_3174_, v___x_3131_, v___x_3131_, v___x_3177_, v___x_3179_, v___x_3209_);
lean_inc_ref(v___x_3171_);
v___x_3211_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3169_, v___x_3171_, v___x_3131_, v___x_3210_);
v___x_3212_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3129_, v___x_3168_, v___x_3131_, v___x_3211_);
v___x_3213_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3157_, v___x_3163_, v___x_3212_);
v___x_3214_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_3215_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_3216_ = l_Lean_addMacroScope(v_a_3126_, v___x_3215_, v_a_3124_);
v___x_3217_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3122_);
lean_ctor_set(v___x_3217_, 1, v___x_3214_);
lean_ctor_set(v___x_3217_, 2, v___x_3216_);
lean_ctor_set(v___x_3217_, 3, v___x_3146_);
v___x_3218_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3158_, v___x_3217_, v___x_3131_);
v___x_3219_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3169_, v___x_3171_, v___x_3131_, v___x_2977_);
v___x_3220_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3129_, v___x_3131_, v___x_3131_, v___x_3219_);
v___x_3221_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3157_, v___x_3218_, v___x_3220_);
v___x_3222_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3129_, v___x_3213_, v___x_3131_, v___x_3221_);
v___x_3223_ = l_Lean_Syntax_node1(v___x_3122_, v___x_3156_, v___x_3222_);
v___x_3224_ = l_Lean_Syntax_node3(v___x_3122_, v___x_3153_, v___x_3155_, v___x_3223_, v___x_3131_);
v___x_3225_ = l_Lean_Syntax_node6(v___x_3122_, v___x_3134_, v___x_3136_, v___x_3137_, v___x_3131_, v___x_3131_, v___x_3152_, v___x_3224_);
v___x_3226_ = l_Lean_Syntax_node2(v___x_3122_, v___x_3127_, v___x_3132_, v___x_3225_);
v___x_3227_ = l_Lean_Elab_Command_elabCommand(v___x_3226_, v_a_2961_, v_a_2962_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3235_; 
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v___x_3227_, 0);
lean_dec(v_unused_3236_);
v___x_3229_ = v___x_3227_;
v_isShared_3230_ = v_isSharedCheck_3235_;
goto v_resetjp_3228_;
}
else
{
lean_dec(v___x_3227_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3235_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3231_; lean_object* v___x_3233_; 
v___x_3231_ = lean_box(v___x_2966_);
if (v_isShared_3230_ == 0)
{
lean_ctor_set(v___x_3229_, 0, v___x_3231_);
v___x_3233_ = v___x_3229_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3231_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
else
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3244_; 
v_a_3237_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3239_ = v___x_3227_;
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3227_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3237_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec(v___x_2977_);
lean_dec(v___x_2974_);
v_a_3249_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3118_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3118_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
else
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
lean_dec(v_a_3114_);
lean_dec(v___x_2977_);
lean_dec(v___x_2974_);
v___x_3257_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__42, &l_Lasm_JS_Meta_mkFromJS___closed__42_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__42);
lean_inc(v_declName_2972_);
v___x_3258_ = l_Lean_MessageData_ofName(v_declName_2972_);
v___x_3259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3257_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_3261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3259_);
lean_ctor_set(v___x_3261_, 1, v___x_3260_);
v___x_3262_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_3261_, v_a_2961_, v_a_2962_);
return v___x_3262_;
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec(v___x_2977_);
lean_dec(v___x_2974_);
v_a_3263_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3113_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3113_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
v_a_3271_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_2973_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_2973_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object* v_declNames_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Lasm_JS_Meta_mkFromJS(v_declNames_3279_, v_a_3280_, v_a_3281_);
lean_dec(v_a_3281_);
lean_dec_ref(v_a_3280_);
lean_dec_ref(v_declNames_3279_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3287_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
v___x_3288_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_3289_ = l_Lean_Elab_registerDerivingHandler(v___x_3287_, v___x_3288_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
lean_dec_ref_known(v___x_3289_, 1);
v___x_3290_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
v___x_3291_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_3292_ = l_Lean_Elab_registerDerivingHandler(v___x_3290_, v___x_3291_);
return v___x_3292_;
}
else
{
return v___x_3289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object* v_a_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
return v_res_3294_;
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
res = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1246458272____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
