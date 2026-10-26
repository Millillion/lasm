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
uint8_t l_Lasm_UI_instDecidableEqPropVal_decEq(lean_object*, lean_object*);
uint8_t l_Lasm_UI_instDecidableEqListener_decEq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(lean_object* v_a_1132_, lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1133_) == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_box(0);
return v___x_1134_;
}
else
{
lean_object* v_key_1135_; lean_object* v_value_1136_; lean_object* v_tail_1137_; uint8_t v___x_1138_; 
v_key_1135_ = lean_ctor_get(v_x_1133_, 0);
v_value_1136_ = lean_ctor_get(v_x_1133_, 1);
v_tail_1137_ = lean_ctor_get(v_x_1133_, 2);
v___x_1138_ = lean_string_dec_eq(v_key_1135_, v_a_1132_);
if (v___x_1138_ == 0)
{
v_x_1133_ = v_tail_1137_;
goto _start;
}
else
{
lean_object* v___x_1140_; 
lean_inc(v_value_1136_);
v___x_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_value_1136_);
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg___boxed(lean_object* v_a_1141_, lean_object* v_x_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1141_, v_x_1142_);
lean_dec(v_x_1142_);
lean_dec_ref(v_a_1141_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(lean_object* v_m_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_buckets_1146_; lean_object* v___x_1147_; uint64_t v___x_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; uint64_t v_fold_1151_; uint64_t v___x_1152_; uint64_t v___x_1153_; uint64_t v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; size_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_buckets_1146_ = lean_ctor_get(v_m_1144_, 1);
v___x_1147_ = lean_array_get_size(v_buckets_1146_);
v___x_1148_ = lean_string_hash(v_a_1145_);
v___x_1149_ = 32ULL;
v___x_1150_ = lean_uint64_shift_right(v___x_1148_, v___x_1149_);
v_fold_1151_ = lean_uint64_xor(v___x_1148_, v___x_1150_);
v___x_1152_ = 16ULL;
v___x_1153_ = lean_uint64_shift_right(v_fold_1151_, v___x_1152_);
v___x_1154_ = lean_uint64_xor(v_fold_1151_, v___x_1153_);
v___x_1155_ = lean_uint64_to_usize(v___x_1154_);
v___x_1156_ = lean_usize_of_nat(v___x_1147_);
v___x_1157_ = ((size_t)1ULL);
v___x_1158_ = lean_usize_sub(v___x_1156_, v___x_1157_);
v___x_1159_ = lean_usize_land(v___x_1155_, v___x_1158_);
v___x_1160_ = lean_array_uget_borrowed(v_buckets_1146_, v___x_1159_);
v___x_1161_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1145_, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg___boxed(lean_object* v_m_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v_m_1162_, v_a_1163_);
lean_dec_ref(v_a_1163_);
lean_dec_ref(v_m_1162_);
return v_res_1164_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__0(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1165_ = lean_box(0);
v___x_1166_ = lean_unsigned_to_nat(16u);
v___x_1167_ = lean_mk_array(v___x_1166_, v___x_1165_);
return v___x_1167_;
}
}
static lean_object* _init_l_Lasm_UI_twoEnded___redArg___closed__1(void){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__0, &l_Lasm_UI_twoEnded___redArg___closed__0_once, _init_l_Lasm_UI_twoEnded___redArg___closed__0);
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
lean_ctor_set(v___x_1170_, 1, v___x_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg(lean_object* v_val_1171_, lean_object* v_f_1172_, lean_object* v_oa_1173_, lean_object* v_oLo_1174_, lean_object* v_oHi_1175_, lean_object* v_na_1176_, lean_object* v_nLo_1177_, lean_object* v_nHi_1178_, lean_object* v_pre_1179_, lean_object* v_suf_1180_, lean_object* v_ops_1181_, lean_object* v_next_1182_, lean_object* v_keys_1183_){
_start:
{
lean_object* v___y_1185_; lean_object* v___y_1195_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; lean_object* v___y_1211_; uint8_t v___x_1216_; 
v___x_1216_ = lean_nat_dec_lt(v_oLo_1174_, v_oHi_1175_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_dec(v_keys_1183_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
v___x_1217_ = l_List_head_x3f___redArg(v_suf_1180_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_box(0);
v___y_1185_ = v___x_1218_;
goto v___jp_1184_;
}
else
{
lean_object* v_val_1219_; lean_object* v_id_1220_; 
v_val_1219_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_val_1219_);
lean_dec_ref_known(v___x_1217_, 1);
v_id_1220_ = lean_ctor_get(v_val_1219_, 0);
lean_inc(v_id_1220_);
lean_dec(v_val_1219_);
v___y_1195_ = v_id_1220_;
goto v___jp_1194_;
}
}
else
{
uint8_t v___x_1221_; 
v___x_1221_ = lean_nat_dec_lt(v_nLo_1177_, v_nHi_1178_);
if (v___x_1221_ == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
v___x_1222_ = l_Lasm_UI_removeRange___redArg(v_oa_1173_, v_oLo_1174_, v_oHi_1175_, v_ops_1181_);
lean_dec(v_oHi_1175_);
lean_dec_ref(v_oa_1173_);
v___x_1223_ = lean_array_to_list(v_pre_1179_);
v___x_1224_ = l_List_appendTR___redArg(v___x_1223_, v_suf_1180_);
v___x_1225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1222_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
lean_ctor_set(v___x_1225_, 2, v_next_1182_);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1226_ = lean_array_get_size(v_oa_1173_);
v___x_1227_ = lean_nat_dec_lt(v_oLo_1174_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1228_ = lean_unsigned_to_nat(1u);
v___x_1229_ = lean_nat_sub(v_oHi_1175_, v___x_1228_);
v___x_1230_ = lean_nat_dec_lt(v___x_1229_, v___x_1226_);
if (v___x_1230_ == 0)
{
lean_dec(v___x_1229_);
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_array_fget_borrowed(v_oa_1173_, v___x_1229_);
lean_dec(v___x_1229_);
if (lean_obj_tag(v___x_1231_) == 0)
{
goto v___jp_1201_;
}
else
{
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
goto v___jp_1197_;
}
}
}
else
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_array_fget(v_oa_1173_, v_oLo_1174_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_unsigned_to_nat(1u);
v___x_1234_ = lean_nat_add(v_oLo_1174_, v___x_1233_);
lean_dec(v_oLo_1174_);
v_oLo_1174_ = v___x_1234_;
goto _start;
}
else
{
lean_object* v_val_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1415_; 
v_val_1236_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1238_ = v___x_1232_;
v_isShared_1239_ = v_isSharedCheck_1415_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_val_1236_);
lean_dec(v___x_1232_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1415_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1267_ = lean_nat_sub(v_oHi_1175_, v___x_1240_);
v___x_1268_ = lean_nat_dec_lt(v___x_1267_, v___x_1226_);
if (v___x_1268_ == 0)
{
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_dec(v_val_1236_);
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_array_fget(v_oa_1173_, v___x_1267_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_dec(v_val_1236_);
goto v___jp_1201_;
}
else
{
lean_object* v_val_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1414_; 
v_val_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1414_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_val_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1414_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = lean_array_get_size(v_na_1176_);
v___x_1275_ = lean_nat_dec_lt(v_nLo_1177_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_del_object(v___x_1272_);
lean_dec(v_val_1270_);
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_dec(v_val_1236_);
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = lean_nat_sub(v_nHi_1178_, v___x_1240_);
v___x_1277_ = lean_nat_dec_lt(v___x_1276_, v___x_1274_);
if (v___x_1277_ == 0)
{
lean_dec(v___x_1276_);
lean_del_object(v___x_1272_);
lean_dec(v_val_1270_);
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_dec(v_val_1236_);
lean_dec(v_keys_1183_);
lean_dec(v_nHi_1178_);
lean_dec(v_nLo_1177_);
lean_dec(v_oHi_1175_);
lean_dec(v_oLo_1174_);
lean_dec_ref(v_oa_1173_);
lean_dec_ref(v_f_1172_);
lean_dec_ref(v_val_1171_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1278_; lean_object* v_fst_1280_; lean_object* v_fst_1281_; lean_object* v_snd_1282_; lean_object* v___x_1289_; lean_object* v_fst_1291_; lean_object* v___y_1299_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; uint8_t v___y_1310_; uint8_t v___x_1331_; 
v___x_1278_ = lean_array_fget_borrowed(v_na_1176_, v_nLo_1177_);
lean_inc_ref(v_val_1171_);
lean_inc(v___x_1278_);
v___x_1289_ = lean_apply_1(v_val_1171_, v___x_1278_);
v___x_1331_ = l_Lasm_UI_Live_same___redArg(v_val_1236_, v___x_1289_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1332_ = lean_array_fget_borrowed(v_na_1176_, v___x_1276_);
lean_inc_ref(v_val_1171_);
lean_inc(v___x_1332_);
v___x_1333_ = lean_apply_1(v_val_1171_, v___x_1332_);
v___x_1334_ = l_Lasm_UI_Live_same___redArg(v_val_1270_, v___x_1333_);
if (v___x_1334_ == 0)
{
uint8_t v___x_1335_; 
v___x_1335_ = l_Lasm_UI_Live_same___redArg(v_val_1236_, v___x_1333_);
lean_dec_ref(v___x_1333_);
if (v___x_1335_ == 0)
{
uint8_t v___x_1336_; 
lean_dec(v___x_1276_);
v___x_1336_ = l_Lasm_UI_Live_same___redArg(v_val_1270_, v___x_1289_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_dec(v_val_1270_);
lean_dec(v___x_1267_);
v___x_1337_ = l_Lasm_UI_Html_key_x3f___redArg(v___x_1289_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_del_object(v___x_1272_);
lean_del_object(v___x_1238_);
v_fst_1291_ = v_keys_1183_;
goto v___jp_1290_;
}
else
{
lean_object* v_val_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1355_; 
v_val_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1355_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_val_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1355_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___y_1343_; 
if (lean_obj_tag(v_keys_1183_) == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = lean_obj_once(&l_Lasm_UI_twoEnded___redArg___closed__1, &l_Lasm_UI_twoEnded___redArg___closed__1_once, _init_l_Lasm_UI_twoEnded___redArg___closed__1);
lean_inc(v_oLo_1174_);
v___x_1353_ = l_Lasm_UI_keyIndex___redArg(v_oa_1173_, v_oLo_1174_, v_oHi_1175_, v___x_1352_);
v___y_1343_ = v___x_1353_;
goto v___jp_1342_;
}
else
{
lean_object* v_val_1354_; 
v_val_1354_ = lean_ctor_get(v_keys_1183_, 0);
lean_inc(v_val_1354_);
lean_dec_ref_known(v_keys_1183_, 1);
v___y_1343_ = v_val_1354_;
goto v___jp_1342_;
}
v___jp_1342_:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v___y_1343_, v_val_1338_);
lean_dec(v_val_1338_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v___x_1346_; 
lean_del_object(v___x_1272_);
lean_del_object(v___x_1238_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v___y_1343_);
v___x_1346_ = v___x_1340_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___y_1343_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v_fst_1291_ = v___x_1346_;
goto v___jp_1290_;
}
}
else
{
lean_object* v_val_1348_; lean_object* v___f_1349_; uint8_t v___x_1350_; 
lean_del_object(v___x_1340_);
v_val_1348_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v___x_1344_, 1);
lean_inc_ref(v___y_1343_);
v___f_1349_ = lean_alloc_closure((void*)(l_Lasm_UI_twoEnded___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1349_, 0, v___y_1343_);
v___x_1350_ = lean_nat_dec_le(v_oLo_1174_, v_val_1348_);
if (v___x_1350_ == 0)
{
v___y_1307_ = v___y_1343_;
v___y_1308_ = v___f_1349_;
v___y_1309_ = v_val_1348_;
v___y_1310_ = v___x_1336_;
goto v___jp_1306_;
}
else
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_nat_dec_lt(v_val_1348_, v_oHi_1175_);
v___y_1307_ = v___y_1343_;
v___y_1308_ = v___f_1349_;
v___y_1309_ = v_val_1348_;
v___y_1310_ = v___x_1351_;
goto v___jp_1306_;
}
}
}
}
}
}
else
{
lean_object* v_r_1356_; lean_object* v_ops_1357_; lean_object* v_live_1358_; lean_object* v_next_1359_; lean_object* v___x_1360_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1371_; lean_object* v_id_1373_; 
lean_dec_ref(v___x_1289_);
lean_del_object(v___x_1272_);
lean_del_object(v___x_1238_);
lean_dec(v_oHi_1175_);
lean_inc_ref(v_f_1172_);
lean_inc(v___x_1278_);
lean_inc(v_val_1270_);
v_r_1356_ = lean_apply_3(v_f_1172_, v_val_1270_, v___x_1278_, v_next_1182_);
v_ops_1357_ = lean_ctor_get(v_r_1356_, 0);
lean_inc(v_ops_1357_);
v_live_1358_ = lean_ctor_get(v_r_1356_, 1);
lean_inc_ref(v_live_1358_);
v_next_1359_ = lean_ctor_get(v_r_1356_, 2);
lean_inc(v_next_1359_);
lean_dec_ref(v_r_1356_);
v___x_1360_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1181_, v_ops_1357_);
v_id_1373_ = lean_ctor_get(v_val_1270_, 0);
lean_inc(v_id_1373_);
lean_dec(v_val_1270_);
v___y_1371_ = v_id_1373_;
goto v___jp_1370_;
v___jp_1361_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_ops_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1364_, 0, v___y_1363_);
v___x_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___y_1362_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v_ops_1366_ = lean_array_push(v___x_1360_, v___x_1365_);
v___x_1367_ = lean_nat_add(v_nLo_1177_, v___x_1240_);
lean_dec(v_nLo_1177_);
v___x_1368_ = lean_array_push(v_pre_1179_, v_live_1358_);
v_oHi_1175_ = v___x_1267_;
v_nLo_1177_ = v___x_1367_;
v_pre_1179_ = v___x_1368_;
v_ops_1181_ = v_ops_1366_;
v_next_1182_ = v_next_1359_;
goto _start;
}
v___jp_1370_:
{
lean_object* v_id_1372_; 
v_id_1372_ = lean_ctor_get(v_val_1236_, 0);
lean_inc(v_id_1372_);
lean_dec(v_val_1236_);
v___y_1362_ = v___y_1371_;
v___y_1363_ = v_id_1372_;
goto v___jp_1361_;
}
}
}
else
{
lean_object* v_r_1374_; lean_object* v_ops_1375_; lean_object* v_live_1376_; lean_object* v_next_1377_; lean_object* v___x_1378_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1392_; lean_object* v_id_1397_; 
lean_dec_ref(v___x_1289_);
lean_del_object(v___x_1272_);
lean_dec(v_val_1270_);
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_dec(v_nHi_1178_);
lean_inc_ref(v_f_1172_);
lean_inc(v___x_1332_);
lean_inc(v_val_1236_);
v_r_1374_ = lean_apply_3(v_f_1172_, v_val_1236_, v___x_1332_, v_next_1182_);
v_ops_1375_ = lean_ctor_get(v_r_1374_, 0);
lean_inc(v_ops_1375_);
v_live_1376_ = lean_ctor_get(v_r_1374_, 1);
lean_inc_ref(v_live_1376_);
v_next_1377_ = lean_ctor_get(v_r_1374_, 2);
lean_inc(v_next_1377_);
lean_dec_ref(v_r_1374_);
v___x_1378_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1181_, v_ops_1375_);
v_id_1397_ = lean_ctor_get(v_val_1236_, 0);
lean_inc(v_id_1397_);
lean_dec(v_val_1236_);
v___y_1392_ = v_id_1397_;
goto v___jp_1391_;
v___jp_1379_:
{
lean_object* v___x_1382_; lean_object* v_ops_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___y_1380_);
lean_ctor_set(v___x_1382_, 1, v___y_1381_);
v_ops_1383_ = lean_array_push(v___x_1378_, v___x_1382_);
v___x_1384_ = lean_nat_add(v_oLo_1174_, v___x_1240_);
lean_dec(v_oLo_1174_);
v___x_1385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1385_, 0, v_live_1376_);
lean_ctor_set(v___x_1385_, 1, v_suf_1180_);
v_oLo_1174_ = v___x_1384_;
v_nHi_1178_ = v___x_1276_;
v_suf_1180_ = v___x_1385_;
v_ops_1181_ = v_ops_1383_;
v_next_1182_ = v_next_1377_;
goto _start;
}
v___jp_1387_:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___y_1389_);
v___y_1380_ = v___y_1388_;
v___y_1381_ = v___x_1390_;
goto v___jp_1379_;
}
v___jp_1391_:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_List_head_x3f___redArg(v_suf_1180_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_box(0);
v___y_1380_ = v___y_1392_;
v___y_1381_ = v___x_1394_;
goto v___jp_1379_;
}
else
{
lean_object* v_val_1395_; lean_object* v_id_1396_; 
v_val_1395_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_val_1395_);
lean_dec_ref_known(v___x_1393_, 1);
v_id_1396_ = lean_ctor_get(v_val_1395_, 0);
lean_inc(v_id_1396_);
lean_dec(v_val_1395_);
v___y_1388_ = v___y_1392_;
v___y_1389_ = v_id_1396_;
goto v___jp_1387_;
}
}
}
}
else
{
lean_object* v_r_1398_; lean_object* v_ops_1399_; lean_object* v_live_1400_; lean_object* v_next_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
lean_dec_ref(v___x_1333_);
lean_dec_ref(v___x_1289_);
lean_del_object(v___x_1272_);
lean_del_object(v___x_1238_);
lean_dec(v_val_1236_);
lean_dec(v_nHi_1178_);
lean_dec(v_oHi_1175_);
lean_inc_ref(v_f_1172_);
lean_inc(v___x_1332_);
v_r_1398_ = lean_apply_3(v_f_1172_, v_val_1270_, v___x_1332_, v_next_1182_);
v_ops_1399_ = lean_ctor_get(v_r_1398_, 0);
lean_inc(v_ops_1399_);
v_live_1400_ = lean_ctor_get(v_r_1398_, 1);
lean_inc_ref(v_live_1400_);
v_next_1401_ = lean_ctor_get(v_r_1398_, 2);
lean_inc(v_next_1401_);
lean_dec_ref(v_r_1398_);
v___x_1402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1402_, 0, v_live_1400_);
lean_ctor_set(v___x_1402_, 1, v_suf_1180_);
v___x_1403_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1181_, v_ops_1399_);
v_oHi_1175_ = v___x_1267_;
v_nHi_1178_ = v___x_1276_;
v_suf_1180_ = v___x_1402_;
v_ops_1181_ = v___x_1403_;
v_next_1182_ = v_next_1401_;
goto _start;
}
}
else
{
lean_object* v_r_1405_; lean_object* v_ops_1406_; lean_object* v_live_1407_; lean_object* v_next_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
lean_dec_ref(v___x_1289_);
lean_dec(v___x_1276_);
lean_del_object(v___x_1272_);
lean_dec(v_val_1270_);
lean_dec(v___x_1267_);
lean_del_object(v___x_1238_);
lean_inc_ref(v_f_1172_);
lean_inc(v___x_1278_);
v_r_1405_ = lean_apply_3(v_f_1172_, v_val_1236_, v___x_1278_, v_next_1182_);
v_ops_1406_ = lean_ctor_get(v_r_1405_, 0);
lean_inc(v_ops_1406_);
v_live_1407_ = lean_ctor_get(v_r_1405_, 1);
lean_inc_ref(v_live_1407_);
v_next_1408_ = lean_ctor_get(v_r_1405_, 2);
lean_inc(v_next_1408_);
lean_dec_ref(v_r_1405_);
v___x_1409_ = lean_nat_add(v_oLo_1174_, v___x_1240_);
lean_dec(v_oLo_1174_);
v___x_1410_ = lean_nat_add(v_nLo_1177_, v___x_1240_);
lean_dec(v_nLo_1177_);
v___x_1411_ = lean_array_push(v_pre_1179_, v_live_1407_);
v___x_1412_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1181_, v_ops_1406_);
v_oLo_1174_ = v___x_1409_;
v_nLo_1177_ = v___x_1410_;
v_pre_1179_ = v___x_1411_;
v_ops_1181_ = v___x_1412_;
v_next_1182_ = v_next_1408_;
goto _start;
}
v___jp_1279_:
{
lean_object* v_r_1283_; lean_object* v_ops_1284_; lean_object* v_live_1285_; lean_object* v_next_1286_; lean_object* v___x_1287_; lean_object* v_id_1288_; 
lean_inc_ref(v_f_1172_);
lean_inc(v___x_1278_);
lean_inc_ref(v_snd_1282_);
v_r_1283_ = lean_apply_3(v_f_1172_, v_snd_1282_, v___x_1278_, v_next_1182_);
v_ops_1284_ = lean_ctor_get(v_r_1283_, 0);
lean_inc(v_ops_1284_);
v_live_1285_ = lean_ctor_get(v_r_1283_, 1);
lean_inc_ref(v_live_1285_);
v_next_1286_ = lean_ctor_get(v_r_1283_, 2);
lean_inc(v_next_1286_);
lean_dec_ref(v_r_1283_);
v___x_1287_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_ops_1181_, v_ops_1284_);
v_id_1288_ = lean_ctor_get(v_snd_1282_, 0);
lean_inc(v_id_1288_);
lean_dec_ref(v_snd_1282_);
v___y_1260_ = v_next_1286_;
v___y_1261_ = v_fst_1281_;
v___y_1262_ = v_live_1285_;
v___y_1263_ = v___x_1287_;
v___y_1264_ = v_fst_1280_;
v___y_1265_ = v_id_1288_;
goto v___jp_1259_;
}
v___jp_1290_:
{
lean_object* v_c_1292_; lean_object* v_fst_1293_; lean_object* v_snd_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v_id_1297_; 
v_c_1292_ = l_Lasm_UI_create___redArg(v___x_1289_, v_next_1182_);
lean_dec_ref(v___x_1289_);
v_fst_1293_ = lean_ctor_get(v_c_1292_, 0);
lean_inc_n(v_fst_1293_, 2);
v_snd_1294_ = lean_ctor_get(v_c_1292_, 1);
lean_inc(v_snd_1294_);
lean_dec_ref(v_c_1292_);
v___x_1295_ = lean_nat_add(v_nLo_1177_, v___x_1240_);
lean_dec(v_nLo_1177_);
v___x_1296_ = lean_array_push(v_pre_1179_, v_fst_1293_);
v_id_1297_ = lean_ctor_get(v_val_1236_, 0);
lean_inc(v_id_1297_);
lean_dec(v_val_1236_);
v___y_1206_ = v_fst_1293_;
v___y_1207_ = v_snd_1294_;
v___y_1208_ = v___x_1296_;
v___y_1209_ = v_fst_1291_;
v___y_1210_ = v___x_1295_;
v___y_1211_ = v_id_1297_;
goto v___jp_1205_;
}
v___jp_1298_:
{
lean_object* v_snd_1300_; 
v_snd_1300_ = lean_ctor_get(v___y_1299_, 1);
if (lean_obj_tag(v_snd_1300_) == 0)
{
lean_object* v_fst_1301_; 
lean_del_object(v___x_1238_);
v_fst_1301_ = lean_ctor_get(v___y_1299_, 0);
lean_inc(v_fst_1301_);
lean_dec_ref(v___y_1299_);
v_fst_1291_ = v_fst_1301_;
goto v___jp_1290_;
}
else
{
lean_object* v_val_1302_; lean_object* v_fst_1303_; lean_object* v_fst_1304_; lean_object* v_snd_1305_; 
lean_dec_ref(v___x_1289_);
v_val_1302_ = lean_ctor_get(v_snd_1300_, 0);
lean_inc(v_val_1302_);
v_fst_1303_ = lean_ctor_get(v___y_1299_, 0);
lean_inc(v_fst_1303_);
lean_dec_ref(v___y_1299_);
v_fst_1304_ = lean_ctor_get(v_val_1302_, 0);
lean_inc(v_fst_1304_);
v_snd_1305_ = lean_ctor_get(v_val_1302_, 1);
lean_inc(v_snd_1305_);
lean_dec(v_val_1302_);
v_fst_1280_ = v_fst_1303_;
v_fst_1281_ = v_fst_1304_;
v_snd_1282_ = v_snd_1305_;
goto v___jp_1279_;
}
}
v___jp_1306_:
{
if (v___y_1310_ == 0)
{
lean_object* v___x_1312_; 
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_del_object(v___x_1238_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___y_1307_);
v___x_1312_ = v___x_1272_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___y_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
v_fst_1291_ = v___x_1312_;
goto v___jp_1290_;
}
}
else
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_nat_dec_lt(v___y_1309_, v___x_1226_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1307_);
lean_del_object(v___x_1272_);
v___x_1315_ = lean_box(0);
v___x_1316_ = lean_apply_1(v___y_1308_, v___x_1315_);
v___y_1299_ = v___x_1316_;
goto v___jp_1298_;
}
else
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_array_fget(v_oa_1173_, v___y_1309_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1326_; 
lean_dec_ref(v___y_1308_);
lean_del_object(v___x_1272_);
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_val_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___y_1307_);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___y_1307_);
v___x_1323_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
uint8_t v___x_1324_; 
v___x_1324_ = l_Lasm_UI_Live_same___redArg(v_val_1318_, v___x_1289_);
if (v___x_1324_ == 0)
{
lean_dec(v_val_1318_);
lean_dec(v___y_1309_);
lean_del_object(v___x_1238_);
v_fst_1291_ = v___x_1323_;
goto v___jp_1290_;
}
else
{
lean_dec_ref(v___x_1289_);
v_fst_1280_ = v___x_1323_;
v_fst_1281_ = v___y_1309_;
v_snd_1282_ = v_val_1318_;
goto v___jp_1279_;
}
}
}
}
else
{
lean_object* v___x_1328_; 
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1307_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1317_);
v___x_1328_ = v___x_1272_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1317_);
v___x_1328_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_apply_1(v___y_1308_, v___x_1328_);
v___y_1299_ = v___x_1329_;
goto v___jp_1298_;
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
v___jp_1241_:
{
lean_object* v___x_1250_; 
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___y_1248_);
v___x_1250_ = v___x_1238_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___y_1248_);
v___x_1250_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; lean_object* v_ops_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___y_1245_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v_ops_1252_ = lean_array_push(v___y_1247_, v___x_1251_);
v___x_1253_ = lean_box(0);
v___x_1254_ = lean_array_set(v_oa_1173_, v___y_1244_, v___x_1253_);
lean_dec(v___y_1244_);
v___x_1255_ = lean_nat_add(v_nLo_1177_, v___x_1240_);
lean_dec(v_nLo_1177_);
v___x_1256_ = lean_array_push(v_pre_1179_, v___y_1243_);
v_oa_1173_ = v___x_1254_;
v_nLo_1177_ = v___x_1255_;
v_pre_1179_ = v___x_1256_;
v_ops_1181_ = v_ops_1252_;
v_next_1182_ = v___y_1242_;
v_keys_1183_ = v___y_1246_;
goto _start;
}
}
v___jp_1259_:
{
lean_object* v_id_1266_; 
v_id_1266_ = lean_ctor_get(v_val_1236_, 0);
lean_inc(v_id_1266_);
lean_dec(v_val_1236_);
v___y_1242_ = v___y_1260_;
v___y_1243_ = v___y_1262_;
v___y_1244_ = v___y_1261_;
v___y_1245_ = v___y_1265_;
v___y_1246_ = v___y_1264_;
v___y_1247_ = v___y_1263_;
v___y_1248_ = v_id_1266_;
goto v___jp_1241_;
}
}
}
}
}
}
v___jp_1184_:
{
lean_object* v_r_1186_; lean_object* v_snd_1187_; lean_object* v_fst_1188_; lean_object* v_fst_1189_; lean_object* v_snd_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v_r_1186_ = l_Lasm_UI_insertRange___redArg(v_val_1171_, v_na_1176_, v___y_1185_, v_nLo_1177_, v_nHi_1178_, v_next_1182_, v_ops_1181_, v_pre_1179_);
lean_dec(v_nHi_1178_);
v_snd_1187_ = lean_ctor_get(v_r_1186_, 1);
lean_inc(v_snd_1187_);
v_fst_1188_ = lean_ctor_get(v_r_1186_, 0);
lean_inc(v_fst_1188_);
lean_dec_ref(v_r_1186_);
v_fst_1189_ = lean_ctor_get(v_snd_1187_, 0);
lean_inc(v_fst_1189_);
v_snd_1190_ = lean_ctor_get(v_snd_1187_, 1);
lean_inc(v_snd_1190_);
lean_dec(v_snd_1187_);
v___x_1191_ = lean_array_to_list(v_fst_1189_);
v___x_1192_ = l_List_appendTR___redArg(v___x_1191_, v_suf_1180_);
v___x_1193_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1193_, 0, v_fst_1188_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
lean_ctor_set(v___x_1193_, 2, v_snd_1190_);
return v___x_1193_;
}
v___jp_1194_:
{
lean_object* v___x_1196_; 
v___x_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___y_1195_);
v___y_1185_ = v___x_1196_;
goto v___jp_1184_;
}
v___jp_1197_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_array_to_list(v_pre_1179_);
v___x_1199_ = l_List_appendTR___redArg(v___x_1198_, v_suf_1180_);
v___x_1200_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1200_, 0, v_ops_1181_);
lean_ctor_set(v___x_1200_, 1, v___x_1199_);
lean_ctor_set(v___x_1200_, 2, v_next_1182_);
return v___x_1200_;
}
v___jp_1201_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_nat_sub(v_oHi_1175_, v___x_1202_);
lean_dec(v_oHi_1175_);
v_oHi_1175_ = v___x_1203_;
goto _start;
}
v___jp_1205_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___y_1211_);
v___x_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___y_1206_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = lean_array_push(v_ops_1181_, v___x_1213_);
v_nLo_1177_ = v___y_1210_;
v_pre_1179_ = v___y_1208_;
v_ops_1181_ = v___x_1214_;
v_next_1182_ = v___y_1207_;
v_keys_1183_ = v___y_1209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___redArg___boxed(lean_object* v_val_1416_, lean_object* v_f_1417_, lean_object* v_oa_1418_, lean_object* v_oLo_1419_, lean_object* v_oHi_1420_, lean_object* v_na_1421_, lean_object* v_nLo_1422_, lean_object* v_nHi_1423_, lean_object* v_pre_1424_, lean_object* v_suf_1425_, lean_object* v_ops_1426_, lean_object* v_next_1427_, lean_object* v_keys_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lasm_UI_twoEnded___redArg(v_val_1416_, v_f_1417_, v_oa_1418_, v_oLo_1419_, v_oHi_1420_, v_na_1421_, v_nLo_1422_, v_nHi_1423_, v_pre_1424_, v_suf_1425_, v_ops_1426_, v_next_1427_, v_keys_1428_);
lean_dec_ref(v_na_1421_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded(lean_object* v_Msg_1430_, lean_object* v_00_u03b2_1431_, lean_object* v_val_1432_, lean_object* v_f_1433_, lean_object* v_oa_1434_, lean_object* v_oLo_1435_, lean_object* v_oHi_1436_, lean_object* v_na_1437_, lean_object* v_nLo_1438_, lean_object* v_nHi_1439_, lean_object* v_pre_1440_, lean_object* v_suf_1441_, lean_object* v_ops_1442_, lean_object* v_next_1443_, lean_object* v_keys_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l_Lasm_UI_twoEnded___redArg(v_val_1432_, v_f_1433_, v_oa_1434_, v_oLo_1435_, v_oHi_1436_, v_na_1437_, v_nLo_1438_, v_nHi_1439_, v_pre_1440_, v_suf_1441_, v_ops_1442_, v_next_1443_, v_keys_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_twoEnded___boxed(lean_object* v_Msg_1446_, lean_object* v_00_u03b2_1447_, lean_object* v_val_1448_, lean_object* v_f_1449_, lean_object* v_oa_1450_, lean_object* v_oLo_1451_, lean_object* v_oHi_1452_, lean_object* v_na_1453_, lean_object* v_nLo_1454_, lean_object* v_nHi_1455_, lean_object* v_pre_1456_, lean_object* v_suf_1457_, lean_object* v_ops_1458_, lean_object* v_next_1459_, lean_object* v_keys_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lasm_UI_twoEnded(v_Msg_1446_, v_00_u03b2_1447_, v_val_1448_, v_f_1449_, v_oa_1450_, v_oLo_1451_, v_oHi_1452_, v_na_1453_, v_nLo_1454_, v_nHi_1455_, v_pre_1456_, v_suf_1457_, v_ops_1458_, v_next_1459_, v_keys_1460_);
lean_dec_ref(v_na_1453_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0(lean_object* v_00_u03b2_1462_, lean_object* v_m_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___redArg(v_m_1463_, v_a_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0___boxed(lean_object* v_00_u03b2_1466_, lean_object* v_m_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0(v_00_u03b2_1466_, v_m_1467_, v_a_1468_);
lean_dec_ref(v_a_1468_);
lean_dec_ref(v_m_1467_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0(lean_object* v_00_u03b2_1470_, lean_object* v_a_1471_, lean_object* v_x_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___redArg(v_a_1471_, v_x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1474_, lean_object* v_a_1475_, lean_object* v_x_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded_spec__0_spec__0(v_00_u03b2_1474_, v_a_1475_, v_x_1476_);
lean_dec(v_x_1476_);
lean_dec_ref(v_a_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter___redArg(lean_object* v_x_1478_, lean_object* v_x_1479_, lean_object* v_x_1480_, lean_object* v_x_1481_, lean_object* v_h__1_1482_, lean_object* v_h__2_1483_, lean_object* v_h__3_1484_, lean_object* v_h__4_1485_){
_start:
{
if (lean_obj_tag(v_x_1478_) == 1)
{
lean_object* v_val_1486_; 
v_val_1486_ = lean_ctor_get(v_x_1478_, 0);
if (lean_obj_tag(v_val_1486_) == 0)
{
lean_object* v___x_1487_; 
lean_dec_ref_known(v_x_1478_, 1);
lean_dec(v_h__4_1485_);
lean_dec(v_h__3_1484_);
lean_dec(v_h__2_1483_);
v___x_1487_ = lean_apply_3(v_h__1_1482_, v_x_1479_, v_x_1480_, v_x_1481_);
return v___x_1487_;
}
else
{
lean_dec(v_h__1_1482_);
if (lean_obj_tag(v_x_1479_) == 1)
{
lean_object* v_val_1488_; 
v_val_1488_ = lean_ctor_get(v_x_1479_, 0);
if (lean_obj_tag(v_val_1488_) == 0)
{
lean_object* v___x_1489_; 
lean_dec_ref_known(v_x_1479_, 1);
lean_dec(v_h__4_1485_);
lean_dec(v_h__3_1484_);
v___x_1489_ = lean_apply_4(v_h__2_1483_, v_x_1478_, v_x_1480_, v_x_1481_, lean_box(0));
return v___x_1489_;
}
else
{
lean_dec(v_h__2_1483_);
if (lean_obj_tag(v_x_1480_) == 1)
{
if (lean_obj_tag(v_x_1481_) == 1)
{
lean_object* v_val_1490_; lean_object* v_val_1491_; lean_object* v_val_1492_; lean_object* v_val_1493_; lean_object* v___x_1494_; 
lean_inc_ref(v_val_1488_);
lean_inc_ref(v_val_1486_);
lean_dec_ref_known(v_x_1479_, 1);
lean_dec_ref_known(v_x_1478_, 1);
lean_dec(v_h__4_1485_);
v_val_1490_ = lean_ctor_get(v_val_1486_, 0);
lean_inc(v_val_1490_);
lean_dec_ref_known(v_val_1486_, 1);
v_val_1491_ = lean_ctor_get(v_val_1488_, 0);
lean_inc(v_val_1491_);
lean_dec_ref_known(v_val_1488_, 1);
v_val_1492_ = lean_ctor_get(v_x_1480_, 0);
lean_inc(v_val_1492_);
lean_dec_ref_known(v_x_1480_, 1);
v_val_1493_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1494_ = lean_apply_4(v_h__3_1484_, v_val_1490_, v_val_1491_, v_val_1492_, v_val_1493_);
return v___x_1494_;
}
else
{
lean_object* v___x_1495_; 
lean_dec(v_h__3_1484_);
v___x_1495_ = lean_apply_7(v_h__4_1485_, v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1495_;
}
}
else
{
lean_object* v___x_1496_; 
lean_dec(v_h__3_1484_);
v___x_1496_ = lean_apply_7(v_h__4_1485_, v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1496_;
}
}
}
else
{
lean_object* v___x_1497_; 
lean_dec(v_h__3_1484_);
lean_dec(v_h__2_1483_);
v___x_1497_ = lean_apply_7(v_h__4_1485_, v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1497_;
}
}
}
else
{
lean_dec(v_h__3_1484_);
lean_dec(v_h__1_1482_);
if (lean_obj_tag(v_x_1479_) == 1)
{
lean_object* v_val_1498_; 
v_val_1498_ = lean_ctor_get(v_x_1479_, 0);
if (lean_obj_tag(v_val_1498_) == 0)
{
lean_object* v___x_1499_; 
lean_dec_ref_known(v_x_1479_, 1);
lean_dec(v_h__4_1485_);
v___x_1499_ = lean_apply_4(v_h__2_1483_, v_x_1478_, v_x_1480_, v_x_1481_, lean_box(0));
return v___x_1499_;
}
else
{
lean_object* v___x_1500_; 
lean_dec(v_h__2_1483_);
v___x_1500_ = lean_apply_7(v_h__4_1485_, v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1500_;
}
}
else
{
lean_object* v___x_1501_; 
lean_dec(v_h__2_1483_);
v___x_1501_ = lean_apply_7(v_h__4_1485_, v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1501_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__9_splitter(lean_object* v_Msg_1502_, lean_object* v_00_u03b2_1503_, lean_object* v_motive_1504_, lean_object* v_x_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_, lean_object* v_x_1508_, lean_object* v_h__1_1509_, lean_object* v_h__2_1510_, lean_object* v_h__3_1511_, lean_object* v_h__4_1512_){
_start:
{
if (lean_obj_tag(v_x_1505_) == 1)
{
lean_object* v_val_1513_; 
v_val_1513_ = lean_ctor_get(v_x_1505_, 0);
if (lean_obj_tag(v_val_1513_) == 0)
{
lean_object* v___x_1514_; 
lean_dec_ref_known(v_x_1505_, 1);
lean_dec(v_h__4_1512_);
lean_dec(v_h__3_1511_);
lean_dec(v_h__2_1510_);
v___x_1514_ = lean_apply_3(v_h__1_1509_, v_x_1506_, v_x_1507_, v_x_1508_);
return v___x_1514_;
}
else
{
lean_dec(v_h__1_1509_);
if (lean_obj_tag(v_x_1506_) == 1)
{
lean_object* v_val_1515_; 
v_val_1515_ = lean_ctor_get(v_x_1506_, 0);
if (lean_obj_tag(v_val_1515_) == 0)
{
lean_object* v___x_1516_; 
lean_dec_ref_known(v_x_1506_, 1);
lean_dec(v_h__4_1512_);
lean_dec(v_h__3_1511_);
v___x_1516_ = lean_apply_4(v_h__2_1510_, v_x_1505_, v_x_1507_, v_x_1508_, lean_box(0));
return v___x_1516_;
}
else
{
lean_dec(v_h__2_1510_);
if (lean_obj_tag(v_x_1507_) == 1)
{
if (lean_obj_tag(v_x_1508_) == 1)
{
lean_object* v_val_1517_; lean_object* v_val_1518_; lean_object* v_val_1519_; lean_object* v_val_1520_; lean_object* v___x_1521_; 
lean_inc_ref(v_val_1515_);
lean_inc_ref(v_val_1513_);
lean_dec_ref_known(v_x_1506_, 1);
lean_dec_ref_known(v_x_1505_, 1);
lean_dec(v_h__4_1512_);
v_val_1517_ = lean_ctor_get(v_val_1513_, 0);
lean_inc(v_val_1517_);
lean_dec_ref_known(v_val_1513_, 1);
v_val_1518_ = lean_ctor_get(v_val_1515_, 0);
lean_inc(v_val_1518_);
lean_dec_ref_known(v_val_1515_, 1);
v_val_1519_ = lean_ctor_get(v_x_1507_, 0);
lean_inc(v_val_1519_);
lean_dec_ref_known(v_x_1507_, 1);
v_val_1520_ = lean_ctor_get(v_x_1508_, 0);
lean_inc(v_val_1520_);
lean_dec_ref_known(v_x_1508_, 1);
v___x_1521_ = lean_apply_4(v_h__3_1511_, v_val_1517_, v_val_1518_, v_val_1519_, v_val_1520_);
return v___x_1521_;
}
else
{
lean_object* v___x_1522_; 
lean_dec(v_h__3_1511_);
v___x_1522_ = lean_apply_7(v_h__4_1512_, v_x_1505_, v_x_1506_, v_x_1507_, v_x_1508_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1522_;
}
}
else
{
lean_object* v___x_1523_; 
lean_dec(v_h__3_1511_);
v___x_1523_ = lean_apply_7(v_h__4_1512_, v_x_1505_, v_x_1506_, v_x_1507_, v_x_1508_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1523_;
}
}
}
else
{
lean_object* v___x_1524_; 
lean_dec(v_h__3_1511_);
lean_dec(v_h__2_1510_);
v___x_1524_ = lean_apply_7(v_h__4_1512_, v_x_1505_, v_x_1506_, v_x_1507_, v_x_1508_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1524_;
}
}
}
else
{
lean_dec(v_h__3_1511_);
lean_dec(v_h__1_1509_);
if (lean_obj_tag(v_x_1506_) == 1)
{
lean_object* v_val_1525_; 
v_val_1525_ = lean_ctor_get(v_x_1506_, 0);
if (lean_obj_tag(v_val_1525_) == 0)
{
lean_object* v___x_1526_; 
lean_dec_ref_known(v_x_1506_, 1);
lean_dec(v_h__4_1512_);
v___x_1526_ = lean_apply_4(v_h__2_1510_, v_x_1505_, v_x_1507_, v_x_1508_, lean_box(0));
return v___x_1526_;
}
else
{
lean_object* v___x_1527_; 
lean_dec(v_h__2_1510_);
v___x_1527_ = lean_apply_7(v_h__4_1512_, v_x_1505_, v_x_1506_, v_x_1507_, v_x_1508_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1527_;
}
}
else
{
lean_object* v___x_1528_; 
lean_dec(v_h__2_1510_);
v___x_1528_ = lean_apply_7(v_h__4_1512_, v_x_1505_, v_x_1506_, v_x_1507_, v_x_1508_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1528_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter___redArg(lean_object* v_x_1529_, lean_object* v_h__1_1530_, lean_object* v_h__2_1531_){
_start:
{
if (lean_obj_tag(v_x_1529_) == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec(v_h__2_1531_);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_apply_1(v_h__1_1530_, v___x_1532_);
return v___x_1533_;
}
else
{
lean_object* v_val_1534_; lean_object* v___x_1535_; 
lean_dec(v_h__1_1530_);
v_val_1534_ = lean_ctor_get(v_x_1529_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v_x_1529_, 1);
v___x_1535_ = lean_apply_1(v_h__2_1531_, v_val_1534_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__3_splitter(lean_object* v_motive_1536_, lean_object* v_x_1537_, lean_object* v_h__1_1538_, lean_object* v_h__2_1539_){
_start:
{
if (lean_obj_tag(v_x_1537_) == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec(v_h__2_1539_);
v___x_1540_ = lean_box(0);
v___x_1541_ = lean_apply_1(v_h__1_1538_, v___x_1540_);
return v___x_1541_;
}
else
{
lean_object* v_val_1542_; lean_object* v___x_1543_; 
lean_dec(v_h__1_1538_);
v_val_1542_ = lean_ctor_get(v_x_1537_, 0);
lean_inc(v_val_1542_);
lean_dec_ref_known(v_x_1537_, 1);
v___x_1543_ = lean_apply_1(v_h__2_1539_, v_val_1542_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter___redArg(lean_object* v_x_1544_, lean_object* v_h__1_1545_, lean_object* v_h__2_1546_){
_start:
{
if (lean_obj_tag(v_x_1544_) == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
lean_dec(v_h__1_1545_);
v___x_1547_ = lean_box(0);
v___x_1548_ = lean_apply_1(v_h__2_1546_, v___x_1547_);
return v___x_1548_;
}
else
{
lean_object* v_val_1549_; lean_object* v___x_1550_; 
lean_dec(v_h__2_1546_);
v_val_1549_ = lean_ctor_get(v_x_1544_, 0);
lean_inc(v_val_1549_);
lean_dec_ref_known(v_x_1544_, 1);
v___x_1550_ = lean_apply_1(v_h__1_1545_, v_val_1549_);
return v___x_1550_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__1_splitter(lean_object* v_motive_1551_, lean_object* v_x_1552_, lean_object* v_h__1_1553_, lean_object* v_h__2_1554_){
_start:
{
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_dec(v_h__1_1553_);
v___x_1555_ = lean_box(0);
v___x_1556_ = lean_apply_1(v_h__2_1554_, v___x_1555_);
return v___x_1556_;
}
else
{
lean_object* v_val_1557_; lean_object* v___x_1558_; 
lean_dec(v_h__2_1554_);
v_val_1557_ = lean_ctor_get(v_x_1552_, 0);
lean_inc(v_val_1557_);
lean_dec_ref_known(v_x_1552_, 1);
v___x_1558_ = lean_apply_1(v_h__1_1553_, v_val_1557_);
return v___x_1558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter___redArg(lean_object* v_x_1559_, lean_object* v_h__1_1560_){
_start:
{
lean_object* v_fst_1561_; lean_object* v_snd_1562_; lean_object* v___x_1563_; 
v_fst_1561_ = lean_ctor_get(v_x_1559_, 0);
lean_inc(v_fst_1561_);
v_snd_1562_ = lean_ctor_get(v_x_1559_, 1);
lean_inc(v_snd_1562_);
lean_dec_ref(v_x_1559_);
v___x_1563_ = lean_apply_2(v_h__1_1560_, v_fst_1561_, v_snd_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__7_splitter(lean_object* v_Msg_1564_, lean_object* v_motive_1565_, lean_object* v_x_1566_, lean_object* v_h__1_1567_){
_start:
{
lean_object* v_fst_1568_; lean_object* v_snd_1569_; lean_object* v___x_1570_; 
v_fst_1568_ = lean_ctor_get(v_x_1566_, 0);
lean_inc(v_fst_1568_);
v_snd_1569_ = lean_ctor_get(v_x_1566_, 1);
lean_inc(v_snd_1569_);
lean_dec_ref(v_x_1566_);
v___x_1570_ = lean_apply_2(v_h__1_1567_, v_fst_1568_, v_snd_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter___redArg(lean_object* v_found_1571_, lean_object* v_h__1_1572_, lean_object* v_h__2_1573_){
_start:
{
if (lean_obj_tag(v_found_1571_) == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_dec(v_h__1_1572_);
v___x_1574_ = lean_box(0);
v___x_1575_ = lean_apply_1(v_h__2_1573_, v___x_1574_);
return v___x_1575_;
}
else
{
lean_object* v_val_1576_; lean_object* v_fst_1577_; lean_object* v_snd_1578_; lean_object* v___x_1579_; 
lean_dec(v_h__2_1573_);
v_val_1576_ = lean_ctor_get(v_found_1571_, 0);
lean_inc(v_val_1576_);
lean_dec_ref_known(v_found_1571_, 1);
v_fst_1577_ = lean_ctor_get(v_val_1576_, 0);
lean_inc(v_fst_1577_);
v_snd_1578_ = lean_ctor_get(v_val_1576_, 1);
lean_inc(v_snd_1578_);
lean_dec(v_val_1576_);
v___x_1579_ = lean_apply_2(v_h__1_1572_, v_fst_1577_, v_snd_1578_);
return v___x_1579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_twoEnded_match__5_splitter(lean_object* v_Msg_1580_, lean_object* v_motive_1581_, lean_object* v_found_1582_, lean_object* v_h__1_1583_, lean_object* v_h__2_1584_){
_start:
{
if (lean_obj_tag(v_found_1582_) == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
lean_dec(v_h__1_1583_);
v___x_1585_ = lean_box(0);
v___x_1586_ = lean_apply_1(v_h__2_1584_, v___x_1585_);
return v___x_1586_;
}
else
{
lean_object* v_val_1587_; lean_object* v_fst_1588_; lean_object* v_snd_1589_; lean_object* v___x_1590_; 
lean_dec(v_h__2_1584_);
v_val_1587_ = lean_ctor_get(v_found_1582_, 0);
lean_inc(v_val_1587_);
lean_dec_ref_known(v_found_1582_, 1);
v_fst_1588_ = lean_ctor_get(v_val_1587_, 0);
lean_inc(v_fst_1588_);
v_snd_1589_ = lean_ctor_get(v_val_1587_, 1);
lean_inc(v_snd_1589_);
lean_dec(v_val_1587_);
v___x_1590_ = lean_apply_2(v_h__1_1583_, v_fst_1588_, v_snd_1589_);
return v___x_1590_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
if (lean_obj_tag(v_a_1591_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = l_List_reverse___redArg(v_a_1592_);
return v___x_1593_;
}
else
{
lean_object* v_head_1594_; lean_object* v_tail_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1604_; 
v_head_1594_ = lean_ctor_get(v_a_1591_, 0);
v_tail_1595_ = lean_ctor_get(v_a_1591_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_a_1591_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1597_ = v_a_1591_;
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_tail_1595_);
lean_inc(v_head_1594_);
lean_dec(v_a_1591_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1601_; 
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v_head_1594_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v_a_1592_);
lean_ctor_set(v___x_1597_, 0, v___x_1599_);
v___x_1601_ = v___x_1597_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_a_1592_);
v___x_1601_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
v_a_1591_ = v_tail_1595_;
v_a_1592_ = v___x_1601_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase___redArg(lean_object* v_val_1605_, lean_object* v_f_1606_, lean_object* v_x_1607_, lean_object* v_x_1608_, lean_object* v_x_1609_, lean_object* v_x_1610_, lean_object* v_x_1611_){
_start:
{
if (lean_obj_tag(v_x_1607_) == 0)
{
lean_object* v___x_1612_; lean_object* v_r_1613_; lean_object* v_snd_1614_; lean_object* v_fst_1615_; lean_object* v_fst_1616_; lean_object* v_snd_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec_ref(v_f_1606_);
v___x_1612_ = lean_box(0);
v_r_1613_ = l_Lasm_UI_insertAll___redArg(v_val_1605_, v___x_1612_, v_x_1608_, v_x_1609_, v_x_1610_, v_x_1611_);
v_snd_1614_ = lean_ctor_get(v_r_1613_, 1);
lean_inc(v_snd_1614_);
v_fst_1615_ = lean_ctor_get(v_r_1613_, 0);
lean_inc(v_fst_1615_);
lean_dec_ref(v_r_1613_);
v_fst_1616_ = lean_ctor_get(v_snd_1614_, 0);
lean_inc(v_fst_1616_);
v_snd_1617_ = lean_ctor_get(v_snd_1614_, 1);
lean_inc(v_snd_1617_);
lean_dec(v_snd_1614_);
v___x_1618_ = lean_array_to_list(v_fst_1616_);
v___x_1619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1619_, 0, v_fst_1615_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
lean_ctor_set(v___x_1619_, 2, v_snd_1617_);
return v___x_1619_;
}
else
{
if (lean_obj_tag(v_x_1608_) == 0)
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
lean_dec_ref(v_f_1606_);
lean_dec_ref(v_val_1605_);
v___x_1620_ = l_Lasm_UI_removeAll___redArg(v_x_1607_, v_x_1610_);
v___x_1621_ = lean_array_to_list(v_x_1611_);
v___x_1622_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
lean_ctor_set(v___x_1622_, 2, v_x_1609_);
return v___x_1622_;
}
else
{
lean_object* v_head_1623_; lean_object* v_tail_1624_; lean_object* v_head_1625_; lean_object* v_tail_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v_head_1623_ = lean_ctor_get(v_x_1607_, 0);
v_tail_1624_ = lean_ctor_get(v_x_1607_, 1);
v_head_1625_ = lean_ctor_get(v_x_1608_, 0);
v_tail_1626_ = lean_ctor_get(v_x_1608_, 1);
lean_inc_ref(v_val_1605_);
lean_inc(v_head_1625_);
v___x_1627_ = lean_apply_1(v_val_1605_, v_head_1625_);
v___x_1628_ = l_Lasm_UI_Live_same___redArg(v_head_1623_, v___x_1627_);
lean_dec_ref(v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v_oa_1631_; lean_object* v_na_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1629_ = lean_box(0);
v___x_1630_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(v_x_1607_, v___x_1629_);
v_oa_1631_ = lean_array_mk(v___x_1630_);
v_na_1632_ = lean_array_mk(v_x_1608_);
v___x_1633_ = lean_unsigned_to_nat(0u);
v___x_1634_ = lean_array_get_size(v_oa_1631_);
v___x_1635_ = lean_array_get_size(v_na_1632_);
v___x_1636_ = lean_box(0);
v___x_1637_ = l_Lasm_UI_twoEnded___redArg(v_val_1605_, v_f_1606_, v_oa_1631_, v___x_1633_, v___x_1634_, v_na_1632_, v___x_1633_, v___x_1635_, v_x_1611_, v___x_1629_, v_x_1610_, v_x_1609_, v___x_1636_);
lean_dec_ref(v_na_1632_);
return v___x_1637_;
}
else
{
lean_object* v_r_1638_; lean_object* v_ops_1639_; lean_object* v_live_1640_; lean_object* v_next_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_inc(v_tail_1626_);
lean_inc(v_head_1625_);
lean_inc(v_tail_1624_);
lean_inc(v_head_1623_);
lean_dec_ref_known(v_x_1608_, 2);
lean_dec_ref_known(v_x_1607_, 2);
lean_inc_ref(v_f_1606_);
v_r_1638_ = lean_apply_3(v_f_1606_, v_head_1623_, v_head_1625_, v_x_1609_);
v_ops_1639_ = lean_ctor_get(v_r_1638_, 0);
lean_inc(v_ops_1639_);
v_live_1640_ = lean_ctor_get(v_r_1638_, 1);
lean_inc_ref(v_live_1640_);
v_next_1641_ = lean_ctor_get(v_r_1638_, 2);
lean_inc(v_next_1641_);
lean_dec_ref(v_r_1638_);
v___x_1642_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_1610_, v_ops_1639_);
v___x_1643_ = lean_array_push(v_x_1611_, v_live_1640_);
v_x_1607_ = v_tail_1624_;
v_x_1608_ = v_tail_1626_;
v_x_1609_ = v_next_1641_;
v_x_1610_ = v___x_1642_;
v_x_1611_ = v___x_1643_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_prefixPhase(lean_object* v_Msg_1645_, lean_object* v_00_u03b2_1646_, lean_object* v_val_1647_, lean_object* v_f_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_, lean_object* v_x_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lasm_UI_prefixPhase___redArg(v_val_1647_, v_f_1648_, v_x_1649_, v_x_1650_, v_x_1651_, v_x_1652_, v_x_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0(lean_object* v_Msg_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_List_mapTR_loop___at___00Lasm_UI_prefixPhase_spec__0___redArg(v_a_1656_, v_a_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren___redArg(lean_object* v_val_1665_, lean_object* v_f_1666_, lean_object* v_old_1667_, lean_object* v_new_1668_, lean_object* v_next_1669_){
_start:
{
lean_object* v_old_1671_; lean_object* v_new_1672_; 
if (lean_obj_tag(v_old_1667_) == 0)
{
if (lean_obj_tag(v_new_1668_) == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_dec_ref(v_f_1666_);
lean_dec_ref(v_val_1665_);
v___x_1677_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1678_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
lean_ctor_set(v___x_1678_, 1, v_old_1667_);
lean_ctor_set(v___x_1678_, 2, v_next_1669_);
return v___x_1678_;
}
else
{
v_old_1671_ = v_old_1667_;
v_new_1672_ = v_new_1668_;
goto v___jp_1670_;
}
}
else
{
if (lean_obj_tag(v_new_1668_) == 0)
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_dec_ref_known(v_old_1667_, 2);
lean_dec_ref(v_f_1666_);
lean_dec_ref(v_val_1665_);
v___x_1679_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__1));
v___x_1680_ = lean_box(0);
v___x_1681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1679_);
lean_ctor_set(v___x_1681_, 1, v___x_1680_);
lean_ctor_set(v___x_1681_, 2, v_next_1669_);
return v___x_1681_;
}
else
{
v_old_1671_ = v_old_1667_;
v_new_1672_ = v_new_1668_;
goto v___jp_1670_;
}
}
v___jp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1673_ = ((lean_object*)(l_Lasm_UI_diffChildren___redArg___closed__0));
v___x_1674_ = l_List_lengthTR___redArg(v_new_1672_);
v___x_1675_ = lean_mk_empty_array_with_capacity(v___x_1674_);
lean_dec(v___x_1674_);
v___x_1676_ = l_Lasm_UI_prefixPhase___redArg(v_val_1665_, v_f_1666_, v_old_1671_, v_new_1672_, v_next_1669_, v___x_1673_, v___x_1675_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffChildren(lean_object* v_Msg_1682_, lean_object* v_00_u03b2_1683_, lean_object* v_val_1684_, lean_object* v_f_1685_, lean_object* v_old_1686_, lean_object* v_new_1687_, lean_object* v_next_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lasm_UI_diffChildren___redArg(v_val_1684_, v_f_1685_, v_old_1686_, v_new_1687_, v_next_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0(lean_object* v_self_1690_){
_start:
{
lean_inc_ref(v_self_1690_);
return v_self_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg___lam__0___boxed(lean_object* v_self_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lasm_UI_diffNode___redArg___lam__0(v_self_1691_);
lean_dec_ref(v_self_1691_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode___redArg(lean_object* v_o_1694_, lean_object* v_n_1695_, lean_object* v_next_1696_){
_start:
{
lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v_o_1709_; lean_object* v_n_1710_; 
if (lean_obj_tag(v_o_1694_) == 0)
{
if (lean_obj_tag(v_n_1695_) == 0)
{
lean_object* v_id_1715_; lean_object* v_s_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1732_; 
v_id_1715_ = lean_ctor_get(v_o_1694_, 0);
v_s_1716_ = lean_ctor_get(v_o_1694_, 1);
v_isSharedCheck_1732_ = !lean_is_exclusive(v_o_1694_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1718_ = v_o_1694_;
v_isShared_1719_ = v_isSharedCheck_1732_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_s_1716_);
lean_inc(v_id_1715_);
lean_dec(v_o_1694_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1732_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v_s_1720_; lean_object* v___y_1722_; uint8_t v___x_1727_; 
v_s_1720_ = lean_ctor_get(v_n_1695_, 0);
lean_inc_ref(v_s_1720_);
lean_dec_ref_known(v_n_1695_, 1);
v___x_1727_ = lean_string_dec_eq(v_s_1716_, v_s_1720_);
lean_dec_ref(v_s_1716_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_inc_ref(v_s_1720_);
lean_inc(v_id_1715_);
v___x_1728_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1728_, 0, v_id_1715_);
lean_ctor_set(v___x_1728_, 1, v_s_1720_);
v___x_1729_ = lean_box(0);
v___x_1730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1728_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
v___y_1722_ = v___x_1730_;
goto v___jp_1721_;
}
else
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_box(0);
v___y_1722_ = v___x_1731_;
goto v___jp_1721_;
}
v___jp_1721_:
{
lean_object* v___x_1724_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 1, v_s_1720_);
v___x_1724_ = v___x_1718_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_id_1715_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v_s_1720_);
v___x_1724_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1725_, 0, v___y_1722_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
lean_ctor_set(v___x_1725_, 2, v_next_1696_);
return v___x_1725_;
}
}
}
}
else
{
v_o_1709_ = v_o_1694_;
v_n_1710_ = v_n_1695_;
goto v___jp_1708_;
}
}
else
{
lean_object* v_id_1733_; uint8_t v_ns_1734_; lean_object* v_tag_1735_; lean_object* v_attrs_1736_; lean_object* v_children_1737_; 
v_id_1733_ = lean_ctor_get(v_o_1694_, 0);
v_ns_1734_ = lean_ctor_get_uint8(v_o_1694_, sizeof(void*)*5);
v_tag_1735_ = lean_ctor_get(v_o_1694_, 1);
v_attrs_1736_ = lean_ctor_get(v_o_1694_, 3);
v_children_1737_ = lean_ctor_get(v_o_1694_, 4);
if (lean_obj_tag(v_n_1695_) == 1)
{
lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1800_; 
lean_inc(v_children_1737_);
lean_inc(v_attrs_1736_);
lean_inc_ref(v_tag_1735_);
lean_inc(v_id_1733_);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_o_1694_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; lean_object* v_unused_1802_; lean_object* v_unused_1803_; lean_object* v_unused_1804_; lean_object* v_unused_1805_; 
v_unused_1801_ = lean_ctor_get(v_o_1694_, 4);
lean_dec(v_unused_1801_);
v_unused_1802_ = lean_ctor_get(v_o_1694_, 3);
lean_dec(v_unused_1802_);
v_unused_1803_ = lean_ctor_get(v_o_1694_, 2);
lean_dec(v_unused_1803_);
v_unused_1804_ = lean_ctor_get(v_o_1694_, 1);
lean_dec(v_unused_1804_);
v_unused_1805_ = lean_ctor_get(v_o_1694_, 0);
lean_dec(v_unused_1805_);
v___x_1756_ = v_o_1694_;
v_isShared_1757_ = v_isSharedCheck_1800_;
goto v_resetjp_1755_;
}
else
{
lean_dec(v_o_1694_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1800_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
uint8_t v_ns_1758_; lean_object* v_tag_1759_; lean_object* v_key_1760_; lean_object* v_attrs_1761_; lean_object* v_children_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v_ns_1758_ = lean_ctor_get_uint8(v_n_1695_, sizeof(void*)*4);
v_tag_1759_ = lean_ctor_get(v_n_1695_, 0);
v_key_1760_ = lean_ctor_get(v_n_1695_, 1);
v_attrs_1761_ = lean_ctor_get(v_n_1695_, 2);
v_children_1762_ = lean_ctor_get(v_n_1695_, 3);
v___x_1763_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1734_);
v___x_1764_ = l_Lasm_UI_Ns_ctorIdx(v_ns_1758_);
v___x_1765_ = lean_nat_dec_eq(v___x_1763_, v___x_1764_);
lean_dec(v___x_1764_);
lean_dec(v___x_1763_);
if (v___x_1765_ == 0)
{
lean_del_object(v___x_1756_);
lean_dec(v_children_1737_);
lean_dec(v_attrs_1736_);
lean_dec_ref(v_tag_1735_);
goto v___jp_1738_;
}
else
{
uint8_t v___x_1766_; 
v___x_1766_ = lean_string_dec_eq(v_tag_1735_, v_tag_1759_);
lean_dec_ref(v_tag_1735_);
if (v___x_1766_ == 0)
{
lean_del_object(v___x_1756_);
lean_dec(v_children_1737_);
lean_dec(v_attrs_1736_);
goto v___jp_1738_;
}
else
{
lean_object* v___f_1767_; lean_object* v___f_1768_; lean_object* v_r_1769_; lean_object* v___y_1771_; lean_object* v_ops_1785_; lean_object* v_aops_1786_; lean_object* v___y_1788_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
lean_inc(v_children_1762_);
lean_inc_n(v_attrs_1761_, 2);
lean_inc(v_key_1760_);
lean_inc_ref(v_tag_1759_);
lean_dec_ref_known(v_n_1695_, 4);
v___f_1767_ = lean_alloc_closure((void*)(l_Lasm_UI_diffNode___redArg), 3, 0);
v___f_1768_ = ((lean_object*)(l_Lasm_UI_diffNode___redArg___closed__0));
v_r_1769_ = l_Lasm_UI_diffChildren___redArg(v___f_1768_, v___f_1767_, v_children_1737_, v_children_1762_, v_next_1696_);
v_ops_1785_ = lean_ctor_get(v_r_1769_, 0);
lean_inc_ref(v_ops_1785_);
v_aops_1786_ = l_Lasm_UI_diffAttrs___redArg(v_attrs_1736_, v_attrs_1761_);
v___x_1792_ = lean_array_get_size(v_ops_1785_);
v___x_1793_ = lean_unsigned_to_nat(0u);
v___x_1794_ = lean_nat_dec_eq(v___x_1792_, v___x_1793_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1795_ = lean_array_to_list(v_ops_1785_);
lean_inc(v_id_1733_);
v___x_1796_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1796_, 0, v_id_1733_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = lean_box(0);
v___x_1798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___y_1788_ = v___x_1798_;
goto v___jp_1787_;
}
else
{
lean_object* v___x_1799_; 
lean_dec_ref(v_ops_1785_);
v___x_1799_ = lean_box(0);
v___y_1788_ = v___x_1799_;
goto v___jp_1787_;
}
v___jp_1770_:
{
lean_object* v_live_1772_; lean_object* v_next_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1783_; 
v_live_1772_ = lean_ctor_get(v_r_1769_, 1);
v_next_1773_ = lean_ctor_get(v_r_1769_, 2);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_r_1769_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v_r_1769_, 0);
lean_dec(v_unused_1784_);
v___x_1775_ = v_r_1769_;
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_next_1773_);
lean_inc(v_live_1772_);
lean_dec(v_r_1769_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 4, v_live_1772_);
lean_ctor_set(v___x_1756_, 3, v_attrs_1761_);
lean_ctor_set(v___x_1756_, 2, v_key_1760_);
lean_ctor_set(v___x_1756_, 1, v_tag_1759_);
v___x_1778_ = v___x_1756_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_id_1733_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_tag_1759_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_key_1760_);
lean_ctor_set(v_reuseFailAlloc_1782_, 3, v_attrs_1761_);
lean_ctor_set(v_reuseFailAlloc_1782_, 4, v_live_1772_);
v___x_1778_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
lean_ctor_set_uint8(v___x_1778_, sizeof(void*)*5, v_ns_1758_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 1, v___x_1778_);
lean_ctor_set(v___x_1775_, 0, v___y_1771_);
v___x_1780_ = v___x_1775_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___y_1771_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1781_, 2, v_next_1773_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
v___jp_1787_:
{
uint8_t v___x_1789_; 
v___x_1789_ = l_List_isEmpty___redArg(v_aops_1786_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_inc(v_id_1733_);
v___x_1790_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1790_, 0, v_id_1733_);
lean_ctor_set(v___x_1790_, 1, v_aops_1786_);
v___x_1791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
lean_ctor_set(v___x_1791_, 1, v___y_1788_);
v___y_1771_ = v___x_1791_;
goto v___jp_1770_;
}
else
{
lean_dec(v_aops_1786_);
v___y_1771_ = v___y_1788_;
goto v___jp_1770_;
}
}
}
}
}
}
else
{
v_o_1709_ = v_o_1694_;
v_n_1710_ = v_n_1695_;
goto v___jp_1708_;
}
v___jp_1738_:
{
lean_object* v_c_1739_; lean_object* v_fst_1740_; lean_object* v_snd_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1754_; 
v_c_1739_ = l_Lasm_UI_create___redArg(v_n_1695_, v_next_1696_);
lean_dec_ref(v_n_1695_);
v_fst_1740_ = lean_ctor_get(v_c_1739_, 0);
v_snd_1741_ = lean_ctor_get(v_c_1739_, 1);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_c_1739_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1743_ = v_c_1739_;
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_snd_1741_);
lean_inc(v_fst_1740_);
lean_dec(v_c_1739_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; lean_object* v___x_1747_; 
lean_inc(v_id_1733_);
v___x_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_id_1733_);
lean_inc(v_fst_1740_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 1, v___x_1745_);
v___x_1747_ = v___x_1743_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_fst_1740_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1748_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1748_, 0, v_id_1733_);
v___x_1749_ = lean_box(0);
v___x_1750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1748_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1747_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
lean_ctor_set(v___x_1752_, 1, v_fst_1740_);
lean_ctor_set(v___x_1752_, 2, v_snd_1741_);
return v___x_1752_;
}
}
}
}
v___jp_1697_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_inc(v___y_1700_);
v___x_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___y_1700_);
lean_inc(v___y_1698_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___y_1698_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1703_, 0, v___y_1700_);
v___x_1704_ = lean_box(0);
v___x_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1702_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
v___x_1707_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
lean_ctor_set(v___x_1707_, 1, v___y_1698_);
lean_ctor_set(v___x_1707_, 2, v___y_1699_);
return v___x_1707_;
}
v___jp_1708_:
{
lean_object* v_c_1711_; lean_object* v_fst_1712_; lean_object* v_snd_1713_; lean_object* v_id_1714_; 
v_c_1711_ = l_Lasm_UI_create___redArg(v_n_1710_, v_next_1696_);
lean_dec_ref(v_n_1710_);
v_fst_1712_ = lean_ctor_get(v_c_1711_, 0);
lean_inc(v_fst_1712_);
v_snd_1713_ = lean_ctor_get(v_c_1711_, 1);
lean_inc(v_snd_1713_);
lean_dec_ref(v_c_1711_);
v_id_1714_ = lean_ctor_get(v_o_1709_, 0);
lean_inc(v_id_1714_);
lean_dec_ref(v_o_1709_);
v___y_1698_ = v_fst_1712_;
v___y_1699_ = v_snd_1713_;
v___y_1700_ = v_id_1714_;
goto v___jp_1697_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diffNode(lean_object* v_Msg_1806_, lean_object* v_o_1807_, lean_object* v_n_1808_, lean_object* v_next_1809_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_Lasm_UI_diffNode___redArg(v_o_1807_, v_n_1808_, v_next_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter___redArg(lean_object* v_x_1811_, lean_object* v_x_1812_, lean_object* v_h__1_1813_, lean_object* v_h__2_1814_, lean_object* v_h__3_1815_){
_start:
{
if (lean_obj_tag(v_x_1811_) == 0)
{
lean_dec(v_h__2_1814_);
if (lean_obj_tag(v_x_1812_) == 0)
{
lean_object* v_id_1816_; lean_object* v_s_1817_; lean_object* v_s_1818_; lean_object* v___x_1819_; 
lean_dec(v_h__3_1815_);
v_id_1816_ = lean_ctor_get(v_x_1811_, 0);
lean_inc(v_id_1816_);
v_s_1817_ = lean_ctor_get(v_x_1811_, 1);
lean_inc_ref(v_s_1817_);
lean_dec_ref_known(v_x_1811_, 2);
v_s_1818_ = lean_ctor_get(v_x_1812_, 0);
lean_inc_ref(v_s_1818_);
lean_dec_ref_known(v_x_1812_, 1);
v___x_1819_ = lean_apply_3(v_h__1_1813_, v_id_1816_, v_s_1817_, v_s_1818_);
return v___x_1819_;
}
else
{
lean_object* v___x_1820_; 
lean_dec(v_h__1_1813_);
v___x_1820_ = lean_apply_4(v_h__3_1815_, v_x_1811_, v_x_1812_, lean_box(0), lean_box(0));
return v___x_1820_;
}
}
else
{
lean_dec(v_h__1_1813_);
if (lean_obj_tag(v_x_1812_) == 1)
{
lean_object* v_id_1821_; uint8_t v_ns_1822_; lean_object* v_tag_1823_; lean_object* v_key_1824_; lean_object* v_attrs_1825_; lean_object* v_children_1826_; uint8_t v_ns_1827_; lean_object* v_tag_1828_; lean_object* v_key_1829_; lean_object* v_attrs_1830_; lean_object* v_children_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec(v_h__3_1815_);
v_id_1821_ = lean_ctor_get(v_x_1811_, 0);
lean_inc(v_id_1821_);
v_ns_1822_ = lean_ctor_get_uint8(v_x_1811_, sizeof(void*)*5);
v_tag_1823_ = lean_ctor_get(v_x_1811_, 1);
lean_inc_ref(v_tag_1823_);
v_key_1824_ = lean_ctor_get(v_x_1811_, 2);
lean_inc(v_key_1824_);
v_attrs_1825_ = lean_ctor_get(v_x_1811_, 3);
lean_inc(v_attrs_1825_);
v_children_1826_ = lean_ctor_get(v_x_1811_, 4);
lean_inc(v_children_1826_);
lean_dec_ref_known(v_x_1811_, 5);
v_ns_1827_ = lean_ctor_get_uint8(v_x_1812_, sizeof(void*)*4);
v_tag_1828_ = lean_ctor_get(v_x_1812_, 0);
lean_inc_ref(v_tag_1828_);
v_key_1829_ = lean_ctor_get(v_x_1812_, 1);
lean_inc(v_key_1829_);
v_attrs_1830_ = lean_ctor_get(v_x_1812_, 2);
lean_inc(v_attrs_1830_);
v_children_1831_ = lean_ctor_get(v_x_1812_, 3);
lean_inc(v_children_1831_);
lean_dec_ref_known(v_x_1812_, 4);
v___x_1832_ = lean_box(v_ns_1822_);
v___x_1833_ = lean_box(v_ns_1827_);
v___x_1834_ = lean_apply_11(v_h__2_1814_, v_id_1821_, v___x_1832_, v_tag_1823_, v_key_1824_, v_attrs_1825_, v_children_1826_, v___x_1833_, v_tag_1828_, v_key_1829_, v_attrs_1830_, v_children_1831_);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; 
lean_dec(v_h__2_1814_);
v___x_1835_ = lean_apply_4(v_h__3_1815_, v_x_1811_, v_x_1812_, lean_box(0), lean_box(0));
return v___x_1835_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Diff_0__Lasm_UI_Live_same_match__1_splitter(lean_object* v_Msg_1836_, lean_object* v_motive_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_, lean_object* v_h__1_1840_, lean_object* v_h__2_1841_, lean_object* v_h__3_1842_){
_start:
{
if (lean_obj_tag(v_x_1838_) == 0)
{
lean_dec(v_h__2_1841_);
if (lean_obj_tag(v_x_1839_) == 0)
{
lean_object* v_id_1843_; lean_object* v_s_1844_; lean_object* v_s_1845_; lean_object* v___x_1846_; 
lean_dec(v_h__3_1842_);
v_id_1843_ = lean_ctor_get(v_x_1838_, 0);
lean_inc(v_id_1843_);
v_s_1844_ = lean_ctor_get(v_x_1838_, 1);
lean_inc_ref(v_s_1844_);
lean_dec_ref_known(v_x_1838_, 2);
v_s_1845_ = lean_ctor_get(v_x_1839_, 0);
lean_inc_ref(v_s_1845_);
lean_dec_ref_known(v_x_1839_, 1);
v___x_1846_ = lean_apply_3(v_h__1_1840_, v_id_1843_, v_s_1844_, v_s_1845_);
return v___x_1846_;
}
else
{
lean_object* v___x_1847_; 
lean_dec(v_h__1_1840_);
v___x_1847_ = lean_apply_4(v_h__3_1842_, v_x_1838_, v_x_1839_, lean_box(0), lean_box(0));
return v___x_1847_;
}
}
else
{
lean_dec(v_h__1_1840_);
if (lean_obj_tag(v_x_1839_) == 1)
{
lean_object* v_id_1848_; uint8_t v_ns_1849_; lean_object* v_tag_1850_; lean_object* v_key_1851_; lean_object* v_attrs_1852_; lean_object* v_children_1853_; uint8_t v_ns_1854_; lean_object* v_tag_1855_; lean_object* v_key_1856_; lean_object* v_attrs_1857_; lean_object* v_children_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
lean_dec(v_h__3_1842_);
v_id_1848_ = lean_ctor_get(v_x_1838_, 0);
lean_inc(v_id_1848_);
v_ns_1849_ = lean_ctor_get_uint8(v_x_1838_, sizeof(void*)*5);
v_tag_1850_ = lean_ctor_get(v_x_1838_, 1);
lean_inc_ref(v_tag_1850_);
v_key_1851_ = lean_ctor_get(v_x_1838_, 2);
lean_inc(v_key_1851_);
v_attrs_1852_ = lean_ctor_get(v_x_1838_, 3);
lean_inc(v_attrs_1852_);
v_children_1853_ = lean_ctor_get(v_x_1838_, 4);
lean_inc(v_children_1853_);
lean_dec_ref_known(v_x_1838_, 5);
v_ns_1854_ = lean_ctor_get_uint8(v_x_1839_, sizeof(void*)*4);
v_tag_1855_ = lean_ctor_get(v_x_1839_, 0);
lean_inc_ref(v_tag_1855_);
v_key_1856_ = lean_ctor_get(v_x_1839_, 1);
lean_inc(v_key_1856_);
v_attrs_1857_ = lean_ctor_get(v_x_1839_, 2);
lean_inc(v_attrs_1857_);
v_children_1858_ = lean_ctor_get(v_x_1839_, 3);
lean_inc(v_children_1858_);
lean_dec_ref_known(v_x_1839_, 4);
v___x_1859_ = lean_box(v_ns_1849_);
v___x_1860_ = lean_box(v_ns_1854_);
v___x_1861_ = lean_apply_11(v_h__2_1841_, v_id_1848_, v___x_1859_, v_tag_1850_, v_key_1851_, v_attrs_1852_, v_children_1853_, v___x_1860_, v_tag_1855_, v_key_1856_, v_attrs_1857_, v_children_1858_);
return v___x_1861_;
}
else
{
lean_object* v___x_1862_; 
lean_dec(v_h__2_1841_);
v___x_1862_ = lean_apply_4(v_h__3_1842_, v_x_1838_, v_x_1839_, lean_box(0), lean_box(0));
return v___x_1862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0(lean_object* v___y_1863_){
_start:
{
lean_inc_ref(v___y_1863_);
return v___y_1863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg___lam__0___boxed(lean_object* v___y_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lasm_UI_diff___redArg___lam__0(v___y_1864_);
lean_dec_ref(v___y_1864_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff___redArg(lean_object* v_old_1868_, lean_object* v_new_1869_, lean_object* v_next_1870_){
_start:
{
lean_object* v___f_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___f_1871_ = ((lean_object*)(l_Lasm_UI_diff___redArg___closed__0));
v___x_1872_ = ((lean_object*)(l_Lasm_UI_diff___redArg___closed__1));
v___x_1873_ = l_Lasm_UI_diffChildren___redArg(v___f_1871_, v___x_1872_, v_old_1868_, v_new_1869_, v_next_1870_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_diff(lean_object* v_Msg_1874_, lean_object* v_old_1875_, lean_object* v_new_1876_, lean_object* v_next_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lasm_UI_diff___redArg(v_old_1875_, v_new_1876_, v_next_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps___redArg(lean_object* v_new_1879_, lean_object* v_next_1880_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_box(0);
v___x_1882_ = l_Lasm_UI_diff___redArg(v___x_1881_, v_new_1879_, v_next_1880_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_mountOps(lean_object* v_Msg_1883_, lean_object* v_new_1884_, lean_object* v_next_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lasm_UI_mountOps___redArg(v_new_1884_, v_next_1885_);
return v___x_1886_;
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
