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
lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
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
uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object*, lean_object*);
uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_UI_instInhabitedAttrVal_default;
extern lean_object* l_Lasm_UI_instInhabitedAttrKey_default;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_UI_instReprAttrKey_repr(lean_object*, lean_object*);
lean_object* l_Lasm_UI_instReprAttrVal_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0___boxed(lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_UI_twoEnded___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_twoEnded___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_twoEnded___redArg___closed__0_value;
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__1;
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
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_UI_Live_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx(lean_object* v_Msg_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lasm_UI_Live_ctorIdx___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorIdx___boxed(lean_object* v_Msg_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_UI_Live_ctorIdx(v_Msg_9_, v_x_10_);
lean_dec_ref(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___redArg(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
if (lean_obj_tag(v_t_12_) == 0)
{
lean_object* v_id_14_; lean_object* v_s_15_; lean_object* v___x_16_; 
v_id_14_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_id_14_);
v_s_15_ = lean_ctor_get(v_t_12_, 1);
lean_inc_ref(v_s_15_);
lean_dec_ref_known(v_t_12_, 2);
v___x_16_ = lean_apply_2(v_k_13_, v_id_14_, v_s_15_);
return v___x_16_;
}
else
{
lean_object* v_id_17_; uint8_t v_ns_18_; lean_object* v_tag_19_; lean_object* v_key_20_; lean_object* v_attrs_21_; lean_object* v_children_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_id_17_ = lean_ctor_get(v_t_12_, 0);
lean_inc(v_id_17_);
v_ns_18_ = lean_ctor_get_uint8(v_t_12_, sizeof(void*)*5);
v_tag_19_ = lean_ctor_get(v_t_12_, 1);
lean_inc_ref(v_tag_19_);
v_key_20_ = lean_ctor_get(v_t_12_, 2);
lean_inc(v_key_20_);
v_attrs_21_ = lean_ctor_get(v_t_12_, 3);
lean_inc(v_attrs_21_);
v_children_22_ = lean_ctor_get(v_t_12_, 4);
lean_inc(v_children_22_);
lean_dec_ref_known(v_t_12_, 5);
v___x_23_ = lean_box(v_ns_18_);
v___x_24_ = lean_apply_6(v_k_13_, v_id_17_, v___x_23_, v_tag_19_, v_key_20_, v_attrs_21_, v_children_22_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim(lean_object* v_Msg_25_, lean_object* v_motive__1_26_, lean_object* v_ctorIdx_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_28_, v_k_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_ctorElim___boxed(lean_object* v_Msg_32_, lean_object* v_motive__1_33_, lean_object* v_ctorIdx_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_k_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_UI_Live_ctorElim(v_Msg_32_, v_motive__1_33_, v_ctorIdx_34_, v_t_35_, v_h_36_, v_k_37_);
lean_dec(v_ctorIdx_34_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim___redArg(lean_object* v_t_39_, lean_object* v_text_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_39_, v_text_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_text_elim(lean_object* v_Msg_42_, lean_object* v_motive__1_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_text_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_44_, v_text_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim___redArg(lean_object* v_t_48_, lean_object* v_elem_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_48_, v_elem_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_elem_elim(lean_object* v_Msg_51_, lean_object* v_motive__1_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_elem_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_UI_Live_ctorElim___redArg(v_t_53_, v_elem_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg(){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = ((lean_object*)(l_Lasm_UI_instInhabitedLive___redArg___closed__1));
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive___redArg___boxed(lean_object* v___dummy_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lasm_UI_instInhabitedLive___redArg();
return v_res_64_;
}
}
static lean_object* _init_l_Lasm_UI_instInhabitedLive___closed__0(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lasm_UI_instInhabitedLive___redArg();
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedLive(lean_object* v_Msg_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l_Lasm_UI_instInhabitedLive___closed__0, &l_Lasm_UI_instInhabitedLive___closed__0_once, _init_l_Lasm_UI_instInhabitedLive___closed__0);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg(lean_object* v_x_68_){
_start:
{
lean_object* v_id_69_; 
v_id_69_ = lean_ctor_get(v_x_68_, 0);
lean_inc(v_id_69_);
return v_id_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___redArg___boxed(lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lasm_UI_Live_id___redArg(v_x_70_);
lean_dec_ref(v_x_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id(lean_object* v_Msg_72_, lean_object* v_x_73_){
_start:
{
lean_object* v_id_74_; 
v_id_74_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_id_74_);
return v_id_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_id___boxed(lean_object* v_Msg_75_, lean_object* v_x_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_UI_Live_id(v_Msg_75_, v_x_76_);
lean_dec_ref(v_x_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
if (lean_obj_tag(v_a_78_) == 0)
{
lean_object* v___x_80_; 
v___x_80_ = l_List_reverse___redArg(v_a_79_);
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_91_; 
v_head_81_ = lean_ctor_get(v_a_78_, 0);
v_tail_82_ = lean_ctor_get(v_a_78_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_a_78_);
if (v_isSharedCheck_91_ == 0)
{
v___x_84_ = v_a_78_;
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_tail_82_);
lean_inc(v_head_81_);
lean_dec(v_a_78_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_86_ = l_Lasm_UI_Live_erase___redArg(v_head_81_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v_a_79_);
lean_ctor_set(v___x_84_, 0, v___x_86_);
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_86_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_a_79_);
v___x_88_ = v_reuseFailAlloc_90_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
v_a_78_ = v_tail_82_;
v_a_79_ = v___x_88_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase___redArg(lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
lean_object* v_s_93_; lean_object* v___x_94_; 
v_s_93_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_s_93_);
lean_dec_ref_known(v_x_92_, 2);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v_s_93_);
return v___x_94_;
}
else
{
uint8_t v_ns_95_; lean_object* v_tag_96_; lean_object* v_key_97_; lean_object* v_attrs_98_; lean_object* v_children_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_ns_95_ = lean_ctor_get_uint8(v_x_92_, sizeof(void*)*5);
v_tag_96_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_tag_96_);
v_key_97_ = lean_ctor_get(v_x_92_, 2);
lean_inc(v_key_97_);
v_attrs_98_ = lean_ctor_get(v_x_92_, 3);
lean_inc(v_attrs_98_);
v_children_99_ = lean_ctor_get(v_x_92_, 4);
lean_inc(v_children_99_);
lean_dec_ref_known(v_x_92_, 5);
v___x_100_ = lean_box(0);
v___x_101_ = l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(v_children_99_, v___x_100_);
v___x_102_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_102_, 0, v_tag_96_);
lean_ctor_set(v___x_102_, 1, v_key_97_);
lean_ctor_set(v___x_102_, 2, v_attrs_98_);
lean_ctor_set(v___x_102_, 3, v___x_101_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*4, v_ns_95_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_erase(lean_object* v_Msg_103_, lean_object* v_x_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lasm_UI_Live_erase___redArg(v_x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0(lean_object* v_Msg_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_List_mapTR_loop___at___00Lasm_UI_Live_erase_spec__0___redArg(v_a_107_, v_a_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter___redArg(lean_object* v_x_110_, lean_object* v_h__1_111_, lean_object* v_h__2_112_){
_start:
{
if (lean_obj_tag(v_x_110_) == 0)
{
lean_object* v_id_113_; lean_object* v_s_114_; lean_object* v___x_115_; 
lean_dec(v_h__2_112_);
v_id_113_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_id_113_);
v_s_114_ = lean_ctor_get(v_x_110_, 1);
lean_inc_ref(v_s_114_);
lean_dec_ref_known(v_x_110_, 2);
v___x_115_ = lean_apply_2(v_h__1_111_, v_id_113_, v_s_114_);
return v___x_115_;
}
else
{
lean_object* v_id_116_; uint8_t v_ns_117_; lean_object* v_tag_118_; lean_object* v_key_119_; lean_object* v_attrs_120_; lean_object* v_children_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
lean_dec(v_h__1_111_);
v_id_116_ = lean_ctor_get(v_x_110_, 0);
lean_inc(v_id_116_);
v_ns_117_ = lean_ctor_get_uint8(v_x_110_, sizeof(void*)*5);
v_tag_118_ = lean_ctor_get(v_x_110_, 1);
lean_inc_ref(v_tag_118_);
v_key_119_ = lean_ctor_get(v_x_110_, 2);
lean_inc(v_key_119_);
v_attrs_120_ = lean_ctor_get(v_x_110_, 3);
lean_inc(v_attrs_120_);
v_children_121_ = lean_ctor_get(v_x_110_, 4);
lean_inc(v_children_121_);
lean_dec_ref_known(v_x_110_, 5);
v___x_122_ = lean_box(v_ns_117_);
v___x_123_ = lean_apply_6(v_h__2_112_, v_id_116_, v___x_122_, v_tag_118_, v_key_119_, v_attrs_120_, v_children_121_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_id_match__1_splitter(lean_object* v_Msg_124_, lean_object* v_motive_125_, lean_object* v_x_126_, lean_object* v_h__1_127_, lean_object* v_h__2_128_){
_start:
{
if (lean_obj_tag(v_x_126_) == 0)
{
lean_object* v_id_129_; lean_object* v_s_130_; lean_object* v___x_131_; 
lean_dec(v_h__2_128_);
v_id_129_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_id_129_);
v_s_130_ = lean_ctor_get(v_x_126_, 1);
lean_inc_ref(v_s_130_);
lean_dec_ref_known(v_x_126_, 2);
v___x_131_ = lean_apply_2(v_h__1_127_, v_id_129_, v_s_130_);
return v___x_131_;
}
else
{
lean_object* v_id_132_; uint8_t v_ns_133_; lean_object* v_tag_134_; lean_object* v_key_135_; lean_object* v_attrs_136_; lean_object* v_children_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec(v_h__1_127_);
v_id_132_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_id_132_);
v_ns_133_ = lean_ctor_get_uint8(v_x_126_, sizeof(void*)*5);
v_tag_134_ = lean_ctor_get(v_x_126_, 1);
lean_inc_ref(v_tag_134_);
v_key_135_ = lean_ctor_get(v_x_126_, 2);
lean_inc(v_key_135_);
v_attrs_136_ = lean_ctor_get(v_x_126_, 3);
lean_inc(v_attrs_136_);
v_children_137_ = lean_ctor_get(v_x_126_, 4);
lean_inc(v_children_137_);
lean_dec_ref_known(v_x_126_, 5);
v___x_138_ = lean_box(v_ns_133_);
v___x_139_ = lean_apply_6(v_h__2_128_, v_id_132_, v___x_138_, v_tag_134_, v_key_135_, v_attrs_136_, v_children_137_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___redArg(lean_object* v_x_140_, lean_object* v_h__1_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_apply_2(v_h__1_141_, v_x_140_, lean_box(0));
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter(lean_object* v_Msg_143_, lean_object* v_children_144_, lean_object* v_motive_145_, lean_object* v_x_146_, lean_object* v_h__1_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_apply_2(v_h__1_147_, v_x_146_, lean_box(0));
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter___boxed(lean_object* v_Msg_149_, lean_object* v_children_150_, lean_object* v_motive_151_, lean_object* v_x_152_, lean_object* v_h__1_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lasm_UI_Diff_0__Lasm_UI_Live_erase_match__1_splitter(v_Msg_149_, v_children_150_, v_motive_151_, v_x_152_, v_h__1_153_);
lean_dec(v_children_150_);
return v_res_154_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0(lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
if (lean_obj_tag(v_x_156_) == 0)
{
uint8_t v___x_157_; 
v___x_157_ = 1;
return v___x_157_;
}
else
{
uint8_t v___x_158_; 
v___x_158_ = 0;
return v___x_158_;
}
}
else
{
if (lean_obj_tag(v_x_156_) == 0)
{
uint8_t v___x_159_; 
v___x_159_ = 0;
return v___x_159_;
}
else
{
lean_object* v_val_160_; lean_object* v_val_161_; uint8_t v___x_162_; 
v_val_160_ = lean_ctor_get(v_x_155_, 0);
v_val_161_ = lean_ctor_get(v_x_156_, 0);
v___x_162_ = lean_string_dec_eq(v_val_160_, v_val_161_);
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0___boxed(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
uint8_t v_res_165_; lean_object* v_r_166_; 
v_res_165_ = l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0(v_x_163_, v_x_164_);
lean_dec(v_x_164_);
lean_dec(v_x_163_);
v_r_166_ = lean_box(v_res_165_);
return v_r_166_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same___redArg(lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
if (lean_obj_tag(v_x_167_) == 0)
{
if (lean_obj_tag(v_x_168_) == 0)
{
uint8_t v___x_169_; 
v___x_169_ = 1;
return v___x_169_;
}
else
{
uint8_t v___x_170_; 
v___x_170_ = 0;
return v___x_170_;
}
}
else
{
if (lean_obj_tag(v_x_168_) == 1)
{
uint8_t v_ns_171_; lean_object* v_tag_172_; lean_object* v_key_173_; uint8_t v_ns_174_; lean_object* v_tag_175_; lean_object* v_key_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v_ns_171_ = lean_ctor_get_uint8(v_x_167_, sizeof(void*)*5);
v_tag_172_ = lean_ctor_get(v_x_167_, 1);
v_key_173_ = lean_ctor_get(v_x_167_, 2);
v_ns_174_ = lean_ctor_get_uint8(v_x_168_, sizeof(void*)*4);
v_tag_175_ = lean_ctor_get(v_x_168_, 0);
v_key_176_ = lean_ctor_get(v_x_168_, 1);
v___x_177_ = l_Lasm_UI_Ns_ctorIdx(v_ns_171_);
v___x_178_ = l_Lasm_UI_Ns_ctorIdx(v_ns_174_);
v___x_179_ = lean_nat_dec_eq(v___x_177_, v___x_178_);
lean_dec(v___x_178_);
lean_dec(v___x_177_);
if (v___x_179_ == 0)
{
return v___x_179_;
}
else
{
uint8_t v___x_180_; 
v___x_180_ = lean_string_dec_eq(v_tag_172_, v_tag_175_);
if (v___x_180_ == 0)
{
return v___x_180_;
}
else
{
uint8_t v___x_181_; 
v___x_181_ = l_Option_instBEq_beq___at___00Lasm_UI_Live_same_spec__0(v_key_173_, v_key_176_);
return v___x_181_;
}
}
}
else
{
uint8_t v___x_182_; 
v___x_182_ = 0;
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___redArg___boxed(lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_Lasm_UI_Live_same___redArg(v_x_183_, v_x_184_);
lean_dec_ref(v_x_184_);
lean_dec_ref(v_x_183_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Live_same(lean_object* v_Msg_187_, lean_object* v_x_188_, lean_object* v_x_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = l_Lasm_UI_Live_same___redArg(v_x_188_, v_x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_same___boxed(lean_object* v_Msg_191_, lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Lasm_UI_Live_same(v_Msg_191_, v_x_192_, v_x_193_);
lean_dec_ref(v_x_193_);
lean_dec_ref(v_x_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg(lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v___x_197_; 
v___x_197_ = lean_box(0);
return v___x_197_;
}
else
{
lean_object* v_key_198_; 
v_key_198_ = lean_ctor_get(v_x_196_, 2);
lean_inc(v_key_198_);
return v_key_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___redArg___boxed(lean_object* v_x_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lasm_UI_Live_key_x3f___redArg(v_x_199_);
lean_dec_ref(v_x_199_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f(lean_object* v_Msg_201_, lean_object* v_x_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_UI_Live_key_x3f___redArg(v_x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Live_key_x3f___boxed(lean_object* v_Msg_204_, lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lasm_UI_Live_key_x3f(v_Msg_204_, v_x_205_);
lean_dec_ref(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg(lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
lean_object* v_key_209_; 
v_key_209_ = lean_ctor_get(v_x_207_, 1);
lean_inc(v_key_209_);
return v_key_209_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___redArg___boxed(lean_object* v_x_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lasm_UI_Html_key_x3f___redArg(v_x_210_);
lean_dec_ref(v_x_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f(lean_object* v_Msg_212_, lean_object* v_x_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lasm_UI_Html_key_x3f___redArg(v_x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Html_key_x3f___boxed(lean_object* v_Msg_215_, lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lasm_UI_Html_key_x3f(v_Msg_215_, v_x_216_);
lean_dec_ref(v_x_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx(lean_object* v_x_218_){
_start:
{
if (lean_obj_tag(v_x_218_) == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_unsigned_to_nat(0u);
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_unsigned_to_nat(1u);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_AttrOp_ctorIdx___boxed(lean_object* v_x_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lasm_UI_AttrOp_ctorIdx(v_x_221_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___redArg(lean_object* v_x_351_){
_start:
{
switch(lean_obj_tag(v_x_351_))
{
case 0:
{
lean_object* v___x_352_; 
v___x_352_ = lean_unsigned_to_nat(0u);
return v___x_352_;
}
case 1:
{
lean_object* v___x_353_; 
v___x_353_ = lean_unsigned_to_nat(1u);
return v___x_353_;
}
case 2:
{
lean_object* v___x_354_; 
v___x_354_ = lean_unsigned_to_nat(2u);
return v___x_354_;
}
case 3:
{
lean_object* v___x_355_; 
v___x_355_ = lean_unsigned_to_nat(3u);
return v___x_355_;
}
case 4:
{
lean_object* v___x_356_; 
v___x_356_ = lean_unsigned_to_nat(4u);
return v___x_356_;
}
case 5:
{
lean_object* v___x_357_; 
v___x_357_ = lean_unsigned_to_nat(5u);
return v___x_357_;
}
default: 
{
lean_object* v___x_358_; 
v___x_358_ = lean_unsigned_to_nat(6u);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___redArg___boxed(lean_object* v_x_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_UI_Op_ctorIdx___redArg(v_x_359_);
lean_dec(v_x_359_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx(lean_object* v_Msg_361_, lean_object* v_x_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lasm_UI_Op_ctorIdx___redArg(v_x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorIdx___boxed(lean_object* v_Msg_364_, lean_object* v_x_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_UI_Op_ctorIdx(v_Msg_364_, v_x_365_);
lean_dec(v_x_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___redArg(lean_object* v_t_367_, lean_object* v_k_368_){
_start:
{
switch(lean_obj_tag(v_t_367_))
{
case 0:
{
lean_object* v_node_369_; lean_object* v_before_370_; lean_object* v___x_371_; 
v_node_369_ = lean_ctor_get(v_t_367_, 0);
lean_inc_ref(v_node_369_);
v_before_370_ = lean_ctor_get(v_t_367_, 1);
lean_inc(v_before_370_);
lean_dec_ref_known(v_t_367_, 2);
v___x_371_ = lean_apply_2(v_k_368_, v_node_369_, v_before_370_);
return v___x_371_;
}
case 2:
{
lean_object* v_id_372_; lean_object* v___x_373_; 
v_id_372_ = lean_ctor_get(v_t_367_, 0);
lean_inc(v_id_372_);
lean_dec_ref_known(v_t_367_, 1);
v___x_373_ = lean_apply_1(v_k_368_, v_id_372_);
return v___x_373_;
}
case 3:
{
return v_k_368_;
}
case 4:
{
lean_object* v_id_374_; lean_object* v_s_375_; lean_object* v___x_376_; 
v_id_374_ = lean_ctor_get(v_t_367_, 0);
lean_inc(v_id_374_);
v_s_375_ = lean_ctor_get(v_t_367_, 1);
lean_inc_ref(v_s_375_);
lean_dec_ref_known(v_t_367_, 2);
v___x_376_ = lean_apply_2(v_k_368_, v_id_374_, v_s_375_);
return v___x_376_;
}
default: 
{
lean_object* v_id_377_; lean_object* v_before_378_; lean_object* v___x_379_; 
v_id_377_ = lean_ctor_get(v_t_367_, 0);
lean_inc(v_id_377_);
v_before_378_ = lean_ctor_get(v_t_367_, 1);
lean_inc(v_before_378_);
lean_dec(v_t_367_);
v___x_379_ = lean_apply_2(v_k_368_, v_id_377_, v_before_378_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim(lean_object* v_Msg_380_, lean_object* v_motive__1_381_, lean_object* v_ctorIdx_382_, lean_object* v_t_383_, lean_object* v_h_384_, lean_object* v_k_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_383_, v_k_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_ctorElim___boxed(lean_object* v_Msg_387_, lean_object* v_motive__1_388_, lean_object* v_ctorIdx_389_, lean_object* v_t_390_, lean_object* v_h_391_, lean_object* v_k_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lasm_UI_Op_ctorElim(v_Msg_387_, v_motive__1_388_, v_ctorIdx_389_, v_t_390_, v_h_391_, v_k_392_);
lean_dec(v_ctorIdx_389_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim___redArg(lean_object* v_t_394_, lean_object* v_insert_395_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_394_, v_insert_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_insert_elim(lean_object* v_Msg_397_, lean_object* v_motive__1_398_, lean_object* v_t_399_, lean_object* v_h_400_, lean_object* v_insert_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_399_, v_insert_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim___redArg(lean_object* v_t_403_, lean_object* v_move_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_403_, v_move_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_move_elim(lean_object* v_Msg_406_, lean_object* v_motive__1_407_, lean_object* v_t_408_, lean_object* v_h_409_, lean_object* v_move_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_408_, v_move_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim___redArg(lean_object* v_t_412_, lean_object* v_remove_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_412_, v_remove_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_remove_elim(lean_object* v_Msg_415_, lean_object* v_motive__1_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_remove_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_417_, v_remove_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim___redArg(lean_object* v_t_421_, lean_object* v_clear_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_421_, v_clear_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_clear_elim(lean_object* v_Msg_424_, lean_object* v_motive__1_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_clear_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_426_, v_clear_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim___redArg(lean_object* v_t_430_, lean_object* v_text_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_430_, v_text_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_text_elim(lean_object* v_Msg_433_, lean_object* v_motive__1_434_, lean_object* v_t_435_, lean_object* v_h_436_, lean_object* v_text_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_435_, v_text_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim___redArg(lean_object* v_t_439_, lean_object* v_attrs_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_439_, v_attrs_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_attrs_elim(lean_object* v_Msg_442_, lean_object* v_motive__1_443_, lean_object* v_t_444_, lean_object* v_h_445_, lean_object* v_attrs_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_444_, v_attrs_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim___redArg(lean_object* v_t_448_, lean_object* v_sub_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_448_, v_sub_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Op_sub_elim(lean_object* v_Msg_451_, lean_object* v_motive__1_452_, lean_object* v_t_453_, lean_object* v_h_454_, lean_object* v_sub_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lasm_UI_Op_ctorElim___redArg(v_t_453_, v_sub_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg(){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = lean_box(3);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp___redArg___boxed(lean_object* v___dummy_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lasm_UI_instInhabitedOp___redArg();
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instInhabitedOp(lean_object* v_Msg_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_box(3);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg(lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_object* v_s_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_s_467_ = lean_ctor_get(v_x_465_, 0);
lean_inc_ref(v_s_467_);
lean_inc(v_x_466_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v_x_466_);
lean_ctor_set(v___x_468_, 1, v_s_467_);
v___x_469_ = lean_unsigned_to_nat(1u);
v___x_470_ = lean_nat_add(v_x_466_, v___x_469_);
lean_dec(v_x_466_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_468_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
return v___x_471_;
}
else
{
uint8_t v_ns_472_; lean_object* v_tag_473_; lean_object* v_key_474_; lean_object* v_attrs_475_; lean_object* v_children_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v_r_480_; lean_object* v_fst_481_; lean_object* v_snd_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_491_; 
v_ns_472_ = lean_ctor_get_uint8(v_x_465_, sizeof(void*)*4);
v_tag_473_ = lean_ctor_get(v_x_465_, 0);
v_key_474_ = lean_ctor_get(v_x_465_, 1);
v_attrs_475_ = lean_ctor_get(v_x_465_, 2);
v_children_476_ = lean_ctor_get(v_x_465_, 3);
v___x_477_ = lean_unsigned_to_nat(1u);
v___x_478_ = lean_nat_add(v_x_466_, v___x_477_);
v___x_479_ = ((lean_object*)(l_Lasm_UI_create___redArg___closed__0));
v_r_480_ = l_Lasm_UI_createAux___redArg(v_children_476_, v___x_478_, v___x_479_);
v_fst_481_ = lean_ctor_get(v_r_480_, 0);
v_snd_482_ = lean_ctor_get(v_r_480_, 1);
v_isSharedCheck_491_ = !lean_is_exclusive(v_r_480_);
if (v_isSharedCheck_491_ == 0)
{
v___x_484_ = v_r_480_;
v_isShared_485_ = v_isSharedCheck_491_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_snd_482_);
lean_inc(v_fst_481_);
lean_dec(v_r_480_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_491_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_486_ = lean_array_to_list(v_fst_481_);
lean_inc(v_attrs_475_);
lean_inc(v_key_474_);
lean_inc_ref(v_tag_473_);
v___x_487_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v___x_487_, 0, v_x_466_);
lean_ctor_set(v___x_487_, 1, v_tag_473_);
lean_ctor_set(v___x_487_, 2, v_key_474_);
lean_ctor_set(v___x_487_, 3, v_attrs_475_);
lean_ctor_set(v___x_487_, 4, v___x_486_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*5, v_ns_472_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_487_);
v___x_489_ = v___x_484_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_snd_482_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg(lean_object* v_x_492_, lean_object* v_x_493_, lean_object* v_x_494_){
_start:
{
if (lean_obj_tag(v_x_492_) == 0)
{
lean_object* v___x_495_; 
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v_x_494_);
lean_ctor_set(v___x_495_, 1, v_x_493_);
return v___x_495_;
}
else
{
lean_object* v_head_496_; lean_object* v_tail_497_; lean_object* v_r_498_; lean_object* v_fst_499_; lean_object* v_snd_500_; lean_object* v___x_501_; 
v_head_496_ = lean_ctor_get(v_x_492_, 0);
v_tail_497_ = lean_ctor_get(v_x_492_, 1);
v_r_498_ = l_Lasm_UI_create___redArg(v_head_496_, v_x_493_);
v_fst_499_ = lean_ctor_get(v_r_498_, 0);
lean_inc(v_fst_499_);
v_snd_500_ = lean_ctor_get(v_r_498_, 1);
lean_inc(v_snd_500_);
lean_dec_ref(v_r_498_);
v___x_501_ = lean_array_push(v_x_494_, v_fst_499_);
v_x_492_ = v_tail_497_;
v_x_493_ = v_snd_500_;
v_x_494_ = v___x_501_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___redArg___boxed(lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lasm_UI_createAux___redArg(v_x_503_, v_x_504_, v_x_505_);
lean_dec(v_x_503_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___redArg___boxed(lean_object* v_x_507_, lean_object* v_x_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lasm_UI_create___redArg(v_x_507_, v_x_508_);
lean_dec_ref(v_x_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create(lean_object* v_Msg_510_, lean_object* v_x_511_, lean_object* v_x_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lasm_UI_create___redArg(v_x_511_, v_x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_create___boxed(lean_object* v_Msg_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lasm_UI_create(v_Msg_514_, v_x_515_, v_x_516_);
lean_dec_ref(v_x_515_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux(lean_object* v_Msg_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lasm_UI_createAux___redArg(v_x_519_, v_x_520_, v_x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_createAux___boxed(lean_object* v_Msg_523_, lean_object* v_x_524_, lean_object* v_x_525_, lean_object* v_x_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lasm_UI_createAux(v_Msg_523_, v_x_524_, v_x_525_, v_x_526_);
lean_dec(v_x_524_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg(lean_object* v_k_528_, lean_object* v_x_529_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
else
{
lean_object* v_head_531_; lean_object* v_tail_532_; lean_object* v___x_533_; 
v_head_531_ = lean_ctor_get(v_x_529_, 0);
v_tail_532_ = lean_ctor_get(v_x_529_, 1);
v___x_533_ = l_Lasm_UI_lastVal___redArg(v_k_528_, v_tail_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_534_ = l_Lasm_UI_Attr_key___redArg(v_head_531_);
v___x_535_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v___x_534_, v_k_528_);
lean_dec_ref(v___x_534_);
if (v___x_535_ == 0)
{
return v___x_533_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = l_Lasm_UI_Attr_val___redArg(v_head_531_);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
else
{
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___redArg___boxed(lean_object* v_k_538_, lean_object* v_x_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lasm_UI_lastVal___redArg(v_k_538_, v_x_539_);
lean_dec(v_x_539_);
lean_dec_ref(v_k_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal(lean_object* v_Msg_541_, lean_object* v_k_542_, lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lasm_UI_lastVal___redArg(v_k_542_, v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_lastVal___boxed(lean_object* v_Msg_545_, lean_object* v_k_546_, lean_object* v_x_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lasm_UI_lastVal(v_Msg_545_, v_k_546_, v_x_547_);
lean_dec(v_x_547_);
lean_dec_ref(v_k_546_);
return v_res_548_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey___redArg(lean_object* v_k_549_, lean_object* v_x_550_){
_start:
{
if (lean_obj_tag(v_x_550_) == 0)
{
uint8_t v___x_551_; 
v___x_551_ = 0;
return v___x_551_;
}
else
{
lean_object* v_head_552_; lean_object* v_tail_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_head_552_ = lean_ctor_get(v_x_550_, 0);
v_tail_553_ = lean_ctor_get(v_x_550_, 1);
v___x_554_ = l_Lasm_UI_Attr_key___redArg(v_head_552_);
v___x_555_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v___x_554_, v_k_549_);
lean_dec_ref(v___x_554_);
if (v___x_555_ == 0)
{
v_x_550_ = v_tail_553_;
goto _start;
}
else
{
return v___x_555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___redArg___boxed(lean_object* v_k_557_, lean_object* v_x_558_){
_start:
{
uint8_t v_res_559_; lean_object* v_r_560_; 
v_res_559_ = l_Lasm_UI_hasKey___redArg(v_k_557_, v_x_558_);
lean_dec(v_x_558_);
lean_dec_ref(v_k_557_);
v_r_560_ = lean_box(v_res_559_);
return v_r_560_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_hasKey(lean_object* v_Msg_561_, lean_object* v_k_562_, lean_object* v_x_563_){
_start:
{
uint8_t v___x_564_; 
v___x_564_ = l_Lasm_UI_hasKey___redArg(v_k_562_, v_x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_hasKey___boxed(lean_object* v_Msg_565_, lean_object* v_k_566_, lean_object* v_x_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lasm_UI_hasKey(v_Msg_565_, v_k_566_, v_x_567_);
lean_dec(v_x_567_);
lean_dec_ref(v_k_566_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same___redArg(lean_object* v_x_570_, lean_object* v_x_571_){
_start:
{
lean_object* v_n_573_; lean_object* v_v_574_; lean_object* v_n_x27_575_; lean_object* v_v_x27_576_; 
switch(lean_obj_tag(v_x_570_))
{
case 0:
{
if (lean_obj_tag(v_x_571_) == 0)
{
lean_object* v_name_579_; lean_object* v_value_580_; lean_object* v_name_581_; lean_object* v_value_582_; 
v_name_579_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_name_579_);
v_value_580_ = lean_ctor_get(v_x_570_, 1);
lean_inc_ref(v_value_580_);
lean_dec_ref_known(v_x_570_, 2);
v_name_581_ = lean_ctor_get(v_x_571_, 0);
lean_inc_ref(v_name_581_);
v_value_582_ = lean_ctor_get(v_x_571_, 1);
lean_inc_ref(v_value_582_);
lean_dec_ref_known(v_x_571_, 2);
v_n_573_ = v_name_579_;
v_v_574_ = v_value_580_;
v_n_x27_575_ = v_name_581_;
v_v_x27_576_ = v_value_582_;
goto v___jp_572_;
}
else
{
uint8_t v___x_583_; 
lean_dec_ref_known(v_x_570_, 2);
lean_dec_ref(v_x_571_);
v___x_583_ = 0;
return v___x_583_;
}
}
case 1:
{
if (lean_obj_tag(v_x_571_) == 1)
{
lean_object* v_name_584_; lean_object* v_value_585_; lean_object* v_name_586_; lean_object* v_value_587_; uint8_t v___x_588_; 
v_name_584_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_name_584_);
v_value_585_ = lean_ctor_get(v_x_570_, 1);
lean_inc_ref(v_value_585_);
lean_dec_ref_known(v_x_570_, 2);
v_name_586_ = lean_ctor_get(v_x_571_, 0);
lean_inc_ref(v_name_586_);
v_value_587_ = lean_ctor_get(v_x_571_, 1);
lean_inc_ref(v_value_587_);
lean_dec_ref_known(v_x_571_, 2);
v___x_588_ = lean_string_dec_eq(v_name_584_, v_name_586_);
lean_dec_ref(v_name_586_);
lean_dec_ref(v_name_584_);
if (v___x_588_ == 0)
{
lean_dec_ref(v_value_587_);
lean_dec_ref(v_value_585_);
return v___x_588_;
}
else
{
uint8_t v___x_589_; 
v___x_589_ = l_Lasm_UI_instDecidableEqPropVal_decEq(v_value_585_, v_value_587_);
lean_dec_ref(v_value_587_);
lean_dec_ref(v_value_585_);
return v___x_589_;
}
}
else
{
uint8_t v___x_590_; 
lean_dec_ref_known(v_x_570_, 2);
lean_dec_ref(v_x_571_);
v___x_590_ = 0;
return v___x_590_;
}
}
case 2:
{
if (lean_obj_tag(v_x_571_) == 2)
{
lean_object* v_name_591_; lean_object* v_value_592_; lean_object* v_name_593_; lean_object* v_value_594_; 
v_name_591_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_name_591_);
v_value_592_ = lean_ctor_get(v_x_570_, 1);
lean_inc_ref(v_value_592_);
lean_dec_ref_known(v_x_570_, 2);
v_name_593_ = lean_ctor_get(v_x_571_, 0);
lean_inc_ref(v_name_593_);
v_value_594_ = lean_ctor_get(v_x_571_, 1);
lean_inc_ref(v_value_594_);
lean_dec_ref_known(v_x_571_, 2);
v_n_573_ = v_name_591_;
v_v_574_ = v_value_592_;
v_n_x27_575_ = v_name_593_;
v_v_x27_576_ = v_value_594_;
goto v___jp_572_;
}
else
{
uint8_t v___x_595_; 
lean_dec_ref_known(v_x_570_, 2);
lean_dec_ref(v_x_571_);
v___x_595_ = 0;
return v___x_595_;
}
}
default: 
{
if (lean_obj_tag(v_x_571_) == 3)
{
lean_object* v_listener_596_; lean_object* v_listener_597_; lean_object* v_event_598_; lean_object* v_event_599_; uint8_t v___x_600_; 
v_listener_596_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_listener_596_);
lean_dec_ref_known(v_x_570_, 2);
v_listener_597_ = lean_ctor_get(v_x_571_, 0);
lean_inc_ref(v_listener_597_);
lean_dec_ref_known(v_x_571_, 2);
v_event_598_ = lean_ctor_get(v_listener_596_, 0);
v_event_599_ = lean_ctor_get(v_listener_597_, 0);
v___x_600_ = lean_string_dec_eq(v_event_598_, v_event_599_);
if (v___x_600_ == 0)
{
lean_dec_ref(v_listener_597_);
lean_dec_ref(v_listener_596_);
return v___x_600_;
}
else
{
uint8_t v___x_601_; 
v___x_601_ = l_Lasm_UI_instDecidableEqListener_decEq(v_listener_596_, v_listener_597_);
return v___x_601_;
}
}
else
{
uint8_t v___x_602_; 
lean_dec_ref_known(v_x_570_, 2);
lean_dec_ref(v_x_571_);
v___x_602_ = 0;
return v___x_602_;
}
}
}
v___jp_572_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_string_dec_eq(v_n_573_, v_n_x27_575_);
lean_dec_ref(v_n_x27_575_);
lean_dec_ref(v_n_573_);
if (v___x_577_ == 0)
{
lean_dec_ref(v_v_x27_576_);
lean_dec_ref(v_v_574_);
return v___x_577_;
}
else
{
uint8_t v___x_578_; 
v___x_578_ = lean_string_dec_eq(v_v_574_, v_v_x27_576_);
lean_dec_ref(v_v_x27_576_);
lean_dec_ref(v_v_574_);
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___redArg___boxed(lean_object* v_x_603_, lean_object* v_x_604_){
_start:
{
uint8_t v_res_605_; lean_object* v_r_606_; 
v_res_605_ = l_Lasm_UI_Attr_same___redArg(v_x_603_, v_x_604_);
v_r_606_ = lean_box(v_res_605_);
return v_r_606_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Attr_same(lean_object* v_Msg_607_, lean_object* v_x_608_, lean_object* v_x_609_){
_start:
{
uint8_t v___x_610_; 
v___x_610_ = l_Lasm_UI_Attr_same___redArg(v_x_608_, v_x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Attr_same___boxed(lean_object* v_Msg_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
uint8_t v_res_614_; lean_object* v_r_615_; 
v_res_614_ = l_Lasm_UI_Attr_same(v_Msg_611_, v_x_612_, v_x_613_);
v_r_615_ = lean_box(v_res_614_);
return v_r_615_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq___redArg(lean_object* v_x_616_, lean_object* v_x_617_){
_start:
{
if (lean_obj_tag(v_x_616_) == 0)
{
if (lean_obj_tag(v_x_617_) == 0)
{
uint8_t v___x_618_; 
v___x_618_ = 1;
return v___x_618_;
}
else
{
uint8_t v___x_619_; 
lean_dec(v_x_617_);
v___x_619_ = 0;
return v___x_619_;
}
}
else
{
if (lean_obj_tag(v_x_617_) == 1)
{
lean_object* v_head_620_; lean_object* v_tail_621_; lean_object* v_head_622_; lean_object* v_tail_623_; uint8_t v___x_624_; 
v_head_620_ = lean_ctor_get(v_x_616_, 0);
lean_inc(v_head_620_);
v_tail_621_ = lean_ctor_get(v_x_616_, 1);
lean_inc(v_tail_621_);
lean_dec_ref_known(v_x_616_, 2);
v_head_622_ = lean_ctor_get(v_x_617_, 0);
lean_inc(v_head_622_);
v_tail_623_ = lean_ctor_get(v_x_617_, 1);
lean_inc(v_tail_623_);
lean_dec_ref_known(v_x_617_, 2);
v___x_624_ = l_Lasm_UI_Attr_same___redArg(v_head_620_, v_head_622_);
if (v___x_624_ == 0)
{
lean_dec(v_tail_623_);
lean_dec(v_tail_621_);
return v___x_624_;
}
else
{
v_x_616_ = v_tail_621_;
v_x_617_ = v_tail_623_;
goto _start;
}
}
else
{
uint8_t v___x_626_; 
lean_dec_ref_known(v_x_616_, 2);
lean_dec(v_x_617_);
v___x_626_ = 0;
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___redArg___boxed(lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
uint8_t v_res_629_; lean_object* v_r_630_; 
v_res_629_ = l_Lasm_UI_attrsEq___redArg(v_x_627_, v_x_628_);
v_r_630_ = lean_box(v_res_629_);
return v_r_630_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq(lean_object* v_Msg_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = l_Lasm_UI_attrsEq___redArg(v_x_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___boxed(lean_object* v_Msg_635_, lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
uint8_t v_res_638_; lean_object* v_r_639_; 
v_res_638_ = l_Lasm_UI_attrsEq(v_Msg_635_, v_x_636_, v_x_637_);
v_r_639_ = lean_box(v_res_638_);
return v_r_639_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_640_) == 0)
{
if (lean_obj_tag(v_x_641_) == 0)
{
uint8_t v___x_642_; 
v___x_642_ = 1;
return v___x_642_;
}
else
{
uint8_t v___x_643_; 
lean_dec_ref_known(v_x_641_, 1);
v___x_643_ = 0;
return v___x_643_;
}
}
else
{
if (lean_obj_tag(v_x_641_) == 0)
{
uint8_t v___x_644_; 
lean_dec_ref_known(v_x_640_, 1);
v___x_644_ = 0;
return v___x_644_;
}
else
{
lean_object* v_val_645_; lean_object* v_val_646_; uint8_t v___x_647_; 
v_val_645_ = lean_ctor_get(v_x_640_, 0);
lean_inc(v_val_645_);
lean_dec_ref_known(v_x_640_, 1);
v_val_646_ = lean_ctor_get(v_x_641_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v_x_641_, 1);
v___x_647_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_val_645_, v_val_646_);
return v___x_647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0___boxed(lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(v_x_648_, v_x_649_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg(lean_object* v_old_652_, lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
lean_object* v___x_654_; 
v___x_654_ = lean_box(0);
return v___x_654_;
}
else
{
lean_object* v_head_655_; lean_object* v_tail_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_674_; 
v_head_655_ = lean_ctor_get(v_x_653_, 0);
v_tail_656_ = lean_ctor_get(v_x_653_, 1);
v_isSharedCheck_674_ = !lean_is_exclusive(v_x_653_);
if (v_isSharedCheck_674_ == 0)
{
v___x_658_ = v_x_653_;
v_isShared_659_ = v_isSharedCheck_674_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_tail_656_);
lean_inc(v_head_655_);
lean_dec(v_x_653_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_674_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v_t_660_; lean_object* v___x_661_; uint8_t v___y_663_; uint8_t v___x_669_; 
lean_inc(v_tail_656_);
v_t_660_ = l_Lasm_UI_attrSets___redArg(v_old_652_, v_tail_656_);
v___x_661_ = l_Lasm_UI_Attr_key___redArg(v_head_655_);
v___x_669_ = l_Lasm_UI_hasKey___redArg(v___x_661_, v_tail_656_);
lean_dec(v_tail_656_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_670_ = l_Lasm_UI_lastVal___redArg(v___x_661_, v_old_652_);
v___x_671_ = l_Lasm_UI_Attr_val___redArg(v_head_655_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
v___x_673_ = l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(v___x_670_, v___x_672_);
v___y_663_ = v___x_673_;
goto v___jp_662_;
}
else
{
v___y_663_ = v___x_669_;
goto v___jp_662_;
}
v___jp_662_:
{
if (v___y_663_ == 0)
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_664_ = l_Lasm_UI_Attr_val___redArg(v_head_655_);
lean_dec(v_head_655_);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_661_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 1, v_t_660_);
lean_ctor_set(v___x_658_, 0, v___x_665_);
v___x_667_ = v___x_658_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_t_660_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
else
{
lean_dec_ref(v___x_661_);
lean_del_object(v___x_658_);
lean_dec(v_head_655_);
return v_t_660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg___boxed(lean_object* v_old_675_, lean_object* v_x_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lasm_UI_attrSets___redArg(v_old_675_, v_x_676_);
lean_dec(v_old_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets(lean_object* v_Msg_678_, lean_object* v_old_679_, lean_object* v_x_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lasm_UI_attrSets___redArg(v_old_679_, v_x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___boxed(lean_object* v_Msg_682_, lean_object* v_old_683_, lean_object* v_x_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lasm_UI_attrSets(v_Msg_682_, v_old_683_, v_x_684_);
lean_dec(v_old_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg(lean_object* v_new_686_, lean_object* v_x_687_){
_start:
{
if (lean_obj_tag(v_x_687_) == 0)
{
lean_object* v___x_688_; 
v___x_688_ = lean_box(0);
return v___x_688_;
}
else
{
lean_object* v_head_689_; lean_object* v_tail_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_702_; 
v_head_689_ = lean_ctor_get(v_x_687_, 0);
v_tail_690_ = lean_ctor_get(v_x_687_, 1);
v_isSharedCheck_702_ = !lean_is_exclusive(v_x_687_);
if (v_isSharedCheck_702_ == 0)
{
v___x_692_ = v_x_687_;
v_isShared_693_ = v_isSharedCheck_702_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_tail_690_);
lean_inc(v_head_689_);
lean_dec(v_x_687_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_702_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = l_Lasm_UI_Attr_key___redArg(v_head_689_);
lean_dec(v_head_689_);
v___x_695_ = l_Lasm_UI_hasKey___redArg(v___x_694_, v_new_686_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
v___x_697_ = l_Lasm_UI_attrRemoves___redArg(v_new_686_, v_tail_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v___x_697_);
lean_ctor_set(v___x_692_, 0, v___x_696_);
v___x_699_ = v___x_692_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
else
{
lean_dec_ref(v___x_694_);
lean_del_object(v___x_692_);
v_x_687_ = v_tail_690_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg___boxed(lean_object* v_new_703_, lean_object* v_x_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lasm_UI_attrRemoves___redArg(v_new_703_, v_x_704_);
lean_dec(v_new_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves(lean_object* v_Msg_706_, lean_object* v_new_707_, lean_object* v_x_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lasm_UI_attrRemoves___redArg(v_new_707_, v_x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___boxed(lean_object* v_Msg_710_, lean_object* v_new_711_, lean_object* v_x_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lasm_UI_attrRemoves(v_Msg_710_, v_new_711_, v_x_712_);
lean_dec(v_new_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs___redArg(lean_object* v_old_714_, lean_object* v_new_715_){
_start:
{
uint8_t v___x_716_; 
lean_inc(v_new_715_);
lean_inc(v_old_714_);
v___x_716_ = l_Lasm_UI_attrsEq___redArg(v_old_714_, v_new_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
lean_inc(v_old_714_);
v___x_717_ = l_Lasm_UI_attrRemoves___redArg(v_new_715_, v_old_714_);
v___x_718_ = l_Lasm_UI_attrSets___redArg(v_old_714_, v_new_715_);
lean_dec(v_old_714_);
v___x_719_ = l_List_appendTR___redArg(v___x_717_, v___x_718_);
return v___x_719_;
}
else
{
lean_object* v___x_720_; 
lean_dec(v_new_715_);
lean_dec(v_old_714_);
v___x_720_ = lean_box(0);
return v___x_720_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs(lean_object* v_Msg_721_, lean_object* v_old_722_, lean_object* v_new_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = l_Lasm_UI_diffAttrs___redArg(v_old_722_, v_new_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___redArg(lean_object* v_val_725_, lean_object* v_before_726_, lean_object* v_x_727_, lean_object* v_x_728_, lean_object* v_x_729_, lean_object* v_x_730_){
_start:
{
if (lean_obj_tag(v_x_727_) == 0)
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v_before_726_);
lean_dec_ref(v_val_725_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v_x_730_);
lean_ctor_set(v___x_731_, 1, v_x_728_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v_x_729_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
return v___x_732_;
}
else
{
lean_object* v_head_733_; lean_object* v_tail_734_; lean_object* v___x_735_; lean_object* v_r_736_; lean_object* v_fst_737_; lean_object* v_snd_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_748_; 
v_head_733_ = lean_ctor_get(v_x_727_, 0);
lean_inc(v_head_733_);
v_tail_734_ = lean_ctor_get(v_x_727_, 1);
lean_inc(v_tail_734_);
lean_dec_ref_known(v_x_727_, 2);
lean_inc_ref(v_val_725_);
v___x_735_ = lean_apply_1(v_val_725_, v_head_733_);
v_r_736_ = l_Lasm_UI_create___redArg(v___x_735_, v_x_728_);
lean_dec_ref(v___x_735_);
v_fst_737_ = lean_ctor_get(v_r_736_, 0);
v_snd_738_ = lean_ctor_get(v_r_736_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_r_736_);
if (v_isSharedCheck_748_ == 0)
{
v___x_740_ = v_r_736_;
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_snd_738_);
lean_inc(v_fst_737_);
lean_dec(v_r_736_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
lean_inc(v_before_726_);
lean_inc(v_fst_737_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 1, v_before_726_);
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_fst_737_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_before_726_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_array_push(v_x_729_, v___x_743_);
v___x_745_ = lean_array_push(v_x_730_, v_fst_737_);
v_x_727_ = v_tail_734_;
v_x_728_ = v_snd_738_;
v_x_729_ = v___x_744_;
v_x_730_ = v___x_745_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll(lean_object* v_Msg_749_, lean_object* v_00_u03b2_750_, lean_object* v_val_751_, lean_object* v_before_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v_x_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lasm_UI_insertAll___redArg(v_val_751_, v_before_752_, v_x_753_, v_x_754_, v_x_755_, v_x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll___redArg(lean_object* v_x_758_, lean_object* v_x_759_){
_start:
{
if (lean_obj_tag(v_x_758_) == 0)
{
return v_x_759_;
}
else
{
lean_object* v_head_760_; lean_object* v_tail_761_; lean_object* v___y_763_; lean_object* v_id_767_; 
v_head_760_ = lean_ctor_get(v_x_758_, 0);
lean_inc(v_head_760_);
v_tail_761_ = lean_ctor_get(v_x_758_, 1);
lean_inc(v_tail_761_);
lean_dec_ref_known(v_x_758_, 2);
v_id_767_ = lean_ctor_get(v_head_760_, 0);
lean_inc(v_id_767_);
lean_dec(v_head_760_);
v___y_763_ = v_id_767_;
goto v___jp_762_;
v___jp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_764_, 0, v___y_763_);
v___x_765_ = lean_array_push(v_x_759_, v___x_764_);
v_x_758_ = v_tail_761_;
v_x_759_ = v___x_765_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll(lean_object* v_Msg_768_, lean_object* v_x_769_, lean_object* v_x_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lasm_UI_removeAll___redArg(v_x_769_, v_x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg(lean_object* v_val_772_, lean_object* v_na_773_, lean_object* v_before_774_, lean_object* v_lo_775_, lean_object* v_hi_776_, lean_object* v_n_777_, lean_object* v_ops_778_, lean_object* v_acc_779_){
_start:
{
uint8_t v___x_780_; 
v___x_780_ = lean_nat_dec_lt(v_lo_775_, v_hi_776_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v_lo_775_);
lean_dec(v_before_774_);
lean_dec_ref(v_val_772_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v_acc_779_);
lean_ctor_set(v___x_781_, 1, v_n_777_);
v___x_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_782_, 0, v_ops_778_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
return v___x_782_;
}
else
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = lean_array_get_size(v_na_773_);
v___x_784_ = lean_nat_dec_lt(v_lo_775_, v___x_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
lean_dec(v_lo_775_);
lean_dec(v_before_774_);
lean_dec_ref(v_val_772_);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v_acc_779_);
lean_ctor_set(v___x_785_, 1, v_n_777_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v_ops_778_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v_r_789_; lean_object* v_fst_790_; lean_object* v_snd_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_803_; 
v___x_787_ = lean_array_fget_borrowed(v_na_773_, v_lo_775_);
lean_inc_ref(v_val_772_);
lean_inc(v___x_787_);
v___x_788_ = lean_apply_1(v_val_772_, v___x_787_);
v_r_789_ = l_Lasm_UI_create___redArg(v___x_788_, v_n_777_);
lean_dec_ref(v___x_788_);
v_fst_790_ = lean_ctor_get(v_r_789_, 0);
v_snd_791_ = lean_ctor_get(v_r_789_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v_r_789_);
if (v_isSharedCheck_803_ == 0)
{
v___x_793_ = v_r_789_;
v_isShared_794_ = v_isSharedCheck_803_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_snd_791_);
lean_inc(v_fst_790_);
lean_dec(v_r_789_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_803_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_795_ = lean_unsigned_to_nat(1u);
v___x_796_ = lean_nat_add(v_lo_775_, v___x_795_);
lean_dec(v_lo_775_);
lean_inc(v_before_774_);
lean_inc(v_fst_790_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 1, v_before_774_);
v___x_798_ = v___x_793_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_fst_790_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_before_774_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_array_push(v_ops_778_, v___x_798_);
v___x_800_ = lean_array_push(v_acc_779_, v_fst_790_);
v_lo_775_ = v___x_796_;
v_n_777_ = v_snd_791_;
v_ops_778_ = v___x_799_;
v_acc_779_ = v___x_800_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg___boxed(lean_object* v_val_804_, lean_object* v_na_805_, lean_object* v_before_806_, lean_object* v_lo_807_, lean_object* v_hi_808_, lean_object* v_n_809_, lean_object* v_ops_810_, lean_object* v_acc_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lasm_UI_insertRange___redArg(v_val_804_, v_na_805_, v_before_806_, v_lo_807_, v_hi_808_, v_n_809_, v_ops_810_, v_acc_811_);
lean_dec(v_hi_808_);
lean_dec_ref(v_na_805_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange(lean_object* v_Msg_813_, lean_object* v_00_u03b2_814_, lean_object* v_val_815_, lean_object* v_na_816_, lean_object* v_before_817_, lean_object* v_lo_818_, lean_object* v_hi_819_, lean_object* v_n_820_, lean_object* v_ops_821_, lean_object* v_acc_822_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lasm_UI_insertRange___redArg(v_val_815_, v_na_816_, v_before_817_, v_lo_818_, v_hi_819_, v_n_820_, v_ops_821_, v_acc_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___boxed(lean_object* v_Msg_824_, lean_object* v_00_u03b2_825_, lean_object* v_val_826_, lean_object* v_na_827_, lean_object* v_before_828_, lean_object* v_lo_829_, lean_object* v_hi_830_, lean_object* v_n_831_, lean_object* v_ops_832_, lean_object* v_acc_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lasm_UI_insertRange(v_Msg_824_, v_00_u03b2_825_, v_val_826_, v_na_827_, v_before_828_, v_lo_829_, v_hi_830_, v_n_831_, v_ops_832_, v_acc_833_);
lean_dec(v_hi_830_);
lean_dec_ref(v_na_827_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter___redArg(lean_object* v_x_835_, lean_object* v_h__1_836_, lean_object* v_h__2_837_){
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
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter(lean_object* v_00_u03b2_842_, lean_object* v_motive_843_, lean_object* v_x_844_, lean_object* v_h__1_845_, lean_object* v_h__2_846_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v_h__1_845_);
v___x_847_ = lean_box(0);
v___x_848_ = lean_apply_1(v_h__2_846_, v___x_847_);
return v___x_848_;
}
else
{
lean_object* v_val_849_; lean_object* v___x_850_; 
lean_dec(v_h__2_846_);
v_val_849_ = lean_ctor_get(v_x_844_, 0);
lean_inc(v_val_849_);
lean_dec_ref_known(v_x_844_, 1);
v___x_850_ = lean_apply_1(v_h__1_845_, v_val_849_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg(lean_object* v_oa_851_, lean_object* v_lo_852_, lean_object* v_hi_853_, lean_object* v_ops_854_){
_start:
{
uint8_t v___x_859_; 
v___x_859_ = lean_nat_dec_lt(v_lo_852_, v_hi_853_);
if (v___x_859_ == 0)
{
lean_dec(v_lo_852_);
return v_ops_854_;
}
else
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = lean_array_get_size(v_oa_851_);
v___x_861_ = lean_nat_dec_lt(v_lo_852_, v___x_860_);
if (v___x_861_ == 0)
{
goto v___jp_855_;
}
else
{
lean_object* v___x_862_; 
v___x_862_ = lean_array_fget(v_oa_851_, v_lo_852_);
if (lean_obj_tag(v___x_862_) == 1)
{
lean_object* v_val_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_877_; 
v_val_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_877_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_877_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_val_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_877_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___y_870_; lean_object* v_id_876_; 
v___x_867_ = lean_unsigned_to_nat(1u);
v___x_868_ = lean_nat_add(v_lo_852_, v___x_867_);
lean_dec(v_lo_852_);
v_id_876_ = lean_ctor_get(v_val_863_, 0);
lean_inc(v_id_876_);
lean_dec(v_val_863_);
v___y_870_ = v_id_876_;
goto v___jp_869_;
v___jp_869_:
{
lean_object* v___x_872_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set_tag(v___x_865_, 2);
lean_ctor_set(v___x_865_, 0, v___y_870_);
v___x_872_ = v___x_865_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___y_870_);
v___x_872_ = v_reuseFailAlloc_875_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; 
v___x_873_ = lean_array_push(v_ops_854_, v___x_872_);
v_lo_852_ = v___x_868_;
v_ops_854_ = v___x_873_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_862_);
goto v___jp_855_;
}
}
}
v___jp_855_:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_add(v_lo_852_, v___x_856_);
lean_dec(v_lo_852_);
v_lo_852_ = v___x_857_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg___boxed(lean_object* v_oa_878_, lean_object* v_lo_879_, lean_object* v_hi_880_, lean_object* v_ops_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_UI_removeRange___redArg(v_oa_878_, v_lo_879_, v_hi_880_, v_ops_881_);
lean_dec(v_hi_880_);
lean_dec_ref(v_oa_878_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange(lean_object* v_Msg_883_, lean_object* v_oa_884_, lean_object* v_lo_885_, lean_object* v_hi_886_, lean_object* v_ops_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = l_Lasm_UI_removeRange___redArg(v_oa_884_, v_lo_885_, v_hi_886_, v_ops_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___boxed(lean_object* v_Msg_889_, lean_object* v_oa_890_, lean_object* v_lo_891_, lean_object* v_hi_892_, lean_object* v_ops_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lasm_UI_removeRange(v_Msg_889_, v_oa_890_, v_lo_891_, v_hi_892_, v_ops_893_);
lean_dec(v_hi_892_);
lean_dec_ref(v_oa_890_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object* v_x_895_, lean_object* v_h__1_896_, lean_object* v_h__2_897_){
_start:
{
if (lean_obj_tag(v_x_895_) == 1)
{
lean_object* v_val_898_; 
v_val_898_ = lean_ctor_get(v_x_895_, 0);
if (lean_obj_tag(v_val_898_) == 1)
{
lean_object* v_val_899_; lean_object* v___x_900_; 
lean_inc_ref(v_val_898_);
lean_dec_ref_known(v_x_895_, 1);
lean_dec(v_h__2_897_);
v_val_899_ = lean_ctor_get(v_val_898_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v_val_898_, 1);
v___x_900_ = lean_apply_1(v_h__1_896_, v_val_899_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; 
lean_dec(v_h__1_896_);
v___x_901_ = lean_apply_2(v_h__2_897_, v_x_895_, lean_box(0));
return v___x_901_;
}
}
else
{
lean_object* v___x_902_; 
lean_dec(v_h__1_896_);
v___x_902_ = lean_apply_2(v_h__2_897_, v_x_895_, lean_box(0));
return v___x_902_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter(lean_object* v_Msg_903_, lean_object* v_motive_904_, lean_object* v_x_905_, lean_object* v_h__1_906_, lean_object* v_h__2_907_){
_start:
{
if (lean_obj_tag(v_x_905_) == 1)
{
lean_object* v_val_908_; 
v_val_908_ = lean_ctor_get(v_x_905_, 0);
if (lean_obj_tag(v_val_908_) == 1)
{
lean_object* v_val_909_; lean_object* v___x_910_; 
lean_inc_ref(v_val_908_);
lean_dec_ref_known(v_x_905_, 1);
lean_dec(v_h__2_907_);
v_val_909_ = lean_ctor_get(v_val_908_, 0);
lean_inc(v_val_909_);
lean_dec_ref_known(v_val_908_, 1);
v___x_910_ = lean_apply_1(v_h__1_906_, v_val_909_);
return v___x_910_;
}
else
{
lean_object* v___x_911_; 
lean_dec(v_h__1_906_);
v___x_911_ = lean_apply_2(v_h__2_907_, v_x_905_, lean_box(0));
return v___x_911_;
}
}
else
{
lean_object* v___x_912_; 
lean_dec(v_h__1_906_);
v___x_912_ = lean_apply_2(v_h__2_907_, v_x_905_, lean_box(0));
return v___x_912_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(lean_object* v_a_913_, lean_object* v_x_914_){
_start:
{
if (lean_obj_tag(v_x_914_) == 0)
{
uint8_t v___x_915_; 
v___x_915_ = 0;
return v___x_915_;
}
else
{
lean_object* v_key_916_; lean_object* v_tail_917_; uint8_t v___x_918_; 
v_key_916_ = lean_ctor_get(v_x_914_, 0);
v_tail_917_ = lean_ctor_get(v_x_914_, 2);
v___x_918_ = lean_string_dec_eq(v_key_916_, v_a_913_);
if (v___x_918_ == 0)
{
v_x_914_ = v_tail_917_;
goto _start;
}
else
{
return v___x_918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg___boxed(lean_object* v_a_920_, lean_object* v_x_921_){
_start:
{
uint8_t v_res_922_; lean_object* v_r_923_; 
v_res_922_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_920_, v_x_921_);
lean_dec(v_x_921_);
lean_dec_ref(v_a_920_);
v_r_923_ = lean_box(v_res_922_);
return v_r_923_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(lean_object* v_a_924_, lean_object* v_b_925_, lean_object* v_x_926_){
_start:
{
if (lean_obj_tag(v_x_926_) == 0)
{
lean_dec(v_b_925_);
lean_dec_ref(v_a_924_);
return v_x_926_;
}
else
{
lean_object* v_key_927_; lean_object* v_value_928_; lean_object* v_tail_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_941_; 
v_key_927_ = lean_ctor_get(v_x_926_, 0);
v_value_928_ = lean_ctor_get(v_x_926_, 1);
v_tail_929_ = lean_ctor_get(v_x_926_, 2);
v_isSharedCheck_941_ = !lean_is_exclusive(v_x_926_);
if (v_isSharedCheck_941_ == 0)
{
v___x_931_ = v_x_926_;
v_isShared_932_ = v_isSharedCheck_941_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_tail_929_);
lean_inc(v_value_928_);
lean_inc(v_key_927_);
lean_dec(v_x_926_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_941_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
uint8_t v___x_933_; 
v___x_933_ = lean_string_dec_eq(v_key_927_, v_a_924_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_924_, v_b_925_, v_tail_929_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 2, v___x_934_);
v___x_936_ = v___x_931_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_key_927_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_value_928_);
lean_ctor_set(v_reuseFailAlloc_937_, 2, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
else
{
lean_object* v___x_939_; 
lean_dec(v_value_928_);
lean_dec(v_key_927_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v_b_925_);
lean_ctor_set(v___x_931_, 0, v_a_924_);
v___x_939_ = v___x_931_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_924_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_b_925_);
lean_ctor_set(v_reuseFailAlloc_940_, 2, v_tail_929_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
return v_x_942_;
}
else
{
lean_object* v_key_944_; lean_object* v_value_945_; lean_object* v_tail_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_969_; 
v_key_944_ = lean_ctor_get(v_x_943_, 0);
v_value_945_ = lean_ctor_get(v_x_943_, 1);
v_tail_946_ = lean_ctor_get(v_x_943_, 2);
v_isSharedCheck_969_ = !lean_is_exclusive(v_x_943_);
if (v_isSharedCheck_969_ == 0)
{
v___x_948_ = v_x_943_;
v_isShared_949_ = v_isSharedCheck_969_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_tail_946_);
lean_inc(v_value_945_);
lean_inc(v_key_944_);
lean_dec(v_x_943_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_969_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_950_; uint64_t v___x_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v_fold_954_; uint64_t v___x_955_; uint64_t v___x_956_; uint64_t v___x_957_; size_t v___x_958_; size_t v___x_959_; size_t v___x_960_; size_t v___x_961_; size_t v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_950_ = lean_array_get_size(v_x_942_);
v___x_951_ = lean_string_hash(v_key_944_);
v___x_952_ = 32ULL;
v___x_953_ = lean_uint64_shift_right(v___x_951_, v___x_952_);
v_fold_954_ = lean_uint64_xor(v___x_951_, v___x_953_);
v___x_955_ = 16ULL;
v___x_956_ = lean_uint64_shift_right(v_fold_954_, v___x_955_);
v___x_957_ = lean_uint64_xor(v_fold_954_, v___x_956_);
v___x_958_ = lean_uint64_to_usize(v___x_957_);
v___x_959_ = lean_usize_of_nat(v___x_950_);
v___x_960_ = ((size_t)1ULL);
v___x_961_ = lean_usize_sub(v___x_959_, v___x_960_);
v___x_962_ = lean_usize_land(v___x_958_, v___x_961_);
v___x_963_ = lean_array_uget_borrowed(v_x_942_, v___x_962_);
lean_inc(v___x_963_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 2, v___x_963_);
v___x_965_ = v___x_948_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_key_944_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_value_945_);
lean_ctor_set(v_reuseFailAlloc_968_, 2, v___x_963_);
v___x_965_ = v_reuseFailAlloc_968_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_array_uset(v_x_942_, v___x_962_, v___x_965_);
v_x_942_ = v___x_966_;
v_x_943_ = v_tail_946_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(lean_object* v_i_970_, lean_object* v_source_971_, lean_object* v_target_972_){
_start:
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = lean_array_get_size(v_source_971_);
v___x_974_ = lean_nat_dec_lt(v_i_970_, v___x_973_);
if (v___x_974_ == 0)
{
lean_dec_ref(v_source_971_);
lean_dec(v_i_970_);
return v_target_972_;
}
else
{
lean_object* v_es_975_; lean_object* v___x_976_; lean_object* v_source_977_; lean_object* v_target_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_es_975_ = lean_array_fget(v_source_971_, v_i_970_);
v___x_976_ = lean_box(0);
v_source_977_ = lean_array_fset(v_source_971_, v_i_970_, v___x_976_);
v_target_978_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_target_972_, v_es_975_);
v___x_979_ = lean_unsigned_to_nat(1u);
v___x_980_ = lean_nat_add(v_i_970_, v___x_979_);
lean_dec(v_i_970_);
v_i_970_ = v___x_980_;
v_source_971_ = v_source_977_;
v_target_972_ = v_target_978_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(lean_object* v_data_982_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_nbuckets_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_983_ = lean_array_get_size(v_data_982_);
v___x_984_ = lean_unsigned_to_nat(2u);
v_nbuckets_985_ = lean_nat_mul(v___x_983_, v___x_984_);
v___x_986_ = lean_unsigned_to_nat(0u);
v___x_987_ = lean_box(0);
v___x_988_ = lean_mk_array(v_nbuckets_985_, v___x_987_);
v___x_989_ = lean_array_propagate_mark(v_data_982_, v___x_988_);
v___x_990_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v___x_986_, v_data_982_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object* v_m_991_, lean_object* v_a_992_, lean_object* v_b_993_){
_start:
{
lean_object* v_size_994_; lean_object* v_buckets_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1038_; 
v_size_994_ = lean_ctor_get(v_m_991_, 0);
v_buckets_995_ = lean_ctor_get(v_m_991_, 1);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_m_991_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_997_ = v_m_991_;
v_isShared_998_ = v_isSharedCheck_1038_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_buckets_995_);
lean_inc(v_size_994_);
lean_dec(v_m_991_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1038_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; uint64_t v___x_1000_; uint64_t v___x_1001_; uint64_t v___x_1002_; uint64_t v_fold_1003_; uint64_t v___x_1004_; uint64_t v___x_1005_; uint64_t v___x_1006_; size_t v___x_1007_; size_t v___x_1008_; size_t v___x_1009_; size_t v___x_1010_; size_t v___x_1011_; lean_object* v_bkt_1012_; uint8_t v___x_1013_; 
v___x_999_ = lean_array_get_size(v_buckets_995_);
v___x_1000_ = lean_string_hash(v_a_992_);
v___x_1001_ = 32ULL;
v___x_1002_ = lean_uint64_shift_right(v___x_1000_, v___x_1001_);
v_fold_1003_ = lean_uint64_xor(v___x_1000_, v___x_1002_);
v___x_1004_ = 16ULL;
v___x_1005_ = lean_uint64_shift_right(v_fold_1003_, v___x_1004_);
v___x_1006_ = lean_uint64_xor(v_fold_1003_, v___x_1005_);
v___x_1007_ = lean_uint64_to_usize(v___x_1006_);
v___x_1008_ = lean_usize_of_nat(v___x_999_);
v___x_1009_ = ((size_t)1ULL);
v___x_1010_ = lean_usize_sub(v___x_1008_, v___x_1009_);
v___x_1011_ = lean_usize_land(v___x_1007_, v___x_1010_);
v_bkt_1012_ = lean_array_uget_borrowed(v_buckets_995_, v___x_1011_);
v___x_1013_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_992_, v_bkt_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; lean_object* v_size_x27_1015_; lean_object* v___x_1016_; lean_object* v_buckets_x27_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1014_ = lean_unsigned_to_nat(1u);
v_size_x27_1015_ = lean_nat_add(v_size_994_, v___x_1014_);
lean_dec(v_size_994_);
lean_inc(v_bkt_1012_);
v___x_1016_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1016_, 0, v_a_992_);
lean_ctor_set(v___x_1016_, 1, v_b_993_);
lean_ctor_set(v___x_1016_, 2, v_bkt_1012_);
v_buckets_x27_1017_ = lean_array_uset(v_buckets_995_, v___x_1011_, v___x_1016_);
v___x_1018_ = lean_unsigned_to_nat(4u);
v___x_1019_ = lean_nat_mul(v_size_x27_1015_, v___x_1018_);
v___x_1020_ = lean_unsigned_to_nat(3u);
v___x_1021_ = lean_nat_div(v___x_1019_, v___x_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_array_get_size(v_buckets_x27_1017_);
v___x_1023_ = lean_nat_dec_le(v___x_1021_, v___x_1022_);
lean_dec(v___x_1021_);
if (v___x_1023_ == 0)
{
lean_object* v_val_1024_; lean_object* v___x_1026_; 
v_val_1024_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_buckets_x27_1017_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v_val_1024_);
lean_ctor_set(v___x_997_, 0, v_size_x27_1015_);
v___x_1026_ = v___x_997_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_size_x27_1015_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_val_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
else
{
lean_object* v___x_1029_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v_buckets_x27_1017_);
lean_ctor_set(v___x_997_, 0, v_size_x27_1015_);
v___x_1029_ = v___x_997_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_size_x27_1015_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_buckets_x27_1017_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v___x_1031_; lean_object* v_buckets_x27_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
lean_inc(v_bkt_1012_);
v___x_1031_ = lean_box(0);
v_buckets_x27_1032_ = lean_array_uset(v_buckets_995_, v___x_1011_, v___x_1031_);
v___x_1033_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_992_, v_b_993_, v_bkt_1012_);
v___x_1034_ = lean_array_uset(v_buckets_x27_1032_, v___x_1011_, v___x_1033_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1034_);
v___x_1036_ = v___x_997_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_size_994_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg(lean_object* v_oa_1039_, lean_object* v_lo_1040_, lean_object* v_hi_1041_, lean_object* v_m_1042_){
_start:
{
uint8_t v___x_1047_; 
v___x_1047_ = lean_nat_dec_lt(v_lo_1040_, v_hi_1041_);
if (v___x_1047_ == 0)
{
lean_dec(v_lo_1040_);
return v_m_1042_;
}
else
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = lean_array_get_size(v_oa_1039_);
v___x_1049_ = lean_nat_dec_lt(v_lo_1040_, v___x_1048_);
if (v___x_1049_ == 0)
{
goto v___jp_1043_;
}
else
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_array_fget_borrowed(v_oa_1039_, v_lo_1040_);
if (lean_obj_tag(v___x_1050_) == 1)
{
lean_object* v_val_1051_; lean_object* v___x_1052_; 
v_val_1051_ = lean_ctor_get(v___x_1050_, 0);
v___x_1052_ = l_Lasm_UI_Live_key_x3f___redArg(v_val_1051_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_unsigned_to_nat(1u);
v___x_1054_ = lean_nat_add(v_lo_1040_, v___x_1053_);
lean_dec(v_lo_1040_);
v_lo_1040_ = v___x_1054_;
goto _start;
}
else
{
lean_object* v_val_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_val_1056_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_val_1056_);
lean_dec_ref_known(v___x_1052_, 1);
v___x_1057_ = lean_unsigned_to_nat(1u);
v___x_1058_ = lean_nat_add(v_lo_1040_, v___x_1057_);
v___x_1059_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1042_, v_val_1056_, v_lo_1040_);
v_lo_1040_ = v___x_1058_;
v_m_1042_ = v___x_1059_;
goto _start;
}
}
else
{
goto v___jp_1043_;
}
}
}
v___jp_1043_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = lean_nat_add(v_lo_1040_, v___x_1044_);
lean_dec(v_lo_1040_);
v_lo_1040_ = v___x_1045_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg___boxed(lean_object* v_oa_1061_, lean_object* v_lo_1062_, lean_object* v_hi_1063_, lean_object* v_m_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lasm_UI_keyIndex___redArg(v_oa_1061_, v_lo_1062_, v_hi_1063_, v_m_1064_);
lean_dec(v_hi_1063_);
lean_dec_ref(v_oa_1061_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex(lean_object* v_Msg_1066_, lean_object* v_oa_1067_, lean_object* v_lo_1068_, lean_object* v_hi_1069_, lean_object* v_m_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lasm_UI_keyIndex___redArg(v_oa_1067_, v_lo_1068_, v_hi_1069_, v_m_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___boxed(lean_object* v_Msg_1072_, lean_object* v_oa_1073_, lean_object* v_lo_1074_, lean_object* v_hi_1075_, lean_object* v_m_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_UI_keyIndex(v_Msg_1072_, v_oa_1073_, v_lo_1074_, v_hi_1075_, v_m_1076_);
lean_dec(v_hi_1075_);
lean_dec_ref(v_oa_1073_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0(lean_object* v_00_u03b2_1078_, lean_object* v_m_1079_, lean_object* v_a_1080_, lean_object* v_b_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1079_, v_a_1080_, v_b_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(lean_object* v_00_u03b2_1083_, lean_object* v_a_1084_, lean_object* v_x_1085_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_1084_, v_x_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1087_, lean_object* v_a_1088_, lean_object* v_x_1089_){
_start:
{
uint8_t v_res_1090_; lean_object* v_r_1091_; 
v_res_1090_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(v_00_u03b2_1087_, v_a_1088_, v_x_1089_);
lean_dec(v_x_1089_);
lean_dec_ref(v_a_1088_);
v_r_1091_ = lean_box(v_res_1090_);
return v_r_1091_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1(lean_object* v_00_u03b2_1092_, lean_object* v_data_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_data_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2(lean_object* v_00_u03b2_1095_, lean_object* v_a_1096_, lean_object* v_b_1097_, lean_object* v_x_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_1096_, v_b_1097_, v_x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1100_, lean_object* v_i_1101_, lean_object* v_source_1102_, lean_object* v_target_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v_i_1101_, v_source_1102_, v_target_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1105_, lean_object* v_x_1106_, lean_object* v_x_1107_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1106_, v_x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter___redArg(lean_object* v_x_1109_, lean_object* v_h__1_1110_, lean_object* v_h__2_1111_){
_start:
{
if (lean_obj_tag(v_x_1109_) == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_dec(v_h__1_1110_);
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_apply_1(v_h__2_1111_, v___x_1112_);
return v___x_1113_;
}
else
{
lean_object* v_val_1114_; lean_object* v___x_1115_; 
lean_dec(v_h__2_1111_);
v_val_1114_ = lean_ctor_get(v_x_1109_, 0);
lean_inc(v_val_1114_);
lean_dec_ref_known(v_x_1109_, 1);
v___x_1115_ = lean_apply_1(v_h__1_1110_, v_val_1114_);
return v___x_1115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter(lean_object* v_motive_1116_, lean_object* v_x_1117_, lean_object* v_h__1_1118_, lean_object* v_h__2_1119_){
_start:
{
if (lean_obj_tag(v_x_1117_) == 0)
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec(v_h__1_1118_);
v___x_1120_ = lean_box(0);
v___x_1121_ = lean_apply_1(v_h__2_1119_, v___x_1120_);
return v___x_1121_;
}
else
{
lean_object* v_val_1122_; lean_object* v___x_1123_; 
lean_dec(v_h__2_1119_);
v_val_1122_ = lean_ctor_get(v_x_1117_, 0);
lean_inc(v_val_1122_);
lean_dec_ref_known(v_x_1117_, 1);
v___x_1123_ = lean_apply_1(v_h__1_1118_, v_val_1122_);
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0(lean_object* v___y_1124_, lean_object* v_x_1125_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___y_1124_);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0___boxed(lean_object* v___y_1129_, lean_object* v_x_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_1129_, v_x_1130_);
lean_dec(v_x_1130_);
return v_res_1131_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__1(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___f_1134_; 
v___x_1133_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_1134_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1134_, 0, v___x_1133_);
return v___f_1134_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__2(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = lean_box(0);
v___x_1136_ = lean_unsigned_to_nat(16u);
v___x_1137_ = lean_mk_array(v___x_1136_, v___x_1135_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__3(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__2, &l_Lasm_UI_twoEnded___redArg___closed__2_once, _init_l_Lasm_UI_twoEnded___redArg___closed__2);
v___x_1139_ = lean_unsigned_to_nat(0u);
v___x_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1139_);
lean_ctor_set(v___x_1140_, 1, v___x_1138_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object* v_val_1141_, lean_object* v_f_1142_, lean_object* v_oa_1143_, lean_object* v_oLo_1144_, lean_object* v_oHi_1145_, lean_object* v_na_1146_, lean_object* v_nLo_1147_, lean_object* v_nHi_1148_, lean_object* v_pre_1149_, lean_object* v_suf_1150_, lean_object* v_ops_1151_, lean_object* v_next_1152_, lean_object* v_keys_1153_){
_start:
{
lean_object* v___y_1155_; lean_object* v___y_1165_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; uint8_t v___x_1186_; 
v___x_1186_ = lean_nat_dec_lt(v_oLo_1144_, v_oHi_1145_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; 
lean_dec(v_keys_1153_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
v___x_1187_ = l_List_head_x3f___redArg(v_suf_1150_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_box(0);
v___y_1155_ = v___x_1188_;
goto v___jp_1154_;
}
else
{
lean_object* v_val_1189_; lean_object* v_id_1190_; 
v_val_1189_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_val_1189_);
lean_dec_ref_known(v___x_1187_, 1);
v_id_1190_ = lean_ctor_get(v_val_1189_, 0);
lean_inc(v_id_1190_);
lean_dec(v_val_1189_);
v___y_1165_ = v_id_1190_;
goto v___jp_1164_;
}
}
else
{
uint8_t v___x_1191_; 
v___x_1191_ = lean_nat_dec_lt(v_nLo_1147_, v_nHi_1148_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
v___x_1192_ = l_Lasm_UI_removeRange___redArg(v_oa_1143_, v_oLo_1144_, v_oHi_1145_, v_ops_1151_);
lean_dec(v_oHi_1145_);
lean_dec_ref(v_oa_1143_);
v___x_1193_ = lean_array_to_list(v_pre_1149_);
v___x_1194_ = l_List_appendTR___redArg(v___x_1193_, v_suf_1150_);
v___x_1195_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1192_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
lean_ctor_set(v___x_1195_, 2, v_next_1152_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1196_ = lean_array_get_size(v_oa_1143_);
v___x_1197_ = lean_nat_dec_lt(v_oLo_1144_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1198_ = lean_unsigned_to_nat(1u);
v___x_1199_ = lean_nat_sub(v_oHi_1145_, v___x_1198_);
v___x_1200_ = lean_nat_dec_lt(v___x_1199_, v___x_1196_);
if (v___x_1200_ == 0)
{
lean_dec(v___x_1199_);
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
goto v___jp_1167_;
}
else
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_array_fget_borrowed(v_oa_1143_, v___x_1199_);
lean_dec(v___x_1199_);
if (lean_obj_tag(v___x_1201_) == 0)
{
goto v___jp_1171_;
}
else
{
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
goto v___jp_1167_;
}
}
}
else
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_array_fget(v_oa_1143_, v_oLo_1144_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_nat_add(v_oLo_1144_, v___x_1203_);
lean_dec(v_oLo_1144_);
v_oLo_1144_ = v___x_1204_;
goto _start;
}
else
{
lean_object* v_val_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1387_; 
v_val_1206_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1208_ = v___x_1202_;
v_isShared_1209_ = v_isSharedCheck_1387_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_val_1206_);
lean_dec(v___x_1202_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1387_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1210_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v___y_1218_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1210_ = lean_unsigned_to_nat(1u);
v___x_1237_ = lean_nat_sub(v_oHi_1145_, v___x_1210_);
v___x_1238_ = lean_nat_dec_lt(v___x_1237_, v___x_1196_);
if (v___x_1238_ == 0)
{
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_dec(v_val_1206_);
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
goto v___jp_1167_;
}
else
{
lean_object* v___x_1239_; 
v___x_1239_ = lean_array_fget(v_oa_1143_, v___x_1237_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_dec(v_val_1206_);
goto v___jp_1171_;
}
else
{
lean_object* v_val_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1386_; 
v_val_1240_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1242_ = v___x_1239_;
v_isShared_1243_ = v_isSharedCheck_1386_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_val_1240_);
lean_dec(v___x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1386_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = lean_array_get_size(v_na_1146_);
v___x_1245_ = lean_nat_dec_lt(v_nLo_1147_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_del_object(v___x_1242_);
lean_dec(v_val_1240_);
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_dec(v_val_1206_);
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
goto v___jp_1167_;
}
else
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = lean_nat_sub(v_nHi_1148_, v___x_1210_);
v___x_1247_ = lean_nat_dec_lt(v___x_1246_, v___x_1244_);
if (v___x_1247_ == 0)
{
lean_dec(v___x_1246_);
lean_del_object(v___x_1242_);
lean_dec(v_val_1240_);
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_dec(v_val_1206_);
lean_dec(v_keys_1153_);
lean_dec(v_nHi_1148_);
lean_dec(v_nLo_1147_);
lean_dec(v_oHi_1145_);
lean_dec(v_oLo_1144_);
lean_dec_ref(v_oa_1143_);
lean_dec_ref(v_f_1142_);
lean_dec_ref(v_val_1141_);
goto v___jp_1167_;
}
else
{
lean_object* v___x_1248_; lean_object* v_fst_1250_; lean_object* v_fst_1251_; lean_object* v_snd_1252_; lean_object* v___x_1259_; lean_object* v_fst_1261_; lean_object* v___y_1269_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; uint8_t v___y_1280_; uint8_t v___x_1301_; 
v___x_1248_ = lean_array_fget_borrowed(v_na_1146_, v_nLo_1147_);
lean_inc_ref(v_val_1141_);
lean_inc(v___x_1248_);
v___x_1259_ = lean_apply_1(v_val_1141_, v___x_1248_);
v___x_1301_ = l_Lasm_UI_Live_same___redArg(v_val_1206_, v___x_1259_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1302_ = lean_array_fget_borrowed(v_na_1146_, v___x_1246_);
lean_inc_ref(v_val_1141_);
lean_inc(v___x_1302_);
v___x_1303_ = lean_apply_1(v_val_1141_, v___x_1302_);
v___x_1304_ = l_Lasm_UI_Live_same___redArg(v_val_1240_, v___x_1303_);
if (v___x_1304_ == 0)
{
uint8_t v___x_1305_; 
v___x_1305_ = l_Lasm_UI_Live_same___redArg(v_val_1206_, v___x_1303_);
lean_dec_ref(v___x_1303_);
if (v___x_1305_ == 0)
{
uint8_t v___x_1306_; 
lean_dec(v___x_1246_);
v___x_1306_ = l_Lasm_UI_Live_same___redArg(v_val_1240_, v___x_1259_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; 
lean_dec(v_val_1240_);
lean_dec(v___x_1237_);
v___x_1307_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_1259_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_del_object(v___x_1242_);
lean_del_object(v___x_1208_);
v_fst_1261_ = v_keys_1153_;
goto v___jp_1260_;
}
else
{
lean_object* v_val_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1327_; 
v_val_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1327_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_val_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1327_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1312_; lean_object* v___y_1314_; 
v___x_1312_ = ((lean_object*)(l_Lasm_UI_twoEnded___redArg___closed__0));
if (lean_obj_tag(v_keys_1153_) == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_1144_);
v___x_1325_ = l_Lasm_UI_keyIndex___redArg(v_oa_1143_, v_oLo_1144_, v_oHi_1145_, v___x_1324_);
v___y_1314_ = v___x_1325_;
goto v___jp_1313_;
}
else
{
lean_object* v_val_1326_; 
v_val_1326_ = lean_ctor_get(v_keys_1153_, 0);
lean_inc(v_val_1326_);
lean_dec_ref_known(v_keys_1153_, 1);
v___y_1314_ = v_val_1326_;
goto v___jp_1313_;
}
v___jp_1313_:
{
lean_object* v___f_1315_; lean_object* v___x_1316_; 
v___f_1315_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__1, &l_Lasm_UI_twoEnded___redArg___closed__1_once, _init_l_Lasm_UI_twoEnded___redArg___closed__1);
v___x_1316_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_1315_, v___x_1312_, v___y_1314_, v_val_1308_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1318_; 
lean_del_object(v___x_1242_);
lean_del_object(v___x_1208_);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 0, v___y_1314_);
v___x_1318_ = v___x_1310_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___y_1314_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
v_fst_1261_ = v___x_1318_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_val_1320_; lean_object* v___f_1321_; uint8_t v___x_1322_; 
lean_del_object(v___x_1310_);
v_val_1320_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_val_1320_);
lean_dec_ref_known(v___x_1316_, 1);
lean_inc_ref(v___y_1314_);
v___f_1321_ = lean_alloc_closure((void*)(l_Lasm_UI_twoEnded___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1321_, 0, v___y_1314_);
v___x_1322_ = lean_nat_dec_le(v_oLo_1144_, v_val_1320_);
if (v___x_1322_ == 0)
{
v___y_1277_ = v___y_1314_;
v___y_1278_ = v___f_1321_;
v___y_1279_ = v_val_1320_;
v___y_1280_ = v___x_1306_;
goto v___jp_1276_;
}
else
{
uint8_t v___x_1323_; 
v___x_1323_ = lean_nat_dec_lt(v_val_1320_, v_oHi_1145_);
v___y_1277_ = v___y_1314_;
v___y_1278_ = v___f_1321_;
v___y_1279_ = v_val_1320_;
v___y_1280_ = v___x_1323_;
goto v___jp_1276_;
}
}
}
}
}
}
else
{
lean_object* v_r_1328_; lean_object* v_ops_1329_; lean_object* v_live_1330_; lean_object* v_next_1331_; lean_object* v___x_1332_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1343_; lean_object* v_id_1345_; 
lean_dec_ref(v___x_1259_);
lean_del_object(v___x_1242_);
lean_del_object(v___x_1208_);
lean_dec(v_oHi_1145_);
lean_inc_ref(v_f_1142_);
lean_inc(v___x_1248_);
lean_inc(v_val_1240_);
v_r_1328_ = lean_apply_3(v_f_1142_, v_val_1240_, v___x_1248_, v_next_1152_);
v_ops_1329_ = lean_ctor_get(v_r_1328_, 0);
lean_inc(v_ops_1329_);
v_live_1330_ = lean_ctor_get(v_r_1328_, 1);
lean_inc_ref(v_live_1330_);
v_next_1331_ = lean_ctor_get(v_r_1328_, 2);
lean_inc(v_next_1331_);
lean_dec_ref(v_r_1328_);
v___x_1332_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1151_, v_ops_1329_);
v_id_1345_ = lean_ctor_get(v_val_1240_, 0);
lean_inc(v_id_1345_);
lean_dec(v_val_1240_);
v___y_1343_ = v_id_1345_;
goto v___jp_1342_;
v___jp_1333_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v_ops_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___y_1335_);
v___x_1337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___y_1334_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v_ops_1338_ = lean_array_push(v___x_1332_, v___x_1337_);
v___x_1339_ = lean_nat_add(v_nLo_1147_, v___x_1210_);
lean_dec(v_nLo_1147_);
v___x_1340_ = lean_array_push(v_pre_1149_, v_live_1330_);
v_oHi_1145_ = v___x_1237_;
v_nLo_1147_ = v___x_1339_;
v_pre_1149_ = v___x_1340_;
v_ops_1151_ = v_ops_1338_;
v_next_1152_ = v_next_1331_;
goto _start;
}
v___jp_1342_:
{
lean_object* v_id_1344_; 
v_id_1344_ = lean_ctor_get(v_val_1206_, 0);
lean_inc(v_id_1344_);
lean_dec(v_val_1206_);
v___y_1334_ = v___y_1343_;
v___y_1335_ = v_id_1344_;
goto v___jp_1333_;
}
}
}
else
{
lean_object* v_r_1346_; lean_object* v_ops_1347_; lean_object* v_live_1348_; lean_object* v_next_1349_; lean_object* v___x_1350_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1364_; lean_object* v_id_1369_; 
lean_dec_ref(v___x_1259_);
lean_del_object(v___x_1242_);
lean_dec(v_val_1240_);
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_dec(v_nHi_1148_);
lean_inc_ref(v_f_1142_);
lean_inc(v___x_1302_);
lean_inc(v_val_1206_);
v_r_1346_ = lean_apply_3(v_f_1142_, v_val_1206_, v___x_1302_, v_next_1152_);
v_ops_1347_ = lean_ctor_get(v_r_1346_, 0);
lean_inc(v_ops_1347_);
v_live_1348_ = lean_ctor_get(v_r_1346_, 1);
lean_inc_ref(v_live_1348_);
v_next_1349_ = lean_ctor_get(v_r_1346_, 2);
lean_inc(v_next_1349_);
lean_dec_ref(v_r_1346_);
v___x_1350_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1151_, v_ops_1347_);
v_id_1369_ = lean_ctor_get(v_val_1206_, 0);
lean_inc(v_id_1369_);
lean_dec(v_val_1206_);
v___y_1364_ = v_id_1369_;
goto v___jp_1363_;
v___jp_1351_:
{
lean_object* v___x_1354_; lean_object* v_ops_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___y_1352_);
lean_ctor_set(v___x_1354_, 1, v___y_1353_);
v_ops_1355_ = lean_array_push(v___x_1350_, v___x_1354_);
v___x_1356_ = lean_nat_add(v_oLo_1144_, v___x_1210_);
lean_dec(v_oLo_1144_);
v___x_1357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_live_1348_);
lean_ctor_set(v___x_1357_, 1, v_suf_1150_);
v_oLo_1144_ = v___x_1356_;
v_nHi_1148_ = v___x_1246_;
v_suf_1150_ = v___x_1357_;
v_ops_1151_ = v_ops_1355_;
v_next_1152_ = v_next_1349_;
goto _start;
}
v___jp_1359_:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___y_1361_);
v___y_1352_ = v___y_1360_;
v___y_1353_ = v___x_1362_;
goto v___jp_1351_;
}
v___jp_1363_:
{
lean_object* v___x_1365_; 
v___x_1365_ = l_List_head_x3f___redArg(v_suf_1150_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_box(0);
v___y_1352_ = v___y_1364_;
v___y_1353_ = v___x_1366_;
goto v___jp_1351_;
}
else
{
lean_object* v_val_1367_; lean_object* v_id_1368_; 
v_val_1367_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_val_1367_);
lean_dec_ref_known(v___x_1365_, 1);
v_id_1368_ = lean_ctor_get(v_val_1367_, 0);
lean_inc(v_id_1368_);
lean_dec(v_val_1367_);
v___y_1360_ = v___y_1364_;
v___y_1361_ = v_id_1368_;
goto v___jp_1359_;
}
}
}
}
else
{
lean_object* v_r_1370_; lean_object* v_ops_1371_; lean_object* v_live_1372_; lean_object* v_next_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_dec_ref(v___x_1303_);
lean_dec_ref(v___x_1259_);
lean_del_object(v___x_1242_);
lean_del_object(v___x_1208_);
lean_dec(v_val_1206_);
lean_dec(v_nHi_1148_);
lean_dec(v_oHi_1145_);
lean_inc_ref(v_f_1142_);
lean_inc(v___x_1302_);
v_r_1370_ = lean_apply_3(v_f_1142_, v_val_1240_, v___x_1302_, v_next_1152_);
v_ops_1371_ = lean_ctor_get(v_r_1370_, 0);
lean_inc(v_ops_1371_);
v_live_1372_ = lean_ctor_get(v_r_1370_, 1);
lean_inc_ref(v_live_1372_);
v_next_1373_ = lean_ctor_get(v_r_1370_, 2);
lean_inc(v_next_1373_);
lean_dec_ref(v_r_1370_);
v___x_1374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_live_1372_);
lean_ctor_set(v___x_1374_, 1, v_suf_1150_);
v___x_1375_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1151_, v_ops_1371_);
v_oHi_1145_ = v___x_1237_;
v_nHi_1148_ = v___x_1246_;
v_suf_1150_ = v___x_1374_;
v_ops_1151_ = v___x_1375_;
v_next_1152_ = v_next_1373_;
goto _start;
}
}
else
{
lean_object* v_r_1377_; lean_object* v_ops_1378_; lean_object* v_live_1379_; lean_object* v_next_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_dec_ref(v___x_1259_);
lean_dec(v___x_1246_);
lean_del_object(v___x_1242_);
lean_dec(v_val_1240_);
lean_dec(v___x_1237_);
lean_del_object(v___x_1208_);
lean_inc_ref(v_f_1142_);
lean_inc(v___x_1248_);
v_r_1377_ = lean_apply_3(v_f_1142_, v_val_1206_, v___x_1248_, v_next_1152_);
v_ops_1378_ = lean_ctor_get(v_r_1377_, 0);
lean_inc(v_ops_1378_);
v_live_1379_ = lean_ctor_get(v_r_1377_, 1);
lean_inc_ref(v_live_1379_);
v_next_1380_ = lean_ctor_get(v_r_1377_, 2);
lean_inc(v_next_1380_);
lean_dec_ref(v_r_1377_);
v___x_1381_ = lean_nat_add(v_oLo_1144_, v___x_1210_);
lean_dec(v_oLo_1144_);
v___x_1382_ = lean_nat_add(v_nLo_1147_, v___x_1210_);
lean_dec(v_nLo_1147_);
v___x_1383_ = lean_array_push(v_pre_1149_, v_live_1379_);
v___x_1384_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1151_, v_ops_1378_);
v_oLo_1144_ = v___x_1381_;
v_nLo_1147_ = v___x_1382_;
v_pre_1149_ = v___x_1383_;
v_ops_1151_ = v___x_1384_;
v_next_1152_ = v_next_1380_;
goto _start;
}
v___jp_1249_:
{
lean_object* v_r_1253_; lean_object* v_ops_1254_; lean_object* v_live_1255_; lean_object* v_next_1256_; lean_object* v___x_1257_; lean_object* v_id_1258_; 
lean_inc_ref(v_f_1142_);
lean_inc(v___x_1248_);
lean_inc_ref(v_snd_1252_);
v_r_1253_ = lean_apply_3(v_f_1142_, v_snd_1252_, v___x_1248_, v_next_1152_);
v_ops_1254_ = lean_ctor_get(v_r_1253_, 0);
lean_inc(v_ops_1254_);
v_live_1255_ = lean_ctor_get(v_r_1253_, 1);
lean_inc_ref(v_live_1255_);
v_next_1256_ = lean_ctor_get(v_r_1253_, 2);
lean_inc(v_next_1256_);
lean_dec_ref(v_r_1253_);
v___x_1257_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1151_, v_ops_1254_);
v_id_1258_ = lean_ctor_get(v_snd_1252_, 0);
lean_inc(v_id_1258_);
lean_dec_ref(v_snd_1252_);
v___y_1230_ = v_next_1256_;
v___y_1231_ = v_fst_1251_;
v___y_1232_ = v___x_1257_;
v___y_1233_ = v_live_1255_;
v___y_1234_ = v_fst_1250_;
v___y_1235_ = v_id_1258_;
goto v___jp_1229_;
}
v___jp_1260_:
{
lean_object* v_c_1262_; lean_object* v_fst_1263_; lean_object* v_snd_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_id_1267_; 
v_c_1262_ = l_Lasm_UI_create___redArg(v___x_1259_, v_next_1152_);
lean_dec_ref(v___x_1259_);
v_fst_1263_ = lean_ctor_get(v_c_1262_, 0);
lean_inc_n(v_fst_1263_, 2);
v_snd_1264_ = lean_ctor_get(v_c_1262_, 1);
lean_inc(v_snd_1264_);
lean_dec_ref(v_c_1262_);
v___x_1265_ = lean_nat_add(v_nLo_1147_, v___x_1210_);
lean_dec(v_nLo_1147_);
v___x_1266_ = lean_array_push(v_pre_1149_, v_fst_1263_);
v_id_1267_ = lean_ctor_get(v_val_1206_, 0);
lean_inc(v_id_1267_);
lean_dec(v_val_1206_);
v___y_1176_ = v___x_1266_;
v___y_1177_ = v_snd_1264_;
v___y_1178_ = v_fst_1263_;
v___y_1179_ = v_fst_1261_;
v___y_1180_ = v___x_1265_;
v___y_1181_ = v_id_1267_;
goto v___jp_1175_;
}
v___jp_1268_:
{
lean_object* v_snd_1270_; 
v_snd_1270_ = lean_ctor_get(v___y_1269_, 1);
if (lean_obj_tag(v_snd_1270_) == 0)
{
lean_object* v_fst_1271_; 
lean_del_object(v___x_1208_);
v_fst_1271_ = lean_ctor_get(v___y_1269_, 0);
lean_inc(v_fst_1271_);
lean_dec_ref(v___y_1269_);
v_fst_1261_ = v_fst_1271_;
goto v___jp_1260_;
}
else
{
lean_object* v_val_1272_; lean_object* v_fst_1273_; lean_object* v_fst_1274_; lean_object* v_snd_1275_; 
lean_dec_ref(v___x_1259_);
v_val_1272_ = lean_ctor_get(v_snd_1270_, 0);
lean_inc(v_val_1272_);
v_fst_1273_ = lean_ctor_get(v___y_1269_, 0);
lean_inc(v_fst_1273_);
lean_dec_ref(v___y_1269_);
v_fst_1274_ = lean_ctor_get(v_val_1272_, 0);
lean_inc(v_fst_1274_);
v_snd_1275_ = lean_ctor_get(v_val_1272_, 1);
lean_inc(v_snd_1275_);
lean_dec(v_val_1272_);
v_fst_1250_ = v_fst_1273_;
v_fst_1251_ = v_fst_1274_;
v_snd_1252_ = v_snd_1275_;
goto v___jp_1249_;
}
}
v___jp_1276_:
{
if (v___y_1280_ == 0)
{
lean_object* v___x_1282_; 
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_del_object(v___x_1208_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___y_1277_);
v___x_1282_ = v___x_1242_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___y_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
v_fst_1261_ = v___x_1282_;
goto v___jp_1260_;
}
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = lean_nat_dec_lt(v___y_1279_, v___x_1196_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1277_);
lean_del_object(v___x_1242_);
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_apply_1(v___y_1278_, v___x_1285_);
v___y_1269_ = v___x_1286_;
goto v___jp_1268_;
}
else
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_array_fget(v_oa_1143_, v___y_1279_);
if (lean_obj_tag(v___x_1287_) == 1)
{
lean_object* v_val_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1296_; 
lean_dec_ref(v___y_1278_);
lean_del_object(v___x_1242_);
v_val_1288_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1290_ = v___x_1287_;
v_isShared_1291_ = v_isSharedCheck_1296_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_val_1288_);
lean_dec(v___x_1287_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1296_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___y_1277_);
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___y_1277_);
v___x_1293_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
uint8_t v___x_1294_; 
v___x_1294_ = l_Lasm_UI_Live_same___redArg(v_val_1288_, v___x_1259_);
if (v___x_1294_ == 0)
{
lean_dec(v_val_1288_);
lean_dec(v___y_1279_);
lean_del_object(v___x_1208_);
v_fst_1261_ = v___x_1293_;
goto v___jp_1260_;
}
else
{
lean_dec_ref(v___x_1259_);
v_fst_1250_ = v___x_1293_;
v_fst_1251_ = v___y_1279_;
v_snd_1252_ = v_val_1288_;
goto v___jp_1249_;
}
}
}
}
else
{
lean_object* v___x_1298_; 
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1277_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1287_);
v___x_1298_ = v___x_1242_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v___x_1287_);
v___x_1298_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_apply_1(v___y_1278_, v___x_1298_);
v___y_1269_ = v___x_1299_;
goto v___jp_1268_;
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
v___jp_1211_:
{
lean_object* v___x_1220_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___y_1218_);
v___x_1220_ = v___x_1208_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___y_1218_);
v___x_1220_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1221_; lean_object* v_ops_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___y_1216_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v_ops_1222_ = lean_array_push(v___y_1214_, v___x_1221_);
v___x_1223_ = lean_box(0);
v___x_1224_ = lean_array_set(v_oa_1143_, v___y_1213_, v___x_1223_);
lean_dec(v___y_1213_);
v___x_1225_ = lean_nat_add(v_nLo_1147_, v___x_1210_);
lean_dec(v_nLo_1147_);
v___x_1226_ = lean_array_push(v_pre_1149_, v___y_1215_);
v_oa_1143_ = v___x_1224_;
v_nLo_1147_ = v___x_1225_;
v_pre_1149_ = v___x_1226_;
v_ops_1151_ = v_ops_1222_;
v_next_1152_ = v___y_1212_;
v_keys_1153_ = v___y_1217_;
goto _start;
}
}
v___jp_1229_:
{
lean_object* v_id_1236_; 
v_id_1236_ = lean_ctor_get(v_val_1206_, 0);
lean_inc(v_id_1236_);
lean_dec(v_val_1206_);
v___y_1212_ = v___y_1230_;
v___y_1213_ = v___y_1231_;
v___y_1214_ = v___y_1232_;
v___y_1215_ = v___y_1233_;
v___y_1216_ = v___y_1235_;
v___y_1217_ = v___y_1234_;
v___y_1218_ = v_id_1236_;
goto v___jp_1211_;
}
}
}
}
}
}
v___jp_1154_:
{
lean_object* v_r_1156_; lean_object* v_snd_1157_; lean_object* v_fst_1158_; lean_object* v_fst_1159_; lean_object* v_snd_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_r_1156_ = l_Lasm_UI_insertRange___redArg(v_val_1141_, v_na_1146_, v___y_1155_, v_nLo_1147_, v_nHi_1148_, v_next_1152_, v_ops_1151_, v_pre_1149_);
lean_dec(v_nHi_1148_);
v_snd_1157_ = lean_ctor_get(v_r_1156_, 1);
lean_inc(v_snd_1157_);
v_fst_1158_ = lean_ctor_get(v_r_1156_, 0);
lean_inc(v_fst_1158_);
lean_dec_ref(v_r_1156_);
v_fst_1159_ = lean_ctor_get(v_snd_1157_, 0);
lean_inc(v_fst_1159_);
v_snd_1160_ = lean_ctor_get(v_snd_1157_, 1);
lean_inc(v_snd_1160_);
lean_dec(v_snd_1157_);
v___x_1161_ = lean_array_to_list(v_fst_1159_);
v___x_1162_ = l_List_appendTR___redArg(v___x_1161_, v_suf_1150_);
v___x_1163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1163_, 0, v_fst_1158_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
lean_ctor_set(v___x_1163_, 2, v_snd_1160_);
return v___x_1163_;
}
v___jp_1164_:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1166_, 0, v___y_1165_);
v___y_1155_ = v___x_1166_;
goto v___jp_1154_;
}
v___jp_1167_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = lean_array_to_list(v_pre_1149_);
v___x_1169_ = l_List_appendTR___redArg(v___x_1168_, v_suf_1150_);
v___x_1170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1170_, 0, v_ops_1151_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
lean_ctor_set(v___x_1170_, 2, v_next_1152_);
return v___x_1170_;
}
v___jp_1171_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_unsigned_to_nat(1u);
v___x_1173_ = lean_nat_sub(v_oHi_1145_, v___x_1172_);
lean_dec(v_oHi_1145_);
v_oHi_1145_ = v___x_1173_;
goto _start;
}
v___jp_1175_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___y_1181_);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___y_1178_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = lean_array_push(v_ops_1151_, v___x_1183_);
v_nLo_1147_ = v___y_1180_;
v_pre_1149_ = v___y_1176_;
v_ops_1151_ = v___x_1184_;
v_next_1152_ = v___y_1177_;
v_keys_1153_ = v___y_1179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object* v_val_1388_, lean_object* v_f_1389_, lean_object* v_oa_1390_, lean_object* v_oLo_1391_, lean_object* v_oHi_1392_, lean_object* v_na_1393_, lean_object* v_nLo_1394_, lean_object* v_nHi_1395_, lean_object* v_pre_1396_, lean_object* v_suf_1397_, lean_object* v_ops_1398_, lean_object* v_next_1399_, lean_object* v_keys_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lasm_UI_twoEnded___redArg(v_val_1388_, v_f_1389_, v_oa_1390_, v_oLo_1391_, v_oHi_1392_, v_na_1393_, v_nLo_1394_, v_nHi_1395_, v_pre_1396_, v_suf_1397_, v_ops_1398_, v_next_1399_, v_keys_1400_);
lean_dec_ref(v_na_1393_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object* v_Msg_1402_, lean_object* v_00_u03b2_1403_, lean_object* v_val_1404_, lean_object* v_f_1405_, lean_object* v_oa_1406_, lean_object* v_oLo_1407_, lean_object* v_oHi_1408_, lean_object* v_na_1409_, lean_object* v_nLo_1410_, lean_object* v_nHi_1411_, lean_object* v_pre_1412_, lean_object* v_suf_1413_, lean_object* v_ops_1414_, lean_object* v_next_1415_, lean_object* v_keys_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l_Lasm_UI_twoEnded___redArg(v_val_1404_, v_f_1405_, v_oa_1406_, v_oLo_1407_, v_oHi_1408_, v_na_1409_, v_nLo_1410_, v_nHi_1411_, v_pre_1412_, v_suf_1413_, v_ops_1414_, v_next_1415_, v_keys_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object* v_Msg_1418_, lean_object* v_00_u03b2_1419_, lean_object* v_val_1420_, lean_object* v_f_1421_, lean_object* v_oa_1422_, lean_object* v_oLo_1423_, lean_object* v_oHi_1424_, lean_object* v_na_1425_, lean_object* v_nLo_1426_, lean_object* v_nHi_1427_, lean_object* v_pre_1428_, lean_object* v_suf_1429_, lean_object* v_ops_1430_, lean_object* v_next_1431_, lean_object* v_keys_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lasm_UI_twoEnded(v_Msg_1418_, v_00_u03b2_1419_, v_val_1420_, v_f_1421_, v_oa_1422_, v_oLo_1423_, v_oHi_1424_, v_na_1425_, v_nLo_1426_, v_nHi_1427_, v_pre_1428_, v_suf_1429_, v_ops_1430_, v_next_1431_, v_keys_1432_);
lean_dec_ref(v_na_1425_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter___redArg(lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_, lean_object* v_h__1_1438_, lean_object* v_h__2_1439_, lean_object* v_h__3_1440_, lean_object* v_h__4_1441_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 1)
{
lean_object* v_val_1442_; 
v_val_1442_ = lean_ctor_get(v_x_1434_, 0);
if (lean_obj_tag(v_val_1442_) == 0)
{
lean_object* v___x_1443_; 
lean_dec_ref_known(v_x_1434_, 1);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__2_1439_);
v___x_1443_ = lean_apply_3(v_h__1_1438_, v_x_1435_, v_x_1436_, v_x_1437_);
return v___x_1443_;
}
else
{
lean_dec(v_h__1_1438_);
if (lean_obj_tag(v_x_1435_) == 1)
{
lean_object* v_val_1444_; 
v_val_1444_ = lean_ctor_get(v_x_1435_, 0);
if (lean_obj_tag(v_val_1444_) == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref_known(v_x_1435_, 1);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
v___x_1445_ = lean_apply_4(v_h__2_1439_, v_x_1434_, v_x_1436_, v_x_1437_, lean_box(0));
return v___x_1445_;
}
else
{
lean_dec(v_h__2_1439_);
if (lean_obj_tag(v_x_1436_) == 1)
{
if (lean_obj_tag(v_x_1437_) == 1)
{
lean_object* v_val_1446_; lean_object* v_val_1447_; lean_object* v_val_1448_; lean_object* v_val_1449_; lean_object* v___x_1450_; 
lean_inc_ref(v_val_1444_);
lean_inc_ref(v_val_1442_);
lean_dec_ref_known(v_x_1435_, 1);
lean_dec_ref_known(v_x_1434_, 1);
lean_dec(v_h__4_1441_);
v_val_1446_ = lean_ctor_get(v_val_1442_, 0);
lean_inc(v_val_1446_);
lean_dec_ref_known(v_val_1442_, 1);
v_val_1447_ = lean_ctor_get(v_val_1444_, 0);
lean_inc(v_val_1447_);
lean_dec_ref_known(v_val_1444_, 1);
v_val_1448_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_val_1448_);
lean_dec_ref_known(v_x_1436_, 1);
v_val_1449_ = lean_ctor_get(v_x_1437_, 0);
lean_inc(v_val_1449_);
lean_dec_ref_known(v_x_1437_, 1);
v___x_1450_ = lean_apply_4(v_h__3_1440_, v_val_1446_, v_val_1447_, v_val_1448_, v_val_1449_);
return v___x_1450_;
}
else
{
lean_object* v___x_1451_; 
lean_dec(v_h__3_1440_);
v___x_1451_ = lean_apply_7(v_h__4_1441_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1451_;
}
}
else
{
lean_object* v___x_1452_; 
lean_dec(v_h__3_1440_);
v___x_1452_ = lean_apply_7(v_h__4_1441_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1452_;
}
}
}
else
{
lean_object* v___x_1453_; 
lean_dec(v_h__3_1440_);
lean_dec(v_h__2_1439_);
v___x_1453_ = lean_apply_7(v_h__4_1441_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1453_;
}
}
}
else
{
lean_dec(v_h__3_1440_);
lean_dec(v_h__1_1438_);
if (lean_obj_tag(v_x_1435_) == 1)
{
lean_object* v_val_1454_; 
v_val_1454_ = lean_ctor_get(v_x_1435_, 0);
if (lean_obj_tag(v_val_1454_) == 0)
{
lean_object* v___x_1455_; 
lean_dec_ref_known(v_x_1435_, 1);
lean_dec(v_h__4_1441_);
v___x_1455_ = lean_apply_4(v_h__2_1439_, v_x_1434_, v_x_1436_, v_x_1437_, lean_box(0));
return v___x_1455_;
}
else
{
lean_object* v___x_1456_; 
lean_dec(v_h__2_1439_);
v___x_1456_ = lean_apply_7(v_h__4_1441_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1456_;
}
}
else
{
lean_object* v___x_1457_; 
lean_dec(v_h__2_1439_);
v___x_1457_ = lean_apply_7(v_h__4_1441_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1457_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter(lean_object* v_Msg_1458_, lean_object* v_00_u03b2_1459_, lean_object* v_motive_1460_, lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v_x_1463_, lean_object* v_x_1464_, lean_object* v_h__1_1465_, lean_object* v_h__2_1466_, lean_object* v_h__3_1467_, lean_object* v_h__4_1468_){
_start:
{
if (lean_obj_tag(v_x_1461_) == 1)
{
lean_object* v_val_1469_; 
v_val_1469_ = lean_ctor_get(v_x_1461_, 0);
if (lean_obj_tag(v_val_1469_) == 0)
{
lean_object* v___x_1470_; 
lean_dec_ref_known(v_x_1461_, 1);
lean_dec(v_h__4_1468_);
lean_dec(v_h__3_1467_);
lean_dec(v_h__2_1466_);
v___x_1470_ = lean_apply_3(v_h__1_1465_, v_x_1462_, v_x_1463_, v_x_1464_);
return v___x_1470_;
}
else
{
lean_dec(v_h__1_1465_);
if (lean_obj_tag(v_x_1462_) == 1)
{
lean_object* v_val_1471_; 
v_val_1471_ = lean_ctor_get(v_x_1462_, 0);
if (lean_obj_tag(v_val_1471_) == 0)
{
lean_object* v___x_1472_; 
lean_dec_ref_known(v_x_1462_, 1);
lean_dec(v_h__4_1468_);
lean_dec(v_h__3_1467_);
v___x_1472_ = lean_apply_4(v_h__2_1466_, v_x_1461_, v_x_1463_, v_x_1464_, lean_box(0));
return v___x_1472_;
}
else
{
lean_dec(v_h__2_1466_);
if (lean_obj_tag(v_x_1463_) == 1)
{
if (lean_obj_tag(v_x_1464_) == 1)
{
lean_object* v_val_1473_; lean_object* v_val_1474_; lean_object* v_val_1475_; lean_object* v_val_1476_; lean_object* v___x_1477_; 
lean_inc_ref(v_val_1471_);
lean_inc_ref(v_val_1469_);
lean_dec_ref_known(v_x_1462_, 1);
lean_dec_ref_known(v_x_1461_, 1);
lean_dec(v_h__4_1468_);
v_val_1473_ = lean_ctor_get(v_val_1469_, 0);
lean_inc(v_val_1473_);
lean_dec_ref_known(v_val_1469_, 1);
v_val_1474_ = lean_ctor_get(v_val_1471_, 0);
lean_inc(v_val_1474_);
lean_dec_ref_known(v_val_1471_, 1);
v_val_1475_ = lean_ctor_get(v_x_1463_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v_x_1463_, 1);
v_val_1476_ = lean_ctor_get(v_x_1464_, 0);
lean_inc(v_val_1476_);
lean_dec_ref_known(v_x_1464_, 1);
v___x_1477_ = lean_apply_4(v_h__3_1467_, v_val_1473_, v_val_1474_, v_val_1475_, v_val_1476_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; 
lean_dec(v_h__3_1467_);
v___x_1478_ = lean_apply_7(v_h__4_1468_, v_x_1461_, v_x_1462_, v_x_1463_, v_x_1464_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1478_;
}
}
else
{
lean_object* v___x_1479_; 
lean_dec(v_h__3_1467_);
v___x_1479_ = lean_apply_7(v_h__4_1468_, v_x_1461_, v_x_1462_, v_x_1463_, v_x_1464_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1479_;
}
}
}
else
{
lean_object* v___x_1480_; 
lean_dec(v_h__3_1467_);
lean_dec(v_h__2_1466_);
v___x_1480_ = lean_apply_7(v_h__4_1468_, v_x_1461_, v_x_1462_, v_x_1463_, v_x_1464_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1480_;
}
}
}
else
{
lean_dec(v_h__3_1467_);
lean_dec(v_h__1_1465_);
if (lean_obj_tag(v_x_1462_) == 1)
{
lean_object* v_val_1481_; 
v_val_1481_ = lean_ctor_get(v_x_1462_, 0);
if (lean_obj_tag(v_val_1481_) == 0)
{
lean_object* v___x_1482_; 
lean_dec_ref_known(v_x_1462_, 1);
lean_dec(v_h__4_1468_);
v___x_1482_ = lean_apply_4(v_h__2_1466_, v_x_1461_, v_x_1463_, v_x_1464_, lean_box(0));
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; 
lean_dec(v_h__2_1466_);
v___x_1483_ = lean_apply_7(v_h__4_1468_, v_x_1461_, v_x_1462_, v_x_1463_, v_x_1464_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1483_;
}
}
else
{
lean_object* v___x_1484_; 
lean_dec(v_h__2_1466_);
v___x_1484_ = lean_apply_7(v_h__4_1468_, v_x_1461_, v_x_1462_, v_x_1463_, v_x_1464_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1484_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter___redArg(lean_object* v_x_1485_, lean_object* v_h__1_1486_, lean_object* v_h__2_1487_){
_start:
{
if (lean_obj_tag(v_x_1485_) == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_dec(v_h__2_1487_);
v___x_1488_ = lean_box(0);
v___x_1489_ = lean_apply_1(v_h__1_1486_, v___x_1488_);
return v___x_1489_;
}
else
{
lean_object* v_val_1490_; lean_object* v___x_1491_; 
lean_dec(v_h__1_1486_);
v_val_1490_ = lean_ctor_get(v_x_1485_, 0);
lean_inc(v_val_1490_);
lean_dec_ref_known(v_x_1485_, 1);
v___x_1491_ = lean_apply_1(v_h__2_1487_, v_val_1490_);
return v___x_1491_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter(lean_object* v_motive_1492_, lean_object* v_x_1493_, lean_object* v_h__1_1494_, lean_object* v_h__2_1495_){
_start:
{
if (lean_obj_tag(v_x_1493_) == 0)
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec(v_h__2_1495_);
v___x_1496_ = lean_box(0);
v___x_1497_ = lean_apply_1(v_h__1_1494_, v___x_1496_);
return v___x_1497_;
}
else
{
lean_object* v_val_1498_; lean_object* v___x_1499_; 
lean_dec(v_h__1_1494_);
v_val_1498_ = lean_ctor_get(v_x_1493_, 0);
lean_inc(v_val_1498_);
lean_dec_ref_known(v_x_1493_, 1);
v___x_1499_ = lean_apply_1(v_h__2_1495_, v_val_1498_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter___redArg(lean_object* v_x_1500_, lean_object* v_h__1_1501_, lean_object* v_h__2_1502_){
_start:
{
if (lean_obj_tag(v_x_1500_) == 0)
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
lean_dec(v_h__1_1501_);
v___x_1503_ = lean_box(0);
v___x_1504_ = lean_apply_1(v_h__2_1502_, v___x_1503_);
return v___x_1504_;
}
else
{
lean_object* v_val_1505_; lean_object* v___x_1506_; 
lean_dec(v_h__2_1502_);
v_val_1505_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_val_1505_);
lean_dec_ref_known(v_x_1500_, 1);
v___x_1506_ = lean_apply_1(v_h__1_1501_, v_val_1505_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter(lean_object* v_motive_1507_, lean_object* v_x_1508_, lean_object* v_h__1_1509_, lean_object* v_h__2_1510_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
lean_dec(v_h__1_1509_);
v___x_1511_ = lean_box(0);
v___x_1512_ = lean_apply_1(v_h__2_1510_, v___x_1511_);
return v___x_1512_;
}
else
{
lean_object* v_val_1513_; lean_object* v___x_1514_; 
lean_dec(v_h__2_1510_);
v_val_1513_ = lean_ctor_get(v_x_1508_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v_x_1508_, 1);
v___x_1514_ = lean_apply_1(v_h__1_1509_, v_val_1513_);
return v___x_1514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter___redArg(lean_object* v_x_1515_, lean_object* v_h__1_1516_){
_start:
{
lean_object* v_fst_1517_; lean_object* v_snd_1518_; lean_object* v___x_1519_; 
v_fst_1517_ = lean_ctor_get(v_x_1515_, 0);
lean_inc(v_fst_1517_);
v_snd_1518_ = lean_ctor_get(v_x_1515_, 1);
lean_inc(v_snd_1518_);
lean_dec_ref(v_x_1515_);
v___x_1519_ = lean_apply_2(v_h__1_1516_, v_fst_1517_, v_snd_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter(lean_object* v_Msg_1520_, lean_object* v_motive_1521_, lean_object* v_x_1522_, lean_object* v_h__1_1523_){
_start:
{
lean_object* v_fst_1524_; lean_object* v_snd_1525_; lean_object* v___x_1526_; 
v_fst_1524_ = lean_ctor_get(v_x_1522_, 0);
lean_inc(v_fst_1524_);
v_snd_1525_ = lean_ctor_get(v_x_1522_, 1);
lean_inc(v_snd_1525_);
lean_dec_ref(v_x_1522_);
v___x_1526_ = lean_apply_2(v_h__1_1523_, v_fst_1524_, v_snd_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter___redArg(lean_object* v_found_1527_, lean_object* v_h__1_1528_, lean_object* v_h__2_1529_){
_start:
{
if (lean_obj_tag(v_found_1527_) == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
lean_dec(v_h__1_1528_);
v___x_1530_ = lean_box(0);
v___x_1531_ = lean_apply_1(v_h__2_1529_, v___x_1530_);
return v___x_1531_;
}
else
{
lean_object* v_val_1532_; lean_object* v_fst_1533_; lean_object* v_snd_1534_; lean_object* v___x_1535_; 
lean_dec(v_h__2_1529_);
v_val_1532_ = lean_ctor_get(v_found_1527_, 0);
lean_inc(v_val_1532_);
lean_dec_ref_known(v_found_1527_, 1);
v_fst_1533_ = lean_ctor_get(v_val_1532_, 0);
lean_inc(v_fst_1533_);
v_snd_1534_ = lean_ctor_get(v_val_1532_, 1);
lean_inc(v_snd_1534_);
lean_dec(v_val_1532_);
v___x_1535_ = lean_apply_2(v_h__1_1528_, v_fst_1533_, v_snd_1534_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter(lean_object* v_Msg_1536_, lean_object* v_motive_1537_, lean_object* v_found_1538_, lean_object* v_h__1_1539_, lean_object* v_h__2_1540_){
_start:
{
if (lean_obj_tag(v_found_1538_) == 0)
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_dec(v_h__1_1539_);
v___x_1541_ = lean_box(0);
v___x_1542_ = lean_apply_1(v_h__2_1540_, v___x_1541_);
return v___x_1542_;
}
else
{
lean_object* v_val_1543_; lean_object* v_fst_1544_; lean_object* v_snd_1545_; lean_object* v___x_1546_; 
lean_dec(v_h__2_1540_);
v_val_1543_ = lean_ctor_get(v_found_1538_, 0);
lean_inc(v_val_1543_);
lean_dec_ref_known(v_found_1538_, 1);
v_fst_1544_ = lean_ctor_get(v_val_1543_, 0);
lean_inc(v_fst_1544_);
v_snd_1545_ = lean_ctor_get(v_val_1543_, 1);
lean_inc(v_snd_1545_);
lean_dec(v_val_1543_);
v___x_1546_ = lean_apply_2(v_h__1_1539_, v_fst_1544_, v_snd_1545_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg___lam__0(lean_object* v_val_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1548_, 0, v_val_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object* v_val_1550_, lean_object* v_f_1551_, lean_object* v_x_1552_, lean_object* v_x_1553_, lean_object* v_x_1554_, lean_object* v_x_1555_, lean_object* v_x_1556_){
_start:
{
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v___x_1557_; lean_object* v_r_1558_; lean_object* v_snd_1559_; lean_object* v_fst_1560_; lean_object* v_fst_1561_; lean_object* v_snd_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
lean_dec_ref(v_f_1551_);
v___x_1557_ = lean_box(0);
v_r_1558_ = l_Lasm_UI_insertAll___redArg(v_val_1550_, v___x_1557_, v_x_1553_, v_x_1554_, v_x_1555_, v_x_1556_);
v_snd_1559_ = lean_ctor_get(v_r_1558_, 1);
lean_inc(v_snd_1559_);
v_fst_1560_ = lean_ctor_get(v_r_1558_, 0);
lean_inc(v_fst_1560_);
lean_dec_ref(v_r_1558_);
v_fst_1561_ = lean_ctor_get(v_snd_1559_, 0);
lean_inc(v_fst_1561_);
v_snd_1562_ = lean_ctor_get(v_snd_1559_, 1);
lean_inc(v_snd_1562_);
lean_dec(v_snd_1559_);
v___x_1563_ = lean_array_to_list(v_fst_1561_);
v___x_1564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1564_, 0, v_fst_1560_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
lean_ctor_set(v___x_1564_, 2, v_snd_1562_);
return v___x_1564_;
}
else
{
if (lean_obj_tag(v_x_1553_) == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
lean_dec_ref(v_f_1551_);
lean_dec_ref(v_val_1550_);
v___x_1565_ = l_Lasm_UI_removeAll___redArg(v_x_1552_, v_x_1555_);
v___x_1566_ = lean_array_to_list(v_x_1556_);
v___x_1567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1565_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
lean_ctor_set(v___x_1567_, 2, v_x_1554_);
return v___x_1567_;
}
else
{
lean_object* v_head_1568_; lean_object* v_tail_1569_; lean_object* v_head_1570_; lean_object* v_tail_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v_head_1568_ = lean_ctor_get(v_x_1552_, 0);
v_tail_1569_ = lean_ctor_get(v_x_1552_, 1);
v_head_1570_ = lean_ctor_get(v_x_1553_, 0);
v_tail_1571_ = lean_ctor_get(v_x_1553_, 1);
lean_inc_ref(v_val_1550_);
lean_inc(v_head_1570_);
v___x_1572_ = lean_apply_1(v_val_1550_, v_head_1570_);
v___x_1573_ = l_Lasm_UI_Live_same___redArg(v_head_1568_, v___x_1572_);
lean_dec_ref(v___x_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___f_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v_oa_1577_; lean_object* v_na_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___f_1574_ = ((lean_object*)(l_Lasm_UI_prefixPhase___redArg___closed__0));
v___x_1575_ = lean_box(0);
v___x_1576_ = l_List_mapTR_loop___redArg(v___f_1574_, v_x_1552_, v___x_1575_);
v_oa_1577_ = lean_array_mk(v___x_1576_);
v_na_1578_ = lean_array_mk(v_x_1553_);
v___x_1579_ = lean_unsigned_to_nat(0u);
v___x_1580_ = lean_array_get_size(v_oa_1577_);
v___x_1581_ = lean_array_get_size(v_na_1578_);
v___x_1582_ = lean_box(0);
v___x_1583_ = l_Lasm_UI_twoEnded___redArg(v_val_1550_, v_f_1551_, v_oa_1577_, v___x_1579_, v___x_1580_, v_na_1578_, v___x_1579_, v___x_1581_, v_x_1556_, v___x_1575_, v_x_1555_, v_x_1554_, v___x_1582_);
lean_dec_ref(v_na_1578_);
return v___x_1583_;
}
else
{
lean_object* v_r_1584_; lean_object* v_ops_1585_; lean_object* v_live_1586_; lean_object* v_next_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_inc(v_tail_1571_);
lean_inc(v_head_1570_);
lean_inc(v_tail_1569_);
lean_inc(v_head_1568_);
lean_dec_ref_known(v_x_1553_, 2);
lean_dec_ref_known(v_x_1552_, 2);
lean_inc_ref(v_f_1551_);
v_r_1584_ = lean_apply_3(v_f_1551_, v_head_1568_, v_head_1570_, v_x_1554_);
v_ops_1585_ = lean_ctor_get(v_r_1584_, 0);
lean_inc(v_ops_1585_);
v_live_1586_ = lean_ctor_get(v_r_1584_, 1);
lean_inc_ref(v_live_1586_);
v_next_1587_ = lean_ctor_get(v_r_1584_, 2);
lean_inc(v_next_1587_);
lean_dec_ref(v_r_1584_);
v___x_1588_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_1555_, v_ops_1585_);
v___x_1589_ = lean_array_push(v_x_1556_, v_live_1586_);
v_x_1552_ = v_tail_1569_;
v_x_1553_ = v_tail_1571_;
v_x_1554_ = v_next_1587_;
v_x_1555_ = v___x_1588_;
v_x_1556_ = v___x_1589_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object* v_Msg_1591_, lean_object* v_00_u03b2_1592_, lean_object* v_val_1593_, lean_object* v_f_1594_, lean_object* v_x_1595_, lean_object* v_x_1596_, lean_object* v_x_1597_, lean_object* v_x_1598_, lean_object* v_x_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lasm_UI_prefixPhase___redArg(v_val_1593_, v_f_1594_, v_x_1595_, v_x_1596_, v_x_1597_, v_x_1598_, v_x_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object* v_val_1607_, lean_object* v_f_1608_, lean_object* v_old_1609_, lean_object* v_new_1610_, lean_object* v_next_1611_){
_start:
{
lean_object* v_old_1613_; lean_object* v_new_1614_; 
if (lean_obj_tag(v_old_1609_) == 0)
{
if (lean_obj_tag(v_new_1610_) == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_dec_ref(v_f_1608_);
lean_dec_ref(v_val_1607_);
v___x_1619_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v_old_1609_);
lean_ctor_set(v___x_1620_, 2, v_next_1611_);
return v___x_1620_;
}
else
{
v_old_1613_ = v_old_1609_;
v_new_1614_ = v_new_1610_;
goto v___jp_1612_;
}
}
else
{
if (lean_obj_tag(v_new_1610_) == 0)
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec_ref_known(v_old_1609_, 2);
lean_dec_ref(v_f_1608_);
lean_dec_ref(v_val_1607_);
v___x_1621_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
lean_ctor_set(v___x_1623_, 2, v_next_1611_);
return v___x_1623_;
}
else
{
v_old_1613_ = v_old_1609_;
v_new_1614_ = v_new_1610_;
goto v___jp_1612_;
}
}
v___jp_1612_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1615_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1616_ = l_List_lengthTR___redArg(v_new_1614_);
v___x_1617_ = lean_mk_empty_array_with_capacity(v___x_1616_);
lean_dec(v___x_1616_);
v___x_1618_ = l_Lasm_UI_prefixPhase___redArg(v_val_1607_, v_f_1608_, v_old_1613_, v_new_1614_, v_next_1611_, v___x_1615_, v___x_1617_);
return v___x_1618_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object* v_Msg_1624_, lean_object* v_00_u03b2_1625_, lean_object* v_val_1626_, lean_object* v_f_1627_, lean_object* v_old_1628_, lean_object* v_new_1629_, lean_object* v_next_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lasm_UI_diffChildren___redArg(v_val_1626_, v_f_1627_, v_old_1628_, v_new_1629_, v_next_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(lean_object* v_a_1632_, lean_object* v_a_1633_){
_start:
{
if (lean_obj_tag(v_a_1632_) == 0)
{
lean_object* v___x_1634_; 
v___x_1634_ = l_List_reverse___redArg(v_a_1633_);
return v___x_1634_;
}
else
{
lean_object* v_head_1635_; lean_object* v_tail_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1645_; 
v_head_1635_ = lean_ctor_get(v_a_1632_, 0);
v_tail_1636_ = lean_ctor_get(v_a_1632_, 1);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_a_1632_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1638_ = v_a_1632_;
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_tail_1636_);
lean_inc(v_head_1635_);
lean_dec(v_a_1632_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1645_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1642_; 
v___x_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1640_, 0, v_head_1635_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 1, v_a_1633_);
lean_ctor_set(v___x_1638_, 0, v___x_1640_);
v___x_1642_ = v___x_1638_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1640_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_a_1633_);
v___x_1642_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
v_a_1632_ = v_tail_1636_;
v_a_1633_ = v___x_1642_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(lean_object* v_a_1646_, lean_object* v_x_1647_){
_start:
{
if (lean_obj_tag(v_x_1647_) == 0)
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_box(0);
return v___x_1648_;
}
else
{
lean_object* v_key_1649_; lean_object* v_value_1650_; lean_object* v_tail_1651_; uint8_t v___x_1652_; 
v_key_1649_ = lean_ctor_get(v_x_1647_, 0);
v_value_1650_ = lean_ctor_get(v_x_1647_, 1);
v_tail_1651_ = lean_ctor_get(v_x_1647_, 2);
v___x_1652_ = lean_string_dec_eq(v_key_1649_, v_a_1646_);
if (v___x_1652_ == 0)
{
v_x_1647_ = v_tail_1651_;
goto _start;
}
else
{
lean_object* v___x_1654_; 
lean_inc(v_value_1650_);
v___x_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1654_, 0, v_value_1650_);
return v___x_1654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_a_1655_, lean_object* v_x_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_1655_, v_x_1656_);
lean_dec(v_x_1656_);
lean_dec_ref(v_a_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(lean_object* v_m_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_buckets_1660_; lean_object* v___x_1661_; uint64_t v___x_1662_; uint64_t v___x_1663_; uint64_t v___x_1664_; uint64_t v_fold_1665_; uint64_t v___x_1666_; uint64_t v___x_1667_; uint64_t v___x_1668_; size_t v___x_1669_; size_t v___x_1670_; size_t v___x_1671_; size_t v___x_1672_; size_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_buckets_1660_ = lean_ctor_get(v_m_1658_, 1);
v___x_1661_ = lean_array_get_size(v_buckets_1660_);
v___x_1662_ = lean_string_hash(v_a_1659_);
v___x_1663_ = 32ULL;
v___x_1664_ = lean_uint64_shift_right(v___x_1662_, v___x_1663_);
v_fold_1665_ = lean_uint64_xor(v___x_1662_, v___x_1664_);
v___x_1666_ = 16ULL;
v___x_1667_ = lean_uint64_shift_right(v_fold_1665_, v___x_1666_);
v___x_1668_ = lean_uint64_xor(v_fold_1665_, v___x_1667_);
v___x_1669_ = lean_uint64_to_usize(v___x_1668_);
v___x_1670_ = lean_usize_of_nat(v___x_1661_);
v___x_1671_ = ((size_t)1ULL);
v___x_1672_ = lean_usize_sub(v___x_1670_, v___x_1671_);
v___x_1673_ = lean_usize_land(v___x_1669_, v___x_1672_);
v___x_1674_ = lean_array_uget_borrowed(v_buckets_1660_, v___x_1673_);
v___x_1675_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_1659_, v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_m_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_m_1676_, v_a_1677_);
lean_dec_ref(v_a_1677_);
lean_dec_ref(v_m_1676_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_na_1679_, lean_object* v_before_1680_, lean_object* v_lo_1681_, lean_object* v_hi_1682_, lean_object* v_n_1683_, lean_object* v_ops_1684_, lean_object* v_acc_1685_){
_start:
{
uint8_t v___x_1686_; 
v___x_1686_ = lean_nat_dec_lt(v_lo_1681_, v_hi_1682_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec(v_lo_1681_);
lean_dec(v_before_1680_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v_acc_1685_);
lean_ctor_set(v___x_1687_, 1, v_n_1683_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v_ops_1684_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
return v___x_1688_;
}
else
{
lean_object* v___x_1689_; uint8_t v___x_1690_; 
v___x_1689_ = lean_array_get_size(v_na_1679_);
v___x_1690_ = lean_nat_dec_lt(v_lo_1681_, v___x_1689_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_dec(v_lo_1681_);
lean_dec(v_before_1680_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v_acc_1685_);
lean_ctor_set(v___x_1691_, 1, v_n_1683_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v_ops_1684_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
return v___x_1692_;
}
else
{
lean_object* v___x_1693_; lean_object* v_r_1694_; lean_object* v_fst_1695_; lean_object* v_snd_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1708_; 
v___x_1693_ = lean_array_fget_borrowed(v_na_1679_, v_lo_1681_);
v_r_1694_ = l_Lasm_UI_create___redArg(v___x_1693_, v_n_1683_);
v_fst_1695_ = lean_ctor_get(v_r_1694_, 0);
v_snd_1696_ = lean_ctor_get(v_r_1694_, 1);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_r_1694_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1698_ = v_r_1694_;
v_isShared_1699_ = v_isSharedCheck_1708_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_snd_1696_);
lean_inc(v_fst_1695_);
lean_dec(v_r_1694_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1708_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1703_; 
v___x_1700_ = lean_unsigned_to_nat(1u);
v___x_1701_ = lean_nat_add(v_lo_1681_, v___x_1700_);
lean_dec(v_lo_1681_);
lean_inc(v_before_1680_);
lean_inc(v_fst_1695_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 1, v_before_1680_);
v___x_1703_ = v___x_1698_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_fst_1695_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_before_1680_);
v___x_1703_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1704_ = lean_array_push(v_ops_1684_, v___x_1703_);
v___x_1705_ = lean_array_push(v_acc_1685_, v_fst_1695_);
v_lo_1681_ = v___x_1701_;
v_n_1683_ = v_snd_1696_;
v_ops_1684_ = v___x_1704_;
v_acc_1685_ = v___x_1705_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_na_1709_, lean_object* v_before_1710_, lean_object* v_lo_1711_, lean_object* v_hi_1712_, lean_object* v_n_1713_, lean_object* v_ops_1714_, lean_object* v_acc_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_1709_, v_before_1710_, v_lo_1711_, v_hi_1712_, v_n_1713_, v_ops_1714_, v_acc_1715_);
lean_dec(v_hi_1712_);
lean_dec_ref(v_na_1709_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(lean_object* v_before_1717_, lean_object* v_x_1718_, lean_object* v_x_1719_, lean_object* v_x_1720_, lean_object* v_x_1721_){
_start:
{
if (lean_obj_tag(v_x_1718_) == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_dec(v_before_1717_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_x_1721_);
lean_ctor_set(v___x_1722_, 1, v_x_1719_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v_x_1720_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
return v___x_1723_;
}
else
{
lean_object* v_head_1724_; lean_object* v_tail_1725_; lean_object* v_r_1726_; lean_object* v_fst_1727_; lean_object* v_snd_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1738_; 
v_head_1724_ = lean_ctor_get(v_x_1718_, 0);
v_tail_1725_ = lean_ctor_get(v_x_1718_, 1);
v_r_1726_ = l_Lasm_UI_create___redArg(v_head_1724_, v_x_1719_);
v_fst_1727_ = lean_ctor_get(v_r_1726_, 0);
v_snd_1728_ = lean_ctor_get(v_r_1726_, 1);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_r_1726_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1730_ = v_r_1726_;
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_snd_1728_);
lean_inc(v_fst_1727_);
lean_dec(v_r_1726_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
lean_inc(v_before_1717_);
lean_inc(v_fst_1727_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v_before_1717_);
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_fst_1727_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_before_1717_);
v___x_1733_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_array_push(v_x_1720_, v___x_1733_);
v___x_1735_ = lean_array_push(v_x_1721_, v_fst_1727_);
v_x_1718_ = v_tail_1725_;
v_x_1719_ = v_snd_1728_;
v_x_1720_ = v___x_1734_;
v_x_1721_ = v___x_1735_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_before_1739_, lean_object* v_x_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v_before_1739_, v_x_1740_, v_x_1741_, v_x_1742_, v_x_1743_);
lean_dec(v_x_1740_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object* v_o_1745_, lean_object* v_n_1746_, lean_object* v_next_1747_){
_start:
{
lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v_o_1760_; lean_object* v_n_1761_; 
if (lean_obj_tag(v_o_1745_) == 0)
{
if (lean_obj_tag(v_n_1746_) == 0)
{
lean_object* v_id_1766_; lean_object* v_s_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1783_; 
v_id_1766_ = lean_ctor_get(v_o_1745_, 0);
v_s_1767_ = lean_ctor_get(v_o_1745_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_o_1745_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1769_ = v_o_1745_;
v_isShared_1770_ = v_isSharedCheck_1783_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_s_1767_);
lean_inc(v_id_1766_);
lean_dec(v_o_1745_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1783_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v_s_1771_; lean_object* v___y_1773_; uint8_t v___x_1778_; 
v_s_1771_ = lean_ctor_get(v_n_1746_, 0);
lean_inc_ref(v_s_1771_);
lean_dec_ref_known(v_n_1746_, 1);
v___x_1778_ = lean_string_dec_eq(v_s_1767_, v_s_1771_);
lean_dec_ref(v_s_1767_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_inc_ref(v_s_1771_);
lean_inc(v_id_1766_);
v___x_1779_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1779_, 0, v_id_1766_);
lean_ctor_set(v___x_1779_, 1, v_s_1771_);
v___x_1780_ = lean_box(0);
v___x_1781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1779_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___y_1773_ = v___x_1781_;
goto v___jp_1772_;
}
else
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_box(0);
v___y_1773_ = v___x_1782_;
goto v___jp_1772_;
}
v___jp_1772_:
{
lean_object* v___x_1775_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 1, v_s_1771_);
v___x_1775_ = v___x_1769_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_id_1766_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_s_1771_);
v___x_1775_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1776_, 0, v___y_1773_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
lean_ctor_set(v___x_1776_, 2, v_next_1747_);
return v___x_1776_;
}
}
}
}
else
{
v_o_1760_ = v_o_1745_;
v_n_1761_ = v_n_1746_;
goto v___jp_1759_;
}
}
else
{
lean_object* v_id_1784_; uint8_t v_ns_1785_; lean_object* v_tag_1786_; lean_object* v_attrs_1787_; lean_object* v_children_1788_; 
v_id_1784_ = lean_ctor_get(v_o_1745_, 0);
v_ns_1785_ = lean_ctor_get_uint8(v_o_1745_, sizeof(void*)*5);
v_tag_1786_ = lean_ctor_get(v_o_1745_, 1);
v_attrs_1787_ = lean_ctor_get(v_o_1745_, 3);
v_children_1788_ = lean_ctor_get(v_o_1745_, 4);
if (lean_obj_tag(v_n_1746_) == 1)
{
lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1849_; 
lean_inc(v_children_1788_);
lean_inc(v_attrs_1787_);
lean_inc_ref(v_tag_1786_);
lean_inc(v_id_1784_);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_o_1745_);
if (v_isSharedCheck_1849_ == 0)
{
lean_object* v_unused_1850_; lean_object* v_unused_1851_; lean_object* v_unused_1852_; lean_object* v_unused_1853_; lean_object* v_unused_1854_; 
v_unused_1850_ = lean_ctor_get(v_o_1745_, 4);
lean_dec(v_unused_1850_);
v_unused_1851_ = lean_ctor_get(v_o_1745_, 3);
lean_dec(v_unused_1851_);
v_unused_1852_ = lean_ctor_get(v_o_1745_, 2);
lean_dec(v_unused_1852_);
v_unused_1853_ = lean_ctor_get(v_o_1745_, 1);
lean_dec(v_unused_1853_);
v_unused_1854_ = lean_ctor_get(v_o_1745_, 0);
lean_dec(v_unused_1854_);
v___x_1807_ = v_o_1745_;
v_isShared_1808_ = v_isSharedCheck_1849_;
goto v_resetjp_1806_;
}
else
{
lean_dec(v_o_1745_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1849_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
uint8_t v_ns_1809_; lean_object* v_tag_1810_; lean_object* v_key_1811_; lean_object* v_attrs_1812_; lean_object* v_children_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v_ns_1809_ = lean_ctor_get_uint8(v_n_1746_, sizeof(void*)*4);
v_tag_1810_ = lean_ctor_get(v_n_1746_, 0);
v_key_1811_ = lean_ctor_get(v_n_1746_, 1);
v_attrs_1812_ = lean_ctor_get(v_n_1746_, 2);
v_children_1813_ = lean_ctor_get(v_n_1746_, 3);
v___x_1814_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1785_);
v___x_1815_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1809_);
v___x_1816_ = lean_nat_dec_eq(v___x_1814_, v___x_1815_);
lean_dec(v___x_1815_);
lean_dec(v___x_1814_);
if (v___x_1816_ == 0)
{
lean_del_object(v___x_1807_);
lean_dec(v_children_1788_);
lean_dec(v_attrs_1787_);
lean_dec_ref(v_tag_1786_);
goto v___jp_1789_;
}
else
{
uint8_t v___x_1817_; 
v___x_1817_ = lean_string_dec_eq(v_tag_1786_, v_tag_1810_);
lean_dec_ref(v_tag_1786_);
if (v___x_1817_ == 0)
{
lean_del_object(v___x_1807_);
lean_dec(v_children_1788_);
lean_dec(v_attrs_1787_);
goto v___jp_1789_;
}
else
{
lean_object* v_r_1818_; lean_object* v___y_1820_; lean_object* v_ops_1834_; lean_object* v_aops_1835_; lean_object* v___y_1837_; lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; 
lean_inc(v_children_1813_);
lean_inc_n(v_attrs_1812_, 2);
lean_inc(v_key_1811_);
lean_inc_ref(v_tag_1810_);
lean_dec_ref_known(v_n_1746_, 4);
v_r_1818_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(v_children_1788_, v_children_1813_, v_next_1747_);
v_ops_1834_ = lean_ctor_get(v_r_1818_, 0);
lean_inc_ref(v_ops_1834_);
v_aops_1835_ = l_Lasm_UI_diffAttrs___redArg(v_attrs_1787_, v_attrs_1812_);
v___x_1841_ = lean_array_get_size(v_ops_1834_);
v___x_1842_ = lean_unsigned_to_nat(0u);
v___x_1843_ = lean_nat_dec_eq(v___x_1841_, v___x_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = lean_array_to_list(v_ops_1834_);
lean_inc(v_id_1784_);
v___x_1845_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1845_, 0, v_id_1784_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = lean_box(0);
v___x_1847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___y_1837_ = v___x_1847_;
goto v___jp_1836_;
}
else
{
lean_object* v___x_1848_; 
lean_dec_ref(v_ops_1834_);
v___x_1848_ = lean_box(0);
v___y_1837_ = v___x_1848_;
goto v___jp_1836_;
}
v___jp_1819_:
{
lean_object* v_live_1821_; lean_object* v_next_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1832_; 
v_live_1821_ = lean_ctor_get(v_r_1818_, 1);
v_next_1822_ = lean_ctor_get(v_r_1818_, 2);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_r_1818_);
if (v_isSharedCheck_1832_ == 0)
{
lean_object* v_unused_1833_; 
v_unused_1833_ = lean_ctor_get(v_r_1818_, 0);
lean_dec(v_unused_1833_);
v___x_1824_ = v_r_1818_;
v_isShared_1825_ = v_isSharedCheck_1832_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_next_1822_);
lean_inc(v_live_1821_);
lean_dec(v_r_1818_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1832_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 4, v_live_1821_);
lean_ctor_set(v___x_1807_, 3, v_attrs_1812_);
lean_ctor_set(v___x_1807_, 2, v_key_1811_);
lean_ctor_set(v___x_1807_, 1, v_tag_1810_);
v___x_1827_ = v___x_1807_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_id_1784_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_tag_1810_);
lean_ctor_set(v_reuseFailAlloc_1831_, 2, v_key_1811_);
lean_ctor_set(v_reuseFailAlloc_1831_, 3, v_attrs_1812_);
lean_ctor_set(v_reuseFailAlloc_1831_, 4, v_live_1821_);
v___x_1827_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1829_; 
lean_ctor_set_uint8(v___x_1827_, sizeof(void*)*5, v_ns_1809_);
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v___x_1827_);
lean_ctor_set(v___x_1824_, 0, v___y_1820_);
v___x_1829_ = v___x_1824_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___y_1820_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v___x_1827_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_next_1822_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
v___jp_1836_:
{
uint8_t v___x_1838_; 
v___x_1838_ = l_List_isEmpty___redArg(v_aops_1835_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
lean_inc(v_id_1784_);
v___x_1839_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1839_, 0, v_id_1784_);
lean_ctor_set(v___x_1839_, 1, v_aops_1835_);
v___x_1840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v___y_1837_);
v___y_1820_ = v___x_1840_;
goto v___jp_1819_;
}
else
{
lean_dec(v_aops_1835_);
v___y_1820_ = v___y_1837_;
goto v___jp_1819_;
}
}
}
}
}
}
else
{
v_o_1760_ = v_o_1745_;
v_n_1761_ = v_n_1746_;
goto v___jp_1759_;
}
v___jp_1789_:
{
lean_object* v_c_1790_; lean_object* v_fst_1791_; lean_object* v_snd_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1805_; 
v_c_1790_ = l_Lasm_UI_create___redArg(v_n_1746_, v_next_1747_);
lean_dec_ref(v_n_1746_);
v_fst_1791_ = lean_ctor_get(v_c_1790_, 0);
v_snd_1792_ = lean_ctor_get(v_c_1790_, 1);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_c_1790_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1794_ = v_c_1790_;
v_isShared_1795_ = v_isSharedCheck_1805_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_snd_1792_);
lean_inc(v_fst_1791_);
lean_dec(v_c_1790_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1805_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1798_; 
lean_inc(v_id_1784_);
v___x_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1796_, 0, v_id_1784_);
lean_inc(v_fst_1791_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 1, v___x_1796_);
v___x_1798_ = v___x_1794_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_fst_1791_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1799_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1799_, 0, v_id_1784_);
v___x_1800_ = lean_box(0);
v___x_1801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1798_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
lean_ctor_set(v___x_1803_, 1, v_fst_1791_);
lean_ctor_set(v___x_1803_, 2, v_snd_1792_);
return v___x_1803_;
}
}
}
}
v___jp_1748_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_inc(v___y_1751_);
v___x_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___y_1751_);
lean_inc(v___y_1750_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___y_1750_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___y_1751_);
v___x_1755_ = lean_box(0);
v___x_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1754_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1753_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
lean_ctor_set(v___x_1758_, 1, v___y_1750_);
lean_ctor_set(v___x_1758_, 2, v___y_1749_);
return v___x_1758_;
}
v___jp_1759_:
{
lean_object* v_c_1762_; lean_object* v_fst_1763_; lean_object* v_snd_1764_; lean_object* v_id_1765_; 
v_c_1762_ = l_Lasm_UI_create___redArg(v_n_1761_, v_next_1747_);
lean_dec_ref(v_n_1761_);
v_fst_1763_ = lean_ctor_get(v_c_1762_, 0);
lean_inc(v_fst_1763_);
v_snd_1764_ = lean_ctor_get(v_c_1762_, 1);
lean_inc(v_snd_1764_);
lean_dec_ref(v_c_1762_);
v_id_1765_ = lean_ctor_get(v_o_1760_, 0);
lean_inc(v_id_1765_);
lean_dec_ref(v_o_1760_);
v___y_1749_ = v_snd_1764_;
v___y_1750_ = v_fst_1763_;
v___y_1751_ = v_id_1765_;
goto v___jp_1748_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(lean_object* v_oa_1855_, lean_object* v_oLo_1856_, lean_object* v_oHi_1857_, lean_object* v_na_1858_, lean_object* v_nLo_1859_, lean_object* v_nHi_1860_, lean_object* v_pre_1861_, lean_object* v_suf_1862_, lean_object* v_ops_1863_, lean_object* v_next_1864_, lean_object* v_keys_1865_){
_start:
{
lean_object* v___y_1867_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1886_; lean_object* v___y_1896_; uint8_t v___x_1898_; 
v___x_1898_ = lean_nat_dec_lt(v_oLo_1856_, v_oHi_1857_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; 
lean_dec(v_keys_1865_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
v___x_1899_ = l_List_head_x3f___redArg(v_suf_1862_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_box(0);
v___y_1886_ = v___x_1900_;
goto v___jp_1885_;
}
else
{
lean_object* v_val_1901_; lean_object* v_id_1902_; 
v_val_1901_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_val_1901_);
lean_dec_ref_known(v___x_1899_, 1);
v_id_1902_ = lean_ctor_get(v_val_1901_, 0);
lean_inc(v_id_1902_);
lean_dec(v_val_1901_);
v___y_1896_ = v_id_1902_;
goto v___jp_1895_;
}
}
else
{
uint8_t v___x_1903_; 
v___x_1903_ = lean_nat_dec_lt(v_nLo_1859_, v_nHi_1860_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
v___x_1904_ = l_Lasm_UI_removeRange___redArg(v_oa_1855_, v_oLo_1856_, v_oHi_1857_, v_ops_1863_);
lean_dec(v_oHi_1857_);
lean_dec_ref(v_oa_1855_);
v___x_1905_ = lean_array_to_list(v_pre_1861_);
v___x_1906_ = l_List_appendTR___redArg(v___x_1905_, v_suf_1862_);
v___x_1907_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1904_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
lean_ctor_set(v___x_1907_, 2, v_next_1864_);
return v___x_1907_;
}
else
{
lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = lean_array_get_size(v_oa_1855_);
v___x_1909_ = lean_nat_dec_lt(v_oLo_1856_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; lean_object* v___x_1911_; uint8_t v___x_1912_; 
v___x_1910_ = lean_unsigned_to_nat(1u);
v___x_1911_ = lean_nat_sub(v_oHi_1857_, v___x_1910_);
v___x_1912_ = lean_nat_dec_lt(v___x_1911_, v___x_1908_);
if (v___x_1912_ == 0)
{
lean_dec(v___x_1911_);
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
goto v___jp_1877_;
}
else
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_array_fget_borrowed(v_oa_1855_, v___x_1911_);
lean_dec(v___x_1911_);
if (lean_obj_tag(v___x_1913_) == 0)
{
goto v___jp_1881_;
}
else
{
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
goto v___jp_1877_;
}
}
}
else
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_array_fget(v_oa_1855_, v_oLo_1856_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = lean_nat_add(v_oLo_1856_, v___x_1915_);
lean_dec(v_oLo_1856_);
v_oLo_1856_ = v___x_1916_;
goto _start;
}
else
{
lean_object* v_val_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_2095_; 
v_val_1918_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_1920_ = v___x_1914_;
v_isShared_1921_ = v_isSharedCheck_2095_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_val_1918_);
lean_dec(v___x_1914_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_2095_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___x_1949_; uint8_t v___x_1950_; 
v___x_1922_ = lean_unsigned_to_nat(1u);
v___x_1949_ = lean_nat_sub(v_oHi_1857_, v___x_1922_);
v___x_1950_ = lean_nat_dec_lt(v___x_1949_, v___x_1908_);
if (v___x_1950_ == 0)
{
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
goto v___jp_1877_;
}
else
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_array_fget(v_oa_1855_, v___x_1949_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
goto v___jp_1881_;
}
else
{
lean_object* v_val_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_2094_; 
v_val_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_2094_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_val_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_2094_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1956_; uint8_t v___x_1957_; 
v___x_1956_ = lean_array_get_size(v_na_1858_);
v___x_1957_ = lean_nat_dec_lt(v_nLo_1859_, v___x_1956_);
if (v___x_1957_ == 0)
{
lean_del_object(v___x_1954_);
lean_dec(v_val_1952_);
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
goto v___jp_1877_;
}
else
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_nat_sub(v_nHi_1860_, v___x_1922_);
v___x_1959_ = lean_nat_dec_lt(v___x_1958_, v___x_1956_);
if (v___x_1959_ == 0)
{
lean_dec(v___x_1958_);
lean_del_object(v___x_1954_);
lean_dec(v_val_1952_);
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_keys_1865_);
lean_dec(v_nHi_1860_);
lean_dec(v_nLo_1859_);
lean_dec(v_oHi_1857_);
lean_dec(v_oLo_1856_);
lean_dec_ref(v_oa_1855_);
goto v___jp_1877_;
}
else
{
lean_object* v___x_1960_; lean_object* v_fst_1962_; lean_object* v_fst_1970_; lean_object* v_fst_1971_; lean_object* v_snd_1972_; lean_object* v___y_1980_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; uint8_t v___y_1991_; uint8_t v___x_2012_; 
v___x_1960_ = lean_array_fget_borrowed(v_na_1858_, v_nLo_1859_);
v___x_2012_ = l_Lasm_UI_Live_same___redArg(v_val_1918_, v___x_1960_);
if (v___x_2012_ == 0)
{
lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2013_ = lean_array_fget_borrowed(v_na_1858_, v___x_1958_);
v___x_2014_ = l_Lasm_UI_Live_same___redArg(v_val_1952_, v___x_2013_);
if (v___x_2014_ == 0)
{
uint8_t v___x_2015_; 
v___x_2015_ = l_Lasm_UI_Live_same___redArg(v_val_1918_, v___x_2013_);
if (v___x_2015_ == 0)
{
uint8_t v___x_2016_; 
lean_dec(v___x_1958_);
v___x_2016_ = l_Lasm_UI_Live_same___redArg(v_val_1952_, v___x_1960_);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; 
lean_dec(v_val_1952_);
lean_dec(v___x_1949_);
v___x_2017_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_1960_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_del_object(v___x_1954_);
lean_del_object(v___x_1920_);
v_fst_1962_ = v_keys_1865_;
goto v___jp_1961_;
}
else
{
lean_object* v_val_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2035_; 
v_val_2018_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2020_ = v___x_2017_;
v_isShared_2021_ = v_isSharedCheck_2035_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_val_2018_);
lean_dec(v___x_2017_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2035_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___y_2023_; 
if (lean_obj_tag(v_keys_1865_) == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_1856_);
v___x_2033_ = l_Lasm_UI_keyIndex___redArg(v_oa_1855_, v_oLo_1856_, v_oHi_1857_, v___x_2032_);
v___y_2023_ = v___x_2033_;
goto v___jp_2022_;
}
else
{
lean_object* v_val_2034_; 
v_val_2034_ = lean_ctor_get(v_keys_1865_, 0);
lean_inc(v_val_2034_);
lean_dec_ref_known(v_keys_1865_, 1);
v___y_2023_ = v_val_2034_;
goto v___jp_2022_;
}
v___jp_2022_:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v___y_2023_, v_val_2018_);
lean_dec(v_val_2018_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v___x_2026_; 
lean_del_object(v___x_1954_);
lean_del_object(v___x_1920_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___y_2023_);
v___x_2026_ = v___x_2020_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___y_2023_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
v_fst_1962_ = v___x_2026_;
goto v___jp_1961_;
}
}
else
{
lean_object* v_val_2028_; lean_object* v___f_2029_; uint8_t v___x_2030_; 
lean_del_object(v___x_2020_);
v_val_2028_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_val_2028_);
lean_dec_ref_known(v___x_2024_, 1);
lean_inc_ref(v___y_2023_);
v___f_2029_ = lean_alloc_closure((void*)(l_Lasm_UI_twoEnded___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2029_, 0, v___y_2023_);
v___x_2030_ = lean_nat_dec_le(v_oLo_1856_, v_val_2028_);
if (v___x_2030_ == 0)
{
v___y_1988_ = v_val_2028_;
v___y_1989_ = v___y_2023_;
v___y_1990_ = v___f_2029_;
v___y_1991_ = v___x_2016_;
goto v___jp_1987_;
}
else
{
uint8_t v___x_2031_; 
v___x_2031_ = lean_nat_dec_lt(v_val_2028_, v_oHi_1857_);
v___y_1988_ = v_val_2028_;
v___y_1989_ = v___y_2023_;
v___y_1990_ = v___f_2029_;
v___y_1991_ = v___x_2031_;
goto v___jp_1987_;
}
}
}
}
}
}
else
{
lean_object* v_r_2036_; lean_object* v_ops_2037_; lean_object* v_live_2038_; lean_object* v_next_2039_; lean_object* v___x_2040_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2051_; lean_object* v_id_2053_; 
lean_del_object(v___x_1954_);
lean_del_object(v___x_1920_);
lean_dec(v_oHi_1857_);
lean_inc(v___x_1960_);
lean_inc(v_val_1952_);
v_r_2036_ = l_Lasm_UI_diffNode___redArg(v_val_1952_, v___x_1960_, v_next_1864_);
v_ops_2037_ = lean_ctor_get(v_r_2036_, 0);
lean_inc(v_ops_2037_);
v_live_2038_ = lean_ctor_get(v_r_2036_, 1);
lean_inc_ref(v_live_2038_);
v_next_2039_ = lean_ctor_get(v_r_2036_, 2);
lean_inc(v_next_2039_);
lean_dec_ref(v_r_2036_);
v___x_2040_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1863_, v_ops_2037_);
v_id_2053_ = lean_ctor_get(v_val_1952_, 0);
lean_inc(v_id_2053_);
lean_dec(v_val_1952_);
v___y_2051_ = v_id_2053_;
goto v___jp_2050_;
v___jp_2041_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v_ops_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___y_2043_);
v___x_2045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___y_2042_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v_ops_2046_ = lean_array_push(v___x_2040_, v___x_2045_);
v___x_2047_ = lean_nat_add(v_nLo_1859_, v___x_1922_);
lean_dec(v_nLo_1859_);
v___x_2048_ = lean_array_push(v_pre_1861_, v_live_2038_);
v_oHi_1857_ = v___x_1949_;
v_nLo_1859_ = v___x_2047_;
v_pre_1861_ = v___x_2048_;
v_ops_1863_ = v_ops_2046_;
v_next_1864_ = v_next_2039_;
goto _start;
}
v___jp_2050_:
{
lean_object* v_id_2052_; 
v_id_2052_ = lean_ctor_get(v_val_1918_, 0);
lean_inc(v_id_2052_);
lean_dec(v_val_1918_);
v___y_2042_ = v___y_2051_;
v___y_2043_ = v_id_2052_;
goto v___jp_2041_;
}
}
}
else
{
lean_object* v_r_2054_; lean_object* v_ops_2055_; lean_object* v_live_2056_; lean_object* v_next_2057_; lean_object* v___x_2058_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2072_; lean_object* v_id_2077_; 
lean_del_object(v___x_1954_);
lean_dec(v_val_1952_);
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_dec(v_nHi_1860_);
lean_inc(v___x_2013_);
lean_inc(v_val_1918_);
v_r_2054_ = l_Lasm_UI_diffNode___redArg(v_val_1918_, v___x_2013_, v_next_1864_);
v_ops_2055_ = lean_ctor_get(v_r_2054_, 0);
lean_inc(v_ops_2055_);
v_live_2056_ = lean_ctor_get(v_r_2054_, 1);
lean_inc_ref(v_live_2056_);
v_next_2057_ = lean_ctor_get(v_r_2054_, 2);
lean_inc(v_next_2057_);
lean_dec_ref(v_r_2054_);
v___x_2058_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1863_, v_ops_2055_);
v_id_2077_ = lean_ctor_get(v_val_1918_, 0);
lean_inc(v_id_2077_);
lean_dec(v_val_1918_);
v___y_2072_ = v_id_2077_;
goto v___jp_2071_;
v___jp_2059_:
{
lean_object* v___x_2062_; lean_object* v_ops_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___y_2060_);
lean_ctor_set(v___x_2062_, 1, v___y_2061_);
v_ops_2063_ = lean_array_push(v___x_2058_, v___x_2062_);
v___x_2064_ = lean_nat_add(v_oLo_1856_, v___x_1922_);
lean_dec(v_oLo_1856_);
v___x_2065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2065_, 0, v_live_2056_);
lean_ctor_set(v___x_2065_, 1, v_suf_1862_);
v_oLo_1856_ = v___x_2064_;
v_nHi_1860_ = v___x_1958_;
v_suf_1862_ = v___x_2065_;
v_ops_1863_ = v_ops_2063_;
v_next_1864_ = v_next_2057_;
goto _start;
}
v___jp_2067_:
{
lean_object* v___x_2070_; 
v___x_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2070_, 0, v___y_2069_);
v___y_2060_ = v___y_2068_;
v___y_2061_ = v___x_2070_;
goto v___jp_2059_;
}
v___jp_2071_:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_List_head_x3f___redArg(v_suf_1862_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v___x_2074_; 
v___x_2074_ = lean_box(0);
v___y_2060_ = v___y_2072_;
v___y_2061_ = v___x_2074_;
goto v___jp_2059_;
}
else
{
lean_object* v_val_2075_; lean_object* v_id_2076_; 
v_val_2075_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_val_2075_);
lean_dec_ref_known(v___x_2073_, 1);
v_id_2076_ = lean_ctor_get(v_val_2075_, 0);
lean_inc(v_id_2076_);
lean_dec(v_val_2075_);
v___y_2068_ = v___y_2072_;
v___y_2069_ = v_id_2076_;
goto v___jp_2067_;
}
}
}
}
else
{
lean_object* v_r_2078_; lean_object* v_ops_2079_; lean_object* v_live_2080_; lean_object* v_next_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
lean_del_object(v___x_1954_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_nHi_1860_);
lean_dec(v_oHi_1857_);
lean_inc(v___x_2013_);
v_r_2078_ = l_Lasm_UI_diffNode___redArg(v_val_1952_, v___x_2013_, v_next_1864_);
v_ops_2079_ = lean_ctor_get(v_r_2078_, 0);
lean_inc(v_ops_2079_);
v_live_2080_ = lean_ctor_get(v_r_2078_, 1);
lean_inc_ref(v_live_2080_);
v_next_2081_ = lean_ctor_get(v_r_2078_, 2);
lean_inc(v_next_2081_);
lean_dec_ref(v_r_2078_);
v___x_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_live_2080_);
lean_ctor_set(v___x_2082_, 1, v_suf_1862_);
v___x_2083_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1863_, v_ops_2079_);
v_oHi_1857_ = v___x_1949_;
v_nHi_1860_ = v___x_1958_;
v_suf_1862_ = v___x_2082_;
v_ops_1863_ = v___x_2083_;
v_next_1864_ = v_next_2081_;
goto _start;
}
}
else
{
lean_object* v_r_2085_; lean_object* v_ops_2086_; lean_object* v_live_2087_; lean_object* v_next_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
lean_dec(v___x_1958_);
lean_del_object(v___x_1954_);
lean_dec(v_val_1952_);
lean_dec(v___x_1949_);
lean_del_object(v___x_1920_);
lean_inc(v___x_1960_);
v_r_2085_ = l_Lasm_UI_diffNode___redArg(v_val_1918_, v___x_1960_, v_next_1864_);
v_ops_2086_ = lean_ctor_get(v_r_2085_, 0);
lean_inc(v_ops_2086_);
v_live_2087_ = lean_ctor_get(v_r_2085_, 1);
lean_inc_ref(v_live_2087_);
v_next_2088_ = lean_ctor_get(v_r_2085_, 2);
lean_inc(v_next_2088_);
lean_dec_ref(v_r_2085_);
v___x_2089_ = lean_nat_add(v_oLo_1856_, v___x_1922_);
lean_dec(v_oLo_1856_);
v___x_2090_ = lean_nat_add(v_nLo_1859_, v___x_1922_);
lean_dec(v_nLo_1859_);
v___x_2091_ = lean_array_push(v_pre_1861_, v_live_2087_);
v___x_2092_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1863_, v_ops_2086_);
v_oLo_1856_ = v___x_2089_;
v_nLo_1859_ = v___x_2090_;
v_pre_1861_ = v___x_2091_;
v_ops_1863_ = v___x_2092_;
v_next_1864_ = v_next_2088_;
goto _start;
}
v___jp_1961_:
{
lean_object* v_c_1963_; lean_object* v_fst_1964_; lean_object* v_snd_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v_id_1968_; 
v_c_1963_ = l_Lasm_UI_create___redArg(v___x_1960_, v_next_1864_);
v_fst_1964_ = lean_ctor_get(v_c_1963_, 0);
lean_inc_n(v_fst_1964_, 2);
v_snd_1965_ = lean_ctor_get(v_c_1963_, 1);
lean_inc(v_snd_1965_);
lean_dec_ref(v_c_1963_);
v___x_1966_ = lean_nat_add(v_nLo_1859_, v___x_1922_);
lean_dec(v_nLo_1859_);
v___x_1967_ = lean_array_push(v_pre_1861_, v_fst_1964_);
v_id_1968_ = lean_ctor_get(v_val_1918_, 0);
lean_inc(v_id_1968_);
lean_dec(v_val_1918_);
v___y_1867_ = v_snd_1965_;
v___y_1868_ = v_fst_1964_;
v___y_1869_ = v_fst_1962_;
v___y_1870_ = v___x_1967_;
v___y_1871_ = v___x_1966_;
v___y_1872_ = v_id_1968_;
goto v___jp_1866_;
}
v___jp_1969_:
{
lean_object* v_r_1973_; lean_object* v_ops_1974_; lean_object* v_live_1975_; lean_object* v_next_1976_; lean_object* v___x_1977_; lean_object* v_id_1978_; 
lean_inc(v___x_1960_);
lean_inc_ref(v_snd_1972_);
v_r_1973_ = l_Lasm_UI_diffNode___redArg(v_snd_1972_, v___x_1960_, v_next_1864_);
v_ops_1974_ = lean_ctor_get(v_r_1973_, 0);
lean_inc(v_ops_1974_);
v_live_1975_ = lean_ctor_get(v_r_1973_, 1);
lean_inc_ref(v_live_1975_);
v_next_1976_ = lean_ctor_get(v_r_1973_, 2);
lean_inc(v_next_1976_);
lean_dec_ref(v_r_1973_);
v___x_1977_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1863_, v_ops_1974_);
v_id_1978_ = lean_ctor_get(v_snd_1972_, 0);
lean_inc(v_id_1978_);
lean_dec_ref(v_snd_1972_);
v___y_1942_ = v_fst_1970_;
v___y_1943_ = v_fst_1971_;
v___y_1944_ = v_next_1976_;
v___y_1945_ = v___x_1977_;
v___y_1946_ = v_live_1975_;
v___y_1947_ = v_id_1978_;
goto v___jp_1941_;
}
v___jp_1979_:
{
lean_object* v_snd_1981_; 
v_snd_1981_ = lean_ctor_get(v___y_1980_, 1);
if (lean_obj_tag(v_snd_1981_) == 0)
{
lean_object* v_fst_1982_; 
lean_del_object(v___x_1920_);
v_fst_1982_ = lean_ctor_get(v___y_1980_, 0);
lean_inc(v_fst_1982_);
lean_dec_ref(v___y_1980_);
v_fst_1962_ = v_fst_1982_;
goto v___jp_1961_;
}
else
{
lean_object* v_val_1983_; lean_object* v_fst_1984_; lean_object* v_fst_1985_; lean_object* v_snd_1986_; 
v_val_1983_ = lean_ctor_get(v_snd_1981_, 0);
lean_inc(v_val_1983_);
v_fst_1984_ = lean_ctor_get(v___y_1980_, 0);
lean_inc(v_fst_1984_);
lean_dec_ref(v___y_1980_);
v_fst_1985_ = lean_ctor_get(v_val_1983_, 0);
lean_inc(v_fst_1985_);
v_snd_1986_ = lean_ctor_get(v_val_1983_, 1);
lean_inc(v_snd_1986_);
lean_dec(v_val_1983_);
v_fst_1970_ = v_fst_1984_;
v_fst_1971_ = v_fst_1985_;
v_snd_1972_ = v_snd_1986_;
goto v___jp_1969_;
}
}
v___jp_1987_:
{
if (v___y_1991_ == 0)
{
lean_object* v___x_1993_; 
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1988_);
lean_del_object(v___x_1920_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___y_1989_);
v___x_1993_ = v___x_1954_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___y_1989_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
v_fst_1962_ = v___x_1993_;
goto v___jp_1961_;
}
}
else
{
uint8_t v___x_1995_; 
v___x_1995_ = lean_nat_dec_lt(v___y_1988_, v___x_1908_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_del_object(v___x_1954_);
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_apply_1(v___y_1990_, v___x_1996_);
v___y_1980_ = v___x_1997_;
goto v___jp_1979_;
}
else
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_array_fget(v_oa_1855_, v___y_1988_);
if (lean_obj_tag(v___x_1998_) == 1)
{
lean_object* v_val_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2007_; 
lean_dec_ref(v___y_1990_);
lean_del_object(v___x_1954_);
v_val_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2007_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_val_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2007_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___y_1989_);
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___y_1989_);
v___x_2004_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
uint8_t v___x_2005_; 
v___x_2005_ = l_Lasm_UI_Live_same___redArg(v_val_1999_, v___x_1960_);
if (v___x_2005_ == 0)
{
lean_dec(v_val_1999_);
lean_dec(v___y_1988_);
lean_del_object(v___x_1920_);
v_fst_1962_ = v___x_2004_;
goto v___jp_1961_;
}
else
{
v_fst_1970_ = v___x_2004_;
v_fst_1971_ = v___y_1988_;
v_snd_1972_ = v_val_1999_;
goto v___jp_1969_;
}
}
}
}
else
{
lean_object* v___x_2009_; 
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___x_1998_);
v___x_2009_ = v___x_1954_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_1998_);
v___x_2009_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_apply_1(v___y_1990_, v___x_2009_);
v___y_1980_ = v___x_2010_;
goto v___jp_1979_;
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
v___jp_1923_:
{
lean_object* v___x_1932_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v___y_1930_);
v___x_1932_ = v___x_1920_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___y_1930_);
v___x_1932_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; lean_object* v_ops_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___y_1928_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v_ops_1934_ = lean_array_push(v___y_1927_, v___x_1933_);
v___x_1935_ = lean_box(0);
v___x_1936_ = lean_array_set(v_oa_1855_, v___y_1925_, v___x_1935_);
lean_dec(v___y_1925_);
v___x_1937_ = lean_nat_add(v_nLo_1859_, v___x_1922_);
lean_dec(v_nLo_1859_);
v___x_1938_ = lean_array_push(v_pre_1861_, v___y_1929_);
v_oa_1855_ = v___x_1936_;
v_nLo_1859_ = v___x_1937_;
v_pre_1861_ = v___x_1938_;
v_ops_1863_ = v_ops_1934_;
v_next_1864_ = v___y_1926_;
v_keys_1865_ = v___y_1924_;
goto _start;
}
}
v___jp_1941_:
{
lean_object* v_id_1948_; 
v_id_1948_ = lean_ctor_get(v_val_1918_, 0);
lean_inc(v_id_1948_);
lean_dec(v_val_1918_);
v___y_1924_ = v___y_1942_;
v___y_1925_ = v___y_1943_;
v___y_1926_ = v___y_1944_;
v___y_1927_ = v___y_1945_;
v___y_1928_ = v___y_1947_;
v___y_1929_ = v___y_1946_;
v___y_1930_ = v_id_1948_;
goto v___jp_1923_;
}
}
}
}
}
}
v___jp_1866_:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___y_1872_);
v___x_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___y_1868_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = lean_array_push(v_ops_1863_, v___x_1874_);
v_nLo_1859_ = v___y_1871_;
v_pre_1861_ = v___y_1870_;
v_ops_1863_ = v___x_1875_;
v_next_1864_ = v___y_1867_;
v_keys_1865_ = v___y_1869_;
goto _start;
}
v___jp_1877_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1878_ = lean_array_to_list(v_pre_1861_);
v___x_1879_ = l_List_appendTR___redArg(v___x_1878_, v_suf_1862_);
v___x_1880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1880_, 0, v_ops_1863_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
lean_ctor_set(v___x_1880_, 2, v_next_1864_);
return v___x_1880_;
}
v___jp_1881_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_nat_sub(v_oHi_1857_, v___x_1882_);
lean_dec(v_oHi_1857_);
v_oHi_1857_ = v___x_1883_;
goto _start;
}
v___jp_1885_:
{
lean_object* v_r_1887_; lean_object* v_snd_1888_; lean_object* v_fst_1889_; lean_object* v_fst_1890_; lean_object* v_snd_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v_r_1887_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_1858_, v___y_1886_, v_nLo_1859_, v_nHi_1860_, v_next_1864_, v_ops_1863_, v_pre_1861_);
lean_dec(v_nHi_1860_);
v_snd_1888_ = lean_ctor_get(v_r_1887_, 1);
lean_inc(v_snd_1888_);
v_fst_1889_ = lean_ctor_get(v_r_1887_, 0);
lean_inc(v_fst_1889_);
lean_dec_ref(v_r_1887_);
v_fst_1890_ = lean_ctor_get(v_snd_1888_, 0);
lean_inc(v_fst_1890_);
v_snd_1891_ = lean_ctor_get(v_snd_1888_, 1);
lean_inc(v_snd_1891_);
lean_dec(v_snd_1888_);
v___x_1892_ = lean_array_to_list(v_fst_1890_);
v___x_1893_ = l_List_appendTR___redArg(v___x_1892_, v_suf_1862_);
v___x_1894_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1894_, 0, v_fst_1889_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
lean_ctor_set(v___x_1894_, 2, v_snd_1891_);
return v___x_1894_;
}
v___jp_1895_:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1897_, 0, v___y_1896_);
v___y_1886_ = v___x_1897_;
goto v___jp_1885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(lean_object* v_x_2096_, lean_object* v_x_2097_, lean_object* v_x_2098_, lean_object* v_x_2099_, lean_object* v_x_2100_){
_start:
{
if (lean_obj_tag(v_x_2096_) == 0)
{
lean_object* v___x_2101_; lean_object* v_r_2102_; lean_object* v_snd_2103_; lean_object* v_fst_2104_; lean_object* v_fst_2105_; lean_object* v_snd_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2101_ = lean_box(0);
v_r_2102_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v___x_2101_, v_x_2097_, v_x_2098_, v_x_2099_, v_x_2100_);
lean_dec(v_x_2097_);
v_snd_2103_ = lean_ctor_get(v_r_2102_, 1);
lean_inc(v_snd_2103_);
v_fst_2104_ = lean_ctor_get(v_r_2102_, 0);
lean_inc(v_fst_2104_);
lean_dec_ref(v_r_2102_);
v_fst_2105_ = lean_ctor_get(v_snd_2103_, 0);
lean_inc(v_fst_2105_);
v_snd_2106_ = lean_ctor_get(v_snd_2103_, 1);
lean_inc(v_snd_2106_);
lean_dec(v_snd_2103_);
v___x_2107_ = lean_array_to_list(v_fst_2105_);
v___x_2108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2108_, 0, v_fst_2104_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
lean_ctor_set(v___x_2108_, 2, v_snd_2106_);
return v___x_2108_;
}
else
{
if (lean_obj_tag(v_x_2097_) == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = l_Lasm_UI_removeAll___redArg(v_x_2096_, v_x_2099_);
v___x_2110_ = lean_array_to_list(v_x_2100_);
v___x_2111_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
lean_ctor_set(v___x_2111_, 2, v_x_2098_);
return v___x_2111_;
}
else
{
lean_object* v_head_2112_; lean_object* v_tail_2113_; lean_object* v_head_2114_; lean_object* v_tail_2115_; uint8_t v___x_2116_; 
v_head_2112_ = lean_ctor_get(v_x_2096_, 0);
v_tail_2113_ = lean_ctor_get(v_x_2096_, 1);
v_head_2114_ = lean_ctor_get(v_x_2097_, 0);
v_tail_2115_ = lean_ctor_get(v_x_2097_, 1);
v___x_2116_ = l_Lasm_UI_Live_same___redArg(v_head_2112_, v_head_2114_);
if (v___x_2116_ == 0)
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v_oa_2119_; lean_object* v_na_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2117_ = lean_box(0);
v___x_2118_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_x_2096_, v___x_2117_);
v_oa_2119_ = lean_array_mk(v___x_2118_);
v_na_2120_ = lean_array_mk(v_x_2097_);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_array_get_size(v_oa_2119_);
v___x_2123_ = lean_array_get_size(v_na_2120_);
v___x_2124_ = lean_box(0);
v___x_2125_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2119_, v___x_2121_, v___x_2122_, v_na_2120_, v___x_2121_, v___x_2123_, v_x_2100_, v___x_2117_, v_x_2099_, v_x_2098_, v___x_2124_);
lean_dec_ref(v_na_2120_);
return v___x_2125_;
}
else
{
lean_object* v_r_2126_; lean_object* v_ops_2127_; lean_object* v_live_2128_; lean_object* v_next_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
lean_inc(v_tail_2115_);
lean_inc(v_head_2114_);
lean_inc(v_tail_2113_);
lean_inc(v_head_2112_);
lean_dec_ref_known(v_x_2097_, 2);
lean_dec_ref_known(v_x_2096_, 2);
v_r_2126_ = l_Lasm_UI_diffNode___redArg(v_head_2112_, v_head_2114_, v_x_2098_);
v_ops_2127_ = lean_ctor_get(v_r_2126_, 0);
lean_inc(v_ops_2127_);
v_live_2128_ = lean_ctor_get(v_r_2126_, 1);
lean_inc_ref(v_live_2128_);
v_next_2129_ = lean_ctor_get(v_r_2126_, 2);
lean_inc(v_next_2129_);
lean_dec_ref(v_r_2126_);
v___x_2130_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_2099_, v_ops_2127_);
v___x_2131_ = lean_array_push(v_x_2100_, v_live_2128_);
v_x_2096_ = v_tail_2113_;
v_x_2097_ = v_tail_2115_;
v_x_2098_ = v_next_2129_;
v_x_2099_ = v___x_2130_;
v_x_2100_ = v___x_2131_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(lean_object* v_old_2133_, lean_object* v_new_2134_, lean_object* v_next_2135_){
_start:
{
lean_object* v_old_2137_; lean_object* v_new_2138_; 
if (lean_obj_tag(v_old_2133_) == 0)
{
if (lean_obj_tag(v_new_2134_) == 0)
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
lean_ctor_set(v___x_2144_, 1, v_old_2133_);
lean_ctor_set(v___x_2144_, 2, v_next_2135_);
return v___x_2144_;
}
else
{
v_old_2137_ = v_old_2133_;
v_new_2138_ = v_new_2134_;
goto v___jp_2136_;
}
}
else
{
if (lean_obj_tag(v_new_2134_) == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
lean_dec_ref_known(v_old_2133_, 2);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_mk_empty_array_with_capacity(v___x_2145_);
lean_dec_ref(v___x_2146_);
v___x_2147_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_2148_ = lean_box(0);
v___x_2149_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2147_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
lean_ctor_set(v___x_2149_, 2, v_next_2135_);
return v___x_2149_;
}
else
{
v_old_2137_ = v_old_2133_;
v_new_2138_ = v_new_2134_;
goto v___jp_2136_;
}
}
v___jp_2136_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2139_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2140_ = l_List_lengthTR___redArg(v_new_2138_);
v___x_2141_ = lean_mk_empty_array_with_capacity(v___x_2140_);
lean_dec(v___x_2140_);
v___x_2142_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(v_old_2137_, v_new_2138_, v_next_2135_, v___x_2139_, v___x_2141_);
return v___x_2142_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_oa_2150_, lean_object* v_oLo_2151_, lean_object* v_oHi_2152_, lean_object* v_na_2153_, lean_object* v_nLo_2154_, lean_object* v_nHi_2155_, lean_object* v_pre_2156_, lean_object* v_suf_2157_, lean_object* v_ops_2158_, lean_object* v_next_2159_, lean_object* v_keys_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2150_, v_oLo_2151_, v_oHi_2152_, v_na_2153_, v_nLo_2154_, v_nHi_2155_, v_pre_2156_, v_suf_2157_, v_ops_2158_, v_next_2159_, v_keys_2160_);
lean_dec_ref(v_na_2153_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object* v_Msg_2162_, lean_object* v_o_2163_, lean_object* v_n_2164_, lean_object* v_next_2165_){
_start:
{
lean_object* v___x_2166_; 
v___x_2166_ = l_Lasm_UI_diffNode___redArg(v_o_2163_, v_n_2164_, v_next_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0(lean_object* v_Msg_2167_, lean_object* v_old_2168_, lean_object* v_new_2169_, lean_object* v_next_2170_){
_start:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0___redArg(v_old_2168_, v_new_2169_, v_next_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0(lean_object* v_Msg_2172_, lean_object* v_x_2173_, lean_object* v_x_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_){
_start:
{
lean_object* v___x_2178_; 
v___x_2178_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0___redArg(v_x_2173_, v_x_2174_, v_x_2175_, v_x_2176_, v_x_2177_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1(lean_object* v_Msg_2179_, lean_object* v_before_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_, lean_object* v_x_2184_){
_start:
{
lean_object* v___x_2185_; 
v___x_2185_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___redArg(v_before_2180_, v_x_2181_, v_x_2182_, v_x_2183_, v_x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1___boxed(lean_object* v_Msg_2186_, lean_object* v_before_2187_, lean_object* v_x_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_, lean_object* v_x_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__1(v_Msg_2186_, v_before_2187_, v_x_2188_, v_x_2189_, v_x_2190_, v_x_2191_);
lean_dec(v_x_2188_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2(lean_object* v_Msg_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_a_2194_, v_a_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3(lean_object* v_Msg_2197_, lean_object* v_oa_2198_, lean_object* v_oLo_2199_, lean_object* v_oHi_2200_, lean_object* v_na_2201_, lean_object* v_nLo_2202_, lean_object* v_nHi_2203_, lean_object* v_pre_2204_, lean_object* v_suf_2205_, lean_object* v_ops_2206_, lean_object* v_next_2207_, lean_object* v_keys_2208_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___redArg(v_oa_2198_, v_oLo_2199_, v_oHi_2200_, v_na_2201_, v_nLo_2202_, v_nHi_2203_, v_pre_2204_, v_suf_2205_, v_ops_2206_, v_next_2207_, v_keys_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3___boxed(lean_object* v_Msg_2210_, lean_object* v_oa_2211_, lean_object* v_oLo_2212_, lean_object* v_oHi_2213_, lean_object* v_na_2214_, lean_object* v_nLo_2215_, lean_object* v_nHi_2216_, lean_object* v_pre_2217_, lean_object* v_suf_2218_, lean_object* v_ops_2219_, lean_object* v_next_2220_, lean_object* v_keys_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3(v_Msg_2210_, v_oa_2211_, v_oLo_2212_, v_oHi_2213_, v_na_2214_, v_nLo_2215_, v_nHi_2216_, v_pre_2217_, v_suf_2218_, v_ops_2219_, v_next_2220_, v_keys_2221_);
lean_dec_ref(v_na_2214_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4(lean_object* v_Msg_2223_, lean_object* v_na_2224_, lean_object* v_before_2225_, lean_object* v_lo_2226_, lean_object* v_hi_2227_, lean_object* v_n_2228_, lean_object* v_ops_2229_, lean_object* v_acc_2230_){
_start:
{
lean_object* v___x_2231_; 
v___x_2231_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___redArg(v_na_2224_, v_before_2225_, v_lo_2226_, v_hi_2227_, v_n_2228_, v_ops_2229_, v_acc_2230_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_Msg_2232_, lean_object* v_na_2233_, lean_object* v_before_2234_, lean_object* v_lo_2235_, lean_object* v_hi_2236_, lean_object* v_n_2237_, lean_object* v_ops_2238_, lean_object* v_acc_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__4(v_Msg_2232_, v_na_2233_, v_before_2234_, v_lo_2235_, v_hi_2236_, v_n_2237_, v_ops_2238_, v_acc_2239_);
lean_dec(v_hi_2236_);
lean_dec_ref(v_na_2233_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5(lean_object* v_00_u03b2_2241_, lean_object* v_m_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_m_2242_, v_a_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_2245_, lean_object* v_m_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5(v_00_u03b2_2245_, v_m_2246_, v_a_2247_);
lean_dec_ref(v_a_2247_);
lean_dec_ref(v_m_2246_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_2249_, lean_object* v_a_2250_, lean_object* v_x_2251_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___redArg(v_a_2250_, v_x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b2_2253_, lean_object* v_a_2254_, lean_object* v_x_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5_spec__6(v_00_u03b2_2253_, v_a_2254_, v_x_2255_);
lean_dec(v_x_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object* v_x_2257_, lean_object* v_x_2258_, lean_object* v_h__1_2259_, lean_object* v_h__2_2260_, lean_object* v_h__3_2261_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
lean_dec(v_h__2_2260_);
if (lean_obj_tag(v_x_2258_) == 0)
{
lean_object* v_id_2262_; lean_object* v_s_2263_; lean_object* v_s_2264_; lean_object* v___x_2265_; 
lean_dec(v_h__3_2261_);
v_id_2262_ = lean_ctor_get(v_x_2257_, 0);
lean_inc(v_id_2262_);
v_s_2263_ = lean_ctor_get(v_x_2257_, 1);
lean_inc_ref(v_s_2263_);
lean_dec_ref_known(v_x_2257_, 2);
v_s_2264_ = lean_ctor_get(v_x_2258_, 0);
lean_inc_ref(v_s_2264_);
lean_dec_ref_known(v_x_2258_, 1);
v___x_2265_ = lean_apply_3(v_h__1_2259_, v_id_2262_, v_s_2263_, v_s_2264_);
return v___x_2265_;
}
else
{
lean_object* v___x_2266_; 
lean_dec(v_h__1_2259_);
v___x_2266_ = lean_apply_4(v_h__3_2261_, v_x_2257_, v_x_2258_, lean_box(0), lean_box(0));
return v___x_2266_;
}
}
else
{
lean_dec(v_h__1_2259_);
if (lean_obj_tag(v_x_2258_) == 1)
{
lean_object* v_id_2267_; uint8_t v_ns_2268_; lean_object* v_tag_2269_; lean_object* v_key_2270_; lean_object* v_attrs_2271_; lean_object* v_children_2272_; uint8_t v_ns_2273_; lean_object* v_tag_2274_; lean_object* v_key_2275_; lean_object* v_attrs_2276_; lean_object* v_children_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec(v_h__3_2261_);
v_id_2267_ = lean_ctor_get(v_x_2257_, 0);
lean_inc(v_id_2267_);
v_ns_2268_ = lean_ctor_get_uint8(v_x_2257_, sizeof(void*)*5);
v_tag_2269_ = lean_ctor_get(v_x_2257_, 1);
lean_inc_ref(v_tag_2269_);
v_key_2270_ = lean_ctor_get(v_x_2257_, 2);
lean_inc(v_key_2270_);
v_attrs_2271_ = lean_ctor_get(v_x_2257_, 3);
lean_inc(v_attrs_2271_);
v_children_2272_ = lean_ctor_get(v_x_2257_, 4);
lean_inc(v_children_2272_);
lean_dec_ref_known(v_x_2257_, 5);
v_ns_2273_ = lean_ctor_get_uint8(v_x_2258_, sizeof(void*)*4);
v_tag_2274_ = lean_ctor_get(v_x_2258_, 0);
lean_inc_ref(v_tag_2274_);
v_key_2275_ = lean_ctor_get(v_x_2258_, 1);
lean_inc(v_key_2275_);
v_attrs_2276_ = lean_ctor_get(v_x_2258_, 2);
lean_inc(v_attrs_2276_);
v_children_2277_ = lean_ctor_get(v_x_2258_, 3);
lean_inc(v_children_2277_);
lean_dec_ref_known(v_x_2258_, 4);
v___x_2278_ = lean_box(v_ns_2268_);
v___x_2279_ = lean_box(v_ns_2273_);
v___x_2280_ = lean_apply_11(v_h__2_2260_, v_id_2267_, v___x_2278_, v_tag_2269_, v_key_2270_, v_attrs_2271_, v_children_2272_, v___x_2279_, v_tag_2274_, v_key_2275_, v_attrs_2276_, v_children_2277_);
return v___x_2280_;
}
else
{
lean_object* v___x_2281_; 
lean_dec(v_h__2_2260_);
v___x_2281_ = lean_apply_4(v_h__3_2261_, v_x_2257_, v_x_2258_, lean_box(0), lean_box(0));
return v___x_2281_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object* v_Msg_2282_, lean_object* v_motive_2283_, lean_object* v_x_2284_, lean_object* v_x_2285_, lean_object* v_h__1_2286_, lean_object* v_h__2_2287_, lean_object* v_h__3_2288_){
_start:
{
if (lean_obj_tag(v_x_2284_) == 0)
{
lean_dec(v_h__2_2287_);
if (lean_obj_tag(v_x_2285_) == 0)
{
lean_object* v_id_2289_; lean_object* v_s_2290_; lean_object* v_s_2291_; lean_object* v___x_2292_; 
lean_dec(v_h__3_2288_);
v_id_2289_ = lean_ctor_get(v_x_2284_, 0);
lean_inc(v_id_2289_);
v_s_2290_ = lean_ctor_get(v_x_2284_, 1);
lean_inc_ref(v_s_2290_);
lean_dec_ref_known(v_x_2284_, 2);
v_s_2291_ = lean_ctor_get(v_x_2285_, 0);
lean_inc_ref(v_s_2291_);
lean_dec_ref_known(v_x_2285_, 1);
v___x_2292_ = lean_apply_3(v_h__1_2286_, v_id_2289_, v_s_2290_, v_s_2291_);
return v___x_2292_;
}
else
{
lean_object* v___x_2293_; 
lean_dec(v_h__1_2286_);
v___x_2293_ = lean_apply_4(v_h__3_2288_, v_x_2284_, v_x_2285_, lean_box(0), lean_box(0));
return v___x_2293_;
}
}
else
{
lean_dec(v_h__1_2286_);
if (lean_obj_tag(v_x_2285_) == 1)
{
lean_object* v_id_2294_; uint8_t v_ns_2295_; lean_object* v_tag_2296_; lean_object* v_key_2297_; lean_object* v_attrs_2298_; lean_object* v_children_2299_; uint8_t v_ns_2300_; lean_object* v_tag_2301_; lean_object* v_key_2302_; lean_object* v_attrs_2303_; lean_object* v_children_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
lean_dec(v_h__3_2288_);
v_id_2294_ = lean_ctor_get(v_x_2284_, 0);
lean_inc(v_id_2294_);
v_ns_2295_ = lean_ctor_get_uint8(v_x_2284_, sizeof(void*)*5);
v_tag_2296_ = lean_ctor_get(v_x_2284_, 1);
lean_inc_ref(v_tag_2296_);
v_key_2297_ = lean_ctor_get(v_x_2284_, 2);
lean_inc(v_key_2297_);
v_attrs_2298_ = lean_ctor_get(v_x_2284_, 3);
lean_inc(v_attrs_2298_);
v_children_2299_ = lean_ctor_get(v_x_2284_, 4);
lean_inc(v_children_2299_);
lean_dec_ref_known(v_x_2284_, 5);
v_ns_2300_ = lean_ctor_get_uint8(v_x_2285_, sizeof(void*)*4);
v_tag_2301_ = lean_ctor_get(v_x_2285_, 0);
lean_inc_ref(v_tag_2301_);
v_key_2302_ = lean_ctor_get(v_x_2285_, 1);
lean_inc(v_key_2302_);
v_attrs_2303_ = lean_ctor_get(v_x_2285_, 2);
lean_inc(v_attrs_2303_);
v_children_2304_ = lean_ctor_get(v_x_2285_, 3);
lean_inc(v_children_2304_);
lean_dec_ref_known(v_x_2285_, 4);
v___x_2305_ = lean_box(v_ns_2295_);
v___x_2306_ = lean_box(v_ns_2300_);
v___x_2307_ = lean_apply_11(v_h__2_2287_, v_id_2294_, v___x_2305_, v_tag_2296_, v_key_2297_, v_attrs_2298_, v_children_2299_, v___x_2306_, v_tag_2301_, v_key_2302_, v_attrs_2303_, v_children_2304_);
return v___x_2307_;
}
else
{
lean_object* v___x_2308_; 
lean_dec(v_h__2_2287_);
v___x_2308_ = lean_apply_4(v_h__3_2288_, v_x_2284_, v_x_2285_, lean_box(0), lean_box(0));
return v___x_2308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(lean_object* v_before_2309_, lean_object* v_x_2310_, lean_object* v_x_2311_, lean_object* v_x_2312_, lean_object* v_x_2313_){
_start:
{
if (lean_obj_tag(v_x_2310_) == 0)
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
lean_dec(v_before_2309_);
v___x_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2314_, 0, v_x_2313_);
lean_ctor_set(v___x_2314_, 1, v_x_2311_);
v___x_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2315_, 0, v_x_2312_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
return v___x_2315_;
}
else
{
lean_object* v_head_2316_; lean_object* v_tail_2317_; lean_object* v_r_2318_; lean_object* v_fst_2319_; lean_object* v_snd_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2330_; 
v_head_2316_ = lean_ctor_get(v_x_2310_, 0);
v_tail_2317_ = lean_ctor_get(v_x_2310_, 1);
v_r_2318_ = l_Lasm_UI_create___redArg(v_head_2316_, v_x_2311_);
v_fst_2319_ = lean_ctor_get(v_r_2318_, 0);
v_snd_2320_ = lean_ctor_get(v_r_2318_, 1);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_r_2318_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2322_ = v_r_2318_;
v_isShared_2323_ = v_isSharedCheck_2330_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_snd_2320_);
lean_inc(v_fst_2319_);
lean_dec(v_r_2318_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2330_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
lean_inc(v_before_2309_);
lean_inc(v_fst_2319_);
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v_before_2309_);
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_fst_2319_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_before_2309_);
v___x_2325_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = lean_array_push(v_x_2312_, v___x_2325_);
v___x_2327_ = lean_array_push(v_x_2313_, v_fst_2319_);
v_x_2310_ = v_tail_2317_;
v_x_2311_ = v_snd_2320_;
v_x_2312_ = v___x_2326_;
v_x_2313_ = v___x_2327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_before_2331_, lean_object* v_x_2332_, lean_object* v_x_2333_, lean_object* v_x_2334_, lean_object* v_x_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v_before_2331_, v_x_2332_, v_x_2333_, v_x_2334_, v_x_2335_);
lean_dec(v_x_2332_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_na_2337_, lean_object* v_before_2338_, lean_object* v_lo_2339_, lean_object* v_hi_2340_, lean_object* v_n_2341_, lean_object* v_ops_2342_, lean_object* v_acc_2343_){
_start:
{
uint8_t v___x_2344_; 
v___x_2344_ = lean_nat_dec_lt(v_lo_2339_, v_hi_2340_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
lean_dec(v_lo_2339_);
lean_dec(v_before_2338_);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v_acc_2343_);
lean_ctor_set(v___x_2345_, 1, v_n_2341_);
v___x_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_ops_2342_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
return v___x_2346_;
}
else
{
lean_object* v___x_2347_; uint8_t v___x_2348_; 
v___x_2347_ = lean_array_get_size(v_na_2337_);
v___x_2348_ = lean_nat_dec_lt(v_lo_2339_, v___x_2347_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
lean_dec(v_lo_2339_);
lean_dec(v_before_2338_);
v___x_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2349_, 0, v_acc_2343_);
lean_ctor_set(v___x_2349_, 1, v_n_2341_);
v___x_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2350_, 0, v_ops_2342_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
return v___x_2350_;
}
else
{
lean_object* v___x_2351_; lean_object* v_r_2352_; lean_object* v_fst_2353_; lean_object* v_snd_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2366_; 
v___x_2351_ = lean_array_fget_borrowed(v_na_2337_, v_lo_2339_);
v_r_2352_ = l_Lasm_UI_create___redArg(v___x_2351_, v_n_2341_);
v_fst_2353_ = lean_ctor_get(v_r_2352_, 0);
v_snd_2354_ = lean_ctor_get(v_r_2352_, 1);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_r_2352_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2356_ = v_r_2352_;
v_isShared_2357_ = v_isSharedCheck_2366_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_snd_2354_);
lean_inc(v_fst_2353_);
lean_dec(v_r_2352_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2366_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2358_ = lean_unsigned_to_nat(1u);
v___x_2359_ = lean_nat_add(v_lo_2339_, v___x_2358_);
lean_dec(v_lo_2339_);
lean_inc(v_before_2338_);
lean_inc(v_fst_2353_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 1, v_before_2338_);
v___x_2361_ = v___x_2356_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_fst_2353_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v_before_2338_);
v___x_2361_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = lean_array_push(v_ops_2342_, v___x_2361_);
v___x_2363_ = lean_array_push(v_acc_2343_, v_fst_2353_);
v_lo_2339_ = v___x_2359_;
v_n_2341_ = v_snd_2354_;
v_ops_2342_ = v___x_2362_;
v_acc_2343_ = v___x_2363_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_na_2367_, lean_object* v_before_2368_, lean_object* v_lo_2369_, lean_object* v_hi_2370_, lean_object* v_n_2371_, lean_object* v_ops_2372_, lean_object* v_acc_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2367_, v_before_2368_, v_lo_2369_, v_hi_2370_, v_n_2371_, v_ops_2372_, v_acc_2373_);
lean_dec(v_hi_2370_);
lean_dec_ref(v_na_2367_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(lean_object* v_oa_2375_, lean_object* v_oLo_2376_, lean_object* v_oHi_2377_, lean_object* v_na_2378_, lean_object* v_nLo_2379_, lean_object* v_nHi_2380_, lean_object* v_pre_2381_, lean_object* v_suf_2382_, lean_object* v_ops_2383_, lean_object* v_next_2384_, lean_object* v_keys_2385_){
_start:
{
lean_object* v___y_2387_; lean_object* v___y_2388_; lean_object* v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2406_; lean_object* v___y_2416_; uint8_t v___x_2418_; 
v___x_2418_ = lean_nat_dec_lt(v_oLo_2376_, v_oHi_2377_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; 
lean_dec(v_keys_2385_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
v___x_2419_ = l_List_head_x3f___redArg(v_suf_2382_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v___x_2420_; 
v___x_2420_ = lean_box(0);
v___y_2406_ = v___x_2420_;
goto v___jp_2405_;
}
else
{
lean_object* v_val_2421_; lean_object* v_id_2422_; 
v_val_2421_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_val_2421_);
lean_dec_ref_known(v___x_2419_, 1);
v_id_2422_ = lean_ctor_get(v_val_2421_, 0);
lean_inc(v_id_2422_);
lean_dec(v_val_2421_);
v___y_2416_ = v_id_2422_;
goto v___jp_2415_;
}
}
else
{
uint8_t v___x_2423_; 
v___x_2423_ = lean_nat_dec_lt(v_nLo_2379_, v_nHi_2380_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
v___x_2424_ = l_Lasm_UI_removeRange___redArg(v_oa_2375_, v_oLo_2376_, v_oHi_2377_, v_ops_2383_);
lean_dec(v_oHi_2377_);
lean_dec_ref(v_oa_2375_);
v___x_2425_ = lean_array_to_list(v_pre_2381_);
v___x_2426_ = l_List_appendTR___redArg(v___x_2425_, v_suf_2382_);
v___x_2427_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2424_);
lean_ctor_set(v___x_2427_, 1, v___x_2426_);
lean_ctor_set(v___x_2427_, 2, v_next_2384_);
return v___x_2427_;
}
else
{
lean_object* v___x_2428_; uint8_t v___x_2429_; 
v___x_2428_ = lean_array_get_size(v_oa_2375_);
v___x_2429_ = lean_nat_dec_lt(v_oLo_2376_, v___x_2428_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2430_ = lean_unsigned_to_nat(1u);
v___x_2431_ = lean_nat_sub(v_oHi_2377_, v___x_2430_);
v___x_2432_ = lean_nat_dec_lt(v___x_2431_, v___x_2428_);
if (v___x_2432_ == 0)
{
lean_dec(v___x_2431_);
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
goto v___jp_2397_;
}
else
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_array_fget_borrowed(v_oa_2375_, v___x_2431_);
lean_dec(v___x_2431_);
if (lean_obj_tag(v___x_2433_) == 0)
{
goto v___jp_2401_;
}
else
{
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
goto v___jp_2397_;
}
}
}
else
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_array_fget(v_oa_2375_, v_oLo_2376_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = lean_unsigned_to_nat(1u);
v___x_2436_ = lean_nat_add(v_oLo_2376_, v___x_2435_);
lean_dec(v_oLo_2376_);
v_oLo_2376_ = v___x_2436_;
goto _start;
}
else
{
lean_object* v_val_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2615_; 
v_val_2438_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2440_ = v___x_2434_;
v_isShared_2441_ = v_isSharedCheck_2615_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_val_2438_);
lean_dec(v___x_2434_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2615_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2442_ = lean_unsigned_to_nat(1u);
v___x_2469_ = lean_nat_sub(v_oHi_2377_, v___x_2442_);
v___x_2470_ = lean_nat_dec_lt(v___x_2469_, v___x_2428_);
if (v___x_2470_ == 0)
{
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_dec(v_val_2438_);
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
goto v___jp_2397_;
}
else
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_array_fget(v_oa_2375_, v___x_2469_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_dec(v_val_2438_);
goto v___jp_2401_;
}
else
{
lean_object* v_val_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2614_; 
v_val_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2614_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_val_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2614_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2476_ = lean_array_get_size(v_na_2378_);
v___x_2477_ = lean_nat_dec_lt(v_nLo_2379_, v___x_2476_);
if (v___x_2477_ == 0)
{
lean_del_object(v___x_2474_);
lean_dec(v_val_2472_);
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_dec(v_val_2438_);
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
goto v___jp_2397_;
}
else
{
lean_object* v___x_2478_; uint8_t v___x_2479_; 
v___x_2478_ = lean_nat_sub(v_nHi_2380_, v___x_2442_);
v___x_2479_ = lean_nat_dec_lt(v___x_2478_, v___x_2476_);
if (v___x_2479_ == 0)
{
lean_dec(v___x_2478_);
lean_del_object(v___x_2474_);
lean_dec(v_val_2472_);
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_dec(v_val_2438_);
lean_dec(v_keys_2385_);
lean_dec(v_nHi_2380_);
lean_dec(v_nLo_2379_);
lean_dec(v_oHi_2377_);
lean_dec(v_oLo_2376_);
lean_dec_ref(v_oa_2375_);
goto v___jp_2397_;
}
else
{
lean_object* v___x_2480_; lean_object* v_fst_2482_; lean_object* v_fst_2490_; lean_object* v_fst_2491_; lean_object* v_snd_2492_; lean_object* v___y_2500_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; uint8_t v___y_2511_; uint8_t v___x_2532_; 
v___x_2480_ = lean_array_fget_borrowed(v_na_2378_, v_nLo_2379_);
v___x_2532_ = l_Lasm_UI_Live_same___redArg(v_val_2438_, v___x_2480_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2533_ = lean_array_fget_borrowed(v_na_2378_, v___x_2478_);
v___x_2534_ = l_Lasm_UI_Live_same___redArg(v_val_2472_, v___x_2533_);
if (v___x_2534_ == 0)
{
uint8_t v___x_2535_; 
v___x_2535_ = l_Lasm_UI_Live_same___redArg(v_val_2438_, v___x_2533_);
if (v___x_2535_ == 0)
{
uint8_t v___x_2536_; 
lean_dec(v___x_2478_);
v___x_2536_ = l_Lasm_UI_Live_same___redArg(v_val_2472_, v___x_2480_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2537_; 
lean_dec(v_val_2472_);
lean_dec(v___x_2469_);
v___x_2537_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_2480_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_del_object(v___x_2474_);
lean_del_object(v___x_2440_);
v_fst_2482_ = v_keys_2385_;
goto v___jp_2481_;
}
else
{
lean_object* v_val_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2555_; 
v_val_2538_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2540_ = v___x_2537_;
v_isShared_2541_ = v_isSharedCheck_2555_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_val_2538_);
lean_dec(v___x_2537_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2555_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___y_2543_; 
if (lean_obj_tag(v_keys_2385_) == 0)
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__3, &l_Lasm_UI_twoEnded___redArg___closed__3_once, _init_l_Lasm_UI_twoEnded___redArg___closed__3);
lean_inc(v_oLo_2376_);
v___x_2553_ = l_Lasm_UI_keyIndex___redArg(v_oa_2375_, v_oLo_2376_, v_oHi_2377_, v___x_2552_);
v___y_2543_ = v___x_2553_;
goto v___jp_2542_;
}
else
{
lean_object* v_val_2554_; 
v_val_2554_ = lean_ctor_get(v_keys_2385_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v_keys_2385_, 1);
v___y_2543_ = v_val_2554_;
goto v___jp_2542_;
}
v___jp_2542_:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v___y_2543_, v_val_2538_);
lean_dec(v_val_2538_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v___x_2546_; 
lean_del_object(v___x_2474_);
lean_del_object(v___x_2440_);
if (v_isShared_2541_ == 0)
{
lean_ctor_set(v___x_2540_, 0, v___y_2543_);
v___x_2546_ = v___x_2540_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___y_2543_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
v_fst_2482_ = v___x_2546_;
goto v___jp_2481_;
}
}
else
{
lean_object* v_val_2548_; lean_object* v___f_2549_; uint8_t v___x_2550_; 
lean_del_object(v___x_2540_);
v_val_2548_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_val_2548_);
lean_dec_ref_known(v___x_2544_, 1);
lean_inc_ref(v___y_2543_);
v___f_2549_ = lean_alloc_closure((void*)(l_Lasm_UI_twoEnded___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2549_, 0, v___y_2543_);
v___x_2550_ = lean_nat_dec_le(v_oLo_2376_, v_val_2548_);
if (v___x_2550_ == 0)
{
v___y_2508_ = v___y_2543_;
v___y_2509_ = v___f_2549_;
v___y_2510_ = v_val_2548_;
v___y_2511_ = v___x_2536_;
goto v___jp_2507_;
}
else
{
uint8_t v___x_2551_; 
v___x_2551_ = lean_nat_dec_lt(v_val_2548_, v_oHi_2377_);
v___y_2508_ = v___y_2543_;
v___y_2509_ = v___f_2549_;
v___y_2510_ = v_val_2548_;
v___y_2511_ = v___x_2551_;
goto v___jp_2507_;
}
}
}
}
}
}
else
{
lean_object* v_r_2556_; lean_object* v_ops_2557_; lean_object* v_live_2558_; lean_object* v_next_2559_; lean_object* v___x_2560_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2571_; lean_object* v_id_2573_; 
lean_del_object(v___x_2474_);
lean_del_object(v___x_2440_);
lean_dec(v_oHi_2377_);
lean_inc(v___x_2480_);
lean_inc(v_val_2472_);
v_r_2556_ = l_Lasm_UI_diffNode___redArg(v_val_2472_, v___x_2480_, v_next_2384_);
v_ops_2557_ = lean_ctor_get(v_r_2556_, 0);
lean_inc(v_ops_2557_);
v_live_2558_ = lean_ctor_get(v_r_2556_, 1);
lean_inc_ref(v_live_2558_);
v_next_2559_ = lean_ctor_get(v_r_2556_, 2);
lean_inc(v_next_2559_);
lean_dec_ref(v_r_2556_);
v___x_2560_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2383_, v_ops_2557_);
v_id_2573_ = lean_ctor_get(v_val_2472_, 0);
lean_inc(v_id_2573_);
lean_dec(v_val_2472_);
v___y_2571_ = v_id_2573_;
goto v___jp_2570_;
v___jp_2561_:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v_ops_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___y_2563_);
v___x_2565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2565_, 0, v___y_2562_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v_ops_2566_ = lean_array_push(v___x_2560_, v___x_2565_);
v___x_2567_ = lean_nat_add(v_nLo_2379_, v___x_2442_);
lean_dec(v_nLo_2379_);
v___x_2568_ = lean_array_push(v_pre_2381_, v_live_2558_);
v_oHi_2377_ = v___x_2469_;
v_nLo_2379_ = v___x_2567_;
v_pre_2381_ = v___x_2568_;
v_ops_2383_ = v_ops_2566_;
v_next_2384_ = v_next_2559_;
goto _start;
}
v___jp_2570_:
{
lean_object* v_id_2572_; 
v_id_2572_ = lean_ctor_get(v_val_2438_, 0);
lean_inc(v_id_2572_);
lean_dec(v_val_2438_);
v___y_2562_ = v___y_2571_;
v___y_2563_ = v_id_2572_;
goto v___jp_2561_;
}
}
}
else
{
lean_object* v_r_2574_; lean_object* v_ops_2575_; lean_object* v_live_2576_; lean_object* v_next_2577_; lean_object* v___x_2578_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2592_; lean_object* v_id_2597_; 
lean_del_object(v___x_2474_);
lean_dec(v_val_2472_);
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_dec(v_nHi_2380_);
lean_inc(v___x_2533_);
lean_inc(v_val_2438_);
v_r_2574_ = l_Lasm_UI_diffNode___redArg(v_val_2438_, v___x_2533_, v_next_2384_);
v_ops_2575_ = lean_ctor_get(v_r_2574_, 0);
lean_inc(v_ops_2575_);
v_live_2576_ = lean_ctor_get(v_r_2574_, 1);
lean_inc_ref(v_live_2576_);
v_next_2577_ = lean_ctor_get(v_r_2574_, 2);
lean_inc(v_next_2577_);
lean_dec_ref(v_r_2574_);
v___x_2578_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2383_, v_ops_2575_);
v_id_2597_ = lean_ctor_get(v_val_2438_, 0);
lean_inc(v_id_2597_);
lean_dec(v_val_2438_);
v___y_2592_ = v_id_2597_;
goto v___jp_2591_;
v___jp_2579_:
{
lean_object* v___x_2582_; lean_object* v_ops_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___y_2580_);
lean_ctor_set(v___x_2582_, 1, v___y_2581_);
v_ops_2583_ = lean_array_push(v___x_2578_, v___x_2582_);
v___x_2584_ = lean_nat_add(v_oLo_2376_, v___x_2442_);
lean_dec(v_oLo_2376_);
v___x_2585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2585_, 0, v_live_2576_);
lean_ctor_set(v___x_2585_, 1, v_suf_2382_);
v_oLo_2376_ = v___x_2584_;
v_nHi_2380_ = v___x_2478_;
v_suf_2382_ = v___x_2585_;
v_ops_2383_ = v_ops_2583_;
v_next_2384_ = v_next_2577_;
goto _start;
}
v___jp_2587_:
{
lean_object* v___x_2590_; 
v___x_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2590_, 0, v___y_2589_);
v___y_2580_ = v___y_2588_;
v___y_2581_ = v___x_2590_;
goto v___jp_2579_;
}
v___jp_2591_:
{
lean_object* v___x_2593_; 
v___x_2593_ = l_List_head_x3f___redArg(v_suf_2382_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v___x_2594_; 
v___x_2594_ = lean_box(0);
v___y_2580_ = v___y_2592_;
v___y_2581_ = v___x_2594_;
goto v___jp_2579_;
}
else
{
lean_object* v_val_2595_; lean_object* v_id_2596_; 
v_val_2595_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_val_2595_);
lean_dec_ref_known(v___x_2593_, 1);
v_id_2596_ = lean_ctor_get(v_val_2595_, 0);
lean_inc(v_id_2596_);
lean_dec(v_val_2595_);
v___y_2588_ = v___y_2592_;
v___y_2589_ = v_id_2596_;
goto v___jp_2587_;
}
}
}
}
else
{
lean_object* v_r_2598_; lean_object* v_ops_2599_; lean_object* v_live_2600_; lean_object* v_next_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
lean_del_object(v___x_2474_);
lean_del_object(v___x_2440_);
lean_dec(v_val_2438_);
lean_dec(v_nHi_2380_);
lean_dec(v_oHi_2377_);
lean_inc(v___x_2533_);
v_r_2598_ = l_Lasm_UI_diffNode___redArg(v_val_2472_, v___x_2533_, v_next_2384_);
v_ops_2599_ = lean_ctor_get(v_r_2598_, 0);
lean_inc(v_ops_2599_);
v_live_2600_ = lean_ctor_get(v_r_2598_, 1);
lean_inc_ref(v_live_2600_);
v_next_2601_ = lean_ctor_get(v_r_2598_, 2);
lean_inc(v_next_2601_);
lean_dec_ref(v_r_2598_);
v___x_2602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2602_, 0, v_live_2600_);
lean_ctor_set(v___x_2602_, 1, v_suf_2382_);
v___x_2603_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2383_, v_ops_2599_);
v_oHi_2377_ = v___x_2469_;
v_nHi_2380_ = v___x_2478_;
v_suf_2382_ = v___x_2602_;
v_ops_2383_ = v___x_2603_;
v_next_2384_ = v_next_2601_;
goto _start;
}
}
else
{
lean_object* v_r_2605_; lean_object* v_ops_2606_; lean_object* v_live_2607_; lean_object* v_next_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec(v___x_2478_);
lean_del_object(v___x_2474_);
lean_dec(v_val_2472_);
lean_dec(v___x_2469_);
lean_del_object(v___x_2440_);
lean_inc(v___x_2480_);
v_r_2605_ = l_Lasm_UI_diffNode___redArg(v_val_2438_, v___x_2480_, v_next_2384_);
v_ops_2606_ = lean_ctor_get(v_r_2605_, 0);
lean_inc(v_ops_2606_);
v_live_2607_ = lean_ctor_get(v_r_2605_, 1);
lean_inc_ref(v_live_2607_);
v_next_2608_ = lean_ctor_get(v_r_2605_, 2);
lean_inc(v_next_2608_);
lean_dec_ref(v_r_2605_);
v___x_2609_ = lean_nat_add(v_oLo_2376_, v___x_2442_);
lean_dec(v_oLo_2376_);
v___x_2610_ = lean_nat_add(v_nLo_2379_, v___x_2442_);
lean_dec(v_nLo_2379_);
v___x_2611_ = lean_array_push(v_pre_2381_, v_live_2607_);
v___x_2612_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2383_, v_ops_2606_);
v_oLo_2376_ = v___x_2609_;
v_nLo_2379_ = v___x_2610_;
v_pre_2381_ = v___x_2611_;
v_ops_2383_ = v___x_2612_;
v_next_2384_ = v_next_2608_;
goto _start;
}
v___jp_2481_:
{
lean_object* v_c_2483_; lean_object* v_fst_2484_; lean_object* v_snd_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v_id_2488_; 
v_c_2483_ = l_Lasm_UI_create___redArg(v___x_2480_, v_next_2384_);
v_fst_2484_ = lean_ctor_get(v_c_2483_, 0);
lean_inc_n(v_fst_2484_, 2);
v_snd_2485_ = lean_ctor_get(v_c_2483_, 1);
lean_inc(v_snd_2485_);
lean_dec_ref(v_c_2483_);
v___x_2486_ = lean_nat_add(v_nLo_2379_, v___x_2442_);
lean_dec(v_nLo_2379_);
v___x_2487_ = lean_array_push(v_pre_2381_, v_fst_2484_);
v_id_2488_ = lean_ctor_get(v_val_2438_, 0);
lean_inc(v_id_2488_);
lean_dec(v_val_2438_);
v___y_2387_ = v___x_2486_;
v___y_2388_ = v_snd_2485_;
v___y_2389_ = v_fst_2482_;
v___y_2390_ = v_fst_2484_;
v___y_2391_ = v___x_2487_;
v___y_2392_ = v_id_2488_;
goto v___jp_2386_;
}
v___jp_2489_:
{
lean_object* v_r_2493_; lean_object* v_ops_2494_; lean_object* v_live_2495_; lean_object* v_next_2496_; lean_object* v___x_2497_; lean_object* v_id_2498_; 
lean_inc(v___x_2480_);
lean_inc_ref(v_snd_2492_);
v_r_2493_ = l_Lasm_UI_diffNode___redArg(v_snd_2492_, v___x_2480_, v_next_2384_);
v_ops_2494_ = lean_ctor_get(v_r_2493_, 0);
lean_inc(v_ops_2494_);
v_live_2495_ = lean_ctor_get(v_r_2493_, 1);
lean_inc_ref(v_live_2495_);
v_next_2496_ = lean_ctor_get(v_r_2493_, 2);
lean_inc(v_next_2496_);
lean_dec_ref(v_r_2493_);
v___x_2497_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_2383_, v_ops_2494_);
v_id_2498_ = lean_ctor_get(v_snd_2492_, 0);
lean_inc(v_id_2498_);
lean_dec_ref(v_snd_2492_);
v___y_2462_ = v_fst_2491_;
v___y_2463_ = v___x_2497_;
v___y_2464_ = v_next_2496_;
v___y_2465_ = v_fst_2490_;
v___y_2466_ = v_live_2495_;
v___y_2467_ = v_id_2498_;
goto v___jp_2461_;
}
v___jp_2499_:
{
lean_object* v_snd_2501_; 
v_snd_2501_ = lean_ctor_get(v___y_2500_, 1);
if (lean_obj_tag(v_snd_2501_) == 0)
{
lean_object* v_fst_2502_; 
lean_del_object(v___x_2440_);
v_fst_2502_ = lean_ctor_get(v___y_2500_, 0);
lean_inc(v_fst_2502_);
lean_dec_ref(v___y_2500_);
v_fst_2482_ = v_fst_2502_;
goto v___jp_2481_;
}
else
{
lean_object* v_val_2503_; lean_object* v_fst_2504_; lean_object* v_fst_2505_; lean_object* v_snd_2506_; 
v_val_2503_ = lean_ctor_get(v_snd_2501_, 0);
lean_inc(v_val_2503_);
v_fst_2504_ = lean_ctor_get(v___y_2500_, 0);
lean_inc(v_fst_2504_);
lean_dec_ref(v___y_2500_);
v_fst_2505_ = lean_ctor_get(v_val_2503_, 0);
lean_inc(v_fst_2505_);
v_snd_2506_ = lean_ctor_get(v_val_2503_, 1);
lean_inc(v_snd_2506_);
lean_dec(v_val_2503_);
v_fst_2490_ = v_fst_2504_;
v_fst_2491_ = v_fst_2505_;
v_snd_2492_ = v_snd_2506_;
goto v___jp_2489_;
}
}
v___jp_2507_:
{
if (v___y_2511_ == 0)
{
lean_object* v___x_2513_; 
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_del_object(v___x_2440_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 0, v___y_2508_);
v___x_2513_ = v___x_2474_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___y_2508_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
v_fst_2482_ = v___x_2513_;
goto v___jp_2481_;
}
}
else
{
uint8_t v___x_2515_; 
v___x_2515_ = lean_nat_dec_lt(v___y_2510_, v___x_2428_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2508_);
lean_del_object(v___x_2474_);
v___x_2516_ = lean_box(0);
v___x_2517_ = lean_apply_1(v___y_2509_, v___x_2516_);
v___y_2500_ = v___x_2517_;
goto v___jp_2499_;
}
else
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_array_fget(v_oa_2375_, v___y_2510_);
if (lean_obj_tag(v___x_2518_) == 1)
{
lean_object* v_val_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v___y_2509_);
lean_del_object(v___x_2474_);
v_val_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_val_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___y_2508_);
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___y_2508_);
v___x_2524_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
uint8_t v___x_2525_; 
v___x_2525_ = l_Lasm_UI_Live_same___redArg(v_val_2519_, v___x_2480_);
if (v___x_2525_ == 0)
{
lean_dec(v_val_2519_);
lean_dec(v___y_2510_);
lean_del_object(v___x_2440_);
v_fst_2482_ = v___x_2524_;
goto v___jp_2481_;
}
else
{
v_fst_2490_ = v___x_2524_;
v_fst_2491_ = v___y_2510_;
v_snd_2492_ = v_val_2519_;
goto v___jp_2489_;
}
}
}
}
else
{
lean_object* v___x_2529_; 
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2508_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 0, v___x_2518_);
v___x_2529_ = v___x_2474_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2518_);
v___x_2529_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_apply_1(v___y_2509_, v___x_2529_);
v___y_2500_ = v___x_2530_;
goto v___jp_2499_;
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
v___jp_2443_:
{
lean_object* v___x_2452_; 
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___y_2450_);
v___x_2452_ = v___x_2440_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___y_2450_);
v___x_2452_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2453_; lean_object* v_ops_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___y_2449_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v_ops_2454_ = lean_array_push(v___y_2447_, v___x_2453_);
v___x_2455_ = lean_box(0);
v___x_2456_ = lean_array_set(v_oa_2375_, v___y_2444_, v___x_2455_);
lean_dec(v___y_2444_);
v___x_2457_ = lean_nat_add(v_nLo_2379_, v___x_2442_);
lean_dec(v_nLo_2379_);
v___x_2458_ = lean_array_push(v_pre_2381_, v___y_2448_);
v_oa_2375_ = v___x_2456_;
v_nLo_2379_ = v___x_2457_;
v_pre_2381_ = v___x_2458_;
v_ops_2383_ = v_ops_2454_;
v_next_2384_ = v___y_2446_;
v_keys_2385_ = v___y_2445_;
goto _start;
}
}
v___jp_2461_:
{
lean_object* v_id_2468_; 
v_id_2468_ = lean_ctor_get(v_val_2438_, 0);
lean_inc(v_id_2468_);
lean_dec(v_val_2438_);
v___y_2444_ = v___y_2462_;
v___y_2445_ = v___y_2465_;
v___y_2446_ = v___y_2464_;
v___y_2447_ = v___y_2463_;
v___y_2448_ = v___y_2466_;
v___y_2449_ = v___y_2467_;
v___y_2450_ = v_id_2468_;
goto v___jp_2443_;
}
}
}
}
}
}
v___jp_2386_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2393_, 0, v___y_2392_);
v___x_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___y_2390_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = lean_array_push(v_ops_2383_, v___x_2394_);
v_nLo_2379_ = v___y_2387_;
v_pre_2381_ = v___y_2391_;
v_ops_2383_ = v___x_2395_;
v_next_2384_ = v___y_2388_;
v_keys_2385_ = v___y_2389_;
goto _start;
}
v___jp_2397_:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2398_ = lean_array_to_list(v_pre_2381_);
v___x_2399_ = l_List_appendTR___redArg(v___x_2398_, v_suf_2382_);
v___x_2400_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2400_, 0, v_ops_2383_);
lean_ctor_set(v___x_2400_, 1, v___x_2399_);
lean_ctor_set(v___x_2400_, 2, v_next_2384_);
return v___x_2400_;
}
v___jp_2401_:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = lean_unsigned_to_nat(1u);
v___x_2403_ = lean_nat_sub(v_oHi_2377_, v___x_2402_);
lean_dec(v_oHi_2377_);
v_oHi_2377_ = v___x_2403_;
goto _start;
}
v___jp_2405_:
{
lean_object* v_r_2407_; lean_object* v_snd_2408_; lean_object* v_fst_2409_; lean_object* v_fst_2410_; lean_object* v_snd_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v_r_2407_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2378_, v___y_2406_, v_nLo_2379_, v_nHi_2380_, v_next_2384_, v_ops_2383_, v_pre_2381_);
lean_dec(v_nHi_2380_);
v_snd_2408_ = lean_ctor_get(v_r_2407_, 1);
lean_inc(v_snd_2408_);
v_fst_2409_ = lean_ctor_get(v_r_2407_, 0);
lean_inc(v_fst_2409_);
lean_dec_ref(v_r_2407_);
v_fst_2410_ = lean_ctor_get(v_snd_2408_, 0);
lean_inc(v_fst_2410_);
v_snd_2411_ = lean_ctor_get(v_snd_2408_, 1);
lean_inc(v_snd_2411_);
lean_dec(v_snd_2408_);
v___x_2412_ = lean_array_to_list(v_fst_2410_);
v___x_2413_ = l_List_appendTR___redArg(v___x_2412_, v_suf_2382_);
v___x_2414_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2414_, 0, v_fst_2409_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
lean_ctor_set(v___x_2414_, 2, v_snd_2411_);
return v___x_2414_;
}
v___jp_2415_:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2417_, 0, v___y_2416_);
v___y_2406_ = v___x_2417_;
goto v___jp_2405_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_oa_2616_, lean_object* v_oLo_2617_, lean_object* v_oHi_2618_, lean_object* v_na_2619_, lean_object* v_nLo_2620_, lean_object* v_nHi_2621_, lean_object* v_pre_2622_, lean_object* v_suf_2623_, lean_object* v_ops_2624_, lean_object* v_next_2625_, lean_object* v_keys_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2616_, v_oLo_2617_, v_oHi_2618_, v_na_2619_, v_nLo_2620_, v_nHi_2621_, v_pre_2622_, v_suf_2623_, v_ops_2624_, v_next_2625_, v_keys_2626_);
lean_dec_ref(v_na_2619_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(lean_object* v_x_2628_, lean_object* v_x_2629_, lean_object* v_x_2630_, lean_object* v_x_2631_, lean_object* v_x_2632_){
_start:
{
if (lean_obj_tag(v_x_2628_) == 0)
{
lean_object* v___x_2633_; lean_object* v_r_2634_; lean_object* v_snd_2635_; lean_object* v_fst_2636_; lean_object* v_fst_2637_; lean_object* v_snd_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2633_ = lean_box(0);
v_r_2634_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v___x_2633_, v_x_2629_, v_x_2630_, v_x_2631_, v_x_2632_);
lean_dec(v_x_2629_);
v_snd_2635_ = lean_ctor_get(v_r_2634_, 1);
lean_inc(v_snd_2635_);
v_fst_2636_ = lean_ctor_get(v_r_2634_, 0);
lean_inc(v_fst_2636_);
lean_dec_ref(v_r_2634_);
v_fst_2637_ = lean_ctor_get(v_snd_2635_, 0);
lean_inc(v_fst_2637_);
v_snd_2638_ = lean_ctor_get(v_snd_2635_, 1);
lean_inc(v_snd_2638_);
lean_dec(v_snd_2635_);
v___x_2639_ = lean_array_to_list(v_fst_2637_);
v___x_2640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2640_, 0, v_fst_2636_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
lean_ctor_set(v___x_2640_, 2, v_snd_2638_);
return v___x_2640_;
}
else
{
if (lean_obj_tag(v_x_2629_) == 0)
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = l_Lasm_UI_removeAll___redArg(v_x_2628_, v_x_2631_);
v___x_2642_ = lean_array_to_list(v_x_2632_);
v___x_2643_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
lean_ctor_set(v___x_2643_, 2, v_x_2630_);
return v___x_2643_;
}
else
{
lean_object* v_head_2644_; lean_object* v_tail_2645_; lean_object* v_head_2646_; lean_object* v_tail_2647_; uint8_t v___x_2648_; 
v_head_2644_ = lean_ctor_get(v_x_2628_, 0);
v_tail_2645_ = lean_ctor_get(v_x_2628_, 1);
v_head_2646_ = lean_ctor_get(v_x_2629_, 0);
v_tail_2647_ = lean_ctor_get(v_x_2629_, 1);
v___x_2648_ = l_Lasm_UI_Live_same___redArg(v_head_2644_, v_head_2646_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v_oa_2651_; lean_object* v_na_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2649_ = lean_box(0);
v___x_2650_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__2___redArg(v_x_2628_, v___x_2649_);
v_oa_2651_ = lean_array_mk(v___x_2650_);
v_na_2652_ = lean_array_mk(v_x_2629_);
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = lean_array_get_size(v_oa_2651_);
v___x_2655_ = lean_array_get_size(v_na_2652_);
v___x_2656_ = lean_box(0);
v___x_2657_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2651_, v___x_2653_, v___x_2654_, v_na_2652_, v___x_2653_, v___x_2655_, v_x_2632_, v___x_2649_, v_x_2631_, v_x_2630_, v___x_2656_);
lean_dec_ref(v_na_2652_);
return v___x_2657_;
}
else
{
lean_object* v_r_2658_; lean_object* v_ops_2659_; lean_object* v_live_2660_; lean_object* v_next_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_inc(v_tail_2647_);
lean_inc(v_head_2646_);
lean_inc(v_tail_2645_);
lean_inc(v_head_2644_);
lean_dec_ref_known(v_x_2629_, 2);
lean_dec_ref_known(v_x_2628_, 2);
v_r_2658_ = l_Lasm_UI_diffNode___redArg(v_head_2644_, v_head_2646_, v_x_2630_);
v_ops_2659_ = lean_ctor_get(v_r_2658_, 0);
lean_inc(v_ops_2659_);
v_live_2660_ = lean_ctor_get(v_r_2658_, 1);
lean_inc_ref(v_live_2660_);
v_next_2661_ = lean_ctor_get(v_r_2658_, 2);
lean_inc(v_next_2661_);
lean_dec_ref(v_r_2658_);
v___x_2662_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_2631_, v_ops_2659_);
v___x_2663_ = lean_array_push(v_x_2632_, v_live_2660_);
v_x_2628_ = v_tail_2645_;
v_x_2629_ = v_tail_2647_;
v_x_2630_ = v_next_2661_;
v_x_2631_ = v___x_2662_;
v_x_2632_ = v___x_2663_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(lean_object* v_old_2665_, lean_object* v_new_2666_, lean_object* v_next_2667_){
_start:
{
lean_object* v_old_2669_; lean_object* v_new_2670_; 
if (lean_obj_tag(v_old_2665_) == 0)
{
if (lean_obj_tag(v_new_2666_) == 0)
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2675_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2676_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v_old_2665_);
lean_ctor_set(v___x_2676_, 2, v_next_2667_);
return v___x_2676_;
}
else
{
v_old_2669_ = v_old_2665_;
v_new_2670_ = v_new_2666_;
goto v___jp_2668_;
}
}
else
{
if (lean_obj_tag(v_new_2666_) == 0)
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
lean_dec_ref_known(v_old_2665_, 2);
v___x_2677_ = lean_unsigned_to_nat(1u);
v___x_2678_ = lean_mk_empty_array_with_capacity(v___x_2677_);
lean_dec_ref(v___x_2678_);
v___x_2679_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_2680_ = lean_box(0);
v___x_2681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
lean_ctor_set(v___x_2681_, 2, v_next_2667_);
return v___x_2681_;
}
else
{
v_old_2669_ = v_old_2665_;
v_new_2670_ = v_new_2666_;
goto v___jp_2668_;
}
}
v___jp_2668_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2671_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_2672_ = l_List_lengthTR___redArg(v_new_2670_);
v___x_2673_ = lean_mk_empty_array_with_capacity(v___x_2672_);
lean_dec(v___x_2672_);
v___x_2674_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(v_old_2669_, v_new_2670_, v_next_2667_, v___x_2671_, v___x_2673_);
return v___x_2674_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object* v_old_2682_, lean_object* v_new_2683_, lean_object* v_next_2684_){
_start:
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2682_, v_new_2683_, v_next_2684_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object* v_Msg_2686_, lean_object* v_old_2687_, lean_object* v_new_2688_, lean_object* v_next_2689_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2687_, v_new_2688_, v_next_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0(lean_object* v_Msg_2691_, lean_object* v_old_2692_, lean_object* v_new_2693_, lean_object* v_next_2694_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v_old_2692_, v_new_2693_, v_next_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0(lean_object* v_Msg_2696_, lean_object* v_x_2697_, lean_object* v_x_2698_, lean_object* v_x_2699_, lean_object* v_x_2700_, lean_object* v_x_2701_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0___redArg(v_x_2697_, v_x_2698_, v_x_2699_, v_x_2700_, v_x_2701_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1(lean_object* v_Msg_2703_, lean_object* v_before_2704_, lean_object* v_x_2705_, lean_object* v_x_2706_, lean_object* v_x_2707_, lean_object* v_x_2708_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___redArg(v_before_2704_, v_x_2705_, v_x_2706_, v_x_2707_, v_x_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1___boxed(lean_object* v_Msg_2710_, lean_object* v_before_2711_, lean_object* v_x_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_, lean_object* v_x_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_Lasm_UI_insertAll___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__1(v_Msg_2710_, v_before_2711_, v_x_2712_, v_x_2713_, v_x_2714_, v_x_2715_);
lean_dec(v_x_2712_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2(lean_object* v_Msg_2717_, lean_object* v_oa_2718_, lean_object* v_oLo_2719_, lean_object* v_oHi_2720_, lean_object* v_na_2721_, lean_object* v_nLo_2722_, lean_object* v_nHi_2723_, lean_object* v_pre_2724_, lean_object* v_suf_2725_, lean_object* v_ops_2726_, lean_object* v_next_2727_, lean_object* v_keys_2728_){
_start:
{
lean_object* v___x_2729_; 
v___x_2729_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___redArg(v_oa_2718_, v_oLo_2719_, v_oHi_2720_, v_na_2721_, v_nLo_2722_, v_nHi_2723_, v_pre_2724_, v_suf_2725_, v_ops_2726_, v_next_2727_, v_keys_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2___boxed(lean_object* v_Msg_2730_, lean_object* v_oa_2731_, lean_object* v_oLo_2732_, lean_object* v_oHi_2733_, lean_object* v_na_2734_, lean_object* v_nLo_2735_, lean_object* v_nHi_2736_, lean_object* v_pre_2737_, lean_object* v_suf_2738_, lean_object* v_ops_2739_, lean_object* v_next_2740_, lean_object* v_keys_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2(v_Msg_2730_, v_oa_2731_, v_oLo_2732_, v_oHi_2733_, v_na_2734_, v_nLo_2735_, v_nHi_2736_, v_pre_2737_, v_suf_2738_, v_ops_2739_, v_next_2740_, v_keys_2741_);
lean_dec_ref(v_na_2734_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3(lean_object* v_Msg_2743_, lean_object* v_na_2744_, lean_object* v_before_2745_, lean_object* v_lo_2746_, lean_object* v_hi_2747_, lean_object* v_n_2748_, lean_object* v_ops_2749_, lean_object* v_acc_2750_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___redArg(v_na_2744_, v_before_2745_, v_lo_2746_, v_hi_2747_, v_n_2748_, v_ops_2749_, v_acc_2750_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_Msg_2752_, lean_object* v_na_2753_, lean_object* v_before_2754_, lean_object* v_lo_2755_, lean_object* v_hi_2756_, lean_object* v_n_2757_, lean_object* v_ops_2758_, lean_object* v_acc_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l_Lasm_UI_insertRange___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0_spec__0_spec__2_spec__3(v_Msg_2752_, v_na_2753_, v_before_2754_, v_lo_2755_, v_hi_2756_, v_n_2757_, v_ops_2758_, v_acc_2759_);
lean_dec(v_hi_2756_);
lean_dec_ref(v_na_2753_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps___redArg(lean_object* v_new_2761_, lean_object* v_next_2762_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_box(0);
v___x_2764_ = l_Lasm_UI_diffChildren___at___00Lasm_UI_diff_spec__0___redArg(v___x_2763_, v_new_2761_, v_next_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps(lean_object* v_Msg_2765_, lean_object* v_new_2766_, lean_object* v_next_2767_){
_start:
{
lean_object* v___x_2768_; 
v___x_2768_ = l_Lasm_UI_mountOps___redArg(v_new_2766_, v_next_2767_);
return v___x_2768_;
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
