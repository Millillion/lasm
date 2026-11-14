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
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(lean_object*);
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
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DocString_0__Lean_Doc_checkContentParamType_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3307094584____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),((lean_object*)&l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
static const lean_string_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23;
static lean_once_cell_t l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__22_value)}};
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Meta_instReprBindingInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_instReprBindingInfo = (const lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json___lam__0(lean_object*);
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "{\"name\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ",\"module\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ",\"path\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__2_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ",\"construct\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ",\"arity\":"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__4_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__6_value;
static const lean_string_object l_Lasm_JS_Meta_BindingInfo_json___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lasm_JS_Meta_BindingInfo_json___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json(lean_object*);
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
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lasmJsRecord"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_1),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 233, 60, 59, 156, 27, 197, 122)}};
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 116, 189, 233, 227, 134, 71, 145)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lasm_js_record "};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__6_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__7 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__7_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__5_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__9_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__11_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__12_value;
static const lean_string_object l_Lasm_JS_Meta_lasmJsRecord___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " new"};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__13_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__13_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__12_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__14_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__15_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__10_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__15_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Meta_lasmJsRecord___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__16_value)}};
static const lean_object* l_Lasm_JS_Meta_lasmJsRecord___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__17_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Meta_lasmJsRecord = (const lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 41, 135, 212, 101, 60, 221, 136)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 251, 239, 220, 186, 252, 14, 14)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 237, 37, 2, 189, 252, 228, 197)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(62, 253, 4, 187, 117, 87, 87, 107)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 254, 224, 114, 40, 98, 17, 243)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 81, 242, 57, 82, 213, 155, 129)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__7_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 218, 160, 241, 110, 65, 135, 139)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__9_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 33, 204, 79, 171, 104, 67, 89)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__10_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__11_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 154, 86, 187, 183, 177, 156, 52)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__12_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(9, 176, 41, 190, 155, 207, 178, 138)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__13_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(2, 197, 108, 141, 228, 80, 230, 67)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__14_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 146, 137, 187, 186, 170, 0, 192)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed, .m_arity = 13, .m_num_fixed = 7, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 80, 239, 79, 71, 173, 245, 131)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "Records a Lasm.JS binding for the build-time binding check (added by `@[js]`)."};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value)}};
static const lean_object* l_Lasm_JS_Meta_jsAttr___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta_jsAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__3_value),((lean_object*)&l_Lasm_JS_Meta_jsAttr___closed__4_value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__8_value)}};
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
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__79_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__83_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__85_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__87_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__89_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__91_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "new "};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value;
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__25_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__27 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__25_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__0));
v___x_49_ = lean_string_length(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__23);
v___x_51_ = lean_nat_to_int(v___x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(lean_object* v_x_56_){
_start:
{
lean_object* v_declName_57_; lean_object* v_module_58_; lean_object* v_path_59_; uint8_t v_construct_60_; lean_object* v_arity_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_declName_57_ = lean_ctor_get(v_x_56_, 0);
lean_inc(v_declName_57_);
v_module_58_ = lean_ctor_get(v_x_56_, 1);
lean_inc_ref(v_module_58_);
v_path_59_ = lean_ctor_get(v_x_56_, 2);
lean_inc_ref(v_path_59_);
v_construct_60_ = lean_ctor_get_uint8(v_x_56_, sizeof(void*)*4);
v_arity_61_ = lean_ctor_get(v_x_56_, 3);
lean_inc(v_arity_61_);
lean_dec_ref(v_x_56_);
v___x_62_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__5));
v___x_63_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__6));
v___x_64_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__7);
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = l_Lean_Name_reprPrec(v_declName_57_, v___x_65_);
v___x_67_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_64_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = 0;
v___x_69_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_63_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__9));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_box(1);
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__11));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_62_);
v___x_78_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__12);
v___x_79_ = l_String_quote(v_module_58_);
v___x_80_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_78_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_68_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_77_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_71_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_73_);
v___x_86_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__14));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_62_);
v___x_89_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__15);
v___x_90_ = l_String_quote(v_path_59_);
v___x_91_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_89_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_68_);
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_88_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_71_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_73_);
v___x_97_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__17));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___x_62_);
v___x_100_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__18);
v___x_101_ = l_Bool_repr___redArg(v_construct_60_);
v___x_102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*1, v___x_68_);
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_99_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_71_);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_73_);
v___x_107_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__20));
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_62_);
v___x_110_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__21);
v___x_111_ = l_Nat_reprFast(v_arity_61_);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_110_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_114_, sizeof(void*)*1, v___x_68_);
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_109_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = lean_obj_once(&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24, &l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24_once, _init_l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__24);
v___x_117_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__25));
v___x_118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_115_);
v___x_119_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__26));
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_116_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_68_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg(v_x_123_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_instReprBindingInfo_repr___boxed(lean_object* v_x_126_, lean_object* v_prec_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lasm_JS_Meta_instReprBindingInfo_repr(v_x_126_, v_prec_127_);
lean_dec(v_prec_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json___lam__0(lean_object* v_s_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_132_, 0, v_s_131_);
v___x_133_ = l_Lean_Json_compress(v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_BindingInfo_json(lean_object* v_b_142_){
_start:
{
lean_object* v_declName_143_; lean_object* v_module_144_; lean_object* v_path_145_; uint8_t v_construct_146_; lean_object* v_arity_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___y_164_; 
v_declName_143_ = lean_ctor_get(v_b_142_, 0);
lean_inc(v_declName_143_);
v_module_144_ = lean_ctor_get(v_b_142_, 1);
lean_inc_ref(v_module_144_);
v_path_145_ = lean_ctor_get(v_b_142_, 2);
lean_inc_ref(v_path_145_);
v_construct_146_ = lean_ctor_get_uint8(v_b_142_, sizeof(void*)*4);
v_arity_147_ = lean_ctor_get(v_b_142_, 3);
lean_inc(v_arity_147_);
lean_dec_ref(v_b_142_);
v___x_148_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__0));
v___x_149_ = 1;
v___x_150_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_143_, v___x_149_);
v___x_151_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v___x_150_);
v___x_152_ = lean_string_append(v___x_148_, v___x_151_);
lean_dec_ref(v___x_151_);
v___x_153_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_154_ = lean_string_append(v___x_152_, v___x_153_);
v___x_155_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_module_144_);
v___x_156_ = lean_string_append(v___x_154_, v___x_155_);
lean_dec_ref(v___x_155_);
v___x_157_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__2));
v___x_158_ = lean_string_append(v___x_156_, v___x_157_);
v___x_159_ = l_Lasm_JS_Meta_BindingInfo_json___lam__0(v_path_145_);
v___x_160_ = lean_string_append(v___x_158_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_161_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__3));
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
if (v_construct_146_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__6));
v___y_164_ = v___x_172_;
goto v___jp_163_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__7));
v___y_164_ = v___x_173_;
goto v___jp_163_;
}
v___jp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_165_ = lean_string_append(v___x_162_, v___y_164_);
v___x_166_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__4));
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
v___x_168_ = l_Nat_reprFast(v_arity_147_);
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
lean_dec_ref(v___x_168_);
v___x_170_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_171_ = lean_string_append(v___x_169_, v___x_170_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object* v_x_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object* v_x_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(v_x_178_);
lean_dec_ref(v_x_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(lean_object* v_es_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_array_mk(v_es_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_204_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_();
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(lean_object* v_as_207_, size_t v_sz_208_, size_t v_i_209_, lean_object* v_b_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_a_216_; uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_lt(v_i_209_, v_sz_208_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v_b_210_);
return v___x_221_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_a_222_ = lean_array_uget_borrowed(v_as_207_, v_i_209_);
v___x_223_ = l_Lean_Expr_fvarId_x21(v_a_222_);
v___x_224_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_223_, v___y_211_, v___y_212_, v___y_213_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; uint8_t v___x_226_; uint8_t v___x_227_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = lean_unbox(v_a_225_);
lean_dec(v_a_225_);
v___x_227_ = l_Lean_BinderInfo_isExplicit(v___x_226_);
if (v___x_227_ == 0)
{
v_a_216_ = v_b_210_;
goto v___jp_215_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(1u);
v___x_229_ = lean_nat_add(v_b_210_, v___x_228_);
lean_dec(v_b_210_);
v_a_216_ = v___x_229_;
goto v___jp_215_;
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec(v_b_210_);
v_a_230_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_224_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_224_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
v___jp_215_:
{
size_t v___x_217_; size_t v___x_218_; 
v___x_217_ = ((size_t)1ULL);
v___x_218_ = lean_usize_add(v_i_209_, v___x_217_);
v_i_209_ = v___x_218_;
v_b_210_ = v_a_216_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg___boxed(lean_object* v_as_238_, lean_object* v_sz_239_, lean_object* v_i_240_, lean_object* v_b_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
size_t v_sz_boxed_246_; size_t v_i_boxed_247_; lean_object* v_res_248_; 
v_sz_boxed_246_ = lean_unbox_usize(v_sz_239_);
lean_dec(v_sz_239_);
v_i_boxed_247_ = lean_unbox_usize(v_i_240_);
lean_dec(v_i_240_);
v_res_248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_238_, v_sz_boxed_246_, v_i_boxed_247_, v_b_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec_ref(v_as_238_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(lean_object* v_xs_249_, lean_object* v_x_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_n_256_; size_t v_sz_257_; size_t v___x_258_; lean_object* v___x_259_; 
v_n_256_ = lean_unsigned_to_nat(0u);
v_sz_257_ = lean_array_size(v_xs_249_);
v___x_258_ = ((size_t)0ULL);
v___x_259_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_xs_249_, v_sz_257_, v___x_258_, v_n_256_, v___y_251_, v___y_253_, v___y_254_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0___boxed(lean_object* v_xs_260_, lean_object* v_x_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(v_xs_260_, v_x_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec_ref(v_x_261_);
lean_dec_ref(v_xs_260_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(lean_object* v_type_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___f_275_; uint8_t v___x_276_; lean_object* v___x_277_; 
v___f_275_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0));
v___x_276_ = 0;
v___x_277_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DocString_0__Lean_Doc_checkContentParamType_spec__1___redArg(v_type_269_, v___f_275_, v___x_276_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___boxed(lean_object* v_type_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v_type_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(lean_object* v_as_285_, size_t v_sz_286_, size_t v_i_287_, lean_object* v_b_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_285_, v_sz_286_, v_i_287_, v_b_288_, v___y_289_, v___y_291_, v___y_292_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___boxed(lean_object* v_as_295_, lean_object* v_sz_296_, lean_object* v_i_297_, lean_object* v_b_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
size_t v_sz_boxed_304_; size_t v_i_boxed_305_; lean_object* v_res_306_; 
v_sz_boxed_304_ = lean_unbox_usize(v_sz_296_);
lean_dec(v_sz_296_);
v_i_boxed_305_ = lean_unbox_usize(v_i_297_);
lean_dec(v_i_297_);
v_res_306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(v_as_295_, v_sz_boxed_304_, v_i_boxed_305_, v_b_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec_ref(v_as_295_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object* v_addEntryFn_351_, lean_object* v___x_352_, lean_object* v_s_353_){
_start:
{
lean_object* v_importedEntries_354_; lean_object* v_state_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_363_; 
v_importedEntries_354_ = lean_ctor_get(v_s_353_, 0);
v_state_355_ = lean_ctor_get(v_s_353_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_s_353_);
if (v_isSharedCheck_363_ == 0)
{
v___x_357_ = v_s_353_;
v_isShared_358_ = v_isSharedCheck_363_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_state_355_);
lean_inc(v_importedEntries_354_);
lean_dec(v_s_353_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_363_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_state_359_; lean_object* v___x_361_; 
v_state_359_ = lean_apply_2(v_addEntryFn_351_, v_state_355_, v___x_352_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_state_359_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_importedEntries_354_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_state_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_364_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
return v___x_370_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = lean_unsigned_to_nat(32u);
v___x_372_ = lean_mk_empty_array_with_capacity(v___x_371_);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_375_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
lean_ctor_set(v___x_375_, 2, v___x_374_);
lean_ctor_set(v___x_375_, 3, v___x_374_);
lean_ctor_set(v___x_375_, 4, v___x_374_);
lean_ctor_set(v___x_375_, 5, v___x_374_);
return v___x_375_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
lean_ctor_set(v___x_377_, 2, v___x_376_);
lean_ctor_set(v___x_377_, 3, v___x_376_);
lean_ctor_set(v___x_377_, 4, v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object* v___x_378_, lean_object* v___x_379_, lean_object* v___x_380_, lean_object* v___x_381_, lean_object* v___x_382_, lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v_decl_385_, lean_object* v_stx_386_, uint8_t v_x_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_nextMacroScope_392_; lean_object* v_ngen_393_; lean_object* v_auxDeclNGen_394_; lean_object* v_traceState_395_; lean_object* v_recordedDeps_396_; lean_object* v_messages_397_; lean_object* v_infoState_398_; lean_object* v_snapshotTasks_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; uint8_t v___y_414_; 
v___x_407_ = l_Lean_Name_mkStr4(v___x_378_, v___x_379_, v___x_380_, v___x_381_);
lean_inc(v_stx_386_);
v___x_408_ = l_Lean_Syntax_isOfKind(v_stx_386_, v___x_407_);
lean_dec(v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_437_; 
lean_dec(v_stx_386_);
lean_dec(v_decl_385_);
lean_dec(v___x_384_);
lean_dec(v___x_383_);
v___x_437_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_437_;
}
else
{
lean_object* v___x_438_; lean_object* v_m_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_438_ = lean_unsigned_to_nat(1u);
v_m_439_ = l_Lean_Syntax_getArg(v_stx_386_, v___x_438_);
v___x_440_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
lean_inc(v_m_439_);
v___x_441_ = l_Lean_Syntax_isOfKind(v_m_439_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
lean_dec(v_m_439_);
lean_dec(v_stx_386_);
lean_dec(v_decl_385_);
lean_dec(v___x_384_);
lean_dec(v___x_383_);
v___x_442_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_442_;
}
else
{
lean_object* v_p_443_; uint8_t v___x_444_; lean_object* v_c_446_; lean_object* v___y_447_; lean_object* v___y_448_; 
v_p_443_ = l_Lean_Syntax_getArg(v_stx_386_, v___x_382_);
lean_inc(v_p_443_);
v___x_444_ = l_Lean_Syntax_isOfKind(v_p_443_, v___x_440_);
if (v___x_444_ == 0)
{
lean_object* v___x_496_; 
lean_dec(v_p_443_);
lean_dec(v_m_439_);
lean_dec(v_stx_386_);
lean_dec(v_decl_385_);
lean_dec(v___x_384_);
lean_dec(v___x_383_);
v___x_496_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_496_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_497_ = lean_unsigned_to_nat(3u);
v___x_498_ = l_Lean_Syntax_getArg(v_stx_386_, v___x_497_);
lean_dec(v_stx_386_);
v___x_499_ = l_Lean_Syntax_isNone(v___x_498_);
if (v___x_499_ == 0)
{
uint8_t v___x_500_; 
lean_inc(v___x_498_);
v___x_500_ = l_Lean_Syntax_matchesNull(v___x_498_, v___x_438_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; 
lean_dec(v___x_498_);
lean_dec(v_p_443_);
lean_dec(v_m_439_);
lean_dec(v_decl_385_);
lean_dec(v___x_384_);
lean_dec(v___x_383_);
v___x_501_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_501_;
}
else
{
lean_object* v_c_502_; lean_object* v___x_503_; 
v_c_502_ = l_Lean_Syntax_getArg(v___x_498_, v___x_384_);
lean_dec(v___x_498_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v_c_502_);
v_c_446_ = v___x_503_;
v___y_447_ = v___y_388_;
v___y_448_ = v___y_389_;
goto v___jp_445_;
}
}
else
{
lean_object* v___x_504_; 
lean_dec(v___x_498_);
v___x_504_ = lean_box(0);
v_c_446_ = v___x_504_;
v___y_447_ = v___y_388_;
v___y_448_ = v___y_389_;
goto v___jp_445_;
}
}
v___jp_445_:
{
lean_object* v___x_449_; 
lean_inc(v_decl_385_);
v___x_449_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3307094584____hygCtx___hyg_2__spec__3(v_decl_385_, v___y_447_, v___y_448_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_451_; uint8_t v___x_452_; uint8_t v___x_453_; uint8_t v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; uint64_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; size_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
lean_inc(v_a_450_);
lean_dec_ref_known(v___x_449_, 1);
v___x_451_ = l_Lean_ConstantInfo_type(v_a_450_);
lean_dec(v_a_450_);
v___x_452_ = 0;
v___x_453_ = 1;
v___x_454_ = 0;
v___x_455_ = 2;
v___x_456_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_456_, 0, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 1, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 2, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 3, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 4, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 5, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 6, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 7, v___x_452_);
lean_ctor_set_uint8(v___x_456_, 8, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 9, v___x_453_);
lean_ctor_set_uint8(v___x_456_, 10, v___x_454_);
lean_ctor_set_uint8(v___x_456_, 11, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 12, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 13, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 14, v___x_455_);
lean_ctor_set_uint8(v___x_456_, 15, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 16, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 17, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 18, v___x_408_);
lean_ctor_set_uint8(v___x_456_, 19, v___x_452_);
v___x_457_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set_uint64(v___x_458_, sizeof(void*)*1, v___x_457_);
v___x_459_ = lean_box(1);
v___x_460_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_461_ = lean_unsigned_to_nat(32u);
v___x_462_ = lean_mk_empty_array_with_capacity(v___x_461_);
v___x_463_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_464_ = ((size_t)5ULL);
lean_inc_n(v___x_384_, 6);
v___x_465_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v___x_462_);
lean_ctor_set(v___x_465_, 2, v___x_384_);
lean_ctor_set(v___x_465_, 3, v___x_384_);
lean_ctor_set_usize(v___x_465_, 4, v___x_464_);
lean_inc_ref(v___x_465_);
v___x_466_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_466_, 0, v___x_460_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
lean_ctor_set(v___x_466_, 2, v___x_459_);
v___x_467_ = lean_mk_empty_array_with_capacity(v___x_384_);
v___x_468_ = lean_box(0);
v___x_469_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_469_, 0, v___x_458_);
lean_ctor_set(v___x_469_, 1, v___x_459_);
lean_ctor_set(v___x_469_, 2, v___x_466_);
lean_ctor_set(v___x_469_, 3, v___x_467_);
lean_ctor_set(v___x_469_, 4, v___x_468_);
lean_ctor_set(v___x_469_, 5, v___x_384_);
lean_ctor_set(v___x_469_, 6, v___x_468_);
lean_ctor_set_uint8(v___x_469_, sizeof(void*)*7, v___x_452_);
lean_ctor_set_uint8(v___x_469_, sizeof(void*)*7 + 1, v___x_452_);
lean_ctor_set_uint8(v___x_469_, sizeof(void*)*7 + 2, v___x_452_);
lean_ctor_set_uint8(v___x_469_, sizeof(void*)*7 + 3, v___x_444_);
v___x_470_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_470_, 0, v___x_384_);
lean_ctor_set(v___x_470_, 1, v___x_384_);
lean_ctor_set(v___x_470_, 2, v___x_384_);
lean_ctor_set(v___x_470_, 3, v___x_384_);
lean_ctor_set(v___x_470_, 4, v___x_460_);
lean_ctor_set(v___x_470_, 5, v___x_460_);
lean_ctor_set(v___x_470_, 6, v___x_460_);
lean_ctor_set(v___x_470_, 7, v___x_460_);
lean_ctor_set(v___x_470_, 8, v___x_460_);
lean_ctor_set(v___x_470_, 9, v___x_460_);
lean_ctor_set(v___x_470_, 10, v___x_460_);
lean_ctor_set(v___x_470_, 11, v___x_468_);
v___x_471_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_472_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_473_, 0, v___x_470_);
lean_ctor_set(v___x_473_, 1, v___x_471_);
lean_ctor_set(v___x_473_, 2, v___x_459_);
lean_ctor_set(v___x_473_, 3, v___x_465_);
lean_ctor_set(v___x_473_, 4, v___x_472_);
v___x_474_ = lean_st_mk_ref(v___x_473_);
v___x_475_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v___x_451_, v___x_469_, v___x_474_, v___y_447_, v___y_448_);
lean_dec_ref_known(v___x_469_, 7);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_475_, 1);
v___x_477_ = lean_st_ref_get(v___x_474_);
lean_dec(v___x_474_);
lean_dec(v___x_477_);
v___x_478_ = l_Lean_TSyntax_getString(v_m_439_);
lean_dec(v_m_439_);
v___x_479_ = l_Lean_TSyntax_getString(v_p_443_);
lean_dec(v_p_443_);
if (lean_obj_tag(v_c_446_) == 0)
{
v___y_410_ = v_a_476_;
v___y_411_ = v___x_479_;
v___y_412_ = v___x_478_;
v___y_413_ = v___y_448_;
v___y_414_ = v___x_452_;
goto v___jp_409_;
}
else
{
lean_dec_ref_known(v_c_446_, 1);
v___y_410_ = v_a_476_;
v___y_411_ = v___x_479_;
v___y_412_ = v___x_478_;
v___y_413_ = v___y_448_;
v___y_414_ = v___x_408_;
goto v___jp_409_;
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec(v___x_474_);
lean_dec(v_c_446_);
lean_dec(v_p_443_);
lean_dec(v_m_439_);
lean_dec(v_decl_385_);
lean_dec(v___x_383_);
v_a_480_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_475_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_475_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec(v_c_446_);
lean_dec(v_p_443_);
lean_dec(v_m_439_);
lean_dec(v_decl_385_);
lean_dec(v___x_384_);
lean_dec(v___x_383_);
v_a_488_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_449_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_449_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
}
v___jp_391_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_403_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_404_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_404_, 0, v___y_402_);
lean_ctor_set(v___x_404_, 1, v_nextMacroScope_392_);
lean_ctor_set(v___x_404_, 2, v_ngen_393_);
lean_ctor_set(v___x_404_, 3, v_auxDeclNGen_394_);
lean_ctor_set(v___x_404_, 4, v_traceState_395_);
lean_ctor_set(v___x_404_, 5, v___x_403_);
lean_ctor_set(v___x_404_, 6, v_recordedDeps_396_);
lean_ctor_set(v___x_404_, 7, v_messages_397_);
lean_ctor_set(v___x_404_, 8, v_infoState_398_);
lean_ctor_set(v___x_404_, 9, v_snapshotTasks_399_);
v___x_405_ = lean_st_ref_put(v___y_401_, v___x_404_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___y_400_);
return v___x_406_;
}
v___jp_409_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_env_417_; lean_object* v_nextMacroScope_418_; lean_object* v_ngen_419_; lean_object* v_auxDeclNGen_420_; lean_object* v_traceState_421_; lean_object* v_recordedDeps_422_; lean_object* v_messages_423_; lean_object* v_infoState_424_; lean_object* v_snapshotTasks_425_; lean_object* v___x_426_; lean_object* v_toEnvExtension_427_; lean_object* v_addEntryFn_428_; lean_object* v_asyncMode_429_; uint8_t v_logWrites_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___f_433_; 
v___x_415_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_415_, 0, v_decl_385_);
lean_ctor_set(v___x_415_, 1, v___y_412_);
lean_ctor_set(v___x_415_, 2, v___y_411_);
lean_ctor_set(v___x_415_, 3, v___y_410_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*4, v___y_414_);
v___x_416_ = lean_st_ref_take(v___y_413_);
v_env_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc_ref(v_env_417_);
v_nextMacroScope_418_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_nextMacroScope_418_);
v_ngen_419_ = lean_ctor_get(v___x_416_, 2);
lean_inc_ref(v_ngen_419_);
v_auxDeclNGen_420_ = lean_ctor_get(v___x_416_, 3);
lean_inc_ref(v_auxDeclNGen_420_);
v_traceState_421_ = lean_ctor_get(v___x_416_, 4);
lean_inc_ref(v_traceState_421_);
v_recordedDeps_422_ = lean_ctor_get(v___x_416_, 6);
lean_inc_ref(v_recordedDeps_422_);
v_messages_423_ = lean_ctor_get(v___x_416_, 7);
lean_inc_ref(v_messages_423_);
v_infoState_424_ = lean_ctor_get(v___x_416_, 8);
lean_inc_ref(v_infoState_424_);
v_snapshotTasks_425_ = lean_ctor_get(v___x_416_, 9);
lean_inc_ref(v_snapshotTasks_425_);
lean_dec(v___x_416_);
v___x_426_ = l_Lasm_JS_Meta_bindingExtension;
v_toEnvExtension_427_ = lean_ctor_get(v___x_426_, 0);
v_addEntryFn_428_ = lean_ctor_get(v___x_426_, 3);
v_asyncMode_429_ = lean_ctor_get(v_toEnvExtension_427_, 2);
v_logWrites_430_ = lean_ctor_get_uint8(v_toEnvExtension_427_, sizeof(void*)*6);
v___x_431_ = lean_box(0);
v___x_432_ = l_Lasm_JS_Meta_BindingInfo_json(v___x_415_);
lean_inc(v_addEntryFn_428_);
v___f_433_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_433_, 0, v_addEntryFn_428_);
lean_closure_set(v___f_433_, 1, v___x_432_);
if (v_logWrites_430_ == 0)
{
lean_object* v___x_434_; 
lean_inc_ref(v_toEnvExtension_427_);
v___x_434_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_427_, v_env_417_, v___f_433_, v_asyncMode_429_, v___x_383_, v___x_408_);
v_nextMacroScope_392_ = v_nextMacroScope_418_;
v_ngen_393_ = v_ngen_419_;
v_auxDeclNGen_394_ = v_auxDeclNGen_420_;
v_traceState_395_ = v_traceState_421_;
v_recordedDeps_396_ = v_recordedDeps_422_;
v_messages_397_ = v_messages_423_;
v_infoState_398_ = v_infoState_424_;
v_snapshotTasks_399_ = v_snapshotTasks_425_;
v___y_400_ = v___x_431_;
v___y_401_ = v___y_413_;
v___y_402_ = v___x_434_;
goto v___jp_391_;
}
else
{
lean_object* v___x_435_; lean_object* v___x_436_; 
lean_inc_ref_n(v_toEnvExtension_427_, 2);
v___x_435_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_427_, v_env_417_);
lean_dec_ref(v_env_417_);
v___x_436_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_427_, v___x_435_, v___f_433_, v_asyncMode_429_, v___x_383_, v___x_408_);
v_nextMacroScope_392_ = v_nextMacroScope_418_;
v_ngen_393_ = v_ngen_419_;
v_auxDeclNGen_394_ = v_auxDeclNGen_420_;
v_traceState_395_ = v_traceState_421_;
v_recordedDeps_396_ = v_recordedDeps_422_;
v_messages_397_ = v_messages_423_;
v_infoState_398_ = v_infoState_424_;
v_snapshotTasks_399_ = v_snapshotTasks_425_;
v___y_400_ = v___x_431_;
v___y_401_ = v___y_413_;
v___y_402_ = v___x_436_;
goto v___jp_391_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v___x_507_, lean_object* v___x_508_, lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v_decl_512_, lean_object* v_stx_513_, lean_object* v_x_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
uint8_t v_x_1971__boxed_518_; lean_object* v_res_519_; 
v_x_1971__boxed_518_ = lean_unbox(v_x_514_);
v_res_519_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(v___x_505_, v___x_506_, v___x_507_, v___x_508_, v___x_509_, v___x_510_, v___x_511_, v_decl_512_, v_stx_513_, v_x_1971__boxed_518_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___x_509_);
return v_res_519_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_522_ = l_Lean_stringToMessageData(v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_525_ = l_Lean_stringToMessageData(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object* v___x_526_, lean_object* v_decl_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_531_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_532_ = l_Lean_MessageData_ofName(v___x_526_);
v___x_533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(v___x_535_, v___y_528_, v___y_529_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v___x_537_, lean_object* v_decl_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(v___x_537_, v_decl_538_, v___y_539_, v___y_540_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v_decl_538_);
return v_res_542_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_585_ = lean_unsigned_to_nat(2396663746u);
v___x_586_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_587_ = l_Lean_Name_num___override(v___x_586_, v___x_585_);
return v___x_587_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_589_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_590_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_591_ = l_Lean_Name_str___override(v___x_590_, v___x_589_);
return v___x_591_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_594_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_595_ = l_Lean_Name_str___override(v___x_594_, v___x_593_);
return v___x_595_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = lean_unsigned_to_nat(2u);
v___x_597_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_598_ = l_Lean_Name_num___override(v___x_597_, v___x_596_);
return v___x_598_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_612_ = 0;
v___x_613_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_614_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_615_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_616_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_614_);
lean_ctor_set(v___x_616_, 2, v___x_613_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*3, v___x_612_);
return v___x_616_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___f_617_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___f_618_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_619_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___f_618_);
lean_ctor_set(v___x_620_, 2, v___f_617_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_623_ = l_Lean_registerBuiltinAttribute(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_();
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(lean_object* v_____do__lift_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
uint8_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = 0;
v___x_653_ = l_Lean_SourceInfo_fromRef(v_____do__lift_649_, v___x_652_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set(v___x_654_, 1, v___y_651_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object* v_____do__lift_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_____do__lift_655_, v___y_656_, v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v_____do__lift_655_);
return v_res_658_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_675_ = l_String_toRawSubstring_x27(v___x_674_);
return v___x_675_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9));
v___x_680_ = l_String_toRawSubstring_x27(v___x_679_);
return v___x_680_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27));
v___x_712_ = l_String_toRawSubstring_x27(v___x_711_);
return v___x_712_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42));
v___x_742_ = l_String_toRawSubstring_x27(v___x_741_);
return v___x_742_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48));
v___x_749_ = l_String_toRawSubstring_x27(v___x_748_);
return v___x_749_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57));
v___x_760_ = l_String_toRawSubstring_x27(v___x_759_);
return v___x_760_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10));
v___x_765_ = l_String_toRawSubstring_x27(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13));
v___x_769_ = l_String_toRawSubstring_x27(v___x_768_);
return v___x_769_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16));
v___x_773_ = l_String_toRawSubstring_x27(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_781_ = l_Lean_mkCIdent(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70));
v___x_786_ = l_Lean_mkCIdent(v___x_785_);
return v___x_786_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74(void){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Array_mkArray0___redArg();
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(lean_object* v_x_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v_record_854_; lean_object* v___y_855_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_860_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_861_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_862_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
lean_inc(v_x_846_);
v___x_863_ = l_Lean_Syntax_isOfKind(v_x_846_, v___x_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec(v_x_846_);
v___x_864_ = lean_box(1);
v___x_865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
lean_ctor_set(v___x_865_, 1, v_a_848_);
return v___x_865_;
}
else
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = l_Lean_Syntax_getArg(v_x_846_, v___x_866_);
v___x_868_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
lean_inc(v___x_867_);
v___x_869_ = l_Lean_Syntax_isOfKind(v___x_867_, v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_870_ = lean_box(1);
v___x_871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
lean_ctor_set(v___x_871_, 1, v_a_848_);
return v___x_871_;
}
else
{
lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; uint8_t v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; uint8_t v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; uint8_t v_fst_1166_; lean_object* v_snd_1167_; lean_object* v_doc_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___x_1311_; uint8_t v___x_1312_; 
v___x_1311_ = l_Lean_Syntax_getArg(v___x_867_, v___x_866_);
v___x_1312_ = l_Lean_Syntax_isNone(v___x_1311_);
if (v___x_1312_ == 0)
{
lean_object* v___x_1313_; uint8_t v___x_1314_; 
v___x_1313_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1311_);
v___x_1314_ = l_Lean_Syntax_matchesNull(v___x_1311_, v___x_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec(v___x_1311_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1315_ = lean_box(1);
v___x_1316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v_a_848_);
return v___x_1316_;
}
else
{
lean_object* v_doc_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v_doc_1317_ = l_Lean_Syntax_getArg(v___x_1311_, v___x_866_);
lean_dec(v___x_1311_);
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95));
lean_inc(v_doc_1317_);
v___x_1319_ = l_Lean_Syntax_isOfKind(v_doc_1317_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec(v_doc_1317_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1320_ = lean_box(1);
v___x_1321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v_a_848_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; 
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_doc_1317_);
v_doc_1185_ = v___x_1322_;
v___y_1186_ = v_a_847_;
v___y_1187_ = v_a_848_;
goto v___jp_1184_;
}
}
}
else
{
lean_object* v___x_1323_; 
lean_dec(v___x_1311_);
v___x_1323_ = lean_box(0);
v_doc_1185_ = v___x_1323_;
v___y_1186_ = v_a_847_;
v___y_1187_ = v_a_848_;
goto v___jp_1184_;
}
v___jp_872_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
lean_inc(v___y_920_);
lean_inc_n(v___y_897_, 14);
lean_inc_n(v___y_894_, 2);
lean_inc(v___y_891_);
lean_inc_n(v___y_909_, 23);
v___x_921_ = l_Lean_Syntax_node3(v___y_909_, v___y_891_, v___y_894_, v___y_897_, v___y_920_);
lean_inc_n(v___y_875_, 5);
v___x_922_ = l_Lean_Syntax_node3(v___y_909_, v___y_875_, v___y_897_, v___y_897_, v___x_921_);
lean_inc(v___y_914_);
v___x_923_ = l_Lean_Syntax_node2(v___y_909_, v___y_914_, v___y_907_, v___x_922_);
v___x_924_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_925_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7);
v___x_926_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8));
lean_inc_n(v___y_910_, 2);
lean_inc_n(v___y_877_, 2);
v___x_927_ = l_Lean_addMacroScope(v___y_877_, v___x_926_, v___y_910_);
lean_inc_n(v___y_879_, 2);
v___x_928_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_928_, 0, v___y_909_);
lean_ctor_set(v___x_928_, 1, v___x_925_);
lean_ctor_set(v___x_928_, 2, v___x_927_);
lean_ctor_set(v___x_928_, 3, v___y_879_);
v___x_929_ = l_Lean_Syntax_node2(v___y_909_, v___y_917_, v___x_928_, v___y_897_);
v___x_930_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10);
lean_inc_ref(v___y_878_);
lean_inc_ref(v___y_904_);
v___x_931_ = l_Lean_Name_mkStr4(v___y_904_, v___y_878_, v___y_906_, v___x_924_);
lean_inc(v___x_931_);
v___x_932_ = l_Lean_addMacroScope(v___y_877_, v___x_931_, v___y_910_);
lean_inc(v___y_882_);
v___x_933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___y_882_);
v___x_934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
lean_ctor_set(v___x_934_, 1, v___y_879_);
v___x_935_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_935_, 0, v___y_909_);
lean_ctor_set(v___x_935_, 1, v___x_930_);
lean_ctor_set(v___x_935_, 2, v___x_932_);
lean_ctor_set(v___x_935_, 3, v___x_934_);
lean_inc(v___y_915_);
v___x_936_ = l_Lean_Syntax_node1(v___y_909_, v___y_875_, v___y_915_);
lean_inc(v___y_900_);
v___x_937_ = l_Lean_Syntax_node2(v___y_909_, v___y_900_, v___x_935_, v___x_936_);
v___x_938_ = l_Lean_Syntax_node3(v___y_909_, v___y_891_, v___y_894_, v___y_897_, v___x_937_);
v___x_939_ = l_Lean_Syntax_node3(v___y_909_, v___y_875_, v___y_897_, v___y_897_, v___x_938_);
v___x_940_ = l_Lean_Syntax_node2(v___y_909_, v___y_914_, v___x_929_, v___x_939_);
v___x_941_ = lean_unsigned_to_nat(9u);
v___x_942_ = lean_mk_empty_array_with_capacity(v___x_941_);
v___x_943_ = lean_array_push(v___x_942_, v___y_916_);
lean_inc_n(v___y_884_, 3);
v___x_944_ = lean_array_push(v___x_943_, v___y_884_);
v___x_945_ = lean_array_push(v___x_944_, v___y_876_);
v___x_946_ = lean_array_push(v___x_945_, v___y_884_);
v___x_947_ = lean_array_push(v___x_946_, v___y_905_);
v___x_948_ = lean_array_push(v___x_947_, v___y_884_);
v___x_949_ = lean_array_push(v___x_948_, v___x_923_);
v___x_950_ = lean_array_push(v___x_949_, v___y_884_);
v___x_951_ = lean_array_push(v___x_950_, v___x_940_);
v___x_952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_952_, 0, v___y_909_);
lean_ctor_set(v___x_952_, 1, v___y_875_);
lean_ctor_set(v___x_952_, 2, v___x_951_);
v___x_953_ = l_Lean_Syntax_node1(v___y_909_, v___y_903_, v___x_952_);
v___x_954_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11));
lean_inc_ref(v___y_919_);
v___x_955_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_919_, v___x_954_);
v___x_956_ = l_Lean_Syntax_node1(v___y_909_, v___x_955_, v___y_897_);
v___x_957_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_958_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_958_, 0, v___y_909_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = l_Lean_Syntax_node6(v___y_909_, v___y_892_, v___y_890_, v___y_897_, v___x_953_, v___x_956_, v___y_897_, v___x_958_);
v___x_960_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_961_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_962_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_962_, 0, v___y_909_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = l_Lean_Syntax_node3(v___y_909_, v___x_960_, v___x_962_, v___y_897_, v___y_889_);
v___x_964_ = l_Lean_Syntax_node3(v___y_909_, v___y_875_, v___y_915_, v___x_959_, v___x_963_);
v___x_965_ = l_Lean_Syntax_node2(v___y_909_, v___y_900_, v___y_899_, v___x_964_);
v___x_966_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_967_ = l_Lean_Syntax_node2(v___y_909_, v___x_966_, v___y_897_, v___y_897_);
lean_inc(v___y_913_);
v___x_968_ = l_Lean_Syntax_node4(v___y_909_, v___y_913_, v___y_894_, v___x_965_, v___x_967_, v___y_897_);
lean_inc(v___y_880_);
v___x_969_ = l_Lean_Syntax_node5(v___y_909_, v___y_880_, v___y_912_, v___y_874_, v___y_918_, v___x_968_, v___y_897_);
v___x_970_ = l_Lean_Syntax_node2(v___y_909_, v___x_862_, v___y_885_, v___x_969_);
if (v___y_898_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_971_ = l_Lean_SourceInfo_fromRef(v___y_888_, v___y_898_);
v___x_972_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_973_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc_n(v___x_971_, 10);
v___x_974_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_971_);
lean_ctor_set(v___x_974_, 1, v___x_972_);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
v___x_976_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_971_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
lean_inc_ref(v___y_902_);
lean_inc_n(v___y_875_, 3);
v___x_977_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_977_, 0, v___x_971_);
lean_ctor_set(v___x_977_, 1, v___y_875_);
lean_ctor_set(v___x_977_, 2, v___y_902_);
lean_inc_ref(v___x_977_);
lean_inc(v___y_911_);
v___x_978_ = l_Lean_Syntax_node1(v___x_971_, v___y_911_, v___x_977_);
v___x_979_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_901_);
lean_inc_ref(v___y_878_);
lean_inc_ref(v___y_904_);
v___x_980_ = l_Lean_Name_mkStr4(v___y_904_, v___y_878_, v___y_901_, v___x_979_);
v___x_981_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_982_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_971_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = l_Lean_Syntax_node4(v___x_971_, v___x_980_, v___x_982_, v___y_883_, v___y_896_, v___x_977_);
lean_inc(v___y_881_);
v___x_984_ = l_Lean_Syntax_node2(v___x_971_, v___y_881_, v___x_978_, v___x_983_);
v___x_985_ = l_Lean_Syntax_node1(v___x_971_, v___y_875_, v___x_984_);
lean_inc_ref(v___y_873_);
v___x_986_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_971_);
lean_ctor_set(v___x_986_, 1, v___y_873_);
v___x_987_ = l_Lean_Syntax_node1(v___x_971_, v___y_875_, v___y_887_);
v___x_988_ = l_Lean_Syntax_node5(v___x_971_, v___x_973_, v___x_974_, v___x_976_, v___x_985_, v___x_986_, v___x_987_);
v___y_850_ = v___y_875_;
v___y_851_ = v___x_970_;
v___y_852_ = v___y_893_;
v___y_853_ = v___y_908_;
v_record_854_ = v___x_988_;
v___y_855_ = v___y_895_;
goto v___jp_849_;
}
else
{
lean_object* v___x_989_; lean_object* v_a_990_; lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1017_; 
v___x_989_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v___y_888_, v___y_886_, v___y_895_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_a_991_ = lean_ctor_get(v___x_989_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_993_ = v___x_989_;
v_isShared_994_ = v_isSharedCheck_1017_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1017_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_995_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_996_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc(v_a_990_);
if (v_isShared_994_ == 0)
{
lean_ctor_set_tag(v___x_993_, 2);
lean_ctor_set(v___x_993_, 1, v___x_995_);
v___x_998_ = v___x_993_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_990_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_995_);
v___x_998_ = v_reuseFailAlloc_1016_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_999_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
lean_inc_n(v_a_990_, 11);
v___x_1000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_a_990_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
lean_inc_ref(v___y_902_);
lean_inc_n(v___y_875_, 4);
v___x_1001_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1001_, 0, v_a_990_);
lean_ctor_set(v___x_1001_, 1, v___y_875_);
lean_ctor_set(v___x_1001_, 2, v___y_902_);
lean_inc(v___y_911_);
v___x_1002_ = l_Lean_Syntax_node1(v_a_990_, v___y_911_, v___x_1001_);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_901_);
lean_inc_ref(v___y_878_);
lean_inc_ref(v___y_904_);
v___x_1004_ = l_Lean_Name_mkStr4(v___y_904_, v___y_878_, v___y_901_, v___x_1003_);
v___x_1005_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_1006_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1006_, 0, v_a_990_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22));
v___x_1008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1008_, 0, v_a_990_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = l_Lean_Syntax_node1(v_a_990_, v___y_875_, v___x_1008_);
v___x_1010_ = l_Lean_Syntax_node4(v_a_990_, v___x_1004_, v___x_1006_, v___y_883_, v___y_896_, v___x_1009_);
lean_inc(v___y_881_);
v___x_1011_ = l_Lean_Syntax_node2(v_a_990_, v___y_881_, v___x_1002_, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node1(v_a_990_, v___y_875_, v___x_1011_);
lean_inc_ref(v___y_873_);
v___x_1013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1013_, 0, v_a_990_);
lean_ctor_set(v___x_1013_, 1, v___y_873_);
v___x_1014_ = l_Lean_Syntax_node1(v_a_990_, v___y_875_, v___y_887_);
v___x_1015_ = l_Lean_Syntax_node5(v_a_990_, v___x_996_, v___x_998_, v___x_1000_, v___x_1012_, v___x_1013_, v___x_1014_);
v___y_850_ = v___y_875_;
v___y_851_ = v___x_970_;
v___y_852_ = v___y_893_;
v___y_853_ = v___y_908_;
v_record_854_ = v___x_1015_;
v___y_855_ = v_a_991_;
goto v___jp_849_;
}
}
}
}
v___jp_1018_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_inc_ref_n(v___y_1034_, 2);
v___x_1045_ = l_Array_append___redArg(v___y_1034_, v___y_1044_);
lean_dec_ref(v___y_1044_);
lean_inc_n(v___y_1019_, 9);
lean_inc_n(v___y_1038_, 42);
v___x_1046_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1046_, 0, v___y_1038_);
lean_ctor_set(v___x_1046_, 1, v___y_1019_);
lean_ctor_set(v___x_1046_, 2, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23));
v___x_1048_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___y_1038_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1049_, 0, v___y_1038_);
lean_ctor_set(v___x_1049_, 1, v___y_1019_);
lean_ctor_set(v___x_1049_, 2, v___y_1034_);
lean_inc_ref_n(v___x_1049_, 21);
lean_inc(v___y_1040_);
v___x_1050_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1040_, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26));
v___x_1052_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28);
v___x_1053_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29));
lean_inc_n(v___y_1039_, 7);
lean_inc_n(v___y_1020_, 7);
v___x_1054_ = l_Lean_addMacroScope(v___y_1020_, v___x_1053_, v___y_1039_);
v___x_1055_ = lean_box(0);
v___x_1056_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1056_, 0, v___y_1038_);
lean_ctor_set(v___x_1056_, 1, v___x_1052_);
lean_ctor_set(v___x_1056_, 2, v___x_1054_);
lean_ctor_set(v___x_1056_, 3, v___x_1055_);
v___x_1057_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1051_, v___x_1056_, v___x_1049_);
lean_inc(v___y_1023_);
v___x_1058_ = l_Lean_Syntax_node2(v___y_1038_, v___y_1023_, v___x_1050_, v___x_1057_);
v___x_1059_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1019_, v___x_1058_);
v___x_1060_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_1061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___y_1038_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
lean_inc_ref(v___x_1061_);
lean_inc(v___y_1036_);
v___x_1062_ = l_Lean_Syntax_node3(v___y_1038_, v___y_1036_, v___x_1048_, v___x_1059_, v___x_1061_);
v___x_1063_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1019_, v___x_1062_);
v___x_1064_ = l_Lean_Syntax_node7(v___y_1038_, v___x_868_, v___x_1046_, v___x_1063_, v___x_1049_, v___x_1049_, v___x_1049_, v___x_1049_, v___x_1049_);
v___x_1065_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33));
v___x_1067_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___y_1038_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
lean_inc_n(v___y_1028_, 2);
v___x_1069_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1069_, 0, v___y_1028_);
lean_ctor_set(v___x_1069_, 1, v___y_1019_);
lean_ctor_set(v___x_1069_, 2, v___x_1068_);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___y_1022_);
lean_inc(v___y_1025_);
lean_inc_ref(v___x_1070_);
v___x_1071_ = lean_array_push(v___x_1070_, v___y_1025_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1069_);
lean_inc(v___y_1037_);
v___x_1073_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1073_, 0, v___y_1028_);
lean_ctor_set(v___x_1073_, 1, v___y_1037_);
lean_ctor_set(v___x_1073_, 2, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36));
v___x_1075_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_1076_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___y_1038_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
lean_inc(v___y_1041_);
lean_inc(v___y_1032_);
v___x_1077_ = l_Lean_Syntax_node2(v___y_1038_, v___y_1032_, v___x_1076_, v___y_1041_);
v___x_1078_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1019_, v___x_1077_);
v___x_1079_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1074_, v___x_1049_, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_1082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___y_1038_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41));
lean_inc_ref_n(v___y_1043_, 7);
v___x_1084_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1083_);
v___x_1085_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44));
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45));
lean_inc_ref(v___y_1021_);
lean_inc_ref(v___y_1035_);
v___x_1088_ = l_Lean_Name_mkStr4(v___y_1035_, v___y_1021_, v___x_1086_, v___x_1087_);
lean_inc(v___x_1088_);
v___x_1089_ = l_Lean_addMacroScope(v___y_1020_, v___x_1088_, v___y_1039_);
v___x_1090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1055_);
v___x_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v___x_1055_);
v___x_1092_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1092_, 0, v___y_1038_);
lean_ctor_set(v___x_1092_, 1, v___x_1085_);
lean_ctor_set(v___x_1092_, 2, v___x_1089_);
lean_ctor_set(v___x_1092_, 3, v___x_1091_);
v___x_1093_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46));
v___x_1094_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___y_1038_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50));
v___x_1099_ = l_Lean_addMacroScope(v___y_1020_, v___x_1098_, v___y_1039_);
v___x_1100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1100_, 0, v___y_1038_);
lean_ctor_set(v___x_1100_, 1, v___x_1097_);
lean_ctor_set(v___x_1100_, 2, v___x_1099_);
lean_ctor_set(v___x_1100_, 3, v___x_1055_);
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_1102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___y_1038_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
lean_inc_ref_n(v___x_1082_, 4);
v___x_1103_ = l_Lean_Syntax_node5(v___y_1038_, v___x_1094_, v___x_1096_, v___x_1100_, v___x_1082_, v___y_1041_, v___x_1102_);
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52));
v___x_1105_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1104_);
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_1107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___y_1038_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54));
v___x_1109_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55));
v___x_1111_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56));
v___x_1113_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1112_);
v___x_1114_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58);
v___x_1115_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59));
v___x_1116_ = l_Lean_addMacroScope(v___y_1020_, v___x_1115_, v___y_1039_);
v___x_1117_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1117_, 0, v___y_1038_);
lean_ctor_set(v___x_1117_, 1, v___x_1114_);
lean_ctor_set(v___x_1117_, 2, v___x_1116_);
lean_ctor_set(v___x_1117_, 3, v___x_1055_);
lean_inc_n(v___x_1113_, 4);
v___x_1118_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1113_, v___x_1117_, v___x_1049_);
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60));
v___x_1120_ = l_Lean_Name_mkStr4(v___x_860_, v___x_861_, v___y_1043_, v___x_1119_);
lean_inc_n(v___x_1120_, 3);
v___x_1121_ = l_Lean_Syntax_node3(v___y_1038_, v___x_1120_, v___x_1082_, v___x_1049_, v___y_1042_);
v___x_1122_ = l_Lean_Syntax_node3(v___y_1038_, v___y_1019_, v___x_1049_, v___x_1049_, v___x_1121_);
lean_inc_n(v___x_1111_, 3);
v___x_1123_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1111_, v___x_1118_, v___x_1122_);
v___x_1124_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___y_1038_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61);
v___x_1127_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62));
v___x_1128_ = l_Lean_addMacroScope(v___y_1020_, v___x_1127_, v___y_1039_);
v___x_1129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1129_, 0, v___y_1038_);
lean_ctor_set(v___x_1129_, 1, v___x_1126_);
lean_ctor_set(v___x_1129_, 2, v___x_1128_);
lean_ctor_set(v___x_1129_, 3, v___x_1055_);
v___x_1130_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1113_, v___x_1129_, v___x_1049_);
lean_inc(v___y_1024_);
v___x_1131_ = l_Lean_Syntax_node3(v___y_1038_, v___x_1120_, v___x_1082_, v___x_1049_, v___y_1024_);
v___x_1132_ = l_Lean_Syntax_node3(v___y_1038_, v___y_1019_, v___x_1049_, v___x_1049_, v___x_1131_);
v___x_1133_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1111_, v___x_1130_, v___x_1132_);
v___x_1134_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63);
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64));
v___x_1136_ = l_Lean_addMacroScope(v___y_1020_, v___x_1135_, v___y_1039_);
v___x_1137_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1137_, 0, v___y_1038_);
lean_ctor_set(v___x_1137_, 1, v___x_1134_);
lean_ctor_set(v___x_1137_, 2, v___x_1136_);
lean_ctor_set(v___x_1137_, 3, v___x_1055_);
v___x_1138_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1113_, v___x_1137_, v___x_1049_);
lean_inc(v___y_1029_);
v___x_1139_ = l_Lean_Syntax_node3(v___y_1038_, v___x_1120_, v___x_1082_, v___x_1049_, v___y_1029_);
v___x_1140_ = l_Lean_Syntax_node3(v___y_1038_, v___y_1019_, v___x_1049_, v___x_1049_, v___x_1139_);
v___x_1141_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1111_, v___x_1138_, v___x_1140_);
v___x_1142_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66));
v___x_1144_ = l_Lean_addMacroScope(v___y_1020_, v___x_1143_, v___y_1039_);
v___x_1145_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1145_, 0, v___y_1038_);
lean_ctor_set(v___x_1145_, 1, v___x_1142_);
lean_ctor_set(v___x_1145_, 2, v___x_1144_);
lean_ctor_set(v___x_1145_, 3, v___x_1055_);
v___x_1146_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1113_, v___x_1145_, v___x_1049_);
if (v___y_1031_ == 0)
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69);
v___y_873_ = v___x_1060_;
v___y_874_ = v___x_1073_;
v___y_875_ = v___y_1019_;
v___y_876_ = v___x_1133_;
v___y_877_ = v___y_1020_;
v___y_878_ = v___y_1021_;
v___y_879_ = v___x_1055_;
v___y_880_ = v___x_1065_;
v___y_881_ = v___y_1023_;
v___y_882_ = v___x_1055_;
v___y_883_ = v___y_1024_;
v___y_884_ = v___x_1125_;
v___y_885_ = v___x_1064_;
v___y_886_ = v___y_1026_;
v___y_887_ = v___y_1025_;
v___y_888_ = v___y_1027_;
v___y_889_ = v___x_1061_;
v___y_890_ = v___x_1107_;
v___y_891_ = v___x_1120_;
v___y_892_ = v___x_1105_;
v___y_893_ = v___y_1028_;
v___y_894_ = v___x_1082_;
v___y_895_ = v___y_1030_;
v___y_896_ = v___y_1029_;
v___y_897_ = v___x_1049_;
v___y_898_ = v___y_1031_;
v___y_899_ = v___x_1092_;
v___y_900_ = v___x_1084_;
v___y_901_ = v___y_1033_;
v___y_902_ = v___y_1034_;
v___y_903_ = v___x_1109_;
v___y_904_ = v___y_1035_;
v___y_905_ = v___x_1141_;
v___y_906_ = v___x_1086_;
v___y_907_ = v___x_1146_;
v___y_908_ = v___x_1070_;
v___y_909_ = v___y_1038_;
v___y_910_ = v___y_1039_;
v___y_911_ = v___y_1040_;
v___y_912_ = v___x_1067_;
v___y_913_ = v___x_1080_;
v___y_914_ = v___x_1111_;
v___y_915_ = v___x_1103_;
v___y_916_ = v___x_1123_;
v___y_917_ = v___x_1113_;
v___y_918_ = v___x_1079_;
v___y_919_ = v___y_1043_;
v___y_920_ = v___x_1147_;
goto v___jp_872_;
}
else
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71);
v___y_873_ = v___x_1060_;
v___y_874_ = v___x_1073_;
v___y_875_ = v___y_1019_;
v___y_876_ = v___x_1133_;
v___y_877_ = v___y_1020_;
v___y_878_ = v___y_1021_;
v___y_879_ = v___x_1055_;
v___y_880_ = v___x_1065_;
v___y_881_ = v___y_1023_;
v___y_882_ = v___x_1055_;
v___y_883_ = v___y_1024_;
v___y_884_ = v___x_1125_;
v___y_885_ = v___x_1064_;
v___y_886_ = v___y_1026_;
v___y_887_ = v___y_1025_;
v___y_888_ = v___y_1027_;
v___y_889_ = v___x_1061_;
v___y_890_ = v___x_1107_;
v___y_891_ = v___x_1120_;
v___y_892_ = v___x_1105_;
v___y_893_ = v___y_1028_;
v___y_894_ = v___x_1082_;
v___y_895_ = v___y_1030_;
v___y_896_ = v___y_1029_;
v___y_897_ = v___x_1049_;
v___y_898_ = v___y_1031_;
v___y_899_ = v___x_1092_;
v___y_900_ = v___x_1084_;
v___y_901_ = v___y_1033_;
v___y_902_ = v___y_1034_;
v___y_903_ = v___x_1109_;
v___y_904_ = v___y_1035_;
v___y_905_ = v___x_1141_;
v___y_906_ = v___x_1086_;
v___y_907_ = v___x_1146_;
v___y_908_ = v___x_1070_;
v___y_909_ = v___y_1038_;
v___y_910_ = v___y_1039_;
v___y_911_ = v___y_1040_;
v___y_912_ = v___x_1067_;
v___y_913_ = v___x_1080_;
v___y_914_ = v___x_1111_;
v___y_915_ = v___x_1103_;
v___y_916_ = v___x_1123_;
v___y_917_ = v___x_1113_;
v___y_918_ = v___x_1079_;
v___y_919_ = v___y_1043_;
v___y_920_ = v___x_1148_;
goto v___jp_872_;
}
}
v___jp_1149_:
{
lean_object* v_quotContext_1168_; lean_object* v_currMacroScope_1169_; lean_object* v_ref_1170_; lean_object* v___x_1171_; lean_object* v_a_1172_; lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v_pathLit_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v_quotContext_1168_ = lean_ctor_get(v___y_1159_, 1);
v_currMacroScope_1169_ = lean_ctor_get(v___y_1159_, 2);
v_ref_1170_ = lean_ctor_get(v___y_1159_, 5);
v___x_1171_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_ref_1170_, v___y_1159_, v___y_1163_);
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_a_1172_);
v_a_1173_ = lean_ctor_get(v___x_1171_, 1);
lean_inc(v_a_1173_);
lean_dec_ref(v___x_1171_);
v___x_1174_ = l_Lean_Syntax_getId(v___y_1160_);
v___x_1175_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1174_, v___x_869_);
v___x_1176_ = lean_box(2);
v___x_1177_ = l_Lean_Syntax_mkStrLit(v___x_1175_, v___x_1176_);
v_pathLit_1178_ = l_Lean_Syntax_mkStrLit(v_snd_1167_, v___x_1176_);
v___x_1179_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_1180_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
if (lean_obj_tag(v___y_1151_) == 1)
{
lean_object* v_val_1181_; lean_object* v___x_1182_; 
v_val_1181_ = lean_ctor_get(v___y_1151_, 0);
lean_inc(v_val_1181_);
lean_dec_ref_known(v___y_1151_, 1);
v___x_1182_ = l_Array_mkArray1___redArg(v_val_1181_);
v___y_1019_ = v___x_1179_;
v___y_1020_ = v_quotContext_1168_;
v___y_1021_ = v___y_1152_;
v___y_1022_ = v___y_1154_;
v___y_1023_ = v___y_1156_;
v___y_1024_ = v___y_1157_;
v___y_1025_ = v___y_1160_;
v___y_1026_ = v___y_1159_;
v___y_1027_ = v_ref_1170_;
v___y_1028_ = v___x_1176_;
v___y_1029_ = v_pathLit_1178_;
v___y_1030_ = v_a_1173_;
v___y_1031_ = v_fst_1166_;
v___y_1032_ = v___y_1165_;
v___y_1033_ = v___y_1150_;
v___y_1034_ = v___x_1180_;
v___y_1035_ = v___y_1153_;
v___y_1036_ = v___y_1155_;
v___y_1037_ = v___y_1158_;
v___y_1038_ = v_a_1172_;
v___y_1039_ = v_currMacroScope_1169_;
v___y_1040_ = v___y_1161_;
v___y_1041_ = v___y_1162_;
v___y_1042_ = v___x_1177_;
v___y_1043_ = v___y_1164_;
v___y_1044_ = v___x_1182_;
goto v___jp_1018_;
}
else
{
lean_object* v___x_1183_; 
lean_dec(v___y_1151_);
v___x_1183_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75));
v___y_1019_ = v___x_1179_;
v___y_1020_ = v_quotContext_1168_;
v___y_1021_ = v___y_1152_;
v___y_1022_ = v___y_1154_;
v___y_1023_ = v___y_1156_;
v___y_1024_ = v___y_1157_;
v___y_1025_ = v___y_1160_;
v___y_1026_ = v___y_1159_;
v___y_1027_ = v_ref_1170_;
v___y_1028_ = v___x_1176_;
v___y_1029_ = v_pathLit_1178_;
v___y_1030_ = v_a_1173_;
v___y_1031_ = v_fst_1166_;
v___y_1032_ = v___y_1165_;
v___y_1033_ = v___y_1150_;
v___y_1034_ = v___x_1180_;
v___y_1035_ = v___y_1153_;
v___y_1036_ = v___y_1155_;
v___y_1037_ = v___y_1158_;
v___y_1038_ = v_a_1172_;
v___y_1039_ = v_currMacroScope_1169_;
v___y_1040_ = v___y_1161_;
v___y_1041_ = v___y_1162_;
v___y_1042_ = v___x_1177_;
v___y_1043_ = v___y_1164_;
v___y_1044_ = v___x_1183_;
goto v___jp_1018_;
}
}
v___jp_1184_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; 
v___x_1188_ = lean_unsigned_to_nat(1u);
v___x_1189_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1188_);
lean_inc(v___x_1189_);
v___x_1190_ = l_Lean_Syntax_matchesNull(v___x_1189_, v___x_1188_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
lean_dec(v___x_1189_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1191_ = lean_box(1);
v___x_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v___y_1187_);
return v___x_1192_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; 
v___x_1193_ = l_Lean_Syntax_getArg(v___x_1189_, v___x_866_);
lean_dec(v___x_1189_);
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76));
v___x_1195_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78));
lean_inc(v___x_1193_);
v___x_1196_ = l_Lean_Syntax_isOfKind(v___x_1193_, v___x_1195_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
lean_dec(v___x_1193_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1197_ = lean_box(1);
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___y_1187_);
return v___x_1198_;
}
else
{
lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = l_Lean_Syntax_getArg(v___x_1193_, v___x_1188_);
lean_dec(v___x_1193_);
lean_inc(v___x_1199_);
v___x_1200_ = l_Lean_Syntax_matchesNull(v___x_1199_, v___x_1188_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
lean_dec(v___x_1199_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1201_ = lean_box(1);
v___x_1202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v___y_1187_);
return v___x_1202_;
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1203_ = l_Lean_Syntax_getArg(v___x_1199_, v___x_866_);
lean_dec(v___x_1199_);
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80));
lean_inc(v___x_1203_);
v___x_1205_ = l_Lean_Syntax_isOfKind(v___x_1203_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec(v___x_1203_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1206_ = lean_box(1);
v___x_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
lean_ctor_set(v___x_1207_, 1, v___y_1187_);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = l_Lean_Syntax_getArg(v___x_1203_, v___x_866_);
v___x_1209_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
lean_inc(v___x_1208_);
v___x_1210_ = l_Lean_Syntax_isOfKind(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_dec(v___x_1208_);
lean_dec(v___x_1203_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1211_ = lean_box(1);
v___x_1212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v___y_1187_);
return v___x_1212_;
}
else
{
lean_object* v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = l_Lean_Syntax_getArg(v___x_1208_, v___x_866_);
lean_dec(v___x_1208_);
v___x_1214_ = l_Lean_Syntax_matchesNull(v___x_1213_, v___x_866_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_dec(v___x_1203_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1215_ = lean_box(1);
v___x_1216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___y_1187_);
return v___x_1216_;
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1217_ = l_Lean_Syntax_getArg(v___x_1203_, v___x_1188_);
lean_dec(v___x_1203_);
v___x_1218_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1219_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1220_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1221_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__1));
lean_inc(v___x_1217_);
v___x_1222_ = l_Lean_Syntax_isOfKind(v___x_1217_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
lean_dec(v___x_1217_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1223_ = lean_box(1);
v___x_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
lean_ctor_set(v___x_1224_, 1, v___y_1187_);
return v___x_1224_;
}
else
{
lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1225_ = l_Lean_Syntax_getArg(v___x_1217_, v___x_1188_);
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
lean_inc(v___x_1225_);
v___x_1227_ = l_Lean_Syntax_isOfKind(v___x_1225_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
lean_dec(v___x_1225_);
lean_dec(v___x_1217_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1228_ = lean_box(1);
v___x_1229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
lean_ctor_set(v___x_1229_, 1, v___y_1187_);
return v___x_1229_;
}
else
{
lean_object* v___x_1230_; lean_object* v_e_1231_; uint8_t v___x_1232_; 
v___x_1230_ = lean_unsigned_to_nat(2u);
v_e_1231_ = l_Lean_Syntax_getArg(v___x_1217_, v___x_1230_);
lean_dec(v___x_1217_);
lean_inc(v_e_1231_);
v___x_1232_ = l_Lean_Syntax_isOfKind(v_e_1231_, v___x_1226_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1233_ = lean_box(1);
v___x_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
lean_ctor_set(v___x_1234_, 1, v___y_1187_);
return v___x_1234_;
}
else
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1230_);
v___x_1236_ = l_Lean_Syntax_matchesNull(v___x_1235_, v___x_866_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1237_ = lean_box(1);
v___x_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v___y_1187_);
return v___x_1238_;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1239_ = lean_unsigned_to_nat(3u);
v___x_1240_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1239_);
v___x_1241_ = l_Lean_Syntax_matchesNull(v___x_1240_, v___x_866_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1242_ = lean_box(1);
v___x_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___y_1187_);
return v___x_1243_;
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1244_ = lean_unsigned_to_nat(4u);
v___x_1245_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1244_);
v___x_1246_ = l_Lean_Syntax_matchesNull(v___x_1245_, v___x_866_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1247_ = lean_box(1);
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
lean_ctor_set(v___x_1248_, 1, v___y_1187_);
return v___x_1248_;
}
else
{
lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v___x_1249_ = lean_unsigned_to_nat(5u);
v___x_1250_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1249_);
v___x_1251_ = l_Lean_Syntax_matchesNull(v___x_1250_, v___x_866_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v___x_867_);
lean_dec(v_x_846_);
v___x_1252_ = lean_box(1);
v___x_1253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
lean_ctor_set(v___x_1253_, 1, v___y_1187_);
return v___x_1253_;
}
else
{
lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1254_ = lean_unsigned_to_nat(6u);
v___x_1255_ = l_Lean_Syntax_getArg(v___x_867_, v___x_1254_);
lean_dec(v___x_867_);
v___x_1256_ = l_Lean_Syntax_matchesNull(v___x_1255_, v___x_866_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
lean_dec(v_x_846_);
v___x_1257_ = lean_box(1);
v___x_1258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v___y_1187_);
return v___x_1258_;
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1259_ = l_Lean_Syntax_getArg(v_x_846_, v___x_1188_);
lean_dec(v_x_846_);
v___x_1260_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84));
lean_inc(v___x_1259_);
v___x_1261_ = l_Lean_Syntax_isOfKind(v___x_1259_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1262_ = lean_box(1);
v___x_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v___y_1187_);
return v___x_1263_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v___x_1264_ = l_Lean_Syntax_getArg(v___x_1259_, v___x_1188_);
v___x_1265_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86));
lean_inc(v___x_1264_);
v___x_1266_ = l_Lean_Syntax_isOfKind(v___x_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_dec(v___x_1264_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1267_ = lean_box(1);
v___x_1268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set(v___x_1268_, 1, v___y_1187_);
return v___x_1268_;
}
else
{
lean_object* v_n_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v_n_1269_ = l_Lean_Syntax_getArg(v___x_1264_, v___x_866_);
v___x_1270_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88));
lean_inc(v_n_1269_);
v___x_1271_ = l_Lean_Syntax_isOfKind(v_n_1269_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
lean_dec(v_n_1269_);
lean_dec(v___x_1264_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1272_ = lean_box(1);
v___x_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___y_1187_);
return v___x_1273_;
}
else
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = l_Lean_Syntax_getArg(v___x_1264_, v___x_1188_);
lean_dec(v___x_1264_);
v___x_1275_ = l_Lean_Syntax_matchesNull(v___x_1274_, v___x_866_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec(v_n_1269_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1276_ = lean_box(1);
v___x_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v___y_1187_);
return v___x_1277_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1278_ = l_Lean_Syntax_getArg(v___x_1259_, v___x_1230_);
v___x_1279_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
lean_inc(v___x_1278_);
v___x_1280_ = l_Lean_Syntax_isOfKind(v___x_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec(v___x_1278_);
lean_dec(v_n_1269_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1281_ = lean_box(1);
v___x_1282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___y_1187_);
return v___x_1282_;
}
else
{
lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1283_ = l_Lean_Syntax_getArg(v___x_1278_, v___x_866_);
v___x_1284_ = l_Lean_Syntax_matchesNull(v___x_1283_, v___x_866_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec(v___x_1278_);
lean_dec(v_n_1269_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1285_ = lean_box(1);
v___x_1286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set(v___x_1286_, 1, v___y_1187_);
return v___x_1286_;
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = l_Lean_Syntax_getArg(v___x_1278_, v___x_1188_);
lean_dec(v___x_1278_);
v___x_1288_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
lean_inc(v___x_1287_);
v___x_1289_ = l_Lean_Syntax_isOfKind(v___x_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_dec(v___x_1287_);
lean_dec(v_n_1269_);
lean_dec(v___x_1259_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1290_ = lean_box(1);
v___x_1291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v___y_1187_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = l_Lean_Syntax_getArg(v___x_1259_, v___x_1239_);
lean_dec(v___x_1259_);
v___x_1293_ = l_Lean_Syntax_matchesNull(v___x_1292_, v___x_866_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec(v___x_1287_);
lean_dec(v_n_1269_);
lean_dec(v_e_1231_);
lean_dec(v___x_1225_);
lean_dec(v_doc_1185_);
v___x_1294_ = lean_box(1);
v___x_1295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v___y_1187_);
return v___x_1295_;
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v_spec_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v___x_1296_ = l_Lean_Syntax_getArg(v___x_1287_, v___x_1188_);
lean_dec(v___x_1287_);
v___x_1297_ = l_Lean_TSyntax_getString(v_e_1231_);
lean_dec(v_e_1231_);
v___x_1298_ = lean_string_utf8_byte_size(v___x_1297_);
v___x_1299_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1297_);
lean_ctor_set(v___x_1299_, 1, v___x_866_);
lean_ctor_set(v___x_1299_, 2, v___x_1298_);
v___x_1300_ = l_String_Slice_trimAscii(v___x_1299_);
v_spec_1301_ = l_String_Slice_toString(v___x_1300_);
lean_dec_ref(v___x_1300_);
v___x_1302_ = lean_string_utf8_byte_size(v_spec_1301_);
v___x_1303_ = lean_nat_dec_le(v___x_1244_, v___x_1302_);
if (v___x_1303_ == 0)
{
v___y_1150_ = v___x_1220_;
v___y_1151_ = v_doc_1185_;
v___y_1152_ = v___x_1219_;
v___y_1153_ = v___x_1218_;
v___y_1154_ = v___x_1230_;
v___y_1155_ = v___x_1195_;
v___y_1156_ = v___x_1204_;
v___y_1157_ = v___x_1225_;
v___y_1158_ = v___x_1265_;
v___y_1159_ = v___y_1186_;
v___y_1160_ = v_n_1269_;
v___y_1161_ = v___x_1209_;
v___y_1162_ = v___x_1296_;
v___y_1163_ = v___y_1187_;
v___y_1164_ = v___x_1194_;
v___y_1165_ = v___x_1288_;
v_fst_1166_ = v___x_1303_;
v_snd_1167_ = v_spec_1301_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_1305_ = lean_string_memcmp(v_spec_1301_, v___x_1304_, v___x_866_, v___x_866_, v___x_1244_);
if (v___x_1305_ == 0)
{
v___y_1150_ = v___x_1220_;
v___y_1151_ = v_doc_1185_;
v___y_1152_ = v___x_1219_;
v___y_1153_ = v___x_1218_;
v___y_1154_ = v___x_1230_;
v___y_1155_ = v___x_1195_;
v___y_1156_ = v___x_1204_;
v___y_1157_ = v___x_1225_;
v___y_1158_ = v___x_1265_;
v___y_1159_ = v___y_1186_;
v___y_1160_ = v_n_1269_;
v___y_1161_ = v___x_1209_;
v___y_1162_ = v___x_1296_;
v___y_1163_ = v___y_1187_;
v___y_1164_ = v___x_1194_;
v___y_1165_ = v___x_1288_;
v_fst_1166_ = v___x_1305_;
v_snd_1167_ = v_spec_1301_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_inc_ref(v_spec_1301_);
v___x_1306_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1306_, 0, v_spec_1301_);
lean_ctor_set(v___x_1306_, 1, v___x_866_);
lean_ctor_set(v___x_1306_, 2, v___x_1302_);
v___x_1307_ = l_String_Slice_Pos_nextn(v___x_1306_, v___x_866_, v___x_1244_);
lean_dec_ref_known(v___x_1306_, 3);
v___x_1308_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1308_, 0, v_spec_1301_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
lean_ctor_set(v___x_1308_, 2, v___x_1302_);
v___x_1309_ = l_String_Slice_trimAscii(v___x_1308_);
v___x_1310_ = l_String_Slice_toString(v___x_1309_);
lean_dec_ref(v___x_1309_);
v___y_1150_ = v___x_1220_;
v___y_1151_ = v_doc_1185_;
v___y_1152_ = v___x_1219_;
v___y_1153_ = v___x_1218_;
v___y_1154_ = v___x_1230_;
v___y_1155_ = v___x_1195_;
v___y_1156_ = v___x_1204_;
v___y_1157_ = v___x_1225_;
v___y_1158_ = v___x_1265_;
v___y_1159_ = v___y_1186_;
v___y_1160_ = v_n_1269_;
v___y_1161_ = v___x_1209_;
v___y_1162_ = v___x_1296_;
v___y_1163_ = v___y_1187_;
v___y_1164_ = v___x_1194_;
v___y_1165_ = v___x_1288_;
v_fst_1166_ = v___x_869_;
v_snd_1167_ = v___x_1310_;
goto v___jp_1149_;
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
v___jp_849_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_856_ = lean_array_push(v___y_853_, v___y_851_);
v___x_857_ = lean_array_push(v___x_856_, v_record_854_);
lean_inc(v___y_850_);
v___x_858_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_858_, 0, v___y_852_);
lean_ctor_set(v___x_858_, 1, v___y_850_);
lean_ctor_set(v___x_858_, 2, v___x_857_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
lean_ctor_set(v___x_859_, 1, v___y_855_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___boxed(lean_object* v_x_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(v_x_1324_, v_a_1325_, v_a_1326_);
lean_dec_ref(v_a_1325_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object* v_declName_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; lean_object* v_env_1332_; uint8_t v___x_1333_; 
v___x_1331_ = lean_st_ref_get(v_a_1329_);
v_env_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc_ref_n(v_env_1332_, 2);
lean_dec(v___x_1331_);
lean_inc(v_declName_1328_);
v___x_1333_ = l_Lean_isStructure(v_env_1332_, v_declName_1328_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec_ref(v_env_1332_);
lean_dec(v_declName_1328_);
v___x_1334_ = lean_box(0);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
else
{
uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1336_ = 0;
v___x_1337_ = l_Lean_getStructureFieldsFlattened(v_env_1332_, v_declName_1328_, v___x_1336_);
v___x_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object* v_declName_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1340_, v_a_1341_);
lean_dec(v_a_1341_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object* v_declName_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1344_, v_a_1346_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object* v_declName_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(v_declName_1349_, v_a_1350_, v_a_1351_);
lean_dec(v_a_1351_);
lean_dec_ref(v_a_1350_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object* v___x_1356_, lean_object* v_as_x27_1357_, lean_object* v_b_1358_){
_start:
{
if (lean_obj_tag(v_as_x27_1357_) == 0)
{
lean_object* v___x_1360_; 
lean_dec_ref(v___x_1356_);
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v_b_1358_);
return v___x_1360_;
}
else
{
lean_object* v_head_1361_; lean_object* v_tail_1362_; lean_object* v_snd_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1393_; 
v_head_1361_ = lean_ctor_get(v_as_x27_1357_, 0);
v_tail_1362_ = lean_ctor_get(v_as_x27_1357_, 1);
v_snd_1363_ = lean_ctor_get(v_b_1358_, 1);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_b_1358_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v_b_1358_, 0);
lean_dec(v_unused_1394_);
v___x_1365_ = v_b_1358_;
v_isShared_1366_ = v_isSharedCheck_1393_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_snd_1363_);
lean_dec(v_b_1358_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1393_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
uint8_t v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = 0;
lean_inc(v_head_1361_);
lean_inc_ref(v___x_1356_);
v___x_1374_ = l_Lean_Environment_find_x3f(v___x_1356_, v_head_1361_, v___x_1373_);
if (lean_obj_tag(v___x_1374_) == 1)
{
lean_object* v_val_1375_; 
v_val_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_val_1375_);
lean_dec_ref_known(v___x_1374_, 1);
if (lean_obj_tag(v_val_1375_) == 6)
{
lean_object* v_val_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1392_; 
lean_del_object(v___x_1365_);
v_val_1376_ = lean_ctor_get(v_val_1375_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_val_1375_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1378_ = v_val_1375_;
v_isShared_1379_ = v_isSharedCheck_1392_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_val_1376_);
lean_dec(v_val_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1392_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v_numFields_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; 
v_numFields_1380_ = lean_ctor_get(v_val_1376_, 4);
lean_inc(v_numFields_1380_);
lean_dec_ref(v_val_1376_);
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = lean_nat_dec_eq(v_numFields_1380_, v___x_1381_);
lean_dec(v_numFields_1380_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
lean_dec_ref(v___x_1356_);
v___x_1383_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
v___x_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
lean_ctor_set(v___x_1384_, 1, v_snd_1363_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set_tag(v___x_1378_, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1384_);
v___x_1386_ = v___x_1378_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
else
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
lean_del_object(v___x_1378_);
v___x_1388_ = lean_box(0);
lean_inc(v_head_1361_);
v___x_1389_ = lean_array_push(v_snd_1363_, v_head_1361_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1388_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v_as_x27_1357_ = v_tail_1362_;
v_b_1358_ = v___x_1390_;
goto _start;
}
}
}
else
{
lean_dec(v_val_1375_);
lean_dec_ref(v___x_1356_);
goto v___jp_1367_;
}
}
else
{
lean_dec(v___x_1374_);
lean_dec_ref(v___x_1356_);
goto v___jp_1367_;
}
v___jp_1367_:
{
lean_object* v___x_1368_; lean_object* v___x_1370_; 
v___x_1368_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1368_);
v___x_1370_ = v___x_1365_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_snd_1363_);
v___x_1370_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
return v___x_1371_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object* v___x_1395_, lean_object* v_as_x27_1396_, lean_object* v_b_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1395_, v_as_x27_1396_, v_b_1397_);
lean_dec(v_as_x27_1396_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object* v_declName_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
lean_object* v___x_1412_; lean_object* v_env_1416_; uint8_t v___x_1417_; lean_object* v___x_1418_; 
v___x_1412_ = lean_st_ref_get(v_a_1407_);
v_env_1416_ = lean_ctor_get(v___x_1412_, 0);
lean_inc_ref_n(v_env_1416_, 2);
lean_dec(v___x_1412_);
v___x_1417_ = 0;
v___x_1418_ = l_Lean_Environment_find_x3f(v_env_1416_, v_declName_1405_, v___x_1417_);
if (lean_obj_tag(v___x_1418_) == 1)
{
lean_object* v_val_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1449_; 
v_val_1419_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1421_ = v___x_1418_;
v_isShared_1422_ = v_isSharedCheck_1449_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_val_1419_);
lean_dec(v___x_1418_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1449_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
if (lean_obj_tag(v_val_1419_) == 5)
{
lean_object* v_val_1423_; lean_object* v_numParams_1424_; lean_object* v_numIndices_1425_; lean_object* v_ctors_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; 
v_val_1423_ = lean_ctor_get(v_val_1419_, 0);
lean_inc_ref(v_val_1423_);
lean_dec_ref_known(v_val_1419_, 1);
v_numParams_1424_ = lean_ctor_get(v_val_1423_, 1);
lean_inc(v_numParams_1424_);
v_numIndices_1425_ = lean_ctor_get(v_val_1423_, 2);
lean_inc(v_numIndices_1425_);
v_ctors_1426_ = lean_ctor_get(v_val_1423_, 4);
lean_inc(v_ctors_1426_);
lean_dec_ref(v_val_1423_);
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = lean_nat_dec_eq(v_numParams_1424_, v___x_1427_);
lean_dec(v_numParams_1424_);
if (v___x_1428_ == 0)
{
lean_dec(v_ctors_1426_);
lean_dec(v_numIndices_1425_);
lean_del_object(v___x_1421_);
lean_dec_ref(v_env_1416_);
goto v___jp_1413_;
}
else
{
uint8_t v___x_1429_; 
v___x_1429_ = lean_nat_dec_eq(v_numIndices_1425_, v___x_1427_);
lean_dec(v_numIndices_1425_);
if (v___x_1429_ == 0)
{
lean_dec(v_ctors_1426_);
lean_del_object(v___x_1421_);
lean_dec_ref(v_env_1416_);
goto v___jp_1413_;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1448_; 
v___x_1430_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1));
v___x_1431_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v_env_1416_, v_ctors_1426_, v___x_1430_);
lean_dec(v_ctors_1426_);
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1448_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1448_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v_fst_1436_; 
v_fst_1436_ = lean_ctor_get(v_a_1432_, 0);
if (lean_obj_tag(v_fst_1436_) == 0)
{
lean_object* v_snd_1437_; lean_object* v___x_1439_; 
v_snd_1437_ = lean_ctor_get(v_a_1432_, 1);
lean_inc(v_snd_1437_);
lean_dec(v_a_1432_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 0, v_snd_1437_);
v___x_1439_ = v___x_1421_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_snd_1437_);
v___x_1439_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1439_);
v___x_1441_ = v___x_1434_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
else
{
lean_object* v_val_1444_; lean_object* v___x_1446_; 
lean_inc_ref(v_fst_1436_);
lean_dec(v_a_1432_);
lean_del_object(v___x_1421_);
v_val_1444_ = lean_ctor_get(v_fst_1436_, 0);
lean_inc(v_val_1444_);
lean_dec_ref_known(v_fst_1436_, 1);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v_val_1444_);
v___x_1446_ = v___x_1434_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_val_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1421_);
lean_dec(v_val_1419_);
lean_dec_ref(v_env_1416_);
goto v___jp_1409_;
}
}
}
else
{
lean_dec(v___x_1418_);
lean_dec_ref(v_env_1416_);
goto v___jp_1409_;
}
v___jp_1409_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
return v___x_1411_;
}
v___jp_1413_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_box(0);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object* v_declName_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1450_, v_a_1451_, v_a_1452_);
lean_dec(v_a_1452_);
lean_dec_ref(v_a_1451_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object* v___x_1455_, lean_object* v_as_1456_, lean_object* v_as_x27_1457_, lean_object* v_b_1458_, lean_object* v_a_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1455_, v_as_x27_1457_, v_b_1458_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object* v___x_1464_, lean_object* v_as_1465_, lean_object* v_as_x27_1466_, lean_object* v_b_1467_, lean_object* v_a_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(v___x_1464_, v_as_1465_, v_as_x27_1466_, v_b_1467_, v_a_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v_as_x27_1466_);
lean_dec(v_as_1465_);
return v_res_1472_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0));
v___x_1475_ = l_Lean_stringToMessageData(v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2));
v___x_1478_ = l_Lean_stringToMessageData(v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4));
v___x_1481_ = l_Lean_stringToMessageData(v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object* v_declName_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_){
_start:
{
lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___x_1495_; lean_object* v_env_1496_; uint8_t v___x_1497_; lean_object* v___x_1498_; 
v___x_1495_ = lean_st_ref_get(v_a_1484_);
v_env_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc_ref(v_env_1496_);
lean_dec(v___x_1495_);
v___x_1497_ = 0;
lean_inc(v_declName_1482_);
v___x_1498_ = l_Lean_Environment_find_x3f(v_env_1496_, v_declName_1482_, v___x_1497_);
if (lean_obj_tag(v___x_1498_) == 1)
{
lean_object* v_val_1499_; 
v_val_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_val_1499_);
lean_dec_ref_known(v___x_1498_, 1);
if (lean_obj_tag(v_val_1499_) == 5)
{
lean_object* v_val_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1517_; 
v_val_1500_ = lean_ctor_get(v_val_1499_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_val_1499_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1502_ = v_val_1499_;
v_isShared_1503_ = v_isSharedCheck_1517_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_val_1500_);
lean_dec(v_val_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1517_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v_numParams_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v_numParams_1504_ = lean_ctor_get(v_val_1500_, 1);
lean_inc(v_numParams_1504_);
lean_dec_ref(v_val_1500_);
v___x_1505_ = lean_unsigned_to_nat(0u);
v___x_1506_ = lean_nat_dec_eq(v_numParams_1504_, v___x_1505_);
lean_dec(v_numParams_1504_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
lean_del_object(v___x_1502_);
v___x_1507_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1508_ = l_Lean_MessageData_ofName(v_declName_1482_);
v___x_1509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1507_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5);
v___x_1511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1509_);
lean_ctor_set(v___x_1511_, 1, v___x_1510_);
v___x_1512_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1511_, v_a_1483_, v_a_1484_);
return v___x_1512_;
}
else
{
lean_object* v___x_1513_; lean_object* v___x_1515_; 
lean_dec(v_declName_1482_);
v___x_1513_ = lean_box(0);
if (v_isShared_1503_ == 0)
{
lean_ctor_set_tag(v___x_1502_, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1513_);
v___x_1515_ = v___x_1502_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
else
{
lean_dec(v_val_1499_);
v___y_1487_ = v_a_1483_;
v___y_1488_ = v_a_1484_;
goto v___jp_1486_;
}
}
else
{
lean_dec(v___x_1498_);
v___y_1487_ = v_a_1483_;
v___y_1488_ = v_a_1484_;
goto v___jp_1486_;
}
v___jp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1490_ = l_Lean_MessageData_ofName(v_declName_1482_);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1493_, v___y_1487_, v___y_1488_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object* v_declName_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1518_, v_a_1519_, v_a_1520_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
return v_res_1522_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5));
v___x_1538_ = l_String_toRawSubstring_x27(v___x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t v_sz_1557_, size_t v_i_1558_, lean_object* v_bs_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
uint8_t v___x_1563_; 
v___x_1563_ = lean_usize_dec_lt(v_i_1558_, v_sz_1557_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v_bs_1559_);
return v___x_1564_;
}
else
{
uint8_t v___x_1565_; lean_object* v_v_1566_; lean_object* v___x_1567_; lean_object* v_bs_x27_1568_; lean_object* v___x_1569_; 
v___x_1565_ = 0;
v_v_1566_ = lean_array_uget(v_bs_1559_, v_i_1558_);
v___x_1567_ = lean_unsigned_to_nat(0u);
v_bs_x27_1568_ = lean_array_uset(v_bs_1559_, v_i_1558_, v___x_1567_);
v___x_1569_ = l_Lean_Elab_Command_getRef___redArg(v___y_1560_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1569_, 1);
v___x_1571_ = l_Lean_SourceInfo_fromRef(v_a_1570_, v___x_1565_);
lean_dec(v_a_1570_);
v___x_1572_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1560_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v_a_1575_; lean_object* v_quotContext_x3f_1601_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v_quotContext_x3f_1601_ = lean_ctor_get(v___y_1560_, 5);
if (lean_obj_tag(v_quotContext_x3f_1601_) == 0)
{
lean_object* v___x_1602_; 
v___x_1602_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v___y_1561_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v_a_1575_ = v_a_1603_;
goto v___jp_1574_;
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
lean_dec(v_a_1573_);
lean_dec(v___x_1571_);
lean_dec_ref(v_bs_x27_1568_);
lean_dec(v_v_1566_);
v_a_1604_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1602_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1602_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
else
{
lean_object* v_val_1612_; 
v_val_1612_ = lean_ctor_get(v_quotContext_x3f_1601_, 0);
lean_inc(v_val_1612_);
v_a_1575_ = v_val_1612_;
goto v___jp_1574_;
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; size_t v___x_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v___x_1576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_1577_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_1571_, 7);
v___x_1578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1571_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_1566_);
v___x_1580_ = l_Lean_mkIdent(v_v_1566_);
v___x_1581_ = l_Lean_Syntax_node1(v___x_1571_, v___x_1579_, v___x_1580_);
v___x_1582_ = l_Lean_Syntax_node1(v___x_1571_, v___x_1579_, v___x_1581_);
v___x_1583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1584_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1571_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1586_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_1587_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
v___x_1588_ = l_Lean_addMacroScope(v_a_1575_, v___x_1587_, v_a_1573_);
v___x_1589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_1590_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1571_);
lean_ctor_set(v___x_1590_, 1, v___x_1586_);
lean_ctor_set(v___x_1590_, 2, v___x_1588_);
lean_ctor_set(v___x_1590_, 3, v___x_1589_);
v___x_1591_ = l_Lean_Name_getString_x21(v_v_1566_);
lean_dec(v_v_1566_);
v___x_1592_ = lean_box(2);
v___x_1593_ = l_Lean_Syntax_mkStrLit(v___x_1591_, v___x_1592_);
v___x_1594_ = l_Lean_Syntax_node1(v___x_1571_, v___x_1579_, v___x_1593_);
v___x_1595_ = l_Lean_Syntax_node2(v___x_1571_, v___x_1585_, v___x_1590_, v___x_1594_);
v___x_1596_ = l_Lean_Syntax_node4(v___x_1571_, v___x_1576_, v___x_1578_, v___x_1582_, v___x_1584_, v___x_1595_);
v___x_1597_ = ((size_t)1ULL);
v___x_1598_ = lean_usize_add(v_i_1558_, v___x_1597_);
v___x_1599_ = lean_array_uset(v_bs_x27_1568_, v_i_1558_, v___x_1596_);
v_i_1558_ = v___x_1598_;
v_bs_1559_ = v___x_1599_;
goto _start;
}
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v___x_1571_);
lean_dec_ref(v_bs_x27_1568_);
lean_dec(v_v_1566_);
v_a_1613_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1572_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1572_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
lean_dec_ref(v_bs_x27_1568_);
lean_dec(v_v_1566_);
v_a_1621_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v___x_1569_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1569_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1621_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object* v_sz_1629_, lean_object* v_i_1630_, lean_object* v_bs_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; lean_object* v_res_1637_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1629_);
lean_dec(v_sz_1629_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1630_);
lean_dec(v_i_1630_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1631_, v___y_1632_, v___y_1633_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t v_sz_1638_, size_t v_i_1639_, lean_object* v_bs_1640_){
_start:
{
uint8_t v___x_1641_; 
v___x_1641_ = lean_usize_dec_lt(v_i_1639_, v_sz_1638_);
if (v___x_1641_ == 0)
{
return v_bs_1640_;
}
else
{
lean_object* v_v_1642_; lean_object* v___x_1643_; lean_object* v_bs_x27_1644_; size_t v___x_1645_; size_t v___x_1646_; lean_object* v___x_1647_; 
v_v_1642_ = lean_array_uget(v_bs_1640_, v_i_1639_);
v___x_1643_ = lean_unsigned_to_nat(0u);
v_bs_x27_1644_ = lean_array_uset(v_bs_1640_, v_i_1639_, v___x_1643_);
v___x_1645_ = ((size_t)1ULL);
v___x_1646_ = lean_usize_add(v_i_1639_, v___x_1645_);
v___x_1647_ = lean_array_uset(v_bs_x27_1644_, v_i_1639_, v_v_1642_);
v_i_1639_ = v___x_1646_;
v_bs_1640_ = v___x_1647_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object* v_sz_1649_, lean_object* v_i_1650_, lean_object* v_bs_1651_){
_start:
{
size_t v_sz_boxed_1652_; size_t v_i_boxed_1653_; lean_object* v_res_1654_; 
v_sz_boxed_1652_ = lean_unbox_usize(v_sz_1649_);
lean_dec(v_sz_1649_);
v_i_boxed_1653_ = lean_unbox_usize(v_i_1650_);
lean_dec(v_i_1650_);
v_res_1654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_boxed_1652_, v_i_boxed_1653_, v_bs_1651_);
return v_res_1654_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_1671_ = l_String_toRawSubstring_x27(v___x_1670_);
return v___x_1671_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24));
v___x_1719_ = l_String_toRawSubstring_x27(v___x_1718_);
return v___x_1719_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34));
v___x_1745_ = l_String_toRawSubstring_x27(v___x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object* v___x_1748_, lean_object* v_declName_1749_, size_t v_sz_1750_, size_t v_i_1751_, lean_object* v_bs_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
uint8_t v___x_1756_; 
v___x_1756_ = lean_usize_dec_lt(v_i_1751_, v_sz_1750_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; 
lean_dec(v_declName_1749_);
v___x_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1757_, 0, v_bs_1752_);
return v___x_1757_;
}
else
{
uint8_t v___x_1758_; lean_object* v___x_1759_; uint8_t v___x_1760_; lean_object* v_v_1761_; lean_object* v___x_1762_; lean_object* v_bs_x27_1763_; lean_object* v___x_1764_; 
v___x_1758_ = 0;
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = lean_nat_dec_eq(v___x_1748_, v___x_1759_);
v_v_1761_ = lean_array_uget(v_bs_1752_, v_i_1751_);
v___x_1762_ = lean_unsigned_to_nat(0u);
v_bs_x27_1763_ = lean_array_uset(v_bs_1752_, v_i_1751_, v___x_1762_);
v___x_1764_ = l_Lean_Elab_Command_getRef___redArg(v___y_1753_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___x_1766_ = l_Lean_SourceInfo_fromRef(v_a_1765_, v___x_1758_);
lean_dec(v_a_1765_);
v___x_1767_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1753_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v_a_1770_; lean_object* v_quotContext_x3f_1817_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v_quotContext_x3f_1817_ = lean_ctor_get(v___y_1753_, 5);
if (lean_obj_tag(v_quotContext_x3f_1817_) == 0)
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v___y_1754_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v_a_1770_ = v_a_1819_;
goto v___jp_1769_;
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_dec(v_a_1768_);
lean_dec(v___x_1766_);
lean_dec_ref(v_bs_x27_1763_);
lean_dec(v_v_1761_);
lean_dec(v_declName_1749_);
v_a_1820_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1818_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_object* v_val_1828_; 
v_val_1828_ = lean_ctor_get(v_quotContext_x3f_1817_, 0);
lean_inc(v_val_1828_);
v_a_1770_ = v_val_1828_;
goto v___jp_1769_;
}
v___jp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; size_t v___x_1813_; size_t v___x_1814_; lean_object* v___x_1815_; 
v___x_1771_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1));
v___x_1772_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3));
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
lean_inc_n(v___x_1766_, 15);
v___x_1774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1766_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5));
v___x_1776_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6);
v___x_1777_ = lean_box(0);
lean_inc_n(v_a_1768_, 2);
lean_inc_n(v_a_1770_, 2);
v___x_1778_ = l_Lean_addMacroScope(v_a_1770_, v___x_1777_, v_a_1768_);
v___x_1779_ = lean_box(0);
v___x_1780_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23));
v___x_1781_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1766_);
lean_ctor_set(v___x_1781_, 1, v___x_1776_);
lean_ctor_set(v___x_1781_, 2, v___x_1778_);
lean_ctor_set(v___x_1781_, 3, v___x_1780_);
v___x_1782_ = l_Lean_Syntax_node1(v___x_1766_, v___x_1775_, v___x_1781_);
v___x_1783_ = l_Lean_Syntax_node2(v___x_1766_, v___x_1772_, v___x_1774_, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_1761_);
v___x_1785_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1761_, v___x_1760_);
v___x_1786_ = lean_box(2);
v___x_1787_ = l_Lean_Syntax_mkStrLit(v___x_1785_, v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1789_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1766_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1791_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25);
v___x_1792_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27));
v___x_1793_ = l_Lean_addMacroScope(v_a_1770_, v___x_1792_, v_a_1768_);
v___x_1794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31));
v___x_1795_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1766_);
lean_ctor_set(v___x_1795_, 1, v___x_1791_);
lean_ctor_set(v___x_1795_, 2, v___x_1793_);
lean_ctor_set(v___x_1795_, 3, v___x_1794_);
v___x_1796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33));
lean_inc(v_declName_1749_);
v___x_1797_ = l_Lean_Name_append(v_declName_1749_, v_v_1761_);
v___x_1798_ = l_Lean_mkIdent(v___x_1797_);
v___x_1799_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1801_ = l_Lean_addMacroScope(v_a_1770_, v___x_1800_, v_a_1768_);
v___x_1802_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1766_);
lean_ctor_set(v___x_1802_, 1, v___x_1799_);
lean_ctor_set(v___x_1802_, 2, v___x_1801_);
lean_ctor_set(v___x_1802_, 3, v___x_1779_);
v___x_1803_ = l_Lean_Syntax_node1(v___x_1766_, v___x_1784_, v___x_1802_);
v___x_1804_ = l_Lean_Syntax_node2(v___x_1766_, v___x_1790_, v___x_1798_, v___x_1803_);
v___x_1805_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_1806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1766_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
lean_inc_ref(v___x_1806_);
lean_inc(v___x_1783_);
v___x_1807_ = l_Lean_Syntax_node3(v___x_1766_, v___x_1796_, v___x_1783_, v___x_1804_, v___x_1806_);
v___x_1808_ = l_Lean_Syntax_node1(v___x_1766_, v___x_1784_, v___x_1807_);
v___x_1809_ = l_Lean_Syntax_node2(v___x_1766_, v___x_1790_, v___x_1795_, v___x_1808_);
v___x_1810_ = l_Lean_Syntax_node1(v___x_1766_, v___x_1784_, v___x_1809_);
v___x_1811_ = l_Lean_Syntax_node3(v___x_1766_, v___x_1784_, v___x_1787_, v___x_1789_, v___x_1810_);
v___x_1812_ = l_Lean_Syntax_node3(v___x_1766_, v___x_1771_, v___x_1783_, v___x_1811_, v___x_1806_);
v___x_1813_ = ((size_t)1ULL);
v___x_1814_ = lean_usize_add(v_i_1751_, v___x_1813_);
v___x_1815_ = lean_array_uset(v_bs_x27_1763_, v_i_1751_, v___x_1812_);
v_i_1751_ = v___x_1814_;
v_bs_1752_ = v___x_1815_;
goto _start;
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v___x_1766_);
lean_dec_ref(v_bs_x27_1763_);
lean_dec(v_v_1761_);
lean_dec(v_declName_1749_);
v_a_1829_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1767_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1767_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
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
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
lean_dec_ref(v_bs_x27_1763_);
lean_dec(v_v_1761_);
lean_dec(v_declName_1749_);
v_a_1837_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1764_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1764_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object* v___x_1845_, lean_object* v_declName_1846_, lean_object* v_sz_1847_, lean_object* v_i_1848_, lean_object* v_bs_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
size_t v_sz_boxed_1853_; size_t v_i_boxed_1854_; lean_object* v_res_1855_; 
v_sz_boxed_1853_ = lean_unbox_usize(v_sz_1847_);
lean_dec(v_sz_1847_);
v_i_boxed_1854_ = lean_unbox_usize(v_i_1848_);
lean_dec(v_i_1848_);
v_res_1855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1845_, v_declName_1846_, v_sz_boxed_1853_, v_i_boxed_1854_, v_bs_1849_, v___y_1850_, v___y_1851_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v___x_1845_);
return v_res_1855_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__3(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__2));
v___x_1864_ = l_String_toRawSubstring_x27(v___x_1863_);
return v___x_1864_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__17(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_1901_ = l_String_toRawSubstring_x27(v___x_1900_);
return v___x_1901_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__33(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__32));
v___x_1941_ = l_Lean_stringToMessageData(v___x_1940_);
return v___x_1941_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__35(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__34));
v___x_1944_ = l_Lean_stringToMessageData(v___x_1943_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object* v_declNames_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v___x_1949_ = lean_array_get_size(v_declNames_1945_);
v___x_1950_ = lean_unsigned_to_nat(1u);
v___x_1951_ = lean_nat_dec_eq(v___x_1949_, v___x_1950_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = lean_box(v___x_1951_);
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
return v___x_1953_;
}
else
{
lean_object* v___x_1954_; uint8_t v___x_1955_; lean_object* v___x_1956_; lean_object* v_declName_1957_; lean_object* v___x_1958_; 
v___x_1954_ = lean_box(0);
v___x_1955_ = 0;
v___x_1956_ = lean_unsigned_to_nat(0u);
v_declName_1957_ = lean_array_get_borrowed(v___x_1954_, v_declNames_1945_, v___x_1956_);
lean_inc(v_declName_1957_);
v___x_1958_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1957_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v_a_1961_; 
lean_dec_ref_known(v___x_1958_, 1);
lean_inc_n(v_declName_1957_, 2);
v___x_1959_ = l_Lean_mkIdent(v_declName_1957_);
v___x_1960_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1957_, v_a_1947_);
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_a_1961_);
lean_dec_ref(v___x_1960_);
if (lean_obj_tag(v_a_1961_) == 1)
{
lean_object* v_val_1962_; size_t v_sz_1963_; size_t v___x_1964_; lean_object* v___x_1965_; 
v_val_1962_ = lean_ctor_get(v_a_1961_, 0);
lean_inc(v_val_1962_);
lean_dec_ref_known(v_a_1961_, 1);
v_sz_1963_ = lean_array_size(v_val_1962_);
v___x_1964_ = ((size_t)0ULL);
lean_inc(v_declName_1957_);
v___x_1965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1949_, v_declName_1957_, v_sz_1963_, v___x_1964_, v_val_1962_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1967_; lean_object* v_a_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v_a_1971_; lean_object* v_a_1973_; lean_object* v_quotContext_x3f_2063_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1965_, 1);
v___x_1967_ = l_Lean_Elab_Command_getRef___redArg(v_a_1946_);
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref(v___x_1967_);
v___x_1969_ = l_Lean_SourceInfo_fromRef(v_a_1968_, v___x_1955_);
lean_dec(v_a_1968_);
v___x_1970_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1946_);
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref(v___x_1970_);
v_quotContext_x3f_2063_ = lean_ctor_get(v_a_1946_, 5);
if (lean_obj_tag(v_quotContext_x3f_2063_) == 0)
{
lean_object* v___x_2064_; lean_object* v_a_2065_; 
v___x_2064_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v_a_1947_);
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref(v___x_2064_);
v_a_1973_ = v_a_2065_;
goto v___jp_1972_;
}
else
{
lean_object* v_val_2066_; 
v_val_2066_ = lean_ctor_get(v_quotContext_x3f_2063_, 0);
lean_inc(v_val_2066_);
v_a_1973_ = v_val_2066_;
goto v___jp_1972_;
}
v___jp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_1977_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_1969_, 31);
v___x_1978_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1969_);
lean_ctor_set(v___x_1978_, 1, v___x_1976_);
lean_ctor_set(v___x_1978_, 2, v___x_1977_);
lean_inc_ref_n(v___x_1978_, 14);
v___x_1979_ = l_Lean_Syntax_node7(v___x_1969_, v___x_1975_, v___x_1978_, v___x_1978_, v___x_1978_, v___x_1978_, v___x_1978_, v___x_1978_, v___x_1978_);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_1981_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_1982_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_1983_ = l_Lean_Syntax_node1(v___x_1969_, v___x_1982_, v___x_1978_);
v___x_1984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1969_);
lean_ctor_set(v___x_1984_, 1, v___x_1980_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_1986_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_1987_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_1988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1969_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
v___x_1989_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1990_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc_n(v_a_1971_, 2);
lean_inc_n(v_a_1973_, 2);
v___x_1992_ = l_Lean_addMacroScope(v_a_1973_, v___x_1991_, v_a_1971_);
v___x_1993_ = lean_box(0);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_1995_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1969_);
lean_ctor_set(v___x_1995_, 1, v___x_1990_);
lean_ctor_set(v___x_1995_, 2, v___x_1992_);
lean_ctor_set(v___x_1995_, 3, v___x_1994_);
v___x_1996_ = l_Lean_Syntax_node1(v___x_1969_, v___x_1976_, v___x_1959_);
v___x_1997_ = l_Lean_Syntax_node2(v___x_1969_, v___x_1989_, v___x_1995_, v___x_1996_);
v___x_1998_ = l_Lean_Syntax_node2(v___x_1969_, v___x_1986_, v___x_1988_, v___x_1997_);
v___x_1999_ = l_Lean_Syntax_node2(v___x_1969_, v___x_1985_, v___x_1978_, v___x_1998_);
v___x_2000_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2002_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_1969_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2004_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2005_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_1969_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v___x_2006_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2007_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_1969_);
lean_ctor_set(v___x_2008_, 1, v___x_2006_);
v___x_2009_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2010_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2012_ = l_Lean_addMacroScope(v_a_1973_, v___x_2011_, v_a_1971_);
v___x_2013_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2013_, 0, v___x_1969_);
lean_ctor_set(v___x_2013_, 1, v___x_2010_);
lean_ctor_set(v___x_2013_, 2, v___x_2012_);
lean_ctor_set(v___x_2013_, 3, v___x_1993_);
v___x_2014_ = l_Lean_Syntax_node1(v___x_1969_, v___x_1976_, v___x_2013_);
v___x_2015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_1969_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__17, &l_Lasm_JS_Meta_mkToJS___closed__17_once, _init_l_Lasm_JS_Meta_mkToJS___closed__17);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__19));
v___x_2019_ = l_Lean_addMacroScope(v_a_1973_, v___x_2018_, v_a_1971_);
v___x_2020_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__23));
v___x_2021_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2021_, 0, v___x_1969_);
lean_ctor_set(v___x_2021_, 1, v___x_2017_);
lean_ctor_set(v___x_2021_, 2, v___x_2019_);
lean_ctor_set(v___x_2021_, 3, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2023_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_2024_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_1969_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2026_ = l_Lean_Syntax_SepArray_ofElems(v___x_2025_, v_a_1966_);
lean_dec(v_a_1966_);
v___x_2027_ = l_Array_append___redArg(v___x_1977_, v___x_2026_);
lean_dec_ref(v___x_2026_);
v___x_2028_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2028_, 0, v___x_1969_);
lean_ctor_set(v___x_2028_, 1, v___x_1976_);
lean_ctor_set(v___x_2028_, 2, v___x_2027_);
v___x_2029_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_2030_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2030_, 0, v___x_1969_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
v___x_2031_ = l_Lean_Syntax_node3(v___x_1969_, v___x_2022_, v___x_2024_, v___x_2028_, v___x_2030_);
v___x_2032_ = l_Lean_Syntax_node1(v___x_1969_, v___x_1976_, v___x_2031_);
v___x_2033_ = l_Lean_Syntax_node2(v___x_1969_, v___x_1989_, v___x_2021_, v___x_2032_);
v___x_2034_ = l_Lean_Syntax_node4(v___x_1969_, v___x_2009_, v___x_2014_, v___x_1978_, v___x_2016_, v___x_2033_);
v___x_2035_ = l_Lean_Syntax_node2(v___x_1969_, v___x_2007_, v___x_2008_, v___x_2034_);
v___x_2036_ = l_Lean_Syntax_node1(v___x_1969_, v___x_1976_, v___x_2035_);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2038_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_1969_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = l_Lean_Syntax_node3(v___x_1969_, v___x_2003_, v___x_2005_, v___x_2036_, v___x_2038_);
v___x_2040_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2041_ = l_Lean_Syntax_node2(v___x_1969_, v___x_2040_, v___x_1978_, v___x_1978_);
v___x_2042_ = l_Lean_Syntax_node4(v___x_1969_, v___x_2000_, v___x_2002_, v___x_2039_, v___x_2041_, v___x_1978_);
v___x_2043_ = l_Lean_Syntax_node6(v___x_1969_, v___x_1981_, v___x_1983_, v___x_1984_, v___x_1978_, v___x_1978_, v___x_1999_, v___x_2042_);
v___x_2044_ = l_Lean_Syntax_node2(v___x_1969_, v___x_1974_, v___x_1979_, v___x_2043_);
v___x_2045_ = l_Lean_Elab_Command_elabCommand(v___x_2044_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2053_; 
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; 
v_unused_2054_ = lean_ctor_get(v___x_2045_, 0);
lean_dec(v_unused_2054_);
v___x_2047_ = v___x_2045_;
v_isShared_2048_ = v_isSharedCheck_2053_;
goto v_resetjp_2046_;
}
else
{
lean_dec(v___x_2045_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2053_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2049_; lean_object* v___x_2051_; 
v___x_2049_ = lean_box(v___x_1951_);
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2049_);
v___x_2051_ = v___x_2047_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
v_a_2055_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2045_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2045_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
lean_dec(v___x_1959_);
v_a_2067_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_1965_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_1965_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
else
{
lean_object* v___x_2075_; 
lean_dec(v_a_1961_);
lean_inc(v_declName_1957_);
v___x_2075_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1957_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
if (lean_obj_tag(v_a_2076_) == 1)
{
lean_object* v_val_2077_; size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; 
v_val_2077_ = lean_ctor_get(v_a_2076_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v_a_2076_, 1);
v_sz_2078_ = lean_array_size(v_val_2077_);
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_2078_, v___x_2079_, v_val_2077_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2082_; lean_object* v_a_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_a_2086_; lean_object* v_a_2088_; lean_object* v_quotContext_x3f_2176_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2080_, 1);
v___x_2082_ = l_Lean_Elab_Command_getRef___redArg(v_a_1946_);
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref(v___x_2082_);
v___x_2084_ = l_Lean_SourceInfo_fromRef(v_a_2083_, v___x_1955_);
lean_dec(v_a_2083_);
v___x_2085_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1946_);
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref(v___x_2085_);
v_quotContext_x3f_2176_ = lean_ctor_get(v_a_1946_, 5);
if (lean_obj_tag(v_quotContext_x3f_2176_) == 0)
{
lean_object* v___x_2177_; lean_object* v_a_2178_; 
v___x_2177_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v_a_1947_);
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref(v___x_2177_);
v_a_2088_ = v_a_2178_;
goto v___jp_2087_;
}
else
{
lean_object* v_val_2179_; 
v_val_2179_ = lean_ctor_get(v_quotContext_x3f_2176_, 0);
lean_inc(v_val_2179_);
v_a_2088_ = v_val_2179_;
goto v___jp_2087_;
}
v___jp_2087_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; size_t v_sz_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2089_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2090_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2092_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2084_, 31);
v___x_2093_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2084_);
lean_ctor_set(v___x_2093_, 1, v___x_2091_);
lean_ctor_set(v___x_2093_, 2, v___x_2092_);
lean_inc_ref_n(v___x_2093_, 17);
v___x_2094_ = l_Lean_Syntax_node7(v___x_2084_, v___x_2090_, v___x_2093_, v___x_2093_, v___x_2093_, v___x_2093_, v___x_2093_, v___x_2093_, v___x_2093_);
v___x_2095_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2096_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2097_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2098_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2097_, v___x_2093_);
v___x_2099_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2084_);
lean_ctor_set(v___x_2099_, 1, v___x_2095_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2101_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2102_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2084_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2105_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc(v_a_2086_);
lean_inc(v_a_2088_);
v___x_2107_ = l_Lean_addMacroScope(v_a_2088_, v___x_2106_, v_a_2086_);
v___x_2108_ = lean_box(0);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2110_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2084_);
lean_ctor_set(v___x_2110_, 1, v___x_2105_);
lean_ctor_set(v___x_2110_, 2, v___x_2107_);
lean_ctor_set(v___x_2110_, 3, v___x_2109_);
v___x_2111_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2091_, v___x_1959_);
v___x_2112_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2104_, v___x_2110_, v___x_2111_);
v___x_2113_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2101_, v___x_2103_, v___x_2112_);
v___x_2114_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2100_, v___x_2093_, v___x_2113_);
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_2116_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2084_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2119_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2120_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2084_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2122_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2084_);
lean_ctor_set(v___x_2123_, 1, v___x_2121_);
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2126_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2127_ = l_Lean_addMacroScope(v_a_2088_, v___x_2126_, v_a_2086_);
v___x_2128_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2084_);
lean_ctor_set(v___x_2128_, 1, v___x_2125_);
lean_ctor_set(v___x_2128_, 2, v___x_2127_);
lean_ctor_set(v___x_2128_, 3, v___x_2108_);
lean_inc_ref(v___x_2128_);
v___x_2129_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2091_, v___x_2128_);
v___x_2130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2131_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2084_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2133_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2084_);
lean_ctor_set(v___x_2134_, 1, v___x_2132_);
v___x_2135_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2136_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2135_, v___x_2093_, v___x_2128_);
v___x_2137_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2091_, v___x_2136_);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2084_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v_sz_2141_ = lean_array_size(v_a_2081_);
v___x_2142_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2141_, v___x_2079_, v_a_2081_);
v___x_2143_ = l_Array_append___redArg(v___x_2092_, v___x_2142_);
lean_dec_ref(v___x_2142_);
v___x_2144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2084_);
lean_ctor_set(v___x_2144_, 1, v___x_2091_);
lean_ctor_set(v___x_2144_, 2, v___x_2143_);
v___x_2145_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2140_, v___x_2144_);
v___x_2146_ = l_Lean_Syntax_node6(v___x_2084_, v___x_2133_, v___x_2134_, v___x_2093_, v___x_2093_, v___x_2137_, v___x_2139_, v___x_2145_);
v___x_2147_ = l_Lean_Syntax_node4(v___x_2084_, v___x_2124_, v___x_2129_, v___x_2093_, v___x_2131_, v___x_2146_);
v___x_2148_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2122_, v___x_2123_, v___x_2147_);
v___x_2149_ = l_Lean_Syntax_node1(v___x_2084_, v___x_2091_, v___x_2148_);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2151_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2084_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = l_Lean_Syntax_node3(v___x_2084_, v___x_2118_, v___x_2120_, v___x_2149_, v___x_2151_);
v___x_2153_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2154_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2153_, v___x_2093_, v___x_2093_);
v___x_2155_ = l_Lean_Syntax_node4(v___x_2084_, v___x_2115_, v___x_2117_, v___x_2152_, v___x_2154_, v___x_2093_);
v___x_2156_ = l_Lean_Syntax_node6(v___x_2084_, v___x_2096_, v___x_2098_, v___x_2099_, v___x_2093_, v___x_2093_, v___x_2114_, v___x_2155_);
v___x_2157_ = l_Lean_Syntax_node2(v___x_2084_, v___x_2089_, v___x_2094_, v___x_2156_);
v___x_2158_ = l_Lean_Elab_Command_elabCommand(v___x_2157_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2166_; 
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; 
v_unused_2167_ = lean_ctor_get(v___x_2158_, 0);
lean_dec(v_unused_2167_);
v___x_2160_ = v___x_2158_;
v_isShared_2161_ = v_isSharedCheck_2166_;
goto v_resetjp_2159_;
}
else
{
lean_dec(v___x_2158_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2166_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___x_2162_ = lean_box(v___x_1951_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2162_);
v___x_2164_ = v___x_2160_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
else
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
v_a_2168_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2158_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2158_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec(v___x_1959_);
v_a_2180_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2080_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2080_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
else
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
lean_dec(v_a_2076_);
lean_dec(v___x_1959_);
v___x_2188_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__33, &l_Lasm_JS_Meta_mkToJS___closed__33_once, _init_l_Lasm_JS_Meta_mkToJS___closed__33);
lean_inc(v_declName_1957_);
v___x_2189_ = l_Lean_MessageData_ofName(v_declName_1957_);
v___x_2190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2188_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2192_, v_a_1946_, v_a_1947_);
return v___x_2193_;
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
lean_dec(v___x_1959_);
v_a_2194_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2075_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2075_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
v_a_2202_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_1958_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_1958_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object* v_declNames_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lasm_JS_Meta_mkToJS(v_declNames_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec_ref(v_declNames_2210_);
return v_res_2214_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0));
v___x_2217_ = l_String_toRawSubstring_x27(v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t v_sz_2234_, size_t v_i_2235_, lean_object* v_bs_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
uint8_t v___x_2240_; 
v___x_2240_ = lean_usize_dec_lt(v_i_2235_, v_sz_2234_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v_bs_2236_);
return v___x_2241_;
}
else
{
uint8_t v___x_2242_; lean_object* v_v_2243_; lean_object* v___x_2244_; lean_object* v_bs_x27_2245_; lean_object* v___x_2246_; 
v___x_2242_ = 0;
v_v_2243_ = lean_array_uget(v_bs_2236_, v_i_2235_);
v___x_2244_ = lean_unsigned_to_nat(0u);
v_bs_x27_2245_ = lean_array_uset(v_bs_2236_, v_i_2235_, v___x_2244_);
v___x_2246_ = l_Lean_Elab_Command_getRef___redArg(v___y_2237_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = l_Lean_SourceInfo_fromRef(v_a_2247_, v___x_2242_);
lean_dec(v_a_2247_);
v___x_2249_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2237_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v_a_2252_; lean_object* v_quotContext_x3f_2285_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2249_, 1);
v_quotContext_x3f_2285_ = lean_ctor_get(v___y_2237_, 5);
if (lean_obj_tag(v_quotContext_x3f_2285_) == 0)
{
lean_object* v___x_2286_; 
v___x_2286_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v___y_2238_);
if (lean_obj_tag(v___x_2286_) == 0)
{
lean_object* v_a_2287_; 
v_a_2287_ = lean_ctor_get(v___x_2286_, 0);
lean_inc(v_a_2287_);
lean_dec_ref_known(v___x_2286_, 1);
v_a_2252_ = v_a_2287_;
goto v___jp_2251_;
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_dec(v_a_2250_);
lean_dec(v___x_2248_);
lean_dec_ref(v_bs_x27_2245_);
lean_dec(v_v_2243_);
v_a_2288_ = lean_ctor_get(v___x_2286_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2286_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2286_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_val_2296_; 
v_val_2296_ = lean_ctor_get(v_quotContext_x3f_2285_, 0);
lean_inc(v_val_2296_);
v_a_2252_ = v_val_2296_;
goto v___jp_2251_;
}
v___jp_2251_:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; size_t v___x_2281_; size_t v___x_2282_; lean_object* v___x_2283_; 
v___x_2253_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_2254_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_2248_, 10);
v___x_2255_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2248_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2258_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_2259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
lean_inc(v_a_2250_);
lean_inc(v_a_2252_);
v___x_2260_ = l_Lean_addMacroScope(v_a_2252_, v___x_2259_, v_a_2250_);
v___x_2261_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_2262_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2248_);
lean_ctor_set(v___x_2262_, 1, v___x_2258_);
lean_ctor_set(v___x_2262_, 2, v___x_2260_);
lean_ctor_set(v___x_2262_, 3, v___x_2261_);
v___x_2263_ = l_Lean_Name_getString_x21(v_v_2243_);
v___x_2264_ = lean_box(2);
v___x_2265_ = l_Lean_Syntax_mkStrLit(v___x_2263_, v___x_2264_);
v___x_2266_ = l_Lean_Syntax_node1(v___x_2248_, v___x_2256_, v___x_2265_);
v___x_2267_ = l_Lean_Syntax_node2(v___x_2248_, v___x_2257_, v___x_2262_, v___x_2266_);
v___x_2268_ = l_Lean_Syntax_node1(v___x_2248_, v___x_2256_, v___x_2267_);
v___x_2269_ = l_Lean_Syntax_node1(v___x_2248_, v___x_2256_, v___x_2268_);
v___x_2270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2271_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2248_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1);
v___x_2273_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4));
v___x_2274_ = l_Lean_addMacroScope(v_a_2252_, v___x_2273_, v_a_2250_);
v___x_2275_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8));
v___x_2276_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2248_);
lean_ctor_set(v___x_2276_, 1, v___x_2272_);
lean_ctor_set(v___x_2276_, 2, v___x_2274_);
lean_ctor_set(v___x_2276_, 3, v___x_2275_);
v___x_2277_ = l_Lean_mkIdent(v_v_2243_);
v___x_2278_ = l_Lean_Syntax_node1(v___x_2248_, v___x_2256_, v___x_2277_);
v___x_2279_ = l_Lean_Syntax_node2(v___x_2248_, v___x_2257_, v___x_2276_, v___x_2278_);
v___x_2280_ = l_Lean_Syntax_node4(v___x_2248_, v___x_2253_, v___x_2255_, v___x_2269_, v___x_2271_, v___x_2279_);
v___x_2281_ = ((size_t)1ULL);
v___x_2282_ = lean_usize_add(v_i_2235_, v___x_2281_);
v___x_2283_ = lean_array_uset(v_bs_x27_2245_, v_i_2235_, v___x_2280_);
v_i_2235_ = v___x_2282_;
v_bs_2236_ = v___x_2283_;
goto _start;
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec(v___x_2248_);
lean_dec_ref(v_bs_x27_2245_);
lean_dec(v_v_2243_);
v_a_2297_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2249_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2249_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec_ref(v_bs_x27_2245_);
lean_dec(v_v_2243_);
v_a_2305_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2246_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2246_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object* v_sz_2313_, lean_object* v_i_2314_, lean_object* v_bs_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
size_t v_sz_boxed_2319_; size_t v_i_boxed_2320_; lean_object* v_res_2321_; 
v_sz_boxed_2319_ = lean_unbox_usize(v_sz_2313_);
lean_dec(v_sz_2313_);
v_i_boxed_2320_ = lean_unbox_usize(v_i_2314_);
lean_dec(v_i_2314_);
v_res_2321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_boxed_2319_, v_i_boxed_2320_, v_bs_2315_, v___y_2316_, v___y_2317_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object* v_x_2322_, lean_object* v_body_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = lean_box(1);
v___x_2332_ = l_Lean_PrettyPrinter_delab(v_body_2323_, v___x_2331_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object* v_x_2333_, lean_object* v_body_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(v_x_2333_, v_body_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec_ref(v_x_2333_);
return v_res_2342_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9));
v___x_2374_ = l_String_toRawSubstring_x27(v___x_2373_);
return v___x_2374_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16(void){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15));
v___x_2388_ = l_String_toRawSubstring_x27(v___x_2387_);
return v___x_2388_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2394_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20));
v___x_2395_ = lean_unsigned_to_nat(14u);
v___x_2396_ = lean_unsigned_to_nat(22u);
v___x_2397_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19));
v___x_2398_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18));
v___x_2399_ = l_mkPanicMessageWithDecl(v___x_2398_, v___x_2397_, v___x_2396_, v___x_2395_, v___x_2394_);
return v___x_2399_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22));
v___x_2402_ = l_Lean_stringToMessageData(v___x_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object* v___x_2403_, lean_object* v___x_2404_, lean_object* v_declName_2405_, lean_object* v_as_2406_, size_t v_sz_2407_, size_t v_i_2408_, lean_object* v_b_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v_a_2414_; uint8_t v___x_2418_; 
v___x_2418_ = lean_usize_dec_lt(v_i_2408_, v_sz_2407_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; 
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v_b_2409_);
return v___x_2419_;
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2421_; 
v_a_2420_ = lean_array_uget_borrowed(v_as_2406_, v_i_2408_);
lean_inc(v_a_2420_);
lean_inc(v_declName_2405_);
lean_inc_ref(v___x_2404_);
v___x_2421_ = l_Lean_getProjFnForField_x3f(v___x_2404_, v_declName_2405_, v_a_2420_);
if (lean_obj_tag(v___x_2421_) == 1)
{
lean_object* v_val_2422_; lean_object* v___f_2423_; uint8_t v___x_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v_a_2431_; lean_object* v___y_2469_; lean_object* v___x_2518_; 
v_val_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_val_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___f_2423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0));
v___x_2424_ = 0;
v___x_2425_ = lean_unsigned_to_nat(1u);
v___x_2426_ = lean_nat_dec_eq(v___x_2403_, v___x_2425_);
lean_inc_ref(v___x_2404_);
v___x_2518_ = l_Lean_Environment_find_x3f(v___x_2404_, v_val_2422_, v___x_2424_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21);
v___x_2520_ = l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(v___x_2519_);
v___y_2469_ = v___x_2520_;
goto v___jp_2468_;
}
else
{
lean_object* v_val_2521_; 
v_val_2521_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_val_2521_);
lean_dec_ref_known(v___x_2518_, 1);
v___y_2469_ = v_val_2521_;
goto v___jp_2468_;
}
v___jp_2427_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
lean_inc_n(v_a_2420_, 2);
v___x_2434_ = l_Lean_mkIdent(v_a_2420_);
v___x_2435_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2436_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___y_2428_, 12);
v___x_2437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2437_, 0, v___y_2428_);
lean_ctor_set(v___x_2437_, 1, v___x_2435_);
lean_ctor_set(v___x_2437_, 2, v___x_2436_);
lean_inc_ref_n(v___x_2437_, 3);
v___x_2438_ = l_Lean_Syntax_node2(v___y_2428_, v___x_2433_, v___x_2434_, v___x_2437_);
v___x_2439_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2440_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2441_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___y_2428_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5));
v___x_2443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6));
v___x_2444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___y_2428_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8));
v___x_2446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2447_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10);
v___x_2448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12));
lean_inc(v___y_2429_);
lean_inc(v_a_2431_);
v___x_2449_ = l_Lean_addMacroScope(v_a_2431_, v___x_2448_, v___y_2429_);
v___x_2450_ = lean_box(0);
v___x_2451_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2452_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2452_, 0, v___y_2428_);
lean_ctor_set(v___x_2452_, 1, v___x_2447_);
lean_ctor_set(v___x_2452_, 2, v___x_2449_);
lean_ctor_set(v___x_2452_, 3, v___x_2451_);
v___x_2453_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2455_ = l_Lean_addMacroScope(v_a_2431_, v___x_2454_, v___y_2429_);
v___x_2456_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2456_, 0, v___y_2428_);
lean_ctor_set(v___x_2456_, 1, v___x_2453_);
lean_ctor_set(v___x_2456_, 2, v___x_2455_);
lean_ctor_set(v___x_2456_, 3, v___x_2450_);
v___x_2457_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_2420_, v___x_2426_);
v___x_2458_ = lean_box(2);
v___x_2459_ = l_Lean_Syntax_mkStrLit(v___x_2457_, v___x_2458_);
v___x_2460_ = l_Lean_Syntax_node3(v___y_2428_, v___x_2435_, v___y_2430_, v___x_2456_, v___x_2459_);
v___x_2461_ = l_Lean_Syntax_node2(v___y_2428_, v___x_2446_, v___x_2452_, v___x_2460_);
v___x_2462_ = l_Lean_Syntax_node1(v___y_2428_, v___x_2445_, v___x_2461_);
v___x_2463_ = l_Lean_Syntax_node2(v___y_2428_, v___x_2442_, v___x_2444_, v___x_2462_);
v___x_2464_ = l_Lean_Syntax_node3(v___y_2428_, v___x_2439_, v___x_2441_, v___x_2437_, v___x_2463_);
v___x_2465_ = l_Lean_Syntax_node3(v___y_2428_, v___x_2435_, v___x_2437_, v___x_2437_, v___x_2464_);
v___x_2466_ = l_Lean_Syntax_node2(v___y_2428_, v___x_2432_, v___x_2438_, v___x_2465_);
v___x_2467_ = lean_array_push(v_b_2409_, v___x_2466_);
v_a_2414_ = v___x_2467_;
goto v___jp_2413_;
}
v___jp_2468_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2470_ = l_Lean_ConstantInfo_type(v___y_2469_);
lean_dec_ref(v___y_2469_);
v___x_2471_ = lean_box(v___x_2424_);
v___x_2472_ = lean_box(v___x_2424_);
v___x_2473_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed), 12, 5);
lean_closure_set(v___x_2473_, 0, lean_box(0));
lean_closure_set(v___x_2473_, 1, v___x_2470_);
lean_closure_set(v___x_2473_, 2, v___f_2423_);
lean_closure_set(v___x_2473_, 3, v___x_2471_);
lean_closure_set(v___x_2473_, 4, v___x_2472_);
v___x_2474_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2473_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2476_ = l_Lean_Elab_Command_getRef___redArg(v___y_2410_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2476_, 1);
v___x_2478_ = l_Lean_SourceInfo_fromRef(v_a_2477_, v___x_2424_);
lean_dec(v_a_2477_);
v___x_2479_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2410_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_quotContext_x3f_2480_; 
v_quotContext_x3f_2480_ = lean_ctor_get(v___y_2410_, 5);
if (lean_obj_tag(v_quotContext_x3f_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v___x_2482_; 
v_a_2481_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2479_, 1);
v___x_2482_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v___y_2411_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 1);
v___y_2428_ = v___x_2478_;
v___y_2429_ = v_a_2481_;
v___y_2430_ = v_a_2475_;
v_a_2431_ = v_a_2483_;
goto v___jp_2427_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec(v_a_2481_);
lean_dec(v___x_2478_);
lean_dec(v_a_2475_);
lean_dec_ref(v_b_2409_);
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v_a_2484_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2482_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2482_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v_val_2493_; 
v_a_2492_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2479_, 1);
v_val_2493_ = lean_ctor_get(v_quotContext_x3f_2480_, 0);
lean_inc(v_val_2493_);
v___y_2428_ = v___x_2478_;
v___y_2429_ = v_a_2492_;
v___y_2430_ = v_a_2475_;
v_a_2431_ = v_val_2493_;
goto v___jp_2427_;
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec(v___x_2478_);
lean_dec(v_a_2475_);
lean_dec_ref(v_b_2409_);
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v_a_2494_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2479_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2479_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
lean_dec(v_a_2475_);
lean_dec_ref(v_b_2409_);
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v_a_2502_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2504_ = v___x_2476_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2476_);
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
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
lean_dec_ref(v_b_2409_);
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v_a_2510_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2474_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2474_);
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
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
lean_dec(v___x_2421_);
v___x_2522_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23);
lean_inc(v_a_2420_);
v___x_2523_ = l_Lean_MessageData_ofName(v_a_2420_);
v___x_2524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2524_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_dec_ref_known(v___x_2525_, 1);
v_a_2414_ = v_b_2409_;
goto v___jp_2413_;
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec_ref(v_b_2409_);
lean_dec(v_declName_2405_);
lean_dec_ref(v___x_2404_);
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2525_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2525_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
v___jp_2413_:
{
size_t v___x_2415_; size_t v___x_2416_; 
v___x_2415_ = ((size_t)1ULL);
v___x_2416_ = lean_usize_add(v_i_2408_, v___x_2415_);
v_i_2408_ = v___x_2416_;
v_b_2409_ = v_a_2414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object* v___x_2534_, lean_object* v___x_2535_, lean_object* v_declName_2536_, lean_object* v_as_2537_, lean_object* v_sz_2538_, lean_object* v_i_2539_, lean_object* v_b_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
size_t v_sz_boxed_2544_; size_t v_i_boxed_2545_; lean_object* v_res_2546_; 
v_sz_boxed_2544_ = lean_unbox_usize(v_sz_2538_);
lean_dec(v_sz_2538_);
v_i_boxed_2545_ = lean_unbox_usize(v_i_2539_);
lean_dec(v_i_2539_);
v_res_2546_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2534_, v___x_2535_, v_declName_2536_, v_as_2537_, v_sz_boxed_2544_, v_i_boxed_2545_, v_b_2540_, v___y_2541_, v___y_2542_);
lean_dec(v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec_ref(v_as_2537_);
lean_dec(v___x_2534_);
return v_res_2546_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__1(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__0));
v___x_2549_ = l_String_toRawSubstring_x27(v___x_2548_);
return v___x_2549_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__13(void){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2579_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__12));
v___x_2580_ = l_String_toRawSubstring_x27(v___x_2579_);
return v___x_2580_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__27(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_2620_ = l_String_toRawSubstring_x27(v___x_2619_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__33(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__32));
v___x_2632_ = l_String_toRawSubstring_x27(v___x_2631_);
return v___x_2632_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__42(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2650_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__41));
v___x_2651_ = l_Lean_stringToMessageData(v___x_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object* v_declNames_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2656_ = lean_array_get_size(v_declNames_2652_);
v___x_2657_ = lean_unsigned_to_nat(1u);
v___x_2658_ = lean_nat_dec_eq(v___x_2656_, v___x_2657_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2659_ = lean_box(v___x_2658_);
v___x_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
return v___x_2660_;
}
else
{
lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v_declName_2664_; lean_object* v___x_2665_; 
v___x_2661_ = lean_box(0);
v___x_2662_ = 0;
v___x_2663_ = lean_unsigned_to_nat(0u);
v_declName_2664_ = lean_array_get_borrowed(v___x_2661_, v_declNames_2652_, v___x_2663_);
lean_inc(v_declName_2664_);
v___x_2665_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2664_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v_a_2671_; 
lean_dec_ref_known(v___x_2665_, 1);
lean_inc_n(v_declName_2664_, 3);
v___x_2666_ = l_Lean_mkIdent(v_declName_2664_);
v___x_2667_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2664_, v___x_2658_);
v___x_2668_ = lean_box(2);
v___x_2669_ = l_Lean_Syntax_mkStrLit(v___x_2667_, v___x_2668_);
v___x_2670_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2664_, v_a_2654_);
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref(v___x_2670_);
if (lean_obj_tag(v_a_2671_) == 1)
{
lean_object* v_val_2672_; lean_object* v___x_2673_; lean_object* v_env_2674_; lean_object* v___x_2675_; size_t v_sz_2676_; size_t v___x_2677_; lean_object* v___x_2678_; 
v_val_2672_ = lean_ctor_get(v_a_2671_, 0);
lean_inc(v_val_2672_);
lean_dec_ref_known(v_a_2671_, 1);
v___x_2673_ = lean_st_ref_get(v_a_2654_);
v_env_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc_ref(v_env_2674_);
lean_dec(v___x_2673_);
v___x_2675_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
v_sz_2676_ = lean_array_size(v_val_2672_);
v___x_2677_ = ((size_t)0ULL);
lean_inc(v_declName_2664_);
v___x_2678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2656_, v_env_2674_, v_declName_2664_, v_val_2672_, v_sz_2676_, v___x_2677_, v___x_2675_, v_a_2653_, v_a_2654_);
lean_dec(v_val_2672_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v_a_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v_a_2687_; lean_object* v_a_2689_; lean_object* v_quotContext_x3f_2793_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v___x_2680_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2682_ = l_Lean_Syntax_SepArray_ofElems(v___x_2681_, v_a_2679_);
lean_dec(v_a_2679_);
v___x_2683_ = l_Lean_Elab_Command_getRef___redArg(v_a_2653_);
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref(v___x_2683_);
v___x_2685_ = l_Lean_SourceInfo_fromRef(v_a_2684_, v___x_2662_);
lean_dec(v_a_2684_);
v___x_2686_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2653_);
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref(v___x_2686_);
v_quotContext_x3f_2793_ = lean_ctor_get(v_a_2653_, 5);
if (lean_obj_tag(v_quotContext_x3f_2793_) == 0)
{
lean_object* v___x_2794_; lean_object* v_a_2795_; 
v___x_2794_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v_a_2654_);
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_a_2795_);
lean_dec_ref(v___x_2794_);
v_a_2689_ = v_a_2795_;
goto v___jp_2688_;
}
else
{
lean_object* v_val_2796_; 
v_val_2796_ = lean_ctor_get(v_quotContext_x3f_2793_, 0);
lean_inc(v_val_2796_);
v_a_2689_ = v_val_2796_;
goto v___jp_2688_;
}
v___jp_2688_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2690_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2691_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2693_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2685_, 42);
v___x_2694_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2685_);
lean_ctor_set(v___x_2694_, 1, v___x_2692_);
lean_ctor_set(v___x_2694_, 2, v___x_2693_);
lean_inc_ref_n(v___x_2694_, 23);
v___x_2695_ = l_Lean_Syntax_node7(v___x_2685_, v___x_2691_, v___x_2694_, v___x_2694_, v___x_2694_, v___x_2694_, v___x_2694_, v___x_2694_, v___x_2694_);
v___x_2696_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2697_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2699_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2698_, v___x_2694_);
v___x_2700_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2685_);
lean_ctor_set(v___x_2700_, 1, v___x_2696_);
v___x_2701_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2702_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2703_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2704_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2685_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
v___x_2705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2706_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2687_, 3);
lean_inc_n(v_a_2689_, 3);
v___x_2708_ = l_Lean_addMacroScope(v_a_2689_, v___x_2707_, v_a_2687_);
v___x_2709_ = lean_box(0);
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2711_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2685_);
lean_ctor_set(v___x_2711_, 1, v___x_2706_);
lean_ctor_set(v___x_2711_, 2, v___x_2708_);
lean_ctor_set(v___x_2711_, 3, v___x_2710_);
v___x_2712_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2692_, v___x_2666_);
v___x_2713_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2705_, v___x_2711_, v___x_2712_);
v___x_2714_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2702_, v___x_2704_, v___x_2713_);
v___x_2715_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2701_, v___x_2694_, v___x_2714_);
v___x_2716_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2717_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2685_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2721_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2722_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2723_ = l_Lean_addMacroScope(v_a_2689_, v___x_2722_, v_a_2687_);
v___x_2724_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2685_);
lean_ctor_set(v___x_2724_, 1, v___x_2721_);
lean_ctor_set(v___x_2724_, 2, v___x_2723_);
lean_ctor_set(v___x_2724_, 3, v___x_2709_);
v___x_2725_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2720_, v___x_2724_, v___x_2694_);
v___x_2726_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2727_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2728_ = l_Lean_addMacroScope(v_a_2689_, v___x_2727_, v_a_2687_);
v___x_2729_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2685_);
lean_ctor_set(v___x_2729_, 1, v___x_2726_);
lean_ctor_set(v___x_2729_, 2, v___x_2728_);
lean_ctor_set(v___x_2729_, 3, v___x_2709_);
v___x_2730_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2692_, v___x_2729_);
v___x_2731_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2732_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2685_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
v___x_2734_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__15));
v___x_2735_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__16));
v___x_2736_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2685_);
lean_ctor_set(v___x_2736_, 1, v___x_2734_);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__18));
v___x_2738_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__20));
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__22));
v___x_2740_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__23));
v___x_2741_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2685_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__24));
v___x_2743_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_2744_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2685_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = l_Array_append___redArg(v___x_2693_, v___x_2682_);
lean_dec_ref(v___x_2682_);
v___x_2746_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2685_);
lean_ctor_set(v___x_2746_, 1, v___x_2692_);
lean_ctor_set(v___x_2746_, 2, v___x_2745_);
v___x_2747_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2719_, v___x_2746_);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__25));
v___x_2749_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2748_, v___x_2694_);
v___x_2750_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_2751_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2685_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = l_Lean_Syntax_node6(v___x_2685_, v___x_2742_, v___x_2744_, v___x_2694_, v___x_2747_, v___x_2749_, v___x_2694_, v___x_2751_);
v___x_2753_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2692_, v___x_2752_);
v___x_2754_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2739_, v___x_2741_, v___x_2753_);
v___x_2755_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2738_, v___x_2754_, v___x_2694_);
v___x_2756_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2692_, v___x_2755_);
v___x_2757_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2737_, v___x_2756_);
v___x_2758_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2735_, v___x_2736_, v___x_2757_);
lean_inc_ref(v___x_2733_);
v___x_2759_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2731_, v___x_2733_, v___x_2694_, v___x_2758_);
v___x_2760_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2692_, v___x_2730_, v___x_2694_, v___x_2759_);
v___x_2761_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2680_, v___x_2725_, v___x_2760_);
v___x_2762_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2764_ = l_Lean_addMacroScope(v_a_2689_, v___x_2763_, v_a_2687_);
v___x_2765_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2685_);
lean_ctor_set(v___x_2765_, 1, v___x_2762_);
lean_ctor_set(v___x_2765_, 2, v___x_2764_);
lean_ctor_set(v___x_2765_, 3, v___x_2709_);
v___x_2766_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2720_, v___x_2765_, v___x_2694_);
v___x_2767_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2731_, v___x_2733_, v___x_2694_, v___x_2669_);
v___x_2768_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2692_, v___x_2694_, v___x_2694_, v___x_2767_);
v___x_2769_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2680_, v___x_2766_, v___x_2768_);
v___x_2770_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2692_, v___x_2761_, v___x_2694_, v___x_2769_);
v___x_2771_ = l_Lean_Syntax_node1(v___x_2685_, v___x_2719_, v___x_2770_);
v___x_2772_ = l_Lean_Syntax_node3(v___x_2685_, v___x_2716_, v___x_2718_, v___x_2771_, v___x_2694_);
v___x_2773_ = l_Lean_Syntax_node6(v___x_2685_, v___x_2697_, v___x_2699_, v___x_2700_, v___x_2694_, v___x_2694_, v___x_2715_, v___x_2772_);
v___x_2774_ = l_Lean_Syntax_node2(v___x_2685_, v___x_2690_, v___x_2695_, v___x_2773_);
v___x_2775_ = l_Lean_Elab_Command_elabCommand(v___x_2774_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2783_; 
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; 
v_unused_2784_ = lean_ctor_get(v___x_2775_, 0);
lean_dec(v_unused_2784_);
v___x_2777_ = v___x_2775_;
v_isShared_2778_ = v_isSharedCheck_2783_;
goto v_resetjp_2776_;
}
else
{
lean_dec(v___x_2775_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2783_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v___x_2781_; 
v___x_2779_ = lean_box(v___x_2658_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v___x_2779_);
v___x_2781_ = v___x_2777_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2779_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
v_a_2785_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2775_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2775_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
else
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
lean_dec(v___x_2669_);
lean_dec(v___x_2666_);
v_a_2797_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2678_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2678_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
else
{
lean_object* v___x_2805_; 
lean_dec(v_a_2671_);
lean_inc(v_declName_2664_);
v___x_2805_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2664_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
if (lean_obj_tag(v_a_2806_) == 1)
{
lean_object* v_val_2807_; size_t v_sz_2808_; size_t v___x_2809_; lean_object* v___x_2810_; 
v_val_2807_ = lean_ctor_get(v_a_2806_, 0);
lean_inc(v_val_2807_);
lean_dec_ref_known(v_a_2806_, 1);
v_sz_2808_ = lean_array_size(v_val_2807_);
v___x_2809_ = ((size_t)0ULL);
v___x_2810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_2808_, v___x_2809_, v_val_2807_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v_a_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v_a_2816_; lean_object* v_a_2818_; lean_object* v_quotContext_x3f_2937_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = l_Lean_Elab_Command_getRef___redArg(v_a_2653_);
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_a_2813_);
lean_dec_ref(v___x_2812_);
v___x_2814_ = l_Lean_SourceInfo_fromRef(v_a_2813_, v___x_2662_);
lean_dec(v_a_2813_);
v___x_2815_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2653_);
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref(v___x_2815_);
v_quotContext_x3f_2937_ = lean_ctor_get(v_a_2653_, 5);
if (lean_obj_tag(v_quotContext_x3f_2937_) == 0)
{
lean_object* v___x_2938_; lean_object* v_a_2939_; 
v___x_2938_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__1___redArg(v_a_2654_);
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref(v___x_2938_);
v_a_2818_ = v_a_2939_;
goto v___jp_2817_;
}
else
{
lean_object* v_val_2940_; 
v_val_2940_ = lean_ctor_get(v_quotContext_x3f_2937_, 0);
lean_inc(v_val_2940_);
v_a_2818_ = v_val_2940_;
goto v___jp_2817_;
}
v___jp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; size_t v_sz_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2819_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2820_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2821_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2822_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2814_, 47);
v___x_2823_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2814_);
lean_ctor_set(v___x_2823_, 1, v___x_2821_);
lean_ctor_set(v___x_2823_, 2, v___x_2822_);
lean_inc_ref_n(v___x_2823_, 22);
v___x_2824_ = l_Lean_Syntax_node7(v___x_2814_, v___x_2820_, v___x_2823_, v___x_2823_, v___x_2823_, v___x_2823_, v___x_2823_, v___x_2823_, v___x_2823_);
v___x_2825_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2826_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2827_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2828_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2827_, v___x_2823_);
v___x_2829_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2814_);
lean_ctor_set(v___x_2829_, 1, v___x_2825_);
v___x_2830_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2831_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2832_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2833_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2814_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2835_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2836_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2816_, 4);
lean_inc_n(v_a_2818_, 4);
v___x_2837_ = l_Lean_addMacroScope(v_a_2818_, v___x_2836_, v_a_2816_);
v___x_2838_ = lean_box(0);
v___x_2839_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2840_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2814_);
lean_ctor_set(v___x_2840_, 1, v___x_2835_);
lean_ctor_set(v___x_2840_, 2, v___x_2837_);
lean_ctor_set(v___x_2840_, 3, v___x_2839_);
v___x_2841_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2666_);
v___x_2842_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2834_, v___x_2840_, v___x_2841_);
v___x_2843_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2831_, v___x_2833_, v___x_2842_);
v___x_2844_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2830_, v___x_2823_, v___x_2843_);
v___x_2845_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2847_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2814_);
lean_ctor_set(v___x_2847_, 1, v___x_2846_);
v___x_2848_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2850_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2851_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2852_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2853_ = l_Lean_addMacroScope(v_a_2818_, v___x_2852_, v_a_2816_);
v___x_2854_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2814_);
lean_ctor_set(v___x_2854_, 1, v___x_2851_);
lean_ctor_set(v___x_2854_, 2, v___x_2853_);
lean_ctor_set(v___x_2854_, 3, v___x_2838_);
v___x_2855_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2850_, v___x_2854_, v___x_2823_);
v___x_2856_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2857_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2858_ = l_Lean_addMacroScope(v_a_2818_, v___x_2857_, v_a_2816_);
v___x_2859_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2814_);
lean_ctor_set(v___x_2859_, 1, v___x_2856_);
lean_ctor_set(v___x_2859_, 2, v___x_2858_);
lean_ctor_set(v___x_2859_, 3, v___x_2838_);
lean_inc_ref(v___x_2859_);
v___x_2860_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2859_);
v___x_2861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2862_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2814_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
v___x_2864_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2814_);
lean_ctor_set(v___x_2866_, 1, v___x_2864_);
v___x_2867_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2868_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2867_, v___x_2823_, v___x_2859_);
v___x_2869_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2868_);
v___x_2870_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2871_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2814_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_2873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v_sz_2874_ = lean_array_size(v_a_2811_);
v___x_2875_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2874_, v___x_2809_, v_a_2811_);
v___x_2876_ = l_Array_append___redArg(v___x_2822_, v___x_2875_);
lean_dec_ref(v___x_2875_);
v___x_2877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
v___x_2878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2814_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__30));
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__31));
v___x_2881_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2814_);
lean_ctor_set(v___x_2881_, 1, v___x_2880_);
v___x_2882_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2879_, v___x_2881_);
v___x_2883_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2882_);
v___x_2884_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2883_);
v___x_2885_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2814_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__33, &l_Lasm_JS_Meta_mkFromJS___closed__33_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__33);
v___x_2888_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__35));
v___x_2889_ = l_Lean_addMacroScope(v_a_2818_, v___x_2888_, v_a_2816_);
v___x_2890_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__39));
v___x_2891_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2814_);
lean_ctor_set(v___x_2891_, 1, v___x_2887_);
lean_ctor_set(v___x_2891_, 2, v___x_2889_);
lean_ctor_set(v___x_2891_, 3, v___x_2890_);
v___x_2892_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
v___x_2893_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__40));
v___x_2894_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2814_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
v___x_2895_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2892_, v___x_2894_);
v___x_2896_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2821_, v___x_2895_);
v___x_2897_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2834_, v___x_2891_, v___x_2896_);
v___x_2898_ = l_Lean_Syntax_node4(v___x_2814_, v___x_2873_, v___x_2878_, v___x_2884_, v___x_2886_, v___x_2897_);
v___x_2899_ = lean_array_push(v___x_2876_, v___x_2898_);
v___x_2900_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2814_);
lean_ctor_set(v___x_2900_, 1, v___x_2821_);
lean_ctor_set(v___x_2900_, 2, v___x_2899_);
v___x_2901_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2872_, v___x_2900_);
v___x_2902_ = l_Lean_Syntax_node6(v___x_2814_, v___x_2865_, v___x_2866_, v___x_2823_, v___x_2823_, v___x_2869_, v___x_2871_, v___x_2901_);
lean_inc_ref(v___x_2863_);
v___x_2903_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2861_, v___x_2863_, v___x_2823_, v___x_2902_);
v___x_2904_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2821_, v___x_2860_, v___x_2823_, v___x_2903_);
v___x_2905_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2849_, v___x_2855_, v___x_2904_);
v___x_2906_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2907_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2908_ = l_Lean_addMacroScope(v_a_2818_, v___x_2907_, v_a_2816_);
v___x_2909_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2814_);
lean_ctor_set(v___x_2909_, 1, v___x_2906_);
lean_ctor_set(v___x_2909_, 2, v___x_2908_);
lean_ctor_set(v___x_2909_, 3, v___x_2838_);
v___x_2910_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2850_, v___x_2909_, v___x_2823_);
v___x_2911_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2861_, v___x_2863_, v___x_2823_, v___x_2669_);
v___x_2912_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2821_, v___x_2823_, v___x_2823_, v___x_2911_);
v___x_2913_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2849_, v___x_2910_, v___x_2912_);
v___x_2914_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2821_, v___x_2905_, v___x_2823_, v___x_2913_);
v___x_2915_ = l_Lean_Syntax_node1(v___x_2814_, v___x_2848_, v___x_2914_);
v___x_2916_ = l_Lean_Syntax_node3(v___x_2814_, v___x_2845_, v___x_2847_, v___x_2915_, v___x_2823_);
v___x_2917_ = l_Lean_Syntax_node6(v___x_2814_, v___x_2826_, v___x_2828_, v___x_2829_, v___x_2823_, v___x_2823_, v___x_2844_, v___x_2916_);
v___x_2918_ = l_Lean_Syntax_node2(v___x_2814_, v___x_2819_, v___x_2824_, v___x_2917_);
v___x_2919_ = l_Lean_Elab_Command_elabCommand(v___x_2918_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2927_; 
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2927_ == 0)
{
lean_object* v_unused_2928_; 
v_unused_2928_ = lean_ctor_get(v___x_2919_, 0);
lean_dec(v_unused_2928_);
v___x_2921_ = v___x_2919_;
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
else
{
lean_dec(v___x_2919_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2927_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2923_; lean_object* v___x_2925_; 
v___x_2923_ = lean_box(v___x_2658_);
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_2923_);
v___x_2925_ = v___x_2921_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v___x_2923_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
v_a_2929_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2919_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2919_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v___x_2669_);
lean_dec(v___x_2666_);
v_a_2941_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2810_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2810_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
lean_dec(v_a_2806_);
lean_dec(v___x_2669_);
lean_dec(v___x_2666_);
v___x_2949_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__42, &l_Lasm_JS_Meta_mkFromJS___closed__42_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__42);
lean_inc(v_declName_2664_);
v___x_2950_ = l_Lean_MessageData_ofName(v_declName_2664_);
v___x_2951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2949_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
v___x_2952_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2953_, v_a_2653_, v_a_2654_);
return v___x_2954_;
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2962_; 
lean_dec(v___x_2669_);
lean_dec(v___x_2666_);
v_a_2955_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2957_ = v___x_2805_;
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2805_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2955_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v_a_2963_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2665_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2665_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object* v_declNames_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lasm_JS_Meta_mkFromJS(v_declNames_2971_, v_a_2972_, v_a_2973_);
lean_dec(v_a_2973_);
lean_dec_ref(v_a_2972_);
lean_dec_ref(v_declNames_2971_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2979_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
v___x_2980_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2981_ = l_Lean_Elab_registerDerivingHandler(v___x_2979_, v___x_2980_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec_ref_known(v___x_2981_, 1);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
v___x_2983_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2984_ = l_Lean_Elab_registerDerivingHandler(v___x_2982_, v___x_2983_);
return v___x_2984_;
}
else
{
return v___x_2981_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object* v_a_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
return v_res_2986_;
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
res = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_();
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
