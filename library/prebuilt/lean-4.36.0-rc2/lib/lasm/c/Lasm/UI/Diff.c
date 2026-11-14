// Lean compiler output
// Module: Lasm.UI.Diff
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.UI.Html
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
uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Attr_key___redArg(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqAttrKey_decEq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Attr_val___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object*, lean_object*);
uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_UI_instInhabitedAttrVal_default;
extern lean_object* l_Lasm_UI_instInhabitedAttrKey_default;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object*, lean_object*);
lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instInhabitedLive___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_instInhabitedLive___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedLive___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedLive___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_UI_instInhabitedLive___redArg___closed__0_value)}};
static const lean_object* l_Lasm_UI_instInhabitedLive___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_instInhabitedLive___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_UI_instInhabitedLive___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instInhabitedLive___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_set_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_set_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_remove_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_remove_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrOp_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrOp_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrOp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrOp___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_instReprAttrOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.AttrOp.set"};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__1_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__2_value;
static lean_once_cell_t l_Lasm_UI_instReprAttrOp_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__3;
static lean_once_cell_t l_Lasm_UI_instReprAttrOp_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__4;
static const lean_string_object l_Lasm_UI_instReprAttrOp_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.AttrOp.remove"};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__5_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrOp_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__5_value)}};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__6 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__6_value;
static const lean_ctor_object l_Lasm_UI_instReprAttrOp_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprAttrOp_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprAttrOp_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrOp_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprAttrOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprAttrOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprAttrOp___closed__0 = (const lean_object*)&l_Lasm_UI_instReprAttrOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprAttrOp = (const lean_object*)&l_Lasm_UI_instReprAttrOp___closed__0_value;
static lean_once_cell_t l_Lasm_UI_instInhabitedAttrOp_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instInhabitedAttrOp_default___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttrOp_default;
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedAttrOp;
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp(lean_object*);
static const lean_array_object l_Lasm_UI_create___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_create___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_create___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_create(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_create___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_createAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__0;
static const lean_closure_object l_Lasm_UI_twoEnded___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_twoEnded___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_twoEnded___redArg___closed__1_value;
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__2;
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lasm_UI_prefixPhase___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_prefixPhase___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_prefixPhase___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_prefixPhase___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_diffChildren___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_diffChildren___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_diffChildren___redArg___closed__0_value;
static const lean_array_object l_Lasm_UI_diffChildren___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_UI_diffChildren___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_diffChildren___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_UI_Live_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl(lean_object* v_Msg_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___impl___boxed(lean_object* v_Msg_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lasm_UI_Live_ctorIdx___impl(v_Msg_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
lean_object* v_id_13_; lean_object* v_s_14_; lean_object* v___x_15_; 
v_id_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_id_13_);
v_s_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_s_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_id_13_, v_s_14_);
return v___x_15_;
}
else
{
lean_object* v_id_16_; uint8_t v_ns_17_; lean_object* v_tag_18_; lean_object* v_key_19_; lean_object* v_attrs_20_; lean_object* v_children_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_id_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_id_16_);
v_ns_17_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*5);
v_tag_18_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_tag_18_);
v_key_19_ = lean_ctor_get(v_t_11_, 2);
lean_inc(v_key_19_);
v_attrs_20_ = lean_ctor_get(v_t_11_, 3);
lean_inc(v_attrs_20_);
v_children_21_ = lean_ctor_get(v_t_11_, 4);
lean_inc(v_children_21_);
lean_dec_ref_known(v_t_11_, 5);
v___x_22_ = lean_box(v_ns_17_);
v___x_23_ = lean_apply_6(v_k_12_, v_id_16_, v___x_22_, v_tag_18_, v_key_19_, v_attrs_20_, v_children_21_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim(lean_object* v_Msg_24_, lean_object* v_motive__1_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___boxed(lean_object* v_Msg_31_, lean_object* v_motive__1_32_, lean_object* v_ctorIdx_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_UI_Live_ctorElim(v_Msg_31_, v_motive__1_32_, v_ctorIdx_33_, v_t_34_, v_h_35_, v_k_36_);
lean_dec(v_ctorIdx_33_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim___redArg(lean_object* v_t_38_, lean_object* v_text_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_38_, v_text_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim(lean_object* v_Msg_41_, lean_object* v_motive__1_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_text_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_43_, v_text_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim___redArg(lean_object* v_t_47_, lean_object* v_elem_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_47_, v_elem_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim(lean_object* v_Msg_50_, lean_object* v_motive__1_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_elem_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_52_, v_elem_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg(){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = ((lean_object*)(l_Lasm_UI_instInhabitedLive___redArg___closed__1));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg___boxed(lean_object* v___dummy_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lasm_UI_instInhabitedLive___redArg();
return v_res_63_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedLive___closed__0(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_UI_instInhabitedLive___redArg();
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive(lean_object* v_Msg_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_obj_once(&l_Lasm_UI_instInhabitedLive___closed__0, &l_Lasm_UI_instInhabitedLive___closed__0_once, _init_l_Lasm_UI_instInhabitedLive___closed__0);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg(lean_object* v_x_67_){
_start:
{
lean_object* v_id_68_; 
v_id_68_ = lean_ctor_get(v_x_67_, 0);
lean_inc(v_id_68_);
return v_id_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg___boxed(lean_object* v_x_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lasm_UI_Live_id___redArg(v_x_69_);
lean_dec_ref(v_x_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id(lean_object* v_Msg_71_, lean_object* v_x_72_){
_start:
{
lean_object* v_id_73_; 
v_id_73_ = lean_ctor_get(v_x_72_, 0);
lean_inc(v_id_73_);
return v_id_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___boxed(lean_object* v_Msg_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lasm_UI_Live_id(v_Msg_74_, v_x_75_);
lean_dec_ref(v_x_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
if (lean_obj_tag(v_a_77_) == 0)
{
lean_object* v___x_79_; 
v___x_79_ = l_List_reverse___redArg(v_a_78_);
return v___x_79_;
}
else
{
lean_object* v_head_80_; lean_object* v_tail_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_90_; 
v_head_80_ = lean_ctor_get(v_a_77_, 0);
v_tail_81_ = lean_ctor_get(v_a_77_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_77_);
if (v_isSharedCheck_90_ == 0)
{
v___x_83_ = v_a_77_;
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_tail_81_);
lean_inc(v_head_80_);
lean_dec(v_a_77_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_85_ = l_Lasm_UI_Live_erase___redArg(v_head_80_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 1, v_a_78_);
lean_ctor_set(v___x_83_, 0, v___x_85_);
v___x_87_ = v___x_83_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_85_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_a_78_);
v___x_87_ = v_reuseFailAlloc_89_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
v_a_77_ = v_tail_81_;
v_a_78_ = v___x_87_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase___redArg(lean_object* v_x_91_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v_s_92_; lean_object* v___x_93_; 
v_s_92_ = lean_ctor_get(v_x_91_, 1);
lean_inc_ref(v_s_92_);
lean_dec_ref_known(v_x_91_, 2);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_s_92_);
return v___x_93_;
}
else
{
uint8_t v_ns_94_; lean_object* v_tag_95_; lean_object* v_key_96_; lean_object* v_attrs_97_; lean_object* v_children_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_ns_94_ = lean_ctor_get_uint8(v_x_91_, sizeof(void*)*5);
v_tag_95_ = lean_ctor_get(v_x_91_, 1);
lean_inc_ref(v_tag_95_);
v_key_96_ = lean_ctor_get(v_x_91_, 2);
lean_inc(v_key_96_);
v_attrs_97_ = lean_ctor_get(v_x_91_, 3);
lean_inc(v_attrs_97_);
v_children_98_ = lean_ctor_get(v_x_91_, 4);
lean_inc(v_children_98_);
lean_dec_ref_known(v_x_91_, 5);
v___x_99_ = lean_box(0);
v___x_100_ = l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(v_children_98_, v___x_99_);
v___x_101_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_101_, 0, v_tag_95_);
lean_ctor_set(v___x_101_, 1, v_key_96_);
lean_ctor_set(v___x_101_, 2, v_attrs_97_);
lean_ctor_set(v___x_101_, 3, v___x_100_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*4, v_ns_94_);
return v___x_101_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase(lean_object* v_Msg_102_, lean_object* v_x_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lasm_UI_Live_erase___redArg(v_x_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0(lean_object* v_Msg_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(v_a_106_, v_a_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter___redArg(lean_object* v_x_109_, lean_object* v_h__1_110_, lean_object* v_h__2_111_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
lean_object* v_id_112_; lean_object* v_s_113_; lean_object* v___x_114_; 
lean_dec(v_h__2_111_);
v_id_112_ = lean_ctor_get(v_x_109_, 0);
lean_inc(v_id_112_);
v_s_113_ = lean_ctor_get(v_x_109_, 1);
lean_inc_ref(v_s_113_);
lean_dec_ref_known(v_x_109_, 2);
v___x_114_ = lean_apply_2(v_h__1_110_, v_id_112_, v_s_113_);
return v___x_114_;
}
else
{
lean_object* v_id_115_; uint8_t v_ns_116_; lean_object* v_tag_117_; lean_object* v_key_118_; lean_object* v_attrs_119_; lean_object* v_children_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec(v_h__1_110_);
v_id_115_ = lean_ctor_get(v_x_109_, 0);
lean_inc(v_id_115_);
v_ns_116_ = lean_ctor_get_uint8(v_x_109_, sizeof(void*)*5);
v_tag_117_ = lean_ctor_get(v_x_109_, 1);
lean_inc_ref(v_tag_117_);
v_key_118_ = lean_ctor_get(v_x_109_, 2);
lean_inc(v_key_118_);
v_attrs_119_ = lean_ctor_get(v_x_109_, 3);
lean_inc(v_attrs_119_);
v_children_120_ = lean_ctor_get(v_x_109_, 4);
lean_inc(v_children_120_);
lean_dec_ref_known(v_x_109_, 5);
v___x_121_ = lean_box(v_ns_116_);
v___x_122_ = lean_apply_6(v_h__2_111_, v_id_115_, v___x_121_, v_tag_117_, v_key_118_, v_attrs_119_, v_children_120_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter(lean_object* v_Msg_123_, lean_object* v_motive_124_, lean_object* v_x_125_, lean_object* v_h__1_126_, lean_object* v_h__2_127_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_object* v_id_128_; lean_object* v_s_129_; lean_object* v___x_130_; 
lean_dec(v_h__2_127_);
v_id_128_ = lean_ctor_get(v_x_125_, 0);
lean_inc(v_id_128_);
v_s_129_ = lean_ctor_get(v_x_125_, 1);
lean_inc_ref(v_s_129_);
lean_dec_ref_known(v_x_125_, 2);
v___x_130_ = lean_apply_2(v_h__1_126_, v_id_128_, v_s_129_);
return v___x_130_;
}
else
{
lean_object* v_id_131_; uint8_t v_ns_132_; lean_object* v_tag_133_; lean_object* v_key_134_; lean_object* v_attrs_135_; lean_object* v_children_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
lean_dec(v_h__1_126_);
v_id_131_ = lean_ctor_get(v_x_125_, 0);
lean_inc(v_id_131_);
v_ns_132_ = lean_ctor_get_uint8(v_x_125_, sizeof(void*)*5);
v_tag_133_ = lean_ctor_get(v_x_125_, 1);
lean_inc_ref(v_tag_133_);
v_key_134_ = lean_ctor_get(v_x_125_, 2);
lean_inc(v_key_134_);
v_attrs_135_ = lean_ctor_get(v_x_125_, 3);
lean_inc(v_attrs_135_);
v_children_136_ = lean_ctor_get(v_x_125_, 4);
lean_inc(v_children_136_);
lean_dec_ref_known(v_x_125_, 5);
v___x_137_ = lean_box(v_ns_132_);
v___x_138_ = lean_apply_6(v_h__2_127_, v_id_131_, v___x_137_, v_tag_133_, v_key_134_, v_attrs_135_, v_children_136_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___redArg(lean_object* v_x_139_, lean_object* v_h__1_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_apply_2(v_h__1_140_, v_x_139_, lean_box(0));
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter(lean_object* v_Msg_142_, lean_object* v_children_143_, lean_object* v_motive_144_, lean_object* v_x_145_, lean_object* v_h__1_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_apply_2(v_h__1_146_, v_x_145_, lean_box(0));
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___boxed(lean_object* v_Msg_148_, lean_object* v_children_149_, lean_object* v_motive_150_, lean_object* v_x_151_, lean_object* v_h__1_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter(v_Msg_148_, v_children_149_, v_motive_150_, v_x_151_, v_h__1_152_);
lean_dec(v_children_149_);
return v_res_153_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0(lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
if (lean_obj_tag(v_x_155_) == 0)
{
uint8_t v___x_156_; 
v___x_156_ = 1;
return v___x_156_;
}
else
{
uint8_t v___x_157_; 
v___x_157_ = 0;
return v___x_157_;
}
}
else
{
if (lean_obj_tag(v_x_155_) == 0)
{
uint8_t v___x_158_; 
v___x_158_ = 0;
return v___x_158_;
}
else
{
lean_object* v_val_159_; lean_object* v_val_160_; uint8_t v___x_161_; 
v_val_159_ = lean_ctor_get(v_x_154_, 0);
v_val_160_ = lean_ctor_get(v_x_155_, 0);
v___x_161_ = lean_string_dec_eq(v_val_159_, v_val_160_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0___boxed(lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0(v_x_162_, v_x_163_);
lean_dec(v_x_163_);
lean_dec(v_x_162_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same___redArg(lean_object* v_x_166_, lean_object* v_x_167_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
if (lean_obj_tag(v_x_167_) == 0)
{
uint8_t v___x_168_; 
v___x_168_ = 1;
return v___x_168_;
}
else
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
}
else
{
if (lean_obj_tag(v_x_167_) == 1)
{
uint8_t v_ns_170_; lean_object* v_tag_171_; lean_object* v_key_172_; uint8_t v_ns_173_; lean_object* v_tag_174_; lean_object* v_key_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v_ns_170_ = lean_ctor_get_uint8(v_x_166_, sizeof(void*)*5);
v_tag_171_ = lean_ctor_get(v_x_166_, 1);
v_key_172_ = lean_ctor_get(v_x_166_, 2);
v_ns_173_ = lean_ctor_get_uint8(v_x_167_, sizeof(void*)*4);
v_tag_174_ = lean_ctor_get(v_x_167_, 0);
v_key_175_ = lean_ctor_get(v_x_167_, 1);
v___x_176_ = lean_box(v_ns_170_);
v___x_177_ = lean_obj_tag_nat(v___x_176_);
lean_dec(v___x_176_);
v___x_178_ = lean_box(v_ns_173_);
v___x_179_ = lean_obj_tag_nat(v___x_178_);
lean_dec(v___x_178_);
v___x_180_ = lean_nat_dec_eq(v___x_177_, v___x_179_);
if (v___x_180_ == 0)
{
return v___x_180_;
}
else
{
uint8_t v___x_181_; 
v___x_181_ = lean_string_dec_eq(v_tag_171_, v_tag_174_);
if (v___x_181_ == 0)
{
return v___x_181_;
}
else
{
uint8_t v___x_182_; 
v___x_182_ = l_instBEqOption_beq___at___00Lasm_UI_Live_same_spec__0(v_key_172_, v_key_175_);
return v___x_182_;
}
}
}
else
{
uint8_t v___x_183_; 
v___x_183_ = 0;
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___redArg___boxed(lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
uint8_t v_res_186_; lean_object* v_r_187_; 
v_res_186_ = l_Lasm_UI_Live_same___redArg(v_x_184_, v_x_185_);
lean_dec_ref(v_x_185_);
lean_dec_ref(v_x_184_);
v_r_187_ = lean_box(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same(lean_object* v_Msg_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = l_Lasm_UI_Live_same___redArg(v_x_189_, v_x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___boxed(lean_object* v_Msg_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
uint8_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = l_Lasm_UI_Live_same(v_Msg_192_, v_x_193_, v_x_194_);
lean_dec_ref(v_x_194_);
lean_dec_ref(v_x_193_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg(lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v___x_198_; 
v___x_198_ = lean_box(0);
return v___x_198_;
}
else
{
lean_object* v_key_199_; 
v_key_199_ = lean_ctor_get(v_x_197_, 2);
lean_inc(v_key_199_);
return v_key_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg___boxed(lean_object* v_x_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lasm_UI_Live_key_x3f___redArg(v_x_200_);
lean_dec_ref(v_x_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f(lean_object* v_Msg_202_, lean_object* v_x_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lasm_UI_Live_key_x3f___redArg(v_x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___boxed(lean_object* v_Msg_205_, lean_object* v_x_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lasm_UI_Live_key_x3f(v_Msg_205_, v_x_206_);
lean_dec_ref(v_x_206_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg(lean_object* v_x_208_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_key_210_; 
v_key_210_ = lean_ctor_get(v_x_208_, 1);
lean_inc(v_key_210_);
return v_key_210_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg___boxed(lean_object* v_x_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lasm_UI_Html_key_x3f___redArg(v_x_211_);
lean_dec_ref(v_x_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f(lean_object* v_Msg_213_, lean_object* v_x_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lasm_UI_Html_key_x3f___redArg(v_x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___boxed(lean_object* v_Msg_216_, lean_object* v_x_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lasm_UI_Html_key_x3f(v_Msg_216_, v_x_217_);
lean_dec_ref(v_x_217_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___impl(lean_object* v_x_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_tag_nat(v_x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___impl___boxed(lean_object* v_x_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lasm_UI_AttrOp_ctorIdx___impl(v_x_221_);
lean_dec_ref(v_x_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim___redArg(lean_object* v_t_223_, lean_object* v_k_224_){
_start:
{
if (lean_obj_tag(v_t_223_) == 0)
{
lean_object* v_k_225_; lean_object* v_v_226_; lean_object* v___x_227_; 
v_k_225_ = lean_ctor_get(v_t_223_, 0);
lean_inc_ref(v_k_225_);
v_v_226_ = lean_ctor_get(v_t_223_, 1);
lean_inc_ref(v_v_226_);
lean_dec_ref_known(v_t_223_, 2);
v___x_227_ = lean_apply_2(v_k_224_, v_k_225_, v_v_226_);
return v___x_227_;
}
else
{
lean_object* v_k_228_; lean_object* v___x_229_; 
v_k_228_ = lean_ctor_get(v_t_223_, 0);
lean_inc_ref(v_k_228_);
lean_dec_ref_known(v_t_223_, 1);
v___x_229_ = lean_apply_1(v_k_224_, v_k_228_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim(lean_object* v_motive_230_, lean_object* v_ctorIdx_231_, lean_object* v_t_232_, lean_object* v_h_233_, lean_object* v_k_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lasm_UI_AttrOp_ctorElim___redArg(v_t_232_, v_k_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorElim___boxed(lean_object* v_motive_236_, lean_object* v_ctorIdx_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_k_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lasm_UI_AttrOp_ctorElim(v_motive_236_, v_ctorIdx_237_, v_t_238_, v_h_239_, v_k_240_);
lean_dec(v_ctorIdx_237_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_set_elim___redArg(lean_object* v_t_242_, lean_object* v_set_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lasm_UI_AttrOp_ctorElim___redArg(v_t_242_, v_set_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_set_elim(lean_object* v_motive_245_, lean_object* v_t_246_, lean_object* v_h_247_, lean_object* v_set_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lasm_UI_AttrOp_ctorElim___redArg(v_t_246_, v_set_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_remove_elim___redArg(lean_object* v_t_250_, lean_object* v_remove_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lasm_UI_AttrOp_ctorElim___redArg(v_t_250_, v_remove_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_remove_elim(lean_object* v_motive_253_, lean_object* v_t_254_, lean_object* v_h_255_, lean_object* v_remove_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lasm_UI_AttrOp_ctorElim___redArg(v_t_254_, v_remove_256_);
return v___x_257_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrOp_decEq(lean_object* v_x_258_, lean_object* v_x_259_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
if (lean_obj_tag(v_x_259_) == 0)
{
lean_object* v_k_260_; lean_object* v_v_261_; lean_object* v_k_262_; lean_object* v_v_263_; uint8_t v___x_264_; 
v_k_260_ = lean_ctor_get(v_x_258_, 0);
lean_inc_ref(v_k_260_);
v_v_261_ = lean_ctor_get(v_x_258_, 1);
lean_inc_ref(v_v_261_);
lean_dec_ref_known(v_x_258_, 2);
v_k_262_ = lean_ctor_get(v_x_259_, 0);
lean_inc_ref(v_k_262_);
v_v_263_ = lean_ctor_get(v_x_259_, 1);
lean_inc_ref(v_v_263_);
lean_dec_ref_known(v_x_259_, 2);
v___x_264_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_k_260_, v_k_262_);
lean_dec_ref(v_k_262_);
lean_dec_ref(v_k_260_);
if (v___x_264_ == 0)
{
lean_dec_ref(v_v_263_);
lean_dec_ref(v_v_261_);
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_v_261_, v_v_263_);
return v___x_265_;
}
}
else
{
uint8_t v___x_266_; 
lean_dec_ref_known(v_x_259_, 1);
lean_dec_ref_known(v_x_258_, 2);
v___x_266_ = 0;
return v___x_266_;
}
}
else
{
if (lean_obj_tag(v_x_259_) == 0)
{
uint8_t v___x_267_; 
lean_dec_ref_known(v_x_259_, 2);
lean_dec_ref_known(v_x_258_, 1);
v___x_267_ = 0;
return v___x_267_;
}
else
{
lean_object* v_k_268_; lean_object* v_k_269_; uint8_t v___x_270_; 
v_k_268_ = lean_ctor_get(v_x_258_, 0);
lean_inc_ref(v_k_268_);
lean_dec_ref_known(v_x_258_, 1);
v_k_269_ = lean_ctor_get(v_x_259_, 0);
lean_inc_ref(v_k_269_);
lean_dec_ref_known(v_x_259_, 1);
v___x_270_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v_k_268_, v_k_269_);
lean_dec_ref(v_k_269_);
lean_dec_ref(v_k_268_);
return v___x_270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrOp_decEq___boxed(lean_object* v_x_271_, lean_object* v_x_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Lasm_UI_instDecidableEqAttrOp_decEq(v_x_271_, v_x_272_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqAttrOp(lean_object* v_x_275_, lean_object* v_x_276_){
_start:
{
uint8_t v___x_277_; 
v___x_277_ = l_Lasm_UI_instDecidableEqAttrOp_decEq(v_x_275_, v_x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqAttrOp___boxed(lean_object* v_x_278_, lean_object* v_x_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = l_Lasm_UI_instDecidableEqAttrOp(v_x_278_, v_x_279_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
static lean_object* _init_l_Lasm_UI_instReprAttrOp_repr___closed__3(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(2u);
v___x_289_ = lean_nat_to_int(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l_Lasm_UI_instReprAttrOp_repr___closed__4(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_to_int(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrOp_repr(lean_object* v_x_298_, lean_object* v_prec_299_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
lean_object* v_k_300_; lean_object* v_v_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_325_; 
v_k_300_ = lean_ctor_get(v_x_298_, 0);
v_v_301_ = lean_ctor_get(v_x_298_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v_x_298_);
if (v_isSharedCheck_325_ == 0)
{
v___x_303_ = v_x_298_;
v_isShared_304_ = v_isSharedCheck_325_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_v_301_);
lean_inc(v_k_300_);
lean_dec(v_x_298_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_325_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___y_306_; lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(1024u);
v___x_322_ = lean_nat_dec_le(v___x_321_, v_prec_299_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
v___x_323_ = lean_obj_once(&l_Lasm_UI_instReprAttrOp_repr___closed__3, &l_Lasm_UI_instReprAttrOp_repr___closed__3_once, _init_l_Lasm_UI_instReprAttrOp_repr___closed__3);
v___y_306_ = v___x_323_;
goto v___jp_305_;
}
else
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Lasm_UI_instReprAttrOp_repr___closed__4, &l_Lasm_UI_instReprAttrOp_repr___closed__4_once, _init_l_Lasm_UI_instReprAttrOp_repr___closed__4);
v___y_306_ = v___x_324_;
goto v___jp_305_;
}
v___jp_305_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_307_ = lean_box(1);
v___x_308_ = ((lean_object*)(l_Lasm_UI_instReprAttrOp_repr___closed__2));
v___x_309_ = lean_unsigned_to_nat(1024u);
v___x_310_ = l_Lasm_UI_instReprAttrKey_repr(v_k_300_, v___x_309_);
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 5);
lean_ctor_set(v___x_303_, 1, v___x_310_);
lean_ctor_set(v___x_303_, 0, v___x_308_);
v___x_312_ = v___x_303_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v___x_310_);
v___x_312_ = v_reuseFailAlloc_320_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v___x_307_);
v___x_314_ = l_Lasm_UI_instReprAttrVal_repr(v_v_301_, v___x_309_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_313_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
lean_inc(v___y_306_);
v___x_316_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_316_, 0, v___y_306_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = 0;
v___x_318_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set_uint8(v___x_318_, sizeof(void*)*1, v___x_317_);
v___x_319_ = l_Repr_addAppParen(v___x_318_, v_prec_299_);
return v___x_319_;
}
}
}
}
else
{
lean_object* v_k_326_; lean_object* v___y_328_; lean_object* v___x_337_; uint8_t v___x_338_; 
v_k_326_ = lean_ctor_get(v_x_298_, 0);
lean_inc_ref(v_k_326_);
lean_dec_ref_known(v_x_298_, 1);
v___x_337_ = lean_unsigned_to_nat(1024u);
v___x_338_ = lean_nat_dec_le(v___x_337_, v_prec_299_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
v___x_339_ = lean_obj_once(&l_Lasm_UI_instReprAttrOp_repr___closed__3, &l_Lasm_UI_instReprAttrOp_repr___closed__3_once, _init_l_Lasm_UI_instReprAttrOp_repr___closed__3);
v___y_328_ = v___x_339_;
goto v___jp_327_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l_Lasm_UI_instReprAttrOp_repr___closed__4, &l_Lasm_UI_instReprAttrOp_repr___closed__4_once, _init_l_Lasm_UI_instReprAttrOp_repr___closed__4);
v___y_328_ = v___x_340_;
goto v___jp_327_;
}
v___jp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_329_ = ((lean_object*)(l_Lasm_UI_instReprAttrOp_repr___closed__7));
v___x_330_ = lean_unsigned_to_nat(1024u);
v___x_331_ = l_Lasm_UI_instReprAttrKey_repr(v_k_326_, v___x_330_);
v___x_332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_329_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
lean_inc(v___y_328_);
v___x_333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_333_, 0, v___y_328_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = 0;
v___x_335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*1, v___x_334_);
v___x_336_ = l_Repr_addAppParen(v___x_335_, v_prec_299_);
return v___x_336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprAttrOp_repr___boxed(lean_object* v_x_341_, lean_object* v_prec_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lasm_UI_instReprAttrOp_repr(v_x_341_, v_prec_342_);
lean_dec(v_prec_342_);
return v_res_343_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttrOp_default___closed__0(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = l_Lasm_UI_instInhabitedAttrVal_default;
v___x_347_ = l_Lasm_UI_instInhabitedAttrKey_default;
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttrOp_default(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&l_Lasm_UI_instInhabitedAttrOp_default___closed__0, &l_Lasm_UI_instInhabitedAttrOp_default___closed__0_once, _init_l_Lasm_UI_instInhabitedAttrOp_default___closed__0);
return v___x_349_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedAttrOp(void){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lasm_UI_instInhabitedAttrOp_default;
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___redArg(lean_object* v_x_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_obj_tag_nat(v_x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___redArg___boxed(lean_object* v_x_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lasm_UI_Op_ctorIdx___impl___redArg(v_x_353_);
lean_dec(v_x_353_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl(lean_object* v_Msg_355_, lean_object* v_x_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_obj_tag_nat(v_x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___impl___boxed(lean_object* v_Msg_358_, lean_object* v_x_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_UI_Op_ctorIdx___impl(v_Msg_358_, v_x_359_);
lean_dec(v_x_359_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___redArg(lean_object* v_t_361_, lean_object* v_k_362_){
_start:
{
switch(lean_obj_tag(v_t_361_))
{
case 0:
{
lean_object* v_node_363_; lean_object* v_before_364_; lean_object* v___x_365_; 
v_node_363_ = lean_ctor_get(v_t_361_, 0);
lean_inc_ref(v_node_363_);
v_before_364_ = lean_ctor_get(v_t_361_, 1);
lean_inc(v_before_364_);
lean_dec_ref_known(v_t_361_, 2);
v___x_365_ = lean_apply_2(v_k_362_, v_node_363_, v_before_364_);
return v___x_365_;
}
case 2:
{
lean_object* v_id_366_; lean_object* v___x_367_; 
v_id_366_ = lean_ctor_get(v_t_361_, 0);
lean_inc(v_id_366_);
lean_dec_ref_known(v_t_361_, 1);
v___x_367_ = lean_apply_1(v_k_362_, v_id_366_);
return v___x_367_;
}
case 3:
{
return v_k_362_;
}
case 4:
{
lean_object* v_id_368_; lean_object* v_s_369_; lean_object* v___x_370_; 
v_id_368_ = lean_ctor_get(v_t_361_, 0);
lean_inc(v_id_368_);
v_s_369_ = lean_ctor_get(v_t_361_, 1);
lean_inc_ref(v_s_369_);
lean_dec_ref_known(v_t_361_, 2);
v___x_370_ = lean_apply_2(v_k_362_, v_id_368_, v_s_369_);
return v___x_370_;
}
default: 
{
lean_object* v_id_371_; lean_object* v_before_372_; lean_object* v___x_373_; 
v_id_371_ = lean_ctor_get(v_t_361_, 0);
lean_inc(v_id_371_);
v_before_372_ = lean_ctor_get(v_t_361_, 1);
lean_inc(v_before_372_);
lean_dec(v_t_361_);
v___x_373_ = lean_apply_2(v_k_362_, v_id_371_, v_before_372_);
return v___x_373_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim(lean_object* v_Msg_374_, lean_object* v_motive__1_375_, lean_object* v_ctorIdx_376_, lean_object* v_t_377_, lean_object* v_h_378_, lean_object* v_k_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_377_, v_k_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___boxed(lean_object* v_Msg_381_, lean_object* v_motive__1_382_, lean_object* v_ctorIdx_383_, lean_object* v_t_384_, lean_object* v_h_385_, lean_object* v_k_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lasm_UI_Op_ctorElim(v_Msg_381_, v_motive__1_382_, v_ctorIdx_383_, v_t_384_, v_h_385_, v_k_386_);
lean_dec(v_ctorIdx_383_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim___redArg(lean_object* v_t_388_, lean_object* v_insert_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_388_, v_insert_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim(lean_object* v_Msg_391_, lean_object* v_motive__1_392_, lean_object* v_t_393_, lean_object* v_h_394_, lean_object* v_insert_395_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_393_, v_insert_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim___redArg(lean_object* v_t_397_, lean_object* v_move_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_397_, v_move_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim(lean_object* v_Msg_400_, lean_object* v_motive__1_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_move_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_402_, v_move_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim___redArg(lean_object* v_t_406_, lean_object* v_remove_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_406_, v_remove_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim(lean_object* v_Msg_409_, lean_object* v_motive__1_410_, lean_object* v_t_411_, lean_object* v_h_412_, lean_object* v_remove_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_411_, v_remove_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim___redArg(lean_object* v_t_415_, lean_object* v_clear_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_415_, v_clear_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim(lean_object* v_Msg_418_, lean_object* v_motive__1_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_clear_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_420_, v_clear_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim___redArg(lean_object* v_t_424_, lean_object* v_text_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_424_, v_text_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim(lean_object* v_Msg_427_, lean_object* v_motive__1_428_, lean_object* v_t_429_, lean_object* v_h_430_, lean_object* v_text_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_429_, v_text_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim___redArg(lean_object* v_t_433_, lean_object* v_attrs_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_433_, v_attrs_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim(lean_object* v_Msg_436_, lean_object* v_motive__1_437_, lean_object* v_t_438_, lean_object* v_h_439_, lean_object* v_attrs_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_438_, v_attrs_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim___redArg(lean_object* v_t_442_, lean_object* v_sub_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_442_, v_sub_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim(lean_object* v_Msg_445_, lean_object* v_motive__1_446_, lean_object* v_t_447_, lean_object* v_h_448_, lean_object* v_sub_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_447_, v_sub_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg(){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = lean_box(3);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg___boxed(lean_object* v___dummy_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lasm_UI_instInhabitedOp___redArg();
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp(lean_object* v_Msg_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = lean_box(3);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
if (lean_obj_tag(v_x_459_) == 0)
{
lean_object* v_s_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_s_461_ = lean_ctor_get(v_x_459_, 0);
lean_inc_ref(v_s_461_);
lean_inc(v_x_460_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v_x_460_);
lean_ctor_set(v___x_462_, 1, v_s_461_);
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_nat_add(v_x_460_, v___x_463_);
lean_dec(v_x_460_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_462_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
return v___x_465_;
}
else
{
uint8_t v_ns_466_; lean_object* v_tag_467_; lean_object* v_key_468_; lean_object* v_attrs_469_; lean_object* v_children_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_r_474_; lean_object* v_fst_475_; lean_object* v_snd_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_485_; 
v_ns_466_ = lean_ctor_get_uint8(v_x_459_, sizeof(void*)*4);
v_tag_467_ = lean_ctor_get(v_x_459_, 0);
v_key_468_ = lean_ctor_get(v_x_459_, 1);
v_attrs_469_ = lean_ctor_get(v_x_459_, 2);
v_children_470_ = lean_ctor_get(v_x_459_, 3);
v___x_471_ = lean_unsigned_to_nat(1u);
v___x_472_ = lean_nat_add(v_x_460_, v___x_471_);
v___x_473_ = ((lean_object*)(l_Lasm_UI_create___redArg___closed__0));
v_r_474_ = l_Lasm_UI_createAux___redArg(v_children_470_, v___x_472_, v___x_473_);
v_fst_475_ = lean_ctor_get(v_r_474_, 0);
v_snd_476_ = lean_ctor_get(v_r_474_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_r_474_);
if (v_isSharedCheck_485_ == 0)
{
v___x_478_ = v_r_474_;
v_isShared_479_ = v_isSharedCheck_485_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_snd_476_);
lean_inc(v_fst_475_);
lean_dec(v_r_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_485_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v___x_480_ = lean_array_to_list(v_fst_475_);
lean_inc(v_attrs_469_);
lean_inc(v_key_468_);
lean_inc_ref(v_tag_467_);
v___x_481_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v___x_481_, 0, v_x_460_);
lean_ctor_set(v___x_481_, 1, v_tag_467_);
lean_ctor_set(v___x_481_, 2, v_key_468_);
lean_ctor_set(v___x_481_, 3, v_attrs_469_);
lean_ctor_set(v___x_481_, 4, v___x_480_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*5, v_ns_466_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_481_);
v___x_483_ = v___x_478_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_snd_476_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg(lean_object* v_x_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v___x_489_; 
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v_x_488_);
lean_ctor_set(v___x_489_, 1, v_x_487_);
return v___x_489_;
}
else
{
lean_object* v_head_490_; lean_object* v_tail_491_; lean_object* v_r_492_; lean_object* v_fst_493_; lean_object* v_snd_494_; lean_object* v___x_495_; 
v_head_490_ = lean_ctor_get(v_x_486_, 0);
v_tail_491_ = lean_ctor_get(v_x_486_, 1);
v_r_492_ = l_Lasm_UI_create___redArg(v_head_490_, v_x_487_);
v_fst_493_ = lean_ctor_get(v_r_492_, 0);
lean_inc(v_fst_493_);
v_snd_494_ = lean_ctor_get(v_r_492_, 1);
lean_inc(v_snd_494_);
lean_dec_ref(v_r_492_);
v___x_495_ = lean_array_push(v_x_488_, v_fst_493_);
v_x_486_ = v_tail_491_;
v_x_487_ = v_snd_494_;
v_x_488_ = v___x_495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg___boxed(lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lasm_UI_createAux___redArg(v_x_497_, v_x_498_, v_x_499_);
lean_dec(v_x_497_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg___boxed(lean_object* v_x_501_, lean_object* v_x_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lasm_UI_create___redArg(v_x_501_, v_x_502_);
lean_dec_ref(v_x_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create(lean_object* v_Msg_504_, lean_object* v_x_505_, lean_object* v_x_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lasm_UI_create___redArg(v_x_505_, v_x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___boxed(lean_object* v_Msg_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lasm_UI_create(v_Msg_508_, v_x_509_, v_x_510_);
lean_dec_ref(v_x_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux(lean_object* v_Msg_512_, lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lasm_UI_createAux___redArg(v_x_513_, v_x_514_, v_x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___boxed(lean_object* v_Msg_517_, lean_object* v_x_518_, lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_UI_createAux(v_Msg_517_, v_x_518_, v_x_519_, v_x_520_);
lean_dec(v_x_518_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg(lean_object* v_k_522_, lean_object* v_x_523_){
_start:
{
if (lean_obj_tag(v_x_523_) == 0)
{
lean_object* v___x_524_; 
v___x_524_ = lean_box(0);
return v___x_524_;
}
else
{
lean_object* v_head_525_; lean_object* v_tail_526_; lean_object* v___x_527_; 
v_head_525_ = lean_ctor_get(v_x_523_, 0);
v_tail_526_ = lean_ctor_get(v_x_523_, 1);
v___x_527_ = l_Lasm_UI_lastVal___redArg(v_k_522_, v_tail_526_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_528_ = l_Lasm_UI_Attr_key___redArg(v_head_525_);
v___x_529_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v___x_528_, v_k_522_);
lean_dec_ref(v___x_528_);
if (v___x_529_ == 0)
{
return v___x_527_;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = l_Lasm_UI_Attr_val___redArg(v_head_525_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
else
{
return v___x_527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg___boxed(lean_object* v_k_532_, lean_object* v_x_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_UI_lastVal___redArg(v_k_532_, v_x_533_);
lean_dec(v_x_533_);
lean_dec_ref(v_k_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal(lean_object* v_Msg_535_, lean_object* v_k_536_, lean_object* v_x_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lasm_UI_lastVal___redArg(v_k_536_, v_x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___boxed(lean_object* v_Msg_539_, lean_object* v_k_540_, lean_object* v_x_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lasm_UI_lastVal(v_Msg_539_, v_k_540_, v_x_541_);
lean_dec(v_x_541_);
lean_dec_ref(v_k_540_);
return v_res_542_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey___redArg(lean_object* v_k_543_, lean_object* v_x_544_){
_start:
{
if (lean_obj_tag(v_x_544_) == 0)
{
uint8_t v___x_545_; 
v___x_545_ = 0;
return v___x_545_;
}
else
{
lean_object* v_head_546_; lean_object* v_tail_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v_head_546_ = lean_ctor_get(v_x_544_, 0);
v_tail_547_ = lean_ctor_get(v_x_544_, 1);
v___x_548_ = l_Lasm_UI_Attr_key___redArg(v_head_546_);
v___x_549_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v___x_548_, v_k_543_);
lean_dec_ref(v___x_548_);
if (v___x_549_ == 0)
{
v_x_544_ = v_tail_547_;
goto _start;
}
else
{
return v___x_549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___redArg___boxed(lean_object* v_k_551_, lean_object* v_x_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_Lasm_UI_hasKey___redArg(v_k_551_, v_x_552_);
lean_dec(v_x_552_);
lean_dec_ref(v_k_551_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey(lean_object* v_Msg_555_, lean_object* v_k_556_, lean_object* v_x_557_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = l_Lasm_UI_hasKey___redArg(v_k_556_, v_x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___boxed(lean_object* v_Msg_559_, lean_object* v_k_560_, lean_object* v_x_561_){
_start:
{
uint8_t v_res_562_; lean_object* v_r_563_; 
v_res_562_ = l_Lasm_UI_hasKey(v_Msg_559_, v_k_560_, v_x_561_);
lean_dec(v_x_561_);
lean_dec_ref(v_k_560_);
v_r_563_ = lean_box(v_res_562_);
return v_r_563_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same___redArg(lean_object* v_x_564_, lean_object* v_x_565_){
_start:
{
lean_object* v_n_567_; lean_object* v_v_568_; lean_object* v_n_x27_569_; lean_object* v_v_x27_570_; 
switch(lean_obj_tag(v_x_564_))
{
case 0:
{
if (lean_obj_tag(v_x_565_) == 0)
{
lean_object* v_name_573_; lean_object* v_value_574_; lean_object* v_name_575_; lean_object* v_value_576_; 
v_name_573_ = lean_ctor_get(v_x_564_, 0);
lean_inc_ref(v_name_573_);
v_value_574_ = lean_ctor_get(v_x_564_, 1);
lean_inc_ref(v_value_574_);
lean_dec_ref_known(v_x_564_, 2);
v_name_575_ = lean_ctor_get(v_x_565_, 0);
lean_inc_ref(v_name_575_);
v_value_576_ = lean_ctor_get(v_x_565_, 1);
lean_inc_ref(v_value_576_);
lean_dec_ref_known(v_x_565_, 2);
v_n_567_ = v_name_573_;
v_v_568_ = v_value_574_;
v_n_x27_569_ = v_name_575_;
v_v_x27_570_ = v_value_576_;
goto v___jp_566_;
}
else
{
uint8_t v___x_577_; 
lean_dec_ref_known(v_x_564_, 2);
lean_dec_ref(v_x_565_);
v___x_577_ = 0;
return v___x_577_;
}
}
case 1:
{
if (lean_obj_tag(v_x_565_) == 1)
{
lean_object* v_name_578_; lean_object* v_value_579_; lean_object* v_name_580_; lean_object* v_value_581_; uint8_t v___x_582_; 
v_name_578_ = lean_ctor_get(v_x_564_, 0);
lean_inc_ref(v_name_578_);
v_value_579_ = lean_ctor_get(v_x_564_, 1);
lean_inc_ref(v_value_579_);
lean_dec_ref_known(v_x_564_, 2);
v_name_580_ = lean_ctor_get(v_x_565_, 0);
lean_inc_ref(v_name_580_);
v_value_581_ = lean_ctor_get(v_x_565_, 1);
lean_inc_ref(v_value_581_);
lean_dec_ref_known(v_x_565_, 2);
v___x_582_ = lean_string_dec_eq(v_name_578_, v_name_580_);
lean_dec_ref(v_name_580_);
lean_dec_ref(v_name_578_);
if (v___x_582_ == 0)
{
lean_dec_ref(v_value_581_);
lean_dec_ref(v_value_579_);
return v___x_582_;
}
else
{
uint8_t v___x_583_; 
v___x_583_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_value_579_, v_value_581_);
lean_dec_ref(v_value_581_);
lean_dec_ref(v_value_579_);
return v___x_583_;
}
}
else
{
uint8_t v___x_584_; 
lean_dec_ref_known(v_x_564_, 2);
lean_dec_ref(v_x_565_);
v___x_584_ = 0;
return v___x_584_;
}
}
case 2:
{
if (lean_obj_tag(v_x_565_) == 2)
{
lean_object* v_name_585_; lean_object* v_value_586_; lean_object* v_name_587_; lean_object* v_value_588_; 
v_name_585_ = lean_ctor_get(v_x_564_, 0);
lean_inc_ref(v_name_585_);
v_value_586_ = lean_ctor_get(v_x_564_, 1);
lean_inc_ref(v_value_586_);
lean_dec_ref_known(v_x_564_, 2);
v_name_587_ = lean_ctor_get(v_x_565_, 0);
lean_inc_ref(v_name_587_);
v_value_588_ = lean_ctor_get(v_x_565_, 1);
lean_inc_ref(v_value_588_);
lean_dec_ref_known(v_x_565_, 2);
v_n_567_ = v_name_585_;
v_v_568_ = v_value_586_;
v_n_x27_569_ = v_name_587_;
v_v_x27_570_ = v_value_588_;
goto v___jp_566_;
}
else
{
uint8_t v___x_589_; 
lean_dec_ref_known(v_x_564_, 2);
lean_dec_ref(v_x_565_);
v___x_589_ = 0;
return v___x_589_;
}
}
default: 
{
if (lean_obj_tag(v_x_565_) == 3)
{
lean_object* v_listener_590_; lean_object* v_listener_591_; lean_object* v_event_592_; lean_object* v_event_593_; uint8_t v___x_594_; 
v_listener_590_ = lean_ctor_get(v_x_564_, 0);
lean_inc_ref(v_listener_590_);
lean_dec_ref_known(v_x_564_, 2);
v_listener_591_ = lean_ctor_get(v_x_565_, 0);
lean_inc_ref(v_listener_591_);
lean_dec_ref_known(v_x_565_, 2);
v_event_592_ = lean_ctor_get(v_listener_590_, 0);
v_event_593_ = lean_ctor_get(v_listener_591_, 0);
v___x_594_ = lean_string_dec_eq(v_event_592_, v_event_593_);
if (v___x_594_ == 0)
{
lean_dec_ref(v_listener_591_);
lean_dec_ref(v_listener_590_);
return v___x_594_;
}
else
{
uint8_t v___x_595_; 
v___x_595_ = l_Lasm_UI_instDecidableEqListener_decEq(v_listener_590_, v_listener_591_);
return v___x_595_;
}
}
else
{
uint8_t v___x_596_; 
lean_dec_ref_known(v_x_564_, 2);
lean_dec_ref(v_x_565_);
v___x_596_ = 0;
return v___x_596_;
}
}
}
v___jp_566_:
{
uint8_t v___x_571_; 
v___x_571_ = lean_string_dec_eq(v_n_567_, v_n_x27_569_);
lean_dec_ref(v_n_x27_569_);
lean_dec_ref(v_n_567_);
if (v___x_571_ == 0)
{
lean_dec_ref(v_v_x27_570_);
lean_dec_ref(v_v_568_);
return v___x_571_;
}
else
{
uint8_t v___x_572_; 
v___x_572_ = lean_string_dec_eq(v_v_568_, v_v_x27_570_);
lean_dec_ref(v_v_x27_570_);
lean_dec_ref(v_v_568_);
return v___x_572_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___redArg___boxed(lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
uint8_t v_res_599_; lean_object* v_r_600_; 
v_res_599_ = l_Lasm_UI_Attr_same___redArg(v_x_597_, v_x_598_);
v_r_600_ = lean_box(v_res_599_);
return v_r_600_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same(lean_object* v_Msg_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = l_Lasm_UI_Attr_same___redArg(v_x_602_, v_x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___boxed(lean_object* v_Msg_605_, lean_object* v_x_606_, lean_object* v_x_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Lasm_UI_Attr_same(v_Msg_605_, v_x_606_, v_x_607_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq___redArg(lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
if (lean_obj_tag(v_x_611_) == 0)
{
uint8_t v___x_612_; 
v___x_612_ = 1;
return v___x_612_;
}
else
{
uint8_t v___x_613_; 
lean_dec(v_x_611_);
v___x_613_ = 0;
return v___x_613_;
}
}
else
{
if (lean_obj_tag(v_x_611_) == 1)
{
lean_object* v_head_614_; lean_object* v_tail_615_; lean_object* v_head_616_; lean_object* v_tail_617_; uint8_t v___x_618_; 
v_head_614_ = lean_ctor_get(v_x_610_, 0);
lean_inc(v_head_614_);
v_tail_615_ = lean_ctor_get(v_x_610_, 1);
lean_inc(v_tail_615_);
lean_dec_ref_known(v_x_610_, 2);
v_head_616_ = lean_ctor_get(v_x_611_, 0);
lean_inc(v_head_616_);
v_tail_617_ = lean_ctor_get(v_x_611_, 1);
lean_inc(v_tail_617_);
lean_dec_ref_known(v_x_611_, 2);
v___x_618_ = l_Lasm_UI_Attr_same___redArg(v_head_614_, v_head_616_);
if (v___x_618_ == 0)
{
lean_dec(v_tail_617_);
lean_dec(v_tail_615_);
return v___x_618_;
}
else
{
v_x_610_ = v_tail_615_;
v_x_611_ = v_tail_617_;
goto _start;
}
}
else
{
uint8_t v___x_620_; 
lean_dec_ref_known(v_x_610_, 2);
lean_dec(v_x_611_);
v___x_620_ = 0;
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___redArg___boxed(lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = l_Lasm_UI_attrsEq___redArg(v_x_621_, v_x_622_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq(lean_object* v_Msg_625_, lean_object* v_x_626_, lean_object* v_x_627_){
_start:
{
uint8_t v___x_628_; 
v___x_628_ = l_Lasm_UI_attrsEq___redArg(v_x_626_, v_x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___boxed(lean_object* v_Msg_629_, lean_object* v_x_630_, lean_object* v_x_631_){
_start:
{
uint8_t v_res_632_; lean_object* v_r_633_; 
v_res_632_ = l_Lasm_UI_attrsEq(v_Msg_629_, v_x_630_, v_x_631_);
v_r_633_ = lean_box(v_res_632_);
return v_r_633_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0(lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
if (lean_obj_tag(v_x_634_) == 0)
{
if (lean_obj_tag(v_x_635_) == 0)
{
uint8_t v___x_636_; 
v___x_636_ = 1;
return v___x_636_;
}
else
{
uint8_t v___x_637_; 
lean_dec_ref_known(v_x_635_, 1);
v___x_637_ = 0;
return v___x_637_;
}
}
else
{
if (lean_obj_tag(v_x_635_) == 0)
{
uint8_t v___x_638_; 
lean_dec_ref_known(v_x_634_, 1);
v___x_638_ = 0;
return v___x_638_;
}
else
{
lean_object* v_val_639_; lean_object* v_val_640_; uint8_t v___x_641_; 
v_val_639_ = lean_ctor_get(v_x_634_, 0);
lean_inc(v_val_639_);
lean_dec_ref_known(v_x_634_, 1);
v_val_640_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_val_640_);
lean_dec_ref_known(v_x_635_, 1);
v___x_641_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_val_639_, v_val_640_);
return v___x_641_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0___boxed(lean_object* v_x_642_, lean_object* v_x_643_){
_start:
{
uint8_t v_res_644_; lean_object* v_r_645_; 
v_res_644_ = l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0(v_x_642_, v_x_643_);
v_r_645_ = lean_box(v_res_644_);
return v_r_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg(lean_object* v_old_646_, lean_object* v_x_647_){
_start:
{
if (lean_obj_tag(v_x_647_) == 0)
{
lean_object* v___x_648_; 
v___x_648_ = lean_box(0);
return v___x_648_;
}
else
{
lean_object* v_head_649_; lean_object* v_tail_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_665_; 
v_head_649_ = lean_ctor_get(v_x_647_, 0);
v_tail_650_ = lean_ctor_get(v_x_647_, 1);
v_isSharedCheck_665_ = !lean_is_exclusive(v_x_647_);
if (v_isSharedCheck_665_ == 0)
{
v___x_652_ = v_x_647_;
v_isShared_653_ = v_isSharedCheck_665_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_tail_650_);
lean_inc(v_head_649_);
lean_dec(v_x_647_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_665_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v_t_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
lean_inc(v_tail_650_);
v_t_654_ = l_Lasm_UI_attrSets___redArg(v_old_646_, v_tail_650_);
v___x_655_ = l_Lasm_UI_Attr_key___redArg(v_head_649_);
v___x_656_ = l_Lasm_UI_hasKey___redArg(v___x_655_, v_tail_650_);
lean_dec(v_tail_650_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_657_ = l_Lasm_UI_lastVal___redArg(v___x_655_, v_old_646_);
v___x_658_ = l_Lasm_UI_Attr_val___redArg(v_head_649_);
lean_dec(v_head_649_);
lean_inc_ref(v___x_658_);
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
v___x_660_ = l_instBEqOption_beq___at___00Lasm_UI_attrSets_spec__0(v___x_657_, v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_655_);
lean_ctor_set(v___x_661_, 1, v___x_658_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 1, v_t_654_);
lean_ctor_set(v___x_652_, 0, v___x_661_);
v___x_663_ = v___x_652_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_t_654_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
else
{
lean_dec_ref(v___x_658_);
lean_dec_ref(v___x_655_);
lean_del_object(v___x_652_);
return v_t_654_;
}
}
else
{
lean_dec_ref(v___x_655_);
lean_del_object(v___x_652_);
lean_dec(v_head_649_);
return v_t_654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg___boxed(lean_object* v_old_666_, lean_object* v_x_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_UI_attrSets___redArg(v_old_666_, v_x_667_);
lean_dec(v_old_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets(lean_object* v_Msg_669_, lean_object* v_old_670_, lean_object* v_x_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lasm_UI_attrSets___redArg(v_old_670_, v_x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___boxed(lean_object* v_Msg_673_, lean_object* v_old_674_, lean_object* v_x_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lasm_UI_attrSets(v_Msg_673_, v_old_674_, v_x_675_);
lean_dec(v_old_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg(lean_object* v_new_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_box(0);
return v___x_679_;
}
else
{
lean_object* v_head_680_; lean_object* v_tail_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_693_; 
v_head_680_ = lean_ctor_get(v_x_678_, 0);
v_tail_681_ = lean_ctor_get(v_x_678_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_678_);
if (v_isSharedCheck_693_ == 0)
{
v___x_683_ = v_x_678_;
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_tail_681_);
lean_inc(v_head_680_);
lean_dec(v_x_678_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = l_Lasm_UI_Attr_key___redArg(v_head_680_);
lean_dec(v_head_680_);
v___x_686_ = l_Lasm_UI_hasKey___redArg(v___x_685_, v_new_677_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_685_);
v___x_688_ = l_Lasm_UI_attrRemoves___redArg(v_new_677_, v_tail_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v___x_688_);
lean_ctor_set(v___x_683_, 0, v___x_687_);
v___x_690_ = v___x_683_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
else
{
lean_dec_ref(v___x_685_);
lean_del_object(v___x_683_);
v_x_678_ = v_tail_681_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg___boxed(lean_object* v_new_694_, lean_object* v_x_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lasm_UI_attrRemoves___redArg(v_new_694_, v_x_695_);
lean_dec(v_new_694_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves(lean_object* v_Msg_697_, lean_object* v_new_698_, lean_object* v_x_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lasm_UI_attrRemoves___redArg(v_new_698_, v_x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___boxed(lean_object* v_Msg_701_, lean_object* v_new_702_, lean_object* v_x_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lasm_UI_attrRemoves(v_Msg_701_, v_new_702_, v_x_703_);
lean_dec(v_new_702_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs___redArg(lean_object* v_old_705_, lean_object* v_new_706_){
_start:
{
uint8_t v___x_707_; 
lean_inc(v_new_706_);
lean_inc(v_old_705_);
v___x_707_ = l_Lasm_UI_attrsEq___redArg(v_old_705_, v_new_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
lean_inc(v_old_705_);
v___x_708_ = l_Lasm_UI_attrRemoves___redArg(v_new_706_, v_old_705_);
v___x_709_ = l_Lasm_UI_attrSets___redArg(v_old_705_, v_new_706_);
lean_dec(v_old_705_);
v___x_710_ = l_List_appendTR___redArg(v___x_708_, v___x_709_);
return v___x_710_;
}
else
{
lean_object* v___x_711_; 
lean_dec(v_new_706_);
lean_dec(v_old_705_);
v___x_711_ = lean_box(0);
return v___x_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs(lean_object* v_Msg_712_, lean_object* v_old_713_, lean_object* v_new_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lasm_UI_diffAttrs___redArg(v_old_713_, v_new_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___redArg(lean_object* v_val_716_, lean_object* v_before_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
if (lean_obj_tag(v_x_718_) == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec(v_before_717_);
lean_dec_ref(v_val_716_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v_x_721_);
lean_ctor_set(v___x_722_, 1, v_x_719_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_x_720_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v_head_724_; lean_object* v_tail_725_; lean_object* v___x_726_; lean_object* v_r_727_; lean_object* v_fst_728_; lean_object* v_snd_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_739_; 
v_head_724_ = lean_ctor_get(v_x_718_, 0);
lean_inc(v_head_724_);
v_tail_725_ = lean_ctor_get(v_x_718_, 1);
lean_inc(v_tail_725_);
lean_dec_ref_known(v_x_718_, 2);
lean_inc_ref(v_val_716_);
v___x_726_ = lean_apply_1(v_val_716_, v_head_724_);
v_r_727_ = l_Lasm_UI_create___redArg(v___x_726_, v_x_719_);
lean_dec_ref(v___x_726_);
v_fst_728_ = lean_ctor_get(v_r_727_, 0);
v_snd_729_ = lean_ctor_get(v_r_727_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v_r_727_);
if (v_isSharedCheck_739_ == 0)
{
v___x_731_ = v_r_727_;
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_snd_729_);
lean_inc(v_fst_728_);
lean_dec(v_r_727_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
lean_inc(v_before_717_);
lean_inc(v_fst_728_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v_before_717_);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_fst_728_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_before_717_);
v___x_734_ = v_reuseFailAlloc_738_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_array_push(v_x_720_, v___x_734_);
v___x_736_ = lean_array_push(v_x_721_, v_fst_728_);
v_x_718_ = v_tail_725_;
v_x_719_ = v_snd_729_;
v_x_720_ = v___x_735_;
v_x_721_ = v___x_736_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll(lean_object* v_Msg_740_, lean_object* v_00_u03b2_741_, lean_object* v_val_742_, lean_object* v_before_743_, lean_object* v_x_744_, lean_object* v_x_745_, lean_object* v_x_746_, lean_object* v_x_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lasm_UI_insertAll___redArg(v_val_742_, v_before_743_, v_x_744_, v_x_745_, v_x_746_, v_x_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll___redArg(lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
if (lean_obj_tag(v_x_749_) == 0)
{
return v_x_750_;
}
else
{
lean_object* v_head_751_; lean_object* v_tail_752_; lean_object* v___y_754_; lean_object* v_id_758_; 
v_head_751_ = lean_ctor_get(v_x_749_, 0);
lean_inc(v_head_751_);
v_tail_752_ = lean_ctor_get(v_x_749_, 1);
lean_inc(v_tail_752_);
lean_dec_ref_known(v_x_749_, 2);
v_id_758_ = lean_ctor_get(v_head_751_, 0);
lean_inc(v_id_758_);
lean_dec(v_head_751_);
v___y_754_ = v_id_758_;
goto v___jp_753_;
v___jp_753_:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_755_, 0, v___y_754_);
v___x_756_ = lean_array_push(v_x_750_, v___x_755_);
v_x_749_ = v_tail_752_;
v_x_750_ = v___x_756_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll(lean_object* v_Msg_759_, lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lasm_UI_removeAll___redArg(v_x_760_, v_x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg(lean_object* v_val_763_, lean_object* v_na_764_, lean_object* v_before_765_, lean_object* v_lo_766_, lean_object* v_hi_767_, lean_object* v_n_768_, lean_object* v_ops_769_, lean_object* v_acc_770_){
_start:
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_lt(v_lo_766_, v_hi_767_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; lean_object* v___x_773_; 
lean_dec(v_lo_766_);
lean_dec(v_before_765_);
lean_dec_ref(v_val_763_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v_acc_770_);
lean_ctor_set(v___x_772_, 1, v_n_768_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_ops_769_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
return v___x_773_;
}
else
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = lean_array_get_size(v_na_764_);
v___x_775_ = lean_nat_dec_lt(v_lo_766_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; 
lean_dec(v_lo_766_);
lean_dec(v_before_765_);
lean_dec_ref(v_val_763_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v_acc_770_);
lean_ctor_set(v___x_776_, 1, v_n_768_);
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v_ops_769_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v_r_780_; lean_object* v_fst_781_; lean_object* v_snd_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_794_; 
v___x_778_ = lean_array_fget_borrowed(v_na_764_, v_lo_766_);
lean_inc_ref(v_val_763_);
lean_inc(v___x_778_);
v___x_779_ = lean_apply_1(v_val_763_, v___x_778_);
v_r_780_ = l_Lasm_UI_create___redArg(v___x_779_, v_n_768_);
lean_dec_ref(v___x_779_);
v_fst_781_ = lean_ctor_get(v_r_780_, 0);
v_snd_782_ = lean_ctor_get(v_r_780_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_r_780_);
if (v_isSharedCheck_794_ == 0)
{
v___x_784_ = v_r_780_;
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_snd_782_);
lean_inc(v_fst_781_);
lean_dec(v_r_780_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_786_ = lean_unsigned_to_nat(1u);
v___x_787_ = lean_nat_add(v_lo_766_, v___x_786_);
lean_dec(v_lo_766_);
lean_inc(v_before_765_);
lean_inc(v_fst_781_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v_before_765_);
v___x_789_ = v___x_784_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_fst_781_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_before_765_);
v___x_789_ = v_reuseFailAlloc_793_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = lean_array_push(v_ops_769_, v___x_789_);
v___x_791_ = lean_array_push(v_acc_770_, v_fst_781_);
v_lo_766_ = v___x_787_;
v_n_768_ = v_snd_782_;
v_ops_769_ = v___x_790_;
v_acc_770_ = v___x_791_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg___boxed(lean_object* v_val_795_, lean_object* v_na_796_, lean_object* v_before_797_, lean_object* v_lo_798_, lean_object* v_hi_799_, lean_object* v_n_800_, lean_object* v_ops_801_, lean_object* v_acc_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lasm_UI_insertRange___redArg(v_val_795_, v_na_796_, v_before_797_, v_lo_798_, v_hi_799_, v_n_800_, v_ops_801_, v_acc_802_);
lean_dec(v_hi_799_);
lean_dec_ref(v_na_796_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange(lean_object* v_Msg_804_, lean_object* v_00_u03b2_805_, lean_object* v_val_806_, lean_object* v_na_807_, lean_object* v_before_808_, lean_object* v_lo_809_, lean_object* v_hi_810_, lean_object* v_n_811_, lean_object* v_ops_812_, lean_object* v_acc_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lasm_UI_insertRange___redArg(v_val_806_, v_na_807_, v_before_808_, v_lo_809_, v_hi_810_, v_n_811_, v_ops_812_, v_acc_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___boxed(lean_object* v_Msg_815_, lean_object* v_00_u03b2_816_, lean_object* v_val_817_, lean_object* v_na_818_, lean_object* v_before_819_, lean_object* v_lo_820_, lean_object* v_hi_821_, lean_object* v_n_822_, lean_object* v_ops_823_, lean_object* v_acc_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_UI_insertRange(v_Msg_815_, v_00_u03b2_816_, v_val_817_, v_na_818_, v_before_819_, v_lo_820_, v_hi_821_, v_n_822_, v_ops_823_, v_acc_824_);
lean_dec(v_hi_821_);
lean_dec_ref(v_na_818_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter___redArg(lean_object* v_x_826_, lean_object* v_h__1_827_, lean_object* v_h__2_828_){
_start:
{
if (lean_obj_tag(v_x_826_) == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
lean_dec(v_h__1_827_);
v___x_829_ = lean_box(0);
v___x_830_ = lean_apply_1(v_h__2_828_, v___x_829_);
return v___x_830_;
}
else
{
lean_object* v_val_831_; lean_object* v___x_832_; 
lean_dec(v_h__2_828_);
v_val_831_ = lean_ctor_get(v_x_826_, 0);
lean_inc(v_val_831_);
lean_dec_ref_known(v_x_826_, 1);
v___x_832_ = lean_apply_1(v_h__1_827_, v_val_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter(lean_object* v_00_u03b2_833_, lean_object* v_motive_834_, lean_object* v_x_835_, lean_object* v_h__1_836_, lean_object* v_h__2_837_){
_start:
{
if (lean_obj_tag(v_x_835_) == 0)
{
lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec(v_h__1_836_);
v___x_838_ = lean_box(0);
v___x_839_ = lean_apply_1(v_h__2_837_, v___x_838_);
return v___x_839_;
}
else
{
lean_object* v_val_840_; lean_object* v___x_841_; 
lean_dec(v_h__2_837_);
v_val_840_ = lean_ctor_get(v_x_835_, 0);
lean_inc(v_val_840_);
lean_dec_ref_known(v_x_835_, 1);
v___x_841_ = lean_apply_1(v_h__1_836_, v_val_840_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg(lean_object* v_oa_842_, lean_object* v_lo_843_, lean_object* v_hi_844_, lean_object* v_ops_845_){
_start:
{
uint8_t v___x_850_; 
v___x_850_ = lean_nat_dec_lt(v_lo_843_, v_hi_844_);
if (v___x_850_ == 0)
{
lean_dec(v_lo_843_);
return v_ops_845_;
}
else
{
lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_851_ = lean_array_get_size(v_oa_842_);
v___x_852_ = lean_nat_dec_lt(v_lo_843_, v___x_851_);
if (v___x_852_ == 0)
{
goto v___jp_846_;
}
else
{
lean_object* v___x_853_; 
v___x_853_ = lean_array_fget(v_oa_842_, v_lo_843_);
if (lean_obj_tag(v___x_853_) == 1)
{
lean_object* v_val_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_868_; 
v_val_854_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_868_ == 0)
{
v___x_856_ = v___x_853_;
v_isShared_857_ = v_isSharedCheck_868_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_val_854_);
lean_dec(v___x_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_868_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___y_861_; lean_object* v_id_867_; 
v___x_858_ = lean_unsigned_to_nat(1u);
v___x_859_ = lean_nat_add(v_lo_843_, v___x_858_);
lean_dec(v_lo_843_);
v_id_867_ = lean_ctor_get(v_val_854_, 0);
lean_inc(v_id_867_);
lean_dec(v_val_854_);
v___y_861_ = v_id_867_;
goto v___jp_860_;
v___jp_860_:
{
lean_object* v___x_863_; 
if (v_isShared_857_ == 0)
{
lean_ctor_set_tag(v___x_856_, 2);
lean_ctor_set(v___x_856_, 0, v___y_861_);
v___x_863_ = v___x_856_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___y_861_);
v___x_863_ = v_reuseFailAlloc_866_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_864_; 
v___x_864_ = lean_array_push(v_ops_845_, v___x_863_);
v_lo_843_ = v___x_859_;
v_ops_845_ = v___x_864_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_853_);
goto v___jp_846_;
}
}
}
v___jp_846_:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = lean_nat_add(v_lo_843_, v___x_847_);
lean_dec(v_lo_843_);
v_lo_843_ = v___x_848_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg___boxed(lean_object* v_oa_869_, lean_object* v_lo_870_, lean_object* v_hi_871_, lean_object* v_ops_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_UI_removeRange___redArg(v_oa_869_, v_lo_870_, v_hi_871_, v_ops_872_);
lean_dec(v_hi_871_);
lean_dec_ref(v_oa_869_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange(lean_object* v_Msg_874_, lean_object* v_oa_875_, lean_object* v_lo_876_, lean_object* v_hi_877_, lean_object* v_ops_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Lasm_UI_removeRange___redArg(v_oa_875_, v_lo_876_, v_hi_877_, v_ops_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___boxed(lean_object* v_Msg_880_, lean_object* v_oa_881_, lean_object* v_lo_882_, lean_object* v_hi_883_, lean_object* v_ops_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lasm_UI_removeRange(v_Msg_880_, v_oa_881_, v_lo_882_, v_hi_883_, v_ops_884_);
lean_dec(v_hi_883_);
lean_dec_ref(v_oa_881_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object* v_x_886_, lean_object* v_h__1_887_, lean_object* v_h__2_888_){
_start:
{
if (lean_obj_tag(v_x_886_) == 1)
{
lean_object* v_val_889_; 
v_val_889_ = lean_ctor_get(v_x_886_, 0);
if (lean_obj_tag(v_val_889_) == 1)
{
lean_object* v_val_890_; lean_object* v___x_891_; 
lean_inc_ref(v_val_889_);
lean_dec_ref_known(v_x_886_, 1);
lean_dec(v_h__2_888_);
v_val_890_ = lean_ctor_get(v_val_889_, 0);
lean_inc(v_val_890_);
lean_dec_ref_known(v_val_889_, 1);
v___x_891_ = lean_apply_1(v_h__1_887_, v_val_890_);
return v___x_891_;
}
else
{
lean_object* v___x_892_; 
lean_dec(v_h__1_887_);
v___x_892_ = lean_apply_2(v_h__2_888_, v_x_886_, lean_box(0));
return v___x_892_;
}
}
else
{
lean_object* v___x_893_; 
lean_dec(v_h__1_887_);
v___x_893_ = lean_apply_2(v_h__2_888_, v_x_886_, lean_box(0));
return v___x_893_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter(lean_object* v_Msg_894_, lean_object* v_motive_895_, lean_object* v_x_896_, lean_object* v_h__1_897_, lean_object* v_h__2_898_){
_start:
{
if (lean_obj_tag(v_x_896_) == 1)
{
lean_object* v_val_899_; 
v_val_899_ = lean_ctor_get(v_x_896_, 0);
if (lean_obj_tag(v_val_899_) == 1)
{
lean_object* v_val_900_; lean_object* v___x_901_; 
lean_inc_ref(v_val_899_);
lean_dec_ref_known(v_x_896_, 1);
lean_dec(v_h__2_898_);
v_val_900_ = lean_ctor_get(v_val_899_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v_val_899_, 1);
v___x_901_ = lean_apply_1(v_h__1_897_, v_val_900_);
return v___x_901_;
}
else
{
lean_object* v___x_902_; 
lean_dec(v_h__1_897_);
v___x_902_ = lean_apply_2(v_h__2_898_, v_x_896_, lean_box(0));
return v___x_902_;
}
}
else
{
lean_object* v___x_903_; 
lean_dec(v_h__1_897_);
v___x_903_ = lean_apply_2(v_h__2_898_, v_x_896_, lean_box(0));
return v___x_903_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(lean_object* v_a_904_, lean_object* v_x_905_){
_start:
{
if (lean_obj_tag(v_x_905_) == 0)
{
uint8_t v___x_906_; 
v___x_906_ = 0;
return v___x_906_;
}
else
{
lean_object* v_key_907_; lean_object* v_tail_908_; uint8_t v___x_909_; 
v_key_907_ = lean_ctor_get(v_x_905_, 0);
v_tail_908_ = lean_ctor_get(v_x_905_, 2);
v___x_909_ = lean_string_dec_eq(v_key_907_, v_a_904_);
if (v___x_909_ == 0)
{
v_x_905_ = v_tail_908_;
goto _start;
}
else
{
return v___x_909_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg___boxed(lean_object* v_a_911_, lean_object* v_x_912_){
_start:
{
uint8_t v_res_913_; lean_object* v_r_914_; 
v_res_913_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_911_, v_x_912_);
lean_dec(v_x_912_);
lean_dec_ref(v_a_911_);
v_r_914_ = lean_box(v_res_913_);
return v_r_914_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(lean_object* v_a_915_, lean_object* v_b_916_, lean_object* v_x_917_){
_start:
{
if (lean_obj_tag(v_x_917_) == 0)
{
lean_dec(v_b_916_);
lean_dec_ref(v_a_915_);
return v_x_917_;
}
else
{
lean_object* v_key_918_; lean_object* v_value_919_; lean_object* v_tail_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_932_; 
v_key_918_ = lean_ctor_get(v_x_917_, 0);
v_value_919_ = lean_ctor_get(v_x_917_, 1);
v_tail_920_ = lean_ctor_get(v_x_917_, 2);
v_isSharedCheck_932_ = !lean_is_exclusive(v_x_917_);
if (v_isSharedCheck_932_ == 0)
{
v___x_922_ = v_x_917_;
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_tail_920_);
lean_inc(v_value_919_);
lean_inc(v_key_918_);
lean_dec(v_x_917_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
uint8_t v___x_924_; 
v___x_924_ = lean_string_dec_eq(v_key_918_, v_a_915_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_925_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_915_, v_b_916_, v_tail_920_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 2, v___x_925_);
v___x_927_ = v___x_922_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_key_918_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_value_919_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
else
{
lean_object* v___x_930_; 
lean_dec(v_value_919_);
lean_dec(v_key_918_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v_b_916_);
lean_ctor_set(v___x_922_, 0, v_a_915_);
v___x_930_ = v___x_922_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_915_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_b_916_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_tail_920_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
if (lean_obj_tag(v_x_934_) == 0)
{
return v_x_933_;
}
else
{
lean_object* v_key_935_; lean_object* v_value_936_; lean_object* v_tail_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_960_; 
v_key_935_ = lean_ctor_get(v_x_934_, 0);
v_value_936_ = lean_ctor_get(v_x_934_, 1);
v_tail_937_ = lean_ctor_get(v_x_934_, 2);
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_934_);
if (v_isSharedCheck_960_ == 0)
{
v___x_939_ = v_x_934_;
v_isShared_940_ = v_isSharedCheck_960_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_tail_937_);
lean_inc(v_value_936_);
lean_inc(v_key_935_);
lean_dec(v_x_934_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_960_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_941_; uint64_t v___x_942_; uint64_t v___x_943_; uint64_t v___x_944_; uint64_t v_fold_945_; uint64_t v___x_946_; uint64_t v___x_947_; uint64_t v___x_948_; size_t v___x_949_; size_t v___x_950_; size_t v___x_951_; size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_941_ = lean_array_get_size(v_x_933_);
v___x_942_ = lean_string_hash(v_key_935_);
v___x_943_ = 32ULL;
v___x_944_ = lean_uint64_shift_right(v___x_942_, v___x_943_);
v_fold_945_ = lean_uint64_xor(v___x_942_, v___x_944_);
v___x_946_ = 16ULL;
v___x_947_ = lean_uint64_shift_right(v_fold_945_, v___x_946_);
v___x_948_ = lean_uint64_xor(v_fold_945_, v___x_947_);
v___x_949_ = lean_uint64_to_usize(v___x_948_);
v___x_950_ = lean_usize_of_nat(v___x_941_);
v___x_951_ = ((size_t)1ULL);
v___x_952_ = lean_usize_sub(v___x_950_, v___x_951_);
v___x_953_ = lean_usize_land(v___x_949_, v___x_952_);
v___x_954_ = lean_array_uget_borrowed(v_x_933_, v___x_953_);
lean_inc(v___x_954_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 2, v___x_954_);
v___x_956_ = v___x_939_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_key_935_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_value_936_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v___x_954_);
v___x_956_ = v_reuseFailAlloc_959_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; 
v___x_957_ = lean_array_uset(v_x_933_, v___x_953_, v___x_956_);
v_x_933_ = v___x_957_;
v_x_934_ = v_tail_937_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(lean_object* v_i_961_, lean_object* v_source_962_, lean_object* v_target_963_){
_start:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_array_get_size(v_source_962_);
v___x_965_ = lean_nat_dec_lt(v_i_961_, v___x_964_);
if (v___x_965_ == 0)
{
lean_dec_ref(v_source_962_);
lean_dec(v_i_961_);
return v_target_963_;
}
else
{
lean_object* v_es_966_; lean_object* v___x_967_; lean_object* v_source_968_; lean_object* v_target_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_es_966_ = lean_array_fget(v_source_962_, v_i_961_);
v___x_967_ = lean_box(0);
v_source_968_ = lean_array_fset(v_source_962_, v_i_961_, v___x_967_);
v_target_969_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_target_963_, v_es_966_);
v___x_970_ = lean_unsigned_to_nat(1u);
v___x_971_ = lean_nat_add(v_i_961_, v___x_970_);
lean_dec(v_i_961_);
v_i_961_ = v___x_971_;
v_source_962_ = v_source_968_;
v_target_963_ = v_target_969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(lean_object* v_data_973_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v_nbuckets_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_974_ = lean_array_get_size(v_data_973_);
v___x_975_ = lean_unsigned_to_nat(2u);
v_nbuckets_976_ = lean_nat_mul(v___x_974_, v___x_975_);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_box(0);
v___x_979_ = lean_mk_array(v_nbuckets_976_, v___x_978_);
v___x_980_ = lean_array_propagate_mark(v_data_973_, v___x_979_);
v___x_981_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v___x_977_, v_data_973_, v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object* v_m_982_, lean_object* v_a_983_, lean_object* v_b_984_){
_start:
{
lean_object* v_size_985_; lean_object* v_buckets_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1029_; 
v_size_985_ = lean_ctor_get(v_m_982_, 0);
v_buckets_986_ = lean_ctor_get(v_m_982_, 1);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_m_982_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_988_ = v_m_982_;
v_isShared_989_ = v_isSharedCheck_1029_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_buckets_986_);
lean_inc(v_size_985_);
lean_dec(v_m_982_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1029_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; uint64_t v___x_991_; uint64_t v___x_992_; uint64_t v___x_993_; uint64_t v_fold_994_; uint64_t v___x_995_; uint64_t v___x_996_; uint64_t v___x_997_; size_t v___x_998_; size_t v___x_999_; size_t v___x_1000_; size_t v___x_1001_; size_t v___x_1002_; lean_object* v_bkt_1003_; uint8_t v___x_1004_; 
v___x_990_ = lean_array_get_size(v_buckets_986_);
v___x_991_ = lean_string_hash(v_a_983_);
v___x_992_ = 32ULL;
v___x_993_ = lean_uint64_shift_right(v___x_991_, v___x_992_);
v_fold_994_ = lean_uint64_xor(v___x_991_, v___x_993_);
v___x_995_ = 16ULL;
v___x_996_ = lean_uint64_shift_right(v_fold_994_, v___x_995_);
v___x_997_ = lean_uint64_xor(v_fold_994_, v___x_996_);
v___x_998_ = lean_uint64_to_usize(v___x_997_);
v___x_999_ = lean_usize_of_nat(v___x_990_);
v___x_1000_ = ((size_t)1ULL);
v___x_1001_ = lean_usize_sub(v___x_999_, v___x_1000_);
v___x_1002_ = lean_usize_land(v___x_998_, v___x_1001_);
v_bkt_1003_ = lean_array_uget_borrowed(v_buckets_986_, v___x_1002_);
v___x_1004_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_983_, v_bkt_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; lean_object* v_size_x27_1006_; lean_object* v___x_1007_; lean_object* v_buckets_x27_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1005_ = lean_unsigned_to_nat(1u);
v_size_x27_1006_ = lean_nat_add(v_size_985_, v___x_1005_);
lean_dec(v_size_985_);
lean_inc(v_bkt_1003_);
v___x_1007_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1007_, 0, v_a_983_);
lean_ctor_set(v___x_1007_, 1, v_b_984_);
lean_ctor_set(v___x_1007_, 2, v_bkt_1003_);
v_buckets_x27_1008_ = lean_array_uset(v_buckets_986_, v___x_1002_, v___x_1007_);
v___x_1009_ = lean_unsigned_to_nat(4u);
v___x_1010_ = lean_nat_mul(v_size_x27_1006_, v___x_1009_);
v___x_1011_ = lean_unsigned_to_nat(3u);
v___x_1012_ = lean_nat_div(v___x_1010_, v___x_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_array_get_size(v_buckets_x27_1008_);
v___x_1014_ = lean_nat_dec_le(v___x_1012_, v___x_1013_);
lean_dec(v___x_1012_);
if (v___x_1014_ == 0)
{
lean_object* v_val_1015_; lean_object* v___x_1017_; 
v_val_1015_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_buckets_x27_1008_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_val_1015_);
lean_ctor_set(v___x_988_, 0, v_size_x27_1006_);
v___x_1017_ = v___x_988_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_size_x27_1006_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_val_1015_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
else
{
lean_object* v___x_1020_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_buckets_x27_1008_);
lean_ctor_set(v___x_988_, 0, v_size_x27_1006_);
v___x_1020_ = v___x_988_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_size_x27_1006_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_buckets_x27_1008_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
else
{
lean_object* v___x_1022_; lean_object* v_buckets_x27_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; 
lean_inc(v_bkt_1003_);
v___x_1022_ = lean_box(0);
v_buckets_x27_1023_ = lean_array_uset(v_buckets_986_, v___x_1002_, v___x_1022_);
v___x_1024_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_983_, v_b_984_, v_bkt_1003_);
v___x_1025_ = lean_array_uset(v_buckets_x27_1023_, v___x_1002_, v___x_1024_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_1025_);
v___x_1027_ = v___x_988_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_size_985_);
lean_ctor_set(v_reuseFailAlloc_1028_, 1, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg(lean_object* v_oa_1030_, lean_object* v_lo_1031_, lean_object* v_hi_1032_, lean_object* v_m_1033_){
_start:
{
uint8_t v___x_1038_; 
v___x_1038_ = lean_nat_dec_lt(v_lo_1031_, v_hi_1032_);
if (v___x_1038_ == 0)
{
lean_dec(v_lo_1031_);
return v_m_1033_;
}
else
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = lean_array_get_size(v_oa_1030_);
v___x_1040_ = lean_nat_dec_lt(v_lo_1031_, v___x_1039_);
if (v___x_1040_ == 0)
{
goto v___jp_1034_;
}
else
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_array_fget_borrowed(v_oa_1030_, v_lo_1031_);
if (lean_obj_tag(v___x_1041_) == 1)
{
lean_object* v_val_1042_; lean_object* v___x_1043_; 
v_val_1042_ = lean_ctor_get(v___x_1041_, 0);
v___x_1043_ = l_Lasm_UI_Live_key_x3f___redArg(v_val_1042_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = lean_nat_add(v_lo_1031_, v___x_1044_);
lean_dec(v_lo_1031_);
v_lo_1031_ = v___x_1045_;
goto _start;
}
else
{
lean_object* v_val_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v_val_1047_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_val_1047_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1048_ = lean_unsigned_to_nat(1u);
v___x_1049_ = lean_nat_add(v_lo_1031_, v___x_1048_);
v___x_1050_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1033_, v_val_1047_, v_lo_1031_);
v_lo_1031_ = v___x_1049_;
v_m_1033_ = v___x_1050_;
goto _start;
}
}
else
{
goto v___jp_1034_;
}
}
}
v___jp_1034_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_unsigned_to_nat(1u);
v___x_1036_ = lean_nat_add(v_lo_1031_, v___x_1035_);
lean_dec(v_lo_1031_);
v_lo_1031_ = v___x_1036_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg___boxed(lean_object* v_oa_1052_, lean_object* v_lo_1053_, lean_object* v_hi_1054_, lean_object* v_m_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lasm_UI_keyIndex___redArg(v_oa_1052_, v_lo_1053_, v_hi_1054_, v_m_1055_);
lean_dec(v_hi_1054_);
lean_dec_ref(v_oa_1052_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex(lean_object* v_Msg_1057_, lean_object* v_oa_1058_, lean_object* v_lo_1059_, lean_object* v_hi_1060_, lean_object* v_m_1061_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lasm_UI_keyIndex___redArg(v_oa_1058_, v_lo_1059_, v_hi_1060_, v_m_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___boxed(lean_object* v_Msg_1063_, lean_object* v_oa_1064_, lean_object* v_lo_1065_, lean_object* v_hi_1066_, lean_object* v_m_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_UI_keyIndex(v_Msg_1063_, v_oa_1064_, v_lo_1065_, v_hi_1066_, v_m_1067_);
lean_dec(v_hi_1066_);
lean_dec_ref(v_oa_1064_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0(lean_object* v_00_u03b2_1069_, lean_object* v_m_1070_, lean_object* v_a_1071_, lean_object* v_b_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1070_, v_a_1071_, v_b_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(lean_object* v_00_u03b2_1074_, lean_object* v_a_1075_, lean_object* v_x_1076_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_1075_, v_x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1078_, lean_object* v_a_1079_, lean_object* v_x_1080_){
_start:
{
uint8_t v_res_1081_; lean_object* v_r_1082_; 
v_res_1081_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(v_00_u03b2_1078_, v_a_1079_, v_x_1080_);
lean_dec(v_x_1080_);
lean_dec_ref(v_a_1079_);
v_r_1082_ = lean_box(v_res_1081_);
return v_r_1082_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1(lean_object* v_00_u03b2_1083_, lean_object* v_data_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_data_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2(lean_object* v_00_u03b2_1086_, lean_object* v_a_1087_, lean_object* v_b_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_1087_, v_b_1088_, v_x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1091_, lean_object* v_i_1092_, lean_object* v_source_1093_, lean_object* v_target_1094_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v_i_1092_, v_source_1093_, v_target_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1096_, lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1097_, v_x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter___redArg(lean_object* v_x_1100_, lean_object* v_h__1_1101_, lean_object* v_h__2_1102_){
_start:
{
if (lean_obj_tag(v_x_1100_) == 0)
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec(v_h__1_1101_);
v___x_1103_ = lean_box(0);
v___x_1104_ = lean_apply_1(v_h__2_1102_, v___x_1103_);
return v___x_1104_;
}
else
{
lean_object* v_val_1105_; lean_object* v___x_1106_; 
lean_dec(v_h__2_1102_);
v_val_1105_ = lean_ctor_get(v_x_1100_, 0);
lean_inc(v_val_1105_);
lean_dec_ref_known(v_x_1100_, 1);
v___x_1106_ = lean_apply_1(v_h__1_1101_, v_val_1105_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter(lean_object* v_motive_1107_, lean_object* v_x_1108_, lean_object* v_h__1_1109_, lean_object* v_h__2_1110_){
_start:
{
if (lean_obj_tag(v_x_1108_) == 0)
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec(v_h__1_1109_);
v___x_1111_ = lean_box(0);
v___x_1112_ = lean_apply_1(v_h__2_1110_, v___x_1111_);
return v___x_1112_;
}
else
{
lean_object* v_val_1113_; lean_object* v___x_1114_; 
lean_dec(v_h__2_1110_);
v_val_1113_ = lean_ctor_get(v_x_1108_, 0);
lean_inc(v_val_1113_);
lean_dec_ref_known(v_x_1108_, 1);
v___x_1114_ = lean_apply_1(v_h__1_1109_, v_val_1113_);
return v___x_1114_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0(lean_object* v___y_1115_, lean_object* v_x_1116_){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___y_1115_);
v___x_1118_ = lean_box(0);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0___boxed(lean_object* v___y_1120_, lean_object* v_x_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_1120_, v_x_1121_);
lean_dec(v_x_1121_);
return v_res_1122_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__0(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___f_1124_; 
v___x_1123_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_1124_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1124_, 0, v___x_1123_);
return v___f_1124_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__2(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_unsigned_to_nat(16u);
v___x_1128_ = lean_mk_array(v___x_1127_, v___x_1126_);
return v___x_1128_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__3(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__2, &l_Lasm_UI_twoEnded___redArg___closed__2_once, _init_l_Lasm_UI_twoEnded___redArg___closed__2);
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
lean_ctor_set(v___x_1131_, 1, v___x_1129_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object* v_val_1132_, lean_object* v_f_1133_, lean_object* v_oa_1134_, lean_object* v_oLo_1135_, lean_object* v_oHi_1136_, lean_object* v_na_1137_, lean_object* v_nLo_1138_, lean_object* v_nHi_1139_, lean_object* v_pre_1140_, lean_object* v_suf_1141_, lean_object* v_ops_1142_, lean_object* v_next_1143_, lean_object* v_keys_1144_){
_start:
{
lean_object* v___y_1146_; lean_object* v___y_1156_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; uint8_t v___x_1177_; 
v___x_1177_ = lean_nat_dec_lt(v_oLo_1135_, v_oHi_1136_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; 
lean_dec(v_keys_1144_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
v___x_1178_ = l_List_head_x3f___redArg(v_suf_1141_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_box(0);
v___y_1146_ = v___x_1179_;
goto v___jp_1145_;
}
else
{
lean_object* v_val_1180_; lean_object* v_id_1181_; 
v_val_1180_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_val_1180_);
lean_dec_ref_known(v___x_1178_, 1);
v_id_1181_ = lean_ctor_get(v_val_1180_, 0);
lean_inc(v_id_1181_);
lean_dec(v_val_1180_);
v___y_1156_ = v_id_1181_;
goto v___jp_1155_;
}
}
else
{
uint8_t v___x_1182_; 
v___x_1182_ = lean_nat_dec_lt(v_nLo_1138_, v_nHi_1139_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
v___x_1183_ = l_Lasm_UI_removeRange___redArg(v_oa_1134_, v_oLo_1135_, v_oHi_1136_, v_ops_1142_);
lean_dec(v_oHi_1136_);
lean_dec_ref(v_oa_1134_);
v___x_1184_ = lean_array_to_list(v_pre_1140_);
v___x_1185_ = l_List_appendTR___redArg(v___x_1184_, v_suf_1141_);
v___x_1186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1183_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
lean_ctor_set(v___x_1186_, 2, v_next_1143_);
return v___x_1186_;
}
else
{
lean_object* v___x_1187_; uint8_t v___x_1188_; 
v___x_1187_ = lean_array_get_size(v_oa_1134_);
v___x_1188_ = lean_nat_dec_lt(v_oLo_1135_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v___x_1189_ = lean_unsigned_to_nat(1u);
v___x_1190_ = lean_nat_sub(v_oHi_1136_, v___x_1189_);
v___x_1191_ = lean_nat_dec_lt(v___x_1190_, v___x_1187_);
if (v___x_1191_ == 0)
{
lean_dec(v___x_1190_);
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
goto v___jp_1158_;
}
else
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_array_fget_borrowed(v_oa_1134_, v___x_1190_);
lean_dec(v___x_1190_);
if (lean_obj_tag(v___x_1192_) == 0)
{
goto v___jp_1162_;
}
else
{
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
goto v___jp_1158_;
}
}
}
else
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_array_fget(v_oa_1134_, v_oLo_1135_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_unsigned_to_nat(1u);
v___x_1195_ = lean_nat_add(v_oLo_1135_, v___x_1194_);
lean_dec(v_oLo_1135_);
v_oLo_1135_ = v___x_1195_;
goto _start;
}
else
{
lean_object* v_val_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1378_; 
v_val_1197_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1199_ = v___x_1193_;
v_isShared_1200_ = v_isSharedCheck_1378_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_val_1197_);
lean_dec(v___x_1193_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1378_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1228_ = lean_nat_sub(v_oHi_1136_, v___x_1201_);
v___x_1229_ = lean_nat_dec_lt(v___x_1228_, v___x_1187_);
if (v___x_1229_ == 0)
{
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_dec(v_val_1197_);
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
goto v___jp_1158_;
}
else
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_array_fget(v_oa_1134_, v___x_1228_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_dec(v_val_1197_);
goto v___jp_1162_;
}
else
{
lean_object* v_val_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1377_; 
v_val_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1377_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_val_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1377_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = lean_array_get_size(v_na_1137_);
v___x_1236_ = lean_nat_dec_lt(v_nLo_1138_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_del_object(v___x_1233_);
lean_dec(v_val_1231_);
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_dec(v_val_1197_);
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
goto v___jp_1158_;
}
else
{
lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = lean_nat_sub(v_nHi_1139_, v___x_1201_);
v___x_1238_ = lean_nat_dec_lt(v___x_1237_, v___x_1235_);
if (v___x_1238_ == 0)
{
lean_dec(v___x_1237_);
lean_del_object(v___x_1233_);
lean_dec(v_val_1231_);
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_dec(v_val_1197_);
lean_dec(v_keys_1144_);
lean_dec(v_nHi_1139_);
lean_dec(v_nLo_1138_);
lean_dec(v_oHi_1136_);
lean_dec(v_oLo_1135_);
lean_dec_ref(v_oa_1134_);
lean_dec_ref(v_f_1133_);
lean_dec_ref(v_val_1132_);
goto v___jp_1158_;
}
else
{
lean_object* v___x_1239_; lean_object* v_fst_1241_; lean_object* v_fst_1242_; lean_object* v_snd_1243_; lean_object* v___x_1250_; lean_object* v_fst_1252_; lean_object* v___y_1260_; lean_object* v___y_1268_; uint8_t v___x_1272_; 
v___x_1239_ = lean_array_fget_borrowed(v_na_1137_, v_nLo_1138_);
lean_inc_ref(v_val_1132_);
lean_inc(v___x_1239_);
v___x_1250_ = lean_apply_1(v_val_1132_, v___x_1239_);
v___x_1272_ = l_Lasm_UI_Live_same___redArg(v_val_1197_, v___x_1250_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1273_ = lean_array_fget_borrowed(v_na_1137_, v___x_1237_);
lean_inc_ref(v_val_1132_);
lean_inc(v___x_1273_);
v___x_1274_ = lean_apply_1(v_val_1132_, v___x_1273_);
v___x_1275_ = l_Lasm_UI_Live_same___redArg(v_val_1231_, v___x_1274_);
if (v___x_1275_ == 0)
{
uint8_t v___x_1276_; 
v___x_1276_ = l_Lasm_UI_Live_same___redArg(v_val_1197_, v___x_1274_);
lean_dec_ref(v___x_1274_);
if (v___x_1276_ == 0)
{
uint8_t v___x_1277_; 
lean_dec(v___x_1237_);
v___x_1277_ = l_Lasm_UI_Live_same___redArg(v_val_1231_, v___x_1250_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; 
lean_dec(v_val_1231_);
lean_dec(v___x_1228_);
v___x_1278_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_1250_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_del_object(v___x_1233_);
lean_del_object(v___x_1199_);
v_fst_1252_ = v_keys_1144_;
goto v___jp_1251_;
}
else
{
lean_object* v_val_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1318_; 
v_val_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1318_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_val_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1318_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___f_1283_; lean_object* v___x_1284_; lean_object* v___y_1286_; 
v___f_1283_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__0, &l_Lasm_UI_twoEnded___redArg___closed__0_once, _init_l_Lasm_UI_twoEnded___redArg___closed__0);
v___x_1284_ = ((lean_object*)(l_Lasm_UI_twoEnded___redArg___closed__1));
if (lean_obj_tag(v_keys_1144_) == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_1135_);
v___x_1316_ = l_Lasm_UI_keyIndex___redArg(v_oa_1134_, v_oLo_1135_, v_oHi_1136_, v___x_1315_);
v___y_1286_ = v___x_1316_;
goto v___jp_1285_;
}
else
{
lean_object* v_val_1317_; 
v_val_1317_ = lean_ctor_get(v_keys_1144_, 0);
lean_inc(v_val_1317_);
lean_dec_ref_known(v_keys_1144_, 1);
v___y_1286_ = v_val_1317_;
goto v___jp_1285_;
}
v___jp_1285_:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_1283_, v___x_1284_, v___y_1286_, v_val_1279_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v___x_1289_; 
lean_del_object(v___x_1233_);
lean_del_object(v___x_1199_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___y_1286_);
v___x_1289_ = v___x_1281_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___y_1286_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
v_fst_1252_ = v___x_1289_;
goto v___jp_1251_;
}
}
else
{
lean_object* v_val_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1314_; 
lean_del_object(v___x_1281_);
v_val_1291_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1293_ = v___x_1287_;
v_isShared_1294_ = v_isSharedCheck_1314_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_val_1291_);
lean_dec(v___x_1287_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1314_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
uint8_t v___x_1295_; 
v___x_1295_ = lean_nat_dec_le(v_oLo_1135_, v_val_1291_);
if (v___x_1295_ == 0)
{
lean_del_object(v___x_1293_);
lean_dec(v_val_1291_);
lean_del_object(v___x_1199_);
v___y_1268_ = v___y_1286_;
goto v___jp_1267_;
}
else
{
uint8_t v___x_1296_; 
v___x_1296_ = lean_nat_dec_lt(v_val_1291_, v_oHi_1136_);
if (v___x_1296_ == 0)
{
lean_del_object(v___x_1293_);
lean_dec(v_val_1291_);
lean_del_object(v___x_1199_);
v___y_1268_ = v___y_1286_;
goto v___jp_1267_;
}
else
{
uint8_t v___x_1297_; 
lean_del_object(v___x_1233_);
v___x_1297_ = lean_nat_dec_lt(v_val_1291_, v___x_1187_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_del_object(v___x_1293_);
lean_dec(v_val_1291_);
v___x_1298_ = lean_box(0);
v___x_1299_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_1286_, v___x_1298_);
v___y_1260_ = v___x_1299_;
goto v___jp_1259_;
}
else
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_array_fget(v_oa_1134_, v_val_1291_);
if (lean_obj_tag(v___x_1300_) == 1)
{
lean_object* v_val_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1309_; 
lean_del_object(v___x_1293_);
v_val_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_val_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___y_1286_);
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___y_1286_);
v___x_1306_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
uint8_t v___x_1307_; 
v___x_1307_ = l_Lasm_UI_Live_same___redArg(v_val_1301_, v___x_1250_);
if (v___x_1307_ == 0)
{
lean_dec(v_val_1301_);
lean_dec(v_val_1291_);
lean_del_object(v___x_1199_);
v_fst_1252_ = v___x_1306_;
goto v___jp_1251_;
}
else
{
lean_dec_ref(v___x_1250_);
v_fst_1241_ = v___x_1306_;
v_fst_1242_ = v_val_1291_;
v_snd_1243_ = v_val_1301_;
goto v___jp_1240_;
}
}
}
}
else
{
lean_object* v___x_1311_; 
lean_dec(v_val_1291_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1300_);
v___x_1311_ = v___x_1293_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1300_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_1286_, v___x_1311_);
lean_dec_ref(v___x_1311_);
v___y_1260_ = v___x_1312_;
goto v___jp_1259_;
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
else
{
lean_object* v_r_1319_; lean_object* v_ops_1320_; lean_object* v_live_1321_; lean_object* v_next_1322_; lean_object* v___x_1323_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1334_; lean_object* v_id_1336_; 
lean_dec_ref(v___x_1250_);
lean_del_object(v___x_1233_);
lean_del_object(v___x_1199_);
lean_dec(v_oHi_1136_);
lean_inc_ref(v_f_1133_);
lean_inc(v___x_1239_);
lean_inc(v_val_1231_);
v_r_1319_ = lean_apply_3(v_f_1133_, v_val_1231_, v___x_1239_, v_next_1143_);
v_ops_1320_ = lean_ctor_get(v_r_1319_, 0);
lean_inc(v_ops_1320_);
v_live_1321_ = lean_ctor_get(v_r_1319_, 1);
lean_inc_ref(v_live_1321_);
v_next_1322_ = lean_ctor_get(v_r_1319_, 2);
lean_inc(v_next_1322_);
lean_dec_ref(v_r_1319_);
v___x_1323_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1142_, v_ops_1320_);
v_id_1336_ = lean_ctor_get(v_val_1231_, 0);
lean_inc(v_id_1336_);
lean_dec(v_val_1231_);
v___y_1334_ = v_id_1336_;
goto v___jp_1333_;
v___jp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v_ops_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___y_1326_);
v___x_1328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___y_1325_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v_ops_1329_ = lean_array_push(v___x_1323_, v___x_1328_);
v___x_1330_ = lean_nat_add(v_nLo_1138_, v___x_1201_);
lean_dec(v_nLo_1138_);
v___x_1331_ = lean_array_push(v_pre_1140_, v_live_1321_);
v_oHi_1136_ = v___x_1228_;
v_nLo_1138_ = v___x_1330_;
v_pre_1140_ = v___x_1331_;
v_ops_1142_ = v_ops_1329_;
v_next_1143_ = v_next_1322_;
goto _start;
}
v___jp_1333_:
{
lean_object* v_id_1335_; 
v_id_1335_ = lean_ctor_get(v_val_1197_, 0);
lean_inc(v_id_1335_);
lean_dec(v_val_1197_);
v___y_1325_ = v___y_1334_;
v___y_1326_ = v_id_1335_;
goto v___jp_1324_;
}
}
}
else
{
lean_object* v_r_1337_; lean_object* v_ops_1338_; lean_object* v_live_1339_; lean_object* v_next_1340_; lean_object* v___x_1341_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1355_; lean_object* v_id_1360_; 
lean_dec_ref(v___x_1250_);
lean_del_object(v___x_1233_);
lean_dec(v_val_1231_);
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_dec(v_nHi_1139_);
lean_inc_ref(v_f_1133_);
lean_inc(v___x_1273_);
lean_inc(v_val_1197_);
v_r_1337_ = lean_apply_3(v_f_1133_, v_val_1197_, v___x_1273_, v_next_1143_);
v_ops_1338_ = lean_ctor_get(v_r_1337_, 0);
lean_inc(v_ops_1338_);
v_live_1339_ = lean_ctor_get(v_r_1337_, 1);
lean_inc_ref(v_live_1339_);
v_next_1340_ = lean_ctor_get(v_r_1337_, 2);
lean_inc(v_next_1340_);
lean_dec_ref(v_r_1337_);
v___x_1341_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1142_, v_ops_1338_);
v_id_1360_ = lean_ctor_get(v_val_1197_, 0);
lean_inc(v_id_1360_);
lean_dec(v_val_1197_);
v___y_1355_ = v_id_1360_;
goto v___jp_1354_;
v___jp_1342_:
{
lean_object* v___x_1345_; lean_object* v_ops_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___y_1343_);
lean_ctor_set(v___x_1345_, 1, v___y_1344_);
v_ops_1346_ = lean_array_push(v___x_1341_, v___x_1345_);
v___x_1347_ = lean_nat_add(v_oLo_1135_, v___x_1201_);
lean_dec(v_oLo_1135_);
v___x_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1348_, 0, v_live_1339_);
lean_ctor_set(v___x_1348_, 1, v_suf_1141_);
v_oLo_1135_ = v___x_1347_;
v_nHi_1139_ = v___x_1237_;
v_suf_1141_ = v___x_1348_;
v_ops_1142_ = v_ops_1346_;
v_next_1143_ = v_next_1340_;
goto _start;
}
v___jp_1350_:
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___y_1352_);
v___y_1343_ = v___y_1351_;
v___y_1344_ = v___x_1353_;
goto v___jp_1342_;
}
v___jp_1354_:
{
lean_object* v___x_1356_; 
v___x_1356_ = l_List_head_x3f___redArg(v_suf_1141_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_box(0);
v___y_1343_ = v___y_1355_;
v___y_1344_ = v___x_1357_;
goto v___jp_1342_;
}
else
{
lean_object* v_val_1358_; lean_object* v_id_1359_; 
v_val_1358_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_val_1358_);
lean_dec_ref_known(v___x_1356_, 1);
v_id_1359_ = lean_ctor_get(v_val_1358_, 0);
lean_inc(v_id_1359_);
lean_dec(v_val_1358_);
v___y_1351_ = v___y_1355_;
v___y_1352_ = v_id_1359_;
goto v___jp_1350_;
}
}
}
}
else
{
lean_object* v_r_1361_; lean_object* v_ops_1362_; lean_object* v_live_1363_; lean_object* v_next_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec_ref(v___x_1274_);
lean_dec_ref(v___x_1250_);
lean_del_object(v___x_1233_);
lean_del_object(v___x_1199_);
lean_dec(v_val_1197_);
lean_dec(v_nHi_1139_);
lean_dec(v_oHi_1136_);
lean_inc_ref(v_f_1133_);
lean_inc(v___x_1273_);
v_r_1361_ = lean_apply_3(v_f_1133_, v_val_1231_, v___x_1273_, v_next_1143_);
v_ops_1362_ = lean_ctor_get(v_r_1361_, 0);
lean_inc(v_ops_1362_);
v_live_1363_ = lean_ctor_get(v_r_1361_, 1);
lean_inc_ref(v_live_1363_);
v_next_1364_ = lean_ctor_get(v_r_1361_, 2);
lean_inc(v_next_1364_);
lean_dec_ref(v_r_1361_);
v___x_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1365_, 0, v_live_1363_);
lean_ctor_set(v___x_1365_, 1, v_suf_1141_);
v___x_1366_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1142_, v_ops_1362_);
v_oHi_1136_ = v___x_1228_;
v_nHi_1139_ = v___x_1237_;
v_suf_1141_ = v___x_1365_;
v_ops_1142_ = v___x_1366_;
v_next_1143_ = v_next_1364_;
goto _start;
}
}
else
{
lean_object* v_r_1368_; lean_object* v_ops_1369_; lean_object* v_live_1370_; lean_object* v_next_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_dec_ref(v___x_1250_);
lean_dec(v___x_1237_);
lean_del_object(v___x_1233_);
lean_dec(v_val_1231_);
lean_dec(v___x_1228_);
lean_del_object(v___x_1199_);
lean_inc_ref(v_f_1133_);
lean_inc(v___x_1239_);
v_r_1368_ = lean_apply_3(v_f_1133_, v_val_1197_, v___x_1239_, v_next_1143_);
v_ops_1369_ = lean_ctor_get(v_r_1368_, 0);
lean_inc(v_ops_1369_);
v_live_1370_ = lean_ctor_get(v_r_1368_, 1);
lean_inc_ref(v_live_1370_);
v_next_1371_ = lean_ctor_get(v_r_1368_, 2);
lean_inc(v_next_1371_);
lean_dec_ref(v_r_1368_);
v___x_1372_ = lean_nat_add(v_oLo_1135_, v___x_1201_);
lean_dec(v_oLo_1135_);
v___x_1373_ = lean_nat_add(v_nLo_1138_, v___x_1201_);
lean_dec(v_nLo_1138_);
v___x_1374_ = lean_array_push(v_pre_1140_, v_live_1370_);
v___x_1375_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1142_, v_ops_1369_);
v_oLo_1135_ = v___x_1372_;
v_nLo_1138_ = v___x_1373_;
v_pre_1140_ = v___x_1374_;
v_ops_1142_ = v___x_1375_;
v_next_1143_ = v_next_1371_;
goto _start;
}
v___jp_1240_:
{
lean_object* v_r_1244_; lean_object* v_ops_1245_; lean_object* v_live_1246_; lean_object* v_next_1247_; lean_object* v___x_1248_; lean_object* v_id_1249_; 
lean_inc_ref(v_f_1133_);
lean_inc(v___x_1239_);
lean_inc_ref(v_snd_1243_);
v_r_1244_ = lean_apply_3(v_f_1133_, v_snd_1243_, v___x_1239_, v_next_1143_);
v_ops_1245_ = lean_ctor_get(v_r_1244_, 0);
lean_inc(v_ops_1245_);
v_live_1246_ = lean_ctor_get(v_r_1244_, 1);
lean_inc_ref(v_live_1246_);
v_next_1247_ = lean_ctor_get(v_r_1244_, 2);
lean_inc(v_next_1247_);
lean_dec_ref(v_r_1244_);
v___x_1248_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1142_, v_ops_1245_);
v_id_1249_ = lean_ctor_get(v_snd_1243_, 0);
lean_inc(v_id_1249_);
lean_dec_ref(v_snd_1243_);
v___y_1221_ = v___x_1248_;
v___y_1222_ = v_live_1246_;
v___y_1223_ = v_next_1247_;
v___y_1224_ = v_fst_1241_;
v___y_1225_ = v_fst_1242_;
v___y_1226_ = v_id_1249_;
goto v___jp_1220_;
}
v___jp_1251_:
{
lean_object* v_c_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v_id_1258_; 
v_c_1253_ = l_Lasm_UI_create___redArg(v___x_1250_, v_next_1143_);
lean_dec_ref(v___x_1250_);
v_fst_1254_ = lean_ctor_get(v_c_1253_, 0);
lean_inc_n(v_fst_1254_, 2);
v_snd_1255_ = lean_ctor_get(v_c_1253_, 1);
lean_inc(v_snd_1255_);
lean_dec_ref(v_c_1253_);
v___x_1256_ = lean_nat_add(v_nLo_1138_, v___x_1201_);
lean_dec(v_nLo_1138_);
v___x_1257_ = lean_array_push(v_pre_1140_, v_fst_1254_);
v_id_1258_ = lean_ctor_get(v_val_1197_, 0);
lean_inc(v_id_1258_);
lean_dec(v_val_1197_);
v___y_1167_ = v_snd_1255_;
v___y_1168_ = v___x_1256_;
v___y_1169_ = v_fst_1254_;
v___y_1170_ = v___x_1257_;
v___y_1171_ = v_fst_1252_;
v___y_1172_ = v_id_1258_;
goto v___jp_1166_;
}
v___jp_1259_:
{
lean_object* v_snd_1261_; 
v_snd_1261_ = lean_ctor_get(v___y_1260_, 1);
if (lean_obj_tag(v_snd_1261_) == 0)
{
lean_object* v_fst_1262_; 
lean_del_object(v___x_1199_);
v_fst_1262_ = lean_ctor_get(v___y_1260_, 0);
lean_inc(v_fst_1262_);
lean_dec_ref(v___y_1260_);
v_fst_1252_ = v_fst_1262_;
goto v___jp_1251_;
}
else
{
lean_object* v_val_1263_; lean_object* v_fst_1264_; lean_object* v_fst_1265_; lean_object* v_snd_1266_; 
lean_dec_ref(v___x_1250_);
v_val_1263_ = lean_ctor_get(v_snd_1261_, 0);
lean_inc(v_val_1263_);
v_fst_1264_ = lean_ctor_get(v___y_1260_, 0);
lean_inc(v_fst_1264_);
lean_dec_ref(v___y_1260_);
v_fst_1265_ = lean_ctor_get(v_val_1263_, 0);
lean_inc(v_fst_1265_);
v_snd_1266_ = lean_ctor_get(v_val_1263_, 1);
lean_inc(v_snd_1266_);
lean_dec(v_val_1263_);
v_fst_1241_ = v_fst_1264_;
v_fst_1242_ = v_fst_1265_;
v_snd_1243_ = v_snd_1266_;
goto v___jp_1240_;
}
}
v___jp_1267_:
{
lean_object* v___x_1270_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v___y_1268_);
v___x_1270_ = v___x_1233_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___y_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
v_fst_1252_ = v___x_1270_;
goto v___jp_1251_;
}
}
}
}
}
}
}
v___jp_1202_:
{
lean_object* v___x_1211_; 
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 0, v___y_1209_);
v___x_1211_ = v___x_1199_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___y_1209_);
v___x_1211_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; lean_object* v_ops_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___y_1207_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v_ops_1213_ = lean_array_push(v___y_1203_, v___x_1212_);
v___x_1214_ = lean_box(0);
v___x_1215_ = lean_array_set(v_oa_1134_, v___y_1208_, v___x_1214_);
lean_dec(v___y_1208_);
v___x_1216_ = lean_nat_add(v_nLo_1138_, v___x_1201_);
lean_dec(v_nLo_1138_);
v___x_1217_ = lean_array_push(v_pre_1140_, v___y_1205_);
v_oa_1134_ = v___x_1215_;
v_nLo_1138_ = v___x_1216_;
v_pre_1140_ = v___x_1217_;
v_ops_1142_ = v_ops_1213_;
v_next_1143_ = v___y_1204_;
v_keys_1144_ = v___y_1206_;
goto _start;
}
}
v___jp_1220_:
{
lean_object* v_id_1227_; 
v_id_1227_ = lean_ctor_get(v_val_1197_, 0);
lean_inc(v_id_1227_);
lean_dec(v_val_1197_);
v___y_1203_ = v___y_1221_;
v___y_1204_ = v___y_1223_;
v___y_1205_ = v___y_1222_;
v___y_1206_ = v___y_1224_;
v___y_1207_ = v___y_1226_;
v___y_1208_ = v___y_1225_;
v___y_1209_ = v_id_1227_;
goto v___jp_1202_;
}
}
}
}
}
}
v___jp_1145_:
{
lean_object* v_r_1147_; lean_object* v_snd_1148_; lean_object* v_fst_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_r_1147_ = l_Lasm_UI_insertRange___redArg(v_val_1132_, v_na_1137_, v___y_1146_, v_nLo_1138_, v_nHi_1139_, v_next_1143_, v_ops_1142_, v_pre_1140_);
lean_dec(v_nHi_1139_);
v_snd_1148_ = lean_ctor_get(v_r_1147_, 1);
lean_inc(v_snd_1148_);
v_fst_1149_ = lean_ctor_get(v_r_1147_, 0);
lean_inc(v_fst_1149_);
lean_dec_ref(v_r_1147_);
v_fst_1150_ = lean_ctor_get(v_snd_1148_, 0);
lean_inc(v_fst_1150_);
v_snd_1151_ = lean_ctor_get(v_snd_1148_, 1);
lean_inc(v_snd_1151_);
lean_dec(v_snd_1148_);
v___x_1152_ = lean_array_to_list(v_fst_1150_);
v___x_1153_ = l_List_appendTR___redArg(v___x_1152_, v_suf_1141_);
v___x_1154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1154_, 0, v_fst_1149_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
lean_ctor_set(v___x_1154_, 2, v_snd_1151_);
return v___x_1154_;
}
v___jp_1155_:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___y_1156_);
v___y_1146_ = v___x_1157_;
goto v___jp_1145_;
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_array_to_list(v_pre_1140_);
v___x_1160_ = l_List_appendTR___redArg(v___x_1159_, v_suf_1141_);
v___x_1161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1161_, 0, v_ops_1142_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
lean_ctor_set(v___x_1161_, 2, v_next_1143_);
return v___x_1161_;
}
v___jp_1162_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_nat_sub(v_oHi_1136_, v___x_1163_);
lean_dec(v_oHi_1136_);
v_oHi_1136_ = v___x_1164_;
goto _start;
}
v___jp_1166_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1173_, 0, v___y_1172_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___y_1169_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = lean_array_push(v_ops_1142_, v___x_1174_);
v_nLo_1138_ = v___y_1168_;
v_pre_1140_ = v___y_1170_;
v_ops_1142_ = v___x_1175_;
v_next_1143_ = v___y_1167_;
v_keys_1144_ = v___y_1171_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object* v_val_1379_, lean_object* v_f_1380_, lean_object* v_oa_1381_, lean_object* v_oLo_1382_, lean_object* v_oHi_1383_, lean_object* v_na_1384_, lean_object* v_nLo_1385_, lean_object* v_nHi_1386_, lean_object* v_pre_1387_, lean_object* v_suf_1388_, lean_object* v_ops_1389_, lean_object* v_next_1390_, lean_object* v_keys_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Lasm_UI_twoEnded___redArg(v_val_1379_, v_f_1380_, v_oa_1381_, v_oLo_1382_, v_oHi_1383_, v_na_1384_, v_nLo_1385_, v_nHi_1386_, v_pre_1387_, v_suf_1388_, v_ops_1389_, v_next_1390_, v_keys_1391_);
lean_dec_ref(v_na_1384_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object* v_Msg_1393_, lean_object* v_00_u03b2_1394_, lean_object* v_val_1395_, lean_object* v_f_1396_, lean_object* v_oa_1397_, lean_object* v_oLo_1398_, lean_object* v_oHi_1399_, lean_object* v_na_1400_, lean_object* v_nLo_1401_, lean_object* v_nHi_1402_, lean_object* v_pre_1403_, lean_object* v_suf_1404_, lean_object* v_ops_1405_, lean_object* v_next_1406_, lean_object* v_keys_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = l_Lasm_UI_twoEnded___redArg(v_val_1395_, v_f_1396_, v_oa_1397_, v_oLo_1398_, v_oHi_1399_, v_na_1400_, v_nLo_1401_, v_nHi_1402_, v_pre_1403_, v_suf_1404_, v_ops_1405_, v_next_1406_, v_keys_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object* v_Msg_1409_, lean_object* v_00_u03b2_1410_, lean_object* v_val_1411_, lean_object* v_f_1412_, lean_object* v_oa_1413_, lean_object* v_oLo_1414_, lean_object* v_oHi_1415_, lean_object* v_na_1416_, lean_object* v_nLo_1417_, lean_object* v_nHi_1418_, lean_object* v_pre_1419_, lean_object* v_suf_1420_, lean_object* v_ops_1421_, lean_object* v_next_1422_, lean_object* v_keys_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lasm_UI_twoEnded(v_Msg_1409_, v_00_u03b2_1410_, v_val_1411_, v_f_1412_, v_oa_1413_, v_oLo_1414_, v_oHi_1415_, v_na_1416_, v_nLo_1417_, v_nHi_1418_, v_pre_1419_, v_suf_1420_, v_ops_1421_, v_next_1422_, v_keys_1423_);
lean_dec_ref(v_na_1416_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter___redArg(lean_object* v_x_1425_, lean_object* v_x_1426_, lean_object* v_x_1427_, lean_object* v_x_1428_, lean_object* v_h__1_1429_, lean_object* v_h__2_1430_, lean_object* v_h__3_1431_, lean_object* v_h__4_1432_){
_start:
{
if (lean_obj_tag(v_x_1425_) == 1)
{
lean_object* v_val_1433_; 
v_val_1433_ = lean_ctor_get(v_x_1425_, 0);
if (lean_obj_tag(v_val_1433_) == 0)
{
lean_object* v___x_1434_; 
lean_dec_ref_known(v_x_1425_, 1);
lean_dec(v_h__4_1432_);
lean_dec(v_h__3_1431_);
lean_dec(v_h__2_1430_);
v___x_1434_ = lean_apply_3(v_h__1_1429_, v_x_1426_, v_x_1427_, v_x_1428_);
return v___x_1434_;
}
else
{
lean_dec(v_h__1_1429_);
if (lean_obj_tag(v_x_1426_) == 1)
{
lean_object* v_val_1435_; 
v_val_1435_ = lean_ctor_get(v_x_1426_, 0);
if (lean_obj_tag(v_val_1435_) == 0)
{
lean_object* v___x_1436_; 
lean_dec_ref_known(v_x_1426_, 1);
lean_dec(v_h__4_1432_);
lean_dec(v_h__3_1431_);
v___x_1436_ = lean_apply_4(v_h__2_1430_, v_x_1425_, v_x_1427_, v_x_1428_, lean_box(0));
return v___x_1436_;
}
else
{
lean_dec(v_h__2_1430_);
if (lean_obj_tag(v_x_1427_) == 1)
{
if (lean_obj_tag(v_x_1428_) == 1)
{
lean_object* v_val_1437_; lean_object* v_val_1438_; lean_object* v_val_1439_; lean_object* v_val_1440_; lean_object* v___x_1441_; 
lean_inc_ref(v_val_1435_);
lean_inc_ref(v_val_1433_);
lean_dec_ref_known(v_x_1426_, 1);
lean_dec_ref_known(v_x_1425_, 1);
lean_dec(v_h__4_1432_);
v_val_1437_ = lean_ctor_get(v_val_1433_, 0);
lean_inc(v_val_1437_);
lean_dec_ref_known(v_val_1433_, 1);
v_val_1438_ = lean_ctor_get(v_val_1435_, 0);
lean_inc(v_val_1438_);
lean_dec_ref_known(v_val_1435_, 1);
v_val_1439_ = lean_ctor_get(v_x_1427_, 0);
lean_inc(v_val_1439_);
lean_dec_ref_known(v_x_1427_, 1);
v_val_1440_ = lean_ctor_get(v_x_1428_, 0);
lean_inc(v_val_1440_);
lean_dec_ref_known(v_x_1428_, 1);
v___x_1441_ = lean_apply_4(v_h__3_1431_, v_val_1437_, v_val_1438_, v_val_1439_, v_val_1440_);
return v___x_1441_;
}
else
{
lean_object* v___x_1442_; 
lean_dec(v_h__3_1431_);
v___x_1442_ = lean_apply_7(v_h__4_1432_, v_x_1425_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1442_;
}
}
else
{
lean_object* v___x_1443_; 
lean_dec(v_h__3_1431_);
v___x_1443_ = lean_apply_7(v_h__4_1432_, v_x_1425_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1443_;
}
}
}
else
{
lean_object* v___x_1444_; 
lean_dec(v_h__3_1431_);
lean_dec(v_h__2_1430_);
v___x_1444_ = lean_apply_7(v_h__4_1432_, v_x_1425_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1444_;
}
}
}
else
{
lean_dec(v_h__3_1431_);
lean_dec(v_h__1_1429_);
if (lean_obj_tag(v_x_1426_) == 1)
{
lean_object* v_val_1445_; 
v_val_1445_ = lean_ctor_get(v_x_1426_, 0);
if (lean_obj_tag(v_val_1445_) == 0)
{
lean_object* v___x_1446_; 
lean_dec_ref_known(v_x_1426_, 1);
lean_dec(v_h__4_1432_);
v___x_1446_ = lean_apply_4(v_h__2_1430_, v_x_1425_, v_x_1427_, v_x_1428_, lean_box(0));
return v___x_1446_;
}
else
{
lean_object* v___x_1447_; 
lean_dec(v_h__2_1430_);
v___x_1447_ = lean_apply_7(v_h__4_1432_, v_x_1425_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1447_;
}
}
else
{
lean_object* v___x_1448_; 
lean_dec(v_h__2_1430_);
v___x_1448_ = lean_apply_7(v_h__4_1432_, v_x_1425_, v_x_1426_, v_x_1427_, v_x_1428_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1448_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter(lean_object* v_Msg_1449_, lean_object* v_00_u03b2_1450_, lean_object* v_motive_1451_, lean_object* v_x_1452_, lean_object* v_x_1453_, lean_object* v_x_1454_, lean_object* v_x_1455_, lean_object* v_h__1_1456_, lean_object* v_h__2_1457_, lean_object* v_h__3_1458_, lean_object* v_h__4_1459_){
_start:
{
if (lean_obj_tag(v_x_1452_) == 1)
{
lean_object* v_val_1460_; 
v_val_1460_ = lean_ctor_get(v_x_1452_, 0);
if (lean_obj_tag(v_val_1460_) == 0)
{
lean_object* v___x_1461_; 
lean_dec_ref_known(v_x_1452_, 1);
lean_dec(v_h__4_1459_);
lean_dec(v_h__3_1458_);
lean_dec(v_h__2_1457_);
v___x_1461_ = lean_apply_3(v_h__1_1456_, v_x_1453_, v_x_1454_, v_x_1455_);
return v___x_1461_;
}
else
{
lean_dec(v_h__1_1456_);
if (lean_obj_tag(v_x_1453_) == 1)
{
lean_object* v_val_1462_; 
v_val_1462_ = lean_ctor_get(v_x_1453_, 0);
if (lean_obj_tag(v_val_1462_) == 0)
{
lean_object* v___x_1463_; 
lean_dec_ref_known(v_x_1453_, 1);
lean_dec(v_h__4_1459_);
lean_dec(v_h__3_1458_);
v___x_1463_ = lean_apply_4(v_h__2_1457_, v_x_1452_, v_x_1454_, v_x_1455_, lean_box(0));
return v___x_1463_;
}
else
{
lean_dec(v_h__2_1457_);
if (lean_obj_tag(v_x_1454_) == 1)
{
if (lean_obj_tag(v_x_1455_) == 1)
{
lean_object* v_val_1464_; lean_object* v_val_1465_; lean_object* v_val_1466_; lean_object* v_val_1467_; lean_object* v___x_1468_; 
lean_inc_ref(v_val_1462_);
lean_inc_ref(v_val_1460_);
lean_dec_ref_known(v_x_1453_, 1);
lean_dec_ref_known(v_x_1452_, 1);
lean_dec(v_h__4_1459_);
v_val_1464_ = lean_ctor_get(v_val_1460_, 0);
lean_inc(v_val_1464_);
lean_dec_ref_known(v_val_1460_, 1);
v_val_1465_ = lean_ctor_get(v_val_1462_, 0);
lean_inc(v_val_1465_);
lean_dec_ref_known(v_val_1462_, 1);
v_val_1466_ = lean_ctor_get(v_x_1454_, 0);
lean_inc(v_val_1466_);
lean_dec_ref_known(v_x_1454_, 1);
v_val_1467_ = lean_ctor_get(v_x_1455_, 0);
lean_inc(v_val_1467_);
lean_dec_ref_known(v_x_1455_, 1);
v___x_1468_ = lean_apply_4(v_h__3_1458_, v_val_1464_, v_val_1465_, v_val_1466_, v_val_1467_);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; 
lean_dec(v_h__3_1458_);
v___x_1469_ = lean_apply_7(v_h__4_1459_, v_x_1452_, v_x_1453_, v_x_1454_, v_x_1455_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1469_;
}
}
else
{
lean_object* v___x_1470_; 
lean_dec(v_h__3_1458_);
v___x_1470_ = lean_apply_7(v_h__4_1459_, v_x_1452_, v_x_1453_, v_x_1454_, v_x_1455_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1470_;
}
}
}
else
{
lean_object* v___x_1471_; 
lean_dec(v_h__3_1458_);
lean_dec(v_h__2_1457_);
v___x_1471_ = lean_apply_7(v_h__4_1459_, v_x_1452_, v_x_1453_, v_x_1454_, v_x_1455_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1471_;
}
}
}
else
{
lean_dec(v_h__3_1458_);
lean_dec(v_h__1_1456_);
if (lean_obj_tag(v_x_1453_) == 1)
{
lean_object* v_val_1472_; 
v_val_1472_ = lean_ctor_get(v_x_1453_, 0);
if (lean_obj_tag(v_val_1472_) == 0)
{
lean_object* v___x_1473_; 
lean_dec_ref_known(v_x_1453_, 1);
lean_dec(v_h__4_1459_);
v___x_1473_ = lean_apply_4(v_h__2_1457_, v_x_1452_, v_x_1454_, v_x_1455_, lean_box(0));
return v___x_1473_;
}
else
{
lean_object* v___x_1474_; 
lean_dec(v_h__2_1457_);
v___x_1474_ = lean_apply_7(v_h__4_1459_, v_x_1452_, v_x_1453_, v_x_1454_, v_x_1455_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1474_;
}
}
else
{
lean_object* v___x_1475_; 
lean_dec(v_h__2_1457_);
v___x_1475_ = lean_apply_7(v_h__4_1459_, v_x_1452_, v_x_1453_, v_x_1454_, v_x_1455_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1475_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter___redArg(lean_object* v_x_1476_, lean_object* v_h__1_1477_, lean_object* v_h__2_1478_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
lean_dec(v_h__2_1478_);
v___x_1479_ = lean_box(0);
v___x_1480_ = lean_apply_1(v_h__1_1477_, v___x_1479_);
return v___x_1480_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1482_; 
lean_dec(v_h__1_1477_);
v_val_1481_ = lean_ctor_get(v_x_1476_, 0);
lean_inc(v_val_1481_);
lean_dec_ref_known(v_x_1476_, 1);
v___x_1482_ = lean_apply_1(v_h__2_1478_, v_val_1481_);
return v___x_1482_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter(lean_object* v_motive_1483_, lean_object* v_x_1484_, lean_object* v_h__1_1485_, lean_object* v_h__2_1486_){
_start:
{
if (lean_obj_tag(v_x_1484_) == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_dec(v_h__2_1486_);
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_apply_1(v_h__1_1485_, v___x_1487_);
return v___x_1488_;
}
else
{
lean_object* v_val_1489_; lean_object* v___x_1490_; 
lean_dec(v_h__1_1485_);
v_val_1489_ = lean_ctor_get(v_x_1484_, 0);
lean_inc(v_val_1489_);
lean_dec_ref_known(v_x_1484_, 1);
v___x_1490_ = lean_apply_1(v_h__2_1486_, v_val_1489_);
return v___x_1490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter___redArg(lean_object* v_x_1491_, lean_object* v_h__1_1492_, lean_object* v_h__2_1493_){
_start:
{
if (lean_obj_tag(v_x_1491_) == 0)
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec(v_h__1_1492_);
v___x_1494_ = lean_box(0);
v___x_1495_ = lean_apply_1(v_h__2_1493_, v___x_1494_);
return v___x_1495_;
}
else
{
lean_object* v_val_1496_; lean_object* v___x_1497_; 
lean_dec(v_h__2_1493_);
v_val_1496_ = lean_ctor_get(v_x_1491_, 0);
lean_inc(v_val_1496_);
lean_dec_ref_known(v_x_1491_, 1);
v___x_1497_ = lean_apply_1(v_h__1_1492_, v_val_1496_);
return v___x_1497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter(lean_object* v_motive_1498_, lean_object* v_x_1499_, lean_object* v_h__1_1500_, lean_object* v_h__2_1501_){
_start:
{
if (lean_obj_tag(v_x_1499_) == 0)
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
lean_dec(v_h__1_1500_);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_apply_1(v_h__2_1501_, v___x_1502_);
return v___x_1503_;
}
else
{
lean_object* v_val_1504_; lean_object* v___x_1505_; 
lean_dec(v_h__2_1501_);
v_val_1504_ = lean_ctor_get(v_x_1499_, 0);
lean_inc(v_val_1504_);
lean_dec_ref_known(v_x_1499_, 1);
v___x_1505_ = lean_apply_1(v_h__1_1500_, v_val_1504_);
return v___x_1505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter___redArg(lean_object* v_x_1506_, lean_object* v_h__1_1507_){
_start:
{
lean_object* v_fst_1508_; lean_object* v_snd_1509_; lean_object* v___x_1510_; 
v_fst_1508_ = lean_ctor_get(v_x_1506_, 0);
lean_inc(v_fst_1508_);
v_snd_1509_ = lean_ctor_get(v_x_1506_, 1);
lean_inc(v_snd_1509_);
lean_dec_ref(v_x_1506_);
v___x_1510_ = lean_apply_2(v_h__1_1507_, v_fst_1508_, v_snd_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter(lean_object* v_Msg_1511_, lean_object* v_motive_1512_, lean_object* v_x_1513_, lean_object* v_h__1_1514_){
_start:
{
lean_object* v_fst_1515_; lean_object* v_snd_1516_; lean_object* v___x_1517_; 
v_fst_1515_ = lean_ctor_get(v_x_1513_, 0);
lean_inc(v_fst_1515_);
v_snd_1516_ = lean_ctor_get(v_x_1513_, 1);
lean_inc(v_snd_1516_);
lean_dec_ref(v_x_1513_);
v___x_1517_ = lean_apply_2(v_h__1_1514_, v_fst_1515_, v_snd_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter___redArg(lean_object* v_found_1518_, lean_object* v_h__1_1519_, lean_object* v_h__2_1520_){
_start:
{
if (lean_obj_tag(v_found_1518_) == 0)
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec(v_h__1_1519_);
v___x_1521_ = lean_box(0);
v___x_1522_ = lean_apply_1(v_h__2_1520_, v___x_1521_);
return v___x_1522_;
}
else
{
lean_object* v_val_1523_; lean_object* v_fst_1524_; lean_object* v_snd_1525_; lean_object* v___x_1526_; 
lean_dec(v_h__2_1520_);
v_val_1523_ = lean_ctor_get(v_found_1518_, 0);
lean_inc(v_val_1523_);
lean_dec_ref_known(v_found_1518_, 1);
v_fst_1524_ = lean_ctor_get(v_val_1523_, 0);
lean_inc(v_fst_1524_);
v_snd_1525_ = lean_ctor_get(v_val_1523_, 1);
lean_inc(v_snd_1525_);
lean_dec(v_val_1523_);
v___x_1526_ = lean_apply_2(v_h__1_1519_, v_fst_1524_, v_snd_1525_);
return v___x_1526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter(lean_object* v_Msg_1527_, lean_object* v_motive_1528_, lean_object* v_found_1529_, lean_object* v_h__1_1530_, lean_object* v_h__2_1531_){
_start:
{
if (lean_obj_tag(v_found_1529_) == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec(v_h__1_1530_);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_apply_1(v_h__2_1531_, v___x_1532_);
return v___x_1533_;
}
else
{
lean_object* v_val_1534_; lean_object* v_fst_1535_; lean_object* v_snd_1536_; lean_object* v___x_1537_; 
lean_dec(v_h__2_1531_);
v_val_1534_ = lean_ctor_get(v_found_1529_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v_found_1529_, 1);
v_fst_1535_ = lean_ctor_get(v_val_1534_, 0);
lean_inc(v_fst_1535_);
v_snd_1536_ = lean_ctor_get(v_val_1534_, 1);
lean_inc(v_snd_1536_);
lean_dec(v_val_1534_);
v___x_1537_ = lean_apply_2(v_h__1_1530_, v_fst_1535_, v_snd_1536_);
return v___x_1537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg___lam__0(lean_object* v_val_1538_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_val_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object* v_val_1541_, lean_object* v_f_1542_, lean_object* v_x_1543_, lean_object* v_x_1544_, lean_object* v_x_1545_, lean_object* v_x_1546_, lean_object* v_x_1547_){
_start:
{
if (lean_obj_tag(v_x_1543_) == 0)
{
lean_object* v___x_1548_; lean_object* v_r_1549_; lean_object* v_snd_1550_; lean_object* v_fst_1551_; lean_object* v_fst_1552_; lean_object* v_snd_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
lean_dec_ref(v_f_1542_);
v___x_1548_ = lean_box(0);
v_r_1549_ = l_Lasm_UI_insertAll___redArg(v_val_1541_, v___x_1548_, v_x_1544_, v_x_1545_, v_x_1546_, v_x_1547_);
v_snd_1550_ = lean_ctor_get(v_r_1549_, 1);
lean_inc(v_snd_1550_);
v_fst_1551_ = lean_ctor_get(v_r_1549_, 0);
lean_inc(v_fst_1551_);
lean_dec_ref(v_r_1549_);
v_fst_1552_ = lean_ctor_get(v_snd_1550_, 0);
lean_inc(v_fst_1552_);
v_snd_1553_ = lean_ctor_get(v_snd_1550_, 1);
lean_inc(v_snd_1553_);
lean_dec(v_snd_1550_);
v___x_1554_ = lean_array_to_list(v_fst_1552_);
v___x_1555_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1555_, 0, v_fst_1551_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
lean_ctor_set(v___x_1555_, 2, v_snd_1553_);
return v___x_1555_;
}
else
{
if (lean_obj_tag(v_x_1544_) == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec_ref(v_f_1542_);
lean_dec_ref(v_val_1541_);
v___x_1556_ = l_Lasm_UI_removeAll___redArg(v_x_1543_, v_x_1546_);
v___x_1557_ = lean_array_to_list(v_x_1547_);
v___x_1558_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1556_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
lean_ctor_set(v___x_1558_, 2, v_x_1545_);
return v___x_1558_;
}
else
{
lean_object* v_head_1559_; lean_object* v_tail_1560_; lean_object* v_head_1561_; lean_object* v_tail_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_head_1559_ = lean_ctor_get(v_x_1543_, 0);
v_tail_1560_ = lean_ctor_get(v_x_1543_, 1);
v_head_1561_ = lean_ctor_get(v_x_1544_, 0);
v_tail_1562_ = lean_ctor_get(v_x_1544_, 1);
lean_inc_ref(v_val_1541_);
lean_inc(v_head_1561_);
v___x_1563_ = lean_apply_1(v_val_1541_, v_head_1561_);
v___x_1564_ = l_Lasm_UI_Live_same___redArg(v_head_1559_, v___x_1563_);
lean_dec_ref(v___x_1563_);
if (v___x_1564_ == 0)
{
lean_object* v___f_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v_oa_1568_; lean_object* v_na_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___f_1565_ = ((lean_object*)(l_Lasm_UI_prefixPhase___redArg___closed__0));
v___x_1566_ = lean_box(0);
v___x_1567_ = l_List_mapTR_loop___redArg(v___f_1565_, v_x_1543_, v___x_1566_);
v_oa_1568_ = lean_array_mk(v___x_1567_);
v_na_1569_ = lean_array_mk(v_x_1544_);
v___x_1570_ = lean_unsigned_to_nat(0u);
v___x_1571_ = lean_array_get_size(v_oa_1568_);
v___x_1572_ = lean_array_get_size(v_na_1569_);
v___x_1573_ = lean_box(0);
v___x_1574_ = l_Lasm_UI_twoEnded___redArg(v_val_1541_, v_f_1542_, v_oa_1568_, v___x_1570_, v___x_1571_, v_na_1569_, v___x_1570_, v___x_1572_, v_x_1547_, v___x_1566_, v_x_1546_, v_x_1545_, v___x_1573_);
lean_dec_ref(v_na_1569_);
return v___x_1574_;
}
else
{
lean_object* v_r_1575_; lean_object* v_ops_1576_; lean_object* v_live_1577_; lean_object* v_next_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
lean_inc(v_tail_1562_);
lean_inc(v_head_1561_);
lean_inc(v_tail_1560_);
lean_inc(v_head_1559_);
lean_dec_ref_known(v_x_1544_, 2);
lean_dec_ref_known(v_x_1543_, 2);
lean_inc_ref(v_f_1542_);
v_r_1575_ = lean_apply_3(v_f_1542_, v_head_1559_, v_head_1561_, v_x_1545_);
v_ops_1576_ = lean_ctor_get(v_r_1575_, 0);
lean_inc(v_ops_1576_);
v_live_1577_ = lean_ctor_get(v_r_1575_, 1);
lean_inc_ref(v_live_1577_);
v_next_1578_ = lean_ctor_get(v_r_1575_, 2);
lean_inc(v_next_1578_);
lean_dec_ref(v_r_1575_);
v___x_1579_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_1546_, v_ops_1576_);
v___x_1580_ = lean_array_push(v_x_1547_, v_live_1577_);
v_x_1543_ = v_tail_1560_;
v_x_1544_ = v_tail_1562_;
v_x_1545_ = v_next_1578_;
v_x_1546_ = v___x_1579_;
v_x_1547_ = v___x_1580_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object* v_Msg_1582_, lean_object* v_00_u03b2_1583_, lean_object* v_val_1584_, lean_object* v_f_1585_, lean_object* v_x_1586_, lean_object* v_x_1587_, lean_object* v_x_1588_, lean_object* v_x_1589_, lean_object* v_x_1590_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lasm_UI_prefixPhase___redArg(v_val_1584_, v_f_1585_, v_x_1586_, v_x_1587_, v_x_1588_, v_x_1589_, v_x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object* v_val_1598_, lean_object* v_f_1599_, lean_object* v_old_1600_, lean_object* v_new_1601_, lean_object* v_next_1602_){
_start:
{
lean_object* v_old_1604_; lean_object* v_new_1605_; 
if (lean_obj_tag(v_old_1600_) == 0)
{
if (lean_obj_tag(v_new_1601_) == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_dec_ref(v_f_1599_);
lean_dec_ref(v_val_1598_);
v___x_1610_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1611_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
lean_ctor_set(v___x_1611_, 1, v_old_1600_);
lean_ctor_set(v___x_1611_, 2, v_next_1602_);
return v___x_1611_;
}
else
{
v_old_1604_ = v_old_1600_;
v_new_1605_ = v_new_1601_;
goto v___jp_1603_;
}
}
else
{
if (lean_obj_tag(v_new_1601_) == 0)
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
lean_dec_ref_known(v_old_1600_, 2);
lean_dec_ref(v_f_1599_);
lean_dec_ref(v_val_1598_);
v___x_1612_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_1613_ = lean_box(0);
v___x_1614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
lean_ctor_set(v___x_1614_, 2, v_next_1602_);
return v___x_1614_;
}
else
{
lean_object* v_tail_1615_; 
v_tail_1615_ = lean_ctor_get(v_new_1601_, 1);
if (lean_obj_tag(v_tail_1615_) == 0)
{
lean_object* v_tail_1616_; 
v_tail_1616_ = lean_ctor_get(v_old_1600_, 1);
if (lean_obj_tag(v_tail_1616_) == 0)
{
lean_object* v_head_1617_; lean_object* v_head_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; 
v_head_1617_ = lean_ctor_get(v_old_1600_, 0);
v_head_1618_ = lean_ctor_get(v_new_1601_, 0);
lean_inc_ref(v_val_1598_);
lean_inc(v_head_1618_);
v___x_1619_ = lean_apply_1(v_val_1598_, v_head_1618_);
v___x_1620_ = l_Lasm_UI_Live_same___redArg(v_head_1617_, v___x_1619_);
lean_dec_ref(v___x_1619_);
if (v___x_1620_ == 0)
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1621_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1622_ = lean_unsigned_to_nat(1u);
v___x_1623_ = lean_mk_empty_array_with_capacity(v___x_1622_);
v___x_1624_ = l_Lasm_UI_prefixPhase___redArg(v_val_1598_, v_f_1599_, v_old_1600_, v_new_1601_, v_next_1602_, v___x_1621_, v___x_1623_);
return v___x_1624_;
}
else
{
lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1647_; 
lean_inc(v_head_1618_);
lean_inc(v_head_1617_);
lean_inc(v_tail_1616_);
lean_dec_ref_known(v_old_1600_, 2);
lean_dec_ref(v_val_1598_);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_new_1601_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; lean_object* v_unused_1649_; 
v_unused_1648_ = lean_ctor_get(v_new_1601_, 1);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v_new_1601_, 0);
lean_dec(v_unused_1649_);
v___x_1626_ = v_new_1601_;
v_isShared_1627_ = v_isSharedCheck_1647_;
goto v_resetjp_1625_;
}
else
{
lean_dec(v_new_1601_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1647_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v_r_1628_; lean_object* v_ops_1629_; lean_object* v_live_1630_; lean_object* v_next_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1646_; 
v_r_1628_ = lean_apply_3(v_f_1599_, v_head_1617_, v_head_1618_, v_next_1602_);
v_ops_1629_ = lean_ctor_get(v_r_1628_, 0);
v_live_1630_ = lean_ctor_get(v_r_1628_, 1);
v_next_1631_ = lean_ctor_get(v_r_1628_, 2);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_r_1628_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1633_ = v_r_1628_;
v_isShared_1634_ = v_isSharedCheck_1646_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_next_1631_);
lean_inc(v_live_1630_);
lean_inc(v_ops_1629_);
lean_dec(v_r_1628_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1646_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___y_1636_; uint8_t v___x_1643_; 
v___x_1643_ = l_List_isEmpty___redArg(v_ops_1629_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_array_mk(v_ops_1629_);
v___y_1636_ = v___x_1644_;
goto v___jp_1635_;
}
else
{
lean_object* v___x_1645_; 
lean_dec(v_ops_1629_);
v___x_1645_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___y_1636_ = v___x_1645_;
goto v___jp_1635_;
}
v___jp_1635_:
{
lean_object* v___x_1638_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 1, v_tail_1616_);
lean_ctor_set(v___x_1626_, 0, v_live_1630_);
v___x_1638_ = v___x_1626_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_live_1630_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_tail_1616_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 1, v___x_1638_);
lean_ctor_set(v___x_1633_, 0, v___y_1636_);
v___x_1640_ = v___x_1633_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___y_1636_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v___x_1638_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_next_1631_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
}
}
else
{
v_old_1604_ = v_old_1600_;
v_new_1605_ = v_new_1601_;
goto v___jp_1603_;
}
}
else
{
v_old_1604_ = v_old_1600_;
v_new_1605_ = v_new_1601_;
goto v___jp_1603_;
}
}
}
v___jp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1606_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1607_ = l_List_lengthTR___redArg(v_new_1605_);
v___x_1608_ = lean_mk_empty_array_with_capacity(v___x_1607_);
lean_dec(v___x_1607_);
v___x_1609_ = l_Lasm_UI_prefixPhase___redArg(v_val_1598_, v_f_1599_, v_old_1604_, v_new_1605_, v_next_1602_, v___x_1606_, v___x_1608_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object* v_Msg_1650_, lean_object* v_00_u03b2_1651_, lean_object* v_val_1652_, lean_object* v_f_1653_, lean_object* v_old_1654_, lean_object* v_new_1655_, lean_object* v_next_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_Lasm_UI_diffChildren___redArg(v_val_1652_, v_f_1653_, v_old_1654_, v_new_1655_, v_next_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(lean_object* v_a_1658_, lean_object* v_a_1659_){
_start:
{
if (lean_obj_tag(v_a_1658_) == 0)
{
lean_object* v___x_1660_; 
v___x_1660_ = l_List_reverse___redArg(v_a_1659_);
return v___x_1660_;
}
else
{
lean_object* v_head_1661_; lean_object* v_tail_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1671_; 
v_head_1661_ = lean_ctor_get(v_a_1658_, 0);
v_tail_1662_ = lean_ctor_get(v_a_1658_, 1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_a_1658_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1664_ = v_a_1658_;
v_isShared_1665_ = v_isSharedCheck_1671_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_tail_1662_);
lean_inc(v_head_1661_);
lean_dec(v_a_1658_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1671_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
v___x_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_head_1661_);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 1, v_a_1659_);
lean_ctor_set(v___x_1664_, 0, v___x_1666_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1666_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_a_1659_);
v___x_1668_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
v_a_1658_ = v_tail_1662_;
v_a_1659_ = v___x_1668_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(lean_object* v_a_1672_, lean_object* v_x_1673_){
_start:
{
if (lean_obj_tag(v_x_1673_) == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_box(0);
return v___x_1674_;
}
else
{
lean_object* v_key_1675_; lean_object* v_value_1676_; lean_object* v_tail_1677_; uint8_t v___x_1678_; 
v_key_1675_ = lean_ctor_get(v_x_1673_, 0);
v_value_1676_ = lean_ctor_get(v_x_1673_, 1);
v_tail_1677_ = lean_ctor_get(v_x_1673_, 2);
v___x_1678_ = lean_string_dec_eq(v_key_1675_, v_a_1672_);
if (v___x_1678_ == 0)
{
v_x_1673_ = v_tail_1677_;
goto _start;
}
else
{
lean_object* v___x_1680_; 
lean_inc(v_value_1676_);
v___x_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1680_, 0, v_value_1676_);
return v___x_1680_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_a_1681_, lean_object* v_x_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_1681_, v_x_1682_);
lean_dec(v_x_1682_);
lean_dec_ref(v_a_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(lean_object* v_m_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_buckets_1686_; lean_object* v___x_1687_; uint64_t v___x_1688_; uint64_t v___x_1689_; uint64_t v___x_1690_; uint64_t v_fold_1691_; uint64_t v___x_1692_; uint64_t v___x_1693_; uint64_t v___x_1694_; size_t v___x_1695_; size_t v___x_1696_; size_t v___x_1697_; size_t v___x_1698_; size_t v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v_buckets_1686_ = lean_ctor_get(v_m_1684_, 1);
v___x_1687_ = lean_array_get_size(v_buckets_1686_);
v___x_1688_ = lean_string_hash(v_a_1685_);
v___x_1689_ = 32ULL;
v___x_1690_ = lean_uint64_shift_right(v___x_1688_, v___x_1689_);
v_fold_1691_ = lean_uint64_xor(v___x_1688_, v___x_1690_);
v___x_1692_ = 16ULL;
v___x_1693_ = lean_uint64_shift_right(v_fold_1691_, v___x_1692_);
v___x_1694_ = lean_uint64_xor(v_fold_1691_, v___x_1693_);
v___x_1695_ = lean_uint64_to_usize(v___x_1694_);
v___x_1696_ = lean_usize_of_nat(v___x_1687_);
v___x_1697_ = ((size_t)1ULL);
v___x_1698_ = lean_usize_sub(v___x_1696_, v___x_1697_);
v___x_1699_ = lean_usize_land(v___x_1695_, v___x_1698_);
v___x_1700_ = lean_array_uget_borrowed(v_buckets_1686_, v___x_1699_);
v___x_1701_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_1685_, v___x_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_m_1702_, lean_object* v_a_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_m_1702_, v_a_1703_);
lean_dec_ref(v_a_1703_);
lean_dec_ref(v_m_1702_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_na_1705_, lean_object* v_before_1706_, lean_object* v_lo_1707_, lean_object* v_hi_1708_, lean_object* v_n_1709_, lean_object* v_ops_1710_, lean_object* v_acc_1711_){
_start:
{
uint8_t v___x_1712_; 
v___x_1712_ = lean_nat_dec_lt(v_lo_1707_, v_hi_1708_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
lean_dec(v_lo_1707_);
lean_dec(v_before_1706_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_acc_1711_);
lean_ctor_set(v___x_1713_, 1, v_n_1709_);
v___x_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1714_, 0, v_ops_1710_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
return v___x_1714_;
}
else
{
lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1715_ = lean_array_get_size(v_na_1705_);
v___x_1716_ = lean_nat_dec_lt(v_lo_1707_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_lo_1707_);
lean_dec(v_before_1706_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v_acc_1711_);
lean_ctor_set(v___x_1717_, 1, v_n_1709_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_ops_1710_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; lean_object* v_r_1720_; lean_object* v_fst_1721_; lean_object* v_snd_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1734_; 
v___x_1719_ = lean_array_fget_borrowed(v_na_1705_, v_lo_1707_);
v_r_1720_ = l_Lasm_UI_create___redArg(v___x_1719_, v_n_1709_);
v_fst_1721_ = lean_ctor_get(v_r_1720_, 0);
v_snd_1722_ = lean_ctor_get(v_r_1720_, 1);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_r_1720_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1724_ = v_r_1720_;
v_isShared_1725_ = v_isSharedCheck_1734_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_snd_1722_);
lean_inc(v_fst_1721_);
lean_dec(v_r_1720_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1734_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1726_ = lean_unsigned_to_nat(1u);
v___x_1727_ = lean_nat_add(v_lo_1707_, v___x_1726_);
lean_dec(v_lo_1707_);
lean_inc(v_before_1706_);
lean_inc(v_fst_1721_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 1, v_before_1706_);
v___x_1729_ = v___x_1724_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_fst_1721_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v_before_1706_);
v___x_1729_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_array_push(v_ops_1710_, v___x_1729_);
v___x_1731_ = lean_array_push(v_acc_1711_, v_fst_1721_);
v_lo_1707_ = v___x_1727_;
v_n_1709_ = v_snd_1722_;
v_ops_1710_ = v___x_1730_;
v_acc_1711_ = v___x_1731_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_na_1735_, lean_object* v_before_1736_, lean_object* v_lo_1737_, lean_object* v_hi_1738_, lean_object* v_n_1739_, lean_object* v_ops_1740_, lean_object* v_acc_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_1735_, v_before_1736_, v_lo_1737_, v_hi_1738_, v_n_1739_, v_ops_1740_, v_acc_1741_);
lean_dec(v_hi_1738_);
lean_dec_ref(v_na_1735_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(lean_object* v_before_1743_, lean_object* v_x_1744_, lean_object* v_x_1745_, lean_object* v_x_1746_, lean_object* v_x_1747_){
_start:
{
if (lean_obj_tag(v_x_1744_) == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec(v_before_1743_);
v___x_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1748_, 0, v_x_1747_);
lean_ctor_set(v___x_1748_, 1, v_x_1745_);
v___x_1749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1749_, 0, v_x_1746_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
return v___x_1749_;
}
else
{
lean_object* v_head_1750_; lean_object* v_tail_1751_; lean_object* v_r_1752_; lean_object* v_fst_1753_; lean_object* v_snd_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1764_; 
v_head_1750_ = lean_ctor_get(v_x_1744_, 0);
v_tail_1751_ = lean_ctor_get(v_x_1744_, 1);
v_r_1752_ = l_Lasm_UI_create___redArg(v_head_1750_, v_x_1745_);
v_fst_1753_ = lean_ctor_get(v_r_1752_, 0);
v_snd_1754_ = lean_ctor_get(v_r_1752_, 1);
v_isSharedCheck_1764_ = !lean_is_exclusive(v_r_1752_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1756_ = v_r_1752_;
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_snd_1754_);
lean_inc(v_fst_1753_);
lean_dec(v_r_1752_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1764_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
lean_inc(v_before_1743_);
lean_inc(v_fst_1753_);
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 1, v_before_1743_);
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_fst_1753_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v_before_1743_);
v___x_1759_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_array_push(v_x_1746_, v___x_1759_);
v___x_1761_ = lean_array_push(v_x_1747_, v_fst_1753_);
v_x_1744_ = v_tail_1751_;
v_x_1745_ = v_snd_1754_;
v_x_1746_ = v___x_1760_;
v_x_1747_ = v___x_1761_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_before_1765_, lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v_x_1768_, lean_object* v_x_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v_before_1765_, v_x_1766_, v_x_1767_, v_x_1768_, v_x_1769_);
lean_dec(v_x_1766_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(lean_object* v_old_1771_, lean_object* v_new_1772_, lean_object* v_next_1773_){
_start:
{
lean_object* v_old_1775_; lean_object* v_new_1776_; 
if (lean_obj_tag(v_old_1771_) == 0)
{
if (lean_obj_tag(v_new_1772_) == 0)
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
lean_ctor_set(v___x_1782_, 1, v_old_1771_);
lean_ctor_set(v___x_1782_, 2, v_next_1773_);
return v___x_1782_;
}
else
{
v_old_1775_ = v_old_1771_;
v_new_1776_ = v_new_1772_;
goto v___jp_1774_;
}
}
else
{
if (lean_obj_tag(v_new_1772_) == 0)
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec_ref_known(v_old_1771_, 2);
v___x_1783_ = lean_unsigned_to_nat(1u);
v___x_1784_ = lean_mk_empty_array_with_capacity(v___x_1783_);
lean_dec_ref(v___x_1784_);
v___x_1785_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_1786_ = lean_box(0);
v___x_1787_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
lean_ctor_set(v___x_1787_, 2, v_next_1773_);
return v___x_1787_;
}
else
{
lean_object* v_tail_1788_; 
v_tail_1788_ = lean_ctor_get(v_new_1772_, 1);
if (lean_obj_tag(v_tail_1788_) == 0)
{
lean_object* v_tail_1789_; 
v_tail_1789_ = lean_ctor_get(v_old_1771_, 1);
if (lean_obj_tag(v_tail_1789_) == 0)
{
lean_object* v_head_1790_; lean_object* v_head_1791_; uint8_t v___x_1792_; 
v_head_1790_ = lean_ctor_get(v_old_1771_, 0);
v_head_1791_ = lean_ctor_get(v_new_1772_, 0);
v___x_1792_ = l_Lasm_UI_Live_same___redArg(v_head_1790_, v_head_1791_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1793_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1794_ = lean_unsigned_to_nat(1u);
v___x_1795_ = lean_mk_empty_array_with_capacity(v___x_1794_);
v___x_1796_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(v_old_1771_, v_new_1772_, v_next_1773_, v___x_1793_, v___x_1795_);
return v___x_1796_;
}
else
{
lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1819_; 
lean_inc(v_head_1791_);
lean_inc(v_tail_1789_);
lean_inc(v_head_1790_);
lean_dec_ref_known(v_old_1771_, 2);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_new_1772_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; lean_object* v_unused_1821_; 
v_unused_1820_ = lean_ctor_get(v_new_1772_, 1);
lean_dec(v_unused_1820_);
v_unused_1821_ = lean_ctor_get(v_new_1772_, 0);
lean_dec(v_unused_1821_);
v___x_1798_ = v_new_1772_;
v_isShared_1799_ = v_isSharedCheck_1819_;
goto v_resetjp_1797_;
}
else
{
lean_dec(v_new_1772_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1819_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_r_1800_; lean_object* v_ops_1801_; lean_object* v_live_1802_; lean_object* v_next_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1818_; 
v_r_1800_ = l_Lasm_UI_diffNode___redArg(v_head_1790_, v_head_1791_, v_next_1773_);
v_ops_1801_ = lean_ctor_get(v_r_1800_, 0);
v_live_1802_ = lean_ctor_get(v_r_1800_, 1);
v_next_1803_ = lean_ctor_get(v_r_1800_, 2);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_r_1800_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1805_ = v_r_1800_;
v_isShared_1806_ = v_isSharedCheck_1818_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_next_1803_);
lean_inc(v_live_1802_);
lean_inc(v_ops_1801_);
lean_dec(v_r_1800_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1818_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___y_1808_; uint8_t v___x_1815_; 
v___x_1815_ = l_List_isEmpty___redArg(v_ops_1801_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
v___x_1816_ = lean_array_mk(v_ops_1801_);
v___y_1808_ = v___x_1816_;
goto v___jp_1807_;
}
else
{
lean_object* v___x_1817_; 
lean_dec(v_ops_1801_);
v___x_1817_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___y_1808_ = v___x_1817_;
goto v___jp_1807_;
}
v___jp_1807_:
{
lean_object* v___x_1810_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_tail_1789_);
lean_ctor_set(v___x_1798_, 0, v_live_1802_);
v___x_1810_ = v___x_1798_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_live_1802_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_tail_1789_);
v___x_1810_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1812_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 1, v___x_1810_);
lean_ctor_set(v___x_1805_, 0, v___y_1808_);
v___x_1812_ = v___x_1805_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___y_1808_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v___x_1810_);
lean_ctor_set(v_reuseFailAlloc_1813_, 2, v_next_1803_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
}
}
}
else
{
v_old_1775_ = v_old_1771_;
v_new_1776_ = v_new_1772_;
goto v___jp_1774_;
}
}
else
{
v_old_1775_ = v_old_1771_;
v_new_1776_ = v_new_1772_;
goto v___jp_1774_;
}
}
}
v___jp_1774_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1777_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1778_ = l_List_lengthTR___redArg(v_new_1776_);
v___x_1779_ = lean_mk_empty_array_with_capacity(v___x_1778_);
lean_dec(v___x_1778_);
v___x_1780_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(v_old_1775_, v_new_1776_, v_next_1773_, v___x_1777_, v___x_1779_);
return v___x_1780_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object* v_o_1822_, lean_object* v_n_1823_, lean_object* v_next_1824_){
_start:
{
lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v_o_1837_; lean_object* v_n_1838_; 
if (lean_obj_tag(v_o_1822_) == 0)
{
if (lean_obj_tag(v_n_1823_) == 0)
{
lean_object* v_id_1843_; lean_object* v_s_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1860_; 
v_id_1843_ = lean_ctor_get(v_o_1822_, 0);
v_s_1844_ = lean_ctor_get(v_o_1822_, 1);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_o_1822_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1846_ = v_o_1822_;
v_isShared_1847_ = v_isSharedCheck_1860_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_s_1844_);
lean_inc(v_id_1843_);
lean_dec(v_o_1822_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1860_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v_s_1848_; lean_object* v___y_1850_; uint8_t v___x_1855_; 
v_s_1848_ = lean_ctor_get(v_n_1823_, 0);
lean_inc_ref(v_s_1848_);
lean_dec_ref_known(v_n_1823_, 1);
v___x_1855_ = lean_string_dec_eq(v_s_1844_, v_s_1848_);
lean_dec_ref(v_s_1844_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc_ref(v_s_1848_);
lean_inc(v_id_1843_);
v___x_1856_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1856_, 0, v_id_1843_);
lean_ctor_set(v___x_1856_, 1, v_s_1848_);
v___x_1857_ = lean_box(0);
v___x_1858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set(v___x_1858_, 1, v___x_1857_);
v___y_1850_ = v___x_1858_;
goto v___jp_1849_;
}
else
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_box(0);
v___y_1850_ = v___x_1859_;
goto v___jp_1849_;
}
v___jp_1849_:
{
lean_object* v___x_1852_; 
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 1, v_s_1848_);
v___x_1852_ = v___x_1846_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_id_1843_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v_s_1848_);
v___x_1852_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1853_, 0, v___y_1850_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
lean_ctor_set(v___x_1853_, 2, v_next_1824_);
return v___x_1853_;
}
}
}
}
else
{
v_o_1837_ = v_o_1822_;
v_n_1838_ = v_n_1823_;
goto v___jp_1836_;
}
}
else
{
lean_object* v_id_1861_; uint8_t v_ns_1862_; lean_object* v_tag_1863_; lean_object* v_attrs_1864_; lean_object* v_children_1865_; 
v_id_1861_ = lean_ctor_get(v_o_1822_, 0);
v_ns_1862_ = lean_ctor_get_uint8(v_o_1822_, sizeof(void*)*5);
v_tag_1863_ = lean_ctor_get(v_o_1822_, 1);
v_attrs_1864_ = lean_ctor_get(v_o_1822_, 3);
v_children_1865_ = lean_ctor_get(v_o_1822_, 4);
if (lean_obj_tag(v_n_1823_) == 1)
{
lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1927_; 
lean_inc(v_children_1865_);
lean_inc(v_attrs_1864_);
lean_inc_ref(v_tag_1863_);
lean_inc(v_id_1861_);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_o_1822_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; lean_object* v_unused_1929_; lean_object* v_unused_1930_; lean_object* v_unused_1931_; lean_object* v_unused_1932_; 
v_unused_1928_ = lean_ctor_get(v_o_1822_, 4);
lean_dec(v_unused_1928_);
v_unused_1929_ = lean_ctor_get(v_o_1822_, 3);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_o_1822_, 2);
lean_dec(v_unused_1930_);
v_unused_1931_ = lean_ctor_get(v_o_1822_, 1);
lean_dec(v_unused_1931_);
v_unused_1932_ = lean_ctor_get(v_o_1822_, 0);
lean_dec(v_unused_1932_);
v___x_1884_ = v_o_1822_;
v_isShared_1885_ = v_isSharedCheck_1927_;
goto v_resetjp_1883_;
}
else
{
lean_dec(v_o_1822_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1927_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
uint8_t v_ns_1886_; lean_object* v_tag_1887_; lean_object* v_key_1888_; lean_object* v_attrs_1889_; lean_object* v_children_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; 
v_ns_1886_ = lean_ctor_get_uint8(v_n_1823_, sizeof(void*)*4);
v_tag_1887_ = lean_ctor_get(v_n_1823_, 0);
v_key_1888_ = lean_ctor_get(v_n_1823_, 1);
v_attrs_1889_ = lean_ctor_get(v_n_1823_, 2);
v_children_1890_ = lean_ctor_get(v_n_1823_, 3);
v___x_1891_ = lean_box(v_ns_1862_);
v___x_1892_ = lean_obj_tag_nat(v___x_1891_);
lean_dec(v___x_1891_);
v___x_1893_ = lean_box(v_ns_1886_);
v___x_1894_ = lean_obj_tag_nat(v___x_1893_);
lean_dec(v___x_1893_);
v___x_1895_ = lean_nat_dec_eq(v___x_1892_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_del_object(v___x_1884_);
lean_dec(v_children_1865_);
lean_dec(v_attrs_1864_);
lean_dec_ref(v_tag_1863_);
goto v___jp_1866_;
}
else
{
uint8_t v___x_1896_; 
v___x_1896_ = lean_string_dec_eq(v_tag_1863_, v_tag_1887_);
lean_dec_ref(v_tag_1863_);
if (v___x_1896_ == 0)
{
lean_del_object(v___x_1884_);
lean_dec(v_children_1865_);
lean_dec(v_attrs_1864_);
goto v___jp_1866_;
}
else
{
lean_object* v_r_1897_; lean_object* v_ops_1898_; lean_object* v_live_1899_; lean_object* v_next_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1926_; 
lean_inc(v_children_1890_);
lean_inc(v_attrs_1889_);
lean_inc(v_key_1888_);
lean_inc_ref(v_tag_1887_);
lean_dec_ref_known(v_n_1823_, 4);
v_r_1897_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(v_children_1865_, v_children_1890_, v_next_1824_);
v_ops_1898_ = lean_ctor_get(v_r_1897_, 0);
v_live_1899_ = lean_ctor_get(v_r_1897_, 1);
v_next_1900_ = lean_ctor_get(v_r_1897_, 2);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_r_1897_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1902_ = v_r_1897_;
v_isShared_1903_ = v_isSharedCheck_1926_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_next_1900_);
lean_inc(v_live_1899_);
lean_inc(v_ops_1898_);
lean_dec(v_r_1897_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1926_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___y_1905_; lean_object* v_aops_1912_; lean_object* v___y_1914_; lean_object* v___x_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; 
lean_inc(v_attrs_1889_);
v_aops_1912_ = l_Lasm_UI_diffAttrs___redArg(v_attrs_1864_, v_attrs_1889_);
v___x_1918_ = lean_array_get_size(v_ops_1898_);
v___x_1919_ = lean_unsigned_to_nat(0u);
v___x_1920_ = lean_nat_dec_eq(v___x_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1921_ = lean_array_to_list(v_ops_1898_);
lean_inc(v_id_1861_);
v___x_1922_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1922_, 0, v_id_1861_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = lean_box(0);
v___x_1924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___y_1914_ = v___x_1924_;
goto v___jp_1913_;
}
else
{
lean_object* v___x_1925_; 
lean_dec_ref(v_ops_1898_);
v___x_1925_ = lean_box(0);
v___y_1914_ = v___x_1925_;
goto v___jp_1913_;
}
v___jp_1904_:
{
lean_object* v___x_1907_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 4, v_live_1899_);
lean_ctor_set(v___x_1884_, 3, v_attrs_1889_);
lean_ctor_set(v___x_1884_, 2, v_key_1888_);
lean_ctor_set(v___x_1884_, 1, v_tag_1887_);
v___x_1907_ = v___x_1884_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_id_1861_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v_tag_1887_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v_key_1888_);
lean_ctor_set(v_reuseFailAlloc_1911_, 3, v_attrs_1889_);
lean_ctor_set(v_reuseFailAlloc_1911_, 4, v_live_1899_);
v___x_1907_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1909_; 
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*5, v_ns_1886_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 1, v___x_1907_);
lean_ctor_set(v___x_1902_, 0, v___y_1905_);
v___x_1909_ = v___x_1902_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___y_1905_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v_next_1900_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
v___jp_1913_:
{
uint8_t v___x_1915_; 
v___x_1915_ = l_List_isEmpty___redArg(v_aops_1912_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
lean_inc(v_id_1861_);
v___x_1916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1916_, 0, v_id_1861_);
lean_ctor_set(v___x_1916_, 1, v_aops_1912_);
v___x_1917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
lean_ctor_set(v___x_1917_, 1, v___y_1914_);
v___y_1905_ = v___x_1917_;
goto v___jp_1904_;
}
else
{
lean_dec(v_aops_1912_);
v___y_1905_ = v___y_1914_;
goto v___jp_1904_;
}
}
}
}
}
}
}
else
{
v_o_1837_ = v_o_1822_;
v_n_1838_ = v_n_1823_;
goto v___jp_1836_;
}
v___jp_1866_:
{
lean_object* v_c_1867_; lean_object* v_fst_1868_; lean_object* v_snd_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1882_; 
v_c_1867_ = l_Lasm_UI_create___redArg(v_n_1823_, v_next_1824_);
lean_dec_ref(v_n_1823_);
v_fst_1868_ = lean_ctor_get(v_c_1867_, 0);
v_snd_1869_ = lean_ctor_get(v_c_1867_, 1);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_c_1867_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1871_ = v_c_1867_;
v_isShared_1872_ = v_isSharedCheck_1882_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_snd_1869_);
lean_inc(v_fst_1868_);
lean_dec(v_c_1867_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1882_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1875_; 
lean_inc(v_id_1861_);
v___x_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1873_, 0, v_id_1861_);
lean_inc(v_fst_1868_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v___x_1873_);
v___x_1875_ = v___x_1871_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_fst_1868_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1876_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1876_, 0, v_id_1861_);
v___x_1877_ = lean_box(0);
v___x_1878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1876_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1875_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
lean_ctor_set(v___x_1880_, 1, v_fst_1868_);
lean_ctor_set(v___x_1880_, 2, v_snd_1869_);
return v___x_1880_;
}
}
}
}
v___jp_1825_:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
lean_inc(v___y_1828_);
v___x_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___y_1828_);
lean_inc(v___y_1827_);
v___x_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___y_1827_);
lean_ctor_set(v___x_1830_, 1, v___x_1829_);
v___x_1831_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___y_1828_);
v___x_1832_ = lean_box(0);
v___x_1833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1831_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1830_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___x_1835_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
lean_ctor_set(v___x_1835_, 1, v___y_1827_);
lean_ctor_set(v___x_1835_, 2, v___y_1826_);
return v___x_1835_;
}
v___jp_1836_:
{
lean_object* v_c_1839_; lean_object* v_fst_1840_; lean_object* v_snd_1841_; lean_object* v_id_1842_; 
v_c_1839_ = l_Lasm_UI_create___redArg(v_n_1838_, v_next_1824_);
lean_dec_ref(v_n_1838_);
v_fst_1840_ = lean_ctor_get(v_c_1839_, 0);
lean_inc(v_fst_1840_);
v_snd_1841_ = lean_ctor_get(v_c_1839_, 1);
lean_inc(v_snd_1841_);
lean_dec_ref(v_c_1839_);
v_id_1842_ = lean_ctor_get(v_o_1837_, 0);
lean_inc(v_id_1842_);
lean_dec_ref(v_o_1837_);
v___y_1826_ = v_snd_1841_;
v___y_1827_ = v_fst_1840_;
v___y_1828_ = v_id_1842_;
goto v___jp_1825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(lean_object* v_oa_1933_, lean_object* v_oLo_1934_, lean_object* v_oHi_1935_, lean_object* v_na_1936_, lean_object* v_nLo_1937_, lean_object* v_nHi_1938_, lean_object* v_pre_1939_, lean_object* v_suf_1940_, lean_object* v_ops_1941_, lean_object* v_next_1942_, lean_object* v_keys_1943_){
_start:
{
lean_object* v___y_1945_; lean_object* v___y_1955_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; uint8_t v___x_1976_; 
v___x_1976_ = lean_nat_dec_lt(v_oLo_1934_, v_oHi_1935_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; 
lean_dec(v_keys_1943_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
v___x_1977_ = l_List_head_x3f___redArg(v_suf_1940_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_box(0);
v___y_1945_ = v___x_1978_;
goto v___jp_1944_;
}
else
{
lean_object* v_val_1979_; lean_object* v_id_1980_; 
v_val_1979_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_val_1979_);
lean_dec_ref_known(v___x_1977_, 1);
v_id_1980_ = lean_ctor_get(v_val_1979_, 0);
lean_inc(v_id_1980_);
lean_dec(v_val_1979_);
v___y_1955_ = v_id_1980_;
goto v___jp_1954_;
}
}
else
{
uint8_t v___x_1981_; 
v___x_1981_ = lean_nat_dec_lt(v_nLo_1937_, v_nHi_1938_);
if (v___x_1981_ == 0)
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
v___x_1982_ = l_Lasm_UI_removeRange___redArg(v_oa_1933_, v_oLo_1934_, v_oHi_1935_, v_ops_1941_);
lean_dec(v_oHi_1935_);
lean_dec_ref(v_oa_1933_);
v___x_1983_ = lean_array_to_list(v_pre_1939_);
v___x_1984_ = l_List_appendTR___redArg(v___x_1983_, v_suf_1940_);
v___x_1985_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1982_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
lean_ctor_set(v___x_1985_, 2, v_next_1942_);
return v___x_1985_;
}
else
{
lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1986_ = lean_array_get_size(v_oa_1933_);
v___x_1987_ = lean_nat_dec_lt(v_oLo_1934_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1988_ = lean_unsigned_to_nat(1u);
v___x_1989_ = lean_nat_sub(v_oHi_1935_, v___x_1988_);
v___x_1990_ = lean_nat_dec_lt(v___x_1989_, v___x_1986_);
if (v___x_1990_ == 0)
{
lean_dec(v___x_1989_);
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
goto v___jp_1961_;
}
else
{
lean_object* v___x_1991_; 
v___x_1991_ = lean_array_fget_borrowed(v_oa_1933_, v___x_1989_);
lean_dec(v___x_1989_);
if (lean_obj_tag(v___x_1991_) == 0)
{
goto v___jp_1957_;
}
else
{
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
goto v___jp_1961_;
}
}
}
else
{
lean_object* v___x_1992_; 
v___x_1992_ = lean_array_fget(v_oa_1933_, v_oLo_1934_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_unsigned_to_nat(1u);
v___x_1994_ = lean_nat_add(v_oLo_1934_, v___x_1993_);
lean_dec(v_oLo_1934_);
v_oLo_1934_ = v___x_1994_;
goto _start;
}
else
{
lean_object* v_val_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2173_; 
v_val_1996_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_1998_ = v___x_1992_;
v_isShared_1999_ = v_isSharedCheck_2173_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_val_1996_);
lean_dec(v___x_1992_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2173_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v___y_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2000_ = lean_unsigned_to_nat(1u);
v___x_2027_ = lean_nat_sub(v_oHi_1935_, v___x_2000_);
v___x_2028_ = lean_nat_dec_lt(v___x_2027_, v___x_1986_);
if (v___x_2028_ == 0)
{
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
goto v___jp_1961_;
}
else
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_array_fget(v_oa_1933_, v___x_2027_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
goto v___jp_1957_;
}
else
{
lean_object* v_val_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2172_; 
v_val_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2172_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_val_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2172_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2034_ = lean_array_get_size(v_na_1936_);
v___x_2035_ = lean_nat_dec_lt(v_nLo_1937_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_del_object(v___x_2032_);
lean_dec(v_val_2030_);
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
goto v___jp_1961_;
}
else
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = lean_nat_sub(v_nHi_1938_, v___x_2000_);
v___x_2037_ = lean_nat_dec_lt(v___x_2036_, v___x_2034_);
if (v___x_2037_ == 0)
{
lean_dec(v___x_2036_);
lean_del_object(v___x_2032_);
lean_dec(v_val_2030_);
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_keys_1943_);
lean_dec(v_nHi_1938_);
lean_dec(v_nLo_1937_);
lean_dec(v_oHi_1935_);
lean_dec(v_oLo_1934_);
lean_dec_ref(v_oa_1933_);
goto v___jp_1961_;
}
else
{
lean_object* v___x_2038_; lean_object* v_fst_2040_; lean_object* v___y_2048_; lean_object* v_fst_2053_; lean_object* v_fst_2054_; lean_object* v_snd_2055_; lean_object* v___y_2063_; uint8_t v___x_2070_; 
v___x_2038_ = lean_array_fget_borrowed(v_na_1936_, v_nLo_1937_);
v___x_2070_ = l_Lasm_UI_Live_same___redArg(v_val_1996_, v___x_2038_);
if (v___x_2070_ == 0)
{
lean_object* v___x_2071_; uint8_t v___x_2072_; 
v___x_2071_ = lean_array_fget_borrowed(v_na_1936_, v___x_2036_);
v___x_2072_ = l_Lasm_UI_Live_same___redArg(v_val_2030_, v___x_2071_);
if (v___x_2072_ == 0)
{
uint8_t v___x_2073_; 
v___x_2073_ = l_Lasm_UI_Live_same___redArg(v_val_1996_, v___x_2071_);
if (v___x_2073_ == 0)
{
uint8_t v___x_2074_; 
lean_dec(v___x_2036_);
v___x_2074_ = l_Lasm_UI_Live_same___redArg(v_val_2030_, v___x_2038_);
if (v___x_2074_ == 0)
{
lean_object* v___x_2075_; 
lean_dec(v_val_2030_);
lean_dec(v___x_2027_);
v___x_2075_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_2038_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_del_object(v___x_2032_);
lean_del_object(v___x_1998_);
v_fst_2040_ = v_keys_1943_;
goto v___jp_2039_;
}
else
{
lean_object* v_val_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2113_; 
v_val_2076_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2078_ = v___x_2075_;
v_isShared_2079_ = v_isSharedCheck_2113_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_val_2076_);
lean_dec(v___x_2075_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2113_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___y_2081_; 
if (lean_obj_tag(v_keys_1943_) == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_1934_);
v___x_2111_ = l_Lasm_UI_keyIndex___redArg(v_oa_1933_, v_oLo_1934_, v_oHi_1935_, v___x_2110_);
v___y_2081_ = v___x_2111_;
goto v___jp_2080_;
}
else
{
lean_object* v_val_2112_; 
v_val_2112_ = lean_ctor_get(v_keys_1943_, 0);
lean_inc(v_val_2112_);
lean_dec_ref_known(v_keys_1943_, 1);
v___y_2081_ = v_val_2112_;
goto v___jp_2080_;
}
v___jp_2080_:
{
lean_object* v___x_2082_; 
v___x_2082_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v___y_2081_, v_val_2076_);
lean_dec(v_val_2076_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v___x_2084_; 
lean_del_object(v___x_2032_);
lean_del_object(v___x_1998_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 0, v___y_2081_);
v___x_2084_ = v___x_2078_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___y_2081_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
v_fst_2040_ = v___x_2084_;
goto v___jp_2039_;
}
}
else
{
lean_object* v_val_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2109_; 
lean_del_object(v___x_2078_);
v_val_2086_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2088_ = v___x_2082_;
v_isShared_2089_ = v_isSharedCheck_2109_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_val_2086_);
lean_dec(v___x_2082_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2109_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_nat_dec_le(v_oLo_1934_, v_val_2086_);
if (v___x_2090_ == 0)
{
lean_del_object(v___x_2088_);
lean_dec(v_val_2086_);
lean_del_object(v___x_1998_);
v___y_2048_ = v___y_2081_;
goto v___jp_2047_;
}
else
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_nat_dec_lt(v_val_2086_, v_oHi_1935_);
if (v___x_2091_ == 0)
{
lean_del_object(v___x_2088_);
lean_dec(v_val_2086_);
lean_del_object(v___x_1998_);
v___y_2048_ = v___y_2081_;
goto v___jp_2047_;
}
else
{
uint8_t v___x_2092_; 
lean_del_object(v___x_2032_);
v___x_2092_ = lean_nat_dec_lt(v_val_2086_, v___x_1986_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_del_object(v___x_2088_);
lean_dec(v_val_2086_);
v___x_2093_ = lean_box(0);
v___x_2094_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_2081_, v___x_2093_);
v___y_2063_ = v___x_2094_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2095_; 
v___x_2095_ = lean_array_fget(v_oa_1933_, v_val_2086_);
if (lean_obj_tag(v___x_2095_) == 1)
{
lean_object* v_val_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2104_; 
lean_del_object(v___x_2088_);
v_val_2096_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2098_ = v___x_2095_;
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_val_2096_);
lean_dec(v___x_2095_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___y_2081_);
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___y_2081_);
v___x_2101_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
uint8_t v___x_2102_; 
v___x_2102_ = l_Lasm_UI_Live_same___redArg(v_val_2096_, v___x_2038_);
if (v___x_2102_ == 0)
{
lean_dec(v_val_2096_);
lean_dec(v_val_2086_);
lean_del_object(v___x_1998_);
v_fst_2040_ = v___x_2101_;
goto v___jp_2039_;
}
else
{
v_fst_2053_ = v___x_2101_;
v_fst_2054_ = v_val_2086_;
v_snd_2055_ = v_val_2096_;
goto v___jp_2052_;
}
}
}
}
else
{
lean_object* v___x_2106_; 
lean_dec(v_val_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2095_);
v___x_2106_ = v___x_2088_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2095_);
v___x_2106_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_2081_, v___x_2106_);
lean_dec_ref(v___x_2106_);
v___y_2063_ = v___x_2107_;
goto v___jp_2062_;
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
else
{
lean_object* v_r_2114_; lean_object* v_ops_2115_; lean_object* v_live_2116_; lean_object* v_next_2117_; lean_object* v___x_2118_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2129_; lean_object* v_id_2131_; 
lean_del_object(v___x_2032_);
lean_del_object(v___x_1998_);
lean_dec(v_oHi_1935_);
lean_inc(v___x_2038_);
lean_inc(v_val_2030_);
v_r_2114_ = l_Lasm_UI_diffNode___redArg(v_val_2030_, v___x_2038_, v_next_1942_);
v_ops_2115_ = lean_ctor_get(v_r_2114_, 0);
lean_inc(v_ops_2115_);
v_live_2116_ = lean_ctor_get(v_r_2114_, 1);
lean_inc_ref(v_live_2116_);
v_next_2117_ = lean_ctor_get(v_r_2114_, 2);
lean_inc(v_next_2117_);
lean_dec_ref(v_r_2114_);
v___x_2118_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1941_, v_ops_2115_);
v_id_2131_ = lean_ctor_get(v_val_2030_, 0);
lean_inc(v_id_2131_);
lean_dec(v_val_2030_);
v___y_2129_ = v_id_2131_;
goto v___jp_2128_;
v___jp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v_ops_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___y_2121_);
v___x_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___y_2120_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v_ops_2124_ = lean_array_push(v___x_2118_, v___x_2123_);
v___x_2125_ = lean_nat_add(v_nLo_1937_, v___x_2000_);
lean_dec(v_nLo_1937_);
v___x_2126_ = lean_array_push(v_pre_1939_, v_live_2116_);
v_oHi_1935_ = v___x_2027_;
v_nLo_1937_ = v___x_2125_;
v_pre_1939_ = v___x_2126_;
v_ops_1941_ = v_ops_2124_;
v_next_1942_ = v_next_2117_;
goto _start;
}
v___jp_2128_:
{
lean_object* v_id_2130_; 
v_id_2130_ = lean_ctor_get(v_val_1996_, 0);
lean_inc(v_id_2130_);
lean_dec(v_val_1996_);
v___y_2120_ = v___y_2129_;
v___y_2121_ = v_id_2130_;
goto v___jp_2119_;
}
}
}
else
{
lean_object* v_r_2132_; lean_object* v_ops_2133_; lean_object* v_live_2134_; lean_object* v_next_2135_; lean_object* v___x_2136_; lean_object* v___y_2138_; lean_object* v___y_2139_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2150_; lean_object* v_id_2155_; 
lean_del_object(v___x_2032_);
lean_dec(v_val_2030_);
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_dec(v_nHi_1938_);
lean_inc(v___x_2071_);
lean_inc(v_val_1996_);
v_r_2132_ = l_Lasm_UI_diffNode___redArg(v_val_1996_, v___x_2071_, v_next_1942_);
v_ops_2133_ = lean_ctor_get(v_r_2132_, 0);
lean_inc(v_ops_2133_);
v_live_2134_ = lean_ctor_get(v_r_2132_, 1);
lean_inc_ref(v_live_2134_);
v_next_2135_ = lean_ctor_get(v_r_2132_, 2);
lean_inc(v_next_2135_);
lean_dec_ref(v_r_2132_);
v___x_2136_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1941_, v_ops_2133_);
v_id_2155_ = lean_ctor_get(v_val_1996_, 0);
lean_inc(v_id_2155_);
lean_dec(v_val_1996_);
v___y_2150_ = v_id_2155_;
goto v___jp_2149_;
v___jp_2137_:
{
lean_object* v___x_2140_; lean_object* v_ops_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___y_2138_);
lean_ctor_set(v___x_2140_, 1, v___y_2139_);
v_ops_2141_ = lean_array_push(v___x_2136_, v___x_2140_);
v___x_2142_ = lean_nat_add(v_oLo_1934_, v___x_2000_);
lean_dec(v_oLo_1934_);
v___x_2143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2143_, 0, v_live_2134_);
lean_ctor_set(v___x_2143_, 1, v_suf_1940_);
v_oLo_1934_ = v___x_2142_;
v_nHi_1938_ = v___x_2036_;
v_suf_1940_ = v___x_2143_;
v_ops_1941_ = v_ops_2141_;
v_next_1942_ = v_next_2135_;
goto _start;
}
v___jp_2145_:
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___y_2147_);
v___y_2138_ = v___y_2146_;
v___y_2139_ = v___x_2148_;
goto v___jp_2137_;
}
v___jp_2149_:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_List_head_x3f___redArg(v_suf_1940_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2152_; 
v___x_2152_ = lean_box(0);
v___y_2138_ = v___y_2150_;
v___y_2139_ = v___x_2152_;
goto v___jp_2137_;
}
else
{
lean_object* v_val_2153_; lean_object* v_id_2154_; 
v_val_2153_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_val_2153_);
lean_dec_ref_known(v___x_2151_, 1);
v_id_2154_ = lean_ctor_get(v_val_2153_, 0);
lean_inc(v_id_2154_);
lean_dec(v_val_2153_);
v___y_2146_ = v___y_2150_;
v___y_2147_ = v_id_2154_;
goto v___jp_2145_;
}
}
}
}
else
{
lean_object* v_r_2156_; lean_object* v_ops_2157_; lean_object* v_live_2158_; lean_object* v_next_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_del_object(v___x_2032_);
lean_del_object(v___x_1998_);
lean_dec(v_val_1996_);
lean_dec(v_nHi_1938_);
lean_dec(v_oHi_1935_);
lean_inc(v___x_2071_);
v_r_2156_ = l_Lasm_UI_diffNode___redArg(v_val_2030_, v___x_2071_, v_next_1942_);
v_ops_2157_ = lean_ctor_get(v_r_2156_, 0);
lean_inc(v_ops_2157_);
v_live_2158_ = lean_ctor_get(v_r_2156_, 1);
lean_inc_ref(v_live_2158_);
v_next_2159_ = lean_ctor_get(v_r_2156_, 2);
lean_inc(v_next_2159_);
lean_dec_ref(v_r_2156_);
v___x_2160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_live_2158_);
lean_ctor_set(v___x_2160_, 1, v_suf_1940_);
v___x_2161_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1941_, v_ops_2157_);
v_oHi_1935_ = v___x_2027_;
v_nHi_1938_ = v___x_2036_;
v_suf_1940_ = v___x_2160_;
v_ops_1941_ = v___x_2161_;
v_next_1942_ = v_next_2159_;
goto _start;
}
}
else
{
lean_object* v_r_2163_; lean_object* v_ops_2164_; lean_object* v_live_2165_; lean_object* v_next_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
lean_dec(v___x_2036_);
lean_del_object(v___x_2032_);
lean_dec(v_val_2030_);
lean_dec(v___x_2027_);
lean_del_object(v___x_1998_);
lean_inc(v___x_2038_);
v_r_2163_ = l_Lasm_UI_diffNode___redArg(v_val_1996_, v___x_2038_, v_next_1942_);
v_ops_2164_ = lean_ctor_get(v_r_2163_, 0);
lean_inc(v_ops_2164_);
v_live_2165_ = lean_ctor_get(v_r_2163_, 1);
lean_inc_ref(v_live_2165_);
v_next_2166_ = lean_ctor_get(v_r_2163_, 2);
lean_inc(v_next_2166_);
lean_dec_ref(v_r_2163_);
v___x_2167_ = lean_nat_add(v_oLo_1934_, v___x_2000_);
lean_dec(v_oLo_1934_);
v___x_2168_ = lean_nat_add(v_nLo_1937_, v___x_2000_);
lean_dec(v_nLo_1937_);
v___x_2169_ = lean_array_push(v_pre_1939_, v_live_2165_);
v___x_2170_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1941_, v_ops_2164_);
v_oLo_1934_ = v___x_2167_;
v_nLo_1937_ = v___x_2168_;
v_pre_1939_ = v___x_2169_;
v_ops_1941_ = v___x_2170_;
v_next_1942_ = v_next_2166_;
goto _start;
}
v___jp_2039_:
{
lean_object* v_c_2041_; lean_object* v_fst_2042_; lean_object* v_snd_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v_id_2046_; 
v_c_2041_ = l_Lasm_UI_create___redArg(v___x_2038_, v_next_1942_);
v_fst_2042_ = lean_ctor_get(v_c_2041_, 0);
lean_inc_n(v_fst_2042_, 2);
v_snd_2043_ = lean_ctor_get(v_c_2041_, 1);
lean_inc(v_snd_2043_);
lean_dec_ref(v_c_2041_);
v___x_2044_ = lean_nat_add(v_nLo_1937_, v___x_2000_);
lean_dec(v_nLo_1937_);
v___x_2045_ = lean_array_push(v_pre_1939_, v_fst_2042_);
v_id_2046_ = lean_ctor_get(v_val_1996_, 0);
lean_inc(v_id_2046_);
lean_dec(v_val_1996_);
v___y_1966_ = v_snd_2043_;
v___y_1967_ = v___x_2045_;
v___y_1968_ = v___x_2044_;
v___y_1969_ = v_fst_2040_;
v___y_1970_ = v_fst_2042_;
v___y_1971_ = v_id_2046_;
goto v___jp_1965_;
}
v___jp_2047_:
{
lean_object* v___x_2050_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___y_2048_);
v___x_2050_ = v___x_2032_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___y_2048_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
v_fst_2040_ = v___x_2050_;
goto v___jp_2039_;
}
}
v___jp_2052_:
{
lean_object* v_r_2056_; lean_object* v_ops_2057_; lean_object* v_live_2058_; lean_object* v_next_2059_; lean_object* v___x_2060_; lean_object* v_id_2061_; 
lean_inc(v___x_2038_);
lean_inc_ref(v_snd_2055_);
v_r_2056_ = l_Lasm_UI_diffNode___redArg(v_snd_2055_, v___x_2038_, v_next_1942_);
v_ops_2057_ = lean_ctor_get(v_r_2056_, 0);
lean_inc(v_ops_2057_);
v_live_2058_ = lean_ctor_get(v_r_2056_, 1);
lean_inc_ref(v_live_2058_);
v_next_2059_ = lean_ctor_get(v_r_2056_, 2);
lean_inc(v_next_2059_);
lean_dec_ref(v_r_2056_);
v___x_2060_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1941_, v_ops_2057_);
v_id_2061_ = lean_ctor_get(v_snd_2055_, 0);
lean_inc(v_id_2061_);
lean_dec_ref(v_snd_2055_);
v___y_2020_ = v_live_2058_;
v___y_2021_ = v_fst_2054_;
v___y_2022_ = v_fst_2053_;
v___y_2023_ = v___x_2060_;
v___y_2024_ = v_next_2059_;
v___y_2025_ = v_id_2061_;
goto v___jp_2019_;
}
v___jp_2062_:
{
lean_object* v_snd_2064_; 
v_snd_2064_ = lean_ctor_get(v___y_2063_, 1);
if (lean_obj_tag(v_snd_2064_) == 0)
{
lean_object* v_fst_2065_; 
lean_del_object(v___x_1998_);
v_fst_2065_ = lean_ctor_get(v___y_2063_, 0);
lean_inc(v_fst_2065_);
lean_dec_ref(v___y_2063_);
v_fst_2040_ = v_fst_2065_;
goto v___jp_2039_;
}
else
{
lean_object* v_val_2066_; lean_object* v_fst_2067_; lean_object* v_fst_2068_; lean_object* v_snd_2069_; 
v_val_2066_ = lean_ctor_get(v_snd_2064_, 0);
lean_inc(v_val_2066_);
v_fst_2067_ = lean_ctor_get(v___y_2063_, 0);
lean_inc(v_fst_2067_);
lean_dec_ref(v___y_2063_);
v_fst_2068_ = lean_ctor_get(v_val_2066_, 0);
lean_inc(v_fst_2068_);
v_snd_2069_ = lean_ctor_get(v_val_2066_, 1);
lean_inc(v_snd_2069_);
lean_dec(v_val_2066_);
v_fst_2053_ = v_fst_2067_;
v_fst_2054_ = v_fst_2068_;
v_snd_2055_ = v_snd_2069_;
goto v___jp_2052_;
}
}
}
}
}
}
}
v___jp_2001_:
{
lean_object* v___x_2010_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v___y_2008_);
v___x_2010_ = v___x_1998_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___y_2008_);
v___x_2010_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; lean_object* v_ops_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2011_, 0, v___y_2006_);
lean_ctor_set(v___x_2011_, 1, v___x_2010_);
v_ops_2012_ = lean_array_push(v___y_2005_, v___x_2011_);
v___x_2013_ = lean_box(0);
v___x_2014_ = lean_array_set(v_oa_1933_, v___y_2003_, v___x_2013_);
lean_dec(v___y_2003_);
v___x_2015_ = lean_nat_add(v_nLo_1937_, v___x_2000_);
lean_dec(v_nLo_1937_);
v___x_2016_ = lean_array_push(v_pre_1939_, v___y_2002_);
v_oa_1933_ = v___x_2014_;
v_nLo_1937_ = v___x_2015_;
v_pre_1939_ = v___x_2016_;
v_ops_1941_ = v_ops_2012_;
v_next_1942_ = v___y_2007_;
v_keys_1943_ = v___y_2004_;
goto _start;
}
}
v___jp_2019_:
{
lean_object* v_id_2026_; 
v_id_2026_ = lean_ctor_get(v_val_1996_, 0);
lean_inc(v_id_2026_);
lean_dec(v_val_1996_);
v___y_2002_ = v___y_2020_;
v___y_2003_ = v___y_2021_;
v___y_2004_ = v___y_2022_;
v___y_2005_ = v___y_2023_;
v___y_2006_ = v___y_2025_;
v___y_2007_ = v___y_2024_;
v___y_2008_ = v_id_2026_;
goto v___jp_2001_;
}
}
}
}
}
}
v___jp_1944_:
{
lean_object* v_r_1946_; lean_object* v_snd_1947_; lean_object* v_fst_1948_; lean_object* v_fst_1949_; lean_object* v_snd_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_r_1946_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_1936_, v___y_1945_, v_nLo_1937_, v_nHi_1938_, v_next_1942_, v_ops_1941_, v_pre_1939_);
lean_dec(v_nHi_1938_);
v_snd_1947_ = lean_ctor_get(v_r_1946_, 1);
lean_inc(v_snd_1947_);
v_fst_1948_ = lean_ctor_get(v_r_1946_, 0);
lean_inc(v_fst_1948_);
lean_dec_ref(v_r_1946_);
v_fst_1949_ = lean_ctor_get(v_snd_1947_, 0);
lean_inc(v_fst_1949_);
v_snd_1950_ = lean_ctor_get(v_snd_1947_, 1);
lean_inc(v_snd_1950_);
lean_dec(v_snd_1947_);
v___x_1951_ = lean_array_to_list(v_fst_1949_);
v___x_1952_ = l_List_appendTR___redArg(v___x_1951_, v_suf_1940_);
v___x_1953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1953_, 0, v_fst_1948_);
lean_ctor_set(v___x_1953_, 1, v___x_1952_);
lean_ctor_set(v___x_1953_, 2, v_snd_1950_);
return v___x_1953_;
}
v___jp_1954_:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___y_1955_);
v___y_1945_ = v___x_1956_;
goto v___jp_1944_;
}
v___jp_1957_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = lean_unsigned_to_nat(1u);
v___x_1959_ = lean_nat_sub(v_oHi_1935_, v___x_1958_);
lean_dec(v_oHi_1935_);
v_oHi_1935_ = v___x_1959_;
goto _start;
}
v___jp_1961_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = lean_array_to_list(v_pre_1939_);
v___x_1963_ = l_List_appendTR___redArg(v___x_1962_, v_suf_1940_);
v___x_1964_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1964_, 0, v_ops_1941_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
lean_ctor_set(v___x_1964_, 2, v_next_1942_);
return v___x_1964_;
}
v___jp_1965_:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___y_1971_);
v___x_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___y_1970_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = lean_array_push(v_ops_1941_, v___x_1973_);
v_nLo_1937_ = v___y_1968_;
v_pre_1939_ = v___y_1967_;
v_ops_1941_ = v___x_1974_;
v_next_1942_ = v___y_1966_;
v_keys_1943_ = v___y_1969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(lean_object* v_x_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_){
_start:
{
if (lean_obj_tag(v_x_2174_) == 0)
{
lean_object* v___x_2179_; lean_object* v_r_2180_; lean_object* v_snd_2181_; lean_object* v_fst_2182_; lean_object* v_fst_2183_; lean_object* v_snd_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2179_ = lean_box(0);
v_r_2180_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v___x_2179_, v_x_2175_, v_x_2176_, v_x_2177_, v_x_2178_);
lean_dec(v_x_2175_);
v_snd_2181_ = lean_ctor_get(v_r_2180_, 1);
lean_inc(v_snd_2181_);
v_fst_2182_ = lean_ctor_get(v_r_2180_, 0);
lean_inc(v_fst_2182_);
lean_dec_ref(v_r_2180_);
v_fst_2183_ = lean_ctor_get(v_snd_2181_, 0);
lean_inc(v_fst_2183_);
v_snd_2184_ = lean_ctor_get(v_snd_2181_, 1);
lean_inc(v_snd_2184_);
lean_dec(v_snd_2181_);
v___x_2185_ = lean_array_to_list(v_fst_2183_);
v___x_2186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2186_, 0, v_fst_2182_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
lean_ctor_set(v___x_2186_, 2, v_snd_2184_);
return v___x_2186_;
}
else
{
if (lean_obj_tag(v_x_2175_) == 0)
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2187_ = l_Lasm_UI_removeAll___redArg(v_x_2174_, v_x_2177_);
v___x_2188_ = lean_array_to_list(v_x_2178_);
v___x_2189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2187_);
lean_ctor_set(v___x_2189_, 1, v___x_2188_);
lean_ctor_set(v___x_2189_, 2, v_x_2176_);
return v___x_2189_;
}
else
{
lean_object* v_head_2190_; lean_object* v_tail_2191_; lean_object* v_head_2192_; lean_object* v_tail_2193_; uint8_t v___x_2194_; 
v_head_2190_ = lean_ctor_get(v_x_2174_, 0);
v_tail_2191_ = lean_ctor_get(v_x_2174_, 1);
v_head_2192_ = lean_ctor_get(v_x_2175_, 0);
v_tail_2193_ = lean_ctor_get(v_x_2175_, 1);
v___x_2194_ = l_Lasm_UI_Live_same___redArg(v_head_2190_, v_head_2192_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v_oa_2197_; lean_object* v_na_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2195_ = lean_box(0);
v___x_2196_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_x_2174_, v___x_2195_);
v_oa_2197_ = lean_array_mk(v___x_2196_);
v_na_2198_ = lean_array_mk(v_x_2175_);
v___x_2199_ = lean_unsigned_to_nat(0u);
v___x_2200_ = lean_array_get_size(v_oa_2197_);
v___x_2201_ = lean_array_get_size(v_na_2198_);
v___x_2202_ = lean_box(0);
v___x_2203_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2197_, v___x_2199_, v___x_2200_, v_na_2198_, v___x_2199_, v___x_2201_, v_x_2178_, v___x_2195_, v_x_2177_, v_x_2176_, v___x_2202_);
lean_dec_ref(v_na_2198_);
return v___x_2203_;
}
else
{
lean_object* v_r_2204_; lean_object* v_ops_2205_; lean_object* v_live_2206_; lean_object* v_next_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_inc(v_tail_2193_);
lean_inc(v_head_2192_);
lean_inc(v_tail_2191_);
lean_inc(v_head_2190_);
lean_dec_ref_known(v_x_2175_, 2);
lean_dec_ref_known(v_x_2174_, 2);
v_r_2204_ = l_Lasm_UI_diffNode___redArg(v_head_2190_, v_head_2192_, v_x_2176_);
v_ops_2205_ = lean_ctor_get(v_r_2204_, 0);
lean_inc(v_ops_2205_);
v_live_2206_ = lean_ctor_get(v_r_2204_, 1);
lean_inc_ref(v_live_2206_);
v_next_2207_ = lean_ctor_get(v_r_2204_, 2);
lean_inc(v_next_2207_);
lean_dec_ref(v_r_2204_);
v___x_2208_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_2177_, v_ops_2205_);
v___x_2209_ = lean_array_push(v_x_2178_, v_live_2206_);
v_x_2174_ = v_tail_2191_;
v_x_2175_ = v_tail_2193_;
v_x_2176_ = v_next_2207_;
v_x_2177_ = v___x_2208_;
v_x_2178_ = v___x_2209_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_oa_2211_, lean_object* v_oLo_2212_, lean_object* v_oHi_2213_, lean_object* v_na_2214_, lean_object* v_nLo_2215_, lean_object* v_nHi_2216_, lean_object* v_pre_2217_, lean_object* v_suf_2218_, lean_object* v_ops_2219_, lean_object* v_next_2220_, lean_object* v_keys_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2211_, v_oLo_2212_, v_oHi_2213_, v_na_2214_, v_nLo_2215_, v_nHi_2216_, v_pre_2217_, v_suf_2218_, v_ops_2219_, v_next_2220_, v_keys_2221_);
lean_dec_ref(v_na_2214_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object* v_Msg_2223_, lean_object* v_o_2224_, lean_object* v_n_2225_, lean_object* v_next_2226_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l_Lasm_UI_diffNode___redArg(v_o_2224_, v_n_2225_, v_next_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0(lean_object* v_Msg_2228_, lean_object* v_old_2229_, lean_object* v_new_2230_, lean_object* v_next_2231_){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(v_old_2229_, v_new_2230_, v_next_2231_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0(lean_object* v_Msg_2233_, lean_object* v_x_2234_, lean_object* v_x_2235_, lean_object* v_x_2236_, lean_object* v_x_2237_, lean_object* v_x_2238_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(v_x_2234_, v_x_2235_, v_x_2236_, v_x_2237_, v_x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1(lean_object* v_Msg_2240_, lean_object* v_before_2241_, lean_object* v_x_2242_, lean_object* v_x_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v_before_2241_, v_x_2242_, v_x_2243_, v_x_2244_, v_x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___boxed(lean_object* v_Msg_2247_, lean_object* v_before_2248_, lean_object* v_x_2249_, lean_object* v_x_2250_, lean_object* v_x_2251_, lean_object* v_x_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1(v_Msg_2247_, v_before_2248_, v_x_2249_, v_x_2250_, v_x_2251_, v_x_2252_);
lean_dec(v_x_2249_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2(lean_object* v_Msg_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_a_2255_, v_a_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3(lean_object* v_Msg_2258_, lean_object* v_oa_2259_, lean_object* v_oLo_2260_, lean_object* v_oHi_2261_, lean_object* v_na_2262_, lean_object* v_nLo_2263_, lean_object* v_nHi_2264_, lean_object* v_pre_2265_, lean_object* v_suf_2266_, lean_object* v_ops_2267_, lean_object* v_next_2268_, lean_object* v_keys_2269_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2259_, v_oLo_2260_, v_oHi_2261_, v_na_2262_, v_nLo_2263_, v_nHi_2264_, v_pre_2265_, v_suf_2266_, v_ops_2267_, v_next_2268_, v_keys_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___boxed(lean_object* v_Msg_2271_, lean_object* v_oa_2272_, lean_object* v_oLo_2273_, lean_object* v_oHi_2274_, lean_object* v_na_2275_, lean_object* v_nLo_2276_, lean_object* v_nHi_2277_, lean_object* v_pre_2278_, lean_object* v_suf_2279_, lean_object* v_ops_2280_, lean_object* v_next_2281_, lean_object* v_keys_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3(v_Msg_2271_, v_oa_2272_, v_oLo_2273_, v_oHi_2274_, v_na_2275_, v_nLo_2276_, v_nHi_2277_, v_pre_2278_, v_suf_2279_, v_ops_2280_, v_next_2281_, v_keys_2282_);
lean_dec_ref(v_na_2275_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4(lean_object* v_Msg_2284_, lean_object* v_na_2285_, lean_object* v_before_2286_, lean_object* v_lo_2287_, lean_object* v_hi_2288_, lean_object* v_n_2289_, lean_object* v_ops_2290_, lean_object* v_acc_2291_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_2285_, v_before_2286_, v_lo_2287_, v_hi_2288_, v_n_2289_, v_ops_2290_, v_acc_2291_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_Msg_2293_, lean_object* v_na_2294_, lean_object* v_before_2295_, lean_object* v_lo_2296_, lean_object* v_hi_2297_, lean_object* v_n_2298_, lean_object* v_ops_2299_, lean_object* v_acc_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4(v_Msg_2293_, v_na_2294_, v_before_2295_, v_lo_2296_, v_hi_2297_, v_n_2298_, v_ops_2299_, v_acc_2300_);
lean_dec(v_hi_2297_);
lean_dec_ref(v_na_2294_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5(lean_object* v_00_u03b2_2302_, lean_object* v_m_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_m_2303_, v_a_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_2306_, lean_object* v_m_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5(v_00_u03b2_2306_, v_m_2307_, v_a_2308_);
lean_dec_ref(v_a_2308_);
lean_dec_ref(v_m_2307_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_2310_, lean_object* v_a_2311_, lean_object* v_x_2312_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_2311_, v_x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b2_2314_, lean_object* v_a_2315_, lean_object* v_x_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6(v_00_u03b2_2314_, v_a_2315_, v_x_2316_);
lean_dec(v_x_2316_);
lean_dec_ref(v_a_2315_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object* v_x_2318_, lean_object* v_x_2319_, lean_object* v_h__1_2320_, lean_object* v_h__2_2321_, lean_object* v_h__3_2322_){
_start:
{
if (lean_obj_tag(v_x_2318_) == 0)
{
lean_dec(v_h__2_2321_);
if (lean_obj_tag(v_x_2319_) == 0)
{
lean_object* v_id_2323_; lean_object* v_s_2324_; lean_object* v_s_2325_; lean_object* v___x_2326_; 
lean_dec(v_h__3_2322_);
v_id_2323_ = lean_ctor_get(v_x_2318_, 0);
lean_inc(v_id_2323_);
v_s_2324_ = lean_ctor_get(v_x_2318_, 1);
lean_inc_ref(v_s_2324_);
lean_dec_ref_known(v_x_2318_, 2);
v_s_2325_ = lean_ctor_get(v_x_2319_, 0);
lean_inc_ref(v_s_2325_);
lean_dec_ref_known(v_x_2319_, 1);
v___x_2326_ = lean_apply_3(v_h__1_2320_, v_id_2323_, v_s_2324_, v_s_2325_);
return v___x_2326_;
}
else
{
lean_object* v___x_2327_; 
lean_dec(v_h__1_2320_);
v___x_2327_ = lean_apply_4(v_h__3_2322_, v_x_2318_, v_x_2319_, lean_box(0), lean_box(0));
return v___x_2327_;
}
}
else
{
lean_dec(v_h__1_2320_);
if (lean_obj_tag(v_x_2319_) == 1)
{
lean_object* v_id_2328_; uint8_t v_ns_2329_; lean_object* v_tag_2330_; lean_object* v_key_2331_; lean_object* v_attrs_2332_; lean_object* v_children_2333_; uint8_t v_ns_2334_; lean_object* v_tag_2335_; lean_object* v_key_2336_; lean_object* v_attrs_2337_; lean_object* v_children_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
lean_dec(v_h__3_2322_);
v_id_2328_ = lean_ctor_get(v_x_2318_, 0);
lean_inc(v_id_2328_);
v_ns_2329_ = lean_ctor_get_uint8(v_x_2318_, sizeof(void*)*5);
v_tag_2330_ = lean_ctor_get(v_x_2318_, 1);
lean_inc_ref(v_tag_2330_);
v_key_2331_ = lean_ctor_get(v_x_2318_, 2);
lean_inc(v_key_2331_);
v_attrs_2332_ = lean_ctor_get(v_x_2318_, 3);
lean_inc(v_attrs_2332_);
v_children_2333_ = lean_ctor_get(v_x_2318_, 4);
lean_inc(v_children_2333_);
lean_dec_ref_known(v_x_2318_, 5);
v_ns_2334_ = lean_ctor_get_uint8(v_x_2319_, sizeof(void*)*4);
v_tag_2335_ = lean_ctor_get(v_x_2319_, 0);
lean_inc_ref(v_tag_2335_);
v_key_2336_ = lean_ctor_get(v_x_2319_, 1);
lean_inc(v_key_2336_);
v_attrs_2337_ = lean_ctor_get(v_x_2319_, 2);
lean_inc(v_attrs_2337_);
v_children_2338_ = lean_ctor_get(v_x_2319_, 3);
lean_inc(v_children_2338_);
lean_dec_ref_known(v_x_2319_, 4);
v___x_2339_ = lean_box(v_ns_2329_);
v___x_2340_ = lean_box(v_ns_2334_);
v___x_2341_ = lean_apply_11(v_h__2_2321_, v_id_2328_, v___x_2339_, v_tag_2330_, v_key_2331_, v_attrs_2332_, v_children_2333_, v___x_2340_, v_tag_2335_, v_key_2336_, v_attrs_2337_, v_children_2338_);
return v___x_2341_;
}
else
{
lean_object* v___x_2342_; 
lean_dec(v_h__2_2321_);
v___x_2342_ = lean_apply_4(v_h__3_2322_, v_x_2318_, v_x_2319_, lean_box(0), lean_box(0));
return v___x_2342_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object* v_Msg_2343_, lean_object* v_motive_2344_, lean_object* v_x_2345_, lean_object* v_x_2346_, lean_object* v_h__1_2347_, lean_object* v_h__2_2348_, lean_object* v_h__3_2349_){
_start:
{
if (lean_obj_tag(v_x_2345_) == 0)
{
lean_dec(v_h__2_2348_);
if (lean_obj_tag(v_x_2346_) == 0)
{
lean_object* v_id_2350_; lean_object* v_s_2351_; lean_object* v_s_2352_; lean_object* v___x_2353_; 
lean_dec(v_h__3_2349_);
v_id_2350_ = lean_ctor_get(v_x_2345_, 0);
lean_inc(v_id_2350_);
v_s_2351_ = lean_ctor_get(v_x_2345_, 1);
lean_inc_ref(v_s_2351_);
lean_dec_ref_known(v_x_2345_, 2);
v_s_2352_ = lean_ctor_get(v_x_2346_, 0);
lean_inc_ref(v_s_2352_);
lean_dec_ref_known(v_x_2346_, 1);
v___x_2353_ = lean_apply_3(v_h__1_2347_, v_id_2350_, v_s_2351_, v_s_2352_);
return v___x_2353_;
}
else
{
lean_object* v___x_2354_; 
lean_dec(v_h__1_2347_);
v___x_2354_ = lean_apply_4(v_h__3_2349_, v_x_2345_, v_x_2346_, lean_box(0), lean_box(0));
return v___x_2354_;
}
}
else
{
lean_dec(v_h__1_2347_);
if (lean_obj_tag(v_x_2346_) == 1)
{
lean_object* v_id_2355_; uint8_t v_ns_2356_; lean_object* v_tag_2357_; lean_object* v_key_2358_; lean_object* v_attrs_2359_; lean_object* v_children_2360_; uint8_t v_ns_2361_; lean_object* v_tag_2362_; lean_object* v_key_2363_; lean_object* v_attrs_2364_; lean_object* v_children_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_dec(v_h__3_2349_);
v_id_2355_ = lean_ctor_get(v_x_2345_, 0);
lean_inc(v_id_2355_);
v_ns_2356_ = lean_ctor_get_uint8(v_x_2345_, sizeof(void*)*5);
v_tag_2357_ = lean_ctor_get(v_x_2345_, 1);
lean_inc_ref(v_tag_2357_);
v_key_2358_ = lean_ctor_get(v_x_2345_, 2);
lean_inc(v_key_2358_);
v_attrs_2359_ = lean_ctor_get(v_x_2345_, 3);
lean_inc(v_attrs_2359_);
v_children_2360_ = lean_ctor_get(v_x_2345_, 4);
lean_inc(v_children_2360_);
lean_dec_ref_known(v_x_2345_, 5);
v_ns_2361_ = lean_ctor_get_uint8(v_x_2346_, sizeof(void*)*4);
v_tag_2362_ = lean_ctor_get(v_x_2346_, 0);
lean_inc_ref(v_tag_2362_);
v_key_2363_ = lean_ctor_get(v_x_2346_, 1);
lean_inc(v_key_2363_);
v_attrs_2364_ = lean_ctor_get(v_x_2346_, 2);
lean_inc(v_attrs_2364_);
v_children_2365_ = lean_ctor_get(v_x_2346_, 3);
lean_inc(v_children_2365_);
lean_dec_ref_known(v_x_2346_, 4);
v___x_2366_ = lean_box(v_ns_2356_);
v___x_2367_ = lean_box(v_ns_2361_);
v___x_2368_ = lean_apply_11(v_h__2_2348_, v_id_2355_, v___x_2366_, v_tag_2357_, v_key_2358_, v_attrs_2359_, v_children_2360_, v___x_2367_, v_tag_2362_, v_key_2363_, v_attrs_2364_, v_children_2365_);
return v___x_2368_;
}
else
{
lean_object* v___x_2369_; 
lean_dec(v_h__2_2348_);
v___x_2369_ = lean_apply_4(v_h__3_2349_, v_x_2345_, v_x_2346_, lean_box(0), lean_box(0));
return v___x_2369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(lean_object* v_before_2370_, lean_object* v_x_2371_, lean_object* v_x_2372_, lean_object* v_x_2373_, lean_object* v_x_2374_){
_start:
{
if (lean_obj_tag(v_x_2371_) == 0)
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
lean_dec(v_before_2370_);
v___x_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2375_, 0, v_x_2374_);
lean_ctor_set(v___x_2375_, 1, v_x_2372_);
v___x_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2376_, 0, v_x_2373_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
return v___x_2376_;
}
else
{
lean_object* v_head_2377_; lean_object* v_tail_2378_; lean_object* v_r_2379_; lean_object* v_fst_2380_; lean_object* v_snd_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2391_; 
v_head_2377_ = lean_ctor_get(v_x_2371_, 0);
v_tail_2378_ = lean_ctor_get(v_x_2371_, 1);
v_r_2379_ = l_Lasm_UI_create___redArg(v_head_2377_, v_x_2372_);
v_fst_2380_ = lean_ctor_get(v_r_2379_, 0);
v_snd_2381_ = lean_ctor_get(v_r_2379_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_r_2379_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2383_ = v_r_2379_;
v_isShared_2384_ = v_isSharedCheck_2391_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_snd_2381_);
lean_inc(v_fst_2380_);
lean_dec(v_r_2379_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2391_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
lean_inc(v_before_2370_);
lean_inc(v_fst_2380_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v_before_2370_);
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_fst_2380_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_before_2370_);
v___x_2386_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = lean_array_push(v_x_2373_, v___x_2386_);
v___x_2388_ = lean_array_push(v_x_2374_, v_fst_2380_);
v_x_2371_ = v_tail_2378_;
v_x_2372_ = v_snd_2381_;
v_x_2373_ = v___x_2387_;
v_x_2374_ = v___x_2388_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_before_2392_, lean_object* v_x_2393_, lean_object* v_x_2394_, lean_object* v_x_2395_, lean_object* v_x_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v_before_2392_, v_x_2393_, v_x_2394_, v_x_2395_, v_x_2396_);
lean_dec(v_x_2393_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_na_2398_, lean_object* v_before_2399_, lean_object* v_lo_2400_, lean_object* v_hi_2401_, lean_object* v_n_2402_, lean_object* v_ops_2403_, lean_object* v_acc_2404_){
_start:
{
uint8_t v___x_2405_; 
v___x_2405_ = lean_nat_dec_lt(v_lo_2400_, v_hi_2401_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
lean_dec(v_lo_2400_);
lean_dec(v_before_2399_);
v___x_2406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2406_, 0, v_acc_2404_);
lean_ctor_set(v___x_2406_, 1, v_n_2402_);
v___x_2407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2407_, 0, v_ops_2403_);
lean_ctor_set(v___x_2407_, 1, v___x_2406_);
return v___x_2407_;
}
else
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = lean_array_get_size(v_na_2398_);
v___x_2409_ = lean_nat_dec_lt(v_lo_2400_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_dec(v_lo_2400_);
lean_dec(v_before_2399_);
v___x_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2410_, 0, v_acc_2404_);
lean_ctor_set(v___x_2410_, 1, v_n_2402_);
v___x_2411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2411_, 0, v_ops_2403_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
return v___x_2411_;
}
else
{
lean_object* v___x_2412_; lean_object* v_r_2413_; lean_object* v_fst_2414_; lean_object* v_snd_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2427_; 
v___x_2412_ = lean_array_fget_borrowed(v_na_2398_, v_lo_2400_);
v_r_2413_ = l_Lasm_UI_create___redArg(v___x_2412_, v_n_2402_);
v_fst_2414_ = lean_ctor_get(v_r_2413_, 0);
v_snd_2415_ = lean_ctor_get(v_r_2413_, 1);
v_isSharedCheck_2427_ = !lean_is_exclusive(v_r_2413_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2417_ = v_r_2413_;
v_isShared_2418_ = v_isSharedCheck_2427_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_snd_2415_);
lean_inc(v_fst_2414_);
lean_dec(v_r_2413_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2427_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2422_; 
v___x_2419_ = lean_unsigned_to_nat(1u);
v___x_2420_ = lean_nat_add(v_lo_2400_, v___x_2419_);
lean_dec(v_lo_2400_);
lean_inc(v_before_2399_);
lean_inc(v_fst_2414_);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 1, v_before_2399_);
v___x_2422_ = v___x_2417_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_fst_2414_);
lean_ctor_set(v_reuseFailAlloc_2426_, 1, v_before_2399_);
v___x_2422_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = lean_array_push(v_ops_2403_, v___x_2422_);
v___x_2424_ = lean_array_push(v_acc_2404_, v_fst_2414_);
v_lo_2400_ = v___x_2420_;
v_n_2402_ = v_snd_2415_;
v_ops_2403_ = v___x_2423_;
v_acc_2404_ = v___x_2424_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_na_2428_, lean_object* v_before_2429_, lean_object* v_lo_2430_, lean_object* v_hi_2431_, lean_object* v_n_2432_, lean_object* v_ops_2433_, lean_object* v_acc_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2428_, v_before_2429_, v_lo_2430_, v_hi_2431_, v_n_2432_, v_ops_2433_, v_acc_2434_);
lean_dec(v_hi_2431_);
lean_dec_ref(v_na_2428_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(lean_object* v_oa_2436_, lean_object* v_oLo_2437_, lean_object* v_oHi_2438_, lean_object* v_na_2439_, lean_object* v_nLo_2440_, lean_object* v_nHi_2441_, lean_object* v_pre_2442_, lean_object* v_suf_2443_, lean_object* v_ops_2444_, lean_object* v_next_2445_, lean_object* v_keys_2446_){
_start:
{
lean_object* v___y_2448_; lean_object* v___y_2458_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; uint8_t v___x_2479_; 
v___x_2479_ = lean_nat_dec_lt(v_oLo_2437_, v_oHi_2438_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; 
lean_dec(v_keys_2446_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
v___x_2480_ = l_List_head_x3f___redArg(v_suf_2443_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_box(0);
v___y_2448_ = v___x_2481_;
goto v___jp_2447_;
}
else
{
lean_object* v_val_2482_; lean_object* v_id_2483_; 
v_val_2482_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_val_2482_);
lean_dec_ref_known(v___x_2480_, 1);
v_id_2483_ = lean_ctor_get(v_val_2482_, 0);
lean_inc(v_id_2483_);
lean_dec(v_val_2482_);
v___y_2458_ = v_id_2483_;
goto v___jp_2457_;
}
}
else
{
uint8_t v___x_2484_; 
v___x_2484_ = lean_nat_dec_lt(v_nLo_2440_, v_nHi_2441_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
v___x_2485_ = l_Lasm_UI_removeRange___redArg(v_oa_2436_, v_oLo_2437_, v_oHi_2438_, v_ops_2444_);
lean_dec(v_oHi_2438_);
lean_dec_ref(v_oa_2436_);
v___x_2486_ = lean_array_to_list(v_pre_2442_);
v___x_2487_ = l_List_appendTR___redArg(v___x_2486_, v_suf_2443_);
v___x_2488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2485_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
lean_ctor_set(v___x_2488_, 2, v_next_2445_);
return v___x_2488_;
}
else
{
lean_object* v___x_2489_; uint8_t v___x_2490_; 
v___x_2489_ = lean_array_get_size(v_oa_2436_);
v___x_2490_ = lean_nat_dec_lt(v_oLo_2437_, v___x_2489_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2491_ = lean_unsigned_to_nat(1u);
v___x_2492_ = lean_nat_sub(v_oHi_2438_, v___x_2491_);
v___x_2493_ = lean_nat_dec_lt(v___x_2492_, v___x_2489_);
if (v___x_2493_ == 0)
{
lean_dec(v___x_2492_);
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
goto v___jp_2464_;
}
else
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_array_fget_borrowed(v_oa_2436_, v___x_2492_);
lean_dec(v___x_2492_);
if (lean_obj_tag(v___x_2494_) == 0)
{
goto v___jp_2460_;
}
else
{
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
goto v___jp_2464_;
}
}
}
else
{
lean_object* v___x_2495_; 
v___x_2495_ = lean_array_fget(v_oa_2436_, v_oLo_2437_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_unsigned_to_nat(1u);
v___x_2497_ = lean_nat_add(v_oLo_2437_, v___x_2496_);
lean_dec(v_oLo_2437_);
v_oLo_2437_ = v___x_2497_;
goto _start;
}
else
{
lean_object* v_val_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2676_; 
v_val_2499_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2501_ = v___x_2495_;
v_isShared_2502_ = v_isSharedCheck_2676_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_val_2499_);
lean_dec(v___x_2495_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2676_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2503_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___x_2530_; uint8_t v___x_2531_; 
v___x_2503_ = lean_unsigned_to_nat(1u);
v___x_2530_ = lean_nat_sub(v_oHi_2438_, v___x_2503_);
v___x_2531_ = lean_nat_dec_lt(v___x_2530_, v___x_2489_);
if (v___x_2531_ == 0)
{
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
goto v___jp_2464_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_array_fget(v_oa_2436_, v___x_2530_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
goto v___jp_2460_;
}
else
{
lean_object* v_val_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2675_; 
v_val_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2675_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_val_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2675_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; uint8_t v___x_2538_; 
v___x_2537_ = lean_array_get_size(v_na_2439_);
v___x_2538_ = lean_nat_dec_lt(v_nLo_2440_, v___x_2537_);
if (v___x_2538_ == 0)
{
lean_del_object(v___x_2535_);
lean_dec(v_val_2533_);
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
goto v___jp_2464_;
}
else
{
lean_object* v___x_2539_; uint8_t v___x_2540_; 
v___x_2539_ = lean_nat_sub(v_nHi_2441_, v___x_2503_);
v___x_2540_ = lean_nat_dec_lt(v___x_2539_, v___x_2537_);
if (v___x_2540_ == 0)
{
lean_dec(v___x_2539_);
lean_del_object(v___x_2535_);
lean_dec(v_val_2533_);
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
lean_dec(v_keys_2446_);
lean_dec(v_nHi_2441_);
lean_dec(v_nLo_2440_);
lean_dec(v_oHi_2438_);
lean_dec(v_oLo_2437_);
lean_dec_ref(v_oa_2436_);
goto v___jp_2464_;
}
else
{
lean_object* v___x_2541_; lean_object* v_fst_2543_; lean_object* v___y_2551_; lean_object* v_fst_2556_; lean_object* v_fst_2557_; lean_object* v_snd_2558_; lean_object* v___y_2566_; uint8_t v___x_2573_; 
v___x_2541_ = lean_array_fget_borrowed(v_na_2439_, v_nLo_2440_);
v___x_2573_ = l_Lasm_UI_Live_same___redArg(v_val_2499_, v___x_2541_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; uint8_t v___x_2575_; 
v___x_2574_ = lean_array_fget_borrowed(v_na_2439_, v___x_2539_);
v___x_2575_ = l_Lasm_UI_Live_same___redArg(v_val_2533_, v___x_2574_);
if (v___x_2575_ == 0)
{
uint8_t v___x_2576_; 
v___x_2576_ = l_Lasm_UI_Live_same___redArg(v_val_2499_, v___x_2574_);
if (v___x_2576_ == 0)
{
uint8_t v___x_2577_; 
lean_dec(v___x_2539_);
v___x_2577_ = l_Lasm_UI_Live_same___redArg(v_val_2533_, v___x_2541_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; 
lean_dec(v_val_2533_);
lean_dec(v___x_2530_);
v___x_2578_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_2541_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_del_object(v___x_2535_);
lean_del_object(v___x_2501_);
v_fst_2543_ = v_keys_2446_;
goto v___jp_2542_;
}
else
{
lean_object* v_val_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2616_; 
v_val_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2616_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_val_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2616_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___y_2584_; 
if (lean_obj_tag(v_keys_2446_) == 0)
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_2437_);
v___x_2614_ = l_Lasm_UI_keyIndex___redArg(v_oa_2436_, v_oLo_2437_, v_oHi_2438_, v___x_2613_);
v___y_2584_ = v___x_2614_;
goto v___jp_2583_;
}
else
{
lean_object* v_val_2615_; 
v_val_2615_ = lean_ctor_get(v_keys_2446_, 0);
lean_inc(v_val_2615_);
lean_dec_ref_known(v_keys_2446_, 1);
v___y_2584_ = v_val_2615_;
goto v___jp_2583_;
}
v___jp_2583_:
{
lean_object* v___x_2585_; 
v___x_2585_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v___y_2584_, v_val_2579_);
lean_dec(v_val_2579_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v___x_2587_; 
lean_del_object(v___x_2535_);
lean_del_object(v___x_2501_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___y_2584_);
v___x_2587_ = v___x_2581_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___y_2584_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
v_fst_2543_ = v___x_2587_;
goto v___jp_2542_;
}
}
else
{
lean_object* v_val_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2612_; 
lean_del_object(v___x_2581_);
v_val_2589_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2591_ = v___x_2585_;
v_isShared_2592_ = v_isSharedCheck_2612_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_val_2589_);
lean_dec(v___x_2585_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2612_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
uint8_t v___x_2593_; 
v___x_2593_ = lean_nat_dec_le(v_oLo_2437_, v_val_2589_);
if (v___x_2593_ == 0)
{
lean_del_object(v___x_2591_);
lean_dec(v_val_2589_);
lean_del_object(v___x_2501_);
v___y_2551_ = v___y_2584_;
goto v___jp_2550_;
}
else
{
uint8_t v___x_2594_; 
v___x_2594_ = lean_nat_dec_lt(v_val_2589_, v_oHi_2438_);
if (v___x_2594_ == 0)
{
lean_del_object(v___x_2591_);
lean_dec(v_val_2589_);
lean_del_object(v___x_2501_);
v___y_2551_ = v___y_2584_;
goto v___jp_2550_;
}
else
{
uint8_t v___x_2595_; 
lean_del_object(v___x_2535_);
v___x_2595_ = lean_nat_dec_lt(v_val_2589_, v___x_2489_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
lean_del_object(v___x_2591_);
lean_dec(v_val_2589_);
v___x_2596_ = lean_box(0);
v___x_2597_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_2584_, v___x_2596_);
v___y_2566_ = v___x_2597_;
goto v___jp_2565_;
}
else
{
lean_object* v___x_2598_; 
v___x_2598_ = lean_array_fget(v_oa_2436_, v_val_2589_);
if (lean_obj_tag(v___x_2598_) == 1)
{
lean_object* v_val_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2607_; 
lean_del_object(v___x_2591_);
v_val_2599_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2601_ = v___x_2598_;
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_val_2599_);
lean_dec(v___x_2598_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 0, v___y_2584_);
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___y_2584_);
v___x_2604_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
uint8_t v___x_2605_; 
v___x_2605_ = l_Lasm_UI_Live_same___redArg(v_val_2599_, v___x_2541_);
if (v___x_2605_ == 0)
{
lean_dec(v_val_2599_);
lean_dec(v_val_2589_);
lean_del_object(v___x_2501_);
v_fst_2543_ = v___x_2604_;
goto v___jp_2542_;
}
else
{
v_fst_2556_ = v___x_2604_;
v_fst_2557_ = v_val_2589_;
v_snd_2558_ = v_val_2599_;
goto v___jp_2555_;
}
}
}
}
else
{
lean_object* v___x_2609_; 
lean_dec(v_val_2589_);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v___x_2598_);
v___x_2609_ = v___x_2591_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2598_);
v___x_2609_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_2584_, v___x_2609_);
lean_dec_ref(v___x_2609_);
v___y_2566_ = v___x_2610_;
goto v___jp_2565_;
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
else
{
lean_object* v_r_2617_; lean_object* v_ops_2618_; lean_object* v_live_2619_; lean_object* v_next_2620_; lean_object* v___x_2621_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2632_; lean_object* v_id_2634_; 
lean_del_object(v___x_2535_);
lean_del_object(v___x_2501_);
lean_dec(v_oHi_2438_);
lean_inc(v___x_2541_);
lean_inc(v_val_2533_);
v_r_2617_ = l_Lasm_UI_diffNode___redArg(v_val_2533_, v___x_2541_, v_next_2445_);
v_ops_2618_ = lean_ctor_get(v_r_2617_, 0);
lean_inc(v_ops_2618_);
v_live_2619_ = lean_ctor_get(v_r_2617_, 1);
lean_inc_ref(v_live_2619_);
v_next_2620_ = lean_ctor_get(v_r_2617_, 2);
lean_inc(v_next_2620_);
lean_dec_ref(v_r_2617_);
v___x_2621_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2444_, v_ops_2618_);
v_id_2634_ = lean_ctor_get(v_val_2533_, 0);
lean_inc(v_id_2634_);
lean_dec(v_val_2533_);
v___y_2632_ = v_id_2634_;
goto v___jp_2631_;
v___jp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v_ops_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___y_2624_);
v___x_2626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___y_2623_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v_ops_2627_ = lean_array_push(v___x_2621_, v___x_2626_);
v___x_2628_ = lean_nat_add(v_nLo_2440_, v___x_2503_);
lean_dec(v_nLo_2440_);
v___x_2629_ = lean_array_push(v_pre_2442_, v_live_2619_);
v_oHi_2438_ = v___x_2530_;
v_nLo_2440_ = v___x_2628_;
v_pre_2442_ = v___x_2629_;
v_ops_2444_ = v_ops_2627_;
v_next_2445_ = v_next_2620_;
goto _start;
}
v___jp_2631_:
{
lean_object* v_id_2633_; 
v_id_2633_ = lean_ctor_get(v_val_2499_, 0);
lean_inc(v_id_2633_);
lean_dec(v_val_2499_);
v___y_2623_ = v___y_2632_;
v___y_2624_ = v_id_2633_;
goto v___jp_2622_;
}
}
}
else
{
lean_object* v_r_2635_; lean_object* v_ops_2636_; lean_object* v_live_2637_; lean_object* v_next_2638_; lean_object* v___x_2639_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2653_; lean_object* v_id_2658_; 
lean_del_object(v___x_2535_);
lean_dec(v_val_2533_);
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_dec(v_nHi_2441_);
lean_inc(v___x_2574_);
lean_inc(v_val_2499_);
v_r_2635_ = l_Lasm_UI_diffNode___redArg(v_val_2499_, v___x_2574_, v_next_2445_);
v_ops_2636_ = lean_ctor_get(v_r_2635_, 0);
lean_inc(v_ops_2636_);
v_live_2637_ = lean_ctor_get(v_r_2635_, 1);
lean_inc_ref(v_live_2637_);
v_next_2638_ = lean_ctor_get(v_r_2635_, 2);
lean_inc(v_next_2638_);
lean_dec_ref(v_r_2635_);
v___x_2639_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2444_, v_ops_2636_);
v_id_2658_ = lean_ctor_get(v_val_2499_, 0);
lean_inc(v_id_2658_);
lean_dec(v_val_2499_);
v___y_2653_ = v_id_2658_;
goto v___jp_2652_;
v___jp_2640_:
{
lean_object* v___x_2643_; lean_object* v_ops_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___y_2641_);
lean_ctor_set(v___x_2643_, 1, v___y_2642_);
v_ops_2644_ = lean_array_push(v___x_2639_, v___x_2643_);
v___x_2645_ = lean_nat_add(v_oLo_2437_, v___x_2503_);
lean_dec(v_oLo_2437_);
v___x_2646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2646_, 0, v_live_2637_);
lean_ctor_set(v___x_2646_, 1, v_suf_2443_);
v_oLo_2437_ = v___x_2645_;
v_nHi_2441_ = v___x_2539_;
v_suf_2443_ = v___x_2646_;
v_ops_2444_ = v_ops_2644_;
v_next_2445_ = v_next_2638_;
goto _start;
}
v___jp_2648_:
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___y_2650_);
v___y_2641_ = v___y_2649_;
v___y_2642_ = v___x_2651_;
goto v___jp_2640_;
}
v___jp_2652_:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_List_head_x3f___redArg(v_suf_2443_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v___x_2655_; 
v___x_2655_ = lean_box(0);
v___y_2641_ = v___y_2653_;
v___y_2642_ = v___x_2655_;
goto v___jp_2640_;
}
else
{
lean_object* v_val_2656_; lean_object* v_id_2657_; 
v_val_2656_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_val_2656_);
lean_dec_ref_known(v___x_2654_, 1);
v_id_2657_ = lean_ctor_get(v_val_2656_, 0);
lean_inc(v_id_2657_);
lean_dec(v_val_2656_);
v___y_2649_ = v___y_2653_;
v___y_2650_ = v_id_2657_;
goto v___jp_2648_;
}
}
}
}
else
{
lean_object* v_r_2659_; lean_object* v_ops_2660_; lean_object* v_live_2661_; lean_object* v_next_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
lean_del_object(v___x_2535_);
lean_del_object(v___x_2501_);
lean_dec(v_val_2499_);
lean_dec(v_nHi_2441_);
lean_dec(v_oHi_2438_);
lean_inc(v___x_2574_);
v_r_2659_ = l_Lasm_UI_diffNode___redArg(v_val_2533_, v___x_2574_, v_next_2445_);
v_ops_2660_ = lean_ctor_get(v_r_2659_, 0);
lean_inc(v_ops_2660_);
v_live_2661_ = lean_ctor_get(v_r_2659_, 1);
lean_inc_ref(v_live_2661_);
v_next_2662_ = lean_ctor_get(v_r_2659_, 2);
lean_inc(v_next_2662_);
lean_dec_ref(v_r_2659_);
v___x_2663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2663_, 0, v_live_2661_);
lean_ctor_set(v___x_2663_, 1, v_suf_2443_);
v___x_2664_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2444_, v_ops_2660_);
v_oHi_2438_ = v___x_2530_;
v_nHi_2441_ = v___x_2539_;
v_suf_2443_ = v___x_2663_;
v_ops_2444_ = v___x_2664_;
v_next_2445_ = v_next_2662_;
goto _start;
}
}
else
{
lean_object* v_r_2666_; lean_object* v_ops_2667_; lean_object* v_live_2668_; lean_object* v_next_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
lean_dec(v___x_2539_);
lean_del_object(v___x_2535_);
lean_dec(v_val_2533_);
lean_dec(v___x_2530_);
lean_del_object(v___x_2501_);
lean_inc(v___x_2541_);
v_r_2666_ = l_Lasm_UI_diffNode___redArg(v_val_2499_, v___x_2541_, v_next_2445_);
v_ops_2667_ = lean_ctor_get(v_r_2666_, 0);
lean_inc(v_ops_2667_);
v_live_2668_ = lean_ctor_get(v_r_2666_, 1);
lean_inc_ref(v_live_2668_);
v_next_2669_ = lean_ctor_get(v_r_2666_, 2);
lean_inc(v_next_2669_);
lean_dec_ref(v_r_2666_);
v___x_2670_ = lean_nat_add(v_oLo_2437_, v___x_2503_);
lean_dec(v_oLo_2437_);
v___x_2671_ = lean_nat_add(v_nLo_2440_, v___x_2503_);
lean_dec(v_nLo_2440_);
v___x_2672_ = lean_array_push(v_pre_2442_, v_live_2668_);
v___x_2673_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2444_, v_ops_2667_);
v_oLo_2437_ = v___x_2670_;
v_nLo_2440_ = v___x_2671_;
v_pre_2442_ = v___x_2672_;
v_ops_2444_ = v___x_2673_;
v_next_2445_ = v_next_2669_;
goto _start;
}
v___jp_2542_:
{
lean_object* v_c_2544_; lean_object* v_fst_2545_; lean_object* v_snd_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v_id_2549_; 
v_c_2544_ = l_Lasm_UI_create___redArg(v___x_2541_, v_next_2445_);
v_fst_2545_ = lean_ctor_get(v_c_2544_, 0);
lean_inc_n(v_fst_2545_, 2);
v_snd_2546_ = lean_ctor_get(v_c_2544_, 1);
lean_inc(v_snd_2546_);
lean_dec_ref(v_c_2544_);
v___x_2547_ = lean_nat_add(v_nLo_2440_, v___x_2503_);
lean_dec(v_nLo_2440_);
v___x_2548_ = lean_array_push(v_pre_2442_, v_fst_2545_);
v_id_2549_ = lean_ctor_get(v_val_2499_, 0);
lean_inc(v_id_2549_);
lean_dec(v_val_2499_);
v___y_2469_ = v___x_2547_;
v___y_2470_ = v_snd_2546_;
v___y_2471_ = v_fst_2543_;
v___y_2472_ = v_fst_2545_;
v___y_2473_ = v___x_2548_;
v___y_2474_ = v_id_2549_;
goto v___jp_2468_;
}
v___jp_2550_:
{
lean_object* v___x_2553_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___y_2551_);
v___x_2553_ = v___x_2535_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v___y_2551_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
v_fst_2543_ = v___x_2553_;
goto v___jp_2542_;
}
}
v___jp_2555_:
{
lean_object* v_r_2559_; lean_object* v_ops_2560_; lean_object* v_live_2561_; lean_object* v_next_2562_; lean_object* v___x_2563_; lean_object* v_id_2564_; 
lean_inc(v___x_2541_);
lean_inc_ref(v_snd_2558_);
v_r_2559_ = l_Lasm_UI_diffNode___redArg(v_snd_2558_, v___x_2541_, v_next_2445_);
v_ops_2560_ = lean_ctor_get(v_r_2559_, 0);
lean_inc(v_ops_2560_);
v_live_2561_ = lean_ctor_get(v_r_2559_, 1);
lean_inc_ref(v_live_2561_);
v_next_2562_ = lean_ctor_get(v_r_2559_, 2);
lean_inc(v_next_2562_);
lean_dec_ref(v_r_2559_);
v___x_2563_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2444_, v_ops_2560_);
v_id_2564_ = lean_ctor_get(v_snd_2558_, 0);
lean_inc(v_id_2564_);
lean_dec_ref(v_snd_2558_);
v___y_2523_ = v_next_2562_;
v___y_2524_ = v_live_2561_;
v___y_2525_ = v_fst_2556_;
v___y_2526_ = v_fst_2557_;
v___y_2527_ = v___x_2563_;
v___y_2528_ = v_id_2564_;
goto v___jp_2522_;
}
v___jp_2565_:
{
lean_object* v_snd_2567_; 
v_snd_2567_ = lean_ctor_get(v___y_2566_, 1);
if (lean_obj_tag(v_snd_2567_) == 0)
{
lean_object* v_fst_2568_; 
lean_del_object(v___x_2501_);
v_fst_2568_ = lean_ctor_get(v___y_2566_, 0);
lean_inc(v_fst_2568_);
lean_dec_ref(v___y_2566_);
v_fst_2543_ = v_fst_2568_;
goto v___jp_2542_;
}
else
{
lean_object* v_val_2569_; lean_object* v_fst_2570_; lean_object* v_fst_2571_; lean_object* v_snd_2572_; 
v_val_2569_ = lean_ctor_get(v_snd_2567_, 0);
lean_inc(v_val_2569_);
v_fst_2570_ = lean_ctor_get(v___y_2566_, 0);
lean_inc(v_fst_2570_);
lean_dec_ref(v___y_2566_);
v_fst_2571_ = lean_ctor_get(v_val_2569_, 0);
lean_inc(v_fst_2571_);
v_snd_2572_ = lean_ctor_get(v_val_2569_, 1);
lean_inc(v_snd_2572_);
lean_dec(v_val_2569_);
v_fst_2556_ = v_fst_2570_;
v_fst_2557_ = v_fst_2571_;
v_snd_2558_ = v_snd_2572_;
goto v___jp_2555_;
}
}
}
}
}
}
}
v___jp_2504_:
{
lean_object* v___x_2513_; 
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 0, v___y_2511_);
v___x_2513_ = v___x_2501_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___y_2511_);
v___x_2513_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
lean_object* v___x_2514_; lean_object* v_ops_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___y_2506_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
v_ops_2515_ = lean_array_push(v___y_2510_, v___x_2514_);
v___x_2516_ = lean_box(0);
v___x_2517_ = lean_array_set(v_oa_2436_, v___y_2509_, v___x_2516_);
lean_dec(v___y_2509_);
v___x_2518_ = lean_nat_add(v_nLo_2440_, v___x_2503_);
lean_dec(v_nLo_2440_);
v___x_2519_ = lean_array_push(v_pre_2442_, v___y_2508_);
v_oa_2436_ = v___x_2517_;
v_nLo_2440_ = v___x_2518_;
v_pre_2442_ = v___x_2519_;
v_ops_2444_ = v_ops_2515_;
v_next_2445_ = v___y_2505_;
v_keys_2446_ = v___y_2507_;
goto _start;
}
}
v___jp_2522_:
{
lean_object* v_id_2529_; 
v_id_2529_ = lean_ctor_get(v_val_2499_, 0);
lean_inc(v_id_2529_);
lean_dec(v_val_2499_);
v___y_2505_ = v___y_2523_;
v___y_2506_ = v___y_2528_;
v___y_2507_ = v___y_2525_;
v___y_2508_ = v___y_2524_;
v___y_2509_ = v___y_2526_;
v___y_2510_ = v___y_2527_;
v___y_2511_ = v_id_2529_;
goto v___jp_2504_;
}
}
}
}
}
}
v___jp_2447_:
{
lean_object* v_r_2449_; lean_object* v_snd_2450_; lean_object* v_fst_2451_; lean_object* v_fst_2452_; lean_object* v_snd_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_r_2449_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2439_, v___y_2448_, v_nLo_2440_, v_nHi_2441_, v_next_2445_, v_ops_2444_, v_pre_2442_);
lean_dec(v_nHi_2441_);
v_snd_2450_ = lean_ctor_get(v_r_2449_, 1);
lean_inc(v_snd_2450_);
v_fst_2451_ = lean_ctor_get(v_r_2449_, 0);
lean_inc(v_fst_2451_);
lean_dec_ref(v_r_2449_);
v_fst_2452_ = lean_ctor_get(v_snd_2450_, 0);
lean_inc(v_fst_2452_);
v_snd_2453_ = lean_ctor_get(v_snd_2450_, 1);
lean_inc(v_snd_2453_);
lean_dec(v_snd_2450_);
v___x_2454_ = lean_array_to_list(v_fst_2452_);
v___x_2455_ = l_List_appendTR___redArg(v___x_2454_, v_suf_2443_);
v___x_2456_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2456_, 0, v_fst_2451_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
lean_ctor_set(v___x_2456_, 2, v_snd_2453_);
return v___x_2456_;
}
v___jp_2457_:
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___y_2458_);
v___y_2448_ = v___x_2459_;
goto v___jp_2447_;
}
v___jp_2460_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = lean_unsigned_to_nat(1u);
v___x_2462_ = lean_nat_sub(v_oHi_2438_, v___x_2461_);
lean_dec(v_oHi_2438_);
v_oHi_2438_ = v___x_2462_;
goto _start;
}
v___jp_2464_:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2465_ = lean_array_to_list(v_pre_2442_);
v___x_2466_ = l_List_appendTR___redArg(v___x_2465_, v_suf_2443_);
v___x_2467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2467_, 0, v_ops_2444_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
lean_ctor_set(v___x_2467_, 2, v_next_2445_);
return v___x_2467_;
}
v___jp_2468_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2475_, 0, v___y_2474_);
v___x_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___y_2472_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
v___x_2477_ = lean_array_push(v_ops_2444_, v___x_2476_);
v_nLo_2440_ = v___y_2469_;
v_pre_2442_ = v___y_2473_;
v_ops_2444_ = v___x_2477_;
v_next_2445_ = v___y_2470_;
v_keys_2446_ = v___y_2471_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_oa_2677_, lean_object* v_oLo_2678_, lean_object* v_oHi_2679_, lean_object* v_na_2680_, lean_object* v_nLo_2681_, lean_object* v_nHi_2682_, lean_object* v_pre_2683_, lean_object* v_suf_2684_, lean_object* v_ops_2685_, lean_object* v_next_2686_, lean_object* v_keys_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2677_, v_oLo_2678_, v_oHi_2679_, v_na_2680_, v_nLo_2681_, v_nHi_2682_, v_pre_2683_, v_suf_2684_, v_ops_2685_, v_next_2686_, v_keys_2687_);
lean_dec_ref(v_na_2680_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(lean_object* v_x_2689_, lean_object* v_x_2690_, lean_object* v_x_2691_, lean_object* v_x_2692_, lean_object* v_x_2693_){
_start:
{
if (lean_obj_tag(v_x_2689_) == 0)
{
lean_object* v___x_2694_; lean_object* v_r_2695_; lean_object* v_snd_2696_; lean_object* v_fst_2697_; lean_object* v_fst_2698_; lean_object* v_snd_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2694_ = lean_box(0);
v_r_2695_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v___x_2694_, v_x_2690_, v_x_2691_, v_x_2692_, v_x_2693_);
lean_dec(v_x_2690_);
v_snd_2696_ = lean_ctor_get(v_r_2695_, 1);
lean_inc(v_snd_2696_);
v_fst_2697_ = lean_ctor_get(v_r_2695_, 0);
lean_inc(v_fst_2697_);
lean_dec_ref(v_r_2695_);
v_fst_2698_ = lean_ctor_get(v_snd_2696_, 0);
lean_inc(v_fst_2698_);
v_snd_2699_ = lean_ctor_get(v_snd_2696_, 1);
lean_inc(v_snd_2699_);
lean_dec(v_snd_2696_);
v___x_2700_ = lean_array_to_list(v_fst_2698_);
v___x_2701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2701_, 0, v_fst_2697_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
lean_ctor_set(v___x_2701_, 2, v_snd_2699_);
return v___x_2701_;
}
else
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2702_ = l_Lasm_UI_removeAll___redArg(v_x_2689_, v_x_2692_);
v___x_2703_ = lean_array_to_list(v_x_2693_);
v___x_2704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
lean_ctor_set(v___x_2704_, 2, v_x_2691_);
return v___x_2704_;
}
else
{
lean_object* v_head_2705_; lean_object* v_tail_2706_; lean_object* v_head_2707_; lean_object* v_tail_2708_; uint8_t v___x_2709_; 
v_head_2705_ = lean_ctor_get(v_x_2689_, 0);
v_tail_2706_ = lean_ctor_get(v_x_2689_, 1);
v_head_2707_ = lean_ctor_get(v_x_2690_, 0);
v_tail_2708_ = lean_ctor_get(v_x_2690_, 1);
v___x_2709_ = l_Lasm_UI_Live_same___redArg(v_head_2705_, v_head_2707_);
if (v___x_2709_ == 0)
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v_oa_2712_; lean_object* v_na_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2710_ = lean_box(0);
v___x_2711_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_x_2689_, v___x_2710_);
v_oa_2712_ = lean_array_mk(v___x_2711_);
v_na_2713_ = lean_array_mk(v_x_2690_);
v___x_2714_ = lean_unsigned_to_nat(0u);
v___x_2715_ = lean_array_get_size(v_oa_2712_);
v___x_2716_ = lean_array_get_size(v_na_2713_);
v___x_2717_ = lean_box(0);
v___x_2718_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2712_, v___x_2714_, v___x_2715_, v_na_2713_, v___x_2714_, v___x_2716_, v_x_2693_, v___x_2710_, v_x_2692_, v_x_2691_, v___x_2717_);
lean_dec_ref(v_na_2713_);
return v___x_2718_;
}
else
{
lean_object* v_r_2719_; lean_object* v_ops_2720_; lean_object* v_live_2721_; lean_object* v_next_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_inc(v_tail_2708_);
lean_inc(v_head_2707_);
lean_inc(v_tail_2706_);
lean_inc(v_head_2705_);
lean_dec_ref_known(v_x_2690_, 2);
lean_dec_ref_known(v_x_2689_, 2);
v_r_2719_ = l_Lasm_UI_diffNode___redArg(v_head_2705_, v_head_2707_, v_x_2691_);
v_ops_2720_ = lean_ctor_get(v_r_2719_, 0);
lean_inc(v_ops_2720_);
v_live_2721_ = lean_ctor_get(v_r_2719_, 1);
lean_inc_ref(v_live_2721_);
v_next_2722_ = lean_ctor_get(v_r_2719_, 2);
lean_inc(v_next_2722_);
lean_dec_ref(v_r_2719_);
v___x_2723_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_2692_, v_ops_2720_);
v___x_2724_ = lean_array_push(v_x_2693_, v_live_2721_);
v_x_2689_ = v_tail_2706_;
v_x_2690_ = v_tail_2708_;
v_x_2691_ = v_next_2722_;
v_x_2692_ = v___x_2723_;
v_x_2693_ = v___x_2724_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(lean_object* v_old_2726_, lean_object* v_new_2727_, lean_object* v_next_2728_){
_start:
{
lean_object* v_old_2730_; lean_object* v_new_2731_; 
if (lean_obj_tag(v_old_2726_) == 0)
{
if (lean_obj_tag(v_new_2727_) == 0)
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2737_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2736_);
lean_ctor_set(v___x_2737_, 1, v_old_2726_);
lean_ctor_set(v___x_2737_, 2, v_next_2728_);
return v___x_2737_;
}
else
{
v_old_2730_ = v_old_2726_;
v_new_2731_ = v_new_2727_;
goto v___jp_2729_;
}
}
else
{
if (lean_obj_tag(v_new_2727_) == 0)
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
lean_dec_ref_known(v_old_2726_, 2);
v___x_2738_ = lean_unsigned_to_nat(1u);
v___x_2739_ = lean_mk_empty_array_with_capacity(v___x_2738_);
lean_dec_ref(v___x_2739_);
v___x_2740_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_2741_ = lean_box(0);
v___x_2742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
lean_ctor_set(v___x_2742_, 2, v_next_2728_);
return v___x_2742_;
}
else
{
lean_object* v_tail_2743_; 
v_tail_2743_ = lean_ctor_get(v_new_2727_, 1);
if (lean_obj_tag(v_tail_2743_) == 0)
{
lean_object* v_tail_2744_; 
v_tail_2744_ = lean_ctor_get(v_old_2726_, 1);
if (lean_obj_tag(v_tail_2744_) == 0)
{
lean_object* v_head_2745_; lean_object* v_head_2746_; uint8_t v___x_2747_; 
v_head_2745_ = lean_ctor_get(v_old_2726_, 0);
v_head_2746_ = lean_ctor_get(v_new_2727_, 0);
v___x_2747_ = l_Lasm_UI_Live_same___redArg(v_head_2745_, v_head_2746_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2748_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2749_ = lean_unsigned_to_nat(1u);
v___x_2750_ = lean_mk_empty_array_with_capacity(v___x_2749_);
v___x_2751_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(v_old_2726_, v_new_2727_, v_next_2728_, v___x_2748_, v___x_2750_);
return v___x_2751_;
}
else
{
lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2774_; 
lean_inc(v_head_2746_);
lean_inc(v_tail_2744_);
lean_inc(v_head_2745_);
lean_dec_ref_known(v_old_2726_, 2);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_new_2727_);
if (v_isSharedCheck_2774_ == 0)
{
lean_object* v_unused_2775_; lean_object* v_unused_2776_; 
v_unused_2775_ = lean_ctor_get(v_new_2727_, 1);
lean_dec(v_unused_2775_);
v_unused_2776_ = lean_ctor_get(v_new_2727_, 0);
lean_dec(v_unused_2776_);
v___x_2753_ = v_new_2727_;
v_isShared_2754_ = v_isSharedCheck_2774_;
goto v_resetjp_2752_;
}
else
{
lean_dec(v_new_2727_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2774_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v_r_2755_; lean_object* v_ops_2756_; lean_object* v_live_2757_; lean_object* v_next_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2773_; 
v_r_2755_ = l_Lasm_UI_diffNode___redArg(v_head_2745_, v_head_2746_, v_next_2728_);
v_ops_2756_ = lean_ctor_get(v_r_2755_, 0);
v_live_2757_ = lean_ctor_get(v_r_2755_, 1);
v_next_2758_ = lean_ctor_get(v_r_2755_, 2);
v_isSharedCheck_2773_ = !lean_is_exclusive(v_r_2755_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2760_ = v_r_2755_;
v_isShared_2761_ = v_isSharedCheck_2773_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_next_2758_);
lean_inc(v_live_2757_);
lean_inc(v_ops_2756_);
lean_dec(v_r_2755_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2773_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___y_2763_; uint8_t v___x_2770_; 
v___x_2770_ = l_List_isEmpty___redArg(v_ops_2756_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_array_mk(v_ops_2756_);
v___y_2763_ = v___x_2771_;
goto v___jp_2762_;
}
else
{
lean_object* v___x_2772_; 
lean_dec(v_ops_2756_);
v___x_2772_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___y_2763_ = v___x_2772_;
goto v___jp_2762_;
}
v___jp_2762_:
{
lean_object* v___x_2765_; 
if (v_isShared_2754_ == 0)
{
lean_ctor_set(v___x_2753_, 1, v_tail_2744_);
lean_ctor_set(v___x_2753_, 0, v_live_2757_);
v___x_2765_ = v___x_2753_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_live_2757_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v_tail_2744_);
v___x_2765_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2767_; 
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 1, v___x_2765_);
lean_ctor_set(v___x_2760_, 0, v___y_2763_);
v___x_2767_ = v___x_2760_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v___y_2763_);
lean_ctor_set(v_reuseFailAlloc_2768_, 1, v___x_2765_);
lean_ctor_set(v_reuseFailAlloc_2768_, 2, v_next_2758_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
}
}
}
else
{
v_old_2730_ = v_old_2726_;
v_new_2731_ = v_new_2727_;
goto v___jp_2729_;
}
}
else
{
v_old_2730_ = v_old_2726_;
v_new_2731_ = v_new_2727_;
goto v___jp_2729_;
}
}
}
v___jp_2729_:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2732_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2733_ = l_List_lengthTR___redArg(v_new_2731_);
v___x_2734_ = lean_mk_empty_array_with_capacity(v___x_2733_);
lean_dec(v___x_2733_);
v___x_2735_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(v_old_2730_, v_new_2731_, v_next_2728_, v___x_2732_, v___x_2734_);
return v___x_2735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object* v_old_2777_, lean_object* v_new_2778_, lean_object* v_next_2779_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2777_, v_new_2778_, v_next_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object* v_Msg_2781_, lean_object* v_old_2782_, lean_object* v_new_2783_, lean_object* v_next_2784_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2782_, v_new_2783_, v_next_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0(lean_object* v_Msg_2786_, lean_object* v_old_2787_, lean_object* v_new_2788_, lean_object* v_next_2789_){
_start:
{
lean_object* v___x_2790_; 
v___x_2790_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2787_, v_new_2788_, v_next_2789_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0(lean_object* v_Msg_2791_, lean_object* v_x_2792_, lean_object* v_x_2793_, lean_object* v_x_2794_, lean_object* v_x_2795_, lean_object* v_x_2796_){
_start:
{
lean_object* v___x_2797_; 
v___x_2797_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(v_x_2792_, v_x_2793_, v_x_2794_, v_x_2795_, v_x_2796_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1(lean_object* v_Msg_2798_, lean_object* v_before_2799_, lean_object* v_x_2800_, lean_object* v_x_2801_, lean_object* v_x_2802_, lean_object* v_x_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v_before_2799_, v_x_2800_, v_x_2801_, v_x_2802_, v_x_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___boxed(lean_object* v_Msg_2805_, lean_object* v_before_2806_, lean_object* v_x_2807_, lean_object* v_x_2808_, lean_object* v_x_2809_, lean_object* v_x_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1(v_Msg_2805_, v_before_2806_, v_x_2807_, v_x_2808_, v_x_2809_, v_x_2810_);
lean_dec(v_x_2807_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2(lean_object* v_Msg_2812_, lean_object* v_oa_2813_, lean_object* v_oLo_2814_, lean_object* v_oHi_2815_, lean_object* v_na_2816_, lean_object* v_nLo_2817_, lean_object* v_nHi_2818_, lean_object* v_pre_2819_, lean_object* v_suf_2820_, lean_object* v_ops_2821_, lean_object* v_next_2822_, lean_object* v_keys_2823_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2813_, v_oLo_2814_, v_oHi_2815_, v_na_2816_, v_nLo_2817_, v_nHi_2818_, v_pre_2819_, v_suf_2820_, v_ops_2821_, v_next_2822_, v_keys_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___boxed(lean_object* v_Msg_2825_, lean_object* v_oa_2826_, lean_object* v_oLo_2827_, lean_object* v_oHi_2828_, lean_object* v_na_2829_, lean_object* v_nLo_2830_, lean_object* v_nHi_2831_, lean_object* v_pre_2832_, lean_object* v_suf_2833_, lean_object* v_ops_2834_, lean_object* v_next_2835_, lean_object* v_keys_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2(v_Msg_2825_, v_oa_2826_, v_oLo_2827_, v_oHi_2828_, v_na_2829_, v_nLo_2830_, v_nHi_2831_, v_pre_2832_, v_suf_2833_, v_ops_2834_, v_next_2835_, v_keys_2836_);
lean_dec_ref(v_na_2829_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3(lean_object* v_Msg_2838_, lean_object* v_na_2839_, lean_object* v_before_2840_, lean_object* v_lo_2841_, lean_object* v_hi_2842_, lean_object* v_n_2843_, lean_object* v_ops_2844_, lean_object* v_acc_2845_){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2839_, v_before_2840_, v_lo_2841_, v_hi_2842_, v_n_2843_, v_ops_2844_, v_acc_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_Msg_2847_, lean_object* v_na_2848_, lean_object* v_before_2849_, lean_object* v_lo_2850_, lean_object* v_hi_2851_, lean_object* v_n_2852_, lean_object* v_ops_2853_, lean_object* v_acc_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3(v_Msg_2847_, v_na_2848_, v_before_2849_, v_lo_2850_, v_hi_2851_, v_n_2852_, v_ops_2853_, v_acc_2854_);
lean_dec(v_hi_2851_);
lean_dec_ref(v_na_2848_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps___redArg(lean_object* v_new_2856_, lean_object* v_next_2857_){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_box(0);
v___x_2859_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v___x_2858_, v_new_2856_, v_next_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps(lean_object* v_Msg_2860_, lean_object* v_new_2861_, lean_object* v_next_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = l_Lasm_UI_mountOps___redArg(v_new_2861_, v_next_2862_);
return v___x_2863_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_UI_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Diff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_UI_instInhabitedAttrOp_default = _init_l_Lasm_UI_instInhabitedAttrOp_default();
lean_mark_persistent(l_Lasm_UI_instInhabitedAttrOp_default);
l_Lasm_UI_instInhabitedAttrOp = _init_l_Lasm_UI_instInhabitedAttrOp();
lean_mark_persistent(l_Lasm_UI_instInhabitedAttrOp);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
