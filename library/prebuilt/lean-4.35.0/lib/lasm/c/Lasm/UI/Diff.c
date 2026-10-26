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
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Ns_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Attr_val___redArg(lean_object*);
uint8_t l_Lasm_UI_instDecidableEqAttrVal_decEq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
extern lean_object* l_Lasm_UI_instInhabitedAttrVal_default;
extern lean_object* l_Lasm_UI_instInhabitedAttrKey_default;
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__0;
static lean_once_cell_t l_Lasm_UI_twoEnded___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_twoEnded___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_diffChildren___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_diffChildren___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_diffChildren___redArg___closed__0_value;
static const lean_array_object l_Lasm_UI_diffChildren___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_UI_diffChildren___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_diffChildren___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_diffNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_diffNode___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_diffNode___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_diffNode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_diff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_diff___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_diff___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_diff___redArg___closed__0_value;
static const lean_closure_object l_Lasm_UI_diff___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_diffNode, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_UI_diff___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_diff___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq___redArg(lean_object* v_x_570_, lean_object* v_x_571_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
if (lean_obj_tag(v_x_571_) == 0)
{
uint8_t v___x_572_; 
v___x_572_ = 1;
return v___x_572_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = 0;
return v___x_573_;
}
}
else
{
if (lean_obj_tag(v_x_571_) == 1)
{
lean_object* v_head_574_; lean_object* v_tail_575_; lean_object* v_head_576_; lean_object* v_tail_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v_head_574_ = lean_ctor_get(v_x_570_, 0);
v_tail_575_ = lean_ctor_get(v_x_570_, 1);
v_head_576_ = lean_ctor_get(v_x_571_, 0);
v_tail_577_ = lean_ctor_get(v_x_571_, 1);
v___x_578_ = l_Lasm_UI_Attr_key___redArg(v_head_574_);
v___x_579_ = l_Lasm_UI_Attr_key___redArg(v_head_576_);
v___x_580_ = l_Lasm_UI_instDecidableEqAttrKey_decEq(v___x_578_, v___x_579_);
lean_dec_ref(v___x_579_);
lean_dec_ref(v___x_578_);
if (v___x_580_ == 0)
{
return v___x_580_;
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_581_ = l_Lasm_UI_Attr_val___redArg(v_head_574_);
v___x_582_ = l_Lasm_UI_Attr_val___redArg(v_head_576_);
v___x_583_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v___x_581_, v___x_582_);
if (v___x_583_ == 0)
{
return v___x_583_;
}
else
{
v_x_570_ = v_tail_575_;
v_x_571_ = v_tail_577_;
goto _start;
}
}
}
else
{
uint8_t v___x_585_; 
v___x_585_ = 0;
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___redArg___boxed(lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
uint8_t v_res_588_; lean_object* v_r_589_; 
v_res_588_ = l_Lasm_UI_attrsEq___redArg(v_x_586_, v_x_587_);
lean_dec(v_x_587_);
lean_dec(v_x_586_);
v_r_589_ = lean_box(v_res_588_);
return v_r_589_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_attrsEq(lean_object* v_Msg_590_, lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
uint8_t v___x_593_; 
v___x_593_ = l_Lasm_UI_attrsEq___redArg(v_x_591_, v_x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrsEq___boxed(lean_object* v_Msg_594_, lean_object* v_x_595_, lean_object* v_x_596_){
_start:
{
uint8_t v_res_597_; lean_object* v_r_598_; 
v_res_597_ = l_Lasm_UI_attrsEq(v_Msg_594_, v_x_595_, v_x_596_);
lean_dec(v_x_596_);
lean_dec(v_x_595_);
v_r_598_ = lean_box(v_res_597_);
return v_r_598_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(lean_object* v_x_599_, lean_object* v_x_600_){
_start:
{
if (lean_obj_tag(v_x_599_) == 0)
{
if (lean_obj_tag(v_x_600_) == 0)
{
uint8_t v___x_601_; 
v___x_601_ = 1;
return v___x_601_;
}
else
{
uint8_t v___x_602_; 
lean_dec_ref_known(v_x_600_, 1);
v___x_602_ = 0;
return v___x_602_;
}
}
else
{
if (lean_obj_tag(v_x_600_) == 0)
{
uint8_t v___x_603_; 
lean_dec_ref_known(v_x_599_, 1);
v___x_603_ = 0;
return v___x_603_;
}
else
{
lean_object* v_val_604_; lean_object* v_val_605_; uint8_t v___x_606_; 
v_val_604_ = lean_ctor_get(v_x_599_, 0);
lean_inc(v_val_604_);
lean_dec_ref_known(v_x_599_, 1);
v_val_605_ = lean_ctor_get(v_x_600_, 0);
lean_inc(v_val_605_);
lean_dec_ref_known(v_x_600_, 1);
v___x_606_ = l_Lasm_UI_instDecidableEqAttrVal_decEq(v_val_604_, v_val_605_);
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0___boxed(lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
uint8_t v_res_609_; lean_object* v_r_610_; 
v_res_609_ = l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(v_x_607_, v_x_608_);
v_r_610_ = lean_box(v_res_609_);
return v_r_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg(lean_object* v_old_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v___x_613_; 
v___x_613_ = lean_box(0);
return v___x_613_;
}
else
{
lean_object* v_head_614_; lean_object* v_tail_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_633_; 
v_head_614_ = lean_ctor_get(v_x_612_, 0);
v_tail_615_ = lean_ctor_get(v_x_612_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_633_ == 0)
{
v___x_617_ = v_x_612_;
v_isShared_618_ = v_isSharedCheck_633_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_tail_615_);
lean_inc(v_head_614_);
lean_dec(v_x_612_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_633_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v_t_619_; lean_object* v___x_620_; uint8_t v___y_622_; uint8_t v___x_628_; 
lean_inc(v_tail_615_);
v_t_619_ = l_Lasm_UI_attrSets___redArg(v_old_611_, v_tail_615_);
v___x_620_ = l_Lasm_UI_Attr_key___redArg(v_head_614_);
v___x_628_ = l_Lasm_UI_hasKey___redArg(v___x_620_, v_tail_615_);
lean_dec(v_tail_615_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_629_ = l_Lasm_UI_lastVal___redArg(v___x_620_, v_old_611_);
v___x_630_ = l_Lasm_UI_Attr_val___redArg(v_head_614_);
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
v___x_632_ = l_Option_instBEq_beq___at___00Lasm_UI_attrSets_spec__0(v___x_629_, v___x_631_);
v___y_622_ = v___x_632_;
goto v___jp_621_;
}
else
{
v___y_622_ = v___x_628_;
goto v___jp_621_;
}
v___jp_621_:
{
if (v___y_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_623_ = l_Lasm_UI_Attr_val___redArg(v_head_614_);
lean_dec(v_head_614_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_620_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 1, v_t_619_);
lean_ctor_set(v___x_617_, 0, v___x_624_);
v___x_626_ = v___x_617_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_t_619_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
else
{
lean_dec_ref(v___x_620_);
lean_del_object(v___x_617_);
lean_dec(v_head_614_);
return v_t_619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___redArg___boxed(lean_object* v_old_634_, lean_object* v_x_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_UI_attrSets___redArg(v_old_634_, v_x_635_);
lean_dec(v_old_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets(lean_object* v_Msg_637_, lean_object* v_old_638_, lean_object* v_x_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lasm_UI_attrSets___redArg(v_old_638_, v_x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrSets___boxed(lean_object* v_Msg_641_, lean_object* v_old_642_, lean_object* v_x_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lasm_UI_attrSets(v_Msg_641_, v_old_642_, v_x_643_);
lean_dec(v_old_642_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg(lean_object* v_new_645_, lean_object* v_x_646_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v___x_647_; 
v___x_647_ = lean_box(0);
return v___x_647_;
}
else
{
lean_object* v_head_648_; lean_object* v_tail_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_661_; 
v_head_648_ = lean_ctor_get(v_x_646_, 0);
v_tail_649_ = lean_ctor_get(v_x_646_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_661_ == 0)
{
v___x_651_ = v_x_646_;
v_isShared_652_ = v_isSharedCheck_661_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_tail_649_);
lean_inc(v_head_648_);
lean_dec(v_x_646_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_661_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_653_ = l_Lasm_UI_Attr_key___redArg(v_head_648_);
lean_dec(v_head_648_);
v___x_654_ = l_Lasm_UI_hasKey___redArg(v___x_653_, v_new_645_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
v___x_656_ = l_Lasm_UI_attrRemoves___redArg(v_new_645_, v_tail_649_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_656_);
lean_ctor_set(v___x_651_, 0, v___x_655_);
v___x_658_ = v___x_651_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
else
{
lean_dec_ref(v___x_653_);
lean_del_object(v___x_651_);
v_x_646_ = v_tail_649_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___redArg___boxed(lean_object* v_new_662_, lean_object* v_x_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lasm_UI_attrRemoves___redArg(v_new_662_, v_x_663_);
lean_dec(v_new_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves(lean_object* v_Msg_665_, lean_object* v_new_666_, lean_object* v_x_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lasm_UI_attrRemoves___redArg(v_new_666_, v_x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_attrRemoves___boxed(lean_object* v_Msg_669_, lean_object* v_new_670_, lean_object* v_x_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_UI_attrRemoves(v_Msg_669_, v_new_670_, v_x_671_);
lean_dec(v_new_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs___redArg(lean_object* v_old_673_, lean_object* v_new_674_){
_start:
{
uint8_t v___x_675_; 
v___x_675_ = l_Lasm_UI_attrsEq___redArg(v_old_673_, v_new_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
lean_inc(v_old_673_);
v___x_676_ = l_Lasm_UI_attrRemoves___redArg(v_new_674_, v_old_673_);
v___x_677_ = l_Lasm_UI_attrSets___redArg(v_old_673_, v_new_674_);
lean_dec(v_old_673_);
v___x_678_ = l_List_appendTR___redArg(v___x_676_, v___x_677_);
return v___x_678_;
}
else
{
lean_object* v___x_679_; 
lean_dec(v_new_674_);
lean_dec(v_old_673_);
v___x_679_ = lean_box(0);
return v___x_679_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffAttrs(lean_object* v_Msg_680_, lean_object* v_old_681_, lean_object* v_new_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lasm_UI_diffAttrs___redArg(v_old_681_, v_new_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll___redArg(lean_object* v_val_684_, lean_object* v_before_685_, lean_object* v_x_686_, lean_object* v_x_687_, lean_object* v_x_688_, lean_object* v_x_689_){
_start:
{
if (lean_obj_tag(v_x_686_) == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v_before_685_);
lean_dec_ref(v_val_684_);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v_x_689_);
lean_ctor_set(v___x_690_, 1, v_x_687_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_x_688_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
return v___x_691_;
}
else
{
lean_object* v_head_692_; lean_object* v_tail_693_; lean_object* v___x_694_; lean_object* v_r_695_; lean_object* v_fst_696_; lean_object* v_snd_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_707_; 
v_head_692_ = lean_ctor_get(v_x_686_, 0);
lean_inc(v_head_692_);
v_tail_693_ = lean_ctor_get(v_x_686_, 1);
lean_inc(v_tail_693_);
lean_dec_ref_known(v_x_686_, 2);
lean_inc_ref(v_val_684_);
v___x_694_ = lean_apply_1(v_val_684_, v_head_692_);
v_r_695_ = l_Lasm_UI_create___redArg(v___x_694_, v_x_687_);
lean_dec_ref(v___x_694_);
v_fst_696_ = lean_ctor_get(v_r_695_, 0);
v_snd_697_ = lean_ctor_get(v_r_695_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v_r_695_);
if (v_isSharedCheck_707_ == 0)
{
v___x_699_ = v_r_695_;
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snd_697_);
lean_inc(v_fst_696_);
lean_dec(v_r_695_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
lean_inc(v_before_685_);
lean_inc(v_fst_696_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v_before_685_);
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_fst_696_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_before_685_);
v___x_702_ = v_reuseFailAlloc_706_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_array_push(v_x_688_, v___x_702_);
v___x_704_ = lean_array_push(v_x_689_, v_fst_696_);
v_x_686_ = v_tail_693_;
v_x_687_ = v_snd_697_;
v_x_688_ = v___x_703_;
v_x_689_ = v___x_704_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertAll(lean_object* v_Msg_708_, lean_object* v_00_u03b2_709_, lean_object* v_val_710_, lean_object* v_before_711_, lean_object* v_x_712_, lean_object* v_x_713_, lean_object* v_x_714_, lean_object* v_x_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lasm_UI_insertAll___redArg(v_val_710_, v_before_711_, v_x_712_, v_x_713_, v_x_714_, v_x_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll___redArg(lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
if (lean_obj_tag(v_x_717_) == 0)
{
return v_x_718_;
}
else
{
lean_object* v_head_719_; lean_object* v_tail_720_; lean_object* v___y_722_; lean_object* v_id_726_; 
v_head_719_ = lean_ctor_get(v_x_717_, 0);
lean_inc(v_head_719_);
v_tail_720_ = lean_ctor_get(v_x_717_, 1);
lean_inc(v_tail_720_);
lean_dec_ref_known(v_x_717_, 2);
v_id_726_ = lean_ctor_get(v_head_719_, 0);
lean_inc(v_id_726_);
lean_dec(v_head_719_);
v___y_722_ = v_id_726_;
goto v___jp_721_;
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_723_, 0, v___y_722_);
v___x_724_ = lean_array_push(v_x_718_, v___x_723_);
v_x_717_ = v_tail_720_;
v_x_718_ = v___x_724_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeAll(lean_object* v_Msg_727_, lean_object* v_x_728_, lean_object* v_x_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lasm_UI_removeAll___redArg(v_x_728_, v_x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg(lean_object* v_val_731_, lean_object* v_na_732_, lean_object* v_before_733_, lean_object* v_lo_734_, lean_object* v_hi_735_, lean_object* v_n_736_, lean_object* v_ops_737_, lean_object* v_acc_738_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = lean_nat_dec_lt(v_lo_734_, v_hi_735_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v_lo_734_);
lean_dec(v_before_733_);
lean_dec_ref(v_val_731_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v_acc_738_);
lean_ctor_set(v___x_740_, 1, v_n_736_);
v___x_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_741_, 0, v_ops_737_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
return v___x_741_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = lean_array_get_size(v_na_732_);
v___x_743_ = lean_nat_dec_lt(v_lo_734_, v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; 
lean_dec(v_lo_734_);
lean_dec(v_before_733_);
lean_dec_ref(v_val_731_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_acc_738_);
lean_ctor_set(v___x_744_, 1, v_n_736_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v_ops_737_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v_r_748_; lean_object* v_fst_749_; lean_object* v_snd_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_762_; 
v___x_746_ = lean_array_fget_borrowed(v_na_732_, v_lo_734_);
lean_inc_ref(v_val_731_);
lean_inc(v___x_746_);
v___x_747_ = lean_apply_1(v_val_731_, v___x_746_);
v_r_748_ = l_Lasm_UI_create___redArg(v___x_747_, v_n_736_);
lean_dec_ref(v___x_747_);
v_fst_749_ = lean_ctor_get(v_r_748_, 0);
v_snd_750_ = lean_ctor_get(v_r_748_, 1);
v_isSharedCheck_762_ = !lean_is_exclusive(v_r_748_);
if (v_isSharedCheck_762_ == 0)
{
v___x_752_ = v_r_748_;
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_snd_750_);
lean_inc(v_fst_749_);
lean_dec(v_r_748_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_762_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_add(v_lo_734_, v___x_754_);
lean_dec(v_lo_734_);
lean_inc(v_before_733_);
lean_inc(v_fst_749_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 1, v_before_733_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_fst_749_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v_before_733_);
v___x_757_ = v_reuseFailAlloc_761_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_array_push(v_ops_737_, v___x_757_);
v___x_759_ = lean_array_push(v_acc_738_, v_fst_749_);
v_lo_734_ = v___x_755_;
v_n_736_ = v_snd_750_;
v_ops_737_ = v___x_758_;
v_acc_738_ = v___x_759_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___redArg___boxed(lean_object* v_val_763_, lean_object* v_na_764_, lean_object* v_before_765_, lean_object* v_lo_766_, lean_object* v_hi_767_, lean_object* v_n_768_, lean_object* v_ops_769_, lean_object* v_acc_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lasm_UI_insertRange___redArg(v_val_763_, v_na_764_, v_before_765_, v_lo_766_, v_hi_767_, v_n_768_, v_ops_769_, v_acc_770_);
lean_dec(v_hi_767_);
lean_dec_ref(v_na_764_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange(lean_object* v_Msg_772_, lean_object* v_00_u03b2_773_, lean_object* v_val_774_, lean_object* v_na_775_, lean_object* v_before_776_, lean_object* v_lo_777_, lean_object* v_hi_778_, lean_object* v_n_779_, lean_object* v_ops_780_, lean_object* v_acc_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lasm_UI_insertRange___redArg(v_val_774_, v_na_775_, v_before_776_, v_lo_777_, v_hi_778_, v_n_779_, v_ops_780_, v_acc_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_insertRange___boxed(lean_object* v_Msg_783_, lean_object* v_00_u03b2_784_, lean_object* v_val_785_, lean_object* v_na_786_, lean_object* v_before_787_, lean_object* v_lo_788_, lean_object* v_hi_789_, lean_object* v_n_790_, lean_object* v_ops_791_, lean_object* v_acc_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lasm_UI_insertRange(v_Msg_783_, v_00_u03b2_784_, v_val_785_, v_na_786_, v_before_787_, v_lo_788_, v_hi_789_, v_n_790_, v_ops_791_, v_acc_792_);
lean_dec(v_hi_789_);
lean_dec_ref(v_na_786_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter___redArg(lean_object* v_x_794_, lean_object* v_h__1_795_, lean_object* v_h__2_796_){
_start:
{
if (lean_obj_tag(v_x_794_) == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec(v_h__1_795_);
v___x_797_ = lean_box(0);
v___x_798_ = lean_apply_1(v_h__2_796_, v___x_797_);
return v___x_798_;
}
else
{
lean_object* v_val_799_; lean_object* v___x_800_; 
lean_dec(v_h__2_796_);
v_val_799_ = lean_ctor_get(v_x_794_, 0);
lean_inc(v_val_799_);
lean_dec_ref_known(v_x_794_, 1);
v___x_800_ = lean_apply_1(v_h__1_795_, v_val_799_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_insertRange_match__1_splitter(lean_object* v_00_u03b2_801_, lean_object* v_motive_802_, lean_object* v_x_803_, lean_object* v_h__1_804_, lean_object* v_h__2_805_){
_start:
{
if (lean_obj_tag(v_x_803_) == 0)
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v_h__1_804_);
v___x_806_ = lean_box(0);
v___x_807_ = lean_apply_1(v_h__2_805_, v___x_806_);
return v___x_807_;
}
else
{
lean_object* v_val_808_; lean_object* v___x_809_; 
lean_dec(v_h__2_805_);
v_val_808_ = lean_ctor_get(v_x_803_, 0);
lean_inc(v_val_808_);
lean_dec_ref_known(v_x_803_, 1);
v___x_809_ = lean_apply_1(v_h__1_804_, v_val_808_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg(lean_object* v_oa_810_, lean_object* v_lo_811_, lean_object* v_hi_812_, lean_object* v_ops_813_){
_start:
{
uint8_t v___x_818_; 
v___x_818_ = lean_nat_dec_lt(v_lo_811_, v_hi_812_);
if (v___x_818_ == 0)
{
lean_dec(v_lo_811_);
return v_ops_813_;
}
else
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_array_get_size(v_oa_810_);
v___x_820_ = lean_nat_dec_lt(v_lo_811_, v___x_819_);
if (v___x_820_ == 0)
{
goto v___jp_814_;
}
else
{
lean_object* v___x_821_; 
v___x_821_ = lean_array_fget(v_oa_810_, v_lo_811_);
if (lean_obj_tag(v___x_821_) == 1)
{
lean_object* v_val_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_836_; 
v_val_822_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_836_ == 0)
{
v___x_824_ = v___x_821_;
v_isShared_825_ = v_isSharedCheck_836_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_val_822_);
lean_dec(v___x_821_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_836_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___y_829_; lean_object* v_id_835_; 
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_add(v_lo_811_, v___x_826_);
lean_dec(v_lo_811_);
v_id_835_ = lean_ctor_get(v_val_822_, 0);
lean_inc(v_id_835_);
lean_dec(v_val_822_);
v___y_829_ = v_id_835_;
goto v___jp_828_;
v___jp_828_:
{
lean_object* v___x_831_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 2);
lean_ctor_set(v___x_824_, 0, v___y_829_);
v___x_831_ = v___x_824_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___y_829_);
v___x_831_ = v_reuseFailAlloc_834_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; 
v___x_832_ = lean_array_push(v_ops_813_, v___x_831_);
v_lo_811_ = v___x_827_;
v_ops_813_ = v___x_832_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_821_);
goto v___jp_814_;
}
}
}
v___jp_814_:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = lean_unsigned_to_nat(1u);
v___x_816_ = lean_nat_add(v_lo_811_, v___x_815_);
lean_dec(v_lo_811_);
v_lo_811_ = v___x_816_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___redArg___boxed(lean_object* v_oa_837_, lean_object* v_lo_838_, lean_object* v_hi_839_, lean_object* v_ops_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lasm_UI_removeRange___redArg(v_oa_837_, v_lo_838_, v_hi_839_, v_ops_840_);
lean_dec(v_hi_839_);
lean_dec_ref(v_oa_837_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange(lean_object* v_Msg_842_, lean_object* v_oa_843_, lean_object* v_lo_844_, lean_object* v_hi_845_, lean_object* v_ops_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lasm_UI_removeRange___redArg(v_oa_843_, v_lo_844_, v_hi_845_, v_ops_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_removeRange___boxed(lean_object* v_Msg_848_, lean_object* v_oa_849_, lean_object* v_lo_850_, lean_object* v_hi_851_, lean_object* v_ops_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_UI_removeRange(v_Msg_848_, v_oa_849_, v_lo_850_, v_hi_851_, v_ops_852_);
lean_dec(v_hi_851_);
lean_dec_ref(v_oa_849_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter___redArg(lean_object* v_x_854_, lean_object* v_h__1_855_, lean_object* v_h__2_856_){
_start:
{
if (lean_obj_tag(v_x_854_) == 1)
{
lean_object* v_val_857_; 
v_val_857_ = lean_ctor_get(v_x_854_, 0);
if (lean_obj_tag(v_val_857_) == 1)
{
lean_object* v_val_858_; lean_object* v___x_859_; 
lean_inc_ref(v_val_857_);
lean_dec_ref_known(v_x_854_, 1);
lean_dec(v_h__2_856_);
v_val_858_ = lean_ctor_get(v_val_857_, 0);
lean_inc(v_val_858_);
lean_dec_ref_known(v_val_857_, 1);
v___x_859_ = lean_apply_1(v_h__1_855_, v_val_858_);
return v___x_859_;
}
else
{
lean_object* v___x_860_; 
lean_dec(v_h__1_855_);
v___x_860_ = lean_apply_2(v_h__2_856_, v_x_854_, lean_box(0));
return v___x_860_;
}
}
else
{
lean_object* v___x_861_; 
lean_dec(v_h__1_855_);
v___x_861_ = lean_apply_2(v_h__2_856_, v_x_854_, lean_box(0));
return v___x_861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_removeRange_match__1_splitter(lean_object* v_Msg_862_, lean_object* v_motive_863_, lean_object* v_x_864_, lean_object* v_h__1_865_, lean_object* v_h__2_866_){
_start:
{
if (lean_obj_tag(v_x_864_) == 1)
{
lean_object* v_val_867_; 
v_val_867_ = lean_ctor_get(v_x_864_, 0);
if (lean_obj_tag(v_val_867_) == 1)
{
lean_object* v_val_868_; lean_object* v___x_869_; 
lean_inc_ref(v_val_867_);
lean_dec_ref_known(v_x_864_, 1);
lean_dec(v_h__2_866_);
v_val_868_ = lean_ctor_get(v_val_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v_val_867_, 1);
v___x_869_ = lean_apply_1(v_h__1_865_, v_val_868_);
return v___x_869_;
}
else
{
lean_object* v___x_870_; 
lean_dec(v_h__1_865_);
v___x_870_ = lean_apply_2(v_h__2_866_, v_x_864_, lean_box(0));
return v___x_870_;
}
}
else
{
lean_object* v___x_871_; 
lean_dec(v_h__1_865_);
v___x_871_ = lean_apply_2(v_h__2_866_, v_x_864_, lean_box(0));
return v___x_871_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(lean_object* v_a_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
uint8_t v___x_874_; 
v___x_874_ = 0;
return v___x_874_;
}
else
{
lean_object* v_key_875_; lean_object* v_tail_876_; uint8_t v___x_877_; 
v_key_875_ = lean_ctor_get(v_x_873_, 0);
v_tail_876_ = lean_ctor_get(v_x_873_, 2);
v___x_877_ = lean_string_dec_eq(v_key_875_, v_a_872_);
if (v___x_877_ == 0)
{
v_x_873_ = v_tail_876_;
goto _start;
}
else
{
return v___x_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg___boxed(lean_object* v_a_879_, lean_object* v_x_880_){
_start:
{
uint8_t v_res_881_; lean_object* v_r_882_; 
v_res_881_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_879_, v_x_880_);
lean_dec(v_x_880_);
lean_dec_ref(v_a_879_);
v_r_882_ = lean_box(v_res_881_);
return v_r_882_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(lean_object* v_a_883_, lean_object* v_b_884_, lean_object* v_x_885_){
_start:
{
if (lean_obj_tag(v_x_885_) == 0)
{
lean_dec(v_b_884_);
lean_dec_ref(v_a_883_);
return v_x_885_;
}
else
{
lean_object* v_key_886_; lean_object* v_value_887_; lean_object* v_tail_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_900_; 
v_key_886_ = lean_ctor_get(v_x_885_, 0);
v_value_887_ = lean_ctor_get(v_x_885_, 1);
v_tail_888_ = lean_ctor_get(v_x_885_, 2);
v_isSharedCheck_900_ = !lean_is_exclusive(v_x_885_);
if (v_isSharedCheck_900_ == 0)
{
v___x_890_ = v_x_885_;
v_isShared_891_ = v_isSharedCheck_900_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_tail_888_);
lean_inc(v_value_887_);
lean_inc(v_key_886_);
lean_dec(v_x_885_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_900_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
uint8_t v___x_892_; 
v___x_892_ = lean_string_dec_eq(v_key_886_, v_a_883_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_883_, v_b_884_, v_tail_888_);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 2, v___x_893_);
v___x_895_ = v___x_890_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_key_886_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_value_887_);
lean_ctor_set(v_reuseFailAlloc_896_, 2, v___x_893_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
else
{
lean_object* v___x_898_; 
lean_dec(v_value_887_);
lean_dec(v_key_886_);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 1, v_b_884_);
lean_ctor_set(v___x_890_, 0, v_a_883_);
v___x_898_ = v___x_890_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_a_883_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_b_884_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_tail_888_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
if (lean_obj_tag(v_x_902_) == 0)
{
return v_x_901_;
}
else
{
lean_object* v_key_903_; lean_object* v_value_904_; lean_object* v_tail_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_928_; 
v_key_903_ = lean_ctor_get(v_x_902_, 0);
v_value_904_ = lean_ctor_get(v_x_902_, 1);
v_tail_905_ = lean_ctor_get(v_x_902_, 2);
v_isSharedCheck_928_ = !lean_is_exclusive(v_x_902_);
if (v_isSharedCheck_928_ == 0)
{
v___x_907_ = v_x_902_;
v_isShared_908_ = v_isSharedCheck_928_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_tail_905_);
lean_inc(v_value_904_);
lean_inc(v_key_903_);
lean_dec(v_x_902_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_928_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; uint64_t v___x_910_; uint64_t v___x_911_; uint64_t v___x_912_; uint64_t v_fold_913_; uint64_t v___x_914_; uint64_t v___x_915_; uint64_t v___x_916_; size_t v___x_917_; size_t v___x_918_; size_t v___x_919_; size_t v___x_920_; size_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_909_ = lean_array_get_size(v_x_901_);
v___x_910_ = lean_string_hash(v_key_903_);
v___x_911_ = 32ULL;
v___x_912_ = lean_uint64_shift_right(v___x_910_, v___x_911_);
v_fold_913_ = lean_uint64_xor(v___x_910_, v___x_912_);
v___x_914_ = 16ULL;
v___x_915_ = lean_uint64_shift_right(v_fold_913_, v___x_914_);
v___x_916_ = lean_uint64_xor(v_fold_913_, v___x_915_);
v___x_917_ = lean_uint64_to_usize(v___x_916_);
v___x_918_ = lean_usize_of_nat(v___x_909_);
v___x_919_ = ((size_t)1ULL);
v___x_920_ = lean_usize_sub(v___x_918_, v___x_919_);
v___x_921_ = lean_usize_land(v___x_917_, v___x_920_);
v___x_922_ = lean_array_uget_borrowed(v_x_901_, v___x_921_);
lean_inc(v___x_922_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 2, v___x_922_);
v___x_924_ = v___x_907_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_key_903_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_value_904_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v___x_922_);
v___x_924_ = v_reuseFailAlloc_927_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; 
v___x_925_ = lean_array_uset(v_x_901_, v___x_921_, v___x_924_);
v_x_901_ = v___x_925_;
v_x_902_ = v_tail_905_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(lean_object* v_i_929_, lean_object* v_source_930_, lean_object* v_target_931_){
_start:
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_array_get_size(v_source_930_);
v___x_933_ = lean_nat_dec_lt(v_i_929_, v___x_932_);
if (v___x_933_ == 0)
{
lean_dec_ref(v_source_930_);
lean_dec(v_i_929_);
return v_target_931_;
}
else
{
lean_object* v_es_934_; lean_object* v___x_935_; lean_object* v_source_936_; lean_object* v_target_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_es_934_ = lean_array_fget(v_source_930_, v_i_929_);
v___x_935_ = lean_box(0);
v_source_936_ = lean_array_fset(v_source_930_, v_i_929_, v___x_935_);
v_target_937_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_target_931_, v_es_934_);
v___x_938_ = lean_unsigned_to_nat(1u);
v___x_939_ = lean_nat_add(v_i_929_, v___x_938_);
lean_dec(v_i_929_);
v_i_929_ = v___x_939_;
v_source_930_ = v_source_936_;
v_target_931_ = v_target_937_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(lean_object* v_data_941_){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_nbuckets_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_942_ = lean_array_get_size(v_data_941_);
v___x_943_ = lean_unsigned_to_nat(2u);
v_nbuckets_944_ = lean_nat_mul(v___x_942_, v___x_943_);
v___x_945_ = lean_unsigned_to_nat(0u);
v___x_946_ = lean_box(0);
v___x_947_ = lean_mk_array(v_nbuckets_944_, v___x_946_);
v___x_948_ = lean_array_propagate_mark(v_data_941_, v___x_947_);
v___x_949_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v___x_945_, v_data_941_, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object* v_m_950_, lean_object* v_a_951_, lean_object* v_b_952_){
_start:
{
lean_object* v_size_953_; lean_object* v_buckets_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_997_; 
v_size_953_ = lean_ctor_get(v_m_950_, 0);
v_buckets_954_ = lean_ctor_get(v_m_950_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_m_950_);
if (v_isSharedCheck_997_ == 0)
{
v___x_956_ = v_m_950_;
v_isShared_957_ = v_isSharedCheck_997_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_buckets_954_);
lean_inc(v_size_953_);
lean_dec(v_m_950_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_997_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; uint64_t v___x_959_; uint64_t v___x_960_; uint64_t v___x_961_; uint64_t v_fold_962_; uint64_t v___x_963_; uint64_t v___x_964_; uint64_t v___x_965_; size_t v___x_966_; size_t v___x_967_; size_t v___x_968_; size_t v___x_969_; size_t v___x_970_; lean_object* v_bkt_971_; uint8_t v___x_972_; 
v___x_958_ = lean_array_get_size(v_buckets_954_);
v___x_959_ = lean_string_hash(v_a_951_);
v___x_960_ = 32ULL;
v___x_961_ = lean_uint64_shift_right(v___x_959_, v___x_960_);
v_fold_962_ = lean_uint64_xor(v___x_959_, v___x_961_);
v___x_963_ = 16ULL;
v___x_964_ = lean_uint64_shift_right(v_fold_962_, v___x_963_);
v___x_965_ = lean_uint64_xor(v_fold_962_, v___x_964_);
v___x_966_ = lean_uint64_to_usize(v___x_965_);
v___x_967_ = lean_usize_of_nat(v___x_958_);
v___x_968_ = ((size_t)1ULL);
v___x_969_ = lean_usize_sub(v___x_967_, v___x_968_);
v___x_970_ = lean_usize_land(v___x_966_, v___x_969_);
v_bkt_971_ = lean_array_uget_borrowed(v_buckets_954_, v___x_970_);
v___x_972_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_951_, v_bkt_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v_size_x27_974_; lean_object* v___x_975_; lean_object* v_buckets_x27_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_973_ = lean_unsigned_to_nat(1u);
v_size_x27_974_ = lean_nat_add(v_size_953_, v___x_973_);
lean_dec(v_size_953_);
lean_inc(v_bkt_971_);
v___x_975_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_975_, 0, v_a_951_);
lean_ctor_set(v___x_975_, 1, v_b_952_);
lean_ctor_set(v___x_975_, 2, v_bkt_971_);
v_buckets_x27_976_ = lean_array_uset(v_buckets_954_, v___x_970_, v___x_975_);
v___x_977_ = lean_unsigned_to_nat(4u);
v___x_978_ = lean_nat_mul(v_size_x27_974_, v___x_977_);
v___x_979_ = lean_unsigned_to_nat(3u);
v___x_980_ = lean_nat_div(v___x_978_, v___x_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_array_get_size(v_buckets_x27_976_);
v___x_982_ = lean_nat_dec_le(v___x_980_, v___x_981_);
lean_dec(v___x_980_);
if (v___x_982_ == 0)
{
lean_object* v_val_983_; lean_object* v___x_985_; 
v_val_983_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_buckets_x27_976_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_val_983_);
lean_ctor_set(v___x_956_, 0, v_size_x27_974_);
v___x_985_ = v___x_956_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_size_x27_974_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_val_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
else
{
lean_object* v___x_988_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_buckets_x27_976_);
lean_ctor_set(v___x_956_, 0, v_size_x27_974_);
v___x_988_ = v___x_956_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_size_x27_974_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_buckets_x27_976_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
else
{
lean_object* v___x_990_; lean_object* v_buckets_x27_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
lean_inc(v_bkt_971_);
v___x_990_ = lean_box(0);
v_buckets_x27_991_ = lean_array_uset(v_buckets_954_, v___x_970_, v___x_990_);
v___x_992_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_951_, v_b_952_, v_bkt_971_);
v___x_993_ = lean_array_uset(v_buckets_x27_991_, v___x_970_, v___x_992_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_993_);
v___x_995_ = v___x_956_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_size_953_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg(lean_object* v_oa_998_, lean_object* v_lo_999_, lean_object* v_hi_1000_, lean_object* v_m_1001_){
_start:
{
uint8_t v___x_1006_; 
v___x_1006_ = lean_nat_dec_lt(v_lo_999_, v_hi_1000_);
if (v___x_1006_ == 0)
{
lean_dec(v_lo_999_);
return v_m_1001_;
}
else
{
lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = lean_array_get_size(v_oa_998_);
v___x_1008_ = lean_nat_dec_lt(v_lo_999_, v___x_1007_);
if (v___x_1008_ == 0)
{
goto v___jp_1002_;
}
else
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_array_fget_borrowed(v_oa_998_, v_lo_999_);
if (lean_obj_tag(v___x_1009_) == 1)
{
lean_object* v_val_1010_; lean_object* v___x_1011_; 
v_val_1010_ = lean_ctor_get(v___x_1009_, 0);
v___x_1011_ = l_Lasm_UI_Live_key_x3f___redArg(v_val_1010_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_unsigned_to_nat(1u);
v___x_1013_ = lean_nat_add(v_lo_999_, v___x_1012_);
lean_dec(v_lo_999_);
v_lo_999_ = v___x_1013_;
goto _start;
}
else
{
lean_object* v_val_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_val_1015_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_val_1015_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1016_ = lean_unsigned_to_nat(1u);
v___x_1017_ = lean_nat_add(v_lo_999_, v___x_1016_);
v___x_1018_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1001_, v_val_1015_, v_lo_999_);
v_lo_999_ = v___x_1017_;
v_m_1001_ = v___x_1018_;
goto _start;
}
}
else
{
goto v___jp_1002_;
}
}
}
v___jp_1002_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_nat_add(v_lo_999_, v___x_1003_);
lean_dec(v_lo_999_);
v_lo_999_ = v___x_1004_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___redArg___boxed(lean_object* v_oa_1020_, lean_object* v_lo_1021_, lean_object* v_hi_1022_, lean_object* v_m_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lasm_UI_keyIndex___redArg(v_oa_1020_, v_lo_1021_, v_hi_1022_, v_m_1023_);
lean_dec(v_hi_1022_);
lean_dec_ref(v_oa_1020_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex(lean_object* v_Msg_1025_, lean_object* v_oa_1026_, lean_object* v_lo_1027_, lean_object* v_hi_1028_, lean_object* v_m_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lasm_UI_keyIndex___redArg(v_oa_1026_, v_lo_1027_, v_hi_1028_, v_m_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_keyIndex___boxed(lean_object* v_Msg_1031_, lean_object* v_oa_1032_, lean_object* v_lo_1033_, lean_object* v_hi_1034_, lean_object* v_m_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lasm_UI_keyIndex(v_Msg_1031_, v_oa_1032_, v_lo_1033_, v_hi_1034_, v_m_1035_);
lean_dec(v_hi_1034_);
lean_dec_ref(v_oa_1032_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0(lean_object* v_00_u03b2_1037_, lean_object* v_m_1038_, lean_object* v_a_1039_, lean_object* v_b_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_m_1038_, v_a_1039_, v_b_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(lean_object* v_00_u03b2_1042_, lean_object* v_a_1043_, lean_object* v_x_1044_){
_start:
{
uint8_t v___x_1045_; 
v___x_1045_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___redArg(v_a_1043_, v_x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1046_, lean_object* v_a_1047_, lean_object* v_x_1048_){
_start:
{
uint8_t v_res_1049_; lean_object* v_r_1050_; 
v_res_1049_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__0(v_00_u03b2_1046_, v_a_1047_, v_x_1048_);
lean_dec(v_x_1048_);
lean_dec_ref(v_a_1047_);
v_r_1050_ = lean_box(v_res_1049_);
return v_r_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1(lean_object* v_00_u03b2_1051_, lean_object* v_data_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1___redArg(v_data_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2(lean_object* v_00_u03b2_1054_, lean_object* v_a_1055_, lean_object* v_b_1056_, lean_object* v_x_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__2___redArg(v_a_1055_, v_b_1056_, v_x_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1059_, lean_object* v_i_1060_, lean_object* v_source_1061_, lean_object* v_target_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2___redArg(v_i_1060_, v_source_1061_, v_target_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1064_, lean_object* v_x_1065_, lean_object* v_x_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1065_, v_x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter___redArg(lean_object* v_x_1068_, lean_object* v_h__1_1069_, lean_object* v_h__2_1070_){
_start:
{
if (lean_obj_tag(v_x_1068_) == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
lean_dec(v_h__1_1069_);
v___x_1071_ = lean_box(0);
v___x_1072_ = lean_apply_1(v_h__2_1070_, v___x_1071_);
return v___x_1072_;
}
else
{
lean_object* v_val_1073_; lean_object* v___x_1074_; 
lean_dec(v_h__2_1070_);
v_val_1073_ = lean_ctor_get(v_x_1068_, 0);
lean_inc(v_val_1073_);
lean_dec_ref_known(v_x_1068_, 1);
v___x_1074_ = lean_apply_1(v_h__1_1069_, v_val_1073_);
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_keyIndex_match__1_splitter(lean_object* v_motive_1075_, lean_object* v_x_1076_, lean_object* v_h__1_1077_, lean_object* v_h__2_1078_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__1_1077_);
v___x_1079_ = lean_box(0);
v___x_1080_ = lean_apply_1(v_h__2_1078_, v___x_1079_);
return v___x_1080_;
}
else
{
lean_object* v_val_1081_; lean_object* v___x_1082_; 
lean_dec(v_h__2_1078_);
v_val_1081_ = lean_ctor_get(v_x_1076_, 0);
lean_inc(v_val_1081_);
lean_dec_ref_known(v_x_1076_, 1);
v___x_1082_ = lean_apply_1(v_h__1_1077_, v_val_1081_);
return v___x_1082_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0(lean_object* v___y_1083_, lean_object* v_x_1084_){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1085_, 0, v___y_1083_);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___lam__0___boxed(lean_object* v___y_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lasm_UI_twoEnded___redArg___lam__0(v___y_1088_, v_x_1089_);
lean_dec(v_x_1089_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(lean_object* v_a_1091_, lean_object* v_x_1092_){
_start:
{
if (lean_obj_tag(v_x_1092_) == 0)
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_box(0);
return v___x_1093_;
}
else
{
lean_object* v_key_1094_; lean_object* v_value_1095_; lean_object* v_tail_1096_; uint8_t v___x_1097_; 
v_key_1094_ = lean_ctor_get(v_x_1092_, 0);
v_value_1095_ = lean_ctor_get(v_x_1092_, 1);
v_tail_1096_ = lean_ctor_get(v_x_1092_, 2);
v___x_1097_ = lean_string_dec_eq(v_key_1094_, v_a_1091_);
if (v___x_1097_ == 0)
{
v_x_1092_ = v_tail_1096_;
goto _start;
}
else
{
lean_object* v___x_1099_; 
lean_inc(v_value_1095_);
v___x_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1099_, 0, v_value_1095_);
return v___x_1099_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg___boxed(lean_object* v_a_1100_, lean_object* v_x_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1100_, v_x_1101_);
lean_dec(v_x_1101_);
lean_dec_ref(v_a_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(lean_object* v_m_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_buckets_1105_; lean_object* v___x_1106_; uint64_t v___x_1107_; uint64_t v___x_1108_; uint64_t v___x_1109_; uint64_t v_fold_1110_; uint64_t v___x_1111_; uint64_t v___x_1112_; uint64_t v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; size_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_buckets_1105_ = lean_ctor_get(v_m_1103_, 1);
v___x_1106_ = lean_array_get_size(v_buckets_1105_);
v___x_1107_ = lean_string_hash(v_a_1104_);
v___x_1108_ = 32ULL;
v___x_1109_ = lean_uint64_shift_right(v___x_1107_, v___x_1108_);
v_fold_1110_ = lean_uint64_xor(v___x_1107_, v___x_1109_);
v___x_1111_ = 16ULL;
v___x_1112_ = lean_uint64_shift_right(v_fold_1110_, v___x_1111_);
v___x_1113_ = lean_uint64_xor(v_fold_1110_, v___x_1112_);
v___x_1114_ = lean_uint64_to_usize(v___x_1113_);
v___x_1115_ = lean_usize_of_nat(v___x_1106_);
v___x_1116_ = ((size_t)1ULL);
v___x_1117_ = lean_usize_sub(v___x_1115_, v___x_1116_);
v___x_1118_ = lean_usize_land(v___x_1114_, v___x_1117_);
v___x_1119_ = lean_array_uget_borrowed(v_buckets_1105_, v___x_1118_);
v___x_1120_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1104_, v___x_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg___boxed(lean_object* v_m_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v_m_1121_, v_a_1122_);
lean_dec_ref(v_a_1122_);
lean_dec_ref(v_m_1121_);
return v_res_1123_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__0(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = lean_box(0);
v___x_1125_ = lean_unsigned_to_nat(16u);
v___x_1126_ = lean_mk_array(v___x_1125_, v___x_1124_);
return v___x_1126_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__1(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__0, &l_Lasm_UI_twoEnded___redArg___closed__0_once, _init_l_Lasm_UI_twoEnded___redArg___closed__0);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object* v_val_1130_, lean_object* v_f_1131_, lean_object* v_oa_1132_, lean_object* v_oLo_1133_, lean_object* v_oHi_1134_, lean_object* v_na_1135_, lean_object* v_nLo_1136_, lean_object* v_nHi_1137_, lean_object* v_pre_1138_, lean_object* v_suf_1139_, lean_object* v_ops_1140_, lean_object* v_next_1141_, lean_object* v_keys_1142_){
_start:
{
lean_object* v___y_1144_; lean_object* v___y_1154_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; uint8_t v___x_1175_; 
v___x_1175_ = lean_nat_dec_lt(v_oLo_1133_, v_oHi_1134_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
lean_dec(v_keys_1142_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
v___x_1176_ = l_List_head_x3f___redArg(v_suf_1139_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_box(0);
v___y_1144_ = v___x_1177_;
goto v___jp_1143_;
}
else
{
lean_object* v_val_1178_; lean_object* v_id_1179_; 
v_val_1178_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_val_1178_);
lean_dec_ref_known(v___x_1176_, 1);
v_id_1179_ = lean_ctor_get(v_val_1178_, 0);
lean_inc(v_id_1179_);
lean_dec(v_val_1178_);
v___y_1154_ = v_id_1179_;
goto v___jp_1153_;
}
}
else
{
uint8_t v___x_1180_; 
v___x_1180_ = lean_nat_dec_lt(v_nLo_1136_, v_nHi_1137_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
v___x_1181_ = l_Lasm_UI_removeRange___redArg(v_oa_1132_, v_oLo_1133_, v_oHi_1134_, v_ops_1140_);
lean_dec(v_oHi_1134_);
lean_dec_ref(v_oa_1132_);
v___x_1182_ = lean_array_to_list(v_pre_1138_);
v___x_1183_ = l_List_appendTR___redArg(v___x_1182_, v_suf_1139_);
v___x_1184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1181_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
lean_ctor_set(v___x_1184_, 2, v_next_1141_);
return v___x_1184_;
}
else
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = lean_array_get_size(v_oa_1132_);
v___x_1186_ = lean_nat_dec_lt(v_oLo_1133_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1187_ = lean_unsigned_to_nat(1u);
v___x_1188_ = lean_nat_sub(v_oHi_1134_, v___x_1187_);
v___x_1189_ = lean_nat_dec_lt(v___x_1188_, v___x_1185_);
if (v___x_1189_ == 0)
{
lean_dec(v___x_1188_);
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
goto v___jp_1156_;
}
else
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_array_fget_borrowed(v_oa_1132_, v___x_1188_);
lean_dec(v___x_1188_);
if (lean_obj_tag(v___x_1190_) == 0)
{
goto v___jp_1160_;
}
else
{
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
goto v___jp_1156_;
}
}
}
else
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_array_fget(v_oa_1132_, v_oLo_1133_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_unsigned_to_nat(1u);
v___x_1193_ = lean_nat_add(v_oLo_1133_, v___x_1192_);
lean_dec(v_oLo_1133_);
v_oLo_1133_ = v___x_1193_;
goto _start;
}
else
{
lean_object* v_val_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1374_; 
v_val_1195_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1197_ = v___x_1191_;
v_isShared_1198_ = v_isSharedCheck_1374_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_val_1195_);
lean_dec(v___x_1191_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1374_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1199_; lean_object* v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1226_ = lean_nat_sub(v_oHi_1134_, v___x_1199_);
v___x_1227_ = lean_nat_dec_lt(v___x_1226_, v___x_1185_);
if (v___x_1227_ == 0)
{
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_dec(v_val_1195_);
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
goto v___jp_1156_;
}
else
{
lean_object* v___x_1228_; 
v___x_1228_ = lean_array_fget(v_oa_1132_, v___x_1226_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_dec(v_val_1195_);
goto v___jp_1160_;
}
else
{
lean_object* v_val_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1373_; 
v_val_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1373_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_val_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1373_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = lean_array_get_size(v_na_1135_);
v___x_1234_ = lean_nat_dec_lt(v_nLo_1136_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_del_object(v___x_1231_);
lean_dec(v_val_1229_);
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_dec(v_val_1195_);
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
goto v___jp_1156_;
}
else
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = lean_nat_sub(v_nHi_1137_, v___x_1199_);
v___x_1236_ = lean_nat_dec_lt(v___x_1235_, v___x_1233_);
if (v___x_1236_ == 0)
{
lean_dec(v___x_1235_);
lean_del_object(v___x_1231_);
lean_dec(v_val_1229_);
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_dec(v_val_1195_);
lean_dec(v_keys_1142_);
lean_dec(v_nHi_1137_);
lean_dec(v_nLo_1136_);
lean_dec(v_oHi_1134_);
lean_dec(v_oLo_1133_);
lean_dec_ref(v_oa_1132_);
lean_dec_ref(v_f_1131_);
lean_dec_ref(v_val_1130_);
goto v___jp_1156_;
}
else
{
lean_object* v___x_1237_; lean_object* v_fst_1239_; lean_object* v_fst_1240_; lean_object* v_snd_1241_; lean_object* v___x_1248_; lean_object* v_fst_1250_; lean_object* v___y_1258_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; uint8_t v___y_1269_; uint8_t v___x_1290_; 
v___x_1237_ = lean_array_fget_borrowed(v_na_1135_, v_nLo_1136_);
lean_inc_ref(v_val_1130_);
lean_inc(v___x_1237_);
v___x_1248_ = lean_apply_1(v_val_1130_, v___x_1237_);
v___x_1290_ = l_Lasm_UI_Live_same___redArg(v_val_1195_, v___x_1248_);
if (v___x_1290_ == 0)
{
lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1291_ = lean_array_fget_borrowed(v_na_1135_, v___x_1235_);
lean_inc_ref(v_val_1130_);
lean_inc(v___x_1291_);
v___x_1292_ = lean_apply_1(v_val_1130_, v___x_1291_);
v___x_1293_ = l_Lasm_UI_Live_same___redArg(v_val_1229_, v___x_1292_);
if (v___x_1293_ == 0)
{
uint8_t v___x_1294_; 
v___x_1294_ = l_Lasm_UI_Live_same___redArg(v_val_1195_, v___x_1292_);
lean_dec_ref(v___x_1292_);
if (v___x_1294_ == 0)
{
uint8_t v___x_1295_; 
lean_dec(v___x_1235_);
v___x_1295_ = l_Lasm_UI_Live_same___redArg(v_val_1229_, v___x_1248_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
lean_dec(v_val_1229_);
lean_dec(v___x_1226_);
v___x_1296_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_1248_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_del_object(v___x_1231_);
lean_del_object(v___x_1197_);
v_fst_1250_ = v_keys_1142_;
goto v___jp_1249_;
}
else
{
lean_object* v_val_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1314_; 
v_val_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1314_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_val_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1314_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___y_1302_; 
if (lean_obj_tag(v_keys_1142_) == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__1, &l_Lasm_UI_twoEnded___redArg___closed__1_once, _init_l_Lasm_UI_twoEnded___redArg___closed__1);
lean_inc(v_oLo_1133_);
v___x_1312_ = l_Lasm_UI_keyIndex___redArg(v_oa_1132_, v_oLo_1133_, v_oHi_1134_, v___x_1311_);
v___y_1302_ = v___x_1312_;
goto v___jp_1301_;
}
else
{
lean_object* v_val_1313_; 
v_val_1313_ = lean_ctor_get(v_keys_1142_, 0);
lean_inc(v_val_1313_);
lean_dec_ref_known(v_keys_1142_, 1);
v___y_1302_ = v_val_1313_;
goto v___jp_1301_;
}
v___jp_1301_:
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v___y_1302_, v_val_1297_);
lean_dec(v_val_1297_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v___x_1305_; 
lean_del_object(v___x_1231_);
lean_del_object(v___x_1197_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___y_1302_);
v___x_1305_ = v___x_1299_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___y_1302_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
v_fst_1250_ = v___x_1305_;
goto v___jp_1249_;
}
}
else
{
lean_object* v_val_1307_; lean_object* v___f_1308_; uint8_t v___x_1309_; 
lean_del_object(v___x_1299_);
v_val_1307_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_val_1307_);
lean_dec_ref_known(v___x_1303_, 1);
lean_inc_ref(v___y_1302_);
v___f_1308_ = lean_alloc_closure((void*)(l_Lasm_UI_twoEnded___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1308_, 0, v___y_1302_);
v___x_1309_ = lean_nat_dec_le(v_oLo_1133_, v_val_1307_);
if (v___x_1309_ == 0)
{
v___y_1266_ = v_val_1307_;
v___y_1267_ = v___y_1302_;
v___y_1268_ = v___f_1308_;
v___y_1269_ = v___x_1295_;
goto v___jp_1265_;
}
else
{
uint8_t v___x_1310_; 
v___x_1310_ = lean_nat_dec_lt(v_val_1307_, v_oHi_1134_);
v___y_1266_ = v_val_1307_;
v___y_1267_ = v___y_1302_;
v___y_1268_ = v___f_1308_;
v___y_1269_ = v___x_1310_;
goto v___jp_1265_;
}
}
}
}
}
}
else
{
lean_object* v_r_1315_; lean_object* v_ops_1316_; lean_object* v_live_1317_; lean_object* v_next_1318_; lean_object* v___x_1319_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1330_; lean_object* v_id_1332_; 
lean_dec_ref(v___x_1248_);
lean_del_object(v___x_1231_);
lean_del_object(v___x_1197_);
lean_dec(v_oHi_1134_);
lean_inc_ref(v_f_1131_);
lean_inc(v___x_1237_);
lean_inc(v_val_1229_);
v_r_1315_ = lean_apply_3(v_f_1131_, v_val_1229_, v___x_1237_, v_next_1141_);
v_ops_1316_ = lean_ctor_get(v_r_1315_, 0);
lean_inc(v_ops_1316_);
v_live_1317_ = lean_ctor_get(v_r_1315_, 1);
lean_inc_ref(v_live_1317_);
v_next_1318_ = lean_ctor_get(v_r_1315_, 2);
lean_inc(v_next_1318_);
lean_dec_ref(v_r_1315_);
v___x_1319_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1140_, v_ops_1316_);
v_id_1332_ = lean_ctor_get(v_val_1229_, 0);
lean_inc(v_id_1332_);
lean_dec(v_val_1229_);
v___y_1330_ = v_id_1332_;
goto v___jp_1329_;
v___jp_1320_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v_ops_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___y_1322_);
v___x_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___y_1321_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v_ops_1325_ = lean_array_push(v___x_1319_, v___x_1324_);
v___x_1326_ = lean_nat_add(v_nLo_1136_, v___x_1199_);
lean_dec(v_nLo_1136_);
v___x_1327_ = lean_array_push(v_pre_1138_, v_live_1317_);
v_oHi_1134_ = v___x_1226_;
v_nLo_1136_ = v___x_1326_;
v_pre_1138_ = v___x_1327_;
v_ops_1140_ = v_ops_1325_;
v_next_1141_ = v_next_1318_;
goto _start;
}
v___jp_1329_:
{
lean_object* v_id_1331_; 
v_id_1331_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_id_1331_);
lean_dec(v_val_1195_);
v___y_1321_ = v___y_1330_;
v___y_1322_ = v_id_1331_;
goto v___jp_1320_;
}
}
}
else
{
lean_object* v_r_1333_; lean_object* v_ops_1334_; lean_object* v_live_1335_; lean_object* v_next_1336_; lean_object* v___x_1337_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1351_; lean_object* v_id_1356_; 
lean_dec_ref(v___x_1248_);
lean_del_object(v___x_1231_);
lean_dec(v_val_1229_);
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_dec(v_nHi_1137_);
lean_inc_ref(v_f_1131_);
lean_inc(v___x_1291_);
lean_inc(v_val_1195_);
v_r_1333_ = lean_apply_3(v_f_1131_, v_val_1195_, v___x_1291_, v_next_1141_);
v_ops_1334_ = lean_ctor_get(v_r_1333_, 0);
lean_inc(v_ops_1334_);
v_live_1335_ = lean_ctor_get(v_r_1333_, 1);
lean_inc_ref(v_live_1335_);
v_next_1336_ = lean_ctor_get(v_r_1333_, 2);
lean_inc(v_next_1336_);
lean_dec_ref(v_r_1333_);
v___x_1337_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1140_, v_ops_1334_);
v_id_1356_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_id_1356_);
lean_dec(v_val_1195_);
v___y_1351_ = v_id_1356_;
goto v___jp_1350_;
v___jp_1338_:
{
lean_object* v___x_1341_; lean_object* v_ops_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___y_1339_);
lean_ctor_set(v___x_1341_, 1, v___y_1340_);
v_ops_1342_ = lean_array_push(v___x_1337_, v___x_1341_);
v___x_1343_ = lean_nat_add(v_oLo_1133_, v___x_1199_);
lean_dec(v_oLo_1133_);
v___x_1344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1344_, 0, v_live_1335_);
lean_ctor_set(v___x_1344_, 1, v_suf_1139_);
v_oLo_1133_ = v___x_1343_;
v_nHi_1137_ = v___x_1235_;
v_suf_1139_ = v___x_1344_;
v_ops_1140_ = v_ops_1342_;
v_next_1141_ = v_next_1336_;
goto _start;
}
v___jp_1346_:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___y_1348_);
v___y_1339_ = v___y_1347_;
v___y_1340_ = v___x_1349_;
goto v___jp_1338_;
}
v___jp_1350_:
{
lean_object* v___x_1352_; 
v___x_1352_ = l_List_head_x3f___redArg(v_suf_1139_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_box(0);
v___y_1339_ = v___y_1351_;
v___y_1340_ = v___x_1353_;
goto v___jp_1338_;
}
else
{
lean_object* v_val_1354_; lean_object* v_id_1355_; 
v_val_1354_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_val_1354_);
lean_dec_ref_known(v___x_1352_, 1);
v_id_1355_ = lean_ctor_get(v_val_1354_, 0);
lean_inc(v_id_1355_);
lean_dec(v_val_1354_);
v___y_1347_ = v___y_1351_;
v___y_1348_ = v_id_1355_;
goto v___jp_1346_;
}
}
}
}
else
{
lean_object* v_r_1357_; lean_object* v_ops_1358_; lean_object* v_live_1359_; lean_object* v_next_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
lean_dec_ref(v___x_1292_);
lean_dec_ref(v___x_1248_);
lean_del_object(v___x_1231_);
lean_del_object(v___x_1197_);
lean_dec(v_val_1195_);
lean_dec(v_nHi_1137_);
lean_dec(v_oHi_1134_);
lean_inc_ref(v_f_1131_);
lean_inc(v___x_1291_);
v_r_1357_ = lean_apply_3(v_f_1131_, v_val_1229_, v___x_1291_, v_next_1141_);
v_ops_1358_ = lean_ctor_get(v_r_1357_, 0);
lean_inc(v_ops_1358_);
v_live_1359_ = lean_ctor_get(v_r_1357_, 1);
lean_inc_ref(v_live_1359_);
v_next_1360_ = lean_ctor_get(v_r_1357_, 2);
lean_inc(v_next_1360_);
lean_dec_ref(v_r_1357_);
v___x_1361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_live_1359_);
lean_ctor_set(v___x_1361_, 1, v_suf_1139_);
v___x_1362_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1140_, v_ops_1358_);
v_oHi_1134_ = v___x_1226_;
v_nHi_1137_ = v___x_1235_;
v_suf_1139_ = v___x_1361_;
v_ops_1140_ = v___x_1362_;
v_next_1141_ = v_next_1360_;
goto _start;
}
}
else
{
lean_object* v_r_1364_; lean_object* v_ops_1365_; lean_object* v_live_1366_; lean_object* v_next_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
lean_dec_ref(v___x_1248_);
lean_dec(v___x_1235_);
lean_del_object(v___x_1231_);
lean_dec(v_val_1229_);
lean_dec(v___x_1226_);
lean_del_object(v___x_1197_);
lean_inc_ref(v_f_1131_);
lean_inc(v___x_1237_);
v_r_1364_ = lean_apply_3(v_f_1131_, v_val_1195_, v___x_1237_, v_next_1141_);
v_ops_1365_ = lean_ctor_get(v_r_1364_, 0);
lean_inc(v_ops_1365_);
v_live_1366_ = lean_ctor_get(v_r_1364_, 1);
lean_inc_ref(v_live_1366_);
v_next_1367_ = lean_ctor_get(v_r_1364_, 2);
lean_inc(v_next_1367_);
lean_dec_ref(v_r_1364_);
v___x_1368_ = lean_nat_add(v_oLo_1133_, v___x_1199_);
lean_dec(v_oLo_1133_);
v___x_1369_ = lean_nat_add(v_nLo_1136_, v___x_1199_);
lean_dec(v_nLo_1136_);
v___x_1370_ = lean_array_push(v_pre_1138_, v_live_1366_);
v___x_1371_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1140_, v_ops_1365_);
v_oLo_1133_ = v___x_1368_;
v_nLo_1136_ = v___x_1369_;
v_pre_1138_ = v___x_1370_;
v_ops_1140_ = v___x_1371_;
v_next_1141_ = v_next_1367_;
goto _start;
}
v___jp_1238_:
{
lean_object* v_r_1242_; lean_object* v_ops_1243_; lean_object* v_live_1244_; lean_object* v_next_1245_; lean_object* v___x_1246_; lean_object* v_id_1247_; 
lean_inc_ref(v_f_1131_);
lean_inc(v___x_1237_);
lean_inc_ref(v_snd_1241_);
v_r_1242_ = lean_apply_3(v_f_1131_, v_snd_1241_, v___x_1237_, v_next_1141_);
v_ops_1243_ = lean_ctor_get(v_r_1242_, 0);
lean_inc(v_ops_1243_);
v_live_1244_ = lean_ctor_get(v_r_1242_, 1);
lean_inc_ref(v_live_1244_);
v_next_1245_ = lean_ctor_get(v_r_1242_, 2);
lean_inc(v_next_1245_);
lean_dec_ref(v_r_1242_);
v___x_1246_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1140_, v_ops_1243_);
v_id_1247_ = lean_ctor_get(v_snd_1241_, 0);
lean_inc(v_id_1247_);
lean_dec_ref(v_snd_1241_);
v___y_1219_ = v_fst_1239_;
v___y_1220_ = v___x_1246_;
v___y_1221_ = v_fst_1240_;
v___y_1222_ = v_next_1245_;
v___y_1223_ = v_live_1244_;
v___y_1224_ = v_id_1247_;
goto v___jp_1218_;
}
v___jp_1249_:
{
lean_object* v_c_1251_; lean_object* v_fst_1252_; lean_object* v_snd_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v_id_1256_; 
v_c_1251_ = l_Lasm_UI_create___redArg(v___x_1248_, v_next_1141_);
lean_dec_ref(v___x_1248_);
v_fst_1252_ = lean_ctor_get(v_c_1251_, 0);
lean_inc_n(v_fst_1252_, 2);
v_snd_1253_ = lean_ctor_get(v_c_1251_, 1);
lean_inc(v_snd_1253_);
lean_dec_ref(v_c_1251_);
v___x_1254_ = lean_nat_add(v_nLo_1136_, v___x_1199_);
lean_dec(v_nLo_1136_);
v___x_1255_ = lean_array_push(v_pre_1138_, v_fst_1252_);
v_id_1256_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_id_1256_);
lean_dec(v_val_1195_);
v___y_1165_ = v___x_1254_;
v___y_1166_ = v_fst_1252_;
v___y_1167_ = v_snd_1253_;
v___y_1168_ = v_fst_1250_;
v___y_1169_ = v___x_1255_;
v___y_1170_ = v_id_1256_;
goto v___jp_1164_;
}
v___jp_1257_:
{
lean_object* v_snd_1259_; 
v_snd_1259_ = lean_ctor_get(v___y_1258_, 1);
if (lean_obj_tag(v_snd_1259_) == 0)
{
lean_object* v_fst_1260_; 
lean_del_object(v___x_1197_);
v_fst_1260_ = lean_ctor_get(v___y_1258_, 0);
lean_inc(v_fst_1260_);
lean_dec_ref(v___y_1258_);
v_fst_1250_ = v_fst_1260_;
goto v___jp_1249_;
}
else
{
lean_object* v_val_1261_; lean_object* v_fst_1262_; lean_object* v_fst_1263_; lean_object* v_snd_1264_; 
lean_dec_ref(v___x_1248_);
v_val_1261_ = lean_ctor_get(v_snd_1259_, 0);
lean_inc(v_val_1261_);
v_fst_1262_ = lean_ctor_get(v___y_1258_, 0);
lean_inc(v_fst_1262_);
lean_dec_ref(v___y_1258_);
v_fst_1263_ = lean_ctor_get(v_val_1261_, 0);
lean_inc(v_fst_1263_);
v_snd_1264_ = lean_ctor_get(v_val_1261_, 1);
lean_inc(v_snd_1264_);
lean_dec(v_val_1261_);
v_fst_1239_ = v_fst_1262_;
v_fst_1240_ = v_fst_1263_;
v_snd_1241_ = v_snd_1264_;
goto v___jp_1238_;
}
}
v___jp_1265_:
{
if (v___y_1269_ == 0)
{
lean_object* v___x_1271_; 
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1266_);
lean_del_object(v___x_1197_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___y_1267_);
v___x_1271_ = v___x_1231_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___y_1267_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
v_fst_1250_ = v___x_1271_;
goto v___jp_1249_;
}
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = lean_nat_dec_lt(v___y_1266_, v___x_1185_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec_ref(v___y_1267_);
lean_dec(v___y_1266_);
lean_del_object(v___x_1231_);
v___x_1274_ = lean_box(0);
v___x_1275_ = lean_apply_1(v___y_1268_, v___x_1274_);
v___y_1258_ = v___x_1275_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_array_fget(v_oa_1132_, v___y_1266_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v___y_1268_);
lean_del_object(v___x_1231_);
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1279_ = v___x_1276_;
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_val_1277_);
lean_dec(v___x_1276_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___y_1267_);
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___y_1267_);
v___x_1282_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
uint8_t v___x_1283_; 
v___x_1283_ = l_Lasm_UI_Live_same___redArg(v_val_1277_, v___x_1248_);
if (v___x_1283_ == 0)
{
lean_dec(v_val_1277_);
lean_dec(v___y_1266_);
lean_del_object(v___x_1197_);
v_fst_1250_ = v___x_1282_;
goto v___jp_1249_;
}
else
{
lean_dec_ref(v___x_1248_);
v_fst_1239_ = v___x_1282_;
v_fst_1240_ = v___y_1266_;
v_snd_1241_ = v_val_1277_;
goto v___jp_1238_;
}
}
}
}
else
{
lean_object* v___x_1287_; 
lean_dec_ref(v___y_1267_);
lean_dec(v___y_1266_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1276_);
v___x_1287_ = v___x_1231_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1276_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_apply_1(v___y_1268_, v___x_1287_);
v___y_1258_ = v___x_1288_;
goto v___jp_1257_;
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
v___jp_1200_:
{
lean_object* v___x_1209_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v___y_1207_);
v___x_1209_ = v___x_1197_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___y_1207_);
v___x_1209_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v_ops_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___y_1206_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v_ops_1211_ = lean_array_push(v___y_1202_, v___x_1210_);
v___x_1212_ = lean_box(0);
v___x_1213_ = lean_array_set(v_oa_1132_, v___y_1204_, v___x_1212_);
lean_dec(v___y_1204_);
v___x_1214_ = lean_nat_add(v_nLo_1136_, v___x_1199_);
lean_dec(v_nLo_1136_);
v___x_1215_ = lean_array_push(v_pre_1138_, v___y_1205_);
v_oa_1132_ = v___x_1213_;
v_nLo_1136_ = v___x_1214_;
v_pre_1138_ = v___x_1215_;
v_ops_1140_ = v_ops_1211_;
v_next_1141_ = v___y_1203_;
v_keys_1142_ = v___y_1201_;
goto _start;
}
}
v___jp_1218_:
{
lean_object* v_id_1225_; 
v_id_1225_ = lean_ctor_get(v_val_1195_, 0);
lean_inc(v_id_1225_);
lean_dec(v_val_1195_);
v___y_1201_ = v___y_1219_;
v___y_1202_ = v___y_1220_;
v___y_1203_ = v___y_1222_;
v___y_1204_ = v___y_1221_;
v___y_1205_ = v___y_1223_;
v___y_1206_ = v___y_1224_;
v___y_1207_ = v_id_1225_;
goto v___jp_1200_;
}
}
}
}
}
}
v___jp_1143_:
{
lean_object* v_r_1145_; lean_object* v_snd_1146_; lean_object* v_fst_1147_; lean_object* v_fst_1148_; lean_object* v_snd_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v_r_1145_ = l_Lasm_UI_insertRange___redArg(v_val_1130_, v_na_1135_, v___y_1144_, v_nLo_1136_, v_nHi_1137_, v_next_1141_, v_ops_1140_, v_pre_1138_);
lean_dec(v_nHi_1137_);
v_snd_1146_ = lean_ctor_get(v_r_1145_, 1);
lean_inc(v_snd_1146_);
v_fst_1147_ = lean_ctor_get(v_r_1145_, 0);
lean_inc(v_fst_1147_);
lean_dec_ref(v_r_1145_);
v_fst_1148_ = lean_ctor_get(v_snd_1146_, 0);
lean_inc(v_fst_1148_);
v_snd_1149_ = lean_ctor_get(v_snd_1146_, 1);
lean_inc(v_snd_1149_);
lean_dec(v_snd_1146_);
v___x_1150_ = lean_array_to_list(v_fst_1148_);
v___x_1151_ = l_List_appendTR___redArg(v___x_1150_, v_suf_1139_);
v___x_1152_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1152_, 0, v_fst_1147_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
lean_ctor_set(v___x_1152_, 2, v_snd_1149_);
return v___x_1152_;
}
v___jp_1153_:
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___y_1154_);
v___y_1144_ = v___x_1155_;
goto v___jp_1143_;
}
v___jp_1156_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_array_to_list(v_pre_1138_);
v___x_1158_ = l_List_appendTR___redArg(v___x_1157_, v_suf_1139_);
v___x_1159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1159_, 0, v_ops_1140_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
lean_ctor_set(v___x_1159_, 2, v_next_1141_);
return v___x_1159_;
}
v___jp_1160_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_unsigned_to_nat(1u);
v___x_1162_ = lean_nat_sub(v_oHi_1134_, v___x_1161_);
lean_dec(v_oHi_1134_);
v_oHi_1134_ = v___x_1162_;
goto _start;
}
v___jp_1164_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___y_1170_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___y_1166_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = lean_array_push(v_ops_1140_, v___x_1172_);
v_nLo_1136_ = v___y_1165_;
v_pre_1138_ = v___y_1169_;
v_ops_1140_ = v___x_1173_;
v_next_1141_ = v___y_1167_;
v_keys_1142_ = v___y_1168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object* v_val_1375_, lean_object* v_f_1376_, lean_object* v_oa_1377_, lean_object* v_oLo_1378_, lean_object* v_oHi_1379_, lean_object* v_na_1380_, lean_object* v_nLo_1381_, lean_object* v_nHi_1382_, lean_object* v_pre_1383_, lean_object* v_suf_1384_, lean_object* v_ops_1385_, lean_object* v_next_1386_, lean_object* v_keys_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lasm_UI_twoEnded___redArg(v_val_1375_, v_f_1376_, v_oa_1377_, v_oLo_1378_, v_oHi_1379_, v_na_1380_, v_nLo_1381_, v_nHi_1382_, v_pre_1383_, v_suf_1384_, v_ops_1385_, v_next_1386_, v_keys_1387_);
lean_dec_ref(v_na_1380_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object* v_Msg_1389_, lean_object* v_00_u03b2_1390_, lean_object* v_val_1391_, lean_object* v_f_1392_, lean_object* v_oa_1393_, lean_object* v_oLo_1394_, lean_object* v_oHi_1395_, lean_object* v_na_1396_, lean_object* v_nLo_1397_, lean_object* v_nHi_1398_, lean_object* v_pre_1399_, lean_object* v_suf_1400_, lean_object* v_ops_1401_, lean_object* v_next_1402_, lean_object* v_keys_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lasm_UI_twoEnded___redArg(v_val_1391_, v_f_1392_, v_oa_1393_, v_oLo_1394_, v_oHi_1395_, v_na_1396_, v_nLo_1397_, v_nHi_1398_, v_pre_1399_, v_suf_1400_, v_ops_1401_, v_next_1402_, v_keys_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object* v_Msg_1405_, lean_object* v_00_u03b2_1406_, lean_object* v_val_1407_, lean_object* v_f_1408_, lean_object* v_oa_1409_, lean_object* v_oLo_1410_, lean_object* v_oHi_1411_, lean_object* v_na_1412_, lean_object* v_nLo_1413_, lean_object* v_nHi_1414_, lean_object* v_pre_1415_, lean_object* v_suf_1416_, lean_object* v_ops_1417_, lean_object* v_next_1418_, lean_object* v_keys_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lasm_UI_twoEnded(v_Msg_1405_, v_00_u03b2_1406_, v_val_1407_, v_f_1408_, v_oa_1409_, v_oLo_1410_, v_oHi_1411_, v_na_1412_, v_nLo_1413_, v_nHi_1414_, v_pre_1415_, v_suf_1416_, v_ops_1417_, v_next_1418_, v_keys_1419_);
lean_dec_ref(v_na_1412_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0(lean_object* v_00_u03b2_1421_, lean_object* v_m_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v_m_1422_, v_a_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___boxed(lean_object* v_00_u03b2_1425_, lean_object* v_m_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0(v_00_u03b2_1425_, v_m_1426_, v_a_1427_);
lean_dec_ref(v_a_1427_);
lean_dec_ref(v_m_1426_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0(lean_object* v_00_u03b2_1429_, lean_object* v_a_1430_, lean_object* v_x_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1430_, v_x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1433_, lean_object* v_a_1434_, lean_object* v_x_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0(v_00_u03b2_1433_, v_a_1434_, v_x_1435_);
lean_dec(v_x_1435_);
lean_dec_ref(v_a_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter___redArg(lean_object* v_x_1437_, lean_object* v_x_1438_, lean_object* v_x_1439_, lean_object* v_x_1440_, lean_object* v_h__1_1441_, lean_object* v_h__2_1442_, lean_object* v_h__3_1443_, lean_object* v_h__4_1444_){
_start:
{
if (lean_obj_tag(v_x_1437_) == 1)
{
lean_object* v_val_1445_; 
v_val_1445_ = lean_ctor_get(v_x_1437_, 0);
if (lean_obj_tag(v_val_1445_) == 0)
{
lean_object* v___x_1446_; 
lean_dec_ref_known(v_x_1437_, 1);
lean_dec(v_h__4_1444_);
lean_dec(v_h__3_1443_);
lean_dec(v_h__2_1442_);
v___x_1446_ = lean_apply_3(v_h__1_1441_, v_x_1438_, v_x_1439_, v_x_1440_);
return v___x_1446_;
}
else
{
lean_dec(v_h__1_1441_);
if (lean_obj_tag(v_x_1438_) == 1)
{
lean_object* v_val_1447_; 
v_val_1447_ = lean_ctor_get(v_x_1438_, 0);
if (lean_obj_tag(v_val_1447_) == 0)
{
lean_object* v___x_1448_; 
lean_dec_ref_known(v_x_1438_, 1);
lean_dec(v_h__4_1444_);
lean_dec(v_h__3_1443_);
v___x_1448_ = lean_apply_4(v_h__2_1442_, v_x_1437_, v_x_1439_, v_x_1440_, lean_box(0));
return v___x_1448_;
}
else
{
lean_dec(v_h__2_1442_);
if (lean_obj_tag(v_x_1439_) == 1)
{
if (lean_obj_tag(v_x_1440_) == 1)
{
lean_object* v_val_1449_; lean_object* v_val_1450_; lean_object* v_val_1451_; lean_object* v_val_1452_; lean_object* v___x_1453_; 
lean_inc_ref(v_val_1447_);
lean_inc_ref(v_val_1445_);
lean_dec_ref_known(v_x_1438_, 1);
lean_dec_ref_known(v_x_1437_, 1);
lean_dec(v_h__4_1444_);
v_val_1449_ = lean_ctor_get(v_val_1445_, 0);
lean_inc(v_val_1449_);
lean_dec_ref_known(v_val_1445_, 1);
v_val_1450_ = lean_ctor_get(v_val_1447_, 0);
lean_inc(v_val_1450_);
lean_dec_ref_known(v_val_1447_, 1);
v_val_1451_ = lean_ctor_get(v_x_1439_, 0);
lean_inc(v_val_1451_);
lean_dec_ref_known(v_x_1439_, 1);
v_val_1452_ = lean_ctor_get(v_x_1440_, 0);
lean_inc(v_val_1452_);
lean_dec_ref_known(v_x_1440_, 1);
v___x_1453_ = lean_apply_4(v_h__3_1443_, v_val_1449_, v_val_1450_, v_val_1451_, v_val_1452_);
return v___x_1453_;
}
else
{
lean_object* v___x_1454_; 
lean_dec(v_h__3_1443_);
v___x_1454_ = lean_apply_7(v_h__4_1444_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1454_;
}
}
else
{
lean_object* v___x_1455_; 
lean_dec(v_h__3_1443_);
v___x_1455_ = lean_apply_7(v_h__4_1444_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1455_;
}
}
}
else
{
lean_object* v___x_1456_; 
lean_dec(v_h__3_1443_);
lean_dec(v_h__2_1442_);
v___x_1456_ = lean_apply_7(v_h__4_1444_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1456_;
}
}
}
else
{
lean_dec(v_h__3_1443_);
lean_dec(v_h__1_1441_);
if (lean_obj_tag(v_x_1438_) == 1)
{
lean_object* v_val_1457_; 
v_val_1457_ = lean_ctor_get(v_x_1438_, 0);
if (lean_obj_tag(v_val_1457_) == 0)
{
lean_object* v___x_1458_; 
lean_dec_ref_known(v_x_1438_, 1);
lean_dec(v_h__4_1444_);
v___x_1458_ = lean_apply_4(v_h__2_1442_, v_x_1437_, v_x_1439_, v_x_1440_, lean_box(0));
return v___x_1458_;
}
else
{
lean_object* v___x_1459_; 
lean_dec(v_h__2_1442_);
v___x_1459_ = lean_apply_7(v_h__4_1444_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1459_;
}
}
else
{
lean_object* v___x_1460_; 
lean_dec(v_h__2_1442_);
v___x_1460_ = lean_apply_7(v_h__4_1444_, v_x_1437_, v_x_1438_, v_x_1439_, v_x_1440_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1460_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter(lean_object* v_Msg_1461_, lean_object* v_00_u03b2_1462_, lean_object* v_motive_1463_, lean_object* v_x_1464_, lean_object* v_x_1465_, lean_object* v_x_1466_, lean_object* v_x_1467_, lean_object* v_h__1_1468_, lean_object* v_h__2_1469_, lean_object* v_h__3_1470_, lean_object* v_h__4_1471_){
_start:
{
if (lean_obj_tag(v_x_1464_) == 1)
{
lean_object* v_val_1472_; 
v_val_1472_ = lean_ctor_get(v_x_1464_, 0);
if (lean_obj_tag(v_val_1472_) == 0)
{
lean_object* v___x_1473_; 
lean_dec_ref_known(v_x_1464_, 1);
lean_dec(v_h__4_1471_);
lean_dec(v_h__3_1470_);
lean_dec(v_h__2_1469_);
v___x_1473_ = lean_apply_3(v_h__1_1468_, v_x_1465_, v_x_1466_, v_x_1467_);
return v___x_1473_;
}
else
{
lean_dec(v_h__1_1468_);
if (lean_obj_tag(v_x_1465_) == 1)
{
lean_object* v_val_1474_; 
v_val_1474_ = lean_ctor_get(v_x_1465_, 0);
if (lean_obj_tag(v_val_1474_) == 0)
{
lean_object* v___x_1475_; 
lean_dec_ref_known(v_x_1465_, 1);
lean_dec(v_h__4_1471_);
lean_dec(v_h__3_1470_);
v___x_1475_ = lean_apply_4(v_h__2_1469_, v_x_1464_, v_x_1466_, v_x_1467_, lean_box(0));
return v___x_1475_;
}
else
{
lean_dec(v_h__2_1469_);
if (lean_obj_tag(v_x_1466_) == 1)
{
if (lean_obj_tag(v_x_1467_) == 1)
{
lean_object* v_val_1476_; lean_object* v_val_1477_; lean_object* v_val_1478_; lean_object* v_val_1479_; lean_object* v___x_1480_; 
lean_inc_ref(v_val_1474_);
lean_inc_ref(v_val_1472_);
lean_dec_ref_known(v_x_1465_, 1);
lean_dec_ref_known(v_x_1464_, 1);
lean_dec(v_h__4_1471_);
v_val_1476_ = lean_ctor_get(v_val_1472_, 0);
lean_inc(v_val_1476_);
lean_dec_ref_known(v_val_1472_, 1);
v_val_1477_ = lean_ctor_get(v_val_1474_, 0);
lean_inc(v_val_1477_);
lean_dec_ref_known(v_val_1474_, 1);
v_val_1478_ = lean_ctor_get(v_x_1466_, 0);
lean_inc(v_val_1478_);
lean_dec_ref_known(v_x_1466_, 1);
v_val_1479_ = lean_ctor_get(v_x_1467_, 0);
lean_inc(v_val_1479_);
lean_dec_ref_known(v_x_1467_, 1);
v___x_1480_ = lean_apply_4(v_h__3_1470_, v_val_1476_, v_val_1477_, v_val_1478_, v_val_1479_);
return v___x_1480_;
}
else
{
lean_object* v___x_1481_; 
lean_dec(v_h__3_1470_);
v___x_1481_ = lean_apply_7(v_h__4_1471_, v_x_1464_, v_x_1465_, v_x_1466_, v_x_1467_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1481_;
}
}
else
{
lean_object* v___x_1482_; 
lean_dec(v_h__3_1470_);
v___x_1482_ = lean_apply_7(v_h__4_1471_, v_x_1464_, v_x_1465_, v_x_1466_, v_x_1467_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1482_;
}
}
}
else
{
lean_object* v___x_1483_; 
lean_dec(v_h__3_1470_);
lean_dec(v_h__2_1469_);
v___x_1483_ = lean_apply_7(v_h__4_1471_, v_x_1464_, v_x_1465_, v_x_1466_, v_x_1467_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1483_;
}
}
}
else
{
lean_dec(v_h__3_1470_);
lean_dec(v_h__1_1468_);
if (lean_obj_tag(v_x_1465_) == 1)
{
lean_object* v_val_1484_; 
v_val_1484_ = lean_ctor_get(v_x_1465_, 0);
if (lean_obj_tag(v_val_1484_) == 0)
{
lean_object* v___x_1485_; 
lean_dec_ref_known(v_x_1465_, 1);
lean_dec(v_h__4_1471_);
v___x_1485_ = lean_apply_4(v_h__2_1469_, v_x_1464_, v_x_1466_, v_x_1467_, lean_box(0));
return v___x_1485_;
}
else
{
lean_object* v___x_1486_; 
lean_dec(v_h__2_1469_);
v___x_1486_ = lean_apply_7(v_h__4_1471_, v_x_1464_, v_x_1465_, v_x_1466_, v_x_1467_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1486_;
}
}
else
{
lean_object* v___x_1487_; 
lean_dec(v_h__2_1469_);
v___x_1487_ = lean_apply_7(v_h__4_1471_, v_x_1464_, v_x_1465_, v_x_1466_, v_x_1467_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1487_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter___redArg(lean_object* v_x_1488_, lean_object* v_h__1_1489_, lean_object* v_h__2_1490_){
_start:
{
if (lean_obj_tag(v_x_1488_) == 0)
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
lean_dec(v_h__2_1490_);
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_apply_1(v_h__1_1489_, v___x_1491_);
return v___x_1492_;
}
else
{
lean_object* v_val_1493_; lean_object* v___x_1494_; 
lean_dec(v_h__1_1489_);
v_val_1493_ = lean_ctor_get(v_x_1488_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v_x_1488_, 1);
v___x_1494_ = lean_apply_1(v_h__2_1490_, v_val_1493_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter(lean_object* v_motive_1495_, lean_object* v_x_1496_, lean_object* v_h__1_1497_, lean_object* v_h__2_1498_){
_start:
{
if (lean_obj_tag(v_x_1496_) == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_dec(v_h__2_1498_);
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_apply_1(v_h__1_1497_, v___x_1499_);
return v___x_1500_;
}
else
{
lean_object* v_val_1501_; lean_object* v___x_1502_; 
lean_dec(v_h__1_1497_);
v_val_1501_ = lean_ctor_get(v_x_1496_, 0);
lean_inc(v_val_1501_);
lean_dec_ref_known(v_x_1496_, 1);
v___x_1502_ = lean_apply_1(v_h__2_1498_, v_val_1501_);
return v___x_1502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter___redArg(lean_object* v_x_1503_, lean_object* v_h__1_1504_, lean_object* v_h__2_1505_){
_start:
{
if (lean_obj_tag(v_x_1503_) == 0)
{
lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec(v_h__1_1504_);
v___x_1506_ = lean_box(0);
v___x_1507_ = lean_apply_1(v_h__2_1505_, v___x_1506_);
return v___x_1507_;
}
else
{
lean_object* v_val_1508_; lean_object* v___x_1509_; 
lean_dec(v_h__2_1505_);
v_val_1508_ = lean_ctor_get(v_x_1503_, 0);
lean_inc(v_val_1508_);
lean_dec_ref_known(v_x_1503_, 1);
v___x_1509_ = lean_apply_1(v_h__1_1504_, v_val_1508_);
return v___x_1509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter(lean_object* v_motive_1510_, lean_object* v_x_1511_, lean_object* v_h__1_1512_, lean_object* v_h__2_1513_){
_start:
{
if (lean_obj_tag(v_x_1511_) == 0)
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_dec(v_h__1_1512_);
v___x_1514_ = lean_box(0);
v___x_1515_ = lean_apply_1(v_h__2_1513_, v___x_1514_);
return v___x_1515_;
}
else
{
lean_object* v_val_1516_; lean_object* v___x_1517_; 
lean_dec(v_h__2_1513_);
v_val_1516_ = lean_ctor_get(v_x_1511_, 0);
lean_inc(v_val_1516_);
lean_dec_ref_known(v_x_1511_, 1);
v___x_1517_ = lean_apply_1(v_h__1_1512_, v_val_1516_);
return v___x_1517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter___redArg(lean_object* v_x_1518_, lean_object* v_h__1_1519_){
_start:
{
lean_object* v_fst_1520_; lean_object* v_snd_1521_; lean_object* v___x_1522_; 
v_fst_1520_ = lean_ctor_get(v_x_1518_, 0);
lean_inc(v_fst_1520_);
v_snd_1521_ = lean_ctor_get(v_x_1518_, 1);
lean_inc(v_snd_1521_);
lean_dec_ref(v_x_1518_);
v___x_1522_ = lean_apply_2(v_h__1_1519_, v_fst_1520_, v_snd_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter(lean_object* v_Msg_1523_, lean_object* v_motive_1524_, lean_object* v_x_1525_, lean_object* v_h__1_1526_){
_start:
{
lean_object* v_fst_1527_; lean_object* v_snd_1528_; lean_object* v___x_1529_; 
v_fst_1527_ = lean_ctor_get(v_x_1525_, 0);
lean_inc(v_fst_1527_);
v_snd_1528_ = lean_ctor_get(v_x_1525_, 1);
lean_inc(v_snd_1528_);
lean_dec_ref(v_x_1525_);
v___x_1529_ = lean_apply_2(v_h__1_1526_, v_fst_1527_, v_snd_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter___redArg(lean_object* v_found_1530_, lean_object* v_h__1_1531_, lean_object* v_h__2_1532_){
_start:
{
if (lean_obj_tag(v_found_1530_) == 0)
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec(v_h__1_1531_);
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_apply_1(v_h__2_1532_, v___x_1533_);
return v___x_1534_;
}
else
{
lean_object* v_val_1535_; lean_object* v_fst_1536_; lean_object* v_snd_1537_; lean_object* v___x_1538_; 
lean_dec(v_h__2_1532_);
v_val_1535_ = lean_ctor_get(v_found_1530_, 0);
lean_inc(v_val_1535_);
lean_dec_ref_known(v_found_1530_, 1);
v_fst_1536_ = lean_ctor_get(v_val_1535_, 0);
lean_inc(v_fst_1536_);
v_snd_1537_ = lean_ctor_get(v_val_1535_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_val_1535_);
v___x_1538_ = lean_apply_2(v_h__1_1531_, v_fst_1536_, v_snd_1537_);
return v___x_1538_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter(lean_object* v_Msg_1539_, lean_object* v_motive_1540_, lean_object* v_found_1541_, lean_object* v_h__1_1542_, lean_object* v_h__2_1543_){
_start:
{
if (lean_obj_tag(v_found_1541_) == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
lean_dec(v_h__1_1542_);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_apply_1(v_h__2_1543_, v___x_1544_);
return v___x_1545_;
}
else
{
lean_object* v_val_1546_; lean_object* v_fst_1547_; lean_object* v_snd_1548_; lean_object* v___x_1549_; 
lean_dec(v_h__2_1543_);
v_val_1546_ = lean_ctor_get(v_found_1541_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v_found_1541_, 1);
v_fst_1547_ = lean_ctor_get(v_val_1546_, 0);
lean_inc(v_fst_1547_);
v_snd_1548_ = lean_ctor_get(v_val_1546_, 1);
lean_inc(v_snd_1548_);
lean_dec(v_val_1546_);
v___x_1549_ = lean_apply_2(v_h__1_1542_, v_fst_1547_, v_snd_1548_);
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
if (lean_obj_tag(v_a_1550_) == 0)
{
lean_object* v___x_1552_; 
v___x_1552_ = l_List_reverse___redArg(v_a_1551_);
return v___x_1552_;
}
else
{
lean_object* v_head_1553_; lean_object* v_tail_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1563_; 
v_head_1553_ = lean_ctor_get(v_a_1550_, 0);
v_tail_1554_ = lean_ctor_get(v_a_1550_, 1);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_a_1550_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1556_ = v_a_1550_;
v_isShared_1557_ = v_isSharedCheck_1563_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_tail_1554_);
lean_inc(v_head_1553_);
lean_dec(v_a_1550_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1563_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_head_1553_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 1, v_a_1551_);
lean_ctor_set(v___x_1556_, 0, v___x_1558_);
v___x_1560_ = v___x_1556_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1558_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_a_1551_);
v___x_1560_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
v_a_1550_ = v_tail_1554_;
v_a_1551_ = v___x_1560_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object* v_val_1564_, lean_object* v_f_1565_, lean_object* v_x_1566_, lean_object* v_x_1567_, lean_object* v_x_1568_, lean_object* v_x_1569_, lean_object* v_x_1570_){
_start:
{
if (lean_obj_tag(v_x_1566_) == 0)
{
lean_object* v___x_1571_; lean_object* v_r_1572_; lean_object* v_snd_1573_; lean_object* v_fst_1574_; lean_object* v_fst_1575_; lean_object* v_snd_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec_ref(v_f_1565_);
v___x_1571_ = lean_box(0);
v_r_1572_ = l_Lasm_UI_insertAll___redArg(v_val_1564_, v___x_1571_, v_x_1567_, v_x_1568_, v_x_1569_, v_x_1570_);
v_snd_1573_ = lean_ctor_get(v_r_1572_, 1);
lean_inc(v_snd_1573_);
v_fst_1574_ = lean_ctor_get(v_r_1572_, 0);
lean_inc(v_fst_1574_);
lean_dec_ref(v_r_1572_);
v_fst_1575_ = lean_ctor_get(v_snd_1573_, 0);
lean_inc(v_fst_1575_);
v_snd_1576_ = lean_ctor_get(v_snd_1573_, 1);
lean_inc(v_snd_1576_);
lean_dec(v_snd_1573_);
v___x_1577_ = lean_array_to_list(v_fst_1575_);
v___x_1578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1578_, 0, v_fst_1574_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
lean_ctor_set(v___x_1578_, 2, v_snd_1576_);
return v___x_1578_;
}
else
{
if (lean_obj_tag(v_x_1567_) == 0)
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec_ref(v_f_1565_);
lean_dec_ref(v_val_1564_);
v___x_1579_ = l_Lasm_UI_removeAll___redArg(v_x_1566_, v_x_1569_);
v___x_1580_ = lean_array_to_list(v_x_1570_);
v___x_1581_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1579_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
lean_ctor_set(v___x_1581_, 2, v_x_1568_);
return v___x_1581_;
}
else
{
lean_object* v_head_1582_; lean_object* v_tail_1583_; lean_object* v_head_1584_; lean_object* v_tail_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v_head_1582_ = lean_ctor_get(v_x_1566_, 0);
v_tail_1583_ = lean_ctor_get(v_x_1566_, 1);
v_head_1584_ = lean_ctor_get(v_x_1567_, 0);
v_tail_1585_ = lean_ctor_get(v_x_1567_, 1);
lean_inc_ref(v_val_1564_);
lean_inc(v_head_1584_);
v___x_1586_ = lean_apply_1(v_val_1564_, v_head_1584_);
v___x_1587_ = l_Lasm_UI_Live_same___redArg(v_head_1582_, v___x_1586_);
lean_dec_ref(v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v_oa_1590_; lean_object* v_na_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1588_ = lean_box(0);
v___x_1589_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(v_x_1566_, v___x_1588_);
v_oa_1590_ = lean_array_mk(v___x_1589_);
v_na_1591_ = lean_array_mk(v_x_1567_);
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = lean_array_get_size(v_oa_1590_);
v___x_1594_ = lean_array_get_size(v_na_1591_);
v___x_1595_ = lean_box(0);
v___x_1596_ = l_Lasm_UI_twoEnded___redArg(v_val_1564_, v_f_1565_, v_oa_1590_, v___x_1592_, v___x_1593_, v_na_1591_, v___x_1592_, v___x_1594_, v_x_1570_, v___x_1588_, v_x_1569_, v_x_1568_, v___x_1595_);
lean_dec_ref(v_na_1591_);
return v___x_1596_;
}
else
{
lean_object* v_r_1597_; lean_object* v_ops_1598_; lean_object* v_live_1599_; lean_object* v_next_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_inc(v_tail_1585_);
lean_inc(v_head_1584_);
lean_inc(v_tail_1583_);
lean_inc(v_head_1582_);
lean_dec_ref_known(v_x_1567_, 2);
lean_dec_ref_known(v_x_1566_, 2);
lean_inc_ref(v_f_1565_);
v_r_1597_ = lean_apply_3(v_f_1565_, v_head_1582_, v_head_1584_, v_x_1568_);
v_ops_1598_ = lean_ctor_get(v_r_1597_, 0);
lean_inc(v_ops_1598_);
v_live_1599_ = lean_ctor_get(v_r_1597_, 1);
lean_inc_ref(v_live_1599_);
v_next_1600_ = lean_ctor_get(v_r_1597_, 2);
lean_inc(v_next_1600_);
lean_dec_ref(v_r_1597_);
v___x_1601_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_1569_, v_ops_1598_);
v___x_1602_ = lean_array_push(v_x_1570_, v_live_1599_);
v_x_1566_ = v_tail_1583_;
v_x_1567_ = v_tail_1585_;
v_x_1568_ = v_next_1600_;
v_x_1569_ = v___x_1601_;
v_x_1570_ = v___x_1602_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object* v_Msg_1604_, lean_object* v_00_u03b2_1605_, lean_object* v_val_1606_, lean_object* v_f_1607_, lean_object* v_x_1608_, lean_object* v_x_1609_, lean_object* v_x_1610_, lean_object* v_x_1611_, lean_object* v_x_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lasm_UI_prefixPhase___redArg(v_val_1606_, v_f_1607_, v_x_1608_, v_x_1609_, v_x_1610_, v_x_1611_, v_x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0(lean_object* v_Msg_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(v_a_1615_, v_a_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object* v_val_1624_, lean_object* v_f_1625_, lean_object* v_old_1626_, lean_object* v_new_1627_, lean_object* v_next_1628_){
_start:
{
lean_object* v_old_1630_; lean_object* v_new_1631_; 
if (lean_obj_tag(v_old_1626_) == 0)
{
if (lean_obj_tag(v_new_1627_) == 0)
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
lean_dec_ref(v_f_1625_);
lean_dec_ref(v_val_1624_);
v___x_1634_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1635_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
lean_ctor_set(v___x_1635_, 1, v_old_1626_);
lean_ctor_set(v___x_1635_, 2, v_next_1628_);
return v___x_1635_;
}
else
{
v_old_1630_ = v_old_1626_;
v_new_1631_ = v_new_1627_;
goto v___jp_1629_;
}
}
else
{
if (lean_obj_tag(v_new_1627_) == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec_ref_known(v_old_1626_, 2);
lean_dec_ref(v_f_1625_);
lean_dec_ref(v_val_1624_);
v___x_1636_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_1637_ = lean_box(0);
v___x_1638_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
lean_ctor_set(v___x_1638_, 2, v_next_1628_);
return v___x_1638_;
}
else
{
v_old_1630_ = v_old_1626_;
v_new_1631_ = v_new_1627_;
goto v___jp_1629_;
}
}
v___jp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1633_ = l_Lasm_UI_prefixPhase___redArg(v_val_1624_, v_f_1625_, v_old_1630_, v_new_1631_, v_next_1628_, v___x_1632_, v___x_1632_);
return v___x_1633_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object* v_Msg_1639_, lean_object* v_00_u03b2_1640_, lean_object* v_val_1641_, lean_object* v_f_1642_, lean_object* v_old_1643_, lean_object* v_new_1644_, lean_object* v_next_1645_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lasm_UI_diffChildren___redArg(v_val_1641_, v_f_1642_, v_old_1643_, v_new_1644_, v_next_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0(lean_object* v_self_1647_){
_start:
{
lean_inc_ref(v_self_1647_);
return v_self_1647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0___boxed(lean_object* v_self_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lasm_UI_diffNode___redArg___lam__0(v_self_1648_);
lean_dec_ref(v_self_1648_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object* v_o_1651_, lean_object* v_n_1652_, lean_object* v_next_1653_){
_start:
{
lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v_o_1666_; lean_object* v_n_1667_; 
if (lean_obj_tag(v_o_1651_) == 0)
{
if (lean_obj_tag(v_n_1652_) == 0)
{
lean_object* v_id_1672_; lean_object* v_s_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1689_; 
v_id_1672_ = lean_ctor_get(v_o_1651_, 0);
v_s_1673_ = lean_ctor_get(v_o_1651_, 1);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_o_1651_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1675_ = v_o_1651_;
v_isShared_1676_ = v_isSharedCheck_1689_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_s_1673_);
lean_inc(v_id_1672_);
lean_dec(v_o_1651_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1689_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_s_1677_; lean_object* v___y_1679_; uint8_t v___x_1684_; 
v_s_1677_ = lean_ctor_get(v_n_1652_, 0);
lean_inc_ref(v_s_1677_);
lean_dec_ref_known(v_n_1652_, 1);
v___x_1684_ = lean_string_dec_eq(v_s_1673_, v_s_1677_);
lean_dec_ref(v_s_1673_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
lean_inc_ref(v_s_1677_);
lean_inc(v_id_1672_);
v___x_1685_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1685_, 0, v_id_1672_);
lean_ctor_set(v___x_1685_, 1, v_s_1677_);
v___x_1686_ = lean_box(0);
v___x_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1685_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___y_1679_ = v___x_1687_;
goto v___jp_1678_;
}
else
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_box(0);
v___y_1679_ = v___x_1688_;
goto v___jp_1678_;
}
v___jp_1678_:
{
lean_object* v___x_1681_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v_s_1677_);
v___x_1681_ = v___x_1675_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_id_1672_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v_s_1677_);
v___x_1681_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1682_, 0, v___y_1679_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
lean_ctor_set(v___x_1682_, 2, v_next_1653_);
return v___x_1682_;
}
}
}
}
else
{
v_o_1666_ = v_o_1651_;
v_n_1667_ = v_n_1652_;
goto v___jp_1665_;
}
}
else
{
lean_object* v_id_1690_; uint8_t v_ns_1691_; lean_object* v_tag_1692_; lean_object* v_attrs_1693_; lean_object* v_children_1694_; 
v_id_1690_ = lean_ctor_get(v_o_1651_, 0);
v_ns_1691_ = lean_ctor_get_uint8(v_o_1651_, sizeof(void*)*5);
v_tag_1692_ = lean_ctor_get(v_o_1651_, 1);
v_attrs_1693_ = lean_ctor_get(v_o_1651_, 3);
v_children_1694_ = lean_ctor_get(v_o_1651_, 4);
if (lean_obj_tag(v_n_1652_) == 1)
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1757_; 
lean_inc(v_children_1694_);
lean_inc(v_attrs_1693_);
lean_inc_ref(v_tag_1692_);
lean_inc(v_id_1690_);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_o_1651_);
if (v_isSharedCheck_1757_ == 0)
{
lean_object* v_unused_1758_; lean_object* v_unused_1759_; lean_object* v_unused_1760_; lean_object* v_unused_1761_; lean_object* v_unused_1762_; 
v_unused_1758_ = lean_ctor_get(v_o_1651_, 4);
lean_dec(v_unused_1758_);
v_unused_1759_ = lean_ctor_get(v_o_1651_, 3);
lean_dec(v_unused_1759_);
v_unused_1760_ = lean_ctor_get(v_o_1651_, 2);
lean_dec(v_unused_1760_);
v_unused_1761_ = lean_ctor_get(v_o_1651_, 1);
lean_dec(v_unused_1761_);
v_unused_1762_ = lean_ctor_get(v_o_1651_, 0);
lean_dec(v_unused_1762_);
v___x_1713_ = v_o_1651_;
v_isShared_1714_ = v_isSharedCheck_1757_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_o_1651_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1757_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
uint8_t v_ns_1715_; lean_object* v_tag_1716_; lean_object* v_key_1717_; lean_object* v_attrs_1718_; lean_object* v_children_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; uint8_t v___x_1722_; 
v_ns_1715_ = lean_ctor_get_uint8(v_n_1652_, sizeof(void*)*4);
v_tag_1716_ = lean_ctor_get(v_n_1652_, 0);
v_key_1717_ = lean_ctor_get(v_n_1652_, 1);
v_attrs_1718_ = lean_ctor_get(v_n_1652_, 2);
v_children_1719_ = lean_ctor_get(v_n_1652_, 3);
v___x_1720_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1691_);
v___x_1721_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1715_);
v___x_1722_ = lean_nat_dec_eq(v___x_1720_, v___x_1721_);
lean_dec(v___x_1721_);
lean_dec(v___x_1720_);
if (v___x_1722_ == 0)
{
lean_del_object(v___x_1713_);
lean_dec(v_children_1694_);
lean_dec(v_attrs_1693_);
lean_dec_ref(v_tag_1692_);
goto v___jp_1695_;
}
else
{
uint8_t v___x_1723_; 
v___x_1723_ = lean_string_dec_eq(v_tag_1692_, v_tag_1716_);
lean_dec_ref(v_tag_1692_);
if (v___x_1723_ == 0)
{
lean_del_object(v___x_1713_);
lean_dec(v_children_1694_);
lean_dec(v_attrs_1693_);
goto v___jp_1695_;
}
else
{
lean_object* v___f_1724_; lean_object* v___f_1725_; lean_object* v_r_1726_; lean_object* v___y_1728_; lean_object* v_ops_1742_; lean_object* v_aops_1743_; lean_object* v___y_1745_; lean_object* v___x_1749_; lean_object* v___x_1750_; uint8_t v___x_1751_; 
lean_inc(v_children_1719_);
lean_inc_n(v_attrs_1718_, 2);
lean_inc(v_key_1717_);
lean_inc_ref(v_tag_1716_);
lean_dec_ref_known(v_n_1652_, 4);
v___f_1724_ = lean_alloc_closure((void*)(l_Lasm_UI_diffNode___redArg), 3, 0);
v___f_1725_ = ((lean_object*)(l_Lasm_UI_diffNode___redArg___closed__0));
v_r_1726_ = l_Lasm_UI_diffChildren___redArg(v___f_1725_, v___f_1724_, v_children_1694_, v_children_1719_, v_next_1653_);
v_ops_1742_ = lean_ctor_get(v_r_1726_, 0);
lean_inc_ref(v_ops_1742_);
v_aops_1743_ = l_Lasm_UI_diffAttrs___redArg(v_attrs_1693_, v_attrs_1718_);
v___x_1749_ = lean_array_get_size(v_ops_1742_);
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_nat_dec_eq(v___x_1749_, v___x_1750_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1752_ = lean_array_to_list(v_ops_1742_);
lean_inc(v_id_1690_);
v___x_1753_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1753_, 0, v_id_1690_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___y_1745_ = v___x_1755_;
goto v___jp_1744_;
}
else
{
lean_object* v___x_1756_; 
lean_dec_ref(v_ops_1742_);
v___x_1756_ = lean_box(0);
v___y_1745_ = v___x_1756_;
goto v___jp_1744_;
}
v___jp_1727_:
{
lean_object* v_live_1729_; lean_object* v_next_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1740_; 
v_live_1729_ = lean_ctor_get(v_r_1726_, 1);
v_next_1730_ = lean_ctor_get(v_r_1726_, 2);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_r_1726_);
if (v_isSharedCheck_1740_ == 0)
{
lean_object* v_unused_1741_; 
v_unused_1741_ = lean_ctor_get(v_r_1726_, 0);
lean_dec(v_unused_1741_);
v___x_1732_ = v_r_1726_;
v_isShared_1733_ = v_isSharedCheck_1740_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_next_1730_);
lean_inc(v_live_1729_);
lean_dec(v_r_1726_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1740_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 4, v_live_1729_);
lean_ctor_set(v___x_1713_, 3, v_attrs_1718_);
lean_ctor_set(v___x_1713_, 2, v_key_1717_);
lean_ctor_set(v___x_1713_, 1, v_tag_1716_);
v___x_1735_ = v___x_1713_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_id_1690_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_tag_1716_);
lean_ctor_set(v_reuseFailAlloc_1739_, 2, v_key_1717_);
lean_ctor_set(v_reuseFailAlloc_1739_, 3, v_attrs_1718_);
lean_ctor_set(v_reuseFailAlloc_1739_, 4, v_live_1729_);
v___x_1735_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
lean_object* v___x_1737_; 
lean_ctor_set_uint8(v___x_1735_, sizeof(void*)*5, v_ns_1715_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1735_);
lean_ctor_set(v___x_1732_, 0, v___y_1728_);
v___x_1737_ = v___x_1732_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___y_1728_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v_next_1730_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
v___jp_1744_:
{
uint8_t v___x_1746_; 
v___x_1746_ = l_List_isEmpty___redArg(v_aops_1743_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_inc(v_id_1690_);
v___x_1747_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1747_, 0, v_id_1690_);
lean_ctor_set(v___x_1747_, 1, v_aops_1743_);
v___x_1748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
lean_ctor_set(v___x_1748_, 1, v___y_1745_);
v___y_1728_ = v___x_1748_;
goto v___jp_1727_;
}
else
{
lean_dec(v_aops_1743_);
v___y_1728_ = v___y_1745_;
goto v___jp_1727_;
}
}
}
}
}
}
else
{
v_o_1666_ = v_o_1651_;
v_n_1667_ = v_n_1652_;
goto v___jp_1665_;
}
v___jp_1695_:
{
lean_object* v_c_1696_; lean_object* v_fst_1697_; lean_object* v_snd_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1711_; 
v_c_1696_ = l_Lasm_UI_create___redArg(v_n_1652_, v_next_1653_);
lean_dec_ref(v_n_1652_);
v_fst_1697_ = lean_ctor_get(v_c_1696_, 0);
v_snd_1698_ = lean_ctor_get(v_c_1696_, 1);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_c_1696_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1700_ = v_c_1696_;
v_isShared_1701_ = v_isSharedCheck_1711_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_snd_1698_);
lean_inc(v_fst_1697_);
lean_dec(v_c_1696_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1711_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1704_; 
lean_inc(v_id_1690_);
v___x_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1702_, 0, v_id_1690_);
lean_inc(v_fst_1697_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v___x_1702_);
v___x_1704_ = v___x_1700_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_fst_1697_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1705_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1705_, 0, v_id_1690_);
v___x_1706_ = lean_box(0);
v___x_1707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1705_);
lean_ctor_set(v___x_1707_, 1, v___x_1706_);
v___x_1708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1704_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
lean_ctor_set(v___x_1709_, 1, v_fst_1697_);
lean_ctor_set(v___x_1709_, 2, v_snd_1698_);
return v___x_1709_;
}
}
}
}
v___jp_1654_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_inc(v___y_1657_);
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___y_1657_);
lean_inc(v___y_1655_);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___y_1655_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___y_1657_);
v___x_1661_ = lean_box(0);
v___x_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1660_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1659_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___y_1655_);
lean_ctor_set(v___x_1664_, 2, v___y_1656_);
return v___x_1664_;
}
v___jp_1665_:
{
lean_object* v_c_1668_; lean_object* v_fst_1669_; lean_object* v_snd_1670_; lean_object* v_id_1671_; 
v_c_1668_ = l_Lasm_UI_create___redArg(v_n_1667_, v_next_1653_);
lean_dec_ref(v_n_1667_);
v_fst_1669_ = lean_ctor_get(v_c_1668_, 0);
lean_inc(v_fst_1669_);
v_snd_1670_ = lean_ctor_get(v_c_1668_, 1);
lean_inc(v_snd_1670_);
lean_dec_ref(v_c_1668_);
v_id_1671_ = lean_ctor_get(v_o_1666_, 0);
lean_inc(v_id_1671_);
lean_dec_ref(v_o_1666_);
v___y_1655_ = v_fst_1669_;
v___y_1656_ = v_snd_1670_;
v___y_1657_ = v_id_1671_;
goto v___jp_1654_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object* v_Msg_1763_, lean_object* v_o_1764_, lean_object* v_n_1765_, lean_object* v_next_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l_Lasm_UI_diffNode___redArg(v_o_1764_, v_n_1765_, v_next_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object* v_x_1768_, lean_object* v_x_1769_, lean_object* v_h__1_1770_, lean_object* v_h__2_1771_, lean_object* v_h__3_1772_){
_start:
{
if (lean_obj_tag(v_x_1768_) == 0)
{
lean_dec(v_h__2_1771_);
if (lean_obj_tag(v_x_1769_) == 0)
{
lean_object* v_id_1773_; lean_object* v_s_1774_; lean_object* v_s_1775_; lean_object* v___x_1776_; 
lean_dec(v_h__3_1772_);
v_id_1773_ = lean_ctor_get(v_x_1768_, 0);
lean_inc(v_id_1773_);
v_s_1774_ = lean_ctor_get(v_x_1768_, 1);
lean_inc_ref(v_s_1774_);
lean_dec_ref_known(v_x_1768_, 2);
v_s_1775_ = lean_ctor_get(v_x_1769_, 0);
lean_inc_ref(v_s_1775_);
lean_dec_ref_known(v_x_1769_, 1);
v___x_1776_ = lean_apply_3(v_h__1_1770_, v_id_1773_, v_s_1774_, v_s_1775_);
return v___x_1776_;
}
else
{
lean_object* v___x_1777_; 
lean_dec(v_h__1_1770_);
v___x_1777_ = lean_apply_4(v_h__3_1772_, v_x_1768_, v_x_1769_, lean_box(0), lean_box(0));
return v___x_1777_;
}
}
else
{
lean_dec(v_h__1_1770_);
if (lean_obj_tag(v_x_1769_) == 1)
{
lean_object* v_id_1778_; uint8_t v_ns_1779_; lean_object* v_tag_1780_; lean_object* v_key_1781_; lean_object* v_attrs_1782_; lean_object* v_children_1783_; uint8_t v_ns_1784_; lean_object* v_tag_1785_; lean_object* v_key_1786_; lean_object* v_attrs_1787_; lean_object* v_children_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec(v_h__3_1772_);
v_id_1778_ = lean_ctor_get(v_x_1768_, 0);
lean_inc(v_id_1778_);
v_ns_1779_ = lean_ctor_get_uint8(v_x_1768_, sizeof(void*)*5);
v_tag_1780_ = lean_ctor_get(v_x_1768_, 1);
lean_inc_ref(v_tag_1780_);
v_key_1781_ = lean_ctor_get(v_x_1768_, 2);
lean_inc(v_key_1781_);
v_attrs_1782_ = lean_ctor_get(v_x_1768_, 3);
lean_inc(v_attrs_1782_);
v_children_1783_ = lean_ctor_get(v_x_1768_, 4);
lean_inc(v_children_1783_);
lean_dec_ref_known(v_x_1768_, 5);
v_ns_1784_ = lean_ctor_get_uint8(v_x_1769_, sizeof(void*)*4);
v_tag_1785_ = lean_ctor_get(v_x_1769_, 0);
lean_inc_ref(v_tag_1785_);
v_key_1786_ = lean_ctor_get(v_x_1769_, 1);
lean_inc(v_key_1786_);
v_attrs_1787_ = lean_ctor_get(v_x_1769_, 2);
lean_inc(v_attrs_1787_);
v_children_1788_ = lean_ctor_get(v_x_1769_, 3);
lean_inc(v_children_1788_);
lean_dec_ref_known(v_x_1769_, 4);
v___x_1789_ = lean_box(v_ns_1779_);
v___x_1790_ = lean_box(v_ns_1784_);
v___x_1791_ = lean_apply_11(v_h__2_1771_, v_id_1778_, v___x_1789_, v_tag_1780_, v_key_1781_, v_attrs_1782_, v_children_1783_, v___x_1790_, v_tag_1785_, v_key_1786_, v_attrs_1787_, v_children_1788_);
return v___x_1791_;
}
else
{
lean_object* v___x_1792_; 
lean_dec(v_h__2_1771_);
v___x_1792_ = lean_apply_4(v_h__3_1772_, v_x_1768_, v_x_1769_, lean_box(0), lean_box(0));
return v___x_1792_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object* v_Msg_1793_, lean_object* v_motive_1794_, lean_object* v_x_1795_, lean_object* v_x_1796_, lean_object* v_h__1_1797_, lean_object* v_h__2_1798_, lean_object* v_h__3_1799_){
_start:
{
if (lean_obj_tag(v_x_1795_) == 0)
{
lean_dec(v_h__2_1798_);
if (lean_obj_tag(v_x_1796_) == 0)
{
lean_object* v_id_1800_; lean_object* v_s_1801_; lean_object* v_s_1802_; lean_object* v___x_1803_; 
lean_dec(v_h__3_1799_);
v_id_1800_ = lean_ctor_get(v_x_1795_, 0);
lean_inc(v_id_1800_);
v_s_1801_ = lean_ctor_get(v_x_1795_, 1);
lean_inc_ref(v_s_1801_);
lean_dec_ref_known(v_x_1795_, 2);
v_s_1802_ = lean_ctor_get(v_x_1796_, 0);
lean_inc_ref(v_s_1802_);
lean_dec_ref_known(v_x_1796_, 1);
v___x_1803_ = lean_apply_3(v_h__1_1797_, v_id_1800_, v_s_1801_, v_s_1802_);
return v___x_1803_;
}
else
{
lean_object* v___x_1804_; 
lean_dec(v_h__1_1797_);
v___x_1804_ = lean_apply_4(v_h__3_1799_, v_x_1795_, v_x_1796_, lean_box(0), lean_box(0));
return v___x_1804_;
}
}
else
{
lean_dec(v_h__1_1797_);
if (lean_obj_tag(v_x_1796_) == 1)
{
lean_object* v_id_1805_; uint8_t v_ns_1806_; lean_object* v_tag_1807_; lean_object* v_key_1808_; lean_object* v_attrs_1809_; lean_object* v_children_1810_; uint8_t v_ns_1811_; lean_object* v_tag_1812_; lean_object* v_key_1813_; lean_object* v_attrs_1814_; lean_object* v_children_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_dec(v_h__3_1799_);
v_id_1805_ = lean_ctor_get(v_x_1795_, 0);
lean_inc(v_id_1805_);
v_ns_1806_ = lean_ctor_get_uint8(v_x_1795_, sizeof(void*)*5);
v_tag_1807_ = lean_ctor_get(v_x_1795_, 1);
lean_inc_ref(v_tag_1807_);
v_key_1808_ = lean_ctor_get(v_x_1795_, 2);
lean_inc(v_key_1808_);
v_attrs_1809_ = lean_ctor_get(v_x_1795_, 3);
lean_inc(v_attrs_1809_);
v_children_1810_ = lean_ctor_get(v_x_1795_, 4);
lean_inc(v_children_1810_);
lean_dec_ref_known(v_x_1795_, 5);
v_ns_1811_ = lean_ctor_get_uint8(v_x_1796_, sizeof(void*)*4);
v_tag_1812_ = lean_ctor_get(v_x_1796_, 0);
lean_inc_ref(v_tag_1812_);
v_key_1813_ = lean_ctor_get(v_x_1796_, 1);
lean_inc(v_key_1813_);
v_attrs_1814_ = lean_ctor_get(v_x_1796_, 2);
lean_inc(v_attrs_1814_);
v_children_1815_ = lean_ctor_get(v_x_1796_, 3);
lean_inc(v_children_1815_);
lean_dec_ref_known(v_x_1796_, 4);
v___x_1816_ = lean_box(v_ns_1806_);
v___x_1817_ = lean_box(v_ns_1811_);
v___x_1818_ = lean_apply_11(v_h__2_1798_, v_id_1805_, v___x_1816_, v_tag_1807_, v_key_1808_, v_attrs_1809_, v_children_1810_, v___x_1817_, v_tag_1812_, v_key_1813_, v_attrs_1814_, v_children_1815_);
return v___x_1818_;
}
else
{
lean_object* v___x_1819_; 
lean_dec(v_h__2_1798_);
v___x_1819_ = lean_apply_4(v_h__3_1799_, v_x_1795_, v_x_1796_, lean_box(0), lean_box(0));
return v___x_1819_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0(lean_object* v___y_1820_){
_start:
{
lean_inc_ref(v___y_1820_);
return v___y_1820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0___boxed(lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lasm_UI_diff___redArg___lam__0(v___y_1821_);
lean_dec_ref(v___y_1821_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object* v_old_1825_, lean_object* v_new_1826_, lean_object* v_next_1827_){
_start:
{
lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___f_1828_ = ((lean_object*)(l_Lasm_UI_diff___redArg___closed__0));
v___x_1829_ = ((lean_object*)(l_Lasm_UI_diff___redArg___closed__1));
v___x_1830_ = l_Lasm_UI_diffChildren___redArg(v___f_1828_, v___x_1829_, v_old_1825_, v_new_1826_, v_next_1827_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object* v_Msg_1831_, lean_object* v_old_1832_, lean_object* v_new_1833_, lean_object* v_next_1834_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = l_Lasm_UI_diff___redArg(v_old_1832_, v_new_1833_, v_next_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps___redArg(lean_object* v_new_1836_, lean_object* v_next_1837_){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_box(0);
v___x_1839_ = l_Lasm_UI_diff___redArg(v___x_1838_, v_new_1836_, v_next_1837_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps(lean_object* v_Msg_1840_, lean_object* v_new_1841_, lean_object* v_next_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Lasm_UI_mountOps___redArg(v_new_1841_, v_next_1842_);
return v___x_1843_;
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
