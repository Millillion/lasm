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
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at___00Lean_Elab_elabDeriving_spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__0 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__0_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__1 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__2 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__2_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__3 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__3_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__4 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__4_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__5 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__5_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "noinline"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__6 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__7;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__6_value),LEAN_SCALAR_PTR_LITERAL(7, 180, 58, 213, 246, 72, 64, 0)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__8 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__8_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__11_value;
static const lean_array_object l_Lasm_JS_Meta_elabBinding___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__12_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__14_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__15_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__16_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__17_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__18_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__20_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__21_value;
static const lean_array_object l_Lasm_JS_Meta_elabBinding___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__22_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__23_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__24;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(251, 206, 108, 50, 170, 163, 91, 135)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__25_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Bindable.arity"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__26_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__27;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__29_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__30_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__31 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__31_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__32 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__32_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__33 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__34 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__35 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__36 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__37_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__36_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__37 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__37_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Bindable.bind"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__38 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__38_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__39;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Bindable"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__40 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__40_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bind"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__41 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__41_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__40_value),LEAN_SCALAR_PTR_LITERAL(90, 75, 191, 255, 81, 129, 239, 41)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__42_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__41_value),LEAN_SCALAR_PTR_LITERAL(199, 99, 207, 172, 181, 53, 165, 122)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__42 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__42_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__43 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__43_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__44 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__44_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__45 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__45_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__45_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__46 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__46_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__47 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__47_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__48_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__47_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__48 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__48_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__49 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__49_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__50 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__50_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__51;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__50_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__52 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__52_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__53 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__53_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__54 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__54_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__55 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__55_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__56_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__55_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__56 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__56_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__57 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__57_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__58;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__59 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__59_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__60_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__59_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__60 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__60_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__61 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__61_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__62_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__61_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__62 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__62_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__63 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__63_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__64_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__63_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__64 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__64_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__65 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__65_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__66;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__65_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__67 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__67_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__68 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__68_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__69_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__68_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__69 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__69_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__70;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 181, 135, 119, 7, 66, 71)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__71 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__71_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__72;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(13, 173, 251, 55, 140, 124, 51, 22)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__73 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__73_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__74;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(1, 117, 5, 82, 228, 105, 80, 180)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__75 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__75_value;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__76 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__76_value;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__77_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__76_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__77_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__6_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__77 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__77_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__78;
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__76_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lasm_JS_Meta_elabBinding___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__79_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_BindingInfo_json___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__79 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__79_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__80;
static const lean_string_object l_Lasm_JS_Meta_elabBinding___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "new "};
static const lean_object* l_Lasm_JS_Meta_elabBinding___closed__81 = (const lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__81_value;
static lean_once_cell_t l_Lasm_JS_Meta_elabBinding___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_elabBinding___closed__82;
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__20_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__21_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__2_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__23_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__11_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__14_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value_aux_2),((lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15 = (const lean_object*)&l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15_value;
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Data.string"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Data"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(132, 62, 212, 150, 36, 99, 222, 53)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(25, 204, 101, 215, 50, 3, 21, 19)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__9_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__4_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__1_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
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
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__16_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__10_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__11_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__12 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__12_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__13_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__14_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__16_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__15_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__16_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Data.object"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__17_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__18;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "object"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(132, 62, 212, 150, 36, 99, 222, 53)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__19_value),LEAN_SCALAR_PTR_LITERAL(151, 222, 9, 64, 167, 79, 153, 97)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__20_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__23_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__21_value),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__23_value)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__24_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__25 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__25_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__17_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__18_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__27 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__27_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__29_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__30_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__31 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__31_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__32 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkToJS___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__33_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__32_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__33 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__33_value;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS deriving ToJS: "};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__34 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__34_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__35;
static const lean_string_object l_Lasm_JS_Meta_mkToJS___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = " must be a structure or an enumeration (constructors without fields)"};
static const lean_object* l_Lasm_JS_Meta_mkToJS___closed__36 = (const lean_object*)&l_Lasm_JS_Meta_mkToJS___closed__36_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkToJS___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkToJS___closed__37;
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
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.readField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "readField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(159, 136, 0, 105, 94, 157, 95, 17)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(55, 92, 114, 160, 80, 73, 219, 206)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 234, 148, 175, 115, 149, 2, 231)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS deriving: no projection for "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20;
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
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__8_value),LEAN_SCALAR_PTR_LITERAL(164, 171, 248, 18, 201, 160, 43, 108)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__9 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__9_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__10 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__10_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fromJS"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__11 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__12;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__11_value),LEAN_SCALAR_PTR_LITERAL(50, 45, 246, 1, 0, 145, 229, 27)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__13 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__13_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__14 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__14_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__15 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__15_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__16 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__16_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__17 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__17_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__18 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__18_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__19 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__19_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__20 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__20_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__21 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__21_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__22 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__28_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__23 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__23_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__24 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__25;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__24_value),LEAN_SCALAR_PTR_LITERAL(15, 81, 255, 12, 18, 105, 22, 251)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__26 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__26_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__27 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__33_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__34_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_1),((lean_object*)&l_Lasm_JS_Meta_elabBinding___closed__35_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value_aux_2),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__27_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__28 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__28_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__29 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__29_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Except.error"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__30 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__30_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__31;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__32 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__33_value_aux_0),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__32_value),LEAN_SCALAR_PTR_LITERAL(132, 223, 190, 30, 132, 210, 24, 71)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__33 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__33_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__34 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__33_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__35 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__36 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Meta_mkFromJS___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__34_value),((lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__36_value)}};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__37 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__37_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\"not one of the constructor names\""};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__38 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__38_value;
static const lean_string_object l_Lasm_JS_Meta_mkFromJS___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS deriving FromJS: "};
static const lean_object* l_Lasm_JS_Meta_mkFromJS___closed__39 = (const lean_object*)&l_Lasm_JS_Meta_mkFromJS___closed__39_value;
static lean_once_cell_t l_Lasm_JS_Meta_mkFromJS___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Meta_mkFromJS___closed__40;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__0(lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v___x_487_; lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_497_; 
v___x_487_ = l_Lean_Elab_Command_getRef___redArg(v___y_484_);
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_497_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_495_; 
v___x_492_ = 0;
v___x_493_ = l_Lean_SourceInfo_fromRef(v_a_488_, v___x_492_);
lean_dec(v_a_488_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_493_);
v___x_495_ = v___x_490_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__0___boxed(lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lasm_JS_Meta_elabBinding___lam__0(v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__1(lean_object* v_n_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_realizeGlobalConstNoOverload(v_n_502_, v___y_507_, v___y_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__1___boxed(lean_object* v_n_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lasm_JS_Meta_elabBinding___lam__1(v_n_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__2(lean_object* v___x_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_explicitArity(v___x_520_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___lam__2___boxed(lean_object* v___x_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lasm_JS_Meta_elabBinding___lam__2(v___x_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
return v_res_537_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__7(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__6));
v___x_546_ = l_String_toRawSubstring_x27(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__24(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_567_ = l_String_toRawSubstring_x27(v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__27(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__26));
v___x_572_ = l_String_toRawSubstring_x27(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__39(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__38));
v___x_590_ = l_String_toRawSubstring_x27(v___x_589_);
return v___x_590_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__51(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__50));
v___x_616_ = l_String_toRawSubstring_x27(v___x_615_);
return v___x_616_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__58(void){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Array_mkArray0___redArg();
return v___x_628_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__66(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__65));
v___x_649_ = l_String_toRawSubstring_x27(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__70(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__10));
v___x_659_ = l_String_toRawSubstring_x27(v___x_658_);
return v___x_659_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__72(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__13));
v___x_663_ = l_String_toRawSubstring_x27(v___x_662_);
return v___x_663_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__74(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__16));
v___x_667_ = l_String_toRawSubstring_x27(v___x_666_);
return v___x_667_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__78(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__77));
v___x_675_ = l_Lean_mkCIdent(v___x_674_);
return v___x_675_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__80(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__79));
v___x_680_ = l_Lean_mkCIdent(v___x_679_);
return v___x_680_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_elabBinding___closed__82(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__81));
v___x_683_ = lean_string_utf8_byte_size(v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding(lean_object* v_doc_x3f_684_, lean_object* v_m_685_, lean_object* v_e_686_, lean_object* v_n_687_, lean_object* v_t_688_, uint8_t v_isPrivate_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; uint8_t v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___f_733_; uint8_t v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; uint8_t v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; uint8_t v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; uint8_t v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; uint8_t v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; uint8_t v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v_a_877_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; uint8_t v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; uint8_t v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; uint8_t v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; uint8_t v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v_a_991_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; uint8_t v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; uint8_t v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; uint8_t v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; uint8_t v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v_a_1131_; uint8_t v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; uint8_t v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; uint8_t v_fst_1222_; lean_object* v_snd_1223_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v_spec_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
lean_inc(v_n_687_);
v___f_733_ = lean_alloc_closure((void*)(l_Lasm_JS_Meta_elabBinding___lam__1___boxed), 8, 1);
lean_closure_set(v___f_733_, 0, v_n_687_);
v___x_1235_ = l_Lean_TSyntax_getString(v_e_686_);
v___x_1236_ = lean_unsigned_to_nat(0u);
v___x_1237_ = lean_string_utf8_byte_size(v___x_1235_);
v___x_1238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1235_);
lean_ctor_set(v___x_1238_, 1, v___x_1236_);
lean_ctor_set(v___x_1238_, 2, v___x_1237_);
v___x_1239_ = l_String_Slice_trimAscii(v___x_1238_);
v_spec_1240_ = l_String_Slice_toString(v___x_1239_);
lean_dec_ref(v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__81));
v___x_1242_ = lean_string_utf8_byte_size(v_spec_1240_);
v___x_1243_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__82, &l_Lasm_JS_Meta_elabBinding___closed__82_once, _init_l_Lasm_JS_Meta_elabBinding___closed__82);
v___x_1244_ = lean_nat_dec_le(v___x_1243_, v___x_1242_);
if (v___x_1244_ == 0)
{
v_fst_1222_ = v___x_1244_;
v_snd_1223_ = v_spec_1240_;
goto v___jp_1221_;
}
else
{
uint8_t v___x_1245_; 
v___x_1245_ = lean_string_memcmp(v_spec_1240_, v___x_1241_, v___x_1236_, v___x_1236_, v___x_1243_);
if (v___x_1245_ == 0)
{
v_fst_1222_ = v___x_1245_;
v_snd_1223_ = v_spec_1240_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1246_ = lean_unsigned_to_nat(4u);
lean_inc_ref(v_spec_1240_);
v___x_1247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1247_, 0, v_spec_1240_);
lean_ctor_set(v___x_1247_, 1, v___x_1236_);
lean_ctor_set(v___x_1247_, 2, v___x_1242_);
v___x_1248_ = l_String_Slice_Pos_nextn(v___x_1247_, v___x_1236_, v___x_1246_);
lean_dec_ref_known(v___x_1247_, 3);
v___x_1249_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1249_, 0, v_spec_1240_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
lean_ctor_set(v___x_1249_, 2, v___x_1242_);
v___x_1250_ = l_String_Slice_trimAscii(v___x_1249_);
v___x_1251_ = l_String_Slice_toString(v___x_1250_);
lean_dec_ref(v___x_1250_);
v_fst_1222_ = v___x_1245_;
v_snd_1223_ = v___x_1251_;
goto v___jp_1221_;
}
}
v___jp_693_:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v_env_704_; lean_object* v_messages_705_; lean_object* v_scopes_706_; lean_object* v_usedQuotCtxts_707_; lean_object* v_nextMacroScope_708_; lean_object* v_maxRecDepth_709_; lean_object* v_ngen_710_; lean_object* v_auxDeclNGen_711_; lean_object* v_infoState_712_; lean_object* v_traceState_713_; lean_object* v_snapshotTasks_714_; lean_object* v_prevLinterStates_715_; lean_object* v_codeQualityEntryTasks_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_732_; 
v___x_702_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_702_, 0, v___y_699_);
lean_ctor_set(v___x_702_, 1, v___y_698_);
lean_ctor_set(v___x_702_, 2, v___y_694_);
lean_ctor_set(v___x_702_, 3, v___y_696_);
lean_ctor_set(v___x_702_, 4, v___y_700_);
lean_ctor_set(v___x_702_, 5, v___y_701_);
lean_ctor_set_uint8(v___x_702_, sizeof(void*)*6, v___y_697_);
v___x_703_ = lean_st_ref_take(v___y_695_);
v_env_704_ = lean_ctor_get(v___x_703_, 0);
v_messages_705_ = lean_ctor_get(v___x_703_, 1);
v_scopes_706_ = lean_ctor_get(v___x_703_, 2);
v_usedQuotCtxts_707_ = lean_ctor_get(v___x_703_, 3);
v_nextMacroScope_708_ = lean_ctor_get(v___x_703_, 4);
v_maxRecDepth_709_ = lean_ctor_get(v___x_703_, 5);
v_ngen_710_ = lean_ctor_get(v___x_703_, 6);
v_auxDeclNGen_711_ = lean_ctor_get(v___x_703_, 7);
v_infoState_712_ = lean_ctor_get(v___x_703_, 8);
v_traceState_713_ = lean_ctor_get(v___x_703_, 9);
v_snapshotTasks_714_ = lean_ctor_get(v___x_703_, 10);
v_prevLinterStates_715_ = lean_ctor_get(v___x_703_, 11);
v_codeQualityEntryTasks_716_ = lean_ctor_get(v___x_703_, 12);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_732_ == 0)
{
v___x_718_ = v___x_703_;
v_isShared_719_ = v_isSharedCheck_732_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_codeQualityEntryTasks_716_);
lean_inc(v_prevLinterStates_715_);
lean_inc(v_snapshotTasks_714_);
lean_inc(v_traceState_713_);
lean_inc(v_infoState_712_);
lean_inc(v_auxDeclNGen_711_);
lean_inc(v_ngen_710_);
lean_inc(v_maxRecDepth_709_);
lean_inc(v_nextMacroScope_708_);
lean_inc(v_usedQuotCtxts_707_);
lean_inc(v_scopes_706_);
lean_inc(v_messages_705_);
lean_inc(v_env_704_);
lean_dec(v___x_703_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_732_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v_toEnvExtension_721_; lean_object* v_asyncMode_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_720_ = l_Lasm_JS_Meta_bindingExtension;
v_toEnvExtension_721_ = lean_ctor_get(v___x_720_, 0);
v_asyncMode_722_ = lean_ctor_get(v_toEnvExtension_721_, 2);
v___x_723_ = lean_box(0);
v___x_724_ = l_Lasm_JS_Meta_BindingInfo_json(v___x_702_);
v___x_725_ = lean_box(0);
v___x_726_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_720_, v_env_704_, v___x_724_, v_asyncMode_722_, v___x_725_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v___x_726_);
v___x_728_ = v___x_718_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_messages_705_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v_scopes_706_);
lean_ctor_set(v_reuseFailAlloc_731_, 3, v_usedQuotCtxts_707_);
lean_ctor_set(v_reuseFailAlloc_731_, 4, v_nextMacroScope_708_);
lean_ctor_set(v_reuseFailAlloc_731_, 5, v_maxRecDepth_709_);
lean_ctor_set(v_reuseFailAlloc_731_, 6, v_ngen_710_);
lean_ctor_set(v_reuseFailAlloc_731_, 7, v_auxDeclNGen_711_);
lean_ctor_set(v_reuseFailAlloc_731_, 8, v_infoState_712_);
lean_ctor_set(v_reuseFailAlloc_731_, 9, v_traceState_713_);
lean_ctor_set(v_reuseFailAlloc_731_, 10, v_snapshotTasks_714_);
lean_ctor_set(v_reuseFailAlloc_731_, 11, v_prevLinterStates_715_);
lean_ctor_set(v_reuseFailAlloc_731_, 12, v_codeQualityEntryTasks_716_);
v___x_728_ = v_reuseFailAlloc_731_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_st_ref_put(v___y_695_, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_723_);
return v___x_730_;
}
}
}
v___jp_734_:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_733_, v___y_740_, v___y_741_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v___x_744_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc_n(v_a_743_, 2);
lean_dec_ref_known(v___x_742_, 1);
v___x_744_ = l_Lean_getConstInfo___at___00Lean_Elab_elabDeriving_spec__3(v_a_743_, v___y_740_, v___y_741_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = l_Lean_ConstantInfo_type(v_a_745_);
lean_dec(v_a_745_);
v___f_747_ = lean_alloc_closure((void*)(l_Lasm_JS_Meta_elabBinding___lam__2___boxed), 8, 1);
lean_closure_set(v___f_747_, 0, v___x_746_);
v___x_748_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_747_, v___y_740_, v___y_741_);
if (lean_obj_tag(v___x_748_) == 0)
{
if (v___y_735_ == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; 
lean_dec_ref(v___y_737_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___y_694_ = v___y_736_;
v___y_695_ = v___y_741_;
v___y_696_ = v_a_749_;
v___y_697_ = v___y_738_;
v___y_698_ = v___y_739_;
v___y_699_ = v_a_743_;
v___y_700_ = v___x_750_;
v___y_701_ = v___x_750_;
goto v___jp_693_;
}
else
{
lean_object* v_a_751_; lean_object* v_fileName_752_; 
v_a_751_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_748_, 1);
v_fileName_752_ = lean_ctor_get(v___y_740_, 0);
lean_inc_ref(v_fileName_752_);
v___y_694_ = v___y_736_;
v___y_695_ = v___y_741_;
v___y_696_ = v_a_751_;
v___y_697_ = v___y_738_;
v___y_698_ = v___y_739_;
v___y_699_ = v_a_743_;
v___y_700_ = v___y_737_;
v___y_701_ = v_fileName_752_;
goto v___jp_693_;
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_a_743_);
lean_dec_ref(v___y_739_);
lean_dec_ref(v___y_737_);
lean_dec_ref(v___y_736_);
v_a_753_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_748_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_748_);
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
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_a_743_);
lean_dec_ref(v___y_739_);
lean_dec_ref(v___y_737_);
lean_dec_ref(v___y_736_);
v_a_761_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_744_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_744_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
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
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v___y_739_);
lean_dec_ref(v___y_737_);
lean_dec_ref(v___y_736_);
v_a_769_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_742_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_742_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
v___jp_777_:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
lean_inc_ref_n(v___y_797_, 2);
v___x_800_ = l_Array_append___redArg(v___y_797_, v___y_799_);
lean_dec_ref(v___y_799_);
lean_inc_n(v___y_786_, 5);
lean_inc_n(v___y_791_, 21);
v___x_801_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_801_, 0, v___y_791_);
lean_ctor_set(v___x_801_, 1, v___y_786_);
lean_ctor_set(v___x_801_, 2, v___x_800_);
v___x_802_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__0));
lean_inc_ref_n(v___y_778_, 4);
lean_inc_ref_n(v___y_781_, 10);
lean_inc_ref_n(v___y_787_, 10);
v___x_803_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_778_, v___x_802_);
v___x_804_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__1));
v___x_805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_805_, 0, v___y_791_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__2));
v___x_807_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_778_, v___x_806_);
v___x_808_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__3));
v___x_809_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_778_, v___x_808_);
v___x_810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_810_, 0, v___y_791_);
lean_ctor_set(v___x_810_, 1, v___y_786_);
lean_ctor_set(v___x_810_, 2, v___y_797_);
lean_inc_ref_n(v___x_810_, 11);
v___x_811_ = l_Lean_Syntax_node1(v___y_791_, v___x_809_, v___x_810_);
v___x_812_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__4));
v___x_813_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__5));
v___x_814_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___x_812_, v___x_813_);
v___x_815_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__7, &l_Lasm_JS_Meta_elabBinding___closed__7_once, _init_l_Lasm_JS_Meta_elabBinding___closed__7);
v___x_816_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__8));
v___x_817_ = l_Lean_addMacroScope(v___y_798_, v___x_816_, v___y_779_);
lean_inc(v___y_790_);
v___x_818_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_818_, 0, v___y_791_);
lean_ctor_set(v___x_818_, 1, v___x_815_);
lean_ctor_set(v___x_818_, 2, v___x_817_);
lean_ctor_set(v___x_818_, 3, v___y_790_);
v___x_819_ = l_Lean_Syntax_node2(v___y_791_, v___x_814_, v___x_818_, v___x_810_);
v___x_820_ = l_Lean_Syntax_node2(v___y_791_, v___x_807_, v___x_811_, v___x_819_);
v___x_821_ = l_Lean_Syntax_node1(v___y_791_, v___y_786_, v___x_820_);
lean_inc_ref(v___y_792_);
v___x_822_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_822_, 0, v___y_791_);
lean_ctor_set(v___x_822_, 1, v___y_792_);
v___x_823_ = l_Lean_Syntax_node3(v___y_791_, v___x_803_, v___x_805_, v___x_821_, v___x_822_);
v___x_824_ = l_Lean_Syntax_node1(v___y_791_, v___y_786_, v___x_823_);
v___x_825_ = l_Lean_Syntax_node7(v___y_791_, v___y_795_, v___x_801_, v___x_824_, v___x_810_, v___x_810_, v___x_810_, v___x_810_, v___x_810_);
v___x_826_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__9));
lean_inc_ref_n(v___y_796_, 3);
v___x_827_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_796_, v___x_826_);
v___x_828_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__10));
v___x_829_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_829_, 0, v___y_791_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__11));
v___x_831_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_796_, v___x_830_);
v___x_832_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__12));
lean_inc(v___y_782_);
v___x_833_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_833_, 0, v___y_782_);
lean_ctor_set(v___x_833_, 1, v___y_786_);
lean_ctor_set(v___x_833_, 2, v___x_832_);
v___x_834_ = lean_unsigned_to_nat(2u);
v___x_835_ = lean_mk_empty_array_with_capacity(v___x_834_);
v___x_836_ = lean_array_push(v___x_835_, v_n_687_);
v___x_837_ = lean_array_push(v___x_836_, v___x_833_);
v___x_838_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_838_, 0, v___y_782_);
lean_ctor_set(v___x_838_, 1, v___x_831_);
lean_ctor_set(v___x_838_, 2, v___x_837_);
v___x_839_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__13));
v___x_840_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_796_, v___x_839_);
v___x_841_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__14));
v___x_842_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_778_, v___x_841_);
v___x_843_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_844_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_844_, 0, v___y_791_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = l_Lean_Syntax_node2(v___y_791_, v___x_842_, v___x_844_, v_t_688_);
v___x_846_ = l_Lean_Syntax_node1(v___y_791_, v___y_786_, v___x_845_);
v___x_847_ = l_Lean_Syntax_node2(v___y_791_, v___x_840_, v___x_810_, v___x_846_);
v___x_848_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__16));
v___x_849_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___y_796_, v___x_848_);
lean_inc_ref(v___y_788_);
v___x_850_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_850_, 0, v___y_791_);
lean_ctor_set(v___x_850_, 1, v___y_788_);
v___x_851_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__17));
v___x_852_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__18));
v___x_853_ = l_Lean_Name_mkStr4(v___y_787_, v___y_781_, v___x_851_, v___x_852_);
v___x_854_ = l_Lean_Syntax_node2(v___y_791_, v___x_853_, v___x_810_, v___x_810_);
v___x_855_ = l_Lean_Syntax_node4(v___y_791_, v___x_849_, v___x_850_, v___y_789_, v___x_854_, v___x_810_);
v___x_856_ = l_Lean_Syntax_node5(v___y_791_, v___x_827_, v___x_829_, v___x_838_, v___x_847_, v___x_855_, v___x_810_);
v___x_857_ = l_Lean_Syntax_node2(v___y_791_, v___y_784_, v___x_825_, v___x_856_);
v___x_858_ = l_Lean_Elab_Command_elabCommand(v___x_857_, v_a_690_, v_a_691_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_dec_ref_known(v___x_858_, 1);
v___y_735_ = v___y_783_;
v___y_736_ = v___y_785_;
v___y_737_ = v___y_780_;
v___y_738_ = v___y_794_;
v___y_739_ = v___y_793_;
v___y_740_ = v_a_690_;
v___y_741_ = v_a_691_;
goto v___jp_734_;
}
else
{
lean_dec_ref(v___y_793_);
lean_dec_ref(v___y_785_);
lean_dec_ref(v___y_780_);
lean_dec_ref(v___f_733_);
return v___x_858_;
}
}
v___jp_859_:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_878_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__19));
v___x_879_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__20));
lean_inc_ref_n(v___y_863_, 2);
lean_inc_ref_n(v___y_867_, 2);
v___x_880_ = l_Lean_Name_mkStr4(v___y_867_, v___y_863_, v___x_878_, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__21));
v___x_882_ = l_Lean_Name_mkStr4(v___y_867_, v___y_863_, v___x_878_, v___x_881_);
if (lean_obj_tag(v_doc_x3f_684_) == 1)
{
lean_object* v_val_883_; lean_object* v___x_884_; 
v_val_883_ = lean_ctor_get(v_doc_x3f_684_, 0);
lean_inc(v_val_883_);
lean_dec_ref_known(v_doc_x3f_684_, 1);
v___x_884_ = l_Array_mkArray1___redArg(v_val_883_);
v___y_778_ = v___y_860_;
v___y_779_ = v___y_861_;
v___y_780_ = v___y_862_;
v___y_781_ = v___y_863_;
v___y_782_ = v___y_864_;
v___y_783_ = v___y_865_;
v___y_784_ = v___x_880_;
v___y_785_ = v___y_866_;
v___y_786_ = v___y_868_;
v___y_787_ = v___y_867_;
v___y_788_ = v___y_869_;
v___y_789_ = v___y_870_;
v___y_790_ = v___y_871_;
v___y_791_ = v___y_873_;
v___y_792_ = v___y_872_;
v___y_793_ = v___y_875_;
v___y_794_ = v___y_874_;
v___y_795_ = v___x_882_;
v___y_796_ = v___x_878_;
v___y_797_ = v___y_876_;
v___y_798_ = v_a_877_;
v___y_799_ = v___x_884_;
goto v___jp_777_;
}
else
{
lean_object* v___x_885_; 
lean_dec(v_doc_x3f_684_);
v___x_885_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__22));
v___y_778_ = v___y_860_;
v___y_779_ = v___y_861_;
v___y_780_ = v___y_862_;
v___y_781_ = v___y_863_;
v___y_782_ = v___y_864_;
v___y_783_ = v___y_865_;
v___y_784_ = v___x_880_;
v___y_785_ = v___y_866_;
v___y_786_ = v___y_868_;
v___y_787_ = v___y_867_;
v___y_788_ = v___y_869_;
v___y_789_ = v___y_870_;
v___y_790_ = v___y_871_;
v___y_791_ = v___y_873_;
v___y_792_ = v___y_872_;
v___y_793_ = v___y_875_;
v___y_794_ = v___y_874_;
v___y_795_ = v___x_882_;
v___y_796_ = v___x_878_;
v___y_797_ = v___y_876_;
v___y_798_ = v_a_877_;
v___y_799_ = v___x_885_;
goto v___jp_777_;
}
}
v___jp_886_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
lean_inc_ref_n(v___y_907_, 2);
v___x_909_ = l_Array_append___redArg(v___y_907_, v___y_908_);
lean_dec_ref(v___y_908_);
lean_inc_n(v___y_895_, 6);
lean_inc_n(v___y_892_, 24);
v___x_910_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_910_, 0, v___y_892_);
lean_ctor_set(v___x_910_, 1, v___y_895_);
lean_ctor_set(v___x_910_, 2, v___x_909_);
v___x_911_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__0));
lean_inc_ref_n(v___y_887_, 4);
lean_inc_ref_n(v___y_890_, 11);
lean_inc_ref_n(v___y_896_, 11);
v___x_912_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_887_, v___x_911_);
v___x_913_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__1));
v___x_914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_914_, 0, v___y_892_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__2));
v___x_916_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_887_, v___x_915_);
v___x_917_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__3));
v___x_918_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_887_, v___x_917_);
v___x_919_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_919_, 0, v___y_892_);
lean_ctor_set(v___x_919_, 1, v___y_895_);
lean_ctor_set(v___x_919_, 2, v___y_907_);
lean_inc_ref_n(v___x_919_, 10);
v___x_920_ = l_Lean_Syntax_node1(v___y_892_, v___x_918_, v___x_919_);
v___x_921_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__4));
v___x_922_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__5));
v___x_923_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___x_921_, v___x_922_);
v___x_924_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__7, &l_Lasm_JS_Meta_elabBinding___closed__7_once, _init_l_Lasm_JS_Meta_elabBinding___closed__7);
v___x_925_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__8));
v___x_926_ = l_Lean_addMacroScope(v___y_906_, v___x_925_, v___y_898_);
lean_inc(v___y_900_);
v___x_927_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_927_, 0, v___y_892_);
lean_ctor_set(v___x_927_, 1, v___x_924_);
lean_ctor_set(v___x_927_, 2, v___x_926_);
lean_ctor_set(v___x_927_, 3, v___y_900_);
v___x_928_ = l_Lean_Syntax_node2(v___y_892_, v___x_923_, v___x_927_, v___x_919_);
v___x_929_ = l_Lean_Syntax_node2(v___y_892_, v___x_916_, v___x_920_, v___x_928_);
v___x_930_ = l_Lean_Syntax_node1(v___y_892_, v___y_895_, v___x_929_);
lean_inc_ref(v___y_901_);
v___x_931_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_931_, 0, v___y_892_);
lean_ctor_set(v___x_931_, 1, v___y_901_);
v___x_932_ = l_Lean_Syntax_node3(v___y_892_, v___x_912_, v___x_914_, v___x_930_, v___x_931_);
v___x_933_ = l_Lean_Syntax_node1(v___y_892_, v___y_895_, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__23));
lean_inc_ref_n(v___y_889_, 4);
v___x_935_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_889_, v___x_934_);
v___x_936_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_936_, 0, v___y_892_);
lean_ctor_set(v___x_936_, 1, v___x_934_);
v___x_937_ = l_Lean_Syntax_node1(v___y_892_, v___x_935_, v___x_936_);
v___x_938_ = l_Lean_Syntax_node1(v___y_892_, v___y_895_, v___x_937_);
v___x_939_ = l_Lean_Syntax_node7(v___y_892_, v___y_905_, v___x_910_, v___x_933_, v___x_938_, v___x_919_, v___x_919_, v___x_919_, v___x_919_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__9));
v___x_941_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_889_, v___x_940_);
v___x_942_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__10));
v___x_943_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_943_, 0, v___y_892_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
v___x_944_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__11));
v___x_945_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_889_, v___x_944_);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__12));
lean_inc(v___y_891_);
v___x_947_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_947_, 0, v___y_891_);
lean_ctor_set(v___x_947_, 1, v___y_895_);
lean_ctor_set(v___x_947_, 2, v___x_946_);
v___x_948_ = lean_unsigned_to_nat(2u);
v___x_949_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_950_ = lean_array_push(v___x_949_, v_n_687_);
v___x_951_ = lean_array_push(v___x_950_, v___x_947_);
v___x_952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_952_, 0, v___y_891_);
lean_ctor_set(v___x_952_, 1, v___x_945_);
lean_ctor_set(v___x_952_, 2, v___x_951_);
v___x_953_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__13));
v___x_954_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_889_, v___x_953_);
v___x_955_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__14));
v___x_956_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_887_, v___x_955_);
v___x_957_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_958_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_958_, 0, v___y_892_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = l_Lean_Syntax_node2(v___y_892_, v___x_956_, v___x_958_, v_t_688_);
v___x_960_ = l_Lean_Syntax_node1(v___y_892_, v___y_895_, v___x_959_);
v___x_961_ = l_Lean_Syntax_node2(v___y_892_, v___x_954_, v___x_919_, v___x_960_);
v___x_962_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__16));
v___x_963_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___y_889_, v___x_962_);
lean_inc_ref(v___y_897_);
v___x_964_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_964_, 0, v___y_892_);
lean_ctor_set(v___x_964_, 1, v___y_897_);
v___x_965_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__17));
v___x_966_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__18));
v___x_967_ = l_Lean_Name_mkStr4(v___y_896_, v___y_890_, v___x_965_, v___x_966_);
v___x_968_ = l_Lean_Syntax_node2(v___y_892_, v___x_967_, v___x_919_, v___x_919_);
v___x_969_ = l_Lean_Syntax_node4(v___y_892_, v___x_963_, v___x_964_, v___y_899_, v___x_968_, v___x_919_);
v___x_970_ = l_Lean_Syntax_node5(v___y_892_, v___x_941_, v___x_943_, v___x_952_, v___x_961_, v___x_969_, v___x_919_);
v___x_971_ = l_Lean_Syntax_node2(v___y_892_, v___y_904_, v___x_939_, v___x_970_);
v___x_972_ = l_Lean_Elab_Command_elabCommand(v___x_971_, v_a_690_, v_a_691_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_dec_ref_known(v___x_972_, 1);
v___y_735_ = v___y_893_;
v___y_736_ = v___y_894_;
v___y_737_ = v___y_888_;
v___y_738_ = v___y_903_;
v___y_739_ = v___y_902_;
v___y_740_ = v_a_690_;
v___y_741_ = v_a_691_;
goto v___jp_734_;
}
else
{
lean_dec_ref(v___y_902_);
lean_dec_ref(v___y_894_);
lean_dec_ref(v___y_888_);
lean_dec_ref(v___f_733_);
return v___x_972_;
}
}
v___jp_973_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_992_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__19));
v___x_993_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__20));
lean_inc_ref_n(v___y_976_, 2);
lean_inc_ref_n(v___y_981_, 2);
v___x_994_ = l_Lean_Name_mkStr4(v___y_981_, v___y_976_, v___x_992_, v___x_993_);
v___x_995_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__21));
v___x_996_ = l_Lean_Name_mkStr4(v___y_981_, v___y_976_, v___x_992_, v___x_995_);
if (lean_obj_tag(v_doc_x3f_684_) == 1)
{
lean_object* v_val_997_; lean_object* v___x_998_; 
v_val_997_ = lean_ctor_get(v_doc_x3f_684_, 0);
lean_inc(v_val_997_);
lean_dec_ref_known(v_doc_x3f_684_, 1);
v___x_998_ = l_Array_mkArray1___redArg(v_val_997_);
v___y_887_ = v___y_974_;
v___y_888_ = v___y_975_;
v___y_889_ = v___x_992_;
v___y_890_ = v___y_976_;
v___y_891_ = v___y_977_;
v___y_892_ = v___y_978_;
v___y_893_ = v___y_979_;
v___y_894_ = v___y_980_;
v___y_895_ = v___y_982_;
v___y_896_ = v___y_981_;
v___y_897_ = v___y_983_;
v___y_898_ = v___y_984_;
v___y_899_ = v___y_985_;
v___y_900_ = v___y_986_;
v___y_901_ = v___y_987_;
v___y_902_ = v___y_989_;
v___y_903_ = v___y_988_;
v___y_904_ = v___x_994_;
v___y_905_ = v___x_996_;
v___y_906_ = v_a_991_;
v___y_907_ = v___y_990_;
v___y_908_ = v___x_998_;
goto v___jp_886_;
}
else
{
lean_object* v___x_999_; 
lean_dec(v_doc_x3f_684_);
v___x_999_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__22));
v___y_887_ = v___y_974_;
v___y_888_ = v___y_975_;
v___y_889_ = v___x_992_;
v___y_890_ = v___y_976_;
v___y_891_ = v___y_977_;
v___y_892_ = v___y_978_;
v___y_893_ = v___y_979_;
v___y_894_ = v___y_980_;
v___y_895_ = v___y_982_;
v___y_896_ = v___y_981_;
v___y_897_ = v___y_983_;
v___y_898_ = v___y_984_;
v___y_899_ = v___y_985_;
v___y_900_ = v___y_986_;
v___y_901_ = v___y_987_;
v___y_902_ = v___y_989_;
v___y_903_ = v___y_988_;
v___y_904_ = v___x_994_;
v___y_905_ = v___x_996_;
v___y_906_ = v_a_991_;
v___y_907_ = v___y_990_;
v___y_908_ = v___x_999_;
goto v___jp_886_;
}
}
v___jp_1000_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_inc(v___y_1037_);
lean_inc_n(v___y_1007_, 10);
lean_inc(v___y_1030_);
lean_inc(v___y_1019_);
lean_inc_n(v___y_1013_, 20);
v___x_1038_ = l_Lean_Syntax_node3(v___y_1013_, v___y_1019_, v___y_1030_, v___y_1007_, v___y_1037_);
lean_inc_n(v___y_1027_, 5);
v___x_1039_ = l_Lean_Syntax_node3(v___y_1013_, v___y_1027_, v___y_1007_, v___y_1007_, v___x_1038_);
lean_inc(v___y_1022_);
v___x_1040_ = l_Lean_Syntax_node2(v___y_1013_, v___y_1022_, v___y_1032_, v___x_1039_);
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__19));
v___x_1042_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__24, &l_Lasm_JS_Meta_elabBinding___closed__24_once, _init_l_Lasm_JS_Meta_elabBinding___closed__24);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__25));
lean_inc(v___y_1016_);
lean_inc(v___y_1003_);
v___x_1044_ = l_Lean_addMacroScope(v___y_1003_, v___x_1043_, v___y_1016_);
lean_inc_n(v___y_1031_, 2);
v___x_1045_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1045_, 0, v___y_1013_);
lean_ctor_set(v___x_1045_, 1, v___x_1042_);
lean_ctor_set(v___x_1045_, 2, v___x_1044_);
lean_ctor_set(v___x_1045_, 3, v___y_1031_);
v___x_1046_ = l_Lean_Syntax_node2(v___y_1013_, v___y_1001_, v___x_1045_, v___y_1007_);
v___x_1047_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__27, &l_Lasm_JS_Meta_elabBinding___closed__27_once, _init_l_Lasm_JS_Meta_elabBinding___closed__27);
lean_inc_ref(v___y_1023_);
lean_inc_ref(v___y_1024_);
lean_inc_ref(v___y_1033_);
v___x_1048_ = l_Lean_Name_mkStr4(v___y_1033_, v___y_1024_, v___y_1023_, v___x_1041_);
lean_inc(v___x_1048_);
v___x_1049_ = l_Lean_addMacroScope(v___y_1003_, v___x_1048_, v___y_1016_);
lean_inc(v___y_1010_);
v___x_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___y_1010_);
v___x_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___y_1031_);
v___x_1052_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1052_, 0, v___y_1013_);
lean_ctor_set(v___x_1052_, 1, v___x_1047_);
lean_ctor_set(v___x_1052_, 2, v___x_1049_);
lean_ctor_set(v___x_1052_, 3, v___x_1051_);
lean_inc(v___y_1018_);
v___x_1053_ = l_Lean_Syntax_node1(v___y_1013_, v___y_1027_, v___y_1018_);
lean_inc_n(v___y_1011_, 2);
v___x_1054_ = l_Lean_Syntax_node2(v___y_1013_, v___y_1011_, v___x_1052_, v___x_1053_);
v___x_1055_ = l_Lean_Syntax_node3(v___y_1013_, v___y_1019_, v___y_1030_, v___y_1007_, v___x_1054_);
v___x_1056_ = l_Lean_Syntax_node3(v___y_1013_, v___y_1027_, v___y_1007_, v___y_1007_, v___x_1055_);
v___x_1057_ = l_Lean_Syntax_node2(v___y_1013_, v___y_1022_, v___x_1046_, v___x_1056_);
v___x_1058_ = lean_unsigned_to_nat(9u);
v___x_1059_ = lean_mk_empty_array_with_capacity(v___x_1058_);
v___x_1060_ = lean_array_push(v___x_1059_, v___y_1021_);
lean_inc_n(v___y_1026_, 3);
v___x_1061_ = lean_array_push(v___x_1060_, v___y_1026_);
v___x_1062_ = lean_array_push(v___x_1061_, v___y_1020_);
v___x_1063_ = lean_array_push(v___x_1062_, v___y_1026_);
v___x_1064_ = lean_array_push(v___x_1063_, v___y_1004_);
v___x_1065_ = lean_array_push(v___x_1064_, v___y_1026_);
v___x_1066_ = lean_array_push(v___x_1065_, v___x_1040_);
v___x_1067_ = lean_array_push(v___x_1066_, v___y_1026_);
v___x_1068_ = lean_array_push(v___x_1067_, v___x_1057_);
v___x_1069_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1069_, 0, v___y_1013_);
lean_ctor_set(v___x_1069_, 1, v___y_1027_);
lean_ctor_set(v___x_1069_, 2, v___x_1068_);
lean_inc(v___y_1028_);
v___x_1070_ = l_Lean_Syntax_node1(v___y_1013_, v___y_1028_, v___x_1069_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__28));
lean_inc_ref(v___y_1012_);
lean_inc_ref(v___y_1005_);
lean_inc_ref(v___y_1029_);
v___x_1072_ = l_Lean_Name_mkStr4(v___y_1029_, v___y_1005_, v___y_1012_, v___x_1071_);
v___x_1073_ = l_Lean_Syntax_node1(v___y_1013_, v___x_1072_, v___y_1007_);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_1075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___y_1013_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
lean_inc(v___y_1002_);
v___x_1076_ = l_Lean_Syntax_node6(v___y_1013_, v___y_1002_, v___y_1015_, v___y_1007_, v___x_1070_, v___x_1073_, v___y_1007_, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__30));
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__31));
v___x_1079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___y_1013_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__32));
v___x_1081_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___y_1013_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_node3(v___y_1013_, v___x_1077_, v___x_1079_, v___y_1007_, v___x_1081_);
v___x_1083_ = l_Lean_Syntax_node3(v___y_1013_, v___y_1027_, v___y_1018_, v___x_1076_, v___x_1082_);
v___x_1084_ = l_Lean_Syntax_node2(v___y_1013_, v___y_1011_, v___y_1017_, v___x_1083_);
if (v_isPrivate_689_ == 0)
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lasm_JS_Meta_elabBinding___lam__0(v_a_690_, v_a_691_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v_quotContext_x3f_1088_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_690_);
v_quotContext_x3f_1088_ = lean_ctor_get(v_a_690_, 5);
if (lean_obj_tag(v_quotContext_x3f_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; lean_object* v_a_1091_; 
v_a_1089_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1089_);
lean_dec_ref(v___x_1087_);
v___x_1090_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_691_);
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref(v___x_1090_);
v___y_860_ = v___y_1012_;
v___y_861_ = v_a_1089_;
v___y_862_ = v___y_1014_;
v___y_863_ = v___y_1005_;
v___y_864_ = v___y_1006_;
v___y_865_ = v___y_1025_;
v___y_866_ = v___y_1008_;
v___y_867_ = v___y_1029_;
v___y_868_ = v___y_1027_;
v___y_869_ = v___y_1009_;
v___y_870_ = v___x_1084_;
v___y_871_ = v___y_1031_;
v___y_872_ = v___x_1080_;
v___y_873_ = v_a_1086_;
v___y_874_ = v___y_1035_;
v___y_875_ = v___y_1034_;
v___y_876_ = v___y_1036_;
v_a_877_ = v_a_1091_;
goto v___jp_859_;
}
else
{
lean_object* v_a_1092_; lean_object* v_val_1093_; 
v_a_1092_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1092_);
lean_dec_ref(v___x_1087_);
v_val_1093_ = lean_ctor_get(v_quotContext_x3f_1088_, 0);
lean_inc(v_val_1093_);
v___y_860_ = v___y_1012_;
v___y_861_ = v_a_1092_;
v___y_862_ = v___y_1014_;
v___y_863_ = v___y_1005_;
v___y_864_ = v___y_1006_;
v___y_865_ = v___y_1025_;
v___y_866_ = v___y_1008_;
v___y_867_ = v___y_1029_;
v___y_868_ = v___y_1027_;
v___y_869_ = v___y_1009_;
v___y_870_ = v___x_1084_;
v___y_871_ = v___y_1031_;
v___y_872_ = v___x_1080_;
v___y_873_ = v_a_1086_;
v___y_874_ = v___y_1035_;
v___y_875_ = v___y_1034_;
v___y_876_ = v___y_1036_;
v_a_877_ = v_val_1093_;
goto v___jp_859_;
}
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
lean_dec(v___x_1084_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1014_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1006_);
lean_dec_ref(v___f_733_);
lean_dec(v_t_688_);
lean_dec(v_n_687_);
lean_dec(v_doc_x3f_684_);
v_a_1094_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1085_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1085_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lasm_JS_Meta_elabBinding___lam__0(v_a_690_, v_a_691_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1104_; lean_object* v_quotContext_x3f_1105_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v___x_1104_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_690_);
v_quotContext_x3f_1105_ = lean_ctor_get(v_a_690_, 5);
if (lean_obj_tag(v_quotContext_x3f_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1107_; lean_object* v_a_1108_; 
v_a_1106_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1106_);
lean_dec_ref(v___x_1104_);
v___x_1107_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_691_);
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
lean_inc(v_a_1108_);
lean_dec_ref(v___x_1107_);
v___y_974_ = v___y_1012_;
v___y_975_ = v___y_1014_;
v___y_976_ = v___y_1005_;
v___y_977_ = v___y_1006_;
v___y_978_ = v_a_1103_;
v___y_979_ = v___y_1025_;
v___y_980_ = v___y_1008_;
v___y_981_ = v___y_1029_;
v___y_982_ = v___y_1027_;
v___y_983_ = v___y_1009_;
v___y_984_ = v_a_1106_;
v___y_985_ = v___x_1084_;
v___y_986_ = v___y_1031_;
v___y_987_ = v___x_1080_;
v___y_988_ = v___y_1035_;
v___y_989_ = v___y_1034_;
v___y_990_ = v___y_1036_;
v_a_991_ = v_a_1108_;
goto v___jp_973_;
}
else
{
lean_object* v_a_1109_; lean_object* v_val_1110_; 
v_a_1109_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1109_);
lean_dec_ref(v___x_1104_);
v_val_1110_ = lean_ctor_get(v_quotContext_x3f_1105_, 0);
lean_inc(v_val_1110_);
v___y_974_ = v___y_1012_;
v___y_975_ = v___y_1014_;
v___y_976_ = v___y_1005_;
v___y_977_ = v___y_1006_;
v___y_978_ = v_a_1103_;
v___y_979_ = v___y_1025_;
v___y_980_ = v___y_1008_;
v___y_981_ = v___y_1029_;
v___y_982_ = v___y_1027_;
v___y_983_ = v___y_1009_;
v___y_984_ = v_a_1109_;
v___y_985_ = v___x_1084_;
v___y_986_ = v___y_1031_;
v___y_987_ = v___x_1080_;
v___y_988_ = v___y_1035_;
v___y_989_ = v___y_1034_;
v___y_990_ = v___y_1036_;
v_a_991_ = v_val_1110_;
goto v___jp_973_;
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v___x_1084_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1014_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1006_);
lean_dec_ref(v___f_733_);
lean_dec(v_t_688_);
lean_dec(v_n_687_);
lean_dec(v_doc_x3f_684_);
v_a_1111_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1102_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1102_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
v___jp_1119_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1132_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__33));
v___x_1133_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__34));
v___x_1134_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__35));
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_1136_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__39, &l_Lasm_JS_Meta_elabBinding___closed__39_once, _init_l_Lasm_JS_Meta_elabBinding___closed__39);
v___x_1137_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__2_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1138_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__3_00___x40_Lasm_JS_Meta_962814792____hygCtx___hyg_2_));
v___x_1139_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__40));
v___x_1140_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__42));
lean_inc_n(v___y_1126_, 6);
lean_inc_n(v_a_1131_, 6);
v___x_1141_ = l_Lean_addMacroScope(v_a_1131_, v___x_1140_, v___y_1126_);
v___x_1142_ = lean_box(0);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__44));
lean_inc_n(v___y_1123_, 26);
v___x_1144_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1144_, 0, v___y_1123_);
lean_ctor_set(v___x_1144_, 1, v___x_1136_);
lean_ctor_set(v___x_1144_, 2, v___x_1141_);
lean_ctor_set(v___x_1144_, 3, v___x_1143_);
v___x_1145_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__48));
v___x_1147_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__49));
v___x_1148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___y_1123_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__51, &l_Lasm_JS_Meta_elabBinding___closed__51_once, _init_l_Lasm_JS_Meta_elabBinding___closed__51);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__52));
v___x_1151_ = l_Lean_addMacroScope(v_a_1131_, v___x_1150_, v___y_1126_);
v___x_1152_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1152_, 0, v___y_1123_);
lean_ctor_set(v___x_1152_, 1, v___x_1149_);
lean_ctor_set(v___x_1152_, 2, v___x_1151_);
lean_ctor_set(v___x_1152_, 3, v___x_1142_);
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_1154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___y_1123_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__54));
v___x_1156_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___y_1123_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
lean_inc(v_t_688_);
lean_inc_ref_n(v___x_1154_, 4);
v___x_1157_ = l_Lean_Syntax_node5(v___y_1123_, v___x_1146_, v___x_1148_, v___x_1152_, v___x_1154_, v_t_688_, v___x_1156_);
v___x_1158_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__56));
v___x_1159_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__57));
v___x_1160_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___y_1123_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
v___x_1162_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1162_, 0, v___y_1123_);
lean_ctor_set(v___x_1162_, 1, v___x_1145_);
lean_ctor_set(v___x_1162_, 2, v___x_1161_);
v___x_1163_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__60));
v___x_1164_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__62));
v___x_1165_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__64));
v___x_1166_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__66, &l_Lasm_JS_Meta_elabBinding___closed__66_once, _init_l_Lasm_JS_Meta_elabBinding___closed__66);
v___x_1167_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__67));
v___x_1168_ = l_Lean_addMacroScope(v_a_1131_, v___x_1167_, v___y_1126_);
v___x_1169_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1169_, 0, v___y_1123_);
lean_ctor_set(v___x_1169_, 1, v___x_1166_);
lean_ctor_set(v___x_1169_, 2, v___x_1168_);
lean_ctor_set(v___x_1169_, 3, v___x_1142_);
lean_inc_ref_n(v___x_1162_, 13);
v___x_1170_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1165_, v___x_1169_, v___x_1162_);
v___x_1171_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__69));
v___x_1172_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1171_, v___x_1154_, v___x_1162_, v___y_1122_);
v___x_1173_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1145_, v___x_1162_, v___x_1162_, v___x_1172_);
v___x_1174_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1164_, v___x_1170_, v___x_1173_);
v___x_1175_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___y_1123_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__70, &l_Lasm_JS_Meta_elabBinding___closed__70_once, _init_l_Lasm_JS_Meta_elabBinding___closed__70);
v___x_1178_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__71));
v___x_1179_ = l_Lean_addMacroScope(v_a_1131_, v___x_1178_, v___y_1126_);
v___x_1180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1180_, 0, v___y_1123_);
lean_ctor_set(v___x_1180_, 1, v___x_1177_);
lean_ctor_set(v___x_1180_, 2, v___x_1179_);
lean_ctor_set(v___x_1180_, 3, v___x_1142_);
v___x_1181_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1165_, v___x_1180_, v___x_1162_);
v___x_1182_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1171_, v___x_1154_, v___x_1162_, v___y_1125_);
v___x_1183_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1145_, v___x_1162_, v___x_1162_, v___x_1182_);
v___x_1184_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1164_, v___x_1181_, v___x_1183_);
v___x_1185_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__72, &l_Lasm_JS_Meta_elabBinding___closed__72_once, _init_l_Lasm_JS_Meta_elabBinding___closed__72);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__73));
v___x_1187_ = l_Lean_addMacroScope(v_a_1131_, v___x_1186_, v___y_1126_);
v___x_1188_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1188_, 0, v___y_1123_);
lean_ctor_set(v___x_1188_, 1, v___x_1185_);
lean_ctor_set(v___x_1188_, 2, v___x_1187_);
lean_ctor_set(v___x_1188_, 3, v___x_1142_);
v___x_1189_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1165_, v___x_1188_, v___x_1162_);
v___x_1190_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1171_, v___x_1154_, v___x_1162_, v___y_1129_);
v___x_1191_ = l_Lean_Syntax_node3(v___y_1123_, v___x_1145_, v___x_1162_, v___x_1162_, v___x_1190_);
v___x_1192_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1164_, v___x_1189_, v___x_1191_);
v___x_1193_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__74, &l_Lasm_JS_Meta_elabBinding___closed__74_once, _init_l_Lasm_JS_Meta_elabBinding___closed__74);
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__75));
v___x_1195_ = l_Lean_addMacroScope(v_a_1131_, v___x_1194_, v___y_1126_);
v___x_1196_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1196_, 0, v___y_1123_);
lean_ctor_set(v___x_1196_, 1, v___x_1193_);
lean_ctor_set(v___x_1196_, 2, v___x_1195_);
lean_ctor_set(v___x_1196_, 3, v___x_1142_);
v___x_1197_ = l_Lean_Syntax_node2(v___y_1123_, v___x_1165_, v___x_1196_, v___x_1162_);
if (v___y_1127_ == 0)
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__78, &l_Lasm_JS_Meta_elabBinding___closed__78_once, _init_l_Lasm_JS_Meta_elabBinding___closed__78);
v___y_1001_ = v___x_1165_;
v___y_1002_ = v___x_1158_;
v___y_1003_ = v_a_1131_;
v___y_1004_ = v___x_1192_;
v___y_1005_ = v___x_1133_;
v___y_1006_ = v___y_1130_;
v___y_1007_ = v___x_1162_;
v___y_1008_ = v___y_1121_;
v___y_1009_ = v___x_1153_;
v___y_1010_ = v___x_1142_;
v___y_1011_ = v___x_1135_;
v___y_1012_ = v___x_1134_;
v___y_1013_ = v___y_1123_;
v___y_1014_ = v___y_1124_;
v___y_1015_ = v___x_1160_;
v___y_1016_ = v___y_1126_;
v___y_1017_ = v___x_1144_;
v___y_1018_ = v___x_1157_;
v___y_1019_ = v___x_1171_;
v___y_1020_ = v___x_1184_;
v___y_1021_ = v___x_1174_;
v___y_1022_ = v___x_1164_;
v___y_1023_ = v___x_1139_;
v___y_1024_ = v___x_1138_;
v___y_1025_ = v___y_1120_;
v___y_1026_ = v___x_1176_;
v___y_1027_ = v___x_1145_;
v___y_1028_ = v___x_1163_;
v___y_1029_ = v___x_1132_;
v___y_1030_ = v___x_1154_;
v___y_1031_ = v___x_1142_;
v___y_1032_ = v___x_1197_;
v___y_1033_ = v___x_1137_;
v___y_1034_ = v___y_1128_;
v___y_1035_ = v___y_1127_;
v___y_1036_ = v___x_1161_;
v___y_1037_ = v___x_1198_;
goto v___jp_1000_;
}
else
{
lean_object* v___x_1199_; 
v___x_1199_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__80, &l_Lasm_JS_Meta_elabBinding___closed__80_once, _init_l_Lasm_JS_Meta_elabBinding___closed__80);
v___y_1001_ = v___x_1165_;
v___y_1002_ = v___x_1158_;
v___y_1003_ = v_a_1131_;
v___y_1004_ = v___x_1192_;
v___y_1005_ = v___x_1133_;
v___y_1006_ = v___y_1130_;
v___y_1007_ = v___x_1162_;
v___y_1008_ = v___y_1121_;
v___y_1009_ = v___x_1153_;
v___y_1010_ = v___x_1142_;
v___y_1011_ = v___x_1135_;
v___y_1012_ = v___x_1134_;
v___y_1013_ = v___y_1123_;
v___y_1014_ = v___y_1124_;
v___y_1015_ = v___x_1160_;
v___y_1016_ = v___y_1126_;
v___y_1017_ = v___x_1144_;
v___y_1018_ = v___x_1157_;
v___y_1019_ = v___x_1171_;
v___y_1020_ = v___x_1184_;
v___y_1021_ = v___x_1174_;
v___y_1022_ = v___x_1164_;
v___y_1023_ = v___x_1139_;
v___y_1024_ = v___x_1138_;
v___y_1025_ = v___y_1120_;
v___y_1026_ = v___x_1176_;
v___y_1027_ = v___x_1145_;
v___y_1028_ = v___x_1163_;
v___y_1029_ = v___x_1132_;
v___y_1030_ = v___x_1154_;
v___y_1031_ = v___x_1142_;
v___y_1032_ = v___x_1197_;
v___y_1033_ = v___x_1137_;
v___y_1034_ = v___y_1128_;
v___y_1035_ = v___y_1127_;
v___y_1036_ = v___x_1161_;
v___y_1037_ = v___x_1199_;
goto v___jp_1000_;
}
}
v___jp_1200_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v_a_1211_; uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v_quotContext_x3f_1215_; 
lean_inc(v___y_1207_);
lean_inc_ref(v___y_1208_);
v___x_1209_ = l_Lean_Syntax_mkStrLit(v___y_1208_, v___y_1207_);
v___x_1210_ = l_Lean_Elab_Command_getRef___redArg(v_a_690_);
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1211_);
lean_dec_ref(v___x_1210_);
v___x_1212_ = 0;
v___x_1213_ = l_Lean_SourceInfo_fromRef(v_a_1211_, v___x_1212_);
lean_dec(v_a_1211_);
v___x_1214_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_690_);
v_quotContext_x3f_1215_ = lean_ctor_get(v_a_690_, 5);
if (lean_obj_tag(v_quotContext_x3f_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; lean_object* v_a_1218_; 
v_a_1216_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1216_);
lean_dec_ref(v___x_1214_);
v___x_1217_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_691_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref(v___x_1217_);
v___y_1120_ = v___y_1201_;
v___y_1121_ = v___y_1203_;
v___y_1122_ = v___y_1202_;
v___y_1123_ = v___x_1213_;
v___y_1124_ = v___y_1204_;
v___y_1125_ = v___x_1209_;
v___y_1126_ = v_a_1216_;
v___y_1127_ = v___y_1206_;
v___y_1128_ = v___y_1208_;
v___y_1129_ = v___y_1205_;
v___y_1130_ = v___y_1207_;
v_a_1131_ = v_a_1218_;
goto v___jp_1119_;
}
else
{
lean_object* v_a_1219_; lean_object* v_val_1220_; 
v_a_1219_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1219_);
lean_dec_ref(v___x_1214_);
v_val_1220_ = lean_ctor_get(v_quotContext_x3f_1215_, 0);
lean_inc(v_val_1220_);
v___y_1120_ = v___y_1201_;
v___y_1121_ = v___y_1203_;
v___y_1122_ = v___y_1202_;
v___y_1123_ = v___x_1213_;
v___y_1124_ = v___y_1204_;
v___y_1125_ = v___x_1209_;
v___y_1126_ = v_a_1219_;
v___y_1127_ = v___y_1206_;
v___y_1128_ = v___y_1208_;
v___y_1129_ = v___y_1205_;
v___y_1130_ = v___y_1207_;
v_a_1131_ = v_val_1220_;
goto v___jp_1119_;
}
}
v___jp_1221_:
{
lean_object* v___x_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_pathLit_1229_; lean_object* v_written_1230_; uint8_t v_project_1231_; lean_object* v___x_1232_; 
v___x_1224_ = l_Lean_Syntax_getId(v_n_687_);
v___x_1225_ = 1;
v___x_1226_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1224_, v___x_1225_);
v___x_1227_ = lean_box(2);
v___x_1228_ = l_Lean_Syntax_mkStrLit(v___x_1226_, v___x_1227_);
lean_inc_ref(v_snd_1223_);
v_pathLit_1229_ = l_Lean_Syntax_mkStrLit(v_snd_1223_, v___x_1227_);
v_written_1230_ = l_Lean_TSyntax_getString(v_m_685_);
v_project_1231_ = l_Lasm_JS_Meta_isProjectFile(v_written_1230_);
v___x_1232_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_691_);
if (v_project_1231_ == 0)
{
lean_dec_ref(v___x_1232_);
lean_inc_ref(v_written_1230_);
v___y_1201_ = v_project_1231_;
v___y_1202_ = v___x_1228_;
v___y_1203_ = v_snd_1223_;
v___y_1204_ = v_written_1230_;
v___y_1205_ = v_pathLit_1229_;
v___y_1206_ = v_fst_1222_;
v___y_1207_ = v___x_1227_;
v___y_1208_ = v_written_1230_;
goto v___jp_1200_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1234_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
lean_dec_ref(v___x_1232_);
v___x_1234_ = l_Lasm_JS_Meta_projectSpecifier(v_a_1233_, v_written_1230_);
v___y_1201_ = v_project_1231_;
v___y_1202_ = v___x_1228_;
v___y_1203_ = v_snd_1223_;
v___y_1204_ = v_written_1230_;
v___y_1205_ = v_pathLit_1229_;
v___y_1206_ = v_fst_1222_;
v___y_1207_ = v___x_1227_;
v___y_1208_ = v___x_1234_;
goto v___jp_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_elabBinding___boxed(lean_object* v_doc_x3f_1252_, lean_object* v_m_1253_, lean_object* v_e_1254_, lean_object* v_n_1255_, lean_object* v_t_1256_, lean_object* v_isPrivate_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_){
_start:
{
uint8_t v_isPrivate_boxed_1261_; lean_object* v_res_1262_; 
v_isPrivate_boxed_1261_ = lean_unbox(v_isPrivate_1257_);
v_res_1262_ = l_Lasm_JS_Meta_elabBinding(v_doc_x3f_1252_, v_m_1253_, v_e_1254_, v_n_1255_, v_t_1256_, v_isPrivate_boxed_1261_, v_a_1258_, v_a_1259_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
lean_dec(v_e_1254_);
lean_dec(v_m_1253_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1(lean_object* v_x_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__33));
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__34));
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
lean_inc(v_x_1324_);
v___x_1331_ = l_Lean_Syntax_isOfKind(v_x_1324_, v___x_1330_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
lean_dec(v_x_1324_);
v___x_1332_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1332_;
}
else
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v_doc_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; 
v___x_1333_ = lean_unsigned_to_nat(0u);
v___x_1334_ = l_Lean_Syntax_getArg(v_x_1324_, v___x_1333_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
lean_inc(v___x_1334_);
v___x_1336_ = l_Lean_Syntax_isOfKind(v___x_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1493_; 
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1493_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1493_;
}
else
{
lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1333_);
v___x_1495_ = l_Lean_Syntax_isNone(v___x_1494_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; uint8_t v___x_1497_; 
v___x_1496_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1494_);
v___x_1497_ = l_Lean_Syntax_matchesNull(v___x_1494_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; 
lean_dec(v___x_1494_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1498_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1498_;
}
else
{
lean_object* v_doc_1499_; 
v_doc_1499_ = l_Lean_Syntax_getArg(v___x_1494_, v___x_1333_);
lean_dec(v___x_1494_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1502_; uint8_t v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__15));
lean_inc(v_doc_1499_);
v___x_1503_ = l_Lean_Syntax_isOfKind(v_doc_1499_, v___x_1502_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; 
lean_dec(v_doc_1499_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1504_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1504_;
}
else
{
goto v___jp_1500_;
}
}
else
{
goto v___jp_1500_;
}
v___jp_1500_:
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_doc_1499_);
v_doc_1371_ = v___x_1501_;
v___y_1372_ = v_a_1325_;
v___y_1373_ = v_a_1326_;
goto v___jp_1370_;
}
}
}
else
{
lean_object* v___x_1505_; 
lean_dec(v___x_1494_);
v___x_1505_ = lean_box(0);
v_doc_1371_ = v___x_1505_;
v___y_1372_ = v_a_1325_;
v___y_1373_ = v_a_1326_;
goto v___jp_1370_;
}
}
v___jp_1337_:
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = l_Lean_Syntax_getArg(v___y_1339_, v___y_1342_);
lean_dec(v___y_1339_);
v___x_1351_ = l_Lean_Syntax_matchesNull(v___x_1350_, v___x_1333_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
lean_dec(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec(v___y_1338_);
v___x_1352_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1353_ = l_Lean_Syntax_getArg(v___y_1344_, v___y_1341_);
v___x_1354_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
lean_inc(v___x_1353_);
v___x_1355_ = l_Lean_Syntax_isOfKind(v___x_1353_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v___x_1353_);
lean_dec(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec(v___y_1338_);
v___x_1356_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1356_;
}
else
{
lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = l_Lean_Syntax_getArg(v___x_1353_, v___x_1333_);
v___x_1358_ = l_Lean_Syntax_matchesNull(v___x_1357_, v___x_1333_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; 
lean_dec(v___x_1353_);
lean_dec(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec(v___y_1338_);
v___x_1359_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1359_;
}
else
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1360_ = l_Lean_Syntax_getArg(v___x_1353_, v___y_1342_);
lean_dec(v___x_1353_);
v___x_1361_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__14));
lean_inc_ref(v___y_1340_);
v___x_1362_ = l_Lean_Name_mkStr4(v___x_1328_, v___x_1329_, v___y_1340_, v___x_1361_);
lean_inc(v___x_1360_);
v___x_1363_ = l_Lean_Syntax_isOfKind(v___x_1360_, v___x_1362_);
lean_dec(v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
lean_dec(v___x_1360_);
lean_dec(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec(v___y_1338_);
v___x_1364_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1364_;
}
else
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = l_Lean_Syntax_getArg(v___y_1344_, v___y_1347_);
lean_dec(v___y_1344_);
v___x_1366_ = l_Lean_Syntax_matchesNull(v___x_1365_, v___x_1333_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
lean_dec(v___x_1360_);
lean_dec(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1343_);
lean_dec(v___y_1338_);
v___x_1367_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1367_;
}
else
{
lean_object* v_t_1368_; lean_object* v___x_1369_; 
v_t_1368_ = l_Lean_Syntax_getArg(v___x_1360_, v___y_1342_);
lean_dec(v___x_1360_);
v___x_1369_ = l_Lasm_JS_Meta_elabBinding(v___y_1349_, v___y_1338_, v___y_1348_, v___y_1343_, v_t_1368_, v___x_1336_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1348_);
lean_dec(v___y_1338_);
return v___x_1369_;
}
}
}
}
}
}
v___jp_1370_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1374_ = lean_unsigned_to_nat(1u);
v___x_1375_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1374_);
lean_inc(v___x_1375_);
v___x_1376_ = l_Lean_Syntax_matchesNull(v___x_1375_, v___x_1374_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
lean_dec(v___x_1375_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1377_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1377_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1378_ = l_Lean_Syntax_getArg(v___x_1375_, v___x_1333_);
lean_dec(v___x_1375_);
v___x_1379_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__35));
v___x_1380_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__4));
lean_inc(v___x_1378_);
v___x_1381_ = l_Lean_Syntax_isOfKind(v___x_1378_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; 
lean_dec(v___x_1378_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1382_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1382_;
}
else
{
lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = l_Lean_Syntax_getArg(v___x_1378_, v___x_1374_);
lean_dec(v___x_1378_);
lean_inc(v___x_1383_);
v___x_1384_ = l_Lean_Syntax_matchesNull(v___x_1383_, v___x_1374_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; 
lean_dec(v___x_1383_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1385_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1385_;
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1386_ = l_Lean_Syntax_getArg(v___x_1383_, v___x_1333_);
lean_dec(v___x_1383_);
v___x_1387_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__5));
lean_inc(v___x_1386_);
v___x_1388_ = l_Lean_Syntax_isOfKind(v___x_1386_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec(v___x_1386_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1389_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1390_ = l_Lean_Syntax_getArg(v___x_1386_, v___x_1333_);
v___x_1391_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
lean_inc(v___x_1390_);
v___x_1392_ = l_Lean_Syntax_isOfKind(v___x_1390_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; 
lean_dec(v___x_1390_);
lean_dec(v___x_1386_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1393_;
}
else
{
lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1394_ = l_Lean_Syntax_getArg(v___x_1390_, v___x_1333_);
lean_dec(v___x_1390_);
v___x_1395_ = l_Lean_Syntax_matchesNull(v___x_1394_, v___x_1333_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; 
lean_dec(v___x_1386_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1396_;
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1397_ = l_Lean_Syntax_getArg(v___x_1386_, v___x_1374_);
lean_dec(v___x_1386_);
v___x_1398_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__1));
lean_inc(v___x_1397_);
v___x_1399_ = l_Lean_Syntax_isOfKind(v___x_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_dec(v___x_1397_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1400_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1400_;
}
else
{
lean_object* v_m_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v_m_1401_ = l_Lean_Syntax_getArg(v___x_1397_, v___x_1374_);
v___x_1402_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__7));
lean_inc(v_m_1401_);
v___x_1403_ = l_Lean_Syntax_isOfKind(v_m_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; 
lean_dec(v_m_1401_);
lean_dec(v___x_1397_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1404_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1404_;
}
else
{
lean_object* v___x_1405_; lean_object* v_e_1406_; uint8_t v___x_1407_; 
v___x_1405_ = lean_unsigned_to_nat(2u);
v_e_1406_ = l_Lean_Syntax_getArg(v___x_1397_, v___x_1405_);
lean_dec(v___x_1397_);
lean_inc(v_e_1406_);
v___x_1407_ = l_Lean_Syntax_isOfKind(v_e_1406_, v___x_1402_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1408_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1408_;
}
else
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1405_);
lean_inc(v___x_1409_);
v___x_1410_ = l_Lean_Syntax_matchesNull(v___x_1409_, v___x_1333_);
if (v___x_1410_ == 0)
{
uint8_t v___x_1411_; 
lean_inc(v___x_1409_);
v___x_1411_ = l_Lean_Syntax_matchesNull(v___x_1409_, v___x_1374_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; 
lean_dec(v___x_1409_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1412_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1413_ = l_Lean_Syntax_getArg(v___x_1409_, v___x_1333_);
lean_dec(v___x_1409_);
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__7));
v___x_1415_ = l_Lean_Syntax_isOfKind(v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1416_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1416_;
}
else
{
lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1417_ = lean_unsigned_to_nat(3u);
v___x_1418_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1417_);
v___x_1419_ = l_Lean_Syntax_matchesNull(v___x_1418_, v___x_1333_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1420_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1420_;
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1421_ = lean_unsigned_to_nat(4u);
v___x_1422_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1421_);
v___x_1423_ = l_Lean_Syntax_matchesNull(v___x_1422_, v___x_1333_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1424_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1424_;
}
else
{
lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1425_ = lean_unsigned_to_nat(5u);
v___x_1426_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1425_);
v___x_1427_ = l_Lean_Syntax_matchesNull(v___x_1426_, v___x_1333_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1428_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1428_;
}
else
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_unsigned_to_nat(6u);
v___x_1430_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1429_);
lean_dec(v___x_1334_);
v___x_1431_ = l_Lean_Syntax_matchesNull(v___x_1430_, v___x_1333_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v_x_1324_);
v___x_1432_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1432_;
}
else
{
lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v___x_1433_ = l_Lean_Syntax_getArg(v_x_1324_, v___x_1374_);
lean_dec(v_x_1324_);
v___x_1434_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9));
lean_inc(v___x_1433_);
v___x_1435_ = l_Lean_Syntax_isOfKind(v___x_1433_, v___x_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; 
lean_dec(v___x_1433_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1436_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1436_;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1437_ = l_Lean_Syntax_getArg(v___x_1433_, v___x_1374_);
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10));
lean_inc(v___x_1437_);
v___x_1439_ = l_Lean_Syntax_isOfKind(v___x_1437_, v___x_1438_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
lean_dec(v___x_1437_);
lean_dec(v___x_1433_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1440_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1440_;
}
else
{
lean_object* v_n_1441_; 
v_n_1441_ = l_Lean_Syntax_getArg(v___x_1437_, v___x_1333_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12));
lean_inc(v_n_1441_);
v___x_1443_ = l_Lean_Syntax_isOfKind(v_n_1441_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; 
lean_dec(v_n_1441_);
lean_dec(v___x_1437_);
lean_dec(v___x_1433_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1444_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1444_;
}
else
{
v___y_1338_ = v_m_1401_;
v___y_1339_ = v___x_1437_;
v___y_1340_ = v___x_1379_;
v___y_1341_ = v___x_1405_;
v___y_1342_ = v___x_1374_;
v___y_1343_ = v_n_1441_;
v___y_1344_ = v___x_1433_;
v___y_1345_ = v___y_1372_;
v___y_1346_ = v___y_1373_;
v___y_1347_ = v___x_1417_;
v___y_1348_ = v_e_1406_;
v___y_1349_ = v_doc_1371_;
goto v___jp_1337_;
}
}
else
{
v___y_1338_ = v_m_1401_;
v___y_1339_ = v___x_1437_;
v___y_1340_ = v___x_1379_;
v___y_1341_ = v___x_1405_;
v___y_1342_ = v___x_1374_;
v___y_1343_ = v_n_1441_;
v___y_1344_ = v___x_1433_;
v___y_1345_ = v___y_1372_;
v___y_1346_ = v___y_1373_;
v___y_1347_ = v___x_1417_;
v___y_1348_ = v_e_1406_;
v___y_1349_ = v_doc_1371_;
goto v___jp_1337_;
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
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
lean_dec(v___x_1409_);
v___x_1445_ = lean_unsigned_to_nat(3u);
v___x_1446_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1445_);
v___x_1447_ = l_Lean_Syntax_matchesNull(v___x_1446_, v___x_1333_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1448_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1448_;
}
else
{
lean_object* v___x_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1449_ = lean_unsigned_to_nat(4u);
v___x_1450_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1449_);
v___x_1451_ = l_Lean_Syntax_matchesNull(v___x_1450_, v___x_1333_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1452_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1452_;
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1453_ = lean_unsigned_to_nat(5u);
v___x_1454_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1453_);
v___x_1455_ = l_Lean_Syntax_matchesNull(v___x_1454_, v___x_1333_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v___x_1334_);
lean_dec(v_x_1324_);
v___x_1456_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1456_;
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1457_ = lean_unsigned_to_nat(6u);
v___x_1458_ = l_Lean_Syntax_getArg(v___x_1334_, v___x_1457_);
lean_dec(v___x_1334_);
v___x_1459_ = l_Lean_Syntax_matchesNull(v___x_1458_, v___x_1333_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; 
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
lean_dec(v_x_1324_);
v___x_1460_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1460_;
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
v___x_1461_ = l_Lean_Syntax_getArg(v_x_1324_, v___x_1374_);
lean_dec(v_x_1324_);
v___x_1462_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__9));
lean_inc(v___x_1461_);
v___x_1463_ = l_Lean_Syntax_isOfKind(v___x_1461_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1464_;
}
else
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = l_Lean_Syntax_getArg(v___x_1461_, v___x_1374_);
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__10));
lean_inc(v___x_1465_);
v___x_1467_ = l_Lean_Syntax_isOfKind(v___x_1465_, v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_dec(v___x_1465_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1468_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1468_;
}
else
{
lean_object* v_n_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
v_n_1469_ = l_Lean_Syntax_getArg(v___x_1465_, v___x_1333_);
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__12));
lean_inc(v_n_1469_);
v___x_1471_ = l_Lean_Syntax_isOfKind(v_n_1469_, v___x_1470_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; 
lean_dec(v_n_1469_);
lean_dec(v___x_1465_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1472_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1472_;
}
else
{
lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1473_ = l_Lean_Syntax_getArg(v___x_1465_, v___x_1374_);
lean_dec(v___x_1465_);
v___x_1474_ = l_Lean_Syntax_matchesNull(v___x_1473_, v___x_1333_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; 
lean_dec(v_n_1469_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1475_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1475_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1476_ = l_Lean_Syntax_getArg(v___x_1461_, v___x_1405_);
v___x_1477_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
lean_inc(v___x_1476_);
v___x_1478_ = l_Lean_Syntax_isOfKind(v___x_1476_, v___x_1477_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; 
lean_dec(v___x_1476_);
lean_dec(v_n_1469_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1479_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1479_;
}
else
{
lean_object* v___x_1480_; uint8_t v___x_1481_; 
v___x_1480_ = l_Lean_Syntax_getArg(v___x_1476_, v___x_1333_);
v___x_1481_ = l_Lean_Syntax_matchesNull(v___x_1480_, v___x_1333_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
lean_dec(v___x_1476_);
lean_dec(v_n_1469_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1482_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; uint8_t v___x_1485_; 
v___x_1483_ = l_Lean_Syntax_getArg(v___x_1476_, v___x_1374_);
lean_dec(v___x_1476_);
v___x_1484_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13));
lean_inc(v___x_1483_);
v___x_1485_ = l_Lean_Syntax_isOfKind(v___x_1483_, v___x_1484_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; 
lean_dec(v___x_1483_);
lean_dec(v_n_1469_);
lean_dec(v___x_1461_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1486_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1486_;
}
else
{
lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1487_ = l_Lean_Syntax_getArg(v___x_1461_, v___x_1445_);
lean_dec(v___x_1461_);
v___x_1488_ = l_Lean_Syntax_matchesNull(v___x_1487_, v___x_1333_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; 
lean_dec(v___x_1483_);
lean_dec(v_n_1469_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
lean_dec(v_doc_1371_);
v___x_1489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_elabDeriving_spec__0___redArg();
return v___x_1489_;
}
else
{
lean_object* v_t_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; 
v_t_1490_ = l_Lean_Syntax_getArg(v___x_1483_, v___x_1374_);
lean_dec(v___x_1483_);
v___x_1491_ = 0;
v___x_1492_ = l_Lasm_JS_Meta_elabBinding(v_doc_1371_, v_m_1401_, v_e_1406_, v_n_1469_, v_t_1490_, v___x_1491_, v___y_1372_, v___y_1373_);
lean_dec(v_e_1406_);
lean_dec(v_m_1401_);
return v___x_1492_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___boxed(lean_object* v_x_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1(v_x_1506_, v_a_1507_, v_a_1508_);
lean_dec(v_a_1508_);
lean_dec_ref(v_a_1507_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(lean_object* v_declName_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v___x_1514_; lean_object* v_env_1515_; uint8_t v___x_1516_; 
v___x_1514_ = lean_st_ref_get(v_a_1512_);
v_env_1515_ = lean_ctor_get(v___x_1514_, 0);
lean_inc_ref_n(v_env_1515_, 2);
lean_dec(v___x_1514_);
lean_inc(v_declName_1511_);
v___x_1516_ = l_Lean_isStructure(v_env_1515_, v_declName_1511_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
lean_dec_ref(v_env_1515_);
lean_dec(v_declName_1511_);
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
return v___x_1518_;
}
else
{
uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1519_ = 0;
v___x_1520_ = l_Lean_getStructureFieldsFlattened(v_env_1515_, v_declName_1511_, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
v___x_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg___boxed(lean_object* v_declName_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1523_, v_a_1524_);
lean_dec(v_a_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(lean_object* v_declName_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_1527_, v_a_1529_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___boxed(lean_object* v_declName_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields(v_declName_1532_, v_a_1533_, v_a_1534_);
lean_dec(v_a_1534_);
lean_dec_ref(v_a_1533_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(lean_object* v___x_1539_, lean_object* v_as_x27_1540_, lean_object* v_b_1541_){
_start:
{
if (lean_obj_tag(v_as_x27_1540_) == 0)
{
lean_object* v___x_1543_; 
lean_dec_ref(v___x_1539_);
v___x_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1543_, 0, v_b_1541_);
return v___x_1543_;
}
else
{
lean_object* v_head_1544_; lean_object* v_tail_1545_; lean_object* v_snd_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1576_; 
v_head_1544_ = lean_ctor_get(v_as_x27_1540_, 0);
v_tail_1545_ = lean_ctor_get(v_as_x27_1540_, 1);
v_snd_1546_ = lean_ctor_get(v_b_1541_, 1);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_b_1541_);
if (v_isSharedCheck_1576_ == 0)
{
lean_object* v_unused_1577_; 
v_unused_1577_ = lean_ctor_get(v_b_1541_, 0);
lean_dec(v_unused_1577_);
v___x_1548_ = v_b_1541_;
v_isShared_1549_ = v_isSharedCheck_1576_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_snd_1546_);
lean_dec(v_b_1541_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1576_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
uint8_t v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = 0;
lean_inc(v_head_1544_);
lean_inc_ref(v___x_1539_);
v___x_1557_ = l_Lean_Environment_find_x3f(v___x_1539_, v_head_1544_, v___x_1556_);
if (lean_obj_tag(v___x_1557_) == 1)
{
lean_object* v_val_1558_; 
v_val_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_val_1558_);
lean_dec_ref_known(v___x_1557_, 1);
if (lean_obj_tag(v_val_1558_) == 6)
{
lean_object* v_val_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1575_; 
lean_del_object(v___x_1548_);
v_val_1559_ = lean_ctor_get(v_val_1558_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_val_1558_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1561_ = v_val_1558_;
v_isShared_1562_ = v_isSharedCheck_1575_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_val_1559_);
lean_dec(v_val_1558_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1575_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_numFields_1563_; lean_object* v___x_1564_; uint8_t v___x_1565_; 
v_numFields_1563_ = lean_ctor_get(v_val_1559_, 4);
lean_inc(v_numFields_1563_);
lean_dec_ref(v_val_1559_);
v___x_1564_ = lean_unsigned_to_nat(0u);
v___x_1565_ = lean_nat_dec_eq(v_numFields_1563_, v___x_1564_);
lean_dec(v_numFields_1563_);
if (v___x_1565_ == 0)
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1569_; 
lean_dec_ref(v___x_1539_);
v___x_1566_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
lean_ctor_set(v___x_1567_, 1, v_snd_1546_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set_tag(v___x_1561_, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1567_);
v___x_1569_ = v___x_1561_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_del_object(v___x_1561_);
v___x_1571_ = lean_box(0);
lean_inc(v_head_1544_);
v___x_1572_ = lean_array_push(v_snd_1546_, v_head_1544_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v_as_x27_1540_ = v_tail_1545_;
v_b_1541_ = v___x_1573_;
goto _start;
}
}
}
else
{
lean_dec(v_val_1558_);
lean_dec_ref(v___x_1539_);
goto v___jp_1550_;
}
}
else
{
lean_dec(v___x_1557_);
lean_dec_ref(v___x_1539_);
goto v___jp_1550_;
}
v___jp_1550_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1551_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___closed__0));
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1551_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_snd_1546_);
v___x_1553_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1553_);
return v___x_1554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg___boxed(lean_object* v___x_1578_, lean_object* v_as_x27_1579_, lean_object* v_b_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1578_, v_as_x27_1579_, v_b_1580_);
lean_dec(v_as_x27_1579_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(lean_object* v_declName_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v___x_1595_; lean_object* v_env_1599_; uint8_t v___x_1600_; lean_object* v___x_1601_; 
v___x_1595_ = lean_st_ref_get(v_a_1590_);
v_env_1599_ = lean_ctor_get(v___x_1595_, 0);
lean_inc_ref_n(v_env_1599_, 2);
lean_dec(v___x_1595_);
v___x_1600_ = 0;
v___x_1601_ = l_Lean_Environment_find_x3f(v_env_1599_, v_declName_1588_, v___x_1600_);
if (lean_obj_tag(v___x_1601_) == 1)
{
lean_object* v_val_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1632_; 
v_val_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1632_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_val_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1632_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
if (lean_obj_tag(v_val_1602_) == 5)
{
lean_object* v_val_1606_; lean_object* v_numParams_1607_; lean_object* v_numIndices_1608_; lean_object* v_ctors_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v_val_1606_ = lean_ctor_get(v_val_1602_, 0);
lean_inc_ref(v_val_1606_);
lean_dec_ref_known(v_val_1602_, 1);
v_numParams_1607_ = lean_ctor_get(v_val_1606_, 1);
lean_inc(v_numParams_1607_);
v_numIndices_1608_ = lean_ctor_get(v_val_1606_, 2);
lean_inc(v_numIndices_1608_);
v_ctors_1609_ = lean_ctor_get(v_val_1606_, 4);
lean_inc(v_ctors_1609_);
lean_dec_ref(v_val_1606_);
v___x_1610_ = lean_unsigned_to_nat(0u);
v___x_1611_ = lean_nat_dec_eq(v_numParams_1607_, v___x_1610_);
lean_dec(v_numParams_1607_);
if (v___x_1611_ == 0)
{
lean_dec(v_ctors_1609_);
lean_dec(v_numIndices_1608_);
lean_del_object(v___x_1604_);
lean_dec_ref(v_env_1599_);
goto v___jp_1596_;
}
else
{
uint8_t v___x_1612_; 
v___x_1612_ = lean_nat_dec_eq(v_numIndices_1608_, v___x_1610_);
lean_dec(v_numIndices_1608_);
if (v___x_1612_ == 0)
{
lean_dec(v_ctors_1609_);
lean_del_object(v___x_1604_);
lean_dec_ref(v_env_1599_);
goto v___jp_1596_;
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1631_; 
v___x_1613_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___closed__1));
v___x_1614_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v_env_1599_, v_ctors_1609_, v___x_1613_);
lean_dec(v_ctors_1609_);
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1617_ = v___x_1614_;
v_isShared_1618_ = v_isSharedCheck_1631_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1614_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1631_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v_fst_1619_; 
v_fst_1619_ = lean_ctor_get(v_a_1615_, 0);
if (lean_obj_tag(v_fst_1619_) == 0)
{
lean_object* v_snd_1620_; lean_object* v___x_1622_; 
v_snd_1620_ = lean_ctor_get(v_a_1615_, 1);
lean_inc(v_snd_1620_);
lean_dec(v_a_1615_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_snd_1620_);
v___x_1622_ = v___x_1604_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_snd_1620_);
v___x_1622_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1624_; 
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v___x_1622_);
v___x_1624_ = v___x_1617_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
else
{
lean_object* v_val_1627_; lean_object* v___x_1629_; 
lean_inc_ref(v_fst_1619_);
lean_dec(v_a_1615_);
lean_del_object(v___x_1604_);
v_val_1627_ = lean_ctor_get(v_fst_1619_, 0);
lean_inc(v_val_1627_);
lean_dec_ref_known(v_fst_1619_, 1);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v_val_1627_);
v___x_1629_ = v___x_1617_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_val_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1604_);
lean_dec(v_val_1602_);
lean_dec_ref(v_env_1599_);
goto v___jp_1592_;
}
}
}
else
{
lean_dec(v___x_1601_);
lean_dec_ref(v_env_1599_);
goto v___jp_1592_;
}
v___jp_1592_:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = lean_box(0);
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
return v___x_1594_;
}
v___jp_1596_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_box(0);
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors___boxed(lean_object* v_declName_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_1633_, v_a_1634_, v_a_1635_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(lean_object* v___x_1638_, lean_object* v_as_1639_, lean_object* v_as_x27_1640_, lean_object* v_b_1641_, lean_object* v_a_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___redArg(v___x_1638_, v_as_x27_1640_, v_b_1641_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0___boxed(lean_object* v___x_1647_, lean_object* v_as_1648_, lean_object* v_as_x27_1649_, lean_object* v_b_1650_, lean_object* v_a_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_List_forIn_x27_loop___at___00__private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors_spec__0(v___x_1647_, v_as_1648_, v_as_x27_1649_, v_b_1650_, v_a_1651_, v___y_1652_, v___y_1653_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v_as_x27_1649_);
lean_dec(v_as_1648_);
return v_res_1655_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1(void){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__0));
v___x_1658_ = l_Lean_stringToMessageData(v___x_1657_);
return v___x_1658_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__2));
v___x_1661_ = l_Lean_stringToMessageData(v___x_1660_);
return v___x_1661_;
}
}
static lean_object* _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__4));
v___x_1664_ = l_Lean_stringToMessageData(v___x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(lean_object* v_declName_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___x_1678_; lean_object* v_env_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; 
v___x_1678_ = lean_st_ref_get(v_a_1667_);
v_env_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc_ref(v_env_1679_);
lean_dec(v___x_1678_);
v___x_1680_ = 0;
lean_inc(v_declName_1665_);
v___x_1681_ = l_Lean_Environment_find_x3f(v_env_1679_, v_declName_1665_, v___x_1680_);
if (lean_obj_tag(v___x_1681_) == 1)
{
lean_object* v_val_1682_; 
v_val_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_val_1682_);
lean_dec_ref_known(v___x_1681_, 1);
if (lean_obj_tag(v_val_1682_) == 5)
{
lean_object* v_val_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1700_; 
v_val_1683_ = lean_ctor_get(v_val_1682_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_val_1682_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1685_ = v_val_1682_;
v_isShared_1686_ = v_isSharedCheck_1700_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_val_1683_);
lean_dec(v_val_1682_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1700_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_numParams_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_numParams_1687_ = lean_ctor_get(v_val_1683_, 1);
lean_inc(v_numParams_1687_);
lean_dec_ref(v_val_1683_);
v___x_1688_ = lean_unsigned_to_nat(0u);
v___x_1689_ = lean_nat_dec_eq(v_numParams_1687_, v___x_1688_);
lean_dec(v_numParams_1687_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
lean_del_object(v___x_1685_);
v___x_1690_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1691_ = l_Lean_MessageData_ofName(v_declName_1665_);
v___x_1692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__5);
v___x_1694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1694_, v_a_1666_, v_a_1667_);
return v___x_1695_;
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1698_; 
lean_dec(v_declName_1665_);
v___x_1696_ = lean_box(0);
if (v_isShared_1686_ == 0)
{
lean_ctor_set_tag(v___x_1685_, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1696_);
v___x_1698_ = v___x_1685_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1696_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
else
{
lean_dec(v_val_1682_);
v___y_1670_ = v_a_1666_;
v___y_1671_ = v_a_1667_;
goto v___jp_1669_;
}
}
else
{
lean_dec(v___x_1681_);
v___y_1670_ = v_a_1666_;
v___y_1671_ = v_a_1667_;
goto v___jp_1669_;
}
v___jp_1669_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1672_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__1);
v___x_1673_ = l_Lean_MessageData_ofName(v_declName_1665_);
v___x_1674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_obj_once(&l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3, &l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3_once, _init_l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___closed__3);
v___x_1676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_1676_, v___y_1670_, v___y_1671_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple___boxed(lean_object* v_declName_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_1701_, v_a_1702_, v_a_1703_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
return v_res_1705_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__4));
v___x_1716_ = l_String_toRawSubstring_x27(v___x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(size_t v_sz_1735_, size_t v_i_1736_, lean_object* v_bs_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_usize_dec_lt(v_i_1736_, v_sz_1735_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_bs_1737_);
return v___x_1742_;
}
else
{
uint8_t v___x_1743_; lean_object* v_v_1744_; lean_object* v___x_1745_; lean_object* v_bs_x27_1746_; lean_object* v___x_1747_; 
v___x_1743_ = 0;
v_v_1744_ = lean_array_uget(v_bs_1737_, v_i_1736_);
v___x_1745_ = lean_unsigned_to_nat(0u);
v_bs_x27_1746_ = lean_array_uset(v_bs_1737_, v_i_1736_, v___x_1745_);
v___x_1747_ = l_Lean_Elab_Command_getRef___redArg(v___y_1738_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v___x_1749_ = l_Lean_SourceInfo_fromRef(v_a_1748_, v___x_1743_);
lean_dec(v_a_1748_);
v___x_1750_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1738_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v_a_1753_; lean_object* v_quotContext_x3f_1779_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 1);
v_quotContext_x3f_1779_ = lean_ctor_get(v___y_1738_, 5);
if (lean_obj_tag(v_quotContext_x3f_1779_) == 0)
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1739_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v_a_1753_ = v_a_1781_;
goto v___jp_1752_;
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_dec(v_a_1751_);
lean_dec(v___x_1749_);
lean_dec_ref(v_bs_x27_1746_);
lean_dec(v_v_1744_);
v_a_1782_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1780_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1780_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_val_1790_; 
v_val_1790_ = lean_ctor_get(v_quotContext_x3f_1779_, 0);
lean_inc(v_val_1790_);
v_a_1753_ = v_val_1790_;
goto v___jp_1752_;
}
v___jp_1752_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; size_t v___x_1775_; size_t v___x_1776_; lean_object* v___x_1777_; 
v___x_1754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_1755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_1749_, 7);
v___x_1756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1749_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
lean_inc(v_v_1744_);
v___x_1758_ = l_Lean_mkIdent(v_v_1744_);
v___x_1759_ = l_Lean_Syntax_node1(v___x_1749_, v___x_1757_, v___x_1758_);
v___x_1760_ = l_Lean_Syntax_node1(v___x_1749_, v___x_1757_, v___x_1759_);
v___x_1761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_1762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1749_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_1764_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5);
v___x_1765_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8));
v___x_1766_ = l_Lean_addMacroScope(v_a_1753_, v___x_1765_, v_a_1751_);
v___x_1767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12));
v___x_1768_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1749_);
lean_ctor_set(v___x_1768_, 1, v___x_1764_);
lean_ctor_set(v___x_1768_, 2, v___x_1766_);
lean_ctor_set(v___x_1768_, 3, v___x_1767_);
v___x_1769_ = l_Lean_Name_getString_x21(v_v_1744_);
lean_dec(v_v_1744_);
v___x_1770_ = lean_box(2);
v___x_1771_ = l_Lean_Syntax_mkStrLit(v___x_1769_, v___x_1770_);
v___x_1772_ = l_Lean_Syntax_node1(v___x_1749_, v___x_1757_, v___x_1771_);
v___x_1773_ = l_Lean_Syntax_node2(v___x_1749_, v___x_1763_, v___x_1768_, v___x_1772_);
v___x_1774_ = l_Lean_Syntax_node4(v___x_1749_, v___x_1754_, v___x_1756_, v___x_1760_, v___x_1762_, v___x_1773_);
v___x_1775_ = ((size_t)1ULL);
v___x_1776_ = lean_usize_add(v_i_1736_, v___x_1775_);
v___x_1777_ = lean_array_uset(v_bs_x27_1746_, v_i_1736_, v___x_1774_);
v_i_1736_ = v___x_1776_;
v_bs_1737_ = v___x_1777_;
goto _start;
}
}
else
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
lean_dec(v___x_1749_);
lean_dec_ref(v_bs_x27_1746_);
lean_dec(v_v_1744_);
v_a_1791_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1750_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1750_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
lean_dec_ref(v_bs_x27_1746_);
lean_dec(v_v_1744_);
v_a_1799_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1747_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1747_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___boxed(lean_object* v_sz_1807_, lean_object* v_i_1808_, lean_object* v_bs_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
size_t v_sz_boxed_1813_; size_t v_i_boxed_1814_; lean_object* v_res_1815_; 
v_sz_boxed_1813_ = lean_unbox_usize(v_sz_1807_);
lean_dec(v_sz_1807_);
v_i_boxed_1814_ = lean_unbox_usize(v_i_1808_);
lean_dec(v_i_1808_);
v_res_1815_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_boxed_1813_, v_i_boxed_1814_, v_bs_1809_, v___y_1810_, v___y_1811_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(size_t v_sz_1816_, size_t v_i_1817_, lean_object* v_bs_1818_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_lt(v_i_1817_, v_sz_1816_);
if (v___x_1819_ == 0)
{
return v_bs_1818_;
}
else
{
lean_object* v_v_1820_; lean_object* v___x_1821_; lean_object* v_bs_x27_1822_; size_t v___x_1823_; size_t v___x_1824_; lean_object* v___x_1825_; 
v_v_1820_ = lean_array_uget(v_bs_1818_, v_i_1817_);
v___x_1821_ = lean_unsigned_to_nat(0u);
v_bs_x27_1822_ = lean_array_uset(v_bs_1818_, v_i_1817_, v___x_1821_);
v___x_1823_ = ((size_t)1ULL);
v___x_1824_ = lean_usize_add(v_i_1817_, v___x_1823_);
v___x_1825_ = lean_array_uset(v_bs_x27_1822_, v_i_1817_, v_v_1820_);
v_i_1817_ = v___x_1824_;
v_bs_1818_ = v___x_1825_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2___boxed(lean_object* v_sz_1827_, lean_object* v_i_1828_, lean_object* v_bs_1829_){
_start:
{
size_t v_sz_boxed_1830_; size_t v_i_boxed_1831_; lean_object* v_res_1832_; 
v_sz_boxed_1830_ = lean_unbox_usize(v_sz_1827_);
lean_dec(v_sz_1827_);
v_i_boxed_1831_ = lean_unbox_usize(v_i_1828_);
lean_dec(v_i_1828_);
v_res_1832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_boxed_1830_, v_i_boxed_1831_, v_bs_1829_);
return v_res_1832_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Meta_instInhabitedBindingInfo_default___closed__0));
v___x_1849_ = l_String_toRawSubstring_x27(v___x_1848_);
return v___x_1849_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__24));
v___x_1897_ = l_String_toRawSubstring_x27(v___x_1896_);
return v___x_1897_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__34));
v___x_1923_ = l_String_toRawSubstring_x27(v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(lean_object* v___x_1926_, lean_object* v_declName_1927_, size_t v_sz_1928_, size_t v_i_1929_, lean_object* v_bs_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
uint8_t v___x_1934_; 
v___x_1934_ = lean_usize_dec_lt(v_i_1929_, v_sz_1928_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; 
lean_dec(v_declName_1927_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v_bs_1930_);
return v___x_1935_;
}
else
{
uint8_t v___x_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; lean_object* v_v_1939_; lean_object* v___x_1940_; lean_object* v_bs_x27_1941_; lean_object* v___x_1942_; 
v___x_1936_ = 0;
v___x_1937_ = lean_unsigned_to_nat(1u);
v___x_1938_ = lean_nat_dec_eq(v___x_1926_, v___x_1937_);
v_v_1939_ = lean_array_uget(v_bs_1930_, v_i_1929_);
v___x_1940_ = lean_unsigned_to_nat(0u);
v_bs_x27_1941_ = lean_array_uset(v_bs_1930_, v_i_1929_, v___x_1940_);
v___x_1942_ = l_Lean_Elab_Command_getRef___redArg(v___y_1931_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1942_, 1);
v___x_1944_ = l_Lean_SourceInfo_fromRef(v_a_1943_, v___x_1936_);
lean_dec(v_a_1943_);
v___x_1945_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1931_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v_a_1948_; lean_object* v_quotContext_x3f_1995_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v_quotContext_x3f_1995_ = lean_ctor_get(v___y_1931_, 5);
if (lean_obj_tag(v_quotContext_x3f_1995_) == 0)
{
lean_object* v___x_1996_; 
v___x_1996_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_1932_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
v_a_1948_ = v_a_1997_;
goto v___jp_1947_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_a_1946_);
lean_dec(v___x_1944_);
lean_dec_ref(v_bs_x27_1941_);
lean_dec(v_v_1939_);
lean_dec(v_declName_1927_);
v_a_1998_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1996_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1996_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v_val_2006_; 
v_val_2006_ = lean_ctor_get(v_quotContext_x3f_1995_, 0);
lean_inc(v_val_2006_);
v_a_1948_ = v_val_2006_;
goto v___jp_1947_;
}
v___jp_1947_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; size_t v___x_1991_; size_t v___x_1992_; lean_object* v___x_1993_; 
v___x_1949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__1));
v___x_1950_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__3));
v___x_1951_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__49));
lean_inc_n(v___x_1944_, 15);
v___x_1952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1944_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__5));
v___x_1954_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__6);
v___x_1955_ = lean_box(0);
lean_inc_n(v_a_1946_, 2);
lean_inc_n(v_a_1948_, 2);
v___x_1956_ = l_Lean_addMacroScope(v_a_1948_, v___x_1955_, v_a_1946_);
v___x_1957_ = lean_box(0);
v___x_1958_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__23));
v___x_1959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1944_);
lean_ctor_set(v___x_1959_, 1, v___x_1954_);
lean_ctor_set(v___x_1959_, 2, v___x_1956_);
lean_ctor_set(v___x_1959_, 3, v___x_1958_);
v___x_1960_ = l_Lean_Syntax_node1(v___x_1944_, v___x_1953_, v___x_1959_);
v___x_1961_ = l_Lean_Syntax_node2(v___x_1944_, v___x_1950_, v___x_1952_, v___x_1960_);
v___x_1962_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
lean_inc(v_v_1939_);
v___x_1963_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1939_, v___x_1938_);
v___x_1964_ = lean_box(2);
v___x_1965_ = l_Lean_Syntax_mkStrLit(v___x_1963_, v___x_1964_);
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_1967_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1944_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_1969_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__25);
v___x_1970_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__27));
v___x_1971_ = l_Lean_addMacroScope(v_a_1948_, v___x_1970_, v_a_1946_);
v___x_1972_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__31));
v___x_1973_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1944_);
lean_ctor_set(v___x_1973_, 1, v___x_1969_);
lean_ctor_set(v___x_1973_, 2, v___x_1971_);
lean_ctor_set(v___x_1973_, 3, v___x_1972_);
v___x_1974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__33));
lean_inc(v_declName_1927_);
v___x_1975_ = l_Lean_Name_append(v_declName_1927_, v_v_1939_);
v___x_1976_ = l_Lean_mkIdent(v___x_1975_);
v___x_1977_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_1978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_1979_ = l_Lean_addMacroScope(v_a_1948_, v___x_1978_, v_a_1946_);
v___x_1980_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1944_);
lean_ctor_set(v___x_1980_, 1, v___x_1977_);
lean_ctor_set(v___x_1980_, 2, v___x_1979_);
lean_ctor_set(v___x_1980_, 3, v___x_1957_);
v___x_1981_ = l_Lean_Syntax_node1(v___x_1944_, v___x_1962_, v___x_1980_);
v___x_1982_ = l_Lean_Syntax_node2(v___x_1944_, v___x_1968_, v___x_1976_, v___x_1981_);
v___x_1983_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__54));
v___x_1984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1944_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
lean_inc_ref(v___x_1984_);
lean_inc(v___x_1961_);
v___x_1985_ = l_Lean_Syntax_node3(v___x_1944_, v___x_1974_, v___x_1961_, v___x_1982_, v___x_1984_);
v___x_1986_ = l_Lean_Syntax_node1(v___x_1944_, v___x_1962_, v___x_1985_);
v___x_1987_ = l_Lean_Syntax_node2(v___x_1944_, v___x_1968_, v___x_1973_, v___x_1986_);
v___x_1988_ = l_Lean_Syntax_node1(v___x_1944_, v___x_1962_, v___x_1987_);
v___x_1989_ = l_Lean_Syntax_node3(v___x_1944_, v___x_1962_, v___x_1965_, v___x_1967_, v___x_1988_);
v___x_1990_ = l_Lean_Syntax_node3(v___x_1944_, v___x_1949_, v___x_1961_, v___x_1989_, v___x_1984_);
v___x_1991_ = ((size_t)1ULL);
v___x_1992_ = lean_usize_add(v_i_1929_, v___x_1991_);
v___x_1993_ = lean_array_uset(v_bs_x27_1941_, v_i_1929_, v___x_1990_);
v_i_1929_ = v___x_1992_;
v_bs_1930_ = v___x_1993_;
goto _start;
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v___x_1944_);
lean_dec_ref(v_bs_x27_1941_);
lean_dec(v_v_1939_);
lean_dec(v_declName_1927_);
v_a_2007_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_1945_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_1945_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_dec_ref(v_bs_x27_1941_);
lean_dec(v_v_1939_);
lean_dec(v_declName_1927_);
v_a_2015_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_1942_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_1942_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___boxed(lean_object* v___x_2023_, lean_object* v_declName_2024_, lean_object* v_sz_2025_, lean_object* v_i_2026_, lean_object* v_bs_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
size_t v_sz_boxed_2031_; size_t v_i_boxed_2032_; lean_object* v_res_2033_; 
v_sz_boxed_2031_ = lean_unbox_usize(v_sz_2025_);
lean_dec(v_sz_2025_);
v_i_boxed_2032_ = lean_unbox_usize(v_i_2026_);
lean_dec(v_i_2026_);
v_res_2033_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_2023_, v_declName_2024_, v_sz_boxed_2031_, v_i_boxed_2032_, v_bs_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___x_2023_);
return v_res_2033_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__3(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__2));
v___x_2042_ = l_String_toRawSubstring_x27(v___x_2041_);
return v___x_2042_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__18(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__17));
v___x_2084_ = l_String_toRawSubstring_x27(v___x_2083_);
return v___x_2084_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__35(void){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__34));
v___x_2129_ = l_Lean_stringToMessageData(v___x_2128_);
return v___x_2129_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkToJS___closed__37(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__36));
v___x_2132_ = l_Lean_stringToMessageData(v___x_2131_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS(lean_object* v_declNames_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; uint8_t v___x_2139_; 
v___x_2137_ = lean_array_get_size(v_declNames_2133_);
v___x_2138_ = lean_unsigned_to_nat(1u);
v___x_2139_ = lean_nat_dec_eq(v___x_2137_, v___x_2138_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = lean_box(v___x_2139_);
v___x_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
return v___x_2141_;
}
else
{
lean_object* v___x_2142_; uint8_t v___x_2143_; lean_object* v___x_2144_; lean_object* v_declName_2145_; lean_object* v___x_2146_; 
v___x_2142_ = lean_box(0);
v___x_2143_ = 0;
v___x_2144_ = lean_unsigned_to_nat(0u);
v_declName_2145_ = lean_array_get_borrowed(v___x_2142_, v_declNames_2133_, v___x_2144_);
lean_inc(v_declName_2145_);
v___x_2146_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2145_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v_a_2149_; 
lean_dec_ref_known(v___x_2146_, 1);
lean_inc_n(v_declName_2145_, 2);
v___x_2147_ = l_Lean_mkIdent(v_declName_2145_);
v___x_2148_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2145_, v_a_2135_);
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref(v___x_2148_);
if (lean_obj_tag(v_a_2149_) == 1)
{
lean_object* v_val_2150_; size_t v_sz_2151_; size_t v___x_2152_; lean_object* v___x_2153_; 
v_val_2150_ = lean_ctor_get(v_a_2149_, 0);
lean_inc(v_val_2150_);
lean_dec_ref_known(v_a_2149_, 1);
v_sz_2151_ = lean_array_size(v_val_2150_);
v___x_2152_ = ((size_t)0ULL);
lean_inc(v_declName_2145_);
v___x_2153_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0(v___x_2137_, v_declName_2145_, v_sz_2151_, v___x_2152_, v_val_2150_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2155_; lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v_a_2159_; lean_object* v_a_2161_; lean_object* v_quotContext_x3f_2251_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v___x_2153_, 1);
v___x_2155_ = l_Lean_Elab_Command_getRef___redArg(v_a_2134_);
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref(v___x_2155_);
v___x_2157_ = l_Lean_SourceInfo_fromRef(v_a_2156_, v___x_2143_);
lean_dec(v_a_2156_);
v___x_2158_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2134_);
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref(v___x_2158_);
v_quotContext_x3f_2251_ = lean_ctor_get(v_a_2134_, 5);
if (lean_obj_tag(v_quotContext_x3f_2251_) == 0)
{
lean_object* v___x_2252_; lean_object* v_a_2253_; 
v___x_2252_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2135_);
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref(v___x_2252_);
v_a_2161_ = v_a_2253_;
goto v___jp_2160_;
}
else
{
lean_object* v_val_2254_; 
v_val_2254_ = lean_ctor_get(v_quotContext_x3f_2251_, 0);
lean_inc(v_val_2254_);
v_a_2161_ = v_val_2254_;
goto v___jp_2160_;
}
v___jp_2160_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_2163_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_2164_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2165_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
lean_inc_n(v___x_2157_, 31);
v___x_2166_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2157_);
lean_ctor_set(v___x_2166_, 1, v___x_2164_);
lean_ctor_set(v___x_2166_, 2, v___x_2165_);
lean_inc_ref_n(v___x_2166_, 14);
v___x_2167_ = l_Lean_Syntax_node7(v___x_2157_, v___x_2163_, v___x_2166_, v___x_2166_, v___x_2166_, v___x_2166_, v___x_2166_, v___x_2166_, v___x_2166_);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2169_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2170_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2171_ = l_Lean_Syntax_node1(v___x_2157_, v___x_2170_, v___x_2166_);
v___x_2172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2157_);
lean_ctor_set(v___x_2172_, 1, v___x_2168_);
v___x_2173_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2175_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_2176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2157_);
lean_ctor_set(v___x_2176_, 1, v___x_2175_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2178_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2179_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc_n(v_a_2159_, 2);
lean_inc_n(v_a_2161_, 2);
v___x_2180_ = l_Lean_addMacroScope(v_a_2161_, v___x_2179_, v_a_2159_);
v___x_2181_ = lean_box(0);
v___x_2182_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2183_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2157_);
lean_ctor_set(v___x_2183_, 1, v___x_2178_);
lean_ctor_set(v___x_2183_, 2, v___x_2180_);
lean_ctor_set(v___x_2183_, 3, v___x_2182_);
v___x_2184_ = l_Lean_Syntax_node1(v___x_2157_, v___x_2164_, v___x_2147_);
v___x_2185_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2177_, v___x_2183_, v___x_2184_);
v___x_2186_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2174_, v___x_2176_, v___x_2185_);
v___x_2187_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2173_, v___x_2166_, v___x_2186_);
v___x_2188_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__9));
v___x_2189_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_2190_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2157_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2192_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2157_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2195_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__14));
v___x_2196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2157_);
lean_ctor_set(v___x_2196_, 1, v___x_2194_);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_2198_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2199_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2200_ = l_Lean_addMacroScope(v_a_2161_, v___x_2199_, v_a_2159_);
v___x_2201_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2157_);
lean_ctor_set(v___x_2201_, 1, v___x_2198_);
lean_ctor_set(v___x_2201_, 2, v___x_2200_);
lean_ctor_set(v___x_2201_, 3, v___x_2181_);
v___x_2202_ = l_Lean_Syntax_node1(v___x_2157_, v___x_2164_, v___x_2201_);
v___x_2203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2204_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2157_);
lean_ctor_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__18, &l_Lasm_JS_Meta_mkToJS___closed__18_once, _init_l_Lasm_JS_Meta_mkToJS___closed__18);
v___x_2206_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__20));
v___x_2207_ = l_Lean_addMacroScope(v_a_2161_, v___x_2206_, v_a_2159_);
v___x_2208_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__24));
v___x_2209_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2157_);
lean_ctor_set(v___x_2209_, 1, v___x_2205_);
lean_ctor_set(v___x_2209_, 2, v___x_2207_);
lean_ctor_set(v___x_2209_, 3, v___x_2208_);
v___x_2210_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__30));
v___x_2211_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__31));
v___x_2212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2157_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2214_ = l_Lean_Syntax_SepArray_ofElems(v___x_2213_, v_a_2154_);
lean_dec(v_a_2154_);
v___x_2215_ = l_Array_append___redArg(v___x_2165_, v___x_2214_);
lean_dec_ref(v___x_2214_);
v___x_2216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2157_);
lean_ctor_set(v___x_2216_, 1, v___x_2164_);
lean_ctor_set(v___x_2216_, 2, v___x_2215_);
v___x_2217_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__32));
v___x_2218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2157_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = l_Lean_Syntax_node3(v___x_2157_, v___x_2210_, v___x_2212_, v___x_2216_, v___x_2218_);
v___x_2220_ = l_Lean_Syntax_node1(v___x_2157_, v___x_2164_, v___x_2219_);
v___x_2221_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2177_, v___x_2209_, v___x_2220_);
v___x_2222_ = l_Lean_Syntax_node4(v___x_2157_, v___x_2197_, v___x_2202_, v___x_2166_, v___x_2204_, v___x_2221_);
v___x_2223_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2195_, v___x_2196_, v___x_2222_);
v___x_2224_ = l_Lean_Syntax_node1(v___x_2157_, v___x_2164_, v___x_2223_);
v___x_2225_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2157_);
lean_ctor_set(v___x_2226_, 1, v___x_2225_);
v___x_2227_ = l_Lean_Syntax_node3(v___x_2157_, v___x_2191_, v___x_2193_, v___x_2224_, v___x_2226_);
v___x_2228_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2229_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2228_, v___x_2166_, v___x_2166_);
v___x_2230_ = l_Lean_Syntax_node4(v___x_2157_, v___x_2188_, v___x_2190_, v___x_2227_, v___x_2229_, v___x_2166_);
v___x_2231_ = l_Lean_Syntax_node6(v___x_2157_, v___x_2169_, v___x_2171_, v___x_2172_, v___x_2166_, v___x_2166_, v___x_2187_, v___x_2230_);
v___x_2232_ = l_Lean_Syntax_node2(v___x_2157_, v___x_2162_, v___x_2167_, v___x_2231_);
v___x_2233_ = l_Lean_Elab_Command_elabCommand(v___x_2232_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2241_; 
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2241_ == 0)
{
lean_object* v_unused_2242_; 
v_unused_2242_ = lean_ctor_get(v___x_2233_, 0);
lean_dec(v_unused_2242_);
v___x_2235_ = v___x_2233_;
v_isShared_2236_ = v_isSharedCheck_2241_;
goto v_resetjp_2234_;
}
else
{
lean_dec(v___x_2233_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2241_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2237_ = lean_box(v___x_2139_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2237_);
v___x_2239_ = v___x_2235_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2237_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
v_a_2243_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2233_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2233_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
}
else
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
lean_dec(v___x_2147_);
v_a_2255_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2153_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2153_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
else
{
lean_object* v___x_2263_; 
lean_dec(v_a_2149_);
lean_inc(v_declName_2145_);
v___x_2263_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2145_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
if (lean_obj_tag(v_a_2264_) == 1)
{
lean_object* v_val_2265_; size_t v_sz_2266_; size_t v___x_2267_; lean_object* v___x_2268_; 
v_val_2265_ = lean_ctor_get(v_a_2264_, 0);
lean_inc(v_val_2265_);
lean_dec_ref_known(v_a_2264_, 1);
v_sz_2266_ = lean_array_size(v_val_2265_);
v___x_2267_ = ((size_t)0ULL);
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1(v_sz_2266_, v___x_2267_, v_val_2265_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v_a_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v_a_2274_; lean_object* v_a_2276_; lean_object* v_quotContext_x3f_2364_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v___x_2270_ = l_Lean_Elab_Command_getRef___redArg(v_a_2134_);
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_a_2271_);
lean_dec_ref(v___x_2270_);
v___x_2272_ = l_Lean_SourceInfo_fromRef(v_a_2271_, v___x_2143_);
lean_dec(v_a_2271_);
v___x_2273_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2134_);
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref(v___x_2273_);
v_quotContext_x3f_2364_ = lean_ctor_get(v_a_2134_, 5);
if (lean_obj_tag(v_quotContext_x3f_2364_) == 0)
{
lean_object* v___x_2365_; lean_object* v_a_2366_; 
v___x_2365_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2135_);
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc(v_a_2366_);
lean_dec_ref(v___x_2365_);
v_a_2276_ = v_a_2366_;
goto v___jp_2275_;
}
else
{
lean_object* v_val_2367_; 
v_val_2367_ = lean_ctor_get(v_quotContext_x3f_2364_, 0);
lean_inc(v_val_2367_);
v_a_2276_ = v_val_2367_;
goto v___jp_2275_;
}
v___jp_2275_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; size_t v_sz_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_2279_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2280_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
lean_inc_n(v___x_2272_, 31);
v___x_2281_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2272_);
lean_ctor_set(v___x_2281_, 1, v___x_2279_);
lean_ctor_set(v___x_2281_, 2, v___x_2280_);
lean_inc_ref_n(v___x_2281_, 17);
v___x_2282_ = l_Lean_Syntax_node7(v___x_2272_, v___x_2278_, v___x_2281_, v___x_2281_, v___x_2281_, v___x_2281_, v___x_2281_, v___x_2281_, v___x_2281_);
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2284_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2286_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2285_, v___x_2281_);
v___x_2287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2272_);
lean_ctor_set(v___x_2287_, 1, v___x_2283_);
v___x_2288_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_2291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2272_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2293_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__3, &l_Lasm_JS_Meta_mkToJS___closed__3_once, _init_l_Lasm_JS_Meta_mkToJS___closed__3);
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
lean_inc(v_a_2274_);
lean_inc(v_a_2276_);
v___x_2295_ = l_Lean_addMacroScope(v_a_2276_, v___x_2294_, v_a_2274_);
v___x_2296_ = lean_box(0);
v___x_2297_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__8));
v___x_2298_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2272_);
lean_ctor_set(v___x_2298_, 1, v___x_2293_);
lean_ctor_set(v___x_2298_, 2, v___x_2295_);
lean_ctor_set(v___x_2298_, 3, v___x_2297_);
v___x_2299_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2279_, v___x_2147_);
v___x_2300_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2292_, v___x_2298_, v___x_2299_);
v___x_2301_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2289_, v___x_2291_, v___x_2300_);
v___x_2302_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2288_, v___x_2281_, v___x_2301_);
v___x_2303_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__9));
v___x_2304_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_2305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2272_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__11));
v___x_2307_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__12));
v___x_2308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2272_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__13));
v___x_2310_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__14));
v___x_2311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2272_);
lean_ctor_set(v___x_2311_, 1, v___x_2309_);
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__16));
v___x_2313_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__35);
v___x_2314_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__0___closed__36));
v___x_2315_ = l_Lean_addMacroScope(v_a_2276_, v___x_2314_, v_a_2274_);
v___x_2316_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2272_);
lean_ctor_set(v___x_2316_, 1, v___x_2313_);
lean_ctor_set(v___x_2316_, 2, v___x_2315_);
lean_ctor_set(v___x_2316_, 3, v___x_2296_);
lean_inc_ref(v___x_2316_);
v___x_2317_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2279_, v___x_2316_);
v___x_2318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2319_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2272_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__27));
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_2322_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2272_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__30));
v___x_2324_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2323_, v___x_2281_, v___x_2316_);
v___x_2325_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2279_, v___x_2324_);
v___x_2326_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_2327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2272_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__33));
v_sz_2329_ = lean_array_size(v_a_2269_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_2329_, v___x_2267_, v_a_2269_);
v___x_2331_ = l_Array_append___redArg(v___x_2280_, v___x_2330_);
lean_dec_ref(v___x_2330_);
v___x_2332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2272_);
lean_ctor_set(v___x_2332_, 1, v___x_2279_);
lean_ctor_set(v___x_2332_, 2, v___x_2331_);
v___x_2333_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2328_, v___x_2332_);
v___x_2334_ = l_Lean_Syntax_node6(v___x_2272_, v___x_2321_, v___x_2322_, v___x_2281_, v___x_2281_, v___x_2325_, v___x_2327_, v___x_2333_);
v___x_2335_ = l_Lean_Syntax_node4(v___x_2272_, v___x_2312_, v___x_2317_, v___x_2281_, v___x_2319_, v___x_2334_);
v___x_2336_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2310_, v___x_2311_, v___x_2335_);
v___x_2337_ = l_Lean_Syntax_node1(v___x_2272_, v___x_2279_, v___x_2336_);
v___x_2338_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__25));
v___x_2339_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2272_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = l_Lean_Syntax_node3(v___x_2272_, v___x_2306_, v___x_2308_, v___x_2337_, v___x_2339_);
v___x_2341_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__26));
v___x_2342_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2341_, v___x_2281_, v___x_2281_);
v___x_2343_ = l_Lean_Syntax_node4(v___x_2272_, v___x_2303_, v___x_2305_, v___x_2340_, v___x_2342_, v___x_2281_);
v___x_2344_ = l_Lean_Syntax_node6(v___x_2272_, v___x_2284_, v___x_2286_, v___x_2287_, v___x_2281_, v___x_2281_, v___x_2302_, v___x_2343_);
v___x_2345_ = l_Lean_Syntax_node2(v___x_2272_, v___x_2277_, v___x_2282_, v___x_2344_);
v___x_2346_ = l_Lean_Elab_Command_elabCommand(v___x_2345_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2354_; 
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v___x_2346_, 0);
lean_dec(v_unused_2355_);
v___x_2348_ = v___x_2346_;
v_isShared_2349_ = v_isSharedCheck_2354_;
goto v_resetjp_2347_;
}
else
{
lean_dec(v___x_2346_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2354_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2350_; lean_object* v___x_2352_; 
v___x_2350_ = lean_box(v___x_2139_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2350_);
v___x_2352_ = v___x_2348_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
v_a_2356_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2346_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2346_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v___x_2147_);
v_a_2368_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2268_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2268_);
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
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
lean_dec(v_a_2264_);
lean_dec(v___x_2147_);
v___x_2376_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__35, &l_Lasm_JS_Meta_mkToJS___closed__35_once, _init_l_Lasm_JS_Meta_mkToJS___closed__35);
lean_inc(v_declName_2145_);
v___x_2377_ = l_Lean_MessageData_ofName(v_declName_2145_);
v___x_2378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2376_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
v___x_2379_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__37, &l_Lasm_JS_Meta_mkToJS___closed__37_once, _init_l_Lasm_JS_Meta_mkToJS___closed__37);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2380_, v_a_2134_, v_a_2135_);
return v___x_2381_;
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec(v___x_2147_);
v_a_2382_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2263_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2263_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
v_a_2390_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2146_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2146_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkToJS___boxed(lean_object* v_declNames_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lasm_JS_Meta_mkToJS(v_declNames_2398_, v_a_2399_, v_a_2400_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec_ref(v_declNames_2398_);
return v_res_2402_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__0));
v___x_2405_ = l_String_toRawSubstring_x27(v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(size_t v_sz_2422_, size_t v_i_2423_, lean_object* v_bs_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
uint8_t v___x_2428_; 
v___x_2428_ = lean_usize_dec_lt(v_i_2423_, v_sz_2422_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v_bs_2424_);
return v___x_2429_;
}
else
{
uint8_t v___x_2430_; lean_object* v_v_2431_; lean_object* v___x_2432_; lean_object* v_bs_x27_2433_; lean_object* v___x_2434_; 
v___x_2430_ = 0;
v_v_2431_ = lean_array_uget(v_bs_2424_, v_i_2423_);
v___x_2432_ = lean_unsigned_to_nat(0u);
v_bs_x27_2433_ = lean_array_uset(v_bs_2424_, v_i_2423_, v___x_2432_);
v___x_2434_ = l_Lean_Elab_Command_getRef___redArg(v___y_2425_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2434_, 1);
v___x_2436_ = l_Lean_SourceInfo_fromRef(v_a_2435_, v___x_2430_);
lean_dec(v_a_2435_);
v___x_2437_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2425_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v_a_2440_; lean_object* v_quotContext_x3f_2473_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v_quotContext_x3f_2473_ = lean_ctor_get(v___y_2425_, 5);
if (lean_obj_tag(v_quotContext_x3f_2473_) == 0)
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2426_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v_a_2440_ = v_a_2475_;
goto v___jp_2439_;
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
lean_dec(v_a_2438_);
lean_dec(v___x_2436_);
lean_dec_ref(v_bs_x27_2433_);
lean_dec(v_v_2431_);
v_a_2476_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2474_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2474_);
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
else
{
lean_object* v_val_2484_; 
v_val_2484_ = lean_ctor_get(v_quotContext_x3f_2473_, 0);
lean_inc(v_val_2484_);
v_a_2440_ = v_val_2484_;
goto v___jp_2439_;
}
v___jp_2439_:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; size_t v___x_2469_; size_t v___x_2470_; lean_object* v___x_2471_; 
v___x_2441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v___x_2442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
lean_inc_n(v___x_2436_, 10);
v___x_2443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2436_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2446_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__5);
v___x_2447_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__8));
lean_inc(v_a_2438_);
lean_inc(v_a_2440_);
v___x_2448_ = l_Lean_addMacroScope(v_a_2440_, v___x_2447_, v_a_2438_);
v___x_2449_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__12));
v___x_2450_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2436_);
lean_ctor_set(v___x_2450_, 1, v___x_2446_);
lean_ctor_set(v___x_2450_, 2, v___x_2448_);
lean_ctor_set(v___x_2450_, 3, v___x_2449_);
v___x_2451_ = l_Lean_Name_getString_x21(v_v_2431_);
v___x_2452_ = lean_box(2);
v___x_2453_ = l_Lean_Syntax_mkStrLit(v___x_2451_, v___x_2452_);
v___x_2454_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2444_, v___x_2453_);
v___x_2455_ = l_Lean_Syntax_node2(v___x_2436_, v___x_2445_, v___x_2450_, v___x_2454_);
v___x_2456_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2444_, v___x_2455_);
v___x_2457_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2444_, v___x_2456_);
v___x_2458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_2459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2436_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__1);
v___x_2461_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__4));
v___x_2462_ = l_Lean_addMacroScope(v_a_2440_, v___x_2461_, v_a_2438_);
v___x_2463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___closed__8));
v___x_2464_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2436_);
lean_ctor_set(v___x_2464_, 1, v___x_2460_);
lean_ctor_set(v___x_2464_, 2, v___x_2462_);
lean_ctor_set(v___x_2464_, 3, v___x_2463_);
v___x_2465_ = l_Lean_mkIdent(v_v_2431_);
v___x_2466_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2444_, v___x_2465_);
v___x_2467_ = l_Lean_Syntax_node2(v___x_2436_, v___x_2445_, v___x_2464_, v___x_2466_);
v___x_2468_ = l_Lean_Syntax_node4(v___x_2436_, v___x_2441_, v___x_2443_, v___x_2457_, v___x_2459_, v___x_2467_);
v___x_2469_ = ((size_t)1ULL);
v___x_2470_ = lean_usize_add(v_i_2423_, v___x_2469_);
v___x_2471_ = lean_array_uset(v_bs_x27_2433_, v_i_2423_, v___x_2468_);
v_i_2423_ = v___x_2470_;
v_bs_2424_ = v___x_2471_;
goto _start;
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
lean_dec(v___x_2436_);
lean_dec_ref(v_bs_x27_2433_);
lean_dec(v_v_2431_);
v_a_2485_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2437_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2437_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2500_; 
lean_dec_ref(v_bs_x27_2433_);
lean_dec(v_v_2431_);
v_a_2493_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2495_ = v___x_2434_;
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_a_2493_);
lean_dec(v___x_2434_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v___x_2498_; 
if (v_isShared_2496_ == 0)
{
v___x_2498_ = v___x_2495_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_a_2493_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1___boxed(lean_object* v_sz_2501_, lean_object* v_i_2502_, lean_object* v_bs_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
size_t v_sz_boxed_2507_; size_t v_i_boxed_2508_; lean_object* v_res_2509_; 
v_sz_boxed_2507_ = lean_unbox_usize(v_sz_2501_);
lean_dec(v_sz_2501_);
v_i_boxed_2508_ = lean_unbox_usize(v_i_2502_);
lean_dec(v_i_2502_);
v_res_2509_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_boxed_2507_, v_i_boxed_2508_, v_bs_2503_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(lean_object* v_x_2510_, lean_object* v_body_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = lean_box(1);
v___x_2520_ = l_Lean_PrettyPrinter_delab(v_body_2511_, v___x_2519_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0___boxed(lean_object* v_x_2521_, lean_object* v_body_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___lam__0(v_x_2521_, v_body_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v_x_2521_);
return v_res_2530_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__6));
v___x_2547_ = l_String_toRawSubstring_x27(v___x_2546_);
return v___x_2547_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13(void){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__12));
v___x_2561_ = l_String_toRawSubstring_x27(v___x_2560_);
return v___x_2561_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__17));
v___x_2568_ = lean_unsigned_to_nat(14u);
v___x_2569_ = lean_unsigned_to_nat(22u);
v___x_2570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__16));
v___x_2571_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__15));
v___x_2572_ = l_mkPanicMessageWithDecl(v___x_2571_, v___x_2570_, v___x_2569_, v___x_2568_, v___x_2567_);
return v___x_2572_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__19));
v___x_2575_ = l_Lean_stringToMessageData(v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(lean_object* v___x_2576_, lean_object* v___x_2577_, lean_object* v_declName_2578_, lean_object* v_as_2579_, size_t v_sz_2580_, size_t v_i_2581_, lean_object* v_b_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v_a_2587_; uint8_t v___x_2591_; 
v___x_2591_ = lean_usize_dec_lt(v_i_2581_, v_sz_2580_);
if (v___x_2591_ == 0)
{
lean_object* v___x_2592_; 
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v_b_2582_);
return v___x_2592_;
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2594_; 
v_a_2593_ = lean_array_uget_borrowed(v_as_2579_, v_i_2581_);
lean_inc(v_a_2593_);
lean_inc(v_declName_2578_);
lean_inc_ref(v___x_2577_);
v___x_2594_ = l_Lean_getProjFnForField_x3f(v___x_2577_, v_declName_2578_, v_a_2593_);
if (lean_obj_tag(v___x_2594_) == 1)
{
lean_object* v_val_2595_; lean_object* v___f_2596_; uint8_t v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v_a_2604_; lean_object* v___y_2642_; lean_object* v___x_2691_; 
v_val_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_val_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v___f_2596_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__0));
v___x_2597_ = 0;
v___x_2598_ = lean_unsigned_to_nat(1u);
v___x_2599_ = lean_nat_dec_eq(v___x_2576_, v___x_2598_);
lean_inc_ref(v___x_2577_);
v___x_2691_ = l_Lean_Environment_find_x3f(v___x_2577_, v_val_2595_, v___x_2597_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__18);
v___x_2693_ = l_panic___at___00__private_Lean_Environment_0__Lean_Environment_mkFallbackConstInfo_spec__0(v___x_2692_);
v___y_2642_ = v___x_2693_;
goto v___jp_2641_;
}
else
{
lean_object* v_val_2694_; 
v_val_2694_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_val_2694_);
lean_dec_ref_known(v___x_2691_, 1);
v___y_2642_ = v_val_2694_;
goto v___jp_2641_;
}
v___jp_2600_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2605_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__62));
v___x_2606_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__64));
lean_inc_n(v_a_2593_, 2);
v___x_2607_ = l_Lean_mkIdent(v_a_2593_);
v___x_2608_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2609_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
lean_inc_n(v___y_2602_, 12);
v___x_2610_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2610_, 0, v___y_2602_);
lean_ctor_set(v___x_2610_, 1, v___x_2608_);
lean_ctor_set(v___x_2610_, 2, v___x_2609_);
lean_inc_ref_n(v___x_2610_, 3);
v___x_2611_ = l_Lean_Syntax_node2(v___y_2602_, v___x_2606_, v___x_2607_, v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__69));
v___x_2613_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_2614_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___y_2602_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__2));
v___x_2616_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__3));
v___x_2617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___y_2602_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__5));
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2620_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__7);
v___x_2621_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__9));
lean_inc(v___y_2603_);
lean_inc(v_a_2604_);
v___x_2622_ = l_Lean_addMacroScope(v_a_2604_, v___x_2621_, v___y_2603_);
v___x_2623_ = lean_box(0);
v___x_2624_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__11));
v___x_2625_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2625_, 0, v___y_2602_);
lean_ctor_set(v___x_2625_, 1, v___x_2620_);
lean_ctor_set(v___x_2625_, 2, v___x_2622_);
lean_ctor_set(v___x_2625_, 3, v___x_2624_);
v___x_2626_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13);
v___x_2627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2628_ = l_Lean_addMacroScope(v_a_2604_, v___x_2627_, v___y_2603_);
v___x_2629_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2629_, 0, v___y_2602_);
lean_ctor_set(v___x_2629_, 1, v___x_2626_);
lean_ctor_set(v___x_2629_, 2, v___x_2628_);
lean_ctor_set(v___x_2629_, 3, v___x_2623_);
v___x_2630_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_2593_, v___x_2599_);
v___x_2631_ = lean_box(2);
v___x_2632_ = l_Lean_Syntax_mkStrLit(v___x_2630_, v___x_2631_);
v___x_2633_ = l_Lean_Syntax_node3(v___y_2602_, v___x_2608_, v___y_2601_, v___x_2629_, v___x_2632_);
v___x_2634_ = l_Lean_Syntax_node2(v___y_2602_, v___x_2619_, v___x_2625_, v___x_2633_);
v___x_2635_ = l_Lean_Syntax_node1(v___y_2602_, v___x_2618_, v___x_2634_);
v___x_2636_ = l_Lean_Syntax_node2(v___y_2602_, v___x_2615_, v___x_2617_, v___x_2635_);
v___x_2637_ = l_Lean_Syntax_node3(v___y_2602_, v___x_2612_, v___x_2614_, v___x_2610_, v___x_2636_);
v___x_2638_ = l_Lean_Syntax_node3(v___y_2602_, v___x_2608_, v___x_2610_, v___x_2610_, v___x_2637_);
v___x_2639_ = l_Lean_Syntax_node2(v___y_2602_, v___x_2605_, v___x_2611_, v___x_2638_);
v___x_2640_ = lean_array_push(v_b_2582_, v___x_2639_);
v_a_2587_ = v___x_2640_;
goto v___jp_2586_;
}
v___jp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2643_ = l_Lean_ConstantInfo_type(v___y_2642_);
lean_dec_ref(v___y_2642_);
v___x_2644_ = lean_box(v___x_2597_);
v___x_2645_ = lean_box(v___x_2597_);
v___x_2646_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_App_0__Lean_Elab_Term_elabAppArgs_elabAsElim_x3f_spec__2___boxed), 12, 5);
lean_closure_set(v___x_2646_, 0, lean_box(0));
lean_closure_set(v___x_2646_, 1, v___x_2643_);
lean_closure_set(v___x_2646_, 2, v___f_2596_);
lean_closure_set(v___x_2646_, 3, v___x_2644_);
lean_closure_set(v___x_2646_, 4, v___x_2645_);
v___x_2647_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_2646_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = l_Lean_Elab_Command_getRef___redArg(v___y_2583_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
v___x_2651_ = l_Lean_SourceInfo_fromRef(v_a_2650_, v___x_2597_);
lean_dec(v_a_2650_);
v___x_2652_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2583_);
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_object* v_quotContext_x3f_2653_; 
v_quotContext_x3f_2653_ = lean_ctor_get(v___y_2583_, 5);
if (lean_obj_tag(v_quotContext_x3f_2653_) == 0)
{
lean_object* v_a_2654_; lean_object* v___x_2655_; 
v_a_2654_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2652_, 1);
v___x_2655_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v___y_2584_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v___y_2601_ = v_a_2648_;
v___y_2602_ = v___x_2651_;
v___y_2603_ = v_a_2654_;
v_a_2604_ = v_a_2656_;
goto v___jp_2600_;
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
lean_dec(v_a_2654_);
lean_dec(v___x_2651_);
lean_dec(v_a_2648_);
lean_dec_ref(v_b_2582_);
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v_a_2657_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v___x_2655_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2655_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
else
{
lean_object* v_a_2665_; lean_object* v_val_2666_; 
v_a_2665_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2652_, 1);
v_val_2666_ = lean_ctor_get(v_quotContext_x3f_2653_, 0);
lean_inc(v_val_2666_);
v___y_2601_ = v_a_2648_;
v___y_2602_ = v___x_2651_;
v___y_2603_ = v_a_2665_;
v_a_2604_ = v_val_2666_;
goto v___jp_2600_;
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_dec(v___x_2651_);
lean_dec(v_a_2648_);
lean_dec_ref(v_b_2582_);
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v_a_2667_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2652_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2652_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_a_2648_);
lean_dec_ref(v_b_2582_);
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v_a_2675_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2649_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2649_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec_ref(v_b_2582_);
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v_a_2683_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2647_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2647_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
}
else
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
lean_dec(v___x_2594_);
v___x_2695_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__20);
lean_inc(v_a_2593_);
v___x_2696_ = l_Lean_MessageData_ofName(v_a_2593_);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_2697_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_dec_ref_known(v___x_2698_, 1);
v_a_2587_ = v_b_2582_;
goto v___jp_2586_;
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_dec_ref(v_b_2582_);
lean_dec(v_declName_2578_);
lean_dec_ref(v___x_2577_);
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2698_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2698_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
v___jp_2586_:
{
size_t v___x_2588_; size_t v___x_2589_; 
v___x_2588_ = ((size_t)1ULL);
v___x_2589_ = lean_usize_add(v_i_2581_, v___x_2588_);
v_i_2581_ = v___x_2589_;
v_b_2582_ = v_a_2587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___boxed(lean_object* v___x_2707_, lean_object* v___x_2708_, lean_object* v_declName_2709_, lean_object* v_as_2710_, lean_object* v_sz_2711_, lean_object* v_i_2712_, lean_object* v_b_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
size_t v_sz_boxed_2717_; size_t v_i_boxed_2718_; lean_object* v_res_2719_; 
v_sz_boxed_2717_ = lean_unbox_usize(v_sz_2711_);
lean_dec(v_sz_2711_);
v_i_boxed_2718_ = lean_unbox_usize(v_i_2712_);
lean_dec(v_i_2712_);
v_res_2719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2707_, v___x_2708_, v_declName_2709_, v_as_2710_, v_sz_boxed_2717_, v_i_boxed_2718_, v_b_2713_, v___y_2714_, v___y_2715_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec_ref(v_as_2710_);
lean_dec(v___x_2707_);
return v_res_2719_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__1(void){
_start:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2721_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__0));
v___x_2722_ = l_String_toRawSubstring_x27(v___x_2721_);
return v___x_2722_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__12(void){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__11));
v___x_2748_ = l_String_toRawSubstring_x27(v___x_2747_);
return v___x_2748_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__25(void){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__24));
v___x_2783_ = l_String_toRawSubstring_x27(v___x_2782_);
return v___x_2783_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__31(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__30));
v___x_2795_ = l_String_toRawSubstring_x27(v___x_2794_);
return v___x_2795_;
}
}
static lean_object* _init_l_Lasm_JS_Meta_mkFromJS___closed__40(void){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__39));
v___x_2814_ = l_Lean_stringToMessageData(v___x_2813_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS(lean_object* v_declNames_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; 
v___x_2819_ = lean_array_get_size(v_declNames_2815_);
v___x_2820_ = lean_unsigned_to_nat(1u);
v___x_2821_ = lean_nat_dec_eq(v___x_2819_, v___x_2820_);
if (v___x_2821_ == 0)
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2822_ = lean_box(v___x_2821_);
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
return v___x_2823_;
}
else
{
lean_object* v___x_2824_; uint8_t v___x_2825_; lean_object* v___x_2826_; lean_object* v_declName_2827_; lean_object* v___x_2828_; 
v___x_2824_ = lean_box(0);
v___x_2825_ = 0;
v___x_2826_ = lean_unsigned_to_nat(0u);
v_declName_2827_ = lean_array_get_borrowed(v___x_2824_, v_declNames_2815_, v___x_2826_);
lean_inc(v_declName_2827_);
v___x_2828_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_checkSimple(v_declName_2827_, v_a_2816_, v_a_2817_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v_a_2834_; 
lean_dec_ref_known(v___x_2828_, 1);
lean_inc_n(v_declName_2827_, 3);
v___x_2829_ = l_Lean_mkIdent(v_declName_2827_);
v___x_2830_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2827_, v___x_2821_);
v___x_2831_ = lean_box(2);
v___x_2832_ = l_Lean_Syntax_mkStrLit(v___x_2830_, v___x_2831_);
v___x_2833_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_structureFields___redArg(v_declName_2827_, v_a_2817_);
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref(v___x_2833_);
if (lean_obj_tag(v_a_2834_) == 1)
{
lean_object* v_val_2835_; lean_object* v___x_2836_; lean_object* v_env_2837_; lean_object* v___x_2838_; size_t v_sz_2839_; size_t v___x_2840_; lean_object* v___x_2841_; 
v_val_2835_ = lean_ctor_get(v_a_2834_, 0);
lean_inc(v_val_2835_);
lean_dec_ref_known(v_a_2834_, 1);
v___x_2836_ = lean_st_ref_get(v_a_2817_);
v_env_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc_ref(v_env_2837_);
lean_dec(v___x_2836_);
v___x_2838_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__12));
v_sz_2839_ = lean_array_size(v_val_2835_);
v___x_2840_ = ((size_t)0ULL);
lean_inc(v_declName_2827_);
v___x_2841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0(v___x_2819_, v_env_2837_, v_declName_2827_, v_val_2835_, v_sz_2839_, v___x_2840_, v___x_2838_, v_a_2816_, v_a_2817_);
lean_dec(v_val_2835_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v_a_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_a_2850_; lean_object* v_a_2852_; lean_object* v_quotContext_x3f_2956_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2843_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__62));
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Meta_instReprBindingInfo_repr___redArg___closed__8));
v___x_2845_ = l_Lean_Syntax_SepArray_ofElems(v___x_2844_, v_a_2842_);
lean_dec(v_a_2842_);
v___x_2846_ = l_Lean_Elab_Command_getRef___redArg(v_a_2816_);
v_a_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_a_2847_);
lean_dec_ref(v___x_2846_);
v___x_2848_ = l_Lean_SourceInfo_fromRef(v_a_2847_, v___x_2825_);
lean_dec(v_a_2847_);
v___x_2849_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2816_);
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref(v___x_2849_);
v_quotContext_x3f_2956_ = lean_ctor_get(v_a_2816_, 5);
if (lean_obj_tag(v_quotContext_x3f_2956_) == 0)
{
lean_object* v___x_2957_; lean_object* v_a_2958_; 
v___x_2957_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2817_);
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
lean_dec_ref(v___x_2957_);
v_a_2852_ = v_a_2958_;
goto v___jp_2851_;
}
else
{
lean_object* v_val_2959_; 
v_val_2959_ = lean_ctor_get(v_quotContext_x3f_2956_, 0);
lean_inc(v_val_2959_);
v_a_2852_ = v_val_2959_;
goto v___jp_2851_;
}
v___jp_2851_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_2854_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2856_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
lean_inc_n(v___x_2848_, 42);
v___x_2857_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2848_);
lean_ctor_set(v___x_2857_, 1, v___x_2855_);
lean_ctor_set(v___x_2857_, 2, v___x_2856_);
lean_inc_ref_n(v___x_2857_, 23);
v___x_2858_ = l_Lean_Syntax_node7(v___x_2848_, v___x_2854_, v___x_2857_, v___x_2857_, v___x_2857_, v___x_2857_, v___x_2857_, v___x_2857_, v___x_2857_);
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2860_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2861_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2862_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2861_, v___x_2857_);
v___x_2863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2848_);
lean_ctor_set(v___x_2863_, 1, v___x_2859_);
v___x_2864_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2866_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_2867_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2848_);
lean_ctor_set(v___x_2867_, 1, v___x_2866_);
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2869_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2870_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2850_, 3);
lean_inc_n(v_a_2852_, 3);
v___x_2871_ = l_Lean_addMacroScope(v_a_2852_, v___x_2870_, v_a_2850_);
v___x_2872_ = lean_box(0);
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_2874_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2848_);
lean_ctor_set(v___x_2874_, 1, v___x_2869_);
lean_ctor_set(v___x_2874_, 2, v___x_2871_);
lean_ctor_set(v___x_2874_, 3, v___x_2873_);
v___x_2875_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2855_, v___x_2829_);
v___x_2876_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2868_, v___x_2874_, v___x_2875_);
v___x_2877_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2865_, v___x_2867_, v___x_2876_);
v___x_2878_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2864_, v___x_2857_, v___x_2877_);
v___x_2879_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_2881_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2848_);
lean_ctor_set(v___x_2881_, 1, v___x_2880_);
v___x_2882_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__60));
v___x_2883_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__64));
v___x_2884_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__12, &l_Lasm_JS_Meta_mkFromJS___closed__12_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__12);
v___x_2885_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__13));
v___x_2886_ = l_Lean_addMacroScope(v_a_2852_, v___x_2885_, v_a_2850_);
v___x_2887_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2848_);
lean_ctor_set(v___x_2887_, 1, v___x_2884_);
lean_ctor_set(v___x_2887_, 2, v___x_2886_);
lean_ctor_set(v___x_2887_, 3, v___x_2872_);
v___x_2888_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2883_, v___x_2887_, v___x_2857_);
v___x_2889_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13);
v___x_2890_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_2891_ = l_Lean_addMacroScope(v_a_2852_, v___x_2890_, v_a_2850_);
v___x_2892_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2848_);
lean_ctor_set(v___x_2892_, 1, v___x_2889_);
lean_ctor_set(v___x_2892_, 2, v___x_2891_);
lean_ctor_set(v___x_2892_, 3, v___x_2872_);
v___x_2893_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2855_, v___x_2892_);
v___x_2894_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__69));
v___x_2895_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_2896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2848_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
v___x_2897_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__14));
v___x_2898_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__15));
v___x_2899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2848_);
lean_ctor_set(v___x_2899_, 1, v___x_2897_);
v___x_2900_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__17));
v___x_2901_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__19));
v___x_2902_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__21));
v___x_2903_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__22));
v___x_2904_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2848_);
lean_ctor_set(v___x_2904_, 1, v___x_2903_);
v___x_2905_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__56));
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__57));
v___x_2907_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2848_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
v___x_2908_ = l_Array_append___redArg(v___x_2856_, v___x_2845_);
lean_dec_ref(v___x_2845_);
v___x_2909_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2848_);
lean_ctor_set(v___x_2909_, 1, v___x_2855_);
lean_ctor_set(v___x_2909_, 2, v___x_2908_);
v___x_2910_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2882_, v___x_2909_);
v___x_2911_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__23));
v___x_2912_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2911_, v___x_2857_);
v___x_2913_ = ((lean_object*)(l_Lasm_JS_Meta_BindingInfo_json___closed__1));
v___x_2914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2848_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = l_Lean_Syntax_node6(v___x_2848_, v___x_2905_, v___x_2907_, v___x_2857_, v___x_2910_, v___x_2912_, v___x_2857_, v___x_2914_);
v___x_2916_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2855_, v___x_2915_);
v___x_2917_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2902_, v___x_2904_, v___x_2916_);
v___x_2918_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2901_, v___x_2917_, v___x_2857_);
v___x_2919_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2855_, v___x_2918_);
v___x_2920_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2900_, v___x_2919_);
v___x_2921_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2898_, v___x_2899_, v___x_2920_);
lean_inc_ref(v___x_2896_);
v___x_2922_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2894_, v___x_2896_, v___x_2857_, v___x_2921_);
v___x_2923_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2855_, v___x_2893_, v___x_2857_, v___x_2922_);
v___x_2924_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2843_, v___x_2888_, v___x_2923_);
v___x_2925_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__25, &l_Lasm_JS_Meta_mkFromJS___closed__25_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__25);
v___x_2926_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_2927_ = l_Lean_addMacroScope(v_a_2852_, v___x_2926_, v_a_2850_);
v___x_2928_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2848_);
lean_ctor_set(v___x_2928_, 1, v___x_2925_);
lean_ctor_set(v___x_2928_, 2, v___x_2927_);
lean_ctor_set(v___x_2928_, 3, v___x_2872_);
v___x_2929_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2883_, v___x_2928_, v___x_2857_);
v___x_2930_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2894_, v___x_2896_, v___x_2857_, v___x_2832_);
v___x_2931_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2855_, v___x_2857_, v___x_2857_, v___x_2930_);
v___x_2932_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2843_, v___x_2929_, v___x_2931_);
v___x_2933_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2855_, v___x_2924_, v___x_2857_, v___x_2932_);
v___x_2934_ = l_Lean_Syntax_node1(v___x_2848_, v___x_2882_, v___x_2933_);
v___x_2935_ = l_Lean_Syntax_node3(v___x_2848_, v___x_2879_, v___x_2881_, v___x_2934_, v___x_2857_);
v___x_2936_ = l_Lean_Syntax_node6(v___x_2848_, v___x_2860_, v___x_2862_, v___x_2863_, v___x_2857_, v___x_2857_, v___x_2878_, v___x_2935_);
v___x_2937_ = l_Lean_Syntax_node2(v___x_2848_, v___x_2853_, v___x_2858_, v___x_2936_);
v___x_2938_ = l_Lean_Elab_Command_elabCommand(v___x_2937_, v_a_2816_, v_a_2817_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2946_; 
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; 
v_unused_2947_ = lean_ctor_get(v___x_2938_, 0);
lean_dec(v_unused_2947_);
v___x_2940_ = v___x_2938_;
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
else
{
lean_dec(v___x_2938_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2942_ = lean_box(v___x_2821_);
if (v_isShared_2941_ == 0)
{
lean_ctor_set(v___x_2940_, 0, v___x_2942_);
v___x_2944_ = v___x_2940_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2942_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_a_2948_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2938_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2938_);
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
else
{
lean_object* v_a_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2967_; 
lean_dec(v___x_2832_);
lean_dec(v___x_2829_);
v_a_2960_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2962_ = v___x_2841_;
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_a_2960_);
lean_dec(v___x_2841_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2967_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
if (v_isShared_2963_ == 0)
{
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2960_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
}
else
{
lean_object* v___x_2968_; 
lean_dec(v_a_2834_);
lean_inc(v_declName_2827_);
v___x_2968_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_enumConstructors(v_declName_2827_, v_a_2816_, v_a_2817_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2968_, 1);
if (lean_obj_tag(v_a_2969_) == 1)
{
lean_object* v_val_2970_; size_t v_sz_2971_; size_t v___x_2972_; lean_object* v___x_2973_; 
v_val_2970_ = lean_ctor_get(v_a_2969_, 0);
lean_inc(v_val_2970_);
lean_dec_ref_known(v_a_2969_, 1);
v_sz_2971_ = lean_array_size(v_val_2970_);
v___x_2972_ = ((size_t)0ULL);
v___x_2973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkFromJS_spec__1(v_sz_2971_, v___x_2972_, v_val_2970_, v_a_2816_, v_a_2817_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2975_; lean_object* v_a_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v_a_2979_; lean_object* v_a_2981_; lean_object* v_quotContext_x3f_3100_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2975_ = l_Lean_Elab_Command_getRef___redArg(v_a_2816_);
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref(v___x_2975_);
v___x_2977_ = l_Lean_SourceInfo_fromRef(v_a_2976_, v___x_2825_);
lean_dec(v_a_2976_);
v___x_2978_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_2816_);
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref(v___x_2978_);
v_quotContext_x3f_3100_ = lean_ctor_get(v_a_2816_, 5);
if (lean_obj_tag(v_quotContext_x3f_3100_) == 0)
{
lean_object* v___x_3101_; lean_object* v_a_3102_; 
v___x_3101_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Command_0__Lean_Elab_Command_runCore_spec__2___redArg(v_a_2817_);
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref(v___x_3101_);
v_a_2981_ = v_a_3102_;
goto v___jp_2980_;
}
else
{
lean_object* v_val_3103_; 
v_val_3103_ = lean_ctor_get(v_quotContext_x3f_3100_, 0);
lean_inc(v_val_3103_);
v_a_2981_ = v_val_3103_;
goto v___jp_2980_;
}
v___jp_2980_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; size_t v_sz_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__0));
v___x_2983_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__1));
v___x_2984_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__46));
v___x_2985_ = lean_obj_once(&l_Lasm_JS_Meta_elabBinding___closed__58, &l_Lasm_JS_Meta_elabBinding___closed__58_once, _init_l_Lasm_JS_Meta_elabBinding___closed__58);
lean_inc_n(v___x_2977_, 47);
v___x_2986_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2977_);
lean_ctor_set(v___x_2986_, 1, v___x_2984_);
lean_ctor_set(v___x_2986_, 2, v___x_2985_);
lean_inc_ref_n(v___x_2986_, 22);
v___x_2987_ = l_Lean_Syntax_node7(v___x_2977_, v___x_2983_, v___x_2986_, v___x_2986_, v___x_2986_, v___x_2986_, v___x_2986_, v___x_2986_, v___x_2986_);
v___x_2988_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__0));
v___x_2989_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__1));
v___x_2990_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__6));
v___x_2991_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2990_, v___x_2986_);
v___x_2992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2977_);
lean_ctor_set(v___x_2992_, 1, v___x_2988_);
v___x_2993_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__3));
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Meta___aux__Lasm__JS__Meta______elabRules__Lean__Parser__Command__declaration__1___closed__13));
v___x_2995_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__15));
v___x_2996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2977_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__37));
v___x_2998_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__1, &l_Lasm_JS_Meta_mkFromJS___closed__1_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__1);
v___x_2999_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
lean_inc_n(v_a_2979_, 4);
lean_inc_n(v_a_2981_, 4);
v___x_3000_ = l_Lean_addMacroScope(v_a_2981_, v___x_2999_, v_a_2979_);
v___x_3001_ = lean_box(0);
v___x_3002_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__7));
v___x_3003_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3003_, 0, v___x_2977_);
lean_ctor_set(v___x_3003_, 1, v___x_2998_);
lean_ctor_set(v___x_3003_, 2, v___x_3000_);
lean_ctor_set(v___x_3003_, 3, v___x_3002_);
v___x_3004_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_2829_);
v___x_3005_ = l_Lean_Syntax_node2(v___x_2977_, v___x_2997_, v___x_3003_, v___x_3004_);
v___x_3006_ = l_Lean_Syntax_node2(v___x_2977_, v___x_2994_, v___x_2996_, v___x_3005_);
v___x_3007_ = l_Lean_Syntax_node2(v___x_2977_, v___x_2993_, v___x_2986_, v___x_3006_);
v___x_3008_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__9));
v___x_3009_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__10));
v___x_3010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_2977_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__60));
v___x_3012_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__62));
v___x_3013_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__64));
v___x_3014_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__12, &l_Lasm_JS_Meta_mkFromJS___closed__12_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__12);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__13));
v___x_3016_ = l_Lean_addMacroScope(v_a_2981_, v___x_3015_, v_a_2979_);
v___x_3017_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3017_, 0, v___x_2977_);
lean_ctor_set(v___x_3017_, 1, v___x_3014_);
lean_ctor_set(v___x_3017_, 2, v___x_3016_);
lean_ctor_set(v___x_3017_, 3, v___x_3001_);
v___x_3018_ = l_Lean_Syntax_node2(v___x_2977_, v___x_3013_, v___x_3017_, v___x_2986_);
v___x_3019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__13);
v___x_3020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Meta_mkFromJS_spec__0___closed__14));
v___x_3021_ = l_Lean_addMacroScope(v_a_2981_, v___x_3020_, v_a_2979_);
v___x_3022_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3022_, 0, v___x_2977_);
lean_ctor_set(v___x_3022_, 1, v___x_3019_);
lean_ctor_set(v___x_3022_, 2, v___x_3021_);
lean_ctor_set(v___x_3022_, 3, v___x_3001_);
lean_inc_ref(v___x_3022_);
v___x_3023_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__69));
v___x_3025_ = ((lean_object*)(l_Lasm_JS_Meta_elabBinding___closed__53));
v___x_3026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_2977_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__27));
v___x_3028_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__28));
v___x_3029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_2977_);
lean_ctor_set(v___x_3029_, 1, v___x_3027_);
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__30));
v___x_3031_ = l_Lean_Syntax_node2(v___x_2977_, v___x_3030_, v___x_2986_, v___x_3022_);
v___x_3032_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_3031_);
v___x_3033_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__31));
v___x_3034_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_2977_);
lean_ctor_set(v___x_3034_, 1, v___x_3033_);
v___x_3035_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__33));
v___x_3036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__1));
v_sz_3037_ = lean_array_size(v_a_2974_);
v___x_3038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__2(v_sz_3037_, v___x_2972_, v_a_2974_);
v___x_3039_ = l_Array_append___redArg(v___x_2985_, v___x_3038_);
lean_dec_ref(v___x_3038_);
v___x_3040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__2));
v___x_3041_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_2977_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__28));
v___x_3043_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__29));
v___x_3044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_2977_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l_Lean_Syntax_node1(v___x_2977_, v___x_3042_, v___x_3044_);
v___x_3046_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_3045_);
v___x_3047_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_3046_);
v___x_3048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Meta_mkToJS_spec__1___closed__3));
v___x_3049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___x_2977_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__31, &l_Lasm_JS_Meta_mkFromJS___closed__31_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__31);
v___x_3051_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__33));
v___x_3052_ = l_Lean_addMacroScope(v_a_2981_, v___x_3051_, v_a_2979_);
v___x_3053_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__37));
v___x_3054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3054_, 0, v___x_2977_);
lean_ctor_set(v___x_3054_, 1, v___x_3050_);
lean_ctor_set(v___x_3054_, 2, v___x_3052_);
lean_ctor_set(v___x_3054_, 3, v___x_3053_);
v___x_3055_ = ((lean_object*)(l_Lasm_JS_Meta_jsAttr___closed__7));
v___x_3056_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__38));
v___x_3057_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_2977_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = l_Lean_Syntax_node1(v___x_2977_, v___x_3055_, v___x_3057_);
v___x_3059_ = l_Lean_Syntax_node1(v___x_2977_, v___x_2984_, v___x_3058_);
v___x_3060_ = l_Lean_Syntax_node2(v___x_2977_, v___x_2997_, v___x_3054_, v___x_3059_);
v___x_3061_ = l_Lean_Syntax_node4(v___x_2977_, v___x_3036_, v___x_3041_, v___x_3047_, v___x_3049_, v___x_3060_);
v___x_3062_ = lean_array_push(v___x_3039_, v___x_3061_);
v___x_3063_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3063_, 0, v___x_2977_);
lean_ctor_set(v___x_3063_, 1, v___x_2984_);
lean_ctor_set(v___x_3063_, 2, v___x_3062_);
v___x_3064_ = l_Lean_Syntax_node1(v___x_2977_, v___x_3035_, v___x_3063_);
v___x_3065_ = l_Lean_Syntax_node6(v___x_2977_, v___x_3028_, v___x_3029_, v___x_2986_, v___x_2986_, v___x_3032_, v___x_3034_, v___x_3064_);
lean_inc_ref(v___x_3026_);
v___x_3066_ = l_Lean_Syntax_node3(v___x_2977_, v___x_3024_, v___x_3026_, v___x_2986_, v___x_3065_);
v___x_3067_ = l_Lean_Syntax_node3(v___x_2977_, v___x_2984_, v___x_3023_, v___x_2986_, v___x_3066_);
v___x_3068_ = l_Lean_Syntax_node2(v___x_2977_, v___x_3012_, v___x_3018_, v___x_3067_);
v___x_3069_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__25, &l_Lasm_JS_Meta_mkFromJS___closed__25_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__25);
v___x_3070_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__26));
v___x_3071_ = l_Lean_addMacroScope(v_a_2981_, v___x_3070_, v_a_2979_);
v___x_3072_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3072_, 0, v___x_2977_);
lean_ctor_set(v___x_3072_, 1, v___x_3069_);
lean_ctor_set(v___x_3072_, 2, v___x_3071_);
lean_ctor_set(v___x_3072_, 3, v___x_3001_);
v___x_3073_ = l_Lean_Syntax_node2(v___x_2977_, v___x_3013_, v___x_3072_, v___x_2986_);
v___x_3074_ = l_Lean_Syntax_node3(v___x_2977_, v___x_3024_, v___x_3026_, v___x_2986_, v___x_2832_);
v___x_3075_ = l_Lean_Syntax_node3(v___x_2977_, v___x_2984_, v___x_2986_, v___x_2986_, v___x_3074_);
v___x_3076_ = l_Lean_Syntax_node2(v___x_2977_, v___x_3012_, v___x_3073_, v___x_3075_);
v___x_3077_ = l_Lean_Syntax_node3(v___x_2977_, v___x_2984_, v___x_3068_, v___x_2986_, v___x_3076_);
v___x_3078_ = l_Lean_Syntax_node1(v___x_2977_, v___x_3011_, v___x_3077_);
v___x_3079_ = l_Lean_Syntax_node3(v___x_2977_, v___x_3008_, v___x_3010_, v___x_3078_, v___x_2986_);
v___x_3080_ = l_Lean_Syntax_node6(v___x_2977_, v___x_2989_, v___x_2991_, v___x_2992_, v___x_2986_, v___x_2986_, v___x_3007_, v___x_3079_);
v___x_3081_ = l_Lean_Syntax_node2(v___x_2977_, v___x_2982_, v___x_2987_, v___x_3080_);
v___x_3082_ = l_Lean_Elab_Command_elabCommand(v___x_3081_, v_a_2816_, v_a_2817_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3090_; 
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3090_ == 0)
{
lean_object* v_unused_3091_; 
v_unused_3091_ = lean_ctor_get(v___x_3082_, 0);
lean_dec(v_unused_3091_);
v___x_3084_ = v___x_3082_;
v_isShared_3085_ = v_isSharedCheck_3090_;
goto v_resetjp_3083_;
}
else
{
lean_dec(v___x_3082_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3090_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3086_; lean_object* v___x_3088_; 
v___x_3086_ = lean_box(v___x_2821_);
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 0, v___x_3086_);
v___x_3088_ = v___x_3084_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v___x_3086_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
v_a_3092_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3082_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3082_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
lean_dec(v___x_2832_);
lean_dec(v___x_2829_);
v_a_3104_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3106_ = v___x_2973_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_2973_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3107_ == 0)
{
v___x_3109_ = v___x_3106_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3104_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
else
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
lean_dec(v_a_2969_);
lean_dec(v___x_2832_);
lean_dec(v___x_2829_);
v___x_3112_ = lean_obj_once(&l_Lasm_JS_Meta_mkFromJS___closed__40, &l_Lasm_JS_Meta_mkFromJS___closed__40_once, _init_l_Lasm_JS_Meta_mkFromJS___closed__40);
lean_inc(v_declName_2827_);
v___x_3113_ = l_Lean_MessageData_ofName(v_declName_2827_);
v___x_3114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3112_);
lean_ctor_set(v___x_3114_, 1, v___x_3113_);
v___x_3115_ = lean_obj_once(&l_Lasm_JS_Meta_mkToJS___closed__37, &l_Lasm_JS_Meta_mkToJS___closed__37_once, _init_l_Lasm_JS_Meta_mkToJS___closed__37);
v___x_3116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = l_Lean_throwError___at___00Lean_Elab_applyDerivingHandlers_spec__4___redArg(v___x_3116_, v_a_2816_, v_a_2817_);
return v___x_3117_;
}
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
lean_dec(v___x_2832_);
lean_dec(v___x_2829_);
v_a_3118_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_2968_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_2968_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
v_a_3126_ = lean_ctor_get(v___x_2828_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_2828_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_2828_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Meta_mkFromJS___boxed(lean_object* v_declNames_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Lasm_JS_Meta_mkFromJS(v_declNames_3134_, v_a_3135_, v_a_3136_);
lean_dec(v_a_3136_);
lean_dec_ref(v_a_3135_);
lean_dec_ref(v_declNames_3134_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3142_ = ((lean_object*)(l_Lasm_JS_Meta_mkToJS___closed__4));
v___x_3143_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__0_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_3144_ = l_Lean_Elab_registerDerivingHandler(v___x_3142_, v___x_3143_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
lean_dec_ref_known(v___x_3144_, 1);
v___x_3145_ = ((lean_object*)(l_Lasm_JS_Meta_mkFromJS___closed__3));
v___x_3146_ = ((lean_object*)(l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn___closed__1_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_));
v___x_3147_ = l_Lean_Elab_registerDerivingHandler(v___x_3145_, v___x_3146_);
return v___x_3147_;
}
else
{
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2____boxed(lean_object* v_a_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l___private_Lasm_JS_Meta_0__Lasm_JS_Meta_initFn_00___x40_Lasm_JS_Meta_1151891667____hygCtx___hyg_2_();
return v_res_3149_;
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
