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
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getBinderInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_getMkMatcherInputInContext_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
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
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed, .m_arity = 13, .m_num_fixed = 7, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_lasmJsRecord___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 80, 239, 79, 71, 173, 245, 131)}};
static const lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__value)} };
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
static lean_once_cell_t l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_0),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_1),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__95_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96_value;
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
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__8_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_203_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2____boxed(lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_();
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(lean_object* v_as_206_, size_t v_sz_207_, size_t v_i_208_, lean_object* v_b_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_a_215_; uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_lt(v_i_208_, v_sz_207_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v_b_209_);
return v___x_220_;
}
else
{
lean_object* v_a_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_a_221_ = lean_array_uget_borrowed(v_as_206_, v_i_208_);
v___x_222_ = l_Lean_Expr_fvarId_x21(v_a_221_);
v___x_223_ = l_Lean_FVarId_getBinderInfo___redArg(v___x_222_, v___y_210_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; uint8_t v___x_225_; uint8_t v___x_226_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref_known(v___x_223_, 1);
v___x_225_ = lean_unbox(v_a_224_);
lean_dec(v_a_224_);
v___x_226_ = l_Lean_BinderInfo_isExplicit(v___x_225_);
if (v___x_226_ == 0)
{
v_a_215_ = v_b_209_;
goto v___jp_214_;
}
else
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_unsigned_to_nat(1u);
v___x_228_ = lean_nat_add(v_b_209_, v___x_227_);
lean_dec(v_b_209_);
v_a_215_ = v___x_228_;
goto v___jp_214_;
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_b_209_);
v_a_229_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_223_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_223_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
v___jp_214_:
{
size_t v___x_216_; size_t v___x_217_; 
v___x_216_ = ((size_t)1ULL);
v___x_217_ = lean_usize_add(v_i_208_, v___x_216_);
v_i_208_ = v___x_217_;
v_b_209_ = v_a_215_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg___boxed(lean_object* v_as_237_, lean_object* v_sz_238_, lean_object* v_i_239_, lean_object* v_b_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
size_t v_sz_boxed_245_; size_t v_i_boxed_246_; lean_object* v_res_247_; 
v_sz_boxed_245_ = lean_unbox_usize(v_sz_238_);
lean_dec(v_sz_238_);
v_i_boxed_246_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_res_247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_237_, v_sz_boxed_245_, v_i_boxed_246_, v_b_240_, v___y_241_, v___y_242_, v___y_243_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec_ref(v_as_237_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(lean_object* v_xs_248_, lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_n_255_; size_t v_sz_256_; size_t v___x_257_; lean_object* v___x_258_; 
v_n_255_ = lean_unsigned_to_nat(0u);
v_sz_256_ = lean_array_size(v_xs_248_);
v___x_257_ = ((size_t)0ULL);
v___x_258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_xs_248_, v_sz_256_, v___x_257_, v_n_255_, v___y_250_, v___y_252_, v___y_253_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0___boxed(lean_object* v_xs_259_, lean_object* v_x_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___lam__0(v_xs_259_, v_x_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec_ref(v_x_260_);
lean_dec_ref(v_xs_259_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(lean_object* v_type_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___f_274_; uint8_t v___x_275_; lean_object* v___x_276_; 
v___f_274_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___closed__0));
v___x_275_ = 0;
v___x_276_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_getMkMatcherInputInContext_spec__6___redArg(v_type_268_, v___f_274_, v___x_275_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity___boxed(lean_object* v_type_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v_type_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(lean_object* v_as_284_, size_t v_sz_285_, size_t v_i_286_, lean_object* v_b_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___redArg(v_as_284_, v_sz_285_, v_i_286_, v_b_287_, v___y_288_, v___y_290_, v___y_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0___boxed(lean_object* v_as_294_, lean_object* v_sz_295_, lean_object* v_i_296_, lean_object* v_b_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
size_t v_sz_boxed_303_; size_t v_i_boxed_304_; lean_object* v_res_305_; 
v_sz_boxed_303_ = lean_unbox_usize(v_sz_295_);
lean_dec(v_sz_295_);
v_i_boxed_304_ = lean_unbox_usize(v_i_296_);
lean_dec(v_i_296_);
v_res_305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity_spec__0(v_as_294_, v_sz_boxed_303_, v_i_boxed_304_, v_b_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec_ref(v_as_294_);
return v_res_305_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_350_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
return v___x_354_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_unsigned_to_nat(32u);
v___x_358_ = lean_mk_empty_array_with_capacity(v___x_357_);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_361_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
lean_ctor_set(v___x_361_, 2, v___x_360_);
lean_ctor_set(v___x_361_, 3, v___x_360_);
lean_ctor_set(v___x_361_, 4, v___x_360_);
lean_ctor_set(v___x_361_, 5, v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
lean_ctor_set(v___x_363_, 2, v___x_362_);
lean_ctor_set(v___x_363_, 3, v___x_362_);
lean_ctor_set(v___x_363_, 4, v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object* v___x_364_, lean_object* v___x_365_, lean_object* v___x_366_, lean_object* v___x_367_, lean_object* v___x_368_, lean_object* v___x_369_, lean_object* v___x_370_, lean_object* v_decl_371_, lean_object* v_stx_372_, uint8_t v_x_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; uint8_t v___y_382_; lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = l_Lean_Name_mkStr4(v___x_364_, v___x_365_, v___x_366_, v___x_367_);
lean_inc(v_stx_372_);
v___x_411_ = l_Lean_Syntax_isOfKind(v_stx_372_, v___x_410_);
lean_dec(v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; 
lean_dec(v_stx_372_);
lean_dec(v_decl_371_);
lean_dec(v___x_370_);
lean_dec(v___x_369_);
v___x_412_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_412_;
}
else
{
lean_object* v___x_413_; lean_object* v_m_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v_m_414_ = l_Lean_Syntax_getArg(v_stx_372_, v___x_413_);
v___x_415_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
lean_inc(v_m_414_);
v___x_416_ = l_Lean_Syntax_isOfKind(v_m_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; 
lean_dec(v_m_414_);
lean_dec(v_stx_372_);
lean_dec(v_decl_371_);
lean_dec(v___x_370_);
lean_dec(v___x_369_);
v___x_417_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_417_;
}
else
{
lean_object* v_p_418_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v_a_422_; uint8_t v___x_426_; lean_object* v_c_428_; lean_object* v___y_429_; lean_object* v___y_430_; 
v_p_418_ = l_Lean_Syntax_getArg(v_stx_372_, v___x_368_);
lean_inc(v_p_418_);
v___x_426_ = l_Lean_Syntax_isOfKind(v_p_418_, v___x_415_);
if (v___x_426_ == 0)
{
lean_object* v___x_477_; 
lean_dec(v_p_418_);
lean_dec(v_m_414_);
lean_dec(v_stx_372_);
lean_dec(v_decl_371_);
lean_dec(v___x_370_);
lean_dec(v___x_369_);
v___x_477_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_477_;
}
else
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_478_ = lean_unsigned_to_nat(3u);
v___x_479_ = l_Lean_Syntax_getArg(v_stx_372_, v___x_478_);
lean_dec(v_stx_372_);
v___x_480_ = l_Lean_Syntax_isNone(v___x_479_);
if (v___x_480_ == 0)
{
uint8_t v___x_481_; 
lean_inc(v___x_479_);
v___x_481_ = l_Lean_Syntax_matchesNull(v___x_479_, v___x_413_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; 
lean_dec(v___x_479_);
lean_dec(v_p_418_);
lean_dec(v_m_414_);
lean_dec(v_decl_371_);
lean_dec(v___x_370_);
lean_dec(v___x_369_);
v___x_482_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_DerivingClassView_ofSyntax_spec__0___redArg();
return v___x_482_;
}
else
{
lean_object* v_c_483_; lean_object* v___x_484_; 
v_c_483_ = l_Lean_Syntax_getArg(v___x_479_, v___x_370_);
lean_dec(v___x_479_);
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v_c_483_);
v_c_428_ = v___x_484_;
v___y_429_ = v___y_374_;
v___y_430_ = v___y_375_;
goto v___jp_427_;
}
}
else
{
lean_object* v___x_485_; 
lean_dec(v___x_479_);
v___x_485_ = lean_box(0);
v_c_428_ = v___x_485_;
v___y_429_ = v___y_374_;
v___y_430_ = v___y_375_;
goto v___jp_427_;
}
}
v___jp_419_:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = l_Lean_TSyntax_getString(v_m_414_);
lean_dec(v_m_414_);
v___x_424_ = l_Lean_TSyntax_getString(v_p_418_);
lean_dec(v_p_418_);
if (lean_obj_tag(v___y_420_) == 0)
{
uint8_t v___x_425_; 
v___x_425_ = 0;
v___y_378_ = v___x_424_;
v___y_379_ = v_a_422_;
v___y_380_ = v___y_421_;
v___y_381_ = v___x_423_;
v___y_382_ = v___x_425_;
goto v___jp_377_;
}
else
{
lean_dec_ref_known(v___y_420_, 1);
v___y_378_ = v___x_424_;
v___y_379_ = v_a_422_;
v___y_380_ = v___y_421_;
v___y_381_ = v___x_423_;
v___y_382_ = v___x_411_;
goto v___jp_377_;
}
}
v___jp_427_:
{
lean_object* v___x_431_; 
lean_inc(v_decl_371_);
v___x_431_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_DeprecatedArg_0__Lean_Elab_initFn_00___x40_Lean_Elab_DeprecatedArg_3249530483____hygCtx___hyg_2__spec__4(v_decl_371_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; uint8_t v___x_434_; uint8_t v___x_435_; uint8_t v___x_436_; uint8_t v___x_437_; lean_object* v___x_438_; uint64_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; size_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v___x_431_, 1);
v___x_433_ = l_Lean_ConstantInfo_type(v_a_432_);
lean_dec(v_a_432_);
v___x_434_ = 0;
v___x_435_ = 1;
v___x_436_ = 0;
v___x_437_ = 2;
v___x_438_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_438_, 0, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 1, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 2, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 3, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 4, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 5, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 6, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 7, v___x_434_);
lean_ctor_set_uint8(v___x_438_, 8, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 9, v___x_435_);
lean_ctor_set_uint8(v___x_438_, 10, v___x_436_);
lean_ctor_set_uint8(v___x_438_, 11, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 12, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 13, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 14, v___x_437_);
lean_ctor_set_uint8(v___x_438_, 15, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 16, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 17, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 18, v___x_411_);
lean_ctor_set_uint8(v___x_438_, 19, v___x_434_);
v___x_439_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_438_);
v___x_440_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set_uint64(v___x_440_, sizeof(void*)*1, v___x_439_);
v___x_441_ = lean_box(1);
v___x_442_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_443_ = lean_unsigned_to_nat(32u);
v___x_444_ = lean_mk_empty_array_with_capacity(v___x_443_);
v___x_445_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__4_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_446_ = ((size_t)5ULL);
lean_inc_n(v___x_370_, 6);
v___x_447_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_444_);
lean_ctor_set(v___x_447_, 2, v___x_370_);
lean_ctor_set(v___x_447_, 3, v___x_370_);
lean_ctor_set_usize(v___x_447_, 4, v___x_446_);
lean_inc_ref(v___x_447_);
v___x_448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_448_, 0, v___x_442_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
lean_ctor_set(v___x_448_, 2, v___x_441_);
v___x_449_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_450_ = lean_box(0);
v___x_451_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_451_, 0, v___x_440_);
lean_ctor_set(v___x_451_, 1, v___x_441_);
lean_ctor_set(v___x_451_, 2, v___x_448_);
lean_ctor_set(v___x_451_, 3, v___x_449_);
lean_ctor_set(v___x_451_, 4, v___x_450_);
lean_ctor_set(v___x_451_, 5, v___x_370_);
lean_ctor_set(v___x_451_, 6, v___x_450_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*7, v___x_434_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*7 + 1, v___x_434_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*7 + 2, v___x_434_);
lean_ctor_set_uint8(v___x_451_, sizeof(void*)*7 + 3, v___x_426_);
v___x_452_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_452_, 0, v___x_370_);
lean_ctor_set(v___x_452_, 1, v___x_370_);
lean_ctor_set(v___x_452_, 2, v___x_370_);
lean_ctor_set(v___x_452_, 3, v___x_370_);
lean_ctor_set(v___x_452_, 4, v___x_442_);
lean_ctor_set(v___x_452_, 5, v___x_442_);
lean_ctor_set(v___x_452_, 6, v___x_442_);
lean_ctor_set(v___x_452_, 7, v___x_442_);
lean_ctor_set(v___x_452_, 8, v___x_442_);
lean_ctor_set(v___x_452_, 9, v___x_442_);
lean_ctor_set(v___x_452_, 10, v___x_442_);
v___x_453_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__5_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_454_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__6_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_455_, 0, v___x_452_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_441_);
lean_ctor_set(v___x_455_, 3, v___x_447_);
lean_ctor_set(v___x_455_, 4, v___x_454_);
v___x_456_ = lean_st_mk_ref(v___x_455_);
v___x_457_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v___x_433_, v___x_451_, v___x_456_, v___y_429_, v___y_430_);
lean_dec_ref_known(v___x_451_, 7);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_459_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref_known(v___x_457_, 1);
v___x_459_ = lean_st_ref_get(v___x_456_);
lean_dec(v___x_456_);
lean_dec(v___x_459_);
v___y_420_ = v_c_428_;
v___y_421_ = v___y_430_;
v_a_422_ = v_a_458_;
goto v___jp_419_;
}
else
{
lean_dec(v___x_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_460_; 
v_a_460_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_460_);
lean_dec_ref_known(v___x_457_, 1);
v___y_420_ = v_c_428_;
v___y_421_ = v___y_430_;
v_a_422_ = v_a_460_;
goto v___jp_419_;
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec(v_c_428_);
lean_dec(v_p_418_);
lean_dec(v_m_414_);
lean_dec(v_decl_371_);
lean_dec(v___x_369_);
v_a_461_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_457_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_457_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
lean_dec(v_c_428_);
lean_dec(v_p_418_);
lean_dec(v_m_414_);
lean_dec(v_decl_371_);
lean_dec(v___x_370_);
lean_dec(v___x_369_);
v_a_469_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_431_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_431_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
}
v___jp_377_:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v_env_385_; lean_object* v_nextMacroScope_386_; lean_object* v_ngen_387_; lean_object* v_auxDeclNGen_388_; lean_object* v_traceState_389_; lean_object* v_messages_390_; lean_object* v_infoState_391_; lean_object* v_snapshotTasks_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_408_; 
v___x_383_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_383_, 0, v_decl_371_);
lean_ctor_set(v___x_383_, 1, v___y_381_);
lean_ctor_set(v___x_383_, 2, v___y_378_);
lean_ctor_set(v___x_383_, 3, v___y_379_);
lean_ctor_set_uint8(v___x_383_, sizeof(void*)*4, v___y_382_);
v___x_384_ = lean_st_ref_take(v___y_380_);
v_env_385_ = lean_ctor_get(v___x_384_, 0);
v_nextMacroScope_386_ = lean_ctor_get(v___x_384_, 1);
v_ngen_387_ = lean_ctor_get(v___x_384_, 2);
v_auxDeclNGen_388_ = lean_ctor_get(v___x_384_, 3);
v_traceState_389_ = lean_ctor_get(v___x_384_, 4);
v_messages_390_ = lean_ctor_get(v___x_384_, 6);
v_infoState_391_ = lean_ctor_get(v___x_384_, 7);
v_snapshotTasks_392_ = lean_ctor_get(v___x_384_, 8);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_384_, 5);
lean_dec(v_unused_409_);
v___x_394_ = v___x_384_;
v_isShared_395_ = v_isSharedCheck_408_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_snapshotTasks_392_);
lean_inc(v_infoState_391_);
lean_inc(v_messages_390_);
lean_inc(v_traceState_389_);
lean_inc(v_auxDeclNGen_388_);
lean_inc(v_ngen_387_);
lean_inc(v_nextMacroScope_386_);
lean_inc(v_env_385_);
lean_dec(v___x_384_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_408_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v_toEnvExtension_397_; lean_object* v_asyncMode_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_396_ = l_Lasm_JS_Meta_bindingExtension;
v_toEnvExtension_397_ = lean_ctor_get(v___x_396_, 0);
v_asyncMode_398_ = lean_ctor_get(v_toEnvExtension_397_, 2);
v___x_399_ = lean_box(0);
v___x_400_ = l_Lasm_JS_Meta_BindingInfo_json(v___x_383_);
v___x_401_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_396_, v_env_385_, v___x_400_, v_asyncMode_398_, v___x_369_);
v___x_402_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 5, v___x_402_);
lean_ctor_set(v___x_394_, 0, v___x_401_);
v___x_404_ = v___x_394_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_nextMacroScope_386_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_ngen_387_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_auxDeclNGen_388_);
lean_ctor_set(v_reuseFailAlloc_407_, 4, v_traceState_389_);
lean_ctor_set(v_reuseFailAlloc_407_, 5, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_407_, 6, v_messages_390_);
lean_ctor_set(v_reuseFailAlloc_407_, 7, v_infoState_391_);
lean_ctor_set(v_reuseFailAlloc_407_, 8, v_snapshotTasks_392_);
v___x_404_ = v_reuseFailAlloc_407_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_st_ref_put(v___y_380_, v___x_404_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_399_);
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v___x_486_, lean_object* v___x_487_, lean_object* v___x_488_, lean_object* v___x_489_, lean_object* v___x_490_, lean_object* v___x_491_, lean_object* v___x_492_, lean_object* v_decl_493_, lean_object* v_stx_494_, lean_object* v_x_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
uint8_t v_x_1744__boxed_499_; lean_object* v_res_500_; 
v_x_1744__boxed_499_ = lean_unbox(v_x_495_);
v_res_500_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(v___x_486_, v___x_487_, v___x_488_, v___x_489_, v___x_490_, v___x_491_, v___x_492_, v_decl_493_, v_stx_494_, v_x_1744__boxed_499_, v___y_496_, v___y_497_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___x_490_);
return v_res_500_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__0_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_503_ = l_Lean_stringToMessageData(v___x_502_);
return v___x_503_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__2_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_506_ = l_Lean_stringToMessageData(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(lean_object* v___x_507_, lean_object* v_decl_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_513_ = l_Lean_MessageData_ofName(v___x_507_);
v___x_514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1___closed__3_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = l_Lean_throwError___at___00__private_Lean_Elab_Command_0__Lean_liftCommandElabMCore_spec__1___redArg(v___x_516_, v___y_509_, v___y_510_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v___x_518_, lean_object* v_decl_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___lam__1_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(v___x_518_, v_decl_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v_decl_519_);
return v_res_523_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_566_ = lean_unsigned_to_nat(2396663746u);
v___x_567_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__15_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_568_ = l_Lean_Name_num___override(v___x_567_, v___x_566_);
return v___x_568_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__17_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_571_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__16_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_572_ = l_Lean_Name_str___override(v___x_571_, v___x_570_);
return v___x_572_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__19_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_575_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__18_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_576_ = l_Lean_Name_str___override(v___x_575_, v___x_574_);
return v___x_576_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = lean_unsigned_to_nat(2u);
v___x_578_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__20_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_579_ = l_Lean_Name_num___override(v___x_578_, v___x_577_);
return v___x_579_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_593_ = 0;
v___x_594_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__25_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_595_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__23_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_596_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__21_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_597_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_595_);
lean_ctor_set(v___x_597_, 2, v___x_594_);
lean_ctor_set_uint8(v___x_597_, sizeof(void*)*3, v___x_593_);
return v___x_597_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___f_598_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__24_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___f_599_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__22_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_));
v___x_600_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__26_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v___f_599_);
lean_ctor_set(v___x_601_, 2, v___f_598_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__27_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_);
v___x_604_ = l_Lean_registerBuiltinAttribute(v___x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2____boxed(lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_2396663746____hygCtx___hyg_2_();
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(lean_object* v_____do__lift_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
uint8_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = 0;
v___x_634_ = l_Lean_SourceInfo_fromRef(v_____do__lift_630_, v___x_633_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___y_632_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0___boxed(lean_object* v_____do__lift_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_____do__lift_636_, v___y_637_, v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v_____do__lift_636_);
return v_res_639_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_656_ = l_String_toRawSubstring_x27(v___x_655_);
return v___x_656_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__9));
v___x_661_ = l_String_toRawSubstring_x27(v___x_660_);
return v___x_661_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__27));
v___x_693_ = l_String_toRawSubstring_x27(v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__42));
v___x_723_ = l_String_toRawSubstring_x27(v___x_722_);
return v___x_723_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__48));
v___x_730_ = l_String_toRawSubstring_x27(v___x_729_);
return v___x_730_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__57));
v___x_741_ = l_String_toRawSubstring_x27(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10));
v___x_746_ = l_String_toRawSubstring_x27(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13));
v___x_750_ = l_String_toRawSubstring_x27(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16));
v___x_754_ = l_String_toRawSubstring_x27(v___x_753_);
return v___x_754_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__68));
v___x_762_ = l_Lean_mkCIdent(v___x_761_);
return v___x_762_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__70));
v___x_767_ = l_Lean_mkCIdent(v___x_766_);
return v___x_767_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74(void){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Array_mkArray0___redArg();
return v___x_771_;
}
}
static lean_object* _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_822_ = lean_string_utf8_byte_size(v___x_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(lean_object* v_x_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v_record_837_; lean_object* v___y_838_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_843_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_844_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_845_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
lean_inc(v_x_829_);
v___x_846_ = l_Lean_Syntax_isOfKind(v_x_829_, v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v_x_829_);
v___x_847_ = lean_box(1);
v___x_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v_a_831_);
return v___x_848_;
}
else
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_849_ = lean_unsigned_to_nat(0u);
v___x_850_ = l_Lean_Syntax_getArg(v_x_829_, v___x_849_);
v___x_851_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
lean_inc(v___x_850_);
v___x_852_ = l_Lean_Syntax_isOfKind(v___x_850_, v___x_851_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; lean_object* v___x_854_; 
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_853_ = lean_box(1);
v___x_854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v_a_831_);
return v___x_854_;
}
else
{
lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; uint8_t v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; uint8_t v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; uint8_t v_fst_1149_; lean_object* v_snd_1150_; lean_object* v_doc_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = l_Lean_Syntax_getArg(v___x_850_, v___x_849_);
v___x_1296_ = l_Lean_Syntax_isNone(v___x_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1295_);
v___x_1298_ = l_Lean_Syntax_matchesNull(v___x_1295_, v___x_1297_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_dec(v___x_1295_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1299_ = lean_box(1);
v___x_1300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
lean_ctor_set(v___x_1300_, 1, v_a_831_);
return v___x_1300_;
}
else
{
lean_object* v_doc_1301_; 
v_doc_1301_ = l_Lean_Syntax_getArg(v___x_1295_, v___x_849_);
lean_dec(v___x_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__96));
lean_inc(v_doc_1301_);
v___x_1305_ = l_Lean_Syntax_isOfKind(v_doc_1301_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
lean_dec(v_doc_1301_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1306_ = lean_box(1);
v___x_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v_a_831_);
return v___x_1307_;
}
else
{
goto v___jp_1302_;
}
}
else
{
goto v___jp_1302_;
}
v___jp_1302_:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_doc_1301_);
v_doc_1168_ = v___x_1303_;
v___y_1169_ = v_a_830_;
v___y_1170_ = v_a_831_;
goto v___jp_1167_;
}
}
}
else
{
lean_object* v___x_1308_; 
lean_dec(v___x_1295_);
v___x_1308_ = lean_box(0);
v_doc_1168_ = v___x_1308_;
v___y_1169_ = v_a_830_;
v___y_1170_ = v_a_831_;
goto v___jp_1167_;
}
v___jp_855_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
lean_inc(v___y_903_);
lean_inc_n(v___y_856_, 14);
lean_inc_n(v___y_872_, 2);
lean_inc(v___y_898_);
lean_inc_n(v___y_868_, 23);
v___x_904_ = l_Lean_Syntax_node3(v___y_868_, v___y_898_, v___y_872_, v___y_856_, v___y_903_);
lean_inc_n(v___y_902_, 5);
v___x_905_ = l_Lean_Syntax_node3(v___y_868_, v___y_902_, v___y_856_, v___y_856_, v___x_904_);
lean_inc(v___y_901_);
v___x_906_ = l_Lean_Syntax_node2(v___y_868_, v___y_901_, v___y_867_, v___x_905_);
v___x_907_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_908_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__7);
v___x_909_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__8));
lean_inc_n(v___y_883_, 2);
lean_inc_n(v___y_900_, 2);
v___x_910_ = l_Lean_addMacroScope(v___y_900_, v___x_909_, v___y_883_);
lean_inc_n(v___y_876_, 2);
v___x_911_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_911_, 0, v___y_868_);
lean_ctor_set(v___x_911_, 1, v___x_908_);
lean_ctor_set(v___x_911_, 2, v___x_910_);
lean_ctor_set(v___x_911_, 3, v___y_876_);
v___x_912_ = l_Lean_Syntax_node2(v___y_868_, v___y_864_, v___x_911_, v___y_856_);
v___x_913_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__10);
lean_inc_ref(v___y_858_);
lean_inc_ref(v___y_884_);
v___x_914_ = l_Lean_Name_mkStr4(v___y_884_, v___y_858_, v___y_897_, v___x_907_);
lean_inc(v___x_914_);
v___x_915_ = l_Lean_addMacroScope(v___y_900_, v___x_914_, v___y_883_);
lean_inc(v___y_899_);
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___y_899_);
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
lean_ctor_set(v___x_917_, 1, v___y_876_);
v___x_918_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_918_, 0, v___y_868_);
lean_ctor_set(v___x_918_, 1, v___x_913_);
lean_ctor_set(v___x_918_, 2, v___x_915_);
lean_ctor_set(v___x_918_, 3, v___x_917_);
lean_inc(v___y_866_);
v___x_919_ = l_Lean_Syntax_node1(v___y_868_, v___y_902_, v___y_866_);
lean_inc(v___y_874_);
v___x_920_ = l_Lean_Syntax_node2(v___y_868_, v___y_874_, v___x_918_, v___x_919_);
v___x_921_ = l_Lean_Syntax_node3(v___y_868_, v___y_898_, v___y_872_, v___y_856_, v___x_920_);
v___x_922_ = l_Lean_Syntax_node3(v___y_868_, v___y_902_, v___y_856_, v___y_856_, v___x_921_);
v___x_923_ = l_Lean_Syntax_node2(v___y_868_, v___y_901_, v___x_912_, v___x_922_);
v___x_924_ = lean_unsigned_to_nat(9u);
v___x_925_ = lean_mk_empty_array_with_capacity(v___x_924_);
v___x_926_ = lean_array_push(v___x_925_, v___y_881_);
lean_inc_n(v___y_865_, 3);
v___x_927_ = lean_array_push(v___x_926_, v___y_865_);
v___x_928_ = lean_array_push(v___x_927_, v___y_891_);
v___x_929_ = lean_array_push(v___x_928_, v___y_865_);
v___x_930_ = lean_array_push(v___x_929_, v___y_877_);
v___x_931_ = lean_array_push(v___x_930_, v___y_865_);
v___x_932_ = lean_array_push(v___x_931_, v___x_906_);
v___x_933_ = lean_array_push(v___x_932_, v___y_865_);
v___x_934_ = lean_array_push(v___x_933_, v___x_923_);
v___x_935_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_935_, 0, v___y_868_);
lean_ctor_set(v___x_935_, 1, v___y_902_);
lean_ctor_set(v___x_935_, 2, v___x_934_);
v___x_936_ = l_Lean_Syntax_node1(v___y_868_, v___y_873_, v___x_935_);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__11));
lean_inc_ref(v___y_886_);
v___x_938_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_886_, v___x_937_);
v___x_939_ = l_Lean_Syntax_node1(v___y_868_, v___x_938_, v___y_856_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_941_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_941_, 0, v___y_868_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_Syntax_node6(v___y_868_, v___y_869_, v___y_892_, v___y_856_, v___x_936_, v___x_939_, v___y_856_, v___x_941_);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_944_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_945_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_945_, 0, v___y_868_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = l_Lean_Syntax_node3(v___y_868_, v___x_943_, v___x_945_, v___y_856_, v___y_889_);
v___x_947_ = l_Lean_Syntax_node3(v___y_868_, v___y_902_, v___y_866_, v___x_942_, v___x_946_);
v___x_948_ = l_Lean_Syntax_node2(v___y_868_, v___y_874_, v___y_875_, v___x_947_);
v___x_949_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_950_ = l_Lean_Syntax_node2(v___y_868_, v___x_949_, v___y_856_, v___y_856_);
lean_inc(v___y_862_);
v___x_951_ = l_Lean_Syntax_node4(v___y_868_, v___y_862_, v___y_872_, v___x_948_, v___x_950_, v___y_856_);
lean_inc(v___y_895_);
v___x_952_ = l_Lean_Syntax_node5(v___y_868_, v___y_895_, v___y_896_, v___y_887_, v___y_863_, v___x_951_, v___y_856_);
v___x_953_ = l_Lean_Syntax_node2(v___y_868_, v___x_845_, v___y_888_, v___x_952_);
if (v___y_871_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_954_ = l_Lean_SourceInfo_fromRef(v___y_885_, v___y_871_);
v___x_955_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_956_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc_n(v___x_954_, 10);
v___x_957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_954_);
lean_ctor_set(v___x_957_, 1, v___x_955_);
v___x_958_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
v___x_959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_954_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
lean_inc_ref(v___y_894_);
lean_inc_n(v___y_902_, 3);
v___x_960_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_960_, 0, v___x_954_);
lean_ctor_set(v___x_960_, 1, v___y_902_);
lean_ctor_set(v___x_960_, 2, v___y_894_);
lean_inc_ref(v___x_960_);
lean_inc(v___y_890_);
v___x_961_ = l_Lean_Syntax_node1(v___x_954_, v___y_890_, v___x_960_);
v___x_962_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_882_);
lean_inc_ref(v___y_858_);
lean_inc_ref(v___y_884_);
v___x_963_ = l_Lean_Name_mkStr4(v___y_884_, v___y_858_, v___y_882_, v___x_962_);
v___x_964_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_954_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Syntax_node4(v___x_954_, v___x_963_, v___x_965_, v___y_857_, v___y_879_, v___x_960_);
lean_inc(v___y_860_);
v___x_967_ = l_Lean_Syntax_node2(v___x_954_, v___y_860_, v___x_961_, v___x_966_);
v___x_968_ = l_Lean_Syntax_node1(v___x_954_, v___y_902_, v___x_967_);
lean_inc_ref(v___y_893_);
v___x_969_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_954_);
lean_ctor_set(v___x_969_, 1, v___y_893_);
v___x_970_ = l_Lean_Syntax_node1(v___x_954_, v___y_902_, v___y_870_);
v___x_971_ = l_Lean_Syntax_node5(v___x_954_, v___x_956_, v___x_957_, v___x_959_, v___x_968_, v___x_969_, v___x_970_);
v___y_833_ = v___y_878_;
v___y_834_ = v___y_861_;
v___y_835_ = v___x_953_;
v___y_836_ = v___y_902_;
v_record_837_ = v___x_971_;
v___y_838_ = v___y_859_;
goto v___jp_832_;
}
else
{
lean_object* v___x_972_; lean_object* v_a_973_; lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_1000_; 
v___x_972_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v___y_885_, v___y_880_, v___y_859_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_a_974_ = lean_ctor_get(v___x_972_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_976_ = v___x_972_;
v_isShared_977_ = v_isSharedCheck_1000_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_1000_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_978_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__18));
v___x_979_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__19));
lean_inc(v_a_973_);
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 2);
lean_ctor_set(v___x_976_, 1, v___x_978_);
v___x_981_ = v___x_976_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_973_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v___x_978_);
v___x_981_ = v_reuseFailAlloc_999_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_982_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__20));
lean_inc_n(v_a_973_, 11);
v___x_983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_983_, 0, v_a_973_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
lean_inc_ref(v___y_894_);
lean_inc_n(v___y_902_, 4);
v___x_984_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_984_, 0, v_a_973_);
lean_ctor_set(v___x_984_, 1, v___y_902_);
lean_ctor_set(v___x_984_, 2, v___y_894_);
lean_inc(v___y_890_);
v___x_985_ = l_Lean_Syntax_node1(v_a_973_, v___y_890_, v___x_984_);
v___x_986_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__0));
lean_inc_ref(v___y_882_);
lean_inc_ref(v___y_858_);
lean_inc_ref(v___y_884_);
v___x_987_ = l_Lean_Name_mkStr4(v___y_884_, v___y_858_, v___y_882_, v___x_986_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__21));
v___x_989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_989_, 0, v_a_973_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__22));
v___x_991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_991_, 0, v_a_973_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = l_Lean_Syntax_node1(v_a_973_, v___y_902_, v___x_991_);
v___x_993_ = l_Lean_Syntax_node4(v_a_973_, v___x_987_, v___x_989_, v___y_857_, v___y_879_, v___x_992_);
lean_inc(v___y_860_);
v___x_994_ = l_Lean_Syntax_node2(v_a_973_, v___y_860_, v___x_985_, v___x_993_);
v___x_995_ = l_Lean_Syntax_node1(v_a_973_, v___y_902_, v___x_994_);
lean_inc_ref(v___y_893_);
v___x_996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_996_, 0, v_a_973_);
lean_ctor_set(v___x_996_, 1, v___y_893_);
v___x_997_ = l_Lean_Syntax_node1(v_a_973_, v___y_902_, v___y_870_);
v___x_998_ = l_Lean_Syntax_node5(v_a_973_, v___x_979_, v___x_981_, v___x_983_, v___x_995_, v___x_996_, v___x_997_);
v___y_833_ = v___y_878_;
v___y_834_ = v___y_861_;
v___y_835_ = v___x_953_;
v___y_836_ = v___y_902_;
v_record_837_ = v___x_998_;
v___y_838_ = v_a_974_;
goto v___jp_832_;
}
}
}
}
v___jp_1001_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_inc_ref_n(v___y_1022_, 2);
v___x_1028_ = l_Array_append___redArg(v___y_1022_, v___y_1027_);
lean_dec_ref(v___y_1027_);
lean_inc_n(v___y_1026_, 9);
lean_inc_n(v___y_1007_, 42);
v___x_1029_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1029_, 0, v___y_1007_);
lean_ctor_set(v___x_1029_, 1, v___y_1026_);
lean_ctor_set(v___x_1029_, 2, v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__23));
v___x_1031_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___y_1007_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1032_, 0, v___y_1007_);
lean_ctor_set(v___x_1032_, 1, v___y_1026_);
lean_ctor_set(v___x_1032_, 2, v___y_1022_);
lean_inc_ref_n(v___x_1032_, 21);
lean_inc(v___y_1020_);
v___x_1033_ = l_Lean_Syntax_node1(v___y_1007_, v___y_1020_, v___x_1032_);
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__26));
v___x_1035_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__28);
v___x_1036_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__29));
lean_inc_n(v___y_1014_, 7);
lean_inc_n(v___y_1025_, 7);
v___x_1037_ = l_Lean_addMacroScope(v___y_1025_, v___x_1036_, v___y_1014_);
v___x_1038_ = lean_box(0);
v___x_1039_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1039_, 0, v___y_1007_);
lean_ctor_set(v___x_1039_, 1, v___x_1035_);
lean_ctor_set(v___x_1039_, 2, v___x_1037_);
lean_ctor_set(v___x_1039_, 3, v___x_1038_);
v___x_1040_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1034_, v___x_1039_, v___x_1032_);
lean_inc(v___y_1004_);
v___x_1041_ = l_Lean_Syntax_node2(v___y_1007_, v___y_1004_, v___x_1033_, v___x_1040_);
v___x_1042_ = l_Lean_Syntax_node1(v___y_1007_, v___y_1026_, v___x_1041_);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_1044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___y_1007_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
lean_inc_ref(v___x_1044_);
lean_inc(v___y_1024_);
v___x_1045_ = l_Lean_Syntax_node3(v___y_1007_, v___y_1024_, v___x_1031_, v___x_1042_, v___x_1044_);
v___x_1046_ = l_Lean_Syntax_node1(v___y_1007_, v___y_1026_, v___x_1045_);
v___x_1047_ = l_Lean_Syntax_node7(v___y_1007_, v___x_851_, v___x_1029_, v___x_1046_, v___x_1032_, v___x_1032_, v___x_1032_, v___x_1032_, v___x_1032_);
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__32));
v___x_1049_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__33));
v___x_1050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___y_1007_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
lean_inc_n(v___y_1010_, 2);
v___x_1052_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1052_, 0, v___y_1010_);
lean_ctor_set(v___x_1052_, 1, v___y_1026_);
lean_ctor_set(v___x_1052_, 2, v___x_1051_);
v___x_1053_ = lean_mk_empty_array_with_capacity(v___y_1016_);
lean_inc(v___y_1008_);
lean_inc_ref(v___x_1053_);
v___x_1054_ = lean_array_push(v___x_1053_, v___y_1008_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1052_);
lean_inc(v___y_1019_);
v___x_1056_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1056_, 0, v___y_1010_);
lean_ctor_set(v___x_1056_, 1, v___y_1019_);
lean_ctor_set(v___x_1056_, 2, v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__36));
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___y_1007_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
lean_inc(v___y_1021_);
lean_inc(v___y_1006_);
v___x_1060_ = l_Lean_Syntax_node2(v___y_1007_, v___y_1006_, v___x_1059_, v___y_1021_);
v___x_1061_ = l_Lean_Syntax_node1(v___y_1007_, v___y_1026_, v___x_1060_);
v___x_1062_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1057_, v___x_1032_, v___x_1061_);
v___x_1063_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_1065_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___y_1007_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__41));
lean_inc_ref_n(v___y_1018_, 7);
v___x_1067_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1066_);
v___x_1068_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__43);
v___x_1069_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__44));
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__45));
lean_inc_ref(v___y_1003_);
lean_inc_ref(v___y_1015_);
v___x_1071_ = l_Lean_Name_mkStr4(v___y_1015_, v___y_1003_, v___x_1069_, v___x_1070_);
lean_inc(v___x_1071_);
v___x_1072_ = l_Lean_addMacroScope(v___y_1025_, v___x_1071_, v___y_1014_);
v___x_1073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1038_);
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___x_1038_);
v___x_1075_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1075_, 0, v___y_1007_);
lean_ctor_set(v___x_1075_, 1, v___x_1068_);
lean_ctor_set(v___x_1075_, 2, v___x_1072_);
lean_ctor_set(v___x_1075_, 3, v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__46));
v___x_1077_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
v___x_1079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___y_1007_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__49);
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__50));
v___x_1082_ = l_Lean_addMacroScope(v___y_1025_, v___x_1081_, v___y_1014_);
v___x_1083_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1083_, 0, v___y_1007_);
lean_ctor_set(v___x_1083_, 1, v___x_1080_);
lean_ctor_set(v___x_1083_, 2, v___x_1082_);
lean_ctor_set(v___x_1083_, 3, v___x_1038_);
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_1085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___y_1007_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
lean_inc_ref_n(v___x_1065_, 4);
v___x_1086_ = l_Lean_Syntax_node5(v___y_1007_, v___x_1077_, v___x_1079_, v___x_1083_, v___x_1065_, v___y_1021_, v___x_1085_);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__52));
v___x_1088_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_1090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___y_1007_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__54));
v___x_1092_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1091_);
v___x_1093_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__55));
v___x_1094_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__56));
v___x_1096_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1095_);
v___x_1097_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__58);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__59));
v___x_1099_ = l_Lean_addMacroScope(v___y_1025_, v___x_1098_, v___y_1014_);
v___x_1100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1100_, 0, v___y_1007_);
lean_ctor_set(v___x_1100_, 1, v___x_1097_);
lean_ctor_set(v___x_1100_, 2, v___x_1099_);
lean_ctor_set(v___x_1100_, 3, v___x_1038_);
lean_inc_n(v___x_1096_, 4);
v___x_1101_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1096_, v___x_1100_, v___x_1032_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__60));
v___x_1103_ = l_Lean_Name_mkStr4(v___x_843_, v___x_844_, v___y_1018_, v___x_1102_);
lean_inc_n(v___x_1103_, 3);
v___x_1104_ = l_Lean_Syntax_node3(v___y_1007_, v___x_1103_, v___x_1065_, v___x_1032_, v___y_1023_);
v___x_1105_ = l_Lean_Syntax_node3(v___y_1007_, v___y_1026_, v___x_1032_, v___x_1032_, v___x_1104_);
lean_inc_n(v___x_1094_, 3);
v___x_1106_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1094_, v___x_1101_, v___x_1105_);
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1108_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1007_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__61);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__62));
v___x_1111_ = l_Lean_addMacroScope(v___y_1025_, v___x_1110_, v___y_1014_);
v___x_1112_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1112_, 0, v___y_1007_);
lean_ctor_set(v___x_1112_, 1, v___x_1109_);
lean_ctor_set(v___x_1112_, 2, v___x_1111_);
lean_ctor_set(v___x_1112_, 3, v___x_1038_);
v___x_1113_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1096_, v___x_1112_, v___x_1032_);
lean_inc(v___y_1002_);
v___x_1114_ = l_Lean_Syntax_node3(v___y_1007_, v___x_1103_, v___x_1065_, v___x_1032_, v___y_1002_);
v___x_1115_ = l_Lean_Syntax_node3(v___y_1007_, v___y_1026_, v___x_1032_, v___x_1032_, v___x_1114_);
v___x_1116_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1094_, v___x_1113_, v___x_1115_);
v___x_1117_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__63);
v___x_1118_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__64));
v___x_1119_ = l_Lean_addMacroScope(v___y_1025_, v___x_1118_, v___y_1014_);
v___x_1120_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1120_, 0, v___y_1007_);
lean_ctor_set(v___x_1120_, 1, v___x_1117_);
lean_ctor_set(v___x_1120_, 2, v___x_1119_);
lean_ctor_set(v___x_1120_, 3, v___x_1038_);
v___x_1121_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1096_, v___x_1120_, v___x_1032_);
lean_inc(v___y_1011_);
v___x_1122_ = l_Lean_Syntax_node3(v___y_1007_, v___x_1103_, v___x_1065_, v___x_1032_, v___y_1011_);
v___x_1123_ = l_Lean_Syntax_node3(v___y_1007_, v___y_1026_, v___x_1032_, v___x_1032_, v___x_1122_);
v___x_1124_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1094_, v___x_1121_, v___x_1123_);
v___x_1125_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__65);
v___x_1126_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__66));
v___x_1127_ = l_Lean_addMacroScope(v___y_1025_, v___x_1126_, v___y_1014_);
v___x_1128_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1128_, 0, v___y_1007_);
lean_ctor_set(v___x_1128_, 1, v___x_1125_);
lean_ctor_set(v___x_1128_, 2, v___x_1127_);
lean_ctor_set(v___x_1128_, 3, v___x_1038_);
v___x_1129_ = l_Lean_Syntax_node2(v___y_1007_, v___x_1096_, v___x_1128_, v___x_1032_);
if (v___y_1009_ == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__69);
v___y_856_ = v___x_1032_;
v___y_857_ = v___y_1002_;
v___y_858_ = v___y_1003_;
v___y_859_ = v___y_1005_;
v___y_860_ = v___y_1004_;
v___y_861_ = v___x_1053_;
v___y_862_ = v___x_1063_;
v___y_863_ = v___x_1062_;
v___y_864_ = v___x_1096_;
v___y_865_ = v___x_1108_;
v___y_866_ = v___x_1086_;
v___y_867_ = v___x_1129_;
v___y_868_ = v___y_1007_;
v___y_869_ = v___x_1088_;
v___y_870_ = v___y_1008_;
v___y_871_ = v___y_1009_;
v___y_872_ = v___x_1065_;
v___y_873_ = v___x_1092_;
v___y_874_ = v___x_1067_;
v___y_875_ = v___x_1075_;
v___y_876_ = v___x_1038_;
v___y_877_ = v___x_1124_;
v___y_878_ = v___y_1010_;
v___y_879_ = v___y_1011_;
v___y_880_ = v___y_1012_;
v___y_881_ = v___x_1106_;
v___y_882_ = v___y_1013_;
v___y_883_ = v___y_1014_;
v___y_884_ = v___y_1015_;
v___y_885_ = v___y_1017_;
v___y_886_ = v___y_1018_;
v___y_887_ = v___x_1056_;
v___y_888_ = v___x_1047_;
v___y_889_ = v___x_1044_;
v___y_890_ = v___y_1020_;
v___y_891_ = v___x_1116_;
v___y_892_ = v___x_1090_;
v___y_893_ = v___x_1043_;
v___y_894_ = v___y_1022_;
v___y_895_ = v___x_1048_;
v___y_896_ = v___x_1050_;
v___y_897_ = v___x_1069_;
v___y_898_ = v___x_1103_;
v___y_899_ = v___x_1038_;
v___y_900_ = v___y_1025_;
v___y_901_ = v___x_1094_;
v___y_902_ = v___y_1026_;
v___y_903_ = v___x_1130_;
goto v___jp_855_;
}
else
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__71);
v___y_856_ = v___x_1032_;
v___y_857_ = v___y_1002_;
v___y_858_ = v___y_1003_;
v___y_859_ = v___y_1005_;
v___y_860_ = v___y_1004_;
v___y_861_ = v___x_1053_;
v___y_862_ = v___x_1063_;
v___y_863_ = v___x_1062_;
v___y_864_ = v___x_1096_;
v___y_865_ = v___x_1108_;
v___y_866_ = v___x_1086_;
v___y_867_ = v___x_1129_;
v___y_868_ = v___y_1007_;
v___y_869_ = v___x_1088_;
v___y_870_ = v___y_1008_;
v___y_871_ = v___y_1009_;
v___y_872_ = v___x_1065_;
v___y_873_ = v___x_1092_;
v___y_874_ = v___x_1067_;
v___y_875_ = v___x_1075_;
v___y_876_ = v___x_1038_;
v___y_877_ = v___x_1124_;
v___y_878_ = v___y_1010_;
v___y_879_ = v___y_1011_;
v___y_880_ = v___y_1012_;
v___y_881_ = v___x_1106_;
v___y_882_ = v___y_1013_;
v___y_883_ = v___y_1014_;
v___y_884_ = v___y_1015_;
v___y_885_ = v___y_1017_;
v___y_886_ = v___y_1018_;
v___y_887_ = v___x_1056_;
v___y_888_ = v___x_1047_;
v___y_889_ = v___x_1044_;
v___y_890_ = v___y_1020_;
v___y_891_ = v___x_1116_;
v___y_892_ = v___x_1090_;
v___y_893_ = v___x_1043_;
v___y_894_ = v___y_1022_;
v___y_895_ = v___x_1048_;
v___y_896_ = v___x_1050_;
v___y_897_ = v___x_1069_;
v___y_898_ = v___x_1103_;
v___y_899_ = v___x_1038_;
v___y_900_ = v___y_1025_;
v___y_901_ = v___x_1094_;
v___y_902_ = v___y_1026_;
v___y_903_ = v___x_1131_;
goto v___jp_855_;
}
}
v___jp_1132_:
{
lean_object* v_quotContext_1151_; lean_object* v_currMacroScope_1152_; lean_object* v_ref_1153_; lean_object* v___x_1154_; lean_object* v_a_1155_; lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v_pathLit_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_quotContext_1151_ = lean_ctor_get(v___y_1146_, 1);
v_currMacroScope_1152_ = lean_ctor_get(v___y_1146_, 2);
v_ref_1153_ = lean_ctor_get(v___y_1146_, 5);
v___x_1154_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___lam__0(v_ref_1153_, v___y_1146_, v___y_1144_);
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
v_a_1156_ = lean_ctor_get(v___x_1154_, 1);
lean_inc(v_a_1156_);
lean_dec_ref(v___x_1154_);
v___x_1157_ = l_Lean_Syntax_getId(v___y_1143_);
v___x_1158_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1157_, v___x_852_);
v___x_1159_ = lean_box(2);
v___x_1160_ = l_Lean_Syntax_mkStrLit(v___x_1158_, v___x_1159_);
v_pathLit_1161_ = l_Lean_Syntax_mkStrLit(v_snd_1150_, v___x_1159_);
v___x_1162_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_1163_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
if (lean_obj_tag(v___y_1134_) == 1)
{
lean_object* v_val_1164_; lean_object* v___x_1165_; 
v_val_1164_ = lean_ctor_get(v___y_1134_, 0);
lean_inc(v_val_1164_);
lean_dec_ref_known(v___y_1134_, 1);
v___x_1165_ = l_Array_mkArray1___redArg(v_val_1164_);
v___y_1002_ = v___y_1135_;
v___y_1003_ = v___y_1137_;
v___y_1004_ = v___y_1138_;
v___y_1005_ = v_a_1156_;
v___y_1006_ = v___y_1142_;
v___y_1007_ = v_a_1155_;
v___y_1008_ = v___y_1143_;
v___y_1009_ = v_fst_1149_;
v___y_1010_ = v___x_1159_;
v___y_1011_ = v_pathLit_1161_;
v___y_1012_ = v___y_1146_;
v___y_1013_ = v___y_1147_;
v___y_1014_ = v_currMacroScope_1152_;
v___y_1015_ = v___y_1148_;
v___y_1016_ = v___y_1133_;
v___y_1017_ = v_ref_1153_;
v___y_1018_ = v___y_1136_;
v___y_1019_ = v___y_1139_;
v___y_1020_ = v___y_1140_;
v___y_1021_ = v___y_1141_;
v___y_1022_ = v___x_1163_;
v___y_1023_ = v___x_1160_;
v___y_1024_ = v___y_1145_;
v___y_1025_ = v_quotContext_1151_;
v___y_1026_ = v___x_1162_;
v___y_1027_ = v___x_1165_;
goto v___jp_1001_;
}
else
{
lean_object* v___x_1166_; 
lean_dec(v___y_1134_);
v___x_1166_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__75));
v___y_1002_ = v___y_1135_;
v___y_1003_ = v___y_1137_;
v___y_1004_ = v___y_1138_;
v___y_1005_ = v_a_1156_;
v___y_1006_ = v___y_1142_;
v___y_1007_ = v_a_1155_;
v___y_1008_ = v___y_1143_;
v___y_1009_ = v_fst_1149_;
v___y_1010_ = v___x_1159_;
v___y_1011_ = v_pathLit_1161_;
v___y_1012_ = v___y_1146_;
v___y_1013_ = v___y_1147_;
v___y_1014_ = v_currMacroScope_1152_;
v___y_1015_ = v___y_1148_;
v___y_1016_ = v___y_1133_;
v___y_1017_ = v_ref_1153_;
v___y_1018_ = v___y_1136_;
v___y_1019_ = v___y_1139_;
v___y_1020_ = v___y_1140_;
v___y_1021_ = v___y_1141_;
v___y_1022_ = v___x_1163_;
v___y_1023_ = v___x_1160_;
v___y_1024_ = v___y_1145_;
v___y_1025_ = v_quotContext_1151_;
v___y_1026_ = v___x_1162_;
v___y_1027_ = v___x_1166_;
goto v___jp_1001_;
}
}
v___jp_1167_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1171_);
lean_inc(v___x_1172_);
v___x_1173_ = l_Lean_Syntax_matchesNull(v___x_1172_, v___x_1171_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec(v___x_1172_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1174_ = lean_box(1);
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v___y_1170_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1176_ = l_Lean_Syntax_getArg(v___x_1172_, v___x_849_);
lean_dec(v___x_1172_);
v___x_1177_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__76));
v___x_1178_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__78));
lean_inc(v___x_1176_);
v___x_1179_ = l_Lean_Syntax_isOfKind(v___x_1176_, v___x_1178_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_dec(v___x_1176_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1180_ = lean_box(1);
v___x_1181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
lean_ctor_set(v___x_1181_, 1, v___y_1170_);
return v___x_1181_;
}
else
{
lean_object* v___x_1182_; uint8_t v___x_1183_; 
v___x_1182_ = l_Lean_Syntax_getArg(v___x_1176_, v___x_1171_);
lean_dec(v___x_1176_);
lean_inc(v___x_1182_);
v___x_1183_ = l_Lean_Syntax_matchesNull(v___x_1182_, v___x_1171_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_dec(v___x_1182_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1184_ = lean_box(1);
v___x_1185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v___y_1170_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v___x_1186_ = l_Lean_Syntax_getArg(v___x_1182_, v___x_849_);
lean_dec(v___x_1182_);
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__80));
lean_inc(v___x_1186_);
v___x_1188_ = l_Lean_Syntax_isOfKind(v___x_1186_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec(v___x_1186_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1189_ = lean_box(1);
v___x_1190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___y_1170_);
return v___x_1190_;
}
else
{
lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1191_ = l_Lean_Syntax_getArg(v___x_1186_, v___x_849_);
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
lean_inc(v___x_1191_);
v___x_1193_ = l_Lean_Syntax_isOfKind(v___x_1191_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec(v___x_1191_);
lean_dec(v___x_1186_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1194_ = lean_box(1);
v___x_1195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
lean_ctor_set(v___x_1195_, 1, v___y_1170_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1196_ = l_Lean_Syntax_getArg(v___x_1191_, v___x_849_);
lean_dec(v___x_1191_);
v___x_1197_ = l_Lean_Syntax_matchesNull(v___x_1196_, v___x_849_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec(v___x_1186_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1198_ = lean_box(1);
v___x_1199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v___y_1170_);
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1200_ = l_Lean_Syntax_getArg(v___x_1186_, v___x_1171_);
lean_dec(v___x_1186_);
v___x_1201_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1202_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1203_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__1));
lean_inc(v___x_1200_);
v___x_1205_ = l_Lean_Syntax_isOfKind(v___x_1200_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec(v___x_1200_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1206_ = lean_box(1);
v___x_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
lean_ctor_set(v___x_1207_, 1, v___y_1170_);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = l_Lean_Syntax_getArg(v___x_1200_, v___x_1171_);
v___x_1209_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
lean_inc(v___x_1208_);
v___x_1210_ = l_Lean_Syntax_isOfKind(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_dec(v___x_1208_);
lean_dec(v___x_1200_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1211_ = lean_box(1);
v___x_1212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v___y_1170_);
return v___x_1212_;
}
else
{
lean_object* v___x_1213_; lean_object* v_e_1214_; uint8_t v___x_1215_; 
v___x_1213_ = lean_unsigned_to_nat(2u);
v_e_1214_ = l_Lean_Syntax_getArg(v___x_1200_, v___x_1213_);
lean_dec(v___x_1200_);
lean_inc(v_e_1214_);
v___x_1215_ = l_Lean_Syntax_isOfKind(v_e_1214_, v___x_1209_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1216_ = lean_box(1);
v___x_1217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___y_1170_);
return v___x_1217_;
}
else
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1213_);
v___x_1219_ = l_Lean_Syntax_matchesNull(v___x_1218_, v___x_849_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1220_ = lean_box(1);
v___x_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v___y_1170_);
return v___x_1221_;
}
else
{
lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v___x_1222_ = lean_unsigned_to_nat(3u);
v___x_1223_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1222_);
v___x_1224_ = l_Lean_Syntax_matchesNull(v___x_1223_, v___x_849_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1225_ = lean_box(1);
v___x_1226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v___y_1170_);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1227_ = lean_unsigned_to_nat(4u);
v___x_1228_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1227_);
v___x_1229_ = l_Lean_Syntax_matchesNull(v___x_1228_, v___x_849_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1230_ = lean_box(1);
v___x_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
lean_ctor_set(v___x_1231_, 1, v___y_1170_);
return v___x_1231_;
}
else
{
lean_object* v___x_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1232_ = lean_unsigned_to_nat(5u);
v___x_1233_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1232_);
v___x_1234_ = l_Lean_Syntax_matchesNull(v___x_1233_, v___x_849_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v___x_850_);
lean_dec(v_x_829_);
v___x_1235_ = lean_box(1);
v___x_1236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
lean_ctor_set(v___x_1236_, 1, v___y_1170_);
return v___x_1236_;
}
else
{
lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1237_ = lean_unsigned_to_nat(6u);
v___x_1238_ = l_Lean_Syntax_getArg(v___x_850_, v___x_1237_);
lean_dec(v___x_850_);
v___x_1239_ = l_Lean_Syntax_matchesNull(v___x_1238_, v___x_849_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
lean_dec(v_x_829_);
v___x_1240_ = lean_box(1);
v___x_1241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v___y_1170_);
return v___x_1241_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1242_ = l_Lean_Syntax_getArg(v_x_829_, v___x_1171_);
lean_dec(v_x_829_);
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__84));
lean_inc(v___x_1242_);
v___x_1244_ = l_Lean_Syntax_isOfKind(v___x_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1245_ = lean_box(1);
v___x_1246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
lean_ctor_set(v___x_1246_, 1, v___y_1170_);
return v___x_1246_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1247_ = l_Lean_Syntax_getArg(v___x_1242_, v___x_1171_);
v___x_1248_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__86));
lean_inc(v___x_1247_);
v___x_1249_ = l_Lean_Syntax_isOfKind(v___x_1247_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_dec(v___x_1247_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1250_ = lean_box(1);
v___x_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___y_1170_);
return v___x_1251_;
}
else
{
lean_object* v_n_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; 
v_n_1252_ = l_Lean_Syntax_getArg(v___x_1247_, v___x_849_);
v___x_1253_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__88));
lean_inc(v_n_1252_);
v___x_1254_ = l_Lean_Syntax_isOfKind(v_n_1252_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec(v_n_1252_);
lean_dec(v___x_1247_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1255_ = lean_box(1);
v___x_1256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v___y_1170_);
return v___x_1256_;
}
else
{
lean_object* v___x_1257_; uint8_t v___x_1258_; 
v___x_1257_ = l_Lean_Syntax_getArg(v___x_1247_, v___x_1171_);
lean_dec(v___x_1247_);
v___x_1258_ = l_Lean_Syntax_matchesNull(v___x_1257_, v___x_849_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec(v_n_1252_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1259_ = lean_box(1);
v___x_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v___y_1170_);
return v___x_1260_;
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
v___x_1261_ = l_Lean_Syntax_getArg(v___x_1242_, v___x_1213_);
v___x_1262_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
lean_inc(v___x_1261_);
v___x_1263_ = l_Lean_Syntax_isOfKind(v___x_1261_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_dec(v___x_1261_);
lean_dec(v_n_1252_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1264_ = lean_box(1);
v___x_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set(v___x_1265_, 1, v___y_1170_);
return v___x_1265_;
}
else
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = l_Lean_Syntax_getArg(v___x_1261_, v___x_849_);
v___x_1267_ = l_Lean_Syntax_matchesNull(v___x_1266_, v___x_849_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
lean_dec(v___x_1261_);
lean_dec(v_n_1252_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1268_ = lean_box(1);
v___x_1269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___y_1170_);
return v___x_1269_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v___x_1270_ = l_Lean_Syntax_getArg(v___x_1261_, v___x_1171_);
lean_dec(v___x_1261_);
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
lean_inc(v___x_1270_);
v___x_1272_ = l_Lean_Syntax_isOfKind(v___x_1270_, v___x_1271_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec(v___x_1270_);
lean_dec(v_n_1252_);
lean_dec(v___x_1242_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1273_ = lean_box(1);
v___x_1274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
lean_ctor_set(v___x_1274_, 1, v___y_1170_);
return v___x_1274_;
}
else
{
lean_object* v___x_1275_; uint8_t v___x_1276_; 
v___x_1275_ = l_Lean_Syntax_getArg(v___x_1242_, v___x_1222_);
lean_dec(v___x_1242_);
v___x_1276_ = l_Lean_Syntax_matchesNull(v___x_1275_, v___x_849_);
if (v___x_1276_ == 0)
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
lean_dec(v___x_1270_);
lean_dec(v_n_1252_);
lean_dec(v_e_1214_);
lean_dec(v___x_1208_);
lean_dec(v_doc_1168_);
v___x_1277_ = lean_box(1);
v___x_1278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___y_1170_);
return v___x_1278_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v_spec_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1279_ = l_Lean_Syntax_getArg(v___x_1270_, v___x_1171_);
lean_dec(v___x_1270_);
v___x_1280_ = l_Lean_TSyntax_getString(v_e_1214_);
lean_dec(v_e_1214_);
v___x_1281_ = lean_string_utf8_byte_size(v___x_1280_);
v___x_1282_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1280_);
lean_ctor_set(v___x_1282_, 1, v___x_849_);
lean_ctor_set(v___x_1282_, 2, v___x_1281_);
v___x_1283_ = l_String_Slice_trimAscii(v___x_1282_);
v_spec_1284_ = l_String_Slice_toString(v___x_1283_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__93));
v___x_1286_ = lean_string_utf8_byte_size(v_spec_1284_);
v___x_1287_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__94);
v___x_1288_ = lean_nat_dec_le(v___x_1287_, v___x_1286_);
if (v___x_1288_ == 0)
{
v___y_1133_ = v___x_1213_;
v___y_1134_ = v_doc_1168_;
v___y_1135_ = v___x_1208_;
v___y_1136_ = v___x_1177_;
v___y_1137_ = v___x_1202_;
v___y_1138_ = v___x_1187_;
v___y_1139_ = v___x_1248_;
v___y_1140_ = v___x_1192_;
v___y_1141_ = v___x_1279_;
v___y_1142_ = v___x_1271_;
v___y_1143_ = v_n_1252_;
v___y_1144_ = v___y_1170_;
v___y_1145_ = v___x_1178_;
v___y_1146_ = v___y_1169_;
v___y_1147_ = v___x_1203_;
v___y_1148_ = v___x_1201_;
v_fst_1149_ = v___x_1288_;
v_snd_1150_ = v_spec_1284_;
goto v___jp_1132_;
}
else
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_string_memcmp(v_spec_1284_, v___x_1285_, v___x_849_, v___x_849_, v___x_1287_);
if (v___x_1289_ == 0)
{
v___y_1133_ = v___x_1213_;
v___y_1134_ = v_doc_1168_;
v___y_1135_ = v___x_1208_;
v___y_1136_ = v___x_1177_;
v___y_1137_ = v___x_1202_;
v___y_1138_ = v___x_1187_;
v___y_1139_ = v___x_1248_;
v___y_1140_ = v___x_1192_;
v___y_1141_ = v___x_1279_;
v___y_1142_ = v___x_1271_;
v___y_1143_ = v_n_1252_;
v___y_1144_ = v___y_1170_;
v___y_1145_ = v___x_1178_;
v___y_1146_ = v___y_1169_;
v___y_1147_ = v___x_1203_;
v___y_1148_ = v___x_1201_;
v_fst_1149_ = v___x_1289_;
v_snd_1150_ = v_spec_1284_;
goto v___jp_1132_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
lean_inc_ref(v_spec_1284_);
v___x_1290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1290_, 0, v_spec_1284_);
lean_ctor_set(v___x_1290_, 1, v___x_849_);
lean_ctor_set(v___x_1290_, 2, v___x_1286_);
v___x_1291_ = l_String_Slice_Pos_nextn(v___x_1290_, v___x_849_, v___x_1227_);
lean_dec_ref_known(v___x_1290_, 3);
v___x_1292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1292_, 0, v_spec_1284_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
lean_ctor_set(v___x_1292_, 2, v___x_1286_);
v___x_1293_ = l_String_Slice_trimAscii(v___x_1292_);
v___x_1294_ = l_String_Slice_toString(v___x_1293_);
lean_dec_ref(v___x_1293_);
v___y_1133_ = v___x_1213_;
v___y_1134_ = v_doc_1168_;
v___y_1135_ = v___x_1208_;
v___y_1136_ = v___x_1177_;
v___y_1137_ = v___x_1202_;
v___y_1138_ = v___x_1187_;
v___y_1139_ = v___x_1248_;
v___y_1140_ = v___x_1192_;
v___y_1141_ = v___x_1279_;
v___y_1142_ = v___x_1271_;
v___y_1143_ = v_n_1252_;
v___y_1144_ = v___y_1170_;
v___y_1145_ = v___x_1178_;
v___y_1146_ = v___y_1169_;
v___y_1147_ = v___x_1203_;
v___y_1148_ = v___x_1201_;
v_fst_1149_ = v___x_852_;
v_snd_1150_ = v___x_1294_;
goto v___jp_1132_;
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
v___jp_832_:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_839_ = lean_array_push(v___y_834_, v___y_835_);
v___x_840_ = lean_array_push(v___x_839_, v_record_837_);
lean_inc(v___y_836_);
v___x_841_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_841_, 0, v___y_833_);
lean_ctor_set(v___x_841_, 1, v___y_836_);
lean_ctor_set(v___x_841_, 2, v___x_840_);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v___y_838_);
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___boxed(lean_object* v_x_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1(v_x_1309_, v_a_1310_, v_a_1311_);
lean_dec_ref(v_a_1310_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object* v_declName_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1316_; lean_object* v_env_1317_; uint8_t v___x_1318_; 
v___x_1316_ = lean_st_ref_get(v_a_1314_);
v_env_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc_ref_n(v_env_1317_, 2);
lean_dec(v___x_1316_);
lean_inc(v_declName_1313_);
v___x_1318_ = l_Lean_isStructure(v_env_1317_, v_declName_1313_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_dec_ref(v_env_1317_);
lean_dec(v_declName_1313_);
v___x_1319_ = lean_box(0);
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
return v___x_1320_;
}
else
{
uint8_t v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1321_ = 0;
v___x_1322_ = l_Lean_getStructureFieldsFlattened(v_env_1317_, v_declName_1313_, v___x_1321_);
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object* v_declName_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1325_, v_a_1326_);
lean_dec(v_a_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object* v_declName_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1329_, v_a_1331_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object* v_declName_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(v_declName_1334_, v_a_1335_, v_a_1336_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object* v___x_1341_, lean_object* v_as_x27_1342_, lean_object* v_b_1343_){
_start:
{
if (lean_obj_tag(v_as_x27_1342_) == 0)
{
lean_object* v___x_1345_; 
lean_dec_ref(v___x_1341_);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_b_1343_);
return v___x_1345_;
}
else
{
lean_object* v_head_1346_; lean_object* v_tail_1347_; lean_object* v_snd_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1378_; 
v_head_1346_ = lean_ctor_get(v_as_x27_1342_, 0);
v_tail_1347_ = lean_ctor_get(v_as_x27_1342_, 1);
v_snd_1348_ = lean_ctor_get(v_b_1343_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_b_1343_);
if (v_isSharedCheck_1378_ == 0)
{
lean_object* v_unused_1379_; 
v_unused_1379_ = lean_ctor_get(v_b_1343_, 0);
lean_dec(v_unused_1379_);
v___x_1350_ = v_b_1343_;
v_isShared_1351_ = v_isSharedCheck_1378_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_snd_1348_);
lean_dec(v_b_1343_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1378_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
uint8_t v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = 0;
lean_inc(v_head_1346_);
lean_inc_ref(v___x_1341_);
v___x_1359_ = l_Lean_Environment_find_x3f(v___x_1341_, v_head_1346_, v___x_1358_);
if (lean_obj_tag(v___x_1359_) == 1)
{
lean_object* v_val_1360_; 
v_val_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_val_1360_);
lean_dec_ref_known(v___x_1359_, 1);
if (lean_obj_tag(v_val_1360_) == 6)
{
lean_object* v_val_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1377_; 
lean_del_object(v___x_1350_);
v_val_1361_ = lean_ctor_get(v_val_1360_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_val_1360_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1363_ = v_val_1360_;
v_isShared_1364_ = v_isSharedCheck_1377_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_val_1361_);
lean_dec(v_val_1360_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1377_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v_numFields_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v_numFields_1365_ = lean_ctor_get(v_val_1361_, 4);
lean_inc(v_numFields_1365_);
lean_dec_ref(v_val_1361_);
v___x_1366_ = lean_unsigned_to_nat(0u);
v___x_1367_ = lean_nat_dec_eq(v_numFields_1365_, v___x_1366_);
lean_dec(v_numFields_1365_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
lean_dec_ref(v___x_1341_);
v___x_1368_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
v___x_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
lean_ctor_set(v___x_1369_, 1, v_snd_1348_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set_tag(v___x_1363_, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1369_);
v___x_1371_ = v___x_1363_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_del_object(v___x_1363_);
v___x_1373_ = lean_box(0);
lean_inc(v_head_1346_);
v___x_1374_ = lean_array_push(v_snd_1348_, v_head_1346_);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v_as_x27_1342_ = v_tail_1347_;
v_b_1343_ = v___x_1375_;
goto _start;
}
}
}
else
{
lean_dec(v_val_1360_);
lean_dec_ref(v___x_1341_);
goto v___jp_1352_;
}
}
else
{
lean_dec(v___x_1359_);
lean_dec_ref(v___x_1341_);
goto v___jp_1352_;
}
v___jp_1352_:
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1353_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1353_);
v___x_1355_ = v___x_1350_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_snd_1348_);
v___x_1355_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
return v___x_1356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object* v___x_1380_, lean_object* v_as_x27_1381_, lean_object* v_b_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1380_, v_as_x27_1381_, v_b_1382_);
lean_dec(v_as_x27_1381_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object* v_declName_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v___x_1397_; lean_object* v_env_1401_; uint8_t v___x_1402_; lean_object* v___x_1403_; 
v___x_1397_ = lean_st_ref_get(v_a_1392_);
v_env_1401_ = lean_ctor_get(v___x_1397_, 0);
lean_inc_ref_n(v_env_1401_, 2);
lean_dec(v___x_1397_);
v___x_1402_ = 0;
v___x_1403_ = l_Lean_Environment_find_x3f(v_env_1401_, v_declName_1390_, v___x_1402_);
if (lean_obj_tag(v___x_1403_) == 1)
{
lean_object* v_val_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1434_; 
v_val_1404_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1406_ = v___x_1403_;
v_isShared_1407_ = v_isSharedCheck_1434_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_val_1404_);
lean_dec(v___x_1403_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1434_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
if (lean_obj_tag(v_val_1404_) == 5)
{
lean_object* v_val_1408_; lean_object* v_numParams_1409_; lean_object* v_numIndices_1410_; lean_object* v_ctors_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v_val_1408_ = lean_ctor_get(v_val_1404_, 0);
lean_inc_ref(v_val_1408_);
lean_dec_ref_known(v_val_1404_, 1);
v_numParams_1409_ = lean_ctor_get(v_val_1408_, 1);
lean_inc(v_numParams_1409_);
v_numIndices_1410_ = lean_ctor_get(v_val_1408_, 2);
lean_inc(v_numIndices_1410_);
v_ctors_1411_ = lean_ctor_get(v_val_1408_, 4);
lean_inc(v_ctors_1411_);
lean_dec_ref(v_val_1408_);
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = lean_nat_dec_eq(v_numParams_1409_, v___x_1412_);
lean_dec(v_numParams_1409_);
if (v___x_1413_ == 0)
{
lean_dec(v_ctors_1411_);
lean_dec(v_numIndices_1410_);
lean_del_object(v___x_1406_);
lean_dec_ref(v_env_1401_);
goto v___jp_1398_;
}
else
{
uint8_t v___x_1414_; 
v___x_1414_ = lean_nat_dec_eq(v_numIndices_1410_, v___x_1412_);
lean_dec(v_numIndices_1410_);
if (v___x_1414_ == 0)
{
lean_dec(v_ctors_1411_);
lean_del_object(v___x_1406_);
lean_dec_ref(v_env_1401_);
goto v___jp_1398_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1433_; 
v___x_1415_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1));
v___x_1416_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v_env_1401_, v_ctors_1411_, v___x_1415_);
lean_dec(v_ctors_1411_);
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1433_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1433_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v_fst_1421_; 
v_fst_1421_ = lean_ctor_get(v_a_1417_, 0);
if (lean_obj_tag(v_fst_1421_) == 0)
{
lean_object* v_snd_1422_; lean_object* v___x_1424_; 
v_snd_1422_ = lean_ctor_get(v_a_1417_, 1);
lean_inc(v_snd_1422_);
lean_dec(v_a_1417_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v_snd_1422_);
v___x_1424_ = v___x_1406_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_snd_1422_);
v___x_1424_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1426_; 
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1424_);
v___x_1426_ = v___x_1419_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
else
{
lean_object* v_val_1429_; lean_object* v___x_1431_; 
lean_inc_ref(v_fst_1421_);
lean_dec(v_a_1417_);
lean_del_object(v___x_1406_);
v_val_1429_ = lean_ctor_get(v_fst_1421_, 0);
lean_inc(v_val_1429_);
lean_dec_ref_known(v_fst_1421_, 1);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v_val_1429_);
v___x_1431_ = v___x_1419_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_val_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1406_);
lean_dec(v_val_1404_);
lean_dec_ref(v_env_1401_);
goto v___jp_1394_;
}
}
}
else
{
lean_dec(v___x_1403_);
lean_dec_ref(v_env_1401_);
goto v___jp_1394_;
}
v___jp_1394_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = lean_box(0);
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
return v___x_1396_;
}
v___jp_1398_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_box(0);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object* v_declName_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1435_, v_a_1436_, v_a_1437_);
lean_dec(v_a_1437_);
lean_dec_ref(v_a_1436_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object* v___x_1440_, lean_object* v_as_1441_, lean_object* v_as_x27_1442_, lean_object* v_b_1443_, lean_object* v_a_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1440_, v_as_x27_1442_, v_b_1443_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object* v___x_1449_, lean_object* v_as_1450_, lean_object* v_as_x27_1451_, lean_object* v_b_1452_, lean_object* v_a_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(v___x_1449_, v_as_1450_, v_as_x27_1451_, v_b_1452_, v_a_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v_as_x27_1451_);
lean_dec(v_as_1450_);
return v_res_1457_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1(void){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0));
v___x_1460_ = l_Lean_stringToMessageData(v___x_1459_);
return v___x_1460_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2));
v___x_1463_ = l_Lean_stringToMessageData(v___x_1462_);
return v___x_1463_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4));
v___x_1466_ = l_Lean_stringToMessageData(v___x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object* v_declName_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___x_1480_; lean_object* v_env_1481_; uint8_t v___x_1482_; lean_object* v___x_1483_; 
v___x_1480_ = lean_st_ref_get(v_a_1469_);
v_env_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc_ref(v_env_1481_);
lean_dec(v___x_1480_);
v___x_1482_ = 0;
lean_inc(v_declName_1467_);
v___x_1483_ = l_Lean_Environment_find_x3f(v_env_1481_, v_declName_1467_, v___x_1482_);
if (lean_obj_tag(v___x_1483_) == 1)
{
lean_object* v_val_1484_; 
v_val_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_val_1484_);
lean_dec_ref_known(v___x_1483_, 1);
if (lean_obj_tag(v_val_1484_) == 5)
{
lean_object* v_val_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1502_; 
v_val_1485_ = lean_ctor_get(v_val_1484_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v_val_1484_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1487_ = v_val_1484_;
v_isShared_1488_ = v_isSharedCheck_1502_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_val_1485_);
lean_dec(v_val_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1502_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v_numParams_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v_numParams_1489_ = lean_ctor_get(v_val_1485_, 1);
lean_inc(v_numParams_1489_);
lean_dec_ref(v_val_1485_);
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = lean_nat_dec_eq(v_numParams_1489_, v___x_1490_);
lean_dec(v_numParams_1489_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_del_object(v___x_1487_);
v___x_1492_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1493_ = l_Lean_MessageData_ofName(v_declName_1467_);
v___x_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5);
v___x_1496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1494_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
v___x_1497_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1496_, v_a_1468_, v_a_1469_);
return v___x_1497_;
}
else
{
lean_object* v___x_1498_; lean_object* v___x_1500_; 
lean_dec(v_declName_1467_);
v___x_1498_ = lean_box(0);
if (v_isShared_1488_ == 0)
{
lean_ctor_set_tag(v___x_1487_, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1498_);
v___x_1500_ = v___x_1487_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
else
{
lean_dec(v_val_1484_);
v___y_1472_ = v_a_1468_;
v___y_1473_ = v_a_1469_;
goto v___jp_1471_;
}
}
else
{
lean_dec(v___x_1483_);
v___y_1472_ = v_a_1468_;
v___y_1473_ = v_a_1469_;
goto v___jp_1471_;
}
v___jp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1474_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1475_ = l_Lean_MessageData_ofName(v_declName_1467_);
v___x_1476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3);
v___x_1478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1476_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1478_, v___y_1472_, v___y_1473_);
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object* v_declName_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1503_, v_a_1504_, v_a_1505_);
lean_dec(v_a_1505_);
lean_dec_ref(v_a_1504_);
return v_res_1507_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5));
v___x_1523_ = l_String_toRawSubstring_x27(v___x_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t v_sz_1542_, size_t v_i_1543_, lean_object* v_bs_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
uint8_t v___x_1548_; 
v___x_1548_ = lean_usize_dec_lt(v_i_1543_, v_sz_1542_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; 
v___x_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1549_, 0, v_bs_1544_);
return v___x_1549_;
}
else
{
uint8_t v___x_1550_; lean_object* v_v_1551_; lean_object* v___x_1552_; lean_object* v_bs_x27_1553_; lean_object* v___x_1554_; 
v___x_1550_ = 0;
v_v_1551_ = lean_array_uget(v_bs_1544_, v_i_1543_);
v___x_1552_ = lean_unsigned_to_nat(0u);
v_bs_x27_1553_ = lean_array_uset(v_bs_1544_, v_i_1543_, v___x_1552_);
v___x_1554_ = l_Lean_Elab_Command_getRef___redArg(v___y_1545_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v_a_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v___x_1554_, 1);
v___x_1556_ = l_Lean_SourceInfo_fromRef(v_a_1555_, v___x_1550_);
lean_dec(v_a_1555_);
v___x_1557_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1545_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v_a_1560_; lean_object* v_quotContext_x3f_1586_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v_quotContext_x3f_1586_ = lean_ctor_get(v___y_1545_, 5);
if (lean_obj_tag(v_quotContext_x3f_1586_) == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1546_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1587_, 1);
v_a_1560_ = v_a_1588_;
goto v___jp_1559_;
}
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_dec(v_a_1558_);
lean_dec(v___x_1556_);
lean_dec_ref(v_bs_x27_1553_);
lean_dec(v_v_1551_);
v_a_1589_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1587_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1587_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
else
{
lean_object* v_val_1597_; 
v_val_1597_ = lean_ctor_get(v_quotContext_x3f_1586_, 0);
lean_inc(v_val_1597_);
v_a_1560_ = v_val_1597_;
goto v___jp_1559_;
}
v___jp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; size_t v___x_1582_; size_t v___x_1583_; lean_object* v___x_1584_; 
v___x_1561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_1562_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_1556_, 7);
v___x_1563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1556_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_1551_);
v___x_1565_ = l_Lean_mkIdent(v_v_1551_);
v___x_1566_ = l_Lean_Syntax_node1(v___x_1556_, v___x_1564_, v___x_1565_);
v___x_1567_ = l_Lean_Syntax_node1(v___x_1556_, v___x_1564_, v___x_1566_);
v___x_1568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1556_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1571_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_1572_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
v___x_1573_ = l_Lean_addMacroScope(v_a_1560_, v___x_1572_, v_a_1558_);
v___x_1574_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_1575_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1556_);
lean_ctor_set(v___x_1575_, 1, v___x_1571_);
lean_ctor_set(v___x_1575_, 2, v___x_1573_);
lean_ctor_set(v___x_1575_, 3, v___x_1574_);
v___x_1576_ = l_Lean_Name_getString_x21(v_v_1551_);
lean_dec(v_v_1551_);
v___x_1577_ = lean_box(2);
v___x_1578_ = l_Lean_Syntax_mkStrLit(v___x_1576_, v___x_1577_);
v___x_1579_ = l_Lean_Syntax_node1(v___x_1556_, v___x_1564_, v___x_1578_);
v___x_1580_ = l_Lean_Syntax_node2(v___x_1556_, v___x_1570_, v___x_1575_, v___x_1579_);
v___x_1581_ = l_Lean_Syntax_node4(v___x_1556_, v___x_1561_, v___x_1563_, v___x_1567_, v___x_1569_, v___x_1580_);
v___x_1582_ = ((size_t)1ULL);
v___x_1583_ = lean_usize_add(v_i_1543_, v___x_1582_);
v___x_1584_ = lean_array_uset(v_bs_x27_1553_, v_i_1543_, v___x_1581_);
v_i_1543_ = v___x_1583_;
v_bs_1544_ = v___x_1584_;
goto _start;
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v___x_1556_);
lean_dec_ref(v_bs_x27_1553_);
lean_dec(v_v_1551_);
v_a_1598_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1557_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1557_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec_ref(v_bs_x27_1553_);
lean_dec(v_v_1551_);
v_a_1606_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1554_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1554_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object* v_sz_1614_, lean_object* v_i_1615_, lean_object* v_bs_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
size_t v_sz_boxed_1620_; size_t v_i_boxed_1621_; lean_object* v_res_1622_; 
v_sz_boxed_1620_ = lean_unbox_usize(v_sz_1614_);
lean_dec(v_sz_1614_);
v_i_boxed_1621_ = lean_unbox_usize(v_i_1615_);
lean_dec(v_i_1615_);
v_res_1622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_boxed_1620_, v_i_boxed_1621_, v_bs_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t v_sz_1623_, size_t v_i_1624_, lean_object* v_bs_1625_){
_start:
{
uint8_t v___x_1626_; 
v___x_1626_ = lean_usize_dec_lt(v_i_1624_, v_sz_1623_);
if (v___x_1626_ == 0)
{
return v_bs_1625_;
}
else
{
lean_object* v_v_1627_; lean_object* v___x_1628_; lean_object* v_bs_x27_1629_; size_t v___x_1630_; size_t v___x_1631_; lean_object* v___x_1632_; 
v_v_1627_ = lean_array_uget(v_bs_1625_, v_i_1624_);
v___x_1628_ = lean_unsigned_to_nat(0u);
v_bs_x27_1629_ = lean_array_uset(v_bs_1625_, v_i_1624_, v___x_1628_);
v___x_1630_ = ((size_t)1ULL);
v___x_1631_ = lean_usize_add(v_i_1624_, v___x_1630_);
v___x_1632_ = lean_array_uset(v_bs_x27_1629_, v_i_1624_, v_v_1627_);
v_i_1624_ = v___x_1631_;
v_bs_1625_ = v___x_1632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object* v_sz_1634_, lean_object* v_i_1635_, lean_object* v_bs_1636_){
_start:
{
size_t v_sz_boxed_1637_; size_t v_i_boxed_1638_; lean_object* v_res_1639_; 
v_sz_boxed_1637_ = lean_unbox_usize(v_sz_1634_);
lean_dec(v_sz_1634_);
v_i_boxed_1638_ = lean_unbox_usize(v_i_1635_);
lean_dec(v_i_1635_);
v_res_1639_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_boxed_1637_, v_i_boxed_1638_, v_bs_1636_);
return v_res_1639_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_1656_ = l_String_toRawSubstring_x27(v___x_1655_);
return v___x_1656_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24));
v___x_1704_ = l_String_toRawSubstring_x27(v___x_1703_);
return v___x_1704_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34));
v___x_1730_ = l_String_toRawSubstring_x27(v___x_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object* v___x_1733_, lean_object* v_declName_1734_, size_t v_sz_1735_, size_t v_i_1736_, lean_object* v_bs_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_usize_dec_lt(v_i_1736_, v_sz_1735_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; 
lean_dec(v_declName_1734_);
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_bs_1737_);
return v___x_1742_;
}
else
{
uint8_t v___x_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; lean_object* v_v_1746_; lean_object* v___x_1747_; lean_object* v_bs_x27_1748_; lean_object* v___x_1749_; 
v___x_1743_ = 0;
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = lean_nat_dec_eq(v___x_1733_, v___x_1744_);
v_v_1746_ = lean_array_uget(v_bs_1737_, v_i_1736_);
v___x_1747_ = lean_unsigned_to_nat(0u);
v_bs_x27_1748_ = lean_array_uset(v_bs_1737_, v_i_1736_, v___x_1747_);
v___x_1749_ = l_Lean_Elab_Command_getRef___redArg(v___y_1738_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___x_1749_, 1);
v___x_1751_ = l_Lean_SourceInfo_fromRef(v_a_1750_, v___x_1743_);
lean_dec(v_a_1750_);
v___x_1752_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1738_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v_a_1755_; lean_object* v_quotContext_x3f_1802_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v_quotContext_x3f_1802_ = lean_ctor_get(v___y_1738_, 5);
if (lean_obj_tag(v_quotContext_x3f_1802_) == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1739_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v_a_1755_ = v_a_1804_;
goto v___jp_1754_;
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec(v_a_1753_);
lean_dec(v___x_1751_);
lean_dec_ref(v_bs_x27_1748_);
lean_dec(v_v_1746_);
lean_dec(v_declName_1734_);
v_a_1805_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1803_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1803_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_val_1813_; 
v_val_1813_ = lean_ctor_get(v_quotContext_x3f_1802_, 0);
lean_inc(v_val_1813_);
v_a_1755_ = v_val_1813_;
goto v___jp_1754_;
}
v___jp_1754_:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; size_t v___x_1798_; size_t v___x_1799_; lean_object* v___x_1800_; 
v___x_1756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1));
v___x_1757_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3));
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__47));
lean_inc_n(v___x_1751_, 15);
v___x_1759_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1751_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5));
v___x_1761_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6);
v___x_1762_ = lean_box(0);
lean_inc_n(v_a_1753_, 2);
lean_inc_n(v_a_1755_, 2);
v___x_1763_ = l_Lean_addMacroScope(v_a_1755_, v___x_1762_, v_a_1753_);
v___x_1764_ = lean_box(0);
v___x_1765_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23));
v___x_1766_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1751_);
lean_ctor_set(v___x_1766_, 1, v___x_1761_);
lean_ctor_set(v___x_1766_, 2, v___x_1763_);
lean_ctor_set(v___x_1766_, 3, v___x_1765_);
v___x_1767_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1760_, v___x_1766_);
v___x_1768_ = l_Lean_Syntax_node2(v___x_1751_, v___x_1757_, v___x_1759_, v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
lean_inc(v_v_1746_);
v___x_1770_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1746_, v___x_1745_);
v___x_1771_ = lean_box(2);
v___x_1772_ = l_Lean_Syntax_mkStrLit(v___x_1770_, v___x_1771_);
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1751_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1776_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25);
v___x_1777_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27));
v___x_1778_ = l_Lean_addMacroScope(v_a_1755_, v___x_1777_, v_a_1753_);
v___x_1779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31));
v___x_1780_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1751_);
lean_ctor_set(v___x_1780_, 1, v___x_1776_);
lean_ctor_set(v___x_1780_, 2, v___x_1778_);
lean_ctor_set(v___x_1780_, 3, v___x_1779_);
v___x_1781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33));
lean_inc(v_declName_1734_);
v___x_1782_ = l_Lean_Name_append(v_declName_1734_, v_v_1746_);
v___x_1783_ = l_Lean_mkIdent(v___x_1782_);
v___x_1784_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1786_ = l_Lean_addMacroScope(v_a_1755_, v___x_1785_, v_a_1753_);
v___x_1787_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1751_);
lean_ctor_set(v___x_1787_, 1, v___x_1784_);
lean_ctor_set(v___x_1787_, 2, v___x_1786_);
lean_ctor_set(v___x_1787_, 3, v___x_1764_);
v___x_1788_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1769_, v___x_1787_);
v___x_1789_ = l_Lean_Syntax_node2(v___x_1751_, v___x_1775_, v___x_1783_, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__51));
v___x_1791_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1751_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
lean_inc_ref(v___x_1791_);
lean_inc(v___x_1768_);
v___x_1792_ = l_Lean_Syntax_node3(v___x_1751_, v___x_1781_, v___x_1768_, v___x_1789_, v___x_1791_);
v___x_1793_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1769_, v___x_1792_);
v___x_1794_ = l_Lean_Syntax_node2(v___x_1751_, v___x_1775_, v___x_1780_, v___x_1793_);
v___x_1795_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1769_, v___x_1794_);
v___x_1796_ = l_Lean_Syntax_node3(v___x_1751_, v___x_1769_, v___x_1772_, v___x_1774_, v___x_1795_);
v___x_1797_ = l_Lean_Syntax_node3(v___x_1751_, v___x_1756_, v___x_1768_, v___x_1796_, v___x_1791_);
v___x_1798_ = ((size_t)1ULL);
v___x_1799_ = lean_usize_add(v_i_1736_, v___x_1798_);
v___x_1800_ = lean_array_uset(v_bs_x27_1748_, v_i_1736_, v___x_1797_);
v_i_1736_ = v___x_1799_;
v_bs_1737_ = v___x_1800_;
goto _start;
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
lean_dec(v___x_1751_);
lean_dec_ref(v_bs_x27_1748_);
lean_dec(v_v_1746_);
lean_dec(v_declName_1734_);
v_a_1814_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1752_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1752_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
lean_dec_ref(v_bs_x27_1748_);
lean_dec(v_v_1746_);
lean_dec(v_declName_1734_);
v_a_1822_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1749_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1749_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object* v___x_1830_, lean_object* v_declName_1831_, lean_object* v_sz_1832_, lean_object* v_i_1833_, lean_object* v_bs_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
size_t v_sz_boxed_1838_; size_t v_i_boxed_1839_; lean_object* v_res_1840_; 
v_sz_boxed_1838_ = lean_unbox_usize(v_sz_1832_);
lean_dec(v_sz_1832_);
v_i_boxed_1839_ = lean_unbox_usize(v_i_1833_);
lean_dec(v_i_1833_);
v_res_1840_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1830_, v_declName_1831_, v_sz_boxed_1838_, v_i_boxed_1839_, v_bs_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___x_1830_);
return v_res_1840_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__3(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__2));
v___x_1849_ = l_String_toRawSubstring_x27(v___x_1848_);
return v___x_1849_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__17(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_1886_ = l_String_toRawSubstring_x27(v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__33(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__32));
v___x_1926_ = l_Lean_stringToMessageData(v___x_1925_);
return v___x_1926_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__35(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__34));
v___x_1929_ = l_Lean_stringToMessageData(v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object* v_declNames_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; uint8_t v___x_1936_; 
v___x_1934_ = lean_array_get_size(v_declNames_1930_);
v___x_1935_ = lean_unsigned_to_nat(1u);
v___x_1936_ = lean_nat_dec_eq(v___x_1934_, v___x_1935_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1937_ = lean_box(v___x_1936_);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
else
{
lean_object* v___x_1939_; uint8_t v___x_1940_; lean_object* v___x_1941_; lean_object* v_declName_1942_; lean_object* v___x_1943_; 
v___x_1939_ = lean_box(0);
v___x_1940_ = 0;
v___x_1941_ = lean_unsigned_to_nat(0u);
v_declName_1942_ = lean_array_get_borrowed(v___x_1939_, v_declNames_1930_, v___x_1941_);
lean_inc(v_declName_1942_);
v___x_1943_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1942_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v_a_1946_; 
lean_dec_ref_known(v___x_1943_, 1);
lean_inc_n(v_declName_1942_, 2);
v___x_1944_ = l_Lean_mkIdent(v_declName_1942_);
v___x_1945_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1942_, v_a_1932_);
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref(v___x_1945_);
if (lean_obj_tag(v_a_1946_) == 1)
{
lean_object* v_val_1947_; size_t v_sz_1948_; size_t v___x_1949_; lean_object* v___x_1950_; 
v_val_1947_ = lean_ctor_get(v_a_1946_, 0);
lean_inc(v_val_1947_);
lean_dec_ref_known(v_a_1946_, 1);
v_sz_1948_ = lean_array_size(v_val_1947_);
v___x_1949_ = ((size_t)0ULL);
lean_inc(v_declName_1942_);
v___x_1950_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_1934_, v_declName_1942_, v_sz_1948_, v___x_1949_, v_val_1947_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1952_; lean_object* v_a_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v_a_1956_; lean_object* v_a_1958_; lean_object* v_quotContext_x3f_2048_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1951_);
lean_dec_ref_known(v___x_1950_, 1);
v___x_1952_ = l_Lean_Elab_Command_getRef___redArg(v_a_1931_);
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref(v___x_1952_);
v___x_1954_ = l_Lean_SourceInfo_fromRef(v_a_1953_, v___x_1940_);
lean_dec(v_a_1953_);
v___x_1955_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1931_);
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref(v___x_1955_);
v_quotContext_x3f_2048_ = lean_ctor_get(v_a_1931_, 5);
if (lean_obj_tag(v_quotContext_x3f_2048_) == 0)
{
lean_object* v___x_2049_; lean_object* v_a_2050_; 
v___x_2049_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_1932_);
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref(v___x_2049_);
v_a_1958_ = v_a_2050_;
goto v___jp_1957_;
}
else
{
lean_object* v_val_2051_; 
v_val_2051_ = lean_ctor_get(v_quotContext_x3f_2048_, 0);
lean_inc(v_val_2051_);
v_a_1958_ = v_val_2051_;
goto v___jp_1957_;
}
v___jp_1957_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_1959_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_1961_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_1962_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_1954_, 31);
v___x_1963_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1954_);
lean_ctor_set(v___x_1963_, 1, v___x_1961_);
lean_ctor_set(v___x_1963_, 2, v___x_1962_);
lean_inc_ref_n(v___x_1963_, 14);
v___x_1964_ = l_Lean_Syntax_node7(v___x_1954_, v___x_1960_, v___x_1963_, v___x_1963_, v___x_1963_, v___x_1963_, v___x_1963_, v___x_1963_, v___x_1963_);
v___x_1965_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_1968_ = l_Lean_Syntax_node1(v___x_1954_, v___x_1967_, v___x_1963_);
v___x_1969_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1954_);
lean_ctor_set(v___x_1969_, 1, v___x_1965_);
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_1971_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_1972_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_1973_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1954_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1975_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc_n(v_a_1956_, 2);
lean_inc_n(v_a_1958_, 2);
v___x_1977_ = l_Lean_addMacroScope(v_a_1958_, v___x_1976_, v_a_1956_);
v___x_1978_ = lean_box(0);
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_1980_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1954_);
lean_ctor_set(v___x_1980_, 1, v___x_1975_);
lean_ctor_set(v___x_1980_, 2, v___x_1977_);
lean_ctor_set(v___x_1980_, 3, v___x_1979_);
v___x_1981_ = l_Lean_Syntax_node1(v___x_1954_, v___x_1961_, v___x_1944_);
v___x_1982_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1974_, v___x_1980_, v___x_1981_);
v___x_1983_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1971_, v___x_1973_, v___x_1982_);
v___x_1984_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1970_, v___x_1963_, v___x_1983_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_1986_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_1987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1954_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_1989_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_1990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1954_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_1992_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_1993_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1954_);
lean_ctor_set(v___x_1993_, 1, v___x_1991_);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_1995_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1996_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1997_ = l_Lean_addMacroScope(v_a_1958_, v___x_1996_, v_a_1956_);
v___x_1998_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1954_);
lean_ctor_set(v___x_1998_, 1, v___x_1995_);
lean_ctor_set(v___x_1998_, 2, v___x_1997_);
lean_ctor_set(v___x_1998_, 3, v___x_1978_);
v___x_1999_ = l_Lean_Syntax_node1(v___x_1954_, v___x_1961_, v___x_1998_);
v___x_2000_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___x_1954_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__17, &l_Lasm_JS_Meta_mkToJS___closed__17_once, _init_l_Lasm_JS_Meta_mkToJS___closed__17);
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__19));
v___x_2004_ = l_Lean_addMacroScope(v_a_1958_, v___x_2003_, v_a_1956_);
v___x_2005_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__23));
v___x_2006_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2006_, 0, v___x_1954_);
lean_ctor_set(v___x_2006_, 1, v___x_2002_);
lean_ctor_set(v___x_2006_, 2, v___x_2004_);
lean_ctor_set(v___x_2006_, 3, v___x_2005_);
v___x_2007_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__14));
v___x_2009_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_1954_);
lean_ctor_set(v___x_2009_, 1, v___x_2008_);
v___x_2010_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2011_ = l_Lean_Syntax_SepArray_ofElems(v___x_2010_, v_a_1951_);
lean_dec(v_a_1951_);
v___x_2012_ = l_Array_append___redArg(v___x_1962_, v___x_2011_);
lean_dec_ref(v___x_2011_);
v___x_2013_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2013_, 0, v___x_1954_);
lean_ctor_set(v___x_2013_, 1, v___x_1961_);
lean_ctor_set(v___x_2013_, 2, v___x_2012_);
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__30));
v___x_2015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_1954_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = l_Lean_Syntax_node3(v___x_1954_, v___x_2007_, v___x_2009_, v___x_2013_, v___x_2015_);
v___x_2017_ = l_Lean_Syntax_node1(v___x_1954_, v___x_1961_, v___x_2016_);
v___x_2018_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1974_, v___x_2006_, v___x_2017_);
v___x_2019_ = l_Lean_Syntax_node4(v___x_1954_, v___x_1994_, v___x_1999_, v___x_1963_, v___x_2001_, v___x_2018_);
v___x_2020_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1992_, v___x_1993_, v___x_2019_);
v___x_2021_ = l_Lean_Syntax_node1(v___x_1954_, v___x_1961_, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2023_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_1954_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = l_Lean_Syntax_node3(v___x_1954_, v___x_1988_, v___x_1990_, v___x_2021_, v___x_2023_);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2026_ = l_Lean_Syntax_node2(v___x_1954_, v___x_2025_, v___x_1963_, v___x_1963_);
v___x_2027_ = l_Lean_Syntax_node4(v___x_1954_, v___x_1985_, v___x_1987_, v___x_2024_, v___x_2026_, v___x_1963_);
v___x_2028_ = l_Lean_Syntax_node6(v___x_1954_, v___x_1966_, v___x_1968_, v___x_1969_, v___x_1963_, v___x_1963_, v___x_1984_, v___x_2027_);
v___x_2029_ = l_Lean_Syntax_node2(v___x_1954_, v___x_1959_, v___x_1964_, v___x_2028_);
v___x_2030_ = l_Lean_Elab_Command_elabCommand(v___x_2029_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2038_; 
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; 
v_unused_2039_ = lean_ctor_get(v___x_2030_, 0);
lean_dec(v_unused_2039_);
v___x_2032_ = v___x_2030_;
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
else
{
lean_dec(v___x_2030_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2034_ = lean_box(v___x_1936_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___x_2034_);
v___x_2036_ = v___x_2032_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
v_a_2040_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2030_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2030_);
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
}
else
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
lean_dec(v___x_1944_);
v_a_2052_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_1950_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_1950_);
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
else
{
lean_object* v___x_2060_; 
lean_dec(v_a_1946_);
lean_inc(v_declName_1942_);
v___x_2060_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1942_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2060_, 1);
if (lean_obj_tag(v_a_2061_) == 1)
{
lean_object* v_val_2062_; size_t v_sz_2063_; size_t v___x_2064_; lean_object* v___x_2065_; 
v_val_2062_ = lean_ctor_get(v_a_2061_, 0);
lean_inc(v_val_2062_);
lean_dec_ref_known(v_a_2061_, 1);
v_sz_2063_ = lean_array_size(v_val_2062_);
v___x_2064_ = ((size_t)0ULL);
v___x_2065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_2063_, v___x_2064_, v_val_2062_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v_a_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v_a_2071_; lean_object* v_a_2073_; lean_object* v_quotContext_x3f_2161_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = l_Lean_Elab_Command_getRef___redArg(v_a_1931_);
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_a_2068_);
lean_dec_ref(v___x_2067_);
v___x_2069_ = l_Lean_SourceInfo_fromRef(v_a_2068_, v___x_1940_);
lean_dec(v_a_2068_);
v___x_2070_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1931_);
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2071_);
lean_dec_ref(v___x_2070_);
v_quotContext_x3f_2161_ = lean_ctor_get(v_a_1931_, 5);
if (lean_obj_tag(v_quotContext_x3f_2161_) == 0)
{
lean_object* v___x_2162_; lean_object* v_a_2163_; 
v___x_2162_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_1932_);
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref(v___x_2162_);
v_a_2073_ = v_a_2163_;
goto v___jp_2072_;
}
else
{
lean_object* v_val_2164_; 
v_val_2164_ = lean_ctor_get(v_quotContext_x3f_2161_, 0);
lean_inc(v_val_2164_);
v_a_2073_ = v_val_2164_;
goto v___jp_2072_;
}
v___jp_2072_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; size_t v_sz_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2074_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2075_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2076_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2077_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2069_, 31);
v___x_2078_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2069_);
lean_ctor_set(v___x_2078_, 1, v___x_2076_);
lean_ctor_set(v___x_2078_, 2, v___x_2077_);
lean_inc_ref_n(v___x_2078_, 17);
v___x_2079_ = l_Lean_Syntax_node7(v___x_2069_, v___x_2075_, v___x_2078_, v___x_2078_, v___x_2078_, v___x_2078_, v___x_2078_, v___x_2078_, v___x_2078_);
v___x_2080_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2081_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2082_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2083_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2082_, v___x_2078_);
v___x_2084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2069_);
lean_ctor_set(v___x_2084_, 1, v___x_2080_);
v___x_2085_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2087_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2069_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2090_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc(v_a_2071_);
lean_inc(v_a_2073_);
v___x_2092_ = l_Lean_addMacroScope(v_a_2073_, v___x_2091_, v_a_2071_);
v___x_2093_ = lean_box(0);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2095_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2069_);
lean_ctor_set(v___x_2095_, 1, v___x_2090_);
lean_ctor_set(v___x_2095_, 2, v___x_2092_);
lean_ctor_set(v___x_2095_, 3, v___x_2094_);
v___x_2096_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2076_, v___x_1944_);
v___x_2097_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2089_, v___x_2095_, v___x_2096_);
v___x_2098_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2086_, v___x_2088_, v___x_2097_);
v___x_2099_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2085_, v___x_2078_, v___x_2098_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__39));
v___x_2101_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2069_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__10));
v___x_2104_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2105_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2069_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2107_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2108_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2069_);
lean_ctor_set(v___x_2108_, 1, v___x_2106_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__15));
v___x_2110_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2112_ = l_Lean_addMacroScope(v_a_2073_, v___x_2111_, v_a_2071_);
v___x_2113_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2069_);
lean_ctor_set(v___x_2113_, 1, v___x_2110_);
lean_ctor_set(v___x_2113_, 2, v___x_2112_);
lean_ctor_set(v___x_2113_, 3, v___x_2093_);
lean_inc_ref(v___x_2113_);
v___x_2114_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2076_, v___x_2113_);
v___x_2115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2116_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2069_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2069_);
lean_ctor_set(v___x_2119_, 1, v___x_2117_);
v___x_2120_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2121_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2120_, v___x_2078_, v___x_2113_);
v___x_2122_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2076_, v___x_2121_);
v___x_2123_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2069_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v_sz_2126_ = lean_array_size(v_a_2066_);
v___x_2127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2126_, v___x_2064_, v_a_2066_);
v___x_2128_ = l_Array_append___redArg(v___x_2077_, v___x_2127_);
lean_dec_ref(v___x_2127_);
v___x_2129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2069_);
lean_ctor_set(v___x_2129_, 1, v___x_2076_);
lean_ctor_set(v___x_2129_, 2, v___x_2128_);
v___x_2130_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2125_, v___x_2129_);
v___x_2131_ = l_Lean_Syntax_node6(v___x_2069_, v___x_2118_, v___x_2119_, v___x_2078_, v___x_2078_, v___x_2122_, v___x_2124_, v___x_2130_);
v___x_2132_ = l_Lean_Syntax_node4(v___x_2069_, v___x_2109_, v___x_2114_, v___x_2078_, v___x_2116_, v___x_2131_);
v___x_2133_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2107_, v___x_2108_, v___x_2132_);
v___x_2134_ = l_Lean_Syntax_node1(v___x_2069_, v___x_2076_, v___x_2133_);
v___x_2135_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2069_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = l_Lean_Syntax_node3(v___x_2069_, v___x_2103_, v___x_2105_, v___x_2134_, v___x_2136_);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__17));
v___x_2139_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2138_, v___x_2078_, v___x_2078_);
v___x_2140_ = l_Lean_Syntax_node4(v___x_2069_, v___x_2100_, v___x_2102_, v___x_2137_, v___x_2139_, v___x_2078_);
v___x_2141_ = l_Lean_Syntax_node6(v___x_2069_, v___x_2081_, v___x_2083_, v___x_2084_, v___x_2078_, v___x_2078_, v___x_2099_, v___x_2140_);
v___x_2142_ = l_Lean_Syntax_node2(v___x_2069_, v___x_2074_, v___x_2079_, v___x_2141_);
v___x_2143_ = l_Lean_Elab_Command_elabCommand(v___x_2142_, v_a_1931_, v_a_1932_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2151_; 
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2151_ == 0)
{
lean_object* v_unused_2152_; 
v_unused_2152_ = lean_ctor_get(v___x_2143_, 0);
lean_dec(v_unused_2152_);
v___x_2145_ = v___x_2143_;
v_isShared_2146_ = v_isSharedCheck_2151_;
goto v_resetjp_2144_;
}
else
{
lean_dec(v___x_2143_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2151_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2147_; lean_object* v___x_2149_; 
v___x_2147_ = lean_box(v___x_1936_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 0, v___x_2147_);
v___x_2149_ = v___x_2145_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
v_a_2153_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2143_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2143_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v___x_1944_);
v_a_2165_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2065_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2065_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
lean_dec(v_a_2061_);
lean_dec(v___x_1944_);
v___x_2173_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__33, &l_Lasm_JS_Meta_mkToJS___closed__33_once, _init_l_Lasm_JS_Meta_mkToJS___closed__33);
lean_inc(v_declName_1942_);
v___x_2174_ = l_Lean_MessageData_ofName(v_declName_1942_);
v___x_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2173_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2175_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2177_, v_a_1931_, v_a_1932_);
return v___x_2178_;
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
lean_dec(v___x_1944_);
v_a_2179_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2060_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2060_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
v_a_2187_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_1943_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_1943_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object* v_declNames_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Lasm_JS_Meta_mkToJS(v_declNames_2195_, v_a_2196_, v_a_2197_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec_ref(v_declNames_2195_);
return v_res_2199_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0));
v___x_2202_ = l_String_toRawSubstring_x27(v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t v_sz_2219_, size_t v_i_2220_, lean_object* v_bs_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
uint8_t v___x_2225_; 
v___x_2225_ = lean_usize_dec_lt(v_i_2220_, v_sz_2219_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v_bs_2221_);
return v___x_2226_;
}
else
{
uint8_t v___x_2227_; lean_object* v_v_2228_; lean_object* v___x_2229_; lean_object* v_bs_x27_2230_; lean_object* v___x_2231_; 
v___x_2227_ = 0;
v_v_2228_ = lean_array_uget(v_bs_2221_, v_i_2220_);
v___x_2229_ = lean_unsigned_to_nat(0u);
v_bs_x27_2230_ = lean_array_uset(v_bs_2221_, v_i_2220_, v___x_2229_);
v___x_2231_ = l_Lean_Elab_Command_getRef___redArg(v___y_2222_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v_a_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_a_2232_);
lean_dec_ref_known(v___x_2231_, 1);
v___x_2233_ = l_Lean_SourceInfo_fromRef(v_a_2232_, v___x_2227_);
lean_dec(v_a_2232_);
v___x_2234_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2222_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v_a_2237_; lean_object* v_quotContext_x3f_2270_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
v_quotContext_x3f_2270_ = lean_ctor_get(v___y_2222_, 5);
if (lean_obj_tag(v_quotContext_x3f_2270_) == 0)
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2223_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v_a_2237_ = v_a_2272_;
goto v___jp_2236_;
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_dec(v_a_2235_);
lean_dec(v___x_2233_);
lean_dec_ref(v_bs_x27_2230_);
lean_dec(v_v_2228_);
v_a_2273_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2271_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2271_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
else
{
lean_object* v_val_2281_; 
v_val_2281_ = lean_ctor_get(v_quotContext_x3f_2270_, 0);
lean_inc(v_val_2281_);
v_a_2237_ = v_val_2281_;
goto v___jp_2236_;
}
v___jp_2236_:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; size_t v___x_2266_; size_t v___x_2267_; lean_object* v___x_2268_; 
v___x_2238_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_2239_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_2233_, 10);
v___x_2240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2233_);
lean_ctor_set(v___x_2240_, 1, v___x_2239_);
v___x_2241_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2242_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6);
v___x_2244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9));
lean_inc(v_a_2235_);
lean_inc(v_a_2237_);
v___x_2245_ = l_Lean_addMacroScope(v_a_2237_, v___x_2244_, v_a_2235_);
v___x_2246_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__13));
v___x_2247_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2233_);
lean_ctor_set(v___x_2247_, 1, v___x_2243_);
lean_ctor_set(v___x_2247_, 2, v___x_2245_);
lean_ctor_set(v___x_2247_, 3, v___x_2246_);
v___x_2248_ = l_Lean_Name_getString_x21(v_v_2228_);
v___x_2249_ = lean_box(2);
v___x_2250_ = l_Lean_Syntax_mkStrLit(v___x_2248_, v___x_2249_);
v___x_2251_ = l_Lean_Syntax_node1(v___x_2233_, v___x_2241_, v___x_2250_);
v___x_2252_ = l_Lean_Syntax_node2(v___x_2233_, v___x_2242_, v___x_2247_, v___x_2251_);
v___x_2253_ = l_Lean_Syntax_node1(v___x_2233_, v___x_2241_, v___x_2252_);
v___x_2254_ = l_Lean_Syntax_node1(v___x_2233_, v___x_2241_, v___x_2253_);
v___x_2255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2233_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1);
v___x_2258_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4));
v___x_2259_ = l_Lean_addMacroScope(v_a_2237_, v___x_2258_, v_a_2235_);
v___x_2260_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8));
v___x_2261_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2233_);
lean_ctor_set(v___x_2261_, 1, v___x_2257_);
lean_ctor_set(v___x_2261_, 2, v___x_2259_);
lean_ctor_set(v___x_2261_, 3, v___x_2260_);
v___x_2262_ = l_Lean_mkIdent(v_v_2228_);
v___x_2263_ = l_Lean_Syntax_node1(v___x_2233_, v___x_2241_, v___x_2262_);
v___x_2264_ = l_Lean_Syntax_node2(v___x_2233_, v___x_2242_, v___x_2261_, v___x_2263_);
v___x_2265_ = l_Lean_Syntax_node4(v___x_2233_, v___x_2238_, v___x_2240_, v___x_2254_, v___x_2256_, v___x_2264_);
v___x_2266_ = ((size_t)1ULL);
v___x_2267_ = lean_usize_add(v_i_2220_, v___x_2266_);
v___x_2268_ = lean_array_uset(v_bs_x27_2230_, v_i_2220_, v___x_2265_);
v_i_2220_ = v___x_2267_;
v_bs_2221_ = v___x_2268_;
goto _start;
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec(v___x_2233_);
lean_dec_ref(v_bs_x27_2230_);
lean_dec(v_v_2228_);
v_a_2282_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2234_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2234_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
lean_dec_ref(v_bs_x27_2230_);
lean_dec(v_v_2228_);
v_a_2290_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2231_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2231_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object* v_sz_2298_, lean_object* v_i_2299_, lean_object* v_bs_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
size_t v_sz_boxed_2304_; size_t v_i_boxed_2305_; lean_object* v_res_2306_; 
v_sz_boxed_2304_ = lean_unbox_usize(v_sz_2298_);
lean_dec(v_sz_2298_);
v_i_boxed_2305_ = lean_unbox_usize(v_i_2299_);
lean_dec(v_i_2299_);
v_res_2306_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_boxed_2304_, v_i_boxed_2305_, v_bs_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object* v_x_2307_, lean_object* v_body_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = lean_box(1);
v___x_2317_ = l_Lean_PrettyPrinter_delab(v_body_2308_, v___x_2316_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object* v_x_2318_, lean_object* v_body_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(v_x_2318_, v_body_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec_ref(v_x_2318_);
return v_res_2327_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10(void){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9));
v___x_2359_ = l_String_toRawSubstring_x27(v___x_2358_);
return v___x_2359_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16(void){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15));
v___x_2373_ = l_String_toRawSubstring_x27(v___x_2372_);
return v___x_2373_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21(void){
_start:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20));
v___x_2380_ = lean_unsigned_to_nat(14u);
v___x_2381_ = lean_unsigned_to_nat(22u);
v___x_2382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19));
v___x_2383_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18));
v___x_2384_ = l_mkPanicMessageWithDecl(v___x_2383_, v___x_2382_, v___x_2381_, v___x_2380_, v___x_2379_);
return v___x_2384_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23(void){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__22));
v___x_2387_ = l_Lean_stringToMessageData(v___x_2386_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v_declName_2390_, lean_object* v_as_2391_, size_t v_sz_2392_, size_t v_i_2393_, lean_object* v_b_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_a_2399_; uint8_t v___x_2403_; 
v___x_2403_ = lean_usize_dec_lt(v_i_2393_, v_sz_2392_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; 
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v_b_2394_);
return v___x_2404_;
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2406_; 
v_a_2405_ = lean_array_uget_borrowed(v_as_2391_, v_i_2393_);
lean_inc(v_a_2405_);
lean_inc(v_declName_2390_);
lean_inc_ref(v___x_2389_);
v___x_2406_ = l_Lean_getProjFnForField_x3f(v___x_2389_, v_declName_2390_, v_a_2405_);
if (lean_obj_tag(v___x_2406_) == 1)
{
lean_object* v_val_2407_; lean_object* v___f_2408_; uint8_t v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v_a_2416_; lean_object* v___y_2454_; lean_object* v___x_2503_; 
v_val_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_val_2407_);
lean_dec_ref_known(v___x_2406_, 1);
v___f_2408_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0));
v___x_2409_ = 0;
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = lean_nat_dec_eq(v___x_2388_, v___x_2410_);
lean_inc_ref(v___x_2389_);
v___x_2503_ = l_Lean_Environment_find_x3f(v___x_2389_, v_val_2407_, v___x_2409_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__21);
v___x_2505_ = l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(v___x_2504_);
v___y_2454_ = v___x_2505_;
goto v___jp_2453_;
}
else
{
lean_object* v_val_2506_; 
v_val_2506_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_val_2506_);
lean_dec_ref_known(v___x_2503_, 1);
v___y_2454_ = v_val_2506_;
goto v___jp_2453_;
}
v___jp_2412_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2417_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2418_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
lean_inc_n(v_a_2405_, 2);
v___x_2419_ = l_Lean_mkIdent(v_a_2405_);
v___x_2420_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2421_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___y_2414_, 12);
v___x_2422_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2422_, 0, v___y_2414_);
lean_ctor_set(v___x_2422_, 1, v___x_2420_);
lean_ctor_set(v___x_2422_, 2, v___x_2421_);
lean_inc_ref_n(v___x_2422_, 3);
v___x_2423_ = l_Lean_Syntax_node2(v___y_2414_, v___x_2418_, v___x_2419_, v___x_2422_);
v___x_2424_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2425_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___y_2414_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
v___x_2427_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5));
v___x_2428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6));
v___x_2429_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2429_, 0, v___y_2414_);
lean_ctor_set(v___x_2429_, 1, v___x_2428_);
v___x_2430_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8));
v___x_2431_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2432_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10);
v___x_2433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12));
lean_inc(v___y_2413_);
lean_inc(v_a_2416_);
v___x_2434_ = l_Lean_addMacroScope(v_a_2416_, v___x_2433_, v___y_2413_);
v___x_2435_ = lean_box(0);
v___x_2436_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2437_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2437_, 0, v___y_2414_);
lean_ctor_set(v___x_2437_, 1, v___x_2432_);
lean_ctor_set(v___x_2437_, 2, v___x_2434_);
lean_ctor_set(v___x_2437_, 3, v___x_2436_);
v___x_2438_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2439_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2440_ = l_Lean_addMacroScope(v_a_2416_, v___x_2439_, v___y_2413_);
v___x_2441_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2441_, 0, v___y_2414_);
lean_ctor_set(v___x_2441_, 1, v___x_2438_);
lean_ctor_set(v___x_2441_, 2, v___x_2440_);
lean_ctor_set(v___x_2441_, 3, v___x_2435_);
v___x_2442_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_2405_, v___x_2411_);
v___x_2443_ = lean_box(2);
v___x_2444_ = l_Lean_Syntax_mkStrLit(v___x_2442_, v___x_2443_);
v___x_2445_ = l_Lean_Syntax_node3(v___y_2414_, v___x_2420_, v___y_2415_, v___x_2441_, v___x_2444_);
v___x_2446_ = l_Lean_Syntax_node2(v___y_2414_, v___x_2431_, v___x_2437_, v___x_2445_);
v___x_2447_ = l_Lean_Syntax_node1(v___y_2414_, v___x_2430_, v___x_2446_);
v___x_2448_ = l_Lean_Syntax_node2(v___y_2414_, v___x_2427_, v___x_2429_, v___x_2447_);
v___x_2449_ = l_Lean_Syntax_node3(v___y_2414_, v___x_2424_, v___x_2426_, v___x_2422_, v___x_2448_);
v___x_2450_ = l_Lean_Syntax_node3(v___y_2414_, v___x_2420_, v___x_2422_, v___x_2422_, v___x_2449_);
v___x_2451_ = l_Lean_Syntax_node2(v___y_2414_, v___x_2417_, v___x_2423_, v___x_2450_);
v___x_2452_ = lean_array_push(v_b_2394_, v___x_2451_);
v_a_2399_ = v___x_2452_;
goto v___jp_2398_;
}
v___jp_2453_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2455_ = l_Lean_ConstantInfo_type(v___y_2454_);
lean_dec_ref(v___y_2454_);
v___x_2456_ = lean_box(v___x_2409_);
v___x_2457_ = lean_box(v___x_2409_);
v___x_2458_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed), 12, 5);
lean_closure_set(v___x_2458_, 0, lean_box(0));
lean_closure_set(v___x_2458_, 1, v___x_2455_);
lean_closure_set(v___x_2458_, 2, v___f_2408_);
lean_closure_set(v___x_2458_, 3, v___x_2456_);
lean_closure_set(v___x_2458_, 4, v___x_2457_);
v___x_2459_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2458_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v___x_2461_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2460_);
lean_dec_ref_known(v___x_2459_, 1);
v___x_2461_ = l_Lean_Elab_Command_getRef___redArg(v___y_2395_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2463_ = l_Lean_SourceInfo_fromRef(v_a_2462_, v___x_2409_);
lean_dec(v_a_2462_);
v___x_2464_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2395_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_quotContext_x3f_2465_; 
v_quotContext_x3f_2465_ = lean_ctor_get(v___y_2395_, 5);
if (lean_obj_tag(v_quotContext_x3f_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2467_; 
v_a_2466_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2464_, 1);
v___x_2467_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2396_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2467_, 1);
v___y_2413_ = v_a_2466_;
v___y_2414_ = v___x_2463_;
v___y_2415_ = v_a_2460_;
v_a_2416_ = v_a_2468_;
goto v___jp_2412_;
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_a_2466_);
lean_dec(v___x_2463_);
lean_dec(v_a_2460_);
lean_dec_ref(v_b_2394_);
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v_a_2469_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2467_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2467_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_object* v_a_2477_; lean_object* v_val_2478_; 
v_a_2477_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2464_, 1);
v_val_2478_ = lean_ctor_get(v_quotContext_x3f_2465_, 0);
lean_inc(v_val_2478_);
v___y_2413_ = v_a_2477_;
v___y_2414_ = v___x_2463_;
v___y_2415_ = v_a_2460_;
v_a_2416_ = v_val_2478_;
goto v___jp_2412_;
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec(v___x_2463_);
lean_dec(v_a_2460_);
lean_dec_ref(v_b_2394_);
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v_a_2479_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2464_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2464_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
lean_dec(v_a_2460_);
lean_dec_ref(v_b_2394_);
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v_a_2487_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2461_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2461_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_dec_ref(v_b_2394_);
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v_a_2495_ = lean_ctor_get(v___x_2459_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2459_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2459_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
else
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
lean_dec(v___x_2406_);
v___x_2507_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__23);
lean_inc(v_a_2405_);
v___x_2508_ = l_Lean_MessageData_ofName(v_a_2405_);
v___x_2509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2509_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_dec_ref_known(v___x_2510_, 1);
v_a_2399_ = v_b_2394_;
goto v___jp_2398_;
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_dec_ref(v_b_2394_);
lean_dec(v_declName_2390_);
lean_dec_ref(v___x_2389_);
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
v___jp_2398_:
{
size_t v___x_2400_; size_t v___x_2401_; 
v___x_2400_ = ((size_t)1ULL);
v___x_2401_ = lean_usize_add(v_i_2393_, v___x_2400_);
v_i_2393_ = v___x_2401_;
v_b_2394_ = v_a_2399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object* v___x_2519_, lean_object* v___x_2520_, lean_object* v_declName_2521_, lean_object* v_as_2522_, lean_object* v_sz_2523_, lean_object* v_i_2524_, lean_object* v_b_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
size_t v_sz_boxed_2529_; size_t v_i_boxed_2530_; lean_object* v_res_2531_; 
v_sz_boxed_2529_ = lean_unbox_usize(v_sz_2523_);
lean_dec(v_sz_2523_);
v_i_boxed_2530_ = lean_unbox_usize(v_i_2524_);
lean_dec(v_i_2524_);
v_res_2531_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2519_, v___x_2520_, v_declName_2521_, v_as_2522_, v_sz_boxed_2529_, v_i_boxed_2530_, v_b_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec_ref(v_as_2522_);
lean_dec(v___x_2519_);
return v_res_2531_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__1(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__0));
v___x_2534_ = l_String_toRawSubstring_x27(v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__13(void){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__12));
v___x_2565_ = l_String_toRawSubstring_x27(v___x_2564_);
return v___x_2565_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__27(void){
_start:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_2605_ = l_String_toRawSubstring_x27(v___x_2604_);
return v___x_2605_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__33(void){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__32));
v___x_2617_ = l_String_toRawSubstring_x27(v___x_2616_);
return v___x_2617_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__42(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__41));
v___x_2636_ = l_Lean_stringToMessageData(v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object* v_declNames_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2641_ = lean_array_get_size(v_declNames_2637_);
v___x_2642_ = lean_unsigned_to_nat(1u);
v___x_2643_ = lean_nat_dec_eq(v___x_2641_, v___x_2642_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2644_ = lean_box(v___x_2643_);
v___x_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2644_);
return v___x_2645_;
}
else
{
lean_object* v___x_2646_; uint8_t v___x_2647_; lean_object* v___x_2648_; lean_object* v_declName_2649_; lean_object* v___x_2650_; 
v___x_2646_ = lean_box(0);
v___x_2647_ = 0;
v___x_2648_ = lean_unsigned_to_nat(0u);
v_declName_2649_ = lean_array_get_borrowed(v___x_2646_, v_declNames_2637_, v___x_2648_);
lean_inc(v_declName_2649_);
v___x_2650_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2649_, v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v_a_2656_; 
lean_dec_ref_known(v___x_2650_, 1);
lean_inc_n(v_declName_2649_, 3);
v___x_2651_ = l_Lean_mkIdent(v_declName_2649_);
v___x_2652_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2649_, v___x_2643_);
v___x_2653_ = lean_box(2);
v___x_2654_ = l_Lean_Syntax_mkStrLit(v___x_2652_, v___x_2653_);
v___x_2655_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2649_, v_a_2639_);
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref(v___x_2655_);
if (lean_obj_tag(v_a_2656_) == 1)
{
lean_object* v_val_2657_; lean_object* v___x_2658_; lean_object* v_env_2659_; lean_object* v___x_2660_; size_t v_sz_2661_; size_t v___x_2662_; lean_object* v___x_2663_; 
v_val_2657_ = lean_ctor_get(v_a_2656_, 0);
lean_inc(v_val_2657_);
lean_dec_ref_known(v_a_2656_, 1);
v___x_2658_ = lean_st_ref_get(v_a_2639_);
v_env_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc_ref(v_env_2659_);
lean_dec(v___x_2658_);
v___x_2660_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__34));
v_sz_2661_ = lean_array_size(v_val_2657_);
v___x_2662_ = ((size_t)0ULL);
lean_inc(v_declName_2649_);
v___x_2663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2641_, v_env_2659_, v_declName_2649_, v_val_2657_, v_sz_2661_, v___x_2662_, v___x_2660_, v_a_2638_, v_a_2639_);
lean_dec(v_val_2657_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v_a_2672_; lean_object* v_a_2674_; lean_object* v_quotContext_x3f_2778_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2666_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2667_ = l_Lean_Syntax_SepArray_ofElems(v___x_2666_, v_a_2664_);
lean_dec(v_a_2664_);
v___x_2668_ = l_Lean_Elab_Command_getRef___redArg(v_a_2638_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref(v___x_2668_);
v___x_2670_ = l_Lean_SourceInfo_fromRef(v_a_2669_, v___x_2647_);
lean_dec(v_a_2669_);
v___x_2671_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2638_);
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2672_);
lean_dec_ref(v___x_2671_);
v_quotContext_x3f_2778_ = lean_ctor_get(v_a_2638_, 5);
if (lean_obj_tag(v_quotContext_x3f_2778_) == 0)
{
lean_object* v___x_2779_; lean_object* v_a_2780_; 
v___x_2779_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2639_);
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_a_2780_);
lean_dec_ref(v___x_2779_);
v_a_2674_ = v_a_2780_;
goto v___jp_2673_;
}
else
{
lean_object* v_val_2781_; 
v_val_2781_ = lean_ctor_get(v_quotContext_x3f_2778_, 0);
lean_inc(v_val_2781_);
v_a_2674_ = v_val_2781_;
goto v___jp_2673_;
}
v___jp_2673_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2675_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2676_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2678_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2670_, 42);
v___x_2679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2670_);
lean_ctor_set(v___x_2679_, 1, v___x_2677_);
lean_ctor_set(v___x_2679_, 2, v___x_2678_);
lean_inc_ref_n(v___x_2679_, 23);
v___x_2680_ = l_Lean_Syntax_node7(v___x_2670_, v___x_2676_, v___x_2679_, v___x_2679_, v___x_2679_, v___x_2679_, v___x_2679_, v___x_2679_, v___x_2679_);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2682_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2683_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2684_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2683_, v___x_2679_);
v___x_2685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2670_);
lean_ctor_set(v___x_2685_, 1, v___x_2681_);
v___x_2686_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2687_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2688_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2670_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2691_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2692_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2672_, 3);
lean_inc_n(v_a_2674_, 3);
v___x_2693_ = l_Lean_addMacroScope(v_a_2674_, v___x_2692_, v_a_2672_);
v___x_2694_ = lean_box(0);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2696_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2670_);
lean_ctor_set(v___x_2696_, 1, v___x_2691_);
lean_ctor_set(v___x_2696_, 2, v___x_2693_);
lean_ctor_set(v___x_2696_, 3, v___x_2695_);
v___x_2697_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2677_, v___x_2651_);
v___x_2698_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2690_, v___x_2696_, v___x_2697_);
v___x_2699_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2687_, v___x_2689_, v___x_2698_);
v___x_2700_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2686_, v___x_2679_, v___x_2699_);
v___x_2701_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2702_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2703_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2670_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2706_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2708_ = l_Lean_addMacroScope(v_a_2674_, v___x_2707_, v_a_2672_);
v___x_2709_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2670_);
lean_ctor_set(v___x_2709_, 1, v___x_2706_);
lean_ctor_set(v___x_2709_, 2, v___x_2708_);
lean_ctor_set(v___x_2709_, 3, v___x_2694_);
v___x_2710_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2705_, v___x_2709_, v___x_2679_);
v___x_2711_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2713_ = l_Lean_addMacroScope(v_a_2674_, v___x_2712_, v_a_2672_);
v___x_2714_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2670_);
lean_ctor_set(v___x_2714_, 1, v___x_2711_);
lean_ctor_set(v___x_2714_, 2, v___x_2713_);
lean_ctor_set(v___x_2714_, 3, v___x_2694_);
v___x_2715_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2677_, v___x_2714_);
v___x_2716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2717_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2670_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__15));
v___x_2720_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__16));
v___x_2721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2670_);
lean_ctor_set(v___x_2721_, 1, v___x_2719_);
v___x_2722_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__18));
v___x_2723_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__20));
v___x_2724_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__22));
v___x_2725_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__23));
v___x_2726_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2670_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v___x_2727_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__24));
v___x_2728_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__53));
v___x_2729_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2670_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
v___x_2730_ = l_Array_append___redArg(v___x_2678_, v___x_2667_);
lean_dec_ref(v___x_2667_);
v___x_2731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2670_);
lean_ctor_set(v___x_2731_, 1, v___x_2677_);
lean_ctor_set(v___x_2731_, 2, v___x_2730_);
v___x_2732_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2704_, v___x_2731_);
v___x_2733_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__25));
v___x_2734_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2733_, v___x_2679_);
v___x_2735_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__5));
v___x_2736_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2736_, 0, v___x_2670_);
lean_ctor_set(v___x_2736_, 1, v___x_2735_);
v___x_2737_ = l_Lean_Syntax_node6(v___x_2670_, v___x_2727_, v___x_2729_, v___x_2679_, v___x_2732_, v___x_2734_, v___x_2679_, v___x_2736_);
v___x_2738_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2677_, v___x_2737_);
v___x_2739_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2724_, v___x_2726_, v___x_2738_);
v___x_2740_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2723_, v___x_2739_, v___x_2679_);
v___x_2741_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2677_, v___x_2740_);
v___x_2742_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2722_, v___x_2741_);
v___x_2743_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2720_, v___x_2721_, v___x_2742_);
lean_inc_ref(v___x_2718_);
v___x_2744_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2716_, v___x_2718_, v___x_2679_, v___x_2743_);
v___x_2745_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2677_, v___x_2715_, v___x_2679_, v___x_2744_);
v___x_2746_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2665_, v___x_2710_, v___x_2745_);
v___x_2747_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2749_ = l_Lean_addMacroScope(v_a_2674_, v___x_2748_, v_a_2672_);
v___x_2750_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2670_);
lean_ctor_set(v___x_2750_, 1, v___x_2747_);
lean_ctor_set(v___x_2750_, 2, v___x_2749_);
lean_ctor_set(v___x_2750_, 3, v___x_2694_);
v___x_2751_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2705_, v___x_2750_, v___x_2679_);
v___x_2752_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2716_, v___x_2718_, v___x_2679_, v___x_2654_);
v___x_2753_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2677_, v___x_2679_, v___x_2679_, v___x_2752_);
v___x_2754_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2665_, v___x_2751_, v___x_2753_);
v___x_2755_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2677_, v___x_2746_, v___x_2679_, v___x_2754_);
v___x_2756_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2704_, v___x_2755_);
v___x_2757_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2701_, v___x_2703_, v___x_2756_, v___x_2679_);
v___x_2758_ = l_Lean_Syntax_node6(v___x_2670_, v___x_2682_, v___x_2684_, v___x_2685_, v___x_2679_, v___x_2679_, v___x_2700_, v___x_2757_);
v___x_2759_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2675_, v___x_2680_, v___x_2758_);
v___x_2760_ = l_Lean_Elab_Command_elabCommand(v___x_2759_, v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2768_; 
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v___x_2760_, 0);
lean_dec(v_unused_2769_);
v___x_2762_ = v___x_2760_;
v_isShared_2763_ = v_isSharedCheck_2768_;
goto v_resetjp_2761_;
}
else
{
lean_dec(v___x_2760_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2768_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2764_ = lean_box(v___x_2643_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 0, v___x_2764_);
v___x_2766_ = v___x_2762_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2764_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
v_a_2770_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2760_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2760_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v___x_2654_);
lean_dec(v___x_2651_);
v_a_2782_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2663_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2663_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v___x_2790_; 
lean_dec(v_a_2656_);
lean_inc(v_declName_2649_);
v___x_2790_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2649_, v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
if (lean_obj_tag(v_a_2791_) == 1)
{
lean_object* v_val_2792_; size_t v_sz_2793_; size_t v___x_2794_; lean_object* v___x_2795_; 
v_val_2792_ = lean_ctor_get(v_a_2791_, 0);
lean_inc(v_val_2792_);
lean_dec_ref_known(v_a_2791_, 1);
v_sz_2793_ = lean_array_size(v_val_2792_);
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_2793_, v___x_2794_, v_val_2792_, v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2797_; lean_object* v_a_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v_a_2801_; lean_object* v_a_2803_; lean_object* v_quotContext_x3f_2922_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2797_ = l_Lean_Elab_Command_getRef___redArg(v_a_2638_);
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_a_2798_);
lean_dec_ref(v___x_2797_);
v___x_2799_ = l_Lean_SourceInfo_fromRef(v_a_2798_, v___x_2647_);
lean_dec(v_a_2798_);
v___x_2800_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2638_);
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref(v___x_2800_);
v_quotContext_x3f_2922_ = lean_ctor_get(v_a_2638_, 5);
if (lean_obj_tag(v_quotContext_x3f_2922_) == 0)
{
lean_object* v___x_2923_; lean_object* v_a_2924_; 
v___x_2923_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2639_);
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref(v___x_2923_);
v_a_2803_ = v_a_2924_;
goto v___jp_2802_;
}
else
{
lean_object* v_val_2925_; 
v_val_2925_ = lean_ctor_get(v_quotContext_x3f_2922_, 0);
lean_inc(v_val_2925_);
v_a_2803_ = v_val_2925_;
goto v___jp_2802_;
}
v___jp_2802_:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; size_t v_sz_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2804_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__4));
v___x_2805_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__73));
v___x_2807_ = lean_obj_once(&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74, &l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74_once, _init_l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__74);
lean_inc_n(v___x_2799_, 47);
v___x_2808_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2799_);
lean_ctor_set(v___x_2808_, 1, v___x_2806_);
lean_ctor_set(v___x_2808_, 2, v___x_2807_);
lean_inc_ref_n(v___x_2808_, 22);
v___x_2809_ = l_Lean_Syntax_node7(v___x_2799_, v___x_2805_, v___x_2808_, v___x_2808_, v___x_2808_, v___x_2808_, v___x_2808_, v___x_2808_, v___x_2808_);
v___x_2810_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2811_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2812_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__82));
v___x_2813_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2812_, v___x_2808_);
v___x_2814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2799_);
lean_ctor_set(v___x_2814_, 1, v___x_2810_);
v___x_2815_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__90));
v___x_2816_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__92));
v___x_2817_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__37));
v___x_2818_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2799_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
v___x_2819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_2820_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2821_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2801_, 4);
lean_inc_n(v_a_2803_, 4);
v___x_2822_ = l_Lean_addMacroScope(v_a_2803_, v___x_2821_, v_a_2801_);
v___x_2823_ = lean_box(0);
v___x_2824_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2825_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2799_);
lean_ctor_set(v___x_2825_, 1, v___x_2820_);
lean_ctor_set(v___x_2825_, 2, v___x_2822_);
lean_ctor_set(v___x_2825_, 3, v___x_2824_);
v___x_2826_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2651_);
v___x_2827_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2819_, v___x_2825_, v___x_2826_);
v___x_2828_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2816_, v___x_2818_, v___x_2827_);
v___x_2829_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2815_, v___x_2808_, v___x_2828_);
v___x_2830_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2831_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2799_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1));
v___x_2835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2836_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__13, &l_Lasm_JS_Meta_mkFromJS___closed__13_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__13);
v___x_2837_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2838_ = l_Lean_addMacroScope(v_a_2803_, v___x_2837_, v_a_2801_);
v___x_2839_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2799_);
lean_ctor_set(v___x_2839_, 1, v___x_2836_);
lean_ctor_set(v___x_2839_, 2, v___x_2838_);
lean_ctor_set(v___x_2839_, 3, v___x_2823_);
v___x_2840_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2835_, v___x_2839_, v___x_2808_);
v___x_2841_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16);
v___x_2842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2843_ = l_Lean_addMacroScope(v_a_2803_, v___x_2842_, v_a_2801_);
v___x_2844_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2799_);
lean_ctor_set(v___x_2844_, 1, v___x_2841_);
lean_ctor_set(v___x_2844_, 2, v___x_2843_);
lean_ctor_set(v___x_2844_, 3, v___x_2823_);
lean_inc_ref(v___x_2844_);
v___x_2845_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2844_);
v___x_2846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______macroRules__Lean__Parser__Command__declaration__1___closed__40));
v___x_2848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2799_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2850_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2799_);
lean_ctor_set(v___x_2851_, 1, v___x_2849_);
v___x_2852_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2853_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2852_, v___x_2808_, v___x_2844_);
v___x_2854_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2853_);
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__29));
v___x_2856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2799_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_2858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v_sz_2859_ = lean_array_size(v_a_2796_);
v___x_2860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2859_, v___x_2794_, v_a_2796_);
v___x_2861_ = l_Array_append___redArg(v___x_2807_, v___x_2860_);
lean_dec_ref(v___x_2860_);
v___x_2862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
v___x_2863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2799_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
v___x_2864_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__30));
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__31));
v___x_2866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2799_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2864_, v___x_2866_);
v___x_2868_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2867_);
v___x_2869_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2868_);
v___x_2870_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2871_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2799_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__33, &l_Lasm_JS_Meta_mkFromJS___closed__33_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__33);
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__35));
v___x_2874_ = l_Lean_addMacroScope(v_a_2803_, v___x_2873_, v_a_2801_);
v___x_2875_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__39));
v___x_2876_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2799_);
lean_ctor_set(v___x_2876_, 1, v___x_2872_);
lean_ctor_set(v___x_2876_, 2, v___x_2874_);
lean_ctor_set(v___x_2876_, 3, v___x_2875_);
v___x_2877_ = ((lean_object*)(l_Lasm_JS_Meta_lasmJsRecord___closed__7));
v___x_2878_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__40));
v___x_2879_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2799_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2877_, v___x_2879_);
v___x_2881_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2806_, v___x_2880_);
v___x_2882_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2819_, v___x_2876_, v___x_2881_);
v___x_2883_ = l_Lean_Syntax_node4(v___x_2799_, v___x_2858_, v___x_2863_, v___x_2869_, v___x_2871_, v___x_2882_);
v___x_2884_ = lean_array_push(v___x_2861_, v___x_2883_);
v___x_2885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2799_);
lean_ctor_set(v___x_2885_, 1, v___x_2806_);
lean_ctor_set(v___x_2885_, 2, v___x_2884_);
v___x_2886_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2857_, v___x_2885_);
v___x_2887_ = l_Lean_Syntax_node6(v___x_2799_, v___x_2850_, v___x_2851_, v___x_2808_, v___x_2808_, v___x_2854_, v___x_2856_, v___x_2886_);
lean_inc_ref(v___x_2848_);
v___x_2888_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2846_, v___x_2848_, v___x_2808_, v___x_2887_);
v___x_2889_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2806_, v___x_2845_, v___x_2808_, v___x_2888_);
v___x_2890_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2834_, v___x_2840_, v___x_2889_);
v___x_2891_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__27, &l_Lasm_JS_Meta_mkFromJS___closed__27_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__27);
v___x_2892_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_2893_ = l_Lean_addMacroScope(v_a_2803_, v___x_2892_, v_a_2801_);
v___x_2894_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2799_);
lean_ctor_set(v___x_2894_, 1, v___x_2891_);
lean_ctor_set(v___x_2894_, 2, v___x_2893_);
lean_ctor_set(v___x_2894_, 3, v___x_2823_);
v___x_2895_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2835_, v___x_2894_, v___x_2808_);
v___x_2896_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2846_, v___x_2848_, v___x_2808_, v___x_2654_);
v___x_2897_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2806_, v___x_2808_, v___x_2808_, v___x_2896_);
v___x_2898_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2834_, v___x_2895_, v___x_2897_);
v___x_2899_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2806_, v___x_2890_, v___x_2808_, v___x_2898_);
v___x_2900_ = l_Lean_Syntax_node1(v___x_2799_, v___x_2833_, v___x_2899_);
v___x_2901_ = l_Lean_Syntax_node3(v___x_2799_, v___x_2830_, v___x_2832_, v___x_2900_, v___x_2808_);
v___x_2902_ = l_Lean_Syntax_node6(v___x_2799_, v___x_2811_, v___x_2813_, v___x_2814_, v___x_2808_, v___x_2808_, v___x_2829_, v___x_2901_);
v___x_2903_ = l_Lean_Syntax_node2(v___x_2799_, v___x_2804_, v___x_2809_, v___x_2902_);
v___x_2904_ = l_Lean_Elab_Command_elabCommand(v___x_2903_, v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2912_; 
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v___x_2904_, 0);
lean_dec(v_unused_2913_);
v___x_2906_ = v___x_2904_;
v_isShared_2907_ = v_isSharedCheck_2912_;
goto v_resetjp_2905_;
}
else
{
lean_dec(v___x_2904_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2912_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2908_; lean_object* v___x_2910_; 
v___x_2908_ = lean_box(v___x_2643_);
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 0, v___x_2908_);
v___x_2910_ = v___x_2906_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___x_2908_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
v_a_2914_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2904_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2904_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v___x_2654_);
lean_dec(v___x_2651_);
v_a_2926_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2795_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2795_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
else
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec(v_a_2791_);
lean_dec(v___x_2654_);
lean_dec(v___x_2651_);
v___x_2934_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__42, &l_Lasm_JS_Meta_mkFromJS___closed__42_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__42);
lean_inc(v_declName_2649_);
v___x_2935_ = l_Lean_MessageData_ofName(v_declName_2649_);
v___x_2936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2934_);
lean_ctor_set(v___x_2936_, 1, v___x_2935_);
v___x_2937_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
v___x_2938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2936_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2938_, v_a_2638_, v_a_2639_);
return v___x_2939_;
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_dec(v___x_2654_);
lean_dec(v___x_2651_);
v_a_2940_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2790_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2790_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_a_2948_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2650_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2650_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object* v_declNames_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Lasm_JS_Meta_mkFromJS(v_declNames_2956_, v_a_2957_, v_a_2958_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec_ref(v_declNames_2956_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2964_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
v___x_2965_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2966_ = l_Lean_Elab_registerDerivingHandler(v___x_2964_, v___x_2965_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
lean_dec_ref_known(v___x_2966_, 1);
v___x_2967_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
v___x_2968_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_2969_ = l_Lean_Elab_registerDerivingHandler(v___x_2967_, v___x_2968_);
return v___x_2969_;
}
else
{
return v___x_2966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object* v_a_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
return v_res_2971_;
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
